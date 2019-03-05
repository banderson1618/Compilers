#ifndef BITWISE_EXPRESSION_H
#define BITWISE_EXPRESSION_H

#include "Expression.hpp"
#include <string>

class BitwiseExpression : public Expression{
	public:
		BitwiseExpression(Expression*);
		ExpressionResult emit();

	private:
		Expression* _prime_expr;
};

#endif
