static void sig_int(int);
char buffer[MAXLINE]; //버퍼

char _pps[6] = "./pps";
char _ttop[7] = "./ttop";

char *pipeCmds[MAXWORD];
int curcmdnum = 0;
int pipenum = 0;

int status; //waitpid할때 상태리턴

void mypipe(char*, char*);
void getcmd();
void showcmd();
void mycmd(char**);
void fopen();

void err_sys(char* x) 
{ 
    perror(x); 
    exit(1); 
}

void sig_int(int signo)
{
    printf("\nSSU Shell: SSU Shell을 종료합니다. \n");
    exit(0);
}

int main(int argc, char *argv[])
{
    if (signal(SIGINT, sig_int) == SIG_ERR)
        err_sys("SSUShell: signal error");

	if(argc == 2) {
		int* fp = fopen(argv[1],"r");
		if(fp < 0) {
			printf("SSUShell: File doesn't exists.");
			return -1;
		}

        int linecount = 0;
        char lines[30][MAXLINE];

        while (fgets(buffer, MAXLINE, fp) != NULL) {
            if (buffer[strlen(buffer) -1] == '\n') // 버퍼 마지막이 개행이라면 
                buffer[strlen(buffer) -1] = '\0'; // 엔터를 NULL로 대체
            if (buffer[strlen(buffer) -1] == '\r') // 버퍼 마지막이 개행이라면
                buffer[strlen(buffer) -1] = '\0'; // 엔터를 NULL로 대체

            strcpy(lines[linecount], buffer);
            linecount++;
            if (linecount > 30) {
                err_sys("SSUShell: 일괄처리는 30줄까지만 가능합니다.");                
            }
        }
        fclose(fp);

        for (int i = 0; i < linecount; ++i)
        {
            printf("$ %s\n", lines[i]);
            getcmd(lines[i]);
        }
        sig_int(1);
	}

    while (1)
    {
        printf("$ ");

        if(fgets(buffer, MAXLINE, stdin) != NULL)
        {
            if (buffer[strlen(buffer) -1] == '\n') // 버퍼 마지막이 개행이라면 
                buffer[strlen(buffer) -1] = '\0'; // 엔터를 NULL로 대체
            if (buffer[strlen(buffer) -1] == '\r') // 버퍼 마지막이 개행이라면
                buffer[strlen(buffer) -1] = '\0'; // 엔터를 NULL로 대체
            getcmd(buffer);
        } else {
         	err_sys("SSUShell: fgets error");
        }
    }

    return 0;
}

void showcmd()
{
    for (int i = 0; i < curcmdnum; i++)
        if (curcmd[i] != NULL)           // 문자열 포인터 배열의 요소가 NULL이 아닐 때만
            printf("%s\n", curcmd[i]);   // 문자열 포인터 배열에 인덱스로 접근하여 각 문자열 출력
}

void setcmd(char *rawcmd)
{
    for (int i = 0; i < MAXWORD; i++)
        curcmd[i] = NULL; //curcmd 초기화
    
    curcmdnum = 0; //curcmdnum 초기화

    char *ptr = strtok(rawcmd, " ");   // 공백 문자열을 기준으로 문자열을 자름

    while (ptr != NULL && curcmdnum < MAXWORD)            // 자른 문자열이 나오지 않을 때까지 반복
    {
    	if (strcmp(ptr, "pps") == 0)
    		curcmd[curcmdnum] = _pps;
	    else if (strcmp(ptr, "ttop") == 0)
	    	curcmd[curcmdnum] = _ttop;
	    else
            curcmd[curcmdnum] = ptr;             // 문자열을 자른 뒤 메모리 주소를 문자열 포인터 배열에 저장

        curcmdnum++;                       // 인덱스 증가
        ptr = strtok(NULL, " ");   // 다음 문자열을 잘라서 포인터를 반환
    }
}

