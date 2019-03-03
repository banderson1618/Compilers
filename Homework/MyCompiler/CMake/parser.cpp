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
#include "Expressions/BitwiseExpression.hpp"
#include "Expressions/DivExpression.hpp"
#include "Expressions/FuncExpression.hpp"
#include "Expressions/MultExpression.hpp"
#include "Expressions/NegExpression.hpp"
#include "Expressions/ParenExpression.hpp"
#include "Expressions/RemainExpression.hpp"
#include "Expressions/SubExpression.hpp"
#include "Expressions/ToCharExpression.hpp"
#include "Expressions/ToIntExpression.hpp"


#include "Expressions/IntExpression.hpp"
#include "Expressions/CharExpression.hpp"
#include "Expressions/StringExpression.hpp"

#include "Statements/Statement.hpp"
#include "Statements/AssignStatement.hpp"
#include "Statements/ReadStatement.hpp"
#include "Statements/WriteStatement.hpp"
#include "Statements/NullStatement.hpp"
#include "Statements/StopStatement.hpp"

#include "Misc_Classes/Program.hpp"
#include "Misc_Classes/RegisterPool.hpp"
#include "Misc_Classes/SymbolTable.hpp"
#include "Misc_Classes/TypesTable.hpp"
#include "Misc_Classes/StringTable.hpp"

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

extern PrimitiveType* int_type;
extern PrimitiveType* char_type;
extern PrimitiveType* bool_type;
extern PrimitiveType* string_type;

void yyerror(const char *s);
extern int linenumber;

bool testingParser = false;

RegisterPool* register_pool = new RegisterPool();


void add_vars_to_symbol_table(std::vector<char*>* ids, Type* type){
	for(int i = 0; i < ids->size(); i++){
		std::string str((*ids)[i]);
		symbol_table.add_value(str, type);
	}
}

void add_const_to_table(char* id, Expression* val){
	std::string expr_reg = val->emit(register_pool); // string label if it's a string, register with value otherwise
	std::string str_id(id);

	if (val->type == string_type){
		symbol_table.add_value(str_id, string_type, expr_reg);
	}
	else{
		symbol_table.add_value(str_id, val->type);
		Lvalue lval = symbol_table.get_value(str_id);
		std::cout << "\tsw\t" << expr_reg << ", " << lval.offset << ",($sp)\t\t#Saving constant" << std::endl;
	}
}

void add_type_to_table(char* id, Type* new_type){
	std::string str_id(id);
	if (new_type == int_type || new_type == string_type || new_type == char_type || new_type == bool_type){
		types_table.add_value(id, new_type);
	}
}


#line 166 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:339  */

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
#line 173 "my_parser.y" /* yacc.c:355  */

	int val;
	char* stringVal;
	char* id;
	Expression* expr;
	std::vector<Expression*> *exprList;
	std::vector<Statement*> *statementList;
	std::vector<Lvalue*> *lvalList;
	std::vector<char*> *string_list;
	Statement* statement;
	Lvalue* lval;
	Type* type;

#line 283 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HOME_BRADEN_DOCUMENTS_COMPILERS_HOMEWORK_MYCOMPILER_CMAKE_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 300 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:358  */

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
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   621

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  244

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
       0,   205,   205,   209,   213,   220,   221,   225,   227,   229,
     231,   233,   235,   237,   239,   241,   243,   245,   247,   249,
     251,   253,   255,   257,   259,   262,   265,   268,   271,   274,
     276,   285,   289,   292,   294,   298,   301,   303,   307,   308,
     311,   313,   315,   316,   318,   319,   321,   324,   326,   328,
     331,   332,   335,   336,   340,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   356,   359,   361,   366,
     367,   369,   371,   372,   376,   377,   379,   381,   382,   384,
     385,   386,   388,   391,   393,   394,   396,   399,   401,   404,
     408,   414,   415,   417,   418,   420,   421,   425,   427,   430,
     434,   437,   439,   443,   446,   447,   449,   451,   452,   455,
     456,   457,   460,   463,   466,   467,   468
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
  "array_args", "ident_list", "var_decl", "var_list", "var_item",
  "proc_decl", "proc_start", "proc_args", "func_decl", "func_start",
  "formal_params", "param", "params_list", "varef", "body", "block",
  "func_proc_list", YY_NULLPTR
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

