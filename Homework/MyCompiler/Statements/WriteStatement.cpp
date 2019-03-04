#include "WriteStatement.hpp"
#include "Expressions/Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/Type.hpp"
#include "Misc_Classes/StringTable.hpp"
#include <string>
#include <vector>
#include <iostream>

extern int label_num;

extern StringTable string_table;

extern PrimitiveType* int_type;
extern PrimitiveType* char_type;
extern PrimitiveType* bool_type;
extern PrimitiveType* string_type;

WriteStatement::WriteStatement(std::vector<Expression*>* args){
	_args = args;
}

std::string get_string_label(std::string str){
	std::string str_label = string_table.get_string_label(str);
	if (str_label == ""){
		str_label = string_table.add_string(str);
	}

	return str_label;
}

void write_bool(std::string reg_to_print, RegisterPool* register_pool){
	label_num++;
	std::string label = "label" + std::to_string(label_num);
	std::cout << "\tli\t$v0,4" << "\t\t#Write bool" << std::endl;

	std::string true_str_label = get_string_label("true");
	std::string false_str_label = get_string_label("false");

	std::cout << "\tla\t$a0, " << false_str_label << std::endl; // load "false"
	std::cout << "\tbeq\t" << reg_to_print << ", $zero" << ", " << label << std::endl; // if false, jump to syscall
	std::cout << "\tla\t$a0, " << false_str_label << std::endl; // otherwise, load "true"
	std::cout << label << ":" << std::endl;
	register_pool->return_register(reg_to_print);
}

void write_integer(std::string reg_to_print, RegisterPool* register_pool){
	std::cout << "\tli\t$v0,1" << "\t\t#Write integer"<< std::endl;
	std::cout << "\tmove\t$a0, " << reg_to_print << std::endl;
	register_pool->return_register(reg_to_print);
}

void write_char(std::string reg_to_print, RegisterPool* register_pool){
	std::cout << "\tli\t$v0,11" << "\t\t#Write character"<< std::endl;
	std::cout << "\tmove\t$a0, " << reg_to_print << std::endl;
	register_pool->return_register(reg_to_print);
}

void write_string(std::string reg_to_print){
	std::cout << "\tli\t$v0,4" << "\t\t#Write string" << std::endl;
	std::cout << "\tla\t$a0, " << reg_to_print << std::endl;

}

void WriteStatement::emit(RegisterPool* register_pool){
	for (int i = 0; i < _args->size(); i++){
		std::string reg_to_print = (*_args)[i]->emit(register_pool);
		Expression* expr = (*_args)[i];
		if (expr->type == string_type){
			write_string(reg_to_print);
		}
		else if (expr->type == char_type){
			write_char(reg_to_print, register_pool);
		}
		else if (expr->type == bool_type){
			//write_bool(reg_to_print, register_pool);
			write_integer(reg_to_print, register_pool);
		}
		else{
			write_integer(reg_to_print, register_pool);
		}
		
		std::cout << "\tsyscall" << std::endl;
 	}
}


