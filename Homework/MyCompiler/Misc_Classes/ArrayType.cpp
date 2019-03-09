#include "ArrayType.hpp"
#include <iostream>


ArrayType::ArrayType(int _lower_bound, int _upper_bound, Type* _elem_type)
	: lower_bound(_lower_bound), upper_bound(_upper_bound), elem_type(_elem_type)
{
	num_elems = (upper_bound - lower_bound) + 1;
}


int ArrayType::get_lower_bound(){ return this->lower_bound; }
int ArrayType::get_upper_bound(){ return this->upper_bound; }
int ArrayType::get_elem_size(){ return elem_type->size(); }
Type* ArrayType::get_elem_type(){ return elem_type; }

int ArrayType::size(){
	return num_elems * elem_type->size();
}
