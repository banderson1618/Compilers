/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "my_parser.y" /* yacc.c:339  */

#include "Expressions/Expression.hpp"

#include "Expressions/LvalueExpression.hpp"

#include "Expressions/AndExpression.hpp"
#include "Expressions/OrExpression.hpp"
#include "Expressions/EqExpression.hpp"
#include "Expressions/NeqExpression.hpp"
#include "Expressions/LeqExpression.hpp"
#include "Expressions/GeqExpression.hpp"
#include "Expressions/LessExpression.hpp"
#include "Expressions/GreaterExpression.hpp"

#include "Expressions/AddExpression.hpp"
#include "Expressions/SuccExpression.hpp"
#include "Expressions/PredExpression.hpp"
#include "Expressions/BitwiseExpression.hpp"
#include "Expressions/DivExpression.hpp"
#include "Expressions/MultExpression.hpp"
#include "Expressions/NegExpression.hpp"
#include "Expressions/ParenExpression.hpp"
#include "Expressions/RemainExpression.hpp"
#include "Expressions/SubExpression.hpp"
#include "Expressions/ToCharExpression.hpp"
#include "Expressions/ToIntExpression.hpp"
#include "Expressions/FunctionCallExpression.hpp"


#include "Expressions/IntExpression.hpp"
#include "Expressions/CharExpression.hpp"
#include "Expressions/StringExpression.hpp"

#include "Statements/Statement.hpp"
#include "Statements/AssignStatement.hpp"
#include "Statements/ReadStatement.hpp"
#include "Statements/WriteStatement.hpp"
#include "Statements/NullStatement.hpp"
#include "Statements/StopStatement.hpp"
#include "Statements/RepeatStatement.hpp"
#include "Statements/WhileStatement.hpp"
#include "Statements/IfBlockStatement.hpp"
#include "Statements/IfStatement.hpp"
#include "Statements/ForStatement.hpp"
#include "Statements/FunctionCallStatement.hpp"
#include "Statements/ReturnStatement.hpp"

#include "Misc_Classes/Program.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/SymbolTable.hpp"
#include "Misc_Classes/TypesTable.hpp"
#include "Misc_Classes/StringTable.hpp"
#include "Misc_Classes/UsefulFunctions.hpp"

#include "Misc_Classes/Type.hpp"
#include "Misc_Classes/ArrayType.hpp"
#include "Misc_Classes/RecordType.hpp"
#include "Misc_Classes/Body.hpp"
#include "Misc_Classes/FunctionDeclaration.hpp"


#include "Misc_Classes/UsefulFunctions.hpp"

#include <ctype.h>
#include <iostream>
#include <map>
#include <vector>
#include <string>

extern int yylex();
extern int yyparse();
extern FILE *yyin;
extern SymbolTable symbol_table;
extern TypesTable types_table;
extern StringTable string_table;
extern RegisterPool register_pool;

extern PrimitiveType* int_type;
extern PrimitiveType* char_type;
extern PrimitiveType* bool_type;
extern PrimitiveType* string_type;

void yyerror(const char *s);
extern int linenumber;

bool testingParser = false;

std::vector<std::string> get_str_vec_from_chars_vec(std::vector<char*>* given_ids){
	std::vector<std::string> ret_vec;
	for(int i = 0; i < given_ids->size(); i++){
		char* char_val = (*given_ids)[i];
		std::string str_val(char_val);
		ret_vec.push_back(str_val);
	}
	return ret_vec;
}




#line 167 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.hpp".  */
#ifndef YY_YY_HOME_BRADEN_DOCUMENTS_COMPILERS_HOMEWORK_MYCOMPILER_CMAKE_PARSER_HPP_INCLUDED
# define YY_YY_HOME_BRADEN_DOCUMENTS_COMPILERS_HOMEWORK_MYCOMPILER_CMAKE_PARSER_HPP_INCLUDED
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
    END_OF_FILE = 0,
    END = 258,
    ARRAY_TOKEN = 259,
    BEGIN_TOKEN = 260,
    CHR_TOKEN = 261,
    CONST_TOKEN = 262,
    DO_TOKEN = 263,
    DOWNTO_TOKEN = 264,
    ELSE_TOKEN = 265,
    ELSEIF_TOKEN = 266,
    END_TOKEN = 267,
    FOR_TOKEN = 268,
    FORWARD_TOKEN = 269,
    FUNCTION_TOKEN = 270,
    IF_TOKEN = 271,
    OF_TOKEN = 272,
    ORD_TOKEN = 273,
    PRED_TOKEN = 274,
    PROC_TOKEN = 275,
    READ_TOKEN = 276,
    RECORD_TOKEN = 277,
    REF_TOKEN = 278,
    REPEAT_TOKEN = 279,
    RETURN_TOKEN = 280,
    STOP_TOKEN = 281,
    SUCC_TOKEN = 282,
    THEN_TOKEN = 283,
    TO_TOKEN = 284,
    TYPE_TOKEN = 285,
    UNTIL_TOKEN = 286,
    VAR_TOKEN = 287,
    WHILE_TOKEN = 288,
    WRITE_TOKEN = 289,
    ID_TOKEN = 290,
    ADD_TOKEN = 291,
    SUB_TOKEN = 292,
    MULT_TOKEN = 293,
    DIV_TOKEN = 294,
    AND_TOKEN = 295,
    OR_TOKEN = 296,
    TILDE_TOKEN = 297,
    EQ_TOKEN = 298,
    NEQ_TOKEN = 299,
    LESS_TOKEN = 300,
    GREATER_TOKEN = 301,
    LEQ_TOKEN = 302,
    GEQ_TOKEN = 303,
    PER_TOKEN = 304,
    COMMA_TOKEN = 305,
    COLON_TOKEN = 306,
    SEMICOLON_TOKEN = 307,
    LPAREN_TOKEN = 308,
    RPAREN_TOKEN = 309,
    LBRAC_TOKEN = 310,
    RBRAC_TOKEN = 311,
    ASSIGN_TOKEN = 312,
    REMAIN_TOKEN = 313,
    NUM_TOKEN = 314,
    CHAR_TOKEN = 315,
    STRING_TOKEN = 316
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 174 "my_parser.y" /* yacc.c:355  */

	int val;
	char* stringVal;
	char* id;
	Expression* expr;
	LvalueExpression* lval;
	std::vector<Expression*> *exprList;
	std::vector<Statement*> *statementList;
	std::vector<LvalueExpression*> *lvalList;
	std::vector<char*> *string_list;
	std::vector<IfStatement*>* if_list;
	Statement* statement;
	TypeCreator* type;
	RecItem* rec_item;
	std::vector<RecItem*>* rec_list;
	ConstDecl* const_decl;
	std::vector<ConstDecl*>* const_list;
	TypeDecl* type_decl;
	std::vector<TypeDecl*>* type_list;
	VarDecl* var_decl;
	std::vector<VarDecl*>* var_list;
	Param* param;
	std::vector<Param*>* param_list;
	FunctionDeclaration* func_decl;
	std::vector<FunctionDeclaration*>* func_decl_list;
	VarRef* var_ref;
	Body* body;

