%{
#include <ctype.h>
#include "tokens.hpp"
#include <iostream>

extern int yylex();
extern int yyparse();
extern FILE *yyin;
void yyerror(const char *s);
extern int linenum;
%}
%token AND_TOKEN
%token OR_TOKEN
%token EQ_TOKEN
%token NEQ_TOKEN
%token LEQ_TOKEN
%token GEQ_TOKEN
%token LESS_TOKEN
%token GREATER_TOKEN
%token ADD_TOKEN
%token SUB_TOKEN
%token MULT_TOKEN
%token DIV_TOKEN
%token REMAIN_TOKEN
%token TILDE_TOKEN
%token LPAREN_TOKEN
%token RPAREN_TOKEN

%union
{
	int val;
	char* id;
}

%type <val> expr
%%

lvalue 		: '' {}
		;
expr		: lvalue { }
		| expr OR_TOKEN expr 		{ $$ = $1 || $3 }
		| expr AND_TOKEN expr 		{ $$ = $1 && $3 }
		| expr EQ_TOKEN expr 		{ $$ = $1 == $3 }
		| expr NEQ_TOKEN expr		{ $$ = $1 != $3 }
		| expr LEQ_TOKEN expr		{ $$ = $1 <= $3 }
		| expr GEQ_TOKEN expr		{ $$ = $1 >= $3 }
		| expr LESS_TOKEN expr		{ $$ = $1 < $3 }
		| expr GREATER_TOKEN expr	{$$ = $1 > $3 }
		| expr ADD_TOKEN expr		{ $$ = $1 + $3 }
		| expr SUB_TOKEN expr		{ $$ = $1 - $3 }
		| expr MULT_TOKEN expr		{ $$ = $1 * $3 }
		| expr DIV_TOKEN expr 		{ $$ = $1 / $3 }
		| expr REMAIN_TOKEN expr	{ $$ = $1 % $3 }
		| TILDE_TOKEN expr		{ $$ = ~ $2 }
		| SUB_TOKEN expr		{ $$ = 0 - $2 }
		| LPAREN_TOKEN expr RPAREN_TOKEN{ $$ = $2}
		| ID_TOKEN LPAREN_TOKEN expr RPAREN_TOKEN
		;
%%

int main(int, char**){
	FILE *myfile = fopen("nested_for.cpsl", 'r');
	if(!myfile){
		std::cout << "Can't open file" << std::endl;
		return -1
	}

	yyin = myfile;

	yyparse();
}

void yyerror(const char* s){
	std::cout << "Parsing error on line " << linenum << ".\n Message: " << s << endl;
	exit(-1);
}


