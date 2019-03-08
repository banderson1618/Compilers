#ifndef LVALUE_EXPRESSION_H
#define LVALUE_EXPRESSION_H

#include "Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/SymbolTable.hpp"
#include <string>

class LvalueExpression : public Expression{
	public:
		LvalueExpression(Lvalue*);
		LvalueExpression(LvalueExpression*, Expression*);
		ExpressionResult emit();
		Type* get_type();

	private:
		ExpressionResult make_const_lval();
		ExpressionResult make_var_lval();
		ExpressionResult make_array_lval();
		Lvalue* _lval;
		LvalueExpression* _lval_expr;
		Expression* _expr;
};

#endif
