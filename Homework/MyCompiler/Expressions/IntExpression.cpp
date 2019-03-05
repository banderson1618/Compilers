#include "IntExpression.hpp"
#include "Misc_Classes/Type.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include <string>
#include <iostream>

extern PrimitiveType* int_type;
extern RegisterPool register_pool;

IntExpression::IntExpression(int val){
	_val = val;
}

ExpressionResult IntExpression::emit(){
	type = int_type;
	
	ExpressionResult ret_result;
	ret_result.result_type = const_int;
	ret_result.const_val = _val;

	return ret_result;
}
