/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 17 "astree.y" /* yacc.c:1909  */

	struct Astnode *node;	
	struct Pmtr *param_node;
	struct Lsymbol *lst_node;

#line 136 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
