#include "UsefulFunctions.hpp"
#include "RegisterPool.hpp"
#include "SymbolTable.hpp"
#include <iostream>
#include <string>

extern RegisterPool register_pool;

std::string load_int(int int_val){
	std::string ret_reg = register_pool.get_register();
	std::cout << "\tli\t" << ret_reg << ", " << int_val << "\t\t#Int expression" << std::endl;
	return ret_reg;
}

std::string load_character(int char_val){
	std::string ret_reg = register_pool.get_register();
	std::cout << "\tli\t" << ret_reg << ", " << char_val << "\t#Char expression" << std::endl;
	return ret_reg;
}


std::string load_lval(Lvalue* lval){
	std::string ret_reg = register_pool.get_register();
	std::cout << "\tlw\t" << ret_reg << ", " << lval->offset << "($sp)\t#lvalue being retrieved" << std::endl;
	return ret_reg;
}


std::string get_reg_from_result(ExpressionResult result){
	switch (result.result_type){
		case reg: return result._register;
		case lval: return load_lval(result.lval);
		case const_int: return load_int(result.const_val);
		case const_char: return load_character(result.const_val);
	}
}


