#ifndef TOCHAR_EXPRESSION_H
#define TOCHAR_EXPRESSION_H

#include "Expression.hpp"

class ToCharExpression : public Expression{
	public:
		ToCharExpression(Expression*);

	private:
		Expression* _prime_expr;
};

#endif
