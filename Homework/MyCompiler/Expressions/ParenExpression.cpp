#include "ParenExpression.hpp"

ParenExpression::ParenExpression(Expression *prime_expr){
	_prime_expr = prime_expr;
}
