#ifndef SUCC_EXPRESSION_H
#define SUCC_EXPRESSION_H

#include "Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/Type.hpp"
#include <string>

class SuccExpression : public Expression{
	public:
		SuccExpression(Expression*);
		ExpressionResult emit();

	private:
		Expression* _prime_expr;
};

#endif
