#include "ArrayType.hpp"


ArrayType::ArrayType(int _lower_bound, int _upper_bound, Type* _elem_type)
	: lower_bound(_lower_bound), upper_bound(_upper_bound), elem_type(_elem_type)
{
	num_elems = (upper_bound - lower_bound) + 1;
}

int ArrayType::size(){
	return num_elems * elem_type->size();
}
