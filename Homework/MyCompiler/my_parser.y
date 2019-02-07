%{
#include <ctype.h>
#include <iostream>
#include "symbol_table.hpp"
#include <map>

extern int yylex();
extern int yyparse();
extern FILE *yyin;
void yyerror(const char *s);
extern int linenumber;
%}

%token ARRAY_TOKEN
%token BEGIN_TOKEN
%token CHR_TOKEN
%token CONST_TOKEN
%token DO_TOKEN
%token DOWNTO_TOKEN
%token ELSE_TOKEN
%token ELSEIF_TOKEN
%token END_TOKEN
%token FOR_TOKEN
%token FORWARD_TOKEN
%token FUNCTION_TOKEN
%token IF_TOKEN
%token OF_TOKEN
%token ORD_TOKEN
%token PRED_TOKEN
%token PROCEDURE_TOKEN
%token READ_TOKEN
%token RECORD_TOKEN
%token REF_TOKEN
%token REPEAT_TOKEN
%token RETURN_TOKEN
%token STOP_TOKEN
%token SUCC_TOKEN
%token THEN_TOKEN
%token TO_TOKEN
%token TYPE_TOKEN
%token UNTIL_TOKEN
%token VAR_TOKEN
%token WHILE_TOKEN
%token WRITE_TOKEN
%token ID_TOKEN
%token ADD_TOKEN
%token SUB_TOKEN
%token MULT_TOKEN
%token DIV_TOKEN
%token AND_TOKEN
%token OR_TOKEN
%token TILDE_TOKEN
%token EQ_TOKEN
%token NEQ_TOKEN
%token LESS_TOKEN
%token GREATER_TOKEN
%token LEQ_TOKEN
%token GEQ_TOKEN
%token PER_TOKEN
%token COMMA_TOKEN 
%token COLON_TOKEN
%token SEMICOLON_TOKEN
%token LPAREN_TOKEN
%token RPAREN_TOKEN
%token LBRAC_TOKEN
%token RBRAC_TOKEN
%token ASSIGN_TOKEN
%token REMAIN_TOKEN
%token NUM_TOKEN
%token CHAR_TOKEN
%token STRING_TOKEN
%token COMMENT_TOKEN

%union
{
	int val;
	char* id;
}

%type <val> lvalue
%type <val> expr
%type <val> procedure_call
%type <val> write_statement
%type <val> read_statement
%type <val> return_statement
%type <id> ID_TOKEN
%%

lvalue 		: ID_TOKEN 			{ $$ = symbol_table.lookup($1); delete($1); }
		//| ID_TOKEN PER_TOKEN ID_TOKEN 	{ $$ = symbol_table.lookup($1).symbol_table.lookup($3);
		//					delete($1); 
		//					delete($3); }
		//| ID_TOKEN RBRAC_TOKEN expr LBRAC_TOKEN { $$ = symbol_table.lookup($1)[$3];
		//					delete($1);}
		;
expr		: lvalue 				{ $$ = $1; }
		| expr OR_TOKEN expr 			{ $$ = $1 || $3; }
		| expr AND_TOKEN expr 			{ $$ = $1 && $3; }
		| expr EQ_TOKEN expr 			{ $$ = $1 == $3; }
		| expr NEQ_TOKEN expr			{ $$ = $1 != $3; }
		| expr LEQ_TOKEN expr			{ $$ = $1 <= $3; }
		| expr GEQ_TOKEN expr			{ $$ = $1 >= $3; }
		| expr LESS_TOKEN expr			{ $$ = $1 < $3; }
		| expr GREATER_TOKEN expr		{ $$ = $1 > $3; }
		| expr ADD_TOKEN expr			{ $$ = $1 + $3; }
		| expr SUB_TOKEN expr			{ $$ = $1 - $3; }
		| expr MULT_TOKEN expr			{ $$ = $1 * $3; }
		| expr DIV_TOKEN expr 			{ $$ = $1 / $3; }
		| expr REMAIN_TOKEN expr		{ $$ = $1 % $3; }
		| TILDE_TOKEN expr			{ $$ = ~ $2; }
		| SUB_TOKEN expr			{ $$ = 0 - $2; }
		| LPAREN_TOKEN expr RPAREN_TOKEN	{ $$ = $2; }
		| ID_TOKEN LPAREN_TOKEN expr RPAREN_TOKEN { $$ = $1($3)}
		| CHR_TOKEN LPAREN_TOKEN expr RPAREN_TOKEN { $$ = $3 }
		| ORD_TOKEN LPAREN_TOKEN expr RPAREN_TOKEN { $$ = $3 }
		| PRED_TOKEN LPAREN_TOKEN expr RPAREN_TOKEN { $$ = $3++}
		| SUCC_TOKEN LPAREN_TOKEN expr RPAREN_TOKEN {$$ = $3--}
		;
null_statement 	: %empty;
procedure_call 	: ID_TOKEN LPAREN_TOKEN expr RPAREN_TOKEN { $$ = $1($3) };
write_statement	: WRITE_TOKEN LPAREN_TOKEN expr RPAREN_TOKEN { $$ = std::cout << $3; };
read_statement	: READ_TOKEN LPAREN_TOKEN expr RPAREN_TOKEN { $$ = std::cin >> $3; };
return_statement: RETURN_TOKEN SEMICOLON_TOKEN 		{ $$ = return;}
		| RETURN_TOKEN expr SEMICOLON_TOKEN 	{ $$ = return $2;}
		;
stop_statement	: STOP_TOKEN				{ $$ = return 0;}
for_statement	: FOR_TOKEN ID_TOKEN ASSIGN_TOKEN expr TO_TOKEN expr DO_TOKEN statement_seq END_TOKEN
							{  }
		

%%

/*
int main(int, char**){
	FILE *myfile = fopen("nested_for.cpsl", 'r');
	if(!myfile){
		std::cout << "Can't open file" << std::endl;
		return -1
	}

	yyin = myfile;

	yyparse();
}
*/

void yyerror(const char* s){
	std::cout << "Parsing error on line " << linenumber << ".\n Message: " << s << std::endl;
	exit(-1);
}


