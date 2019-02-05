%{
#include <ctype.h>
%}

%union
{
	int val;
	char* id;
}
%%

line : '\n' {printf("%d\n", 1);}

%%

yylex(){
	int c;
	c = getchar();
	return c;
}


