#ifndef GEQ_EXPRESSION_H
#define GEQ_EXPRESSION_H

#include "Expression.hpp"
#include <string>

class GeqExpression : public Expression{
	public:
		GeqExpression(Expression*, Expression*);
		ExpressionResult emit();

	private:
		Expression* _left_expr;
		Expression* _right_expr;
};

#endif
