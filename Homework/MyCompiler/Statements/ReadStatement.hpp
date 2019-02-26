#ifndef READ_STATEMENT_H
#define READ_STATEMENT_H

#include "Statement.hpp"
#include "Expressions/LvalueExpression.hpp"
#include <vector>

class ReadStatement : public Statement {
	public:
		ReadStatement(std::vector<LvalueExpression*>*);
		void emit();		
	private:
		std::vector<LvalueExpression*>* _args;
};


#endif
