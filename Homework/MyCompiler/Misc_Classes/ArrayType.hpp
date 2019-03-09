#ifndef ARRAY_TYPE_H
#define ARRAY_TYPE_H

#include "Type.hpp"


class ArrayType : public Type{
	public:
		ArrayType(int, int, Type*);
		int size();
		int get_lower_bound();
		int get_upper_bound();
		int get_elem_size();
		Type* get_elem_type();

	private:
		int lower_bound;
		int upper_bound;
		int num_elems;
		Type* elem_type;
};


#endif
