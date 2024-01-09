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
#line 1 "comp_cs.y" /* yacc.c:339  */

	#define ADD 3
	#include "tabsim.c"		
	char type;
	void yyerror(char *);
	int yylex(void);
	extern int yylineno;
	extern char *yytext;
	extern simbolo *t;
	int esNumero(char * s){
		int i=0;
		if (s[i] == '-')
			i++;
		for(; s[i] != 0; i++)
		if ((s[i]<'0') || (s[i]>'9')) 
			return 0;
		return 1;
	}

#line 86 "y.tab.c" /* yacc.c:339  */

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
#line 20 "comp_cs.y" /* yacc.c:355  */

	int numero;
	simbolo * ptr_simbolo;
	char cadena[100];
	expresion valor;		

#line 184 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 201 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   340

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  9
/* YYNRULES -- Number of rules.  */
#define YYNRULES  56
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  135

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

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
      57,    58,    51,    53,    61,    54,    62,    52,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    64,    55,
       2,    60,     2,    63,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,    59,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    46,    46,    59,    92,    95,    96,    97,    98,   102,
     102,   104,   114,   122,   149,   162,   174,   183,   192,   201,
     204,   205,   218,   235,   248,   266,   278,   293,   310,   314,
     325,   337,   348,   359,   368,   377,   386,   395,   405,   429,
     438,   463,   476,   481,   485,   489,   493,   508,   520,   530,
     537,   545,   569,   585,   592,   600,   612
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMERO", "ID", "CADENA", "PRINT",
  "EXIT_COMMAND", "IN", "END", "LET", "STRING", "BOOLEAN", "TO_STRING",
  "TO_INT", "INTEGER", "CMP_ME", "PARSE", "CONVERT", "MAS_IGUAL",
  "MENOS_IGUAL", "POR_IGUAL", "DIV_IGUAL", "CMP_DIF", "CMP_IGUAL",
  "CMP_MA_I", "CMP_ME_I", "CMP_MA", "OR", "AND", "NOT", "EQUALS", "B_TRUE",
  "B_FALSE", "PUBLIC", "STATIC", "VOID", "MAIN", "CORCHETES", "CLASS",
  "NAMESPACE", "USING", "SYSTEM", "CONSOLE", "WRITELINE", "FOR", "IF",
  "ELSE", "READLINE", "COMENTARIO_LINEA", "COMENTARIO_MULTI_LINEA", "'*'",
  "'/'", "'+'", "'-'", "';'", "'{'", "'('", "')'", "'}'", "'='", "','",
  "'.'", "'?'", "':'", "$accept", "programa", "decl", "sentencias",
  "sentencia", "$@2", "tipo", "valid", "expr", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,    42,    47,    43,    45,    59,   123,    40,    41,   125,
      61,    44,    46,    63,    58
};
# endif

#define YYPACT_NINF -54

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-54)))

#define YYTABLE_NINF -6

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      17,   -53,   -38,     5,   -54,   -48,   -54,   -30,     7,   -44,
     -26,    11,   -39,    85,   -36,   151,   -54,   -54,    50,   -54,
      26,    33,    -1,   -24,   183,   -54,   -54,     6,   -22,   183,
     -54,     4,   -54,   115,   260,   183,   183,   183,   183,   183,
      13,    14,    15,    48,    53,   -54,    16,   115,   260,    40,
      36,    83,   180,   -54,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,    -5,
      70,   260,   260,   260,   260,   115,   260,   183,   183,   183,
      25,    27,    54,   183,   -54,   -54,   115,   260,   115,   115,
     115,   166,   260,   260,   260,   260,   260,   260,   278,   278,
     278,   278,    28,    30,   -54,   260,   115,   260,   260,   183,
     183,    35,   115,   260,   183,    44,   183,   198,   220,    82,
     260,   -54,   238,   -54,   -54,    60,   -54,   100,    47,    52,
      24,   118,    55,    61,   -54
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     0,     1,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     7,    43,    47,    46,
       0,     0,     0,     0,     0,    44,    45,     0,     0,     0,
      19,     0,     4,     0,     9,     0,     0,     0,     0,     0,
      23,    25,    21,     0,     0,    47,     0,    35,    36,     0,
       0,     0,     0,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    15,    16,    17,    18,    14,    13,     0,     0,     0,
       0,     0,     0,     0,    42,    56,    37,     0,    39,    33,
      34,     0,    31,    38,    40,    30,    32,    29,    50,    51,
      48,    49,     0,     0,    10,    24,    26,    27,    22,     0,
       0,     0,    12,    11,     0,     0,     0,     0,     0,     0,
      52,    53,     0,    55,    54,     0,    41,     0,     0,     0,
       0,    20,     0,     0,     2
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -54,   -54,   -54,   -21,   -54,   -54,   -54,   -23,   -15
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,    30,    15,    31,    70,    32,    33,    87
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,    47,     4,    42,     5,     6,    51,     7,   102,    48,
       8,     9,    10,    11,    52,    12,    75,    13,     1,    16,
      71,    72,    73,    74,    76,    14,   103,    -5,    -5,    -5,
      40,    86,    88,    89,    90,    -5,    -5,    41,    44,    -5,
      50,    49,    -5,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    -5,   106,    -5,    -5,     2,    53,
     112,    43,   105,   107,   108,    80,    81,    -5,   113,    35,
      36,    37,    38,    77,    78,    79,    82,   104,    43,    -5,
      83,    -5,   109,    -5,   110,   115,    14,   116,    -5,    -5,
      -5,   111,   119,   125,   117,   118,    -5,    -5,   127,   120,
      -5,   122,   121,    -5,   128,   129,    54,    55,   130,   131,
      39,    56,    57,     0,   133,    -5,    34,    -5,    -5,    -5,
     134,    17,    18,    19,     0,     0,     0,     0,    -5,    20,
      21,     0,     0,    22,     0,     0,    23,     0,    54,    55,
      -5,    84,    -5,    56,    57,     0,    58,     0,    24,     0,
      25,    26,     0,     0,    17,    18,    19,     0,     0,     0,
       0,    28,    20,    21,     0,     0,    22,     0,     0,    23,
       0,     0,     0,     0,     0,    29,     0,   132,    58,     0,
       0,    24,    59,    25,    26,    27,    17,    45,    19,    60,
      61,    62,    63,    64,    28,     0,    59,     0,    46,     0,
       0,    23,     0,    60,    61,    62,    63,    64,    29,     0,
       0,     0,     0,    24,    59,    25,    26,    65,    66,    67,
      68,    60,    61,    62,    63,    64,     0,     0,    69,     0,
     114,    65,    66,    67,    68,     0,    59,     0,    85,     0,
      29,     0,    69,    60,    61,    62,    63,    64,     0,    65,
      66,    67,    68,     0,    59,     0,   123,     0,     0,     0,
      69,    60,    61,    62,    63,    64,     0,     0,     0,     0,
       0,    65,    66,    67,    68,     0,    59,     0,   124,     0,
       0,     0,    69,    60,    61,    62,    63,    64,     0,    65,
      66,    67,    68,     0,    59,     0,   126,     0,     0,     0,
      69,    60,    61,    62,    63,    64,     0,     0,     0,     0,
       0,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,     0,    69,     0,     0,     0,     0,     0,     0,     0,
       0,    67,    68,     0,     0,     0,     0,     0,     0,     0,
      69
};

