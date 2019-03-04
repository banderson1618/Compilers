#include "LvalueExpression.hpp"
#include "Misc_Classes/SymbolTable.hpp"
#include "Misc_Classes/Type.hpp"
#include <string>
#include <iostream>

extern SymbolTable symbol_table;
extern PrimitiveType* string_type;

LvalueExpression::LvalueExpression(Lvalue* lval){
	_lval = lval;
}



std::string LvalueExpression::emit(RegisterPool* register_pool){
	type = _lval->type;
	if (_lval->type == string_type){
		return _lval->string_label;
	}
	else{
		std::string ret_reg = register_pool->get_register();
		std::cout << "\tlw\t" << ret_reg << ", " << _lval->offset << "($sp)\t#lvalue being retrieved" << std::endl;
		type = _lval->type;
		return ret_reg;
	}
}
