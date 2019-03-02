#ifndef TYPE_H
#define TYPE_H

class Type{
	public:
		Type();
		virtual int size();
};


class PrimitiveType : public Type{
	public:
		PrimitiveType();
		int size();
};


#endif
