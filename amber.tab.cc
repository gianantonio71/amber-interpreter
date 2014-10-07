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
     KW_AND = 280,
     KW_AS = 281,
     KW_ASSERT = 282,
     KW_BREAK = 283,
     KW_CASE = 284,
     KW_DEF = 285,
     KW_DISABLED = 286,
     KW_DO = 287,
     KW_ELSE = 288,
     KW_ELIF = 289,
     KW_END = 290,
     KW_FAIL = 291,
     KW_FALSE = 292,
     KW_FOR = 293,
     KW_FROM = 294,
     KW_IF = 295,
     KW_IN = 296,
     KW_IS = 297,
     KW_ITSELF = 298,
     KW_LET = 299,
     KW_LOOP = 300,
     KW_MATCH = 301,
     KW_NIL = 302,
     KW_NOT = 303,
     KW_OR = 304,
     KW_PRINT = 305,
     KW_REPLACE = 306,
     KW_RETRIEVE = 307,
     KW_RETURN = 308,
     KW_SELECT = 309,
     KW_SUBTYPECHECK = 310,
     KW_THEN = 311,
     KW_TESTCASES = 312,
     KW_TRACE = 313,
     KW_TRUE = 314,
     KW_TYPE = 315,
     KW_USING = 316,
     KW_WHEN = 317,
     KW_WHERE = 318,
     KW_WHILE = 319,
     KW_WITH = 320,
     NEG = 321
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
#line 212 "amber.tab.cc"

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
#define YYFINAL  123
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5338

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  296
/* YYNRULES -- Number of states.  */
#define YYNSTATES  689

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    72,     2,
      79,    80,    73,    70,    83,    71,    77,    74,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    86,    78,
      68,    67,    69,    88,    66,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    84,     2,    85,    76,    87,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    81,    89,    82,     2,     2,     2,     2,
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
      65,    75
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
     360,   364,   370,   376,   384,   394,   396,   400,   402,   405,
     407,   411,   413,   415,   418,   420,   422,   424,   428,   433,
     437,   439,   441,   444,   448,   451,   455,   458,   462,   464,
     468,   470,   472,   477,   481,   485,   491,   497,   503,   509,
     513,   518,   521,   524,   530,   534,   540,   546,   548,   551,
     554,   557,   559,   564,   569,   572,   576,   578,   582,   584,
     588,   590,   594,   596,   598,   600,   602,   604,   606,   609,
     613,   616,   620,   624,   630,   633,   637,   643,   647,   652,
     657,   662,   664,   669,   676,   682,   687,   692,   696,   699,
     703,   707,   711,   715,   719,   723,   727,   731,   735,   739,
     743,   747,   750,   754,   758,   762,   767,   772,   780,   784,
     789,   794,   801,   806,   813,   819,   827,   835,   847,   855,
     865,   875,   889,   897,   907,   917,   929,   935,   942,   946,
     954,   960,   968,   978,   982,   984,   988,   990,   994,   996,
    1000,  1003,  1008,  1010,  1014,  1018,  1024,  1028,  1034,  1036,
    1040,  1042,  1046,  1050,  1056,  1060,  1064,  1068,  1072,  1078,
    1080,  1084,  1088,  1095,  1097,  1101,  1103,  1107,  1109,  1111,
    1113,  1115,  1117,  1120,  1122,  1124,  1126,  1128,  1130,  1132,
    1134,  1136,  1138,  1140,  1142,  1144,  1146,  1148,  1150,  1152,
    1154,  1156,  1158,  1160,  1162,  1164,  1166,  1168,  1170,  1172,
    1174,  1176,  1178,  1180,  1182,  1184,  1186,  1188,  1190,  1192,
    1194,  1196,  1198,  1200,  1202,  1204,  1206,  1208,  1210,  1212,
    1214,  1216,  1218,  1220,  1222,  1224,  1226
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      91,     0,    -1,    92,    -1,    91,    92,    -1,   100,    -1,
     102,    -1,    97,    -1,    94,    -1,    93,    -1,    55,   114,
      68,   114,    78,    -1,    57,    95,    35,    -1,    57,    31,
      95,    35,    -1,    96,    -1,    95,    96,    -1,   120,    78,
      -1,    50,   120,    78,    -1,    38,    79,   109,    80,    95,
      78,    -1,   149,    18,   120,    78,    -1,    61,    99,    81,
     105,    82,    -1,    61,    81,    99,    78,   105,    82,    -1,
     114,   146,    -1,   114,   146,    79,   117,    80,    -1,    98,
      -1,    99,    83,    98,    -1,    60,   137,    67,   118,    78,
      -1,    60,   137,    84,   101,    85,    67,   118,    78,    -1,
     138,    -1,   101,    83,   138,    -1,   114,   146,    67,   120,
      78,    -1,   114,   146,    79,   104,    80,    67,   120,    78,
      -1,   114,   146,    79,   104,    80,    67,   120,    44,   110,
      78,    -1,   114,   146,    79,   104,    80,    81,   110,    82,
      -1,   114,   146,    79,   104,    80,    81,   110,   105,    82,
      -1,   114,   146,    79,   104,    80,    86,   128,    78,    -1,
     114,   146,    79,   104,    80,    86,   128,    63,   105,    78,
      -1,   146,    67,   120,    78,    -1,   146,    79,   104,    80,
      67,   120,    78,    -1,   146,    79,   104,    80,    81,   110,
      82,    -1,   146,    79,   104,    80,    81,   110,   105,    82,
      -1,   146,    79,   104,    80,    86,   128,    78,    -1,   146,
      79,   104,    80,    86,   128,    63,   105,    78,    -1,   146,
      79,   104,    80,    67,   120,    44,   110,    78,    -1,    87,
      -1,   149,    -1,   114,    -1,   114,   149,    -1,   103,    -1,
     104,    83,   103,    -1,   102,    -1,   105,   102,    -1,    53,
     120,    78,    -1,    53,   120,    40,   120,    78,    -1,   149,
      18,   120,    78,    -1,   149,    18,   120,    40,   120,    78,
      -1,    40,    79,   120,    80,   110,   107,    78,    -1,    40,
      79,   120,    80,   110,   107,    33,   110,    78,    -1,    45,
     110,    78,    -1,    45,   110,    64,    79,   120,    80,    78,
      -1,    64,    79,   120,    80,   110,    78,    -1,    44,    79,
     134,    80,   110,    78,    -1,    28,    78,    -1,    28,    40,
     120,    78,    -1,    38,    79,   109,    80,   110,    78,    -1,
      36,    78,    -1,    36,    40,   120,    78,    -1,    27,   120,
      78,    -1,    50,   120,    78,    -1,    50,   120,    40,   120,
      78,    -1,    -1,   107,    34,    79,   120,    80,   110,    -1,
     149,    86,   120,    -1,   149,    83,   149,    86,   120,    -1,
     149,    67,   120,    16,   120,    -1,    79,   149,    83,   111,
      80,    86,   120,    -1,    79,   149,    83,   111,    80,    83,
     149,    86,   120,    -1,   108,    -1,   109,    78,   108,    -1,
     106,    -1,   110,   106,    -1,   149,    -1,   111,    83,   149,
      -1,   114,    -1,   149,    -1,   112,   149,    -1,   143,    -1,
     139,    -1,    87,    -1,   150,    79,    80,    -1,   150,    79,
     112,    80,    -1,   149,    66,   149,    -1,    70,    -1,    73,
      -1,    84,    85,    -1,    84,    17,    85,    -1,    81,    82,
      -1,    81,    17,    82,    -1,    79,    80,    -1,    79,    17,
      80,    -1,   112,    -1,   113,    83,   112,    -1,   137,    -1,
     138,    -1,   137,    84,   117,    85,    -1,    68,   118,    69,
      -1,    68,    70,    69,    -1,    84,    73,    16,    73,    85,
      -1,    84,   139,    16,    73,    85,    -1,    84,    73,    16,
     139,    85,    -1,    84,   139,    16,   139,    85,    -1,    84,
     114,    85,    -1,    84,   114,    76,    85,    -1,   114,    73,
      -1,   114,    70,    -1,    79,   114,    15,   114,    80,    -1,
      79,   119,    80,    -1,    79,   114,    83,   117,    80,    -1,
      79,   114,    66,   114,    80,    -1,   114,    -1,    81,    82,
      -1,    84,    85,    -1,    79,    80,    -1,   150,    -1,   150,
      79,   115,    80,    -1,   150,    79,   119,    80,    -1,   145,
     115,    -1,   145,   115,    88,    -1,   114,    -1,   117,    83,
     114,    -1,   115,    -1,   118,    83,   115,    -1,   116,    -1,
     119,    83,   116,    -1,   140,    -1,   143,    -1,   141,    -1,
      59,    -1,    37,    -1,    47,    -1,    81,    82,    -1,    81,
     122,    82,    -1,    79,    80,    -1,    79,   132,    80,    -1,
      79,   125,    80,    -1,    79,   120,    83,   121,    80,    -1,
      84,    85,    -1,    84,   121,    85,    -1,    84,   121,    89,
     120,    85,    -1,   120,    66,   120,    -1,   143,    79,   120,
      80,    -1,   143,    79,   125,    80,    -1,   148,    79,   125,
      80,    -1,   148,    -1,   148,    79,   121,    80,    -1,   148,
      79,   121,    78,   134,    80,    -1,   148,    79,    78,   134,
      80,    -1,   147,    79,   121,    80,    -1,   144,    79,   121,
      80,    -1,    79,   120,    80,    -1,    71,   120,    -1,   120,
      70,   120,    -1,   120,    71,   120,    -1,   120,    73,   120,
      -1,   120,    74,   120,    -1,   120,    76,   120,    -1,   120,
      72,   120,    -1,   120,    68,   120,    -1,   120,    69,   120,
      -1,   120,    19,   120,    -1,   120,    20,   120,    -1,   120,
      25,   120,    -1,   120,    49,   120,    -1,    48,   120,    -1,
     120,    21,   120,    -1,   120,    22,   120,    -1,   120,    23,
     114,    -1,   137,    79,   120,    80,    -1,   138,    79,   120,
      80,    -1,   137,    84,   117,    85,    79,   120,    80,    -1,
     120,    77,   142,    -1,   120,    77,   142,    88,    -1,   149,
      84,   121,    85,    -1,   120,    77,   142,    84,   121,    85,
      -1,    79,    88,   129,    80,    -1,    79,    88,   129,    86,
     121,    80,    -1,    81,   120,    86,   129,    82,    -1,    81,
     120,    86,   129,    78,   121,    82,    -1,    38,    79,   129,
      80,    81,   120,    82,    -1,    38,    79,   129,    80,    40,
      79,   121,    80,    81,   120,    82,    -1,    79,   120,    15,
     120,    86,   129,    80,    -1,    79,   120,    15,   120,    86,
     129,    78,   121,    80,    -1,    38,    79,   129,    80,    79,
     120,    15,   120,    80,    -1,    38,    79,   129,    80,    40,
      79,   121,    80,    79,   120,    15,   120,    80,    -1,    84,
     120,    86,   149,    14,   120,    85,    -1,    84,   120,    86,
     149,    83,   149,    14,   120,    85,    -1,    84,   120,    86,
     149,    14,   120,    83,   120,    85,    -1,    84,   120,    86,
     149,    83,   149,    14,   120,    83,   120,    85,    -1,    40,
     126,    33,   120,   136,    -1,    46,    79,   121,    80,   128,
     136,    -1,    81,   110,    82,    -1,    51,   112,    41,   120,
      65,   120,   136,    -1,    54,   114,    41,   120,   136,    -1,
      52,   120,    39,   112,    41,   120,   136,    -1,    52,   120,
      39,   112,    41,   120,    40,   120,   136,    -1,   120,    42,
     114,    -1,   120,    -1,   121,    83,   120,    -1,   123,    -1,
     122,    83,   123,    -1,   120,    -1,   120,    40,   120,    -1,
     145,   120,    -1,   145,   120,    40,   120,    -1,   124,    -1,
     125,    83,   124,    -1,   120,    56,   120,    -1,   126,    83,
     120,    56,   120,    -1,   113,    67,   120,    -1,   113,    67,
     120,    44,   110,    -1,   127,    -1,   128,    83,   127,    -1,
     130,    -1,   129,    83,   130,    -1,   112,    14,   120,    -1,
     112,    15,   112,    14,   120,    -1,   149,    67,   120,    -1,
      79,   129,    80,    -1,   130,    24,   130,    -1,   120,    15,
     120,    -1,   120,    15,   120,    40,   120,    -1,   131,    -1,
     132,    83,   131,    -1,   146,    67,   120,    -1,   146,    79,
     135,    80,    67,   120,    -1,   133,    -1,   134,    83,   133,
      -1,   149,    -1,   135,    83,   149,    -1,    78,    -1,    35,
      -1,    11,    -1,    12,    -1,   140,    -1,    71,   140,    -1,
       8,    -1,    10,    -1,     3,    -1,   151,    -1,   143,    -1,
       4,    -1,     6,    -1,     7,    -1,   148,    -1,   147,    -1,
       5,    -1,   149,    -1,    41,    -1,    25,    -1,    49,    -1,
       3,    -1,    60,    -1,    29,    -1,     3,    -1,   151,    -1,
      25,    -1,    27,    -1,    29,    -1,    30,    -1,    31,    -1,
      32,    -1,    33,    -1,    34,    -1,    35,    -1,    36,    -1,
      37,    -1,    38,    -1,    40,    -1,    41,    -1,    42,    -1,
      43,    -1,    45,    -1,    46,    -1,    47,    -1,    48,    -1,
      49,    -1,    50,    -1,    51,    -1,    53,    -1,    54,    -1,
      57,    -1,    56,    -1,    59,    -1,    60,    -1,    61,    -1,
      62,    -1,    63,    -1,    64,    -1,    65,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   131,   131,   132,   135,   136,   137,   138,   139,   145,
     150,   151,   155,   156,   160,   161,   162,   163,   169,   170,
     174,   175,   178,   179,   185,   186,   190,   191,   197,   198,
     199,   200,   201,   202,   203,   205,   206,   207,   208,   209,
     210,   211,   215,   216,   217,   218,   222,   223,   227,   228,
     234,   235,   237,   240,   243,   244,   246,   247,   248,   250,
     253,   254,   256,   258,   259,   261,   263,   264,   270,   271,
     275,   276,   277,   278,   279,   283,   284,   288,   289,   293,
     294,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     312,   313,   314,   315,   316,   317,   318,   319,   323,   324,
     330,   331,   332,   333,   334,   336,   337,   338,   339,   341,
     342,   344,   345,   347,   348,   350,   352,   356,   357,   358,
     359,   360,   361,   362,   366,   367,   371,   372,   376,   377,
     381,   382,   388,   389,   390,   392,   393,   394,   396,   397,
     399,   400,   401,   403,   405,   406,   407,   409,   410,   412,
     413,   418,   419,   420,   421,   422,   423,   425,   427,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   440,
     441,   442,   444,   445,   447,   449,   450,   451,   453,   454,
     457,   458,   460,   461,   463,   464,   466,   467,   469,   470,
     472,   473,   476,   477,   478,   479,   486,   487,   490,   492,
     493,   495,   496,   499,   504,   505,   510,   511,   515,   516,
     520,   521,   525,   526,   530,   531,   535,   536,   539,   540,
     549,   550,   554,   555,   556,   557,   558,   562,   563,   567,
     568,   572,   573,   577,   578,   582,   583,   607,   607,   609,
     610,   612,   613,   616,   617,   620,   621,   622,   625,   628,
     630,   632,   633,   636,   645,   646,   647,   648,   651,   652,
     653,   656,   657,   660,   661,   662,   663,   664,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,   683,   684,   685,   686,
     687,   689,   690,   691,   692,   693,   694
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
  "\"and\"", "\"as\"", "\"assert\"", "\"break\"", "\"case\"", "\"def\"",
  "\"disabled\"", "\"do\"", "\"else\"", "\"elif\"", "\"end\"", "\"fail\"",
  "\"false\"", "\"for\"", "\"from\"", "\"if\"", "\"in\"", "\"is\"",
  "\"itself\"", "\"let\"", "\"loop\"", "\"match\"", "\"nil\"", "\"not\"",
  "\"or\"", "\"print\"", "\"replace\"", "\"retrieve\"", "\"return\"",
  "\"select\"", "\"subtypecheck\"", "\"then\"", "\"testcases\"",
  "\"trace\"", "\"true\"", "\"type\"", "\"using\"", "\"when\"",
  "\"where\"", "\"while\"", "\"with\"", "'@'", "'='", "'<'", "'>'", "'+'",
  "'-'", "'&'", "'*'", "'/'", "NEG", "'^'", "'.'", "';'", "'('", "')'",
  "'{'", "'}'", "','", "'['", "']'", "':'", "'_'", "'?'", "'|'", "$accept",
  "src_file", "decl", "subtype_decl", "test_block", "test_instrs",
  "test_instr", "using_block", "signature", "signatures", "typedef",
  "tvars", "fndef", "fnarg", "fnargs", "fndefs", "stmt", "elifs",
  "for_iter", "for_iters", "stmts", "vids", "pattern", "patterns", "type",
  "pretype", "labtype", "types", "pretypes", "labtypes", "expr", "exprs",
  "subexprs", "subexpr", "labexpr", "labexprs", "if_branches",
  "match_branch", "match_branches", "clauses", "clause", "map_entry",
  "map_entries", "let_fndef", "let_fndefs", "let_fnargs", "exp_close",
  "tname", "tvar", "snum", "num", "str", "uqctor", "ctor", "builtin",
  "lab", "fnid", "op", "rid", "vid", "pid", "keyword", YY_NULL
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
     315,   316,   317,   318,   319,   320,    64,    61,    60,    62,
      43,    45,    38,    42,    47,   321,    94,    46,    59,    40,
      41,   123,   125,    44,    91,    93,    58,    95,    63,   124
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    92,    92,    92,    92,    92,    93,
      94,    94,    95,    95,    96,    96,    96,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   103,   103,   103,   103,   104,   104,   105,   105,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   107,   107,
     108,   108,   108,   108,   108,   109,   109,   110,   110,   111,
     111,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   113,   113,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   115,   115,   115,
     115,   115,   115,   115,   116,   116,   117,   117,   118,   118,
     119,   119,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   121,   121,   122,   122,   123,   123,
     124,   124,   125,   125,   126,   126,   127,   127,   128,   128,
     129,   129,   130,   130,   130,   130,   130,   131,   131,   132,
     132,   133,   133,   134,   134,   135,   135,   136,   136,   137,
     138,   139,   139,   140,   141,   142,   142,   142,   143,   144,
     145,   146,   146,   147,   148,   148,   148,   148,   149,   149,
     149,   150,   150,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151
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
       3,     5,     5,     7,     9,     1,     3,     1,     2,     1,
       3,     1,     1,     2,     1,     1,     1,     3,     4,     3,
       1,     1,     2,     3,     2,     3,     2,     3,     1,     3,
       1,     1,     4,     3,     3,     5,     5,     5,     5,     3,
       4,     2,     2,     5,     3,     5,     5,     1,     2,     2,
       2,     1,     4,     4,     2,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     2,     3,
       2,     3,     3,     5,     2,     3,     5,     3,     4,     4,
       4,     1,     4,     6,     5,     4,     4,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     3,     3,     4,     4,     7,     3,     4,
       4,     6,     4,     6,     5,     7,     7,    11,     7,     9,
       9,    13,     7,     9,     9,    11,     5,     6,     3,     7,
       5,     7,     9,     3,     1,     3,     1,     3,     1,     3,
       2,     4,     1,     3,     3,     5,     3,     5,     1,     3,
       1,     3,     3,     5,     3,     3,     3,     3,     5,     1,
       3,     3,     6,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   258,   253,   239,   240,   256,   260,   255,   257,     0,
       0,   259,     0,     0,     0,     0,     0,     2,     8,     7,
       6,     4,     5,     0,   100,   101,     0,   252,   251,   254,
       0,   248,   249,   243,   244,     0,   136,     0,     0,     0,
     137,     0,     0,     0,     0,     0,   135,   259,     0,     0,
       0,     0,     0,    12,     0,     0,     0,   132,   134,   133,
       0,     0,   151,   254,     0,     0,    22,     0,     0,   261,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   289,   288,   290,   291,   292,
     293,   294,   295,   296,     0,     0,     0,     0,   117,   128,
       0,   121,   262,   250,     0,   130,     0,     0,     0,     0,
       0,     0,   241,     1,     3,   112,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   254,     0,   171,
       0,   258,   260,   259,    90,    91,     0,     0,     0,    86,
       0,    81,    85,    84,    82,     0,     0,     0,   158,   140,
       0,     0,   212,     0,   229,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   138,    77,     0,
     208,     0,   206,   254,   144,   204,     0,    10,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    14,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,   104,   120,   118,   119,   103,     0,     0,
       0,     0,     0,   114,     0,   124,   242,     0,     0,   109,
       0,     0,     0,   126,     0,     0,    42,    46,     0,    44,
      43,     0,    11,     0,    75,     0,     0,     0,   220,    82,
       0,     0,     0,     0,   204,     0,    15,     0,    96,     0,
      94,     0,    92,     0,    83,     0,     0,     0,     0,     0,
       0,    82,     0,   157,     0,   142,     0,   141,     0,   210,
       0,     0,    60,     0,    63,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   198,    78,     0,     0,   139,
       0,     0,     0,     0,   145,     0,   167,   168,   172,   173,
     174,   169,   203,   170,   147,   165,   166,   159,   160,   164,
     161,   162,   163,   245,   178,   247,   246,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    48,     0,    23,     0,   129,     0,     0,
       0,     0,     0,   131,   125,     0,     0,   110,     0,     0,
       0,     0,     0,   102,    35,     0,     0,    45,     9,    81,
       0,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   214,     0,     0,     0,    97,    95,    93,     0,
      89,    87,     0,     0,     0,   182,     0,     0,   227,     0,
     213,     0,   230,     0,    65,     0,     0,     0,     0,   233,
       0,     0,     0,     0,     0,    56,     0,    66,     0,    50,
       0,   209,     0,   208,   207,     0,     0,   205,     0,     0,
     179,   175,     0,   176,   148,   149,   156,   155,     0,     0,
     152,   150,    17,   180,    24,     0,     0,     0,    18,    49,
       0,   122,   123,   113,   116,   115,   105,   107,   106,   108,
      28,     0,   127,     0,     0,     0,    47,   225,     0,     0,
      76,     0,     0,   222,     0,     0,     0,     0,   221,   226,
     224,     0,    70,   238,   237,   196,     0,    98,     0,   218,
       0,     0,    88,     0,   200,     0,   224,     0,     0,   143,
       0,   211,    61,    64,     0,   157,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   184,     0,    52,     0,
       0,   146,     0,     0,   154,     0,    27,     0,    19,    21,
       0,     0,     0,     0,     0,     0,     0,    79,     0,     0,
      16,     0,     0,     0,     0,     0,     0,   215,     0,     0,
       0,   197,     0,     0,   183,   228,     0,   227,     0,    68,
       0,   234,   231,     0,   235,     0,     0,    67,    51,     0,
       0,     0,     0,     0,   181,     0,   153,     0,     0,     0,
       0,     0,    36,    37,     0,   254,     0,    39,     0,     0,
       0,   223,     0,     0,   186,    72,    71,   216,    99,   219,
     199,     0,   201,     0,   188,    62,     0,    59,     0,     0,
       0,    58,   185,    53,     0,   192,     0,   177,    25,     0,
      29,    31,     0,     0,    33,     0,    38,     0,     0,     0,
      80,     0,     0,     0,     0,     0,     0,     0,    54,     0,
     236,    57,     0,     0,     0,    32,     0,    41,    40,     0,
      73,     0,     0,   190,   217,   202,   189,     0,     0,   232,
     194,     0,   193,    30,    34,     0,     0,     0,    55,     0,
       0,    74,     0,   187,     0,   195,     0,    69,   191
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    17,    18,    19,    52,    53,    20,    66,    67,
      21,   350,   353,   247,   248,   354,   178,   616,   254,   417,
     569,   546,   256,   498,   151,   109,   115,   244,   110,   116,
     264,   186,   181,   182,   162,   163,   136,   499,   500,   257,
     258,   164,   165,   419,   420,   573,   495,    55,    56,   152,
      57,    58,   334,    59,    60,   117,    26,    61,    62,   137,
     155,   112
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -451
static const yytype_int16 yypact[] =
{
     352,  -451,  -451,  -451,  -451,  -451,  -451,  -451,  -451,   171,
    2588,    49,   203,  2333,   190,    36,    61,  -451,  -451,  -451,
    -451,  -451,  -451,  1130,    -7,  -451,   -25,  -451,  -451,  -451,
     355,  -451,  -451,  -451,  -451,  2878,  -451,    48,  2994,    56,
    -451,  2994,  2994,  2122,  2994,   171,  -451,  -451,  2994,  1749,
    2526,   929,  2646,  -451,  4564,   142,    87,  -451,  -451,    95,
     102,   119,   125,    13,   -46,   171,  -451,   243,  1130,  -451,
    -451,  -451,  -451,  -451,  -451,  -451,  -451,  -451,  -451,  -451,
    -451,  -451,  -451,  -451,  -451,  -451,  -451,  -451,  -451,  -451,
    -451,  -451,  -451,  -451,  -451,  -451,  -451,  -451,  -451,  -451,
    -451,  -451,  -451,  -451,   177,   156,   130,    70,   326,  -451,
     -16,   175,  -451,  -451,   232,  -451,   216,  2460,   260,   245,
     286,   257,  -451,  -451,  -451,  -451,  -451,    44,   171,  2994,
      16,   171,  2704,  2196,   213,  4927,    -9,   223,  2994,   187,
    4597,   270,   319,   327,  -451,  -451,    68,    24,   771,  -451,
     280,   326,  -451,  -451,   345,   338,  4966,   -15,   187,  -451,
    2270,  3280,  -451,   354,  -451,   364,  2994,  2994,   111,   116,
     350,  3052,   356,  1679,  2994,  2994,   373,  -451,  -451,   427,
    3361,   256,  -451,    15,  -451,  3432,   325,  -451,  -451,  2994,
    2994,  2994,  2994,   171,  2994,   171,  2994,  2994,  2994,  2994,
    2994,  2994,  2994,  2994,  2994,  2994,  3731,  -451,  2994,   171,
    2994,  2936,  2994,  2994,  2762,  2994,  2994,  2460,   409,   112,
    1210,   171,   380,  -451,  -451,  -451,  -451,  -451,  2460,  2397,
     171,   171,   171,  -451,   436,   397,  -451,   120,   404,  -451,
     199,  2994,    16,   326,   -14,  4630,  -451,  -451,   393,   136,
    -451,   273,  -451,  1939,  -451,   267,   275,   403,   469,   -37,
    2270,  2994,  2994,  2994,  5220,   418,  -451,   431,  -451,   440,
    -451,   442,  -451,  2994,  -451,   158,  2025,  2122,  2994,  1939,
     359,   312,  2994,  -451,  2994,  -451,   436,  -451,  2994,  5004,
    4663,  2994,  -451,  2994,  -451,  2196,  1749,   421,   456,   466,
     831,   521,  4339,  4378,  2994,  -451,  -451,  2994,  2270,  -451,
    2994,  2994,   158,  2994,  -451,  2994,   296,   296,  5261,  5261,
    -451,  3320,   326,  3320,  5251,   296,   296,   342,   342,   342,
     187,   187,   187,  -451,   249,  -451,  -451,  3866,   368,  3928,
    3941,   422,   423,   424,   421,   412,   449,  4696,   375,   208,
     435,  -451,  1210,  -451,   159,  -451,   171,  -451,   477,   453,
      64,   324,   454,  -451,  -451,   487,   497,  -451,   507,   520,
    4729,   460,   171,  -451,  -451,   144,    16,  -451,  -451,   232,
     467,   227,    33,  2878,  2994,  2122,   -22,  2270,  2270,  2994,
     158,  2994,  5220,  4418,  5037,  2122,  -451,  -451,  -451,  5075,
    -451,  -451,    34,   282,  4418,  -451,  2994,  2994,  3399,   471,
    -451,  3782,  -451,  2994,  -451,  4762,  4795,   432,  3296,  -451,
     472,    52,    33,  2994,   479,  -451,  2994,  -451,  2994,  -451,
    4003,  5220,   150,  5113,  -451,  4457,    25,  5220,  3538,  2994,
    -451,  -451,   527,  -451,  -451,  -451,  -451,  -451,   473,   421,
    -451,  -451,  -451,  -451,  -451,   409,   550,   598,  -451,  -451,
     482,  -451,  -451,  -451,  -451,  -451,  -451,  -451,  -451,  -451,
    -451,   236,   326,  2994,  1679,  2122,  -451,  -451,   158,   158,
    -451,   162,  2820,  5220,   143,   537,  2994,  2994,   469,  -451,
    4016,   539,  5220,  -451,  -451,  -451,  2994,   158,   -27,  -451,
     -13,  2994,  -451,  2994,  -451,   483,  5220,  2994,  2270,  -451,
    2994,  5220,  -451,  -451,  1679,  1679,  1679,   421,  2994,   158,
    4075,  2994,  4828,  4861,  1679,  2994,  -451,  2994,  -451,  2994,
     158,  -451,   498,  2994,  -451,   484,  -451,  2460,  -451,  -451,
    2994,  1679,  2122,  4494,  3110,   253,   493,  -451,   548,  2994,
    -451,  2994,  2994,  3794,  3641,  2994,  2994,  5220,  2994,  2122,
    2122,  -451,  4418,  4300,  -451,  5220,   416,  5151,  1246,  1679,
    1416,  -451,  5220,   510,  -451,  1679,  4088,  -451,  -451,  1563,
     309,  4894,  3468,   608,  -451,  4150,  -451,   242,  4531,  3168,
     297,  1679,  -451,  -451,   919,   521,  1210,  -451,   514,   158,
    4016,  5220,   524,  2994,  -451,  5220,  5220,  5187,   158,  -451,
    -451,  2994,  -451,  2994,  -451,  -451,   189,  -451,   567,   158,
    1835,  -451,  -451,  -451,  2994,  -451,  2994,  -451,  -451,  1679,
    -451,  -451,  1085,  1210,  -451,  1881,  -451,  1070,   158,  2994,
    -451,   549,  4163,  1679,  4418,   531,  1679,   561,  -451,  2994,
    -451,  -451,  3571,  3501,  3195,  -451,  1337,  -451,  -451,   559,
    5220,  2994,  2994,  -451,  1679,  -451,  -451,  3234,  2994,  5220,
    -451,  2994,  -451,  -451,  -451,  2994,  3854,  3677,  -451,  4225,
    3608,  5220,  2994,  -451,  1679,  -451,  4238,  1679,  -451
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -451,  -451,   632,  -451,  -451,   -33,   -49,  -451,   428,   585,
    -451,  -451,     4,   277,   413,  -345,   226,  -451,   269,   526,
     128,  -451,   -11,  -451,  1505,  -103,   429,  -198,  -209,   444,
     536,  -125,  -451,   347,   385,   410,  -451,   101,  -450,  -155,
      81,   386,  -451,   161,  -332,  -451,  -387,  1307,  1035,    -6,
    1098,  -451,  -451,    53,  -451,   -34,   -17,   169,   318,     0,
     -12,   470
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -292
static const yytype_int16 yytable[] =
{
      29,   111,   132,   188,    22,   280,   127,   457,   349,   121,
      63,   338,   448,   265,   235,   166,    29,   504,   485,     1,
      22,   217,   493,    29,   262,   545,   278,     3,     4,   275,
     389,   215,   150,   311,   362,    63,     1,     1,   218,   529,
     558,   269,   129,   154,    33,     6,   390,     3,     4,   391,
     183,   222,    63,   227,   130,   125,   559,   486,   126,   487,
       3,   123,     6,     6,     1,   494,     2,   228,    29,   372,
     560,   373,     3,     4,   263,   113,    47,   128,    33,     3,
       4,     3,     4,   188,    13,   267,     5,   342,   343,   345,
       6,   348,   590,    47,    47,    14,   153,   216,   380,   216,
      15,   121,     7,   246,    13,   111,   270,   118,   530,   119,
       8,   241,   479,   561,   502,    14,     9,   535,    10,   518,
      15,    11,    12,   242,   380,   357,   358,   133,    33,    13,
     250,   519,    63,   259,   125,   138,    13,   126,    13,     1,
      14,   118,   121,   119,   463,    15,     1,    14,   268,    14,
     274,   291,    15,   432,    15,   226,   293,   551,   460,   409,
     281,     1,     1,   113,     2,     6,   210,     3,     4,    27,
       3,     4,     6,   301,   211,   610,   612,   166,   179,   301,
     166,   212,     3,     4,     5,    27,   153,     6,     6,   292,
     352,   118,    27,   365,   294,   221,    47,   113,   213,   594,
       7,     3,     4,    47,   214,   111,   125,    33,     8,   126,
     193,   473,   225,   153,     3,     4,   111,   111,    47,    47,
      29,   208,   646,   647,    13,   474,   209,    13,   525,   549,
     475,   366,   526,   387,   369,    14,   224,    27,    14,    13,
      15,   458,   250,    15,   632,   390,   223,   230,   391,   377,
      14,   637,   166,   381,   229,    15,   274,   665,    13,   335,
     281,   237,   166,   205,   206,   402,   403,   648,    33,    14,
     118,    13,   368,   240,    15,   400,   154,   154,     1,   281,
     421,   505,    14,     1,    65,     1,   454,    15,   656,   384,
     385,   228,   260,   275,   407,   259,   233,    29,   231,   234,
     301,   300,   125,   540,     6,   126,   153,   216,   281,     6,
     478,     6,   436,   153,   532,   232,   596,   541,    28,   193,
     628,   273,   542,   503,   220,   228,   221,   421,   587,   153,
     153,   597,   153,   439,    28,    47,   560,   440,   309,   310,
      47,    28,    47,   125,    29,   382,   126,   383,   153,  -261,
     482,   378,    29,   566,    29,     1,   125,     2,   459,   126,
     633,   153,   238,     3,     4,   193,   200,   201,   202,   203,
     204,   239,   205,   206,   484,   634,   250,     5,   275,   407,
     560,     6,   481,    63,   497,   154,    28,   281,   281,    27,
     491,   622,   313,     7,   125,   154,   125,   126,  -265,   126,
     580,     8,   274,   274,   464,   306,  -291,     9,   313,    10,
     314,   275,    11,    12,   315,   203,   204,   276,   205,   206,
      13,     4,   481,   131,     1,   125,     2,   602,   126,   295,
       1,    14,   421,   188,   285,   297,    15,   286,   153,   405,
     153,   153,   387,   113,   287,   406,     5,   288,   153,    29,
       6,   372,   304,   442,   167,   168,     6,    29,   313,   356,
     453,   459,     7,   169,   497,   298,    27,   299,   488,   489,
       8,   172,   173,   375,   301,   154,   376,   174,   547,   548,
     175,    47,    63,   386,   274,   364,   387,    47,   645,   367,
     449,   176,   450,   388,   613,   313,   614,   274,   395,   387,
     421,   313,   445,   446,   447,   286,   313,   313,   281,   305,
     382,   396,   514,    27,   301,   301,   301,    29,   455,   574,
     456,    27,   397,    27,   301,   111,   306,   398,   153,   451,
     583,   497,   286,   462,   465,   422,   234,   372,    28,   311,
     471,   301,   154,   376,   595,   423,    54,   477,   608,   497,
     387,   509,   516,   534,   313,   517,   517,   461,   521,   154,
     154,   153,   539,   564,   586,   372,   313,   517,   301,   301,
     301,    54,   466,   598,   135,   301,   599,   139,   140,   301,
     156,   313,   467,   584,   158,   161,   180,   185,    54,   595,
     618,   301,   468,   619,    29,   153,    29,   638,   459,   640,
     639,     1,   544,     2,   641,   469,   533,   313,   274,     3,
       4,   666,   153,   153,   313,    28,   552,   537,    27,   650,
     301,   341,   626,     5,   346,   556,    27,     6,   661,   301,
     662,   478,    29,    29,   649,   301,   459,    29,   659,     7,
     668,   459,   568,   301,   570,   675,   301,     8,   124,   355,
     219,   480,   579,   476,   301,   371,    29,   434,    47,   255,
     459,   609,    28,   363,   301,   245,    13,   301,    54,   589,
      28,   410,    28,   359,   412,     0,   336,    14,   571,     0,
     538,     0,    15,     0,   301,     0,    27,   301,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   289,   290,     0,     0,     0,   135,     0,     0,
     302,   303,     0,    27,     0,     0,     0,     0,     0,   635,
       0,     0,     0,     0,     0,   316,   317,   318,   319,     0,
     321,     0,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,     0,     0,   337,     0,   339,   340,   579,     0,
       0,   347,     0,     0,     0,     0,     0,   654,    27,     0,
       0,     0,     0,    27,     0,    27,     0,    28,     0,     0,
     306,   664,     0,     0,   667,    28,     0,   370,     0,    33,
       0,     0,     3,     4,     0,     0,     0,     0,   271,     0,
       0,     0,     0,     0,   306,   306,   306,   392,   393,   394,
       0,    27,    27,     0,     0,   306,    27,     0,     0,   399,
       0,     0,   687,     0,   404,   306,     0,     0,   408,     0,
       0,     0,     0,     0,   411,    27,     0,   415,     0,   416,
       0,     0,   418,     0,     1,    28,     0,     0,     0,    13,
     430,     0,   118,   431,   119,     0,   433,   435,     0,   437,
      14,   438,     0,     0,     0,    15,   272,     0,   167,   168,
       6,   306,    28,     0,     0,     0,     0,   169,     0,   298,
       0,   299,     0,     0,     0,   172,   173,     0,     0,     0,
     306,   174,     0,     0,   175,     0,     0,     0,     0,     0,
     306,    47,     0,   306,     0,   424,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   425,
       0,     0,    28,   306,    28,     0,     0,     0,     0,    54,
     483,     0,     1,     0,     2,   490,     0,   492,     0,     0,
       3,     4,     1,    31,     2,    32,     0,    33,     0,    34,
       3,     4,     0,   506,     5,     0,     0,     0,     6,   511,
      28,    28,     0,     0,     5,    28,     0,     0,     6,   520,
       7,     0,   522,     0,   523,     0,    36,   134,     8,    38,
       7,     0,     0,     0,    28,    39,    40,    41,     8,    47,
      43,    44,     0,    45,     0,     0,     0,    13,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     0,
      48,   636,     0,    15,     0,     0,     0,     0,    49,   543,
      50,     0,     0,    51,   184,     0,     0,     0,    54,     0,
       0,     0,   553,   554,     0,     0,     0,     0,     0,     0,
       0,     0,   557,     0,     0,    25,     0,   562,     0,   563,
       0,     0,     0,   565,    25,     0,   567,    25,    25,    25,
      25,    25,     0,     0,   572,     0,     0,   576,     0,     0,
       0,     0,     0,   581,     0,   582,     0,     0,     0,   585,
       0,     0,     0,     1,     0,     2,   588,     0,    25,     0,
      25,     3,     4,     0,     0,   600,     0,   601,     1,     0,
       2,   605,   606,     0,   607,     5,     3,     4,     0,     6,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     7,     0,   122,     6,     0,     0,     0,     0,     8,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
      47,     0,     0,     1,     8,     2,     0,     0,    13,   642,
      25,   122,    25,     0,     0,    47,     0,   644,   658,    14,
       0,     0,    25,    13,    15,     5,     0,     0,     0,     6,
     652,     0,   653,    25,    14,    25,    25,   655,    25,    15,
       0,     7,     0,     0,     0,   660,     0,     0,     0,     8,
       0,    25,     0,    25,     0,   669,     0,     0,     0,     0,
      47,     0,     0,     0,     0,    25,     0,   676,   677,     0,
     125,     0,     0,   126,   679,   122,     0,   680,     0,     0,
       0,   681,     0,     1,     0,     2,   236,     0,   686,     0,
       0,     3,     4,     0,     0,     0,     0,     0,    25,     0,
      25,   122,     0,     0,     0,     5,     0,     0,     0,     6,
       0,     0,     0,     0,    25,     0,   122,     0,     0,     1,
       0,     7,    25,   351,     0,    25,    25,     0,   122,     8,
       0,     0,     0,    25,    25,    25,    25,    25,     0,     0,
      47,     0,     0,   167,   168,     6,     0,    25,    13,     0,
       0,     0,   169,     0,   298,     0,   299,     0,    25,    14,
     172,   173,     0,     0,    15,    25,   174,     0,     0,   175,
       0,     0,     0,     0,     0,     0,    47,    24,     0,     0,
     176,    25,    25,     0,    25,     0,    24,     0,    64,    24,
      24,    24,    24,    24,   615,     0,     0,     0,     0,     0,
      25,     0,     0,     0,     0,   122,     0,     0,   122,     0,
       1,     0,     2,    25,     0,     0,     0,     0,     3,     4,
      24,   122,    24,     0,     0,     0,     0,     0,   122,     0,
       0,     0,     5,     0,     0,     0,     6,     0,     0,     0,
       0,     0,    24,     0,   122,   122,     0,   122,     7,     0,
       0,     0,     0,     0,     0,     0,     8,    25,     0,    25,
       0,    25,     0,   122,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,    13,   122,    25,     0,     0,
       0,    25,    24,     0,    24,   674,    14,     0,     0,     1,
      25,    15,    25,    25,    24,     0,     0,     0,     0,     0,
      25,     0,     0,     0,     0,    24,     0,    24,    24,     0,
      24,     0,     0,   167,   168,     6,     0,     0,     0,     0,
       0,     0,   169,    24,   298,    24,   299,     0,     0,     0,
     172,   173,     0,     0,     0,     0,   174,    24,     0,   175,
       0,     0,     0,     0,     0,     0,    47,     0,     0,     0,
     176,     0,     0,   122,     0,   122,   122,     0,     0,     0,
     536,     0,    25,   122,   617,     0,     0,     0,     0,     0,
      24,     0,    24,     0,     0,    23,     0,     0,     0,     0,
      25,     0,     0,     0,    30,     0,    24,    68,   108,   114,
     120,    23,     0,     0,    24,     0,     0,    24,    24,     0,
       0,     0,     0,     0,     0,    24,    24,    24,    24,    24,
       0,     0,     0,    25,     0,     0,     0,     0,     0,    24,
     157,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,     0,     0,     0,     0,     0,     1,    24,     0,     0,
      68,     0,    25,   122,     0,     0,     0,    25,     0,    25,
       0,     0,     0,    24,    24,     0,    24,     0,     0,     0,
     167,   168,     6,     0,    25,    25,     0,     0,     0,   169,
       0,   298,    24,   299,     0,     0,   122,   172,   173,     0,
     114,     0,   120,   174,     0,    24,   175,     0,     0,     0,
       0,     0,   108,    47,    25,     0,     0,   176,     0,    25,
       0,    25,     0,   243,     0,   249,   251,     0,     0,     0,
     122,   621,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,     0,   120,     0,     0,     0,   122,   122,    24,
       0,    24,     0,    24,     0,     0,     0,    25,    25,     0,
       0,     0,    25,     0,     0,     0,     0,     0,     0,    24,
       0,     0,     1,    24,     0,     0,     0,     0,     0,     0,
       0,    25,    24,     0,    24,    24,     0,     0,   320,     0,
     322,     0,    24,     0,     0,     0,   167,   168,     6,     0,
       0,     0,     0,     0,   243,   169,     0,   298,     0,   299,
       0,     0,   108,   172,   173,    23,    68,     0,     0,   174,
       0,     0,   175,   108,   108,   360,   361,   243,     0,    47,
       0,     0,     0,   176,     0,     0,     0,   249,     0,     0,
       0,     0,     1,    31,     2,    32,   113,    33,   379,    34,
       3,     4,     0,     0,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     0,     0,     0,     6,     0,
       0,     0,    24,     0,   379,     0,    36,   134,     0,    38,
       7,     0,     0,     0,     0,    39,    40,    41,     8,     0,
      43,    44,     0,    45,     0,     0,     0,     0,    46,    47,
       0,     0,     0,     0,     0,    24,     0,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,    49,   159,
      50,     0,     0,    51,     0,     0,     0,   160,     1,     0,
       0,     0,     0,     0,    24,     0,     0,     0,     0,    24,
       0,    24,     0,     0,     0,     0,     0,    23,     0,    23,
       0,   243,   167,   168,     6,     0,    24,    24,     0,     0,
       0,   169,     0,   298,     0,   299,     0,   472,     0,   172,
     173,   249,     0,     0,     1,   174,     0,     0,   175,     0,
       0,     0,     0,     0,     0,    47,    24,     0,     0,   176,
       0,    24,     0,    24,     0,     0,     0,     0,   167,   168,
       6,     0,     0,   651,     0,     0,     0,   169,     0,   298,
       0,   299,     0,     0,     0,   172,   173,     0,     0,     0,
       0,   174,     0,     0,   175,     0,     0,     0,     0,    24,
      24,    47,   141,    31,    24,   176,   113,    33,     0,     0,
       3,     4,     0,     0,     0,     0,   267,     0,     0,   657,
       0,     0,    23,    24,    70,     0,    71,     0,   142,    73,
      74,    75,    76,    77,    78,    79,    80,    81,     0,    82,
      83,    84,    85,     0,    86,    87,    88,    89,    90,    91,
      92,     0,    93,    94,     0,    95,    96,     0,    97,   143,
      99,   100,   101,   102,   103,     0,     0,    13,     0,   144,
     118,     0,   145,     0,     0,     0,     0,     0,   279,   268,
     147,     0,     0,   148,     0,     0,   149,     0,   141,    31,
       0,     0,     0,    33,     0,     0,     3,     4,     0,     0,
       0,     0,   108,     0,     0,     0,     0,     0,     0,    23,
      70,     0,    71,     0,   142,    73,    74,    75,    76,    77,
      78,    79,    80,    81,     0,    82,    83,    84,    85,     0,
      86,    87,    88,    89,    90,    91,    92,     0,    93,    94,
       0,    95,    96,     0,    97,   143,    99,   100,   101,   102,
     103,     0,     0,    13,    23,   144,   118,     0,   145,    23,
       0,    23,     0,     0,   146,   401,   147,     0,     0,   148,
       0,     0,   149,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   141,    31,     0,     0,     0,
      33,     0,     0,     3,     4,     0,     0,    23,    23,     0,
       0,     0,    23,     0,     0,     0,     0,    70,     0,    71,
       0,   142,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    23,    82,    83,    84,    85,     0,    86,    87,    88,
      89,    90,    91,    92,     0,    93,    94,     0,    95,    96,
       0,    97,   143,    99,   100,   101,   102,   103,     0,     0,
      13,     0,   144,   118,     0,   145,     0,     0,     0,   141,
      31,   146,     0,   147,    33,     0,   148,     3,     4,   149,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    70,     0,    71,     0,   142,    73,    74,    75,    76,
      77,    78,    79,    80,    81,     0,    82,    83,    84,    85,
       0,    86,    87,    88,    89,    90,    91,    92,     0,    93,
      94,     0,    95,    96,     0,    97,   143,    99,   100,   101,
     102,   103,     0,     0,    13,     0,   144,   118,     0,   145,
       0,     0,     0,   141,    31,   253,     0,   147,    33,     0,
     148,     3,     4,   149,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    70,     0,    71,     0,   142,
      73,    74,    75,    76,    77,    78,    79,    80,    81,     0,
      82,    83,    84,    85,     0,    86,    87,    88,    89,    90,
      91,    92,     0,    93,    94,     0,    95,    96,     0,    97,
     143,    99,   100,   101,   102,   103,    69,     0,    13,     0,
     144,   118,     0,   145,     3,     4,     0,     0,     0,   279,
       0,   147,     0,     0,   148,     0,     0,   149,    70,     0,
      71,     0,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,     0,    82,    83,    84,    85,     0,    86,    87,
      88,    89,    90,    91,    92,     0,    93,    94,     0,    95,
      96,     0,    97,    98,    99,   100,   101,   102,   103,     0,
      69,    13,     0,   104,   113,     0,     0,     0,     3,     4,
       0,     0,   105,     0,   106,     0,     0,   107,     0,     0,
       0,     0,    70,     0,    71,     0,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,     0,    82,    83,    84,
      85,     0,    86,    87,    88,    89,    90,    91,    92,     0,
      93,    94,     0,    95,    96,     0,    97,    98,    99,   100,
     101,   102,   103,    69,     0,    13,     0,     0,     0,     0,
       0,     3,     4,     0,     0,     0,   105,     0,   106,     0,
       0,   107,     0,     0,     0,    70,     0,    71,     0,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,     0,
      82,    83,    84,    85,     0,    86,    87,    88,    89,    90,
      91,    92,     0,    93,    94,     0,    95,    96,     0,    97,
      98,    99,   100,   101,   102,   103,     0,     0,    13,     1,
      31,     2,    32,     0,    33,     0,    34,     3,     4,   105,
       0,   106,     0,     0,   107,     0,     0,     0,     0,     0,
       0,     5,     0,   167,   168,     6,     0,     0,     0,     0,
       0,     0,   169,    36,   170,     0,   171,     7,     0,     0,
     172,   173,    39,    40,    41,     8,   174,    43,    44,   175,
      45,     0,     0,     0,     0,    46,    47,     0,     0,     0,
     176,     1,    31,     2,    32,     0,    33,    48,    34,     3,
       4,     0,     0,     0,     0,    49,     0,    50,   177,     0,
      51,     0,     0,     5,     0,     0,     0,     6,     0,    35,
       0,     0,     0,     0,     0,    36,    37,     0,    38,     7,
       0,     0,     0,     0,    39,    40,    41,     8,    42,    43,
      44,     0,    45,     0,     0,     0,     0,    46,    47,     1,
      31,     2,    32,     0,    33,     0,    34,     3,     4,    48,
       0,     0,     0,     0,     0,     0,     0,    49,     0,    50,
       0,     5,    51,     0,     0,     6,     0,     0,     0,     0,
       0,   187,     0,    36,    37,     0,    38,     7,     0,     0,
       0,     0,    39,    40,    41,     8,    42,    43,    44,     0,
      45,     0,     0,     0,     0,    46,    47,     1,    31,     2,
      32,     0,    33,     0,    34,     3,     4,    48,     0,     0,
       0,     0,     0,     0,     0,    49,     0,    50,     0,     5,
      51,     0,     0,     6,     0,     0,     0,     0,     0,   252,
       0,    36,    37,     0,    38,     7,     0,     0,     0,     0,
      39,    40,    41,     8,    42,    43,    44,     0,    45,     0,
       0,     0,     0,    46,    47,     1,    31,     2,    32,   113,
      33,     0,    34,     3,     4,    48,     0,     0,     0,     0,
       0,     0,     0,    49,     0,    50,     0,     5,    51,     0,
       0,     6,     0,     0,     0,     0,     0,     0,     0,    36,
     134,     0,    38,     7,     0,     0,     0,     0,    39,    40,
      41,     8,     0,    43,    44,     0,    45,     0,     0,     0,
       0,    46,    47,     1,    31,     2,    32,     0,    33,     0,
      34,     3,     4,    48,     0,     0,     0,     0,     0,     0,
     344,    49,     0,    50,     0,     5,    51,     0,     0,     6,
       0,     0,     0,     0,     0,     0,     0,    36,    37,     0,
      38,     7,     0,     0,     0,     0,    39,    40,    41,     8,
      42,    43,    44,     0,    45,     0,     0,     0,     0,    46,
      47,     1,    31,     2,    32,     0,    33,     0,    34,     3,
       4,    48,     0,     0,     0,     0,     0,     0,   550,    49,
       0,    50,     0,     5,    51,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     0,    36,    37,     0,    38,     7,
       0,     0,     0,     0,    39,    40,    41,     8,    42,    43,
      44,     0,    45,     0,     0,     0,     0,    46,    47,     1,
      31,     2,    32,   113,    33,     0,    34,     3,     4,    48,
       0,     0,     0,     0,     0,     0,     0,    49,     0,    50,
       0,     5,    51,     0,     0,     6,     0,     0,     0,     0,
       0,     0,     0,    36,   134,     0,    38,     7,     0,     0,
       0,     0,    39,    40,    41,     8,     0,    43,    44,     0,
      45,     0,     0,     0,     0,    46,    47,     1,    31,     2,
      32,     0,    33,     0,    34,     3,     4,    48,     0,     0,
       0,     0,     0,     0,     0,    49,     0,    50,     0,     5,
      51,     0,     0,     6,     0,     0,     0,     0,     0,     0,
       0,    36,   134,     0,    38,     7,     0,     0,     0,     0,
      39,    40,    41,     8,     0,    43,    44,     0,    45,     0,
       0,     0,     0,    46,    47,     1,    31,     2,    32,     0,
      33,     0,    34,     3,     4,    48,     0,     0,     0,     0,
       0,     0,     0,    49,     0,    50,     0,     5,    51,     0,
       0,     6,     0,     0,     0,     0,     0,     0,     0,    36,
     134,     0,    38,     7,     0,     0,     0,     0,    39,    40,
      41,     8,     0,    43,    44,     0,    45,     0,     0,     0,
       0,    46,    47,     1,     0,     2,     0,     0,     0,     0,
       0,     3,     4,    48,     0,     0,     0,     0,     0,     0,
       0,   296,     0,    50,     0,     5,    51,   167,   168,     6,
       0,     0,     0,     0,     0,     0,   169,     0,   298,     0,
     299,     7,     0,     0,   172,   173,     0,     0,     0,     8,
     174,     0,     0,   175,     0,     0,     0,     0,     0,     0,
      47,     1,     0,     2,   176,     0,     0,     0,    13,     3,
       4,     0,     0,     0,     0,     0,     0,     0,     0,    14,
       0,     0,   593,     5,    15,   167,   168,     6,     1,     0,
       0,     0,     0,     0,   169,     0,   298,     0,   299,     7,
       0,     0,   172,   173,     0,     0,     0,     8,   174,     0,
       0,   175,   167,   168,     6,     0,     0,     0,    47,     0,
       0,   169,   176,   298,     0,   299,    13,     1,     0,   172,
     173,     0,     0,     0,     0,   174,     0,    14,   175,     0,
     631,     0,    15,     0,     0,    47,     0,     0,     0,   176,
       0,   167,   168,     6,     0,     0,     0,     0,     0,     0,
     169,     0,   298,   673,   299,     0,     0,     0,   172,   173,
       0,     0,     0,     0,   174,     0,     0,   175,     0,     0,
       0,     0,     0,     0,    47,   282,     0,     0,   176,   189,
     190,   191,   192,   193,     0,   194,     0,     0,     0,     0,
       0,   282,   678,     0,     0,   189,   190,   191,   192,   193,
       0,   194,   195,     0,     0,     0,     0,     0,     0,   196,
       0,     0,     0,     0,     0,     0,     0,     0,   195,   189,
     190,   191,   192,   193,     0,   196,   197,     0,   198,   199,
     200,   201,   202,   203,   204,     0,   205,   206,     0,     0,
     283,     0,   197,   284,   198,   199,   200,   201,   202,   203,
     204,     0,   205,   206,     0,     0,   515,     0,     0,   284,
     189,   190,   191,   192,   193,     0,   194,     0,   198,   199,
     200,   201,   202,   203,   204,     0,   205,   206,     0,     0,
       0,   307,     0,   195,     0,     0,     0,     0,     0,     0,
     196,     0,     0,     0,     0,     0,     0,     0,   189,   190,
     191,   192,   193,     0,   194,     0,     0,   197,     0,   198,
     199,   200,   201,   202,   203,   204,     0,   205,   206,   507,
       0,   195,     0,     0,     0,     0,     0,   308,   196,     0,
       0,   189,   190,   191,   192,   193,     0,   194,     0,     0,
       0,     0,     0,     0,     0,   197,     0,   198,   199,   200,
     201,   202,   203,   204,   195,   205,   206,     0,     0,     0,
       0,   196,     0,     0,     0,   508,     0,   189,   190,   191,
     192,   193,     0,   194,     0,     0,     0,     0,   197,     0,
     198,   199,   200,   201,   202,   203,   204,     0,   205,   206,
     195,     0,     0,     0,     0,     0,     0,   196,   312,     0,
     189,   190,   191,   192,   193,     0,   194,     0,     0,     0,
       0,     0,     0,     0,   197,     0,   198,   199,   200,   201,
     202,   203,   204,   195,   205,   206,     0,     0,     0,     0,
     196,   624,     0,   625,     0,     0,     0,   189,   190,   191,
     192,   193,     0,   194,     0,     0,     0,   197,     0,   198,
     199,   200,   201,   202,   203,   204,     0,   205,   206,     0,
     195,     0,     0,     0,   671,     0,   672,   196,     0,     0,
     189,   190,   191,   192,   193,     0,   194,     0,     0,     0,
       0,     0,     0,     0,   197,     0,   198,   199,   200,   201,
     202,   203,   204,   195,   205,   206,     0,     0,     0,     0,
     196,     0,     0,   531,     0,     0,     0,   189,   190,   191,
     192,   193,     0,   194,     0,     0,     0,   197,     0,   198,
     199,   200,   201,   202,   203,   204,     0,   205,   206,     0,
     195,     0,     0,     0,     0,     0,   670,   196,     0,     0,
     189,   190,   191,   192,   193,     0,   194,     0,     0,     0,
       0,     0,     0,     0,   197,     0,   198,   199,   200,   201,
     202,   203,   204,   195,   205,   206,     0,     0,     0,     0,
     196,     0,     0,   685,     0,     0,   189,   190,   191,   192,
     193,     0,   194,     0,     0,     0,     0,   197,     0,   198,
     199,   200,   201,   202,   203,   204,     0,   205,   206,   195,
       0,     0,     0,   604,     0,     0,   196,     0,     0,     0,
       0,     0,     0,     0,   333,    31,     0,     0,     0,     0,
       0,     0,     0,   197,     0,   198,   199,   200,   201,   202,
     203,   204,     0,   205,   206,     0,    70,     0,    71,   683,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
       0,    82,    83,    84,    85,     0,    86,    87,    88,    89,
      90,    91,    92,     0,    93,    94,     0,    95,    96,     0,
      97,    98,    99,   100,   101,   102,   103,   510,     0,     0,
       0,   189,   190,   191,   192,   193,     0,   194,     0,   603,
       0,     0,     0,   189,   190,   191,   192,   193,     0,   194,
       0,     0,     0,     0,   195,     0,     0,     0,     0,     0,
       0,   196,     0,     0,     0,     0,   195,     0,     0,     0,
       0,     0,     0,   196,     0,     0,     0,     0,   197,     0,
     198,   199,   200,   201,   202,   203,   204,     0,   205,   206,
     197,     0,   198,   199,   200,   201,   202,   203,   204,   682,
     205,   206,     0,   189,   190,   191,   192,   193,     0,   194,
       0,     0,     0,     0,     0,   189,   190,   191,   192,   193,
       0,   194,     0,     0,     0,     0,   195,     0,     0,     0,
       0,     0,     0,   196,     0,     0,     0,     0,   195,     0,
       0,     0,     0,     0,     0,   196,     0,     0,     0,     0,
     197,     0,   198,   199,   200,   201,   202,   203,   204,     0,
     205,   206,   197,     0,   198,   199,   200,   201,   202,   203,
     204,     0,   205,   206,     0,     0,   441,   189,   190,   191,
     192,   193,     0,   194,     0,     0,     0,     0,     0,     0,
     189,   190,   191,   192,   193,     0,   194,     0,     0,     0,
     195,     0,     0,     0,     0,     0,     0,   196,     0,     0,
       0,     0,     0,   195,     0,     0,     0,     0,     0,     0,
     196,     0,     0,     0,   197,     0,   198,   199,   200,   201,
     202,   203,   204,     0,   205,   206,     0,   197,   443,   198,
     199,   200,   201,   202,   203,   204,     0,   205,   206,     0,
       0,   444,   189,   190,   191,   192,   193,     0,   194,     0,
       0,     0,   555,     0,     0,   189,   190,   191,   192,   193,
       0,   194,     0,     0,     0,   195,     0,     0,     0,     0,
       0,     0,   196,     0,     0,     0,     0,     0,   195,     0,
       0,     0,     0,     0,     0,   196,     0,     0,     0,   197,
       0,   198,   199,   200,   201,   202,   203,   204,     0,   205,
     206,     0,   197,   524,   198,   199,   200,   201,   202,   203,
     204,     0,   205,   206,   189,   190,   191,   192,   193,     0,
     194,     0,     0,     0,     0,     0,     0,   189,   190,   191,
     192,   193,     0,   194,     0,     0,     0,   195,     0,     0,
       0,     0,     0,     0,   196,     0,     0,     0,     0,     0,
     195,     0,     0,     0,     0,     0,     0,   196,     0,     0,
       0,   197,     0,   198,   199,   200,   201,   202,   203,   204,
       0,   205,   206,     0,   197,   575,   198,   199,   200,   201,
     202,   203,   204,     0,   205,   206,     0,     0,   620,   189,
     190,   191,   192,   193,     0,   194,     0,     0,     0,     0,
       0,     0,   189,   190,   191,   192,   193,     0,   194,     0,
       0,     0,   195,     0,     0,     0,     0,     0,     0,   196,
       0,     0,     0,     0,     0,   195,     0,     0,     0,     0,
       0,     0,   196,     0,     0,     0,   197,     0,   198,   199,
     200,   201,   202,   203,   204,     0,   205,   206,     0,   197,
     627,   198,   199,   200,   201,   202,   203,   204,     0,   205,
     206,     0,     0,   663,   189,   190,   191,   192,   193,     0,
     194,     0,     0,     0,     0,     0,     0,   189,   190,   191,
     192,   193,     0,   194,     0,     0,     0,   195,     0,     0,
       0,     0,     0,     0,   196,     0,     0,     0,     0,     0,
     195,     0,     0,     0,     0,     0,     0,   196,     0,     0,
       0,   197,     0,   198,   199,   200,   201,   202,   203,   204,
       0,   205,   206,     0,   197,   684,   198,   199,   200,   201,
     202,   203,   204,     0,   205,   206,     0,     0,   688,   189,
     190,   191,   192,   193,     0,   194,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   493,     0,     0,     0,     0,
     611,     0,   195,     0,     0,     0,     0,     0,     0,   196,
       0,     0,     0,     0,     0,     0,     0,     0,   189,   190,
     191,   192,   193,     0,   194,     0,   197,     0,   198,   199,
     200,   201,   202,   203,   204,     0,   205,   206,   494,   426,
       0,   195,     0,     0,     0,     0,     0,     0,   196,     0,
       0,     0,     0,     0,     0,     0,     0,   189,   190,   191,
     192,   193,     0,   194,     0,   197,     0,   198,   199,   200,
     201,   202,   203,   204,     0,   205,   206,   427,   428,     0,
     195,     0,     0,     0,     0,     0,     0,   196,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   189,   190,   191,
     192,   193,     0,   194,   197,     0,   198,   199,   200,   201,
     202,   203,   204,   493,   205,   206,   429,     0,     0,     0,
     195,     0,     0,     0,     0,     0,     0,   196,     0,     0,
       0,     0,     0,     0,     0,     0,   189,   190,   191,   192,
     193,     0,   194,     0,   197,     0,   198,   199,   200,   201,
     202,   203,   204,     0,   205,   206,   494,   527,     0,   195,
       0,     0,     0,     0,     0,     0,   196,     0,     0,     0,
       0,     0,     0,   189,   190,   191,   192,   193,     0,   194,
       0,     0,     0,   197,     0,   198,   199,   200,   201,   202,
     203,   204,     0,   205,   206,   528,   195,     0,   591,     0,
       0,     0,     0,   196,     0,     0,     0,     0,     0,     0,
     189,   190,   191,   192,   193,     0,   194,     0,     0,     0,
     197,     0,   198,   199,   200,   201,   202,   203,   204,     0,
     205,   206,   592,   195,     0,   629,     0,     0,     0,     0,
     196,     0,     0,   189,   190,   191,   192,   193,     0,   194,
       0,     0,     0,     0,     0,     0,     0,   197,     0,   198,
     199,   200,   201,   202,   203,   204,   195,   205,   206,   630,
       0,     0,     0,   196,     0,     0,   189,   190,   191,   192,
     193,     0,   194,     0,     0,     0,     0,     0,     0,     0,
     197,     0,   198,   199,   200,   201,   202,   203,   204,   195,
     205,   206,   207,     0,     0,     0,   196,     0,     0,   189,
     190,   191,   192,   193,     0,   194,     0,     0,     0,     0,
       0,     0,     0,   197,     0,   198,   199,   200,   201,   202,
     203,   204,   195,   205,   206,   266,     0,     0,     0,   196,
       0,     0,   189,   190,   191,   192,   193,     0,   194,     0,
       0,     0,     0,     0,     0,     0,   197,     0,   198,   199,
     200,   201,   202,   203,   204,   195,   205,   206,   374,     0,
       0,     0,   196,     0,     0,   189,   190,   191,   192,   193,
       0,   194,     0,     0,     0,     0,     0,     0,     0,   197,
       0,   198,   199,   200,   201,   202,   203,   204,   195,   205,
     206,   414,     0,     0,     0,   196,     0,     0,   189,   190,
     191,   192,   193,     0,   194,     0,     0,     0,     0,     0,
       0,     0,   197,     0,   198,   199,   200,   201,   202,   203,
     204,   195,   205,   206,   452,     0,     0,     0,   196,     0,
       0,   189,   190,   191,   192,   193,     0,   194,     0,     0,
       0,     0,     0,     0,     0,   197,     0,   198,   199,   200,
     201,   202,   203,   204,   195,   205,   206,   470,     0,     0,
       0,   196,     0,     0,   189,   190,   191,   192,   193,     0,
     194,     0,     0,     0,     0,     0,     0,     0,   197,     0,
     198,   199,   200,   201,   202,   203,   204,   195,   205,   206,
     512,     0,     0,     0,   196,     0,     0,   189,   190,   191,
     192,   193,     0,   194,     0,     0,     0,     0,     0,     0,
       0,   197,     0,   198,   199,   200,   201,   202,   203,   204,
     195,   205,   206,   513,     0,     0,     0,   196,     0,     0,
     189,   190,   191,   192,   193,     0,   194,     0,     0,     0,
       0,     0,     0,     0,   197,     0,   198,   199,   200,   201,
     202,   203,   204,   195,   205,   206,   577,     0,     0,     0,
     196,     0,     0,   189,   190,   191,   192,   193,     0,   194,
       0,     0,     0,     0,     0,     0,     0,   197,     0,   198,
     199,   200,   201,   202,   203,   204,   195,   205,   206,   578,
       0,     0,     0,   196,     0,     0,   189,   190,   191,   192,
     193,     0,   194,     0,     0,     0,     0,     0,     0,     0,
     197,     0,   198,   199,   200,   201,   202,   203,   204,   195,
     205,   206,   623,     0,     0,     0,   196,     0,     0,     0,
       0,     0,     0,   261,     0,   189,   190,   191,   192,   193,
       0,   194,     0,   197,     0,   198,   199,   200,   201,   202,
     203,   204,     0,   205,   206,   277,     0,     0,   195,     0,
       0,     0,     0,     0,     0,   196,     0,     0,     0,     0,
       0,     0,     0,   189,   190,   191,   192,   193,     0,   194,
       0,     0,   197,     0,   198,   199,   200,   201,   202,   203,
     204,     0,   205,   206,   413,     0,   195,     0,     0,     0,
       0,     0,     0,   196,     0,     0,   189,   190,   191,   192,
     193,     0,   194,     0,     0,     0,     0,     0,     0,     0,
     197,     0,   198,   199,   200,   201,   202,   203,   204,   195,
     205,   206,     0,     0,     0,     0,   196,     0,     0,     0,
       0,     0,     0,   496,   189,   190,   191,   192,   193,     0,
     194,     0,     0,   197,     0,   198,   199,   200,   201,   202,
     203,   204,     0,   205,   206,     0,     0,   195,     0,     0,
       0,     0,     0,     0,   196,     0,     0,     0,     0,     0,
       0,     0,   189,   190,   191,   192,   193,     0,   194,     0,
     501,   197,     0,   198,   199,   200,   201,   202,   203,   204,
       0,   205,   206,   307,     0,   195,     0,     0,     0,     0,
       0,     0,   196,     0,     0,     0,     0,     0,     0,     0,
     189,   190,   191,   192,   193,     0,   194,     0,     0,   197,
       0,   198,   199,   200,   201,   202,   203,   204,     0,   205,
     206,   507,     0,   195,     0,     0,     0,     0,     0,     0,
     196,     0,     0,     0,     0,     0,   189,   190,   191,   192,
     193,     0,   194,     0,     0,     0,     0,   197,     0,   198,
     199,   200,   201,   202,   203,   204,     0,   205,   206,   195,
       0,   643,     0,     0,     0,     0,   196,     0,     0,   189,
     190,   191,   192,   193,     0,   194,     0,     0,     0,     0,
       0,     0,     0,   197,     0,   198,   199,   200,   201,   202,
     203,   204,   195,   205,   206,     0,     0,     0,     0,   196,
     189,   190,   191,   192,   193,     0,   194,     0,     0,     0,
     189,   190,     0,     0,   193,     0,   197,     0,   198,   199,
     200,   201,   202,   203,   204,     0,   205,   206,     0,     0,
     196,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -292,     0,   198,
     199,   200,   201,   202,   203,   204,     0,   205,   206,   198,
     199,   200,   201,   202,   203,   204,     0,   205,   206
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-451)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-292)))

