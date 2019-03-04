#ifndef STOP_STATEMENT_H
#define STOP_STATEMENT_H

#include "Statement.hpp"
#include "Misc_Classes/RegisterPool.hpp"


class StopStatement : public Statement {
	public:
		StopStatement();
		void emit(RegisterPool*);
};


#endif
