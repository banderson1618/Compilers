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
#include "Expressions/SuccExpression.hpp"
#include "Expressions/PredExpression.hpp"
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
#include "Statements/RepeatStatement.hpp"
#include "Statements/WhileStatement.hpp"
#include "Statements/IfBlockStatement.hpp"
#include "Statements/IfStatement.hpp"
#include "Statements/ForStatement.hpp"

#include "Misc_Classes/Program.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/SymbolTable.hpp"
#include "Misc_Classes/TypesTable.hpp"
#include "Misc_Classes/StringTable.hpp"
#include "Misc_Classes/UsefulFunctions.hpp"

#include "Misc_Classes/Type.hpp"
#include "Misc_Classes/ArrayType.hpp"
#include "Misc_Classes/RecordType.hpp"
#include "Misc_Classes/Body.hpp"
#include "Misc_Classes/FunctionDeclaration.hpp"


#include "Misc_Classes/UsefulFunctions.hpp"

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
extern RegisterPool register_pool;

extern PrimitiveType* int_type;
extern PrimitiveType* char_type;
extern PrimitiveType* bool_type;
extern PrimitiveType* string_type;

void yyerror(const char *s);
extern int linenumber;

bool testingParser = false;

std::vector<std::string> get_str_vec_from_chars_vec(std::vector<char*>* given_ids){
	std::vector<std::string> ret_vec;
	for(int i = 0; i < given_ids->size(); i++){
		char* char_val = (*given_ids)[i];
		std::string str_val(char_val);
		ret_vec.push_back(str_val);
	}
	return ret_vec;
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
	LvalueExpression* lval;
	std::vector<Expression*> *exprList;
	std::vector<Statement*> *statementList;
	std::vector<LvalueExpression*> *lvalList;
	std::vector<char*> *string_list;
	std::vector<IfStatement*>* if_list;
	Statement* statement;
	TypeCreator* type;
	RecItem* rec_item;
	std::vector<RecItem*>* rec_list;
	ConstDecl* const_decl;
	std::vector<ConstDecl*>* const_list;
	TypeDecl* type_decl;
	std::vector<TypeDecl*>* type_list;
	VarDecl* var_decl;
	std::vector<VarDecl*>* var_list;
	Param* param;
	std::vector<Param*>* param_list;
	FunctionDeclaration* func_decl;
	std::vector<FunctionDeclaration*>* func_decl_list;
	VarRef* var_ref;
	Body* body;
}


%type <stringVal> ID_TOKEN
%type <expr> expr
%type <lval> lvalue
%type <exprList> args_list
%type <val> NUM_TOKEN
%type <stringVal> STRING_TOKEN CHAR_TOKEN
%type <statement> statement assign read_statement write_statement null_statement stop_statement repeat_statement while_statement if_statement for_statement
%type <lvalList> args_list_lval
%type <statementList> statement_seq block else_statement
%type <string_list> ident_list
%type <type> type simple_type array_type record_type
%type <rec_item> rec_item
%type <rec_list> rec_list
%type <if_list> elseif_list
%type <const_list> const_decl eq_list
%type <const_decl> eq_item
%type <type_list> type_decl type_list
%type <type_decl> type_item
%type <var_list> var_decl var_list
%type <var_decl> var_item
%type <param> param
%type <param_list> params_list formal_params proc_args proc_start func_start
%type <func_decl> func_decl proc_decl
%type <func_decl_list> func_proc_list
%type <var_ref> varef
%type <body> body


%%



program		: const_decl type_decl var_decl func_proc_list block PER_TOKEN END_OF_FILE
							{	
								auto my_tree = new Program($1, $2, $3, $4, $5); 
								my_tree->emit();
							}	
		;


lvalue 		: ID_TOKEN 				{ $$ = new LvalueExpression(std::string($1));}
		| lvalue PER_TOKEN ID_TOKEN 		{ $$ = new LvalueExpression($1, std::string($3)); }
		| lvalue LBRAC_TOKEN expr RBRAC_TOKEN	{ $$ = new LvalueExpression($1, $3); }
		;

