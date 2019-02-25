#ifndef PAREN_EXPRESSION_H
#define PAREN_EXPRESSION_H

#include "Expression.hpp"

class ParenExpression : public Expression{
	public:
		ParenExpression(Expression*);

	private:
		Expression* _prime_expr;
};

#endif
