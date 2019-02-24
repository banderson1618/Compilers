#ifndef GEQ_EXPRESSION_H
#define GEQ_EXPRESSION_H

#include "Expression.hpp"

class GeqExpression : public Expression{
	public:
		GeqExpression(Expression*, Expression*);

	private:
		Expression* _left_expr;
		Expression* _right_expr;
};

#endif
