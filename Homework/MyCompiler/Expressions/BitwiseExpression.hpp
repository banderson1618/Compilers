#ifndef BITWISE_EXPRESSION_H
#define BITWISE_EXPRESSION_H

#include "Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include <string>

class BitwiseExpression : public Expression{
	public:
		BitwiseExpression(Expression*);
		std::string emit(RegisterPool*);

	private:
		Expression* _prime_expr;
};

#endif
