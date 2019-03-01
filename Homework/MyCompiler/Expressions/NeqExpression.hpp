#ifndef NEQ_EXPRESSION_H
#define NEQ_EXPRESSION_H

#include "Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include <string>

class NeqExpression : public Expression{
	public:
		NeqExpression(Expression*, Expression*);
		std::string emit(RegisterPool*);

	private:
		Expression* _left_expr;
		Expression* _right_expr;
};

#endif
