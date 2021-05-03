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
#line 1 "miniC_B735137.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void yyerror(char * s);
extern int yylval;
extern char yytext[];
extern FILE * yyin;
FILE * output;
char mystr[200];
char totalstr[500];

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
    IDENTIFIER = 258,
    CONSTANT = 259,
    STRING_LITERAL = 260,
    SIZEOF = 261,
    PTR_OP = 262,
    INC_OP = 263,
    DEC_OP = 264,
    LEFT_OP = 265,
    RIGHT_OP = 266,
    LE_OP = 267,
    GE_OP = 268,
    EQ_OP = 269,
    NE_OP = 270,
    AND_OP = 271,
    OR_OP = 272,
    MUL_ASSIGN = 273,
    DIV_ASSIGN = 274,
    MOD_ASSIGN = 275,
    ADD_ASSIGN = 276,
    SUB_ASSIGN = 277,
    LEFT_ASSIGN = 278,
    RIGHT_ASSIGN = 279,
    AND_ASSIGN = 280,
    XOR_ASSIGN = 281,
    OR_ASSIGN = 282,
    TYPE_NAME = 283,
    TYPEDEF = 284,
    EXTERN = 285,
    STATIC = 286,
    AUTO = 287,
    REGISTER = 288,
    CHAR = 289,
    SHORT = 290,
    INT = 291,
    LONG = 292,
    SIGNED = 293,
    UNSIGNED = 294,
    FLOAT = 295,
    DOUBLE = 296,
    CONST = 297,
    VOLATILE = 298,
    VOID = 299,
    STRUCT = 300,
    UNION = 301,
    ENUM = 302,
    ELLIPSIS = 303,
    CASE = 304,
    DEFAULT = 305,
    IF = 306,
    ELSE = 307,
    SWITCH = 308,
    WHILE = 309,
    DO = 310,
    FOR = 311,
    GOTO = 312,
    CONTINUE = 313,
    BREAK = 314,
    RETURN = 315
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define SIZEOF 261
#define PTR_OP 262
#define INC_OP 263
#define DEC_OP 264
#define LEFT_OP 265
#define RIGHT_OP 266
#define LE_OP 267
#define GE_OP 268
#define EQ_OP 269
#define NE_OP 270
#define AND_OP 271
#define OR_OP 272
#define MUL_ASSIGN 273
#define DIV_ASSIGN 274
#define MOD_ASSIGN 275
#define ADD_ASSIGN 276
#define SUB_ASSIGN 277
#define LEFT_ASSIGN 278
#define RIGHT_ASSIGN 279
#define AND_ASSIGN 280
#define XOR_ASSIGN 281
#define OR_ASSIGN 282
#define TYPE_NAME 283
#define TYPEDEF 284
#define EXTERN 285
#define STATIC 286
#define AUTO 287
#define REGISTER 288
#define CHAR 289
#define SHORT 290
#define INT 291
#define LONG 292
#define SIGNED 293
#define UNSIGNED 294
#define FLOAT 295
#define DOUBLE 296
#define CONST 297
#define VOLATILE 298
#define VOID 299
#define STRUCT 300
#define UNION 301
#define ENUM 302
#define ELLIPSIS 303
#define CASE 304
#define DEFAULT 305
#define IF 306
#define ELSE 307
#define SWITCH 308
#define WHILE 309
#define DO 310
#define FOR 311
#define GOTO 312
#define CONTINUE 313
#define BREAK 314
#define RETURN 315

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 250 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1301

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  212
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  350

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    72,     2,     2,     2,    74,    67,     2,
      61,    62,    68,    69,    66,    70,    65,    73,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,    82,
      75,    81,    76,    79,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    64,    77,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    78,    84,    71,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    29,    29,    30,    31,    32,    36,    37,    38,    39,
      40,    41,    42,    43,    47,    48,    52,    53,    54,    55,
      56,    57,    61,    62,    63,    64,    65,    66,    70,    71,
      75,    76,    77,    78,    82,    83,    84,    88,    89,    90,
      94,    95,    96,    97,    98,   102,   103,   104,   108,   109,
     113,   114,   118,   119,   123,   124,   128,   129,   133,   134,
     138,   139,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   157,   158,   162,   166,   167,   171,   172,
     173,   174,   175,   176,   180,   181,   185,   186,   190,   191,
     192,   193,   194,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   213,   214,   215,   219,   220,
     224,   225,   229,   233,   234,   235,   236,   240,   241,   245,
     246,   247,   251,   252,   253,   257,   258,   262,   263,   267,
     268,   272,   273,   277,   278,   279,   280,   281,   282,   283,
     287,   288,   289,   290,   294,   295,   300,   301,   305,   306,
     310,   311,   312,   316,   317,   321,   322,   326,   327,   328,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   344,
     345,   346,   350,   351,   355,   356,   357,   358,   359,   360,
     364,   365,   366,   370,   371,   372,   373,   377,   378,   382,
     383,   387,   388,   392,   393,   394,   398,   399,   400,   401,
     405,   406,   407,   408,   409,   413,   414,   418,   419,   423,
     424,   425,   426
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "'('", "')'", "'['", "']'", "'.'", "','",
  "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'",
  "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'", "'}'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,    40,    41,    91,    93,    46,    44,    38,    42,    43,
      45,   126,    33,    47,    37,    60,    62,    94,   124,    63,
      58,    61,    59,   123,   125
};
# endif

