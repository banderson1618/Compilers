#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include "Type.hpp"

#include <vector>
#include <map>
#include <string>

struct Lvalue {
	int offset;
	Type* type;
	std::string string_label;
};

class SymbolTable{
	public:
		SymbolTable();

		void add_value(std::string, Type*);
		void add_value(std::string, Type*, std::string); // for adding string values, basically
		Lvalue get_value(std::string);

		void enter_scope();
		void exit_scope();
		
	private:
		std::vector<std::map<std::string, Lvalue>> tables;
		int next_offset;
};

#endif

