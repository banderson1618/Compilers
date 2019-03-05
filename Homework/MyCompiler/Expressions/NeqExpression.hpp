#ifndef NEQ_EXPRESSION_H
#define NEQ_EXPRESSION_H

#include "Expression.hpp"
#include <string>

class NeqExpression : public Expression{
	public:
		NeqExpression(Expression*, Expression*);
		ExpressionResult emit();

	private:
		Expression* _left_expr;
		Expression* _right_expr;
};

#endif
