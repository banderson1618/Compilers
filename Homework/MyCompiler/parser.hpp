/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_HOME_BRADEN_DOCUMENTS_HOMEWORK_COMPILERS_HOMEWORK_MYCOMPILER_PARSER_HPP_INCLUDED
# define YY_YY_HOME_BRADEN_DOCUMENTS_HOMEWORK_COMPILERS_HOMEWORK_MYCOMPILER_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ARRAY_TOKEN = 258,
    BEGIN_TOKEN = 259,
    CHR_TOKEN = 260,
    CONST_TOKEN = 261,
    DO_TOKEN = 262,
    DOWNTO_TOKEN = 263,
    ELSE_TOKEN = 264,
    ELSEIF_TOKEN = 265,
    END_TOKEN = 266,
    FOR_TOKEN = 267,
    FORWARD_TOKEN = 268,
    FUNCTION_TOKEN = 269,
    IF_TOKEN = 270,
    OF_TOKEN = 271,
    ORD_TOKEN = 272,
    PRED_TOKEN = 273,
    PROCEDURE_TOKEN = 274,
    READ_TOKEN = 275,
    RECORD_TOKEN = 276,
    REF_TOKEN = 277,
    REPEAT_TOKEN = 278,
    RETURN_TOKEN = 279,
    STOP_TOKEN = 280,
    SUCC_TOKEN = 281,
    THEN_TOKEN = 282,
    TO_TOKEN = 283,
    TYPE_TOKEN = 284,
    UNTIL_TOKEN = 285,
    VAR_TOKEN = 286,
    WHILE_TOKEN = 287,
    WRITE_TOKEN = 288,
    ID_TOKEN = 289,
    ADD_TOKEN = 290,
    SUB_TOKEN = 291,
    MULT_TOKEN = 292,
    DIV_TOKEN = 293,
    AND_TOKEN = 294,
    OR_TOKEN = 295,
    TILDE_TOKEN = 296,
    EQ_TOKEN = 297,
    NEQ_TOKEN = 298,
    LESS_TOKEN = 299,
    GREATER_TOKEN = 300,
    LEQ_TOKEN = 301,
    GEQ_TOKEN = 302,
    PER_TOKEN = 303,
    COMMA_TOKEN = 304,
    COLON_TOKEN = 305,
    SEMICOLON_TOKEN = 306,
    LPAREN_TOKEN = 307,
    RPAREN_TOKEN = 308,
    LBRAC_TOKEN = 309,
    RBRAC_TOKEN = 310,
    ASSIGN_TOKEN = 311,
    REMAIN_TOKEN = 312,
    NUM_TOKEN = 313,
    CHAR_TOKEN = 314,
    STRING_TOKEN = 315,
    COMMENT_TOKEN = 316
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 75 "my_parser.y" /* yacc.c:1909  */

	int val;
	char* id;

#line 121 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HOME_BRADEN_DOCUMENTS_HOMEWORK_COMPILERS_HOMEWORK_MYCOMPILER_PARSER_HPP_INCLUDED  */