// Expressions
expr		: lvalue 				{ if (testingParser) { std::cout << "Found LvalueExpression" << std::endl; }
								$$ = $1;}
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
								$$ = new PredExpression($3);}
		| SUCC_TOKEN LPAREN_TOKEN expr RPAREN_TOKEN 
							{ $$ = new SuccExpression($3);}
		| NUM_TOKEN				{ if (testingParser) { std::cout << "Found IntExpression" << std::endl; }
								$$ = new IntExpression($1);}
		| CHAR_TOKEN				{ if (testingParser) { std::cout << "Found CharExpression" << std::endl; }
								char new_char;
								if($1[1] == '\\' && $1[2] == 'n'){
									new_char = '\n';
								}
								else if($1[1] == '\\' && $1[2] == 't'){
									new_char = '\t';
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


args_list_lval	: lvalue				{	auto new_vec = new std::vector<LvalueExpression*>;
								new_vec->push_back($1);
								$$ = new_vec;}
		| args_list_lval COMMA_TOKEN lvalue	{$1->push_back($3);
								$$ = $1;}
		| /* empty */				{$$ = new std::vector<LvalueExpression*>;}
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
							{ $$ = new ForStatement(std::string($2), $4, $6, $8, ForRunOptions::TO); }
		| FOR_TOKEN ID_TOKEN ASSIGN_TOKEN expr DOWNTO_TOKEN expr DO_TOKEN statement_seq END_TOKEN
							{ $$ = new ForStatement(std::string($2), $4, $6, $8, ForRunOptions::DOWNTO); }
		;
repeat_statement: REPEAT_TOKEN statement_seq UNTIL_TOKEN expr
							{ $$ = new RepeatStatement($2, $4); };
while_statement	: WHILE_TOKEN expr DO_TOKEN statement_seq END_TOKEN
							{ $$ = new WhileStatement($4, $2); };
if_statement	: IF_TOKEN expr THEN_TOKEN statement_seq elseif_list else_statement END_TOKEN
							{ $$ = new IfBlockStatement(new IfStatement($4, $2),
											$5, $6); }
		;
elseif_list	: /* empty */				{ $$ = new std::vector<IfStatement*>; }
		| elseif_list ELSEIF_TOKEN expr THEN_TOKEN statement_seq 
							{ 
								$1->push_back(new IfStatement($5, $3));
								$$ = $1;
							}
		| ELSEIF_TOKEN expr THEN_TOKEN statement_seq 
							{ 
								auto ret_vec = new std::vector<IfStatement*>;
								ret_vec->push_back(new IfStatement($4, $2));
								$$ = ret_vec;
							}
		;
else_statement	: /* empty */				{ $$ = NULL; }
		| ELSE_TOKEN statement_seq		{ $$ = $2; }
		;


assign		: lvalue ASSIGN_TOKEN expr		{  if (testingParser) { std::cout << "Found AssignStatement" << std::endl;} 
								$$ = new AssignStatement($1, $3); };

statement	: assign				{ $$ = $1; }
		| if_statement				{ $$ = $1; }
		| while_statement			{ $$ = $1; }
		| repeat_statement			{ $$ = $1; }
		| for_statement				{ $$ = $1; }
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
const_decl	: CONST_TOKEN eq_list			{ $$ = $2; }
		| /* empty */				{ $$ = new std::vector<ConstDecl*>; }
		;
eq_item		: ID_TOKEN EQ_TOKEN expr SEMICOLON_TOKEN{ auto my_const_decl = new ConstDecl;
								my_const_decl->id = std::string($1);
								my_const_decl->expr = $3;
								$$ = my_const_decl; }
		;
eq_list		: eq_item 				{ auto my_list = new std::vector<ConstDecl*>;
								my_list->push_back($1);
								$$ = my_list; }
		| eq_list eq_item			{ $1->push_back($2);
								$$ = $1; }
		;
// Type Declarations
type_decl	: TYPE_TOKEN type_list			{ $$ = $2; }
		| /* empty */				{ $$ = new std::vector<TypeDecl*>;}
		;
type_item	: ID_TOKEN EQ_TOKEN type SEMICOLON_TOKEN{ auto my_type_decl = new TypeDecl;
								my_type_decl->id = std::string($1);
								my_type_decl->type_creator = $3;
								$$ = my_type_decl; }
		;
type_list	: type_list type_item			{ $1->push_back($2);
								$$ = $1; }
		| type_item				{ auto my_type_list = new std::vector<TypeDecl*>;
								my_type_list->push_back($1);
								$$ = my_type_list; }
		;
type		: simple_type				{ $$ = $1; }
		| record_type				{ $$ = $1; }
		| array_type				{ $$ = $1; }
		;
simple_type	: ID_TOKEN				{ 
								TypeCreator* type_creator = new TypeCreator;
								type_creator->type_type = TypeType::simple;
								type_creator->base_id = std::string($1);
								$$ = type_creator; }
		;
record_type	: RECORD_TOKEN rec_list END_TOKEN	{ 
								TypeCreator* type_creator = new TypeCreator;
								type_creator->type_type = TypeType::record;
								type_creator->rec_list = $2;
								$$ = type_creator;
							}
		;
rec_list	: rec_list rec_item 			{ 
								$1->push_back($2);
								$$ = $1;
							}
		| rec_item				{	
								auto rec_list = new std::vector<RecItem*>;
								rec_list->push_back($1);
								$$ = rec_list;
							}
		;
rec_item	: ident_list COLON_TOKEN type SEMICOLON_TOKEN
							{ 	
								RecItem* _rec_item = new RecItem;
								_rec_item->id_list = get_str_vec_from_chars_vec($1);
								_rec_item->type_creator = $3;
								$$ = _rec_item;
							}
		;
array_type	: ARRAY_TOKEN LBRAC_TOKEN expr COLON_TOKEN expr RBRAC_TOKEN OF_TOKEN type
							{ 
								TypeCreator* _type_creator = new TypeCreator;
								_type_creator->type_type = TypeType::array;
								_type_creator->first_expr = $3;
								_type_creator->second_expr = $5;
								_type_creator->elem_type = $8;
								$$ = _type_creator;
							}
		;

ident_list	: ID_TOKEN				{ 
								auto new_vec = new std::vector<char*> ;
								new_vec->push_back($1);
								$$ = new_vec;}
		| ident_list COMMA_TOKEN ID_TOKEN	{ $1->push_back($3);
								$$ = $1; }
		;
// Variable Declaration
var_decl	: VAR_TOKEN var_list			{ $$ = $2; }
		| /* empty */				{ $$ = new std::vector<VarDecl*>; }
		;
var_list	: var_list var_item 			{ $1->push_back($2);
								$$ = $1; }
		| var_item				{ auto new_vec = new std::vector<VarDecl*>;
								new_vec->push_back($1);
								$$ = new_vec; }
		;
var_item 	: ident_list COLON_TOKEN type SEMICOLON_TOKEN	
							{ auto my_var_decl = new VarDecl;
								my_var_decl->id_list = get_str_vec_from_chars_vec($1);
								my_var_decl->type_creator = $3;								
								$$ = my_var_decl; }
		;	


// Procedure and Function Declaration
proc_decl	: proc_start  FORWARD_TOKEN SEMICOLON_TOKEN
							{ $$ = new FunctionDeclaration($1, NULL, NULL);}
		| proc_start body SEMICOLON_TOKEN	{ $$ = new FunctionDeclaration($1, $2, NULL); }
		; 

proc_start	: PROC_TOKEN ID_TOKEN proc_args SEMICOLON_TOKEN
							{ $$ = $3; }
		;

proc_args	: LPAREN_TOKEN formal_params RPAREN_TOKEN { $$ = $2; }
		;

func_decl	: func_start COLON_TOKEN type SEMICOLON_TOKEN FORWARD_TOKEN SEMICOLON_TOKEN
							{ $$ = new FunctionDeclaration($1, NULL, $3); }
		| func_start COLON_TOKEN type SEMICOLON_TOKEN body SEMICOLON_TOKEN
							{ $$ = new FunctionDeclaration($1, $5, $3); }
		; 

func_start	: FUNCTION_TOKEN ID_TOKEN proc_args	{ $$ = $3; }
		;

formal_params	: param					{ auto new_vec = new std::vector<Param*>;
								new_vec->push_back($1);
								$$ = new_vec;  }
		| params_list param			{ $1->push_back($2);
								$$ = $1; }
		| /* empty */				{ auto new_vec = new std::vector<Param*>; 
								$$ = new_vec; }
		;
param		: varef ident_list COLON_TOKEN type	{ Param* my_param = new Param;
								my_param->var_ref = $1;
								my_param->id_list = get_str_vec_from_chars_vec($2);
								my_param->type_creator = $4;
								$$ = my_param; }
		;
params_list	: param					{ auto params_list = new std::vector<Param*>;
								params_list->push_back($1);
					 			$$ = params_list; }
		| params_list SEMICOLON_TOKEN param	{ $1->push_back($3);
								$$ = $1; }
		| /* empty */				{ auto params_list = new std::vector<Param*>;
								$$ = params_list; }
		;

varef		: /* empty */				{ VarRef* my_var_ref  = new VarRef{VarRef::neither};
								$$ = my_var_ref;}
		| VAR_TOKEN				{ VarRef* my_var_ref  = new VarRef{VarRef::var};
								$$ = my_var_ref; }
		| REF_TOKEN				{ VarRef* my_var_ref  = new VarRef{VarRef::ref};
								$$ = my_var_ref; }
		;

body		: const_decl type_decl var_decl block	{ $$ = new Body($1, $2, $3, $4); }
		;

func_proc_list	: func_decl				{ auto func_decl_list = new std::vector<FunctionDeclaration*>;
								func_decl_list->push_back($1);
								$$ = func_decl_list; }
		| proc_decl				{ auto func_decl_list = new std::vector<FunctionDeclaration*>;
								func_decl_list->push_back($1);
								$$ = func_decl_list; }
		| func_proc_list func_decl		{ $1->push_back($2);
								$$ = $1; }
		| func_proc_list proc_decl		{ $1->push_back($2);
								$$ = $1; }
		| /* empty */				{ auto func_decl_list = new std::vector<FunctionDeclaration*>; 
								$$ = func_decl_list; }
		;

block		: BEGIN_TOKEN statement_seq END_TOKEN	{ $$ = $2; }
		;


%%


void yyerror(const char* s){
	std::cerr << "Parsing error on line " << linenumber << ".\n Message: " << s << std::endl;
	exit(-1);
}


