#include <stdio.h>
#include <stdlib.h>
#include "type.h"
extern int syntax_err;
extern A_NODE *root;
void initialize();
void print_ast();

void main(int argc, char *argv[]) { //적당히 고쳐서 사용하세요

/*	if ((yyin = fopen(argv[argc-1],"r"))==NULL){
		printf("can not open input file: %s\n",argv[argc-1]);
		exit(1);
	} */

	initialize();

	printf("syntax analysis start!\n");
	yyparse();
	
	if (!syntax_err) {
		printf("syntax analysis end (no error)\n");
		print_ast(root); // "print.c" function
	}
}