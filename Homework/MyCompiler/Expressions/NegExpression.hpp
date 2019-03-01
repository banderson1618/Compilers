#ifndef NEG_EXPRESSION_H
#define NEG_EXPRESSION_H

#include "Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include <string>

class NegExpression : public Expression{
	public:
		NegExpression(Expression*);
		std::string emit(RegisterPool*);

	private:
		Expression* _prime_expr;
};

#endif
