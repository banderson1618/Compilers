#ifndef TYPE_H
#define TYPE_H

class Type{
	public:
		virtual int size();
};


class IntType : public Type{
	public:
		IntType() = default;
		int size() override {return 4;}
};

//extern IntType* int_type = new IntType();

class BoolType : public Type{
	public:
		BoolType() = default;
		int size() override {return 4;}
};

//extern BoolType* bool_type = new BoolType();

#endif
