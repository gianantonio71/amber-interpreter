/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "amber.yy"

  /* Prologue */

  #pragma warning(disable : 4065)

  #include "common.h"
  #include "parser.h"
  
  #define YYSTYPE obj

  int yylex (void);
  void yyerror (char const *);


/* Line 371 of yacc.c  */
#line 83 "amber.tab.cc"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     LOWER_CASE_ID = 258,
     SYMBOL = 259,
     OP_FN_NAME = 260,
     BUILTIN = 261,
     LABEL = 262,
     NUMBER = 263,
     CHAR = 264,
     STRING = 265,
     MIXED_CASE_ID = 266,
     UPPER_CASE_ID = 267,
     RIGHT_ARROW = 268,
     LEFT_ARROW = 269,
     DOUBLE_RIGHT_ARROW = 270,
     DOUBLE_DOT = 271,
     ELLIPSIS = 272,
     ASSIGNMENT = 273,
     LE = 274,
     GE = 275,
     EQ = 276,
     NEQ = 277,
     IN = 278,
     OR = 279,
     CROSSED_LEFT_ARROW = 280,
     KW_AND = 281,
     KW_AS = 282,
     KW_ASSERT = 283,
     KW_BREAK = 284,
     KW_CASE = 285,
     KW_DEF = 286,
     KW_DISABLED = 287,
     KW_DO = 288,
     KW_ELSE = 289,
     KW_ELIF = 290,
     KW_END = 291,
     KW_FAIL = 292,
     KW_FALSE = 293,
     KW_FOR = 294,
     KW_FROM = 295,
     KW_IF = 296,
     KW_IN = 297,
     KW_IS = 298,
     KW_ITSELF = 299,
     KW_LET = 300,
     KW_LOOP = 301,
     KW_MATCH = 302,
     KW_NIL = 303,
     KW_NOT = 304,
     KW_OR = 305,
     KW_PRINT = 306,
     KW_REPLACE = 307,
     KW_RETRIEVE = 308,
     KW_RETURN = 309,
     KW_SELECT = 310,
     KW_SUBTYPECHECK = 311,
     KW_THEN = 312,
     KW_TESTCASES = 313,
     KW_TRACE = 314,
     KW_TRUE = 315,
     KW_TYPE = 316,
     KW_USING = 317,
     KW_WHEN = 318,
     KW_WHERE = 319,
     KW_WHILE = 320,
     KW_WITH = 321,
     NEG = 322
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 213 "amber.tab.cc"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  126
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5273

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  298
/* YYNRULES -- Number of states.  */
#define YYNSTATES  682

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   322

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    73,     2,
      80,    81,    74,    71,    84,    72,    78,    75,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    87,    79,
      69,    68,    70,    89,    67,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    85,     2,    86,    77,    88,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    82,    90,    83,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    76
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    18,
      24,    28,    33,    35,    38,    41,    45,    52,    57,    63,
      70,    73,    79,    81,    85,    91,   100,   102,   106,   112,
     121,   132,   141,   151,   160,   171,   176,   184,   192,   201,
     209,   219,   229,   231,   233,   235,   238,   240,   244,   246,
     249,   253,   259,   264,   271,   279,   289,   293,   301,   308,
     315,   318,   323,   330,   333,   338,   342,   346,   352,   353,
     360,   364,   370,   376,   378,   382,   384,   387,   389,   391,
     394,   396,   398,   400,   404,   409,   413,   415,   417,   420,
     424,   427,   431,   434,   438,   440,   444,   446,   449,   452,
     454,   456,   461,   465,   469,   475,   481,   487,   493,   498,
     503,   507,   512,   517,   523,   527,   533,   535,   538,   541,
     544,   546,   551,   556,   559,   563,   565,   569,   571,   575,
     577,   581,   583,   587,   589,   591,   593,   595,   597,   599,
     602,   606,   609,   613,   617,   620,   624,   630,   634,   639,
     644,   649,   651,   656,   663,   669,   674,   679,   683,   686,
     690,   694,   698,   702,   706,   710,   714,   718,   722,   726,
     730,   734,   737,   741,   745,   749,   754,   759,   767,   771,
     776,   781,   788,   793,   800,   806,   814,   822,   834,   842,
     852,   862,   876,   884,   894,   904,   916,   922,   929,   933,
     941,   947,   955,   965,   969,   971,   975,   977,   981,   983,
     987,   990,   995,   997,  1001,  1005,  1011,  1015,  1021,  1023,
    1027,  1029,  1033,  1037,  1043,  1047,  1053,  1057,  1061,  1065,
    1069,  1075,  1077,  1081,  1085,  1092,  1094,  1098,  1100,  1104,
    1106,  1108,  1110,  1112,  1114,  1117,  1119,  1121,  1123,  1125,
    1127,  1129,  1131,  1133,  1135,  1137,  1139,  1141,  1143,  1145,
    1147,  1149,  1151,  1153,  1155,  1157,  1159,  1161,  1163,  1165,
    1167,  1169,  1171,  1173,  1175,  1177,  1179,  1181,  1183,  1185,
    1187,  1189,  1191,  1193,  1195,  1197,  1199,  1201,  1203,  1205,
    1207,  1209,  1211,  1213,  1215,  1217,  1219,  1221,  1223
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      92,     0,    -1,    93,    -1,    92,    93,    -1,   101,    -1,
     103,    -1,    98,    -1,    95,    -1,    94,    -1,    56,   114,
      69,   114,    79,    -1,    58,    96,    36,    -1,    58,    32,
      96,    36,    -1,    97,    -1,    96,    97,    -1,   122,    79,
      -1,    51,   122,    79,    -1,    39,    80,   110,    81,    96,
      79,    -1,   151,    18,   122,    79,    -1,    62,   100,    82,
     106,    83,    -1,    62,    82,   100,    79,   106,    83,    -1,
     114,   148,    -1,   114,   148,    80,   118,    81,    -1,    99,
      -1,   100,    84,    99,    -1,    61,   139,    68,   120,    79,
      -1,    61,   139,    85,   102,    86,    68,   120,    79,    -1,
     140,    -1,   102,    84,   140,    -1,   114,   148,    68,   122,
      79,    -1,   114,   148,    80,   105,    81,    68,   122,    79,
      -1,   114,   148,    80,   105,    81,    68,   122,    45,   111,
      79,    -1,   114,   148,    80,   105,    81,    82,   111,    83,
      -1,   114,   148,    80,   105,    81,    82,   111,   106,    83,
      -1,   114,   148,    80,   105,    81,    87,   130,    79,    -1,
     114,   148,    80,   105,    81,    87,   130,    64,   106,    79,
      -1,   148,    68,   122,    79,    -1,   148,    80,   105,    81,
      68,   122,    79,    -1,   148,    80,   105,    81,    82,   111,
      83,    -1,   148,    80,   105,    81,    82,   111,   106,    83,
      -1,   148,    80,   105,    81,    87,   130,    79,    -1,   148,
      80,   105,    81,    87,   130,    64,   106,    79,    -1,   148,
      80,   105,    81,    68,   122,    45,   111,    79,    -1,    88,
      -1,   151,    -1,   114,    -1,   114,   151,    -1,   104,    -1,
     105,    84,   104,    -1,   103,    -1,   106,   103,    -1,    54,
     122,    79,    -1,    54,   122,    41,   122,    79,    -1,   151,
      18,   122,    79,    -1,   151,    18,   122,    41,   122,    79,
      -1,    41,    80,   122,    81,   111,   108,    79,    -1,    41,
      80,   122,    81,   111,   108,    34,   111,    79,    -1,    46,
     111,    79,    -1,    46,   111,    65,    80,   122,    81,    79,
      -1,    65,    80,   122,    81,   111,    79,    -1,    45,    80,
     136,    81,   111,    79,    -1,    29,    79,    -1,    29,    41,
     122,    79,    -1,    39,    80,   110,    81,   111,    79,    -1,
      37,    79,    -1,    37,    41,   122,    79,    -1,    28,   122,
      79,    -1,    51,   122,    79,    -1,    51,   122,    41,   122,
      79,    -1,    -1,   108,    35,    80,   122,    81,   111,    -1,
     151,    87,   122,    -1,   151,    84,   151,    87,   122,    -1,
     151,    68,   122,    16,   122,    -1,   109,    -1,   110,    79,
     109,    -1,   107,    -1,   111,   107,    -1,   114,    -1,   151,
      -1,   112,   151,    -1,   145,    -1,   141,    -1,    88,    -1,
     152,    80,    81,    -1,   152,    80,   112,    81,    -1,   151,
      67,   151,    -1,    71,    -1,    74,    -1,    85,    86,    -1,
      85,    17,    86,    -1,    82,    83,    -1,    82,    17,    83,
      -1,    80,    81,    -1,    80,    17,    81,    -1,   112,    -1,
     113,    84,   112,    -1,   115,    -1,   114,    74,    -1,   114,
      71,    -1,   139,    -1,   140,    -1,   139,    85,   118,    86,
      -1,    69,   120,    70,    -1,    69,    71,    70,    -1,    85,
      74,    16,    74,    86,    -1,    85,   141,    16,    74,    86,
      -1,    85,    74,    16,   141,    86,    -1,    85,   141,    16,
     141,    86,    -1,    85,   115,    74,    86,    -1,    85,   115,
      71,    86,    -1,    85,   119,    86,    -1,    80,   114,    74,
      81,    -1,    80,   114,    71,    81,    -1,    80,   114,    15,
     114,    81,    -1,    80,   121,    81,    -1,    80,   115,    67,
     114,    81,    -1,   114,    -1,    82,    83,    -1,    85,    86,
      -1,    80,    81,    -1,   152,    -1,   152,    80,   116,    81,
      -1,   152,    80,   121,    81,    -1,   147,   116,    -1,   147,
     116,    89,    -1,   114,    -1,   118,    84,   114,    -1,   115,
      -1,   119,    84,   115,    -1,   116,    -1,   120,    84,   116,
      -1,   117,    -1,   121,    84,   117,    -1,   142,    -1,   145,
      -1,   143,    -1,    60,    -1,    38,    -1,    48,    -1,    82,
      83,    -1,    82,   124,    83,    -1,    80,    81,    -1,    80,
     134,    81,    -1,    80,   127,    81,    -1,    85,    86,    -1,
      85,   123,    86,    -1,    85,   123,    90,   122,    86,    -1,
     122,    67,   122,    -1,   145,    80,   122,    81,    -1,   145,
      80,   127,    81,    -1,   150,    80,   127,    81,    -1,   150,
      -1,   150,    80,   123,    81,    -1,   150,    80,   123,    79,
     136,    81,    -1,   150,    80,    79,   136,    81,    -1,   149,
      80,   123,    81,    -1,   146,    80,   123,    81,    -1,    80,
     122,    81,    -1,    72,   122,    -1,   122,    71,   122,    -1,
     122,    72,   122,    -1,   122,    74,   122,    -1,   122,    75,
     122,    -1,   122,    77,   122,    -1,   122,    73,   122,    -1,
     122,    69,   122,    -1,   122,    70,   122,    -1,   122,    19,
     122,    -1,   122,    20,   122,    -1,   122,    26,   122,    -1,
     122,    50,   122,    -1,    49,   122,    -1,   122,    21,   122,
      -1,   122,    22,   122,    -1,   122,    23,   114,    -1,   139,
      80,   122,    81,    -1,   140,    80,   122,    81,    -1,   139,
      85,   118,    86,    80,   122,    81,    -1,   122,    78,   144,
      -1,   122,    78,   144,    89,    -1,   151,    85,   123,    86,
      -1,   122,    78,   144,    85,   123,    86,    -1,    80,    89,
     131,    81,    -1,    80,    89,   131,    87,   123,    81,    -1,
      82,   122,    87,   131,    83,    -1,    82,   122,    87,   131,
      79,   123,    83,    -1,    39,    80,   131,    81,    82,   122,
      83,    -1,    39,    80,   131,    81,    41,    80,   123,    81,
      82,   122,    83,    -1,    80,   122,    15,   122,    87,   131,
      81,    -1,    80,   122,    15,   122,    87,   131,    79,   123,
      81,    -1,    39,    80,   131,    81,    80,   122,    15,   122,
      81,    -1,    39,    80,   131,    81,    41,    80,   123,    81,
      80,   122,    15,   122,    81,    -1,    85,   122,    87,   151,
      14,   122,    86,    -1,    85,   122,    87,   151,    84,   151,
      14,   122,    86,    -1,    85,   122,    87,   151,    14,   122,
      84,   122,    86,    -1,    85,   122,    87,   151,    84,   151,
      14,   122,    84,   122,    86,    -1,    41,   128,    34,   122,
     138,    -1,    47,    80,   123,    81,   130,   138,    -1,    82,
     111,    83,    -1,    52,   112,    42,   122,    66,   122,   138,
      -1,    55,   114,    42,   122,   138,    -1,    53,   122,    40,
     112,    42,   122,   138,    -1,    53,   122,    40,   112,    42,
     122,    41,   122,   138,    -1,   122,    43,   114,    -1,   122,
      -1,   123,    84,   122,    -1,   125,    -1,   124,    84,   125,
      -1,   122,    -1,   122,    41,   122,    -1,   147,   122,    -1,
     147,   122,    41,   122,    -1,   126,    -1,   127,    84,   126,
      -1,   122,    57,   122,    -1,   128,    84,   122,    57,   122,
      -1,   113,    68,   122,    -1,   113,    68,   122,    45,   111,
      -1,   129,    -1,   130,    84,   129,    -1,   132,    -1,   131,
      84,   132,    -1,   112,    14,   122,    -1,   112,    15,   112,
      14,   122,    -1,   112,    25,   122,    -1,   112,    15,   112,
      25,   122,    -1,   151,    68,   122,    -1,    80,   131,    81,
      -1,   132,    24,   132,    -1,   122,    15,   122,    -1,   122,
      15,   122,    41,   122,    -1,   133,    -1,   134,    84,   133,
      -1,   148,    68,   122,    -1,   148,    80,   137,    81,    68,
     122,    -1,   135,    -1,   136,    84,   135,    -1,   151,    -1,
     137,    84,   151,    -1,    79,    -1,    36,    -1,    11,    -1,
      12,    -1,   142,    -1,    72,   142,    -1,     8,    -1,    10,
      -1,     3,    -1,   153,    -1,   145,    -1,     4,    -1,     6,
      -1,     7,    -1,   150,    -1,   149,    -1,     5,    -1,   151,
      -1,    42,    -1,    26,    -1,    50,    -1,     3,    -1,    61,
      -1,    30,    -1,     3,    -1,   153,    -1,    26,    -1,    28,
      -1,    30,    -1,    31,    -1,    32,    -1,    33,    -1,    34,
      -1,    35,    -1,    36,    -1,    37,    -1,    38,    -1,    39,
      -1,    41,    -1,    42,    -1,    43,    -1,    44,    -1,    46,
      -1,    47,    -1,    48,    -1,    49,    -1,    50,    -1,    51,
      -1,    52,    -1,    54,    -1,    55,    -1,    58,    -1,    57,
      -1,    60,    -1,    61,    -1,    62,    -1,    63,    -1,    64,
      -1,    65,    -1,    66,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   132,   132,   133,   136,   137,   138,   139,   140,   146,
     151,   152,   156,   157,   161,   162,   163,   164,   170,   171,
     175,   176,   179,   180,   186,   187,   191,   192,   198,   199,
     200,   201,   202,   203,   204,   206,   207,   208,   209,   210,
     211,   212,   216,   217,   218,   219,   223,   224,   228,   229,
     235,   236,   238,   241,   243,   244,   246,   247,   248,   250,
     253,   254,   256,   258,   259,   261,   263,   264,   270,   271,
     275,   276,   277,   281,   282,   286,   287,   295,   296,   297,
     298,   299,   300,   304,   305,   308,   310,   311,   312,   313,
     314,   315,   316,   317,   326,   327,   333,   334,   335,   339,
     340,   341,   342,   343,   345,   346,   347,   348,   350,   351,
     352,   354,   355,   357,   358,   360,   364,   365,   366,   367,
     368,   369,   370,   374,   375,   379,   380,   384,   385,   389,
     390,   394,   395,   401,   402,   403,   405,   406,   407,   409,
     410,   412,   413,   414,   416,   417,   418,   420,   421,   423,
     424,   429,   430,   431,   432,   433,   434,   436,   438,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   451,
     452,   453,   455,   456,   458,   460,   461,   462,   464,   465,
     468,   469,   471,   472,   474,   475,   477,   478,   480,   481,
     483,   484,   487,   488,   489,   490,   492,   493,   496,   498,
     499,   501,   502,   505,   510,   511,   516,   517,   521,   522,
     526,   527,   531,   532,   536,   537,   541,   542,   545,   546,
     555,   556,   560,   561,   562,   563,   564,   565,   566,   570,
     571,   575,   576,   580,   581,   585,   586,   590,   591,   614,
     614,   616,   617,   619,   620,   623,   624,   627,   628,   629,
     632,   635,   637,   639,   640,   643,   652,   653,   654,   655,
     658,   659,   660,   663,   664,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,   680,   681,
     682,   683,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   696,   697,   698,   699,   700,   701
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LOWER_CASE_ID", "SYMBOL", "OP_FN_NAME",
  "BUILTIN", "LABEL", "NUMBER", "CHAR", "STRING", "MIXED_CASE_ID",
  "UPPER_CASE_ID", "\"->\"", "\"<-\"", "\"=>\"", "\"..\"", "\"...\"",
  "\":=\"", "\"<=\"", "\">=\"", "\"==\"", "\"/=\"", "\"::\"", "\"\\\\/\"",
  "\"</-\"", "\"and\"", "\"as\"", "\"assert\"", "\"break\"", "\"case\"",
  "\"def\"", "\"disabled\"", "\"do\"", "\"else\"", "\"elif\"", "\"end\"",
  "\"fail\"", "\"false\"", "\"for\"", "\"from\"", "\"if\"", "\"in\"",
  "\"is\"", "\"itself\"", "\"let\"", "\"loop\"", "\"match\"", "\"nil\"",
  "\"not\"", "\"or\"", "\"print\"", "\"replace\"", "\"retrieve\"",
  "\"return\"", "\"select\"", "\"subtypecheck\"", "\"then\"",
  "\"testcases\"", "\"trace\"", "\"true\"", "\"type\"", "\"using\"",
  "\"when\"", "\"where\"", "\"while\"", "\"with\"", "'@'", "'='", "'<'",
  "'>'", "'+'", "'-'", "'&'", "'*'", "'/'", "NEG", "'^'", "'.'", "';'",
  "'('", "')'", "'{'", "'}'", "','", "'['", "']'", "':'", "'_'", "'?'",
  "'|'", "$accept", "src_file", "decl", "subtype_decl", "test_block",
  "test_instrs", "test_instr", "using_block", "signature", "signatures",
  "typedef", "tvars", "fndef", "fnarg", "fnargs", "fndefs", "stmt",
  "elifs", "for_iter", "for_iters", "stmts", "pattern", "patterns", "type",
  "ntltype", "pretype", "labtype", "types", "ntltypes", "pretypes",
  "labtypes", "expr", "exprs", "subexprs", "subexpr", "labexpr",
  "labexprs", "if_branches", "match_branch", "match_branches", "clauses",
  "clause", "map_entry", "map_entries", "let_fndef", "let_fndefs",
  "let_fnargs", "exp_close", "tname", "tvar", "snum", "num", "str",
  "uqctor", "ctor", "builtin", "lab", "fnid", "op", "rid", "vid", "pid",
  "keyword", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,    64,    61,    60,
      62,    43,    45,    38,    42,    47,   322,    94,    46,    59,
      40,    41,   123,   125,    44,    91,    93,    58,    95,    63,
     124
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    92,    93,    93,    93,    93,    93,    94,
      95,    95,    96,    96,    97,    97,    97,    97,    98,    98,
      99,    99,   100,   100,   101,   101,   102,   102,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   104,   104,   104,   104,   105,   105,   106,   106,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   108,   108,
     109,   109,   109,   110,   110,   111,   111,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   113,   113,   114,   114,   114,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   116,   116,   116,   116,
     116,   116,   116,   117,   117,   118,   118,   119,   119,   120,
     120,   121,   121,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   123,   123,   124,   124,   125,   125,
     126,   126,   127,   127,   128,   128,   129,   129,   130,   130,
     131,   131,   132,   132,   132,   132,   132,   132,   132,   133,
     133,   134,   134,   135,   135,   136,   136,   137,   137,   138,
     138,   139,   140,   141,   141,   142,   143,   144,   144,   144,
     145,   146,   147,   148,   148,   149,   150,   150,   150,   150,
     151,   151,   151,   152,   152,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     5,
       3,     4,     1,     2,     2,     3,     6,     4,     5,     6,
       2,     5,     1,     3,     5,     8,     1,     3,     5,     8,
      10,     8,     9,     8,    10,     4,     7,     7,     8,     7,
       9,     9,     1,     1,     1,     2,     1,     3,     1,     2,
       3,     5,     4,     6,     7,     9,     3,     7,     6,     6,
       2,     4,     6,     2,     4,     3,     3,     5,     0,     6,
       3,     5,     5,     1,     3,     1,     2,     1,     1,     2,
       1,     1,     1,     3,     4,     3,     1,     1,     2,     3,
       2,     3,     2,     3,     1,     3,     1,     2,     2,     1,
       1,     4,     3,     3,     5,     5,     5,     5,     4,     4,
       3,     4,     4,     5,     3,     5,     1,     2,     2,     2,
       1,     4,     4,     2,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     2,
       3,     2,     3,     3,     2,     3,     5,     3,     4,     4,
       4,     1,     4,     6,     5,     4,     4,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     3,     3,     4,     4,     7,     3,     4,
       4,     6,     4,     6,     5,     7,     7,    11,     7,     9,
       9,    13,     7,     9,     9,    11,     5,     6,     3,     7,
       5,     7,     9,     3,     1,     3,     1,     3,     1,     3,
       2,     4,     1,     3,     3,     5,     3,     5,     1,     3,
       1,     3,     3,     5,     3,     5,     3,     3,     3,     3,
       5,     1,     3,     3,     6,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   260,   255,   241,   242,   258,   262,   257,   259,     0,
       0,   261,     0,     0,     0,     0,     0,     2,     8,     7,
       6,     4,     5,     0,    96,    99,   100,     0,   254,   253,
     256,     0,   250,   251,   245,   246,     0,   137,     0,     0,
       0,   138,     0,     0,     0,     0,     0,   136,   261,     0,
       0,     0,     0,     0,    12,     0,     0,     0,   133,   135,
     134,     0,     0,   151,   256,     0,     0,    22,     0,     0,
     263,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   291,   290,   292,   293,
     294,   295,   296,   297,   298,     0,     0,     0,     0,   116,
     129,     0,   120,   264,   252,     0,    96,   131,     0,     0,
       0,     0,   127,     0,     0,   243,     1,     3,    98,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     256,     0,   171,     0,   260,   262,   261,    86,    87,     0,
       0,     0,    82,     0,    77,    81,    80,    78,     0,     0,
       0,   158,   141,     0,     0,   212,     0,   231,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     139,    75,     0,   208,     0,   206,   256,   144,   204,     0,
      10,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,   103,   119,   117,   118,
     102,     0,     0,     0,    98,    97,     0,   114,     0,   123,
     244,     0,     0,     0,     0,   110,     0,     0,     0,   125,
       0,     0,    42,    46,     0,    44,    43,     0,    11,     0,
      73,     0,     0,     0,   220,    78,     0,     0,     0,     0,
     204,     0,    15,     0,    92,     0,    90,     0,    88,     0,
      79,     0,     0,     0,     0,     0,    78,     0,   157,   143,
       0,   142,     0,   210,     0,     0,    60,     0,    63,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
      76,     0,     0,   140,     0,     0,     0,     0,   145,     0,
     167,   168,   172,   173,   174,   169,   203,   170,   147,   165,
     166,   159,   160,   164,   161,   162,   163,   247,   178,   249,
     248,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    48,     0,    23,
       0,   130,     0,     0,     0,   112,   111,     0,   132,   124,
       0,     0,   109,   108,   128,     0,     0,     0,     0,     0,
     101,    35,     0,     0,    45,     9,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   214,
       0,     0,     0,    93,    91,    89,     0,    85,    83,     0,
       0,     0,   182,     0,     0,   229,   213,     0,   232,     0,
      65,     0,     0,     0,     0,   235,     0,     0,     0,     0,
       0,    56,     0,    66,     0,    50,     0,   209,     0,   208,
     207,     0,     0,   205,     0,     0,   179,   175,     0,   176,
     148,   149,   156,   155,     0,     0,   152,   150,    17,   180,
      24,     0,     0,     0,    18,    49,     0,   121,   122,   113,
     115,   104,   106,   105,   107,    28,     0,   126,     0,     0,
       0,    47,   227,    74,     0,     0,   222,     0,   224,     0,
       0,     0,   221,   228,   226,     0,    70,   240,   239,   196,
       0,    94,     0,   218,     0,     0,    84,     0,   200,     0,
     226,     0,     0,     0,   211,    61,    64,     0,   157,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   184,
       0,    52,     0,     0,   146,     0,     0,   154,     0,    27,
       0,    19,    21,     0,     0,     0,     0,     0,     0,     0,
      16,     0,     0,     0,     0,     0,     0,     0,   215,     0,
       0,     0,   197,     0,     0,   183,   230,     0,   229,     0,
      68,     0,   236,   233,     0,   237,     0,     0,    67,    51,
       0,     0,     0,     0,     0,   181,     0,   153,     0,     0,
       0,     0,     0,    36,    37,     0,   256,     0,    39,     0,
     223,   225,     0,     0,   186,    72,    71,   216,    95,   219,
     199,     0,   201,     0,   188,    62,     0,    59,     0,     0,
       0,    58,   185,    53,     0,   192,     0,   177,    25,     0,
      29,    31,     0,     0,    33,     0,    38,     0,     0,     0,
       0,     0,     0,     0,     0,    54,     0,   238,    57,     0,
       0,     0,    32,     0,    41,    40,     0,     0,   190,   217,
     202,   189,     0,     0,   234,   194,     0,   193,    30,    34,
       0,     0,    55,     0,     0,     0,   187,     0,   195,     0,
      69,   191
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    17,    18,    19,    53,    54,    20,    67,    68,
      21,   354,   357,   253,   254,   358,   181,   616,   260,   423,
     570,   262,   502,   154,    24,   110,   117,   250,   123,   111,
     118,   270,   189,   184,   185,   165,   166,   139,   503,   504,
     263,   264,   167,   168,   425,   426,   574,   499,    56,    57,
     155,    58,    59,   338,    60,    61,   119,    27,    62,    63,
     140,   158,   113
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -436
static const yytype_int16 yypact[] =
{
     155,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,   129,
    2429,    31,    62,  2170,    18,   281,    35,  -436,  -436,  -436,
    -436,  -436,  -436,   839,  -436,    24,  -436,   107,  -436,  -436,
    -436,   342,  -436,  -436,  -436,  -436,  2744,  -436,    36,  2870,
      42,  -436,  2870,  2870,  1947,  2870,   129,  -436,  -436,  2870,
    1810,  2366,  2108,  2492,  -436,  4534,   153,    71,  -436,  -436,
      82,   100,   110,   132,     3,    87,   129,  -436,   196,   839,
    -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,
    -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,
    -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,
    -436,  -436,  -436,  -436,  -436,   157,    43,   148,   261,   280,
    -436,    59,   161,  -436,  -436,    47,   194,  -436,   288,  2299,
     259,   291,   327,   376,   301,  -436,  -436,  -436,  -436,  -436,
     142,   129,  2870,   191,   129,  2555,  2022,   216,  4897,    30,
     239,  2870,   245,  4567,   265,   279,   299,  -436,  -436,    20,
       7,   234,  -436,   131,   280,  -436,  -436,   319,   334,  4936,
      -3,   245,  -436,  2022,  3534,  -436,   366,  -436,   377,  2870,
    2870,    15,    16,   341,  2933,   349,   627,  2870,  2870,   357,
    -436,  -436,  1671,  3254,   -35,  -436,    23,  -436,  3325,   146,
    -436,  -436,  2870,  2870,  2870,  2870,   129,  2870,   129,  2870,
    2870,  2870,  2870,  2870,  2870,  2870,  2870,  2870,  2870,  3693,
    -436,  2870,   129,  2870,  2807,  2870,  2870,  2618,  2870,  2870,
    2299,   387,   120,  1481,   129,   362,  -436,  -436,  -436,  -436,
    -436,  2299,  2235,   129,   326,   383,   129,  -436,   461,   384,
    -436,    58,   396,   402,   129,  -436,    74,  2870,   191,   280,
     388,  4600,  -436,  -436,   385,   154,  -436,    -4,  -436,  1584,
    -436,   462,   260,   397,   481,   276,  2022,  2870,  2870,  2870,
    5185,   408,  -436,   432,  -436,   446,  -436,   456,  -436,  2870,
    -436,   165,  1872,  1947,  2870,   309,   381,  2870,  -436,  -436,
     461,  -436,  2870,  4974,  4633,  2870,  -436,  2870,  -436,  2022,
    1810,   382,   470,   479,  1728,   567,  4309,  4348,  2870,  -436,
    -436,  2870,  2022,  -436,  2870,  2870,   165,  2870,  -436,  2870,
     303,   303,  1238,  1238,  -436,  5195,   280,  5195,   896,   303,
     303,   290,   290,   290,   245,   245,   245,  -436,   104,  -436,
    -436,  3830,   507,  3893,  3906,   409,   423,   425,   382,   352,
     430,  4666,   510,   221,   516,  -436,  1481,  -436,   415,  -436,
     129,  -436,   520,   453,   217,  -436,  -436,   268,  -436,  -436,
     519,   531,  -436,  -436,  -436,   532,   535,  4699,   454,   129,
    -436,  -436,   101,   191,  -436,  -436,    47,   455,   165,  2744,
    2870,  1947,  2870,   256,  2022,  2022,  2870,   165,  2870,  5185,
    4388,  5007,  1947,  -436,  -436,  -436,  5040,  -436,  -436,    56,
     135,  4388,  -436,  2870,  2870,  3292,  -436,  3745,  -436,  2870,
    -436,  4732,  4765,   525,  3570,  -436,   467,   190,   165,  2870,
     536,  -436,  2870,  -436,  2870,  -436,  3969,  5185,   356,  5078,
    -436,  4427,     8,  5185,  3431,  2870,  -436,  -436,   542,  -436,
    -436,  -436,  -436,  -436,   473,   382,  -436,  -436,  -436,  -436,
    -436,   387,   547,   441,  -436,  -436,   491,  -436,  -436,  -436,
    -436,  -436,  -436,  -436,  -436,  -436,   247,   280,  2870,   627,
    1947,  -436,  -436,  -436,   316,  2681,  5185,   204,  5185,   543,
    2870,  2870,   481,  -436,  3982,   537,  5185,  -436,  -436,  -436,
    2870,   165,    -8,  -436,    66,  2870,  -436,  2870,  -436,   493,
    5185,  2870,  2022,  2870,  5185,  -436,  -436,   627,   627,   627,
     382,  2870,   165,  4042,  2870,  4798,  4831,   627,  2870,  -436,
    2870,  -436,  2870,   165,  -436,   526,  2870,  -436,   497,  -436,
    2299,  -436,  -436,  2870,   627,  1947,  4464,  1416,   -21,  2870,
    -436,  2870,  2870,  2870,  3757,  3603,  2870,  2870,  5185,  2870,
    1947,  1947,  -436,  4388,  4270,  -436,  5185,   375,  5116,  3040,
     627,  3069,  -436,  5185,   498,  -436,   627,  4055,  -436,  -436,
    3099,   484,  4864,  3361,   611,  -436,  4118,  -436,   253,  4501,
    2995,   122,   627,  -436,  -436,   845,   567,  1481,  -436,  3982,
    5185,  5185,   502,  2870,  -436,  5185,  5185,  5152,   165,  -436,
    -436,  2870,  -436,  2870,  -436,  -436,    -1,  -436,   558,   165,
    3128,  -436,  -436,  -436,  2870,  -436,  2870,  -436,  -436,   627,
    -436,  -436,  1018,  1481,  -436,  3158,  -436,  1169,   529,  4131,
     627,  4388,   503,   627,   548,  -436,  2870,  -436,  -436,  3464,
    3394,  3187,  -436,  1191,  -436,  -436,  2870,  2870,  -436,   627,
    -436,  -436,  3217,  2870,  5185,  -436,  2870,  -436,  -436,  -436,
    3818,  3639,  -436,  4194,  3501,  2870,  -436,   627,  -436,  4207,
     627,  -436
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -436,  -436,   615,  -436,  -436,   -32,   -51,  -436,   403,   568,
    -436,  -436,    12,   258,   391,  -347,  -165,  -436,   254,   511,
     119,   -29,  -436,  1200,     5,  -105,   414,  -201,  -436,  -212,
     422,   513,  -136,  -436,   347,   379,   282,  -436,   106,  -435,
    -160,   219,   378,  -436,   151,  -330,  -436,  -385,  1131,   728,
      -2,  1286,  -436,  -436,    28,  -436,   -43,   -17,   302,   530,
       0,   -12,   465
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -294
static const yytype_int16 yytable[] =
{
      30,   112,   191,   285,   135,   271,   130,   169,   353,   463,
      64,   342,    22,   124,   239,   153,    30,   310,   454,   116,
     122,   218,   532,    30,   275,   114,   508,   114,    22,     3,
       4,     3,     4,   643,   644,   126,    64,   273,     1,   284,
       2,   315,     3,   597,   157,   548,     3,     4,   313,   314,
     114,   186,   225,    64,     3,     4,   295,   297,   598,     1,
     559,     5,   233,   561,   268,     6,    34,   128,   128,    30,
     129,   129,   156,     3,     4,   385,   560,     7,   645,   346,
     347,   349,    34,   352,   191,     8,     6,    13,   219,    13,
     276,     9,   533,    10,   296,   298,    11,    12,    14,   387,
      14,   274,   497,    15,    13,    15,   124,   112,   219,   131,
     591,   116,    13,   122,   269,    14,   136,    48,   234,   562,
      15,   235,   141,    14,   227,   538,   361,   362,    15,   230,
     120,    13,   370,   256,     1,    64,   265,   506,     1,   310,
       3,     4,    14,   231,    66,   498,   120,    15,   375,   124,
     561,   213,   438,   280,   116,   220,   122,     1,     1,   466,
       2,     6,   214,   286,   156,     6,     3,     4,     1,   478,
     182,   169,   221,   279,   169,   132,   305,   507,   610,   612,
     215,     5,   305,   479,     6,     6,   633,   133,   480,   445,
     216,   156,    48,   446,     1,     6,    48,     7,    13,   356,
     595,   634,     3,     4,   224,     8,   561,     1,   112,    14,
     247,     9,   217,    10,    15,    48,    11,    12,   551,   112,
     112,     6,   248,    30,    13,   128,    48,   226,   129,   552,
     317,   228,   318,   211,     6,    14,   319,   339,   212,   371,
      15,   232,    34,   632,   376,     3,     4,   169,   256,   374,
     637,   277,    48,   409,   410,   384,   660,   169,   521,   286,
      13,   236,   280,     1,   116,    48,   286,    34,   196,    34,
     522,    14,     3,     4,   390,   391,    15,   509,   223,   252,
     224,   407,   157,   157,   427,   392,   653,   156,   128,    34,
       6,   129,     3,     4,   156,   304,   266,   489,   469,   265,
     460,    30,    28,    13,   305,   231,   120,   241,   121,   535,
     156,   156,   286,   196,    14,   543,   442,   246,    28,    15,
     278,    48,   208,   209,   219,    28,   196,   156,   588,   544,
      13,   427,   628,   120,   545,   121,   490,   231,   491,   128,
     156,    14,   129,   281,   396,  -263,    15,   229,    30,   470,
      13,   128,   567,   120,   129,   121,    30,   485,    30,  -267,
     397,    14,   487,   398,   206,   207,    15,   208,   209,   237,
     465,    28,   238,   501,   203,   204,   205,   206,   207,  -293,
     208,   209,   310,   256,   549,     1,   281,     2,   484,    64,
     412,   157,   581,   394,   286,   286,   413,   495,   242,     4,
     397,   243,   157,   398,   310,   310,   310,   365,     5,   280,
     280,   134,     6,   128,   282,   310,   129,   602,     1,   156,
       2,   299,   156,   156,     7,   310,     3,     4,   484,   301,
     156,   455,     8,   456,   191,   528,   317,   308,   427,   529,
     394,     5,   360,    48,     1,     6,     2,   289,   281,   414,
     290,   501,     3,     4,   613,    30,   614,     7,   291,   394,
     244,   292,   245,    30,   366,     8,   382,     5,   114,   383,
     310,     6,   379,   369,   380,   465,    48,   642,   393,   305,
     157,   394,   372,     7,    13,    64,   310,   280,   373,   402,
     451,     8,   317,   290,   310,    14,   345,   310,   464,   350,
      15,   280,    48,   427,   452,   395,   453,   317,   156,   317,
      13,   457,   286,   403,   290,   310,   501,   305,   305,   305,
      30,    14,   575,    55,   541,    28,    15,   305,   112,   404,
      29,   608,   501,   584,   468,   476,   482,   238,   383,   394,
     156,   388,   405,   389,   305,   157,    29,   596,   519,    55,
     428,   520,   138,    29,   537,   142,   143,   520,   159,   429,
     157,   157,   161,   164,   183,   188,    55,   622,   317,   305,
     305,   305,   542,   156,   565,   379,   305,   317,   587,   618,
     305,   520,   619,   638,   661,   315,   317,   317,   156,   156,
     596,   379,   305,   448,   317,    30,   459,    30,   547,    29,
     461,   467,   462,    28,   388,   471,   517,   465,   280,   656,
     317,   657,   585,   492,   493,   540,   524,   472,   473,   647,
     305,   474,   536,   553,   557,   626,   646,   359,   663,   305,
       1,   127,    30,    30,   222,   305,   569,    30,   571,   378,
     305,   481,   483,   305,   465,   251,   580,   261,    55,   465,
      28,   305,   368,    30,   363,   170,   171,     6,    28,   305,
      28,   440,   305,   590,   172,   465,   302,   609,   303,   416,
     418,   572,   175,   176,   340,     0,     0,   305,   177,     0,
     305,   178,   293,   294,     0,     0,     0,   138,    48,     0,
     306,   307,   179,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   320,   321,   322,   323,     0,
     325,   635,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,     0,     0,   341,     0,   343,   344,    26,     0,
       0,   351,     0,     0,     0,     0,     0,    26,     0,   580,
      26,    26,    26,    26,    26,     0,     0,     0,   651,     0,
       0,     0,     0,    29,     0,     0,     0,    28,     0,   659,
     377,     0,   662,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    26,     0,    26,     0,     0,     0,     0,     0,
     399,   400,   401,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   406,     0,    26,     0,   680,   411,     0,     0,
     415,     0,     0,     0,     0,   417,     0,     0,   421,     0,
     422,     0,     0,   424,     0,     0,     0,     0,     0,     0,
       0,   436,    28,     0,   437,     0,     0,   439,   441,     0,
     443,    29,   444,     0,    26,     0,    26,     0,     0,     0,
       0,     0,     1,     0,     2,     0,     0,    26,     1,    28,
       2,     0,     0,     0,     0,     0,     3,     4,     0,    26,
       0,    26,    26,     0,    26,     5,     0,     0,     0,     6,
       0,     5,     0,     0,     0,     6,     0,    26,    29,    26,
       0,     7,     0,     0,     0,     0,    29,     7,    29,     8,
       0,    26,    28,     0,     0,     8,     0,    28,     0,    28,
      48,     0,    55,   486,     0,   488,    48,     0,     0,   494,
     128,   496,     0,   129,    13,   192,   193,   194,   195,   196,
       0,     0,   197,     0,    26,    14,    26,   510,   636,     0,
      15,     0,   514,     0,    28,    28,     0,     0,     0,    28,
      26,     0,   523,     0,     0,   525,   199,   526,    26,   355,
       0,    26,    26,     0,     0,    28,     0,     0,     0,    26,
      26,    26,     0,  -294,    26,   201,   202,   203,   204,   205,
     206,   207,    26,   208,   209,     0,    26,     0,     0,     0,
       0,     0,     0,     0,     0,    29,     0,    26,     0,     0,
       0,   546,     0,    29,    26,     0,     0,     0,    55,     0,
       0,     0,     0,   554,   555,     0,     0,     0,     0,     0,
      26,    26,     0,   558,     0,     0,     0,     0,   563,     0,
     564,     1,     0,     2,   566,     0,   568,    26,     0,     3,
       4,     0,     0,     0,   573,     0,     0,   577,     0,     0,
      26,     0,     0,   582,     5,   583,     0,     0,     6,   586,
      29,     0,     0,     0,     0,     0,   589,     0,     0,     0,
       7,     0,   599,     0,   600,   601,     0,     0,     8,   605,
     606,     0,   607,     0,     0,     0,     0,    29,     0,    48,
       0,     0,     0,     0,    26,     0,    26,    13,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     0,
       0,   652,     0,    15,     0,     0,     0,    26,     0,     0,
       0,    26,     0,     0,     0,     0,   639,     0,     0,    26,
      29,     0,    26,    26,   641,    29,     0,    29,     0,     0,
      26,    25,     0,     0,     0,     0,     0,   649,     0,   650,
      25,     0,    65,    25,    25,    25,    25,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   664,
       0,     0,    29,    29,     0,     0,     0,    29,     0,   670,
     671,     0,     1,     0,     2,    25,   673,    25,     0,   674,
       3,     4,     0,    29,     0,     0,     0,     0,   679,   539,
       0,    26,     0,     0,     1,     5,     2,    25,     0,     6,
      23,     0,     3,     4,     0,     0,     0,     0,    26,    31,
       0,     7,    69,   109,   115,     0,    23,     5,     0,     8,
       0,     6,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     7,     0,     0,     0,    25,    13,    25,
      26,     8,     0,     0,     0,     0,   160,     0,   655,    14,
      25,     0,    48,     0,    15,     0,     0,   192,   193,     0,
      13,   196,    25,     0,    25,    25,    69,    25,    26,     0,
     669,    14,     0,    26,     0,    26,    15,     0,     0,     0,
      25,     0,    25,     0,     0,     0,     0,     0,    26,    26,
       0,     0,     0,     0,    25,     0,     0,     0,     0,     0,
       0,   125,     0,     0,     0,     0,   115,   201,   202,   203,
     204,   205,   206,   207,     0,   208,   209,     0,    26,   109,
       0,     0,     0,    26,     0,    26,     0,    25,     0,    25,
     125,   249,     0,   255,   257,     0,     0,     0,     0,     0,
       0,     0,     0,    25,     0,     0,     0,     0,     0,   115,
       0,    25,     0,     0,    25,    25,     0,     0,     0,     0,
      26,    26,    25,    25,    25,    26,     0,    25,     0,     0,
       0,     0,     0,     0,     0,    25,     0,     0,     0,    25,
       0,    26,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,     0,     0,   125,     0,   324,    25,   326,     0,
       0,     0,     0,     0,     0,     0,   240,     0,     0,     0,
       0,     0,   249,    25,    25,     0,     0,     0,     0,     1,
     109,     2,   125,    23,    69,     0,     0,     3,     4,     0,
      25,   109,   109,   364,     0,     0,   367,   125,     0,     0,
       0,     0,     5,    25,   170,   171,     6,     0,   255,   125,
       0,     0,     0,   172,     0,   302,     0,   303,     7,   386,
       0,   175,   176,     0,     0,     0,     8,   177,     0,     0,
     178,     0,     0,     0,     0,     0,     0,    48,     0,     0,
       0,   179,     0,     0,     1,    13,     2,    25,     0,    25,
       0,    25,     3,     4,     0,     0,    14,     0,     0,   594,
       0,    15,     0,     0,     0,     0,     0,     5,     0,     0,
      25,     6,     0,     0,    25,     0,     0,     0,     0,     0,
       0,     0,    25,     7,     0,    25,    25,   125,     0,     0,
       0,     8,   125,    25,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,   125,     0,     0,     0,     0,
      13,     0,   125,     0,     0,     0,    23,     0,    23,     0,
     249,    14,     0,     0,     0,     0,    15,     0,   125,   125,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   477,
       0,     0,     0,   255,     0,   125,     0,   144,    32,     0,
       0,   114,    34,     0,    25,     3,     4,     0,   125,     0,
       0,   273,     0,     0,     0,     0,     0,     0,     0,     0,
      71,    25,    72,     0,   145,    74,    75,    76,    77,    78,
      79,    80,    81,    82,     0,    83,    84,    85,    86,     0,
      87,    88,    89,    90,    91,    92,    93,     0,    94,    95,
       0,    96,    97,    25,    98,   146,   100,   101,   102,   103,
     104,     0,     0,    13,     0,   147,   120,     0,   148,     0,
       0,     0,     0,    23,   259,   274,   150,     0,     0,   151,
       0,    25,   152,     0,     1,     0,    25,   125,    25,     0,
     125,   125,     0,     0,     0,     0,     0,     0,   125,     0,
       0,    25,    25,     0,     0,     0,     0,     0,     0,   170,
     171,     6,     0,     0,     0,     0,     0,     0,   172,     0,
     302,     0,   303,     0,     0,     0,   175,   176,     0,     0,
       0,    25,   177,     0,     0,   178,    25,     0,    25,     0,
       0,     1,    48,     0,     0,     0,   179,     0,     0,     0,
     109,     0,     0,     0,     0,     0,     0,    23,     0,     0,
       0,     0,     0,     0,   309,     0,   170,   171,     6,     0,
       0,     0,     0,    25,    25,   172,   125,   302,    25,   303,
       0,     0,     0,   175,   176,     0,     0,     0,     0,   177,
       0,     0,   178,     0,    25,     0,     0,     0,     0,    48,
      23,     0,     0,   430,     0,    23,     0,    23,   125,     0,
       0,     0,     0,     0,     0,     0,     0,   431,     0,     0,
       0,     0,     0,     1,    32,     2,    33,   114,    34,     0,
      35,     3,     4,     0,     0,     0,     0,     0,     0,     0,
       0,   125,    23,    23,     0,     0,     5,    23,     0,     0,
       6,     0,     0,     0,     0,     0,   125,   125,    37,   137,
       0,    39,     7,    23,     0,     0,     0,    40,    41,    42,
       8,     0,    44,    45,     0,    46,     0,     0,     0,     0,
      47,    48,     0,     0,     0,   144,    32,     0,     0,     0,
      34,     0,    49,     3,     4,     0,     0,     0,     0,     0,
      50,   162,    51,     0,     0,    52,     0,     0,    71,   163,
      72,     0,   145,    74,    75,    76,    77,    78,    79,    80,
      81,    82,     0,    83,    84,    85,    86,     0,    87,    88,
      89,    90,    91,    92,    93,     0,    94,    95,     0,    96,
      97,     0,    98,   146,   100,   101,   102,   103,   104,     0,
       0,    13,     0,   147,   120,     0,   148,     0,     0,     0,
     144,    32,   149,   408,   150,    34,     0,   151,     3,     4,
     152,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    71,     0,    72,     0,   145,    74,    75,
      76,    77,    78,    79,    80,    81,    82,     0,    83,    84,
      85,    86,     0,    87,    88,    89,    90,    91,    92,    93,
       0,    94,    95,     0,    96,    97,     0,    98,   146,   100,
     101,   102,   103,   104,     0,     0,    13,     0,   147,   120,
       0,   148,     0,     0,     0,   144,    32,   149,     0,   150,
      34,     0,   151,     3,     4,   152,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    71,     0,
      72,     0,   145,    74,    75,    76,    77,    78,    79,    80,
      81,    82,     0,    83,    84,    85,    86,     0,    87,    88,
      89,    90,    91,    92,    93,     0,    94,    95,     0,    96,
      97,     0,    98,   146,   100,   101,   102,   103,   104,     0,
       0,    13,     0,   147,   120,     0,   148,     0,     0,     0,
       0,     0,   259,     0,   150,     0,     0,   151,     0,     0,
     152,     1,    32,     2,    33,     0,    34,     0,    35,     3,
       4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     0,    37,   137,     0,    39,
       7,     0,     0,     0,     0,    40,    41,    42,     8,     0,
      44,    45,     0,    46,     0,     0,     0,     0,    47,    48,
       0,     0,     0,    70,     0,     0,     0,     0,     0,     0,
      49,     3,     4,     0,     0,     0,     0,     0,    50,     0,
      51,     0,     0,    52,   187,     0,    71,     0,    72,     0,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
       0,    83,    84,    85,    86,     0,    87,    88,    89,    90,
      91,    92,    93,     0,    94,    95,     0,    96,    97,     0,
      98,    99,   100,   101,   102,   103,   104,     0,    70,    13,
       0,   105,   114,     0,     0,     0,     3,     4,     0,     0,
     106,     0,   107,     0,     0,   108,     0,     0,     0,     0,
       0,    71,     0,    72,     0,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,     0,    83,    84,    85,    86,
       0,    87,    88,    89,    90,    91,    92,    93,     0,    94,
      95,     0,    96,    97,     0,    98,    99,   100,   101,   102,
     103,   104,    70,     0,    13,     0,     0,     0,     0,     0,
       3,     4,     0,     0,     0,   106,     0,   107,     0,     0,
     108,     0,     0,     0,     0,    71,     0,    72,     0,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,     0,
      83,    84,    85,    86,     0,    87,    88,    89,    90,    91,
      92,    93,     0,    94,    95,     0,    96,    97,     0,    98,
      99,   100,   101,   102,   103,   104,     0,     0,    13,     1,
      32,     2,    33,     0,    34,     0,    35,     3,     4,   106,
       0,   107,     0,     0,   108,     0,     0,     0,     0,     0,
       0,     0,     5,     0,   170,   171,     6,     0,     0,     0,
       0,     0,     0,   172,    37,   173,     0,   174,     7,     0,
       0,   175,   176,    40,    41,    42,     8,   177,    44,    45,
     178,    46,     0,     0,     0,     0,    47,    48,     0,     0,
       0,   179,     1,    32,     2,    33,     0,    34,    49,    35,
       3,     4,     0,     0,     0,     0,    50,     0,    51,   180,
       0,    52,     0,     0,     0,     5,     0,     0,     0,     6,
       0,    36,     0,     0,     0,     0,     0,    37,    38,     0,
      39,     7,     0,     0,     0,     0,    40,    41,    42,     8,
      43,    44,    45,     0,    46,     0,     0,     0,     0,    47,
      48,     0,     0,     0,     0,     1,    32,     2,    33,     0,
      34,    49,    35,     3,     4,     0,     0,     0,     0,    50,
       0,    51,     0,     0,    52,     0,     0,     0,     5,     0,
       0,     0,     6,     0,     0,     0,     0,     0,   190,     0,
      37,    38,     0,    39,     7,     0,     0,     0,     0,    40,
      41,    42,     8,    43,    44,    45,     0,    46,     0,     0,
       0,     0,    47,    48,     0,     0,     0,     0,     1,    32,
       2,    33,     0,    34,    49,    35,     3,     4,     0,     0,
       0,     0,    50,     0,    51,     0,     0,    52,     0,     0,
       0,     5,     0,     0,     0,     6,     0,     0,     0,     0,
       0,   258,     0,    37,    38,     0,    39,     7,     0,     0,
       0,     0,    40,    41,    42,     8,    43,    44,    45,     0,
      46,     0,     0,     0,     0,    47,    48,     0,     0,     0,
       0,     1,    32,     2,    33,   114,    34,    49,    35,     3,
       4,     0,     0,     0,     0,    50,     0,    51,     0,     0,
      52,     0,     0,     0,     5,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     0,    37,   137,     0,    39,
       7,     0,     0,     0,     0,    40,    41,    42,     8,     0,
      44,    45,     0,    46,     0,     0,     0,     0,    47,    48,
       0,     0,     0,     0,     1,    32,     2,    33,     0,    34,
      49,    35,     3,     4,     0,     0,     0,   348,    50,     0,
      51,     0,     0,    52,     0,     0,     0,     5,     0,     0,
       0,     6,     0,     0,     0,     0,     0,     0,     0,    37,
      38,     0,    39,     7,     0,     0,     0,     0,    40,    41,
      42,     8,    43,    44,    45,     0,    46,     0,     0,     0,
       0,    47,    48,     0,     0,     0,     0,     1,    32,     2,
      33,     0,    34,    49,    35,     3,     4,     0,     0,     0,
     550,    50,     0,    51,     0,     0,    52,     0,     0,     0,
       5,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,     0,    37,    38,     0,    39,     7,     0,     0,     0,
       0,    40,    41,    42,     8,    43,    44,    45,     0,    46,
       0,     0,     0,     0,    47,    48,     0,     0,     0,     0,
       1,    32,     2,    33,   114,    34,    49,    35,     3,     4,
       0,     0,     0,     0,    50,     0,    51,     0,     0,    52,
       0,     0,     0,     5,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     0,    37,   137,     0,    39,     7,
       0,     0,     0,     0,    40,    41,    42,     8,     0,    44,
      45,     0,    46,     0,     0,     0,     0,    47,    48,     0,
       0,     0,     0,     1,    32,     2,    33,     0,    34,    49,
      35,     3,     4,     0,     0,     0,     0,    50,     0,    51,
       0,     0,    52,     0,     0,     0,     5,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     0,    37,   137,
       0,    39,     7,     0,     0,     0,     0,    40,    41,    42,
       8,     0,    44,    45,     0,    46,     0,     0,     0,     0,
      47,    48,     0,     0,     0,     0,     1,    32,     2,    33,
       0,    34,    49,    35,     3,     4,     0,     0,     0,     0,
      50,     0,    51,     0,     0,    52,     0,     0,     0,     5,
       0,     0,     0,     6,     0,     0,     0,     0,     0,     0,
       0,    37,   137,     0,    39,     7,     0,     0,     0,     0,
      40,    41,    42,     8,     0,    44,    45,     0,    46,     0,
       0,     0,     0,    47,    48,     0,     0,     0,     1,     0,
       2,     0,     0,     0,     0,    49,     3,     4,     0,     0,
       0,     0,     0,   300,     0,    51,     0,     0,    52,     0,
       0,     5,     0,   170,   171,     6,     0,     0,     0,     0,
       0,     0,   172,     0,   302,     0,   303,     7,     0,     0,
     175,   176,     0,     1,     0,     8,   177,     0,     0,   178,
       0,     0,     0,     0,     0,     0,    48,     0,     0,     0,
     179,     0,     0,     0,    13,     0,     0,     0,   170,   171,
       6,     0,     1,     0,     0,    14,     0,   172,   631,   302,
      15,   303,     0,     0,     0,   175,   176,     0,     0,     0,
       0,   177,     0,     0,   178,     0,     0,   170,   171,     6,
       0,    48,     1,     0,     0,   179,   172,     0,   302,     0,
     303,     0,     0,     0,   175,   176,     0,     0,     0,   615,
     177,     0,     0,   178,     0,     0,     0,   170,   171,     6,
      48,     1,     0,     0,   179,     0,   172,     0,   302,     0,
     303,     0,     0,     0,   175,   176,     0,     0,   617,     0,
     177,     0,     0,   178,     0,     0,   170,   171,     6,     0,
      48,     1,     0,     0,   179,   172,     0,   302,     0,   303,
       0,     0,     0,   175,   176,     0,     0,     0,   621,   177,
       0,     0,   178,     0,     0,     0,   170,   171,     6,    48,
       1,     0,     0,   179,     0,   172,     0,   302,     0,   303,
       0,     0,     0,   175,   176,     0,     0,   648,     0,   177,
       0,     0,   178,     0,     0,   170,   171,     6,     0,    48,
       1,     0,     0,   179,   172,     0,   302,     0,   303,     0,
       0,     0,   175,   176,     0,     0,     0,   654,   177,     0,
       0,   178,     0,     0,     0,   170,   171,     6,    48,     0,
       0,     0,   179,     0,   172,     0,   302,     0,   303,     0,
       0,     0,   175,   176,     0,     0,   668,     0,   177,     0,
       0,   178,     0,   192,   193,   194,   195,   196,    48,     0,
     197,     0,   179,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   311,   672,   198,     0,     0,
       0,     0,     0,     0,   199,     0,     0,     0,     0,     0,
       0,   192,   193,   194,   195,   196,     0,     0,   197,     0,
       0,   200,     0,   201,   202,   203,   204,   205,   206,   207,
       0,   208,   209,   511,     0,   198,     0,     0,     0,     0,
       0,   312,   199,     0,   192,   193,   194,   195,   196,     0,
       0,   197,     0,     0,     0,     0,     0,     0,     0,   200,
       0,   201,   202,   203,   204,   205,   206,   207,   198,   208,
     209,     0,     0,     0,     0,   199,     0,     0,     0,   512,
     192,   193,   194,   195,   196,     0,     0,   197,     0,     0,
       0,     0,   200,     0,   201,   202,   203,   204,   205,   206,
     207,     0,   208,   209,   198,     0,     0,     0,     0,     0,
       0,   199,   316,   192,   193,   194,   195,   196,     0,     0,
     197,     0,     0,     0,     0,     0,     0,     0,   200,     0,
     201,   202,   203,   204,   205,   206,   207,   198,   208,   209,
       0,     0,     0,     0,   199,   624,     0,   625,     0,     0,
     192,   193,   194,   195,   196,     0,     0,   197,     0,     0,
       0,   200,     0,   201,   202,   203,   204,   205,   206,   207,
       0,   208,   209,     0,   198,     0,     0,     0,   666,     0,
     667,   199,     0,   192,   193,   194,   195,   196,     0,     0,
     197,     0,     0,     0,     0,     0,     0,     0,   200,     0,
     201,   202,   203,   204,   205,   206,   207,   198,   208,   209,
       0,     0,     0,     0,   199,     0,     0,   534,     0,     0,
     192,   193,   194,   195,   196,     0,     0,   197,     0,     0,
       0,   200,     0,   201,   202,   203,   204,   205,   206,   207,
       0,   208,   209,     0,   198,     0,     0,     0,     0,   287,
     665,   199,     0,   192,   193,   194,   195,   196,     0,     0,
     197,     0,     0,     0,     0,     0,     0,     0,   200,     0,
     201,   202,   203,   204,   205,   206,   207,   198,   208,   209,
       0,     0,     0,     0,   199,   287,     0,   678,     0,   192,
     193,   194,   195,   196,     0,     0,   197,     0,     0,     0,
       0,   200,     0,   201,   202,   203,   204,   205,   206,   207,
       0,   208,   209,   198,     0,   288,     0,     0,     0,     0,
     199,     0,   192,   193,   194,   195,   196,     0,     0,   197,
       0,     0,     0,     0,     0,     0,     0,   200,     0,   201,
     202,   203,   204,   205,   206,   207,   198,   208,   209,     0,
       0,   518,     0,   199,     0,     0,     0,     0,   192,   193,
     194,   195,   196,     0,     0,   197,     0,     0,     0,     0,
     200,     0,   201,   202,   203,   204,   205,   206,   207,     0,
     208,   209,   198,     0,     0,     0,   604,     0,     0,   199,
       0,     0,     0,     0,     0,     0,   337,    32,     0,     0,
       0,     0,     0,     0,     0,     0,   200,     0,   201,   202,
     203,   204,   205,   206,   207,     0,   208,   209,     0,    71,
       0,    72,   676,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,     0,    83,    84,    85,    86,     0,    87,
      88,    89,    90,    91,    92,    93,     0,    94,    95,     0,
      96,    97,     0,    98,    99,   100,   101,   102,   103,   104,
     513,     0,     0,     0,   192,   193,   194,   195,   196,     0,
       0,   197,   603,     0,     0,     0,   192,   193,   194,   195,
     196,     0,     0,   197,     0,     0,     0,     0,   198,     0,
       0,     0,     0,     0,     0,   199,     0,     0,     0,     0,
     198,     0,     0,     0,     0,     0,     0,   199,     0,     0,
       0,     0,   200,     0,   201,   202,   203,   204,   205,   206,
     207,     0,   208,   209,   200,     0,   201,   202,   203,   204,
     205,   206,   207,   675,   208,   209,     0,   192,   193,   194,
     195,   196,     0,     0,   197,     0,     0,     0,     0,   192,
     193,   194,   195,   196,     0,     0,   197,     0,     0,     0,
       0,   198,     0,     0,     0,     0,     0,     0,   199,     0,
       0,     0,     0,   198,     0,     0,     0,     0,     0,     0,
     199,     0,     0,     0,     0,   200,     0,   201,   202,   203,
     204,   205,   206,   207,     0,   208,   209,   200,     0,   201,
     202,   203,   204,   205,   206,   207,     0,   208,   209,     0,
       0,   447,   192,   193,   194,   195,   196,     0,     0,   197,
       0,     0,     0,     0,     0,   192,   193,   194,   195,   196,
       0,     0,   197,     0,     0,     0,   198,     0,     0,     0,
       0,     0,     0,   199,     0,     0,     0,     0,     0,   198,
       0,     0,     0,     0,     0,     0,   199,     0,     0,     0,
     200,     0,   201,   202,   203,   204,   205,   206,   207,     0,
     208,   209,     0,   200,   449,   201,   202,   203,   204,   205,
     206,   207,     0,   208,   209,     0,     0,   450,   192,   193,
     194,   195,   196,     0,     0,   197,     0,     0,   556,     0,
       0,   192,   193,   194,   195,   196,     0,     0,   197,     0,
       0,     0,   198,     0,     0,     0,     0,     0,     0,   199,
       0,     0,     0,     0,     0,   198,     0,     0,     0,     0,
       0,     0,   199,     0,     0,     0,   200,     0,   201,   202,
     203,   204,   205,   206,   207,     0,   208,   209,     0,   200,
     527,   201,   202,   203,   204,   205,   206,   207,     0,   208,
     209,   192,   193,   194,   195,   196,     0,     0,   197,     0,
       0,     0,     0,     0,   192,   193,   194,   195,   196,     0,
       0,   197,     0,     0,     0,   198,     0,     0,     0,     0,
       0,     0,   199,     0,     0,     0,     0,     0,   198,     0,
       0,     0,     0,     0,     0,   199,     0,     0,     0,   200,
       0,   201,   202,   203,   204,   205,   206,   207,     0,   208,
     209,     0,   200,   576,   201,   202,   203,   204,   205,   206,
     207,     0,   208,   209,     0,     0,   620,   192,   193,   194,
     195,   196,     0,     0,   197,     0,     0,     0,     0,     0,
     192,   193,   194,   195,   196,     0,     0,   197,     0,     0,
       0,   198,     0,     0,     0,     0,     0,     0,   199,     0,
       0,     0,     0,     0,   198,     0,     0,     0,     0,     0,
       0,   199,     0,     0,     0,   200,     0,   201,   202,   203,
     204,   205,   206,   207,     0,   208,   209,     0,   200,   627,
     201,   202,   203,   204,   205,   206,   207,     0,   208,   209,
       0,     0,   658,   192,   193,   194,   195,   196,     0,     0,
     197,     0,     0,     0,     0,     0,   192,   193,   194,   195,
     196,     0,     0,   197,     0,     0,     0,   198,     0,     0,
       0,     0,     0,     0,   199,     0,     0,     0,     0,     0,
     198,     0,     0,     0,     0,     0,     0,   199,     0,     0,
       0,   200,     0,   201,   202,   203,   204,   205,   206,   207,
       0,   208,   209,     0,   200,   677,   201,   202,   203,   204,
     205,   206,   207,     0,   208,   209,     0,     0,   681,   192,
     193,   194,   195,   196,     0,     0,   197,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   497,     0,     0,     0,
       0,   611,     0,   198,     0,     0,     0,     0,     0,     0,
     199,     0,     0,     0,     0,     0,     0,     0,   192,   193,
     194,   195,   196,     0,     0,   197,     0,   200,     0,   201,
     202,   203,   204,   205,   206,   207,     0,   208,   209,   498,
     432,     0,   198,     0,     0,     0,     0,     0,     0,   199,
       0,     0,     0,     0,     0,     0,     0,   192,   193,   194,
     195,   196,     0,     0,   197,     0,   200,     0,   201,   202,
     203,   204,   205,   206,   207,     0,   208,   209,   433,   434,
       0,   198,     0,     0,     0,     0,     0,     0,   199,     0,
       0,     0,     0,     0,     0,     0,     0,   192,   193,   194,
     195,   196,     0,     0,   197,   200,     0,   201,   202,   203,
     204,   205,   206,   207,   497,   208,   209,   435,     0,     0,
       0,   198,     0,     0,     0,     0,     0,     0,   199,     0,
       0,     0,     0,     0,     0,     0,   192,   193,   194,   195,
     196,     0,     0,   197,     0,   200,     0,   201,   202,   203,
     204,   205,   206,   207,     0,   208,   209,   498,   530,     0,
     198,     0,     0,     0,     0,     0,     0,   199,     0,     0,
       0,     0,     0,   192,   193,   194,   195,   196,     0,     0,
     197,     0,     0,     0,   200,     0,   201,   202,   203,   204,
     205,   206,   207,     0,   208,   209,   531,   198,     0,   592,
       0,     0,     0,     0,   199,     0,     0,     0,     0,     0,
     192,   193,   194,   195,   196,     0,     0,   197,     0,     0,
       0,   200,     0,   201,   202,   203,   204,   205,   206,   207,
       0,   208,   209,   593,   198,     0,   629,     0,     0,     0,
       0,   199,     0,   192,   193,   194,   195,   196,     0,     0,
     197,     0,     0,     0,     0,     0,     0,     0,   200,     0,
     201,   202,   203,   204,   205,   206,   207,   198,   208,   209,
     630,     0,     0,     0,   199,     0,   192,   193,   194,   195,
     196,     0,     0,   197,     0,     0,     0,     0,     0,     0,
       0,   200,     0,   201,   202,   203,   204,   205,   206,   207,
     198,   208,   209,   210,     0,     0,     0,   199,     0,   192,
     193,   194,   195,   196,     0,     0,   197,     0,     0,     0,
       0,     0,     0,     0,   200,     0,   201,   202,   203,   204,
     205,   206,   207,   198,   208,   209,   272,     0,     0,     0,
     199,     0,   192,   193,   194,   195,   196,     0,     0,   197,
       0,     0,     0,     0,     0,     0,     0,   200,     0,   201,
     202,   203,   204,   205,   206,   207,   198,   208,   209,   381,
       0,     0,     0,   199,     0,   192,   193,   194,   195,   196,
       0,     0,   197,     0,     0,     0,     0,     0,     0,     0,
     200,     0,   201,   202,   203,   204,   205,   206,   207,   198,
     208,   209,   420,     0,     0,     0,   199,     0,   192,   193,
     194,   195,   196,     0,     0,   197,     0,     0,     0,     0,
       0,     0,     0,   200,     0,   201,   202,   203,   204,   205,
     206,   207,   198,   208,   209,   458,     0,     0,     0,   199,
       0,   192,   193,   194,   195,   196,     0,     0,   197,     0,
       0,     0,     0,     0,     0,     0,   200,     0,   201,   202,
     203,   204,   205,   206,   207,   198,   208,   209,   475,     0,
       0,     0,   199,     0,   192,   193,   194,   195,   196,     0,
       0,   197,     0,     0,     0,     0,     0,     0,     0,   200,
       0,   201,   202,   203,   204,   205,   206,   207,   198,   208,
     209,   515,     0,     0,     0,   199,     0,   192,   193,   194,
     195,   196,     0,     0,   197,     0,     0,     0,     0,     0,
       0,     0,   200,     0,   201,   202,   203,   204,   205,   206,
     207,   198,   208,   209,   516,     0,     0,     0,   199,     0,
     192,   193,   194,   195,   196,     0,     0,   197,     0,     0,
       0,     0,     0,     0,     0,   200,     0,   201,   202,   203,
     204,   205,   206,   207,   198,   208,   209,   578,     0,     0,
       0,   199,     0,   192,   193,   194,   195,   196,     0,     0,
     197,     0,     0,     0,     0,     0,     0,     0,   200,     0,
     201,   202,   203,   204,   205,   206,   207,   198,   208,   209,
     579,     0,     0,     0,   199,     0,   192,   193,   194,   195,
     196,     0,     0,   197,     0,     0,     0,     0,     0,     0,
       0,   200,     0,   201,   202,   203,   204,   205,   206,   207,
     198,   208,   209,   623,     0,     0,     0,   199,     0,     0,
       0,     0,     0,     0,   267,   192,   193,   194,   195,   196,
       0,     0,   197,     0,   200,     0,   201,   202,   203,   204,
     205,   206,   207,     0,   208,   209,   283,     0,     0,   198,
       0,     0,     0,     0,     0,     0,   199,     0,     0,     0,
       0,     0,     0,   192,   193,   194,   195,   196,     0,     0,
     197,     0,     0,   200,     0,   201,   202,   203,   204,   205,
     206,   207,     0,   208,   209,   419,     0,   198,     0,     0,
       0,     0,     0,     0,   199,     0,   192,   193,   194,   195,
     196,     0,     0,   197,     0,     0,     0,     0,     0,     0,
       0,   200,     0,   201,   202,   203,   204,   205,   206,   207,
     198,   208,   209,     0,     0,     0,     0,   199,     0,   192,
     193,   194,   195,   196,   500,     0,   197,     0,     0,     0,
       0,     0,     0,     0,   200,     0,   201,   202,   203,   204,
     205,   206,   207,   198,   208,   209,     0,     0,     0,     0,
     199,     0,     0,     0,     0,     0,     0,   192,   193,   194,
     195,   196,     0,     0,   197,     0,   505,   200,     0,   201,
     202,   203,   204,   205,   206,   207,     0,   208,   209,   311,
       0,   198,     0,     0,     0,     0,     0,     0,   199,     0,
       0,     0,     0,     0,     0,   192,   193,   194,   195,   196,
       0,     0,   197,     0,     0,   200,     0,   201,   202,   203,
     204,   205,   206,   207,     0,   208,   209,   511,     0,   198,
       0,     0,     0,     0,     0,     0,   199,     0,     0,     0,
       0,   192,   193,   194,   195,   196,     0,     0,   197,     0,
       0,     0,     0,   200,     0,   201,   202,   203,   204,   205,
     206,   207,     0,   208,   209,   198,     0,   640,     0,     0,
       0,     0,   199,     0,   192,   193,   194,   195,   196,     0,
       0,   197,     0,     0,   192,   193,   194,   195,   196,   200,
       0,   201,   202,   203,   204,   205,   206,   207,   198,   208,
     209,     0,     0,     0,     0,   199,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   200,     0,   201,   202,   203,   204,   205,   206,
     207,     0,   208,   209,   201,   202,   203,   204,   205,   206,
     207,     0,   208,   209
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-436)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-294)))

