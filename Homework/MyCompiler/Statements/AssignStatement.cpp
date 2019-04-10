#include "AssignStatement.hpp"
#include "Expressions/Expression.hpp"
#include "Expressions/LvalueExpression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/SymbolTable.hpp"
#include "Misc_Classes/UsefulFunctions.hpp"
#include <iostream>
#include <string>
#include "Misc_Classes/Type.hpp"

extern PrimitiveType* int_type;

extern SymbolTable symbol_table;
extern RegisterPool register_pool;
extern PrimitiveType* int_type;

AssignStatement::AssignStatement(LvalueExpression* id, Expression* val){
	_id = id;
	_val = val;
}

void AssignStatement::assign_array(ExpressionResult id_result){
	std::string offset_reg = get_array_offset_reg(id_result);
	std::string reg_to_save = get_reg_from_result(_val->emit());

	if (_val->type != id_result.type){
		throw "Type Error in assign statement";
	}

	
	for(int i = 0; i < id_result.type->size(); i+=4){
		std::cout << "\tsw\t" << reg_to_save << ", " << i << "(" << offset_reg << ")\t#Assign Array Value" << std::endl;
	}
	register_pool.return_register(reg_to_save);
	register_pool.return_register(offset_reg);
}

void AssignStatement::copy_big_data_single_val(Lvalue* lvalue){
	ExpressionResult expr_result = _val->emit();	

	if(expr_result.result_type == arr_lval){
		std::string expr_offset = get_array_offset_reg(expr_result);
		std::string temp_reg = register_pool.get_register();
		for(int i = 0; i < lvalue->type->size(); i+=4){
			std::cout << "\tlw\t" << temp_reg << ", " << i << "(" << expr_offset << ")\t#load Array Value to copy" << std::endl;		
			std::cout << "\tsw\t" << temp_reg << ", " << lvalue->offset + i << "(" << lvalue->base_reg << ")\t#Assign Array Value" << std::endl;
		}
		register_pool.return_register(temp_reg);
		register_pool.return_register(expr_offset);
	} 	
}


void AssignStatement::assign_single_val(ExpressionResult id_result){
	Lvalue* lval = id_result.lval;

	if (lval->type->size() != 4){ // assigning an array or a record
		copy_big_data_single_val(lval);
		return;
	}

	std::string reg_to_save = get_reg_from_result(_val->emit());

	if (_val->type != lval->type){
		throw "Type Error in assign statement";
	}
	
	std::cout << "\tsw\t" << reg_to_save << ", " << lval->offset << "(" << lval->base_reg << ")\t#Assign Statement" << std::endl;

	register_pool.return_register(reg_to_save);
}

void AssignStatement::emit(){
	ExpressionResult id_result = _id->emit();
	if (id_result.result_type == arr_lval){
		assign_array(id_result);
	}	
	else{
		assign_single_val(id_result);
	}
}
