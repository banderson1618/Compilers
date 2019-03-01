#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H


#include <vector>
#include <map>
#include <string>

struct Lvalue {
	int offset;
};


class SymbolTable{
	public:
		SymbolTable();
		void add_value(std::string);

		Lvalue get_value(std::string);
		
	private:
		std::vector<std::map<std::string, Lvalue>> tables;
		int next_offset;
};

//SymbolTable symbol_table;
#endif

