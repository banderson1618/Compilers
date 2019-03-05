#ifndef SUB_EXPRESSION_H
#define SUB_EXPRESSION_H

#include "Expression.hpp"
#include <string>

class SubExpression : public Expression{
	public:
		SubExpression(Expression*, Expression*);
		ExpressionResult emit();

	private:
		Expression* _left_expr;
		Expression* _right_expr;
};

#endif