#line 299 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HOME_BRADEN_DOCUMENTS_COMPILERS_HOMEWORK_MYCOMPILER_CMAKE_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 316 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   588

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  241

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   236,   236,   244,   245,   246,   250,   252,   254,   256,
     258,   260,   262,   264,   266,   268,   270,   272,   274,   276,
     278,   280,   282,   284,   287,   290,   293,   296,   298,   300,
     312,   316,   319,   321,   325,   328,   330,   334,   335,   338,
     340,   342,   343,   345,   346,   348,   351,   353,   355,   359,
     360,   365,   372,   373,   377,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   393,   396,   398,   403,
     404,   406,   411,   414,   418,   419,   421,   426,   428,   432,
     433,   434,   436,   442,   449,   453,   459,   467,   478,   482,
     486,   487,   489,   491,   495,   504,   506,   510,   513,   515,
     519,   522,   524,   527,   533,   536,   538,   542,   544,   546,
     550,   553,   556,   559,   561,   563,   567
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "END_OF_FILE", "error", "$undefined", "END", "ARRAY_TOKEN",
  "BEGIN_TOKEN", "CHR_TOKEN", "CONST_TOKEN", "DO_TOKEN", "DOWNTO_TOKEN",
  "ELSE_TOKEN", "ELSEIF_TOKEN", "END_TOKEN", "FOR_TOKEN", "FORWARD_TOKEN",
  "FUNCTION_TOKEN", "IF_TOKEN", "OF_TOKEN", "ORD_TOKEN", "PRED_TOKEN",
  "PROC_TOKEN", "READ_TOKEN", "RECORD_TOKEN", "REF_TOKEN", "REPEAT_TOKEN",
  "RETURN_TOKEN", "STOP_TOKEN", "SUCC_TOKEN", "THEN_TOKEN", "TO_TOKEN",
  "TYPE_TOKEN", "UNTIL_TOKEN", "VAR_TOKEN", "WHILE_TOKEN", "WRITE_TOKEN",
  "ID_TOKEN", "ADD_TOKEN", "SUB_TOKEN", "MULT_TOKEN", "DIV_TOKEN",
  "AND_TOKEN", "OR_TOKEN", "TILDE_TOKEN", "EQ_TOKEN", "NEQ_TOKEN",
  "LESS_TOKEN", "GREATER_TOKEN", "LEQ_TOKEN", "GEQ_TOKEN", "PER_TOKEN",
  "COMMA_TOKEN", "COLON_TOKEN", "SEMICOLON_TOKEN", "LPAREN_TOKEN",
  "RPAREN_TOKEN", "LBRAC_TOKEN", "RBRAC_TOKEN", "ASSIGN_TOKEN",
  "REMAIN_TOKEN", "NUM_TOKEN", "CHAR_TOKEN", "STRING_TOKEN", "$accept",
  "program", "lvalue", "expr", "args_list", "args_list_lval",
  "null_statement", "procedure_call", "write_statement", "read_statement",
  "return_statement", "stop_statement", "for_statement",
  "repeat_statement", "while_statement", "if_statement", "elseif_list",
  "else_statement", "assign", "statement", "statement_seq", "const_decl",
  "eq_item", "eq_list", "type_decl", "type_item", "type_list", "type",
  "simple_type", "record_type", "rec_list", "rec_item", "array_type",
  "ident_list", "var_decl", "var_list", "var_item", "proc_decl",
  "proc_args", "func_decl", "formal_params", "param", "params_list",
  "varef", "body", "func_proc_list", "block", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316
};
# endif

#define YYPACT_NINF -114

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-114)))

