#ifndef NEG_EXPRESSION_H
#define NEG_EXPRESSION_H

#include "Expression.hpp"

class NegExpression : public Expression{
	public:
		NegExpression(Expression*);

	private:
		Expression* _prime_expr;
};

#endif
