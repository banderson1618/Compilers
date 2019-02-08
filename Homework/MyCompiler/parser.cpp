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

#include <ctype.h>
#include <iostream>
#include <map>

extern int yylex();
extern int yyparse();
extern FILE *yyin;
void yyerror(const char *s);
extern int linenumber;

#line 78 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:339  */

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
#ifndef YY_YY_HOME_BRADEN_DOCUMENTS_COMPILERS_HOMEWORK_MYCOMPILER_PARSER_HPP_INCLUDED
# define YY_YY_HOME_BRADEN_DOCUMENTS_COMPILERS_HOMEWORK_MYCOMPILER_PARSER_HPP_INCLUDED
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
#line 74 "my_parser.y" /* yacc.c:355  */

	int val;
	char* id;

#line 186 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HOME_BRADEN_DOCUMENTS_COMPILERS_HOMEWORK_MYCOMPILER_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 203 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:358  */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   549

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  249

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
       0,    93,    93,    99,   100,   101,   102,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   132,   133,   135,   136,   140,   141,   144,   145,
     146,   147,   149,   150,   152,   155,   157,   159,   161,   162,
     165,   166,   169,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   184,   185,   188,   189,   194,   195,
     197,   199,   200,   204,   205,   207,   209,   210,   212,   213,
     214,   216,   218,   220,   221,   223,   226,   228,   231,   233,
     234,   239,   240,   242,   243,   245,   248,   250,   253,   257,
     260,   262,   266,   269,   270,   272,   274,   275,   278,   279,
     280,   283,   286,   289,   290,   291
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
  "program", "lvalue", "expr", "args_list", "comma_expr", "null_statement",
  "procedure_call", "write_statement", "read_statement",
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

#define YYPACT_NINF -127

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-127)))

