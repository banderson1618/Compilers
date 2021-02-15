#ifndef LVALUE_EXPRESSION_H
#define LVALUE_EXPRESSION_H

#include "Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/Tables/SymbolTable.hpp"
#include <string>

enum LvalType {
	Record,
	Array,
	Normal
};

class LvalueExpression : public Expression{
	public:
		LvalueExpression(std::string);
		LvalueExpression(LvalueExpression*, Expression*);
		LvalueExpression(LvalueExpression*, std::string);
		ExpressionResult emit();
		Type* get_type();

	private:
		void set_lvals();
		ExpressionResult make_const_lval();
		ExpressionResult make_var_lval();
		ExpressionResult make_array_lval();
		Lvalue* _lval;
		LvalueExpression* _lval_expr;
		Expression* _expr;
		std::string id;
		std::string sub_attribute;
		LvalType lval_type;
};

#endif
