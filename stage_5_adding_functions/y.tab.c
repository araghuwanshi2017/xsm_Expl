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
#line 1 "astree.y" /* yacc.c:339  */

	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	#include "astree.h"
	#include "astree.c"
	int yylex(void);
	FILE *ft, *yyin;
	struct Astnode *type_node;
	struct Gsymbol *tmp;
	struct Pmtr *paramList , *Pnode;

#line 79 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    _MAIN = 258,
    _DECL = 259,
    _ENDDECL = 260,
    _PLUS = 261,
    _MINUS = 262,
    _MUL = 263,
    _DIV = 264,
    _MOD = 265,
    _NUM = 266,
    _STRING = 267,
    _ID = 268,
    _LT = 269,
    _LE = 270,
    _GT = 271,
    _GE = 272,
    _NE = 273,
    _EQ = 274,
    _INT = 275,
    _STR = 276,
    _READ = 277,
    _WRITE = 278,
    _BEGIN = 279,
    _END = 280,
    _IF = 281,
    _THEN = 282,
    _ELSE = 283,
    _ENDIF = 284,
    _WHILE = 285,
    _DO = 286,
    _ENDWHILE = 287,
    _REPEAT = 288,
    _UNTIL = 289,
    _BREAK = 290,
    _CONTINUE = 291,
    _BREAKPOINT = 292
  };
#endif
/* Tokens.  */
#define _MAIN 258
#define _DECL 259
#define _ENDDECL 260
#define _PLUS 261
#define _MINUS 262
#define _MUL 263
#define _DIV 264
#define _MOD 265
#define _NUM 266
#define _STRING 267
#define _ID 268
#define _LT 269
#define _LE 270
#define _GT 271
#define _GE 272
#define _NE 273
#define _EQ 274
#define _INT 275
#define _STR 276
#define _READ 277
#define _WRITE 278
#define _BEGIN 279
#define _END 280
#define _IF 281
#define _THEN 282
#define _ELSE 283
#define _ENDIF 284
#define _WHILE 285
#define _DO 286
#define _ENDWHILE 287
#define _REPEAT 288
#define _UNTIL 289
#define _BREAK 290
#define _CONTINUE 291
#define _BREAKPOINT 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "astree.y" /* yacc.c:355  */

	struct Astnode *node;	
	struct Pmtr * param_node;

#line 198 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 215 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   266

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  136

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

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
      42,    43,     2,     2,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    38,
       2,    44,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,    41,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,    46,     2,     2,     2,     2,
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
      35,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    86,    93,    99,   109,   113,   120,   124,
     129,   136,   143,   170,   175,   181,   230,   237,   270,   277,
     284,   287,   295,   298,   301,   304,   307,   310,   313,   316,
     319,   322,   326,   342,   346,   356,   357,   361,   375,   388,
     397,   405,   413,   421,   429,   439,   453,   467,   484,   493,
     502,   511,   520,   529,   530,   531,   535,   548
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_MAIN", "_DECL", "_ENDDECL", "_PLUS",
  "_MINUS", "_MUL", "_DIV", "_MOD", "_NUM", "_STRING", "_ID", "_LT", "_LE",
  "_GT", "_GE", "_NE", "_EQ", "_INT", "_STR", "_READ", "_WRITE", "_BEGIN",
  "_END", "_IF", "_THEN", "_ELSE", "_ENDIF", "_WHILE", "_DO", "_ENDWHILE",
  "_REPEAT", "_UNTIL", "_BREAK", "_CONTINUE", "_BREAKPOINT", "';'", "','",
  "'['", "']'", "'('", "')'", "'='", "'{'", "'}'", "$accept", "program",
  "GDeclBlock", "GdeclList", "Gdecl", "GidList", "Gid", "ParamList",
  "Param", "Type", "Body", "Slist", "Stmt", "Inputstmt", "Outputstmt",
  "Assgstmt", "expr_str", "Ifstmt", "Boolstmt", "Whilestmt", "RepeatUntil",
  "Dowhile", "expr", "id", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,    59,    44,
      91,    93,    40,    41,    61,   123,   125
};
# endif

