#include "FunctionCallExpression.hpp"
#include "Expression.hpp"
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

FunctionCallExpression::FunctionCallExpression(std::string _id, std::vector<Expression*>* _args){
	id = _id;
	args = _args;
}


ExpressionResult FunctionCallExpression::emit(){
	FuncPrototype my_prototype = function_table.get_value(id);
	type = my_prototype.ret_type;
	return call_function(id, args);
}
