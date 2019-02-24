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

#include "Expressions/AddExpression.hpp"
#include "Expressions/Expression.hpp"
#include <ctype.h>
#include <iostream>
#include <map>

extern int yylex();
extern int yyparse();
extern FILE *yyin;
void yyerror(const char *s);
extern int linenumber;

#line 80 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:339  */

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
#line 85 "my_parser.y" /* yacc.c:355  */

	int val;
	char* id;
	Expression* expr;

#line 189 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HOME_BRADEN_DOCUMENTS_HOMEWORK_COMPILERS_HOMEWORK_MYCOMPILER_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 206 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:358  */

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
#define YYFINAL  30
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   614

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  252

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
       0,   105,   105,   107,   111,   112,   115,   116,   117,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   132,
     133,   134,   135,   136,   137,   138,   139,   141,   143,   145,
     147,   149,   150,   151,   153,   154,   156,   157,   161,   162,
     165,   166,   167,   168,   170,   171,   173,   176,   178,   180,
     182,   183,   186,   187,   190,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   205,   206,   209,   210,
     215,   216,   218,   220,   221,   225,   226,   228,   230,   231,
     233,   234,   235,   237,   239,   241,   242,   244,   247,   249,
     252,   254,   255,   260,   261,   263,   264,   266,   269,   271,
     274,   278,   281,   283,   287,   290,   291,   293,   295,   296,
     299,   300,   301,   304,   307,   310,   311,   312
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
  "program", "lvalue", "lvalue_seq", "expr", "args_list", "comma_expr",
  "null_statement", "procedure_call", "write_statement", "read_statement",
  "return_statement", "stop_statement", "for_statement",
  "repeat_statement", "while_statement", "if_statement", "elseif_list",
  "else_statement", "assign", "statement", "statement_seq",
  "statement_semi", "const_decl", "eq_item", "eq_list", "type_decl",
  "type_item", "type_list", "type", "simple_type", "record_type",
  "rec_list", "rec_item", "array_type", "array_args", "ident_list",
  "id_list", "var_decl", "var_list", "var_item", "proc_decl", "proc_start",
  "proc_args", "func_decl", "func_start", "formal_params", "param",
  "params_list", "varef", "body", "block", "func_proc_list", YY_NULLPTR
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

#define YYPACT_NINF -144

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-144)))

