#ifndef FUNCTION_TABLE_H
#define FUNCTION_TABLE_H

#include "Type.hpp"

#include <vector>
#include <map>
#include <string>

struct FuncPrototype{
	std::string func_label;
	std::vector<Type*> arg_types;
	Type* ret_type;
};

class FunctionTable{
	public:
		FunctionTable();

		void add_value(std::string, FuncPrototype);
		FuncPrototype get_value(std::string);

		void enter_scope();
		void exit_scope();
		
	private:
		std::vector<std::map<std::string, FuncPrototype>> tables;
};

#endif