#define YYPACT_NINF -47

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-47)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,    10,    17,    -4,   -47,   -47,   -47,    14,   -47,    13,
     -47,   132,   -47,   -47,   -47,     1,    16,   -47,    -8,   -13,
      -5,     6,     4,    33,     7,   215,    44,    45,    46,   148,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,    41,    75,
      53,   -47,    13,    -2,    74,    -6,   -47,    -2,    -2,   215,
     164,   -47,   -47,   -47,    51,   -47,    -6,    49,   -27,   -47,
      78,   -47,   -47,    -2,    62,   -47,    54,   -47,    55,    71,
      61,   247,    65,    94,    52,   -47,    58,   -47,    53,   -47,
     -47,    57,    -2,    -2,    -2,    -2,    -2,   -47,    67,    73,
      85,    -2,    -2,    -2,    -2,    -2,    -2,    83,    89,    -2,
     -47,   -47,   -47,    15,    15,   -47,   -47,   -47,   -47,   -47,
     215,    71,    71,    71,    71,    71,    71,   215,    79,    72,
     113,   180,    -2,    84,   215,    90,    95,    80,   -47,   196,
     -47,   -47,    96,    99,   -47,   -47
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     4,    16,    17,     0,     6,     0,
       1,     0,     2,     3,     5,    10,     0,     9,    56,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,    22,    23,    24,    25,    26,    30,    31,     0,     0,
       0,     7,     0,     0,     0,     0,    19,     0,     0,     0,
       0,    27,    29,    28,     0,    20,     0,     0,     0,    14,
       0,     8,    54,     0,     0,    55,     0,    36,     0,    35,
       0,     0,     0,     0,     0,    18,     0,    11,     0,    12,
      15,     0,     0,     0,     0,     0,     0,    57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,    13,    53,    48,    49,    50,    51,    52,    32,    33,
       0,    40,    42,    39,    41,    43,    44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,     0,
      38,    45,     0,     0,    47,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -47,   -47,   -47,   -47,   125,   -47,   105,   -47,    60,   -36,
     -47,   -22,   -28,   -47,   -47,   -47,    97,   -47,   -46,   -47,
     -47,   -47,   -35,   -11
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     7,     8,    16,    17,    58,    59,     9,
      12,    29,    30,    31,    32,    33,    68,    34,    70,    35,
      36,    37,    71,    65
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      38,    55,    72,    50,    60,    62,    67,    18,    64,    62,
      69,    18,    78,     1,    38,     4,    79,    10,    38,    13,
      11,    69,    55,    84,    85,    86,    15,    73,    81,    44,
       5,     6,    43,    66,     5,     6,    63,    45,    38,    38,
      63,    39,    60,    40,    46,    55,    47,   103,   104,   105,
     106,   107,    49,   119,    41,    42,   111,   112,   113,   114,
     115,   116,    38,    82,    83,    84,    85,    86,    82,    83,
      84,    85,    86,     5,     6,    48,   127,    82,    83,    84,
      85,    86,    51,    52,    53,    56,    57,    18,   120,    75,
      77,    80,    55,    55,    99,   121,   100,    88,    89,    38,
     102,    55,   129,    87,    90,   108,    38,    18,    97,    38,
      38,   109,   110,    38,   117,   123,    19,    20,    38,   118,
      22,   122,   128,   132,    23,    24,    18,    25,   130,    26,
      27,    28,    14,   131,   134,    19,    20,   135,   101,    22,
      98,   124,   125,    23,    24,    18,    25,    61,    26,    27,
      28,     0,     0,    76,    19,    20,     0,    21,    22,     0,
       0,    18,    23,    24,     0,    25,     0,    26,    27,    28,
      19,    20,     0,    54,    22,     0,     0,    18,    23,    24,
       0,    25,     0,    26,    27,    28,    19,    20,     0,     0,
      22,     0,     0,    18,    23,    24,     0,    25,    74,    26,
      27,    28,    19,    20,     0,     0,    22,     0,     0,    18,
      23,    24,   126,    25,     0,    26,    27,    28,    19,    20,
       0,     0,    22,     0,     0,   133,    23,    24,    18,    25,
       0,    26,    27,    28,     0,     0,     0,    19,    20,     0,
       0,    22,     0,     0,     0,    23,    24,     0,    25,     0,
      26,    27,    28,    82,    83,    84,    85,    86,     0,     0,
       0,    91,    92,    93,    94,    95,    96
};

