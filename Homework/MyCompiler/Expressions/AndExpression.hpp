#ifndef AND_EXPRESSION_H
#define AND_EXPRESSION_H

#include "Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include <string>

class AndExpression : public Expression{
	public:
		AndExpression(Expression*, Expression*);
		ExpressionResult emit();

	private:
		Expression* _left_expr;
		Expression* _right_expr;
};

#endif
