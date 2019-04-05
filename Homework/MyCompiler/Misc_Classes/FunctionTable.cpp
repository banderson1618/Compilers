#include "FunctionTable.hpp"

#include <string>
#include <map>
#include <vector>
#include <iostream>

FunctionTable::FunctionTable(){
	std::map<std::string, FuncPrototype> first_table;
	tables.push_back(first_table);
}

void FunctionTable::add_value(std::string id, FuncPrototype func_prototype){
	tables.back().insert(std::pair<std::string, FuncPrototype>(id, func_prototype));
}


FuncPrototype FunctionTable::get_value(std::string id){	
	for(int i = tables.size() - 1; i >= 0; i--){
		auto ret_val = tables[i].find(id);
		if(ret_val != tables[i].end()) {
			return ret_val->second;
		}
	}
	std::cout << id << std::endl;
	throw "Could not find function prototype";
}

void FunctionTable::enter_scope(){
	std::map<std::string, FuncPrototype> next_table;
	tables.push_back(next_table);
}

void FunctionTable::exit_scope(){
	tables.pop_back();
}

FunctionTable function_table;
