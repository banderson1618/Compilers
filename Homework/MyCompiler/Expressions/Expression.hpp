#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "Misc_Classes/RegisterPool.hpp"

#include "Misc_Classes/Tables/SymbolTable.hpp"
#include "Misc_Classes/Type.hpp"
#include <string>

class Expression;
class LvalueExpression;

enum ResultType {const_int, const_char, lval, arr_lval, reg};

struct ExpressionResult {
	ResultType result_type;
	Lvalue* lval;
	int const_val;
	std::string _register;
	Expression* index;
	LvalueExpression* lval_expr;
	Type* type;
};

class Expression{
	public:
		Expression();
		virtual int getVal();
		virtual char getChar();
		virtual char* getID();
		virtual ExpressionResult emit();
		Type* type;
};


#endif
