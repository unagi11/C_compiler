a.out : y.tab.c lex.yy.c
	gcc y.tab.c lex.yy.c print.c main.c -w

y.tab.c : yacc.y
	yacc -d yacc.y

lex.yy.c : lex.l
	lex lex.l