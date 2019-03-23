#ifndef WHILE_STATEMENT_H
#define WHILE_STATEMENT_H

#include "Statement.hpp"
#include "Expressions/Expression.hpp"


class WhileStatement : public Statement {
	public:
		WhileStatement(std::vector<Statement*>*, Expression*);
		void emit();
	private:
		std::vector<Statement*>* statement_seq;
		Expression* bool_expr;
		static int while_label_num;
		
};


#endif
