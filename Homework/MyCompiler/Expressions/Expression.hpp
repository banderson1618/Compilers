#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/Type.hpp"
#include <string>

class Expression{
	public:
		Expression();
		Type* get_type();
		void set_type(Type*);
		virtual int getVal();
		virtual char getChar();
		virtual char* getID();
		virtual std::string emit(RegisterPool*);
	private:
		Type* _type;
};


#endif
