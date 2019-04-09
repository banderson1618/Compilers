#include "UsefulFunctions.hpp"
#include "RegisterPool.hpp"
#include "SymbolTable.hpp"
#include "TypesTable.hpp"
#include "ArrayType.hpp"
#include "RecordType.hpp"
#include "Type.hpp"
#include "Expressions/LvalueExpression.hpp"
#include "FunctionTable.hpp"
#include <iostream>
#include <string>
#include <vector>

extern RegisterPool register_pool;
extern TypesTable types_table;
extern SymbolTable symbol_table;
extern FunctionTable function_table;

extern PrimitiveType* int_type;
extern PrimitiveType* char_type;
extern PrimitiveType* bool_type;
extern PrimitiveType* string_type;

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
	std::cout << "\tlw\t" << ret_reg << ", " << lval->offset << "(" << lval->base_reg << ")\t#lvalue being retrieved" << std::endl;
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

	std::cout << "\tadd\t" << expr_reg << ", " << expr_reg << ", " << base_lval->base_reg << "\t\t#This is now the offset into the global memory location" << std::endl; 
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



ArrayType* make_array_type(Expression* lower_bound, Expression* upper_bound, TypeCreator* type_creator){
	ExpressionResult lower_bound_result = lower_bound->emit();
	ExpressionResult upper_bound_result = upper_bound->emit();

	if (!is_const(lower_bound_result) || !is_const(upper_bound_result)) throw "Array bounds must be constants!";

	return new ArrayType(lower_bound_result.const_val, upper_bound_result.const_val, get_type_from_type_creator(type_creator));
}

RecordType* make_record_type(std::vector<RecItem*>* rec_list){
	std::vector<std::vector<std::string>> id_lists;
	std::vector<Type*> type_list;
	for (int i = 0; i < rec_list->size();i++){
		auto curr_rec_item = (*rec_list)[i];
		id_lists.push_back(curr_rec_item->id_list);
		type_list.push_back(get_type_from_type_creator(curr_rec_item->type_creator));
	}
	auto id_list = id_lists[0];
	std::string temp_string = id_list[0];
	return new RecordType(id_lists, type_list);
}


Type* get_type_from_type_creator(TypeCreator* type_creator){
	switch(type_creator->type_type){
		case TypeType::simple:
		{
			return types_table.get_value(type_creator->base_id);
		}
		case TypeType::record:
		{
			return make_record_type(type_creator->rec_list);
		}
		case TypeType::array:
		{
			return make_array_type(type_creator->first_expr, type_creator->second_expr, type_creator->elem_type);
		}
	};
}


void add_vars_to_symbol_table(std::vector<std::string> ids, Type* type){
	for(int i = 0; i < ids.size(); i++){
		symbol_table.add_value(ids[i], "$gp", type);
	}
}

void add_vars_to_symbol_table(std::vector<std::string> ids, Type* type, std::string base_reg){
	for(int i = 0; i < ids.size(); i++){
		symbol_table.add_value(ids[i], base_reg, type);
	}
}


void add_const_to_table(std::string id, Expression* val){
	ExpressionResult expr_result = val->emit();
	if (val->type == string_type){
		symbol_table.add_value(id, string_type, expr_result._register);
	}
	else{
		symbol_table.add_const_val(id, val->type, expr_result.const_val);
	}
}


void add_type_to_table(std::string id, Type* new_type){
	types_table.add_value(id, new_type);
}

//---------------------------------------------------------------------------
//
// Function Calling
//
//---------------------------------------------------------------------------



void spill_registers(int size_to_save){
	std::cout << "#spilling all registers" << std::endl;
	for(int i = 0; i < 8; i++){
		std::cout << "\tsw\t$t" << i << ", " << (i*2) * 4 + (size_to_save - 72) << "($sp)" << std::endl;
		std::cout << "\tsw\t$s" << i << ", " << (i*2+1) * 4 + (size_to_save - 72)<< "($sp)" << std::endl;
	}
	std::cout << "\tsw\t$fp, " << size_to_save - 8 << "($sp)" << std::endl;
	std::cout << "\tsw\t$ra, " << size_to_save - 4 << "($sp)" << std::endl;
}

