%{
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
extern int yylex();
#include "parser.hpp"
#define yyterminate() return END_OF_FILE

int linenumber = 1;
bool testing = false;
%}

%option noyywrap

%%




array|ARRAY {if(testing){std::cout << "Got To array" << std::endl;}return ARRAY_TOKEN;}
begin|BEGIN {return BEGIN_TOKEN;}
chr|CHR {return CHR_TOKEN;}
const|CONST {return CONST_TOKEN;}
do|DO {return DO_TOKEN;}
downto|DOWNTO {return DOWNTO_TOKEN;}
else|ELSE {return ELSE_TOKEN;}
elseif|ELSEIF {return ELSEIF_TOKEN;}
end|END {if(testing){std::cout << "Got To END" << std::endl;}return END_TOKEN;}
for|FOR {return FOR_TOKEN;}
forward|FORWARD {return FORWARD_TOKEN;}
function|FUNCTION {return FUNCTION_TOKEN;}
if|IF {return IF_TOKEN;}
of|OF {return OF_TOKEN;}
ord|ORD {return ORD_TOKEN;}
pred|PRED {return PRED_TOKEN;}
procedure|PROCEDURE {return PROC_TOKEN;}
read|READ {return READ_TOKEN;}
record|RECORD {return RECORD_TOKEN;}
ref|REF {return REF_TOKEN;}
repeat|REPEAT {return REPEAT_TOKEN;}
return|RETURN {return RETURN_TOKEN;}
stop|STOP {return STOP_TOKEN;}
succ|SUCC {return SUCC_TOKEN;}
then|THEN {return THEN_TOKEN;}
to|TO {return TO_TOKEN;}
type|TYPE {if(testing){std::cout << "Got To type" << std::endl;}return TYPE_TOKEN;}
until|UNTIL {return UNTIL_TOKEN;}
var|VAR {return VAR_TOKEN;}
while|WHILE {return WHILE_TOKEN;}
write|WRITE {if(testing){std::cout << "Got To write" << std::endl;}return WRITE_TOKEN;}


\+ {if(testing){std::cout << "Got To +" << std::endl;}return ADD_TOKEN;}
- {if(testing){std::cout << "Got To -" << std::endl;}return SUB_TOKEN;}
\* {if(testing){std::cout << "Got To *" << std::endl;}return MULT_TOKEN;}
\/ {if(testing){std::cout << "Got To /" << std::endl;}return DIV_TOKEN;}
& {if(testing){std::cout << "Got To &" << std::endl;}return AND_TOKEN;}
\| {if(testing){std::cout << "Got To |" << std::endl;}return OR_TOKEN;}
~ {if(testing){std::cout << "Got To ~" << std::endl;}return TILDE_TOKEN;}
= {if(testing){std::cout << "Got To =" << std::endl;}return EQ_TOKEN;}
\<\> {if(testing){std::cout << "Got To <>" << std::endl;}return NEQ_TOKEN;}
\<\= {if(testing){std::cout << "Got To <=" << std::endl;}return LEQ_TOKEN;}
\>\= {if(testing){std::cout << "Got To >=" << std::endl;}return GEQ_TOKEN;}
\< {if(testing){std::cout << "Got To <" << std::endl;}return LESS_TOKEN;}
\> {if(testing){std::cout << "Got To >" << std::endl;}return GREATER_TOKEN;}
\. {if(testing){std::cout << "Got To ." << std::endl;}return PER_TOKEN;}
, {if(testing){std::cout << "Got To ," << std::endl;}return COMMA_TOKEN;}
: {if(testing){std::cout << "Got To :" << std::endl;}return COLON_TOKEN;}
; {if(testing){std::cout << "Got To ;" << std::endl;}return SEMICOLON_TOKEN;}
\( {if(testing){std::cout << "Got To (" << std::endl;}return LPAREN_TOKEN;}
\) {if(testing){std::cout << "Got To )" << std::endl;}return RPAREN_TOKEN;}
\[ {if(testing){std::cout << "Got To [" << std::endl;}return LBRAC_TOKEN;}
\] {if(testing){std::cout << "Got To ]" << std::endl;}return RBRAC_TOKEN;}
:= {if(testing){std::cout << "Got To ASSIGN" << std::endl;}return ASSIGN_TOKEN;}
% {if(testing){std::cout << "Got To %" << std::endl;}return REMAIN_TOKEN;}

[ \t]* {}
[\n\r] { linenumber++; }

[1-9][0-9]* {if(testing){
			std::cout << "Got To number " << yytext << std::endl;
		}
		yylval.val=atoi(yytext);
		return NUM_TOKEN;}
0	{if(testing){
			std::cout << "Got To number " << yytext << std::endl;
		}
		yylval.val=atoi(yytext);
		return NUM_TOKEN;}
0x[0-9a-fA-F]+ { if(testing){
			std::cout << "Got To number " << yytext << std::endl;
		}
		yylval.val = atoi(yytext); 
		return NUM_TOKEN;}
0[1-7][0-7]* {std::cout << "Got To number " << yytext << std::endl;
		yylval.val = atoi(yytext); 
		return NUM_TOKEN;}


\'([^\\\"]|\\.)\'  {if(testing){std::cout << "Got To Char " << yytext <<std::endl;}return CHAR_TOKEN;}
\"([^\\\"]|\\.)*\" {if(testing){std::cout << "Got To String " << yytext <<std::endl;}return STRING_TOKEN;}

[$].+\n {linenumber++;if(testing){std::cout<< "Got a Comment" << yytext << std::endl;}}




([A-Za-z][A-Za-z0-9_]*) { 	if(testing){std::cout << "Got To ID_TOKEN " << yytext<< std::endl;}
				yylval.id = strdup(yytext); 
				return ID_TOKEN; }



%%


