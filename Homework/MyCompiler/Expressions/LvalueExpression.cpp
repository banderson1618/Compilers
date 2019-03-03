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
	std::cout << "\tlw\t" << ret_reg << ", " << _lval->offset << "($sp)\t#lvalue being retrieved" << std::endl;
	type = _lval->type;
	return ret_reg;
}
