#include <stdio.h>
#include <stdlib.h>
#include "type.h"

extern int syntax_err;
extern int semantic_err;
extern A_NODE *root;

void initialize();
void semantic_analysis();

void print_ast();
void print_sem_ast();

void main(int argc, char *argv[]) { //적당히 고쳐서 사용하세요

	initialize();

	printf("syntax analysis start!\n");
	yyparse();
	
	if (syntax_err)
		exit(1);
	
	printf("syntax analysis end (no error)\n");
	print_ast(root); // "print.c" function
	
	printf("\nstart semantic analysis\n");
	semantic_analysis(root);

	if (semantic_err)
		exit(1);

	printf("semantic analysis end (no error)\n");
	print_sem_ast(root);

	exit(0);
}
