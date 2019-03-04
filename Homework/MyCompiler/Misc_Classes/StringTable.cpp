#include "StringTable.hpp"

#include <string>
#include <map>
#include <vector>
#include <iostream>

StringTable::StringTable(){
	next_id = 1;		
}

std::string StringTable::add_string(std::string string_to_store){
	std::string label = "msg" + std::to_string(next_id);
	next_id++;
	string_ids.insert(std::pair<std::string, std::string>(string_to_store, label));
	return label;
}


std::string StringTable::get_string_label(std::string id){
	auto ret_val = string_ids.find(id);
	if(ret_val != string_ids.end()) {
		return ret_val->second;
	}
	return "";
}

void StringTable::write_strings(){
	std::cout << "\n\n# Writing out strings used in the program" << std::endl;
	for(auto it = string_ids.begin(); it != string_ids.end(); ++it){
		std::cout << it->second << ":\t.asciiz \"" << it->first << "\"" << std::endl;
	}
}

StringTable string_table;
