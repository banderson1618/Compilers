%{
#include <stdlib.h>
#include "y.tab.h"
#include "tokens.hpp"

#define ARRAY_TOKEN 0
#define BEGIN_TOKEN 1
#define CHR_TOKEN 2
#define CONST_TOKEN 3
#define DO_TOKEN 4
#define DOWNTO_TOKEN 5
#define ELSE_TOKEN 6
#define ELSEIF_TOKEN 7
#define END_TOKEN 8
#define FOR_TOKEN 9
#define FORWARD_TOKEN 10
#define FUNCTION_TOKEN 11
#define IF_TOKEN 12
#define OF_TOKEN 13
#define ORD_TOKEN 14
#define PRED_TOKEN 15
#define PROCEDURE_TOKEN 16
#define READ_TOKEN 17
#define RECORD_TOKEN 18
#define REF_TOKEN 19
#define REPEAT_TOKEN 20
#define RETURN_TOKEN 21
#define STOP_TOKEN 22
#define SUCC_TOKEN 23
#define THEN_TOKEN 24
#define TO_TOKEN 25
#define TYPE_TOKEN 26
#define UNTIL_TOKEN 27
#define VAR_TOKEN 28
#define WHILE_TOKEN 29
#define WRITE_TOKEN 30

#define ID_TOKEN 31
#define ADD_TOKEN 32
#define SUB_TOKEN 33
#define MULT_TOKEN 34
#define DIV_TOKEN 35
#define AND_TOKEN 36
#define OR_TOKEN 37
#define TILDE_TOKEN 38
#define EQ_TOKEN 39
#define NEQ_TOKEN 40
#define LESS_TOKEN 41
#define GREATER_TOKEN 42
#define LEQ_TOKEN 42
#define GEQ_TOKEN 44
#define PER_TOKEN 45
#define COMMA_TOKEN 46
#define COLON_TOKEN 47
#define SEMICOLON_TOKEN 48
#define LPAREN_TOKEN 49
#define RPAREN_TOKEN 50
#define LBRACKET_TOKEN 51
#define RBRACKET_TOKEN 52
#define ASSIGN_TOKEN 53
#define REMAIN_TOKEN 54
#define NUM_TOKEN 55
#define CHAR_TOKEN 56
#define STRING_TOKEN 57
#define COMMENT_TOKEN 58
%}

%%

array|ARRAY {return ARRAY_TOKEN;}
begin|BEGIN {return BEGIN_TOKEN;}
chr|CHR {return CHR_TOKEN;}
const|CONST {return CONST_TOKEN;}
do|DO {return DO_TOKEN;}
downto|DOWNTO {return DOWNTO_TOKEN;}
else|ELSE {return ELSE_TOKEN;}
elseif|ELSEIF {return ELSEIF_TOKEN;}
end|END {return END_TOKEN;}
for|FOR {return FOR_TOKEN;}
forward|FORWARD {return FORWARD_TOKEN;}
function|FUNCTION {return FUNCTION_TOKEN;}
if|IF {return IF_TOKEN;}
of|OF {return OF_TOKEN;}
ord|ORD {return ORD_TOKEN;}
pred|PRED {return PRED_TOKEN;}
procedure|PROCEDURE {return PROCEDURE_TOKEN;}
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

[A-Za-z][A-Zaz0-9_]* { yylval.id = strdup(yytext); return ID_TOKEN; }

'+' {return ADD_TOKEN;}
'-' {return SUB_TOKEN;}
'*' {return MULT_TOKEN;}
'/' {return DIV_TOKEN;}
& {return AND_TOKEN;}
'|' {return OR_TOKEN;}
~ {return TILDE_TOKEN;}
= {return EQ_TOKEN;}
'<>' {return NEQ_TOKEN;}
'<' {return LESS_TOKEN;}
'>' {return GREATER_TOKEN;}
'<=' {return LEQ_TOKEN;}
'>=' {return GEQ_TOKEN;}
'.' {return PER_TOKEN;}
',' {return COMMA_TOKEN;}
':' {return COLON_TOKEN;}
';' {return SEMICOLON_TOKEN;}

'\(' {return LPAREN_TOKEN;}
'\)' {return RPAREN_TOKEN;}

']' {return RBRACKET_TOKEN;}
:= {return ASSIGN_TOKEN;}
% {return REMAIN_TOKEN;}


[0x][0-9a-e]* {yylval.val = atoi(yytext); return NUM_TOKEN;}
[0][0-7]* {yylval.val = atoi(yytext); return NUM_TOKEN;}
[1-9][0-9]* {yylval.val = atoi(yytext); return NUM_TOKEN;}

['][a-zA-Z^"]['] {return CHAR_TOKEN;}
["][.]*["] {return STRING_TOKEN;}

[$][.]* {return COMMENT_TOKEN;}



%%


