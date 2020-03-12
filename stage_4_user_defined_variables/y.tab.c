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
	struct Gsymbol *tmp;

#line 77 "y.tab.c" /* yacc.c:339  */

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
    _DECL = 258,
    _ENDDECL = 259,
    _PLUS = 260,
    _MINUS = 261,
    _MUL = 262,
    _DIV = 263,
    _MOD = 264,
    _NUM = 265,
    _STRING = 266,
    _ID = 267,
    _LT = 268,
    _LE = 269,
    _GT = 270,
    _GE = 271,
    _NE = 272,
    _EQ = 273,
    _INT = 274,
    _STR = 275,
    _READ = 276,
    _WRITE = 277,
    _BEGIN = 278,
    _END = 279,
    _IF = 280,
    _THEN = 281,
    _ELSE = 282,
    _ENDIF = 283,
    _WHILE = 284,
    _DO = 285,
    _ENDWHILE = 286,
    _REPEAT = 287,
    _UNTIL = 288,
    _BREAK = 289,
    _CONTINUE = 290,
    _BREAKPOINT = 291
  };
#endif
/* Tokens.  */
#define _DECL 258
#define _ENDDECL 259
#define _PLUS 260
#define _MINUS 261
#define _MUL 262
#define _DIV 263
#define _MOD 264
#define _NUM 265
#define _STRING 266
#define _ID 267
#define _LT 268
#define _LE 269
#define _GT 270
#define _GE 271
#define _NE 272
#define _EQ 273
#define _INT 274
#define _STR 275
#define _READ 276
#define _WRITE 277
#define _BEGIN 278
#define _END 279
#define _IF 280
#define _THEN 281
#define _ELSE 282
#define _ENDIF 283
#define _WHILE 284
#define _DO 285
#define _ENDWHILE 286
#define _REPEAT 287
#define _UNTIL 288
#define _BREAK 289
#define _CONTINUE 290
#define _BREAKPOINT 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "astree.y" /* yacc.c:355  */

	struct Astnode *node;	

#line 193 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 210 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   247

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  51
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  130

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

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
      41,    42,     2,     2,    38,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
       2,    43,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    39,     2,    40,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    54,    54,    60,    66,    67,    70,    74,    78,    85,
      92,    99,   112,   120,   128,   131,   139,   142,   145,   148,
     151,   154,   157,   160,   163,   166,   170,   186,   190,   200,
     201,   205,   219,   232,   241,   249,   257,   265,   273,   283,
     297,   311,   328,   337,   346,   355,   364,   373,   374,   375,
     379,   392
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_DECL", "_ENDDECL", "_PLUS", "_MINUS",
  "_MUL", "_DIV", "_MOD", "_NUM", "_STRING", "_ID", "_LT", "_LE", "_GT",
  "_GE", "_NE", "_EQ", "_INT", "_STR", "_READ", "_WRITE", "_BEGIN", "_END",
  "_IF", "_THEN", "_ELSE", "_ENDIF", "_WHILE", "_DO", "_ENDWHILE",
  "_REPEAT", "_UNTIL", "_BREAK", "_CONTINUE", "_BREAKPOINT", "';'", "','",
  "'['", "']'", "'('", "')'", "'='", "'{'", "'}'", "$accept",
  "Declarations", "DeclList", "Decl", "VarList", "program", "Slist",
  "Stmt", "Inputstmt", "Outputstmt", "Assgstmt", "expr_str", "Ifstmt",
  "Boolstmt", "Whilestmt", "RepeatUntil", "Dowhile", "expr", "id", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,    59,    44,    91,
      93,    40,    41,    61,   123,   125
};
# endif

