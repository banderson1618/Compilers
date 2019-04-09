#include "WriteStatement.hpp"
#include "Expressions/Expression.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/Type.hpp"
#include "Misc_Classes/StringTable.hpp"
#include "Misc_Classes/UsefulFunctions.hpp"
#include <string>
#include <vector>
#include <iostream>

extern int label_num;

extern StringTable string_table;
extern RegisterPool register_pool;

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

void write_bool(std::string reg_to_print){
	label_num++;
	std::string label = "label" + std::to_string(label_num);
	std::cout << "\tli\t$v0,4" << "\t\t#Write bool" << std::endl;

	std::string true_str_label = get_string_label("true");
	std::string false_str_label = get_string_label("false");

	std::cout << "\tla\t$a0, " << false_str_label << std::endl; // load "false"
	std::cout << "\tbeq\t" << reg_to_print << ", $zero" << ", " << label << std::endl; // if false, jump to syscall
	std::cout << "\tla\t$a0, " << false_str_label << std::endl; // otherwise, load "true"
	std::cout << label << ":" << std::endl;
	register_pool.return_register(reg_to_print);
}

void write_integer(std::string reg_to_print){
	std::cout << "\tli\t$v0,1" << "\t\t#Write integer"<< std::endl;
	std::cout << "\tmove\t$a0, " << reg_to_print << std::endl;
	register_pool.return_register(reg_to_print);
}

void write_char(std::string reg_to_print){
	std::cout << "\tli\t$v0,11" << "\t\t#Write character"<< std::endl;
	std::cout << "\tmove\t$a0, " << reg_to_print << std::endl;
	register_pool.return_register(reg_to_print);
}

void write_string(std::string reg_to_print){
	std::cout << "\tli\t$v0,4" << "\t\t#Write string" << std::endl;
	std::cout << "\tla\t$a0, " << reg_to_print << std::endl;

}

void WriteStatement::emit(){
	for (int i = 0; i < _args->size(); i++){
		Expression* expr = (*_args)[i];
		std::string reg_to_print = get_reg_from_result(expr->emit());
		if (expr->type == string_type){
			write_string(reg_to_print);
		}
		else if (expr->type == char_type){
			write_char(reg_to_print);
		}
		else if (expr->type == bool_type){
			//write_bool(reg_to_print);
			write_integer(reg_to_print);
		}
		else if (expr->type == int_type){
			write_integer(reg_to_print);
		}
		else{
			throw "Can't write non-primitive";
		}
		
		std::cout << "\tsyscall" << std::endl;
 	}
}
