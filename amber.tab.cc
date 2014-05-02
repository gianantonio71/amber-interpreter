
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "amber.yy"

  /* Prologue */

  #pragma warning(disable : 4065)

  #include "common.h"
  #include "parser.h"
  
  #define YYSTYPE obj

  int yylex (void);
  void yyerror (char const *);



/* Line 189 of yacc.c  */
#line 89 "amber.tab.cc"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
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


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 198 "amber.tab.cc"

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
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  124
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4722

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  292
/* YYNRULES -- Number of states.  */
#define YYNSTATES  665

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
       2,     2,     2,     2,     2,    89,     2,     2,    73,     2,
      80,    81,    74,    71,    84,    72,    78,    75,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    87,    79,
      69,    68,    70,    90,    67,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    85,     2,    86,    77,    88,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    82,    91,    83,     2,     2,     2,     2,
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
     394,   396,   398,   400,   403,   407,   412,   417,   424,   428,
     431,   436,   438,   442,   444,   447,   450,   452,   454,   459,
     463,   467,   473,   479,   485,   491,   496,   501,   505,   510,
     515,   521,   525,   531,   533,   536,   539,   542,   544,   549,
     554,   557,   561,   563,   567,   569,   573,   575,   579,   581,
     585,   587,   589,   591,   593,   595,   597,   600,   604,   607,
     611,   615,   618,   622,   628,   632,   637,   642,   647,   649,
     654,   661,   667,   672,   677,   681,   684,   688,   692,   696,
     700,   704,   708,   712,   716,   720,   724,   728,   732,   735,
     739,   743,   747,   751,   756,   761,   768,   773,   780,   786,
     794,   802,   814,   822,   832,   842,   856,   864,   874,   884,
     896,   902,   909,   913,   921,   927,   935,   945,   949,   951,
     955,   957,   961,   963,   967,   970,   975,   977,   981,   985,
     991,   995,  1001,  1003,  1007,  1009,  1013,  1017,  1023,  1027,
    1033,  1037,  1041,  1045,  1049,  1055,  1057,  1061,  1065,  1072,
    1074,  1078,  1080,  1084,  1086,  1088,  1090,  1092,  1094,  1097,
    1099,  1101,  1103,  1105,  1107,  1109,  1111,  1113,  1115,  1117,
    1119,  1121,  1123,  1125,  1127,  1129,  1131,  1133,  1135,  1137,
    1139,  1141,  1143,  1145,  1147,  1149,  1151,  1153,  1155,  1157,
    1159,  1161,  1163,  1165,  1167,  1169,  1171,  1173,  1175,  1177,
    1179,  1181,  1183,  1185,  1187,  1189,  1191,  1193,  1195,  1197,
    1199,  1201,  1203
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      93,     0,    -1,    94,    -1,    93,    94,    -1,   102,    -1,
     104,    -1,    99,    -1,    96,    -1,    95,    -1,    56,   116,
      69,   116,    79,    -1,    58,    97,    36,    -1,    58,    32,
      97,    36,    -1,    98,    -1,    97,    98,    -1,   124,    79,
      -1,    51,   124,    79,    -1,    39,    80,   111,    81,    97,
      79,    -1,   153,    18,   124,    79,    -1,    62,   101,    82,
     107,    83,    -1,    62,    82,   101,    79,   107,    83,    -1,
     116,   150,    -1,   116,   150,    80,   120,    81,    -1,   100,
      -1,   101,    84,   100,    -1,    61,   141,    68,   122,    79,
      -1,    61,   141,    85,   103,    86,    68,   122,    79,    -1,
     142,    -1,   103,    84,   142,    -1,   116,   150,    68,   124,
      79,    -1,   116,   150,    80,   106,    81,    68,   124,    79,
      -1,   116,   150,    80,   106,    81,    68,   124,    45,   112,
      79,    -1,   116,   150,    80,   106,    81,    82,   112,    83,
      -1,   116,   150,    80,   106,    81,    82,   112,   107,    83,
      -1,   116,   150,    80,   106,    81,    87,   132,    79,    -1,
     116,   150,    80,   106,    81,    87,   132,    64,   107,    79,
      -1,   150,    68,   124,    79,    -1,   150,    80,   106,    81,
      68,   124,    79,    -1,   150,    80,   106,    81,    82,   112,
      83,    -1,   150,    80,   106,    81,    82,   112,   107,    83,
      -1,   150,    80,   106,    81,    87,   132,    79,    -1,   150,
      80,   106,    81,    87,   132,    64,   107,    79,    -1,   150,
      80,   106,    81,    68,   124,    45,   112,    79,    -1,    88,
      -1,   153,    -1,   116,    -1,   116,   153,    -1,   105,    -1,
     106,    84,   105,    -1,   104,    -1,   107,   104,    -1,    54,
     124,    79,    -1,    54,   124,    41,   124,    79,    -1,   153,
      18,   124,    79,    -1,   153,    18,   124,    41,   124,    79,
      -1,    41,    80,   124,    81,   112,   109,    79,    -1,    41,
      80,   124,    81,   112,   109,    34,   112,    79,    -1,    46,
     112,    79,    -1,    46,   112,    65,    80,   124,    81,    79,
      -1,    65,    80,   124,    81,   112,    79,    -1,    45,    80,
     138,    81,   112,    79,    -1,    29,    79,    -1,    29,    41,
     124,    79,    -1,    39,    80,   111,    81,   112,    79,    -1,
      37,    79,    -1,    37,    41,   124,    79,    -1,    28,   124,
      79,    -1,    51,   124,    79,    -1,    51,   124,    41,   124,
      79,    -1,    -1,   109,    35,    80,   124,    81,   112,    -1,
     153,    87,   124,    -1,   153,    84,   153,    87,   124,    -1,
     153,    68,   124,    16,   124,    -1,   110,    -1,   111,    79,
     110,    -1,   108,    -1,   112,   108,    -1,   116,    -1,   153,
      -1,   113,   153,    -1,   147,    -1,   143,    -1,    88,    -1,
      89,   153,    -1,   154,    80,    81,    -1,   154,    80,   113,
      81,    -1,   154,    80,   114,    81,    -1,   154,    80,   114,
      84,    17,    81,    -1,   153,    67,   153,    -1,   149,   113,
      -1,   114,    84,   149,   113,    -1,   113,    -1,   115,    84,
     113,    -1,   117,    -1,   116,    74,    -1,   116,    71,    -1,
     141,    -1,   142,    -1,   141,    85,   120,    86,    -1,    69,
     122,    70,    -1,    69,    71,    70,    -1,    85,    74,    16,
      74,    86,    -1,    85,   143,    16,    74,    86,    -1,    85,
      74,    16,   143,    86,    -1,    85,   143,    16,   143,    86,
      -1,    85,   117,    74,    86,    -1,    85,   117,    71,    86,
      -1,    85,   121,    86,    -1,    80,   116,    74,    81,    -1,
      80,   116,    71,    81,    -1,    80,   116,    15,   116,    81,
      -1,    80,   123,    81,    -1,    80,   117,    67,   116,    81,
      -1,   116,    -1,    82,    83,    -1,    85,    86,    -1,    80,
      81,    -1,   154,    -1,   154,    80,   118,    81,    -1,   154,
      80,   123,    81,    -1,   149,   118,    -1,   149,   118,    90,
      -1,   116,    -1,   120,    84,   116,    -1,   117,    -1,   121,
      84,   117,    -1,   118,    -1,   122,    84,   118,    -1,   119,
      -1,   123,    84,   119,    -1,   144,    -1,   147,    -1,   145,
      -1,    60,    -1,    38,    -1,    48,    -1,    82,    83,    -1,
      82,   126,    83,    -1,    80,    81,    -1,    80,   136,    81,
      -1,    80,   129,    81,    -1,    85,    86,    -1,    85,   125,
      86,    -1,    85,   125,    91,   124,    86,    -1,   124,    67,
     124,    -1,   147,    80,   124,    81,    -1,   147,    80,   129,
      81,    -1,   152,    80,   129,    81,    -1,   152,    -1,   152,
      80,   125,    81,    -1,   152,    80,   125,    79,   138,    81,
      -1,   152,    80,    79,   138,    81,    -1,   151,    80,   125,
      81,    -1,   148,    80,   125,    81,    -1,    80,   124,    81,
      -1,    72,   124,    -1,   124,    71,   124,    -1,   124,    72,
     124,    -1,   124,    74,   124,    -1,   124,    75,   124,    -1,
     124,    77,   124,    -1,   124,    73,   124,    -1,   124,    69,
     124,    -1,   124,    70,   124,    -1,   124,    19,   124,    -1,
     124,    20,   124,    -1,   124,    26,   124,    -1,   124,    50,
     124,    -1,    49,   124,    -1,   124,    21,   124,    -1,   124,
      22,   124,    -1,   124,    23,   116,    -1,   124,    78,   146,
      -1,   124,    78,   146,    90,    -1,   153,    85,   125,    86,
      -1,   124,    78,   146,    85,   125,    86,    -1,    80,    90,
     133,    81,    -1,    80,    90,   133,    87,   125,    81,    -1,
      82,   124,    87,   133,    83,    -1,    82,   124,    87,   133,
      79,   125,    83,    -1,    39,    80,   133,    81,    82,   124,
      83,    -1,    39,    80,   133,    81,    41,    80,   125,    81,
      82,   124,    83,    -1,    80,   124,    15,   124,    87,   133,
      81,    -1,    80,   124,    15,   124,    87,   133,    79,   125,
      81,    -1,    39,    80,   133,    81,    80,   124,    15,   124,
      81,    -1,    39,    80,   133,    81,    41,    80,   125,    81,
      80,   124,    15,   124,    81,    -1,    85,   124,    87,   153,
      14,   124,    86,    -1,    85,   124,    87,   153,    84,   153,
      14,   124,    86,    -1,    85,   124,    87,   153,    14,   124,
      84,   124,    86,    -1,    85,   124,    87,   153,    84,   153,
      14,   124,    84,   124,    86,    -1,    41,   130,    34,   124,
     140,    -1,    47,    80,   125,    81,   132,   140,    -1,    82,
     112,    83,    -1,    52,   113,    42,   124,    66,   124,   140,
      -1,    55,   116,    42,   124,   140,    -1,    53,   124,    40,
     113,    42,   124,   140,    -1,    53,   124,    40,   113,    42,
     124,    41,   124,   140,    -1,   124,    43,   116,    -1,   124,
      -1,   125,    84,   124,    -1,   127,    -1,   126,    84,   127,
      -1,   124,    -1,   124,    41,   124,    -1,   149,   124,    -1,
     149,   124,    41,   124,    -1,   128,    -1,   129,    84,   128,
      -1,   124,    57,   124,    -1,   130,    84,   124,    57,   124,
      -1,   115,    68,   124,    -1,   115,    68,   124,    45,   112,
      -1,   131,    -1,   132,    84,   131,    -1,   134,    -1,   133,
      84,   134,    -1,   113,    14,   124,    -1,   113,    15,   113,
      14,   124,    -1,   113,    25,   124,    -1,   113,    15,   113,
      25,   124,    -1,   153,    68,   124,    -1,    80,   133,    81,
      -1,   134,    24,   134,    -1,   124,    15,   124,    -1,   124,
      15,   124,    41,   124,    -1,   135,    -1,   136,    84,   135,
      -1,   150,    68,   124,    -1,   150,    80,   139,    81,    68,
     124,    -1,   137,    -1,   138,    84,   137,    -1,   153,    -1,
     139,    84,   153,    -1,    79,    -1,    36,    -1,    11,    -1,
      12,    -1,   144,    -1,    72,   144,    -1,     8,    -1,    10,
      -1,     3,    -1,   155,    -1,   147,    -1,     4,    -1,     6,
      -1,     7,    -1,   152,    -1,   151,    -1,     5,    -1,   153,
      -1,    42,    -1,    26,    -1,    50,    -1,     3,    -1,    61,
      -1,    30,    -1,     3,    -1,   155,    -1,    26,    -1,    28,
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
     298,   299,   300,   301,   304,   305,   306,   307,   308,   312,
     313,   317,   318,   324,   325,   326,   330,   331,   332,   333,
     334,   336,   337,   338,   339,   341,   342,   343,   345,   346,
     348,   349,   351,   355,   356,   357,   358,   359,   360,   361,
     365,   366,   370,   371,   375,   376,   380,   381,   385,   386,
     392,   393,   394,   396,   397,   398,   400,   401,   403,   404,
     405,   407,   408,   409,   411,   412,   414,   415,   420,   421,
     422,   423,   424,   425,   427,   429,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   442,   443,   444,   446,
     447,   449,   451,   452,   455,   456,   458,   459,   461,   462,
     464,   465,   467,   468,   470,   471,   474,   475,   476,   477,
     479,   480,   483,   485,   486,   488,   489,   492,   497,   498,
     503,   504,   508,   509,   513,   514,   518,   519,   523,   524,
     528,   529,   532,   533,   542,   543,   547,   548,   549,   550,
     551,   552,   553,   557,   558,   562,   563,   567,   568,   572,
     573,   577,   578,   601,   601,   603,   604,   606,   607,   610,
     611,   614,   615,   616,   619,   622,   624,   626,   627,   630,
     639,   640,   641,   642,   645,   646,   647,   650,   651,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   683,   684,   685,
     686,   687,   688
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
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
  "'('", "')'", "'{'", "'}'", "','", "'['", "']'", "':'", "'_'", "'#'",
  "'?'", "'|'", "$accept", "src_file", "decl", "subtype_decl",
  "test_block", "test_instrs", "test_instr", "using_block", "signature",
  "signatures", "typedef", "tvars", "fndef", "fnarg", "fnargs", "fndefs",
  "stmt", "elifs", "for_iter", "for_iters", "stmts", "pattern", "labptrns",
  "patterns", "type", "ntltype", "pretype", "labtype", "types", "ntltypes",
  "pretypes", "labtypes", "expr", "exprs", "subexprs", "subexpr",
  "labexpr", "labexprs", "if_branches", "match_branch", "match_branches",
  "clauses", "clause", "map_entry", "map_entries", "let_fndef",
  "let_fndefs", "let_fnargs", "exp_close", "tname", "tvar", "snum", "num",
  "str", "uqctor", "ctor", "builtin", "lab", "fnid", "op", "rid", "vid",
  "pid", "keyword", 0
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
      40,    41,   123,   125,    44,    91,    93,    58,    95,    35,
      63,   124
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    94,    94,    94,    94,    94,    95,
      96,    96,    97,    97,    98,    98,    98,    98,    99,    99,
     100,   100,   101,   101,   102,   102,   103,   103,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   105,   105,   105,   105,   106,   106,   107,   107,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     110,   110,   110,   111,   111,   112,   112,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   114,
     114,   115,   115,   116,   116,   116,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   118,   118,   118,   118,   118,   118,   118,
     119,   119,   120,   120,   121,   121,   122,   122,   123,   123,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   125,   125,
     126,   126,   127,   127,   128,   128,   129,   129,   130,   130,
     131,   131,   132,   132,   133,   133,   134,   134,   134,   134,
     134,   134,   134,   135,   135,   136,   136,   137,   137,   138,
     138,   139,   139,   140,   140,   141,   142,   143,   143,   144,
     145,   146,   146,   146,   147,   148,   149,   150,   150,   151,
     152,   152,   152,   152,   153,   153,   153,   154,   154,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155
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
       1,     1,     1,     2,     3,     4,     4,     6,     3,     2,
       4,     1,     3,     1,     2,     2,     1,     1,     4,     3,
       3,     5,     5,     5,     5,     4,     4,     3,     4,     4,
       5,     3,     5,     1,     2,     2,     2,     1,     4,     4,
       2,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     2,     3,     2,     3,
       3,     2,     3,     5,     3,     4,     4,     4,     1,     4,
       6,     5,     4,     4,     3,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     4,     4,     6,     4,     6,     5,     7,
       7,    11,     7,     9,     9,    13,     7,     9,     9,    11,
       5,     6,     3,     7,     5,     7,     9,     3,     1,     3,
       1,     3,     1,     3,     2,     4,     1,     3,     3,     5,
       3,     5,     1,     3,     1,     3,     3,     5,     3,     5,
       3,     3,     3,     3,     5,     1,     3,     3,     6,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   254,   249,   235,   236,   252,   256,   251,   253,     0,
       0,   255,     0,     0,     0,     0,     0,     2,     8,     7,
       6,     4,     5,     0,    93,    96,    97,     0,   248,   247,
     250,     0,   244,   245,   239,   240,     0,   134,     0,     0,
       0,   135,     0,     0,     0,     0,     0,   133,   255,     0,
       0,     0,     0,     0,    12,     0,   130,   132,   131,     0,
       0,   148,   250,     0,     0,    22,     0,     0,   257,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   285,   284,   286,   287,   288,   289,
     290,   291,   292,     0,     0,     0,     0,   113,   126,     0,
     117,   258,   246,     0,    93,   128,     0,     0,     0,     0,
     124,     0,     0,   237,     1,     3,    95,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   250,     0,
     168,     0,   254,   256,   255,    82,     0,     0,    77,    81,
      80,    78,     0,     0,     0,   155,   138,     0,     0,   206,
       0,   225,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   136,    75,     0,   202,     0,   200,
     250,   141,   198,     0,    10,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,   100,   116,   114,
     115,    99,     0,     0,     0,    95,    94,     0,   111,     0,
     120,   238,     0,     0,     0,     0,   107,     0,     0,     0,
     122,     0,     0,    42,    46,     0,    44,    43,     0,    11,
       0,    73,     0,     0,     0,   214,    78,     0,     0,     0,
       0,   198,     0,    15,    83,     0,    79,     0,     0,     0,
       0,     0,    78,     0,   154,   140,     0,   139,     0,   204,
       0,     0,    60,     0,    63,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   192,    76,     0,     0,   137,
       0,     0,     0,     0,   142,     0,   164,   165,   169,   170,
     171,   166,   197,   167,   144,   162,   163,   156,   157,   161,
     158,   159,   160,   241,   172,   243,   242,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      48,     0,    23,     0,   127,     0,     0,     0,   109,   108,
       0,   129,   121,     0,     0,   106,   105,   125,     0,     0,
       0,     0,     0,    98,    35,     0,     0,    45,     9,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   208,     0,     0,     0,     0,    88,    84,     0,
       0,     0,     0,     0,   176,     0,     0,   223,   207,     0,
     226,     0,    65,     0,     0,     0,     0,   229,     0,     0,
       0,     0,     0,    56,     0,    66,     0,    50,     0,   203,
       0,   202,   201,     0,     0,   199,     0,     0,   173,   145,
     146,   153,   152,     0,     0,   149,   147,    17,   174,    24,
       0,     0,     0,    18,    49,     0,   118,   119,   110,   112,
     101,   103,   102,   104,    28,     0,   123,     0,     0,     0,
      47,   221,    74,     0,     0,   216,     0,   218,     0,     0,
       0,   215,   222,   220,     0,    70,   234,   233,   190,     0,
      91,     0,   212,     0,     0,    85,    86,     0,    89,     0,
     194,     0,   220,     0,     0,     0,   205,    61,    64,     0,
     154,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   178,     0,    52,     0,     0,   143,     0,   151,     0,
      27,     0,    19,    21,     0,     0,     0,     0,     0,     0,
       0,    16,     0,     0,     0,     0,     0,     0,     0,   209,
       0,     0,     0,   191,     0,     0,     0,     0,   177,   224,
       0,   223,     0,    68,     0,   230,   227,     0,   231,     0,
       0,    67,    51,     0,     0,     0,     0,     0,   175,   150,
       0,     0,     0,     0,     0,    36,    37,     0,   250,     0,
      39,     0,   217,   219,     0,     0,   180,    72,    71,   210,
      92,   213,   193,    87,    90,     0,   195,     0,   182,    62,
       0,    59,     0,     0,     0,    58,   179,    53,     0,   186,
       0,    25,     0,    29,    31,     0,     0,    33,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,    54,     0,
     232,    57,     0,     0,     0,    32,     0,    41,    40,     0,
       0,   184,   211,   196,   183,     0,     0,   228,   188,     0,
     187,    30,    34,     0,     0,    55,     0,     0,     0,   181,
       0,   189,     0,    69,   185
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    17,    18,    19,    53,    54,    20,    65,    66,
      21,   337,   340,   244,   245,   341,   175,   600,   251,   405,
     553,   253,   390,   481,   148,    24,   108,   115,   241,   121,
     109,   116,   261,   183,   178,   179,   159,   160,   137,   482,
     483,   254,   255,   161,   162,   407,   408,   557,   478,    25,
      26,   149,    56,    57,   324,    58,    59,   117,    27,    60,
      61,   138,   152,   111
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -432
static const yytype_int16 yypact[] =
{
     627,  -432,  -432,  -432,  -432,  -432,  -432,  -432,  -432,   196,
    1938,    38,    69,  1679,    28,   314,   929,  -432,  -432,  -432,
    -432,  -432,  -432,   337,  -432,   -31,  -432,    60,  -432,  -432,
    -432,   350,  -432,  -432,  -432,  -432,  2238,  -432,   -18,  2358,
      -3,  -432,  2358,  2358,  1479,  2358,   196,  -432,  -432,  2358,
    1205,  1875,  1617,  1998,  -432,  3983,  -432,  -432,    37,    57,
      61,    65,    -1,   -30,   196,  -432,   -39,   337,  -432,  -432,
    -432,  -432,  -432,  -432,  -432,  -432,  -432,  -432,  -432,  -432,
    -432,  -432,  -432,  -432,  -432,  -432,  -432,  -432,  -432,  -432,
    -432,  -432,  -432,  -432,  -432,  -432,  -432,  -432,  -432,  -432,
    -432,  -432,  -432,    13,   214,   112,   124,   259,  -432,    -6,
     158,  -432,  -432,    16,   150,  -432,   270,  1808,   234,   246,
     319,   -28,   264,  -432,  -432,  -432,  -432,  -432,   120,   196,
    2358,    30,   196,  2058,  1546,   220,  4346,    -2,   235,  2358,
      75,  4016,   257,   280,   290,  -432,    63,   228,   259,  -432,
    -432,   279,   302,  4385,   113,    75,  -432,  1546,  3072,  -432,
     320,  -432,   328,  2358,  2358,    -4,     6,   304,  2418,   317,
    3707,  2358,  2358,   342,  -432,  -432,  1276,  2825,   312,  -432,
       9,  -432,  2896,   266,  -432,  -432,  2358,  2358,  2358,  2358,
     196,  2358,   196,  2358,  2358,  2358,  2358,  2358,  2358,  2358,
    2358,  2358,  2358,  3228,  -432,  2298,  2358,  2358,  2118,  2358,
    2358,  1808,   402,   139,  2575,   196,   363,  -432,  -432,  -432,
    -432,  -432,  1808,  1744,   196,   281,   339,   196,  -432,   465,
     388,  -432,    51,   411,   417,   196,  -432,    55,  2358,    30,
     259,    20,  4049,  -432,  -432,   334,    18,  -432,   282,  -432,
    1412,  -432,   149,   298,   349,   432,   248,  1546,  2358,  2358,
    2358,  4634,   355,  -432,  -432,  2358,  -432,    63,  1345,  1479,
    2358,    81,   335,  2358,  -432,  -432,   465,  -432,  2358,  4423,
    4082,  2358,  -432,  2358,  -432,  1546,  1205,   423,   427,   428,
     827,   494,  3758,  3797,  2358,  -432,  -432,  2358,  1546,  -432,
    2358,  2358,    63,  2358,  -432,  2358,   446,   446,  2787,  2787,
    -432,  4644,   259,  4644,  3616,   446,   446,   229,   229,   229,
      75,    75,    75,  -432,   174,  -432,  -432,  3365,   360,   364,
     366,   423,   348,   370,  4115,    95,   213,   165,  -432,  2575,
    -432,   100,  -432,   196,  -432,   433,   371,   237,  -432,  -432,
     253,  -432,  -432,   436,   441,  -432,  -432,  -432,   451,   453,
    4148,   376,   196,  -432,  -432,   147,    30,  -432,  -432,    16,
     386,    63,  2238,  2358,  1479,  2358,   -11,  1546,  1546,  2358,
      63,  2358,  4634,  3837,  4456,  1479,  4489,  -432,  -432,    58,
     393,  1479,   275,  3837,  -432,  2358,  2358,  2863,  -432,  3280,
    -432,  2358,  -432,  4181,  4214,   192,  3105,  -432,   398,   122,
      63,  2358,   469,  -432,  2358,  -432,  2358,  -432,  3428,  4634,
     285,  4527,  -432,  3876,    12,  4634,  2965,  2358,  -432,  -432,
    -432,  -432,  -432,   405,   423,  -432,  -432,  -432,  -432,  -432,
     402,   445,   194,  -432,  -432,   412,  -432,  -432,  -432,  -432,
    -432,  -432,  -432,  -432,  -432,   261,   259,  2358,  3707,  1479,
    -432,  -432,  -432,   188,  2178,  4634,   161,  4634,   470,  2358,
    2358,   432,  -432,  3441,   456,  4634,  -432,  -432,  -432,  2358,
      63,   -16,  -432,   -14,  2358,  -432,  -432,   175,    63,  2358,
    -432,   448,  4634,  2358,  1546,  2358,  4634,  -432,  -432,  3707,
    3707,  3707,   423,  2358,    63,  3501,  2358,  4247,  4280,  3707,
    2358,  -432,  2358,  -432,  2358,    63,  -432,   198,  -432,   449,
    -432,  1808,  -432,  -432,  2358,  3707,  1479,  3913,  1097,    94,
    2358,  -432,  2358,  2358,  2358,  3292,  3138,  2358,  2358,  4634,
    2358,  1479,  1479,  -432,  3837,   474,  1479,  3719,  -432,  4634,
     356,  4565,  2611,  3707,  2640,  -432,  4634,   450,  -432,  3707,
    3514,  -432,  -432,  2670,   378,  4313,  1150,   537,  -432,  -432,
     230,  3950,  2480,   110,  3707,  -432,  -432,  1176,   494,  2575,
    -432,  3441,  4634,  4634,   454,  2358,  -432,  4634,  4634,  4601,
      63,  -432,  -432,  -432,    63,  2358,  -432,  2358,  -432,  -432,
     137,  -432,   489,    63,  2699,  -432,  -432,  -432,  2358,  -432,
    2358,  -432,  3707,  -432,  -432,  2490,  2575,  -432,  2729,  -432,
    2524,   206,  3577,  3707,  3837,   463,  3707,   478,  -432,  2358,
    -432,  -432,  3002,  2932,  2758,  -432,  2541,  -432,  -432,  2358,
    2358,  -432,  3707,  -432,  -432,  2788,  2358,  4634,  -432,  2358,
    -432,  -432,  -432,  3353,  3174,  -432,  3590,  3035,  2358,  -432,
    3707,  -432,  3653,  3707,  -432
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -432,  -432,   544,  -432,  -432,   -25,   -47,  -432,   346,   500,
    -432,  -432,     4,   199,   327,  -325,  -147,  -432,   197,   437,
     126,   -36,  -432,  -432,   754,    10,  -102,   338,   227,  -432,
    -202,   352,   546,  -134,  -432,   273,   300,   340,  -432,    41,
    -431,  -150,   114,   309,  -432,    78,  -312,  -432,  -381,   581,
    -199,     3,   525,  -432,  -432,   755,  -432,   -49,   -21,    34,
     144,     0,   -10,   390
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -288
static const yytype_int16 yytable[] =
{
      30,   163,   128,   110,    22,   262,   185,   271,   147,   336,
      62,   133,   490,   338,   442,   230,    30,   209,   122,   433,
      22,     1,   476,    30,   114,   120,   514,   301,   529,   296,
     468,   224,   259,     1,    28,   112,    62,   281,   211,     3,
       4,     3,     4,   214,   151,   215,   216,   283,     6,     3,
      28,   180,   540,    62,   129,   212,   235,    28,   236,    34,
       6,     1,   134,    34,   221,   477,     1,    30,   541,   469,
     542,   470,   329,   330,   332,   282,   335,   139,   222,    48,
       3,     4,   260,   217,   210,   284,   185,   225,     6,   126,
     226,    48,   127,     6,   210,   573,   515,    13,   190,    13,
     370,    28,   543,     1,   362,     2,   363,   110,    14,   122,
      14,     3,     4,    15,   114,    15,   120,   205,   243,    48,
     344,   345,   519,   118,    48,   353,     5,   118,   130,   358,
       6,   247,    34,    62,   256,     3,     4,   206,    13,   485,
     131,   207,     7,   296,    29,   208,   264,   266,   420,    14,
       8,    64,   202,   203,    15,   270,   163,   272,   579,   163,
      29,    48,   394,   592,     1,   377,   596,    29,   395,    13,
     291,   626,   627,   580,   616,   532,   291,   176,   542,   303,
      14,   438,   112,   443,   126,    15,   533,   127,   238,   617,
     503,     6,   545,    13,   542,   219,   118,     1,   119,     2,
     239,   110,   504,   577,    14,     3,     4,     3,     4,    15,
     220,    29,   110,   110,    30,   457,   628,   227,   339,   391,
       5,   112,    48,   215,     6,     3,     4,   163,   371,   458,
     372,     1,   389,   392,   459,   354,     7,   163,   223,   247,
     359,   520,    34,   643,     8,   357,   367,   615,    28,   440,
     272,   441,   190,   266,   620,    48,   530,   272,     6,   427,
     114,   491,   232,    13,   428,    13,   409,   387,   151,   151,
     265,   371,   380,   499,    14,   381,    14,   522,     1,    15,
     237,    15,   303,    13,   568,   256,   639,    30,   640,    48,
     291,   636,   439,   517,    14,   218,   290,   222,   272,    15,
     257,     1,   424,   200,   201,     6,   202,   203,   126,   611,
     409,   127,   373,   374,   222,   267,   379,   489,   448,   570,
     210,    28,    34,   375,   126,     3,     4,   127,     6,   524,
     126,    30,   380,   127,   449,   381,    48,  -257,   466,    30,
       1,    30,     2,   525,   550,   444,   267,   464,   526,   480,
     303,   228,   304,   126,   229,   488,   127,   305,    29,    48,
    -261,   368,   348,     5,   510,    28,   247,     6,   511,   377,
    -287,   463,    62,    28,   151,    28,   564,   272,   272,     7,
     474,   296,   268,    13,   285,   151,   118,     8,   119,   266,
     233,   151,   266,   234,    14,   299,   300,   287,    48,    15,
     584,   275,   267,   396,   276,   296,   296,   296,   126,   277,
     463,   127,   278,   409,     4,   365,   296,   185,   366,   132,
     349,   126,   294,   480,   127,   296,     1,   434,     2,   435,
     376,    29,   303,   377,    30,   597,   385,   598,   546,   303,
     377,   430,    30,   343,   276,   431,   444,   432,   303,     5,
     303,   436,   447,     6,   276,   229,   378,   455,   291,   151,
     366,   606,   303,   625,    62,     7,   266,   461,    28,   190,
     377,   296,   112,     8,   486,    29,    28,   487,   352,   501,
     266,   409,   502,    29,    48,    29,   518,   296,   266,   502,
     480,   471,   472,   523,   272,   296,   362,   355,   296,   291,
     291,   291,    30,   356,   558,   590,   480,   410,   411,   291,
     594,   110,   301,   521,   446,   567,   296,   197,   198,   199,
     200,   201,   450,   202,   203,   291,   151,   451,   578,   548,
     569,   602,   303,   502,   603,   621,    28,   452,   303,   453,
     123,   151,   151,   538,   644,   328,   151,   303,   333,   506,
     534,   610,   291,   291,   291,   593,    55,   629,   646,   291,
     125,   342,    28,   291,   213,   460,   361,   351,   462,   123,
     445,   252,   578,   422,   291,   346,   398,    30,    29,    30,
     555,   444,    55,   591,   528,   136,    29,   400,   140,   141,
     266,   153,    63,   326,   266,   155,   158,   177,   182,    55,
       0,     0,     0,   630,   291,     0,    28,     0,     0,     0,
       0,    28,   291,    28,     0,    30,    30,     0,   291,   444,
      30,     0,     0,   291,   444,   552,   291,   554,     0,     0,
       1,   123,     2,     0,   291,   563,    30,     0,     3,     4,
     444,     0,   291,   231,     0,   291,    29,     0,     0,    28,
      28,   572,     0,     5,    28,     0,     0,     6,     0,   123,
     291,     0,     0,   291,     0,     0,     0,     0,     0,     7,
      28,     0,    29,     0,     0,     0,   242,     8,     0,    55,
       0,     0,   123,     9,     0,    10,     0,     0,    11,    12,
       0,     0,     0,     0,     0,     0,    13,     0,     0,     0,
     618,     0,     0,     0,     0,     0,     0,    14,     0,   279,
     280,     0,    15,     0,   136,     0,    29,   292,   293,     0,
       0,    29,     0,    29,     0,     0,     0,     0,     0,     0,
     563,     0,   306,   307,   308,   309,     0,   311,   634,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   642,
       0,   327,   645,     0,    23,   334,     0,   123,     0,    29,
      29,     0,   123,    31,    29,     0,    67,   107,   113,     0,
      23,     0,     0,     0,     0,   123,     0,     0,     0,     0,
      29,     0,   123,     0,   360,     0,   663,     0,     0,     0,
       0,     0,     0,   123,   123,     0,     0,     0,     0,   150,
     154,     0,     0,     0,   382,   383,   384,     0,     0,     0,
     123,   386,     0,     0,     0,     0,   393,     0,    67,   397,
       0,     0,     0,   123,   399,     0,     0,   403,     0,   404,
       1,     0,   406,     0,     0,     0,     0,     0,     0,     0,
     418,     0,     0,   419,     0,     0,   421,   423,     0,   425,
       0,   426,     0,     0,     0,   164,   165,     6,   113,     0,
       0,     0,     0,     0,   166,     0,   288,     0,   289,     0,
       0,   107,   169,   170,     0,     0,     0,     0,   171,     0,
       0,   172,     0,   240,     0,   246,   248,     0,    48,   150,
       0,     0,   412,     0,     0,     0,     0,     0,     0,   123,
       0,     0,   123,   123,     0,     0,   413,     0,     0,     0,
     123,     0,   150,     0,     0,     0,   123,     0,    55,   465,
       0,   467,     0,     0,     0,   473,     0,   475,     0,   124,
       0,     0,     1,     0,     2,     0,     0,     0,     0,     0,
       3,     4,   492,     0,   310,     0,   312,   496,     0,     0,
       0,     0,     0,     0,     0,     5,     0,   505,   325,     6,
     507,     0,   508,     0,     0,   107,     0,     0,    23,    67,
       0,     7,     0,     0,     0,     0,   107,   107,   347,     8,
       0,   350,     0,     0,   123,     9,     0,    10,     0,     0,
      11,    12,     0,   246,     0,     0,     0,     0,    13,     0,
       0,     0,     0,   527,   369,   150,     0,     0,     0,    14,
      55,     0,   150,     0,    15,   535,   536,     0,     0,   123,
       0,     0,     0,   150,   150,   539,     0,     0,     0,     0,
     544,     0,     0,     0,     0,   547,     0,     0,     0,   549,
     150,   551,     0,     0,     0,     0,     0,     0,     0,   556,
       0,   123,   560,   150,     0,     0,     0,     0,   565,     0,
     566,     0,     0,     0,     0,     0,   123,   123,     0,     0,
     571,   123,     0,     0,     0,     0,   581,     0,   582,   583,
       0,     0,     0,   587,   588,     0,   589,     0,     0,     0,
       0,     0,     0,    23,     0,    23,     0,   240,     0,     0,
       1,     0,     2,     0,     0,     0,     0,     0,     3,     4,
       0,     0,     0,     0,     0,     0,   456,     0,     0,     0,
     246,     0,     0,     5,     0,   164,   165,     6,     0,   150,
       0,   622,   150,   150,   166,     0,   288,     0,   289,     7,
     150,   624,   169,   170,     0,     0,   150,     8,   171,     0,
       0,   172,     0,     0,   632,     0,   633,     0,    48,     0,
       0,     0,   173,     0,     0,     0,    13,     0,     0,   186,
     187,   188,   189,   190,     0,   647,   191,    14,     0,     1,
     576,     2,    15,     0,     0,   653,   654,     3,     4,     0,
       0,     0,   656,   192,     0,   657,    23,     0,     0,     0,
     193,     0,     5,     0,   662,     0,     6,     0,     1,    32,
       2,    33,   112,    34,   150,    35,     0,   194,     7,   195,
     196,   197,   198,   199,   200,   201,     8,   202,   203,     0,
       0,     5,     0,     0,   608,     6,   609,    48,     0,     0,
       0,     0,     0,    37,   135,    13,    39,     7,     0,   150,
       0,     0,    40,    41,    42,     8,    14,    44,    45,   619,
      46,    15,     0,     0,     0,    47,    48,     0,     0,     0,
       0,     0,     0,     0,     0,   107,     0,    49,     0,     1,
       0,   150,    23,     0,     0,    50,   156,    51,     0,     0,
      52,     0,     0,     0,     0,   157,   150,   150,     0,     0,
       0,   150,     0,     0,   164,   165,     6,     0,     0,     0,
       0,     0,     0,   166,     0,   288,     0,   289,     0,     0,
       0,   169,   170,     0,     0,     0,    23,   171,     0,     0,
     172,    23,     0,    23,     0,     0,     0,    48,     0,     0,
       0,   173,     0,     0,     0,     0,     0,     0,   142,    32,
       0,     0,   112,    34,     0,     0,     3,     4,     0,   295,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
      23,    69,     0,    70,    23,   143,    72,    73,    74,    75,
      76,    77,    78,    79,    80,     0,    81,    82,    83,    84,
      23,    85,    86,    87,    88,    89,    90,    91,     0,    92,
      93,     0,    94,    95,     0,    96,   144,    98,    99,   100,
     101,   102,     0,     0,    13,   142,    32,   118,     0,   112,
      34,     0,     0,     3,     4,    14,   388,     0,     0,     0,
      15,     0,     0,   145,   146,     0,     0,     0,    69,     0,
      70,     0,   143,    72,    73,    74,    75,    76,    77,    78,
      79,    80,     0,    81,    82,    83,    84,     0,    85,    86,
      87,    88,    89,    90,    91,     0,    92,    93,     0,    94,
      95,     0,    96,   144,    98,    99,   100,   101,   102,     0,
       0,    13,   142,    32,   118,     0,     0,    34,     0,     0,
       3,     4,   250,     0,     0,     0,     0,    15,     0,     0,
     145,   146,     0,     0,     0,    69,     0,    70,     0,   143,
      72,    73,    74,    75,    76,    77,    78,    79,    80,     0,
      81,    82,    83,    84,     0,    85,    86,    87,    88,    89,
      90,    91,     0,    92,    93,     0,    94,    95,     0,    96,
     144,    98,    99,   100,   101,   102,     0,     0,    13,   142,
      32,   118,     0,     0,    34,     0,     0,     3,     4,    14,
       0,     0,     0,     0,    15,     0,     0,   145,   146,     0,
       0,     0,    69,     0,    70,     0,   143,    72,    73,    74,
      75,    76,    77,    78,    79,    80,     0,    81,    82,    83,
      84,     0,    85,    86,    87,    88,    89,    90,    91,     0,
      92,    93,     0,    94,    95,     0,    96,   144,    98,    99,
     100,   101,   102,     0,     0,    13,     0,     0,   118,     0,
       1,    32,     2,    33,     0,    34,   250,    35,     0,     0,
       0,    15,     0,     0,   145,   146,     0,     0,     0,     0,
       0,     0,     0,     5,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     0,    37,   135,     0,    39,     7,
       0,     0,     0,     0,    40,    41,    42,     8,     0,    44,
      45,     0,    46,     0,     0,     0,     0,    47,    48,     0,
       0,     0,    68,     0,     0,     0,     0,     0,     0,    49,
       3,     4,     0,     0,     0,     0,     0,    50,     0,    51,
       0,     0,    52,   181,     0,    69,     0,    70,     0,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,     0,
      81,    82,    83,    84,     0,    85,    86,    87,    88,    89,
      90,    91,     0,    92,    93,     0,    94,    95,     0,    96,
      97,    98,    99,   100,   101,   102,     0,    68,    13,     0,
     103,   112,     0,     0,     0,     3,     4,     0,     0,   104,
       0,   105,     0,     0,   106,     0,     0,     0,     0,     0,
      69,     0,    70,     0,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,     0,    81,    82,    83,    84,     0,
      85,    86,    87,    88,    89,    90,    91,     0,    92,    93,
       0,    94,    95,     0,    96,    97,    98,    99,   100,   101,
     102,    68,     0,    13,     0,     0,     0,     0,     0,     3,
       4,     0,     0,     0,   104,     0,   105,     0,     0,   106,
       0,     0,     0,     0,    69,     0,    70,     0,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,     0,    81,
      82,    83,    84,     0,    85,    86,    87,    88,    89,    90,
      91,     0,    92,    93,     0,    94,    95,     0,    96,    97,
      98,    99,   100,   101,   102,     0,     0,    13,     1,    32,
       2,    33,     0,    34,     0,    35,     0,     0,   104,     0,
     105,     0,     0,   106,     0,     0,     0,     0,     0,     0,
       0,     5,     0,   164,   165,     6,     0,     0,     0,     0,
       0,     0,   166,    37,   167,     0,   168,     7,     0,     0,
     169,   170,    40,    41,    42,     8,   171,    44,    45,   172,
      46,     0,     0,     0,     0,    47,    48,     0,     0,     0,
     173,     1,    32,     2,    33,     0,    34,    49,    35,     0,
       0,     0,     0,     0,     0,    50,     0,    51,   174,     0,
      52,     0,     0,     0,     5,     0,     0,     0,     6,     0,
      36,     0,     0,     0,     0,     0,    37,    38,     0,    39,
       7,     0,     0,     0,     0,    40,    41,    42,     8,    43,
      44,    45,     0,    46,     0,     0,     0,     0,    47,    48,
       0,     1,    32,     2,    33,     0,    34,     0,    35,     0,
      49,     0,     0,     0,     0,     0,     0,     0,    50,     0,
      51,     0,     0,    52,     5,     0,     0,     0,     6,     0,
       0,     0,     0,     0,   184,     0,    37,    38,     0,    39,
       7,     0,     0,     0,     0,    40,    41,    42,     8,    43,
      44,    45,     0,    46,     0,     0,     0,     0,    47,    48,
       0,     1,    32,     2,    33,     0,    34,     0,    35,     0,
      49,     0,     0,     0,     0,     0,     0,     0,    50,     0,
      51,     0,     0,    52,     5,     0,     0,     0,     6,     0,
       0,     0,     0,     0,   249,     0,    37,    38,     0,    39,
       7,     0,     0,     0,     0,    40,    41,    42,     8,    43,
      44,    45,     0,    46,     0,     0,     0,     0,    47,    48,
       0,     1,    32,     2,    33,   112,    34,     0,    35,     0,
      49,     0,     0,     0,     0,     0,     0,     0,    50,     0,
      51,     0,     0,    52,     5,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     0,    37,   135,     0,    39,
       7,     0,     0,     0,     0,    40,    41,    42,     8,     0,
      44,    45,     0,    46,     0,     0,     0,     0,    47,    48,
       0,     1,    32,     2,    33,     0,    34,     0,    35,     0,
      49,     0,     0,     0,     0,     0,     0,   331,    50,     0,
      51,     0,     0,    52,     5,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     0,    37,    38,     0,    39,
       7,     0,     0,     0,     0,    40,    41,    42,     8,    43,
      44,    45,     0,    46,     0,     0,     0,     0,    47,    48,
       0,     1,    32,     2,    33,     0,    34,     0,    35,     0,
      49,     0,     0,     0,     0,     0,     0,   531,    50,     0,
      51,     0,     0,    52,     5,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     0,    37,    38,     0,    39,
       7,     0,     0,     0,     0,    40,    41,    42,     8,    43,
      44,    45,     0,    46,     0,     0,     0,     0,    47,    48,
       0,     1,    32,     2,    33,   112,    34,     0,    35,     0,
      49,     0,     0,     0,     0,     0,     0,     0,    50,     0,
      51,     0,     0,    52,     5,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     0,    37,   135,     0,    39,
       7,     0,     0,     0,     0,    40,    41,    42,     8,     0,
      44,    45,     0,    46,     0,     0,     0,     0,    47,    48,
       0,     1,    32,     2,    33,     0,    34,     0,    35,     0,
      49,     0,     0,     0,     0,     0,     0,     0,    50,     0,
      51,     0,     0,    52,     5,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     0,    37,   135,     0,    39,
       7,     0,     0,     0,     0,    40,    41,    42,     8,     0,
      44,    45,     0,    46,     0,     0,     0,     0,    47,    48,
       0,     1,    32,     2,    33,     0,    34,     0,    35,     0,
      49,     0,     0,     0,     0,     0,     0,     0,    50,     0,
      51,     0,     0,    52,     5,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     0,    37,   135,     0,    39,
       7,     0,     0,     0,     0,    40,    41,    42,     8,     0,
      44,    45,     0,    46,     0,     0,     0,     0,    47,    48,
       0,     0,     0,     1,     0,     2,     0,     0,     0,     0,
      49,     3,     4,     1,     0,     2,     0,     0,   286,     0,
      51,     3,     4,    52,     0,     0,     5,     0,   164,   165,
       6,     0,     0,     0,     0,     0,     5,   166,     0,   288,
       6,   289,     7,     0,     0,   169,   170,     1,     0,     2,
       8,   171,     7,     0,   172,     3,     4,     0,     0,     0,
       8,    48,     0,     0,     1,   173,     2,     0,     0,    13,
       5,    48,     3,     4,     6,     0,     0,     0,     0,    13,
      14,     0,     0,   614,     0,    15,     7,     5,     0,     0,
      14,     6,     0,   635,     8,    15,     0,     0,     1,     0,
       2,     0,     0,     7,     0,    48,     3,     4,     0,     0,
       0,     8,     0,    13,     0,     0,     0,     0,     0,     0,
       0,     5,    48,   638,    14,     6,     0,     0,     0,    15,
      13,     0,     0,     0,     1,     0,     0,     7,     0,     0,
     652,    14,     0,     0,     0,     8,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,     0,     0,   164,
     165,     6,     0,     1,    13,     0,     0,     0,   166,     0,
     288,     0,   289,     0,     0,    14,   169,   170,     0,     0,
      15,     0,   171,     0,     0,   172,     0,     0,   164,   165,
       6,     0,    48,     1,     0,     0,   173,   166,     0,   288,
       0,   289,     0,     0,     0,   169,   170,     0,     0,     0,
     599,   171,     0,     0,   172,     0,     0,     0,   164,   165,
       6,    48,     1,     0,     0,   173,     0,   166,     0,   288,
       0,   289,     0,     0,     0,   169,   170,     0,     0,   601,
       0,   171,     0,     0,   172,     0,     0,   164,   165,     6,
       0,    48,     1,     0,     0,   173,   166,     0,   288,     0,
     289,     0,     0,     0,   169,   170,     0,     0,     0,   605,
     171,     0,     0,   172,     0,     0,     0,   164,   165,     6,
      48,     1,     0,     0,   173,     0,   166,     0,   288,     0,
     289,     0,     0,     0,   169,   170,     0,     0,   631,     0,
     171,     0,     0,   172,     0,     0,   164,   165,     6,     0,
      48,     1,     0,     0,   173,   166,     0,   288,     0,   289,
       0,     0,     0,   169,   170,     0,   186,   187,   637,   171,
     190,     0,   172,     0,     0,     0,   164,   165,     6,    48,
       0,     0,     0,   173,     0,   166,     0,   288,     0,   289,
       0,     0,     0,   169,   170,     0,     0,   651,     0,   171,
       0,     0,   172,     0,   186,   187,   188,   189,   190,    48,
       0,   191,     0,   173,     0,     0,   195,   196,   197,   198,
     199,   200,   201,     0,   202,   203,   297,   655,   192,     0,
       0,     0,     0,     0,     0,   193,     0,     0,     0,     0,
       0,     0,   186,   187,   188,   189,   190,     0,     0,   191,
       0,     0,   194,     0,   195,   196,   197,   198,   199,   200,
     201,     0,   202,   203,   493,     0,   192,     0,     0,     0,
       0,     0,   298,   193,     0,   186,   187,   188,   189,   190,
       0,     0,   191,     0,     0,     0,     0,     0,     0,     0,
     194,     0,   195,   196,   197,   198,   199,   200,   201,   192,
     202,   203,     0,     0,     0,     0,   193,     0,     0,     0,
     494,   186,   187,   188,   189,   190,     0,     0,   191,     0,
       0,     0,     0,   194,     0,   195,   196,   197,   198,   199,
     200,   201,     0,   202,   203,   192,     0,     0,     0,     0,
       0,     0,   193,   302,   186,   187,   188,   189,   190,     0,
       0,   191,     0,     0,     0,     0,     0,     0,     0,   194,
       0,   195,   196,   197,   198,   199,   200,   201,   192,   202,
     203,     0,     0,     0,     0,   193,   649,     0,   650,     0,
       0,   186,   187,   188,   189,   190,     0,     0,   191,     0,
       0,     0,   194,     0,   195,   196,   197,   198,   199,   200,
     201,     0,   202,   203,     0,   192,     0,     0,     0,     0,
       0,   516,   193,     0,   186,   187,   188,   189,   190,     0,
       0,   191,     0,     0,     0,     0,     0,     0,     0,   194,
       0,   195,   196,   197,   198,   199,   200,   201,   192,   202,
     203,     0,     0,     0,     0,   193,     0,   273,   648,     0,
       0,   186,   187,   188,   189,   190,     0,     0,   191,     0,
       0,     0,   194,     0,   195,   196,   197,   198,   199,   200,
     201,     0,   202,   203,     0,   192,     0,     0,     0,     0,
     273,   661,   193,     0,   186,   187,   188,   189,   190,     0,
       0,   191,     0,     0,     0,     0,     0,     0,     0,   194,
       0,   195,   196,   197,   198,   199,   200,   201,   192,   202,
     203,     0,     0,   274,     0,   193,     0,   186,   187,   188,
     189,   190,     0,     0,   191,     0,     0,     0,     0,     0,
       0,     0,   194,     0,   195,   196,   197,   198,   199,   200,
     201,   192,   202,   203,     0,     0,   500,     0,   193,     0,
       0,     0,     0,   186,   187,   188,   189,   190,     0,     0,
     191,     0,     0,     0,     0,   194,     0,   195,   196,   197,
     198,   199,   200,   201,     0,   202,   203,   192,     0,     0,
       0,   586,     0,     0,   193,     0,     0,     0,     0,     0,
       0,   323,    32,     0,     0,     0,     0,     0,     0,     0,
       0,   194,     0,   195,   196,   197,   198,   199,   200,   201,
       0,   202,   203,     0,    69,     0,    70,   659,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,     0,    81,
      82,    83,    84,     0,    85,    86,    87,    88,    89,    90,
      91,     0,    92,    93,     0,    94,    95,     0,    96,    97,
      98,    99,   100,   101,   102,   495,     0,     0,     0,   186,
     187,   188,   189,   190,     0,     0,   191,   585,     0,     0,
       0,   186,   187,   188,   189,   190,     0,     0,   191,     0,
       0,     0,     0,   192,     0,     0,     0,     0,     0,     0,
     193,     0,     0,     0,     0,   192,     0,     0,     0,     0,
       0,     0,   193,     0,     0,     0,     0,   194,     0,   195,
     196,   197,   198,   199,   200,   201,     0,   202,   203,   194,
       0,   195,   196,   197,   198,   199,   200,   201,   658,   202,
     203,     0,   186,   187,   188,   189,   190,     0,     0,   191,
       0,     0,     0,     0,   186,   187,   188,   189,   190,     0,
       0,   191,     0,     0,     0,     0,   192,     0,     0,     0,
       0,     0,     0,   193,     0,     0,     0,     0,   192,     0,
       0,     0,     0,     0,     0,   193,     0,     0,     0,     0,
     194,     0,   195,   196,   197,   198,   199,   200,   201,     0,
     202,   203,   194,     0,   195,   196,   197,   198,   199,   200,
     201,     0,   202,   203,     0,     0,   429,   186,   187,   188,
     189,   190,     0,     0,   191,     0,     0,   537,     0,     0,
     186,   187,   188,   189,   190,     0,     0,   191,     0,     0,
       0,   192,     0,     0,     0,     0,     0,     0,   193,     0,
       0,     0,     0,     0,   192,     0,     0,     0,     0,     0,
       0,   193,     0,     0,     0,   194,     0,   195,   196,   197,
     198,   199,   200,   201,     0,   202,   203,     0,   194,   509,
     195,   196,   197,   198,   199,   200,   201,     0,   202,   203,
     186,   187,   188,   189,   190,     0,     0,   191,     0,     0,
       0,     0,     0,   186,   187,   188,   189,   190,     0,     0,
     191,     0,     0,     0,   192,     0,     0,     0,     0,     0,
       0,   193,     0,     0,     0,     0,     0,   192,     0,     0,
       0,     0,     0,     0,   193,     0,     0,     0,   194,     0,
     195,   196,   197,   198,   199,   200,   201,     0,   202,   203,
       0,   194,   559,   195,   196,   197,   198,   199,   200,   201,
       0,   202,   203,     0,     0,   604,   186,   187,   188,   189,
     190,     0,     0,   191,     0,     0,     0,     0,     0,   186,
     187,   188,   189,   190,     0,     0,   191,     0,     0,     0,
     192,     0,     0,     0,     0,     0,     0,   193,     0,     0,
       0,     0,     0,   192,     0,   186,   187,   188,   189,   190,
     193,     0,   191,     0,   194,     0,   195,   196,   197,   198,
     199,   200,   201,     0,   202,   203,     0,   194,   641,   195,
     196,   197,   198,   199,   200,   201,   193,   202,   203,     0,
       0,   660,   186,   187,   188,   189,   190,     0,     0,   191,
       0,     0,     0,  -288,     0,   195,   196,   197,   198,   199,
     200,   201,     0,   202,   203,     0,   192,     0,     0,     0,
       0,     0,     0,   193,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     194,     0,   195,   196,   197,   198,   199,   200,   201,     0,
     202,   203,     0,     0,   664,   164,   165,     6,   186,   187,
     188,   189,   190,     0,   166,   191,   288,     0,   289,     0,
       0,     0,   169,   170,     0,   476,     0,     0,   171,     0,
     595,   172,   192,     0,     0,     0,     0,     0,    48,   193,
       0,     0,   173,     0,     0,     0,     0,   186,   187,   188,
     189,   190,     0,     0,   191,     0,   194,     0,   195,   196,
     197,   198,   199,   200,   201,     0,   202,   203,   477,   414,
       0,   192,     0,     0,     0,     0,     0,     0,   193,     0,
       0,     0,     0,     0,     0,     0,   186,   187,   188,   189,
     190,     0,     0,   191,     0,   194,     0,   195,   196,   197,
     198,   199,   200,   201,     0,   202,   203,   415,   416,     0,
     192,     0,     0,     0,     0,     0,     0,   193,     0,     0,
       0,     0,     0,     0,     0,     0,   186,   187,   188,   189,
     190,     0,     0,   191,   194,     0,   195,   196,   197,   198,
     199,   200,   201,   476,   202,   203,   417,     0,     0,     0,
     192,     0,     0,     0,     0,     0,     0,   193,     0,     0,
       0,     0,     0,     0,     0,   186,   187,   188,   189,   190,
       0,     0,   191,     0,   194,     0,   195,   196,   197,   198,
     199,   200,   201,     0,   202,   203,   477,   512,     0,   192,
       0,     0,     0,     0,     0,     0,   193,     0,     0,     0,
       0,     0,   186,   187,   188,   189,   190,     0,     0,   191,
       0,     0,     0,   194,     0,   195,   196,   197,   198,   199,
     200,   201,     0,   202,   203,   513,   192,     0,   574,     0,
       0,     0,     0,   193,     0,     0,     0,     0,     0,   186,
     187,   188,   189,   190,     0,     0,   191,     0,     0,     0,
     194,     0,   195,   196,   197,   198,   199,   200,   201,     0,
     202,   203,   575,   192,     0,   612,     0,     0,     0,     0,
     193,     0,   186,   187,   188,   189,   190,     0,     0,   191,
       0,     0,     0,     0,     0,     0,     0,   194,     0,   195,
     196,   197,   198,   199,   200,   201,   192,   202,   203,   613,
       0,     0,     0,   193,     0,   186,   187,   188,   189,   190,
       0,     0,   191,     0,     0,     0,     0,     0,     0,     0,
     194,     0,   195,   196,   197,   198,   199,   200,   201,   192,
     202,   203,   204,     0,     0,     0,   193,     0,   186,   187,
     188,   189,   190,     0,     0,   191,     0,     0,     0,     0,
       0,     0,     0,   194,     0,   195,   196,   197,   198,   199,
     200,   201,   192,   202,   203,   263,     0,     0,     0,   193,
       0,   186,   187,   188,   189,   190,     0,     0,   191,     0,
       0,     0,     0,     0,     0,     0,   194,     0,   195,   196,
     197,   198,   199,   200,   201,   192,   202,   203,   364,     0,
       0,     0,   193,     0,   186,   187,   188,   189,   190,     0,
       0,   191,     0,     0,     0,     0,     0,     0,     0,   194,
       0,   195,   196,   197,   198,   199,   200,   201,   192,   202,
     203,   402,     0,     0,     0,   193,     0,   186,   187,   188,
     189,   190,     0,     0,   191,     0,     0,     0,     0,     0,
       0,     0,   194,     0,   195,   196,   197,   198,   199,   200,
     201,   192,   202,   203,   437,     0,     0,     0,   193,     0,
     186,   187,   188,   189,   190,     0,     0,   191,     0,     0,
       0,     0,     0,     0,     0,   194,     0,   195,   196,   197,
     198,   199,   200,   201,   192,   202,   203,   454,     0,     0,
       0,   193,     0,   186,   187,   188,   189,   190,     0,     0,
     191,     0,     0,     0,     0,     0,     0,     0,   194,     0,
     195,   196,   197,   198,   199,   200,   201,   192,   202,   203,
     497,     0,     0,     0,   193,     0,   186,   187,   188,   189,
     190,     0,     0,   191,     0,     0,     0,     0,     0,     0,
       0,   194,     0,   195,   196,   197,   198,   199,   200,   201,
     192,   202,   203,   498,     0,     0,     0,   193,     0,   186,
     187,   188,   189,   190,     0,     0,   191,     0,     0,     0,
       0,     0,     0,     0,   194,     0,   195,   196,   197,   198,
     199,   200,   201,   192,   202,   203,   561,     0,     0,     0,
     193,     0,   186,   187,   188,   189,   190,     0,     0,   191,
       0,     0,     0,     0,     0,     0,     0,   194,     0,   195,
     196,   197,   198,   199,   200,   201,   192,   202,   203,   562,
       0,     0,     0,   193,     0,   186,   187,   188,   189,   190,
       0,     0,   191,     0,     0,     0,     0,     0,     0,     0,
     194,     0,   195,   196,   197,   198,   199,   200,   201,   192,
     202,   203,   607,     0,     0,     0,   193,     0,     0,     0,
       0,     0,     0,   258,   186,   187,   188,   189,   190,     0,
       0,   191,     0,   194,     0,   195,   196,   197,   198,   199,
     200,   201,     0,   202,   203,   269,     0,     0,   192,     0,
       0,     0,     0,     0,     0,   193,     0,     0,     0,     0,
       0,     0,   186,   187,   188,   189,   190,     0,     0,   191,
       0,     0,   194,     0,   195,   196,   197,   198,   199,   200,
     201,     0,   202,   203,   401,     0,   192,     0,     0,     0,
       0,     0,     0,   193,     0,   186,   187,   188,   189,   190,
       0,     0,   191,     0,     0,     0,     0,     0,     0,     0,
     194,     0,   195,   196,   197,   198,   199,   200,   201,   192,
     202,   203,     0,     0,     0,     0,   193,     0,   186,   187,
     188,   189,   190,   479,     0,   191,     0,     0,     0,     0,
       0,     0,     0,   194,     0,   195,   196,   197,   198,   199,
     200,   201,   192,   202,   203,     0,     0,     0,     0,   193,
       0,     0,     0,     0,     0,     0,   186,   187,   188,   189,
     190,     0,     0,   191,     0,   484,   194,     0,   195,   196,
     197,   198,   199,   200,   201,     0,   202,   203,   297,     0,
     192,     0,     0,     0,     0,     0,     0,   193,     0,     0,
       0,     0,     0,     0,   186,   187,   188,   189,   190,     0,
       0,   191,     0,     0,   194,     0,   195,   196,   197,   198,
     199,   200,   201,     0,   202,   203,   493,     0,   192,     0,
       0,     0,     0,     0,     0,   193,     0,     0,     0,     0,
     186,   187,   188,   189,   190,     0,     0,   191,     0,     0,
       0,     0,   194,     0,   195,   196,   197,   198,   199,   200,
     201,     0,   202,   203,   192,     0,   623,     0,     0,     0,
       0,   193,     0,   186,   187,   188,   189,   190,     0,     0,
     191,     0,     0,   186,   187,   188,   189,   190,   194,     0,
     195,   196,   197,   198,   199,   200,   201,   192,   202,   203,
       0,     0,     0,     0,   193,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   194,     0,   195,   196,   197,   198,   199,   200,   201,
       0,   202,   203,   195,   196,   197,   198,   199,   200,   201,
       0,   202,   203
};

static const yytype_int16 yycheck[] =
{
       0,    50,    23,    13,     0,   139,    53,   157,    44,   211,
      10,    36,   393,   212,   339,   117,    16,    18,    15,   331,
      16,     3,    36,    23,    14,    15,    14,    18,   459,   176,
      41,    15,    34,     3,     0,     7,    36,    41,    68,    11,
      12,    11,    12,    82,    44,    84,    67,    41,    30,    11,
      16,    51,    68,    53,    85,    85,    84,    23,    86,     8,
      30,     3,    80,     8,    70,    79,     3,    67,    84,    80,
      84,    82,   206,   207,   208,    79,   210,    80,    84,    61,
      11,    12,    84,    70,    85,    79,   133,    71,    30,    71,
      74,    61,    74,    30,    85,   526,    84,    69,    23,    69,
     250,    67,   483,     3,    84,     5,    86,   117,    80,   106,
      80,    11,    12,    85,   104,    85,   106,    80,    88,    61,
     222,   223,   434,    72,    61,    74,    26,    72,    68,    74,
      30,   131,     8,   133,   134,    11,    12,    80,    69,    81,
      80,    80,    42,   290,     0,    80,   146,   147,   298,    80,
      50,    82,    77,    78,    85,    42,   205,   157,    64,   208,
      16,    61,    81,   544,     3,    84,   547,    23,    87,    69,
     170,    34,    35,    79,    64,    14,   176,    51,    84,    84,
      80,    86,     7,    83,    71,    85,    25,    74,    68,    79,
      68,    30,    17,    69,    84,    83,    72,     3,    74,     5,
      80,   211,    80,   528,    80,    11,    12,    11,    12,    85,
      86,    67,   222,   223,   214,    68,    79,    67,    79,   268,
      26,     7,    61,    84,    30,    11,    12,   276,    79,    82,
      81,     3,   268,   269,    87,   232,    42,   286,    80,   239,
     237,   440,     8,   624,    50,   235,   246,   572,   214,    84,
     250,    86,    23,   253,   579,    61,    68,   257,    30,    85,
     250,   395,    16,    69,    90,    69,   287,   267,   268,   269,
      42,    79,    84,    81,    80,    87,    80,    83,     3,    85,
      16,    85,    84,    69,    86,   285,    80,   287,    82,    61,
     290,   616,    79,   427,    80,    81,   170,    84,   298,    85,
      80,     3,   302,    74,    75,    30,    77,    78,    71,    79,
     331,    74,    14,    15,    84,    67,    68,    42,    81,   521,
      85,   287,     8,    25,    71,    11,    12,    74,    30,    68,
      71,   331,    84,    74,    81,    87,    61,    80,   374,   339,
       3,   341,     5,    82,   494,   341,    67,   372,    87,   385,
      84,    81,    86,    71,    84,   391,    74,    91,   214,    61,
      80,    79,    81,    26,    79,   331,   366,    30,    83,    84,
      80,   371,   372,   339,   374,   341,   510,   377,   378,    42,
     380,   528,    80,    69,    80,   385,    72,    50,    74,   389,
      71,   391,   392,    74,    80,    83,    84,    80,    61,    85,
     534,    81,    67,    68,    84,   552,   553,   554,    71,    81,
     410,    74,    84,   434,    12,    81,   563,   464,    84,    69,
      81,    71,    80,   459,    74,   572,     3,    79,     5,    81,
      81,   287,    84,    84,   434,    79,    81,    81,   487,    84,
      84,    81,   442,    80,    84,    81,   442,    81,    84,    26,
      84,    81,    81,    30,    84,    84,    24,    81,   458,   459,
      84,    83,    84,   597,   464,    42,   466,    81,   434,    23,
      84,   618,     7,    50,    81,   331,   442,    84,    90,    81,
     480,   502,    84,   339,    61,   341,    81,   634,   488,    84,
     526,   377,   378,    81,   494,   642,    84,    86,   645,   499,
     500,   501,   502,    86,   504,   541,   542,    80,    80,   509,
     546,   521,    18,    68,    81,   515,   663,    71,    72,    73,
      74,    75,    86,    77,    78,   525,   526,    86,   528,    81,
      81,    81,    84,    84,    84,    81,   502,    86,    84,    86,
      15,   541,   542,    87,    81,   205,   546,    84,   208,    80,
      80,    14,   552,   553,   554,    81,    10,    68,    80,   559,
      16,   215,   528,   563,    64,   366,   239,   229,   371,    44,
     343,   134,   572,   300,   574,   223,   276,   577,   434,   579,
     502,   577,    36,   542,   458,    39,   442,   278,    42,    43,
     590,    45,    11,   203,   594,    49,    50,    51,    52,    53,
      -1,    -1,    -1,   603,   604,    -1,   572,    -1,    -1,    -1,
      -1,   577,   612,   579,    -1,   615,   616,    -1,   618,   615,
     620,    -1,    -1,   623,   620,   499,   626,   501,    -1,    -1,
       3,   106,     5,    -1,   634,   509,   636,    -1,    11,    12,
     636,    -1,   642,   118,    -1,   645,   502,    -1,    -1,   615,
     616,   525,    -1,    26,   620,    -1,    -1,    30,    -1,   134,
     660,    -1,    -1,   663,    -1,    -1,    -1,    -1,    -1,    42,
     636,    -1,   528,    -1,    -1,    -1,   130,    50,    -1,   133,
      -1,    -1,   157,    56,    -1,    58,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,
     574,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,   163,
     164,    -1,    85,    -1,   168,    -1,   572,   171,   172,    -1,
      -1,   577,    -1,   579,    -1,    -1,    -1,    -1,    -1,    -1,
     604,    -1,   186,   187,   188,   189,    -1,   191,   612,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   623,
      -1,   205,   626,    -1,     0,   209,    -1,   232,    -1,   615,
     616,    -1,   237,     9,   620,    -1,    12,    13,    14,    -1,
      16,    -1,    -1,    -1,    -1,   250,    -1,    -1,    -1,    -1,
     636,    -1,   257,    -1,   238,    -1,   660,    -1,    -1,    -1,
      -1,    -1,    -1,   268,   269,    -1,    -1,    -1,    -1,    44,
      46,    -1,    -1,    -1,   258,   259,   260,    -1,    -1,    -1,
     285,   265,    -1,    -1,    -1,    -1,   270,    -1,    64,   273,
      -1,    -1,    -1,   298,   278,    -1,    -1,   281,    -1,   283,
       3,    -1,   286,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     294,    -1,    -1,   297,    -1,    -1,   300,   301,    -1,   303,
      -1,   305,    -1,    -1,    -1,    28,    29,    30,   104,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    39,    -1,    41,    -1,
      -1,   117,    45,    46,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    54,    -1,   129,    -1,   131,   132,    -1,    61,   134,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,   374,
      -1,    -1,   377,   378,    -1,    -1,    79,    -1,    -1,    -1,
     385,    -1,   157,    -1,    -1,    -1,   391,    -1,   372,   373,
      -1,   375,    -1,    -1,    -1,   379,    -1,   381,    -1,     0,
      -1,    -1,     3,    -1,     5,    -1,    -1,    -1,    -1,    -1,
      11,    12,   396,    -1,   190,    -1,   192,   401,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,   411,   203,    30,
     414,    -1,   416,    -1,    -1,   211,    -1,    -1,   214,   215,
      -1,    42,    -1,    -1,    -1,    -1,   222,   223,   224,    50,
      -1,   227,    -1,    -1,   459,    56,    -1,    58,    -1,    -1,
      61,    62,    -1,   239,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,   457,   250,   250,    -1,    -1,    -1,    80,
     464,    -1,   257,    -1,    85,   469,   470,    -1,    -1,   494,
      -1,    -1,    -1,   268,   269,   479,    -1,    -1,    -1,    -1,
     484,    -1,    -1,    -1,    -1,   489,    -1,    -1,    -1,   493,
     285,   495,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   503,
      -1,   526,   506,   298,    -1,    -1,    -1,    -1,   512,    -1,
     514,    -1,    -1,    -1,    -1,    -1,   541,   542,    -1,    -1,
     524,   546,    -1,    -1,    -1,    -1,   530,    -1,   532,   533,
      -1,    -1,    -1,   537,   538,    -1,   540,    -1,    -1,    -1,
      -1,    -1,    -1,   339,    -1,   341,    -1,   343,    -1,    -1,
       3,    -1,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,   362,    -1,    -1,    -1,
     366,    -1,    -1,    26,    -1,    28,    29,    30,    -1,   374,
      -1,   585,   377,   378,    37,    -1,    39,    -1,    41,    42,
     385,   595,    45,    46,    -1,    -1,   391,    50,    51,    -1,
      -1,    54,    -1,    -1,   608,    -1,   610,    -1,    61,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    69,    -1,    -1,    19,
      20,    21,    22,    23,    -1,   629,    26,    80,    -1,     3,
      83,     5,    85,    -1,    -1,   639,   640,    11,    12,    -1,
      -1,    -1,   646,    43,    -1,   649,   442,    -1,    -1,    -1,
      50,    -1,    26,    -1,   658,    -1,    30,    -1,     3,     4,
       5,     6,     7,     8,   459,    10,    -1,    67,    42,    69,
      70,    71,    72,    73,    74,    75,    50,    77,    78,    -1,
      -1,    26,    -1,    -1,    84,    30,    86,    61,    -1,    -1,
      -1,    -1,    -1,    38,    39,    69,    41,    42,    -1,   494,
      -1,    -1,    47,    48,    49,    50,    80,    52,    53,    83,
      55,    85,    -1,    -1,    -1,    60,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   521,    -1,    72,    -1,     3,
      -1,   526,   528,    -1,    -1,    80,    81,    82,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    90,   541,   542,    -1,    -1,
      -1,   546,    -1,    -1,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    39,    -1,    41,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,   572,    51,    -1,    -1,
      54,   577,    -1,   579,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,     7,     8,    -1,    -1,    11,    12,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   615,
     616,    26,    -1,    28,   620,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
     636,    46,    47,    48,    49,    50,    51,    52,    -1,    54,
      55,    -1,    57,    58,    -1,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    69,     3,     4,    72,    -1,     7,
       8,    -1,    -1,    11,    12,    80,    81,    -1,    -1,    -1,
      85,    -1,    -1,    88,    89,    -1,    -1,    -1,    26,    -1,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    41,    42,    43,    44,    -1,    46,    47,
      48,    49,    50,    51,    52,    -1,    54,    55,    -1,    57,
      58,    -1,    60,    61,    62,    63,    64,    65,    66,    -1,
      -1,    69,     3,     4,    72,    -1,    -1,     8,    -1,    -1,
      11,    12,    80,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      88,    89,    -1,    -1,    -1,    26,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      41,    42,    43,    44,    -1,    46,    47,    48,    49,    50,
      51,    52,    -1,    54,    55,    -1,    57,    58,    -1,    60,
      61,    62,    63,    64,    65,    66,    -1,    -1,    69,     3,
       4,    72,    -1,    -1,     8,    -1,    -1,    11,    12,    80,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    88,    89,    -1,
      -1,    -1,    26,    -1,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    -1,    46,    47,    48,    49,    50,    51,    52,    -1,
      54,    55,    -1,    57,    58,    -1,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    -1,    -1,    72,    -1,
       3,     4,     5,     6,    -1,     8,    80,    10,    -1,    -1,
      -1,    85,    -1,    -1,    88,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,    42,
      -1,    -1,    -1,    -1,    47,    48,    49,    50,    -1,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      11,    12,    -1,    -1,    -1,    -1,    -1,    80,    -1,    82,
      -1,    -1,    85,    86,    -1,    26,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      41,    42,    43,    44,    -1,    46,    47,    48,    49,    50,
      51,    52,    -1,    54,    55,    -1,    57,    58,    -1,    60,
      61,    62,    63,    64,    65,    66,    -1,     3,    69,    -1,
      71,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,    80,
      -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    41,    42,    43,    44,    -1,
      46,    47,    48,    49,    50,    51,    52,    -1,    54,    55,
      -1,    57,    58,    -1,    60,    61,    62,    63,    64,    65,
      66,     3,    -1,    69,    -1,    -1,    -1,    -1,    -1,    11,
      12,    -1,    -1,    -1,    80,    -1,    82,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    26,    -1,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    41,
      42,    43,    44,    -1,    46,    47,    48,    49,    50,    51,
      52,    -1,    54,    55,    -1,    57,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    -1,    -1,    69,     3,     4,
       5,     6,    -1,     8,    -1,    10,    -1,    -1,    80,    -1,
      82,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    39,    -1,    41,    42,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    -1,
      65,     3,     4,     5,     6,    -1,     8,    72,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    82,    83,    -1,
      85,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,
      42,    -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,
      -1,     3,     4,     5,     6,    -1,     8,    -1,    10,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      82,    -1,    -1,    85,    26,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    38,    39,    -1,    41,
      42,    -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,
      -1,     3,     4,     5,     6,    -1,     8,    -1,    10,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      82,    -1,    -1,    85,    26,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    38,    39,    -1,    41,
      42,    -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      82,    -1,    -1,    85,    26,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,
      42,    -1,    -1,    -1,    -1,    47,    48,    49,    50,    -1,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,
      -1,     3,     4,     5,     6,    -1,     8,    -1,    10,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    -1,
      82,    -1,    -1,    85,    26,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,
      42,    -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,
      -1,     3,     4,     5,     6,    -1,     8,    -1,    10,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    -1,
      82,    -1,    -1,    85,    26,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,
      42,    -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      82,    -1,    -1,    85,    26,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,
      42,    -1,    -1,    -1,    -1,    47,    48,    49,    50,    -1,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,
      -1,     3,     4,     5,     6,    -1,     8,    -1,    10,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      82,    -1,    -1,    85,    26,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,
      42,    -1,    -1,    -1,    -1,    47,    48,    49,    50,    -1,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,
      -1,     3,     4,     5,     6,    -1,     8,    -1,    10,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      82,    -1,    -1,    85,    26,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,
      42,    -1,    -1,    -1,    -1,    47,    48,    49,    50,    -1,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,
      -1,    -1,    -1,     3,    -1,     5,    -1,    -1,    -1,    -1,
      72,    11,    12,     3,    -1,     5,    -1,    -1,    80,    -1,
      82,    11,    12,    85,    -1,    -1,    26,    -1,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    26,    37,    -1,    39,
      30,    41,    42,    -1,    -1,    45,    46,     3,    -1,     5,
      50,    51,    42,    -1,    54,    11,    12,    -1,    -1,    -1,
      50,    61,    -1,    -1,     3,    65,     5,    -1,    -1,    69,
      26,    61,    11,    12,    30,    -1,    -1,    -1,    -1,    69,
      80,    -1,    -1,    83,    -1,    85,    42,    26,    -1,    -1,
      80,    30,    -1,    83,    50,    85,    -1,    -1,     3,    -1,
       5,    -1,    -1,    42,    -1,    61,    11,    12,    -1,    -1,
      -1,    50,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    61,    79,    80,    30,    -1,    -1,    -1,    85,
      69,    -1,    -1,    -1,     3,    -1,    -1,    42,    -1,    -1,
      79,    80,    -1,    -1,    -1,    50,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    28,
      29,    30,    -1,     3,    69,    -1,    -1,    -1,    37,    -1,
      39,    -1,    41,    -1,    -1,    80,    45,    46,    -1,    -1,
      85,    -1,    51,    -1,    -1,    54,    -1,    -1,    28,    29,
      30,    -1,    61,     3,    -1,    -1,    65,    37,    -1,    39,
      -1,    41,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      79,    51,    -1,    -1,    54,    -1,    -1,    -1,    28,    29,
      30,    61,     3,    -1,    -1,    65,    -1,    37,    -1,    39,
      -1,    41,    -1,    -1,    -1,    45,    46,    -1,    -1,    79,
      -1,    51,    -1,    -1,    54,    -1,    -1,    28,    29,    30,
      -1,    61,     3,    -1,    -1,    65,    37,    -1,    39,    -1,
      41,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    79,
      51,    -1,    -1,    54,    -1,    -1,    -1,    28,    29,    30,
      61,     3,    -1,    -1,    65,    -1,    37,    -1,    39,    -1,
      41,    -1,    -1,    -1,    45,    46,    -1,    -1,    79,    -1,
      51,    -1,    -1,    54,    -1,    -1,    28,    29,    30,    -1,
      61,     3,    -1,    -1,    65,    37,    -1,    39,    -1,    41,
      -1,    -1,    -1,    45,    46,    -1,    19,    20,    79,    51,
      23,    -1,    54,    -1,    -1,    -1,    28,    29,    30,    61,
      -1,    -1,    -1,    65,    -1,    37,    -1,    39,    -1,    41,
      -1,    -1,    -1,    45,    46,    -1,    -1,    79,    -1,    51,
      -1,    -1,    54,    -1,    19,    20,    21,    22,    23,    61,
      -1,    26,    -1,    65,    -1,    -1,    69,    70,    71,    72,
      73,    74,    75,    -1,    77,    78,    41,    79,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    -1,    67,    -1,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    78,    41,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    87,    50,    -1,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    69,    70,    71,    72,    73,    74,    75,    43,
      77,    78,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      87,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    67,    -1,    69,    70,    71,    72,    73,
      74,    75,    -1,    77,    78,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    87,    19,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    69,    70,    71,    72,    73,    74,    75,    43,    77,
      78,    -1,    -1,    -1,    -1,    50,    84,    -1,    86,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    67,    -1,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    78,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    86,    50,    -1,    19,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    69,    70,    71,    72,    73,    74,    75,    43,    77,
      78,    -1,    -1,    -1,    -1,    50,    -1,    15,    86,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    67,    -1,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    78,    -1,    43,    -1,    -1,    -1,    -1,
      15,    86,    50,    -1,    19,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    69,    70,    71,    72,    73,    74,    75,    43,    77,
      78,    -1,    -1,    81,    -1,    50,    -1,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    69,    70,    71,    72,    73,    74,
      75,    43,    77,    78,    -1,    -1,    81,    -1,    50,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    67,    -1,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    78,    43,    -1,    -1,
      -1,    83,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    78,    -1,    26,    -1,    28,    83,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    41,
      42,    43,    44,    -1,    46,    47,    48,    49,    50,    51,
      52,    -1,    54,    55,    -1,    57,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    15,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    -1,    26,    15,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    67,    -1,    69,
      70,    71,    72,    73,    74,    75,    -1,    77,    78,    67,
      -1,    69,    70,    71,    72,    73,    74,    75,    15,    77,
      78,    -1,    19,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      67,    -1,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    78,    67,    -1,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    78,    -1,    -1,    81,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    -1,    16,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    67,    -1,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    78,    -1,    67,    81,
      69,    70,    71,    72,    73,    74,    75,    -1,    77,    78,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    67,    -1,
      69,    70,    71,    72,    73,    74,    75,    -1,    77,    78,
      -1,    67,    81,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    78,    -1,    -1,    81,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    19,    20,    21,    22,    23,
      50,    -1,    26,    -1,    67,    -1,    69,    70,    71,    72,
      73,    74,    75,    -1,    77,    78,    -1,    67,    81,    69,
      70,    71,    72,    73,    74,    75,    50,    77,    78,    -1,
      -1,    81,    19,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    67,    -1,    69,    70,    71,    72,    73,
      74,    75,    -1,    77,    78,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    78,    -1,    -1,    81,    28,    29,    30,    19,    20,
      21,    22,    23,    -1,    37,    26,    39,    -1,    41,    -1,
      -1,    -1,    45,    46,    -1,    36,    -1,    -1,    51,    -1,
      41,    54,    43,    -1,    -1,    -1,    -1,    -1,    61,    50,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    67,    -1,    69,    70,
      71,    72,    73,    74,    75,    -1,    77,    78,    79,    41,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    67,    -1,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    78,    79,    41,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    -1,    26,    67,    -1,    69,    70,    71,    72,
      73,    74,    75,    36,    77,    78,    79,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    67,    -1,    69,    70,    71,    72,
      73,    74,    75,    -1,    77,    78,    79,    41,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    67,    -1,    69,    70,    71,    72,    73,
      74,    75,    -1,    77,    78,    79,    43,    -1,    45,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      67,    -1,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    78,    79,    43,    -1,    45,    -1,    -1,    -1,    -1,
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
      77,    78,    79,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    19,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    67,    -1,    69,    70,    71,    72,    73,
      74,    75,    -1,    77,    78,    40,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    -1,    67,    -1,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    78,    41,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    69,    70,    71,    72,    73,    74,    75,    43,
      77,    78,    -1,    -1,    -1,    -1,    50,    -1,    19,    20,
      21,    22,    23,    57,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    69,    70,    71,    72,    73,
      74,    75,    43,    77,    78,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    66,    67,    -1,    69,    70,
      71,    72,    73,    74,    75,    -1,    77,    78,    41,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    -1,    67,    -1,    69,    70,    71,    72,
      73,    74,    75,    -1,    77,    78,    41,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    67,    -1,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    78,    43,    -1,    45,    -1,    -1,    -1,
      -1,    50,    -1,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    19,    20,    21,    22,    23,    67,    -1,
      69,    70,    71,    72,    73,    74,    75,    43,    77,    78,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    78,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    78
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,    11,    12,    26,    30,    42,    50,    56,
      58,    61,    62,    69,    80,    85,    93,    94,    95,    96,
      99,   102,   104,   116,   117,   141,   142,   150,   151,   152,
     153,   116,     4,     6,     8,    10,    32,    38,    39,    41,
      47,    48,    49,    51,    52,    53,    55,    60,    61,    72,
      80,    82,    85,    97,    98,   124,   144,   145,   147,   148,
     151,   152,   153,   141,    82,   100,   101,   116,     3,    26,
      28,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    41,    42,    43,    44,    46,    47,    48,    49,    50,
      51,    52,    54,    55,    57,    58,    60,    61,    62,    63,
      64,    65,    66,    71,    80,    82,    85,   116,   118,   122,
     154,   155,     7,   116,   117,   119,   123,   149,    72,    74,
     117,   121,   143,   144,     0,    94,    71,    74,   150,    85,
      68,    80,    69,    97,    80,    39,   124,   130,   153,    80,
     124,   124,     3,    30,    61,    88,    89,   113,   116,   143,
     147,   153,   154,   124,   116,   124,    81,    90,   124,   128,
     129,   135,   136,   149,    28,    29,    37,    39,    41,    45,
      46,    51,    54,    65,    83,   108,   112,   124,   126,   127,
     153,    86,   124,   125,    36,    98,    19,    20,    21,    22,
      23,    26,    43,    50,    67,    69,    70,    71,    72,    73,
      74,    75,    77,    78,    79,    80,    80,    80,    80,    18,
      85,    68,    85,   101,    82,    84,   150,    70,    81,    83,
      86,    70,    84,    80,    15,    71,    74,    67,    81,    84,
     118,   144,    16,    71,    74,    84,    86,    16,    68,    80,
     116,   120,   124,    88,   105,   106,   116,   153,   116,    36,
      80,   110,   111,   113,   133,   134,   153,    80,    57,    34,
      84,   124,   125,    79,   153,    42,   153,    67,    80,    40,
      42,   133,   153,    15,    81,    81,    84,    81,    84,   124,
     124,    41,    79,    41,    79,    80,    80,    80,    39,    41,
     112,   153,   124,   124,    80,    83,   108,    41,    87,    83,
      84,    18,    87,    84,    86,    91,   124,   124,   124,   124,
     116,   124,   116,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,     3,   146,   147,   155,   124,   129,   125,
     125,    79,   125,   129,   124,   125,   122,   103,   142,    79,
     104,   107,   100,    80,   118,   118,   123,   116,    81,    81,
     116,   119,    90,    74,   143,    86,    86,   117,    74,   143,
     124,   106,    84,    86,    79,    81,    84,   153,    79,   116,
     133,    79,    81,    14,    15,    25,    81,    84,    24,    68,
      84,    87,   124,   124,   124,    81,   124,   153,    81,   113,
     114,   149,   113,   124,    81,    87,    68,   124,   128,   124,
     135,    41,    79,   124,   124,   111,   124,   137,   138,   150,
      80,    80,    65,    79,    41,    79,    41,    79,   124,   124,
     133,   124,   127,   124,   153,   124,   124,    85,    90,    81,
      81,    81,    81,   138,    79,    81,    81,    79,    86,    79,
      84,    86,   107,    83,   104,   120,    81,    81,    81,    81,
      86,    86,    86,    86,    79,    81,   116,    68,    82,    87,
     105,    81,   110,   153,    97,   124,   113,   124,    41,    80,
      82,   134,   134,   124,   153,   124,    36,    79,   140,    57,
     113,   115,   131,   132,    66,    81,    81,    84,   113,    42,
     140,   125,   124,    41,    87,    15,   124,    79,    79,    81,
      81,    81,    84,    68,    80,   124,    80,   124,   124,    81,
      79,    83,    41,    79,    14,    84,    86,   125,    81,   138,
     142,    68,    83,    81,    68,    82,    87,   124,   112,   132,
      68,    79,    14,    25,    80,   124,   124,    16,    87,   124,
      68,    84,    84,   140,   124,    17,   149,   124,    81,   124,
     133,   124,   112,   112,   112,   137,   124,   139,   153,    81,
     124,    79,    79,   112,   125,   124,   124,   153,    86,    81,
     122,   124,   112,   132,    45,    79,    83,   107,   153,    64,
      79,   124,   124,   124,   125,    15,    83,   124,   124,   124,
     113,   131,   140,    81,   113,    41,   140,    79,    81,    79,
     109,    79,    81,    84,    81,    79,    83,    79,    84,    86,
      14,    79,    45,    79,    83,   107,    64,    79,   112,    83,
     107,    81,   124,    45,   124,   125,    34,    35,    79,    68,
     153,    79,   124,   124,   112,    83,   107,    79,    79,    80,
      82,    81,   112,   140,    81,   112,    80,   124,    86,    84,
      86,    79,    79,   124,   124,    79,   124,   124,    15,    83,
      81,    86,   124,   112,    81
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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

/* Line 1455 of yacc.c  */
#line 132 "amber.yy"
    {consume_decl((yyvsp[(1) - (1)]));                                ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 133 "amber.yy"
    {consume_decl((yyvsp[(2) - (2)]));                                ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 146 "amber.yy"
    {(yyval) = mk_subtype_decl((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                    ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 151 "amber.yy"
    {(yyval) = mk_test_block(true, (yyvsp[(2) - (3)]));                    ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 152 "amber.yy"
    {(yyval) = mk_test_block(false, (yyvsp[(3) - (4)]));                   ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 156 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 157 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                             ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 161 "amber.yy"
    {(yyval) = mk_test_instr_bool((yyvsp[(1) - (2)]));                     ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 162 "amber.yy"
    {(yyval) = mk_test_instr_print((yyvsp[(2) - (3)]));                    ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 163 "amber.yy"
    {(yyval) = mk_test_instr_loop((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                 ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 164 "amber.yy"
    {(yyval) = mk_test_instr_assignment((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));           ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 170 "amber.yy"
    {(yyval) = mk_using_block((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                     ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 171 "amber.yy"
    {(yyval) = mk_using_block((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                     ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 175 "amber.yy"
    {(yyval) = mk_signature((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));                       ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 176 "amber.yy"
    {(yyval) = mk_signature((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(1) - (5)]));                   ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 179 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 180 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]));                             ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 186 "amber.yy"
    {(yyval) = mk_typedef((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                         ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 187 "amber.yy"
    {(yyval) = mk_typedef_par((yyvsp[(2) - (8)]), (yyvsp[(4) - (8)]), (yyvsp[(7) - (8)]));                 ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 191 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 192 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 198 "amber.yy"
    {(yyval) = mk_fndef((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                       ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 199 "amber.yy"
    {(yyval) = mk_fndef((yyvsp[(1) - (8)]), (yyvsp[(2) - (8)]), (yyvsp[(4) - (8)]), (yyvsp[(7) - (8)]));                   ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 200 "amber.yy"
    {(yyval) = mk_fndef((yyvsp[(1) - (10)]), (yyvsp[(2) - (10)]), (yyvsp[(4) - (10)]), mk_expr_let((yyvsp[(7) - (10)]), (yyvsp[(9) - (10)])));  ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 201 "amber.yy"
    {(yyval) = mk_fndef_proc((yyvsp[(1) - (8)]), (yyvsp[(2) - (8)]), (yyvsp[(4) - (8)]), (yyvsp[(7) - (8)]));              ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 202 "amber.yy"
    {(yyval) = mk_fndef_proc((yyvsp[(1) - (9)]), (yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(7) - (9)]), (yyvsp[(8) - (9)]));          ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 203 "amber.yy"
    {(yyval) = mk_fndef_switch((yyvsp[(1) - (8)]), (yyvsp[(2) - (8)]), (yyvsp[(4) - (8)]), (yyvsp[(7) - (8)]));            ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 204 "amber.yy"
    {(yyval) = mk_fndef_switch((yyvsp[(1) - (10)]), (yyvsp[(3) - (10)]), (yyvsp[(6) - (10)]), (yyvsp[(8) - (10)]), (yyvsp[(9) - (10)]));  ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 206 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                   ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 207 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(6) - (7)]));               ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 208 "amber.yy"
    {(yyval) = mk_fndef_proc(null(), (yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(6) - (7)]));          ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 209 "amber.yy"
    {(yyval) = mk_fndef_proc(null(), (yyvsp[(1) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(6) - (8)]), (yyvsp[(7) - (8)]));      ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 210 "amber.yy"
    {(yyval) = mk_fndef_switch(null(), (yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(6) - (7)]));        ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 211 "amber.yy"
    {(yyval) = mk_fndef_switch(null(), (yyvsp[(1) - (9)]), (yyvsp[(3) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));    ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 212 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (9)]), (yyvsp[(3) - (9)]), mk_expr_let((yyvsp[(6) - (9)]), (yyvsp[(8) - (9)])));;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 216 "amber.yy"
    {(yyval) = mk_fnarg(null(), null());                   ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 217 "amber.yy"
    {(yyval) = mk_fnarg(null(), (yyvsp[(1) - (1)]));                       ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 218 "amber.yy"
    {(yyval) = mk_fnarg((yyvsp[(1) - (1)]),     null());                   ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 219 "amber.yy"
    {(yyval) = mk_fnarg((yyvsp[(1) - (2)]),     (yyvsp[(2) - (2)]));                       ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 223 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 224 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 228 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 229 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                             ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 235 "amber.yy"
    {(yyval) = mk_stmt_return((yyvsp[(2) - (3)]));                    ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 236 "amber.yy"
    {(yyval) = mk_stmt_return_if((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));             ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 238 "amber.yy"
    {(yyval) = mk_stmt_assignment((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));            ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 241 "amber.yy"
    {(yyval) = mk_stmt_assignment_if((yyvsp[(1) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));     ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 243 "amber.yy"
    {(yyval) = mk_stmt_if((yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]), (yyvsp[(6) - (7)]));                ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 244 "amber.yy"
    {(yyval) = mk_stmt_if((yyvsp[(3) - (9)]), (yyvsp[(5) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));            ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 246 "amber.yy"
    {(yyval) = mk_stmt_loop((yyvsp[(2) - (3)]));                      ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 247 "amber.yy"
    {(yyval) = mk_stmt_loop((yyvsp[(2) - (7)]), (yyvsp[(5) - (7)]));                  ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 248 "amber.yy"
    {(yyval) = mk_stmt_while((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                 ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 250 "amber.yy"
    {(yyval) = mk_stmt_let((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                   ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 253 "amber.yy"
    {(yyval) = mk_stmt_break();                       ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 254 "amber.yy"
    {(yyval) = mk_stmt_break_if((yyvsp[(3) - (4)]));                  ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 256 "amber.yy"
    {(yyval) = mk_stmt_for((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                   ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 258 "amber.yy"
    {(yyval) = mk_stmt_fail();                        ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 259 "amber.yy"
    {(yyval) = mk_stmt_fail_if((yyvsp[(3) - (4)]));                   ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 261 "amber.yy"
    {(yyval) = mk_stmt_assert((yyvsp[(2) - (3)]));                    ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 263 "amber.yy"
    {(yyval) = mk_stmt_print((yyvsp[(2) - (3)]));                     ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 264 "amber.yy"
    {(yyval) = mk_stmt_print_if((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));              ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 270 "amber.yy"
    {(yyval) = mk_seq_empty();                        ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 271 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (6)]), mk_elif((yyvsp[(4) - (6)]), (yyvsp[(6) - (6)])));           ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 275 "amber.yy"
    {(yyval) = mk_for_iter((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                   ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 276 "amber.yy"
    {(yyval) = mk_for_iter((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));               ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 277 "amber.yy"
    {(yyval) = mk_for_iter_range((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));         ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 281 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                            ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 282 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                        ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 286 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                            ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 287 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                        ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 295 "amber.yy"
    {(yyval) = mk_ptrn_type((yyvsp[(1) - (1)]));                               ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 296 "amber.yy"
    {(yyval) = mk_ptrn_var((yyvsp[(1) - (1)]));                                ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 297 "amber.yy"
    {(yyval) = mk_ptrn_ptrn_var((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                       ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 298 "amber.yy"
    {(yyval) = mk_ptrn_ctor((yyvsp[(1) - (1)]));                               ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 299 "amber.yy"
    {(yyval) = mk_ptrn_num((yyvsp[(1) - (1)]));                                ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 300 "amber.yy"
    {(yyval) = mk_ptrn_jolly();                                ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 301 "amber.yy"
    {(yyval) = mk_ptrn_expr((yyvsp[(2) - (2)]));                               ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 304 "amber.yy"
    {(yyval) = mk_ptrn_tag_ptrn((yyvsp[(1) - (3)]), mk_ptrn_jolly());          ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 305 "amber.yy"
    {(yyval) = mk_ptrn_tag_ptrn((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                       ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 306 "amber.yy"
    {(yyval) = mk_ptrn_tag_ptrn((yyvsp[(1) - (4)]), mk_ptrn_tuple((yyvsp[(3) - (4)]), false)); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 307 "amber.yy"
    {(yyval) = mk_ptrn_tag_ptrn((yyvsp[(1) - (6)]), mk_ptrn_tuple((yyvsp[(3) - (6)]), true));  ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 308 "amber.yy"
    {(yyval) = mk_ptrn_tag_obj((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                        ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 312 "amber.yy"
    {(yyval) = mk_seq(mk_lab_ptrn((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])));                    ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 313 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (4)]), mk_lab_ptrn((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)])));                ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 317 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                     ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 318 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                                 ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 325 "amber.yy"
    {(yyval) = mk_type_set((yyvsp[(1) - (2)]), false);                     ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 326 "amber.yy"
    {(yyval) = mk_type_set((yyvsp[(1) - (2)]), true);                      ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 330 "amber.yy"
    {(yyval) = mk_type_ref((yyvsp[(1) - (1)]));                            ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 331 "amber.yy"
    {(yyval) = mk_type_var((yyvsp[(1) - (1)]));                            ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 332 "amber.yy"
    {(yyval) = mk_type_ref((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                        ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 333 "amber.yy"
    {(yyval) = mk_type_inline((yyvsp[(2) - (3)]));                         ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 334 "amber.yy"
    {(yyval) = mk_type_symb();                             ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 336 "amber.yy"
    {(yyval) = mk_type_int();                              ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 337 "amber.yy"
    {(yyval) = mk_type_low_bounded_int((yyvsp[(2) - (5)]));                ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 338 "amber.yy"
    {(yyval) = mk_type_up_bounded_int((yyvsp[(4) - (5)]));                 ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 339 "amber.yy"
    {(yyval) = mk_type_bounded_int((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 341 "amber.yy"
    {(yyval) = mk_type_seq((yyvsp[(2) - (4)]), false);                     ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 342 "amber.yy"
    {(yyval) = mk_type_seq((yyvsp[(2) - (4)]), true);                      ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 343 "amber.yy"
    {(yyval) = mk_type_fixed_seq((yyvsp[(2) - (3)]));                      ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 345 "amber.yy"
    {(yyval) = mk_type_set((yyvsp[(2) - (4)]), false);                     ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 346 "amber.yy"
    {(yyval) = mk_type_set((yyvsp[(2) - (4)]), true);                      ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 348 "amber.yy"
    {(yyval) = mk_type_map((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                        ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 349 "amber.yy"
    {(yyval) = mk_type_tuple((yyvsp[(2) - (3)]));                          ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 351 "amber.yy"
    {(yyval) = mk_type_tagged_obj((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                 ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 355 "amber.yy"
    {(yyval) = mk_pretype_type((yyvsp[(1) - (1)]));                        ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 356 "amber.yy"
    {(yyval) = mk_pretype_empty_set();                     ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 357 "amber.yy"
    {(yyval) = mk_pretype_empty_seq();                     ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 358 "amber.yy"
    {(yyval) = mk_pretype_empty_map();                     ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 359 "amber.yy"
    {(yyval) = mk_pretype_sing((yyvsp[(1) - (1)]));                        ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 360 "amber.yy"
    {(yyval) = mk_pretype_tagged_obj((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));              ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 361 "amber.yy"
    {(yyval) = mk_pretype_tagged_tuple((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));            ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 365 "amber.yy"
    {(yyval) = mk_labtype((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), false);                  ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 366 "amber.yy"
    {(yyval) = mk_labtype((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), true);                   ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 370 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 371 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 375 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 376 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 380 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 381 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 385 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 386 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 392 "amber.yy"
    {(yyval) = mk_expr_num((yyvsp[(1) - (1)]));                            ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 393 "amber.yy"
    {(yyval) = mk_expr_ctor((yyvsp[(1) - (1)]));                           ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 394 "amber.yy"
    {(yyval) = mk_expr_str((yyvsp[(1) - (1)]));                            ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 396 "amber.yy"
    {(yyval) = mk_expr_ctor((yyvsp[(1) - (1)]));                           ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 397 "amber.yy"
    {(yyval) = mk_expr_ctor((yyvsp[(1) - (1)]));                           ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 398 "amber.yy"
    {(yyval) = mk_expr_ctor((yyvsp[(1) - (1)]));                           ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 400 "amber.yy"
    {(yyval) = mk_expr_set(mk_seq_empty());                ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 401 "amber.yy"
    {(yyval) = mk_expr_set((yyvsp[(2) - (3)]));                            ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 403 "amber.yy"
    {(yyval) = mk_expr_map(mk_seq_empty());                ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 404 "amber.yy"
    {(yyval) = mk_expr_map((yyvsp[(2) - (3)]));                            ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 405 "amber.yy"
    {(yyval) = mk_expr_tuple((yyvsp[(2) - (3)]));                          ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 407 "amber.yy"
    {(yyval) = mk_expr_seq(mk_seq_empty());                ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 408 "amber.yy"
    {(yyval) = mk_expr_seq((yyvsp[(2) - (3)]));                            ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 409 "amber.yy"
    {(yyval) = mk_expr_seq((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                        ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 411 "amber.yy"
    {(yyval) = mk_expr_tag_obj((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                    ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 412 "amber.yy"
    {(yyval) = mk_expr_tag_obj(mk_expr_ctor((yyvsp[(1) - (4)])), (yyvsp[(3) - (4)]));      ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 414 "amber.yy"
    {(yyval) = mk_expr_tag_map((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                    ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 415 "amber.yy"
    {(yyval) = mk_expr_tag_map((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                    ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 420 "amber.yy"
    {(yyval) = mk_expr_const_or_var((yyvsp[(1) - (1)]));                   ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 421 "amber.yy"
    {(yyval) = mk_expr_fn_call((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                    ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 422 "amber.yy"
    {(yyval) = mk_expr_where(mk_expr_fn_call((yyvsp[(1) - (6)]), (yyvsp[(3) - (6)])), (yyvsp[(5) - (6)])); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 423 "amber.yy"
    {(yyval) = mk_expr_where(mk_expr_const_or_var((yyvsp[(1) - (5)])), (yyvsp[(4) - (5)]));;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 424 "amber.yy"
    {(yyval) = mk_expr_fn_call((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                    ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 425 "amber.yy"
    {(yyval) = mk_expr_builtin_call((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));               ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 427 "amber.yy"
    {(yyval) = (yyvsp[(2) - (3)]);                                         ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 429 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                         ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 431 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 432 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 433 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 434 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 435 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 436 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 437 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 438 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 439 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 440 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 442 "amber.yy"
    {(yyval) = mk_expr_and((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                        ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 443 "amber.yy"
    {(yyval) = mk_expr_or((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                         ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 444 "amber.yy"
    {(yyval) = mk_expr_not((yyvsp[(2) - (2)]));                            ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 446 "amber.yy"
    {(yyval) = mk_expr_eq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                         ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 447 "amber.yy"
    {(yyval) = mk_expr_neq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                        ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 449 "amber.yy"
    {(yyval) = mk_expr_type_test((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                  ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 451 "amber.yy"
    {(yyval) = mk_expr_dot_acc((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                    ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 452 "amber.yy"
    {(yyval) = mk_expr_dot_acc_test((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));               ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 455 "amber.yy"
    {(yyval) = mk_expr_idx((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                        ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 456 "amber.yy"
    {(yyval) = mk_expr_idx_member((yyvsp[(1) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));             ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 458 "amber.yy"
    {(yyval) = mk_expr_ex_qual((yyvsp[(3) - (4)]));                        ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 459 "amber.yy"
    {(yyval) = mk_expr_ex_qual((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                    ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 461 "amber.yy"
    {(yyval) = mk_expr_sc((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                         ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 462 "amber.yy"
    {(yyval) = mk_expr_sc((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                     ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 464 "amber.yy"
    {(yyval) = mk_expr_sc((yyvsp[(6) - (7)]), (yyvsp[(3) - (7)]));                         ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 465 "amber.yy"
    {(yyval) = mk_expr_sc((yyvsp[(10) - (11)]), (yyvsp[(3) - (11)]), (yyvsp[(7) - (11)]));                    ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 467 "amber.yy"
    {(yyval) = mk_expr_mc((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                    ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 468 "amber.yy"
    {(yyval) = mk_expr_mc((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));                ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 470 "amber.yy"
    {(yyval) = mk_expr_mc((yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]), (yyvsp[(3) - (9)]));                    ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 472 "amber.yy"
    {(yyval) = mk_expr_mc((yyvsp[(10) - (13)]), (yyvsp[(12) - (13)]), (yyvsp[(3) - (13)]), (yyvsp[(7) - (13)]));              ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 474 "amber.yy"
    {(yyval) = mk_expr_lc((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                     ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 475 "amber.yy"
    {(yyval) = mk_expr_lc((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));                 ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 476 "amber.yy"
    {(yyval) = mk_expr_flc((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));                ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 477 "amber.yy"
    {(yyval) = mk_expr_flc((yyvsp[(2) - (11)]), (yyvsp[(4) - (11)]), (yyvsp[(6) - (11)]), (yyvsp[(8) - (11)]), (yyvsp[(10) - (11)]));           ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 479 "amber.yy"
    {(yyval) = mk_expr_if((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                         ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 480 "amber.yy"
    {(yyval) = mk_expr_match((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                        ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 483 "amber.yy"
    {(yyval) = mk_expr_do((yyvsp[(2) - (3)]));                             ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 485 "amber.yy"
    {(yyval) = mk_expr_repl((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                   ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 486 "amber.yy"
    {(yyval) = mk_expr_sel((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                        ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 488 "amber.yy"
    {(yyval) = mk_expr_retr((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                   ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 490 "amber.yy"
    {(yyval) = mk_expr_retr((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));               ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 492 "amber.yy"
    {(yyval) = mk_expr_is((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                         ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 497 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 498 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 503 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 504 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 508 "amber.yy"
    {(yyval) = mk_sexpr_expr((yyvsp[(1) - (1)]));                          ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 509 "amber.yy"
    {(yyval) = mk_sexpr_cond((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                      ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 513 "amber.yy"
    {(yyval) = mk_sexpr_lab((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                       ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 514 "amber.yy"
    {(yyval) = mk_sexpr_lab_cond((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));              ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 518 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 519 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 523 "amber.yy"
    {(yyval) = mk_seq(mk_if_branch((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])));               ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 524 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (5)]), mk_if_branch((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)])));           ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 528 "amber.yy"
    {(yyval) = mk_match_branch((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                      ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 529 "amber.yy"
    {(yyval) = mk_match_branch((yyvsp[(1) - (5)]), mk_expr_let((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)])));     ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 532 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 533 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 542 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 543 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 547 "amber.yy"
    {(yyval) = mk_clause_in((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                       ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 548 "amber.yy"
    {(yyval) = mk_clause_in_map((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));                       ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 549 "amber.yy"
    {(yyval) = mk_clause_not_in((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                   ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 550 "amber.yy"
    {(yyval) = mk_clause_not_in_map((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));                       ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 551 "amber.yy"
    {(yyval) = mk_clause_eq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                       ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 552 "amber.yy"
    {(yyval) = mk_clause_and((yyvsp[(2) - (3)]));                          ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 553 "amber.yy"
    {(yyval) = mk_clause_or((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                       ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 557 "amber.yy"
    {(yyval) = mk_map_entry((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                       ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 558 "amber.yy"
    {(yyval) = mk_map_entry_cond((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));              ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 562 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 563 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 567 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                   ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 568 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(6) - (6)]));               ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 572 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 573 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 577 "amber.yy"
    {(yyval) = mk_seq(mk_fnarg(null(), (yyvsp[(1) - (1)])));         ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 578 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), mk_fnarg(null(), (yyvsp[(3) - (3)])));     ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 607 "amber.yy"
    {(yyval) = mk_snum_neg_num((yyvsp[(2) - (2)]));                      ;}
    break;



/* Line 1455 of yacc.c  */
#line 4386 "amber.tab.cc"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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



/* Line 1675 of yacc.c  */
#line 691 "amber.yy"
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

