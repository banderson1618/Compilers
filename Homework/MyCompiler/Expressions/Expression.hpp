#ifndef EXPRESSION_H
#define EXPRESSION_H



class Expression{
	public:
		Expression();
		int type;
		virtual int getVal();
		virtual char getChar();
		virtual char* getID();
};


#endif
