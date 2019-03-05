#ifndef LEQ_EXPRESSION_H
#define LEQ_EXPRESSION_H

#include "Expression.hpp"
#include <string>

class LeqExpression : public Expression{
	public:
		LeqExpression(Expression*, Expression*);
		ExpressionResult emit();

	private:
		Expression* _left_expr;
		Expression* _right_expr;
};

#endif
