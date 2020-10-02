%{
     #include <stdio.h>
     int line_no = 1;
     int yyerror(char *s);
     int yylex();
%}

%start program

%token IDENTIFIER TYPE_IDENTIFIER CHARACTER_CONSTANT STRING_LITERAL FLOAT_CONSTANT INTEGER_CONSTANT ASSIGN MINUS PLUS SEMICOLON AMP
%token PERCENT SLASH STAR EXCL COMMA PERIOD COLON RR LR RB LB RP LP DOTDOTDOT BARBAR AMPAMP NEQ EQL GEQ LEQ GTR LSS ARROW MINUSMINUS
%token PLUSPLUS WHILE_SYM UNION_SYM TYPEDEF_SYM SWITCH_SYM STRUCT_SYM STATIC_SYM SIZEOF_SYM RETURN_SYM IF_SYM FOR_SYM ENUM_SYM ELSE_SYM
%token DO_SYM DEFAULT_SYM CONTINUE_SYM CASE_SYM BREAK_SYM AUTO_SYM

%%
program
     : translate_unit
     ;

translate_unit
     : external_declaration
     | translate_unit external_declaration
     ;

external_declaration
     : function_definition
     | declaration
     ;

function_definition
     : declaration_specifiers declarator compound_statement
     | declarator compound_statement
     ;

declaration
     : declaration_specifiers SEMICOLON
     | declaration_specifiers init_declarator_list SEMICOLON
     ;

declaration_specifiers
     : type_specifier
     | storage_class_specifier
     | type_specifier declaration_specifiers
     | storage_class_specifier declaration_specifiers
     ;

storage_class_specifier
     : AUTO_SYM
     | STATIC_SYM
     | TYPEDEF_SYM
     ;

init_declarator_list
     : init_declarator
     | init_declarator_list COMMA init_declarator
     ;

init_declarator
     : declarator
     | declarator ASSIGN initializer
     ;

type_specifier
     : struct_specifier
     | enum_specifier
     | TYPE_IDENTIFIER
     ;

struct_specifier
     : struct_or_union IDENTIFIER LR struct_declaration_list RR
     | struct_or_union LR struct_declaration_list RR
     | struct_or_union IDENTIFIER
     ;

struct_or_union
     : STRUCT_SYM
     | UNION_SYM
     ;

struct_declaration_list
     : struct_declaration
     | struct_declaration_list struct_declaration
     ;

struct_declaration
     : type_specifier struct_declarator_list SEMICOLON
     ;

struct_declarator_list
     : struct_declarator
     | struct_declarator_list COMMA struct_declarator
     ;

struct_declarator
     : declarator
     ;

enum_specifier
     : ENUM_SYM IDENTIFIER LR enumerator_list RR
     | ENUM_SYM LR enumerator_list RR
     | ENUM_SYM IDENTIFIER
     ;

enumerator_list
     : enumerator
     | enumerator_list COMMA enumerator
     ;

enumerator
     : IDENTIFIER
     | IDENTIFIER ASSIGN constant_expression SEMICOLON
     ;

declarator
     : pointer direct_declarator
     | direct_declarator
     ;

pointer
     : STAR
     | STAR pointer
     ;

direct_declarator
     : IDENTIFIER
     | LP declarator RP
     | direct_declarator LB constant_expression_opt RB
     | direct_declarator LP parameter_type_list_opt RP
     ;

constant_expression_opt
     : /* empty */
     | constant_expression
     ;

parameter_type_list_opt
     : /* empty */
     | parameter_type_list
     ;

parameter_type_list
     : parameter_list
     | parameter_list COMMA DOTDOTDOT
     ;

parameter_list
     : parameter_declaration
     | parameter_list COMMA parameter_declaration
     ;

parameter_declaration
     : declaration_specifiers declarator
     | declaration_specifiers abstract_declarator
     | declaration_specifiers
     ;

abstract_declarator
     : pointer
     | direct_abstract_declarator
     | pointer direct_abstract_declarator
     ;

direct_abstract_declarator
     : LP abstract_declarator RP
     | LB constant_expression_opt RB
     | LP parameter_type_list_opt RP
     | direct_abstract_declarator LB constant_expression_opt RB
     | direct_abstract_declarator LP parameter_type_list_opt RP
     ;