#define YYPACT_NINF -45

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-45)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      22,    12,    -8,    29,   -45,    28,    28,    65,   -45,   109,
     -45,    10,   -17,   -14,   -45,   -45,    11,     2,    15,    33,
      32,    36,    30,   192,    42,    49,    50,   125,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,    52,    82,   -45,    81,
     -45,    16,    84,    25,   -45,    16,    16,   192,   141,   -45,
     -45,   -45,    62,   -45,    25,    60,    64,   -45,    16,     4,
     -45,    66,   -45,    68,   238,    71,   224,    74,    46,    63,
     -45,    70,   -45,   113,    -1,    16,    16,    16,    16,    16,
     -45,    91,    92,   101,    16,    16,    16,    16,    16,    16,
     102,   106,    16,   -45,    96,   -45,    38,    38,   -45,   -45,
     -45,   -45,   -45,   192,   238,   238,   238,   238,   238,   238,
     192,    99,   100,   -45,    90,   157,    16,   111,   192,   114,
     115,   116,   -45,   173,   -45,   -45,   119,   127,   -45,   -45
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     0,     0,     0,     5,     0,
       1,    10,     0,     0,     2,     4,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    15,    16,
      17,    18,    19,    20,    24,    25,     0,     0,     6,     0,
       7,     0,     0,     0,    13,     0,     0,     0,     0,    21,
      23,    22,     0,    14,     0,     0,     8,    48,     0,     0,
      49,     0,    30,     0,    29,     0,     0,     0,     0,     0,
      12,     0,    11,     0,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,    47,    42,    43,    44,    45,
      46,    26,    27,     0,    34,    36,    33,    35,    37,    38,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,    40,     0,    32,    39,     0,     0,    41,    31
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -45,   -45,   -45,   158,   161,   -45,   -20,   -26,   -45,   -45,
     -45,   118,   -45,   -44,   -45,   -45,   -45,   -24,    -9
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,     8,    12,     3,    27,    28,    29,    30,
      31,    63,    32,    65,    33,    34,    35,    66,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      36,    53,    67,    48,    75,    76,    77,    78,    79,    75,
      76,    77,    78,    79,    36,     9,     4,    59,    36,    64,
      38,    39,    53,    40,    39,     1,    57,    68,    16,    10,
      64,     5,     6,    61,    74,    57,    62,    16,    36,    36,
      11,    95,    53,    42,    80,    77,    78,    79,   112,    37,
      41,    96,    97,    98,    99,   100,    43,    58,    16,    36,
     104,   105,   106,   107,   108,   109,    58,    17,    18,    14,
      44,    20,   121,    45,    47,    21,    22,    46,    23,    49,
      24,    25,    26,   114,     5,     6,    50,    51,    53,    53,
     115,    91,    55,    56,    36,    54,    16,    53,   123,    70,
      72,    36,    16,    73,    92,    36,    36,    93,    81,    36,
      82,    17,    18,    83,    36,    20,    90,   118,   119,    21,
      22,    16,    23,    94,    24,    25,    26,   103,   101,   102,
      17,    18,   110,    19,    20,   111,   113,    16,    21,    22,
     116,    23,   117,    24,    25,    26,    17,    18,   122,    52,
      20,   124,   125,    16,    21,    22,   128,    23,   126,    24,
      25,    26,    17,    18,   129,    15,    20,    13,     0,    16,
      21,    22,    71,    23,    69,    24,    25,    26,    17,    18,
       0,     0,    20,     0,     0,    16,    21,    22,   120,    23,
       0,    24,    25,    26,    17,    18,     0,     0,    20,     0,
       0,   127,    21,    22,    16,    23,     0,    24,    25,    26,
       0,     0,     0,    17,    18,     0,     0,    20,     0,     0,
       0,    21,    22,     0,    23,     0,    24,    25,    26,    75,
      76,    77,    78,    79,     0,     0,     0,    84,    85,    86,
      87,    88,    89,    75,    76,    77,    78,    79
};

