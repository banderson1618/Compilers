#include "BitwiseExpression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include <string>
#include <iostream>

extern RegisterPool register_pool;

BitwiseExpression::BitwiseExpression(Expression *prime_expr){
	_prime_expr = prime_expr;
}

ExpressionResult BitwiseExpression::emit(){
	std::string ret_reg = register_pool.get_register();
	ExpressionResult ret_result;
	ret_result.result_type = reg;
	ret_result._register = ret_reg;
	return ret_result;
}