#define YYPACT_NINF -223

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-223)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     969,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,     5,    42,     4,  -223,    31,  1254,  1254,  -223,    11,
    -223,  1254,  1101,    88,    26,   879,  -223,  -223,   -60,    51,
      14,  -223,  -223,     4,  -223,    38,  -223,  1081,  -223,  -223,
     -10,  1055,  -223,   278,  -223,    31,  -223,  1101,   408,   666,
      88,  -223,  -223,    51,    69,   -23,  -223,  -223,  -223,  -223,
      42,  -223,   542,  -223,  1101,  1055,  1055,  1004,  -223,    72,
    1055,   -12,  -223,  -223,   785,   806,   806,   830,    17,   123,
     129,   132,   524,   141,   109,   127,   134,   559,   645,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,   192,   274,
     830,  -223,   121,    36,   224,   116,   229,   151,   150,   158,
     236,    -2,  -223,  -223,    43,  -223,  -223,  -223,   348,   418,
    -223,  -223,  -223,  -223,   164,  -223,  -223,  -223,  -223,    18,
     198,   188,  -223,    16,  -223,  -223,  -223,  -223,   197,   -15,
     830,    51,  -223,  -223,   542,  -223,  -223,  -223,  1024,  -223,
    -223,  -223,   830,    76,  -223,   184,  -223,   524,   645,  -223,
     830,  -223,  -223,   190,   524,   830,   830,   830,   217,   596,
     191,  -223,  -223,  -223,   114,    49,    85,   212,   273,  -223,
    -223,   690,   830,   275,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,   830,  -223,   830,   830,   830,
     830,   830,   830,   830,   830,   830,   830,   830,   830,   830,
     830,   830,   830,   830,   830,   830,   830,  -223,  -223,   454,
    -223,  -223,   924,   715,  -223,    22,  -223,   165,  -223,  1233,
    -223,   282,  -223,  -223,  -223,  -223,  -223,    35,  -223,  -223,
      72,  -223,   830,  -223,   215,   524,  -223,    81,   120,   145,
     227,   596,  -223,  -223,  -223,  1157,   170,  -223,   830,  -223,
    -223,   146,  -223,     1,  -223,  -223,  -223,  -223,  -223,   121,
     121,    36,    36,   224,   224,   224,   224,   116,   116,   229,
     151,   150,   158,   236,   -50,  -223,  -223,  -223,   228,   240,
    -223,   225,   165,  1198,   736,  -223,  -223,  -223,   488,  -223,
    -223,  -223,  -223,  -223,   524,   524,   524,   830,   760,  -223,
    -223,   830,  -223,   830,  -223,  -223,  -223,  -223,   242,  -223,
     241,  -223,  -223,   239,  -223,  -223,   148,   524,   155,  -223,
    -223,  -223,  -223,   524,   244,  -223,   524,  -223,  -223,  -223
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   133,   104,    88,    89,    90,    91,    92,    94,    95,
      96,    97,   100,   101,    98,    99,   129,   130,    93,   108,
     109,     0,     0,   140,   208,     0,    78,    80,   102,     0,
     103,    82,     0,   132,     0,     0,   205,   207,   124,     0,
       0,   144,   142,   141,    76,     0,    84,    86,    79,    81,
     107,     0,    83,     0,   187,     0,   212,     0,     0,     0,
     131,     1,   206,     0,   127,     0,   125,   134,   145,   143,
       0,    77,     0,   210,     0,     0,   114,     0,   110,     0,
     116,     2,     3,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
      23,    24,    25,    26,    27,   191,   183,     6,    16,    28,
       0,    30,    34,    37,    40,    45,    48,    50,    52,    54,
      56,    58,    60,    73,     0,   189,   174,   175,     0,     0,
     176,   177,   178,   179,    86,   188,   211,   153,   139,   152,
       0,   146,   148,     0,     2,   136,    28,    75,     0,     0,
       0,     0,   122,    85,     0,   169,    87,   209,     0,   113,
     106,   111,     0,     0,   117,   119,   115,     0,     0,    20,
       0,    17,    18,     0,     0,     0,     0,     0,     0,     0,
       0,   201,   202,   203,     0,     0,   155,     0,     0,    12,
      13,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    62,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   192,   185,     0,
     184,   190,     0,     0,   150,   157,   151,   158,   137,     0,
     138,     0,   135,   123,   128,   126,   172,     0,   105,   120,
       0,   112,     0,   180,     0,     0,   182,     0,     0,     0,
       0,     0,   200,   204,     5,     0,   157,   156,     0,    11,
       8,     0,    14,     0,    10,    61,    31,    32,    33,    35,
      36,    38,    39,    43,    44,    41,    42,    46,    47,    49,
      51,    53,    55,    57,     0,    74,   186,   165,     0,     0,
     161,     0,   159,     0,     0,   147,   149,   154,     0,   170,
     118,   121,    21,   181,     0,     0,     0,     0,     0,    29,
       9,     0,     7,     0,   166,   160,   162,   167,     0,   163,
       0,   171,   173,   193,   195,   196,     0,     0,     0,    15,
      59,   168,   164,     0,     0,   198,     0,   194,   197,   199
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -223,  -223,  -223,  -223,   -48,  -223,   -91,    37,    46,     8,
      48,   110,   119,   122,   118,   135,  -223,   -55,   -70,  -223,
     -38,   -54,     6,     0,  -223,   272,  -223,   -27,  -223,  -223,
     268,   -67,   -24,  -223,   108,  -223,   300,   213,    47,   -13,
     -29,    -3,  -223,   -57,  -223,   126,  -223,   199,  -122,  -222,
    -151,  -223,   -74,  -223,   156,   -25,   238,  -172,  -223,  -223,
    -223,  -223,   333,  -223
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   107,   108,   271,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   205,
     124,   148,    54,    55,    45,    46,    26,    27,    28,    29,
      77,    78,    79,   163,   164,    30,    65,    66,    31,    32,
      33,    34,    43,   298,   141,   142,   143,   187,   299,   237,
     156,   247,   125,   126,   127,    57,   129,   130,   131,   132,
     133,    35,    36,    37
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      25,   140,   155,   246,   147,    60,    24,   261,    38,    40,
     161,   146,    47,   302,    50,   224,   226,   236,   178,   206,
      42,     1,    74,    63,    76,     1,    48,    49,   128,     1,
     323,    52,   147,   173,     1,    25,   169,   171,   172,   146,
      69,    24,   134,   151,   302,     1,    16,    17,    76,    76,
      76,   151,   159,    76,    64,   231,   166,   134,   139,   184,
     185,   152,   146,   135,   267,   322,   165,   226,   167,   243,
      41,    76,    23,    75,   186,     1,    67,   225,   240,   232,
     135,   233,   241,   232,   155,   233,    23,    22,    39,   318,
      68,   161,    22,   253,    51,   147,   244,   174,    80,    23,
     256,   308,   146,    22,    70,   210,   211,   147,   249,   226,
      23,   264,   180,    44,   146,   226,   276,   277,   278,   309,
      71,   272,    80,    80,    80,   227,   234,    80,   214,   215,
     185,    76,   185,    22,   135,   275,   235,   257,   258,   259,
      23,    76,   250,   314,   186,    80,   265,   226,   233,    58,
     150,    59,   162,    23,   273,   231,   295,   332,   251,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   319,   147,   301,
     226,   313,   315,   266,   175,   146,   226,   294,    56,   207,
     176,   216,   217,   177,   208,   209,   263,   147,   311,   188,
     189,   190,   179,    73,   146,    80,    60,   316,   320,   181,
     344,   226,   321,   136,   226,    80,   182,   346,   220,    40,
     146,   226,   283,   284,   285,   286,   303,   221,   304,   235,
     157,   265,   139,   233,   212,   213,   222,   165,   155,   139,
     333,   334,   335,   218,   219,    72,   328,   279,   280,   147,
     330,   339,   223,   191,   239,   192,   146,   193,   281,   282,
     238,   242,   266,   345,   252,   139,   287,   288,   340,   347,
     255,   260,   349,   262,   268,   146,   269,   312,   274,   336,
     338,    81,    82,    83,    84,   307,    85,    86,   317,   326,
     324,   343,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   325,   139,   341,   342,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   348,    87,    88,    89,
     289,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     290,   292,   153,   158,   291,    99,   100,   101,   102,   103,
     104,    81,    82,    83,    84,   204,    85,    86,   310,   293,
     105,    53,   106,   149,   245,   306,   229,   254,    62,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,    87,    88,    89,
       0,    90,    91,    92,    93,    94,    95,    96,    97,    98,
       0,   137,     0,     0,     0,    99,   100,   101,   102,   103,
     104,    81,    82,    83,    84,     0,    85,    86,     0,     0,
     105,    53,   228,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,    81,    82,    83,
      84,     0,    85,    86,     0,     0,     0,    87,    88,    89,
     138,    90,    91,    92,    93,    94,    95,    96,    97,    98,
       0,     0,     0,     0,     0,    99,   100,   101,   102,   103,
     104,   144,    82,    83,    84,     0,    85,    86,     0,     0,
     105,    53,   230,    87,    88,    89,     0,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     0,     0,     0,     0,
       0,    99,   100,   101,   102,   103,   104,    81,    82,    83,
      84,     0,    85,    86,     0,     0,   105,    53,   296,     0,
       0,     0,     0,     0,     0,   144,    82,    83,    84,    98,
      85,    86,     0,     0,     0,    99,   100,   101,   102,   103,
     104,     0,   144,    82,    83,    84,     0,    85,    86,     0,
       0,   154,   331,    87,    88,    89,     0,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     0,     0,     0,     0,
       0,    99,   100,   101,   102,   103,   104,     0,     0,   144,
      82,    83,    84,    98,    85,    86,   105,    53,     0,    99,
     100,   101,   102,   103,   104,     0,     0,     0,     0,     0,
      98,     0,     0,     0,     0,   154,    99,   100,   101,   102,
     103,   104,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   183,     0,     0,     0,     0,     0,     0,   144,    82,
      83,    84,     0,    85,    86,     0,     0,    98,     0,     0,
       0,     0,     0,    99,   100,   101,   102,   103,   104,   144,
      82,    83,    84,     2,    85,    86,     0,     0,   105,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,   144,    82,    83,    84,     0,    85,    86,
       0,     0,     0,     0,     0,     0,    98,     0,     0,     0,
       0,     0,    99,   100,   101,   102,   103,   104,   144,    82,
      83,    84,     0,    85,    86,     0,     0,    98,     0,     0,
     145,     0,     0,    99,   100,   101,   102,   103,   104,   144,
      82,    83,    84,     0,    85,    86,     0,     0,     0,     0,
       0,    98,   270,     0,     0,     0,     0,    99,   100,   101,
     102,   103,   104,   144,    82,    83,    84,     0,    85,    86,
       0,     0,     0,     0,     0,     0,    98,     0,     0,   300,
       0,     0,    99,   100,   101,   102,   103,   104,   144,    82,
      83,    84,     0,    85,    86,     0,     0,    98,     0,     0,
     329,     0,     0,    99,   100,   101,   102,   103,   104,   144,
      82,    83,    84,     0,    85,    86,     0,     0,     0,     0,
       0,    98,   337,     0,     0,     0,     0,    99,   100,   101,
     102,   103,   104,   144,    82,    83,    84,     0,    85,    86,
       0,     0,     0,     0,     0,     0,   168,     0,     0,     0,
       0,     0,    99,   100,   101,   102,   103,   104,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   170,     0,     0,
       0,     0,     0,    99,   100,   101,   102,   103,   104,    61,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,    98,     0,     0,     0,     0,     0,    99,   100,   101,
     102,   103,   104,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,     0,    23,     0,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   232,   297,   233,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     2,     0,     0,     0,     0,    23,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     2,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     0,     0,     0,   160,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,   248,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    72,     0,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   265,   297,
     233,     0,     0,     0,     0,    23,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     327,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,   305,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    58,    72,   154,    59,    34,     0,   179,     3,    22,
      77,    59,    25,   235,     3,    17,    66,   139,    92,   110,
      23,     3,    47,    83,    51,     3,    26,    27,    53,     3,
      80,    31,    87,    87,     3,    35,    84,    85,    86,    87,
      43,    35,    55,    66,   266,     3,    42,    43,    75,    76,
      77,    66,    76,    80,     3,   129,    80,    70,    58,    97,
      98,    84,   110,    57,   186,    64,    79,    66,    80,    84,
      23,    98,    68,    83,    98,     3,    62,    79,    62,    61,
      74,    63,    66,    61,   154,    63,    68,    61,    83,   261,
      43,   158,    61,   167,    83,   150,   150,    80,    51,    68,
     174,    66,   150,    61,    66,    69,    70,   162,   162,    66,
      68,    62,     3,    82,   162,    66,   207,   208,   209,    84,
      82,   191,    75,    76,    77,    82,   139,    80,    12,    13,
     168,   158,   170,    61,   128,   205,   139,   175,   176,   177,
      68,   168,    66,    62,   168,    98,    61,    66,    63,    61,
      81,    63,    80,    68,   192,   229,   226,   308,    82,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   268,   233,   233,
      66,   255,    62,   186,    61,   233,    66,   225,    32,    68,
      61,    75,    76,    61,    73,    74,    82,   252,   252,     7,
       8,     9,    61,    47,   252,   158,   235,    62,    62,    82,
      62,    66,    66,    57,    66,   168,    82,    62,    67,   232,
     268,    66,   214,   215,   216,   217,    61,    77,    63,   232,
      74,    61,   232,    63,    10,    11,    78,   250,   308,   239,
     314,   315,   316,    14,    15,    81,   303,   210,   211,   304,
     304,   321,    16,    61,    66,    63,   304,    65,   212,   213,
      62,    64,   265,   337,    80,   265,   218,   219,   323,   343,
      80,    54,   346,    82,    62,   323,     3,    62,     3,   317,
     318,     3,     4,     5,     6,     3,     8,     9,    61,    64,
      62,    52,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    62,   303,    62,    64,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    82,    49,    50,    51,
     220,    53,    54,    55,    56,    57,    58,    59,    60,    61,
     221,   223,    70,    75,   222,    67,    68,    69,    70,    71,
      72,     3,     4,     5,     6,    81,     8,     9,   250,   224,
      82,    83,    84,    63,   151,   239,   128,   168,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      -1,     3,    -1,    -1,    -1,    67,    68,    69,    70,    71,
      72,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      82,    83,    84,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    49,    50,    51,
      62,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,
      72,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      82,    83,    84,    49,    50,    51,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    71,    72,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    82,    83,    84,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    61,
       8,     9,    -1,    -1,    -1,    67,    68,    69,    70,    71,
      72,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    83,    84,    49,    50,    51,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    71,    72,    -1,    -1,     3,
       4,     5,     6,    61,     8,     9,    82,    83,    -1,    67,
      68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    83,    67,    68,    69,    70,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    72,     3,
       4,     5,     6,    28,     8,     9,    -1,    -1,    82,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    61,    -1,    -1,
      64,    -1,    -1,    67,    68,    69,    70,    71,    72,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    64,
      -1,    -1,    67,    68,    69,    70,    71,    72,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    61,    -1,    -1,
      64,    -1,    -1,    67,    68,    69,    70,    71,    72,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    72,     0,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    28,    -1,    -1,    -1,    -1,    68,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    28,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    84,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    -1,    -1,    84,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    -1,    -1,    -1,    -1,    68,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    61,    68,   107,   108,   111,   112,   113,   114,
     120,   123,   124,   125,   126,   146,   147,   148,     3,    83,
     124,   123,   126,   127,    82,   109,   110,   124,   108,   108,
       3,    83,   108,    83,   107,   108,   139,   140,    61,    63,
     125,     0,   147,    83,     3,   121,   122,    62,   123,   126,
      66,    82,    81,   139,   140,    83,   112,   115,   116,   117,
     123,     3,     4,     5,     6,     8,     9,    49,    50,    51,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    67,
      68,    69,    70,    71,    72,    82,    84,    86,    87,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   105,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   124,   107,   139,     3,    62,   108,
     128,   129,   130,   131,     3,    64,    89,   102,   106,   121,
      81,    66,    84,   110,    83,   103,   135,   139,   115,   117,
      84,   116,    80,   118,   119,   124,   117,    80,    61,    89,
      61,    89,    89,   106,    80,    61,    61,    61,   137,    61,
       3,    82,    82,    82,   105,   105,   117,   132,     7,     8,
       9,    61,    63,    65,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    81,   104,    91,    68,    73,    74,
      69,    70,    10,    11,    12,    13,    75,    76,    14,    15,
      67,    77,    78,    16,    17,    79,    66,    82,    84,   141,
      84,   137,    61,    63,   124,   126,   133,   134,    62,    66,
      62,    66,    64,    84,   106,   122,   135,   136,    84,   106,
      66,    82,    80,   137,   132,    80,   137,   105,   105,   105,
      54,   142,    82,    82,    62,    61,   126,   133,    62,     3,
      62,    88,   103,   105,     3,   103,    91,    91,    91,    92,
      92,    93,    93,    94,    94,    94,    94,    95,    95,    96,
      97,    98,    99,   100,   105,   103,    84,    62,   128,   133,
      64,   106,   134,    61,    63,    48,   130,     3,    66,    84,
     119,   106,    62,   137,    62,    62,    62,    61,   142,    91,
      62,    66,    64,    80,    62,    62,    64,    62,   128,    64,
     106,    84,   135,   137,   137,   137,   105,    62,   105,   103,
     102,    62,    64,    52,    62,   137,    62,   137,    82,   137
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    86,    86,    86,    87,    87,    87,    87,
      87,    87,    87,    87,    88,    88,    89,    89,    89,    89,
      89,    89,    90,    90,    90,    90,    90,    90,    91,    91,
      92,    92,    92,    92,    93,    93,    93,    94,    94,    94,
      95,    95,    95,    95,    95,    96,    96,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   105,   105,   106,   107,   107,   108,   108,
     108,   108,   108,   108,   109,   109,   110,   110,   111,   111,
     111,   111,   111,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   113,   113,   113,   114,   114,
     115,   115,   116,   117,   117,   117,   117,   118,   118,   119,
     119,   119,   120,   120,   120,   121,   121,   122,   122,   123,
     123,   124,   124,   125,   125,   125,   125,   125,   125,   125,
     126,   126,   126,   126,   127,   127,   128,   128,   129,   129,
     130,   130,   130,   131,   131,   132,   132,   133,   133,   133,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   135,
     135,   135,   136,   136,   137,   137,   137,   137,   137,   137,
     138,   138,   138,   139,   139,   139,   139,   140,   140,   141,
     141,   142,   142,   143,   143,   143,   144,   144,   144,   144,
     145,   145,   145,   145,   145,   146,   146,   147,   147,   148,
     148,   148,   148
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     3,     1,     2,
       1,     2,     1,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     2,     1,     2,     1,     1,     3,     1,
       2,     3,     4,     5,     2,     1,     3,     1,     3,     1,
       1,     2,     1,     1,     3,     4,     3,     4,     4,     3,
       1,     2,     2,     3,     1,     2,     1,     3,     1,     3,
       2,     2,     1,     1,     3,     1,     2,     1,     1,     2,
       3,     2,     3,     3,     4,     2,     3,     3,     4,     1,
       3,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     3,     3,     4,     1,     2,     1,
       2,     1,     2,     5,     7,     5,     5,     7,     6,     7,
       3,     2,     2,     2,     3,     1,     2,     1,     1,     4,
       3,     3,     2
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
#line 29 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce primary_expression -> identifier \n", totalstr);}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 30 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce primary_expression -> constant \n", totalstr);}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 31 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce primary_expression -> string literal \n", totalstr);}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 32 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce primary_expression -> (expression) \n", totalstr);}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 36 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce postfix_expression -> primary_expression \n", totalstr);}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 37 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce postfix_expression -> postfix_expreesion [expression] \n", totalstr);}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 38 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce postfix_expression -> postfix_expression() \n", totalstr);}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 39 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce postfix_expression -> postfix_expression(argument_expression_list)\n", totalstr);}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 40 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce postfix_expression -> postfix_expression.identifier\n", totalstr);}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 41 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce postfix_expression -> postfix_expression->identifier\n", totalstr);}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 42 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce postfix_expression -> postfix_expression++\n", totalstr);}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 43 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce postfix_expression -> postfix_expression--\n", totalstr);}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 47 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce argument_expression_list -> assignment_expression\n", totalstr);}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 48 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce argument_expression_list -> argument_expression_list, assignment_expression\n", totalstr);}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 52 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce unary_expression -> postfix_expression\n", totalstr);}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 53 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce unary_expression -> ++unary_expression\n", totalstr);}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 54 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce unary_expression -> --unary_expression\n", totalstr);}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 55 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce unary_expression -> unary_operator cast_expression \n", totalstr);}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 56 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce unary_expression -> sizeof unary_expression\n", totalstr);}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 57 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce unary_expression -> sizeof(type_name)\n", totalstr);}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 61 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce unary_operator -> &\n", totalstr);}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 62 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce unary_operator -> *\n", totalstr);}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 63 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce unary_operator -> +\n", totalstr);}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 64 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce unary_operator -> -\n", totalstr);}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 65 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce unary_operator -> ~\n", totalstr);}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 66 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce unary_operator -> !\n", totalstr);}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 70 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce cast_expression -> unary_expression\n", totalstr);}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 71 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce cast_expression -> (type_name)cast_expression\n", totalstr);}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 75 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce multiplicative_expression -> cast_expression\n", totalstr);}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 76 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce multiplicative_expression -> multiplicative_expression * cast_expression\n", totalstr);}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 77 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce multiplicative_expression -> multiplicative_expression / cast_expression\n", totalstr);}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 78 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce multiplicative_expression % cast_expression\n", totalstr);}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 82 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce additive_expression -> multiplicative_expression\n", totalstr);}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 83 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce additive_expression -> additive_expression + multiplicative_expression\n", totalstr);}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 84 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce additive_expression -> addtive_expression - multiplicative_expression\n", totalstr);}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 88 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce shift_expression -> additive_expression\n", totalstr);}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 89 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce shift_expression -> shift_expression << additive_expression\n", totalstr);}
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 90 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce shift_expression -> shift_expression >> additive_expression\n", totalstr);}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 94 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce relational_expression -> shift_expression\n", totalstr);}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 95 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce relational_expression < shift_expression\n", totalstr);}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 96 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce relational_expression > shift_expression\n", totalstr);}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 97 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce relational_expression <= shift_expression\n", totalstr);}
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 98 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce relational_expression >= shift_expression\n", totalstr);}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 102 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce equality_expression -> relational_expression\n", totalstr);}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 103 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce equality_epression -> equality_expression == relational_expression\n", totalstr);}
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 104 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce equality_expression -> equality_expression != relational_expression\n", totalstr);}
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 108 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce and_expression -> equality_expression\n", totalstr);}
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 109 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce and_expression -> and_expression & equality_expression\n", totalstr);}
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 113 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce exclusive_or_expression -> and_expression\n", totalstr);}
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 114 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce exclusive_or_expression ^ and_expression\n", totalstr);}
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 118 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce inclusive_or_expression -> exclusive_or_expression\n", totalstr);}
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 119 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce inclusive_or_expression|exclusive_or_expression\n", totalstr);}
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 123 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce logical_and_expression -> inclusive_or_expression\n", totalstr);}
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 124 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\tlogical_and_expression -> logical_and_expression && inclusive_or_expression\n", totalstr);}
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 128 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce logical_or_expression -> logical_and_expression\n", totalstr);}
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 129 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce logical_or_expression -> logical_or_expression || logical_and_expression\n", totalstr);}
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 133 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce conditional_expression -> logical_or_expression\n", totalstr);}
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 134 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce conditional_expression -> logical_or_expression ? expression : conditional_expression\t\t\n", totalstr);}
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 138 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce assignment_expression -> conditional_expression \n", totalstr);}
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 139 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce assignment_expression -> unary_expression assignment_operator assignment_expression\n", totalstr);}
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 143 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\t reduce assignment_operator -> =\n", totalstr);}
#line 2158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 144 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\t reduce assignment_operator -> *=\n", totalstr);}
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 145 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\t reduce assignment_operator -> /=\n", totalstr);}
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 146 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\t reduce assignment_operator -> %=\n", totalstr);}
#line 2176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 147 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\t reduce assignment_operator -> +=\n", totalstr);}
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 148 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\t reduce assignment_operator -> -=\n", totalstr);}
#line 2188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 149 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\t reduce assignment_operator -> <<=\n", totalstr);}
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 150 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\t reduce assignment_operator -> >>=\n", totalstr);}
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 151 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\t reduce assignment_operator -> &=\n", totalstr);}
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 152 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\t reduce assignment_operator -> ^=\n", totalstr);}
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 153 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\t reduce assignment_operator -> |=\n", totalstr);}
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 157 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce expression -> assignment_expression\n", totalstr);}
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 158 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce expression -> expression, assignement_expression\n", totalstr);}
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 162 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce constant_expression -> conditional_expression\n", totalstr);}
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 166 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce declaration -> declaration_specifiers;\n", totalstr); strcpy(mystr, totalstr); strcpy(totalstr, "");}
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 167 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce declaration -> declaration_specifiers init_declaratior_list;\n", totalstr); strcpy(mystr, totalstr); strcpy(totalstr, "");}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 171 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce declaration_specifiers -> stroage_class_specifier\n", totalstr);}
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 172 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce declaration_specifiers -> storage_class_specifier declaration_specifiers\n", totalstr);}
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 173 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce declaration_specifiers -> type_specifier\n", totalstr);}
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 174 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce declaration_specifiers -> type_specifier declaration_specifiers \n", totalstr);}
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 175 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce declaration_specifiers -> type_qualifier \n", totalstr);}
#line 2278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 176 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce declaration_specifiers -> type_qualifier declaration_specifiers\n", totalstr);}
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 180 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce init_declarator_list -> init_declarator\n", totalstr);}
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 181 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce init_declarator_list -> init_declarator_list, init_declarator\n", totalstr);}
#line 2296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 185 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce init_declarator -> declarator\n", totalstr);}
#line 2302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 186 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce init_declarator -> declarator = initializer\n", totalstr);}
#line 2308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 190 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce storage_class_specifier -> typedef\n", totalstr);}
#line 2314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 191 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce storage_class_specifier -> extern\n", totalstr);}
#line 2320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 192 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce storage_class_specifier -> static\n", totalstr);}
#line 2326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 193 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce storage_class_specifier -> auto\n", totalstr);}
#line 2332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 194 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce storage_class_specifier -> register\n", totalstr);}
#line 2338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 198 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce type_specifier -> void\n", totalstr);}
#line 2344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 199 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce type_specifier -> char\n", totalstr);}
#line 2350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 200 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce type_specifier -> short\n", totalstr);}
#line 2356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 201 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce type_specifier -> int\n", totalstr);}
#line 2362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 202 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce type_specifier -> long\n", totalstr);}
#line 2368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 203 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce type_specifier -> float\n", totalstr);}
#line 2374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 204 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce type_specifier -> double\n", totalstr);}
#line 2380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 205 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce type_specifier -> signed\n", totalstr);}
#line 2386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 206 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce type_specifier -> unsigned\n", totalstr);}
#line 2392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 207 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce type_specifier -> struct_or_union_specifier\n", totalstr);}
#line 2398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 208 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce type_specifier -> enum_specifier\n", totalstr);}
#line 2404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 209 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce type_specifier -> TYPE_NAME*\n", totalstr);}
#line 2410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 213 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce struct_or_union_specifier -> struct_or_union identifier {struct_declaration_list}\n", totalstr);}
#line 2416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 214 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce struct_or_union_specifier -> struct_or_union {struct_declaration_list}\n", totalstr);}
#line 2422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 215 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce struct_or_union_specifier -> struct_or_union identifier\n", totalstr);}
#line 2428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 219 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce struct_or_union -> struct\n", totalstr);}
#line 2434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 220 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce struct_or_union -> union\n", totalstr);}
#line 2440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 224 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce struct_declaration_list -> struct_declaration\n", mystr);}
#line 2446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 225 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce struct_declaration_list -> struct_declaration_list struct_declaration\n", mystr);}
#line 2452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 229 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce struct_declaration -> specifier_qualifier_list struct_declarator_list;\n", totalstr); strcpy(mystr, totalstr);strcpy(totalstr, "");}
#line 2458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 233 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce specifier_qualifier_list -> type_specifier specifier_qualifier_list\n", totalstr);}
#line 2464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 234 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce specifier_qualifier_list -> type_specifier\n", totalstr);}
#line 2470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 235 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce specifier_qualifier_list -> type_qualifier specifier_qualifier_list\n", totalstr);}
#line 2476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 236 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce specifier_qualifier_list -> type_qualifier\n", totalstr);}
#line 2482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 240 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce struct_declarator_list -> struct_declarator\n", totalstr);}
#line 2488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 241 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce struct_declarator_list -> struct_declarator_list, struct_declarator\n", totalstr);}
#line 2494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 245 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce struct_declarator -> declarator\n", totalstr);}
#line 2500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 246 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce struct_declarator:constant_expression\n", totalstr);}
#line 2506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 247 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce struct_declarator -> declarator:constant_expression\n", totalstr);}
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 251 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce enum_specifier -> enum {enumerator_list}\n", totalstr);}
#line 2518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 252 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce enum_specifier -> enum identifier {enumerator_list}\n", totalstr);}
#line 2524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 253 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce enum_specifier -> enum identifier\n", totalstr);}
#line 2530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 257 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce enumerator_list -> enumerator\n", totalstr);}
#line 2536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 258 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce enumerator_list -> enumerator_list, enumerator\n", totalstr);}
#line 2542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 262 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce enumerator -> identifier\n", totalstr);}
#line 2548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 263 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce enumerator -> identifier = constant_expression\n", totalstr);}
#line 2554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 267 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce type_qualifier -> const\n", totalstr);}
#line 2560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 268 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce type_qualifier -> volatile\n", totalstr);}
#line 2566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 272 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce declarator -> pointer direct_declarator\n", totalstr);}
#line 2572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 273 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce declarator -> direct_declarator\n", totalstr);}
#line 2578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 277 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce direct_declarator -> identifier\n", totalstr);}
#line 2584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 278 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce direct_declarator -> (declarator)\n", totalstr);}
#line 2590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 279 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce direct_declarator -> direct_declarator [constant_expression]\n", totalstr);}
#line 2596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 280 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce direct_declarator -> direct_declarator[]\n", totalstr);}
#line 2602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 281 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce direct_declarator -> direct_declarator(parameter_type_list)\n", totalstr);}
#line 2608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 282 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce direct_declarator -> direct_declarator(identifier_list) \n", totalstr);}
#line 2614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 283 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce direct_declarator -> direct_declarator()\n", totalstr);}
#line 2620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 287 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce pointer -> *\n", totalstr);}
#line 2626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 288 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce pointer -> *type_qualifier_list\n", totalstr);}
#line 2632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 289 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce pointer -> *pointer\n", totalstr);}
#line 2638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 290 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce pointer -> *type_qualifier_list pointer\n", totalstr);}
#line 2644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 294 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce type_qualifier_list -> type_qualifier\n", totalstr);}
#line 2650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 295 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce type_qualifier_list -> type_qualifier_list type_qualifier \n", totalstr);}
#line 2656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 300 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce parameter_type_list -> parameter_list\n", totalstr);}
#line 2662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 301 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce parameter_type_list -> parameter_list, ...\n", totalstr);}
#line 2668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 305 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce parameter_list -> parameter_declaration\n", totalstr);}
#line 2674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 306 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce parameter_list -> parameter_list ',' parameter_declaration\n", totalstr);}
#line 2680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 310 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce parameter_declaration -> declaration_specifiers declarator\n", totalstr);}
#line 2686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 311 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce parameter_declaration -> declaration_specifiers abstract_declarator\n", totalstr);}
#line 2692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 312 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce parameter_declaration -> declaration_specifiers\n", totalstr);}
#line 2698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 316 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce identifier_list -> identifier\n", totalstr);}
#line 2704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 317 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce identifier_list -> identifier_list, identifier\n", totalstr);}
#line 2710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 321 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce type_name -> specifier_qualifier_list\n", totalstr);}
#line 2716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 322 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce type_name -> specifier_qualifier_list abstract_declarator\n", totalstr);}
#line 2722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 326 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce abstract_declarator -> pointer\n", totalstr);}
#line 2728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 327 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce abstract_declarator -> direct_abstract_declarator\n", totalstr);}
#line 2734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 328 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce abstract_declarator -> pointer direct_abstract_declarator\n", totalstr);}
#line 2740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 332 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce direct_abstract_declarator -> (abstract_declarator)\n", totalstr);}
#line 2746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 333 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce direct_abstract_declarator -> []\n", totalstr);}
#line 2752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 334 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce direct_abstract_declarator -> [constant_expression] \n", totalstr);}
#line 2758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 335 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce direct_abstract_declarator -> direct_abstract_declarator[]\n", totalstr);}
#line 2764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 336 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce direct_abstract_declarator -> direct_abstract_declarator[constant_expression]\n", totalstr);}
#line 2770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 337 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce direct_abstract_declarator -> ()\n", totalstr);}
#line 2776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 338 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce direct_abstract_declarator -> (parameter_type_list)\n", totalstr);}
#line 2782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 339 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce direct_abstract_declarator -> direct_abstract_declarator()\n", totalstr);}
#line 2788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 340 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce direct_abstract_declarator -> direct_abstract_declarator(parameter_type_list)\n", totalstr);}
#line 2794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 344 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce initializer -> assignment_expression\n", totalstr);}
#line 2800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 345 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce initializer -> {initializer_list}\n", totalstr);}
#line 2806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 346 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce initializer -> {initializer_list, }\n", totalstr);}
#line 2812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 350 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce initialzier_list -> initializer\n", totalstr);}
#line 2818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 351 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce initializer_list -> initializer_list, initializer\n", totalstr);}
#line 2824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 355 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce statement -> labeled_statement\n", totalstr);}
#line 2830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 356 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce statement -> compound_statement \n", totalstr);}
#line 2836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 357 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce statement -> expression_statement \n", mystr);}
#line 2842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 358 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce statement -> selection_statement\n", totalstr);}
#line 2848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 359 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce statement -> iteration_statement\n", totalstr);}
#line 2854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 360 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce statement -> jump_statement \n", totalstr);}
#line 2860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 364 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce labeled_statement -> identifier :statement\n", totalstr);}
#line 2866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 365 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce labeled_statement -> case constant_expression :statement\n", totalstr);}
#line 2872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 366 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce labeled_statement -> default: statement\n", totalstr);}
#line 2878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 370 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce compound_statement -> {}\n", totalstr);}
#line 2884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 371 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce compound_statement -> {statement_list}\n", totalstr);}
#line 2890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 372 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce compound_statement -> {declaration_list}\n", totalstr);}
#line 2896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 373 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce compound_statement -> {declaration_list statement_list}\n", totalstr);}
#line 2902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 377 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce declaration_list -> declaration\n", mystr);}
#line 2908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 378 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce declaration_list -> declaration_list declaration\n", mystr);}
#line 2914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 382 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce statement_list -> statement\n", mystr);}
#line 2920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 383 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce statement_list -> statement_list statement\n", mystr);}
#line 2926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 387 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce expression_statement -> ;\n", totalstr);strcpy(mystr, totalstr);strcpy(totalstr,"");}
#line 2932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 388 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce expression_statement -> expression;\n", totalstr);strcpy(mystr, totalstr);strcpy(totalstr,"");}
#line 2938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 392 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce selection_statement -> if(expression) statement\n", totalstr);}
#line 2944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 393 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce if (expression) statement else statement\n", totalstr);}
#line 2950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 394 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce selection_statement -> switch(expression) statement\n", totalstr);}
#line 2956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 398 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce iteration_statement -> while(expression) statement\n", totalstr);}
#line 2962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 399 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%e\t\treduce iteration_statement -> do statement while(expression);\n", totalstr);strcpy(mystr, totalstr);strcpy(totalstr,"");}
#line 2968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 400 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce iteration_statement -> for (expression_statement expression_statement) statement\n", totalstr);}
#line 2974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 401 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce iteration_statement -> for (expression_statement expression_statement expression) statement\n", totalstr);}
#line 2980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 405 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce jump_statement -> goto identifier;\n", totalstr);strcpy(mystr, totalstr); strcpy(totalstr,"");}
#line 2986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 406 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce jump_statement -> continue;\n", totalstr); strcpy(mystr, totalstr);strcpy(totalstr,"");}
#line 2992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 407 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce jump_statement -> break;\n", totalstr); strcpy(mystr, totalstr);strcpy(totalstr,"");}
#line 2998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 408 "miniC_B735137.y" /* yacc.c:1646  */
    { fprintf(output, "%s\t\treduce jump_statement -> return;\n", totalstr); strcpy(mystr, totalstr);strcpy(totalstr,"");}
