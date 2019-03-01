#ifndef PAREN_EXPRESSION_H
#define PAREN_EXPRESSION_H

#include "Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include <string>

class ParenExpression : public Expression{
	public:
		ParenExpression(Expression*);
		std::string emit(RegisterPool*);

	private:
		Expression* _prime_expr;
};

#endif