static const yytype_int16 yycheck[] =
{
       0,    13,    53,   163,    36,   141,    23,    50,   220,   356,
      10,   212,     0,    15,   119,    44,    16,   182,   348,    14,
      15,    18,    14,    23,    17,     7,   411,     7,    16,    11,
      12,    11,    12,    34,    35,     0,    36,    17,     3,    42,
       5,    18,    11,    64,    44,   480,    11,    12,    83,    84,
       7,    51,    69,    53,    11,    12,    41,    41,    79,     3,
      68,    26,    15,    84,    34,    30,     8,    71,    71,    69,
      74,    74,    44,    11,    12,    79,    84,    42,    79,   215,
     216,   217,     8,   219,   135,    50,    30,    69,    85,    69,
      83,    56,    84,    58,    79,    79,    61,    62,    80,   259,
      80,    81,    36,    85,    69,    85,   108,   119,    85,    85,
     545,   106,    69,   108,    84,    80,    80,    61,    71,   504,
      85,    74,    80,    80,    81,   455,   231,   232,    85,    70,
      72,    69,    74,   133,     3,   135,   136,    81,     3,   304,
      11,    12,    80,    84,    82,    79,    72,    85,    74,   151,
      84,    80,   312,   153,   149,    68,   151,     3,     3,   360,
       5,    30,    80,   163,   136,    30,    11,    12,     3,    68,
      51,   214,    85,    42,   217,    68,   176,    42,   563,   564,
      80,    26,   182,    82,    30,    30,    64,    80,    87,    85,
      80,   163,    61,    89,     3,    30,    61,    42,    69,    79,
     547,    79,    11,    12,    84,    50,    84,     3,   220,    80,
      68,    56,    80,    58,    85,    61,    61,    62,    14,   231,
     232,    30,    80,   223,    69,    71,    61,    70,    74,    25,
      84,    83,    86,    80,    30,    80,    90,   209,    85,   241,
      85,    80,     8,   590,   246,    11,    12,   290,   248,   244,
     597,    17,    61,   282,   283,   255,   641,   300,    68,   259,
      69,    67,   262,     3,   259,    61,   266,     8,    23,     8,
      80,    80,    11,    12,    14,    15,    85,   413,    82,    88,
      84,   281,   282,   283,   301,    25,   633,   259,    71,     8,
      30,    74,    11,    12,   266,   176,    80,    41,    81,   299,
      79,   301,     0,    69,   304,    84,    72,    16,    74,   445,
     282,   283,   312,    23,    80,    68,   316,    16,    16,    85,
      86,    61,    77,    78,    85,    23,    23,   299,   540,    82,
      69,   348,    79,    72,    87,    74,    80,    84,    82,    71,
     312,    80,    74,    67,    68,    80,    85,    86,   348,    81,
      69,    71,   512,    72,    74,    74,   356,   389,   358,    80,
      84,    80,   391,    87,    74,    75,    85,    77,    78,    81,
     358,    69,    84,   402,    71,    72,    73,    74,    75,    80,
      77,    78,   547,   383,    68,     3,    67,     5,   388,   389,
      81,   391,   528,    84,   394,   395,    87,   397,    71,    12,
      84,    74,   402,    87,   569,   570,   571,    81,    26,   409,
     410,    69,    30,    71,    80,   580,    74,   553,     3,   391,
       5,    80,   394,   395,    42,   590,    11,    12,   428,    80,
     402,    79,    50,    81,   485,    79,    84,    80,   455,    83,
      84,    26,    80,    61,     3,    30,     5,    81,    67,    68,
      84,   480,    11,    12,    79,   455,    81,    42,    81,    84,
      84,    84,    86,   463,    81,    50,    81,    26,     7,    84,
     635,    30,    84,    89,    86,   463,    61,   613,    81,   479,
     480,    84,    86,    42,    69,   485,   651,   487,    86,    81,
      81,    50,    84,    84,   659,    80,   214,   662,    83,   217,
      85,   501,    61,   520,    81,    24,    81,    84,   480,    84,
      69,    81,   512,    81,    84,   680,   545,   517,   518,   519,
     520,    80,   522,    10,    83,   223,    85,   527,   540,    83,
       0,   560,   561,   533,    81,    81,    81,    84,    84,    84,
     512,    79,    86,    81,   544,   545,    16,   547,    81,    36,
      80,    84,    39,    23,    81,    42,    43,    84,    45,    80,
     560,   561,    49,    50,    51,    52,    53,    83,    84,   569,
     570,   571,    81,   545,    81,    84,   576,    84,    81,    81,
     580,    84,    84,    81,    81,    18,    84,    84,   560,   561,
     590,    84,   592,    86,    84,   595,    86,   597,   479,    69,
      84,    81,    86,   301,    79,    86,    81,   595,   608,    80,
      84,    82,    86,   394,   395,    68,    80,    86,    86,   619,
     620,    86,    80,    80,    87,    14,    68,   224,    80,   629,
       3,    16,   632,   633,    66,   635,   517,   637,   519,   248,
     640,   383,   388,   643,   632,   132,   527,   136,   135,   637,
     348,   651,   238,   653,   232,    28,    29,    30,   356,   659,
     358,   314,   662,   544,    37,   653,    39,   561,    41,   290,
     292,   520,    45,    46,   209,    -1,    -1,   677,    51,    -1,
     680,    54,   169,   170,    -1,    -1,    -1,   174,    61,    -1,
     177,   178,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   192,   193,   194,   195,    -1,
     197,   592,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,    -1,    -1,   211,    -1,   213,   214,     0,    -1,
      -1,   218,    -1,    -1,    -1,    -1,    -1,     9,    -1,   620,
      12,    13,    14,    15,    16,    -1,    -1,    -1,   629,    -1,
      -1,    -1,    -1,   223,    -1,    -1,    -1,   455,    -1,   640,
     247,    -1,   643,    -1,    -1,   463,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,
     267,   268,   269,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   279,    -1,    66,    -1,   677,   284,    -1,    -1,
     287,    -1,    -1,    -1,    -1,   292,    -1,    -1,   295,    -1,
     297,    -1,    -1,   300,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   308,   520,    -1,   311,    -1,    -1,   314,   315,    -1,
     317,   301,   319,    -1,   106,    -1,   108,    -1,    -1,    -1,
      -1,    -1,     3,    -1,     5,    -1,    -1,   119,     3,   547,
       5,    -1,    -1,    -1,    -1,    -1,    11,    12,    -1,   131,
      -1,   133,   134,    -1,   136,    26,    -1,    -1,    -1,    30,
      -1,    26,    -1,    -1,    -1,    30,    -1,   149,   348,   151,
      -1,    42,    -1,    -1,    -1,    -1,   356,    42,   358,    50,
      -1,   163,   590,    -1,    -1,    50,    -1,   595,    -1,   597,
      61,    -1,   389,   390,    -1,   392,    61,    -1,    -1,   396,
      71,   398,    -1,    74,    69,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,   196,    80,   198,   414,    83,    -1,
      85,    -1,   419,    -1,   632,   633,    -1,    -1,    -1,   637,
     212,    -1,   429,    -1,    -1,   432,    50,   434,   220,   221,
      -1,   223,   224,    -1,    -1,   653,    -1,    -1,    -1,   231,
     232,   233,    -1,    67,   236,    69,    70,    71,    72,    73,
      74,    75,   244,    77,    78,    -1,   248,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   455,    -1,   259,    -1,    -1,
      -1,   478,    -1,   463,   266,    -1,    -1,    -1,   485,    -1,
      -1,    -1,    -1,   490,   491,    -1,    -1,    -1,    -1,    -1,
     282,   283,    -1,   500,    -1,    -1,    -1,    -1,   505,    -1,
     507,     3,    -1,     5,   511,    -1,   513,   299,    -1,    11,
      12,    -1,    -1,    -1,   521,    -1,    -1,   524,    -1,    -1,
     312,    -1,    -1,   530,    26,   532,    -1,    -1,    30,   536,
     520,    -1,    -1,    -1,    -1,    -1,   543,    -1,    -1,    -1,
      42,    -1,   549,    -1,   551,   552,    -1,    -1,    50,   556,
     557,    -1,   559,    -1,    -1,    -1,    -1,   547,    -1,    61,
      -1,    -1,    -1,    -1,   356,    -1,   358,    69,   360,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    85,    -1,    -1,    -1,   379,    -1,    -1,
      -1,   383,    -1,    -1,    -1,    -1,   603,    -1,    -1,   391,
     590,    -1,   394,   395,   611,   595,    -1,   597,    -1,    -1,
     402,     0,    -1,    -1,    -1,    -1,    -1,   624,    -1,   626,
       9,    -1,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   646,
      -1,    -1,   632,   633,    -1,    -1,    -1,   637,    -1,   656,
     657,    -1,     3,    -1,     5,    44,   663,    46,    -1,   666,
      11,    12,    -1,   653,    -1,    -1,    -1,    -1,   675,   461,
      -1,   463,    -1,    -1,     3,    26,     5,    66,    -1,    30,
       0,    -1,    11,    12,    -1,    -1,    -1,    -1,   480,     9,
      -1,    42,    12,    13,    14,    -1,    16,    26,    -1,    50,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    42,    -1,    -1,    -1,   106,    69,   108,
     512,    50,    -1,    -1,    -1,    -1,    46,    -1,    79,    80,
     119,    -1,    61,    -1,    85,    -1,    -1,    19,    20,    -1,
      69,    23,   131,    -1,   133,   134,    66,   136,   540,    -1,
      79,    80,    -1,   545,    -1,   547,    85,    -1,    -1,    -1,
     149,    -1,   151,    -1,    -1,    -1,    -1,    -1,   560,   561,
      -1,    -1,    -1,    -1,   163,    -1,    -1,    -1,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    -1,   106,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    78,    -1,   590,   119,
      -1,    -1,    -1,   595,    -1,   597,    -1,   196,    -1,   198,
      44,   131,    -1,   133,   134,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,   149,
      -1,   220,    -1,    -1,   223,   224,    -1,    -1,    -1,    -1,
     632,   633,   231,   232,   233,   637,    -1,   236,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   244,    -1,    -1,    -1,   248,
      -1,   653,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     259,    -1,    -1,    -1,   108,    -1,   196,   266,   198,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,
      -1,    -1,   212,   282,   283,    -1,    -1,    -1,    -1,     3,
     220,     5,   136,   223,   224,    -1,    -1,    11,    12,    -1,
     299,   231,   232,   233,    -1,    -1,   236,   151,    -1,    -1,
      -1,    -1,    26,   312,    28,    29,    30,    -1,   248,   163,
      -1,    -1,    -1,    37,    -1,    39,    -1,    41,    42,   259,
      -1,    45,    46,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    65,    -1,    -1,     3,    69,     5,   356,    -1,   358,
      -1,   360,    11,    12,    -1,    -1,    80,    -1,    -1,    83,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
     379,    30,    -1,    -1,   383,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   391,    42,    -1,   394,   395,   241,    -1,    -1,
      -1,    50,   246,   402,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    -1,   259,    -1,    -1,    -1,    -1,
      69,    -1,   266,    -1,    -1,    -1,   356,    -1,   358,    -1,
     360,    80,    -1,    -1,    -1,    -1,    85,    -1,   282,   283,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,
      -1,    -1,    -1,   383,    -1,   299,    -1,     3,     4,    -1,
      -1,     7,     8,    -1,   463,    11,    12,    -1,   312,    -1,
      -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,   480,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    41,    42,    43,    44,    -1,
      46,    47,    48,    49,    50,    51,    52,    -1,    54,    55,
      -1,    57,    58,   512,    60,    61,    62,    63,    64,    65,
      66,    -1,    -1,    69,    -1,    71,    72,    -1,    74,    -1,
      -1,    -1,    -1,   463,    80,    81,    82,    -1,    -1,    85,
      -1,   540,    88,    -1,     3,    -1,   545,   391,   547,    -1,
     394,   395,    -1,    -1,    -1,    -1,    -1,    -1,   402,    -1,
      -1,   560,   561,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      39,    -1,    41,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,   590,    51,    -1,    -1,    54,   595,    -1,   597,    -1,
      -1,     3,    61,    -1,    -1,    -1,    65,    -1,    -1,    -1,
     540,    -1,    -1,    -1,    -1,    -1,    -1,   547,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    28,    29,    30,    -1,
      -1,    -1,    -1,   632,   633,    37,   480,    39,   637,    41,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    54,    -1,   653,    -1,    -1,    -1,    -1,    61,
     590,    -1,    -1,    65,    -1,   595,    -1,   597,   512,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   545,   632,   633,    -1,    -1,    26,   637,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,   560,   561,    38,    39,
      -1,    41,    42,   653,    -1,    -1,    -1,    47,    48,    49,
      50,    -1,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,
      60,    61,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,
       8,    -1,    72,    11,    12,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    -1,    -1,    85,    -1,    -1,    26,    89,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    41,    42,    43,    44,    -1,    46,    47,
      48,    49,    50,    51,    52,    -1,    54,    55,    -1,    57,
      58,    -1,    60,    61,    62,    63,    64,    65,    66,    -1,
      -1,    69,    -1,    71,    72,    -1,    74,    -1,    -1,    -1,
       3,     4,    80,    81,    82,     8,    -1,    85,    11,    12,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    42,
      43,    44,    -1,    46,    47,    48,    49,    50,    51,    52,
      -1,    54,    55,    -1,    57,    58,    -1,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    69,    -1,    71,    72,
      -1,    74,    -1,    -1,    -1,     3,     4,    80,    -1,    82,
       8,    -1,    85,    11,    12,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    41,    42,    43,    44,    -1,    46,    47,
      48,    49,    50,    51,    52,    -1,    54,    55,    -1,    57,
      58,    -1,    60,    61,    62,    63,    64,    65,    66,    -1,
      -1,    69,    -1,    71,    72,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    82,    -1,    -1,    85,    -1,    -1,
      88,     3,     4,     5,     6,    -1,     8,    -1,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,
      42,    -1,    -1,    -1,    -1,    47,    48,    49,    50,    -1,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    11,    12,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      82,    -1,    -1,    85,    86,    -1,    26,    -1,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    43,    44,    -1,    46,    47,    48,    49,
      50,    51,    52,    -1,    54,    55,    -1,    57,    58,    -1,
      60,    61,    62,    63,    64,    65,    66,    -1,     3,    69,
      -1,    71,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,
      80,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      -1,    46,    47,    48,    49,    50,    51,    52,    -1,    54,
      55,    -1,    57,    58,    -1,    60,    61,    62,    63,    64,
      65,    66,     3,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      11,    12,    -1,    -1,    -1,    80,    -1,    82,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    26,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      41,    42,    43,    44,    -1,    46,    47,    48,    49,    50,
      51,    52,    -1,    54,    55,    -1,    57,    58,    -1,    60,
      61,    62,    63,    64,    65,    66,    -1,    -1,    69,     3,
       4,     5,     6,    -1,     8,    -1,    10,    11,    12,    80,
      -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    -1,    41,    42,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    60,    61,    -1,    -1,
      -1,    65,     3,     4,     5,     6,    -1,     8,    72,    10,
      11,    12,    -1,    -1,    -1,    -1,    80,    -1,    82,    83,
      -1,    85,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,
      41,    42,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,    60,
      61,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
       8,    72,    10,    11,    12,    -1,    -1,    -1,    -1,    80,
      -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      38,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,    -1,    -1,
      -1,    -1,    60,    61,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,    72,    10,    11,    12,    -1,    -1,
      -1,    -1,    80,    -1,    82,    -1,    -1,    85,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    38,    39,    -1,    41,    42,    -1,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    72,    10,    11,
      12,    -1,    -1,    -1,    -1,    80,    -1,    82,    -1,    -1,
      85,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,
      42,    -1,    -1,    -1,    -1,    47,    48,    49,    50,    -1,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,
      72,    10,    11,    12,    -1,    -1,    -1,    79,    80,    -1,
      82,    -1,    -1,    85,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    41,    42,    -1,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,
      -1,    60,    61,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,     8,    72,    10,    11,    12,    -1,    -1,    -1,
      79,    80,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    -1,    41,    42,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    72,    10,    11,    12,
      -1,    -1,    -1,    -1,    80,    -1,    82,    -1,    -1,    85,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,    42,
      -1,    -1,    -1,    -1,    47,    48,    49,    50,    -1,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,    72,
      10,    11,    12,    -1,    -1,    -1,    -1,    80,    -1,    82,
      -1,    -1,    85,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      -1,    41,    42,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    -1,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,
      60,    61,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,     8,    72,    10,    11,    12,    -1,    -1,    -1,    -1,
      80,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    -1,    52,    53,    -1,    55,    -1,
      -1,    -1,    -1,    60,    61,    -1,    -1,    -1,     3,    -1,
       5,    -1,    -1,    -1,    -1,    72,    11,    12,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    82,    -1,    -1,    85,    -1,
      -1,    26,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    39,    -1,    41,    42,    -1,    -1,
      45,    46,    -1,     3,    -1,    50,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    69,    -1,    -1,    -1,    28,    29,
      30,    -1,     3,    -1,    -1,    80,    -1,    37,    83,    39,
      85,    41,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    54,    -1,    -1,    28,    29,    30,
      -1,    61,     3,    -1,    -1,    65,    37,    -1,    39,    -1,
      41,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    79,
      51,    -1,    -1,    54,    -1,    -1,    -1,    28,    29,    30,
      61,     3,    -1,    -1,    65,    -1,    37,    -1,    39,    -1,
      41,    -1,    -1,    -1,    45,    46,    -1,    -1,    79,    -1,
      51,    -1,    -1,    54,    -1,    -1,    28,    29,    30,    -1,
      61,     3,    -1,    -1,    65,    37,    -1,    39,    -1,    41,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    79,    51,
      -1,    -1,    54,    -1,    -1,    -1,    28,    29,    30,    61,
       3,    -1,    -1,    65,    -1,    37,    -1,    39,    -1,    41,
      -1,    -1,    -1,    45,    46,    -1,    -1,    79,    -1,    51,
      -1,    -1,    54,    -1,    -1,    28,    29,    30,    -1,    61,
       3,    -1,    -1,    65,    37,    -1,    39,    -1,    41,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    79,    51,    -1,
      -1,    54,    -1,    -1,    -1,    28,    29,    30,    61,    -1,
      -1,    -1,    65,    -1,    37,    -1,    39,    -1,    41,    -1,
      -1,    -1,    45,    46,    -1,    -1,    79,    -1,    51,    -1,
      -1,    54,    -1,    19,    20,    21,    22,    23,    61,    -1,
      26,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    79,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      -1,    67,    -1,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    78,    41,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    87,    50,    -1,    19,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    69,    70,    71,    72,    73,    74,    75,    43,    77,
      78,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    87,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    67,    -1,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    78,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    87,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      69,    70,    71,    72,    73,    74,    75,    43,    77,    78,
      -1,    -1,    -1,    -1,    50,    84,    -1,    86,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    67,    -1,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    78,    -1,    43,    -1,    -1,    -1,    84,    -1,
      86,    50,    -1,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      69,    70,    71,    72,    73,    74,    75,    43,    77,    78,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    86,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    67,    -1,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    78,    -1,    43,    -1,    -1,    -1,    -1,    15,
      86,    50,    -1,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      69,    70,    71,    72,    73,    74,    75,    43,    77,    78,
      -1,    -1,    -1,    -1,    50,    15,    -1,    86,    -1,    19,
      20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    67,    -1,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    78,    43,    -1,    81,    -1,    -1,    -1,    -1,
      50,    -1,    19,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,
      70,    71,    72,    73,    74,    75,    43,    77,    78,    -1,
      -1,    81,    -1,    50,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      67,    -1,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    78,    43,    -1,    -1,    -1,    83,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    70,
      71,    72,    73,    74,    75,    -1,    77,    78,    -1,    26,
      -1,    28,    83,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    41,    42,    43,    44,    -1,    46,
      47,    48,    49,    50,    51,    52,    -1,    54,    55,    -1,
      57,    58,    -1,    60,    61,    62,    63,    64,    65,    66,
      15,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      -1,    26,    15,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    67,    -1,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    78,    67,    -1,    69,    70,    71,    72,
      73,    74,    75,    15,    77,    78,    -1,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    67,    -1,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    78,    67,    -1,    69,
      70,    71,    72,    73,    74,    75,    -1,    77,    78,    -1,
      -1,    81,    19,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      67,    -1,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    78,    -1,    67,    81,    69,    70,    71,    72,    73,
      74,    75,    -1,    77,    78,    -1,    -1,    81,    19,    20,
      21,    22,    23,    -1,    -1,    26,    -1,    -1,    16,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    67,    -1,    69,    70,
      71,    72,    73,    74,    75,    -1,    77,    78,    -1,    67,
      81,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      78,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    67,
      -1,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      78,    -1,    67,    81,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    78,    -1,    -1,    81,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    67,    -1,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    78,    -1,    67,    81,
      69,    70,    71,    72,    73,    74,    75,    -1,    77,    78,
      -1,    -1,    81,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    67,    -1,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    78,    -1,    67,    81,    69,    70,    71,    72,
      73,    74,    75,    -1,    77,    78,    -1,    -1,    81,    19,
      20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    -1,    26,    -1,    67,    -1,    69,
      70,    71,    72,    73,    74,    75,    -1,    77,    78,    79,
      41,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    67,    -1,    69,    70,
      71,    72,    73,    74,    75,    -1,    77,    78,    79,    41,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    -1,    26,    67,    -1,    69,    70,    71,
      72,    73,    74,    75,    36,    77,    78,    79,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    67,    -1,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    78,    79,    41,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    67,    -1,    69,    70,    71,    72,
      73,    74,    75,    -1,    77,    78,    79,    43,    -1,    45,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    67,    -1,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    78,    79,    43,    -1,    45,    -1,    -1,    -1,
      -1,    50,    -1,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      69,    70,    71,    72,    73,    74,    75,    43,    77,    78,
      79,    -1,    -1,    -1,    50,    -1,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    69,    70,    71,    72,    73,    74,    75,
      43,    77,    78,    79,    -1,    -1,    -1,    50,    -1,    19,
      20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    69,    70,    71,    72,
      73,    74,    75,    43,    77,    78,    79,    -1,    -1,    -1,
      50,    -1,    19,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,
      70,    71,    72,    73,    74,    75,    43,    77,    78,    79,
      -1,    -1,    -1,    50,    -1,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    69,    70,    71,    72,    73,    74,    75,    43,
      77,    78,    79,    -1,    -1,    -1,    50,    -1,    19,    20,
      21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    69,    70,    71,    72,    73,
      74,    75,    43,    77,    78,    79,    -1,    -1,    -1,    50,
      -1,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    70,
      71,    72,    73,    74,    75,    43,    77,    78,    79,    -1,
      -1,    -1,    50,    -1,    19,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    69,    70,    71,    72,    73,    74,    75,    43,    77,
      78,    79,    -1,    -1,    -1,    50,    -1,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    69,    70,    71,    72,    73,    74,
      75,    43,    77,    78,    79,    -1,    -1,    -1,    50,    -1,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    70,    71,
      72,    73,    74,    75,    43,    77,    78,    79,    -1,    -1,
      -1,    50,    -1,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      69,    70,    71,    72,    73,    74,    75,    43,    77,    78,
      79,    -1,    -1,    -1,    50,    -1,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    69,    70,    71,    72,    73,    74,    75,
      43,    77,    78,    79,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    67,    -1,    69,    70,    71,    72,
      73,    74,    75,    -1,    77,    78,    40,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    67,    -1,    69,    70,    71,    72,    73,
      74,    75,    -1,    77,    78,    41,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    69,    70,    71,    72,    73,    74,    75,
      43,    77,    78,    -1,    -1,    -1,    -1,    50,    -1,    19,
      20,    21,    22,    23,    57,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    69,    70,    71,    72,
      73,    74,    75,    43,    77,    78,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    66,    67,    -1,    69,
      70,    71,    72,    73,    74,    75,    -1,    77,    78,    41,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    -1,    67,    -1,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    78,    41,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    67,    -1,    69,    70,    71,    72,    73,
      74,    75,    -1,    77,    78,    43,    -1,    45,    -1,    -1,
      -1,    -1,    50,    -1,    19,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    -1,    19,    20,    21,    22,    23,    67,
      -1,    69,    70,    71,    72,    73,    74,    75,    43,    77,
      78,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    78,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    78
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,    11,    12,    26,    30,    42,    50,    56,
      58,    61,    62,    69,    80,    85,    92,    93,    94,    95,
      98,   101,   103,   114,   115,   139,   140,   148,   149,   150,
     151,   114,     4,     6,     8,    10,    32,    38,    39,    41,
      47,    48,    49,    51,    52,    53,    55,    60,    61,    72,
      80,    82,    85,    96,    97,   122,   139,   140,   142,   143,
     145,   146,   149,   150,   151,   139,    82,    99,   100,   114,
       3,    26,    28,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    41,    42,    43,    44,    46,    47,    48,
      49,    50,    51,    52,    54,    55,    57,    58,    60,    61,
      62,    63,    64,    65,    66,    71,    80,    82,    85,   114,
     116,   120,   152,   153,     7,   114,   115,   117,   121,   147,
      72,    74,   115,   119,   141,   142,     0,    93,    71,    74,
     148,    85,    68,    80,    69,    96,    80,    39,   122,   128,
     151,    80,   122,   122,     3,    30,    61,    71,    74,    80,
      82,    85,    88,   112,   114,   141,   145,   151,   152,   122,
     114,   122,    81,    89,   122,   126,   127,   133,   134,   147,
      28,    29,    37,    39,    41,    45,    46,    51,    54,    65,
      83,   107,   111,   122,   124,   125,   151,    86,   122,   123,
      36,    97,    19,    20,    21,    22,    23,    26,    43,    50,
      67,    69,    70,    71,    72,    73,    74,    75,    77,    78,
      79,    80,    85,    80,    80,    80,    80,    80,    18,    85,
      68,    85,   100,    82,    84,   148,    70,    81,    83,    86,
      70,    84,    80,    15,    71,    74,    67,    81,    84,   116,
     142,    16,    71,    74,    84,    86,    16,    68,    80,   114,
     118,   122,    88,   104,   105,   114,   151,   114,    36,    80,
     109,   110,   112,   131,   132,   151,    80,    57,    34,    84,
     122,   123,    79,    17,    81,    17,    83,    17,    86,    42,
     151,    67,    80,    40,    42,   131,   151,    15,    81,    81,
      84,    81,    84,   122,   122,    41,    79,    41,    79,    80,
      80,    80,    39,    41,   111,   151,   122,   122,    80,    83,
     107,    41,    87,    83,    84,    18,    87,    84,    86,    90,
     122,   122,   122,   122,   114,   122,   114,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,     3,   144,   145,
     153,   122,   118,   122,   122,   127,   123,   123,    79,   123,
     127,   122,   123,   120,   102,   140,    79,   103,   106,    99,
      80,   116,   116,   121,   114,    81,    81,   114,   117,    89,
      74,   141,    86,    86,   115,    74,   141,   122,   105,    84,
      86,    79,    81,    84,   151,    79,   114,   131,    79,    81,
      14,    15,    25,    81,    84,    24,    68,    84,    87,   122,
     122,   122,    81,    81,    83,    86,   122,   151,    81,   112,
     112,   122,    81,    87,    68,   122,   126,   122,   133,    41,
      79,   122,   122,   110,   122,   135,   136,   148,    80,    80,
      65,    79,    41,    79,    41,    79,   122,   122,   131,   122,
     125,   122,   151,   122,   122,    85,    89,    81,    86,    81,
      81,    81,    81,    81,   136,    79,    81,    81,    79,    86,
      79,    84,    86,   106,    83,   103,   118,    81,    81,    81,
      81,    86,    86,    86,    86,    79,    81,   114,    68,    82,
      87,   104,    81,   109,   151,    96,   122,   112,   122,    41,
      80,    82,   132,   132,   122,   151,   122,    36,    79,   138,
      57,   112,   113,   129,   130,    66,    81,    42,   138,   123,
     122,    41,    87,    15,   122,    79,    79,    81,    81,    81,
      84,    68,    80,   122,    80,   122,   122,    81,    79,    83,
      41,    79,    14,    84,    86,   123,    80,    81,   136,   140,
      68,    83,    81,    68,    82,    87,   122,   111,   130,    68,
      79,    14,    25,    80,   122,   122,    16,    87,   122,    68,
      84,    84,   138,   122,   122,    81,   122,   131,   122,   111,
     111,   111,   135,   122,   137,   151,    81,   122,    79,    79,
     111,   123,   122,   122,   151,    86,   122,    81,   120,   122,
     111,   130,    45,    79,    83,   106,   151,    64,    79,   122,
     122,   122,   123,    15,    83,   122,   122,   122,   112,   129,
     138,    41,   138,    79,    81,    79,   108,    79,    81,    84,
      81,    79,    83,    79,    84,    86,    14,    81,    79,    45,
      79,    83,   106,    64,    79,   111,    83,   106,    81,   122,
      45,   122,   123,    34,    35,    79,    68,   151,    79,   122,
     122,   111,    83,   106,    79,    79,    80,    82,    81,   111,
     138,    81,   111,    80,   122,    86,    84,    86,    79,    79,
     122,   122,    79,   122,   122,    15,    83,    81,    86,   122,
     111,    81
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
      yychar = YYLEX;
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
     `$$ = $1'.

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
/* Line 1787 of yacc.c  */
#line 132 "amber.yy"
    {consume_decl((yyvsp[(1) - (1)]));                                }
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 133 "amber.yy"
    {consume_decl((yyvsp[(2) - (2)]));                                }
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 146 "amber.yy"
    {(yyval) = mk_subtype_decl((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                    }
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 151 "amber.yy"
    {(yyval) = mk_test_block(true, (yyvsp[(2) - (3)]));                    }
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 152 "amber.yy"
    {(yyval) = mk_test_block(false, (yyvsp[(3) - (4)]));                   }
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 156 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 157 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                             }
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 161 "amber.yy"
    {(yyval) = mk_test_instr_bool((yyvsp[(1) - (2)]));                     }
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 162 "amber.yy"
    {(yyval) = mk_test_instr_print((yyvsp[(2) - (3)]));                    }
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 163 "amber.yy"
    {(yyval) = mk_test_instr_loop((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                 }
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 164 "amber.yy"
    {(yyval) = mk_test_instr_assignment((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));           }
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 170 "amber.yy"
    {(yyval) = mk_using_block((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                     }
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 171 "amber.yy"
    {(yyval) = mk_using_block((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                     }
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 175 "amber.yy"
    {(yyval) = mk_signature((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));                       }
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 176 "amber.yy"
    {(yyval) = mk_signature((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(1) - (5)]));                   }
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 179 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 180 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]));                             }
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 186 "amber.yy"
    {(yyval) = mk_typedef((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                         }
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 187 "amber.yy"
    {(yyval) = mk_typedef_par((yyvsp[(2) - (8)]), (yyvsp[(4) - (8)]), (yyvsp[(7) - (8)]));                 }
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 191 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 192 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             }
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 198 "amber.yy"
    {(yyval) = mk_fndef((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                       }
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 199 "amber.yy"
    {(yyval) = mk_fndef((yyvsp[(1) - (8)]), (yyvsp[(2) - (8)]), (yyvsp[(4) - (8)]), (yyvsp[(7) - (8)]));                   }
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 200 "amber.yy"
    {(yyval) = mk_fndef((yyvsp[(1) - (10)]), (yyvsp[(2) - (10)]), (yyvsp[(4) - (10)]), mk_expr_let((yyvsp[(7) - (10)]), (yyvsp[(9) - (10)])));  }
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 201 "amber.yy"
    {(yyval) = mk_fndef_proc((yyvsp[(1) - (8)]), (yyvsp[(2) - (8)]), (yyvsp[(4) - (8)]), (yyvsp[(7) - (8)]));              }
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 202 "amber.yy"
    {(yyval) = mk_fndef_proc((yyvsp[(1) - (9)]), (yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(7) - (9)]), (yyvsp[(8) - (9)]));          }
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 203 "amber.yy"
    {(yyval) = mk_fndef_switch((yyvsp[(1) - (8)]), (yyvsp[(2) - (8)]), (yyvsp[(4) - (8)]), (yyvsp[(7) - (8)]));            }
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 204 "amber.yy"
    {(yyval) = mk_fndef_switch((yyvsp[(1) - (10)]), (yyvsp[(3) - (10)]), (yyvsp[(6) - (10)]), (yyvsp[(8) - (10)]), (yyvsp[(9) - (10)]));  }
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 206 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                   }
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 207 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(6) - (7)]));               }
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 208 "amber.yy"
    {(yyval) = mk_fndef_proc(null(), (yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(6) - (7)]));          }
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 209 "amber.yy"
    {(yyval) = mk_fndef_proc(null(), (yyvsp[(1) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(6) - (8)]), (yyvsp[(7) - (8)]));      }
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 210 "amber.yy"
    {(yyval) = mk_fndef_switch(null(), (yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(6) - (7)]));        }
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 211 "amber.yy"
    {(yyval) = mk_fndef_switch(null(), (yyvsp[(1) - (9)]), (yyvsp[(3) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));    }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 212 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (9)]), (yyvsp[(3) - (9)]), mk_expr_let((yyvsp[(6) - (9)]), (yyvsp[(8) - (9)])));}
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 216 "amber.yy"
    {(yyval) = mk_fnarg(null(), null());                   }
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 217 "amber.yy"
    {(yyval) = mk_fnarg(null(), (yyvsp[(1) - (1)]));                       }
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 218 "amber.yy"
    {(yyval) = mk_fnarg((yyvsp[(1) - (1)]),     null());                   }
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 219 "amber.yy"
    {(yyval) = mk_fnarg((yyvsp[(1) - (2)]),     (yyvsp[(2) - (2)]));                       }
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 223 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 224 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             }
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 228 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 229 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                             }
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 235 "amber.yy"
    {(yyval) = mk_stmt_return((yyvsp[(2) - (3)]));                    }
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 236 "amber.yy"
    {(yyval) = mk_stmt_return_if((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));             }
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 238 "amber.yy"
    {(yyval) = mk_stmt_assignment((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));            }
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 241 "amber.yy"
    {(yyval) = mk_stmt_assignment_if((yyvsp[(1) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));     }
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 243 "amber.yy"
    {(yyval) = mk_stmt_if((yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]), (yyvsp[(6) - (7)]));                }
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 244 "amber.yy"
    {(yyval) = mk_stmt_if((yyvsp[(3) - (9)]), (yyvsp[(5) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));            }
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 246 "amber.yy"
    {(yyval) = mk_stmt_loop((yyvsp[(2) - (3)]));                      }
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 247 "amber.yy"
    {(yyval) = mk_stmt_loop((yyvsp[(2) - (7)]), (yyvsp[(5) - (7)]));                  }
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 248 "amber.yy"
    {(yyval) = mk_stmt_while((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                 }
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 250 "amber.yy"
    {(yyval) = mk_stmt_let((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                   }
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 253 "amber.yy"
    {(yyval) = mk_stmt_break();                       }
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 254 "amber.yy"
    {(yyval) = mk_stmt_break_if((yyvsp[(3) - (4)]));                  }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 256 "amber.yy"
    {(yyval) = mk_stmt_for((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                   }
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 258 "amber.yy"
    {(yyval) = mk_stmt_fail();                        }
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 259 "amber.yy"
    {(yyval) = mk_stmt_fail_if((yyvsp[(3) - (4)]));                   }
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 261 "amber.yy"
    {(yyval) = mk_stmt_assert((yyvsp[(2) - (3)]));                    }
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 263 "amber.yy"
    {(yyval) = mk_stmt_print((yyvsp[(2) - (3)]));                     }
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 264 "amber.yy"
    {(yyval) = mk_stmt_print_if((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));              }
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 270 "amber.yy"
    {(yyval) = mk_seq_empty();                        }
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 271 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (6)]), mk_elif((yyvsp[(4) - (6)]), (yyvsp[(6) - (6)])));           }
    break;

  case 70:
/* Line 1787 of yacc.c  */
#line 275 "amber.yy"
    {(yyval) = mk_for_iter((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                   }
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 276 "amber.yy"
    {(yyval) = mk_for_iter((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));               }
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 277 "amber.yy"
    {(yyval) = mk_for_iter_range((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));         }
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 281 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                            }
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 282 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                        }
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 286 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                            }
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 287 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                        }
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 295 "amber.yy"
    {(yyval) = mk_ptrn_type((yyvsp[(1) - (1)]));                               }
    break;

  case 78:
/* Line 1787 of yacc.c  */
#line 296 "amber.yy"
    {(yyval) = mk_ptrn_var((yyvsp[(1) - (1)]));                                }
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 297 "amber.yy"
    {(yyval) = mk_ptrn_ptrn_var((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                       }
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 298 "amber.yy"
    {(yyval) = mk_ptrn_ctor((yyvsp[(1) - (1)]));                               }
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 299 "amber.yy"
    {(yyval) = mk_ptrn_num((yyvsp[(1) - (1)]));                                }
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 300 "amber.yy"
    {(yyval) = mk_ptrn_jolly();                                }
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 304 "amber.yy"
    {(yyval) = mk_ptrn_tag_ptrn((yyvsp[(1) - (3)]), mk_ptrn_jolly());          }
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 305 "amber.yy"
    {(yyval) = mk_ptrn_tag_ptrn((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                       }
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 308 "amber.yy"
    {(yyval) = mk_ptrn_tag_obj((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                        }
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 310 "amber.yy"
    {(yyval) = mk_ptrn_symb();                                 }
    break;

  case 87:
/* Line 1787 of yacc.c  */
#line 311 "amber.yy"
    {(yyval) = mk_ptrn_int();                                  }
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 312 "amber.yy"
    {(yyval) = mk_ptrn_empty_seq();                            }
    break;

  case 89:
/* Line 1787 of yacc.c  */
#line 313 "amber.yy"
    {(yyval) = mk_ptrn_seq();                                  }
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 314 "amber.yy"
    {(yyval) = mk_ptrn_empty_set();                            }
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 315 "amber.yy"
    {(yyval) = mk_ptrn_set();                                  }
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 316 "amber.yy"
    {(yyval) = mk_ptrn_empty_map();                            }
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 317 "amber.yy"
    {(yyval) = mk_ptrn_map();                                  }
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 326 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                     }
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 327 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                                 }
    break;

  case 97:
/* Line 1787 of yacc.c  */
#line 334 "amber.yy"
    {(yyval) = mk_type_set((yyvsp[(1) - (2)]), false);                     }
    break;

  case 98:
/* Line 1787 of yacc.c  */
#line 335 "amber.yy"
    {(yyval) = mk_type_set((yyvsp[(1) - (2)]), true);                      }
    break;

  case 99:
/* Line 1787 of yacc.c  */
#line 339 "amber.yy"
    {(yyval) = mk_type_ref((yyvsp[(1) - (1)]));                            }
    break;

  case 100:
/* Line 1787 of yacc.c  */
#line 340 "amber.yy"
    {(yyval) = mk_type_var((yyvsp[(1) - (1)]));                            }
    break;

  case 101:
/* Line 1787 of yacc.c  */
#line 341 "amber.yy"
    {(yyval) = mk_type_ref((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                        }
    break;

  case 102:
/* Line 1787 of yacc.c  */
#line 342 "amber.yy"
    {(yyval) = mk_type_inline((yyvsp[(2) - (3)]));                         }
    break;

  case 103:
/* Line 1787 of yacc.c  */
#line 343 "amber.yy"
    {(yyval) = mk_type_symb();                             }
    break;

  case 104:
/* Line 1787 of yacc.c  */
#line 345 "amber.yy"
    {(yyval) = mk_type_int();                              }
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 346 "amber.yy"
    {(yyval) = mk_type_low_bounded_int((yyvsp[(2) - (5)]));                }
    break;

  case 106:
/* Line 1787 of yacc.c  */
#line 347 "amber.yy"
    {(yyval) = mk_type_up_bounded_int((yyvsp[(4) - (5)]));                 }
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 348 "amber.yy"
    {(yyval) = mk_type_bounded_int((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                }
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 350 "amber.yy"
    {(yyval) = mk_type_seq((yyvsp[(2) - (4)]), false);                     }
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 351 "amber.yy"
    {(yyval) = mk_type_seq((yyvsp[(2) - (4)]), true);                      }
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 352 "amber.yy"
    {(yyval) = mk_type_fixed_seq((yyvsp[(2) - (3)]));                      }
    break;

  case 111:
/* Line 1787 of yacc.c  */
#line 354 "amber.yy"
    {(yyval) = mk_type_set((yyvsp[(2) - (4)]), false);                     }
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 355 "amber.yy"
    {(yyval) = mk_type_set((yyvsp[(2) - (4)]), true);                      }
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 357 "amber.yy"
    {(yyval) = mk_type_map((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                        }
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 358 "amber.yy"
    {(yyval) = mk_type_tuple((yyvsp[(2) - (3)]));                          }
    break;

  case 115:
/* Line 1787 of yacc.c  */
#line 360 "amber.yy"
    {(yyval) = mk_type_tagged_obj((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                 }
    break;

  case 116:
/* Line 1787 of yacc.c  */
#line 364 "amber.yy"
    {(yyval) = mk_pretype_type((yyvsp[(1) - (1)]));                        }
    break;

  case 117:
/* Line 1787 of yacc.c  */
#line 365 "amber.yy"
    {(yyval) = mk_pretype_empty_set();                     }
    break;

  case 118:
/* Line 1787 of yacc.c  */
#line 366 "amber.yy"
    {(yyval) = mk_pretype_empty_seq();                     }
    break;

  case 119:
/* Line 1787 of yacc.c  */
#line 367 "amber.yy"
    {(yyval) = mk_pretype_empty_map();                     }
    break;

  case 120:
/* Line 1787 of yacc.c  */
#line 368 "amber.yy"
    {(yyval) = mk_pretype_sing((yyvsp[(1) - (1)]));                        }
    break;

  case 121:
/* Line 1787 of yacc.c  */
#line 369 "amber.yy"
    {(yyval) = mk_pretype_tagged_obj((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));              }
    break;

  case 122:
/* Line 1787 of yacc.c  */
#line 370 "amber.yy"
    {(yyval) = mk_pretype_tagged_tuple((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));            }
    break;

  case 123:
/* Line 1787 of yacc.c  */
#line 374 "amber.yy"
    {(yyval) = mk_labtype((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), false);                  }
    break;

  case 124:
/* Line 1787 of yacc.c  */
#line 375 "amber.yy"
    {(yyval) = mk_labtype((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), true);                   }
    break;

  case 125:
/* Line 1787 of yacc.c  */
#line 379 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 126:
/* Line 1787 of yacc.c  */
#line 380 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             }
    break;

  case 127:
/* Line 1787 of yacc.c  */
#line 384 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 128:
/* Line 1787 of yacc.c  */
#line 385 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             }
    break;

  case 129:
/* Line 1787 of yacc.c  */
#line 389 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 130:
/* Line 1787 of yacc.c  */
#line 390 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             }
    break;

  case 131:
/* Line 1787 of yacc.c  */
#line 394 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 132:
/* Line 1787 of yacc.c  */
#line 395 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             }
    break;

  case 133:
/* Line 1787 of yacc.c  */
#line 401 "amber.yy"
    {(yyval) = mk_expr_num((yyvsp[(1) - (1)]));                            }
    break;

  case 134:
/* Line 1787 of yacc.c  */
#line 402 "amber.yy"
    {(yyval) = mk_expr_ctor((yyvsp[(1) - (1)]));                           }
    break;

  case 135:
/* Line 1787 of yacc.c  */
#line 403 "amber.yy"
    {(yyval) = mk_expr_str((yyvsp[(1) - (1)]));                            }
    break;

  case 136:
/* Line 1787 of yacc.c  */
#line 405 "amber.yy"
    {(yyval) = mk_expr_ctor((yyvsp[(1) - (1)]));                           }
    break;

  case 137:
/* Line 1787 of yacc.c  */
#line 406 "amber.yy"
    {(yyval) = mk_expr_ctor((yyvsp[(1) - (1)]));                           }
    break;

  case 138:
/* Line 1787 of yacc.c  */
#line 407 "amber.yy"
    {(yyval) = mk_expr_ctor((yyvsp[(1) - (1)]));                           }
    break;

  case 139:
/* Line 1787 of yacc.c  */
#line 409 "amber.yy"
    {(yyval) = mk_expr_set(mk_seq_empty());                }
    break;

  case 140:
/* Line 1787 of yacc.c  */
#line 410 "amber.yy"
    {(yyval) = mk_expr_set((yyvsp[(2) - (3)]));                            }
    break;

  case 141:
/* Line 1787 of yacc.c  */
#line 412 "amber.yy"
    {(yyval) = mk_expr_map(mk_seq_empty());                }
    break;

  case 142:
/* Line 1787 of yacc.c  */
#line 413 "amber.yy"
    {(yyval) = mk_expr_map((yyvsp[(2) - (3)]));                            }
    break;

  case 143:
/* Line 1787 of yacc.c  */
#line 414 "amber.yy"
    {(yyval) = mk_expr_tuple((yyvsp[(2) - (3)]));                          }
    break;

  case 144:
/* Line 1787 of yacc.c  */
#line 416 "amber.yy"
    {(yyval) = mk_expr_seq(mk_seq_empty());                }
    break;

  case 145:
/* Line 1787 of yacc.c  */
#line 417 "amber.yy"
    {(yyval) = mk_expr_seq((yyvsp[(2) - (3)]));                            }
    break;

  case 146:
/* Line 1787 of yacc.c  */
#line 418 "amber.yy"
    {(yyval) = mk_expr_seq((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                        }
    break;

  case 147:
/* Line 1787 of yacc.c  */
#line 420 "amber.yy"
    {(yyval) = mk_expr_tag_obj((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                    }
    break;

  case 148:
/* Line 1787 of yacc.c  */
#line 421 "amber.yy"
    {(yyval) = mk_expr_tag_obj(mk_expr_ctor((yyvsp[(1) - (4)])), (yyvsp[(3) - (4)]));      }
    break;

  case 149:
/* Line 1787 of yacc.c  */
#line 423 "amber.yy"
    {(yyval) = mk_expr_tag_map((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                    }
    break;

  case 150:
/* Line 1787 of yacc.c  */
#line 424 "amber.yy"
    {(yyval) = mk_expr_tag_map((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                    }
    break;

  case 151:
/* Line 1787 of yacc.c  */
#line 429 "amber.yy"
    {(yyval) = mk_expr_const_or_var((yyvsp[(1) - (1)]));                   }
    break;

  case 152:
/* Line 1787 of yacc.c  */
#line 430 "amber.yy"
    {(yyval) = mk_expr_fn_call((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                    }
    break;

  case 153:
/* Line 1787 of yacc.c  */
#line 431 "amber.yy"
    {(yyval) = mk_expr_where(mk_expr_fn_call((yyvsp[(1) - (6)]), (yyvsp[(3) - (6)])), (yyvsp[(5) - (6)])); }
    break;

  case 154:
/* Line 1787 of yacc.c  */
#line 432 "amber.yy"
    {(yyval) = mk_expr_where(mk_expr_const_or_var((yyvsp[(1) - (5)])), (yyvsp[(4) - (5)]));}
    break;

  case 155:
/* Line 1787 of yacc.c  */
#line 433 "amber.yy"
    {(yyval) = mk_expr_fn_call((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                    }
    break;

  case 156:
/* Line 1787 of yacc.c  */
#line 434 "amber.yy"
    {(yyval) = mk_expr_builtin_call((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));               }
    break;

  case 157:
/* Line 1787 of yacc.c  */
#line 436 "amber.yy"
    {(yyval) = (yyvsp[(2) - (3)]);                                         }
    break;

  case 158:
/* Line 1787 of yacc.c  */
#line 438 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                         }
    break;

  case 159:
/* Line 1787 of yacc.c  */
#line 440 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     }
    break;

  case 160:
/* Line 1787 of yacc.c  */
#line 441 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     }
    break;

  case 161:
/* Line 1787 of yacc.c  */
#line 442 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     }
    break;

  case 162:
/* Line 1787 of yacc.c  */
#line 443 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     }
    break;

  case 163:
/* Line 1787 of yacc.c  */
#line 444 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     }
    break;

  case 164:
/* Line 1787 of yacc.c  */
#line 445 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     }
    break;

  case 165:
/* Line 1787 of yacc.c  */
#line 446 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     }
    break;

  case 166:
/* Line 1787 of yacc.c  */
#line 447 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     }
    break;

  case 167:
/* Line 1787 of yacc.c  */
#line 448 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     }
    break;

  case 168:
/* Line 1787 of yacc.c  */
#line 449 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     }
    break;

  case 169:
/* Line 1787 of yacc.c  */
#line 451 "amber.yy"
    {(yyval) = mk_expr_and((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                        }
    break;

  case 170:
/* Line 1787 of yacc.c  */
#line 452 "amber.yy"
    {(yyval) = mk_expr_or((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                         }
    break;

  case 171:
/* Line 1787 of yacc.c  */
#line 453 "amber.yy"
    {(yyval) = mk_expr_not((yyvsp[(2) - (2)]));                            }
    break;

  case 172:
/* Line 1787 of yacc.c  */
#line 455 "amber.yy"
    {(yyval) = mk_expr_eq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                         }
    break;

  case 173:
/* Line 1787 of yacc.c  */
#line 456 "amber.yy"
    {(yyval) = mk_expr_neq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                        }
    break;

  case 174:
/* Line 1787 of yacc.c  */
#line 458 "amber.yy"
    {(yyval) = mk_expr_type_test((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                  }
    break;

  case 175:
/* Line 1787 of yacc.c  */
#line 460 "amber.yy"
    {(yyval) = (yyvsp[(3) - (4)]);                                         }
    break;

  case 176:
/* Line 1787 of yacc.c  */
#line 461 "amber.yy"
    {(yyval) = (yyvsp[(3) - (4)]);                                         }
    break;

  case 177:
/* Line 1787 of yacc.c  */
#line 462 "amber.yy"
    {(yyval) = (yyvsp[(6) - (7)]);                                         }
    break;

  case 178:
/* Line 1787 of yacc.c  */
#line 464 "amber.yy"
    {(yyval) = mk_expr_dot_acc((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                    }
    break;

  case 179:
/* Line 1787 of yacc.c  */
#line 465 "amber.yy"
    {(yyval) = mk_expr_dot_acc_test((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));               }
    break;

  case 180:
/* Line 1787 of yacc.c  */
#line 468 "amber.yy"
    {(yyval) = mk_expr_idx((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                        }
    break;

  case 181:
/* Line 1787 of yacc.c  */
#line 469 "amber.yy"
    {(yyval) = mk_expr_idx_member((yyvsp[(1) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));             }
    break;

  case 182:
/* Line 1787 of yacc.c  */
#line 471 "amber.yy"
    {(yyval) = mk_expr_ex_qual((yyvsp[(3) - (4)]));                        }
    break;

  case 183:
/* Line 1787 of yacc.c  */
#line 472 "amber.yy"
    {(yyval) = mk_expr_ex_qual((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                    }
    break;

  case 184:
/* Line 1787 of yacc.c  */
#line 474 "amber.yy"
    {(yyval) = mk_expr_sc((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                         }
    break;

  case 185:
/* Line 1787 of yacc.c  */
#line 475 "amber.yy"
    {(yyval) = mk_expr_sc((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                     }
    break;

  case 186:
/* Line 1787 of yacc.c  */
#line 477 "amber.yy"
    {(yyval) = mk_expr_sc((yyvsp[(6) - (7)]), (yyvsp[(3) - (7)]));                         }
    break;

  case 187:
/* Line 1787 of yacc.c  */
#line 478 "amber.yy"
    {(yyval) = mk_expr_sc((yyvsp[(10) - (11)]), (yyvsp[(3) - (11)]), (yyvsp[(7) - (11)]));                    }
    break;

  case 188:
/* Line 1787 of yacc.c  */
#line 480 "amber.yy"
    {(yyval) = mk_expr_mc((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                    }
    break;

  case 189:
/* Line 1787 of yacc.c  */
#line 481 "amber.yy"
    {(yyval) = mk_expr_mc((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));                }
    break;

  case 190:
/* Line 1787 of yacc.c  */
#line 483 "amber.yy"
    {(yyval) = mk_expr_mc((yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]), (yyvsp[(3) - (9)]));                    }
    break;

  case 191:
/* Line 1787 of yacc.c  */
#line 485 "amber.yy"
    {(yyval) = mk_expr_mc((yyvsp[(10) - (13)]), (yyvsp[(12) - (13)]), (yyvsp[(3) - (13)]), (yyvsp[(7) - (13)]));              }
    break;

  case 192:
/* Line 1787 of yacc.c  */
#line 487 "amber.yy"
    {(yyval) = mk_expr_lc((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                     }
    break;

  case 193:
/* Line 1787 of yacc.c  */
#line 488 "amber.yy"
    {(yyval) = mk_expr_lc((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));                 }
    break;

  case 194:
/* Line 1787 of yacc.c  */
#line 489 "amber.yy"
    {(yyval) = mk_expr_flc((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));                }
    break;

  case 195:
/* Line 1787 of yacc.c  */
#line 490 "amber.yy"
    {(yyval) = mk_expr_flc((yyvsp[(2) - (11)]), (yyvsp[(4) - (11)]), (yyvsp[(6) - (11)]), (yyvsp[(8) - (11)]), (yyvsp[(10) - (11)]));           }
    break;

  case 196:
/* Line 1787 of yacc.c  */
#line 492 "amber.yy"
    {(yyval) = mk_expr_if((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                         }
    break;

  case 197:
/* Line 1787 of yacc.c  */
#line 493 "amber.yy"
    {(yyval) = mk_expr_match((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                        }
    break;

  case 198:
/* Line 1787 of yacc.c  */
#line 496 "amber.yy"
    {(yyval) = mk_expr_do((yyvsp[(2) - (3)]));                             }
    break;

  case 199:
/* Line 1787 of yacc.c  */
#line 498 "amber.yy"
    {(yyval) = mk_expr_repl((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                   }
    break;

  case 200:
/* Line 1787 of yacc.c  */
#line 499 "amber.yy"
    {(yyval) = mk_expr_sel((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                        }
    break;

  case 201:
/* Line 1787 of yacc.c  */
#line 501 "amber.yy"
    {(yyval) = mk_expr_retr((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                   }
    break;

  case 202:
/* Line 1787 of yacc.c  */
#line 503 "amber.yy"
    {(yyval) = mk_expr_retr((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));               }
    break;

  case 203:
/* Line 1787 of yacc.c  */
#line 505 "amber.yy"
    {(yyval) = mk_expr_is((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                         }
    break;

  case 204:
/* Line 1787 of yacc.c  */
#line 510 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 205:
/* Line 1787 of yacc.c  */
#line 511 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             }
    break;

  case 206:
/* Line 1787 of yacc.c  */
#line 516 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 207:
/* Line 1787 of yacc.c  */
#line 517 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             }
    break;

  case 208:
/* Line 1787 of yacc.c  */
#line 521 "amber.yy"
    {(yyval) = mk_sexpr_expr((yyvsp[(1) - (1)]));                          }
    break;

  case 209:
/* Line 1787 of yacc.c  */
#line 522 "amber.yy"
    {(yyval) = mk_sexpr_cond((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                      }
    break;

  case 210:
/* Line 1787 of yacc.c  */
#line 526 "amber.yy"
    {(yyval) = mk_sexpr_lab((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                       }
    break;

  case 211:
/* Line 1787 of yacc.c  */
#line 527 "amber.yy"
    {(yyval) = mk_sexpr_lab_cond((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));              }
    break;

  case 212:
/* Line 1787 of yacc.c  */
#line 531 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 213:
/* Line 1787 of yacc.c  */
#line 532 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             }
    break;

  case 214:
/* Line 1787 of yacc.c  */
#line 536 "amber.yy"
    {(yyval) = mk_seq(mk_if_branch((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])));               }
    break;

  case 215:
/* Line 1787 of yacc.c  */
#line 537 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (5)]), mk_if_branch((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)])));           }
    break;

  case 216:
/* Line 1787 of yacc.c  */
#line 541 "amber.yy"
    {(yyval) = mk_match_branch((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                      }
    break;

  case 217:
/* Line 1787 of yacc.c  */
#line 542 "amber.yy"
    {(yyval) = mk_match_branch((yyvsp[(1) - (5)]), mk_expr_let((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)])));     }
    break;

  case 218:
/* Line 1787 of yacc.c  */
#line 545 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 219:
/* Line 1787 of yacc.c  */
#line 546 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             }
    break;

  case 220:
/* Line 1787 of yacc.c  */
#line 555 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 221:
/* Line 1787 of yacc.c  */
#line 556 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             }
    break;

  case 222:
/* Line 1787 of yacc.c  */
#line 560 "amber.yy"
    {(yyval) = mk_clause_in((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                       }
    break;

  case 223:
/* Line 1787 of yacc.c  */
#line 561 "amber.yy"
    {(yyval) = mk_clause_in_map((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));                       }
    break;

  case 224:
/* Line 1787 of yacc.c  */
#line 562 "amber.yy"
    {(yyval) = mk_clause_not_in((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                   }
    break;

  case 225:
/* Line 1787 of yacc.c  */
#line 563 "amber.yy"
    {(yyval) = mk_clause_not_in_map((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));                       }
    break;

  case 226:
/* Line 1787 of yacc.c  */
#line 564 "amber.yy"
    {(yyval) = mk_clause_eq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                       }
    break;

  case 227:
/* Line 1787 of yacc.c  */
#line 565 "amber.yy"
    {(yyval) = mk_clause_and((yyvsp[(2) - (3)]));                          }
    break;

  case 228:
/* Line 1787 of yacc.c  */
#line 566 "amber.yy"
    {(yyval) = mk_clause_or((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                       }
    break;

  case 229:
/* Line 1787 of yacc.c  */
#line 570 "amber.yy"
    {(yyval) = mk_map_entry((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                       }
    break;

  case 230:
/* Line 1787 of yacc.c  */
#line 571 "amber.yy"
    {(yyval) = mk_map_entry_cond((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));              }
    break;

  case 231:
/* Line 1787 of yacc.c  */
#line 575 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 232:
/* Line 1787 of yacc.c  */
#line 576 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             }
    break;

  case 233:
/* Line 1787 of yacc.c  */
#line 580 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                   }
    break;

  case 234:
/* Line 1787 of yacc.c  */
#line 581 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(6) - (6)]));               }
    break;

  case 235:
/* Line 1787 of yacc.c  */
#line 585 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 236:
/* Line 1787 of yacc.c  */
#line 586 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             }
    break;

  case 237:
/* Line 1787 of yacc.c  */
#line 590 "amber.yy"
    {(yyval) = mk_seq(mk_fnarg(null(), (yyvsp[(1) - (1)])));         }
    break;

  case 238:
/* Line 1787 of yacc.c  */
#line 591 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), mk_fnarg(null(), (yyvsp[(3) - (3)])));     }
    break;

  case 244:
/* Line 1787 of yacc.c  */
#line 620 "amber.yy"
    {(yyval) = mk_snum_neg_num((yyvsp[(2) - (2)]));                      }
    break;


/* Line 1787 of yacc.c  */
#line 4327 "amber.tab.cc"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2050 of yacc.c  */
#line 704 "amber.yy"
  /* Epilogue */



//#include <assert.h>
#include <string.h>
#include <stdio.h>

#include "common.h"
#include "lexer.h"

//bool streq(const char *str1, const char *str2);

struct StrIntPair {
  const char *str;
  int n;
};

static StrIntPair token_to_id_map[] = {
  {"and",          KW_AND           },
  {"assert",       KW_ASSERT        },
  {"break",        KW_BREAK         },
  {"case",         KW_CASE          },
  {"def",          KW_DEF           },
  {"disabled",     KW_DISABLED      },
  {"do",           KW_DO            },
  {"else",         KW_ELSE          },
  {"elif",         KW_ELIF          },
  {"end",          KW_END           },
  {"false",        KW_FALSE         },
  {"fail",         KW_FAIL          },
  {"for",          KW_FOR           },
  {"from",         KW_FROM          },
  {"if",           KW_IF            },
  {"in",           KW_IN            },
  {"is",           KW_IS            },
  {"itself",       KW_ITSELF        },
  {"let",          KW_LET           },
  {"loop",         KW_LOOP          },
  {"match",        KW_MATCH         },
  {"nil",          KW_NIL           },
  {"not",          KW_NOT           },
  {"or",           KW_OR            },
  {"print",        KW_PRINT         },
  {"replace",      KW_REPLACE       },
  {"retrieve",     KW_RETRIEVE      },
  {"return",       KW_RETURN        },
  {"select",       KW_SELECT        },
  {"subtypecheck", KW_SUBTYPECHECK  },
  {"then",         KW_THEN          },
  {"testcases",    KW_TESTCASES     },
  {"trace",        KW_TRACE         },
  {"true",         KW_TRUE          },
  //{"try",          KW_TRY           },
  {"type",         KW_TYPE          },
  {"using",        KW_USING         },
  {"when",         KW_WHEN          },
  {"where",        KW_WHERE         },
  {"while",        KW_WHILE         },
  {"with",         KW_WITH          }
};

obj get_token(unsigned int idx, char *str, int &line, int &col);

//int yylex(void)
//{
//  int _yylex_(void);
//  int a = _yylex_();
//  if (!yylval.is_null())
//  {
//    string str = downcast<Token>(yylval)->str;
//    cout << str << " - " << a << endl;
//  }
//  return a;
//}

int yylex(void)
{
  static unsigned int pos = 0;

  char str[1024];
  int line;
  int col;

  yylval = get_token(pos++, str, line, col);

  if (yylval.is_null())
    return 0;

  if (strlen(str) == 1 && !isalnum(str[0]))
    return str[0];

  switch (token_type(str))
  {
    case plain_identifier:  /*puts(" - LOWER_CASE_ID\n"); */  break; // LOWER_CASE_ID;
    case op_function:       /*puts(" - OP_FN_NAME\n");    */  return OP_FN_NAME;
    case symbol:            /*puts(" - SYMBOL\n");        */  return SYMBOL;
    case label:             /*puts(" - LABEL\n");         */  return LABEL;
    case number:            /*puts(" - NUMBER\n");        */  return NUMBER;
    case type_id:           /*puts(" - MIXED_CASE_ID\n"); */  return MIXED_CASE_ID;
    case type_var:          /*puts(" - UPPER_CASE_ID\n"); */  return UPPER_CASE_ID;
    case operator_symbol:                                     break;
    case builtin:           /*puts(" - BUILTIN\n");       */  return BUILTIN;
    case string_lit:        /*puts(" - STRING\n");        */  return STRING;
    default:                assert(false);
  }

  if (streq(str, "->"))          return RIGHT_ARROW;
  if (streq(str, "=>"))          return DOUBLE_RIGHT_ARROW;
  if (streq(str, "<-"))          return LEFT_ARROW;
  if (streq(str, ".."))          return DOUBLE_DOT;
  if (streq(str, "..."))         return ELLIPSIS;
  if (streq(str, ":="))          return ASSIGNMENT;
  if (streq(str, "<="))          return LE;
  if (streq(str, ">="))          return GE;
  if (streq(str, "/="))          return NEQ;
  if (streq(str, "=="))          return EQ;
  if (streq(str, "::"))          return IN;
  if (streq(str, "\\/"))         return OR;
  if (streq(str, "</-"))         return CROSSED_LEFT_ARROW;

  for (int i=0 ; i < lengthof(token_to_id_map) ; i++)
    if (streq(str, token_to_id_map[i].str))
      return token_to_id_map[i].n;

  return LOWER_CASE_ID;
}