void load_registers(int size_to_save){
	std::cout << "#loading all registers" << std::endl;
	for(int i = 0; i < 8; i++){
		std::cout << "\tlw\t$t" << i << ", " << (i*2) * 4 + (size_to_save - 72) << "($sp)" << std::endl;
		std::cout << "\tlw\t$s" << i << ", " << (i*2+1) * 4 + (size_to_save - 72) << "($sp)" << std::endl;
	}
	std::cout << "\tlw\t$fp, " << size_to_save - 8 << "($sp)" << std::endl;
	std::cout << "\tlw\t$ra, " << size_to_save - 4 << "($sp)" << std::endl;
}

std::vector<std::string> get_arg_registers(FuncPrototype my_prototype, std::vector<Expression*>* args){
	if (my_prototype.arg_types.size() != args->size()){
		throw "Wrong number of args in function call";
	}
	
	std::vector<std::string> arg_registers;
	for(int i = 0; i < args->size(); i++){
		auto arg = (*args)[i];
		Type* expected_arg_type = my_prototype.arg_types[i];
		ExpressionResult arg_result = arg->emit();
		if (arg->type != expected_arg_type){
			throw "Function call args don't match function prototype"; 
		}
		arg_registers.push_back(get_reg_from_result(arg_result));	
	}
	return arg_registers;
}

int get_size_to_save(FuncPrototype prototype, std::vector<Expression*>* args){
	int registers_size = 72; // 4 * 16 = 64 for $t and $s, plus $fp and $ra
	
	int ret_val_size = 0;
	if (prototype.ret_type != NULL) {
		ret_val_size = prototype.ret_type->size();
	}

	int args_size = 0;
	for(int i = 0; i < args->size(); i++){
		args_size += (*args)[i]->type->size();
	}


	return registers_size + ret_val_size + args_size;
}


int save_to_stack(FuncPrototype prototype, std::vector<Expression*>* args, std::vector<std::string> arg_registers){
	int size_to_save = get_size_to_save(prototype, args);

	std::cout << "\taddi\t$sp, $sp, -" << size_to_save << "\t\t#add enough space to the stack to hold all the registers, the frame pointer, and the return address" << std::endl;
	spill_registers(size_to_save);

	std::cout << "#saving args" << std::endl;

	int offset = prototype.ret_type->size();

	for(int i = 0; i < arg_registers.size(); i++){
		std::cout << "\tsw\t" << arg_registers[i] << ", " << offset << "($sp)" << std::endl;
		offset += (*args)[i]->type->size();
	}

	return size_to_save;
}


void return_arg_registers(std::vector<std::string> arg_registers){
	for(int i = 0; i < arg_registers.size(); i++){
		register_pool.return_register(arg_registers[i]);
	}
}



ExpressionResult call_function(std::string id, std::vector<Expression*>* args){
	std::cout << "#Calling function" << std::endl;
	FuncPrototype my_prototype = function_table.get_value(id);
	std::vector<std::string> arg_registers = get_arg_registers(my_prototype, args);

	int size_to_save = save_to_stack(my_prototype, args, arg_registers);
	return_arg_registers(arg_registers);
	std::cout << "\tori\t$fp, $sp, 0\t\t#Set frame pointer to the stack pointer" << std::endl;
	std::cout << "\tjal\t" << my_prototype.func_label << "\t\t#Go to function" << std::endl;

	load_registers(size_to_save);

	std::string ret_reg = register_pool.get_register();
	std::cout << "\tlw\t" << ret_reg << ", 0($sp)\t\t#load return value" << std::endl;
	std::cout << "\taddi\t$sp, $sp, " << size_to_save <<  "\t\t#get that space back" << std::endl;

	ExpressionResult ret_result;
	ret_result.result_type = reg;
	ret_result._register = ret_reg;
	return ret_result;
}

























