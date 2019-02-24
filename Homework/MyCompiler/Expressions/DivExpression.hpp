#ifndef DIV_EXPRESSION_H
#define DIV_EXPRESSION_H

#include "Expression.hpp"

class DivExpression : public Expression{
	public:
		DivExpression(Expression*, Expression*);

	private:
		Expression* _left_expr;
		Expression* _right_expr;
};

#endif
