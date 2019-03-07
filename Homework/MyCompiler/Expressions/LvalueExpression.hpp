#ifndef LVALUE_EXPRESSION_H
#define LVALUE_EXPRESSION_H

#include "Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/SymbolTable.hpp"
#include <string>

class LvalueExpression : public Expression{
	public:
		LvalueExpression(Lvalue*);
		ExpressionResult emit();

	private:
		ExpressionResult make_const_lval();
		ExpressionResult make_var_lval();
		Lvalue* _lval;
};

#endif
