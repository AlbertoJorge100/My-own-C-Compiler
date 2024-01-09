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
    NUMERO = 258,
    ID = 259,
    CADENA = 260,
    PRINT = 261,
    EXIT_COMMAND = 262,
    IN = 263,
    END = 264,
    LET = 265,
    STRING = 266,
    BOOLEAN = 267,
    TO_STRING = 268,
    TO_INT = 269,
    INTEGER = 270,
    CMP_ME = 271,
    PARSE = 272,
    CONVERT = 273,
    MAS_IGUAL = 274,
    MENOS_IGUAL = 275,
    POR_IGUAL = 276,
    DIV_IGUAL = 277,
    CMP_DIF = 278,
    CMP_IGUAL = 279,
    CMP_MA_I = 280,
    CMP_ME_I = 281,
    CMP_MA = 282,
    OR = 283,
    AND = 284,
    NOT = 285,
    EQUALS = 286,
    B_TRUE = 287,
    B_FALSE = 288,
    PUBLIC = 289,
    STATIC = 290,
    VOID = 291,
    MAIN = 292,
    CORCHETES = 293,
    CLASS = 294,
    NAMESPACE = 295,
    USING = 296,
    SYSTEM = 297,
    CONSOLE = 298,
    WRITELINE = 299,
    FOR = 300,
    IF = 301,
    ELSE = 302,
    READLINE = 303,
    COMENTARIO_LINEA = 304,
    COMENTARIO_MULTI_LINEA = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 20 "comp_cs.y" /* yacc.c:1909  */

	int numero;
	simbolo * ptr_simbolo;
	char cadena[100];
	expresion valor;		

#line 112 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
