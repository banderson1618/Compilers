#include "FuncExpression.hpp"

FuncExpression::FuncExpression(char *id,std::vector<Expression*> *args_list){
	_id = id;
	_args_list = args_list;
}