static const yytype_int16 yycheck[] =
{
       0,    13,    35,    52,     0,   160,    23,   352,   217,    15,
      10,   209,   344,   138,   117,    49,    16,   404,    40,     3,
      16,    67,    35,    23,    33,   475,    41,    11,    12,    66,
      67,    18,    43,    18,   232,    35,     3,     3,    84,    14,
      67,    17,    67,    43,     8,    29,    83,    11,    12,    86,
      50,    68,    52,    69,    79,    70,    83,    79,    73,    81,
      11,     0,    29,    29,     3,    78,     5,    83,    68,    83,
      83,    85,    11,    12,    83,     7,    60,    84,     8,    11,
      12,    11,    12,   132,    68,    17,    25,   212,   213,   214,
      29,   216,   542,    60,    60,    79,    43,    84,   253,    84,
      84,   107,    41,    87,    68,   117,    82,    71,    83,    73,
      49,    67,    79,   500,    80,    79,    55,   449,    57,    67,
      84,    60,    61,    79,   279,   228,   229,    79,     8,    68,
     130,    79,   132,   133,    70,    79,    68,    73,    68,     3,
      79,    71,   148,    73,    80,    84,     3,    79,    80,    79,
     150,    40,    84,   308,    84,    85,    40,    14,   356,   284,
     160,     3,     3,     7,     5,    29,    79,    11,    12,     0,
      11,    12,    29,   173,    79,   562,   563,   211,    50,   179,
     214,    79,    11,    12,    25,    16,   133,    29,    29,    78,
      78,    71,    23,    73,    78,    83,    60,     7,    79,   544,
      41,    11,    12,    60,    79,   217,    70,     8,    49,    73,
      23,    67,    82,   160,    11,    12,   228,   229,    60,    60,
     220,    79,    33,    34,    68,    81,    84,    68,    78,    67,
      86,   237,    82,    83,   240,    79,    80,    68,    79,    68,
      84,    82,   242,    84,   589,    83,    69,    15,    86,   249,
      79,   596,   286,   253,    79,    84,   256,   644,    68,   206,
     260,    16,   296,    76,    77,   276,   277,    78,     8,    79,
      71,    68,    73,    16,    84,   275,   276,   277,     3,   279,
     297,   406,    79,     3,    81,     3,    78,    84,   633,    14,
      15,    83,    79,    66,    67,   295,    80,   297,    66,    83,
     300,   173,    70,    67,    29,    73,   253,    84,   308,    29,
      83,    29,   312,   260,   439,    83,    63,    81,     0,    23,
      78,    41,    86,    41,    81,    83,    83,   344,   537,   276,
     277,    78,   279,    84,    16,    60,    83,    88,    82,    83,
      60,    23,    60,    70,   344,    78,    73,    80,   295,    79,
     383,    78,   352,   508,   354,     3,    70,     5,   354,    73,
      63,   308,    76,    11,    12,    23,    70,    71,    72,    73,
      74,    85,    76,    77,   385,    78,   376,    25,    66,    67,
      83,    29,   382,   383,   395,   385,    68,   387,   388,   220,
     390,    82,    83,    41,    70,   395,    70,    73,    79,    73,
     525,    49,   402,   403,    80,   179,    79,    55,    83,    57,
      85,    66,    60,    61,    89,    73,    74,    79,    76,    77,
      68,    12,   422,    68,     3,    70,     5,   552,    73,    79,
       3,    79,   449,   482,    80,    79,    84,    83,   385,    80,
     387,   388,    83,     7,    80,    86,    25,    83,   395,   449,
      29,    83,    79,    85,    27,    28,    29,   457,    83,    79,
      85,   457,    41,    36,   475,    38,   297,    40,   387,   388,
      49,    44,    45,    80,   474,   475,    83,    50,   478,   479,
      53,    60,   482,    80,   484,    88,    83,    60,   613,    85,
      78,    64,    80,    24,    78,    83,    80,   497,    80,    83,
     517,    83,    80,    80,    80,    83,    83,    83,   508,    82,
      78,    80,    80,   344,   514,   515,   516,   517,    83,   519,
      85,   352,    82,   354,   524,   537,   300,    85,   475,    80,
     530,   542,    83,    80,    80,    79,    83,    83,   220,    18,
      80,   541,   542,    83,   544,    79,    10,    80,   559,   560,
      83,    80,    80,    80,    83,    83,    83,    80,    79,   559,
     560,   508,    80,    80,    80,    83,    83,    83,   568,   569,
     570,    35,    85,    80,    38,   575,    83,    41,    42,   579,
      44,    83,    85,    85,    48,    49,    50,    51,    52,   589,
      80,   591,    85,    83,   594,   542,   596,    83,   594,   599,
      86,     3,   474,     5,    80,    85,    79,    83,   608,    11,
      12,    80,   559,   560,    83,   297,    79,    67,   449,   619,
     620,   211,    14,    25,   214,    86,   457,    29,    79,   629,
      81,    83,   632,   633,    67,   635,   632,   637,   638,    41,
      79,   637,   514,   643,   516,    86,   646,    49,    16,   221,
      65,   382,   524,   376,   654,   242,   656,   310,    60,   133,
     656,   560,   344,   234,   664,   129,    68,   667,   132,   541,
     352,   286,   354,   229,   288,    -1,   206,    79,   517,    -1,
      82,    -1,    84,    -1,   684,    -1,   517,   687,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   166,   167,    -1,    -1,    -1,   171,    -1,    -1,
     174,   175,    -1,   544,    -1,    -1,    -1,    -1,    -1,   591,
      -1,    -1,    -1,    -1,    -1,   189,   190,   191,   192,    -1,
     194,    -1,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,    -1,    -1,   208,    -1,   210,   211,   620,    -1,
      -1,   215,    -1,    -1,    -1,    -1,    -1,   629,   589,    -1,
      -1,    -1,    -1,   594,    -1,   596,    -1,   449,    -1,    -1,
     544,   643,    -1,    -1,   646,   457,    -1,   241,    -1,     8,
      -1,    -1,    11,    12,    -1,    -1,    -1,    -1,    17,    -1,
      -1,    -1,    -1,    -1,   568,   569,   570,   261,   262,   263,
      -1,   632,   633,    -1,    -1,   579,   637,    -1,    -1,   273,
      -1,    -1,   684,    -1,   278,   589,    -1,    -1,   282,    -1,
      -1,    -1,    -1,    -1,   288,   656,    -1,   291,    -1,   293,
      -1,    -1,   296,    -1,     3,   517,    -1,    -1,    -1,    68,
     304,    -1,    71,   307,    73,    -1,   310,   311,    -1,   313,
      79,   315,    -1,    -1,    -1,    84,    85,    -1,    27,    28,
      29,   635,   544,    -1,    -1,    -1,    -1,    36,    -1,    38,
      -1,    40,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
     654,    50,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
     664,    60,    -1,   667,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   589,    -1,    78,
      -1,    -1,   594,   687,   596,    -1,    -1,    -1,    -1,   383,
     384,    -1,     3,    -1,     5,   389,    -1,   391,    -1,    -1,
      11,    12,     3,     4,     5,     6,    -1,     8,    -1,    10,
      11,    12,    -1,   407,    25,    -1,    -1,    -1,    29,   413,
     632,   633,    -1,    -1,    25,   637,    -1,    -1,    29,   423,
      41,    -1,   426,    -1,   428,    -1,    37,    38,    49,    40,
      41,    -1,    -1,    -1,   656,    46,    47,    48,    49,    60,
      51,    52,    -1,    54,    -1,    -1,    -1,    68,    59,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      71,    82,    -1,    84,    -1,    -1,    -1,    -1,    79,   473,
      81,    -1,    -1,    84,    85,    -1,    -1,    -1,   482,    -1,
      -1,    -1,   486,   487,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   496,    -1,    -1,     0,    -1,   501,    -1,   503,
      -1,    -1,    -1,   507,     9,    -1,   510,    12,    13,    14,
      15,    16,    -1,    -1,   518,    -1,    -1,   521,    -1,    -1,
      -1,    -1,    -1,   527,    -1,   529,    -1,    -1,    -1,   533,
      -1,    -1,    -1,     3,    -1,     5,   540,    -1,    43,    -1,
      45,    11,    12,    -1,    -1,   549,    -1,   551,     3,    -1,
       5,   555,   556,    -1,   558,    25,    11,    12,    -1,    29,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    41,    -1,    15,    29,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      60,    -1,    -1,     3,    49,     5,    -1,    -1,    68,   603,
     105,    43,   107,    -1,    -1,    60,    -1,   611,    78,    79,
      -1,    -1,   117,    68,    84,    25,    -1,    -1,    -1,    29,
     624,    -1,   626,   128,    79,   130,   131,    82,   133,    84,
      -1,    41,    -1,    -1,    -1,   639,    -1,    -1,    -1,    49,
      -1,   146,    -1,   148,    -1,   649,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    -1,   160,    -1,   661,   662,    -1,
      70,    -1,    -1,    73,   668,   107,    -1,   671,    -1,    -1,
      -1,   675,    -1,     3,    -1,     5,   118,    -1,   682,    -1,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,   193,    -1,
     195,   133,    -1,    -1,    -1,    25,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,   209,    -1,   148,    -1,    -1,     3,
      -1,    41,   217,   218,    -1,   220,   221,    -1,   160,    49,
      -1,    -1,    -1,   228,   229,   230,   231,   232,    -1,    -1,
      60,    -1,    -1,    27,    28,    29,    -1,   242,    68,    -1,
      -1,    -1,    36,    -1,    38,    -1,    40,    -1,   253,    79,
      44,    45,    -1,    -1,    84,   260,    50,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    60,     0,    -1,    -1,
      64,   276,   277,    -1,   279,    -1,     9,    -1,    11,    12,
      13,    14,    15,    16,    78,    -1,    -1,    -1,    -1,    -1,
     295,    -1,    -1,    -1,    -1,   237,    -1,    -1,   240,    -1,
       3,    -1,     5,   308,    -1,    -1,    -1,    -1,    11,    12,
      43,   253,    45,    -1,    -1,    -1,    -1,    -1,   260,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    65,    -1,   276,   277,    -1,   279,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,   352,    -1,   354,
      -1,   356,    -1,   295,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,   308,   372,    -1,    -1,
      -1,   376,   105,    -1,   107,    78,    79,    -1,    -1,     3,
     385,    84,   387,   388,   117,    -1,    -1,    -1,    -1,    -1,
     395,    -1,    -1,    -1,    -1,   128,    -1,   130,   131,    -1,
     133,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    36,   146,    38,   148,    40,    -1,    -1,    -1,
      44,    45,    -1,    -1,    -1,    -1,    50,   160,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      64,    -1,    -1,   385,    -1,   387,   388,    -1,    -1,    -1,
     455,    -1,   457,   395,    78,    -1,    -1,    -1,    -1,    -1,
     193,    -1,   195,    -1,    -1,     0,    -1,    -1,    -1,    -1,
     475,    -1,    -1,    -1,     9,    -1,   209,    12,    13,    14,
      15,    16,    -1,    -1,   217,    -1,    -1,   220,   221,    -1,
      -1,    -1,    -1,    -1,    -1,   228,   229,   230,   231,   232,
      -1,    -1,    -1,   508,    -1,    -1,    -1,    -1,    -1,   242,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,    -1,    -1,    -1,     3,   260,    -1,    -1,
      65,    -1,   537,   475,    -1,    -1,    -1,   542,    -1,   544,
      -1,    -1,    -1,   276,   277,    -1,   279,    -1,    -1,    -1,
      27,    28,    29,    -1,   559,   560,    -1,    -1,    -1,    36,
      -1,    38,   295,    40,    -1,    -1,   508,    44,    45,    -1,
     105,    -1,   107,    50,    -1,   308,    53,    -1,    -1,    -1,
      -1,    -1,   117,    60,   589,    -1,    -1,    64,    -1,   594,
      -1,   596,    -1,   128,    -1,   130,   131,    -1,    -1,    -1,
     542,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   146,    -1,   148,    -1,    -1,    -1,   559,   560,   352,
      -1,   354,    -1,   356,    -1,    -1,    -1,   632,   633,    -1,
      -1,    -1,   637,    -1,    -1,    -1,    -1,    -1,    -1,   372,
      -1,    -1,     3,   376,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   656,   385,    -1,   387,   388,    -1,    -1,   193,    -1,
     195,    -1,   395,    -1,    -1,    -1,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,   209,    36,    -1,    38,    -1,    40,
      -1,    -1,   217,    44,    45,   220,   221,    -1,    -1,    50,
      -1,    -1,    53,   228,   229,   230,   231,   232,    -1,    60,
      -1,    -1,    -1,    64,    -1,    -1,    -1,   242,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,   253,    10,
      11,    12,    -1,    -1,   457,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    29,    -1,
      -1,    -1,   475,    -1,   279,    -1,    37,    38,    -1,    40,
      41,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    -1,
      51,    52,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    -1,    -1,   508,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      81,    -1,    -1,    84,    -1,    -1,    -1,    88,     3,    -1,
      -1,    -1,    -1,    -1,   537,    -1,    -1,    -1,    -1,   542,
      -1,   544,    -1,    -1,    -1,    -1,    -1,   352,    -1,   354,
      -1,   356,    27,    28,    29,    -1,   559,   560,    -1,    -1,
      -1,    36,    -1,    38,    -1,    40,    -1,   372,    -1,    44,
      45,   376,    -1,    -1,     3,    50,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    60,   589,    -1,    -1,    64,
      -1,   594,    -1,   596,    -1,    -1,    -1,    -1,    27,    28,
      29,    -1,    -1,    78,    -1,    -1,    -1,    36,    -1,    38,
      -1,    40,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    -1,    -1,    -1,   632,
     633,    60,     3,     4,   637,    64,     7,     8,    -1,    -1,
      11,    12,    -1,    -1,    -1,    -1,    17,    -1,    -1,    78,
      -1,    -1,   457,   656,    25,    -1,    27,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      41,    42,    43,    -1,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    -1,    56,    57,    -1,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    68,    -1,    70,
      71,    -1,    73,    -1,    -1,    -1,    -1,    -1,    79,    80,
      81,    -1,    -1,    84,    -1,    -1,    87,    -1,     3,     4,
      -1,    -1,    -1,     8,    -1,    -1,    11,    12,    -1,    -1,
      -1,    -1,   537,    -1,    -1,    -1,    -1,    -1,    -1,   544,
      25,    -1,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    40,    41,    42,    43,    -1,
      45,    46,    47,    48,    49,    50,    51,    -1,    53,    54,
      -1,    56,    57,    -1,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    68,   589,    70,    71,    -1,    73,   594,
      -1,   596,    -1,    -1,    79,    80,    81,    -1,    -1,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,
       8,    -1,    -1,    11,    12,    -1,    -1,   632,   633,    -1,
      -1,    -1,   637,    -1,    -1,    -1,    -1,    25,    -1,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,   656,    40,    41,    42,    43,    -1,    45,    46,    47,
      48,    49,    50,    51,    -1,    53,    54,    -1,    56,    57,
      -1,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      68,    -1,    70,    71,    -1,    73,    -1,    -1,    -1,     3,
       4,    79,    -1,    81,     8,    -1,    84,    11,    12,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    40,    41,    42,    43,
      -1,    45,    46,    47,    48,    49,    50,    51,    -1,    53,
      54,    -1,    56,    57,    -1,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    68,    -1,    70,    71,    -1,    73,
      -1,    -1,    -1,     3,     4,    79,    -1,    81,     8,    -1,
      84,    11,    12,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      40,    41,    42,    43,    -1,    45,    46,    47,    48,    49,
      50,    51,    -1,    53,    54,    -1,    56,    57,    -1,    59,
      60,    61,    62,    63,    64,    65,     3,    -1,    68,    -1,
      70,    71,    -1,    73,    11,    12,    -1,    -1,    -1,    79,
      -1,    81,    -1,    -1,    84,    -1,    -1,    87,    25,    -1,
      27,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    40,    41,    42,    43,    -1,    45,    46,
      47,    48,    49,    50,    51,    -1,    53,    54,    -1,    56,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,    -1,
       3,    68,    -1,    70,     7,    -1,    -1,    -1,    11,    12,
      -1,    -1,    79,    -1,    81,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    25,    -1,    27,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    40,    41,    42,
      43,    -1,    45,    46,    47,    48,    49,    50,    51,    -1,
      53,    54,    -1,    56,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,     3,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    11,    12,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    84,    -1,    -1,    -1,    25,    -1,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      40,    41,    42,    43,    -1,    45,    46,    47,    48,    49,
      50,    51,    -1,    53,    54,    -1,    56,    57,    -1,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    68,     3,
       4,     5,     6,    -1,     8,    -1,    10,    11,    12,    79,
      -1,    81,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    -1,    40,    41,    -1,    -1,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
      64,     3,     4,     5,     6,    -1,     8,    71,    10,    11,
      12,    -1,    -1,    -1,    -1,    79,    -1,    81,    82,    -1,
      84,    -1,    -1,    25,    -1,    -1,    -1,    29,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,    41,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,     3,
       4,     5,     6,    -1,     8,    -1,    10,    11,    12,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,
      -1,    25,    84,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    37,    38,    -1,    40,    41,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    -1,
      54,    -1,    -1,    -1,    -1,    59,    60,     3,     4,     5,
       6,    -1,     8,    -1,    10,    11,    12,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    -1,    25,
      84,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    37,    38,    -1,    40,    41,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    -1,    54,    -1,
      -1,    -1,    -1,    59,    60,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    81,    -1,    25,    84,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    -1,    40,    41,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    -1,    51,    52,    -1,    54,    -1,    -1,    -1,
      -1,    59,    60,     3,     4,     5,     6,    -1,     8,    -1,
      10,    11,    12,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    -1,    81,    -1,    25,    84,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,
      40,    41,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,    59,
      60,     3,     4,     5,     6,    -1,     8,    -1,    10,    11,
      12,    71,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      -1,    81,    -1,    25,    84,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,    41,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,
      -1,    25,    84,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    -1,    40,    41,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    -1,    51,    52,    -1,
      54,    -1,    -1,    -1,    -1,    59,    60,     3,     4,     5,
       6,    -1,     8,    -1,    10,    11,    12,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    -1,    25,
      84,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    -1,    40,    41,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    -1,    51,    52,    -1,    54,    -1,
      -1,    -1,    -1,    59,    60,     3,     4,     5,     6,    -1,
       8,    -1,    10,    11,    12,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    81,    -1,    25,    84,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    -1,    40,    41,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    -1,    51,    52,    -1,    54,    -1,    -1,    -1,
      -1,    59,    60,     3,    -1,     5,    -1,    -1,    -1,    -1,
      -1,    11,    12,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    81,    -1,    25,    84,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    38,    -1,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      50,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      60,     3,    -1,     5,    64,    -1,    -1,    -1,    68,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    82,    25,    84,    27,    28,    29,     3,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    38,    -1,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    50,    -1,
      -1,    53,    27,    28,    29,    -1,    -1,    -1,    60,    -1,
      -1,    36,    64,    38,    -1,    40,    68,     3,    -1,    44,
      45,    -1,    -1,    -1,    -1,    50,    -1,    79,    53,    -1,
      82,    -1,    84,    -1,    -1,    60,    -1,    -1,    -1,    64,
      -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    38,    78,    40,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    15,    -1,    -1,    64,    19,
      20,    21,    22,    23,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    15,    78,    -1,    -1,    19,    20,    21,    22,    23,
      -1,    25,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    19,
      20,    21,    22,    23,    -1,    49,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    -1,    -1,
      80,    -1,    66,    83,    68,    69,    70,    71,    72,    73,
      74,    -1,    76,    77,    -1,    -1,    80,    -1,    -1,    83,
      19,    20,    21,    22,    23,    -1,    25,    -1,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    -1,    -1,
      -1,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    25,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77,    40,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    86,    49,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    42,    76,    77,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    86,    -1,    19,    20,    21,
      22,    23,    -1,    25,    -1,    -1,    -1,    -1,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    -1,    76,    77,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    86,    -1,
      19,    20,    21,    22,    23,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    42,    76,    77,    -1,    -1,    -1,    -1,
      49,    83,    -1,    85,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77,    -1,
      42,    -1,    -1,    -1,    83,    -1,    85,    49,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    42,    76,    77,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    85,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    85,    49,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    42,    76,    77,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    85,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    25,    -1,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77,    42,
      -1,    -1,    -1,    82,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    -1,    25,    -1,    27,    82,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    40,    41,    42,    43,    -1,    45,    46,    47,    48,
      49,    50,    51,    -1,    53,    54,    -1,    56,    57,    -1,
      59,    60,    61,    62,    63,    64,    65,    15,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    25,    -1,    15,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    25,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    -1,    76,    77,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    15,
      76,    77,    -1,    19,    20,    21,    22,    23,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      -1,    25,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    -1,    76,    77,    -1,    -1,    80,    19,    20,    21,
      22,    23,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    25,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    -1,    66,    80,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77,    -1,
      -1,    80,    19,    20,    21,    22,    23,    -1,    25,    -1,
      -1,    -1,    16,    -1,    -1,    19,    20,    21,    22,    23,
      -1,    25,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      77,    -1,    66,    80,    68,    69,    70,    71,    72,    73,
      74,    -1,    76,    77,    19,    20,    21,    22,    23,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      -1,    76,    77,    -1,    66,    80,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    -1,    -1,    80,    19,
      20,    21,    22,    23,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    -1,    25,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    -1,    66,
      80,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      77,    -1,    -1,    80,    19,    20,    21,    22,    23,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      -1,    76,    77,    -1,    66,    80,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    -1,    -1,    80,    19,
      20,    21,    22,    23,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    25,    -1,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    78,    40,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    -1,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    78,    40,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    35,    76,    77,    78,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    25,    -1,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    78,    40,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    25,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    78,    42,    -1,    44,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    25,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    78,    42,    -1,    44,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    19,    20,    21,    22,    23,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    42,    76,    77,    78,
      -1,    -1,    -1,    49,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    42,
      76,    77,    78,    -1,    -1,    -1,    49,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    42,    76,    77,    78,    -1,    -1,    -1,    49,
      -1,    -1,    19,    20,    21,    22,    23,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    42,    76,    77,    78,    -1,
      -1,    -1,    49,    -1,    -1,    19,    20,    21,    22,    23,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    42,    76,
      77,    78,    -1,    -1,    -1,    49,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    42,    76,    77,    78,    -1,    -1,    -1,    49,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    42,    76,    77,    78,    -1,    -1,
      -1,    49,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    42,    76,    77,
      78,    -1,    -1,    -1,    49,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      42,    76,    77,    78,    -1,    -1,    -1,    49,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    42,    76,    77,    78,    -1,    -1,    -1,
      49,    -1,    -1,    19,    20,    21,    22,    23,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    42,    76,    77,    78,
      -1,    -1,    -1,    49,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    42,
      76,    77,    78,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    19,    20,    21,    22,    23,
      -1,    25,    -1,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    25,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    -1,    76,    77,    40,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    42,
      76,    77,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    19,    20,    21,    22,    23,    -1,
      25,    -1,    -1,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    -1,    25,    -1,
      65,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      -1,    76,    77,    40,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    25,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      77,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    25,    -1,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77,    42,
      -1,    44,    -1,    -1,    -1,    -1,    49,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    42,    76,    77,    -1,    -1,    -1,    -1,    49,
      19,    20,    21,    22,    23,    -1,    25,    -1,    -1,    -1,
      19,    20,    -1,    -1,    23,    -1,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,    11,    12,    25,    29,    41,    49,    55,
      57,    60,    61,    68,    79,    84,    91,    92,    93,    94,
      97,   100,   102,   114,   137,   138,   146,   147,   148,   149,
     114,     4,     6,     8,    10,    31,    37,    38,    40,    46,
      47,    48,    50,    51,    52,    54,    59,    60,    71,    79,
      81,    84,    95,    96,   120,   137,   138,   140,   141,   143,
     144,   147,   148,   149,   137,    81,    98,    99,   114,     3,
      25,    27,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    40,    41,    42,    43,    45,    46,    47,    48,
      49,    50,    51,    53,    54,    56,    57,    59,    60,    61,
      62,    63,    64,    65,    70,    79,    81,    84,   114,   115,
     118,   150,   151,     7,   114,   116,   119,   145,    71,    73,
     114,   139,   140,     0,    92,    70,    73,   146,    84,    67,
      79,    68,    95,    79,    38,   120,   126,   149,    79,   120,
     120,     3,    29,    60,    70,    73,    79,    81,    84,    87,
     112,   114,   139,   143,   149,   150,   120,   114,   120,    80,
      88,   120,   124,   125,   131,   132,   145,    27,    28,    36,
      38,    40,    44,    45,    50,    53,    64,    82,   106,   110,
     120,   122,   123,   149,    85,   120,   121,    35,    96,    19,
      20,    21,    22,    23,    25,    42,    49,    66,    68,    69,
      70,    71,    72,    73,    74,    76,    77,    78,    79,    84,
      79,    79,    79,    79,    79,    18,    84,    67,    84,    99,
      81,    83,   146,    69,    80,    82,    85,    69,    83,    79,
      15,    66,    83,    80,    83,   115,   140,    16,    76,    85,
      16,    67,    79,   114,   117,   120,    87,   103,   104,   114,
     149,   114,    35,    79,   108,   109,   112,   129,   130,   149,
      79,    56,    33,    83,   120,   121,    78,    17,    80,    17,
      82,    17,    85,    41,   149,    66,    79,    39,    41,    79,
     129,   149,    15,    80,    83,    80,    83,    80,    83,   120,
     120,    40,    78,    40,    78,    79,    79,    79,    38,    40,
     110,   149,   120,   120,    79,    82,   106,    40,    86,    82,
      83,    18,    86,    83,    85,    89,   120,   120,   120,   120,
     114,   120,   114,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,     3,   142,   143,   151,   120,   117,   120,
     120,   125,   121,   121,    78,   121,   125,   120,   121,   118,
     101,   138,    78,   102,   105,    98,    79,   115,   115,   119,
     114,   114,   117,   116,    88,    73,   139,    85,    73,   139,
     120,   104,    83,    85,    78,    80,    83,   149,    78,   114,
     129,   149,    78,    80,    14,    15,    80,    83,    24,    67,
      83,    86,   120,   120,   120,    80,    80,    82,    85,   120,
     149,    80,   112,   112,   120,    80,    86,    67,   120,   121,
     124,   120,   131,    40,    78,   120,   120,   109,   120,   133,
     134,   146,    79,    79,    64,    78,    40,    78,    40,    78,
     120,   120,   129,   120,   123,   120,   149,   120,   120,    84,
      88,    80,    85,    80,    80,    80,    80,    80,   134,    78,
      80,    80,    78,    85,    78,    83,    85,   105,    82,   102,
     117,    80,    80,    80,    80,    80,    85,    85,    85,    85,
      78,    80,   114,    67,    81,    86,   103,    80,    83,    79,
     108,   149,    95,   120,   112,    40,    79,    81,   130,   130,
     120,   149,   120,    35,    78,   136,    56,   112,   113,   127,
     128,    65,    80,    41,   136,   121,   120,    40,    86,    80,
      15,   120,    78,    78,    80,    80,    80,    83,    67,    79,
     120,    79,   120,   120,    80,    78,    82,    40,    78,    14,
      83,    85,   121,    79,    80,   134,   138,    67,    82,    80,
      67,    81,    86,   120,   110,   128,   111,   149,   149,    67,
      78,    14,    79,   120,   120,    16,    86,   120,    67,    83,
      83,   136,   120,   120,    80,   120,   129,   120,   110,   110,
     110,   133,   120,   135,   149,    80,   120,    78,    78,   110,
     121,   120,   120,   149,    85,   120,    80,   118,   120,   110,
     128,    44,    78,    82,   105,   149,    63,    78,    80,    83,
     120,   120,   121,    15,    82,   120,   120,   120,   112,   127,
     136,    40,   136,    78,    80,    78,   107,    78,    80,    83,
      80,    78,    82,    78,    83,    85,    14,    80,    78,    44,
      78,    82,   105,    63,    78,   110,    82,   105,    83,    86,
     149,    80,   120,    44,   120,   121,    33,    34,    78,    67,
     149,    78,   120,   120,   110,    82,   105,    78,    78,   149,
     120,    79,    81,    80,   110,   136,    80,   110,    79,   120,
      85,    83,    85,    78,    78,    86,   120,   120,    78,   120,
     120,   120,    15,    82,    80,    85,   120,   110,    80
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
#line 131 "amber.yy"
    {consume_decl((yyvsp[(1) - (1)]));                                }
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 132 "amber.yy"
    {consume_decl((yyvsp[(2) - (2)]));                                }
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 145 "amber.yy"
    {(yyval) = mk_subtype_decl((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                    }
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 150 "amber.yy"
    {(yyval) = mk_test_block(true, (yyvsp[(2) - (3)]));                    }
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 151 "amber.yy"
    {(yyval) = mk_test_block(false, (yyvsp[(3) - (4)]));                   }
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 155 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 156 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                             }
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 160 "amber.yy"
    {(yyval) = mk_test_instr_bool((yyvsp[(1) - (2)]));                     }
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 161 "amber.yy"
    {(yyval) = mk_test_instr_print((yyvsp[(2) - (3)]));                    }
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 162 "amber.yy"
    {(yyval) = mk_test_instr_loop((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                 }
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 163 "amber.yy"
    {(yyval) = mk_test_instr_assignment((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));           }
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 169 "amber.yy"
    {(yyval) = mk_using_block((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                     }
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 170 "amber.yy"
    {(yyval) = mk_using_block((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                     }
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 174 "amber.yy"
    {(yyval) = mk_signature((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));                       }
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 175 "amber.yy"
    {(yyval) = mk_signature((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(1) - (5)]));                   }
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 178 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 179 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]));                             }
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 185 "amber.yy"
    {(yyval) = mk_typedef((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                         }
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 186 "amber.yy"
    {(yyval) = mk_typedef_par((yyvsp[(2) - (8)]), (yyvsp[(4) - (8)]), (yyvsp[(7) - (8)]));                 }
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 190 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 191 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             }
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 197 "amber.yy"
    {(yyval) = mk_fndef((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                       }
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 198 "amber.yy"
    {(yyval) = mk_fndef((yyvsp[(1) - (8)]), (yyvsp[(2) - (8)]), (yyvsp[(4) - (8)]), (yyvsp[(7) - (8)]));                   }
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 199 "amber.yy"
    {(yyval) = mk_fndef((yyvsp[(1) - (10)]), (yyvsp[(2) - (10)]), (yyvsp[(4) - (10)]), mk_expr_let((yyvsp[(7) - (10)]), (yyvsp[(9) - (10)])));  }
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 200 "amber.yy"
    {(yyval) = mk_fndef_proc((yyvsp[(1) - (8)]), (yyvsp[(2) - (8)]), (yyvsp[(4) - (8)]), (yyvsp[(7) - (8)]));              }
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 201 "amber.yy"
    {(yyval) = mk_fndef_proc((yyvsp[(1) - (9)]), (yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(7) - (9)]), (yyvsp[(8) - (9)]));          }
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 202 "amber.yy"
    {(yyval) = mk_fndef_switch((yyvsp[(1) - (8)]), (yyvsp[(2) - (8)]), (yyvsp[(4) - (8)]), (yyvsp[(7) - (8)]));            }
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 203 "amber.yy"
    {(yyval) = mk_fndef_switch((yyvsp[(1) - (10)]), (yyvsp[(3) - (10)]), (yyvsp[(6) - (10)]), (yyvsp[(8) - (10)]), (yyvsp[(9) - (10)]));  }
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 205 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                   }
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 206 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(6) - (7)]));               }
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 207 "amber.yy"
    {(yyval) = mk_fndef_proc(null(), (yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(6) - (7)]));          }
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 208 "amber.yy"
    {(yyval) = mk_fndef_proc(null(), (yyvsp[(1) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(6) - (8)]), (yyvsp[(7) - (8)]));      }
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 209 "amber.yy"
    {(yyval) = mk_fndef_switch(null(), (yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(6) - (7)]));        }
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 210 "amber.yy"
    {(yyval) = mk_fndef_switch(null(), (yyvsp[(1) - (9)]), (yyvsp[(3) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));    }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 211 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (9)]), (yyvsp[(3) - (9)]), mk_expr_let((yyvsp[(6) - (9)]), (yyvsp[(8) - (9)])));}
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 215 "amber.yy"
    {(yyval) = mk_fnarg(null(), null());                   }
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 216 "amber.yy"
    {(yyval) = mk_fnarg(null(), (yyvsp[(1) - (1)]));                       }
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 217 "amber.yy"
    {(yyval) = mk_fnarg((yyvsp[(1) - (1)]),     null());                   }
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 218 "amber.yy"
    {(yyval) = mk_fnarg((yyvsp[(1) - (2)]),     (yyvsp[(2) - (2)]));                       }
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 222 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 223 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             }
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 227 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 228 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                             }
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 234 "amber.yy"
    {(yyval) = mk_stmt_return((yyvsp[(2) - (3)]));                    }
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 235 "amber.yy"
    {(yyval) = mk_stmt_return_if((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));             }
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 237 "amber.yy"
    {(yyval) = mk_stmt_assignment((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));            }
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 240 "amber.yy"
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
#line 278 "amber.yy"
    {(yyval) = mk_for_iter_tuple((yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]));         }
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 279 "amber.yy"
    {(yyval) = mk_for_iter_tuple((yyvsp[(1) - (9)]), (yyvsp[(2) - (9)]), (yyvsp[(5) - (9)]), (yyvsp[(7) - (9)]));     }
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 283 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                            }
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 284 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                        }
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 288 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                            }
    break;

  case 78:
