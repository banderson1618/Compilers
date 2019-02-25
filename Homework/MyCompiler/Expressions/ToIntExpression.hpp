#ifndef TOINT_EXPRESSION_H
#define TOINT_EXPRESSION_H

#include "Expression.hpp"

class ToIntExpression : public Expression{
	public:
		ToIntExpression(Expression*);

	private:
		Expression* _prime_expr;
};

#endif
