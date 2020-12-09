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
#line 1 "yacc.y" /* yacc.c:339  */

	#define YYSTYPE_IS_DECLARED 1
	#define YYSTYPE long long

	#include "type.h"
	#include "func.h"
	#include <stdio.h>
	#include <stdlib.h>

	extern int line_no, syntax_err;
	extern A_NODE *root;
	extern A_ID *current_id;
	extern int current_level;
	extern A_TYPE *int_type, *float_type, *char_type, *void_type, *string_type;

    int yyerror(char *s);
	int yylex();

#line 85 "y.tab.c" /* yacc.c:339  */

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
    TYPE_IDENTIFIER = 259,
    CHARACTER_CONSTANT = 260,
    STRING_LITERAL = 261,
    FLOAT_CONSTANT = 262,
    INTEGER_CONSTANT = 263,
    ASSIGN = 264,
    MINUS = 265,
    PLUS = 266,
    SEMICOLON = 267,
    AMP = 268,
    PERCENT = 269,
    SLASH = 270,
    STAR = 271,
    EXCL = 272,
    COMMA = 273,
    PERIOD = 274,
    COLON = 275,
    RR = 276,
    LR = 277,
    RB = 278,
    LB = 279,
    RP = 280,
    LP = 281,
    DOTDOTDOT = 282,
    BARBAR = 283,
    AMPAMP = 284,
    NEQ = 285,
    EQL = 286,
    GEQ = 287,
    LEQ = 288,
    GTR = 289,
    LSS = 290,
    ARROW = 291,
    MINUSMINUS = 292,
    PLUSPLUS = 293,
    WHILE_SYM = 294,
    UNION_SYM = 295,
    TYPEDEF_SYM = 296,
    SWITCH_SYM = 297,
    STRUCT_SYM = 298,
    STATIC_SYM = 299,
    SIZEOF_SYM = 300,
    RETURN_SYM = 301,
    IF_SYM = 302,
    FOR_SYM = 303,
    ENUM_SYM = 304,
    ELSE_SYM = 305,
    DO_SYM = 306,
    DEFAULT_SYM = 307,
    CONTINUE_SYM = 308,
    CASE_SYM = 309,
    BREAK_SYM = 310,
    AUTO_SYM = 311
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define TYPE_IDENTIFIER 259
#define CHARACTER_CONSTANT 260
#define STRING_LITERAL 261
#define FLOAT_CONSTANT 262
#define INTEGER_CONSTANT 263
#define ASSIGN 264
#define MINUS 265
#define PLUS 266
#define SEMICOLON 267
#define AMP 268
#define PERCENT 269
#define SLASH 270
#define STAR 271
#define EXCL 272
#define COMMA 273
#define PERIOD 274
#define COLON 275
#define RR 276
#define LR 277
#define RB 278
#define LB 279
#define RP 280
#define LP 281
#define DOTDOTDOT 282
#define BARBAR 283
#define AMPAMP 284
#define NEQ 285
#define EQL 286
#define GEQ 287
#define LEQ 288
#define GTR 289
#define LSS 290
#define ARROW 291
#define MINUSMINUS 292
#define PLUSPLUS 293
#define WHILE_SYM 294
#define UNION_SYM 295
#define TYPEDEF_SYM 296
#define SWITCH_SYM 297
#define STRUCT_SYM 298
#define STATIC_SYM 299
#define SIZEOF_SYM 300
#define RETURN_SYM 301
#define IF_SYM 302
#define FOR_SYM 303
#define ENUM_SYM 304
#define ELSE_SYM 305
#define DO_SYM 306
#define DEFAULT_SYM 307
#define CONTINUE_SYM 308
#define CASE_SYM 309
#define BREAK_SYM 310
#define AUTO_SYM 311

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

