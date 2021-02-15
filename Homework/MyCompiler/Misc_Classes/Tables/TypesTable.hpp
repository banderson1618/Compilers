#ifndef TYPES_TABLE_H
#define TYPES_TABLE_H

#include "../Type.hpp"

#include <vector>
#include <map>
#include <string>


class TypesTable{
	public:
		TypesTable();

		void add_value(std::string, Type*);
		Type* get_value(std::string);

		void enter_scope();
		void exit_scope();
		
	private:
		std::vector<std::map<std::string, Type*>> tables;
};

#endif

