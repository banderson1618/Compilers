#ifndef NEG_EXPRESSION_H
#define NEG_EXPRESSION_H

#include "Expression.hpp"
#include <string>

class NegExpression : public Expression{
	public:
		NegExpression(Expression*);
		ExpressionResult emit();

	private:
		Expression* _prime_expr;
};

#endif