#line 248 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   470

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  293

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

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
      55,    56
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    30,    30,    35,    36,    40,    41,    45,    45,    47,
      47,    52,    53,    57,    58,    62,    67,    68,    69,    70,
      75,    76,    77,    81,    82,    86,    87,    92,    93,    97,
      98,   102,   104,   108,   109,   110,   115,   116,   114,   119,
     119,   119,   122,   127,   128,   132,   133,   137,   142,   143,
     148,   153,   152,   155,   155,   157,   162,   163,   167,   170,
     169,   175,   176,   180,   181,   185,   186,   187,   189,   189,
     196,   197,   201,   202,   207,   208,   213,   215,   221,   222,
     226,   227,   228,   233,   234,   236,   238,   240,   245,   246,
     250,   252,   256,   257,   258,   259,   260,   261,   265,   267,
     272,   272,   279,   280,   284,   286,   288,   293,   295,   297,
     302,   307,   308,   312,   314,   316,   321,   322,   326,   328,
     333,   334,   338,   342,   346,   350,   351,   356,   360,   361,
     366,   367,   372,   376,   380,   384,   385,   387,   392,   393,
     395,   397,   399,   404,   408,   409,   411,   416,   417,   419,
     421,   426,   427,   432,   433,   435,   437,   438,   439,   440,
     441,   442,   444,   449,   450,   452,   454,   456,   458,   460,
     465,   467,   468,   469,   470,   471,   475
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "TYPE_IDENTIFIER",
  "CHARACTER_CONSTANT", "STRING_LITERAL", "FLOAT_CONSTANT",
  "INTEGER_CONSTANT", "ASSIGN", "MINUS", "PLUS", "SEMICOLON", "AMP",
  "PERCENT", "SLASH", "STAR", "EXCL", "COMMA", "PERIOD", "COLON", "RR",
  "LR", "RB", "LB", "RP", "LP", "DOTDOTDOT", "BARBAR", "AMPAMP", "NEQ",
  "EQL", "GEQ", "LEQ", "GTR", "LSS", "ARROW", "MINUSMINUS", "PLUSPLUS",
  "WHILE_SYM", "UNION_SYM", "TYPEDEF_SYM", "SWITCH_SYM", "STRUCT_SYM",
  "STATIC_SYM", "SIZEOF_SYM", "RETURN_SYM", "IF_SYM", "FOR_SYM",
  "ENUM_SYM", "ELSE_SYM", "DO_SYM", "DEFAULT_SYM", "CONTINUE_SYM",
  "CASE_SYM", "BREAK_SYM", "AUTO_SYM", "$accept", "program",
  "translation_unit", "external_declaration", "function_definition", "@1",
  "@2", "declaration_list_opt", "declaration_list", "declaration",
  "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list_opt", "init_declarator_list", "init_declarator",
  "initializer", "initializer_list", "type_specifier",
  "struct_type_specifier", "@3", "@4", "@5", "@6", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_type_specifier",
  "@7", "@8", "enumerator_list", "enumerator", "@9", "declarator",
  "pointer", "direct_declarator", "@10", "parameter_type_list_opt",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "abstract_declarator_opt", "abstract_declarator",
  "direct_abstract_declarator", "statement_list_opt", "statement_list",
  "statement", "labeled_statement", "compound_statement", "@11",
  "expression_statement", "selection_statement", "iteration_statement",
  "for_expression", "expression_opt", "jump_statement",
  "arg_expression_list_opt", "arg_expression_list",
  "constant_expression_opt", "constant_expression", "expression",
  "comma_expression", "assignment_expression", "conditional_expression",
  "logical_or_expression", "logical_and_expression",
  "bitwise_or_expression", "bitwise_xor_expression",
  "bitwise_and_expression", "equality_expression", "relational_expression",
  "shift_expression", "additive_expression", "multiplicative_expression",
  "cast_expression", "unary_expression", "postfix_expression",
  "primary_expression", "type_name", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311
};
# endif

#define YYPACT_NINF -165

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-165)))