void getcmd(char *buf)
{
    char *ptr = buf; //자른 문자열
    char *context = NULL; //자르고 남은 문자열
    ptr = strtok_r(buf, "|", &context);

    if (strlen(context) != 0)  // | 로 나누고 context도 실행시켜야함
    {
        mypipe(ptr, context);
    }
    else
    {
        setcmd(buf);
        mycmd(curcmd);
    }
    ptr = context;
}

void mypipe(char* first, char* next) 
{
    for (int i = 0; i < MAXWORD; i++)
        pipeCmds[i] = NULL; //pipeCmds 초기화

    pipenum = 0;

    char* ptr = first; //자른 문자열
    char* context = next; //자르고 남은 문자열

    while (ptr != NULL)  // | 로 나누고 context도 실행시켜야함
    {
        pipeCmds[pipenum] = ptr;
        pipenum++;

        ptr = strtok_r(NULL, "|", &context);
    }

    int fds[pipenum-1][2];
    int pids[pipenum];

    for (int i = 0; i < pipenum-1; i++)
        if(pipe(fds[i]) < 0)
            err_sys("SSUShell: pipe error");

//-----------------------------------------------------------------strPIPE

    if ((pids[0] = fork()) < 0) // 첫번째 프로그램 
        err_sys("SSUShell: fork error");
    else if (pids[0] == 0) {
        if (dup2(fds[0][1], STDOUT_FILENO) == -1)
            err_sys("SSUShell: failed dup2");
        for (int i = 0; i < pipenum-1; i++) 
        {
            close(fds[i][0]); //읽기 전 번호를 닫는다.
            close(fds[i][1]); //읽기 전 번호를 닫는다.
        }

        setcmd(pipeCmds[0]);
    	if (execvp(curcmd[0], curcmd) == -1)
	        err_sys("SSUShell: couldn't execute ");
    }        

//-----------------------------------------------------------------midPIPE

    for (int i = 0; i < pipenum-2; i++)
    {
        if ((pids[i] = fork()) < 0)
	        err_sys("SSUShell: fork error");
        else if (pids[i] == 0) {
            if (dup2(fds[i][0], STDIN_FILENO) == -1 || dup2(fds[i+1][1], STDOUT_FILENO) == -1)
	            err_sys("SSUShell: failed dup2");
            for (int i = 0; i < pipenum-1; i++) 
            {
                close(fds[i][0]); //읽기 전 번호를 닫는다.
                close(fds[i][1]); //읽기 전 번호를 닫는다.
            }

            setcmd(pipeCmds[i+1]);
	    	if (execvp(curcmd[0], curcmd) == -1)
		        err_sys("SSUShell: couldn't execute ");
        }
    }

//-----------------------------------------------------------------endPIPE

    if ((pids[pipenum-1] = fork()) < 0) // 마지막 프로그램 
        err_sys("fork error");
    else if (pids[pipenum-1] == 0) {
        if (dup2(fds[pipenum-2][0], STDIN_FILENO) == -1)
            err_sys("SSUShell: failed dup2");
        for (int i = 0; i < pipenum-1; i++) 
        {
            close(fds[i][0]); //읽기 전 번호를 닫는다.
            close(fds[i][1]); //읽기 전 번호를 닫는다.
        }

        setcmd(pipeCmds[pipenum-1]);
    	if (execvp(curcmd[0], curcmd) == -1)
	        err_sys("SSUShell: couldn't execute ");
    }    

    for (int i = 0; i < pipenum-1; i++) 
    {
        close(fds[i][0]);
        close(fds[i][1]);
    }
    waitpid(pids[pipenum-1], &status, 0);
}

void mycmd(char **cmd)
{
    pid_t pid;

    if ((pid = fork()) < 0)
        err_sys("SSUShell: fork error");
    else if (pid == 0) { // 자식프로세서 실행
    	if (execvp(cmd[0], cmd) == -1)
	        err_sys("SSUShell: couldn't execute ");
    }

    waitpid(pid, &status, 0);
}