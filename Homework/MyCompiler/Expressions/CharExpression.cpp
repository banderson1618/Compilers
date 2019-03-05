#include "CharExpression.hpp"
#include "Misc_Classes/Type.hpp"
#include <string>
#include <iostream>

extern Type* char_type;

CharExpression::CharExpression(char val){
	_val = val;
}

ExpressionResult CharExpression::emit(){
	type = char_type;

	ExpressionResult ret_result;
	ret_result.result_type = const_char;
	int int_val = int(_val);
	ret_result.const_val = int_val;
	return ret_result;
}