#define YYTABLE_NINF -60

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     225,  -165,  -165,    12,    27,  -165,  -165,  -165,  -165,    29,
    -165,    48,   225,  -165,  -165,  -165,    27,    85,    85,  -165,
      49,  -165,  -165,    30,    61,  -165,    32,    46,    58,  -165,
    -165,   104,   103,  -165,    22,  -165,  -165,   108,   117,   127,
      61,   372,  -165,  -165,   147,   170,  -165,    27,   336,   127,
     160,  -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,   372,
     372,   372,   372,   372,   205,   389,   389,   425,   153,  -165,
    -165,  -165,  -165,  -165,   157,   164,  -165,  -165,  -165,    77,
     200,  -165,   152,   209,  -165,   180,   234,  -165,    85,   170,
     190,    63,  -165,  -165,   191,   336,  -165,  -165,  -165,  -165,
      20,    85,  -165,  -165,  -165,  -165,  -165,  -165,    23,   179,
     182,   372,  -165,  -165,   205,  -165,  -165,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   211,   372,   372,   216,  -165,  -165,   107,   202,  -165,
     212,  -165,   126,   227,   170,  -165,  -165,   150,    20,    27,
     154,  -165,   272,    85,  -165,    27,   372,   289,   119,  -165,
    -165,   162,  -165,   372,   214,   164,  -165,   200,   200,  -165,
    -165,  -165,  -165,   209,   209,  -165,  -165,  -165,  -165,  -165,
     221,   230,   238,  -165,  -165,   116,  -165,    62,  -165,  -165,
      18,  -165,   372,  -165,   336,  -165,   177,    64,  -165,  -165,
    -165,  -165,  -165,   226,   231,   372,   233,   236,   272,   243,
     252,   372,   255,   265,   272,  -165,  -165,  -165,  -165,  -165,
    -165,  -165,   261,  -165,   253,   262,   266,   162,   372,    85,
    -165,  -165,  -165,  -165,   372,  -165,  -165,  -165,  -165,  -165,
    -165,    27,   372,   372,   278,  -165,   372,   372,   256,   272,
    -165,   276,  -165,  -165,  -165,  -165,  -165,  -165,  -165,   269,
     279,  -165,  -165,   281,   282,  -165,   283,   287,   285,   277,
    -165,   272,  -165,  -165,   272,   272,   272,   272,   372,   372,
    -165,  -165,  -165,   271,  -165,   304,   297,   272,   372,   316,
    -165,  -165,  -165
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    65,    35,    63,     0,    44,    22,    43,    21,    53,
      20,     0,     2,     3,     5,     6,    23,    17,    16,    33,
      39,    34,     9,     0,    62,    64,     0,    55,     0,     1,
       4,     0,    24,    25,    27,    19,    18,    42,     0,     0,
      61,   120,    68,    66,     0,     0,    15,     0,     0,     0,
       0,    40,   100,    10,   170,   173,   174,   172,   171,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   121,
     122,   123,   124,   125,   127,   128,   130,   132,   133,   134,
     135,   138,   143,   144,   147,   151,   153,   163,    70,     0,
      58,     0,    56,    26,    27,     0,    28,    29,     8,    37,
       0,    11,   159,   151,   160,   156,   157,   158,    78,     0,
       0,     0,   155,   154,     0,   161,    67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   116,     0,   169,   168,    78,     0,    71,
      72,    74,     0,     0,     0,    54,    31,     0,     0,     0,
       0,    45,    88,    12,    13,    23,   120,    70,    81,   176,
      79,    80,   175,     0,     0,   129,   131,   137,   136,   142,
     141,   140,   139,   146,   145,   150,   149,   148,   126,   166,
       0,     0,   117,   118,   167,    70,    76,    81,    77,    69,
       0,    52,     0,    57,     0,    30,     0,     0,    48,    50,
      41,    46,   102,     0,     0,   111,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    90,    92,    93,    94,    95,
      96,    97,     0,    14,     0,     0,     0,    82,   120,    70,
     152,   162,   164,   165,     0,    73,    75,    60,    32,    38,
      47,     0,     0,     0,     0,   112,     0,   111,     0,     0,
     114,     0,   115,   101,    91,   103,    84,    86,    83,     0,
       0,   119,    49,     0,     0,   113,     0,     0,     0,     0,
      99,     0,    85,    87,     0,     0,     0,     0,   111,     0,
      98,   107,   106,   104,   109,     0,     0,     0,   111,     0,
     105,   110,   108
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -165,  -165,  -165,   319,  -165,  -165,  -165,  -165,  -165,   -82,
       8,  -165,  -165,  -165,   288,   -89,  -165,   -84,  -165,  -165,
    -165,  -165,  -165,  -165,   186,  -121,  -165,    95,  -165,  -165,
    -165,   248,   196,  -165,    -1,    -2,   -21,  -165,   -83,  -165,
    -165,   158,   213,  -130,  -137,  -165,  -165,   -97,  -165,    88,
    -165,  -165,  -165,  -165,  -165,  -164,  -165,  -165,  -165,  -138,
     -44,   -41,  -165,  -116,  -165,  -165,   237,   239,  -165,  -165,
    -165,    72,   178,  -165,    70,   -50,   -25,  -165,  -165,   241
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    49,    39,   152,   153,    15,
     137,    17,    31,    32,    33,    96,   147,    18,    19,    50,
     148,    38,   100,    20,   150,   151,   197,   198,    21,    44,
      28,    91,    92,   143,    22,    23,    24,    88,   225,   139,
     140,   141,   159,   160,   161,   213,   214,   215,   216,   217,
     101,   218,   219,   220,   267,   244,   221,   181,   182,    68,
      69,   222,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,   110
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      70,    25,    40,    26,    97,   138,   146,    70,    16,   102,
     104,   105,   106,   107,   178,    34,   149,   183,   224,   154,
      16,   227,     2,   109,     2,    35,    36,   226,     3,   201,
       1,    48,    27,     1,   103,   103,   103,   103,   103,     3,
     112,   113,   115,     3,    -7,   235,    94,   156,    29,   157,
     227,    97,    37,     4,    70,   226,     4,    43,     5,     6,
       5,     7,     8,     7,   149,     1,   149,     9,   -51,     9,
     109,   223,   108,   109,    10,   201,   240,   175,   176,   177,
      45,   144,   241,   268,   145,    41,   156,    42,   185,     2,
     259,   180,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   238,   158,   119,   120,   155,
       1,   248,   149,   230,   285,    70,    46,   254,   261,     1,
       2,    47,   108,     3,   291,     5,     6,    53,     7,     8,
     -36,   156,     3,   185,     9,   187,   186,    98,   103,    51,
     156,    10,   185,   156,   144,   157,   260,   191,   199,    52,
      97,   237,   270,    70,    94,   158,     5,     6,     2,     7,
       8,   155,   125,   126,   245,     9,    40,   251,   194,    89,
      70,   195,    10,    90,   280,   200,   116,   281,   282,   283,
     284,     2,    99,   187,    26,   117,   228,    70,   229,   130,
     290,   167,   168,   118,     5,   173,   174,     7,   239,   -59,
      48,   263,   264,     9,   162,   266,   245,   163,    54,     2,
      55,    56,    57,    58,   179,    59,    60,     5,    61,   184,
       7,    62,    63,   127,   128,   129,     9,   189,     1,     2,
     190,    64,   121,   122,   123,   124,   192,   245,   286,   231,
     199,     3,    65,    66,   232,     5,     6,   245,     7,     8,
      67,     4,   242,   131,     9,   233,   234,   243,   132,   246,
     133,    10,   247,   249,   250,     5,     6,   252,     7,     8,
     134,   135,   136,   255,     9,    54,   256,    55,    56,    57,
      58,    10,    59,    60,   202,    61,   253,   257,    62,    63,
     265,   258,   272,     2,    52,   269,   271,   278,    64,   169,
     170,   171,   172,   279,   273,     3,   274,   275,   276,    65,
      66,   203,   277,   156,   204,   157,   288,    67,   205,   206,
     207,   287,   289,   208,   209,   210,   211,   212,   292,     5,
       6,    30,     7,     8,   196,    93,   262,   142,     9,    54,
     193,    55,    56,    57,    58,    10,    59,    60,   236,    61,
     188,     0,    62,    63,   165,   164,     0,   166,    95,     0,
       0,     0,    64,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,    54,     0,    55,    56,    57,
      58,    67,    59,    60,     0,    61,     0,     0,    62,    63,
       0,     0,    54,     0,    55,    56,    57,    58,    64,    59,
      60,     0,    61,     0,     0,    62,    63,     0,     0,    65,
      66,     0,     0,     0,     0,   111,     0,    67,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,    54,     0,
      55,    56,    57,    58,    67,    59,    60,     0,    61,     0,
       0,    62,    63,     0,     0,     0,     0,     0,     0,     0,
       0,   114,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,     0,     0,     0,     0,     0,
      67
};

