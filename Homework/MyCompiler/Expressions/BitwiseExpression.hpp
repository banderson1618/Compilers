#ifndef BITWISE_EXPRESSION_H
#define BITWISE_EXPRESSION_H

#include "Expression.hpp"

class BitwiseExpression : public Expression{
	public:
		BitwiseExpression(Expression*);

	private:
		Expression* _prime_expr;
};

#endif
