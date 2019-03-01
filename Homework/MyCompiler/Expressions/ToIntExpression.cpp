#include "ToIntExpression.hpp"
#include <string>
#include <iostream>

ToIntExpression::ToIntExpression(Expression *prime_expr){
	_prime_expr = prime_expr;
}

std::string ToIntExpression::emit(RegisterPool* register_pool){
	std::string ret_reg = register_pool->get_register();
	
	return ret_reg;
}