static const yytype_int16 yycheck[] =
{
      41,     3,    23,     4,    48,    88,    95,    48,     0,    59,
      60,    61,    62,    63,   130,    16,   100,   133,   156,   101,
      12,   158,     4,    64,     4,    17,    18,   157,    16,   150,
       3,     9,     3,     3,    59,    60,    61,    62,    63,    16,
      65,    66,    67,    16,    22,    27,    47,    24,     0,    26,
     187,    95,     3,    26,    95,   185,    26,    25,    40,    41,
      40,    43,    44,    43,   148,     3,   150,    49,    22,    49,
     111,   153,    64,   114,    56,   196,    12,   127,   128,   129,
      22,    18,    18,   247,    21,    24,    24,    26,    26,     4,
     228,   132,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   194,   108,    30,    31,   101,
       3,   208,   196,   163,   278,   156,    12,   214,   234,     3,
       4,    18,   114,    16,   288,    40,    41,    39,    43,    44,
      22,    24,    16,    26,    49,   137,   137,    49,   163,    22,
      24,    56,    26,    24,    18,    26,   229,    21,   149,    22,
     194,   192,   249,   194,   155,   157,    40,    41,     4,    43,
      44,   153,    10,    11,   205,    49,   187,   211,    18,    22,
     211,    21,    56,     3,   271,    21,    23,   274,   275,   276,
     277,     4,    22,   185,   185,    28,    24,   228,    26,     9,
     287,   119,   120,    29,    40,   125,   126,    43,    21,     9,
       9,   242,   243,    49,    25,   246,   247,    25,     3,     4,
       5,     6,     7,     8,     3,    10,    11,    40,    13,     3,
      43,    16,    17,    14,    15,    16,    49,    25,     3,     4,
      18,    26,    32,    33,    34,    35,     9,   278,   279,    25,
     241,    16,    37,    38,    23,    40,    41,   288,    43,    44,
      45,    26,    26,    19,    49,    25,    18,    26,    24,    26,
      26,    56,    26,    20,    12,    40,    41,    12,    43,    44,
      36,    37,    38,    12,    49,     3,    23,     5,     6,     7,
       8,    56,    10,    11,    12,    13,    21,    25,    16,    17,
      12,    25,    23,     4,    22,    39,    20,    12,    26,   121,
     122,   123,   124,    26,    25,    16,    25,    25,    25,    37,
      38,    39,    25,    24,    42,    26,    12,    45,    46,    47,
      48,    50,    25,    51,    52,    53,    54,    55,    12,    40,
      41,    12,    43,    44,   148,    47,   241,    89,    49,     3,
     144,     5,     6,     7,     8,    56,    10,    11,   190,    13,
     137,    -1,    16,    17,   117,   114,    -1,   118,    22,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,     3,    -1,     5,     6,     7,
       8,    45,    10,    11,    -1,    13,    -1,    -1,    16,    17,
      -1,    -1,     3,    -1,     5,     6,     7,     8,    26,    10,
      11,    -1,    13,    -1,    -1,    16,    17,    -1,    -1,    37,
      38,    -1,    -1,    -1,    -1,    26,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,     3,    -1,
       5,     6,     7,     8,    45,    10,    11,    -1,    13,    -1,
      -1,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    16,    26,    40,    41,    43,    44,    49,
      56,    58,    59,    60,    61,    66,    67,    68,    74,    75,
      80,    85,    91,    92,    93,    92,    91,     3,    87,     0,
      60,    69,    70,    71,    91,    67,    67,     3,    78,    63,
      93,    24,    26,    25,    86,    22,    12,    18,     9,    62,
      76,    22,    22,   106,     3,     5,     6,     7,     8,    10,
      11,    13,    16,    17,    26,    37,    38,    45,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,    94,    22,
       3,    88,    89,    71,    91,    22,    72,   117,   106,    22,
      79,   107,   132,   133,   132,   132,   132,   132,    67,   118,
     136,    26,   133,   133,    26,   133,    23,    28,    29,    30,
      31,    32,    33,    34,    35,    10,    11,    14,    15,    16,
       9,    19,    24,    26,    36,    37,    38,    67,    95,    96,
      97,    98,    88,    90,    18,    21,    72,    73,    77,    74,
      81,    82,    64,    65,    66,    67,    24,    26,    92,    99,
     100,   101,    25,    25,   136,   123,   124,   128,   128,   129,
     129,   129,   129,   131,   131,   132,   132,   132,   120,     3,
     118,   114,   115,   120,     3,    26,    91,    92,    99,    25,
      18,    21,     9,    89,    18,    21,    81,    83,    84,    91,
      21,    82,    12,    39,    42,    46,    47,    48,    51,    52,
      53,    54,    55,   102,   103,   104,   105,   106,   108,   109,
     110,   113,   118,    66,   116,    95,   100,   101,    24,    26,
     132,    25,    23,    25,    18,    27,    98,   118,    72,    21,
      12,    18,    26,    26,   112,   118,    26,    26,   104,    20,
      12,   117,    12,    21,   104,    12,    23,    25,    25,   116,
      95,   120,    84,   118,   118,    12,   118,   111,   112,    39,
     104,    20,    23,    25,    25,    25,    25,    25,    12,    26,
     104,   104,   104,   104,   104,   112,   118,    50,    12,    25,
     104,   112,    12
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    60,    62,    61,    63,
      61,    64,    64,    65,    65,    66,    67,    67,    67,    67,
      68,    68,    68,    69,    69,    70,    70,    71,    71,    72,
      72,    73,    73,    74,    74,    74,    76,    77,    75,    78,
      79,    75,    75,    80,    80,    81,    81,    82,    83,    83,
      84,    86,    85,    87,    85,    85,    88,    88,    89,    90,
      89,    91,    91,    92,    92,    93,    93,    93,    94,    93,
      95,    95,    96,    96,    97,    97,    98,    98,    99,    99,
     100,   100,   100,   101,   101,   101,   101,   101,   102,   102,
     103,   103,   104,   104,   104,   104,   104,   104,   105,   105,
     107,   106,   108,   108,   109,   109,   109,   110,   110,   110,
     111,   112,   112,   113,   113,   113,   114,   114,   115,   115,
     116,   116,   117,   118,   119,   120,   120,   121,   122,   122,
     123,   123,   124,   125,   126,   127,   127,   127,   128,   128,
     128,   128,   128,   129,   130,   130,   130,   131,   131,   131,
     131,   132,   132,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   134,   134,   134,   134,   134,   134,   134,
     135,   135,   135,   135,   135,   135,   136
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     0,     1,     1,     2,     3,     1,     1,     2,     2,
       1,     1,     1,     0,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     0,     0,     7,     0,
       0,     6,     2,     1,     1,     1,     2,     3,     1,     3,
       1,     0,     6,     0,     5,     2,     1,     3,     1,     0,
       4,     2,     1,     1,     2,     1,     3,     4,     0,     5,
       0,     1,     1,     3,     1,     3,     2,     2,     0,     1,
       1,     1,     2,     3,     3,     4,     3,     4,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     4,     3,
       0,     5,     1,     2,     5,     7,     5,     5,     7,     5,
       5,     0,     1,     3,     2,     2,     0,     1,     1,     3,
       0,     1,     1,     1,     1,     1,     3,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     1,     3,     3,     1,     3,     3,
       3,     1,     4,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     1,     4,     4,     3,     3,     2,     2,
       1,     1,     1,     1,     1,     3,     2
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
#line 31 "yacc.y" /* yacc.c:1646  */
    {root=makeNode(N_PROGRAM,NIL,(yyvsp[0]),NIL); checkForwardReference();}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 35 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 36 "yacc.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]),(yyvsp[0]));}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 40 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 41 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 45 "yacc.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 46 "yacc.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorBody((yyvsp[-1]),(yyvsp[0]));current_id=(yyvsp[-2]);}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 47 "yacc.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorSpecifier((yyvsp[0]),makeSpecifier(int_type,0));}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 48 "yacc.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorBody((yyvsp[-1]),(yyvsp[0]));current_id=(yyvsp[-2]);}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 52 "yacc.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 53 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 57 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 58 "yacc.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]),(yyvsp[0]));}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 63 "yacc.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorListSpecifier((yyvsp[-1]),(yyvsp[-2]));}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 67 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeSpecifier((yyvsp[0]),0);}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 68 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeSpecifier(0,(yyvsp[0]));}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 69 "yacc.y" /* yacc.c:1646  */
    {(yyval)=updateSpecifier((yyvsp[0]),(yyvsp[-1]),0);}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 71 "yacc.y" /* yacc.c:1646  */
    {(yyval)=updateSpecifier((yyvsp[0]),0,(yyvsp[-1]));}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 75 "yacc.y" /* yacc.c:1646  */
    {(yyval)=S_AUTO;}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 76 "yacc.y" /* yacc.c:1646  */
    {(yyval)=S_STATIC;}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 77 "yacc.y" /* yacc.c:1646  */
    {(yyval)=S_TYPEDEF;}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 81 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeDummyIdentifier();}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 82 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 86 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 88 "yacc.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 92 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 93 "yacc.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorInit((A_ID*)(yyvsp[-2]),(A_NODE*)(yyvsp[0]));}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 97 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(A_NODE*)makeNode(N_INIT_LIST_ONE,NIL,(yyvsp[0]),NIL);}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 98 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 103 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_INIT_LIST,(yyvsp[0]),NIL,makeNode(N_INIT_LIST_NIL,NIL,NIL,NIL));}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 104 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_INIT_LIST,(yyvsp[-2]),(yyvsp[0]));}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 108 "yacc.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 109 "yacc.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 110 "yacc.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 115 "yacc.y" /* yacc.c:1646  */
    {(yyval)=setTypeStructOrEnumIdentifier((yyvsp[-1]),(yyvsp[0]),ID_STRUCT);}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 116 "yacc.y" /* yacc.c:1646  */
    { (yyval)=current_id;current_level++;}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 117 "yacc.y" /* yacc.c:1646  */
    {checkForwardReference();(yyval)=setTypeField((yyvsp[-4]),(yyvsp[-1]));current_level--;
	current_id=(yyvsp[-2]);}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 119 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeType((yyvsp[0]));}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 119 "yacc.y" /* yacc.c:1646  */
    {(yyval)=current_id;current_level++;}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 120 "yacc.y" /* yacc.c:1646  */
    {checkForwardReference();(yyval)=setTypeField((yyvsp[-4]),(yyvsp[-1]));
	current_level--;current_id=(yyvsp[-2]);}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 123 "yacc.y" /* yacc.c:1646  */
    {(yyval)=getTypeOfStructOrEnumRefIdentifier((yyvsp[-1]),(yyvsp[0]),ID_STRUCT);}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 127 "yacc.y" /* yacc.c:1646  */
    {(yyval)=T_STRUCT;}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 128 "yacc.y" /* yacc.c:1646  */
    {(yyval)=T_UNION;}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 132 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 133 "yacc.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]),(yyvsp[0]));}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 138 "yacc.y" /* yacc.c:1646  */
    {(yyval)=setStructDeclaratorListSpecifier((yyvsp[-1]),(yyvsp[-2]));}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 142 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 144 "yacc.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 148 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 153 "yacc.y" /* yacc.c:1646  */
    {(yyval)=setTypeStructOrEnumIdentifier(T_ENUM,(yyvsp[0]),ID_ENUM);}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 154 "yacc.y" /* yacc.c:1646  */
    {(yyval)=setTypeField((yyvsp[-3]),(yyvsp[-1]));}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 155 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_ENUM);}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 156 "yacc.y" /* yacc.c:1646  */
    {(yyval)=setTypeField((yyvsp[-3]),(yyvsp[-1]));}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 158 "yacc.y" /* yacc.c:1646  */
    {(yyval)=getTypeOfStructOrEnumRefIdentifier(T_ENUM,(yyvsp[0]),ID_ENUM);}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 162 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 163 "yacc.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 168 "yacc.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorKind(makeIdentifier((yyvsp[0])),ID_ENUM_LITERAL);}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 170 "yacc.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorKind(makeIdentifier((yyvsp[0])),ID_ENUM_LITERAL);}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 171 "yacc.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorInit((yyvsp[-2]),(yyvsp[0]));}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 175 "yacc.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorElementType((yyvsp[0]),(yyvsp[-1]));}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 176 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 180 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_POINTER);}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 181 "yacc.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[0]),makeType(T_POINTER));}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 185 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeIdentifier((yyvsp[0]));}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 186 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 188 "yacc.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorElementType((yyvsp[-3]),setTypeExpr(makeType(T_ARRAY),(yyvsp[-1])));}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 189 "yacc.y" /* yacc.c:1646  */
    {(yyval)=current_id;current_level++;}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 191 "yacc.y" /* yacc.c:1646  */
    {checkForwardReference();current_id=(yyvsp[-2]);current_level--;
	(yyval)=setDeclaratorElementType((yyvsp[-4]),setTypeField(makeType(T_FUNC),(yyvsp[-1])));}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 196 "yacc.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 197 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 201 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 202 "yacc.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList(
	(yyvsp[-2]),setDeclaratorKind(makeDummyIdentifier(),ID_PARM));}
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 207 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 209 "yacc.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 2045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 214 "yacc.y" /* yacc.c:1646  */
    {(yyval)=setParameterDeclaratorSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 2051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 216 "yacc.y" /* yacc.c:1646  */
    {(yyval)=setParameterDeclaratorSpecifier(setDeclaratorType(
	makeDummyIdentifier(),(yyvsp[0])),(yyvsp[-1]));}
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 221 "yacc.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 222 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 226 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 227 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_POINTER);}
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 229 "yacc.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[0]),makeType(T_POINTER));}
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 233 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 235 "yacc.y" /* yacc.c:1646  */
    {(yyval)=setTypeExpr(makeType(T_ARRAY),(yyvsp[-1]));}
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 237 "yacc.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[-3]),setTypeExpr(makeType(T_ARRAY),(yyvsp[-1])));}
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 239 "yacc.y" /* yacc.c:1646  */
    {(yyval)=setTypeExpr(makeType(T_FUNC),(yyvsp[-1]));}
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 241 "yacc.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[-3]),setTypeExpr(makeType(T_FUNC),(yyvsp[-1])));}
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 245 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL);}
#line 2124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 246 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 250 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LIST,(yyvsp[0]),NIL,
	makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL));}
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 252 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_STMT_LIST,(yyvsp[-1]),(yyvsp[0]));}
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 256 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 257 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 258 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 259 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 260 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 261 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 266 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LABEL_CASE, (yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 268 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LABEL_DEFAULT,NIL,(yyvsp[0]),NIL);}
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 272 "yacc.y" /* yacc.c:1646  */
    {(yyval)=current_id;current_level++;}
