#include "NegExpression.hpp"
#include <string>
#include <iostream>

NegExpression::NegExpression(Expression *prime_expr){
	_prime_expr = prime_expr;
}

std::string NegExpression::emit(RegisterPool* register_pool){
	std::string ret_reg = register_pool->get_register();
	
	return ret_reg;
}
