#include "FunctionCallStatement.hpp"
#include "Expressions/Expression.hpp"
#include "Misc_Classes/FunctionTable.hpp"
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
	FuncPrototype my_prototype = function_table.get_value(id);
	std::cout << "\tjal\t" << my_prototype.func_label << "\t\t#Go to function" << std::endl;
}
