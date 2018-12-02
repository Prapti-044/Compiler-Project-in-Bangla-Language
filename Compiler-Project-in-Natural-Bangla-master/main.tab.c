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
#line 1 "main.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <math.h>
	#define var 180
	#define pi  3.1416
	#include<stdlib.h>
	#include<string.h>

	typedef struct valueid {
		char *name;
		int type;
		double val;
	} ids;

	ids sym2[10];
	int count = 0;

	int sym[26];

	struct valueid* checkId(char* id);
	ids* makeId(char* id, int type, double val);

#line 89 "main.tab.c" /* yacc.c:339  */

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
   by #include "main.tab.h".  */
#ifndef YY_YY_MAIN_TAB_H_INCLUDED
# define YY_YY_MAIN_TAB_H_INCLUDED
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
    Number = 258,
    Variable = 259,
    FUNCTION = 260,
    AR = 261,
    INC = 262,
    DEC = 263,
    LP = 264,
    RP = 265,
    AND = 266,
    OR = 267,
    NOT = 268,
    KASE = 269,
    RET = 270,
    DIE = 271,
    ELSE_IF = 272,
    START_BLOCK = 273,
    THAN = 274,
    ASSIGN = 275,
    END_BLOCK = 276,
    Var = 277,
    BOOL_EXPR_CLOSE = 278,
    JODI = 279,
    ELSE = 280,
    Main = 281,
    End = 282,
    INT = 283,
    FLOAT = 284,
    SUM = 285,
    SUB = 286,
    MUL = 287,
    DIV = 288,
    FOR = 289,
    WHILE = 290,
    DO = 291,
    LT = 292,
    GT = 293,
    GTE = 294,
    LTE = 295,
    shesh = 296,
    SINE = 297,
    COS = 298,
    TAN = 299,
    LN = 300,
    FACTORIAL = 301,
    TOTHEPOWER = 302,
    Switch = 303,
    Case1 = 304,
    Case2 = 305,
    Case3 = 306,
    IFX = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 24 "main.y" /* yacc.c:355  */

  double DOB;   
  int IN;
  char *id;

#line 188 "main.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MAIN_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 205 "main.tab.c" /* yacc.c:358  */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   271

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  48
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  118

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    53,    53,    54,    55,    58,    68,    80,    81,    84,
      88,   100,   106,   117,   129,   138,   151,   161,   166,   171,
     174,   175,   177,   178,   180,   186,   187,   197,   201,   203,
     204,   215,   217,   219,   221,   233,   234,   235,   236,   238,
     248,   251,   255,   259,   263,   267,   271,   275,   279
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "Number", "Variable", "FUNCTION", "AR",
  "INC", "DEC", "LP", "RP", "AND", "OR", "NOT", "KASE", "RET", "DIE",
  "ELSE_IF", "START_BLOCK", "THAN", "ASSIGN", "END_BLOCK", "Var",
  "BOOL_EXPR_CLOSE", "JODI", "ELSE", "Main", "End", "INT", "FLOAT", "SUM",
  "SUB", "MUL", "DIV", "FOR", "WHILE", "DO", "LT", "GT", "GTE", "LTE",
  "shesh", "SINE", "COS", "TAN", "LN", "FACTORIAL", "TOTHEPOWER", "Switch",
  "Case1", "Case2", "Case3", "IFX", "$accept", "sentence", "ghosona",
  "TYPE", "subsent", "FUNC_BLOCK", "RET_STMNT", "Variables", "Cases",
  "Case", "ELSE_IF_BLOCK", "STMNT_BLOCK", "expression", "bool_expr", YY_NULLPTR
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
     305,   306,   307
};
# endif

