#ifndef PRED_EXPRESSION_H
#define PRED_EXPRESSION_H

#include "Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/Type.hpp"
#include <string>

class PredExpression : public Expression{
	public:
		PredExpression(Expression*);
		ExpressionResult emit();

	private:
		Expression* _prime_expr;
};

#endif
