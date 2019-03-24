#include "LvalueExpression.hpp"
#include "Misc_Classes/SymbolTable.hpp"
#include "Misc_Classes/Type.hpp"
#include "Misc_Classes/RecordType.hpp"
#include "Misc_Classes/ArrayType.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/UsefulFunctions.hpp"
#include <string>
#include <iostream>

extern SymbolTable symbol_table;
extern PrimitiveType* string_type;
extern PrimitiveType* int_type;
extern PrimitiveType* bool_type;
extern PrimitiveType* char_type;
extern RegisterPool register_pool;


LvalueExpression::LvalueExpression(std::string _id){
	id = _id;
	sub_attribute = "";
	lval_type = Normal;
}

LvalueExpression::LvalueExpression(LvalueExpression* lval_expr, Expression* expr){
	_lval_expr = lval_expr;
	_expr = expr;
	_lval = NULL;
	id = "";
	sub_attribute = "";
	lval_type = Array;
}

LvalueExpression::LvalueExpression(LvalueExpression* base_lval, std::string _sub_attribute){
	_lval_expr = base_lval;
	id = "";
	sub_attribute = _sub_attribute;
	lval_type = Record;
}

Type* LvalueExpression::get_type(){
	return type;
}


Lvalue* copy_lval(Lvalue lval){
	Lvalue* ret_val = new Lvalue;
	ret_val->offset = lval.offset;
	ret_val->type = lval.type;
	ret_val->string_label = lval.string_label;
	ret_val->is_const = lval.is_const;
	ret_val->const_val = lval.const_val;
	return ret_val;
}

void LvalueExpression::set_lvals(){
	if (id == "" && sub_attribute == "") return;

	Lvalue base;

	switch (lval_type){
		case Record:{
			_lval_expr->emit();
			RecordType* rec_type = dynamic_cast<RecordType*>(_lval_expr->get_type());
			base = rec_type->get_value(sub_attribute);
			break;
		}
		case Normal:{
			base = symbol_table.get_value(id);
			_lval_expr = NULL;
			break;
		}
		default:{
			throw "Shouldn't be array type here";
		}
	};

	_lval = copy_lval(base);
	type = _lval->type;
	_expr = NULL;
}



ExpressionResult LvalueExpression::emit(){
	set_lvals();
	if (_lval != NULL){
		if (_lval->is_const){		
			return make_const_lval();
		}
		else{
			return make_var_lval();
		}
	}
	else{
		return make_array_lval();
	}	
}

ExpressionResult LvalueExpression::make_array_lval(){
	_lval_expr->emit();

	type = dynamic_cast<ArrayType*>(_lval_expr->type)->get_elem_type();
	ExpressionResult ret_result;

	ret_result.type = this->type;
	ret_result.result_type = arr_lval;
	ret_result.lval_expr = _lval_expr;
	ret_result.index = _expr;

	return ret_result;
}


ExpressionResult LvalueExpression::make_const_lval(){
	ExpressionResult ret_result;
	if (_lval->type == char_type) 	 ret_result.result_type = const_char;
	else if(_lval->type == int_type || _lval->type == bool_type) ret_result.result_type = const_int;
	else throw "Const lval is not int, bool or char, somehow?";
	ret_result.const_val = _lval->const_val;
	return ret_result;
}


ExpressionResult LvalueExpression::make_var_lval(){
	ExpressionResult ret_result;
	if (_lval->type == string_type){
		ret_result.result_type = reg;
		ret_result._register = _lval->string_label;
		return ret_result;
	}
	else{
		ret_result.result_type = lval;
		ret_result.lval = _lval;
		return ret_result;
	}
}
