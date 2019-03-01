#ifndef TOINT_EXPRESSION_H
#define TOINT_EXPRESSION_H

#include "Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include <string>

class ToIntExpression : public Expression{
	public:
		ToIntExpression(Expression*);

	private:
		Expression* _prime_expr;
		std::string emit(RegisterPool*);
};

#endif