#define YYPACT_NINF -126

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-126)))

#define YYTABLE_NINF -110

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-110)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     148,   -51,   -22,   -37,    20,    33,    39,   151,   151,   151,
    -126,  -126,  -126,    49,   -29,   105,    66,   151,    58,  -126,
     -22,   151,   151,   151,   151,    67,   547,   315,  -126,    82,
     151,  -126,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,    89,    94,   338,   151,  -126,
     361,   384,   407,   515,    41,  -126,  -126,   430,    26,    26,
      67,    67,   531,   515,   563,   563,   563,   563,   563,   563,
      67,    84,  -126,    89,    93,    42,  -126,   453,  -126,  -126,
    -126,   151,  -126,  -126,    25,  -126,  -126,    28,    93,  -126,
      95,    96,    42,    38,    42,    78,   127,  -126,   515,    79,
      93,  -126,    81,  -126,  -126,  -126,   101,    25,  -126,    86,
      86,  -126,    85,    66,   104,  -126,    25,    64,    98,   151,
     141,   147,    93,    43,  -126,  -126,   108,    -4,  -126,   109,
    -126,    94,  -126,   110,   129,   151,   112,    64,   151,  -126,
     151,   115,   118,    17,  -126,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,    -1,   172,   476,    25,
    -126,  -126,    25,  -126,  -126,  -126,   119,   122,    93,  -126,
     127,    69,   120,   276,   144,   -25,   515,   189,   151,   151,
     151,  -126,    64,  -126,   151,  -126,   124,  -126,    27,  -126,
      63,  -126,   130,   135,   151,    64,  -126,   -29,    53,   151,
      64,    61,    62,   515,  -126,   492,  -126,   122,    25,  -126,
    -126,   253,    -6,   144,  -126,   515,     2,  -126,  -126,  -126,
    -126,  -126,   151,   151,   151,   171,   -29,  -126,   205,   230,
     299,    64,   177,    64,    64,    64,   139,  -126,     3,     6,
      -6,  -126,  -126,  -126
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      70,     0,     0,     0,     0,     0,     4,     0,     0,     0,
      29,    30,    31,     0,     7,     0,    75,     0,     0,    72,
      69,     0,     0,     0,    34,    22,    21,     0,     1,     0,
       0,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,     0,     0,    73,
       0,     0,     0,    32,     0,    23,     5,     0,    16,    17,
      18,    19,     9,     8,    10,    11,    14,    15,    12,    13,
      20,     0,    78,    74,    96,   116,    25,     0,    26,    27,
      28,     0,    24,     6,     0,    77,    89,     0,    91,    94,
       0,     0,   116,    70,   116,     0,     0,    71,    33,     0,
      85,    82,     0,    79,    80,    81,     0,     0,    93,     0,
       0,   115,     0,    75,     0,   114,     0,    38,     0,     0,
       0,     0,    85,     0,    76,    90,     0,   104,   103,     0,
      97,    92,    98,     0,     0,     0,     0,    38,    42,    44,
       0,     0,     4,     0,    65,    64,    63,    62,    61,    60,
      59,    58,    57,    56,    55,    66,     0,     0,     0,     0,
      83,    84,     0,    95,   111,   110,     0,   108,     0,    99,
       0,    70,     0,     0,    37,     0,    43,     0,    34,    34,
       0,   113,    38,     2,     0,    87,     0,   100,   109,   105,
       0,   112,     0,     0,     0,    38,     4,    35,     0,     0,
      38,     0,     0,    54,    67,     0,    86,   108,     0,   101,
     102,     0,    50,     0,    41,    47,     0,    40,    39,    88,
     107,   106,     0,     0,     0,    52,    36,    48,     0,     0,
       0,    38,     0,    38,    38,    38,    53,    49,     0,     0,
      50,    46,    45,    51
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,  -126,  -113,     0,  -111,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,   -48,  -126,  -126,    13,
    -125,   196,   178,  -126,    87,   132,  -126,  -106,  -126,  -126,
      80,  -126,  -126,  -126,   -97,    72,  -126,   126,  -126,  -126,
     106,  -126,  -126,  -126,    18,     8,  -126,    46,    48,    31
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    53,    54,   198,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   225,   232,   154,   155,
     156,   113,    19,    20,    46,    72,    73,   102,   103,   104,
     121,   122,   105,   120,    87,    75,    88,    89,    92,    93,
     128,    94,    95,   166,   167,   189,   168,   114,   118,    96
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,   126,    17,   123,   143,   224,   199,    25,    26,    27,
     133,   181,   175,    18,   227,   241,    21,    47,   242,   164,
      29,    50,    51,    52,   143,   123,    30,   182,   165,    99,
      57,  -109,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     2,   182,   100,    77,    28,
     164,   182,   112,   185,   182,   182,   186,    90,   182,   165,
     101,   197,    91,    33,    34,    35,    29,   201,   202,   143,
     212,   190,    30,    22,   180,   216,     2,   134,   106,   107,
     135,    98,   143,   192,    44,   136,    23,   143,   137,   138,
     139,    81,    24,   106,   162,    82,    45,   140,   141,   142,
     226,    48,   221,   213,    33,    31,   236,   214,   238,   239,
     240,    81,    81,   106,   208,   217,   218,    56,   143,   158,
     143,   143,   143,   111,    71,   115,    74,    84,    86,   116,
     109,   110,   117,   124,   119,   173,   125,   130,   176,   127,
     177,    32,    33,    34,    35,    36,    37,   157,    38,    39,
      40,    41,    42,    43,     1,     2,   132,     1,   159,   160,
     163,   169,   171,    44,   172,   174,     3,     4,   178,     3,
       4,   179,   183,   187,   188,     5,   206,   194,     5,   196,
     203,   231,   209,     6,   205,     7,     6,   210,     7,   237,
       8,   182,   243,     8,   211,   204,    16,   200,    49,   215,
     131,     9,   161,   170,     9,    85,   207,    10,    11,    12,
      10,    11,    12,   233,   108,   220,   129,   193,   191,     0,
       0,     0,   228,   229,   230,    32,    33,    34,    35,    36,
      37,     0,    38,    39,    40,    41,    42,    43,   234,     0,
       0,    32,    33,    34,    35,    36,    37,    44,    38,    39,
      40,    41,    42,    43,     0,     0,     0,     0,     0,     0,
       0,     0,   222,    44,     0,     0,    32,    33,    34,    35,
      36,    37,     0,    38,    39,    40,    41,    42,    43,     0,
       0,     0,   223,     0,     0,     0,     0,     0,    44,    32,
      33,    34,    35,    36,    37,     0,    38,    39,    40,    41,
      42,    43,     0,     0,   195,     0,     0,     0,     0,     0,
       0,    44,    32,    33,    34,    35,    36,    37,     0,    38,
      39,    40,    41,    42,    43,     0,     0,   235,     0,     0,
       0,     0,     0,     0,    44,    32,    33,    34,    35,    36,
      37,     0,    38,    39,    40,    41,    42,    43,     0,     0,
       0,    32,    33,    34,    35,    36,    37,    44,    38,    39,
      40,    41,    42,    43,     0,     0,     0,     0,     0,    55,
       0,     0,     0,    44,    32,    33,    34,    35,    36,    37,
       0,    38,    39,    40,    41,    42,    43,     0,     0,     0,
       0,     0,    76,     0,     0,     0,    44,    32,    33,    34,
      35,    36,    37,     0,    38,    39,    40,    41,    42,    43,
       0,     0,     0,     0,     0,    78,     0,     0,     0,    44,
      32,    33,    34,    35,    36,    37,     0,    38,    39,    40,
      41,    42,    43,     0,     0,     0,     0,     0,    79,     0,
       0,     0,    44,    32,    33,    34,    35,    36,    37,     0,
      38,    39,    40,    41,    42,    43,     0,     0,     0,     0,
       0,    80,     0,     0,     0,    44,    32,    33,    34,    35,
      36,    37,     0,    38,    39,    40,    41,    42,    43,     0,
       0,     0,     0,     0,     0,     0,    83,     0,    44,    32,
      33,    34,    35,    36,    37,     0,    38,    39,    40,    41,
      42,    43,     0,     0,     0,    97,     0,     0,     0,     0,
       0,    44,    32,    33,    34,    35,    36,    37,     0,    38,
      39,    40,    41,    42,    43,     0,     0,   184,    32,    33,
      34,    35,    36,    37,    44,    38,    39,    40,    41,    42,
      43,     0,     0,     0,     0,     0,     0,     0,   219,     0,
      44,    32,    33,    34,    35,    36,    37,     0,    38,    39,
      40,    41,    42,    43,     0,     0,     0,    32,    33,    34,
      35,    36,     0,    44,    38,    39,    40,    41,    42,    43,
       0,     0,     0,    32,    33,    34,    35,     0,     0,    44,
      38,    39,    40,    41,    42,    43,     0,     0,     0,    32,
      33,    34,    35,     0,     0,    44,  -110,  -110,  -110,  -110,
    -110,  -110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44
};