#line 3004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 409 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce jump_statement -> return expression;\n", totalstr);strcpy(mystr, totalstr);  strcpy(totalstr,"");}
#line 3010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 413 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce translation_unit -> external_declaration\n", mystr);}
#line 3016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 414 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce translation_unit -> translation_unit external_declaration\n", mystr);}
#line 3022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 418 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce external_declaration -> function_definition\n", totalstr);}
#line 3028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 419 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce external_declaration -> declaration\n", totalstr);}
#line 3034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 423 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce function_definition -> declaration_specifiers declarator declaration_list compound_statement\n", totalstr);}
#line 3040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 424 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce function_definition -> declaration_specifiers declarator compound_statement\n", totalstr);}
#line 3046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 425 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce function_definition -> declarator declaration_list compound_statement\n", totalstr);}
#line 3052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 426 "miniC_B735137.y" /* yacc.c:1646  */
    {fprintf(output, "%s\t\treduce function_definition -> declarator compound_statement\n", totalstr);}
#line 3058 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3062 "y.tab.c" /* yacc.c:1646  */
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
#line 429 "miniC_B735137.y" /* yacc.c:1906  */


void yyerror(char * s)
{
	fflush(stdout);
	fprintf(stderr,"%s\n",s);
}

int main(int argc, char** argv){
	if(argc != 2){
		printf("Usage: ./<executable file> <inputFile>\n");
		exit(1);
	}
	yyin = fopen(argv[1],"r");
    if(yyin == NULL){
		printf("!!Input File Open Failed!!\n");
		return -1;
	}
	char filename[100] = "";
	strcat(filename, strtok(argv[1], "."));
	strcat(filename, "_B735137.output");
	output = fopen(filename,"w");
	if(output == NULL){
		printf("!!Output File open Failed!!\n");
		return -2;
	}
	yyparse();
}
