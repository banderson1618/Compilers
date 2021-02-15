#include "FunctionCallStatement.hpp"
#include "Expressions/Expression.hpp"
#include "Misc_Classes/Tables/FunctionTable.hpp"
#include "Misc_Classes/Type.hpp"
#include "Misc_Classes/UsefulFunctions.hpp"
#include <iostream>
#include <string>
#include <vector>

extern PrimitiveType* int_type;

extern SymbolTable symbol_table;
extern FunctionTable function_table;
extern RegisterPool register_pool;

FunctionCallStatement::FunctionCallStatement(std::string _id, std::vector<Expression*>* _args){
	id = _id;
	args = _args;
}


void FunctionCallStatement::emit(){
	call_function(id, args);
}
