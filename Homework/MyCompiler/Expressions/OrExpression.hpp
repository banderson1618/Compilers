#ifndef OR_EXPRESSION_H
#define OR_EXPRESSION_H

#include "Expression.hpp"
#include <string>

class OrExpression : public Expression{
	public:
		OrExpression(Expression*, Expression*);
		ExpressionResult emit();

	private:
		Expression* _left_expr;
		Expression* _right_expr;
};

#endif