#define YYPACT_NINF -55

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-55)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -55,     8,   -55,   -55,    -2,    14,     0,    32,   -55,   -55,
      38,   -55,    39,   -55,    46,   -55,   149,     0,    50,   -55,
     113,    65,    62,    63,   -19,     0,     0,     0,     0,   -55,
     -55,   -55,   -55,   -55,   -55,     0,   156,    64,    61,   -55,
      65,    65,   131,     9,    53,    73,     0,   -55,   -18,   -18,
      -3,    -3,   -55,   -55,    50,    57,    95,    69,   -55,     0,
       0,     0,     0,    66,    65,    65,     0,    74,   174,   -55,
     -55,   -55,   -55,   224,   224,   224,   224,   -55,   -15,   -55,
     -55,   181,    84,    77,    74,   -55,    48,    88,    81,    66,
      70,    98,    66,   -55,   -55,     0,    82,   -55,    65,   -55,
      66,    67,   -55,   199,   -55,    89,   -55,     0,   -55,    66,
     206,    87,   104,   -55,   103,   101,    66,   -55
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    28,    30,     0,     0,     0,     7,     8,
       0,     9,     0,     4,     0,     3,     0,     0,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      35,    36,    37,    38,    39,     0,     0,    20,     0,    29,
       0,     0,     0,     0,     0,     0,     0,     5,    31,    32,
      33,    34,    40,    10,     0,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,    22,     0,    21,
       2,    17,    48,    42,    41,    43,    44,     2,    12,    45,
      46,     0,     0,     0,    22,     6,     0,     0,     0,     0,
       0,     0,     0,    16,    23,     0,     0,    27,     0,    13,
       0,     0,    24,     0,    18,     0,    14,     0,    19,     0,
       0,    25,     0,    26,     0,     0,     0,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -55,   -37,   -55,   -55,   -55,   -55,   -55,    59,    30,   -55,
       4,   -54,    -1,   -34
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    13,    14,    15,    71,    96,    38,    83,    84,
      90,    78,    42,    43
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      16,    46,    88,     3,    19,    20,    57,    58,     2,     6,
      89,     3,     4,     5,    27,    28,    36,     6,    17,    63,
      64,    65,    47,    18,    48,    49,    50,    51,    34,    35,
      79,    80,     7,    86,    52,    99,     8,     9,   102,    56,
      87,    21,    10,    34,    35,    68,   106,    22,    23,    11,
      24,     3,     4,     5,    37,   111,    12,     6,    73,    74,
      75,    76,   117,    95,   105,    81,    44,    45,     3,    19,
      54,    55,     7,    66,    40,    70,     8,     9,    41,    72,
      64,    65,    10,    67,    77,    16,    16,    92,    82,    11,
      98,     3,     4,     5,   103,   100,    12,     6,    93,   109,
      64,    65,   101,   104,    88,    39,   110,   107,   114,    97,
     115,   116,     7,    69,    94,   113,     8,     9,     0,     0,
       0,     0,    10,    39,     0,    25,    26,    27,    28,    11,
       0,     0,    59,    60,    61,    62,    12,    30,    31,    32,
      33,    34,    35,    25,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,     0,    30,    31,    32,    33,    34,
      35,    25,    26,    27,    28,     0,     0,     0,    59,    60,
      61,    62,     0,    30,    31,    32,    33,    34,    35,    25,
      26,    27,    28,     0,     0,     0,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    53,    30,    31,
      32,    33,    34,    35,    25,    26,    27,    28,     0,     0,
       0,    25,    26,    27,    28,    85,    30,    31,    32,    33,
      34,    35,    91,    30,    31,    32,    33,    34,    35,    25,
      26,    27,    28,     0,     0,     0,    25,    26,    27,    28,
     108,    30,    31,    32,    33,    34,    35,   112,    30,    31,
      32,    33,    34,    35,    25,    26,    27,    28,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    31,    32,    33,
      34,    35
};

