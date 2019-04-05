#ifndef IF_BLOCK_STATEMENT_H
#define IF_BLOCK_STATEMENT_H

#include "Statement.hpp"
#include "IfStatement.hpp"
#include "Expressions/Expression.hpp"


class IfBlockStatement : public Statement {
	public:
		IfBlockStatement(IfStatement*, std::vector<IfStatement*>*, std::vector<Statement*>*);
		void emit();
	private:
		static int if_block_label_num;
		IfStatement* first_if_statement;
		std::vector<IfStatement*>* else_if_statements;
		std::vector<Statement*>* else_statement;
		
};


#endif
