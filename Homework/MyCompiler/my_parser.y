%{
#include <ctype.h>
#include <iostream>
#include <map>

extern int yylex();
extern int yyparse();
extern FILE *yyin;
void yyerror(const char *s);
extern int linenumber;
%}
%token END
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
%token PROC_TOKEN
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

%union
{
	int val;
	char* id;
}

/*
%type <val> lvalue
%type <val> expr
%type <val> procedure_call
%type <val> write_statement
%type <val> read_statement
%type <val> return_statement
%type <id> ID_TOKEN
*/

%%



program		: const_decl type_decl var_decl// func_proc_list block PER_TOKEN	{  }	
		//| VAR_TOKEN ID_TOKEN COMMA_TOKEN ID_TOKEN			{  }		
		;


lvalue 		: ID_TOKEN 			{ }//$$ = symbol_table.lookup($1); delete($1); }
		| ID_TOKEN PER_TOKEN ID_TOKEN 	{// $$ = symbol_table.lookup($1).symbol_table.lookup($3);
						 //	delete($1); 
						 //	delete($3); 
						}
		| ID_TOKEN RBRAC_TOKEN expr LBRAC_TOKEN { 
								//$$ = symbol_table.lookup($1)[$3];
								//delete($1);
							}
		;

// Expressions
expr		: lvalue 				{ }//$$ = $1; }
		| expr OR_TOKEN expr 			{ }//$$ = $1 || $3; }
		| expr AND_TOKEN expr 			{ }//$$ = $1 && $3; }
		| expr EQ_TOKEN expr 			{ }//$$ = $1 == $3; }
		| expr NEQ_TOKEN expr			{ }//$$ = $1 != $3; }
		| expr LEQ_TOKEN expr			{ }//$$ = $1 <= $3; }
		| expr GEQ_TOKEN expr			{ }//$$ = $1 >= $3; }
		| expr LESS_TOKEN expr			{ }//$$ = $1 < $3; }
		| expr GREATER_TOKEN expr		{ }//$$ = $1 > $3; }
		| expr ADD_TOKEN expr			{ }//$$ = $1 + $3; }
		| expr SUB_TOKEN expr			{ }//$$ = $1 - $3; }
		| expr MULT_TOKEN expr			{ }//$$ = $1 * $3; }
		| expr DIV_TOKEN expr 			{ }//$$ = $1 / $3; }
		| expr REMAIN_TOKEN expr		{ }//$$ = $1 % $3; }
		| TILDE_TOKEN expr			{ }//$$ = ~ $2; }
		| SUB_TOKEN expr			{ }//$$ = 0 - $2; }
		| LPAREN_TOKEN expr RPAREN_TOKEN	{ }//$$ = $2; }
		| ID_TOKEN LPAREN_TOKEN args_list RPAREN_TOKEN { }// $$ = $1($3)}
		| CHR_TOKEN LPAREN_TOKEN expr RPAREN_TOKEN { }// $$ = $3 }
		| ORD_TOKEN LPAREN_TOKEN expr RPAREN_TOKEN { }//$$ = $3 }
		| PRED_TOKEN LPAREN_TOKEN expr RPAREN_TOKEN { }//$$ = $3++}
		| SUCC_TOKEN LPAREN_TOKEN expr RPAREN_TOKEN { }//$$ = $3--}
		| NUM_TOKEN				{  }
		| CHAR_TOKEN				{  }
		| STRING_TOKEN				{  }
		;
args_list	: expr comma_expr			{};
comma_expr	: /* empty */				{}
		| COMMA_TOKEN expr			{}
		;

// Statements
null_statement 	: /* empty */;
procedure_call 	: ID_TOKEN LPAREN_TOKEN args_list RPAREN_TOKEN { }//$$ = $1($3) };


write_statement	: WRITE_TOKEN LPAREN_TOKEN args_list RPAREN_TOKEN { }//$$ = std::cout << $3; };
read_statement	: READ_TOKEN LPAREN_TOKEN args_list RPAREN_TOKEN { }//$$ = std::cin >> $3; };
return_statement: RETURN_TOKEN SEMICOLON_TOKEN 		{ }//$$ = return;}
		| RETURN_TOKEN expr SEMICOLON_TOKEN 	{ }//$$ = return $2;}
		;
stop_statement	: STOP_TOKEN				{ }//$$ = return 0;}
for_statement	: FOR_TOKEN ID_TOKEN ASSIGN_TOKEN expr TO_TOKEN expr DO_TOKEN statement_seq END_TOKEN
							{  }
		| FOR_TOKEN ID_TOKEN ASSIGN_TOKEN expr DOWNTO_TOKEN expr DO_TOKEN statement_seq END_TOKEN
							{  }
		;
