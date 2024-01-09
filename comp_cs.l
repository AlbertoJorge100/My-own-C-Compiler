%{
#include "tabsim.h"
#include "y.tab.h"
#include <string.h>
simbolo *t;
//int yylineno = 1;
%}
%%
"print"		{return PRINT;}
"exit"		{return EXIT_COMMAND;} 
"let"		{entrarBloque();return LET;} 
"in"		{return IN;} 
"end"		{salirBloque();eliminarBloque(&t);return END;} 
("int")([\n \t]+)?	{return INTEGER;}
("string")	{return STRING;}
("toInt")		{return TO_INT;}
("ToString")	{return TO_STRING;}
("bool")	{return BOOLEAN;}
("Console")	{return CONSOLE;}
("WriteLine")	{return WRITELINE;}
("ReadLine")	{return READLINE;}
("for")([\n \t]+)? {return FOR;}
("if")([\n \t]+)? {return IF;}
("else")([\n \t]+)? {return ELSE;}
("Convert")([\n \t]+)? {return CONVERT;}

("+=")([\n \t]+)?		{return MAS_IGUAL;}
("-=")([\n \t]+)?		{return MENOS_IGUAL;}
("*=")([\n \t]+)?		{return POR_IGUAL;}
("/=")([\n \t]+)?		{return DIV_IGUAL;}
("!=")([\n \t]+)?		{return CMP_DIF;}
("==")([\n \t]+)?		{return CMP_IGUAL;}
(">=")([\n \t]+)?		{return CMP_MA_I;}
("<=")([\n \t]+)?		{return CMP_ME_I;}
("||")([\n \t]+)?		{return OR;}
("&&")([\n \t]+)?		{return AND;}
("Equals")([\n \t]+)?	{return EQUALS;}
("Parse")([\n \t]+)?	{return PARSE;}
("true")([\n \t]+)?		{return B_TRUE;}
("false")([\n \t]+)?	{return B_FALSE;}
("public")([\n \t]+)?	{return PUBLIC;}
("static")([\n \t]+)?	{return STATIC;}
("void")([\n \t]+)?		{return VOID;}
("Main")([\n \t]+)?		{return MAIN;}
("class")([\n \t]+)?	{return CLASS;}
("using")([\n \t]+)?	{return USING;}
("System")([\n \t]+)?	{return SYSTEM;}
("namespace")([\n \t]+)? {return NAMESPACE;}
("[]")([\n \t]+)?		{return CORCHETES;}
(!)([\n \t]+)?			{return NOT;}
(>)([\n \t]+)?			{return CMP_MA;}
(<)([\n \t]+)?			{return CMP_ME;}
[.?:]([\n \t]+)?		{return *yytext;}



[0-9]+		{
				yylval.numero = atoi(yytext);
				return NUMERO;
			}
\"[^\"]*\" 	{
				strcpy(yylval.cadena, yytext+1); //omitir las comillas dobles
				yylval.cadena[yyleng-2] = 0; //quitar comillas dobles
				return CADENA;
			}
[-+=/*;,()]			{ return *yytext; }	/* operadores */ 
[{]([\n \t]+)? 		{  /* entrarBloque();  */ return *yytext; }	/* inicio de bloque */ 
[}]([\n \t]+)? 		{  /* salirBloque();eliminarBloque(&t); */ return *yytext; }	/* fin de bloque */ 
[a-zA-Z][a-zA-Z0-9]*	{				
							yylval.ptr_simbolo=(simbolo *) malloc(sizeof(simbolo));
							strcpy(yylval.ptr_simbolo->nombre,yytext); 
							yylval.ptr_simbolo->scope=level;				     
							return ID;
						}
[ \t]       	; /* espacios en blanco */
[\n]			{yylineno++;}
.				yyerror("caracter no valido");

%%	
int yywrap(void) {
    return 1;
}
