typedef struct s_node A_NODE;



//-------------------------------------------------------------------------------------------------------------------------------------------------------------심볼 테이블

typedef enum {ID_NULL, ID_VAR, ID_FUNC, ID_PARM, ID_FIELD, ID_TYPE, ID_ENUM, ID_STRUCT, ID_ENUM_LITERAL} ID_KIND;

typedef enum {S_NULL, S_AUTO, S_TYPEDEF, S_STATIC} S_KIND;

typedef struct s_id {	// 심볼 테이블!

	char *name; 		// 명칭의 스트링을 저장한다.

	ID_KIND kind; 		// 명칭의 종류에 따라 신택스 분석 괒어에서 다음과 같은 값을 저장한다.

	struct s_id *link; 	// 일반 선언문이나 구조체 필드 선언문 등에서 같은 종류의 명칭들을 연결하는데 사용된다.

	S_KIND specifier; 	// 명칭에 대한 선언문에서 기억장소 명시자(storage_class_specifier)가 선언된 경우 audo, static, typedef를 저장한다.

	int level;			// 명칭이 나타난 선언문의 레벨 값을 저장한다.

	int address;		// 변수 혹은 매개변수 명칭의 경우 주소 값을 보관한다.
						// 신택스 분석과정을 마치고 신멘틱 분석과정에서 프로그램 실행시 할당되는 메모리에서 변수의 상대 주소값을 계산해 저장한다.
						// 구조체의 필드 명칭인 경우는 필드의 오프셋, 즉 실행시 할당되는 구조체의 시작 주소에서 위치 값을 계산해 저장한다.

	int value;			// 명칭이 나열형 타입 안에서 정의된 명칭 상수인 경우, 시멘틱 분석 과정에서 그 값을 계산하여 저장한다.

	A_NODE *init;		// 명칭이 변수명칭으로 초기화 수식이 있는 경우와, 나열형 선언문 안의 명칭 상수로서 초기화 수식이 있는 경우에 그러한 수식에 해당하는
						// 신택스 트리를 가리킨다.
						// 전역변수 명칭이나 명칭상수의 초기화 수식은 다음에 시멘틱 분석 과정에서 그 수식의 값을 계산하여 신택스 트리를 대신하여 저장된다.

	int line;			// 원시 프로그램에서 명칭이 선언된 줄 번호를 저장하여 나중에 에러 메시지를 출력하는데 사용된다.

	struct s_id *prev;	//신택스 분석 중 프로그램의 각 위치에서 사용 가능한 심볼 명칭들을 차레로(최근 나타난 순서로)연결해 놓은 체인이다. 신택스 분석 과정에서만 사용한다.

	A_TYPE *type;		//명칭의 타입 정보가 저장된 주소, 즉 타입 테이블을 가르킨다.

} A_ID;

//-------------------------------------------------------------------------------------------------------------------------------------------------------------타입 테이블

typedef enum { T_NULL, T_ENUM, T_ARRAY, T_STRUCT, T_UNION, T_FUNC, T_POINTER, T_VOID } T_KIND;

typedef struct s_type {		// 타입 테이블

	T_KIND 	kind;			// 타입의 종류에 따라 다음과 같은 값을 저장한다.

	int 	size;			// 타입의 크기를 저장하는데, 신택스 분석과정을 마치고 시멘틱 분석 과정에서 계산하여 저장한다.

	int 	local_var_size; // 함수형 타입의 경우 함수 안에서 선언한 파라미터 및 지역 변수의 크기를 계산하여 저장한다.

	struct	s_id	*field; // 타입이 구조체인 경우, 구조체를 이루는 필드 명칭 목록이 저장된 심볼 테이블을 가리킨다.
							// 심볼 테이블에서 필드 명칭들은 <link> 필드에 차례대로 연결되도록 한다.

	struct	s_node	*expr;	// 타입이 배열형인 경우 배열의 크기를 저장하는데, 그 크기가 수식으로 표현되어 있으므로 그 수식을
							// 나타내는 신택스 트리의 노드를 가리킨다. 시멘틱 분석 과정에서 그 수식의 값을 계산하여 트리의 노드 대신에 값을 저장한다.
							// 함수형 타입인 경우는 함수의 몸체를 가리키는 신택스 트리의 노드를 가리킨다.

	int		line;			// 원시 프로그램에서 타입이 선언된 줄 번호를 저장하여 나중에 에러 메시지를 출력하는데 사용한다.

	int		check;			// 시멘틱 분석 과정에서 타입을 분석 하였는지를 표시하기 위해 입시로 사용한다.
	
	struct	s_type	*element_type; // 타입이 포인터일 경우에 내용물의 타입을 가리킨다.

} A_TYPE;

//-------------------------------------------------------------------------------------------------------------------------------------------------------------리터럴 테이블

typedef union {int i; float f; char *s;} LIT_VALUE;

typedef struct lit {
	LIT_VALUE value;
	A_TYPE *type;
	int addr;
} A_LITERAL;

//-------------------------------------------------------------------------------------------------------------------------------------------------------------명시자 테이블

typedef enum {S_NULL, S_AUTO, S_STATIC, S_TYPEDEF/*, S_EXTERN, S_REGISTER*/} S_KIND;

typedef struct {
	A_TYPE *type;
	S_KIND stor;
	int line;
} A_SPECIFIER;

//-------------------------------------------------------------------------------------------------------------------------------------------------------------신텍스 트리

typedef struct s_node {
	NODE_NAME name;			// 신택스 트리의 각 노드의 이름을 가진다.

	int line;				// 각 노드에 해당하는 원시 프로그램의 줄 번호를 저장하여 에러 메시지를 출력하는데 사용한다.
	
	int value;				// 시멘틱 분석과정에서, 노드의 종류가 명령문인 경우 그 명령문 안에 나타나는 지역 변수의
							// 크기를 계산하여 저장하고, 노드의 종류가 수식인 경우 그 수식의 lvalue여부를 판단하여 저장하도록 한다.
	
	struct s_type *type;	// 시멘틱 분석과정에서, 노드의 종류가 수식인 경우에 수식의 타입 정보를 알아야하는데 이를 계산하여 가리킨다.
	
	struct s_node *llink;	// 삼진 트리의 자식 노드들을 가리킨다.
	struct s_node *clink;
	struct s_node *rlink;
} A_NODE;

