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
#line 24 "main.y" /* yacc.c:1909  */

  double DOB;   
  int IN;
  char *id;

#line 113 "main.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MAIN_TAB_H_INCLUDED  */