static const yytype_int16 yycheck[] =
{
      15,    24,    55,     4,    42,     0,    29,    55,    13,    24,
      40,     4,    56,    39,    29,     4,    39,    56,     1,    55,
      35,    36,    37,    38,    39,     1,    31,     3,     4,     5,
       4,    54,    55,    56,    57,    11,    12,     4,    62,    15,
      62,    35,    18,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    30,    78,    32,    33,    41,    55,
      83,    62,    77,    78,    79,    17,    13,    43,    83,    19,
      20,    21,    22,    60,    60,    60,    36,     7,    62,    55,
      44,    57,    57,    59,    57,    57,     1,    57,     3,     4,
       5,    37,    57,    11,   109,   110,    11,    12,    38,   114,
      15,   116,    58,    18,     4,    58,    23,    24,    56,   130,
      60,    28,    29,    -1,    59,    30,   131,    32,    33,    34,
      59,     3,     4,     5,    -1,    -1,    -1,    -1,    43,    11,
      12,    -1,    -1,    15,    -1,    -1,    18,    -1,    23,    24,
      55,    58,    57,    28,    29,    -1,    63,    -1,    30,    -1,
      32,    33,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,
      -1,    43,    11,    12,    -1,    -1,    15,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    59,    63,    -1,
      -1,    30,    16,    32,    33,    34,     3,     4,     5,    23,
      24,    25,    26,    27,    43,    -1,    16,    -1,    15,    -1,
      -1,    18,    -1,    23,    24,    25,    26,    27,    57,    -1,
      -1,    -1,    -1,    30,    16,    32,    33,    51,    52,    53,
      54,    23,    24,    25,    26,    27,    -1,    -1,    62,    -1,
      64,    51,    52,    53,    54,    -1,    16,    -1,    58,    -1,
      57,    -1,    62,    23,    24,    25,    26,    27,    -1,    51,
      52,    53,    54,    -1,    16,    -1,    58,    -1,    -1,    -1,
      62,    23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      -1,    51,    52,    53,    54,    -1,    16,    -1,    58,    -1,
      -1,    -1,    62,    23,    24,    25,    26,    27,    -1,    51,
      52,    53,    54,    -1,    16,    -1,    58,    -1,    -1,    -1,
      62,    23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      -1,    51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    41,    66,    55,    42,     0,    55,    40,     4,
      56,    39,     4,    56,     1,    68,    55,     3,     4,     5,
      11,    12,    15,    18,    30,    32,    33,    34,    43,    57,
      67,    69,    71,    72,    73,    19,    20,    21,    22,    60,
       4,     4,     4,    62,    62,     4,    15,    72,    73,    35,
      62,    72,    73,    55,    23,    24,    28,    29,    63,    16,
      23,    24,    25,    26,    27,    51,    52,    53,    54,    62,
      70,    73,    73,    73,    73,    72,    73,    60,    60,    60,
      17,    13,    36,    44,    58,    58,    72,    73,    72,    72,
      72,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    13,    31,     7,    73,    72,    73,    73,    57,
      57,    37,    72,    73,    64,    57,    57,    73,    73,    57,
      73,    58,    73,    58,    58,    11,    58,    38,     4,    58,
      56,    68,    59,    59,    59
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    66,    67,    68,    68,    68,    68,    70,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    24,     2,     1,     0,     3,     2,     0,     0,
       3,     4,     4,     3,     3,     3,     3,     3,     3,     1,
       0,     2,     4,     2,     4,     2,     4,     4,     0,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     3,     3,
       3,     6,     3,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     5,     5,     6,     6,     3
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
        case 3:
#line 59 "comp_cs.y" /* yacc.c:1646  */
    { yyerrok;}
#line 1408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 92 "comp_cs.y" /* yacc.c:1646  */
    {;}
#line 1414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 95 "comp_cs.y" /* yacc.c:1646  */
    {;}
#line 1420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 96 "comp_cs.y" /* yacc.c:1646  */
    {;}
#line 1426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 97 "comp_cs.y" /* yacc.c:1646  */
    { yyerrok;}
#line 1432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 98 "comp_cs.y" /* yacc.c:1646  */
    {;}
#line 1438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 102 "comp_cs.y" /* yacc.c:1646  */
    { printf("%d\n", (yyvsp[0].valor)); }
#line 1444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 103 "comp_cs.y" /* yacc.c:1646  */
    { exit(EXIT_SUCCESS);}
#line 1450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 105 "comp_cs.y" /* yacc.c:1646  */
    {									
								/* expr					{ printf("%d\n", $1); } */
								/* printf("%d\n", $2.info.valor_int);									 */
								if((yyvsp[0].valor).tipo=='i' || (yyvsp[0].valor).tipo=='b'){									
									printf("%d\n", (yyvsp[0].valor).info.valor_int);
								}									
								 else if((yyvsp[0].valor).tipo=='s') 
									printf("%s\n", (yyvsp[0].valor).info.valor_cad);  
							}
#line 1464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 115 "comp_cs.y" /* yacc.c:1646  */
    {									
								/* expr					{ printf("%d\n", $1); } */
								/* printf("%d\n", $2.info.valor_int);									 */
								if((yyvsp[0].valor).tipo=='i' || (yyvsp[0].valor).tipo=='b'){									
									printf("%d\n", (yyvsp[0].valor).info.valor_int);
								}																	
							}
#line 1476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 122 "comp_cs.y" /* yacc.c:1646  */
    { 
								/* $$ = $3;
								simbolo *s = buscar(t, $1->nombre);								
								s->valor = $3; */		
								simbolo *s = buscarEnBloque(t, (yyvsp[-2].ptr_simbolo)->nombre,level);								
								if(s->tipo=='i')	{									
									(yyvsp[-2].ptr_simbolo)->info.valor_int=(yyvsp[0].valor).info.valor_int;
									s->info.valor_int=(yyvsp[0].valor).info.valor_int;
								}														
								else if(s->tipo=='s'){
									strcpy((yyvsp[-2].ptr_simbolo)->info.valor_cad, (yyvsp[0].valor).info.valor_cad);
									strcpy(s->info.valor_cad, (yyvsp[0].valor).info.valor_cad);
								}									
								if(s->tipo!=(yyvsp[0].valor).tipo)
									printf("Error: tipo de dato erroneo, en linea: %d\n", yylineno+ADD);

							/* 		|ID '=' valid			{
								simbolo *s = buscarEnBloque(t, $1->nombre,level);								
								if(s->tipo=='b' && $3.tipo=='b'){									
									$1->info.valor_int=$3.info.valor_int;
									s->info.valor_int=$3.info.valor_int;
								}														
								else
									/* printf("Error: tipo de dato erroneo, en linea: %d, ti: %c, te: %c\n", yylineno, s->tipo, $3.tipo); 
									printf("Error: tipo de dato erroneo, en linea: %d\n", yylineno);
							} */									
							}
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 149 "comp_cs.y" /* yacc.c:1646  */
    {
								simbolo *s = buscarEnBloque(t, (yyvsp[-2].ptr_simbolo)->nombre,level);								
								if(s->tipo=='b' && (yyvsp[0].valor).tipo=='b'){									
									(yyvsp[-2].ptr_simbolo)->info.valor_int=(yyvsp[0].valor).info.valor_int;
									s->info.valor_int=(yyvsp[0].valor).info.valor_int;
									//printf("respuesta: %d\n",$3.info.valor_int);
								}														
								else
									/* printf("Error: tipo de dato erroneo, en linea: %d, ti: %c, te: %c\n", yylineno, s->tipo, $3.tipo); */
									printf("Error: tipo de dato erroneo, en linea: %d\n", yylineno+ADD);
							}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 162 "comp_cs.y" /* yacc.c:1646  */
    {								
								simbolo *s = buscarEnBloque(t, (yyvsp[-2].ptr_simbolo)->nombre,level);																
								if(((s->tipo == 's') && ((yyvsp[0].valor).tipo == 's'))) {															
									sprintf((yyvsp[-2].ptr_simbolo)->info.valor_cad, "%s%s", (yyvsp[-2].ptr_simbolo)->info.valor_cad, (yyvsp[0].valor).info.valor_cad); 
									sprintf(s->info.valor_cad, "%s%s", s->info.valor_cad, (yyvsp[0].valor).info.valor_cad); 
								} else if((s->tipo == 'i') && ((yyvsp[0].valor).tipo == 'i')) {
									/* $$.tipo = 'i'; */
									(yyvsp[-2].ptr_simbolo)->info.valor_int = s->info.valor_int + (yyvsp[0].valor).info.valor_int;
									s->info.valor_int = s->info.valor_int + (yyvsp[0].valor).info.valor_int;
								}  else 
									printf("ERROR en linea: %d, No se pueden operar los datos ingresados.\n",yylineno+ADD);
							}
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 174 "comp_cs.y" /* yacc.c:1646  */
    {								
								simbolo *s = buscarEnBloque(t, (yyvsp[-2].ptr_simbolo)->nombre,level);																
								if((s->tipo == 'i') && ((yyvsp[0].valor).tipo == 'i')) {
									/* $$.tipo = 'i'; */
									(yyvsp[-2].ptr_simbolo)->info.valor_int = s->info.valor_int - (yyvsp[0].valor).info.valor_int;
									s->info.valor_int = s->info.valor_int - (yyvsp[0].valor).info.valor_int;
								}  else 
									printf("ERROR en linea: %d, No se pueden operar los datos ingresados.\n",yylineno+ADD);
							}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 183 "comp_cs.y" /* yacc.c:1646  */
    {								
								simbolo *s = buscarEnBloque(t, (yyvsp[-2].ptr_simbolo)->nombre,level);																
								if((s->tipo == 'i') && ((yyvsp[0].valor).tipo == 'i')) {
									/* $$.tipo = 'i'; */
									(yyvsp[-2].ptr_simbolo)->info.valor_int = s->info.valor_int * (yyvsp[0].valor).info.valor_int;
									s->info.valor_int = s->info.valor_int * (yyvsp[0].valor).info.valor_int;
								}  else 
									printf("ERROR en linea: %d, No se pueden operar los datos ingresados.\n",yylineno+ADD);
							}
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 192 "comp_cs.y" /* yacc.c:1646  */
    {							
								simbolo *s = buscarEnBloque(t, (yyvsp[-2].ptr_simbolo)->nombre,level);																
								if((s->tipo == 'i') && ((yyvsp[0].valor).tipo == 'i')) {
									/* $$.tipo = 'i'; */
									(yyvsp[-2].ptr_simbolo)->info.valor_int = s->info.valor_int / (yyvsp[0].valor).info.valor_int;
									s->info.valor_int = s->info.valor_int / (yyvsp[0].valor).info.valor_int;
								}  else 
									printf("ERROR en linea: %d, No se pueden operar los datos ingresados.\n",yylineno+ADD);
							}
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 201 "comp_cs.y" /* yacc.c:1646  */
    {;}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 205 "comp_cs.y" /* yacc.c:1646  */
    {
					simbolo *s = buscarEnBloque(t, (yyvsp[0].ptr_simbolo)->nombre, level);		     
					if (s==NULL){							
						/* $2->valor=0;	 */
						(yyvsp[0].ptr_simbolo)->tipo='i';					  
						insertar(&t, (yyvsp[0].ptr_simbolo));				
						//printf("tipe added: %c, %s\n",$2->tipo, $2->nombre);		
					}else{
						printf("ERROR en linea %d: la variable: \"%s\" ya existe \n", yylineno+ADD, yytext-2);
						/* exit(EXIT_COMMAND); */
					}
						
				}
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 218 "comp_cs.y" /* yacc.c:1646  */
    {
							simbolo *s = buscarEnBloque(t, (yyvsp[-2].ptr_simbolo)->nombre, level);		     
							if (s==NULL){							
								/* $2->valor=0;	 */
								if((yyvsp[0].valor).tipo=='i'){
									(yyvsp[-2].ptr_simbolo)->tipo='i';
									(yyvsp[-2].ptr_simbolo)->info.valor_int=(yyvsp[0].valor).info.valor_int;					  
									insertar(&t, (yyvsp[-2].ptr_simbolo));				
									//printf("tipe added: %c, %s\n",$2->tipo, $2->nombre);		
								}else
									printf("ERROR en linea %d: dato de asignacion erroneo\n", yylineno+ADD);
							}else{
								printf("ERROR en linea %d: la variable: \"%s\" ya existe. \n", yylineno+ADD, yytext-2);
								/* exit(EXIT_COMMAND); */
							}
								
						}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 235 "comp_cs.y" /* yacc.c:1646  */
    {
					simbolo *s = buscarEnBloque(t, (yyvsp[0].ptr_simbolo)->nombre, level);		     
					if (s==NULL){							
						(yyvsp[0].ptr_simbolo)->tipo='s';					  
						insertar(&t, (yyvsp[0].ptr_simbolo));					
						//printf("tipe added: %c, %s\n",$2->tipo, $2->nombre);		
					}else{
						/* printf("ERROR en linea %d: la variable: \"%s\" ya existe   \n", yylineno, yytext); */
						printf("ERROR en linea %d: la variable: \"%s\" ya existe. \n", yylineno+ADD, yytext-2);
						/* exit(EXIT_COMMAND); */
					}
						
				}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 248 "comp_cs.y" /* yacc.c:1646  */
    {							
							simbolo *s = buscarEnBloque(t, (yyvsp[-2].ptr_simbolo)->nombre, level);		     
							if (s==NULL){		
								//printf("tipe cadena: %c\n",$4.tipo);					
								if((yyvsp[0].valor).tipo=='s'){									
									(yyvsp[-2].ptr_simbolo)->tipo='s';	
									strcpy((yyvsp[-2].ptr_simbolo)->info.valor_cad, (yyvsp[0].valor).info.valor_cad);
									insertar(&t, (yyvsp[-2].ptr_simbolo));					
									//printf("tipe added: %c, %s\n",$2->tipo, $2->nombre);		
								}else
									printf("ERROR en linea %d: no se puede asignar ese dato \n", yylineno+ADD);
							}else{
								/* printf("ERROR en linea %d: la variable: \"%s\" ya existe   \n", yylineno, yytext); */
								printf("ERROR en linea %d: la variable: \"%s\" ya existe. \n", yylineno+ADD, yytext-2);
								/* exit(EXIT_COMMAND); */
							}
								
						}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 266 "comp_cs.y" /* yacc.c:1646  */
    {
					simbolo *s = buscarEnBloque(t, (yyvsp[0].ptr_simbolo)->nombre, level);		     
					if (s==NULL){							
						(yyvsp[0].ptr_simbolo)->tipo='b';					  
						insertar(&t, (yyvsp[0].ptr_simbolo));											
					}else{
						/* printf("ERROR en linea %d: la variable: \"%s\" ya existe   \n", yylineno, yytext); */
						printf("ERROR en linea %d: la variable: \"%s\" ya existe. \n", yylineno+ADD, yytext-2);
						/* exit(EXIT_COMMAND); */
					}
				}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 278 "comp_cs.y" /* yacc.c:1646  */
    {
							simbolo *s = buscarEnBloque(t, (yyvsp[-2].ptr_simbolo)->nombre, level);		     
							if (s==NULL){							
								if((yyvsp[0].valor).tipo=='b'){
									(yyvsp[-2].ptr_simbolo)->tipo='b';
									(yyvsp[-2].ptr_simbolo)->info.valor_int=(yyvsp[0].valor).info.valor_int;					  
									insertar(&t, (yyvsp[-2].ptr_simbolo));														
								}else
									printf("ERROR en linea %d: no se puede asignar ese dato \n", yylineno+ADD);								
							}else{
								/* printf("ERROR en linea %d: la variable: \"%s\" ya existe   \n", yylineno, yytext); */
								printf("ERROR en linea %d: la variable: \"%s\" ya existe. \n", yylineno+ADD, yytext-2);
								/* exit(EXIT_COMMAND); */
							}
						}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 293 "comp_cs.y" /* yacc.c:1646  */
    {
							simbolo *s = buscarEnBloque(t, (yyvsp[-2].ptr_simbolo)->nombre, level);		     
							if (s==NULL){							
								if((yyvsp[0].valor).tipo=='b'){
									(yyvsp[-2].ptr_simbolo)->tipo='b';
									(yyvsp[-2].ptr_simbolo)->info.valor_int=(yyvsp[0].valor).info.valor_int;					  
									insertar(&t, (yyvsp[-2].ptr_simbolo));														
								}else
									printf("ERROR en linea %d: no se puede asignar ese dato \n", yylineno+ADD);
								
							}else{
								/* printf("ERROR en linea %d: la variable: \"%s\" ya existe   \n", yylineno, yytext); */
								printf("ERROR en linea %d: la variable: \"%s\" ya existe. \n", yylineno+ADD, yytext-2);
								/* exit(EXIT_COMMAND); */
							}
						}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 310 "comp_cs.y" /* yacc.c:1646  */
    {;}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 314 "comp_cs.y" /* yacc.c:1646  */
    {																																	
											if((yyvsp[-2].valor).tipo=='i' && (yyvsp[0].valor).tipo=='i'){
												(yyval.valor).tipo='b';
												if((yyvsp[-2].valor).info.valor_int>(yyvsp[0].valor).info.valor_int)
													(yyval.valor).info.valor_int=1;
												else
													(yyval.valor).info.valor_int=0;
											}else
												printf("Error en linea %d: no se pueden operar los datos", yylineno+ADD);
												
										}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 325 "comp_cs.y" /* yacc.c:1646  */
    {																																	
											if((yyvsp[-2].valor).tipo=='i' && (yyvsp[0].valor).tipo=='i'){
												(yyval.valor).tipo='b';
												if((yyvsp[-2].valor).info.valor_int>=(yyvsp[0].valor).info.valor_int)
													(yyval.valor).info.valor_int=1;
												else
													(yyval.valor).info.valor_int=0;
											}else
												printf("Error en linea %d: no se pueden operar los datos", yylineno+ADD);
												
										}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 337 "comp_cs.y" /* yacc.c:1646  */
    {																																	
											if((yyvsp[-2].valor).tipo=='i' && (yyvsp[0].valor).tipo=='i'){
												(yyval.valor).tipo='b';
												if((yyvsp[-2].valor).info.valor_int<(yyvsp[0].valor).info.valor_int)
													(yyval.valor).info.valor_int=1;
												else
													(yyval.valor).info.valor_int=0;
											}else
												printf("Error en linea %d: no se pueden operar los datos", yylineno+ADD);
												
										}
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 348 "comp_cs.y" /* yacc.c:1646  */
    {																																	
											if((yyvsp[-2].valor).tipo=='i' && (yyvsp[0].valor).tipo=='i'){
												(yyval.valor).tipo='b';
												if((yyvsp[-2].valor).info.valor_int<=(yyvsp[0].valor).info.valor_int)
													(yyval.valor).info.valor_int=1;
												else
													(yyval.valor).info.valor_int=0;
											}else
												printf("Error en linea %d: no se pueden operar los datos", yylineno+ADD);
												
										}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 359 "comp_cs.y" /* yacc.c:1646  */
    {
										if((yyvsp[-2].valor).tipo=='b' && (yyvsp[0].valor).tipo=='b'){
											(yyval.valor).tipo='b';
											if((yyvsp[-2].valor).info.valor_int==1 || (yyvsp[0].valor).info.valor_int==1)
												(yyval.valor).info.valor_int=1;
											else 
												(yyval.valor).info.valor_int=0;
										}
									}
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 368 "comp_cs.y" /* yacc.c:1646  */
    {
										if((yyvsp[-2].valor).tipo=='b' && (yyvsp[0].valor).tipo=='b'){
											(yyval.valor).tipo='b';
											if((yyvsp[-2].valor).info.valor_int==1 && (yyvsp[0].valor).info.valor_int==1)
												(yyval.valor).info.valor_int=1;
											else 
												(yyval.valor).info.valor_int=0;
										}
									}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 377 "comp_cs.y" /* yacc.c:1646  */
    {
										if((yyvsp[0].valor).tipo=='b'){
											(yyval.valor).tipo='b';
											if((yyvsp[0].valor).info.valor_int==0)
												(yyval.valor).info.valor_int=1;
											else 
												(yyval.valor).info.valor_int=0;
										}
									}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 386 "comp_cs.y" /* yacc.c:1646  */
    {
										if((yyvsp[0].valor).tipo=='b'){
											(yyval.valor).tipo='b';
											if((yyvsp[0].valor).info.valor_int==0)
												(yyval.valor).info.valor_int=1;
											else 
												(yyval.valor).info.valor_int=0;
										}
									}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 395 "comp_cs.y" /* yacc.c:1646  */
    {
										if((yyvsp[-2].valor).tipo=='b' && (yyvsp[0].valor).tipo=='b'){
											(yyval.valor).tipo='b';
											if((yyvsp[-2].valor).info.valor_int!=(yyvsp[0].valor).info.valor_int)
												(yyval.valor).info.valor_int=1;
											else
												(yyval.valor).info.valor_int=0;
										}
									}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 405 "comp_cs.y" /* yacc.c:1646  */
    {																																	
											if((yyvsp[-2].valor).tipo=='i' && (yyvsp[0].valor).tipo=='i'){
												(yyval.valor).tipo='b';
												if((yyvsp[-2].valor).info.valor_int!=(yyvsp[0].valor).info.valor_int)
													(yyval.valor).info.valor_int=1;
												else
													(yyval.valor).info.valor_int=0;
											}else if((yyvsp[-2].valor).tipo=='s' && (yyvsp[0].valor).tipo=='s'){
												(yyval.valor).tipo='b';
												if(strcmp((yyvsp[-2].valor).info.valor_cad, (yyvsp[0].valor).info.valor_cad)!=0)
													(yyval.valor).info.valor_int=1;
												else
													(yyval.valor).info.valor_int=0;
											}else if((yyvsp[-2].valor).tipo=='b' && (yyvsp[0].valor).tipo=='b'){
												(yyval.valor).tipo='b';
												if((yyvsp[-2].valor).info.valor_int!=(yyvsp[0].valor).info.valor_int)
													(yyval.valor).info.valor_int=1;
												else
													(yyval.valor).info.valor_int=0;
											}
											else
												printf("Error en linea %d: no se pueden operar los datos", yylineno+ADD);
												
										}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 429 "comp_cs.y" /* yacc.c:1646  */
    {
										if((yyvsp[-2].valor).tipo=='b' && (yyvsp[0].valor).tipo=='b'){
											(yyval.valor).tipo='b';
											if((yyvsp[-2].valor).info.valor_int==(yyvsp[0].valor).info.valor_int)
												(yyval.valor).info.valor_int=1;
											else
												(yyval.valor).info.valor_int=0;
										}
									}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 438 "comp_cs.y" /* yacc.c:1646  */
    {																																	
										if((yyvsp[-2].valor).tipo=='i' && (yyvsp[0].valor).tipo=='i'){
											(yyval.valor).tipo='b';
											if((yyvsp[-2].valor).info.valor_int==(yyvsp[0].valor).info.valor_int)
												(yyval.valor).info.valor_int=1;
											else
												(yyval.valor).info.valor_int=0;
										}else if((yyvsp[-2].valor).tipo=='s' && (yyvsp[0].valor).tipo=='s'){
											(yyval.valor).tipo='b';
											if(strcmp((yyvsp[-2].valor).info.valor_cad, (yyvsp[0].valor).info.valor_cad)==0)
												(yyval.valor).info.valor_int=1;
											else
												(yyval.valor).info.valor_int=0;
										}else if((yyvsp[-2].valor).tipo=='b' && (yyvsp[0].valor).tipo=='b'){
											(yyval.valor).tipo='b';
											if((yyvsp[-2].valor).info.valor_int==(yyvsp[0].valor).info.valor_int)
												(yyval.valor).info.valor_int=1;
											else
												(yyval.valor).info.valor_int=0;
										}
										else
											printf("Error en linea %d: no se pueden operar los datos\n", yylineno+ADD);
											
									}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 463 "comp_cs.y" /* yacc.c:1646  */
    {										
										(yyval.valor).tipo='b';
										if((yyvsp[-5].valor).tipo=='s'&& (yyvsp[-1].valor).tipo=='s'){
											if(strcmp((yyvsp[-5].valor).info.valor_cad, (yyvsp[-1].valor).info.valor_cad)==0)
												(yyval.valor).info.valor_int=1;
											else
												(yyval.valor).info.valor_int=0;										
										}else
											printf("Error en la linea %d; no se pueden operar los datos \n",yylineno+ADD);
										
									}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 476 "comp_cs.y" /* yacc.c:1646  */
    {(yyval.valor)=(yyvsp[-1].valor);}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 481 "comp_cs.y" /* yacc.c:1646  */
    { 
								(yyval.valor).tipo='i';
								(yyval.valor).info.valor_int=(yyvsp[0].numero);								
							}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 485 "comp_cs.y" /* yacc.c:1646  */
    {
										(yyval.valor).tipo='b';
										(yyval.valor).info.valor_int=1;
									}
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 489 "comp_cs.y" /* yacc.c:1646  */
    {
										(yyval.valor).tipo='b';
										(yyval.valor).info.valor_int=0;
									}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 493 "comp_cs.y" /* yacc.c:1646  */
    {
								(yyval.valor).tipo='s';
								strcpy((yyval.valor).info.valor_cad, (yyvsp[0].cadena));
								/* printf("%s",$$.info.valor_cad); */
								/* | ID                { 
														simbolo *s=buscar(t, $1->nombre);
														$$ = s->valor;
													}
									| expr '+' expr     { $$ = $1 + $3; }
									| expr '-' expr     { $$ = $1 - $3; }
									| expr '*' expr     { $$ = $1 * $3; }
									| expr '/' expr     { $$ = $1 / $3; }													
													
													 */
							}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 508 "comp_cs.y" /* yacc.c:1646  */
    {
								simbolo *s=buscarEnBloque(t, (yyvsp[0].ptr_simbolo)->nombre, level);		     
								/* simbolo *s=buscar(t, $1->nombre);		      */
								(yyval.valor).tipo=s->tipo;
								/* printf("t..: %d\n",s->info.valor_int); */
								if((yyval.valor).tipo=='i' || (yyval.valor).tipo=='b'){
									(yyval.valor).info.valor_int=s->info.valor_int;
									(yyvsp[0].ptr_simbolo)->info.valor_int=s->info.valor_int;
								}									
								else
									strcpy((yyval.valor).info.valor_cad, s->info.valor_cad);
							}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 520 "comp_cs.y" /* yacc.c:1646  */
    {
								if((((yyvsp[-2].valor).tipo == 's') && ((yyvsp[0].valor).tipo == 's'))) {						
									(yyval.valor).tipo = 's';															
									sprintf((yyval.valor).info.valor_cad, "%s%s", (yyvsp[-2].valor).info.valor_cad, (yyvsp[0].valor).info.valor_cad);
								} else if(((yyvsp[-2].valor).tipo == 'i') && ((yyvsp[0].valor).tipo == 'i')) {
									(yyval.valor).tipo = 'i';
									(yyval.valor).info.valor_int = (yyvsp[-2].valor).info.valor_int + (yyvsp[0].valor).info.valor_int;
								}  else 
									printf("ERROR en linea: %d, No se pueden operar los datos ingresados.\n",yylineno+ADD);
					 		}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 530 "comp_cs.y" /* yacc.c:1646  */
    {
								if(((yyvsp[-2].valor).tipo == 'i') && ((yyvsp[0].valor).tipo == 'i')) {
									(yyval.valor).tipo = 'i';
									(yyval.valor).info.valor_int = (yyvsp[-2].valor).info.valor_int - (yyvsp[0].valor).info.valor_int;
								}  else 
									printf("ERROR en linea: %d, No se pueden operar los datos ingresados.\n",yylineno+ADD);
					 		}
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 537 "comp_cs.y" /* yacc.c:1646  */
    {
								if(((yyvsp[-2].valor).tipo == 'i') && ((yyvsp[0].valor).tipo == 'i')) {
									(yyval.valor).tipo = 'i';
									(yyval.valor).info.valor_int = (yyvsp[-2].valor).info.valor_int * (yyvsp[0].valor).info.valor_int;
								}  else 
									printf("ERROR en linea: %d, No se pueden operar los datos ingresados.\n",yylineno+ADD);
					 		}
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 545 "comp_cs.y" /* yacc.c:1646  */
    {
								if(((yyvsp[-2].valor).tipo == 'i') && ((yyvsp[0].valor).tipo == 'i')) {
									(yyval.valor).tipo = 'i';
									(yyval.valor).info.valor_int = (yyvsp[-2].valor).info.valor_int / (yyvsp[0].valor).info.valor_int;
								}  else 
									printf("ERROR en linea: %d, No se pueden operar los datos ingresados.\n",yylineno+ADD);
								/* 	|valid '?' expr ':' expr {									
									if($3.tipo=='i'&& $5.tipo=='i'){
										$$.tipo=='i';
										if($1.info.valor_int==1)
											$$.info.valor_int=$3.info.valor_int;
										else
											$$.info.valor_int=$5.info.valor_int;
									}else if($3.tipo=='s'&& $5.tipo=='s'){
										$$.tipo=='s';
										if($1.info.valor_int==1)											
											strcpy($$.info.valor_cad,$3.info.valor_cad);																																
										else
											strcpy($$.info.valor_cad,$5.info.valor_cad);
									}else
										printf("ERROR en linea: %d, No se pueden operar los datos ingresados.\n",yylineno+ADD);
								} */
					 		}
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 569 "comp_cs.y" /* yacc.c:1646  */
    {									
									if((yyvsp[-2].valor).tipo=='i'&& (yyvsp[0].valor).tipo=='i'){
										(yyval.valor).tipo=='i';
										if((yyvsp[-4].valor).info.valor_int==1)
											(yyval.valor).info.valor_int=(yyvsp[-2].valor).info.valor_int;
										else
											(yyval.valor).info.valor_int=(yyvsp[0].valor).info.valor_int;
									}else if((yyvsp[-2].valor).tipo=='s'&& (yyvsp[0].valor).tipo=='s'){
										(yyval.valor).tipo=='s';
										if((yyvsp[-4].valor).info.valor_int==1)											
											strcpy((yyval.valor).info.valor_cad,(yyvsp[-2].valor).info.valor_cad);																																
										else
											strcpy((yyval.valor).info.valor_cad,(yyvsp[0].valor).info.valor_cad);
									}else
										printf("ERROR en linea: %d, No se pueden operar los datos ingresados.\n",yylineno+ADD);
								}
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 585 "comp_cs.y" /* yacc.c:1646  */
    {	
										(yyval.valor).tipo='s';															  										
										if((yyvsp[-4].valor).tipo=='i')
											snprintf((yyval.valor).info.valor_cad, sizeof((yyval.valor).info.valor_cad), "%d", (yyvsp[-4].valor).info.valor_int);
										else
											printf("Error en la linea: %d, se requiere un tipo entero\n", yylineno+ADD);																	
									}
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 592 "comp_cs.y" /* yacc.c:1646  */
    {	
											(yyval.valor).tipo='s';															  										
											if((yyvsp[-1].valor).tipo=='i')
												snprintf((yyval.valor).info.valor_cad, sizeof((yyval.valor).info.valor_cad), "%d", (yyvsp[-1].valor).info.valor_int);
											else
												printf("Error en la linea: %d, se requiere un tipo entero\n", yylineno+ADD);																	
										}
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 600 "comp_cs.y" /* yacc.c:1646  */
    {
								(yyval.valor).tipo='i';
							   	if((yyvsp[-1].valor).tipo=='s'){
									if(esNumero((yyvsp[-1].valor).info.valor_cad))
										(yyval.valor).info.valor_int=atoi((yyvsp[-1].valor).info.valor_cad);
									else
										printf("Error en la linea: %d, se requieren solo valores numericos\n", yylineno+ADD);
								}
								else
									printf("Error en la linea: %d, se requiere un tipo string\n", yylineno+ADD);
							  }
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 612 "comp_cs.y" /* yacc.c:1646  */
    { (yyval.valor) = (yyvsp[-1].valor); }
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2163 "y.tab.c" /* yacc.c:1646  */
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
#line 615 "comp_cs.y" /* yacc.c:1906  */

void yyerror(char *s)
{
	extern int yylineno;	// predefinida en lex.c
	extern char *yytext;	// predefinida en lex.c
	
	printf("ERROR: %s en simbolo \"%s\" en linea %d \n",s,yytext,yylineno+ADD); 
}
void main()
{ 
	t = crear();
	yyparse();
	//eliminarBloque(&t);
	//eliminarBloque(&t);
	imprimir(t);
	/* tipo ID	{
				simbolo *s = buscarEnBloque(t, $2->nombre, level);		     
				if (s==NULL){
					if($1=="int"){
						$2->valor=0;	
					 	$2->tipo='i';					  
						insertar(&t, $2);	 
					}else{						
					 	$2->tipo='s';					  
						insertar(&t, $2);
					}					
				}else{
					printf("ERROR en linea %d: la variable: \"%s\" ya existe   \n", yylineno, yytext /*s->tipo , s->nombre );					
				}
					
			} */
}
