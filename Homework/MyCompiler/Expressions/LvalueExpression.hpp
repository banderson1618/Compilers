#ifndef LVALUE_EXPRESSION_H
#define LVALUE_EXPRESSION_H

#include "Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/SymbolTable.hpp"
#include <string>

class LvalueExpression : public Expression{
	public:
		LvalueExpression(Lvalue*);
		std::string emit(RegisterPool*);

	private:
		Lvalue* _lval;
};

#endif
