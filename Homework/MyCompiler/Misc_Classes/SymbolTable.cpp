#include "SymbolTable.hpp"

#include <string>
#include <map>
#include <vector>

SymbolTable::SymbolTable(){
	std::map<std::string, Lvalue> first_table;
	tables.push_back(first_table);
	next_offset = 0;
}

void SymbolTable::add_value(std::string id){
	Lvalue new_lval;
	new_lval.offset = next_offset;
	next_offset += 4; // later, we'll have to change this based on type
	tables.back().insert(std::pair<std::string, Lvalue>(id, new_lval));
}


Lvalue SymbolTable::get_value(std::string id){
	for(int i = tables.size() - 1; i >= 0; i--){
		auto ret_val = tables[i].find(id);
		if(ret_val != tables[i].end()) {
			return ret_val->second;
		}
	}
	throw "Could not find variable " + id;
}

SymbolTable symbol_table;
