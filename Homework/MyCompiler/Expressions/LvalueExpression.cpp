#include "LvalueExpression.hpp"
#include "Misc_Classes/SymbolTable.hpp"
#include <string>
#include <iostream>

extern SymbolTable symbol_table;

LvalueExpression::LvalueExpression(Lvalue* lval){
	_lval = lval;
}



std::string LvalueExpression::emit(RegisterPool* register_pool){
	std::string ret_reg = register_pool->get_register();
	
	return ret_reg;
}