static const yytype_int16 yycheck[] =
{
       0,   107,    53,   100,   117,    11,    31,     7,     8,     9,
     116,    12,   137,    35,    12,    12,    53,    17,    12,    23,
      49,    21,    22,    23,   137,   122,    55,    52,    32,     4,
      30,    35,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,     7,    52,    22,    48,     0,
      23,    52,    14,   159,    52,    52,   162,    15,    52,    32,
      35,   174,    20,    37,    38,    39,    49,   178,   179,   182,
     195,   168,    55,    53,    57,   200,     7,    13,    50,    51,
      16,    81,   195,    14,    58,    21,    53,   200,    24,    25,
      26,    50,    53,    50,    51,    54,    30,    33,    34,    35,
     213,    43,   208,    50,    37,     0,   231,    54,   233,   234,
     235,    50,    50,    50,    51,    54,    54,    35,   231,   119,
     233,   234,   235,    92,    35,    94,    32,    43,    35,    51,
      35,    35,     5,    52,    55,   135,    35,    52,   138,    53,
     140,    36,    37,    38,    39,    40,    41,    49,    43,    44,
      45,    46,    47,    48,     6,     7,    52,     6,    17,    12,
      52,    52,    52,    58,    35,    53,    18,    19,    53,    18,
      19,    53,     0,    54,    52,    27,    52,    57,    27,    35,
     180,    10,    52,    35,   184,    37,    35,    52,    37,    12,
      42,    52,   240,    42,   194,   182,     0,     8,    20,   199,
     113,    53,   122,   131,    53,    73,   188,    59,    60,    61,
      59,    60,    61,     8,    88,   207,   110,   171,   170,    -1,
      -1,    -1,   222,   223,   224,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    46,    47,    48,     8,    -1,
      -1,    36,    37,    38,    39,    40,    41,    58,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    58,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    58,    36,
      37,    38,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    48,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    36,    37,    38,    39,    40,    41,    58,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    58,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    58,    36,    37,    38,
      39,    40,    41,    -1,    43,    44,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    58,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    58,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    58,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    58,    36,
      37,    38,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    58,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    -1,    -1,    51,    36,    37,
      38,    39,    40,    41,    58,    43,    44,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      58,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    36,    37,    38,
      39,    40,    -1,    58,    43,    44,    45,    46,    47,    48,
      -1,    -1,    -1,    36,    37,    38,    39,    -1,    -1,    58,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    36,
      37,    38,    39,    -1,    -1,    58,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    18,    19,    27,    35,    37,    42,    53,
      59,    60,    61,    63,    64,    65,    83,    53,    35,    84,
      85,    53,    53,    53,    53,    65,    65,    65,     0,    49,
      55,     0,    36,    37,    38,    39,    40,    41,    43,    44,
      45,    46,    47,    48,    58,    30,    86,    65,    43,    84,
      65,    65,    65,    65,    66,    54,    35,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    35,    87,    88,    32,    97,    54,    65,    54,    54,
      54,    50,    54,    56,    43,    87,    35,    96,    98,    99,
      15,    20,   100,   101,   103,   104,   111,    52,    65,     4,
      22,    35,    89,    90,    91,    94,    50,    51,    99,    35,
      35,   111,    14,    83,   109,   111,    51,     5,   110,    55,
      95,    92,    93,    96,    52,    35,    89,    53,   102,   102,
      52,    86,    52,    89,    13,    16,    21,    24,    25,    26,
      33,    34,    35,    64,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    80,    81,    82,    49,    65,    17,
      12,    92,    51,    52,    23,    32,   105,   106,   108,    52,
      97,    52,    35,    65,    53,    82,    65,    65,    53,    53,
      57,    12,    52,     0,    51,    89,    89,    54,    52,   107,
      96,   110,    14,   109,    57,    28,    35,    64,    67,    31,
       8,    66,    66,    65,    81,    65,    52,   106,    51,    52,
      52,    65,    82,    50,    54,    65,    82,    54,    54,    56,
     107,    89,     9,    29,    11,    78,    64,    12,    65,    65,
      65,    10,    79,     8,     8,    28,    82,    12,    82,    82,
      82,    12,    12,    78
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    63,    64,    64,    64,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    66,    66,    66,    67,    67,    67,    68,    69,
      70,    71,    72,    72,    73,    74,    74,    75,    76,    77,
      78,    78,    79,    79,    80,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    82,    82,    82,    83,
      83,    84,    85,    85,    86,    86,    87,    88,    88,    89,
      89,    89,    90,    91,    92,    92,    93,    94,    95,    96,
      96,    97,    97,    98,    98,    99,    99,   100,   100,   101,
     102,   103,   103,   104,   105,   105,   106,   107,   107,   108,
     108,   108,   109,   110,   111,   111,   111
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     2,     1,     3,     4,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     3,     4,     4,     4,     4,     4,     1,
       1,     1,     1,     3,     0,     1,     3,     0,     0,     4,
       4,     4,     1,     2,     1,     9,     9,     4,     5,     7,
       0,     5,     0,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     0,     2,
       0,     4,     1,     2,     2,     0,     4,     2,     1,     1,
       1,     1,     1,     3,     2,     0,     4,     4,     5,     1,
       3,     2,     0,     2,     1,     4,     0,     3,     3,     4,
       3,     6,     6,     3,     0,     2,     4,     3,     0,     0,
       1,     1,     4,     3,     2,     2,     0
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
#line 206 "my_parser.y" /* yacc.c:1646  */
    {	auto my_tree = new Program((yyvsp[-2].statementList)); 
								my_tree->emit(register_pool);
								string_table.write_strings();}
#line 1638 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 209 "my_parser.y" /* yacc.c:1646  */
    { 	(yyvsp[-1].expr)->emit(register_pool); }
#line 1644 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 213 "my_parser.y" /* yacc.c:1646  */
    { 	std::string str((yyvsp[0].stringVal));
								Lvalue base = symbol_table.get_value(str);
								Lvalue* ret_val = new Lvalue;
								ret_val->offset = base.offset;
								ret_val->type = base.type;
								ret_val->string_label = base.string_label;						
								(yyval.lval) = ret_val; }
#line 1656 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 220 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1662 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 221 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1668 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 225 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found LvalueExpression" << std::endl; }
								(yyval.expr) = new LvalueExpression((yyvsp[0].lval));}
