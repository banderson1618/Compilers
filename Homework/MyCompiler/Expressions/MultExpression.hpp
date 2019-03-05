#ifndef MULT_EXPRESSION_H
#define MULT_EXPRESSION_H

#include "Expression.hpp"
#include <string>

class MultExpression : public Expression{
	public:
		MultExpression(Expression*, Expression*);
		ExpressionResult emit();

	private:
		Expression* _left_expr;
		Expression* _right_expr;
};

#endif
