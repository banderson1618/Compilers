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
	bool is_const;
	int const_val;
	std::string base_reg;
};

class SymbolTable{
	public:
		SymbolTable();

		void add_value(std::string, std::string, Type*);
		void add_value(std::string, Type*, std::string); // for adding string values, basically
		void add_const_val(std::string, Type*, int);

		Lvalue get_value(std::string);

		void enter_scope();
		void exit_scope();
		void reset_sp_offset();
		void reset_fp_offset();
		void set_fp_offset(int);

		int get_scope();
		
	private:
		std::vector<std::map<std::string, Lvalue>> tables;
		int next_gp_offset;
		int next_sp_offset;
		int next_fp_offset;
};

#endif

