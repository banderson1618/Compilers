#ifndef MULT_EXPRESSION_H
#define MULT_EXPRESSION_H

#include "Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include <string>

class MultExpression : public Expression{
	public:
		MultExpression(Expression*, Expression*);
		std::string emit(RegisterPool*);

	private:
		Expression* _left_expr;
		Expression* _right_expr;
};

#endif
