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
	struct Astnode *type_node , *tmp_ast;;
	struct Gsymbol *tmp;
	struct Pmtr *paramList , *Pnode;
	struct Lsymbol *LSTnode, *Lnode;

#line 80 "y.tab.c" /* yacc.c:339  */

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
    _RETURN = 281,
    _IF = 282,
    _THEN = 283,
    _ELSE = 284,
    _ENDIF = 285,
    _WHILE = 286,
    _DO = 287,
    _ENDWHILE = 288,
    _REPEAT = 289,
    _UNTIL = 290,
    _BREAK = 291,
    _CONTINUE = 292,
    _BREAKPOINT = 293
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
#define _RETURN 281
#define _IF 282
#define _THEN 283
#define _ELSE 284
#define _ENDIF 285
#define _WHILE 286
#define _DO 287
#define _ENDWHILE 288
#define _REPEAT 289
#define _UNTIL 290
#define _BREAK 291
#define _CONTINUE 292
#define _BREAKPOINT 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "astree.y" /* yacc.c:355  */

	struct Astnode *node;	
	struct Pmtr *param_node;
	struct Lsymbol *lst_node;

#line 202 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 219 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   260

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  178

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

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
      39,    40,     2,     2,    44,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    43,
       2,    47,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,    42,     2,     2,     2,     2,
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
      35,    36,    37,    38
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    67,    67,    73,    78,    86,   115,   121,   127,   137,
     141,   148,   152,   157,   164,   171,   186,   190,   195,   219,
     224,   230,   250,   256,   262,   265,   271,   277,   284,   294,
     301,   334,   339,   347,   351,   354,   359,   362,   370,   373,
     376,   379,   382,   385,   388,   391,   394,   397,   401,   417,
     421,   432,   433,   437,   451,   464,   473,   481,   489,   497,
     505,   515,   529,   543,   560,   569,   578,   587,   596,   605,
     606,   607,   611,   624
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
  "_END", "_RETURN", "_IF", "_THEN", "_ELSE", "_ENDIF", "_WHILE", "_DO",
  "_ENDWHILE", "_REPEAT", "_UNTIL", "_BREAK", "_CONTINUE", "_BREAKPOINT",
  "'('", "')'", "'{'", "'}'", "';'", "','", "'['", "']'", "'='", "$accept",
  "program", "MainBlock", "GDeclBlock", "GdeclList", "Gdecl", "GidList",
  "Gid", "FdefBlock", "Fdef", "ParamList", "Param", "LdeclBlock",
  "LdeclList", "Ldecl", "IdList", "Type", "Body", "Retstmt", "Ret_Type",
  "Slist", "Stmt", "Inputstmt", "Outputstmt", "Assgstmt", "expr_str",
  "Ifstmt", "Boolstmt", "Whilestmt", "RepeatUntil", "Dowhile", "expr",
  "id", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,    40,
      41,   123,   125,    59,    44,    91,    93,    61
};
# endif

