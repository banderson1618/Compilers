#include "ArrayType.hpp"
#include <iostream>


ArrayType::ArrayType(int _lower_bound, int _upper_bound, Type* _elem_type)
	: lower_bound(_lower_bound), upper_bound(_upper_bound), elem_type(_elem_type)
{	
	std::cout << "Lower bound: " << lower_bound << std::endl;
	std::cout << "Upper bound: " << upper_bound << std::endl;
	num_elems = (upper_bound - lower_bound) + 1;
	std::cout << "Num elems: " << num_elems << std::endl;
}

int ArrayType::size(){
	return num_elems * elem_type->size();
}
