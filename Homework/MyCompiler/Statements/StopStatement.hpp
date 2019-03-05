#ifndef STOP_STATEMENT_H
#define STOP_STATEMENT_H

#include "Statement.hpp"


class StopStatement : public Statement {
	public:
		StopStatement();
		void emit();
};


#endif
