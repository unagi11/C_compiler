	
int main(int argc, char *argv[])
{
	char a[10] = "int";

	checkIdentifier(a);
	return 0;
}


int checkIdentifier(char *s)
{
	char *table[] = {"int", "float", "char", "void"};

	printf("%d\n", sizeof(table)/ sizeof(table[0]));

	for (int i = 0; i < sizeof(table)/ sizeof(table[0]); i++) {
		if (strcmp(table[i], s) == 0)
			printf("%s\n", table[i]);
	}
}

//나는 주석입니다.
/* 주석 2 입니다. 
		ㄴㅁㄴ
*/