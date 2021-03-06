#include "StringExpression.hpp"
#include "Misc_Classes/Tables/StringTable.hpp"
#include "Misc_Classes/Type.hpp"
#include <string>
#include <iostream>

extern StringTable string_table;
extern PrimitiveType* string_type;

StringExpression::StringExpression(char* val){
	this->_val = val;
	std::string str_val(_val);
	this->str_val = str_val.substr(1, str_val.size() - 2); // get rid of quotes around the value
}

ExpressionResult StringExpression::emit(){
	std::string ret_val = string_table.get_string_label(str_val);
	type = string_type;
	if(ret_val == ""){ // value is not in string table
		ret_val = string_table.add_string(str_val);
	}

	ExpressionResult ret_result;
	ret_result.result_type = reg;
	ret_result._register = ret_val;	
	
	return ret_result;
}
