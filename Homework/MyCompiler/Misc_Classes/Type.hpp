#ifndef TYPE_H
#define TYPE_H

class Type{
	public:
		virtual int size();
};


class PrimitiveType : public Type{
	public:
		PrimitiveType();
		int size() override {return 4;}
};


#endif