#define YYPACT_NINF -91

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-91)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      17,     5,    15,    13,   -91,    33,   -91,   -91,   -91,    10,
     -91,    26,    11,   -91,    15,   -91,    33,   -91,    50,   -91,
     -91,   -28,    12,   -91,    25,   -91,   -91,    27,    82,    62,
     -91,    26,    47,    82,    45,   -91,    80,    65,   -91,   120,
      46,   -91,    82,   -91,   -91,    23,   101,    90,   -91,   -91,
      28,   -91,   113,   127,    86,   120,   -91,   -91,   -91,    61,
      88,    93,    96,    34,   103,   108,   105,   198,   109,   112,
     117,   123,   127,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   104,   -91,   101,   -91,   143,    -4,   149,    -7,   -91,
     -91,   125,    -4,    -4,   198,   144,   -91,   -91,   -91,   126,
     145,   -91,    -7,   130,   -91,   -91,    -4,    69,   -91,   133,
     -91,   137,   245,   -91,   146,   231,   147,    85,   150,   -91,
     142,   153,   -91,    74,    -4,    -4,    -4,    -4,    -4,   -91,
     159,   160,   162,    -4,    -4,    -4,    -4,    -4,    -4,   172,
     175,    -4,   -91,   -91,   -91,    87,    87,   -91,   -91,   -91,
     -91,   -91,   198,   245,   245,   245,   245,   245,   245,   198,
     168,   173,   107,   161,    -4,   174,   198,   176,   179,   183,
     -91,   178,   -91,   -91,   181,   184,   -91,   -91
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     4,     0,     7,    29,    30,     0,
       9,     0,     0,     1,    29,     3,     0,    17,     0,     6,
       8,    13,     0,    12,     0,     2,    16,     0,     0,     0,
      10,     0,     0,     0,     0,    20,     0,     0,    11,     0,
       0,    15,     0,    21,    14,     0,     0,     0,    19,    23,
       0,    25,     0,     0,     0,     0,    22,    24,    28,     0,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    37,    38,    39,    40,    41,    42,    46,
      47,     0,     5,     0,    26,     0,     0,     0,     0,    35,
      34,     0,     0,     0,     0,     0,    43,    45,    44,     0,
       0,    36,     0,     0,    27,    70,     0,     0,    71,     0,
      52,     0,    51,    33,     0,     0,     0,     0,     0,    32,
       0,     0,    18,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    50,    69,    64,    65,    66,    67,    68,
      48,    49,     0,    56,    58,    55,    57,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      62,     0,    54,    61,     0,     0,    63,    53
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -91,   -91,    22,   -91,   -91,   209,   -91,   195,   -91,   212,
     200,   189,   187,   -91,   193,   -91,     7,   177,   185,   -91,
     -65,   -71,   -91,   -91,   -91,   154,   -91,   -90,   -91,   -91,
     -91,   -66,   -53
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,     9,    10,    22,    23,    16,    17,
      34,    35,    46,    50,    51,    59,    36,    54,    71,    91,
      72,    73,    74,    75,    76,   111,    77,   114,    78,    79,
      80,   115,   108
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      81,   101,    95,   116,   105,   110,    60,   105,    11,    60,
       6,    28,    18,    13,    81,    19,    11,    29,    12,    81,
     107,     1,   112,    18,   101,     7,     8,    15,    49,   117,
       7,     8,   106,    56,   109,   106,   112,     2,    25,    21,
     123,    81,    81,     7,     8,    89,   101,    90,     7,     8,
      24,   161,    52,    14,     8,    30,    31,    52,   145,   146,
     147,   148,   149,    27,    81,    32,    33,   153,   154,   155,
     156,   157,   158,    37,   169,   124,   125,   126,   127,   128,
     124,   125,   126,   127,   128,    41,    47,   162,    39,    42,
      42,   101,   101,    43,   163,   126,   127,   128,    60,    81,
     101,   171,     7,     8,    84,    85,    81,    61,    62,    81,
      81,    44,    64,    81,   144,   129,    65,    66,    81,    67,
      60,    68,    69,    70,    45,    53,    58,   140,    82,    61,
      62,    55,    87,    86,    64,    88,   166,   167,    65,    66,
      60,    67,    92,    68,    69,    70,    94,    93,    99,    61,
      62,   102,    96,    63,    64,    97,   104,    60,    65,    66,
      98,    67,    60,    68,    69,    70,    61,    62,   113,   119,
     120,    64,   122,   130,    60,    65,    66,   131,    67,   118,
      68,    69,    70,    61,    62,   142,   132,   139,    64,   141,
     152,    60,    65,    66,   168,    67,   143,    68,    69,    70,
      61,    62,   150,   151,   159,    64,   160,   164,   175,    65,
      66,    60,    67,   165,    68,    69,    70,   170,    20,   172,
      61,    62,   173,   174,   176,    64,    38,   177,    26,    65,
      66,    48,    67,    40,    68,    69,    70,   124,   125,   126,
     127,   128,    83,    57,     0,   133,   134,   135,   136,   137,
     138,   124,   125,   126,   127,   128,   121,   100,     0,     0,
     103
};