#define YYTABLE_NINF -108

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-108)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -2,   -25,    17,   -11,   -18,  -114,   -25,  -114,    -5,    24,
      59,  -114,    23,  -114,    -5,    38,    54,    52,    74,    91,
      99,   100,    59,    59,    59,  -114,  -114,  -114,    15,   298,
       2,  -114,  -114,    34,    38,  -114,   121,   122,  -114,  -114,
      77,    59,    59,    59,    59,    59,    50,   103,   321,   123,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,  -114,    59,   104,    38,  -114,   110,  -114,
    -114,  -114,   128,     2,  -114,   111,   111,    55,  -114,  -114,
     116,   344,   367,   390,   413,   498,    45,  -114,  -114,   436,
     -30,   -30,    50,    50,   514,   498,   530,   530,   530,   530,
     530,   530,    50,    59,    -8,  -114,    63,  -114,  -114,   114,
       3,   117,   118,   140,    59,   124,    55,    59,  -114,    59,
     126,   135,    51,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,  -114,     6,   176,  -114,  -114,  -114,
    -114,    59,  -114,  -114,   459,  -114,  -114,     2,  -114,  -114,
    -114,   141,   144,   147,    38,     2,    22,   143,   236,   163,
       8,   498,   146,    59,    59,    59,  -114,    55,  -114,   498,
      59,   153,  -114,   -21,    82,   154,   155,   -11,   156,    59,
      55,  -114,    15,    72,    59,    55,    75,    80,   498,  -114,
     475,  -114,   171,     2,    84,  -114,    24,  -114,   213,     5,
     163,  -114,   498,     9,  -114,  -114,   161,  -114,   172,   186,
     234,    59,    59,    59,   125,    15,  -114,     2,  -114,  -114,
    -114,   173,   189,   259,    55,    59,   228,  -114,    55,    55,
      55,   191,   282,  -114,    10,    11,   191,    55,  -114,  -114,
     191
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      70,     0,     0,    75,     0,    72,    69,     1,     0,    91,
       0,    73,     0,    78,    74,     0,   115,     0,     0,     0,
       0,     3,     0,     0,     0,    28,    29,    30,     6,     0,
       0,    77,    88,     0,    90,    93,     0,     0,   112,   111,
       0,     0,     0,     0,     0,    33,    21,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    71,     0,     0,     0,    82,     0,    79,
      80,    81,     0,     0,    92,     0,     0,    37,   114,   113,
       0,     0,     0,     0,     0,    31,     0,    22,     4,     0,
      15,    16,    17,    18,     8,     7,     9,    10,    13,    14,
      11,    12,    19,     0,     0,    85,     0,    76,    89,     0,
     102,     0,     0,     0,     0,     0,    37,    41,    43,     0,
       0,     3,     0,    65,    64,    63,    62,    61,    60,    59,
      58,    57,    56,    55,    66,     0,     0,    24,    25,    26,
      27,     0,    23,     5,     0,    83,    84,     0,    94,   109,
     108,     0,   100,     0,     0,     0,    70,     0,     0,    36,
       0,    42,     0,    33,    33,     0,   116,    37,     2,    32,
       0,     0,    97,   107,     0,     0,     0,    75,     0,     0,
      37,     3,    34,     0,     0,    37,     0,     0,    54,    67,
       0,    86,   101,     0,    70,    95,    91,    96,     0,    49,
       0,    40,    46,     0,    39,    38,     0,   103,     0,     0,
       0,     0,     0,     0,    52,    35,    47,     0,    98,    99,
     110,     0,     0,     0,    37,     0,     0,    87,    37,    37,
      37,    53,     0,    48,     0,     0,    51,    37,    45,    44,
      50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -114,  -114,   -57,   -10,   -26,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,    78,
    -113,   241,   238,  -114,    69,   248,  -114,   -72,  -114,  -114,
    -114,   151,  -114,   -51,    67,  -114,   214,   225,   190,   227,
    -114,    95,  -114,  -114,    76,  -114,    68
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    28,    85,    86,   183,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   214,   226,   133,   134,
     135,   177,     5,     6,     9,    13,    14,    68,    69,    70,
     104,   105,    71,    33,    16,    34,    35,    38,   111,    39,
     151,   152,   153,   154,   178,    40,    80
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      29,   109,   149,   160,   145,     1,    65,    52,    53,    54,
       4,   150,    46,    47,    48,   106,   213,     7,   166,     8,
     122,   216,   238,   239,    66,    10,   149,    32,    64,     1,
      12,    81,    82,    83,    84,   150,   176,    67,  -107,   184,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   106,   102,  -106,    15,   167,   167,   122,
     167,   167,   167,   167,    49,    17,    30,   199,   113,    36,
      50,   114,   203,    32,    37,   171,   115,    18,    19,   116,
     117,   118,    77,   175,    72,    73,    20,    52,   119,   120,
     121,     1,    36,   144,    21,   141,    22,    37,   208,   142,
      49,    23,   182,   174,   158,    41,    50,   161,   165,   162,
     122,   231,    24,    72,   147,   234,   235,   236,    25,    26,
      27,   207,   200,   122,   240,   141,   201,    42,   122,   204,
     141,   169,    72,   193,   205,   224,   225,   186,   187,    51,
      52,    53,    54,   215,    43,   227,    57,    58,    59,    60,
      61,    62,    44,    45,   185,   188,    75,    76,    88,   103,
     190,    64,   107,   108,   110,   136,   148,   122,   155,   198,
     156,   122,   122,   122,   202,   157,   168,   159,   217,   163,
     122,   228,    51,    52,    53,    54,    55,    56,   164,    57,
      58,    59,    60,    61,    62,   172,  -104,   229,   181,   173,
     179,   221,   222,   223,    64,   191,   194,   195,   197,    51,
      52,    53,    54,    55,    56,   232,    57,    58,    59,    60,
      61,    62,   211,  -105,   218,    51,    52,    53,    54,    55,
      56,    64,    57,    58,    59,    60,    61,    62,   219,    77,
     233,     3,   212,   167,    11,   189,   196,    64,    74,    51,
      52,    53,    54,    55,    56,   146,    57,    58,    59,    60,
      61,    62,    31,   210,   180,    78,   112,    79,   192,     0,
     209,    64,    51,    52,    53,    54,    55,    56,   220,    57,
      58,    59,    60,    61,    62,     0,     0,   230,     0,     0,
       0,     0,     0,     0,    64,    51,    52,    53,    54,    55,
      56,     0,    57,    58,    59,    60,    61,    62,     0,     0,
     237,     0,     0,     0,     0,     0,     0,    64,    51,    52,
      53,    54,    55,    56,     0,    57,    58,    59,    60,    61,
      62,     0,     0,     0,    51,    52,    53,    54,    55,    56,
      64,    57,    58,    59,    60,    61,    62,     0,     0,     0,
      63,     0,     0,     0,     0,     0,    64,    51,    52,    53,
      54,    55,    56,     0,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,     0,    87,     0,     0,     0,    64,
      51,    52,    53,    54,    55,    56,     0,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     0,     0,   137,     0,
       0,     0,    64,    51,    52,    53,    54,    55,    56,     0,
      57,    58,    59,    60,    61,    62,     0,     0,     0,     0,
       0,   138,     0,     0,     0,    64,    51,    52,    53,    54,
      55,    56,     0,    57,    58,    59,    60,    61,    62,     0,
       0,     0,     0,     0,   139,     0,     0,     0,    64,    51,
      52,    53,    54,    55,    56,     0,    57,    58,    59,    60,
      61,    62,     0,     0,     0,     0,     0,   140,     0,     0,
       0,    64,    51,    52,    53,    54,    55,    56,     0,    57,
      58,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,     0,   143,     0,    64,    51,    52,    53,    54,    55,
      56,     0,    57,    58,    59,    60,    61,    62,     0,     0,
     170,    51,    52,    53,    54,    55,    56,    64,    57,    58,
      59,    60,    61,    62,     0,     0,     0,     0,     0,     0,
       0,   206,     0,    64,    51,    52,    53,    54,    55,    56,
       0,    57,    58,    59,    60,    61,    62,     0,     0,     0,
      51,    52,    53,    54,    55,     0,    64,    57,    58,    59,
      60,    61,    62,     0,     0,     0,    51,    52,    53,    54,
       0,     0,    64,  -108,  -108,  -108,  -108,  -108,  -108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    64
};

