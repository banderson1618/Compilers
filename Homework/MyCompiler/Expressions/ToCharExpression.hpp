#ifndef TOCHAR_EXPRESSION_H
#define TOCHAR_EXPRESSION_H

#include "Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include <string>

class ToCharExpression : public Expression{
	public:
		ToCharExpression(Expression*);
		std::string emit(RegisterPool*);

	private:
		Expression* _prime_expr;
};

#endif
