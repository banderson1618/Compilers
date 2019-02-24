#ifndef LESS_EXPRESSION_H
#define LESS_EXPRESSION_H

#include "Expression.hpp"

class LessExpression : public Expression{
	public:
		LessExpression(Expression*, Expression*);

	private:
		Expression* _left_expr;
		Expression* _right_expr;
};

#endif