repeat_statement: REPEAT_TOKEN statement_seq UNTIL_TOKEN expr
							{  };
while_statement	: WHILE_TOKEN expr DO_TOKEN statement_seq END_TOKEN
							{  };
if_statement	: IF_TOKEN expr THEN_TOKEN statement_seq elseif_list else_statement END_TOKEN
							{  };
elseif_list	: /* empty */
		| ELSEIF_TOKEN expr THEN_TOKEN statement_seq elseif_list
							{  }
		;
else_statement	: /* empty */
		| ELSE_TOKEN statement_seq		{  };


assign		: lvalue ASSIGN_TOKEN expr		{  };

statement	: assign				{  }
		| if_statement				{  }
		| while_statement			{  }
		| repeat_statement			{  }
		| for_statement				{  }
		| stop_statement			{  }
		| return_statement			{  }
		| read_statement			{  }
		| write_statement			{  }
		| procedure_call			{  }
		| null_statement			{  }
		;
		
statement_seq	: statement SEMICOLON_TOKEN statement_seq {  };


// Constant declaration
const_decl	: CONST_TOKEN eq_item eq_list		{  }
		| /* empty */				{  }
		;
eq_item		: ID_TOKEN EQ_TOKEN expr SEMICOLON_TOKEN{  }
		;
eq_list		: eq_item eq_list			{  }
		| /* empty */				{  }
		;

// Type Declarations
type_decl	: TYPE_TOKEN type_item type_list	{  }
		| /* empty */				{  }
		;
type_item	: ID_TOKEN EQ_TOKEN type SEMICOLON_TOKEN{  }
		;
type_list	: type_item type_list			{  }
		| /* empty */				{  }
		;
type		: simple_type				{  }
		| record_type				{  }
		| array_type				{  }
		;
simple_type	: ID_TOKEN				{  }
		;
record_type	: RECORD_TOKEN rec_list END_TOKEN	{  }
		;
rec_list	: rec_item rec_list			{  }
		| /* empty */				{  }
		;
rec_item	: ident_list COLON_TOKEN type SEMICOLON_TOKEN
							{  }
		;
array_type	: ARRAY_TOKEN array_args OF_TOKEN type	{  }
		;
array_args	: LBRAC_TOKEN args_list RBRAC_TOKEN	{  }
		;		

ident_list	: ID_TOKEN id_list			{  }
		;
id_list		: COMMA_TOKEN ID_TOKEN			{  }
		;


// Variable Declaration
var_decl	: VAR_TOKEN var_item var_list		{  }
		| /* empty */				{  }

var_list	: var_item var_list			{  }
		| /* empty */				{  }
		;
var_item 	: ident_list COLON_TOKEN type SEMICOLON_TOKEN	{  }	

// Procedure and Function Declaration
proc_decl	: proc_start  FORWARD_TOKEN SEMICOLON_TOKEN
							{  }
		| proc_start body SEMICOLON_TOKEN	{  }
		; 

proc_start	: PROC_TOKEN ID_TOKEN proc_args SEMICOLON_TOKEN
							{  }
		;

proc_args	: LPAREN_TOKEN formal_params RPAREN_TOKEN {  }
		;

func_decl	: func_start COLON_TOKEN type SEMICOLON_TOKEN FORWARD_TOKEN SEMICOLON_TOKEN
							{  }
		| func_start COLON_TOKEN type SEMICOLON_TOKEN body SEMICOLON_TOKEN
							{  }
		; 

func_start	: FUNCTION_TOKEN ID_TOKEN proc_args	{  }
		;

formal_params	: /* empty */				{  }
		| param params_list			{  }
		;
param		: varef ident_list COLON_TOKEN type	{  }
		;
params_list	: SEMICOLON_TOKEN param	params_list	{  }
		| /* empty */				{  }
		;

varef		: /* empty */				{  }
		| VAR_TOKEN				{  }
		| REF_TOKEN				{  }
		;

body		: const_decl type_decl var_decl block	{  }
		;

block		: BEGIN_TOKEN statement_seq END_TOKEN	{  }
		;

func_proc_list	: func_decl func_proc_list		{  }
		| proc_decl func_proc_list		{  }
		| /* empty */				{  }
		;


%%


void yyerror(const char* s){
	std::cout << "Parsing error on line " << linenumber << ".\n Message: " << s << std::endl;
	exit(-1);
}


