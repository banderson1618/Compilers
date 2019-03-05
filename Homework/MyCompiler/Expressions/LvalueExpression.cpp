#include "LvalueExpression.hpp"
#include "Misc_Classes/SymbolTable.hpp"
#include "Misc_Classes/Type.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include <string>
#include <iostream>

extern SymbolTable symbol_table;
extern PrimitiveType* string_type;
extern RegisterPool register_pool;

LvalueExpression::LvalueExpression(Lvalue* lval){
	_lval = lval;
}



ExpressionResult LvalueExpression::emit(){	
	ExpressionResult ret_result;
	type = _lval->type;
	if (_lval->type == string_type){
		ret_result.result_type = reg;
		ret_result._register = _lval->string_label;
		return ret_result;
	}
	else{
		ret_result.result_type = lval;
		ret_result.lval = _lval;
		return ret_result;
	}
}
