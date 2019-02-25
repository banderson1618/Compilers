#ifndef NEQ_EXPRESSION_H
#define NEQ_EXPRESSION_H

#include "Expression.hpp"

class NeqExpression : public Expression{
	public:
		NeqExpression(Expression*, Expression*);

	private:
		Expression* _left_expr;
		Expression* _right_expr;
};

#endif