/* Line 1787 of yacc.c  */
#line 289 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                        }
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 293 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                            }
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 294 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                        }
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 302 "amber.yy"
    {(yyval) = mk_ptrn_type((yyvsp[(1) - (1)]));                               }
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 303 "amber.yy"
    {(yyval) = mk_ptrn_var((yyvsp[(1) - (1)]));                                }
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 304 "amber.yy"
    {(yyval) = mk_ptrn_ptrn_var((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                       }
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 305 "amber.yy"
    {(yyval) = mk_ptrn_ctor((yyvsp[(1) - (1)]));                               }
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 306 "amber.yy"
    {(yyval) = mk_ptrn_num((yyvsp[(1) - (1)]));                                }
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 307 "amber.yy"
    {(yyval) = mk_ptrn_jolly();                                }
    break;

  case 87:
/* Line 1787 of yacc.c  */
#line 308 "amber.yy"
    {(yyval) = mk_ptrn_tag_ptrn((yyvsp[(1) - (3)]), mk_ptrn_jolly());          }
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 309 "amber.yy"
    {(yyval) = mk_ptrn_tag_ptrn((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                       }
    break;

  case 89:
/* Line 1787 of yacc.c  */
#line 310 "amber.yy"
    {(yyval) = mk_ptrn_tag_obj((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                        }
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 312 "amber.yy"
    {(yyval) = mk_ptrn_symb();                                 }
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 313 "amber.yy"
    {(yyval) = mk_ptrn_int();                                  }
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 314 "amber.yy"
    {(yyval) = mk_ptrn_empty_seq();                            }
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 315 "amber.yy"
    {(yyval) = mk_ptrn_seq();                                  }
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 316 "amber.yy"
    {(yyval) = mk_ptrn_empty_set();                            }
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 317 "amber.yy"
    {(yyval) = mk_ptrn_set();                                  }
    break;

  case 96:
/* Line 1787 of yacc.c  */
#line 318 "amber.yy"
    {(yyval) = mk_ptrn_empty_map();                            }
    break;

  case 97:
/* Line 1787 of yacc.c  */
#line 319 "amber.yy"
    {(yyval) = mk_ptrn_map();                                  }
    break;

  case 98:
/* Line 1787 of yacc.c  */
#line 323 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                     }
    break;

  case 99:
/* Line 1787 of yacc.c  */
#line 324 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                                 }
    break;

  case 100:
/* Line 1787 of yacc.c  */
#line 330 "amber.yy"
    {(yyval) = mk_type_ref((yyvsp[(1) - (1)]));                            }
    break;

  case 101:
/* Line 1787 of yacc.c  */
#line 331 "amber.yy"
    {(yyval) = mk_type_var((yyvsp[(1) - (1)]));                            }
    break;

  case 102:
/* Line 1787 of yacc.c  */
#line 332 "amber.yy"
    {(yyval) = mk_type_ref((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                        }
    break;

  case 103:
/* Line 1787 of yacc.c  */
#line 333 "amber.yy"
    {(yyval) = mk_type_inline((yyvsp[(2) - (3)]));                         }
    break;

  case 104:
/* Line 1787 of yacc.c  */
#line 334 "amber.yy"
    {(yyval) = mk_type_symb();                             }
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 336 "amber.yy"
    {(yyval) = mk_type_int();                              }
    break;

  case 106:
/* Line 1787 of yacc.c  */
#line 337 "amber.yy"
    {(yyval) = mk_type_low_bounded_int((yyvsp[(2) - (5)]));                }
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 338 "amber.yy"
    {(yyval) = mk_type_up_bounded_int((yyvsp[(4) - (5)]));                 }
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 339 "amber.yy"
    {(yyval) = mk_type_bounded_int((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                }
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 341 "amber.yy"
    {(yyval) = mk_type_seq((yyvsp[(2) - (3)]), false);                     }
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 342 "amber.yy"
    {(yyval) = mk_type_seq((yyvsp[(2) - (4)]), true);                      }
    break;

  case 111:
/* Line 1787 of yacc.c  */
#line 344 "amber.yy"
    {(yyval) = mk_type_set((yyvsp[(1) - (2)]), false);                     }
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 345 "amber.yy"
    {(yyval) = mk_type_set((yyvsp[(1) - (2)]), true);                      }
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 347 "amber.yy"
    {(yyval) = mk_type_map((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                        }
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 348 "amber.yy"
    {(yyval) = mk_type_tuple((yyvsp[(2) - (3)]));                          }
    break;

  case 115:
/* Line 1787 of yacc.c  */
#line 350 "amber.yy"
    {(yyval) = mk_type_pos_tuple((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                  }
    break;

  case 116:
/* Line 1787 of yacc.c  */
#line 352 "amber.yy"
    {(yyval) = mk_type_tagged_obj((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                 }
    break;

  case 117:
/* Line 1787 of yacc.c  */
#line 356 "amber.yy"
    {(yyval) = mk_pretype_type((yyvsp[(1) - (1)]));                        }
    break;

  case 118:
/* Line 1787 of yacc.c  */
#line 357 "amber.yy"
    {(yyval) = mk_pretype_empty_set();                     }
    break;

  case 119:
/* Line 1787 of yacc.c  */
#line 358 "amber.yy"
    {(yyval) = mk_pretype_empty_seq();                     }
    break;

  case 120:
/* Line 1787 of yacc.c  */
#line 359 "amber.yy"
    {(yyval) = mk_pretype_empty_map();                     }
    break;

  case 121:
/* Line 1787 of yacc.c  */
#line 360 "amber.yy"
    {(yyval) = mk_pretype_sing((yyvsp[(1) - (1)]));                        }
    break;

  case 122:
/* Line 1787 of yacc.c  */
#line 361 "amber.yy"
    {(yyval) = mk_pretype_tagged_obj((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));              }
    break;

  case 123:
/* Line 1787 of yacc.c  */
#line 362 "amber.yy"
    {(yyval) = mk_pretype_tagged_tuple((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));            }
    break;

  case 124:
/* Line 1787 of yacc.c  */
#line 366 "amber.yy"
    {(yyval) = mk_labtype((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), false);                  }
    break;

  case 125:
/* Line 1787 of yacc.c  */
#line 367 "amber.yy"
    {(yyval) = mk_labtype((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), true);                   }
    break;

  case 126:
/* Line 1787 of yacc.c  */
#line 371 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 127:
/* Line 1787 of yacc.c  */
#line 372 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             }
    break;

  case 128:
/* Line 1787 of yacc.c  */
#line 376 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 129:
/* Line 1787 of yacc.c  */
#line 377 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             }
    break;

  case 130:
/* Line 1787 of yacc.c  */
#line 381 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 131:
/* Line 1787 of yacc.c  */
#line 382 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             }
    break;

  case 132:
/* Line 1787 of yacc.c  */
#line 388 "amber.yy"
    {(yyval) = mk_expr_num((yyvsp[(1) - (1)]));                            }
    break;

  case 133:
/* Line 1787 of yacc.c  */
#line 389 "amber.yy"
    {(yyval) = mk_expr_ctor((yyvsp[(1) - (1)]));                           }
    break;

  case 134:
/* Line 1787 of yacc.c  */
#line 390 "amber.yy"
    {(yyval) = mk_expr_str((yyvsp[(1) - (1)]));                            }
    break;

  case 135:
/* Line 1787 of yacc.c  */
#line 392 "amber.yy"
    {(yyval) = mk_expr_ctor((yyvsp[(1) - (1)]));                           }
    break;

  case 136:
/* Line 1787 of yacc.c  */
#line 393 "amber.yy"
    {(yyval) = mk_expr_ctor((yyvsp[(1) - (1)]));                           }
    break;

  case 137:
/* Line 1787 of yacc.c  */
#line 394 "amber.yy"
    {(yyval) = mk_expr_ctor((yyvsp[(1) - (1)]));                           }
    break;

  case 138:
/* Line 1787 of yacc.c  */
#line 396 "amber.yy"
    {(yyval) = mk_expr_set(mk_seq_empty());                }
    break;

  case 139:
/* Line 1787 of yacc.c  */
#line 397 "amber.yy"
    {(yyval) = mk_expr_set((yyvsp[(2) - (3)]));                            }
    break;

  case 140:
/* Line 1787 of yacc.c  */
#line 399 "amber.yy"
    {(yyval) = mk_expr_map(mk_seq_empty());                }
    break;

  case 141:
/* Line 1787 of yacc.c  */
#line 400 "amber.yy"
    {(yyval) = mk_expr_map((yyvsp[(2) - (3)]));                            }
    break;

  case 142:
/* Line 1787 of yacc.c  */
#line 401 "amber.yy"
    {(yyval) = mk_expr_tuple((yyvsp[(2) - (3)]));                          }
    break;

  case 143:
/* Line 1787 of yacc.c  */
#line 403 "amber.yy"
    {(yyval) = mk_expr_pos_tuple((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                  }
    break;

  case 144:
/* Line 1787 of yacc.c  */
#line 405 "amber.yy"
    {(yyval) = mk_expr_seq(mk_seq_empty());                }
    break;

  case 145:
/* Line 1787 of yacc.c  */
#line 406 "amber.yy"
    {(yyval) = mk_expr_seq((yyvsp[(2) - (3)]));                            }
    break;

  case 146:
/* Line 1787 of yacc.c  */
#line 407 "amber.yy"
    {(yyval) = mk_expr_seq((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                        }
    break;

  case 147:
/* Line 1787 of yacc.c  */
#line 409 "amber.yy"
    {(yyval) = mk_expr_tag_obj((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                    }
    break;

  case 148:
/* Line 1787 of yacc.c  */
#line 410 "amber.yy"
    {(yyval) = mk_expr_tag_obj(mk_expr_ctor((yyvsp[(1) - (4)])), (yyvsp[(3) - (4)]));      }
    break;

  case 149:
/* Line 1787 of yacc.c  */
#line 412 "amber.yy"
    {(yyval) = mk_expr_tag_map((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                    }
    break;

  case 150:
/* Line 1787 of yacc.c  */
#line 413 "amber.yy"
    {(yyval) = mk_expr_tag_map((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                    }
    break;

  case 151:
/* Line 1787 of yacc.c  */
#line 418 "amber.yy"
    {(yyval) = mk_expr_const_or_var((yyvsp[(1) - (1)]));                   }
    break;

  case 152:
/* Line 1787 of yacc.c  */
#line 419 "amber.yy"
    {(yyval) = mk_expr_fn_call((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                    }
    break;

  case 153:
/* Line 1787 of yacc.c  */
#line 420 "amber.yy"
    {(yyval) = mk_expr_where(mk_expr_fn_call((yyvsp[(1) - (6)]), (yyvsp[(3) - (6)])), (yyvsp[(5) - (6)])); }
    break;

  case 154:
/* Line 1787 of yacc.c  */
#line 421 "amber.yy"
    {(yyval) = mk_expr_where(mk_expr_const_or_var((yyvsp[(1) - (5)])), (yyvsp[(4) - (5)]));}
    break;

  case 155:
/* Line 1787 of yacc.c  */
#line 422 "amber.yy"
    {(yyval) = mk_expr_fn_call((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                    }
    break;

  case 156:
/* Line 1787 of yacc.c  */
#line 423 "amber.yy"
    {(yyval) = mk_expr_builtin_call((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));               }
    break;

  case 157:
/* Line 1787 of yacc.c  */
#line 425 "amber.yy"
    {(yyval) = (yyvsp[(2) - (3)]);                                         }
    break;

  case 158:
/* Line 1787 of yacc.c  */
#line 427 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                         }
    break;

  case 159:
/* Line 1787 of yacc.c  */
#line 429 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     }
    break;

  case 160:
/* Line 1787 of yacc.c  */
#line 430 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     }
    break;

  case 161:
/* Line 1787 of yacc.c  */
#line 431 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     }
    break;

  case 162:
/* Line 1787 of yacc.c  */
#line 432 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     }
    break;

  case 163:
/* Line 1787 of yacc.c  */
#line 433 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     }
    break;

  case 164:
/* Line 1787 of yacc.c  */
#line 434 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     }
    break;

  case 165:
/* Line 1787 of yacc.c  */
#line 435 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     }
    break;

  case 166:
/* Line 1787 of yacc.c  */
#line 436 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     }
    break;

  case 167:
/* Line 1787 of yacc.c  */
#line 437 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     }
    break;

  case 168:
/* Line 1787 of yacc.c  */
#line 438 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     }
    break;

  case 169:
/* Line 1787 of yacc.c  */
#line 440 "amber.yy"
    {(yyval) = mk_expr_and((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                        }
    break;

  case 170:
/* Line 1787 of yacc.c  */
#line 441 "amber.yy"
    {(yyval) = mk_expr_or((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                         }
    break;

  case 171:
/* Line 1787 of yacc.c  */
#line 442 "amber.yy"
    {(yyval) = mk_expr_not((yyvsp[(2) - (2)]));                            }
    break;

  case 172:
/* Line 1787 of yacc.c  */
#line 444 "amber.yy"
    {(yyval) = mk_expr_eq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                         }
    break;

  case 173:
/* Line 1787 of yacc.c  */
#line 445 "amber.yy"
    {(yyval) = mk_expr_neq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                        }
    break;

  case 174:
/* Line 1787 of yacc.c  */
#line 447 "amber.yy"
    {(yyval) = mk_expr_type_test((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                  }
    break;

  case 175:
/* Line 1787 of yacc.c  */
#line 449 "amber.yy"
    {(yyval) = (yyvsp[(3) - (4)]);                                         }
    break;

  case 176:
/* Line 1787 of yacc.c  */
#line 450 "amber.yy"
    {(yyval) = (yyvsp[(3) - (4)]);                                         }
    break;

  case 177:
/* Line 1787 of yacc.c  */
#line 451 "amber.yy"
    {(yyval) = (yyvsp[(6) - (7)]);                                         }
    break;

  case 178:
/* Line 1787 of yacc.c  */
#line 453 "amber.yy"
    {(yyval) = mk_expr_dot_acc((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                    }
    break;

  case 179:
/* Line 1787 of yacc.c  */
#line 454 "amber.yy"
    {(yyval) = mk_expr_dot_acc_test((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));               }
    break;

  case 180:
/* Line 1787 of yacc.c  */
#line 457 "amber.yy"
    {(yyval) = mk_expr_idx((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                        }
    break;

  case 181:
/* Line 1787 of yacc.c  */
#line 458 "amber.yy"
    {(yyval) = mk_expr_idx_member((yyvsp[(1) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));             }
    break;

  case 182:
/* Line 1787 of yacc.c  */
#line 460 "amber.yy"
    {(yyval) = mk_expr_ex_qual((yyvsp[(3) - (4)]));                        }
    break;

  case 183:
/* Line 1787 of yacc.c  */
#line 461 "amber.yy"
    {(yyval) = mk_expr_ex_qual((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                    }
    break;

  case 184:
/* Line 1787 of yacc.c  */
#line 463 "amber.yy"
    {(yyval) = mk_expr_sc((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                         }
    break;

  case 185:
/* Line 1787 of yacc.c  */
#line 464 "amber.yy"
    {(yyval) = mk_expr_sc((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                     }
    break;

  case 186:
/* Line 1787 of yacc.c  */
#line 466 "amber.yy"
    {(yyval) = mk_expr_sc((yyvsp[(6) - (7)]), (yyvsp[(3) - (7)]));                         }
    break;

  case 187:
/* Line 1787 of yacc.c  */
#line 467 "amber.yy"
    {(yyval) = mk_expr_sc((yyvsp[(10) - (11)]), (yyvsp[(3) - (11)]), (yyvsp[(7) - (11)]));                    }
    break;

  case 188:
/* Line 1787 of yacc.c  */
#line 469 "amber.yy"
    {(yyval) = mk_expr_mc((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                    }
    break;

  case 189:
/* Line 1787 of yacc.c  */
#line 470 "amber.yy"
    {(yyval) = mk_expr_mc((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));                }
    break;

  case 190:
/* Line 1787 of yacc.c  */
#line 472 "amber.yy"
    {(yyval) = mk_expr_mc((yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]), (yyvsp[(3) - (9)]));                    }
    break;

  case 191:
/* Line 1787 of yacc.c  */
#line 474 "amber.yy"
    {(yyval) = mk_expr_mc((yyvsp[(10) - (13)]), (yyvsp[(12) - (13)]), (yyvsp[(3) - (13)]), (yyvsp[(7) - (13)]));              }
    break;

  case 192:
/* Line 1787 of yacc.c  */
#line 476 "amber.yy"
    {(yyval) = mk_expr_lc((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                     }
    break;

  case 193:
/* Line 1787 of yacc.c  */
#line 477 "amber.yy"
    {(yyval) = mk_expr_lc((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));                 }
    break;

  case 194:
/* Line 1787 of yacc.c  */
#line 478 "amber.yy"
    {(yyval) = mk_expr_flc((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));                }
    break;

  case 195:
/* Line 1787 of yacc.c  */
#line 479 "amber.yy"
    {(yyval) = mk_expr_flc((yyvsp[(2) - (11)]), (yyvsp[(4) - (11)]), (yyvsp[(6) - (11)]), (yyvsp[(8) - (11)]), (yyvsp[(10) - (11)]));           }
    break;

  case 196:
/* Line 1787 of yacc.c  */
#line 486 "amber.yy"
    {(yyval) = mk_expr_if((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                         }
    break;

  case 197:
/* Line 1787 of yacc.c  */
#line 487 "amber.yy"
    {(yyval) = mk_expr_match((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                        }
    break;

  case 198:
/* Line 1787 of yacc.c  */
#line 490 "amber.yy"
    {(yyval) = mk_expr_do((yyvsp[(2) - (3)]));                             }
    break;

  case 199:
/* Line 1787 of yacc.c  */
#line 492 "amber.yy"
    {(yyval) = mk_expr_repl((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                   }
    break;

  case 200:
/* Line 1787 of yacc.c  */
#line 493 "amber.yy"
    {(yyval) = mk_expr_sel((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                        }
    break;

  case 201:
/* Line 1787 of yacc.c  */
#line 495 "amber.yy"
    {(yyval) = mk_expr_retr((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                   }
    break;

  case 202:
/* Line 1787 of yacc.c  */
#line 497 "amber.yy"
    {(yyval) = mk_expr_retr((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));               }
    break;

  case 203:
/* Line 1787 of yacc.c  */
#line 499 "amber.yy"
    {(yyval) = mk_expr_is((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                         }
    break;

  case 204:
/* Line 1787 of yacc.c  */
#line 504 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 205:
/* Line 1787 of yacc.c  */
#line 505 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             }
    break;

  case 206:
/* Line 1787 of yacc.c  */
#line 510 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 207:
/* Line 1787 of yacc.c  */
#line 511 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             }
    break;

  case 208:
/* Line 1787 of yacc.c  */
#line 515 "amber.yy"
    {(yyval) = mk_sexpr_expr((yyvsp[(1) - (1)]));                          }
    break;

  case 209:
/* Line 1787 of yacc.c  */
#line 516 "amber.yy"
    {(yyval) = mk_sexpr_cond((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                      }
    break;

  case 210:
/* Line 1787 of yacc.c  */
#line 520 "amber.yy"
    {(yyval) = mk_sexpr_lab((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                       }
    break;

  case 211:
/* Line 1787 of yacc.c  */
#line 521 "amber.yy"
    {(yyval) = mk_sexpr_lab_cond((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));              }
    break;

  case 212:
/* Line 1787 of yacc.c  */
#line 525 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 213:
/* Line 1787 of yacc.c  */
#line 526 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             }
    break;

  case 214:
/* Line 1787 of yacc.c  */
#line 530 "amber.yy"
    {(yyval) = mk_seq(mk_if_branch((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])));               }
    break;

  case 215:
/* Line 1787 of yacc.c  */
#line 531 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (5)]), mk_if_branch((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)])));           }
    break;

  case 216:
/* Line 1787 of yacc.c  */
#line 535 "amber.yy"
    {(yyval) = mk_match_branch((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                      }
    break;

  case 217:
/* Line 1787 of yacc.c  */
#line 536 "amber.yy"
    {(yyval) = mk_match_branch((yyvsp[(1) - (5)]), mk_expr_let((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)])));     }
    break;

  case 218:
/* Line 1787 of yacc.c  */
#line 539 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 219:
/* Line 1787 of yacc.c  */
#line 540 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             }
    break;

  case 220:
/* Line 1787 of yacc.c  */
#line 549 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 221:
/* Line 1787 of yacc.c  */
#line 550 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             }
    break;

  case 222:
/* Line 1787 of yacc.c  */
#line 554 "amber.yy"
    {(yyval) = mk_clause_in((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                       }
    break;

  case 223:
/* Line 1787 of yacc.c  */
#line 555 "amber.yy"
    {(yyval) = mk_clause_in_map((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));                       }
    break;

  case 224:
/* Line 1787 of yacc.c  */
#line 556 "amber.yy"
    {(yyval) = mk_clause_eq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                       }
    break;

  case 225:
/* Line 1787 of yacc.c  */
#line 557 "amber.yy"
    {(yyval) = mk_clause_and((yyvsp[(2) - (3)]));                          }
    break;

  case 226:
/* Line 1787 of yacc.c  */
#line 558 "amber.yy"
    {(yyval) = mk_clause_or((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                       }
    break;

  case 227:
/* Line 1787 of yacc.c  */
#line 562 "amber.yy"
    {(yyval) = mk_map_entry((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                       }
    break;

  case 228:
/* Line 1787 of yacc.c  */
#line 563 "amber.yy"
    {(yyval) = mk_map_entry_cond((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));              }
    break;

  case 229:
/* Line 1787 of yacc.c  */
#line 567 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 230:
/* Line 1787 of yacc.c  */
#line 568 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             }
    break;

  case 231:
/* Line 1787 of yacc.c  */
#line 572 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                   }
    break;

  case 232:
/* Line 1787 of yacc.c  */
#line 573 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(6) - (6)]));               }
    break;

  case 233:
/* Line 1787 of yacc.c  */
#line 577 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 }
    break;

  case 234:
/* Line 1787 of yacc.c  */
#line 578 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             }
    break;

  case 235:
/* Line 1787 of yacc.c  */
#line 582 "amber.yy"
    {(yyval) = mk_seq(mk_fnarg(null(), (yyvsp[(1) - (1)])));         }
    break;

  case 236:
/* Line 1787 of yacc.c  */
#line 583 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), mk_fnarg(null(), (yyvsp[(3) - (3)])));     }
    break;

  case 242:
/* Line 1787 of yacc.c  */
#line 613 "amber.yy"
    {(yyval) = mk_snum_neg_num((yyvsp[(2) - (2)]));                      }
    break;


/* Line 1787 of yacc.c  */
#line 4330 "amber.tab.cc"
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
#line 697 "amber.yy"
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

  for (int i=0 ; i < lengthof(token_to_id_map) ; i++)
    if (streq(str, token_to_id_map[i].str))
      return token_to_id_map[i].n;

  return LOWER_CASE_ID;
}
