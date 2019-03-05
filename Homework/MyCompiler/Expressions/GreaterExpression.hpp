#ifndef GREATER_EXPRESSION_H
#define GREATER_EXPRESSION_H

#include "Expression.hpp"
#include <string>

class GreaterExpression : public Expression{
	public:
		GreaterExpression(Expression*, Expression*);
		ExpressionResult emit();

	private:
		Expression* _left_expr;
		Expression* _right_expr;
};

#endif
