#include "ToCharExpression.hpp"
#include <string>
#include <iostream>

ToCharExpression::ToCharExpression(Expression *prime_expr){
	_prime_expr = prime_expr;
}

std::string ToCharExpression::emit(RegisterPool* register_pool){
	std::string ret_reg = register_pool->get_register();
	
	return ret_reg;
}
