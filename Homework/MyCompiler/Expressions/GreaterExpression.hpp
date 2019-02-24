#ifndef GREATER_EXPRESSION_H
#define GREATER_EXPRESSION_H

#include "Expression.hpp"

class GreaterExpression : public Expression{
	public:
		GreaterExpression(Expression*, Expression*);

	private:
		Expression* _left_expr;
		Expression* _right_expr;
};

#endif
