#ifndef LESS_EXPRESSION_H
#define LESS_EXPRESSION_H

#include "Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include <string>

class LessExpression : public Expression{
	public:
		LessExpression(Expression*, Expression*);
		std::string emit(RegisterPool*);

	private:
		Expression* _left_expr;
		Expression* _right_expr;
};

#endif
