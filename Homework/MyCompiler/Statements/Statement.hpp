#ifndef STATEMENT_H
#define STATEMENT_H

#include "Misc_Classes/RegisterPool.hpp"

class Statement{
	public:
		Statement();
		virtual void emit(RegisterPool*);
};


#endif
