a.out : y.tab.c lex.yy.c
	gcc y.tab.c lex.yy.c print.c main.c semantic.c print_sem.c gen.c -m32 -w -g

y.tab.c : yacc.y
	yacc -d yacc.y

lex.yy.c : lex.l
	lex lex.l
