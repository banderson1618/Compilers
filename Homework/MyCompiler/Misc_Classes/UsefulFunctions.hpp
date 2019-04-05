#ifndef USEFUL_FUNCTIONS_H
#define USEFUL_FUNCTIONS_H

#include "Expressions/Expression.hpp"
#include "Type.hpp"
#include "RecordType.hpp"
#include <string>

struct RecItem;

enum class VarRef { var, ref, neither };

enum class TypeType { array, record, simple };

struct TypeCreator {
	TypeType type_type;
	std::string base_id;
	std::vector<RecItem*>* rec_list;
	Expression* first_expr;
	Expression* second_expr;
	TypeCreator* elem_type;
};

struct ConstDecl {
	std::string id;
	Expression* expr;
};

struct TypeDecl {
	std::string id;
	TypeCreator* type_creator;
};

struct VarDecl {
	std::vector<std::string> id_list;
	TypeCreator* type_creator;
};

struct Param {
	VarRef* var_ref;
	std::vector<std::string> id_list;
	TypeCreator* type_creator;
};


std::string load_character(int);

std::string load_int(int);

std::string get_array_offset_reg(ExpressionResult);

std::string get_reg_from_result(ExpressionResult);

bool is_const(ExpressionResult);

Type* get_type_from_type_creator(TypeCreator*);

void add_const_to_table(std::string id, Expression* val);
void add_type_to_table(std::string id, Type* new_type);
void add_vars_to_symbol_table(std::vector<std::string> ids, Type* type);

#endif
