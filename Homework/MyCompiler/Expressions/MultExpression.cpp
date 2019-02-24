#include "MultExpression.hpp"

MultExpression::MultExpression(Expression *left_expr, Expression *right_expr){
	_left_expr = left_expr;
	_right_expr = right_expr;
}
