#ifndef DIV_EXPRESSION_H
#define DIV_EXPRESSION_H

#include "Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include <string>

class DivExpression : public Expression{
	public:
		DivExpression(Expression*, Expression*);
		std::string emit(RegisterPool*);

	private:
		Expression* _left_expr;
		Expression* _right_expr;
};

#endif
