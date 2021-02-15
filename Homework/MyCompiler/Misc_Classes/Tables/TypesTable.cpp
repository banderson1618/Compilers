#include "TypesTable.hpp"

#include <string>
#include <map>
#include <vector>
#include <iostream>

TypesTable::TypesTable(){
	std::map<std::string, Type*> first_table;
	tables.push_back(first_table);
}

void TypesTable::add_value(std::string id, Type* type){
	tables.back().insert(std::pair<std::string, Type*>(id, type));
}


Type* TypesTable::get_value(std::string id){	
	for(int i = tables.size() - 1; i >= 0; i--){
		auto ret_val = tables[i].find(id);
		if(ret_val != tables[i].end()) {
			return ret_val->second;
		}
	}
	std::cout << id << std::endl;
	throw "Could not find type";
}

void TypesTable::enter_scope(){
	std::map<std::string, Type*> next_table;
	tables.push_back(next_table);
}

void TypesTable::exit_scope(){
	tables.pop_back();
}

TypesTable types_table;