static const yytype_int16 yycheck[] =
{
      11,    29,    48,    25,    40,    11,    12,    13,    43,    11,
      45,    13,    39,     4,    25,     5,    43,     0,    29,     5,
      24,    56,    50,     8,     9,    10,    13,    49,    63,    42,
      20,    21,    40,    44,    20,    21,    42,    42,    49,    50,
      42,    40,    78,    42,    38,    73,    42,    82,    83,    84,
      85,    86,    45,    99,    38,    39,    91,    92,    93,    94,
      95,    96,    73,     6,     7,     8,     9,    10,     6,     7,
       8,     9,    10,    20,    21,    42,   122,     6,     7,     8,
       9,    10,    38,    38,    38,    44,    11,    13,   110,    38,
      41,    13,   120,   121,    42,   117,    38,    43,    43,   110,
      43,   129,   124,    41,    43,    38,   117,    13,    43,   120,
     121,    38,    27,   124,    31,    43,    22,    23,   129,    30,
      26,    42,    38,    43,    30,    31,    13,    33,    38,    35,
      36,    37,     7,    38,    38,    22,    23,    38,    78,    26,
      46,    28,    29,    30,    31,    13,    33,    42,    35,    36,
      37,    -1,    -1,    56,    22,    23,    -1,    25,    26,    -1,
      -1,    13,    30,    31,    -1,    33,    -1,    35,    36,    37,
      22,    23,    -1,    25,    26,    -1,    -1,    13,    30,    31,
      -1,    33,    -1,    35,    36,    37,    22,    23,    -1,    -1,
      26,    -1,    -1,    13,    30,    31,    -1,    33,    34,    35,
      36,    37,    22,    23,    -1,    -1,    26,    -1,    -1,    13,
      30,    31,    32,    33,    -1,    35,    36,    37,    22,    23,
      -1,    -1,    26,    -1,    -1,    29,    30,    31,    13,    33,
      -1,    35,    36,    37,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    30,    31,    -1,    33,    -1,
      35,    36,    37,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    48,    49,     5,    20,    21,    50,    51,    56,
       0,    24,    57,     5,    51,    13,    52,    53,    13,    22,
      23,    25,    26,    30,    31,    33,    35,    36,    37,    58,
      59,    60,    61,    62,    64,    66,    67,    68,    70,    40,
      42,    38,    39,    40,    42,    42,    38,    42,    42,    45,
      58,    38,    38,    38,    25,    59,    44,    11,    54,    55,
      56,    53,    11,    42,    69,    70,    70,    12,    63,    69,
      65,    69,    65,    58,    34,    38,    63,    41,    39,    43,
      13,    69,     6,     7,     8,     9,    10,    41,    43,    43,
      43,    14,    15,    16,    17,    18,    19,    43,    46,    42,
      38,    55,    43,    69,    69,    69,    69,    69,    38,    38,
      27,    69,    69,    69,    69,    69,    69,    31,    30,    65,
      58,    58,    42,    43,    28,    29,    32,    65,    38,    58,
      38,    38,    43,    29,    38,    38
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    51,    52,    52,
      53,    53,    53,    54,    54,    55,    56,    56,    57,    57,
      58,    58,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    60,    61,    62,    63,    63,    64,    64,    65,
      65,    65,    65,    65,    65,    66,    67,    68,    69,    69,
      69,    69,    69,    69,    69,    69,    70,    70
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     2,     2,     1,     3,     3,     1,
       1,     4,     4,     3,     1,     2,     1,     1,     4,     3,
       2,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       1,     1,     5,     5,     4,     1,     1,    10,     8,     3,
       3,     3,     3,     3,     3,     8,     7,     9,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     4
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
#line 65 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[-1].node);
	print_GST(GSTroot);
	print((yyvsp[-1].node));
	exit(1);

}
#line 1412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 86 "astree.y" /* yacc.c:1646  */
    {

		//print_GST(GSTroot);
		(yyval.node) = (yyvsp[-1].node);
		printf("Global Declaration Done\n");

}
#line 1424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 93 "astree.y" /* yacc.c:1646  */
    {
		printf("No Global Declaration\n");
		(yyval.node) = NULL;
}
#line 1433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 99 "astree.y" /* yacc.c:1646  */
    {

		if((yyvsp[-1].node)->type != (yyvsp[0].node)->type)
		{
			printf("error :Type Mismatch\n");
			exit(1);
		}

		(yyval.node) = makeStatementNode((yyvsp[-1].node)->type, STATEMENT, (yyvsp[-1].node), (yyvsp[0].node), "STATEMENT");
}
#line 1448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 109 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 113 "astree.y" /* yacc.c:1646  */
    {

	(yyval.node) = AST_typechange(GSTroot, (yyvsp[-1].node), (yyvsp[-2].node)->type);
	(yyval.node)->type = (yyvsp[-2].node)->type;
}
#line 1466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 120 "astree.y" /* yacc.c:1646  */
    {

		(yyval.node) = makeStatementNode(-1, STATEMENT, (yyvsp[-2].node), (yyvsp[0].node), "STATEMENT");
}
#line 1475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 124 "astree.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);
}
#line 1483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 129 "astree.y" /* yacc.c:1646  */
    {

		tmp = init_node(-1, VARIABLE, 1, (yyvsp[0].node)->varname);
		(yyvsp[0].node)->GST_entry = tmp;
		GSTroot = installID(GSTroot, 1 ,tmp);
		(yyval.node) = (yyvsp[0].node);
}
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 136 "astree.y" /* yacc.c:1646  */
    {

		tmp = init_node(-1, ARRAY_VARIABLE, (yyvsp[-1].node)->val, (yyvsp[-3].node)->varname);
		GSTroot = installID(GSTroot, (yyvsp[-1].node)->val, tmp);
		(yyval.node) = makeArrayVariableNode(-1, ARRAY_VARIABLE, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-3].node)->varname);	
		(yyval.node)->GST_entry = tmp;
}
#line 1507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 143 "astree.y" /* yacc.c:1646  */
    {

		tmp = init_node(-1, FUNCT_VARIABLE, -1,  (yyvsp[-3].node)->varname);
		tmp->PList = (yyvsp[-1].param_node);
		GSTroot = installID(GSTroot, -1, tmp);
		(yyval.node) = makeFunctNode(-1, FUNCT_VARIABLE, (yyvsp[-3].node)->varname);
		(yyval.node)->GST_entry = tmp;
		paramList = NULL;
}
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 170 "astree.y" /* yacc.c:1646  */
    {

			(yyval.param_node) = paramList;

}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 175 "astree.y" /* yacc.c:1646  */
    {

		(yyval.param_node) = (yyvsp[0].param_node);
}
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 181 "astree.y" /* yacc.c:1646  */
    {

		Pnode = PLookup(paramList, (yyvsp[0].node)->varname);
		if(Pnode)
		{
			printf("error : redeclaration of a parameter  '%s'\n",(yyvsp[0].node)->varname);
			exit(1);
		}

		Pnode = init_pnode((yyvsp[-1].node)->type, (yyvsp[0].node)->varname);
		paramList = install_Pnode(paramList, Pnode);

		(yyval.param_node) = paramList;
}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 230 "astree.y" /* yacc.c:1646  */
    {

	type_node = (Astnode *)malloc(sizeof(Astnode));
	(yyvsp[0].node) = type_node;
	(yyvsp[0].node)->type = INTEGER;
	(yyval.node) = (yyvsp[0].node);
}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 237 "astree.y" /* yacc.c:1646  */
    {

	type_node = (Astnode *)malloc(sizeof(Astnode));
	(yyvsp[0].node) = type_node;
	(yyvsp[0].node)->type = STRING;
	(yyval.node) = (yyvsp[0].node);
}
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 270 "astree.y" /* yacc.c:1646  */
    {

	//$$ = $3;
	//print($3);
	printf("Parsing Done\n");
	//codeGen($3,ft);
}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 277 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[-1].node);
	printf("Parsing Done\n");
}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 284 "astree.y" /* yacc.c:1646  */
    {
	 (yyval.node) = makeStatementNode(STATEMENT,STATEMENT,(yyvsp[-1].node),(yyvsp[0].node),"STATEMENT");
}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 287 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 295 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 298 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 301 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 304 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node)= (yyvsp[0].node);
}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 307 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 310 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[-1].node);
}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 313 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[-1].node);
}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 316 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[-1].node);
}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 319 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 322 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 326 "astree.y" /* yacc.c:1646  */
    {
	tmp = Lookup(GSTroot, (yyvsp[-2].node)->varname);


	if(tmp == NULL)
	{
		printf("error: %s",(yyvsp[-2].node)->varname);
		exit(1);
	}

	(yyvsp[-2].node)->GST_entry = tmp;
	(yyvsp[-2].node)->type = tmp->type;
	(yyval.node) = (yyvsp[-2].node);
	(yyval.node) = makeStatementNode(STATEMENT,READ,(yyvsp[-2].node),(Astnode *)NULL,"Read");
}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 342 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = makeStatementNode(STATEMENT,WRITE,(yyvsp[-2].node),(Astnode *)NULL, "Write");
}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 346 "astree.y" /* yacc.c:1646  */
    {
	//printf("Assmt\n");
	if((yyvsp[-3].node)->type != (yyvsp[-1].node)->type){
		printf("Invalid operatinon b/w operands\n");
		exit(1);
	}
	(yyval.node) = makeExpressionNode(EXPRESSION,ASSIGNMENT,'=',(yyvsp[-3].node),(yyvsp[-1].node),"=");
}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 356 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 357 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 361 "astree.y" /* yacc.c:1646  */
    {
		if((yyvsp[-7].node)->nodetype == BOOLEAN)
		{
			Astnode *if_node = makeStatementNode(STATEMENT,IF,(yyvsp[-7].node),(yyvsp[-4].node),"IF");
			Astnode *else_node = makeStatementNode(STATEMENT,ELSE,(yyvsp[-2].node),(Astnode *)NULL,"ELSE");

			(yyval.node) = makeStatementNode(STATEMENT,IF_ELSE,if_node,else_node,"IF_ELSE");
		}
		else 
		{
			printf("Invalid Boolean Statement\n");
			exit(1);
		}
}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 375 "astree.y" /* yacc.c:1646  */
    {
		if((yyvsp[-5].node)->nodetype == BOOLEAN)
		{
			Astnode * if_node = makeStatementNode(STATEMENT,IF,(yyvsp[-5].node),(yyvsp[-2].node),"IF");
			(yyval.node) = makeStatementNode(STATEMENT,IF_ELSE,if_node,(Astnode *)NULL,"IF_ELSE");
		}
		else
		{
			printf("Invalid Boolean Statement\n");
			exit(1);
		}
	}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 388 "astree.y" /* yacc.c:1646  */
    {

	if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	(yyval.node) = makeStatementNode(BOOLEAN,GT,(yyvsp[-2].node),(yyvsp[0].node),"GT");
	}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 397 "astree.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
		{
			printf("aaError Invalid operator b/w operands\n");
			exit(1);
		}
		(yyval.node) = makeStatementNode(BOOLEAN,LT,(yyvsp[-2].node),(yyvsp[0].node),"LT");
	}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 405 "astree.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
		{
			printf("bbError Invalid operator b/w operands\n");
			exit(1);
		}
		(yyval.node) = makeStatementNode(BOOLEAN,GE,(yyvsp[-2].node),(yyvsp[0].node),"GE");
	}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 413 "astree.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
		{
			printf("ccError Invalid operator b/w operands\n");
			exit(1);
		}
		(yyval.node) = makeStatementNode(BOOLEAN,LE,(yyvsp[-2].node),(yyvsp[0].node),"LE");
	}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 421 "astree.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
		{
			printf("ddError Invalid operator b/w operands\n");
			exit(1);
		}
		(yyval.node) = makeStatementNode(BOOLEAN,NE,(yyvsp[-2].node),(yyvsp[0].node),"NE");
	}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 429 "astree.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
		{
			printf("eeError Invalid operator b/w operands\n");
			exit(1);
		}
		(yyval.node) = makeStatementNode(BOOLEAN,EQ,(yyvsp[-2].node),(yyvsp[0].node),"EQ");
	}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 439 "astree.y" /* yacc.c:1646  */
    {

	if((yyvsp[-5].node)->nodetype == BOOLEAN)
	{
		(yyval.node) = makeStatementNode(LOOP,WHILE,(yyvsp[-5].node),(yyvsp[-2].node),"WHILE");
	}
	else
	{
		printf("error: Invalid Comparison:");
		exit(1);
	}
}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 453 "astree.y" /* yacc.c:1646  */
    {

	//printf("Hello\n");
	if((yyvsp[-2].node)->nodetype == BOOLEAN)
	{
		(yyval.node) = makeStatementNode(LOOP,REPEAT_UNTIL,(yyvsp[-5].node),(yyvsp[-2].node),"REPEAT_UNTIL"); 
	}
	else
	{
		printf("error: Invalid Comparison:");
		exit(1);
	}
}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 467 "astree.y" /* yacc.c:1646  */
    {

	if((yyvsp[-2].node)->nodetype == BOOLEAN)
	{
		(yyval.node) = makeStatementNode(LOOP,DO_WHILE,(yyvsp[-6].node),(yyvsp[-2].node),"DO_WHILE"); 
	}
	else
	{
		printf("error: Invalid Comparison:");
		exit(1);
	}
}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 484 "astree.y" /* yacc.c:1646  */
    {
	if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	(yyval.node) = makeExpressionNode(EXPRESSION,PLUS,'+',(yyvsp[-2].node),(yyvsp[0].node),"+"); 
	(yyval.node)->type = (yyvsp[-2].node)->type;
}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 493 "astree.y" /* yacc.c:1646  */
    {
	if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	(yyval.node) = makeExpressionNode(EXPRESSION,MINUS,'-',(yyvsp[-2].node),(yyvsp[0].node),"-"); 
	(yyval.node)->type = (yyvsp[-2].node)->type;
}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 502 "astree.y" /* yacc.c:1646  */
    {
	if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	(yyval.node) = makeExpressionNode(EXPRESSION,MUL,'*',(yyvsp[-2].node),(yyvsp[0].node),"*"); 
	(yyval.node)->type = (yyvsp[-2].node)->type;
}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 511 "astree.y" /* yacc.c:1646  */
    {
	if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	(yyval.node) = makeExpressionNode(EXPRESSION,DIV,'/',(yyvsp[-2].node),(yyvsp[0].node),"/"); 
	(yyval.node)->type = (yyvsp[-2].node)->type;
}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 520 "astree.y" /* yacc.c:1646  */
    {
	if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	(yyval.node) = makeExpressionNode(EXPRESSION,MOD,'%',(yyvsp[-2].node),(yyvsp[0].node),"%"); 
	(yyval.node)->type = (yyvsp[-2].node)->type;
}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 529 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 530 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 531 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 535 "astree.y" /* yacc.c:1646  */
    {

	tmp = Lookup(GSTroot, (yyvsp[0].node)->varname);
	if(tmp == NULL)
	{
		printf("error: %s",(yyvsp[0].node)->varname);
		exit(1);
	}

	(yyval.node) = (yyvsp[0].node);
	(yyvsp[0].node)->GST_entry = tmp;
	(yyval.node)->type = tmp->type;
}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 549 "astree.y" /* yacc.c:1646  */
    {
	tmp = Lookup(GSTroot, (yyvsp[-3].node)->varname);
	if(tmp == NULL)
	{
		printf("error: %s",(yyvsp[-3].node)->varname);
		exit(1);
	}

	if((yyvsp[-1].node)->type != INTEGER)
	{
		printf("error : size of an array must be an integer\n");
		exit(1);
	}
	(yyvsp[-3].node)->GST_entry = tmp;
	(yyval.node)->type = tmp->type;
	(yyval.node) = makeArrayVariableNode((yyval.node)->type, ARRAY_VARIABLE, (yyvsp[-3].node), (yyvsp[-1].node),(yyvsp[-3].node)->varname);
	(yyval.node)->GST_entry = (yyvsp[-3].node)->GST_entry;
	
}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2054 "y.tab.c" /* yacc.c:1646  */
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
#line 572 "astree.y" /* yacc.c:1906  */


void yyerror(char const *err)
{
    printf("yyerror: %s\n",err);
    return ;
}


int main(int argc, char *argv[]) {


	if(argc > 1)
	{
		printf("Generating File %s\n",argv[1]);
		
		ft = fopen(argv[1],"r");
		if(ft) yyin = ft;
	
	}	
		printf("Xsm file as code.xsm\n");
		ft = fopen("code.xsm","w");
		yyparse();
	
	return 0;
}
