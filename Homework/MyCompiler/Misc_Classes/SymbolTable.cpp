#include "SymbolTable.hpp"

#include <string>
#include <map>
#include <vector>
#include <iostream>

SymbolTable::SymbolTable(){
	std::map<std::string, Lvalue> first_table;
	tables.push_back(first_table);
	next_offset = 0;
}

void SymbolTable::add_value(std::string id, std::string base_reg, Type* type){
	Lvalue new_lval;
	new_lval.base_reg = base_reg;
	new_lval.offset = next_offset;
	new_lval.type = type;
	new_lval.is_const = false;
	next_offset += type->size(); 
	tables.back().insert(std::pair<std::string, Lvalue>(id, new_lval));
}

void SymbolTable::add_value(std::string id, Type* type, std::string str_label){
	Lvalue new_lval;
	new_lval.type = type;
	new_lval.string_label = str_label;
	new_lval.is_const = false;
	tables.back().insert(std::pair<std::string, Lvalue>(id, new_lval));
}


void SymbolTable::add_const_val(std::string id, Type* type, int const_val){
	Lvalue new_lval;
	new_lval.offset = next_offset;
	new_lval.type = type;
	new_lval.is_const = true;
	new_lval.const_val = const_val;
	next_offset += type->size(); 
	tables.back().insert(std::pair<std::string, Lvalue>(id, new_lval));
}


Lvalue SymbolTable::get_value(std::string id){
	for(int i = tables.size() - 1; i >= 0; i--){
		auto ret_val = tables[i].find(id);
		if(ret_val != tables[i].end()) {
			return ret_val->second;
		}
	}
	std::cout << id << std::endl;
	throw "Could not find variable in symbol table";
}

void SymbolTable::enter_scope(){
	std::map<std::string, Lvalue> next_table;
	tables.push_back(next_table);
}

void SymbolTable::exit_scope(){
	tables.pop_back();
}

SymbolTable symbol_table;
