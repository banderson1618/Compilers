#ifndef REMAIN_EXPRESSION_H
#define REMAIN_EXPRESSION_H

#include "Expression.hpp"

class RemainExpression : public Expression{
	public:
		RemainExpression(Expression*, Expression*);

	private:
		Expression* _left_expr;
		Expression* _right_expr;
};

#endif