static const yytype_int8 yycheck[] =
{
       1,    20,    17,     3,     4,     6,    40,    41,     0,     9,
      25,     3,     4,     5,    32,    33,    17,     9,    20,    10,
      11,    12,    41,     9,    25,    26,    27,    28,    46,    47,
      64,    65,    24,    70,    35,    89,    28,    29,    92,    40,
      77,     9,    34,    46,    47,    46,   100,     9,     9,    41,
       4,     3,     4,     5,     4,   109,    48,     9,    59,    60,
      61,    62,   116,    15,    98,    66,     4,     4,     3,     4,
       6,    10,    24,    20,     9,    18,    28,    29,    13,    10,
      11,    12,    34,    10,    18,    86,    87,     3,    14,    41,
       9,     3,     4,     5,    95,    25,    48,     9,    21,    10,
      11,    12,     4,    21,    17,    10,   107,    40,     4,    21,
       7,    10,    24,    54,    84,   111,    28,    29,    -1,    -1,
      -1,    -1,    34,    10,    -1,    30,    31,    32,    33,    41,
      -1,    -1,    37,    38,    39,    40,    48,    42,    43,    44,
      45,    46,    47,    30,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,
      47,    30,    31,    32,    33,    -1,    -1,    -1,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    46,    47,    30,
      31,    32,    33,    -1,    -1,    -1,    30,    31,    32,    33,
      41,    42,    43,    44,    45,    46,    47,    41,    42,    43,
      44,    45,    46,    47,    30,    31,    32,    33,    -1,    -1,
      -1,    30,    31,    32,    33,    41,    42,    43,    44,    45,
      46,    47,    41,    42,    43,    44,    45,    46,    47,    30,
      31,    32,    33,    -1,    -1,    -1,    30,    31,    32,    33,
      41,    42,    43,    44,    45,    46,    47,    41,    42,    43,
      44,    45,    46,    47,    30,    31,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    54,     0,     3,     4,     5,     9,    24,    28,    29,
      34,    41,    48,    55,    56,    57,    65,    20,     9,     4,
      65,     9,     9,     9,     4,    30,    31,    32,    33,    41,
      42,    43,    44,    45,    46,    47,    65,     4,    60,    10,
       9,    13,    65,    66,     4,     4,    20,    41,    65,    65,
      65,    65,    65,    41,     6,    10,    65,    66,    66,    37,
      38,    39,    40,    10,    11,    12,    20,    10,    65,    60,
      18,    58,    10,    65,    65,    65,    65,    18,    64,    66,
      66,    65,    14,    61,    62,    41,    54,    54,    17,    25,
      63,    41,     3,    21,    61,    15,    59,    21,     9,    64,
      25,     4,    64,    65,    21,    66,    64,    40,    41,    10,
      65,    64,    41,    63,     4,     7,    10,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    54,    54,    55,    55,    56,    56,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    58,    59,
      60,    60,    61,    61,    62,    63,    63,    64,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    66,    66,    66,    66,    66,    66,    66,    66
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     3,     5,     1,     1,     1,
       4,     2,     5,     7,     8,    14,     6,     5,     4,     3,
       1,     3,     0,     2,     3,     0,     6,     3,     1,     3,
       1,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     2,     3
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
        case 5:
#line 58 "main.y" /* yacc.c:1646  */
    { 
		ids *a = checkId((yyvsp[-1].id));
		if(a == NULL) {
			ids *x = makeId((yyvsp[-1].id), 1, 0);
			printf("Declared variable-> %s : %lf\n", x->name, x->val);
		}
		else {
			printf("Already Declared variable : %s !\n", (yyvsp[-1].id));
		}
	}
#line 1397 "main.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 68 "main.y" /* yacc.c:1646  */
    {
		ids *a = checkId((yyvsp[-3].id));
		if(a == NULL) {
			ids *x = makeId((yyvsp[-3].id), 1, (yyvsp[-1].DOB));
			printf("Declared variable-> %s : %.10g\n", x->name, x->val);
		}
		else {
			printf("Already Declared variable : %s !\n", (yyvsp[-3].id));
		}
	}
#line 1412 "main.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 84 "main.y" /* yacc.c:1646  */
    {
		printf("Found empty statement\n");
	}
#line 1420 "main.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 88 "main.y" /* yacc.c:1646  */
    {
		ids* a = checkId((yyvsp[-3].id));
		if(a) {
			a->val = (yyvsp[-1].DOB);
			(yyval.DOB) = (yyvsp[-1].DOB);
			printf("Updated variable-> %s : %.10g\n", (yyvsp[-3].id), (yyvsp[-1].DOB));
		}
		else {
			printf("Variable %s not declared!\n", (yyvsp[-3].id));
		}
	}
#line 1436 "main.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 100 "main.y" /* yacc.c:1646  */
    { 
		(yyval.DOB) = (yyvsp[-1].DOB); 
		printf("Value of expression: %.10g\n", (yyvsp[-1].DOB)); 
	}
#line 1445 "main.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 106 "main.y" /* yacc.c:1646  */
    {
								if((yyvsp[-2].IN))
								{
									printf("Expression in if is true\n");
								}
								else
								{
									printf("Expression in if is false\n");
								}
							}
#line 1460 "main.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 117 "main.y" /* yacc.c:1646  */
    {
								 	if((yyvsp[-4].IN))
									{
										printf("Expression in if is true\n");
									}
									else
									{
										printf("Expression in if is false\n");
									}
								   }
#line 1475 "main.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 129 "main.y" /* yacc.c:1646  */
    {
		if((yyvsp[-5].IN)) {
			printf("Expression in if is true\n");
		}
		else {
			printf("Expression in if is false\n");

		}
	}
#line 1489 "main.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 138 "main.y" /* yacc.c:1646  */
    {
		ids *a = checkId((yyvsp[-11].id));
		if(a == NULL) {
			a = malloc(sizeof(ids));
		}
		int start = (int)(yyvsp[-9].DOB);
		int end = (int)(yyvsp[-5].DOB);
		
		for(a->val = start; a->val <= end; a->val+=1)
			printf("FOR : value of %s = %d\n", (yyvsp[-11].id), (int)a->val);
		
	}
#line 1506 "main.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 151 "main.y" /* yacc.c:1646  */
    {
		ids *a = checkId((yyvsp[-3].id));
		if(a) {
			printf("Successful Switch Statement with \n\tvariable %s\n\tcase : %d\n", (yyvsp[-3].id), (int)(a->val));
		}
		else {
			printf("Variable %s not declared!\n", (yyvsp[-3].id));
		}
	}
#line 1520 "main.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 161 "main.y" /* yacc.c:1646  */
    {
		printf("Successfully created function : %s with %d variables\n", (yyvsp[-4].id), (yyvsp[-2].IN));
	}
#line 1528 "main.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 166 "main.y" /* yacc.c:1646  */
    {

}
#line 1536 "main.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 171 "main.y" /* yacc.c:1646  */
    {

}
#line 1544 "main.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 174 "main.y" /* yacc.c:1646  */
    { (yyval.IN) = 1; }
#line 1550 "main.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 175 "main.y" /* yacc.c:1646  */
    { (yyval.IN) = 1 + (yyvsp[0].IN); }
#line 1556 "main.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 178 "main.y" /* yacc.c:1646  */
    { }
#line 1562 "main.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 180 "main.y" /* yacc.c:1646  */
    {
	if((yyvsp[-1].DOB)) {
		printf("Case %d is done\n", (int)(yyvsp[-1].DOB));
	}
}
#line 1572 "main.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 187 "main.y" /* yacc.c:1646  */
    {
		if((yyvsp[-3].IN)) {
			printf("Expression in else if is : true");
		}
		else {
			printf("Expression in else if is : true");

		}
}
#line 1586 "main.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 197 "main.y" /* yacc.c:1646  */
    {
	printf("Block Successfully Parsed\n");
 }
#line 1594 "main.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 201 "main.y" /* yacc.c:1646  */
    { (yyval.DOB) = (yyvsp[0].DOB); 	}
#line 1600 "main.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 203 "main.y" /* yacc.c:1646  */
    { (yyval.DOB) = (yyvsp[-1].DOB); }
#line 1606 "main.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 204 "main.y" /* yacc.c:1646  */
    {
		ids *a = checkId((yyvsp[0].id));
		if(a) {
			(yyval.DOB) = a->val;
		}
		else {
			(yyval.DOB) = 0 ;
			printf("Variable not declared!\n");
		}
	}
#line 1621 "main.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 215 "main.y" /* yacc.c:1646  */
    { (yyval.DOB) = (yyvsp[-2].DOB) + (yyvsp[0].DOB); }
#line 1627 "main.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 217 "main.y" /* yacc.c:1646  */
    { (yyval.DOB) = (yyvsp[-2].DOB) - (yyvsp[0].DOB); }
#line 1633 "main.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 219 "main.y" /* yacc.c:1646  */
    { (yyval.DOB) = (yyvsp[-2].DOB) * (yyvsp[0].DOB); }
#line 1639 "main.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 221 "main.y" /* yacc.c:1646  */
    { 	if((yyvsp[0].DOB)) 
				  		{
				     			(yyval.DOB) = (yyvsp[-2].DOB) / (yyvsp[0].DOB);
				  		}
				  		else
				  		{
							(yyval.DOB) = 0;
							printf("\ndivision by zero\t");
				  		} 	
				    	}
#line 1654 "main.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 233 "main.y" /* yacc.c:1646  */
    { (yyval.DOB)=sin((yyvsp[-1].DOB) * pi / var); printf(" sin value %.10g\n",(yyval.DOB)); }
#line 1660 "main.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 234 "main.y" /* yacc.c:1646  */
    { (yyval.DOB)=cos((yyvsp[-1].DOB) *pi / var); printf(" cos value %.10g\n",(yyval.DOB)); }
#line 1666 "main.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 235 "main.y" /* yacc.c:1646  */
    { (yyval.DOB)=tan((yyvsp[-1].DOB) *pi / var); printf(" tan value %.10g\n",(yyval.DOB)); }
#line 1672 "main.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 236 "main.y" /* yacc.c:1646  */
    { (yyval.DOB)=log((yyvsp[-1].DOB)); printf(" ln value %.10g\n",(yyval.DOB)); }
#line 1678 "main.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 238 "main.y" /* yacc.c:1646  */
    {
						int mult=1 ,i;
						for(i=(yyvsp[-1].DOB);i>0;i--)
						{
							mult=mult*i;
						}
						(yyval.DOB)=mult;
						printf("factorial value !%.10g\n",(yyval.DOB)); 
					 }
#line 1692 "main.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 248 "main.y" /* yacc.c:1646  */
    { (yyval.DOB)=pow((yyvsp[-2].DOB),(yyvsp[0].DOB)); printf("To the power value %.10g\n",(yyval.DOB)); }
#line 1698 "main.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 251 "main.y" /* yacc.c:1646  */
    {
	(yyval.IN) = (yyvsp[-2].DOB) > (yyvsp[0].DOB);
	printf("bool_expr [>]: %d\n", (yyval.IN));
}
#line 1707 "main.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 255 "main.y" /* yacc.c:1646  */
    {
	(yyval.IN) = (yyvsp[-2].DOB) < (yyvsp[0].DOB);
	printf("bool_expr [<]: %d\n", (yyval.IN));
}
#line 1716 "main.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 259 "main.y" /* yacc.c:1646  */
    {
	(yyval.IN) = (yyvsp[-2].DOB) >= (yyvsp[0].DOB);
	printf("bool_expr [>=]: %d\n", (yyval.IN));
}
#line 1725 "main.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 263 "main.y" /* yacc.c:1646  */
    {
	(yyval.IN) = (yyvsp[-2].DOB) <= (yyvsp[0].DOB);
	printf("bool_expr [<=]: %d\n", (yyval.IN));
}
#line 1734 "main.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 267 "main.y" /* yacc.c:1646  */
    {
		(yyval.IN) = (yyvsp[-2].IN) && (yyvsp[0].IN);
	printf("bool_expr AND: %d\n", (yyval.IN));
	}
#line 1743 "main.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 271 "main.y" /* yacc.c:1646  */
    {
		(yyval.IN) = (yyvsp[-2].IN) && (yyvsp[0].IN);
	printf("bool_expr OR: %d\n", (yyval.IN));
	}
#line 1752 "main.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 275 "main.y" /* yacc.c:1646  */
    {
		(yyval.IN) = !((yyvsp[0].IN));
	printf("bool_expr NOT: %d\n", (yyval.IN));
	}
#line 1761 "main.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 279 "main.y" /* yacc.c:1646  */
    { (yyval.IN) = (yyvsp[-1].IN);
			printf("bool_expr bracket: %d\n", (yyval.IN));
	}
#line 1769 "main.tab.c" /* yacc.c:1646  */
    break;


#line 1773 "main.tab.c" /* yacc.c:1646  */
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
#line 283 "main.y" /* yacc.c:1906  */


struct valueid *checkId(char* id) {
	for(int i = 0; i<count; i++) {
		if(strcmp(sym2[i].name, id) == 0) {
			return sym2+i;
		}
	}
	return NULL;
}

ids* makeId(char* id, int type, double maan) {
	ids *val = malloc(sizeof(ids));
	char *name = malloc(sizeof(char)*10);
	strcpy(name, id);
	val->name = name;
	val->type = type;
	val->val = (double) maan;
	sym2[count++] = *val;
	return val;
}

int yywrap()
{
return 1;
}

yyerror(char *s){
	printf( "%s\n", s);
}