#define YYTABLE_NINF -111

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-111)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     139,   -43,    -8,   -25,     1,     2,    42,   159,   159,   159,
    -144,  -144,  -144,    61,  -144,    92,    35,   159,    24,    -8,
     159,   159,   159,    37,   159,   159,  -144,    36,    65,   324,
    -144,  -144,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,    39,    43,   347,   159,    -8,
    -144,   370,   393,   416,    -3,   439,    23,   455,  -144,    12,
      12,    36,    36,   124,   540,   556,   556,   556,   556,   556,
     556,    36,    50,    39,    47,    11,  -144,   478,  -144,  -144,
    -144,  -144,  -144,   159,  -144,  -144,    -3,    25,    39,  -144,
      44,    34,    47,    51,    71,    11,     5,    11,    56,   109,
    -144,   439,  -144,    60,    47,  -144,    64,  -144,  -144,  -144,
    -144,    90,  -144,    25,  -144,    47,    73,    73,  -144,    82,
      35,    89,  -144,    25,    55,    93,  -144,   159,   126,   136,
      47,   100,  -144,    44,   101,  -144,   -17,  -144,   102,  -144,
      43,  -144,   103,   117,   159,   106,    55,   159,  -144,   159,
     120,    69,    99,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,   123,   167,   180,   501,    25,  -144,
    -144,    25,  -144,  -144,  -144,  -144,   129,   132,    47,  -144,
     109,     9,   128,   285,   159,   156,   540,   198,   159,   159,
     159,    55,  -144,  -144,  -144,   159,  -144,   137,  -144,   -18,
    -144,   140,  -144,   141,   145,   159,    55,   134,   159,    55,
     148,   149,   540,   123,   517,  -144,   132,    25,  -144,  -144,
     262,   193,  -144,   540,   195,  -144,  -144,  -144,  -144,  -144,
    -144,   159,   159,   159,   199,  -144,   214,   239,   308,    55,
     201,    55,    55,    55,  -144,  -144,   202,   203,   193,  -144,
    -144,  -144
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      71,     0,     0,     0,     0,     0,     4,     0,     0,     0,
      31,    32,    33,     0,     9,     0,    76,     0,     0,    74,
       0,     0,     0,     0,    35,     0,     5,    24,    23,     0,
       1,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    74,
      70,     0,     0,     0,     8,    36,     0,     0,    25,    18,
      19,    20,    21,    11,    10,    12,    13,    16,    17,    14,
      15,    22,     0,    79,     0,   117,    27,     0,    73,    28,
      29,    30,     6,     0,    34,    26,     8,     0,    79,    75,
      92,     0,    96,     0,     0,   117,    71,   117,     0,     0,
      72,    36,     7,     0,    86,    83,     0,    80,    81,    82,
      78,     0,    90,     0,    93,    96,     0,     0,   116,     0,
      76,     0,   115,     0,    38,     0,    37,     0,     0,     0,
      86,     0,    77,    92,     0,    95,   105,   104,     0,    98,
      94,    99,     0,     0,     0,     0,    38,    42,    44,     0,
       0,     4,     0,    65,    64,    63,    62,    61,    60,    59,
      58,    57,    56,    55,    69,     0,     0,     0,     0,    84,
      85,     0,    91,    97,   112,   111,     0,   109,     0,   100,
       0,    71,     0,     0,    35,     0,    43,     0,    35,    35,
       0,    38,    66,   114,     2,     0,    88,     0,   101,   110,
     106,     0,   113,     0,     0,     0,    38,     0,     0,    38,
       0,     0,    54,    69,     0,    87,   109,     0,   102,   103,
       0,    50,    41,    47,     0,    40,    39,    68,    89,   108,
     107,     0,     0,     0,    52,    48,     0,     0,     0,    38,
       0,    38,    38,    38,    53,    49,     0,     0,    50,    46,
      45,    51
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,  -122,   -41,     0,  -131,   110,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,   -38,  -144,  -144,
      26,  -143,     3,   221,   222,   174,   105,   181,   142,  -112,
    -144,  -144,    97,  -144,  -144,  -144,  -100,    95,   108,   114,
     166,  -144,  -144,   146,  -144,  -144,  -144,    66,    33,  -144,
      83,    86,   -33
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    26,    55,    56,    84,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   234,   240,   163,
     164,   165,   192,   120,    49,    50,    46,    88,    89,   106,
     107,   108,   129,   130,   109,   128,    91,   112,    75,   114,
     115,    95,    96,   137,    97,    98,   176,   177,   200,   178,
     121,   125,    99
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,   134,   152,   185,   131,   174,   174,    27,    28,    29,
      17,   142,     2,    82,   175,   175,     2,    47,  -110,   119,
      51,    52,    53,   203,   152,    57,    93,    18,    20,   103,
     131,    94,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,   102,    23,   104,    77,    33,
      34,    35,    25,   207,    21,    22,   196,   210,   211,   197,
     105,    30,   118,   221,   122,    45,   224,    48,   143,   152,
      44,   144,    54,    33,    72,    74,   145,    85,   201,   146,
     147,   148,    90,   101,   152,   113,   116,   152,   149,   150,
     151,    23,    31,    87,   111,    24,   244,    25,   246,   247,
     248,    32,    33,    34,    35,   230,   117,   123,    38,    39,
      40,    41,    42,    43,   124,   127,   132,   152,    23,   152,
     152,   152,   189,    44,    25,   133,   136,   167,    32,    33,
      34,    35,    36,    37,   139,    38,    39,    40,    41,    42,
      43,   141,   166,   168,   183,     1,     2,   186,   169,   187,
      44,   171,   182,   173,   179,   181,   190,     3,     4,   184,
      32,    33,    34,    35,    36,     1,     5,    38,    39,    40,
      41,    42,    43,   188,     6,   191,     7,     3,     4,   193,
     194,     8,    44,   198,   199,   205,     5,   208,   222,   215,
     212,   217,     9,   218,     6,   214,     7,   219,    10,    11,
      12,     8,   225,   226,   233,   220,   209,   235,   223,   239,
     251,   126,     9,   245,   249,   250,   227,   213,    10,    11,
      12,    16,   241,    78,    19,   140,    73,   170,   172,   135,
     110,   236,   237,   238,    32,    33,    34,    35,    36,    37,
      92,    38,    39,    40,    41,    42,    43,   242,   180,   229,
      32,    33,    34,    35,    36,    37,    44,    38,    39,    40,
      41,    42,    43,   138,   204,   216,   202,     0,     0,     0,
       0,   231,    44,     0,     0,    32,    33,    34,    35,    36,
      37,     0,    38,    39,    40,    41,    42,    43,     0,     0,
       0,   232,     0,     0,     0,     0,     0,    44,    32,    33,
      34,    35,    36,    37,     0,    38,    39,    40,    41,    42,
      43,     0,     0,   206,     0,     0,     0,     0,     0,     0,
      44,    32,    33,    34,    35,    36,    37,     0,    38,    39,
      40,    41,    42,    43,     0,     0,   243,     0,     0,     0,
       0,     0,     0,    44,    32,    33,    34,    35,    36,    37,
       0,    38,    39,    40,    41,    42,    43,     0,     0,     0,
      32,    33,    34,    35,    36,    37,    44,    38,    39,    40,
      41,    42,    43,     0,     0,     0,     0,     0,    58,     0,
       0,     0,    44,    32,    33,    34,    35,    36,    37,     0,
      38,    39,    40,    41,    42,    43,     0,     0,     0,     0,
       0,    76,     0,     0,     0,    44,    32,    33,    34,    35,
      36,    37,     0,    38,    39,    40,    41,    42,    43,     0,
       0,     0,     0,     0,    79,     0,     0,     0,    44,    32,
      33,    34,    35,    36,    37,     0,    38,    39,    40,    41,
      42,    43,     0,     0,     0,     0,     0,    80,     0,     0,
       0,    44,    32,    33,    34,    35,    36,    37,     0,    38,
      39,    40,    41,    42,    43,     0,     0,     0,     0,     0,
      81,     0,     0,     0,    44,    32,    33,    34,    35,    36,
      37,     0,    38,    39,    40,    41,    42,    43,     0,    83,
       0,    32,    33,    34,    35,    36,    37,    44,    38,    39,
      40,    41,    42,    43,     0,     0,     0,     0,     0,     0,
       0,    86,     0,    44,    32,    33,    34,    35,    36,    37,
       0,    38,    39,    40,    41,    42,    43,     0,     0,     0,
     100,     0,     0,     0,     0,     0,    44,    32,    33,    34,
      35,    36,    37,     0,    38,    39,    40,    41,    42,    43,
       0,     0,   195,    32,    33,    34,    35,    36,    37,    44,
      38,    39,    40,    41,    42,    43,     0,     0,     0,     0,
       0,     0,     0,   228,     0,    44,    32,    33,    34,    35,
      36,    37,     0,    38,    39,    40,    41,    42,    43,     0,
       0,     0,    32,    33,    34,    35,     0,     0,    44,  -111,
    -111,  -111,  -111,  -111,  -111,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    44
};