static const yytype_int16 yycheck[] =
{
      10,    73,    23,   116,    12,     7,     4,    37,    38,    39,
      35,    32,    22,    23,    24,    66,    11,     0,    12,    30,
      77,    12,    12,    12,    22,    43,    23,    35,    58,     7,
      35,    41,    42,    43,    44,    32,    14,    35,    35,    31,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,   104,    64,    52,    32,    52,    52,   116,
      52,    52,    52,    52,    49,     6,    43,   180,    13,    15,
      55,    16,   185,    35,    20,   147,    21,    18,    19,    24,
      25,    26,     5,   155,    50,    51,    27,    37,    33,    34,
      35,     7,    15,   103,    35,    50,    37,    20,    14,    54,
      49,    42,   159,   154,   114,    53,    55,   117,    57,   119,
     167,   224,    53,    50,    51,   228,   229,   230,    59,    60,
      61,   193,    50,   180,   237,    50,    54,    53,   185,    54,
      50,   141,    50,    51,    54,    10,    11,   163,   164,    36,
      37,    38,    39,   200,    53,   217,    43,    44,    45,    46,
      47,    48,    53,    53,     8,   165,    35,    35,    35,    55,
     170,    58,    52,    35,    53,    49,    52,   224,    51,   179,
      52,   228,   229,   230,   184,    35,     0,    53,    17,    53,
     237,     8,    36,    37,    38,    39,    40,    41,    53,    43,
      44,    45,    46,    47,    48,    54,    52,     8,    35,    52,
      57,   211,   212,   213,    58,    52,    52,    52,    52,    36,
      37,    38,    39,    40,    41,   225,    43,    44,    45,    46,
      47,    48,     9,    52,    52,    36,    37,    38,    39,    40,
      41,    58,    43,    44,    45,    46,    47,    48,    52,     5,
      12,     0,    29,    52,     6,   167,   177,    58,    34,    36,
      37,    38,    39,    40,    41,   104,    43,    44,    45,    46,
      47,    48,    14,   196,    28,    40,    76,    40,   173,    -1,
     194,    58,    36,    37,    38,    39,    40,    41,   210,    43,
      44,    45,    46,    47,    48,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    46,    47,    48,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    58,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    47,
      48,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      58,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    58,    36,    37,    38,
      39,    40,    41,    -1,    43,    44,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    58,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    58,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    58,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    58,    36,
      37,    38,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    58,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    58,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    46,    47,    48,    -1,    -1,
      51,    36,    37,    38,    39,    40,    41,    58,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    58,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    -1,    58,    43,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    36,    37,    38,    39,
      -1,    -1,    58,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    63,    83,    35,    84,    85,     0,    30,    86,
      43,    84,    35,    87,    88,    32,    96,     6,    18,    19,
      27,    35,    37,    42,    53,    59,    60,    61,    64,    65,
      43,    87,    35,    95,    97,    98,    15,    20,    99,   101,
     107,    53,    53,    53,    53,    53,    65,    65,    65,    49,
      55,    36,    37,    38,    39,    40,    41,    43,    44,    45,
      46,    47,    48,    52,    58,     4,    22,    35,    89,    90,
      91,    94,    50,    51,    98,    35,    35,     5,    99,   101,
     108,    65,    65,    65,    65,    65,    66,    54,    35,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    55,    92,    93,    95,    52,    35,    89,
      53,   100,   100,    13,    16,    21,    24,    25,    26,    33,
      34,    35,    64,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    80,    81,    82,    49,    54,    54,    54,
      54,    50,    54,    56,    65,    12,    93,    51,    52,    23,
      32,   102,   103,   104,   105,    51,    52,    35,    65,    53,
      82,    65,    65,    53,    53,    57,    12,    52,     0,    65,
      51,    89,    54,    52,    95,    89,    14,    83,   106,    57,
      28,    35,    64,    67,    31,     8,    66,    66,    65,    81,
      65,    52,   103,    51,    52,    52,    86,    52,    65,    82,
      50,    54,    65,    82,    54,    54,    56,    89,    14,   106,
      96,     9,    29,    11,    78,    64,    12,    17,    52,    52,
     108,    65,    65,    65,    10,    11,    79,    89,     8,     8,
      28,    82,    65,    12,    82,    82,    82,    28,    12,    12,
      82
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    64,    64,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    66,    66,    66,    67,    67,    67,    68,    69,    70,
      71,    72,    72,    73,    74,    74,    75,    76,    77,    78,
      78,    78,    79,    79,    80,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    82,    82,    82,    83,
      83,    84,    85,    85,    86,    86,    87,    88,    88,    89,
      89,    89,    90,    91,    92,    92,    93,    94,    95,    95,
      96,    96,    97,    97,    98,    99,    99,   100,   101,   101,
     102,   102,   102,   103,   104,   104,   104,   105,   105,   105,
     106,   107,   107,   107,   107,   107,   108
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     1,     3,     4,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     3,     4,     4,     4,     4,     4,     1,     1,
       1,     1,     3,     0,     1,     3,     0,     0,     4,     4,
       4,     1,     2,     1,     9,     9,     4,     5,     7,     0,
       5,     4,     0,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     0,     2,
       0,     4,     1,     2,     2,     0,     4,     2,     1,     1,
       1,     1,     1,     3,     2,     1,     4,     8,     1,     3,
       2,     0,     2,     1,     4,     6,     6,     3,     8,     8,
       1,     3,     0,     4,     1,     3,     0,     0,     1,     1,
       4,     1,     1,     2,     2,     0,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 237 "my_parser.y" /* yacc.c:1646  */
    {	
								auto my_tree = new Program((yyvsp[-6].const_list), (yyvsp[-5].type_list), (yyvsp[-4].var_list), (yyvsp[-3].func_decl_list), (yyvsp[-2].statementList)); 
								my_tree->emit();
							}
#line 1646 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 244 "my_parser.y" /* yacc.c:1646  */
    { (yyval.lval) = new LvalueExpression(std::string((yyvsp[0].stringVal)));}
#line 1652 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 245 "my_parser.y" /* yacc.c:1646  */
    { (yyval.lval) = new LvalueExpression((yyvsp[-2].lval), std::string((yyvsp[0].stringVal))); }
#line 1658 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 246 "my_parser.y" /* yacc.c:1646  */
    { (yyval.lval) = new LvalueExpression((yyvsp[-3].lval), (yyvsp[-1].expr)); }
#line 1664 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 250 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found LvalueExpression" << std::endl; }
								(yyval.expr) = (yyvsp[0].lval);}
