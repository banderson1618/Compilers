#ifndef PAREN_EXPRESSION_H
#define PAREN_EXPRESSION_H

#include "Expression.hpp"
#include <string>

class ParenExpression : public Expression{
	public:
		ParenExpression(Expression*);
		ExpressionResult emit();

	private:
		Expression* _prime_expr;
};

#endif
