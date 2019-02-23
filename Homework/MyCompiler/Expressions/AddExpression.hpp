#ifndef ADD_EXPRESSION_H
#define ADD_EXPRESSION_H

#include "Expression.hpp"

class AddExpression : public Expression{
	public:
		AddExpression(Expression*, Expression*);

	private:
		Expression* _left_expr;
		Expression* _right_expr;
};

#endif