static const yytype_int16 yycheck[] =
{
       0,   113,   124,   146,   104,    23,    23,     7,     8,     9,
      53,   123,     7,    54,    32,    32,     7,    17,    35,    14,
      20,    21,    22,    14,   146,    25,    15,    35,    53,     4,
     130,    20,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    86,    49,    22,    48,    37,
      38,    39,    55,   184,    53,    53,   168,   188,   189,   171,
      35,     0,    95,   206,    97,    30,   209,    43,    13,   191,
      58,    16,    35,    37,    35,    32,    21,    54,   178,    24,
      25,    26,    35,    83,   206,    51,    35,   209,    33,    34,
      35,    49,     0,    43,    50,    53,   239,    55,   241,   242,
     243,    36,    37,    38,    39,   217,    35,    51,    43,    44,
      45,    46,    47,    48,     5,    55,    52,   239,    49,   241,
     242,   243,    53,    58,    55,    35,    53,   127,    36,    37,
      38,    39,    40,    41,    52,    43,    44,    45,    46,    47,
      48,    52,    49,    17,   144,     6,     7,   147,    12,   149,
      58,    51,    35,    52,    52,    52,    57,    18,    19,    53,
      36,    37,    38,    39,    40,     6,    27,    43,    44,    45,
      46,    47,    48,    53,    35,    52,    37,    18,    19,    12,
       0,    42,    58,    54,    52,    57,    27,    31,    54,    52,
     190,    51,    53,    52,    35,   195,    37,    52,    59,    60,
      61,    42,    54,    54,    11,   205,     8,    12,   208,    10,
     248,   101,    53,    12,    12,    12,   213,   191,    59,    60,
      61,     0,     8,    49,     2,   120,    45,   130,   133,   115,
      88,   231,   232,   233,    36,    37,    38,    39,    40,    41,
      74,    43,    44,    45,    46,    47,    48,     8,   140,   216,
      36,    37,    38,    39,    40,    41,    58,    43,    44,    45,
      46,    47,    48,   117,   181,   199,   180,    -1,    -1,    -1,
      -1,     9,    58,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    58,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    47,
      48,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    46,    47,    48,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    58,    43,    44,    45,
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
      54,    -1,    -1,    -1,    58,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    46,    47,    48,    -1,    50,
      -1,    36,    37,    38,    39,    40,    41,    58,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    58,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    58,    36,    37,    38,
      39,    40,    41,    -1,    43,    44,    45,    46,    47,    48,
      -1,    -1,    51,    36,    37,    38,    39,    40,    41,    58,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    58,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    36,    37,    38,    39,    -1,    -1,    58,    43,
      44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    18,    19,    27,    35,    37,    42,    53,
      59,    60,    61,    63,    64,    66,    85,    53,    35,    86,
      53,    53,    53,    49,    53,    55,    65,    66,    66,    66,
       0,     0,    36,    37,    38,    39,    40,    41,    43,    44,
      45,    46,    47,    48,    58,    30,    88,    66,    43,    86,
      87,    66,    66,    66,    35,    66,    67,    66,    54,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    35,    89,    32,   100,    54,    66,    87,    54,
      54,    54,    65,    50,    68,    54,    56,    43,    89,    90,
      35,    98,   102,    15,    20,   103,   104,   106,   107,   114,
      52,    66,    65,     4,    22,    35,    91,    92,    93,    96,
      90,    50,    99,    51,   101,   102,    35,    35,   114,    14,
      85,   112,   114,    51,     5,   113,    68,    55,    97,    94,
      95,    98,    52,    35,    91,   101,    53,   105,   105,    52,
      88,    52,    91,    13,    16,    21,    24,    25,    26,    33,
      34,    35,    64,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    81,    82,    83,    49,    66,    17,    12,
      94,    51,    99,    52,    23,    32,   108,   109,   111,    52,
     100,    52,    35,    66,    53,    83,    66,    66,    53,    53,
      57,    52,    84,    12,     0,    51,    91,    91,    54,    52,
     110,    98,   113,    14,   112,    57,    28,    67,    31,     8,
      67,    67,    66,    82,    66,    52,   109,    51,    52,    52,
      66,    83,    54,    66,    83,    54,    54,    84,    56,   110,
      91,     9,    29,    11,    79,    12,    66,    66,    66,    10,
      80,     8,     8,    28,    83,    12,    83,    83,    83,    12,
      12,    79
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    63,    64,    64,    65,    65,    65,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    67,    67,    68,    68,    69,    70,
      71,    72,    73,    73,    74,    75,    75,    76,    77,    78,
      79,    79,    80,    80,    81,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    83,    83,    84,    84,
      85,    85,    86,    87,    87,    88,    88,    89,    90,    90,
      91,    91,    91,    92,    93,    94,    94,    95,    96,    97,
      98,    99,    99,   100,   100,   101,   101,   102,   103,   103,
     104,   105,   106,   106,   107,   108,   108,   109,   110,   110,
     111,   111,   111,   112,   113,   114,   114,   114
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     2,     1,     2,     3,     4,     0,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     3,     4,     4,     4,     4,
       4,     1,     1,     1,     2,     0,     0,     3,     0,     4,
       4,     4,     1,     2,     1,     9,     9,     4,     5,     7,
       0,     5,     0,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     0,     3,     0,
       3,     0,     4,     2,     0,     3,     0,     4,     2,     0,
       1,     1,     1,     1,     3,     2,     0,     4,     4,     5,
       2,     3,     0,     3,     0,     2,     0,     4,     3,     3,
       4,     3,     6,     6,     3,     0,     2,     4,     3,     0,
       0,     1,     1,     4,     3,     2,     2,     0
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
#line 106 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1545 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 107 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1551 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 111 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1557 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 112 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1563 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 115 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1569 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 116 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1575 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 121 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1581 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 122 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1587 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 123 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1593 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 124 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1599 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 125 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1605 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 126 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1611 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 127 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1617 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 128 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1623 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 129 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1629 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 130 "my_parser.y" /* yacc.c:1646  */
    { std::cout << "Ayy" << std::endl;
								(yyval.expr) =  new AddExpression((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1636 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 132 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1642 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 133 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1648 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 134 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1654 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 135 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1660 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 136 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1666 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 137 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1672 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 138 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1678 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 140 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1684 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 142 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1690 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 144 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1696 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 146 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1702 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 148 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1708 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 149 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1714 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 150 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1720 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 151 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1726 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 153 "my_parser.y" /* yacc.c:1646  */
    {}
#line 1732 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 156 "my_parser.y" /* yacc.c:1646  */
    {}
#line 1738 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 157 "my_parser.y" /* yacc.c:1646  */
    {}
#line 1744 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 162 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1750 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 165 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1756 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 166 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1762 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 167 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1768 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 168 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1774 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 170 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1780 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 172 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1786 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 174 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1792 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 177 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1798 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 179 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1804 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 181 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1810 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 184 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1816 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 187 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1822 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 190 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1828 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 192 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1834 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 193 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1840 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 194 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1846 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 195 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1852 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 196 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1858 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 197 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1864 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 198 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1870 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 199 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1876 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 200 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1882 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 201 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1888 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 202 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1894 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 205 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1900 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 206 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1906 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 209 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1912 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 215 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1918 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 216 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1924 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 218 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1930 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 220 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1936 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 221 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1942 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 225 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1948 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 226 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1954 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 228 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1960 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 230 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1966 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 231 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1972 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 233 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1978 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 234 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1984 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 235 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1990 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 237 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1996 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 239 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2002 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 241 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2008 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 242 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2014 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 245 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2020 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 247 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2026 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 249 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2032 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 252 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2038 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 254 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2044 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 255 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2050 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 260 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2056 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 261 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2062 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 263 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2068 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 264 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2074 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 266 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2080 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 270 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2086 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 271 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2092 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 275 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2098 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 278 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2104 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 282 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2110 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 284 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2116 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 287 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2122 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 290 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2128 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 291 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2134 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 293 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2140 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 295 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2146 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 296 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2152 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 299 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2158 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 300 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2164 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 301 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2170 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 304 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2176 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 307 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2182 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 310 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2188 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 311 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2194 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 312 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2200 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;


#line 2204 "/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
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
#line 316 "my_parser.y" /* yacc.c:1906  */



void yyerror(const char* s){
	std::cout << "Parsing error on line " << linenumber << ".\n Message: " << s << std::endl;
	exit(-1);
}


