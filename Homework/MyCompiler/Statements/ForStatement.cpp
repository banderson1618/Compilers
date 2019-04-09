#include "ForStatement.hpp"
#include "AssignStatement.hpp"
#include "Expressions/Expression.hpp"
#include "Expressions/LvalueExpression.hpp"
#include "Expressions/SuccExpression.hpp"
#include "Expressions/PredExpression.hpp"
#include "Expressions/GeqExpression.hpp"
#include "Expressions/LeqExpression.hpp"
#include "AssignStatement.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/SymbolTable.hpp"
#include "Misc_Classes/UsefulFunctions.hpp"
#include <iostream>
#include <string>
#include "Misc_Classes/Type.hpp"


extern SymbolTable symbol_table;
extern RegisterPool register_pool;

extern PrimitiveType* int_type;
extern PrimitiveType* char_type;

ForStatement::ForStatement(std::string _for_var_id, Expression* _init_var_val, Expression* _bool_expr, std::vector<Statement*>* _statement_seq, ForRunOptions to_or_downto){
	for_var_id = _for_var_id;
	for_var_init_val = _init_var_val;
	
	switch (to_or_downto){
		case DOWNTO:{
			is_downto = true;
			break;
		}
		case TO:{
			is_downto = false;
			break;
		}
	}

	statement_seq = _statement_seq;
	bool_expr = _bool_expr;
}

std::string get_init_base_reg(){
	if(symbol_table.get_scope() == 2) return "$gp";
	else return "$sp";
}


void assign_init_val(std::string for_var_id, Expression* for_var_init_val){
	ExpressionResult init_val_result = for_var_init_val->emit();

	if(for_var_init_val->type != int_type && for_var_init_val->type != char_type){
		throw "For count variable must be int or char";
	}
	std::string for_var_base_reg = get_init_base_reg();

	try{
		symbol_table.get_value(for_var_id);
	}catch(const char* msg){
		symbol_table.add_value(for_var_id, for_var_base_reg, for_var_init_val->type);
	}
	
	
	auto lval_expr = new LvalueExpression(for_var_id);
	auto lval_result = lval_expr->emit();
	Lvalue* lval = lval_result.lval;

	std::string for_var_reg = get_reg_from_result(init_val_result);
	std::cout << "\tsw\t" << for_var_reg << ", " << lval->offset << "(" << for_var_base_reg << ")\t#Assign for loop variable" << std::endl;

	register_pool.return_register(for_var_reg);	
}

void ForStatement::decr_for_var(){
	auto for_var_expr = new LvalueExpression(for_var_id);
	auto for_loop_decr = new AssignStatement(for_var_expr, new PredExpression(for_var_expr));
	for_loop_decr->emit();
}

void ForStatement::incr_for_var(){
	auto for_var_expr = new LvalueExpression(for_var_id);
	auto for_loop_decr = new AssignStatement(for_var_expr, new SuccExpression(for_var_expr));
	for_loop_decr->emit();
}

std::string ForStatement::get_bool_reg(){
	auto for_var_expr = new LvalueExpression(for_var_id);
	ExpressionResult for_bool_result;

	if(is_downto){
		auto geq_expr = new GeqExpression(for_var_expr, bool_expr);
		for_bool_result = geq_expr->emit();
	}
	else{
		auto leq_expr = new LeqExpression(for_var_expr, bool_expr);
		for_bool_result = leq_expr->emit();
	}	
	return get_reg_from_result(for_bool_result);
}


void ForStatement::emit(){
	std::string head_label = "for_head_" + std::to_string(for_label_num);
	std::string end_label = "for_end_" + std::to_string(for_label_num);
	for_label_num++;

	//symbol_table.enter_scope();
	assign_init_val(for_var_id, for_var_init_val);

	std::cout << head_label << ":" << std::endl;
	
	std::string bool_reg = get_bool_reg();
	std::cout << "\tbeq\t" << bool_reg << ", $zero, " << end_label << "\t\t#If false, end for loop" << std::endl;
	register_pool.return_register(bool_reg);

	for(int i = 0; i < statement_seq->size(); i++){
		(*statement_seq)[i]->emit();
	}

	if(is_downto){
		decr_for_var();
	}
	else{
		incr_for_var();
	}
	std::cout << "\tj " << head_label << std::endl;
	std::cout << end_label << ":" << std::endl;
	//symbol_table.exit_scope();
}

int ForStatement::for_label_num = 1;






