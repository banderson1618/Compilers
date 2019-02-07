%{
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
extern int yylex();
#include "parser.hpp"
#define yyterminate() return END

int linenumber = 1;
%}

%option noyywrap

%%

array|ARRAY {return ARRAY_TOKEN;}
begin|BEGIN {std::cout << "Got here" << std::endl;return BEGIN_TOKEN;}
chr|CHR {return CHR_TOKEN;}
const|CONST {return CONST_TOKEN;}
do|DO {return DO_TOKEN;}
downto|DOWNTO {return DOWNTO_TOKEN;}
else|ELSE {return ELSE_TOKEN;}
elseif|ELSEIF {return ELSEIF_TOKEN;}
end|END {return END_TOKEN;}
for|FOR {printf("Found for\n");return FOR_TOKEN;}
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
type|TYPE {return TYPE_TOKEN;}
until|UNTIL {return UNTIL_TOKEN;}
var|VAR {return VAR_TOKEN;}
while|WHILE {return WHILE_TOKEN;}
write|WRITE {return WRITE_TOKEN;}


'+' {return ADD_TOKEN;}
'-' {return SUB_TOKEN;}
'*' {return MULT_TOKEN;}
\/ {return DIV_TOKEN;}
& {return AND_TOKEN;}
\| {return OR_TOKEN;}
~ {return TILDE_TOKEN;}
= {return EQ_TOKEN;}
'<>' {return NEQ_TOKEN;}
'<' {return LESS_TOKEN;}
'>' {return GREATER_TOKEN;}
'<=' {return LEQ_TOKEN;}
'>=' {return GEQ_TOKEN;}
'.' {return PER_TOKEN;}
, {return COMMA_TOKEN;}
: {return COLON_TOKEN;}
; {return SEMICOLON_TOKEN;}
\( {return LPAREN_TOKEN;}
\) {return RPAREN_TOKEN;}
\[ {return RBRAC_TOKEN;}
\] {return LBRAC_TOKEN;}
:= {return ASSIGN_TOKEN;}
% {return REMAIN_TOKEN;}

[ \t]* {}
[\n] { linenumber++; }

[0x][0-9a-e]* { yylval.val = atoi(yytext); 
		return NUM_TOKEN;}
[0][0-7]* {yylval.val = atoi(yytext); 
		return NUM_TOKEN;}
[1-9][0-9]* {yylval.val = atoi(yytext); 
		return NUM_TOKEN;}


['][a-zA-Z^"]['] {return CHAR_TOKEN;}
["][.]*["] {return STRING_TOKEN;}

[$][.]*\\n {;}



[A-Za-z][A-Zaz0-9_]* { 	std::cout << "Found ID token " << yytext << std::endl;
			yylval.id = strdup(yytext); 
			return ID_TOKEN; }



%%