#define YYTABLE_NINF -109

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,   -13,    25,     1,   -11,   -13,  -127,     4,     9,    80,
     -13,  -127,    -1,     4,     8,    49,    13,    15,    20,    21,
     -26,    80,    80,    80,  -127,  -127,  -127,  -127,   275,  -127,
      -2,     4,  -127,    26,    14,     8,    42,    47,    49,    -4,
      49,    32,    79,    80,    80,    80,    80,    80,    80,    80,
     491,   491,   298,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,  -127,    80,    34,     8,  -127,
      35,  -127,  -127,  -127,  -127,    55,  -127,    -2,  -127,     8,
      38,    38,  -127,    40,     1,    41,  -127,    -2,    46,    45,
     321,   344,   367,   390,   491,   413,    43,   429,  -127,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,    80,    78,    84,     8,    50,  -127,    26,    48,
    -127,   -14,  -127,    52,  -127,     9,  -127,    53,    67,    80,
      56,    46,    80,  -127,    80,    63,   -25,    51,  -127,  -127,
    -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,    54,
     106,   124,  -127,  -127,  -127,  -127,    80,  -127,  -127,    77,
     452,    -2,  -127,  -127,    -2,  -127,  -127,  -127,  -127,    73,
      82,     8,  -127,    79,    12,    72,   236,    80,    99,   491,
     113,    80,    80,    80,    46,  -127,  -127,  -127,   413,    80,
      80,  -127,    83,  -127,   -15,  -127,    81,  -127,    85,    90,
      80,    46,    89,    80,    46,    91,    92,   491,    54,  -127,
     491,   468,  -127,    82,    -2,  -127,  -127,   213,   125,  -127,
     491,   132,  -127,  -127,  -127,  -127,  -127,  -127,    80,    80,
      80,   138,  -127,   160,   187,   259,    46,   143,    46,    46,
      46,  -127,  -127,   150,   152,   125,  -127,  -127,  -127
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      69,     0,     0,    74,     0,    72,     1,     0,    92,     0,
      72,    68,     0,    77,     0,   115,     0,     0,     0,     0,
       3,     0,     0,     0,    29,    30,    31,     7,     0,    71,
       0,    77,    73,    90,     0,    94,     0,     0,   115,    69,
     115,     0,     0,     0,     0,     0,     0,     0,    33,     0,
      22,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    70,     0,     0,    84,    81,
       0,    78,    79,    80,    76,     0,    88,     0,    91,    94,
       0,     0,   114,     0,    74,     0,   113,     0,    36,     0,
       0,     0,     0,     0,     4,    34,     0,     0,    23,    16,
      17,    18,    19,     9,     8,    10,    11,    14,    15,    12,
      13,    20,     0,     0,     0,    84,     0,    75,    90,     0,
      93,   103,   102,     0,    96,    92,    97,     0,     0,     0,
       0,    36,    40,    42,     0,     0,     3,     0,    63,    62,
      61,    60,    59,    58,    57,    56,    55,    54,    53,    67,
       0,     0,    25,    26,    27,    28,     0,    32,    24,     5,
       0,     0,    82,    83,     0,    89,    95,   110,   109,     0,
     107,     0,    98,     0,    69,     0,     0,    33,     0,    41,
       0,    33,    33,     0,    36,    64,   112,     2,    34,     0,
       0,    86,     0,    99,   108,   104,     0,   111,     0,     0,
       0,    36,     0,     0,    36,     0,     0,    52,    67,    35,
       6,     0,    85,   107,     0,   100,   101,     0,    48,    39,
      45,     0,    38,    37,    66,    87,   106,   105,     0,     0,
       0,    50,    46,     0,     0,     0,    36,     0,    36,    36,
      36,    51,    47,     0,     0,    48,    44,    43,    49
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -127,  -127,   -73,    -9,  -121,   -19,  -127,  -127,  -127,  -127,
    -127,  -127,  -127,  -127,  -127,  -127,   -75,  -127,  -127,   -12,
    -126,   -35,   175,   176,   166,    94,   172,   151,   -76,  -127,
    -127,    68,  -127,  -127,  -127,   -52,    66,    60,   107,   173,
    -127,  -127,   108,  -127,  -127,  -127,    -6,   -23,  -127,    18,
      29,   -34
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    27,    95,    96,   157,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   231,   237,   148,   149,
     150,   185,    84,    10,    11,     8,    31,    32,    70,    71,
      72,   114,   115,    73,   113,    34,    76,    15,    78,    79,
      38,    39,   122,    40,    41,   169,   170,   195,   171,    85,
      89,    42
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,   119,    67,     1,    82,   178,    86,     1,   167,   167,
      83,   127,    50,    51,    52,   137,   116,   168,   168,     1,
      68,  -108,     4,    47,    47,     6,   198,    48,   182,    49,
      49,     7,     9,    69,    90,    91,    92,    93,    94,    12,
      97,    14,    30,    33,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   202,   111,   137,   128,
     205,   206,   129,   116,    36,    77,    43,   130,    44,    37,
     131,   132,   133,    45,    46,   218,    75,    80,   221,   134,
     135,   136,    81,    87,    88,   191,    16,   117,   192,   112,
     118,   121,   124,   126,   151,   161,   162,   158,    17,    18,
     166,   164,   175,   160,   172,   174,   184,    19,   183,   177,
     241,   137,   243,   244,   245,    20,   181,    21,   186,   196,
     176,   204,    22,   179,   187,   180,   189,   193,   137,   200,
     203,   137,   214,    23,   194,   212,   230,   215,   227,    24,
      25,    26,   216,   219,   232,   222,   223,   188,   236,    53,
      54,    55,    56,    57,    58,   242,    59,    60,    61,    62,
      63,    64,   246,   137,   247,   137,   137,   137,   238,   209,
     248,    66,   208,   224,   207,     3,    29,     5,   125,    13,
     210,   211,    74,   163,   165,   173,   120,    35,   213,   123,
     226,   217,   199,     0,   220,   239,    53,    54,    55,    56,
      57,    58,   197,    59,    60,    61,    62,    63,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    66,   233,
     234,   235,   228,    53,    54,    55,    56,    57,    58,     0,
      59,    60,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,   229,     0,     0,    66,     0,     0,     0,    53,
      54,    55,    56,    57,    58,     0,    59,    60,    61,    62,
      63,    64,     0,     0,   201,     0,     0,     0,     0,     0,
       0,    66,    53,    54,    55,    56,    57,    58,     0,    59,
      60,    61,    62,    63,    64,     0,     0,   240,     0,     0,
       0,     0,     0,     0,    66,    53,    54,    55,    56,    57,
      58,     0,    59,    60,    61,    62,    63,    64,     0,     0,
       0,    53,    54,    55,    56,    57,    58,    66,    59,    60,
      61,    62,    63,    64,     0,     0,     0,    65,     0,     0,
       0,     0,     0,    66,    53,    54,    55,    56,    57,    58,
       0,    59,    60,    61,    62,    63,    64,     0,     0,     0,
       0,     0,    98,     0,     0,     0,    66,    53,    54,    55,
      56,    57,    58,     0,    59,    60,    61,    62,    63,    64,
       0,     0,     0,     0,     0,   152,     0,     0,     0,    66,
      53,    54,    55,    56,    57,    58,     0,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,   153,     0,
       0,     0,    66,    53,    54,    55,    56,    57,    58,     0,
      59,    60,    61,    62,    63,    64,     0,     0,     0,     0,
       0,   154,     0,     0,     0,    66,    53,    54,    55,    56,
      57,    58,     0,    59,    60,    61,    62,    63,    64,     0,
       0,     0,     0,     0,   155,     0,     0,     0,    66,    53,
      54,    55,    56,    57,    58,     0,    59,    60,    61,    62,
      63,    64,     0,   156,     0,    53,    54,    55,    56,    57,
      58,    66,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,   159,     0,    66,    53,    54,
      55,    56,    57,    58,     0,    59,    60,    61,    62,    63,
      64,     0,     0,   190,    53,    54,    55,    56,    57,    58,
      66,    59,    60,    61,    62,    63,    64,     0,     0,     0,
       0,     0,     0,     0,   225,     0,    66,    53,    54,    55,
      56,    57,    58,     0,    59,    60,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    66
};

