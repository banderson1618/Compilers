#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "Misc_Classes/RegisterPool.hpp"

#include "Misc_Classes/SymbolTable.hpp"
#include "Misc_Classes/Type.hpp"
#include <string>

enum ResultType {const_int, const_char, lval, reg};

struct ExpressionResult {
	ResultType result_type;
	Lvalue* lval;
	int const_val;
	std::string _register;
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
