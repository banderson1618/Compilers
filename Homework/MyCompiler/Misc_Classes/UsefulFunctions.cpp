#include "UsefulFunctions.hpp"
#include "RegisterPool.hpp"
#include "SymbolTable.hpp"
#include "ArrayType.hpp"
#include "Expressions/LvalueExpression.hpp"
#include <iostream>
#include <string>

extern RegisterPool register_pool;

std::string get_reg_from_result(ExpressionResult);

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


std::string get_final_offset_reg(ExpressionResult lval_result, ExpressionResult expr_result){
	std::string expr_reg = get_reg_from_result(expr_result);
	Lvalue* base_lval = lval_result.lval;
	ArrayType* arr_type = dynamic_cast<ArrayType*>(base_lval->type);

	std::cout << "\taddi\t" << expr_reg << ", " << expr_reg << ", " << -1 * arr_type->get_lower_bound() << "\t\t#Add the lower bound to the array index" << std::endl;

	std::string temp_reg = register_pool.get_register();
	std::cout << "\tli\t" << temp_reg << ", " << arr_type->get_elem_size() << "\t\t#Multiply by the size of items in the array" << std::endl;
	std::cout << "\tmult\t" << expr_reg << ", " << temp_reg << std::endl;
	register_pool.return_register(temp_reg);
	std::cout << "\tmflo\t" << expr_reg << "\t\t#Save multiplied value in expr register" << std::endl;

	std::cout << "\tadd\t" << expr_reg << ", " << expr_reg << ", " << base_lval->offset << "\t\t# This is now the offset in absolute terms into memory" << std::endl; 

	std::cout << "\tadd\t" << expr_reg << ", " << expr_reg << ", $sp\t\t#This is now the offset into the global memory location" << std::endl; 
	return expr_reg;
}


std::string add_offsets(ExpressionResult lval_result, ExpressionResult expr_result){
	std::string lval_offset_reg = get_array_offset_reg(lval_result);
	ArrayType* arr_type = dynamic_cast<ArrayType*>(lval_result.type);

	std::string expr_reg = get_reg_from_result(expr_result);

	std::cout << "\taddi\t" << expr_reg << ", " << expr_reg << ", " << -1 * arr_type->get_lower_bound() << "\t\t#Add the lower bound to the array index" << std::endl;

	std::string temp_reg = register_pool.get_register();
	std::cout << "\tli\t" << temp_reg << ", " << arr_type->get_elem_size() << "\t\t#Multiply by the size of an item in the array" << std::endl;
	std::cout << "\tmult\t" << expr_reg << ", " << temp_reg << std::endl;
	register_pool.return_register(temp_reg);
	std::cout << "\tmflo\t" << expr_reg << "\t\t#Save multiplied value in expr register" << std::endl;
	std::cout << "\tadd\t" << expr_reg << ", " << expr_reg << ", " << lval_offset_reg << "\t\t#Combine the offset of the local array with the offset of us in the greater array" << std::endl;
	register_pool.return_register(lval_offset_reg);	
	
	return expr_reg;
}


std::string get_array_offset_reg(ExpressionResult given_result){
	ExpressionResult lval_result = given_result.lval_expr->emit();
	ExpressionResult expr_result = given_result.index->emit();
	
	if (lval_result.result_type == lval){
		return get_final_offset_reg(lval_result, expr_result);
	}
	else{
		return add_offsets(lval_result, expr_result);	
	}
}


std::string load_arr_lval(ExpressionResult given_result){
	std::string offset_reg = get_array_offset_reg(given_result);
	std::cout << "\tlw\t" << offset_reg << ", 0(" << offset_reg << ")\t\t#the value of the array is now stored in a location" << std::endl;
	return offset_reg;
}


std::string get_reg_from_result(ExpressionResult result){
	switch (result.result_type){
		case reg: return result._register;
		case lval: return load_lval(result.lval);
		case const_int: return load_int(result.const_val);
		case const_char: return load_character(result.const_val);
		case arr_lval: return load_arr_lval(result);
	}
}


bool is_const(ExpressionResult result){
	return result.result_type == const_int || result.result_type == const_char;
}