initializer
     : constant_expression
     | LR initializer_list RR
     ;

initializer_list
     : initializer
     | initializer_list COMMA initializer
     ;

statement
     : labeled_statement
     | compound_statement
     | expression_statement
     | selection_statement
     | iteration_statement
     | jump_statement
     ;

labeled_statement
     : CASE_SYM constant_expression COLON statement
     | DEFAULT_SYM COLON statement
     | IDENTIFIER COLON statement
     ;

compound_statement
     : LR declaration_list statement_list RR
     ;

declaration_list
     : /* empty */
     | declaration_list declaration
     ;

statement_list
     : /* empty */
     | statement_list statement
     ;

expression_statement
     : SEMICOLON
     | expression SEMICOLON
     ;

selection_statement
     : IF_SYM LP expression RP statement
     | IF_SYM LP expression RP statement ELSE_SYM statement
     | SWITCH_SYM LP expression RP statement
     ;

iteration_statement
     : WHILE_SYM LP expression RP statement
     | DO_SYM statement WHILE_SYM LP expression RP SEMICOLON
     | FOR_SYM LP expression_opt SEMICOLON expression_opt SEMICOLON expression_opt RP statement
     ;

expression_opt
     : /* empty */
     | expression
     ;

jump_statement
     : RETURN_SYM expression_opt SEMICOLON
     | CONTINUE_SYM SEMICOLON
     | BREAK_SYM SEMICOLON
     ;

primary_expression
     : IDENTIFIER
     | INTEGER_CONSTANT
     | FLOAT_CONSTANT
     | CHARACTER_CONSTANT
     | STRING_LITERAL
     | LP expression RP
     ;

postfix_expression
     : primary_expression
     | postfix_expression LB expression RB
     | postfix_expression LP arg_expression_list_opt RP
     | postfix_expression PERIOD IDENTIFIER
     | postfix_expression ARROW IDENTIFIER
     | postfix_expression PLUSPLUS
     | postfix_expression MINUSMINUS
     ;

arg_expression_list_opt
     : /* empty */
     | arg_expression_list
     ;

arg_expression_list
     : assignment_expression
     | arg_expression_list COMMA assignment_expression
     ;

unary_expression
     : postfix_expression
     | PLUSPLUS unary_expression
     | MINUSMINUS unary_expression
     | AMP cast_expression
     | STAR cast_expression
     | EXCL cast_expression
     | MINUS cast_expression
     | PLUS cast_expression
     | SIZEOF_SYM unary_expression
     | SIZEOF_SYM LP type_name RP
     ;

cast_expression
     : unary_expression
     | LP type_name RP cast_expression
     ;

type_name
     : declaration_specifiers
     | declaration_specifiers abstract_declarator
     ;

multiplicative_expression
     : cast_expression
     | multiplicative_expression STAR cast_expression
     | multiplicative_expression SLASH cast_expression
     | multiplicative_expression PERCENT cast_expression
     ;

additive_expression
     : multiplicative_expression
     | additive_expression PLUS multiplicative_expression
     | additive_expression MINUS multiplicative_expression
     ;

relational_expression
     : additive_expression
     | relational_expression LSS additive_expression
     | relational_expression GTR additive_expression
     | relational_expression LEQ additive_expression
     | relational_expression GEQ additive_expression
     ;

equality_expression
     : relational_expression
     | equality_expression EQL relational_expression
     | equality_expression NEQ relational_expression
     ;

logical_and_expression
     : equality_expression
     | logical_and_expression AMPAMP equality_expression
     ;

logical_or_expression
     : logical_and_expression
     | logical_or_expression BARBAR logical_and_expression
     ;

constant_expression
     : expression
     ;

expression
     : assignment_expression
     | expression COMMA assignment_expression
     ;

assignment_expression
     : logical_or_expression
     | unary_expression ASSIGN assignment_expression
     ;
%%
extern char *yytext;

int yyerror(char *s) 
{
     printf("line %d: %s near %s \n", line_no, s, yytext);
}

int main()
{
     yyparse();
     printf("프로그램 종료\n");
}

int yywrap()
{
     return(1);
}