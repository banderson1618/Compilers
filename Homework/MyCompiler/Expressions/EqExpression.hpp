#ifndef EQ_EXPRESSION_H
#define EQ_EXPRESSION_H

#include "Expression.hpp"

class EqExpression : public Expression{
	public:
		EqExpression(Expression*, Expression*);

	private:
		Expression* _left_expr;
		Expression* _right_expr;
};

#endif
