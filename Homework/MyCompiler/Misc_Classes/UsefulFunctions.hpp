#ifndef USEFUL_FUNCTIONS_H
#define USEFUL_FUNCTIONS_H

#include "Expressions/Expression.hpp"
#include <string>


std::string load_character(int);

std::string load_int(int);

std::string get_reg_from_result(ExpressionResult);

bool is_const(ExpressionResult);

#endif
