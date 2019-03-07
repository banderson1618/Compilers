#include "LvalueExpression.hpp"
#include "Misc_Classes/SymbolTable.hpp"
#include "Misc_Classes/Type.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include <string>
#include <iostream>

extern SymbolTable symbol_table;
extern PrimitiveType* string_type;
extern PrimitiveType* int_type;
extern PrimitiveType* bool_type;
extern PrimitiveType* char_type;
extern RegisterPool register_pool;

LvalueExpression::LvalueExpression(Lvalue* lval){
	_lval = lval;
}



ExpressionResult LvalueExpression::emit(){
	type = _lval->type;
	if (_lval->is_const){
		
		return make_const_lval();
	}
	else{
		return make_var_lval();
	}
}


ExpressionResult LvalueExpression::make_const_lval(){
	ExpressionResult ret_result;
	if (_lval->type == char_type) 	 ret_result.result_type = const_char;
	else if(_lval->type == int_type || _lval->type == bool_type) ret_result.result_type = const_int;
	else throw "Const lval is not int, bool or char, somehow?";
	ret_result.const_val = _lval->const_val;
	return ret_result;
}


ExpressionResult LvalueExpression::make_var_lval(){
	ExpressionResult ret_result;
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