#line 2197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 273 "yacc.y" /* yacc.c:1646  */
    {checkForwardReference();
	(yyval)=makeNode(N_STMT_COMPOUND,(yyvsp[-2]),NIL,(yyvsp[-1])); current_id=(yyvsp[-3]);
	current_level--;}
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 279 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_EMPTY,NIL,NIL,NIL);}
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 280 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_EXPRESSION,NIL,(yyvsp[-1]),NIL);}
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 285 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_IF,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 287 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_IF_ELSE,(yyvsp[-4]),(yyvsp[-2]),(yyvsp[0]));}
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 289 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_SWITCH,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 294 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_WHILE,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 296 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_DO,(yyvsp[-5]),NIL,(yyvsp[-2]));}
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 298 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_FOR,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 303 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_FOR_EXP,(yyvsp[-4]),(yyvsp[-2]),(yyvsp[0]));}
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 307 "yacc.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 308 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 313 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_RETURN,NIL,(yyvsp[-1]),NIL);}
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 315 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_CONTINUE,NIL,NIL,NIL);}
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 317 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_BREAK,NIL,NIL,NIL);}
#line 2289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 321 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL);}
#line 2295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 322 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 327 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_ARG_LIST,(yyvsp[0]),NIL,makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL));}
#line 2307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 329 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_ARG_LIST,(yyvsp[-2]),(yyvsp[0]));}
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 333 "yacc.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 334 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 338 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 342 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 346 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 350 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 352 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ASSIGN,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 356 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 360 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 362 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_OR,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 366 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 368 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_AND,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 372 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 376 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 380 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 384 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 386 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_EQL,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 388 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_NEQ,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 392 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 394 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_LSS,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 396 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_GTR,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 398 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_LEQ,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 400 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_GEQ,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 404 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 408 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 410 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ADD,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 412 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SUB,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 416 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 418 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_MUL,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 420 "yacc.y" /* yacc.c:1646  */
    {(yyval)= makeNode(N_EXP_DIV,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 422 "yacc.y" /* yacc.c:1646  */
    {(yyval)= makeNode(N_EXP_MOD,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 426 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 428 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_CAST,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 432 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 434 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PRE_INC,NIL,(yyvsp[0]),NIL);}
#line 2523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 436 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PRE_DEC,NIL,(yyvsp[0]),NIL);}
#line 2529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 437 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_AMP,NIL,(yyvsp[0]),NIL);}
#line 2535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 438 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STAR,NIL,(yyvsp[0]),NIL);}
#line 2541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 439 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_NOT,NIL,(yyvsp[0]),NIL);}
#line 2547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 440 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_MINUS,NIL,(yyvsp[0]),NIL);}
#line 2553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 441 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PLUS,NIL,(yyvsp[0]),NIL);}
#line 2559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 443 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SIZE_EXP,NIL,(yyvsp[0]),NIL);}
#line 2565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 445 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SIZE_TYPE,NIL,(yyvsp[-1]),NIL);}
#line 2571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 449 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 451 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ARRAY,(yyvsp[-3]),NIL,(yyvsp[-1]));}
#line 2583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 453 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_FUNCTION_CALL,(yyvsp[-3]),NIL,(yyvsp[-1]));}
#line 2589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 455 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STRUCT,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 457 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ARROW,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 459 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_POST_INC,NIL,(yyvsp[-1]),NIL);}
#line 2607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 461 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_POST_DEC,NIL,(yyvsp[-1]),NIL);}
#line 2613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 466 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_IDENT,NIL,getIdentifierDeclared((yyvsp[0])),NIL);}
#line 2619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 467 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_INT_CONST,NIL,(yyvsp[0]),NIL);}
#line 2625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 468 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_FLOAT_CONST,NIL,(yyvsp[0]),NIL);}
#line 2631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 469 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_CHAR_CONST,NIL,(yyvsp[0]),NIL);}
#line 2637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 470 "yacc.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STRING_LITERAL,NIL,(yyvsp[0]),NIL);}
#line 2643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 471 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 476 "yacc.y" /* yacc.c:1646  */
    {(yyval)=setTypeNameSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 2655 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2659 "y.tab.c" /* yacc.c:1646  */
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
#line 479 "yacc.y" /* yacc.c:1906  */

extern char *yytext;

void print_current_id_list () {
	
	A_ID *id;
	id = current_id;
	printf("(current_id) ");
	while (id != NIL) {
		printf("%s > ", id -> name);
		id = id -> prev;
	}
	printf("NULL\n");
}

int yyerror(char *s) 
{
	printf("line %d: %s near %s \n", line_no, s, yytext);
	exit(1);
}

int yywrap()
{
	return(1);
}
