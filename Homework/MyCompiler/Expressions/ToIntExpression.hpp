#ifndef TOINT_EXPRESSION_H
#define TOINT_EXPRESSION_H

#include "Expression.hpp"
#include <string>

class ToIntExpression : public Expression{
	public:
		ToIntExpression(Expression*);
		ExpressionResult emit();

	private:
		Expression* _prime_expr;
};

#endif