#line 1671 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 252 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found OrExpression" << std::endl; }
								(yyval.expr) =  new OrExpression((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1678 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 254 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found AndExpression" << std::endl; }
								(yyval.expr) =  new AndExpression((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1685 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 256 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found EqExpression" << std::endl; }
								(yyval.expr) =  new EqExpression((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1692 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 258 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found NeqExpression" << std::endl; }
								(yyval.expr) =  new NeqExpression((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1699 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 260 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found LeqExpression" << std::endl; }
								(yyval.expr) =  new LeqExpression((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1706 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 262 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found GeqExpression" << std::endl; }
								(yyval.expr) =  new GeqExpression((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1713 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 264 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found LessExpression" << std::endl; }
								(yyval.expr) =  new LessExpression((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1720 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 266 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found GreaterExpression" << std::endl; }
								(yyval.expr) =  new GreaterExpression((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1727 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 268 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found AddExpression" << std::endl; }
								(yyval.expr) =  new AddExpression((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1734 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 270 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found SubExpression" << std::endl; }
								(yyval.expr) = new SubExpression((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1741 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 272 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found MultExpression" << std::endl; }
								(yyval.expr) = new MultExpression((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1748 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 274 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found DivExpression" << std::endl; }
								(yyval.expr) = new DivExpression((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1755 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 276 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found RemainExpression" << std::endl; }
								(yyval.expr) = new RemainExpression((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1762 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 278 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found BitwiseExpression" << std::endl; }
								(yyval.expr) = new BitwiseExpression((yyvsp[0].expr));}
#line 1769 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 280 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found NegExpression" << std::endl; }
								(yyval.expr) = new NegExpression((yyvsp[0].expr));}
#line 1776 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 282 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found ParenExpression" << std::endl; }
								(yyval.expr) = new ParenExpression((yyvsp[-1].expr));}
#line 1783 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 285 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found FuncExpression" << std::endl; }
								(yyval.expr) = new FunctionCallExpression((yyvsp[-3].stringVal), (yyvsp[-1].exprList));}
#line 1790 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 288 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found ToCharExpression" << std::endl; }
								(yyval.expr) = new ToCharExpression((yyvsp[-1].expr));}
#line 1797 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 291 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found ToIntExpression" << std::endl; }
								(yyval.expr) = new ToIntExpression((yyvsp[-1].expr));}
#line 1804 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 294 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found PredExpression" << std::endl; }
								(yyval.expr) = new PredExpression((yyvsp[-1].expr));}
#line 1811 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 297 "my_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new SuccExpression((yyvsp[-1].expr));}
#line 1817 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 298 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found IntExpression" << std::endl; }
								(yyval.expr) = new IntExpression((yyvsp[0].val));}
#line 1824 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 300 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found CharExpression" << std::endl; }
								char new_char;
								if((yyvsp[0].stringVal)[1] == '\\' && (yyvsp[0].stringVal)[2] == 'n'){
									new_char = '\n';
								}
								else if((yyvsp[0].stringVal)[1] == '\\' && (yyvsp[0].stringVal)[2] == 't'){
									new_char = '\t';
								}
								else{
									new_char = (yyvsp[0].stringVal)[1];
								}
								(yyval.expr) = new CharExpression(new_char);}
#line 1841 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 312 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found StringExpression" << std::endl; }
								(yyval.expr) = new StringExpression((yyvsp[0].stringVal));}
#line 1848 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 316 "my_parser.y" /* yacc.c:1646  */
    {	auto new_vec = new std::vector<Expression*>;
								new_vec->push_back((yyvsp[0].expr));
								(yyval.exprList) = new_vec;}
#line 1856 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 319 "my_parser.y" /* yacc.c:1646  */
    {(yyvsp[-2].exprList)->push_back((yyvsp[0].expr));
								(yyval.exprList) = (yyvsp[-2].exprList);}
#line 1863 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 321 "my_parser.y" /* yacc.c:1646  */
    {(yyval.exprList) = new std::vector<Expression*>;}
#line 1869 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 325 "my_parser.y" /* yacc.c:1646  */
    {	auto new_vec = new std::vector<LvalueExpression*>;
								new_vec->push_back((yyvsp[0].lval));
								(yyval.lvalList) = new_vec;}
#line 1877 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 328 "my_parser.y" /* yacc.c:1646  */
    {(yyvsp[-2].lvalList)->push_back((yyvsp[0].lval));
								(yyval.lvalList) = (yyvsp[-2].lvalList);}
#line 1884 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 330 "my_parser.y" /* yacc.c:1646  */
    {(yyval.lvalList) = new std::vector<LvalueExpression*>;}
#line 1890 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 334 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new NullStatement(); }
#line 1896 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 335 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new FunctionCallStatement(std::string((yyvsp[-3].stringVal)), (yyvsp[-1].exprList)); }
#line 1902 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 338 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found WriteStatement" << std::endl; }
									(yyval.statement) = new WriteStatement((yyvsp[-1].exprList));}
#line 1909 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 340 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found ReadStatement" << std::endl; }
									(yyval.statement) = new ReadStatement((yyvsp[-1].lvalList));}
#line 1916 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 342 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new ReturnStatement(NULL); }
#line 1922 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 343 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new ReturnStatement((yyvsp[0].expr));}
#line 1928 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 345 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new StopStatement();}
#line 1934 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 347 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new ForStatement(std::string((yyvsp[-7].stringVal)), (yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].statementList), ForRunOptions::TO); }
#line 1940 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 349 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new ForStatement(std::string((yyvsp[-7].stringVal)), (yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].statementList), ForRunOptions::DOWNTO); }
#line 1946 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 352 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new RepeatStatement((yyvsp[-2].statementList), (yyvsp[0].expr)); }
#line 1952 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 354 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new WhileStatement((yyvsp[-1].statementList), (yyvsp[-3].expr)); }
#line 1958 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 356 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new IfBlockStatement(new IfStatement((yyvsp[-3].statementList), (yyvsp[-5].expr)),
											(yyvsp[-2].if_list), (yyvsp[-1].statementList)); }
#line 1965 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 359 "my_parser.y" /* yacc.c:1646  */
    { (yyval.if_list) = new std::vector<IfStatement*>; }
#line 1971 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 361 "my_parser.y" /* yacc.c:1646  */
    { 
								(yyvsp[-4].if_list)->push_back(new IfStatement((yyvsp[0].statementList), (yyvsp[-2].expr)));
								(yyval.if_list) = (yyvsp[-4].if_list);
							}
#line 1980 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 366 "my_parser.y" /* yacc.c:1646  */
    { 
								auto ret_vec = new std::vector<IfStatement*>;
								ret_vec->push_back(new IfStatement((yyvsp[0].statementList), (yyvsp[-2].expr)));
								(yyval.if_list) = ret_vec;
							}
#line 1990 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 372 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statementList) = NULL; }
#line 1996 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 373 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statementList) = (yyvsp[0].statementList); }
#line 2002 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 377 "my_parser.y" /* yacc.c:1646  */
    {  if (testingParser) { std::cout << "Found AssignStatement" << std::endl;} 
								(yyval.statement) = new AssignStatement((yyvsp[-2].lval), (yyvsp[0].expr)); }
#line 2009 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 380 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2015 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 381 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2021 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 382 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2027 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 383 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2033 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 384 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2039 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 385 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2045 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 386 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2051 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 387 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2057 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 388 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2063 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 389 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2069 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 390 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2075 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 393 "my_parser.y" /* yacc.c:1646  */
    {  	auto new_vec = new std::vector<Statement*>;
								new_vec->push_back((yyvsp[0].statement));
								(yyval.statementList) = new_vec;}
#line 2083 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 396 "my_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].statementList)->push_back((yyvsp[0].statement));
								(yyval.statementList) = (yyvsp[-2].statementList);}
#line 2090 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 398 "my_parser.y" /* yacc.c:1646  */
    {  (yyval.statementList) = new std::vector<Statement*>;}
#line 2096 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 403 "my_parser.y" /* yacc.c:1646  */
    { (yyval.const_list) = (yyvsp[0].const_list); }
#line 2102 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 404 "my_parser.y" /* yacc.c:1646  */
    { (yyval.const_list) = new std::vector<ConstDecl*>; }
#line 2108 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 406 "my_parser.y" /* yacc.c:1646  */
    { auto my_const_decl = new ConstDecl;
								my_const_decl->id = std::string((yyvsp[-3].stringVal));
								my_const_decl->expr = (yyvsp[-1].expr);
								(yyval.const_decl) = my_const_decl; }
#line 2117 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 411 "my_parser.y" /* yacc.c:1646  */
    { auto my_list = new std::vector<ConstDecl*>;
								my_list->push_back((yyvsp[0].const_decl));
								(yyval.const_list) = my_list; }
#line 2125 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 414 "my_parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].const_list)->push_back((yyvsp[0].const_decl));
								(yyval.const_list) = (yyvsp[-1].const_list); }
#line 2132 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 418 "my_parser.y" /* yacc.c:1646  */
    { (yyval.type_list) = (yyvsp[0].type_list); }
#line 2138 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 419 "my_parser.y" /* yacc.c:1646  */
    { (yyval.type_list) = new std::vector<TypeDecl*>;}
#line 2144 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 421 "my_parser.y" /* yacc.c:1646  */
    { auto my_type_decl = new TypeDecl;
								my_type_decl->id = std::string((yyvsp[-3].stringVal));
								my_type_decl->type_creator = (yyvsp[-1].type);
								(yyval.type_decl) = my_type_decl; }
#line 2153 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 426 "my_parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].type_list)->push_back((yyvsp[0].type_decl));
								(yyval.type_list) = (yyvsp[-1].type_list); }
#line 2160 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 428 "my_parser.y" /* yacc.c:1646  */
    { auto my_type_list = new std::vector<TypeDecl*>;
								my_type_list->push_back((yyvsp[0].type_decl));
								(yyval.type_list) = my_type_list; }
#line 2168 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 432 "my_parser.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 2174 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 433 "my_parser.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 2180 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 434 "my_parser.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 2186 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 436 "my_parser.y" /* yacc.c:1646  */
    { 
								TypeCreator* type_creator = new TypeCreator;
								type_creator->type_type = TypeType::simple;
								type_creator->base_id = std::string((yyvsp[0].stringVal));
								(yyval.type) = type_creator; }
#line 2196 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 442 "my_parser.y" /* yacc.c:1646  */
    { 
								TypeCreator* type_creator = new TypeCreator;
								type_creator->type_type = TypeType::record;
								type_creator->rec_list = (yyvsp[-1].rec_list);
								(yyval.type) = type_creator;
							}
#line 2207 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 449 "my_parser.y" /* yacc.c:1646  */
    { 
								(yyvsp[-1].rec_list)->push_back((yyvsp[0].rec_item));
								(yyval.rec_list) = (yyvsp[-1].rec_list);
							}
#line 2216 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 453 "my_parser.y" /* yacc.c:1646  */
    {	
								auto rec_list = new std::vector<RecItem*>;
								rec_list->push_back((yyvsp[0].rec_item));
								(yyval.rec_list) = rec_list;
							}
#line 2226 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 460 "my_parser.y" /* yacc.c:1646  */
    { 	
								RecItem* _rec_item = new RecItem;
								_rec_item->id_list = get_str_vec_from_chars_vec((yyvsp[-3].string_list));
								_rec_item->type_creator = (yyvsp[-1].type);
								(yyval.rec_item) = _rec_item;
							}
#line 2237 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 468 "my_parser.y" /* yacc.c:1646  */
    { 
								TypeCreator* _type_creator = new TypeCreator;
								_type_creator->type_type = TypeType::array;
								_type_creator->first_expr = (yyvsp[-5].expr);
								_type_creator->second_expr = (yyvsp[-3].expr);
								_type_creator->elem_type = (yyvsp[0].type);
								(yyval.type) = _type_creator;
							}
#line 2250 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 478 "my_parser.y" /* yacc.c:1646  */
    { 
								auto new_vec = new std::vector<char*> ;
								new_vec->push_back((yyvsp[0].stringVal));
								(yyval.string_list) = new_vec;}
#line 2259 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 482 "my_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].string_list)->push_back((yyvsp[0].stringVal));
								(yyval.string_list) = (yyvsp[-2].string_list); }
#line 2266 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 486 "my_parser.y" /* yacc.c:1646  */
    { (yyval.var_list) = (yyvsp[0].var_list); }
#line 2272 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 487 "my_parser.y" /* yacc.c:1646  */
    { (yyval.var_list) = new std::vector<VarDecl*>; }
#line 2278 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 489 "my_parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].var_list)->push_back((yyvsp[0].var_decl));
								(yyval.var_list) = (yyvsp[-1].var_list); }
#line 2285 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 491 "my_parser.y" /* yacc.c:1646  */
    { auto new_vec = new std::vector<VarDecl*>;
								new_vec->push_back((yyvsp[0].var_decl));
								(yyval.var_list) = new_vec; }
#line 2293 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 496 "my_parser.y" /* yacc.c:1646  */
    { auto my_var_decl = new VarDecl;
								my_var_decl->id_list = get_str_vec_from_chars_vec((yyvsp[-3].string_list));
								my_var_decl->type_creator = (yyvsp[-1].type);								
								(yyval.var_decl) = my_var_decl; }
#line 2302 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 505 "my_parser.y" /* yacc.c:1646  */
    { (yyval.func_decl) = new FunctionDeclaration(std::string((yyvsp[-4].stringVal)), (yyvsp[-3].param_list), NULL, NULL);}
#line 2308 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 507 "my_parser.y" /* yacc.c:1646  */
    { (yyval.func_decl) = new FunctionDeclaration(std::string((yyvsp[-4].stringVal)), (yyvsp[-3].param_list), (yyvsp[-1].body), NULL); }
#line 2314 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 510 "my_parser.y" /* yacc.c:1646  */
    { (yyval.param_list) = (yyvsp[-1].param_list); }
#line 2320 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 514 "my_parser.y" /* yacc.c:1646  */
    { (yyval.func_decl) = new FunctionDeclaration(std::string((yyvsp[-6].stringVal)),(yyvsp[-5].param_list), NULL, (yyvsp[-3].type)); }
#line 2326 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 516 "my_parser.y" /* yacc.c:1646  */
    { (yyval.func_decl) = new FunctionDeclaration(std::string((yyvsp[-6].stringVal)),(yyvsp[-5].param_list), (yyvsp[-1].body), (yyvsp[-3].type)); }
#line 2332 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 519 "my_parser.y" /* yacc.c:1646  */
    { auto new_vec = new std::vector<Param*>;
								new_vec->push_back((yyvsp[0].param));
								(yyval.param_list) = new_vec;  }
#line 2340 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 522 "my_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].param_list)->push_back((yyvsp[0].param));
								(yyval.param_list) = (yyvsp[-2].param_list); }
#line 2347 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 524 "my_parser.y" /* yacc.c:1646  */
    { auto new_vec = new std::vector<Param*>; 
								(yyval.param_list) = new_vec; }
#line 2354 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 527 "my_parser.y" /* yacc.c:1646  */
    { Param* my_param = new Param;
								my_param->var_ref = (yyvsp[-3].var_ref);
								my_param->id_list = get_str_vec_from_chars_vec((yyvsp[-2].string_list));
								my_param->type_creator = (yyvsp[0].type);
								(yyval.param) = my_param; }
#line 2364 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 533 "my_parser.y" /* yacc.c:1646  */
    { auto params_list = new std::vector<Param*>;
								params_list->push_back((yyvsp[0].param));
					 			(yyval.param_list) = params_list; }
#line 2372 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 536 "my_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].param_list)->push_back((yyvsp[0].param));
								(yyval.param_list) = (yyvsp[-2].param_list); }
#line 2379 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 538 "my_parser.y" /* yacc.c:1646  */
    { auto params_list = new std::vector<Param*>;
								(yyval.param_list) = params_list; }
#line 2386 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 542 "my_parser.y" /* yacc.c:1646  */
    { VarRef* my_var_ref  = new VarRef{VarRef::neither};
								(yyval.var_ref) = my_var_ref;}
#line 2393 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 544 "my_parser.y" /* yacc.c:1646  */
    { VarRef* my_var_ref  = new VarRef{VarRef::var};
								(yyval.var_ref) = my_var_ref; }
#line 2400 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 546 "my_parser.y" /* yacc.c:1646  */
    { VarRef* my_var_ref  = new VarRef{VarRef::ref};
								(yyval.var_ref) = my_var_ref; }
#line 2407 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 550 "my_parser.y" /* yacc.c:1646  */
    { (yyval.body) = new Body((yyvsp[-3].const_list), (yyvsp[-2].type_list), (yyvsp[-1].var_list), (yyvsp[0].statementList)); }
#line 2413 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 553 "my_parser.y" /* yacc.c:1646  */
    { auto func_decl_list = new std::vector<FunctionDeclaration*>;
								func_decl_list->push_back((yyvsp[0].func_decl));
								(yyval.func_decl_list) = func_decl_list; }
#line 2421 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 556 "my_parser.y" /* yacc.c:1646  */
    { auto func_decl_list = new std::vector<FunctionDeclaration*>;
								func_decl_list->push_back((yyvsp[0].func_decl));
								(yyval.func_decl_list) = func_decl_list; }
#line 2429 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 559 "my_parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].func_decl_list)->push_back((yyvsp[0].func_decl));
								(yyval.func_decl_list) = (yyvsp[-1].func_decl_list); }
#line 2436 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 561 "my_parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].func_decl_list)->push_back((yyvsp[0].func_decl));
								(yyval.func_decl_list) = (yyvsp[-1].func_decl_list); }
#line 2443 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 563 "my_parser.y" /* yacc.c:1646  */
    { auto func_decl_list = new std::vector<FunctionDeclaration*>; 
								(yyval.func_decl_list) = func_decl_list; }
#line 2450 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 567 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statementList) = (yyvsp[-1].statementList); }
#line 2456 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;


#line 2460 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 571 "my_parser.y" /* yacc.c:1906  */



void yyerror(const char* s){
	std::cerr << "Parsing error on line " << linenumber << ".\n Message: " << s << std::endl;
	exit(-1);
}