static const yytype_int16 yycheck[] =
{
       9,    77,     4,     7,    38,   131,    40,     7,    23,    23,
      14,    87,    21,    22,    23,    88,    68,    32,    32,     7,
      22,    35,    35,    49,    49,     0,    14,    53,    53,    55,
      55,    30,    43,    35,    43,    44,    45,    46,    47,    35,
      49,    32,    43,    35,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,   177,    66,   131,    13,
     181,   182,    16,   115,    15,    51,    53,    21,    53,    20,
      24,    25,    26,    53,    53,   201,    50,    35,   204,    33,
      34,    35,    35,    51,     5,   161,     6,    52,   164,    55,
      35,    53,    52,    52,    49,    17,    12,    54,    18,    19,
      52,    51,    35,   112,    52,    52,    52,    27,    57,    53,
     236,   184,   238,   239,   240,    35,    53,    37,    12,   171,
     129,     8,    42,   132,     0,   134,    49,    54,   201,    57,
      31,   204,    51,    53,    52,    52,    11,    52,   214,    59,
      60,    61,    52,    54,    12,    54,    54,   156,    10,    36,
      37,    38,    39,    40,    41,    12,    43,    44,    45,    46,
      47,    48,    12,   236,    12,   238,   239,   240,     8,   188,
     245,    58,   184,   208,   183,     0,    10,     1,    84,     7,
     189,   190,    31,   115,   118,   125,    79,    14,   194,    81,
     213,   200,   174,    -1,   203,     8,    36,    37,    38,    39,
      40,    41,   173,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,   228,
     229,   230,     9,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    58,    -1,    -1,    -1,    36,
      37,    38,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    48,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    36,    37,    38,    39,    40,    41,    58,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    52,    -1,    -1,
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
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    58,    36,
      37,    38,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    48,    -1,    50,    -1,    36,    37,    38,    39,    40,
      41,    58,    43,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    58,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    47,
      48,    -1,    -1,    51,    36,    37,    38,    39,    40,    41,
      58,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    58,    36,    37,    38,
      39,    40,    41,    -1,    43,    44,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    63,    84,    35,    85,     0,    30,    87,    43,
      85,    86,    35,    88,    32,    99,     6,    18,    19,    27,
      35,    37,    42,    53,    59,    60,    61,    64,    65,    86,
      43,    88,    89,    35,    97,   101,    15,    20,   102,   103,
     105,   106,   113,    53,    53,    53,    53,    49,    53,    55,
      65,    65,    65,    36,    37,    38,    39,    40,    41,    43,
      44,    45,    46,    47,    48,    52,    58,     4,    22,    35,
      90,    91,    92,    95,    89,    50,    98,    51,   100,   101,
      35,    35,   113,    14,    84,   111,   113,    51,     5,   112,
      65,    65,    65,    65,    65,    65,    66,    65,    54,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    55,    96,    93,    94,    97,    52,    35,    90,
     100,    53,   104,   104,    52,    87,    52,    90,    13,    16,
      21,    24,    25,    26,    33,    34,    35,    64,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    80,    81,
      82,    49,    54,    54,    54,    54,    50,    67,    54,    56,
      65,    17,    12,    93,    51,    98,    52,    23,    32,   107,
     108,   110,    52,    99,    52,    35,    65,    53,    82,    65,
      65,    53,    53,    57,    52,    83,    12,     0,    65,    49,
      51,    90,    90,    54,    52,   109,    97,   112,    14,   111,
      57,    28,    66,    31,     8,    66,    66,    65,    81,    67,
      65,    65,    52,   108,    51,    52,    52,    65,    82,    54,
      65,    82,    54,    54,    83,    56,   109,    90,     9,    29,
      11,    78,    12,    65,    65,    65,    10,    79,     8,     8,
      28,    82,    12,    82,    82,    82,    12,    12,    78
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    64,    64,    64,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    66,    66,    67,    67,    68,    69,    70,    71,
      72,    72,    73,    74,    74,    75,    76,    77,    78,    78,
      79,    79,    80,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    82,    82,    83,    83,    84,    84,
      85,    86,    86,    87,    87,    88,    89,    89,    90,    90,
      90,    91,    92,    93,    93,    94,    95,    96,    97,    98,
      98,    99,    99,   100,   100,   101,   102,   102,   103,   104,
     105,   105,   106,   107,   107,   108,   109,   109,   110,   110,
     110,   111,   112,   113,   113,   113
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     1,     3,     4,     6,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     3,     4,     4,     4,     4,     4,     1,
       1,     1,     2,     0,     0,     3,     0,     4,     4,     4,
       1,     2,     1,     9,     9,     4,     5,     7,     0,     5,
       0,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     0,     3,     0,     3,     0,
       4,     2,     0,     3,     0,     4,     2,     0,     1,     1,
       1,     1,     3,     2,     0,     4,     4,     5,     2,     3,
       0,     3,     0,     2,     0,     4,     3,     3,     4,     3,
       6,     6,     3,     0,     2,     4,     3,     0,     0,     1,
       1,     4,     3,     2,     2,     0
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
#line 94 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1525 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 99 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1531 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 100 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1537 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 101 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1543 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 102 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1549 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 106 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1555 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 107 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1561 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 108 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1567 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 109 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1573 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 110 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1579 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 111 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1585 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 112 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1591 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 113 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1597 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 114 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1603 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 115 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1609 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 116 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1615 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 117 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1621 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 118 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1627 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 119 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1633 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 120 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1639 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 121 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1645 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 122 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1651 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 123 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1657 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 124 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1663 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 125 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1669 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 126 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1675 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 127 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1681 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 128 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1687 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 129 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1693 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 130 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1699 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 132 "my_parser.y" /* yacc.c:1646  */
    {}
#line 1705 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 135 "my_parser.y" /* yacc.c:1646  */
    {}
#line 1711 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 136 "my_parser.y" /* yacc.c:1646  */
    {}
#line 1717 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 141 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1723 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 144 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1729 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 145 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1735 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 146 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1741 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 147 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1747 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 149 "my_parser.y" /* yacc.c:1646  */
    { }
#line 1753 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 151 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1759 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 153 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1765 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 156 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1771 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 158 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1777 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 160 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1783 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 163 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1789 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 166 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1795 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 169 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1801 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 171 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1807 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 172 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1813 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 173 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1819 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 174 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1825 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 175 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1831 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 176 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1837 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 177 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1843 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 178 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1849 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 179 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1855 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 180 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1861 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 181 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1867 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 184 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1873 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 185 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1879 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 188 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1885 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 194 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1891 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 195 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1897 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 197 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1903 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 199 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1909 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 200 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1915 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 204 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1921 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 205 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1927 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 207 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1933 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 209 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1939 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 210 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1945 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 212 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1951 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 213 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1957 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 214 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1963 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 216 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1969 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 218 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1975 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 220 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1981 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 221 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1987 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 224 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1993 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 226 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 1999 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 228 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2005 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 231 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2011 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 233 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2017 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 234 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2023 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 239 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2029 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 240 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2035 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 242 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2041 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 243 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2047 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 245 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2053 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 249 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2059 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 250 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2065 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 254 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2071 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 257 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2077 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 261 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2083 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 263 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2089 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 266 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2095 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 269 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2101 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 270 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2107 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 272 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2113 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 274 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2119 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 275 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2125 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 278 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2131 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 279 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2137 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 280 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2143 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 283 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2149 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 286 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2155 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 289 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2161 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 290 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2167 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 291 "my_parser.y" /* yacc.c:1646  */
    {  }
#line 2173 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
    break;


#line 2177 "/home/braden/Documents/Compilers/Homework/MyCompiler/parser.cpp" /* yacc.c:1646  */
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
#line 295 "my_parser.y" /* yacc.c:1906  */



void yyerror(const char* s){
	std::cout << "Parsing error on line " << linenumber << ".\n Message: " << s << std::endl;
	exit(-1);
}