#line 1675 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 227 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found OrExpression" << std::endl; }
								(yyval.expr) =  new OrExpression((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1682 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 229 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found AndExpression" << std::endl; }
								(yyval.expr) =  new AndExpression((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1689 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 231 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found EqExpression" << std::endl; }
								(yyval.expr) =  new EqExpression((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1696 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 233 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found NeqExpression" << std::endl; }
								(yyval.expr) =  new NeqExpression((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1703 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 235 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found LeqExpression" << std::endl; }
								(yyval.expr) =  new LeqExpression((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1710 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 237 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found GeqExpression" << std::endl; }
								(yyval.expr) =  new GeqExpression((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1717 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 239 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found LessExpression" << std::endl; }
								(yyval.expr) =  new LessExpression((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1724 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 241 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found GreaterExpression" << std::endl; }
								(yyval.expr) =  new GreaterExpression((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1731 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 243 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found AddExpression" << std::endl; }
								(yyval.expr) =  new AddExpression((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1738 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 245 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found SubExpression" << std::endl; }
								(yyval.expr) = new SubExpression((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1745 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 247 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found MultExpression" << std::endl; }
								(yyval.expr) = new MultExpression((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1752 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 249 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found DivExpression" << std::endl; }
								(yyval.expr) = new DivExpression((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1759 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 251 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found RemainExpression" << std::endl; }
								(yyval.expr) = new RemainExpression((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1766 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 253 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found BitwiseExpression" << std::endl; }
								(yyval.expr) = new BitwiseExpression((yyvsp[0].expr));}
#line 1773 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 255 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found NegExpression" << std::endl; }
								(yyval.expr) = new NegExpression((yyvsp[0].expr));}
#line 1780 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 257 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found ParenExpression" << std::endl; }
								(yyval.expr) = new ParenExpression((yyvsp[-1].expr));}
#line 1787 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 260 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found FuncExpression" << std::endl; }
								(yyval.expr) = new FuncExpression((yyvsp[-3].stringVal), (yyvsp[-1].exprList));}
#line 1794 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 263 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found ToCharExpression" << std::endl; }
								(yyval.expr) = new ToCharExpression((yyvsp[-1].expr));}
#line 1801 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 266 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found ToIntExpression" << std::endl; }
								(yyval.expr) = new ToIntExpression((yyvsp[-1].expr));}
#line 1808 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 269 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found PredExpression" << std::endl; }
								(yyval.expr) = new ToIntExpression((yyvsp[-1].expr));}
#line 1815 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 272 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found SuccExpression" << std::endl; }
								(yyval.expr) = new ToIntExpression((yyvsp[-1].expr));}
#line 1822 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 274 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found IntExpression" << std::endl; }
								(yyval.expr) = new IntExpression((yyvsp[0].val));}
#line 1829 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 276 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found CharExpression" << std::endl; }
								char new_char;
								if((yyvsp[0].stringVal)[1] == '\\' && (yyvsp[0].stringVal)[2] == 'n'){
									new_char = '\n';
								}
								else{
									new_char = (yyvsp[0].stringVal)[1];
								}
								(yyval.expr) = new CharExpression(new_char);}
#line 1843 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 285 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found StringExpression" << std::endl; }
								(yyval.expr) = new StringExpression((yyvsp[0].stringVal));}
#line 1850 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 289 "my_parser.y" /* yacc.c:1646  */
    {	auto new_vec = new std::vector<Expression*>;
								new_vec->push_back((yyvsp[0].expr));
								(yyval.exprList) = new_vec;}
#line 1858 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 292 "my_parser.y" /* yacc.c:1646  */
    {(yyvsp[-2].exprList)->push_back((yyvsp[0].expr));
								(yyval.exprList) = (yyvsp[-2].exprList);}
#line 1865 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 294 "my_parser.y" /* yacc.c:1646  */
    {(yyval.exprList) = new std::vector<Expression*>;}
#line 1871 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 298 "my_parser.y" /* yacc.c:1646  */
    {	auto new_vec = new std::vector<Lvalue*>;
								new_vec->push_back((yyvsp[0].lval));
								(yyval.lvalList) = new_vec;}
#line 1879 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 301 "my_parser.y" /* yacc.c:1646  */
    {(yyvsp[-2].lvalList)->push_back((yyvsp[0].lval));
								(yyval.lvalList) = (yyvsp[-2].lvalList);}
#line 1886 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 303 "my_parser.y" /* yacc.c:1646  */
    {(yyval.lvalList) = new std::vector<Lvalue*>;}
#line 1892 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 307 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new NullStatement(); }
#line 1898 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 308 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1904 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 311 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found WriteStatement" << std::endl; }
									(yyval.statement) = new WriteStatement((yyvsp[-1].exprList));}
#line 1911 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 313 "my_parser.y" /* yacc.c:1646  */
    { if (testingParser) { std::cout << "Found ReadStatement" << std::endl; }
									(yyval.statement) = new ReadStatement((yyvsp[-1].lvalList));}
#line 1918 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 315 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1924 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 316 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1930 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 318 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new StopStatement();}
#line 1936 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 320 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1942 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 322 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1948 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 325 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1954 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 327 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1960 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 329 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1966 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 333 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1972 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 335 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1978 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 336 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1984 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 340 "my_parser.y" /* yacc.c:1646  */
    {  if (testingParser) { std::cout << "Found AssignStatement" << std::endl;} 
								(yyval.statement) = new AssignStatement((yyvsp[-2].lval), (yyvsp[0].expr)); }
#line 1991 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 343 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 1997 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 344 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2003 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 345 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2009 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 346 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2015 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 347 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2021 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 348 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2027 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 349 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2033 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 350 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2039 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 351 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2045 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 352 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2051 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 353 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2057 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 356 "my_parser.y" /* yacc.c:1646  */
    {  	auto new_vec = new std::vector<Statement*>;
								new_vec->push_back((yyvsp[0].statement));
								(yyval.statementList) = new_vec;}
#line 2065 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 359 "my_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].statementList)->push_back((yyvsp[0].statement));
								(yyval.statementList) = (yyvsp[-2].statementList);}
#line 2072 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 361 "my_parser.y" /* yacc.c:1646  */
    {  (yyval.statementList) = new std::vector<Statement*>;}
#line 2078 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 366 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2084 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 367 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2090 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 369 "my_parser.y" /* yacc.c:1646  */
    { add_const_to_table((yyvsp[-3].stringVal), (yyvsp[-1].expr)); }
#line 2096 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 371 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2102 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 372 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2108 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 376 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2114 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 377 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2120 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 379 "my_parser.y" /* yacc.c:1646  */
    { add_type_to_table((yyvsp[-3].stringVal), (yyvsp[-1].type)); }
#line 2126 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 381 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2132 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 382 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2138 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 384 "my_parser.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 2144 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 385 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2150 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 386 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2156 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 388 "my_parser.y" /* yacc.c:1646  */
    { std::string str((yyvsp[0].stringVal));
								(yyval.type) = types_table.get_value(str); }
#line 2163 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 391 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2169 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 393 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2175 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 394 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2181 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 397 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2187 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 399 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2193 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 401 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2199 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 404 "my_parser.y" /* yacc.c:1646  */
    { 
								auto new_vec = new std::vector<char*> ;
								new_vec->push_back((yyvsp[0].stringVal));
								(yyval.string_list) = new_vec;}
#line 2208 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 408 "my_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].string_list)->push_back((yyvsp[0].stringVal));
								(yyval.string_list) = (yyvsp[-2].string_list); }
#line 2215 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 414 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2221 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 415 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2227 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 417 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2233 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 418 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2239 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 420 "my_parser.y" /* yacc.c:1646  */
    { add_vars_to_symbol_table((yyvsp[-3].string_list), (yyvsp[-1].type)); }
#line 2245 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 426 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2251 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 427 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2257 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 431 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2263 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 434 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2269 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 438 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2275 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 440 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2281 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 443 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2287 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 446 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2293 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 447 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2299 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 449 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2305 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 451 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2311 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 452 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2317 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 455 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2323 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 456 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2329 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 457 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2335 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 460 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2341 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 463 "my_parser.y" /* yacc.c:1646  */
    { (yyval.statementList) = (yyvsp[-1].statementList); }
#line 2347 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 466 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2353 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 467 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2359 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 468 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2365 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
    break;


#line 2369 "/home/braden/Documents/Compilers/Homework/MyCompiler/CMake/parser.cpp" /* yacc.c:1646  */
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
#line 472 "my_parser.y" /* yacc.c:1906  */



void yyerror(const char* s){
	std::cerr << "Parsing error on line " << linenumber << ".\n Message: " << s << std::endl;
	exit(-1);
}


