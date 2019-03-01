#include "ParenExpression.hpp"
#include <string>
#include <iostream>

ParenExpression::ParenExpression(Expression *prime_expr){
	_prime_expr = prime_expr;
}

std::string ParenExpression::emit(RegisterPool* register_pool){
	std::string ret_reg = register_pool->get_register();
	
	return ret_reg;
}
