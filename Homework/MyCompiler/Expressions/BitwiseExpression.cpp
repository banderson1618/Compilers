#include "BitwiseExpression.hpp"
#include <string>
#include <iostream>

BitwiseExpression::BitwiseExpression(Expression *prime_expr){
	_prime_expr = prime_expr;
}

std::string BitwiseExpression::emit(RegisterPool* register_pool){
	std::string ret_reg = register_pool->get_register();
	
	return ret_reg;
}