static const yytype_int16 yycheck[] =
{
      53,    72,    67,    93,    11,    12,    13,    11,     1,    13,
       5,    39,     5,     0,    67,     5,     9,    45,     3,    72,
      86,     4,    88,    16,    95,    20,    21,     5,     5,    94,
      20,    21,    39,     5,    87,    39,   102,    20,    16,    13,
     106,    94,    95,    20,    21,    11,   117,    13,    20,    21,
      39,   141,    45,    20,    21,    43,    44,    50,   124,   125,
     126,   127,   128,    13,   117,    40,    39,   133,   134,   135,
     136,   137,   138,    11,   164,     6,     7,     8,     9,    10,
       6,     7,     8,     9,    10,    40,    40,   152,    41,    44,
      44,   162,   163,    13,   159,     8,     9,    10,    13,   152,
     171,   166,    20,    21,    43,    44,   159,    22,    23,   162,
     163,    46,    27,   166,    40,    46,    31,    32,   171,    34,
      13,    36,    37,    38,     4,    24,    13,    42,    42,    22,
      23,    41,    39,    45,    27,    39,    29,    30,    31,    32,
      13,    34,    39,    36,    37,    38,    41,    39,    25,    22,
      23,    47,    43,    26,    27,    43,    13,    13,    31,    32,
      43,    34,    13,    36,    37,    38,    22,    23,    43,    43,
      25,    27,    42,    40,    13,    31,    32,    40,    34,    35,
      36,    37,    38,    22,    23,    43,    40,    40,    27,    39,
      28,    13,    31,    32,    33,    34,    43,    36,    37,    38,
      22,    23,    43,    43,    32,    27,    31,    39,    30,    31,
      32,    13,    34,    40,    36,    37,    38,    43,     9,    43,
      22,    23,    43,    40,    43,    27,    31,    43,    16,    31,
      32,    42,    34,    33,    36,    37,    38,     6,     7,     8,
       9,    10,    55,    50,    -1,    14,    15,    16,    17,    18,
      19,     6,     7,     8,     9,    10,   102,    72,    -1,    -1,
      83
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    20,    49,    50,    51,     5,    20,    21,    52,
      53,    64,     3,     0,    20,    50,    56,    57,    64,     5,
      53,    13,    54,    55,    39,    50,    57,    13,    39,    45,
      43,    44,    40,    39,    58,    59,    64,    11,    55,    41,
      58,    40,    44,    13,    46,     4,    60,    40,    59,     5,
      61,    62,    64,    24,    65,    41,     5,    62,    13,    63,
      13,    22,    23,    26,    27,    31,    32,    34,    36,    37,
      38,    66,    68,    69,    70,    71,    72,    74,    76,    77,
      78,    80,    42,    60,    43,    44,    45,    39,    39,    11,
      13,    67,    39,    39,    41,    68,    43,    43,    43,    25,
      66,    69,    47,    65,    13,    11,    39,    79,    80,    80,
      12,    73,    79,    43,    75,    79,    75,    68,    35,    43,
      25,    73,    42,    79,     6,     7,     8,     9,    10,    46,
      40,    40,    40,    14,    15,    16,    17,    18,    19,    40,
      42,    39,    43,    43,    40,    79,    79,    79,    79,    79,
      43,    43,    28,    79,    79,    79,    79,    79,    79,    32,
      31,    75,    68,    68,    39,    40,    29,    30,    33,    75,
      43,    68,    43,    43,    40,    30,    43,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    49,    49,    50,    51,    51,    52,    52,
      53,    54,    54,    55,    55,    55,    56,    56,    57,    58,
      58,    59,    60,    60,    61,    61,    62,    63,    63,    64,
      64,    65,    65,    66,    67,    67,    68,    68,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    70,    71,
      72,    73,    73,    74,    74,    75,    75,    75,    75,    75,
      75,    76,    77,    78,    79,    79,    79,    79,    79,    79,
      79,    79,    80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     1,     8,     3,     2,     2,     1,
       3,     3,     1,     1,     4,     4,     2,     1,     9,     3,
       1,     2,     3,     2,     2,     1,     3,     3,     1,     1,
       1,     5,     4,     3,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     1,     1,     5,     5,
       4,     1,     1,    10,     8,     3,     3,     3,     3,     3,
       3,     8,     7,     9,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     4
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
#line 67 "astree.y" /* yacc.c:1646  */
    {
		print_GST(GSTroot);
		printf("Parsing Done\n");
		codeGen((yyvsp[0].node), ft);
		exit(1);  
}
#line 1437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 73 "astree.y" /* yacc.c:1646  */
    {
		codeGen((yyvsp[0].node), ft);
		printf("Parsing Done\n");
		exit(1);
}
#line 1447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 78 "astree.y" /* yacc.c:1646  */
    {
		printf("Parsing Done\n");
		(yyval.node) = (yyvsp[0].node);
		exit(1);
}
#line 1457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 86 "astree.y" /* yacc.c:1646  */
    {

 		print((yyvsp[-1].node));
 		Lnode = init_lstnode("main");
 		LSTnode = install_lstnode(LSTnode, Lnode);

 		tmp = init_node(-1, FUNCTION, 0, "main");
 		GSTroot = installID(GSTroot, 0, tmp);

 		tmp = Lookup(GSTroot, "main");
 		tmp->LST_entry = LSTnode;
 		tmp_ast = (yyvsp[-1].node)->right;

 		if(!tmp)
 		{
 			printf("undefined  reference to 'main'\n");
 			exit(1);
 		}
 		if(tmp_ast->type != INTEGER)
 		{
 			printf("error: 'main' function must have a return type of integer :\n");
 			exit(1);
 		}
 		(yyval.node) = makeStatementNode(FUNCTION, FUNCTION, (yyvsp[-1].node),(Astnode *)NULL, "MAIN_FUNCTION");
 		(yyval.node)->GST_entry = tmp;
 		LSTnode = NULL;
 }
#line 1489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 115 "astree.y" /* yacc.c:1646  */
    {

		(yyval.node) = (yyvsp[-1].node);
		printf("Global Declaration Done\n");

}
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 121 "astree.y" /* yacc.c:1646  */
    {
		printf("No Global Declaration\n");
		(yyval.node) = NULL;
}
#line 1509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 127 "astree.y" /* yacc.c:1646  */
    {

		if((yyvsp[-1].node)->type != (yyvsp[0].node)->type)
		{
			printf("error :Type Mismatch\n");
			exit(1);
		}

		(yyval.node) = makeStatementNode((yyvsp[-1].node)->type, STATEMENT, (yyvsp[-1].node), (yyvsp[0].node), "STATEMENT");
}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 137 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 141 "astree.y" /* yacc.c:1646  */
    {

	(yyval.node) = AST_typechange(GSTroot, (yyvsp[-1].node), (yyvsp[-2].node)->type);
	(yyval.node)->type = (yyvsp[-2].node)->type;
}
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 148 "astree.y" /* yacc.c:1646  */
    {

		(yyval.node) = makeStatementNode(-1, STATEMENT, (yyvsp[-2].node), (yyvsp[0].node), "STATEMENT");
}
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 152 "astree.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);
}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 157 "astree.y" /* yacc.c:1646  */
    {

		tmp = init_node(-1, VARIABLE, 1, (yyvsp[0].node)->varname);
		(yyvsp[0].node)->GST_entry = tmp;
		GSTroot = installID(GSTroot, 1 ,tmp);
		(yyval.node) = (yyvsp[0].node);
}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 164 "astree.y" /* yacc.c:1646  */
    {

		tmp = init_node(-1, ARRAY_VARIABLE, (yyvsp[-1].node)->val, (yyvsp[-3].node)->varname);
		GSTroot = installID(GSTroot, (yyvsp[-1].node)->val, tmp);
		(yyval.node) = makeArrayVariableNode(-1, ARRAY_VARIABLE, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-3].node)->varname);	
		(yyval.node)->GST_entry = tmp;
}
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 171 "astree.y" /* yacc.c:1646  */
    {

		tmp = init_node(-1, FUNCT_VARIABLE, -1,  (yyvsp[-3].node)->varname);
		tmp->PList = (yyvsp[-1].param_node);
		GSTroot = installID(GSTroot, -1, tmp);
		(yyval.node) = (yyvsp[-3].node);
		(yyval.node)->GST_entry = tmp;
		paramList = NULL;
}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 186 "astree.y" /* yacc.c:1646  */
    {

			LSTnode = NULL;
}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 190 "astree.y" /* yacc.c:1646  */
    {
			(yyval.node) = (yyvsp[0].node);
 }
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 195 "astree.y" /* yacc.c:1646  */
    {

 			LSTnode = update_lst(LSTnode, GSTroot, (yyvsp[-7].node));

 			tmp = Lookup(GSTroot, (yyvsp[-7].node)->varname);
 			if(!tmp)
 			{
 				printf("error : implicit declaration of function '%s'",(yyvsp[-7].node)->varname);
 				exit(1);
 			}
 			else if(tmp->type != (yyvsp[-8].node)->type)
 			{
 				printf("error : Invalid return Type of function '%s'\n",(yyvsp[-7].node)->varname);
 				exit(1);
 			}

 			(yyvsp[-1].node)->type = (yyvsp[-8].node)->type;
 			tmp->LST_entry = LSTnode;
 			LSTnode = NULL;
 			(yyval.node) = (yyvsp[-1].node);
 			//print_funct_body($8);
 			//funct_codeGen(ft, $8);
 }
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 219 "astree.y" /* yacc.c:1646  */
    {

			(yyval.param_node) = paramList;

}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 224 "astree.y" /* yacc.c:1646  */
    {

		(yyval.param_node) = (yyvsp[0].param_node);
}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 230 "astree.y" /* yacc.c:1646  */
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
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 250 "astree.y" /* yacc.c:1646  */
    {

			print_lst(LSTnode);
			printf("Function Declaration\n");
			(yyval.lst_node) = (yyvsp[-1].lst_node);
}
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 256 "astree.y" /* yacc.c:1646  */
    {
			printf("No Function Declaration\n");
			(yyval.lst_node) = NULL;
}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 262 "astree.y" /* yacc.c:1646  */
    {

}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 265 "astree.y" /* yacc.c:1646  */
    {

	(yyval.lst_node) = (yyvsp[0].lst_node);
}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 271 "astree.y" /* yacc.c:1646  */
    {

	(yyval.lst_node) = lst_typechange(LSTnode, (yyvsp[-1].lst_node), (yyvsp[-2].node)->type);
}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 277 "astree.y" /* yacc.c:1646  */
    {

		Lnode = init_lstnode((yyvsp[-2].lst_node)->varname);	
		LSTnode = install_lstnode(LSTnode, Lnode);

		(yyval.lst_node) = makeFunctDeclNode(-1, (yyvsp[-2].lst_node), (yyvsp[0].node), "FUNCT_DECL");	
}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 284 "astree.y" /* yacc.c:1646  */
    {

		Lnode = init_lstnode((yyvsp[0].node)->varname);
		LSTnode = install_lstnode(LSTnode, Lnode);

		(yyval.lst_node) = LSTnode;

}
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 294 "astree.y" /* yacc.c:1646  */
    {

	type_node = (Astnode *)malloc(sizeof(Astnode));
	(yyvsp[0].node) = type_node;
	(yyvsp[0].node)->type = INTEGER;
	(yyval.node) = (yyvsp[0].node);
}
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 301 "astree.y" /* yacc.c:1646  */
    {

	type_node = (Astnode *)malloc(sizeof(Astnode));
	(yyvsp[0].node) = type_node;
	(yyvsp[0].node)->type = STRING;
	(yyval.node) = (yyvsp[0].node);
}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 334 "astree.y" /* yacc.c:1646  */
    {

 		(yyval.node) = makeStatementNode(STATEMENT, STATEMENT, (yyvsp[-3].node), (yyvsp[-2].node), "STATEMENT");
 		printf("Body of the function parsed\n");
}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 339 "astree.y" /* yacc.c:1646  */
    {

		(yyval.node) = (yyvsp[-2].node);
 		(yyval.node) = makeStatementNode(STATEMENT, STATEMENT,(Astnode *)NULL , (yyvsp[-2].node), "STATEMENT");
 		printf("Body of the function parsed\n");
}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 347 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[-1].node);
}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 351 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 354 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 359 "astree.y" /* yacc.c:1646  */
    {
	 (yyval.node) = makeStatementNode(STATEMENT,STATEMENT,(yyvsp[-1].node),(yyvsp[0].node),"STATEMENT");
}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 362 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 370 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 373 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 376 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 379 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node)= (yyvsp[0].node);
}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 382 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 385 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[-1].node);
}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 388 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[-1].node);
}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 391 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[-1].node);
}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 394 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 397 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 401 "astree.y" /* yacc.c:1646  */
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
	(yyval.node) = makeStatementNode(READ,STATEMENT,(yyvsp[-2].node),(Astnode *)NULL,"Read");
}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 417 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = makeStatementNode(WRITE,STATEMENT,(yyvsp[-2].node),(Astnode *)NULL, "Write");
}
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 421 "astree.y" /* yacc.c:1646  */
    {
	//printf("Assmt\n");
	if((yyvsp[-3].node)->type != (yyvsp[-1].node)->type){
		printf("Invalid operatinon b/w operands\n");
		exit(1);
	}

	(yyval.node) = makeExpressionNode(ASSIGNMENT,EXPRESSION,'=',(yyvsp[-3].node),(yyvsp[-1].node),"=");
}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 432 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 433 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 437 "astree.y" /* yacc.c:1646  */
    {
		if((yyvsp[-7].node)->nodetype == BOOLEAN)
		{
			Astnode *if_node = makeStatementNode(IF,STATEMENT, (yyvsp[-7].node),(yyvsp[-4].node),"IF");
			Astnode *else_node = makeStatementNode(ELSE,STATEMENT,(yyvsp[-2].node),(Astnode *)NULL,"ELSE");

			(yyval.node) = makeStatementNode(IF_ELSE,STATEMENT,if_node,else_node,"IF_ELSE");
		}
		else 
		{
			printf("Invalid Boolean Statement\n");
			exit(1);
		}
}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 451 "astree.y" /* yacc.c:1646  */
    {
		if((yyvsp[-5].node)->nodetype == BOOLEAN)
		{
			Astnode * if_node = makeStatementNode(IF,STATEMENT,(yyvsp[-5].node),(yyvsp[-2].node),"IF");
			(yyval.node) = makeStatementNode(IF_ELSE,STATEMENT,if_node,(Astnode *)NULL,"IF_ELSE");
		}
		else
		{
			printf("Invalid Boolean Statement\n");
			exit(1);
		}
	}
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 464 "astree.y" /* yacc.c:1646  */
    {

	if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	(yyval.node) = makeStatementNode(GT,BOOLEAN,(yyvsp[-2].node),(yyvsp[0].node),"GT");
	}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 473 "astree.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
		{
			printf("aaError Invalid operator b/w operands\n");
			exit(1);
		}
		(yyval.node) = makeStatementNode(LT,BOOLEAN,(yyvsp[-2].node),(yyvsp[0].node),"LT");
	}
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 481 "astree.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
		{
			printf("bbError Invalid operator b/w operands\n");
			exit(1);
		}
		(yyval.node) = makeStatementNode(GE,BOOLEAN,(yyvsp[-2].node),(yyvsp[0].node),"GE");
	}
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 489 "astree.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
		{
			printf("ccError Invalid operator b/w operands\n");
			exit(1);
		}
		(yyval.node) = makeStatementNode(LE,BOOLEAN,(yyvsp[-2].node),(yyvsp[0].node),"LE");
	}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 497 "astree.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
		{
			printf("ddError Invalid operator b/w operands\n");
			exit(1);
		}
		(yyval.node) = makeStatementNode(NE,BOOLEAN,(yyvsp[-2].node),(yyvsp[0].node),"NE");
	}
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 505 "astree.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
		{
			printf("eeError Invalid operator b/w operands\n");
			exit(1);
		}
		(yyval.node) = makeStatementNode(EQ,BOOLEAN,(yyvsp[-2].node),(yyvsp[0].node),"EQ");
	}
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 515 "astree.y" /* yacc.c:1646  */
    {

	if((yyvsp[-5].node)->nodetype == BOOLEAN)
	{
		(yyval.node) = makeStatementNode(WHILE,LOOP,(yyvsp[-5].node),(yyvsp[-2].node),"WHILE");
	}
	else
	{
		printf("error: Invalid Comparison:");
		exit(1);
	}
}
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 529 "astree.y" /* yacc.c:1646  */
    {

	//printf("Hello\n");
	if((yyvsp[-2].node)->nodetype == BOOLEAN)
	{
		(yyval.node) = makeStatementNode(REPEAT_UNTIL,LOOP,(yyvsp[-5].node),(yyvsp[-2].node),"REPEAT_UNTIL"); 
	}
	else
	{
		printf("error: Invalid Comparison:");
		exit(1);
	}
}
#line 2120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 543 "astree.y" /* yacc.c:1646  */
    {

	if((yyvsp[-2].node)->nodetype == BOOLEAN)
	{
		(yyval.node) = makeStatementNode(DO_WHILE,LOOP,(yyvsp[-6].node),(yyvsp[-2].node),"DO_WHILE"); 
	}
	else
	{
		printf("error: Invalid Comparison:");
		exit(1);
	}
}
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 560 "astree.y" /* yacc.c:1646  */
    {
	if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	(yyval.node) = makeExpressionNode(PLUS,EXPRESSION,'+',(yyvsp[-2].node),(yyvsp[0].node),"+"); 
	(yyval.node)->type = (yyvsp[-2].node)->type;
}
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 569 "astree.y" /* yacc.c:1646  */
    {
	if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	(yyval.node) = makeExpressionNode(MINUS,EXPRESSION,'-',(yyvsp[-2].node),(yyvsp[0].node),"-"); 
	(yyval.node)->type = (yyvsp[-2].node)->type;
}
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 578 "astree.y" /* yacc.c:1646  */
    {
	if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	(yyval.node) = makeExpressionNode(MUL,EXPRESSION,'*',(yyvsp[-2].node),(yyvsp[0].node),"*"); 
	(yyval.node)->type = (yyvsp[-2].node)->type;
}
#line 2179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 587 "astree.y" /* yacc.c:1646  */
    {
	if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	(yyval.node) = makeExpressionNode(DIV,EXPRESSION,'/',(yyvsp[-2].node),(yyvsp[0].node),"/"); 
	(yyval.node)->type = (yyvsp[-2].node)->type;
}
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 596 "astree.y" /* yacc.c:1646  */
    {
	if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	(yyval.node) = makeExpressionNode(MOD,EXPRESSION,'%',(yyvsp[-2].node),(yyvsp[0].node),"%"); 
	(yyval.node)->type = (yyvsp[-2].node)->type;
}
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 605 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 606 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 607 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 611 "astree.y" /* yacc.c:1646  */
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
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 625 "astree.y" /* yacc.c:1646  */
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
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2271 "y.tab.c" /* yacc.c:1646  */
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
#line 648 "astree.y" /* yacc.c:1906  */


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
