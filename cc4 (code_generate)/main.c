#include <stdio.h>
#include <stdlib.h>
#include "type.h"

FILE *fout;

extern int syntax_err;
extern int semantic_err;
extern int gen_err;
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
//	print_ast(root); // "print.c" function

	printf("\nstart semantic analysis\n");
	semantic_analysis(root);

	if (semantic_err)
		exit(1);

	printf("semantic analysis end (no error)\n");
//	print_sem_ast(root);

	if ((fout=fopen("a.asm","w+")) == NULL) {
		printf("can not open output file: a.asm\n"); 
		exit(1);
	}

	printf("\nstart code generation(Make a.asm)\n");
	code_generation(root);

	if (gen_err)
		exit(1);

	printf("code generation end (no error)\n");

	exit(0);
}
