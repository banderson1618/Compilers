#include "LeqExpression.hpp"

LeqExpression::LeqExpression(Expression *left_expr, Expression *right_expr){
	_left_expr = left_expr;
	_right_expr = right_expr;
}