static const yytype_int8 yycheck[] =
{
       9,    27,    46,    23,     5,     6,     7,     8,     9,     5,
       6,     7,     8,     9,    23,    23,     4,    41,    27,    43,
      37,    38,    48,    37,    38,     3,    10,    47,    12,     0,
      54,    19,    20,    42,    58,    10,    11,    12,    47,    48,
      12,    42,    68,    41,    40,     7,     8,     9,    92,    39,
      39,    75,    76,    77,    78,    79,    41,    41,    12,    68,
      84,    85,    86,    87,    88,    89,    41,    21,    22,     4,
      37,    25,   116,    41,    44,    29,    30,    41,    32,    37,
      34,    35,    36,   103,    19,    20,    37,    37,   114,   115,
     110,    45,    10,    12,   103,    43,    12,   123,   118,    37,
      40,   110,    12,    39,    41,   114,   115,    37,    42,   118,
      42,    21,    22,    42,   123,    25,    42,    27,    28,    29,
      30,    12,    32,    10,    34,    35,    36,    26,    37,    37,
      21,    22,    30,    24,    25,    29,    40,    12,    29,    30,
      41,    32,    42,    34,    35,    36,    21,    22,    37,    24,
      25,    37,    37,    12,    29,    30,    37,    32,    42,    34,
      35,    36,    21,    22,    37,     7,    25,     6,    -1,    12,
      29,    30,    54,    32,    33,    34,    35,    36,    21,    22,
      -1,    -1,    25,    -1,    -1,    12,    29,    30,    31,    32,
      -1,    34,    35,    36,    21,    22,    -1,    -1,    25,    -1,
      -1,    28,    29,    30,    12,    32,    -1,    34,    35,    36,
      -1,    -1,    -1,    21,    22,    -1,    -1,    25,    -1,    -1,
      -1,    29,    30,    -1,    32,    -1,    34,    35,    36,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,     5,     6,     7,     8,     9
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    47,    51,     4,    19,    20,    48,    49,    23,
       0,    12,    50,    50,     4,    49,    12,    21,    22,    24,
      25,    29,    30,    32,    34,    35,    36,    52,    53,    54,
      55,    56,    58,    60,    61,    62,    64,    39,    37,    38,
      37,    39,    41,    41,    37,    41,    41,    44,    52,    37,
      37,    37,    24,    53,    43,    10,    12,    10,    41,    63,
      64,    64,    11,    57,    63,    59,    63,    59,    52,    33,
      37,    57,    40,    39,    63,     5,     6,     7,     8,     9,
      40,    42,    42,    42,    13,    14,    15,    16,    17,    18,
      42,    45,    41,    37,    10,    42,    63,    63,    63,    63,
      63,    37,    37,    26,    63,    63,    63,    63,    63,    63,
      30,    29,    59,    40,    52,    52,    41,    42,    27,    28,
      31,    59,    37,    52,    37,    37,    42,    28,    37,    37
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    47,    48,    48,    49,    49,    50,    50,
      50,    50,    51,    51,    52,    52,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    54,    55,    56,    57,
      57,    58,    58,    59,    59,    59,    59,    59,    59,    60,
      61,    62,    63,    63,    63,    63,    63,    63,    63,    63,
      64,    64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     3,     3,     3,     6,
       1,     4,     5,     4,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     1,     1,     5,     5,     4,     1,
       1,    10,     8,     3,     3,     3,     3,     3,     3,     8,
       7,     9,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     4
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
#line 54 "astree.y" /* yacc.c:1646  */
    {

	print_GST(GSTroot);
	(yyval.node) = (yyvsp[-1].node);
	printf("Declarations Done\n");
}
#line 1396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 60 "astree.y" /* yacc.c:1646  */
    {
	printf("No Declarations\n");
}
#line 1404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 66 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 67 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 70 "astree.y" /* yacc.c:1646  */
    {

	(yyval.node) = AST_typechange(GSTroot, (yyvsp[-1].node), INTEGER);
}
#line 1425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 74 "astree.y" /* yacc.c:1646  */
    {
	 (yyval.node) = AST_typechange(GSTroot, (yyvsp[-1].node), STRING);
}
#line 1433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 78 "astree.y" /* yacc.c:1646  */
    {
	tmp = init_node(-1, VARIABLE, 1, (yyvsp[0].node)->s);
	GSTroot = installID(GSTroot, (yyvsp[0].node)->s, -1, VARIABLE, 1,tmp);
	(yyvsp[0].node)->GST_entry = tmp;
	(yyvsp[0].node)->GST_entry->next = NULL;
	(yyval.node) = makeStatementNode(STATEMENT, STATEMENT, (yyvsp[-2].node), (yyvsp[0].node), "ST");
}
#line 1445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 85 "astree.y" /* yacc.c:1646  */
    {
	tmp = init_node(-1, ARRAY_VARIABLE, (yyvsp[-1].node)->val, (yyvsp[-3].node)->s);
	GSTroot = installID(GSTroot, (yyvsp[-3].node)->s, -1, ARRAY_VARIABLE, (yyvsp[-1].node)->val,tmp);
	(yyvsp[-3].node)->GST_entry = tmp;
	(yyvsp[-3].node)->GST_entry->next = NULL;
	(yyval.node) = makeStatementNode(STATEMENT, STATEMENT, (yyvsp[-5].node), (yyvsp[-3].node), "ST");	
}
#line 1457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 92 "astree.y" /* yacc.c:1646  */
    {
	tmp = init_node(-1, VARIABLE, 1, (yyvsp[0].node)->s);
	(yyvsp[0].node)->GST_entry = tmp;
	(yyvsp[0].node)->GST_entry->next = NULL;
	GSTroot = installID(GSTroot, (yyvsp[0].node)->s, -1, VARIABLE, 1,tmp);
	(yyval.node) = (yyvsp[0].node);
}
#line 1469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 99 "astree.y" /* yacc.c:1646  */
    {

	tmp = init_node(-1, ARRAY_VARIABLE, (yyvsp[-1].node)->val, (yyvsp[-3].node)->s);
	(yyval.node)->GST_entry = tmp;
	(yyval.node)->GST_entry->next = NULL;
	GSTroot = installID(GSTroot, (yyvsp[-3].node)->s, -1, ARRAY_VARIABLE, (yyvsp[-1].node)->val,tmp);
	(yyval.node) = makeArrayVariableNode(ARRAY_VARIABLE,ARRAY_VARIABLE,(yyvsp[-3].node),(yyvsp[-1].node),(yyvsp[-3].node)->s);
}
#line 1482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 112 "astree.y" /* yacc.c:1646  */
    {

	//$$ = $3;
	print((yyvsp[-2].node));
	printf("Parsing Done\n");
	codeGen((yyvsp[-2].node),ft);
	exit(1);
}
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 120 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[-1].node);
	printf("Parsing Done\n");
	exit(1);
}
#line 1505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 128 "astree.y" /* yacc.c:1646  */
    {
	 (yyval.node) = makeStatementNode(STATEMENT,STATEMENT,(yyvsp[-1].node),(yyvsp[0].node),"STATEMENT");
}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 131 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 139 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 142 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 145 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 148 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node)= (yyvsp[0].node);
}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 151 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 154 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[-1].node);
}
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 157 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[-1].node);
}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 160 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[-1].node);
}
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 163 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 166 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 170 "astree.y" /* yacc.c:1646  */
    {
	tmp = Lookup(GSTroot, (yyvsp[-2].node)->s);


	if(tmp == NULL)
	{
		printf("error: %s",(yyvsp[-2].node)->s);
		exit(1);
	}

	(yyvsp[-2].node)->GST_entry = tmp;
	(yyvsp[-2].node)->type = tmp->type;
	(yyval.node) = (yyvsp[-2].node);
	(yyval.node) = makeStatementNode(STATEMENT,READ,(yyvsp[-2].node),(Astnode *)NULL,"Read");
}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 186 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = makeStatementNode(STATEMENT,WRITE,(yyvsp[-2].node),(Astnode *)NULL, "Write");
}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 190 "astree.y" /* yacc.c:1646  */
    {
	//printf("Assmt\n");
	if((yyvsp[-3].node)->type != (yyvsp[-1].node)->type){
		printf("Invalid operatinon b/w operands\n");
		exit(1);
	}
	(yyval.node) = makeExpressionNode(EXPRESSION,ASSIGNMENT,'=',(yyvsp[-3].node),(yyvsp[-1].node),"=");
}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 200 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 201 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 205 "astree.y" /* yacc.c:1646  */
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
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 219 "astree.y" /* yacc.c:1646  */
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
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 232 "astree.y" /* yacc.c:1646  */
    {

	if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	(yyval.node) = makeStatementNode(BOOLEAN,GT,(yyvsp[-2].node),(yyvsp[0].node),"GT");
	}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 241 "astree.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
		{
			printf("aaError Invalid operator b/w operands\n");
			exit(1);
		}
		(yyval.node) = makeStatementNode(BOOLEAN,LT,(yyvsp[-2].node),(yyvsp[0].node),"LT");
	}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 249 "astree.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
		{
			printf("bbError Invalid operator b/w operands\n");
			exit(1);
		}
		(yyval.node) = makeStatementNode(BOOLEAN,GE,(yyvsp[-2].node),(yyvsp[0].node),"GE");
	}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 257 "astree.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
		{
			printf("ccError Invalid operator b/w operands\n");
			exit(1);
		}
		(yyval.node) = makeStatementNode(BOOLEAN,LE,(yyvsp[-2].node),(yyvsp[0].node),"LE");
	}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 265 "astree.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
		{
			printf("ddError Invalid operator b/w operands\n");
			exit(1);
		}
		(yyval.node) = makeStatementNode(BOOLEAN,NE,(yyvsp[-2].node),(yyvsp[0].node),"NE");
	}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 273 "astree.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
		{
			printf("eeError Invalid operator b/w operands\n");
			exit(1);
		}
		(yyval.node) = makeStatementNode(BOOLEAN,EQ,(yyvsp[-2].node),(yyvsp[0].node),"EQ");
	}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 283 "astree.y" /* yacc.c:1646  */
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
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 297 "astree.y" /* yacc.c:1646  */
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
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 311 "astree.y" /* yacc.c:1646  */
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
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 328 "astree.y" /* yacc.c:1646  */
    {
	if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	(yyval.node) = makeExpressionNode(EXPRESSION,PLUS,'+',(yyvsp[-2].node),(yyvsp[0].node),"+"); 
	(yyval.node)->type = (yyvsp[-2].node)->type;
}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 337 "astree.y" /* yacc.c:1646  */
    {
	if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	(yyval.node) = makeExpressionNode(EXPRESSION,MINUS,'-',(yyvsp[-2].node),(yyvsp[0].node),"-"); 
	(yyval.node)->type = (yyvsp[-2].node)->type;
}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 346 "astree.y" /* yacc.c:1646  */
    {
	if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	(yyval.node) = makeExpressionNode(EXPRESSION,MUL,'*',(yyvsp[-2].node),(yyvsp[0].node),"*"); 
	(yyval.node)->type = (yyvsp[-2].node)->type;
}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 355 "astree.y" /* yacc.c:1646  */
    {
	if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	(yyval.node) = makeExpressionNode(EXPRESSION,DIV,'/',(yyvsp[-2].node),(yyvsp[0].node),"/"); 
	(yyval.node)->type = (yyvsp[-2].node)->type;
}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 364 "astree.y" /* yacc.c:1646  */
    {
	if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	(yyval.node) = makeExpressionNode(EXPRESSION,MOD,'%',(yyvsp[-2].node),(yyvsp[0].node),"%"); 
	(yyval.node)->type = (yyvsp[-2].node)->type;
}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 373 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 374 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 375 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 379 "astree.y" /* yacc.c:1646  */
    {

	tmp = Lookup(GSTroot, (yyvsp[0].node)->s);
	if(tmp == NULL)
	{
		printf("a1error: %s",(yyvsp[0].node)->s);
		exit(1);
	}

	(yyval.node) = (yyvsp[0].node);
	(yyval.node)->GST_entry = tmp;
	(yyval.node)->type = tmp->type;
}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 392 "astree.y" /* yacc.c:1646  */
    {
	tmp = Lookup(GSTroot, (yyvsp[-3].node)->s);
	if(tmp == NULL)
	{
		printf("a2error: %s",(yyvsp[-3].node)->s);
		exit(1);
	}

	if((yyvsp[-1].node)->type != INTEGER)
	{
		printf("error : size of an array must be an integer\n");
		exit(1);
	}
	(yyvsp[-3].node)->GST_entry = tmp;
	(yyval.node)->type = tmp->type;
	(yyval.node) = makeArrayVariableNode(ARRAY_VARIABLE, (yyval.node)->type, (yyvsp[-3].node), (yyvsp[-1].node),(yyvsp[-3].node)->s);
	(yyval.node)->GST_entry = (yyvsp[-3].node)->GST_entry;
	
}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1955 "y.tab.c" /* yacc.c:1646  */
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
#line 415 "astree.y" /* yacc.c:1906  */


void yyerror(char const *s)
{
    printf("yyerror: %s\n",s);
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
