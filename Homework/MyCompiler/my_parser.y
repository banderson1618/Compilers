%{
#include "Expressions/Expression.hpp"

#include "Expressions/LvalueExpression.hpp"

#include "Expressions/AndExpression.hpp"
#include "Expressions/OrExpression.hpp"
#include "Expressions/EqExpression.hpp"
#include "Expressions/NeqExpression.hpp"
#include "Expressions/LeqExpression.hpp"
#include "Expressions/GeqExpression.hpp"
#include "Expressions/LessExpression.hpp"
#include "Expressions/GreaterExpression.hpp"

#include "Expressions/AddExpression.hpp"
#include "Expressions/BitwiseExpression.hpp"
#include "Expressions/DivExpression.hpp"
#include "Expressions/FuncExpression.hpp"
#include "Expressions/MultExpression.hpp"
#include "Expressions/NegExpression.hpp"
#include "Expressions/ParenExpression.hpp"
#include "Expressions/RemainExpression.hpp"
#include "Expressions/SubExpression.hpp"
#include "Expressions/ToCharExpression.hpp"
#include "Expressions/ToIntExpression.hpp"


#include "Expressions/IntExpression.hpp"
#include "Expressions/CharExpression.hpp"
#include "Expressions/StringExpression.hpp"

#include "Statements/Statement.hpp"
#include "Statements/AssignStatement.hpp"
#include "Statements/ReadStatement.hpp"
#include "Statements/WriteStatement.hpp"
#include "Statements/NullStatement.hpp"
#include "Statements/StopStatement.hpp"

#include "Misc_Classes/Program.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/SymbolTable.hpp"
#include "Misc_Classes/TypesTable.hpp"
#include "Misc_Classes/StringTable.hpp"

#include <ctype.h>
#include <iostream>
#include <map>
#include <vector>
#include <string>

extern int yylex();
extern int yyparse();
extern FILE *yyin;
extern SymbolTable symbol_table;
extern TypesTable types_table;
extern StringTable string_table;

extern PrimitiveType* int_type;
extern PrimitiveType* char_type;
extern PrimitiveType* bool_type;
extern PrimitiveType* string_type;

void yyerror(const char *s);
extern int linenumber;

bool testingParser = false;

RegisterPool* register_pool = new RegisterPool();


void add_vars_to_symbol_table(std::vector<char*>* ids, Type* type){
	for(int i = 0; i < ids->size(); i++){
		std::string str((*ids)[i]);
		symbol_table.add_value(str, type);
	}
}

void add_const_to_table(char* id, Expression* val){
	std::string expr_reg = val->emit(register_pool); // string label if it's a string, register with value otherwise
	std::string str_id(id);

	if (val->type == string_type){
		symbol_table.add_value(str_id, string_type, expr_reg);
	}
	else{
		symbol_table.add_value(str_id, val->type);
		Lvalue lval = symbol_table.get_value(str_id);
		std::cout << "\tsw\t" << expr_reg << ", " << lval.offset << ",($sp)\t\t#Saving constant" << std::endl;
	}
}

void add_type_to_table(char* id, Type* new_type){
	std::string str_id(id);
	if (new_type == int_type || new_type == string_type || new_type == char_type || new_type == bool_type){
		types_table.add_value(id, new_type);
	}
}

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
%token END_OF_FILE 0


%right OR_TOKEN
%right AND_TOKEN
%left TILDE_TOKEN
%nonassoc EQ_TOKEN NEQ_TOKEN LESS_TOKEN LEQ_TOKEN GREATER_TOKEN GEQ_TOKEN
%left ADD_TOKEN
%left MULT_TOKEN DIV_TOKEN REMAIN_TOKEN
%right SUB_TOKEN


%union
{
	int val;
	char* stringVal;
	char* id;
	Expression* expr;
	std::vector<Expression*> *exprList;
	std::vector<Statement*> *statementList;
	std::vector<Lvalue*> *lvalList;
	std::vector<char*> *string_list;
	Statement* statement;
	Lvalue* lval;
	Type* type;
}


%type <stringVal> ID_TOKEN
%type <expr> expr
%type <exprList> args_list
%type <val> NUM_TOKEN
%type <stringVal> STRING_TOKEN CHAR_TOKEN
%type <lval> lvalue
%type <statement> statement assign read_statement write_statement null_statement stop_statement
%type <lvalList> args_list_lval
%type <statementList> statement_seq block
%type <string_list> ident_list
%type <type> type simple_type


%%



program		: const_decl type_decl var_decl func_proc_list block PER_TOKEN END_OF_FILE
							{	auto my_tree = new Program($5); 
								my_tree->emit(register_pool);
								string_table.write_strings();}	
		| expr END_OF_FILE			{ 	$1->emit(register_pool); }
		;


lvalue 		: ID_TOKEN 				{ 	std::string str($1);
								Lvalue base = symbol_table.get_value(str);
								Lvalue* ret_val = new Lvalue;
								ret_val->offset = base.offset;
								ret_val->type = base.type;
								ret_val->string_label = base.string_label;						
								$$ = ret_val; } 
		| lvalue PER_TOKEN ID_TOKEN 		{  }
		| lvalue LBRAC_TOKEN expr RBRAC_TOKEN	{  }
		;

// Expressions
expr		: lvalue 				{ if (testingParser) { std::cout << "Found LvalueExpression" << std::endl; }
								$$ = new LvalueExpression($1);}
		| expr OR_TOKEN expr 			{ if (testingParser) { std::cout << "Found OrExpression" << std::endl; }
								$$ =  new OrExpression($1, $3);}
		| expr AND_TOKEN expr 			{ if (testingParser) { std::cout << "Found AndExpression" << std::endl; }
								$$ =  new AndExpression($1, $3);}
		| expr EQ_TOKEN expr 			{ if (testingParser) { std::cout << "Found EqExpression" << std::endl; }
								$$ =  new EqExpression($1, $3);}
		| expr NEQ_TOKEN expr			{ if (testingParser) { std::cout << "Found NeqExpression" << std::endl; }
								$$ =  new NeqExpression($1, $3);}
		| expr LEQ_TOKEN expr			{ if (testingParser) { std::cout << "Found LeqExpression" << std::endl; }
								$$ =  new LeqExpression($1, $3);}
		| expr GEQ_TOKEN expr			{ if (testingParser) { std::cout << "Found GeqExpression" << std::endl; }
								$$ =  new GeqExpression($1, $3);}
		| expr LESS_TOKEN expr			{ if (testingParser) { std::cout << "Found LessExpression" << std::endl; }
								$$ =  new LessExpression($1, $3);}
		| expr GREATER_TOKEN expr		{ if (testingParser) { std::cout << "Found GreaterExpression" << std::endl; }
								$$ =  new GreaterExpression($1, $3);}
		| expr ADD_TOKEN expr			{ if (testingParser) { std::cout << "Found AddExpression" << std::endl; }
								$$ =  new AddExpression($1, $3);}
		| expr SUB_TOKEN expr %prec ADD_TOKEN	{ if (testingParser) { std::cout << "Found SubExpression" << std::endl; }
								$$ = new SubExpression($1, $3);}
		| expr MULT_TOKEN expr			{ if (testingParser) { std::cout << "Found MultExpression" << std::endl; }
								$$ = new MultExpression($1, $3); }
		| expr DIV_TOKEN expr 			{ if (testingParser) { std::cout << "Found DivExpression" << std::endl; }
								$$ = new DivExpression($1, $3);}
		| expr REMAIN_TOKEN expr		{ if (testingParser) { std::cout << "Found RemainExpression" << std::endl; }
								$$ = new RemainExpression($1, $3);}
		| TILDE_TOKEN expr			{ if (testingParser) { std::cout << "Found BitwiseExpression" << std::endl; }
								$$ = new BitwiseExpression($2);}
		| SUB_TOKEN expr			{ if (testingParser) { std::cout << "Found NegExpression" << std::endl; }
								$$ = new NegExpression($2);}
		| LPAREN_TOKEN expr RPAREN_TOKEN	{ if (testingParser) { std::cout << "Found ParenExpression" << std::endl; }
								$$ = new ParenExpression($2);}
		| ID_TOKEN LPAREN_TOKEN args_list RPAREN_TOKEN 
							{ if (testingParser) { std::cout << "Found FuncExpression" << std::endl; }
								$$ = new FuncExpression($1, $3);}
		| CHR_TOKEN LPAREN_TOKEN expr RPAREN_TOKEN 
							{ if (testingParser) { std::cout << "Found ToCharExpression" << std::endl; }
								$$ = new ToCharExpression($3);}
		| ORD_TOKEN LPAREN_TOKEN expr RPAREN_TOKEN 
							{ if (testingParser) { std::cout << "Found ToIntExpression" << std::endl; }
								$$ = new ToIntExpression($3);}
		| PRED_TOKEN LPAREN_TOKEN expr RPAREN_TOKEN 
							{ if (testingParser) { std::cout << "Found PredExpression" << std::endl; }
								$$ = new ToIntExpression($3);}
		| SUCC_TOKEN LPAREN_TOKEN expr RPAREN_TOKEN 
							{ if (testingParser) { std::cout << "Found SuccExpression" << std::endl; }
								$$ = new ToIntExpression($3);}
		| NUM_TOKEN				{ if (testingParser) { std::cout << "Found IntExpression" << std::endl; }
								$$ = new IntExpression($1);}
		| CHAR_TOKEN				{ if (testingParser) { std::cout << "Found CharExpression" << std::endl; }
								char new_char;
								if($1[1] == '\\' && $1[2] == 'n'){
									new_char = '\n';
								}
								else{
									new_char = $1[1];
								}
								$$ = new CharExpression(new_char);}
		| STRING_TOKEN				{ if (testingParser) { std::cout << "Found StringExpression" << std::endl; }
								$$ = new StringExpression($1);}
		;
// rewrite this
args_list	: expr					{	auto new_vec = new std::vector<Expression*>;
								new_vec->push_back($1);
								$$ = new_vec;}
		| args_list COMMA_TOKEN expr		{$1->push_back($3);
								$$ = $1;}
		| /* empty */				{$$ = new std::vector<Expression*>;}
		;


args_list_lval	: lvalue				{	auto new_vec = new std::vector<Lvalue*>;
								new_vec->push_back($1);
								$$ = new_vec;}
		| args_list_lval COMMA_TOKEN lvalue	{$1->push_back($3);
								$$ = $1;}
		| /* empty */				{$$ = new std::vector<Lvalue*>;}
		;

// Statements
null_statement 	: /* empty */				{ $$ = new NullStatement(); };
procedure_call 	: ID_TOKEN LPAREN_TOKEN args_list RPAREN_TOKEN { }


write_statement	: WRITE_TOKEN LPAREN_TOKEN args_list RPAREN_TOKEN { if (testingParser) { std::cout << "Found WriteStatement" << std::endl; }
									$$ = new WriteStatement($3);};
read_statement	: READ_TOKEN LPAREN_TOKEN args_list_lval RPAREN_TOKEN { if (testingParser) { std::cout << "Found ReadStatement" << std::endl; }
									$$ = new ReadStatement($3);};
return_statement: RETURN_TOKEN  			{ }
		| RETURN_TOKEN expr  			{ }
		;
stop_statement	: STOP_TOKEN				{ $$ = new StopStatement();}
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
							{  }
		;
elseif_list	: /* empty */
		| ELSEIF_TOKEN expr THEN_TOKEN statement_seq elseif_list
							{  }
		;
else_statement	: /* empty */				{  }
		| ELSE_TOKEN statement_seq		{  }
		;


assign		: lvalue ASSIGN_TOKEN expr		{  if (testingParser) { std::cout << "Found AssignStatement" << std::endl;} 
								$$ = new AssignStatement($1, $3); };

statement	: assign				{ $$ = $1; }
		| if_statement				{  }
		| while_statement			{  }
		| repeat_statement			{  }
		| for_statement				{  }
		| stop_statement			{ $$ = $1; }
		| return_statement			{  }
		| read_statement			{ $$ = $1; }
		| write_statement			{ $$ = $1; }
		| procedure_call			{  }
		| null_statement			{ $$ = $1; }
		;
		
statement_seq	: statement				{  	auto new_vec = new std::vector<Statement*>;
								new_vec->push_back($1);
								$$ = new_vec;}	
		| statement_seq SEMICOLON_TOKEN statement{ $1->push_back($3);
								$$ = $1;}
		| /* empty */				{  $$ = new std::vector<Statement*>;}
		;


// Constant declaration
const_decl	: CONST_TOKEN eq_list			{  }
		| /* empty */				{  }
		;
eq_item		: ID_TOKEN EQ_TOKEN expr SEMICOLON_TOKEN{ add_const_to_table($1, $3); }
		;
eq_list		: eq_item 				{  }
		| eq_list eq_item			{  }
		;

// Type Declarations
type_decl	: TYPE_TOKEN type_list			{  }
		| /* empty */				{  }
		;
type_item	: ID_TOKEN EQ_TOKEN type SEMICOLON_TOKEN{ add_type_to_table($1, $3); }
		;
type_list	: type_list type_item			{  }
		| type_item				{  }
		;
type		: simple_type				{ $$ = $1; }
		| record_type				{  }
		| array_type				{  }
		;
simple_type	: ID_TOKEN				{ std::string str($1);
								$$ = types_table.get_value(str); }
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
array_args	: LBRAC_TOKEN expr COLON_TOKEN expr RBRAC_TOKEN	{  }
		;	

ident_list	: ID_TOKEN				{ 
								auto new_vec = new std::vector<char*> ;
								new_vec->push_back($1);
								$$ = new_vec;}
		| ident_list COMMA_TOKEN ID_TOKEN	{ $1->push_back($3);
								$$ = $1; }
		;


// Variable Declaration
var_decl	: VAR_TOKEN var_list			{  }
		| /* empty */				{  }
		;
var_list	: var_list var_item 			{  }
		| var_item				{  }
		;
var_item 	: ident_list COLON_TOKEN type SEMICOLON_TOKEN	{ add_vars_to_symbol_table($1, $3); }
		| /* empty */
		;	

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

block		: BEGIN_TOKEN statement_seq END_TOKEN	{ $$ = $2; }
		;

func_proc_list	: func_decl func_proc_list		{  }
		| proc_decl func_proc_list		{  }
		| /* empty */				{  }
		;


%%


void yyerror(const char* s){
	std::cerr << "Parsing error on line " << linenumber << ".\n Message: " << s << std::endl;
	exit(-1);
}


