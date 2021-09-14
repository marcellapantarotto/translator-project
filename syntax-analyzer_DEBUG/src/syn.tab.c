/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 8 "src/syn.y"

  #include <stdio.h>
  // #include <stdlib.h>
  // #include <string.h>
  #include "../lib/structures.h"
  #include "structures.c"

  extern char *yytext;
  extern int yyleng;
  extern int yylineno;
  extern int yylex();
  extern int yylex_destroy();
  extern int yyerror(char *s);
  extern FILE *yyin;

  t_node root;

#line 88 "src/syn.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_LIB_SYN_TAB_H_INCLUDED
# define YY_YY_LIB_SYN_TAB_H_INCLUDED
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
    NUM_INT = 258,
    NUM_FLOAT = 259,
    STRING = 260,
    NIL_CNST = 261,
    ID = 262,
    RETURN_STM = 263,
    T_INT = 264,
    T_FLOAT = 265,
    T_LIST = 266,
    IF_STMT = 267,
    ELSE_STMT = 268,
    FOR_STMT = 269,
    OUTPUT_WRITE = 270,
    OUTPUT_WRITELN = 271,
    INPUT_READ = 272,
    AND = 273,
    OR = 274,
    GREATER = 275,
    GREATER_EQ = 276,
    LESS = 277,
    LESS_EQ = 278,
    EQUAL = 279,
    NOT_EQ = 280,
    FILTER = 281,
    MAP = 282
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 132 "src/syn.y"

  t_token token;
  t_node *node;

#line 173 "src/syn.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_LIB_SYN_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
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
#define YYLAST   5774

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  464

#define YYUNDEFTOK  2
#define YYMAXUTOK   282


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,     2,     2,    39,     2,     2,
      18,    19,    34,    32,    23,    33,     2,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    38,    22,
       2,    42,     2,    40,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    20,     2,    21,     2,     2,     2,     2,
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
      15,    16,    17,    24,    25,    26,    27,    28,    29,    30,
      31,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   142,   142,   155,   161,   179,   191,   196,   211,   217,
     217,   231,   240,   240,   249,   252,   256,   263,   271,   279,
     281,   285,   286,   290,   296,   302,   307,   312,   317,   320,
     325,   330,   335,   338,   342,   353,   369,   379,   385,   399,
     411,   421,   426,   432,   441,   450,   451,   455,   467,   479,
     484,   494,   504,   510,   520,   533,   543,   556,   566,   579,
     593,   603,   616,   623,   628,   634,   641,   651,   656,   661,
     676,   677,   678,   685,   692,   696,   702,   711,   717,   726,
     733,   740,   750,   755,   768,   778,   788,   798,   808,   818
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM_INT", "NUM_FLOAT", "STRING",
  "NIL_CNST", "ID", "RETURN_STM", "T_INT", "T_FLOAT", "T_LIST", "IF_STMT",
  "ELSE_STMT", "FOR_STMT", "OUTPUT_WRITE", "OUTPUT_WRITELN", "INPUT_READ",
  "'('", "')'", "'{'", "'}'", "';'", "','", "AND", "OR", "GREATER",
  "GREATER_EQ", "LESS", "LESS_EQ", "EQUAL", "NOT_EQ", "'+'", "'-'", "'*'",
  "'/'", "FILTER", "MAP", "':'", "'%'", "'?'", "'!'", "'='", "$accept",
  "program", "lst_declarations", "declaration", "func_declaration", "$@1",
  "var_declaration", "unq_declaration", "$@2", "params", "lst_parameters",
  "parameter", "lst_params", "lst_calling_params", "block_commands",
  "command", "conditional_stmt", "return_stmt", "init_variable",
  "iteration", "loop_condition", "init_stmt", "update_stmt", "output",
  "input", "func_calling", "expression", "const", "number", "type",
  "type_lst", "type_number", "operation", "binary_operation",
  "single_operation", "arith_binary", "arith_single", "lst_single",
  "lst_binary", "log_operator", "relation_operator", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    40,    41,
     123,   125,    59,    44,   273,   274,   275,   276,   277,   278,
     279,   280,    43,    45,    42,    47,   281,   282,    58,    37,
      63,    33,    61
};
# endif

#define YYPACT_NINF (-222)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-90)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      14,    34,    62,    68,    17,    25,    54,    61,   101,    58,
      23,    50,   110,  -222,    32,   123,    49,    67,    70,    30,
     100,   111,    69,    90,   128,    99,    28,  2875,   106,  4428,
    4445,  4462,  1812,   680,   119,   130,   139,   147,   162,  2875,
     680,   680,   680,   680,   680,  2914,   124,   160,  2875,  2953,
    2992,  3031,  3070,   161,  3109,  3148,  4479,  4496,  4513,  4530,
     166,  1778,  4547,    65,  4564,  4581,  1793,   485,   680,  3714,
     167,   821,   175,   533,   545,   837,   163,  4598,  4615,  4632,
    4649,  4666,   135,   169,  3187,   886,   886,   886,  3226,   900,
     984,  1125,  1141,  1190,  1204,  1288,  1429,   886,   886,  1445,
    1445,  1445,  1445,   173,   174,   145,   172,  3265,   176,   154,
     179,   183,   187,   188,   189,   190,   193,  3304,  2082,  2097,
    5573,  5583,  5593,   709,  1013,  1317,  1621,  4683,  1494,  3655,
    3694,   680,   192,   194,   201,   202,   203,   196,   146,  3343,
     204,  3382,  3421,  3460,  3499,  3538,  3694,     9,  3577,   208,
     209,    23,    23,  3616,  3755,  3775,  3795,  2116,  1494,  1494,
    1494,  1494,  1494,  3815,  3835,  3855,  3875,   752,  3895,  4703,
    3915,  3935,  1056,  4075,  4095,  4115,  3735,   821,   821,   821,
     821,   821,  4135,  4155,  4175,  4195,  2991,  4215,  5043,  4235,
    4255,  3030,   210,   211,   213,    88,   837,   837,   837,   837,
     837,   215,   216,   217,   224,   225,   226,  5603,  5613,  5623,
    5510,   886,   886,   886,   886,   886,  5633,  5643,  5653,  5663,
    5673,  5683,  1905,  1925,  2044,  4396,  1445,  1445,  1445,  1445,
    1445,  2063,  2209,  2229,  2249,  5380,  5394,   680,   229,   230,
     231,   232,   233,  2875,   790,   236,  1094,  1398,  1702,  2006,
     237,  2290,  2329,   238,   191,   254,   255,   485,  3955,  3975,
    3995,  4015,  4035,  1508,  1508,  1508,  1508,  1508,  1592,  1592,
    1592,  1592,   485,  4275,  4295,  4315,  4335,  4355,  1733,  1733,
    1733,  1733,  1733,  1749,  1749,  1749,  1749,   485,   244,   245,
     246,   247,   256,   485,  5693,  5703,  5713,  5723,  5733,   485,
    5408,  5422,  5436,  5450,  5464,   251,   821,   175,   584,   596,
     837,   253,  2368,  2407,  2446,   821,   152,   257,   258,  1360,
    1664,  1968,  5496,  1508,  1508,  1508,  1508,  1508,  2328,  2367,
    2406,  2445,  2484,  2523,  2562,  2601,  2640,  2679,  2718,  4720,
    4737,  4754,  2025,  1592,  1592,  1592,  1592,  1592,  4771,  4788,
    4805,  4822,  4839,  4856,  4873,  4890,  4907,  4924,   267,  3069,
    3108,  3147,  5524,  1733,  1733,  1733,  1733,  1733,  3186,  3225,
    3264,  3303,  3342,  3381,  3420,  3459,  3498,  3537,  3576,  5060,
    5077,  5094,  4414,  1749,  1749,  1749,  1749,  1749,  5111,  5128,
    5145,  5162,  5179,  5196,  5213,  5230,  5247,  5264,   271,   273,
     276,  2485,   277,   278,   280,   282,   283,   284,   299,  2524,
     310,  4055,   485,  2757,  2796,  2835,  2874,  2913,   485,  4941,
    4958,  4975,  4992,  5009,  4375,   485,  3615,  3654,  3693,  5537,
    5550,   485,  5281,  5298,  5315,  5332,  5349,   311,  5743,  5478,
    3655,  3655,   309,   313,   315,   317,   319,   324,   325,   326,
     327,  2563,  2602,  2641,  2680,  2719,  2758,  2797,  2952,  5026,
    5563,  5366,  3655,  2836
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -222,  -222,   270,  -222,  -222,  -222,     2,     0,    21,  -222,
     322,  -222,  -221,   227,   -30,  -126,  -124,  -108,   -88,   -79,
      51,   -61,  -222,   -69,   -64,   383,    41,   687,   991,    27,
    -222,  -222,   -26,   -15,  1295,   103,  1599,  1903,   214,  -157,
    -155
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    16,    45,    46,    17,    22,
      23,    24,   103,   104,    47,    48,    49,    50,    51,    52,
     110,    53,   150,    54,    55,    56,    57,    58,    59,   152,
      11,    12,   105,    61,    62,    63,    64,    65,    66,    97,
      98
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    60,     8,   138,   139,   246,     9,    70,     8,    76,
     266,   111,   267,    60,    -3,     1,   254,    13,    83,    21,
     148,   247,    60,     2,     3,    -2,    21,    10,   -42,   281,
     -12,   282,    -4,    10,    -8,    -8,   318,     2,     3,     2,
       3,   248,   106,    -8,    -8,   108,   151,   113,   115,   -14,
     249,   358,   167,   151,    -5,     1,   186,   -57,   186,   186,
     251,    -6,    -6,     2,     3,   252,   398,    19,   250,   -60,
      -6,    -6,   399,   -60,    20,   -61,    -9,   -59,   400,   -61,
      15,    77,    78,    79,    80,    81,   149,   -63,    25,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,    99,   100,   101,
     102,    -7,    -7,   253,    60,   140,   287,   -50,   164,   -15,
      -7,    -7,   183,   167,   183,   183,   116,   -58,   -13,    27,
      60,    18,   -13,   -11,   -11,   -16,   118,   119,   120,   245,
     -18,   244,   -11,   -11,   -18,   -10,   -10,    71,   121,   122,
     123,   124,   125,   126,   -10,   -10,   153,   -17,    72,   -34,
     -34,    26,   -34,   -34,   -34,   -34,   -34,    73,   -34,   146,
     -34,   -34,   -34,   -34,   -22,    74,   -34,   -34,   128,   164,
     169,   -13,   255,   256,   188,   -13,   188,   188,   -34,   -34,
      75,    82,   109,    84,   117,   -34,   -34,   -34,    88,   107,
     -23,   447,   127,   -20,   -40,   129,    68,   448,   130,   258,
     259,   260,   261,   262,   449,   131,   132,   133,   134,   135,
     450,   305,   136,   311,   141,   -21,   142,    60,   273,   274,
     275,   276,   277,   143,   144,   145,   147,   -41,   -39,   -55,
     -56,   169,   -54,   315,   -49,   -51,   -53,   288,   289,   290,
     291,   292,   167,   -52,   -67,   -68,   111,   306,   307,   308,
     309,   310,   294,   295,   296,   297,   298,   167,   312,   313,
     314,   316,   317,   -75,   -76,   -77,   -78,   300,   301,   302,
     303,   304,   167,   401,   409,   -69,    14,   411,   167,   -13,
     402,   172,   405,   407,   167,   191,   424,   191,   191,   410,
     437,   186,   438,   186,   186,   439,   440,   441,   164,   442,
     186,   443,   444,   445,   329,   335,   336,   337,   338,   349,
     355,   356,   357,   164,   451,   452,   246,   246,   446,   369,
     375,   376,   377,   378,   389,   395,   396,   397,   164,   -40,
     -48,   453,   247,   247,   164,   454,   463,   455,   246,   456,
     164,   457,   172,   458,   459,   460,   461,   183,    28,   183,
     183,   408,   248,   248,   247,   137,   183,     0,   403,     0,
     169,   249,   249,     0,   413,   414,   415,   416,   417,     0,
       0,   251,   251,     0,   248,   169,   252,   252,     0,   250,
     250,     0,     0,   249,   419,   420,   421,   422,   423,     0,
     169,     0,     0,   251,     0,     0,   169,   167,   252,     0,
       0,   250,   169,   167,   426,   427,   428,   429,   430,   188,
     167,   188,   188,     0,   253,   253,   167,     0,   188,     0,
       0,     0,     0,     0,   432,   433,   434,   435,   436,     0,
       0,     0,     0,     0,     0,     0,   253,     0,     0,     0,
     245,   245,   244,   244,     0,     0,     0,     0,     0,     0,
     163,     0,     0,   164,   182,     0,   182,   182,   201,   164,
       0,     0,   245,     0,   244,     0,   164,     0,   216,   216,
     216,   172,   164,     0,     0,     0,     0,     0,     0,     0,
     216,   216,   231,   231,   231,   231,   172,     0,   154,   155,
       0,   156,   157,     0,     0,     0,     0,     0,     0,     0,
       0,   172,     0,     0,   -19,     0,     0,   172,     0,     0,
       0,   163,     0,   172,     0,   169,     0,   158,   159,     0,
     191,   169,   191,   191,   160,   161,   162,     0,   169,   191,
       0,     0,     0,     0,   169,     0,   173,   174,   112,   175,
     176,   163,   163,   163,   163,   163,     0,     0,   173,   174,
     114,   175,   176,     0,     0,     0,     0,     0,     0,     0,
     182,   182,   182,   182,   182,   177,   178,     0,     0,     0,
       0,     0,   179,   180,   181,     0,     0,   177,   178,   201,
     201,   201,   201,   201,   179,   180,   181,   173,   174,   404,
     175,   176,     0,     0,   216,   216,   216,   216,   216,   173,
     174,   406,   175,   176,     0,     0,     0,     0,     0,   231,
     231,   231,   231,   231,     0,     0,   177,   178,     0,     0,
       0,     0,     0,   179,   180,   181,   172,     0,   177,   178,
       0,     0,   172,     0,     0,   179,   180,   181,     0,   172,
     163,     0,     0,     0,     0,   172,   328,   328,   328,   328,
     328,   348,   348,   348,   348,   163,     0,     0,     0,     0,
       0,   368,   368,   368,   368,   368,   388,   388,   388,   388,
     163,     0,     0,     0,     0,     0,   163,     0,     0,     0,
       0,     0,   163,    29,    30,     0,    31,    69,     0,   182,
       0,   182,   182,   201,     0,     0,     0,     0,   182,     0,
       0,     0,     0,     0,     0,     0,   328,   328,   328,   328,
     328,     0,    40,    41,     0,     0,     0,     0,     0,    42,
      43,    44,     0,     0,     0,     0,   348,   348,   348,   348,
     348,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,     0,   368,   368,   368,   368,
     368,     0,     0,     0,   165,     0,     0,     0,   184,     0,
     184,   184,   202,     0,     0,     0,   388,   388,   388,   388,
     388,   -62,   217,   217,   217,   -62,    89,    90,    91,    92,
      93,    94,    95,    96,   217,   217,   232,   232,   232,   232,
       0,     0,     0,   -25,   -25,   163,   -25,   -25,   -25,   -25,
     -25,   163,   -25,   -25,   -25,   -25,   -25,   -25,   163,     0,
     -25,   -25,     0,     0,   163,   165,     0,     0,     0,     0,
       0,     0,   -25,   -25,   173,   174,     0,   175,   176,   -25,
     -25,   -25,     0,     0,     0,     0,     0,     0,     0,     0,
     192,   193,     0,   194,   195,   165,   165,   165,   165,   165,
       0,     0,     0,   177,   178,     0,     0,     0,     0,     0,
     179,   180,   181,     0,   184,   184,   184,   184,   184,   196,
     197,     0,     0,     0,     0,     0,   198,   199,   200,     0,
       0,     0,     0,   202,   202,   202,   202,   202,     0,   207,
     208,     0,   209,   210,     0,     0,     0,     0,   217,   217,
     217,   217,   217,   -82,   -82,     0,   -82,   -82,     0,     0,
       0,     0,     0,   232,   232,   232,   232,   232,   211,   212,
       0,     0,     0,     0,     0,   213,   214,   215,     0,     0,
       0,     0,   -82,   -82,     0,     0,     0,     0,     0,   -82,
     -82,   -82,     0,     0,   165,     0,     0,     0,     0,     0,
     330,   330,   330,   330,   330,   350,   350,   350,   350,   165,
       0,     0,     0,     0,     0,   370,   370,   370,   370,   370,
     390,   390,   390,   390,   165,     0,     0,     0,     0,     0,
     165,     0,     0,     0,     0,     0,   165,   -83,   -83,     0,
     -83,   -83,     0,   184,     0,   184,   184,   202,     0,     0,
       0,     0,   184,     0,     0,     0,     0,     0,     0,     0,
     330,   330,   330,   330,   330,     0,   -83,   -83,     0,     0,
       0,     0,     0,   -83,   -83,   -83,     0,     0,     0,     0,
     350,   350,   350,   350,   350,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,
     370,   370,   370,   370,   370,     0,     0,     0,   166,     0,
       0,     0,   185,     0,   185,   185,   203,     0,     0,     0,
     390,   390,   390,   390,   390,   -64,   218,   218,   218,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   218,   218,
     233,   233,   233,   233,     0,     0,     0,   -26,   -26,   165,
     -26,   -26,   -26,   -26,   -26,   165,   -26,   -26,   -26,   -26,
     -26,   -26,   165,     0,   -26,   -26,     0,     0,   165,   166,
       0,     0,     0,     0,     0,     0,   -26,   -26,   -84,   -84,
       0,   -84,   -84,   -26,   -26,   -26,     0,     0,     0,     0,
       0,     0,     0,     0,   -85,   -85,     0,   -85,   -85,   166,
     166,   166,   166,   166,     0,     0,     0,   -84,   -84,     0,
       0,     0,     0,     0,   -84,   -84,   -84,     0,   185,   185,
     185,   185,   185,   -85,   -85,     0,     0,     0,     0,     0,
     -85,   -85,   -85,     0,     0,     0,     0,   203,   203,   203,
     203,   203,     0,   -86,   -86,     0,   -86,   -86,     0,     0,
       0,     0,   218,   218,   218,   218,   218,   -87,   -87,     0,
     -87,   -87,     0,     0,     0,     0,     0,   233,   233,   233,
     233,   233,   -86,   -86,     0,     0,     0,     0,     0,   -86,
     -86,   -86,     0,     0,     0,     0,   -87,   -87,     0,     0,
       0,     0,     0,   -87,   -87,   -87,     0,     0,   166,     0,
       0,     0,     0,     0,   331,   331,   331,   331,   331,   351,
     351,   351,   351,   166,     0,     0,     0,     0,     0,   371,
     371,   371,   371,   371,   391,   391,   391,   391,   166,     0,
       0,     0,     0,     0,   166,     0,     0,     0,     0,     0,
     166,   -88,   -88,     0,   -88,   -88,     0,   185,     0,   185,
     185,   203,     0,     0,     0,     0,   185,     0,     0,     0,
       0,     0,     0,     0,   331,   331,   331,   331,   331,     0,
     -88,   -88,     0,     0,     0,     0,     0,   -88,   -88,   -88,
       0,     0,     0,     0,   351,   351,   351,   351,   351,   -72,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,   371,   371,   371,   371,   371,     0,
       0,     0,   168,     0,     0,     0,   187,     0,   187,   187,
     204,     0,     0,     0,   391,   391,   391,   391,   391,   -55,
     219,   219,   219,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   219,   219,   234,   234,   234,   234,     0,     0,
       0,   -27,   -27,   166,   -27,   -27,   -27,   -27,   -27,   166,
     -27,   -27,   -27,   -27,   -27,   -27,   166,     0,   -27,   -27,
       0,     0,   166,   168,     0,     0,     0,     0,     0,     0,
     -27,   -27,   -89,   -89,     0,   -89,   -89,   -27,   -27,   -27,
       0,     0,     0,     0,     0,     0,     0,     0,   222,   223,
       0,   224,   225,   168,   168,   168,   168,   168,     0,     0,
       0,   -89,   -89,     0,     0,     0,     0,     0,   -89,   -89,
     -89,     0,   187,   187,   187,   187,   187,   226,   227,     0,
       0,     0,     0,     0,   228,   229,   230,     0,     0,     0,
       0,   204,   204,   204,   204,   204,     0,   154,   155,     0,
     156,   157,     0,     0,     0,     0,   219,   219,   219,   219,
     219,   319,   320,     0,   321,   322,     0,     0,     0,     0,
       0,   234,   234,   234,   234,   234,   158,   159,     0,     0,
       0,     0,     0,   160,   161,   162,     0,     0,     0,     0,
     323,   324,     0,     0,     0,     0,     0,   325,   326,   327,
       0,     0,   168,     0,     0,     0,     0,     0,   332,   332,
     332,   332,   332,   352,   352,   352,   352,   168,     0,     0,
       0,     0,     0,   372,   372,   372,   372,   372,   392,   392,
     392,   392,   168,     0,     0,     0,     0,     0,   168,     0,
       0,     0,     0,     0,   168,   339,   340,     0,   341,   342,
       0,   187,     0,   187,   187,   204,     0,     0,     0,     0,
     187,     0,     0,     0,     0,     0,     0,     0,   332,   332,
     332,   332,   332,     0,   343,   344,     0,     0,     0,     0,
       0,   345,   346,   347,     0,     0,     0,     0,   352,   352,
     352,   352,   352,   -73,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,   372,   372,
     372,   372,   372,     0,     0,     0,   170,     0,     0,     0,
     189,     0,   189,   189,   205,     0,     0,     0,   392,   392,
     392,   392,   392,   -56,   220,   220,   220,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   220,   220,   235,   235,
     235,   235,     0,     0,     0,   -28,   -28,   168,   -28,   -28,
     -28,   -28,   -28,   168,   -28,   -28,   -28,   -28,   -28,   -28,
     168,     0,   -28,   -28,     0,     0,   168,   170,     0,     0,
       0,     0,     0,     0,   -28,   -28,   359,   360,     0,   361,
     362,   -28,   -28,   -28,     0,     0,     0,     0,     0,     0,
       0,     0,   379,   380,     0,   381,   382,   170,   170,   170,
     170,   170,     0,     0,     0,   363,   364,     0,     0,     0,
       0,     0,   365,   366,   367,     0,   189,   189,   189,   189,
     189,   383,   384,     0,     0,     0,     0,     0,   385,   386,
     387,     0,     0,     0,     0,   205,   205,   205,   205,   205,
     -62,     0,    89,    90,    91,    92,    93,    94,    95,    96,
     220,   220,   220,   220,   220,   -64,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   235,   235,   235,   235,   235,
      67,     0,     0,     0,   -50,     0,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,     0,     0,     0,    68,     0,   170,     0,     0,     0,
       0,     0,   333,   333,   333,   333,   333,   353,   353,   353,
     353,   170,     0,     0,     0,     0,     0,   373,   373,   373,
     373,   373,   393,   393,   393,   393,   170,     0,     0,     0,
       0,     0,   170,     0,     0,     0,     0,     0,   170,     0,
       0,     0,     0,     0,     0,   189,     0,   189,   189,   205,
       0,     0,     0,     0,   189,     0,     0,     0,     0,     0,
       0,     0,   333,   333,   333,   333,   333,   -55,     0,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,     0,   353,   353,   353,   353,   353,   -56,     0,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,     0,   373,   373,   373,   373,   373,     0,     0,     0,
     171,     0,     0,     0,   190,     0,   190,   190,   206,     0,
       0,     0,   393,   393,   393,   393,   393,   -54,   221,   221,
     221,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     221,   221,   236,   236,   236,   236,     0,     0,     0,   -29,
     -29,   170,   -29,   -29,   -29,   -29,   -29,   170,   -29,   -29,
     -29,   -29,   -29,   -29,   170,     0,   -29,   -29,     0,     0,
     170,   171,     0,     0,     0,     0,     0,     0,   -29,   -29,
       0,     0,     0,   418,   -50,   -29,   -29,   -29,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   171,   171,   171,   171,   171,   -54,     0,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     190,   190,   190,   190,   190,   -49,     0,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   206,
     206,   206,   206,   206,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   221,   221,   221,   221,   221,   -80,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   236,
     236,   236,   236,   236,   257,   -50,     0,     0,     0,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,     0,     0,     0,     0,     0,
     171,     0,     0,     0,     0,     0,   334,   334,   334,   334,
     334,   354,   354,   354,   354,   171,     0,     0,     0,     0,
       0,   374,   374,   374,   374,   374,   394,   394,   394,   394,
     171,     0,     0,     0,     0,     0,   171,     0,     0,     0,
       0,     0,   171,     0,     0,     0,     0,     0,     0,   190,
       0,   190,   190,   206,     0,     0,     0,     0,   190,     0,
       0,     0,     0,     0,     0,     0,   334,   334,   334,   334,
     334,   -51,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,     0,   354,   354,   354,   354,
     354,   -53,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,     0,   374,   374,   374,   374,
     374,   -52,     0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,     0,   394,   394,   394,   394,
     394,     0,     0,   -31,   -31,     0,   -31,   -31,   -31,   -31,
     -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,
     -31,   -31,     0,     0,     0,   171,     0,     0,     0,     0,
       0,   171,   -31,   -31,     0,     0,     0,     0,   171,   -31,
     -31,   -31,   -30,   -30,   171,   -30,   -30,   -30,   -30,   -30,
       0,   -30,   -30,   -30,   -30,   -30,   -30,   -49,     0,   -30,
     -30,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
       0,   -30,   -30,     0,     0,     0,     0,     0,   -30,   -30,
     -30,   -11,   -11,     0,   -11,   -11,   -11,   -11,   -11,     0,
     -11,   -11,   -11,   -11,   -11,   -11,   -79,     0,   -11,   -11,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,
     -11,   -11,     0,     0,     0,     0,     0,   -11,   -11,   -11,
     -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -37,   -51,     0,   -37,   -37,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,   -37,
     -37,     0,     0,     0,     0,     0,   -37,   -37,   -37,   -33,
     -33,     0,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,
     -33,   -33,   -33,   -33,   -53,     0,   -33,   -33,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,     0,   -33,   -33,
       0,     0,     0,     0,     0,   -33,   -33,   -33,   -36,   -36,
       0,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   -36,   -36,   -52,     0,   -36,   -36,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,     0,   -36,   -36,     0,
       0,     0,     0,     0,   -36,   -36,   -36,   -32,   -32,     0,
     -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,
     -32,   -32,   -67,     0,   -32,   -32,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,     0,   -32,   -32,     0,     0,
       0,     0,     0,   -32,   -32,   -32,   -34,   -34,     0,   -34,
     -34,   -34,   -34,   -34,     0,   -34,   462,   -34,   -34,   -34,
     -34,   -68,     0,   -34,   -34,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,   -34,   -34,     0,     0,     0,
       0,     0,   -34,   -34,   -34,   -38,   -38,     0,   -38,   -38,
     -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,
     -80,     0,   -38,   -38,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,     0,   -38,   -38,     0,     0,     0,     0,
       0,   -38,   -38,   -38,   -45,   -45,     0,   -45,   -45,   -45,
     -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -81,
       0,   -45,   -45,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,   -45,   -45,     0,     0,     0,     0,     0,
     -45,   -45,   -45,   -43,   -43,     0,   -43,   -43,   -43,   -43,
     -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -66,     0,
     -43,   -43,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,     0,   -43,   -43,     0,     0,     0,     0,     0,   -43,
     -43,   -43,   -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,
       0,   -46,   -46,   -46,   -46,   -46,   -46,   -65,     0,   -46,
     -46,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
       0,   -46,   -46,     0,     0,     0,     0,     0,   -46,   -46,
     -46,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,     0,
     -44,   -44,   -44,   -44,   -44,   -44,   -75,     0,   -44,   -44,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,
     -44,   -44,     0,     0,     0,     0,     0,   -44,   -44,   -44,
     -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,     0,   -47,
     -47,   -47,   -47,   -47,   -47,   -76,     0,   -47,   -47,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,   -47,
     -47,     0,     0,     0,     0,     0,   -47,   -47,   -47,   -35,
     -35,     0,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,
     -35,   -35,   -35,   -35,   -77,     0,   -35,   -35,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -35,   -35,
       0,     0,     0,     0,     0,   -35,   -35,   -35,    29,    30,
       0,    31,    32,    33,     2,     3,     0,    34,     0,    35,
      36,    37,    38,   -78,     0,    39,   -24,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,    40,    41,     0,
       0,     0,     0,     0,    42,    43,    44,   -25,   -25,     0,
     -25,   -25,   -25,   -25,   -25,     0,   -25,     0,   -25,   -25,
     -25,   -25,   -69,     0,   -25,   -25,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,     0,   -25,   -25,     0,     0,
       0,     0,     0,   -25,   -25,   -25,   -26,   -26,     0,   -26,
     -26,   -26,   -26,   -26,     0,   -26,     0,   -26,   -26,   -26,
     -26,   -48,     0,   -26,   -26,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,     0,   -26,   -26,     0,     0,     0,
       0,     0,   -26,   -26,   -26,   -27,   -27,     0,   -27,   -27,
     -27,   -27,   -27,     0,   -27,     0,   -27,   -27,   -27,   -27,
     -62,     0,   -27,   -27,     0,    89,    90,    91,    92,    93,
      94,    95,    96,     0,   -27,   -27,     0,     0,     0,     0,
       0,   -27,   -27,   -27,   -28,   -28,     0,   -28,   -28,   -28,
     -28,   -28,     0,   -28,     0,   -28,   -28,   -28,   -28,   -64,
       0,   -28,   -28,     0,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,   -28,   -28,     0,     0,     0,     0,     0,
     -28,   -28,   -28,   -29,   -29,     0,   -29,   -29,   -29,   -29,
     -29,     0,   -29,     0,   -29,   -29,   -29,   -29,   -55,     0,
     -29,   -29,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,     0,   -29,   -29,     0,     0,     0,     0,     0,   -29,
     -29,   -29,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,
       0,   -31,     0,   -31,   -31,   -31,   -31,   -56,     0,   -31,
     -31,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
       0,   -31,   -31,     0,     0,     0,     0,     0,   -31,   -31,
     -31,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,     0,
     -30,     0,   -30,   -30,   -30,   -30,   -54,     0,   -30,   -30,
       0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,     0,
     -30,   -30,     0,     0,     0,     0,     0,   -30,   -30,   -30,
     -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,   -37,
       0,   -37,   -37,   -37,   -37,   -49,     0,   -37,   -37,     0,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,   -37,
     -37,     0,     0,     0,     0,     0,   -37,   -37,   -37,   -33,
     -33,     0,   -33,   -33,   -33,   -33,   -33,     0,   -33,     0,
     -33,   -33,   -33,   -33,   -79,     0,   -33,   -33,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -33,   -33,
       0,     0,     0,     0,     0,   -33,   -33,   -33,   -36,   -36,
       0,   -36,   -36,   -36,   -36,   -36,     0,   -36,     0,   -36,
     -36,   -36,   -36,   -51,     0,   -36,   -36,     0,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,     0,   -36,   -36,     0,
       0,     0,     0,     0,   -36,   -36,   -36,   -32,   -32,     0,
     -32,   -32,   -32,   -32,   -32,     0,   -32,     0,   -32,   -32,
     -32,   -32,   -53,     0,   -32,   -32,     0,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,     0,   -32,   -32,     0,     0,
       0,     0,     0,   -32,   -32,   -32,   -38,   -38,     0,   -38,
     -38,   -38,   -38,   -38,     0,   -38,     0,   -38,   -38,   -38,
     -38,   -52,     0,   -38,   -38,     0,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,     0,   -38,   -38,     0,     0,     0,
       0,     0,   -38,   -38,   -38,   -45,   -45,     0,   -45,   -45,
     -45,   -45,   -45,     0,   -45,     0,   -45,   -45,   -45,   -45,
     -67,     0,   -45,   -45,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,   -45,   -45,     0,     0,     0,     0,
       0,   -45,   -45,   -45,   -43,   -43,     0,   -43,   -43,   -43,
     -43,   -43,     0,   -43,     0,   -43,   -43,   -43,   -43,   -68,
       0,   -43,   -43,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,   -43,   -43,     0,     0,     0,     0,     0,
     -43,   -43,   -43,   -46,   -46,     0,   -46,   -46,   -46,   -46,
     -46,     0,   -46,     0,   -46,   -46,   -46,   -46,   -80,     0,
     -46,   -46,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,   -46,   -46,     0,     0,     0,     0,     0,   -46,
     -46,   -46,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,
       0,   -44,     0,   -44,   -44,   -44,   -44,   -81,     0,   -44,
     -44,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,   -44,   -44,     0,     0,     0,     0,     0,   -44,   -44,
     -44,   -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,     0,
     -47,     0,   -47,   -47,   -47,   -47,   -66,     0,   -47,   -47,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
     -47,   -47,     0,     0,     0,     0,     0,   -47,   -47,   -47,
     -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,     0,   -35,
       0,   -35,   -35,   -35,   -35,   -65,     0,   -35,   -35,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -35,
     -35,     0,     0,     0,     0,     0,   -35,   -35,   -35,   -11,
     -11,     0,   -11,   -11,   -11,   -11,   -11,     0,   -11,     0,
     -11,   -11,   -11,   -11,   -75,     0,   -11,   -11,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -11,   -11,
       0,     0,     0,     0,     0,   -11,   -11,   -11,    29,    30,
       0,    31,    32,   237,     2,     3,     0,   238,     0,   239,
     240,   241,   242,   -76,     0,   243,     0,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,     0,    40,    41,     0,
       0,     0,     0,     0,    42,    43,    44,    29,    30,     0,
      31,    32,    33,     2,     3,     0,    34,     0,    35,    36,
      37,    38,   -77,     0,    39,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,     0,    40,    41,     0,     0,
       0,     0,    67,    42,    43,    44,   -50,     0,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   272,   -50,     0,     0,     0,     0,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -55,     0,     0,     0,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -56,     0,     0,     0,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -54,     0,     0,     0,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -49,     0,     0,     0,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -74,     0,     0,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   263,   264,   265,   -51,     0,     0,     0,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -53,     0,     0,     0,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -52,     0,     0,     0,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -67,     0,     0,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -68,     0,     0,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -75,     0,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -76,     0,     0,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -77,     0,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -78,     0,     0,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -69,     0,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -48,     0,     0,     0,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -55,     0,     0,     0,     0,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -56,     0,     0,     0,     0,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -54,     0,     0,     0,     0,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -49,     0,     0,     0,     0,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -74,     0,     0,     0,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   278,   279,   280,   -51,     0,     0,     0,     0,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -53,     0,     0,     0,     0,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -52,     0,     0,     0,     0,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -67,     0,     0,     0,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -68,     0,     0,     0,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -75,     0,     0,     0,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -76,     0,     0,     0,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -77,     0,     0,     0,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -78,     0,     0,     0,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -69,     0,     0,     0,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -48,     0,     0,     0,     0,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   299,     0,     0,     0,   -50,     0,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   431,   -50,     0,     0,     0,     0,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -55,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -56,     0,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -54,     0,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -49,     0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -74,     0,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,    85,    86,    87,   -51,     0,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -53,     0,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -52,
       0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -68,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -77,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -69,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -48,     0,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -63,     0,     0,     0,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   268,   269,   270,   271,   -55,
       0,     0,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -56,     0,     0,     0,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -54,     0,     0,     0,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -49,     0,     0,     0,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -70,     0,     0,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -51,     0,     0,     0,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -53,     0,     0,     0,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -52,     0,
       0,     0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -67,     0,     0,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -68,     0,     0,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -71,
       0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -72,     0,     0,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -73,     0,     0,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -75,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,     0,     0,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -77,     0,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -78,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -69,     0,
       0,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -48,     0,     0,     0,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -63,     0,     0,     0,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   283,   284,   285,   286,   -55,
       0,     0,     0,     0,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -56,     0,     0,     0,
       0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -54,     0,     0,     0,     0,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -49,     0,     0,     0,     0,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -70,     0,     0,
       0,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -51,     0,     0,     0,     0,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -53,     0,     0,     0,     0,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -52,     0,
       0,     0,     0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -67,     0,     0,     0,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -68,     0,     0,     0,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -71,
       0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -72,     0,     0,     0,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -73,     0,     0,     0,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -75,     0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,     0,     0,
       0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -77,     0,     0,     0,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -78,     0,     0,     0,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -69,     0,
       0,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -48,     0,     0,     0,     0,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -76,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -69,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   412,   -50,     0,     0,     0,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   293,     0,
       0,     0,   -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   425,   -50,     0,     0,     0,     0,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -78,     0,     0,     0,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -69,
       0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -48,     0,     0,     0,     0,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -81,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -65,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -55,     0,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -56,     0,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -54,     0,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -49,     0,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -51,     0,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -53,     0,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -52,     0,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -67,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -76,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -77,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -69,     0,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -48,     0,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48
};

static const yytype_int16 yycheck[] =
{
       0,    27,     0,   129,   130,   129,     6,    33,     6,    39,
     167,    72,   167,    39,     0,     1,     7,     0,    48,    19,
     146,   129,    48,     9,    10,     0,    26,     0,    19,   186,
       7,   186,     0,     6,     0,     1,   257,     9,    10,     9,
      10,   129,    68,     9,    10,    71,    19,    73,    74,    19,
     129,   272,    67,    26,     0,     1,    71,     7,    73,    74,
     129,     0,     1,     9,    10,   129,   287,    18,   129,     7,
       9,    10,   293,    11,     7,     7,    18,     7,   299,    11,
      22,    40,    41,    42,    43,    44,   147,    22,    19,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,     0,     1,   129,   130,   131,    18,    19,    67,    19,
       9,    10,    71,   128,    73,    74,    75,     7,    18,    20,
     146,    11,    22,     0,     1,    19,    85,    86,    87,   129,
      19,   129,     9,    10,    23,     0,     1,    18,    97,    98,
      99,   100,   101,   102,     9,    10,    22,    19,    18,     3,
       4,    23,     6,     7,     8,     9,    10,    18,    12,    13,
      14,    15,    16,    17,    19,    18,    20,    21,    23,   128,
      67,    19,   151,   152,    71,    23,    73,    74,    32,    33,
      18,    21,     7,    22,    21,    39,    40,    41,    22,    22,
      21,   412,    19,    19,    22,    19,    42,   418,    19,   158,
     159,   160,   161,   162,   425,    22,    19,    19,    19,    19,
     431,   237,    19,   243,    22,    19,    22,   243,   177,   178,
     179,   180,   181,    22,    22,    22,    22,    19,    19,    19,
      19,   128,    19,    42,    19,    19,    19,   196,   197,   198,
     199,   200,   257,    19,    19,    19,   307,    18,    18,    18,
      18,    18,   211,   212,   213,   214,   215,   272,    22,    22,
      22,     7,     7,    19,    19,    19,    19,   226,   227,   228,
     229,   230,   287,    22,    21,    19,     6,    19,   293,    22,
     306,    67,   308,   309,   299,    71,    19,    73,    74,   315,
      19,   306,    19,   308,   309,    19,    19,    19,   257,    19,
     315,    19,    19,    19,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   440,   441,   440,   441,    19,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,    19,
      19,    22,   440,   441,   293,    22,   462,    22,   462,    22,
     299,    22,   128,    19,    19,    19,    19,   306,    26,   308,
     309,   310,   440,   441,   462,   128,   315,    -1,   307,    -1,
     257,   440,   441,    -1,   323,   324,   325,   326,   327,    -1,
      -1,   440,   441,    -1,   462,   272,   440,   441,    -1,   440,
     441,    -1,    -1,   462,   343,   344,   345,   346,   347,    -1,
     287,    -1,    -1,   462,    -1,    -1,   293,   412,   462,    -1,
      -1,   462,   299,   418,   363,   364,   365,   366,   367,   306,
     425,   308,   309,    -1,   440,   441,   431,    -1,   315,    -1,
      -1,    -1,    -1,    -1,   383,   384,   385,   386,   387,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   462,    -1,    -1,    -1,
     440,   441,   440,   441,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,   412,    71,    -1,    73,    74,    75,   418,
      -1,    -1,   462,    -1,   462,    -1,   425,    -1,    85,    86,
      87,   257,   431,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    98,    99,   100,   101,   102,   272,    -1,     3,     4,
      -1,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   287,    -1,    -1,    19,    -1,    -1,   293,    -1,    -1,
      -1,   128,    -1,   299,    -1,   412,    -1,    32,    33,    -1,
     306,   418,   308,   309,    39,    40,    41,    -1,   425,   315,
      -1,    -1,    -1,    -1,   431,    -1,     3,     4,     5,     6,
       7,   158,   159,   160,   161,   162,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     177,   178,   179,   180,   181,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,    32,    33,   196,
     197,   198,   199,   200,    39,    40,    41,     3,     4,     5,
       6,     7,    -1,    -1,   211,   212,   213,   214,   215,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,   226,
     227,   228,   229,   230,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,   412,    -1,    32,    33,
      -1,    -1,   418,    -1,    -1,    39,    40,    41,    -1,   425,
     257,    -1,    -1,    -1,    -1,   431,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,    -1,    -1,    -1,    -1,
      -1,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,
      -1,    -1,   299,     3,     4,    -1,     6,     7,    -1,   306,
      -1,   308,   309,   310,    -1,    -1,    -1,    -1,   315,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   323,   324,   325,   326,
     327,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    -1,    -1,   343,   344,   345,   346,
     347,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,   363,   364,   365,   366,
     367,    -1,    -1,    -1,    67,    -1,    -1,    -1,    71,    -1,
      73,    74,    75,    -1,    -1,    -1,   383,   384,   385,   386,
     387,    19,    85,    86,    87,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    97,    98,    99,   100,   101,   102,
      -1,    -1,    -1,     3,     4,   412,     6,     7,     8,     9,
      10,   418,    12,    13,    14,    15,    16,    17,   425,    -1,
      20,    21,    -1,    -1,   431,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,     3,     4,    -1,     6,     7,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,     6,     7,   158,   159,   160,   161,   162,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,   177,   178,   179,   180,   181,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    -1,    -1,   196,   197,   198,   199,   200,    -1,     3,
       4,    -1,     6,     7,    -1,    -1,    -1,    -1,   211,   212,
     213,   214,   215,     3,     4,    -1,     6,     7,    -1,    -1,
      -1,    -1,    -1,   226,   227,   228,   229,   230,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
      -1,    -1,    -1,    -1,    -1,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,    -1,    -1,    -1,    -1,    -1,
     293,    -1,    -1,    -1,    -1,    -1,   299,     3,     4,    -1,
       6,     7,    -1,   306,    -1,   308,   309,   310,    -1,    -1,
      -1,    -1,   315,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     323,   324,   325,   326,   327,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,
     343,   344,   345,   346,   347,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
     363,   364,   365,   366,   367,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    71,    -1,    73,    74,    75,    -1,    -1,    -1,
     383,   384,   385,   386,   387,    19,    85,    86,    87,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    97,    98,
      99,   100,   101,   102,    -1,    -1,    -1,     3,     4,   412,
       6,     7,     8,     9,    10,   418,    12,    13,    14,    15,
      16,    17,   425,    -1,    20,    21,    -1,    -1,   431,   128,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,     3,     4,
      -1,     6,     7,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,   158,
     159,   160,   161,   162,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    -1,   177,   178,
     179,   180,   181,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    -1,    -1,   196,   197,   198,
     199,   200,    -1,     3,     4,    -1,     6,     7,    -1,    -1,
      -1,    -1,   211,   212,   213,   214,   215,     3,     4,    -1,
       6,     7,    -1,    -1,    -1,    -1,    -1,   226,   227,   228,
     229,   230,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,   257,    -1,
      -1,    -1,    -1,    -1,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,    -1,    -1,    -1,    -1,    -1,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,    -1,
      -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,    -1,    -1,
     299,     3,     4,    -1,     6,     7,    -1,   306,    -1,   308,
     309,   310,    -1,    -1,    -1,    -1,   315,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   323,   324,   325,   326,   327,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,    -1,   343,   344,   345,   346,   347,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,   363,   364,   365,   366,   367,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    71,    -1,    73,    74,
      75,    -1,    -1,    -1,   383,   384,   385,   386,   387,    19,
      85,    86,    87,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    97,    98,    99,   100,   101,   102,    -1,    -1,
      -1,     3,     4,   412,     6,     7,     8,     9,    10,   418,
      12,    13,    14,    15,    16,    17,   425,    -1,    20,    21,
      -1,    -1,   431,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,     3,     4,    -1,     6,     7,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,     6,     7,   158,   159,   160,   161,   162,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,    -1,   177,   178,   179,   180,   181,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,
      -1,   196,   197,   198,   199,   200,    -1,     3,     4,    -1,
       6,     7,    -1,    -1,    -1,    -1,   211,   212,   213,   214,
     215,     3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,
      -1,   226,   227,   228,   229,   230,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    -1,    -1,
      -1,    -1,    -1,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,    -1,    -1,    -1,    -1,    -1,   293,    -1,
      -1,    -1,    -1,    -1,   299,     3,     4,    -1,     6,     7,
      -1,   306,    -1,   308,   309,   310,    -1,    -1,    -1,    -1,
     315,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   323,   324,
     325,   326,   327,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    -1,   343,   344,
     345,   346,   347,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,   363,   364,
     365,   366,   367,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      71,    -1,    73,    74,    75,    -1,    -1,    -1,   383,   384,
     385,   386,   387,    19,    85,    86,    87,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    97,    98,    99,   100,
     101,   102,    -1,    -1,    -1,     3,     4,   412,     6,     7,
       8,     9,    10,   418,    12,    13,    14,    15,    16,    17,
     425,    -1,    20,    21,    -1,    -1,   431,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,     3,     4,    -1,     6,
       7,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,     6,     7,   158,   159,   160,
     161,   162,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,    -1,   177,   178,   179,   180,
     181,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    -1,    -1,   196,   197,   198,   199,   200,
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
     211,   212,   213,   214,   215,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,   226,   227,   228,   229,   230,
      18,    -1,    -1,    -1,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    42,    -1,   257,    -1,    -1,    -1,
      -1,    -1,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,    -1,    -1,    -1,
      -1,    -1,   293,    -1,    -1,    -1,    -1,    -1,   299,    -1,
      -1,    -1,    -1,    -1,    -1,   306,    -1,   308,   309,   310,
      -1,    -1,    -1,    -1,   315,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   323,   324,   325,   326,   327,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,   343,   344,   345,   346,   347,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,   363,   364,   365,   366,   367,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    71,    -1,    73,    74,    75,    -1,
      -1,    -1,   383,   384,   385,   386,   387,    19,    85,    86,
      87,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      97,    98,    99,   100,   101,   102,    -1,    -1,    -1,     3,
       4,   412,     6,     7,     8,     9,    10,   418,    12,    13,
      14,    15,    16,    17,   425,    -1,    20,    21,    -1,    -1,
     431,   128,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    18,    19,    39,    40,    41,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,   158,   159,   160,   161,   162,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
     177,   178,   179,   180,   181,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,   196,
     197,   198,   199,   200,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,   211,   212,   213,   214,   215,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,   226,
     227,   228,   229,   230,    18,    19,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,
     257,    -1,    -1,    -1,    -1,    -1,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,    -1,    -1,    -1,    -1,
      -1,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,
      -1,    -1,   299,    -1,    -1,    -1,    -1,    -1,    -1,   306,
      -1,   308,   309,   310,    -1,    -1,    -1,    -1,   315,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   323,   324,   325,   326,
     327,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,   343,   344,   345,   346,
     347,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,   363,   364,   365,   366,
     367,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,   383,   384,   385,   386,
     387,    -1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    -1,    -1,
      20,    21,    -1,    -1,    -1,   412,    -1,    -1,    -1,    -1,
      -1,   418,    32,    33,    -1,    -1,    -1,    -1,   425,    39,
      40,    41,     3,     4,   431,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    19,    -1,    20,
      21,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     3,     4,    -1,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    19,    -1,    20,    21,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       3,     4,    -1,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    19,    -1,    20,    21,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     3,
       4,    -1,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    19,    -1,    20,    21,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     3,     4,
      -1,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    19,    -1,    20,    21,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     3,     4,    -1,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    19,    -1,    20,    21,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     3,     4,    -1,     6,
       7,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    19,    -1,    20,    21,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     3,     4,    -1,     6,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      19,    -1,    20,    21,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     3,     4,    -1,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    19,
      -1,    20,    21,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     3,     4,    -1,     6,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    19,    -1,
      20,    21,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     3,     4,    -1,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    19,    -1,    20,
      21,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     3,     4,    -1,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    19,    -1,    20,    21,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       3,     4,    -1,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    19,    -1,    20,    21,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     3,
       4,    -1,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    19,    -1,    20,    21,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     3,     4,
      -1,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    19,    -1,    20,    21,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     3,     4,    -1,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    19,    -1,    20,    21,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     3,     4,    -1,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    19,    -1,    20,    21,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     3,     4,    -1,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      19,    -1,    20,    21,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     3,     4,    -1,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    19,
      -1,    20,    21,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     3,     4,    -1,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    19,    -1,
      20,    21,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     3,     4,    -1,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    19,    -1,    20,
      21,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     3,     4,    -1,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    19,    -1,    20,    21,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       3,     4,    -1,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    19,    -1,    20,    21,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     3,
       4,    -1,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    19,    -1,    20,    21,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     3,     4,
      -1,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    19,    -1,    20,    21,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     3,     4,    -1,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    19,    -1,    20,    21,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     3,     4,    -1,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    19,    -1,    20,    21,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     3,     4,    -1,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      19,    -1,    20,    21,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     3,     4,    -1,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    19,
      -1,    20,    21,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     3,     4,    -1,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    19,    -1,
      20,    21,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     3,     4,    -1,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    19,    -1,    20,
      21,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     3,     4,    -1,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    19,    -1,    20,    21,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       3,     4,    -1,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    19,    -1,    20,    21,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     3,
       4,    -1,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    19,    -1,    20,    21,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     3,     4,
      -1,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    19,    -1,    20,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     3,     4,    -1,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    19,    -1,    20,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    32,    33,    -1,    -1,
      -1,    -1,    18,    39,    40,    41,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    18,    -1,    -1,    -1,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    18,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    19,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    19,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    19,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    19,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    19,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    19,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    19,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    19,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    18,    19,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    18,    -1,
      -1,    -1,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    18,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     9,    10,    44,    45,    46,    47,    49,    50,
      72,    73,    74,     0,    45,    22,    48,    51,    11,    18,
       7,    50,    52,    53,    54,    19,    23,    20,    53,     3,
       4,     6,     7,     8,    12,    14,    15,    16,    17,    20,
      32,    33,    39,    40,    41,    49,    50,    57,    58,    59,
      60,    61,    62,    64,    66,    67,    68,    69,    70,    71,
      75,    76,    77,    78,    79,    80,    81,    18,    42,     7,
      75,    18,    18,    18,    18,    18,    57,    69,    69,    69,
      69,    69,    21,    57,    22,    36,    37,    38,    22,    24,
      25,    26,    27,    28,    29,    30,    31,    82,    83,    32,
      33,    34,    35,    55,    56,    75,    75,    22,    75,     7,
      63,    64,     5,    75,     5,    75,    69,    21,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    19,    23,    19,
      19,    22,    19,    19,    19,    19,    19,    56,    58,    58,
      75,    22,    22,    22,    22,    22,    13,    22,    58,    64,
      65,    72,    72,    22,     3,     4,     6,     7,    32,    33,
      39,    40,    41,    68,    69,    70,    71,    76,    77,    78,
      79,    80,    81,     3,     4,     6,     7,    32,    33,    39,
      40,    41,    68,    69,    70,    71,    76,    77,    78,    79,
      80,    81,     3,     4,     6,     7,    32,    33,    39,    40,
      41,    68,    70,    71,    77,    79,    80,     3,     4,     6,
       7,    32,    33,    39,    40,    41,    68,    70,    71,    77,
      79,    80,     3,     4,     6,     7,    32,    33,    39,    40,
      41,    68,    70,    71,    77,    79,    80,     8,    12,    14,
      15,    16,    17,    20,    49,    50,    59,    60,    61,    62,
      64,    66,    67,    75,     7,    51,    51,    18,    69,    69,
      69,    69,    69,    36,    37,    38,    82,    83,    32,    33,
      34,    35,    18,    69,    69,    69,    69,    69,    36,    37,
      38,    82,    83,    32,    33,    34,    35,    18,    69,    69,
      69,    69,    69,    18,    69,    69,    69,    69,    69,    18,
      69,    69,    69,    69,    69,    75,    18,    18,    18,    18,
      18,    57,    22,    22,    22,    42,     7,     7,    55,     3,
       4,     6,     7,    32,    33,    39,    40,    41,    68,    69,
      70,    71,    77,    79,    80,    69,    69,    69,    69,     3,
       4,     6,     7,    32,    33,    39,    40,    41,    68,    69,
      70,    71,    77,    79,    80,    69,    69,    69,    55,     3,
       4,     6,     7,    32,    33,    39,    40,    41,    68,    69,
      70,    71,    77,    79,    80,    69,    69,    69,    69,     3,
       4,     6,     7,    32,    33,    39,    40,    41,    68,    69,
      70,    71,    77,    79,    80,    69,    69,    69,    55,    55,
      55,    22,    75,    63,     5,    75,     5,    75,    69,    21,
      75,    19,    18,    69,    69,    69,    69,    69,    18,    69,
      69,    69,    69,    69,    19,    18,    69,    69,    69,    69,
      69,    18,    69,    69,    69,    69,    69,    19,    19,    19,
      19,    19,    19,    19,    19,    19,    19,    55,    55,    55,
      55,    58,    58,    22,    22,    22,    22,    22,    19,    19,
      19,    19,    13,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    45,    45,    46,    46,    46,    48,
      47,    49,    51,    50,    52,    52,    53,    53,    54,    55,
      55,    56,    56,    57,    57,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    59,    59,    60,    61,    62,    63,
      64,    65,    65,    66,    66,    66,    66,    67,    68,    69,
      69,    69,    69,    70,    70,    71,    71,    72,    72,    73,
      74,    74,    75,    76,    76,    76,    76,    77,    77,    77,
      78,    78,    78,    78,    78,    79,    79,    80,    80,    81,
      81,    81,    82,    82,    83,    83,    83,    83,    83,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     0,
       8,     2,     0,     3,     0,     1,     3,     1,     1,     0,
       1,     3,     1,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     5,     7,     3,     2,     5,     5,
       3,     1,     0,     5,     5,     5,     5,     5,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     3,     3,     1,     1,     2,
       3,     3,     3,     3,     1,     2,     2,     2,     2,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 142 "src/syn.y"
                   {
      printf(BHBLU "program -> list_of_declarations\n\n" reset);
      // $$ = create_node(&$$, PROGRAM);
      // root = $$;
      // add_tree_node(&$$, &root);
      // add_tree_node(&$$, &$1);

      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_node(&$1);
      // printf("\n");
    }
#line 2691 "src/syn.tab.c"
    break;

  case 3:
#line 155 "src/syn.y"
                  {

    }
#line 2699 "src/syn.tab.c"
    break;

  case 4:
#line 161 "src/syn.y"
                                {
      printf(BHBLU "list_of_declarations -> declaration list_of_declarations\n\n" reset);
      // tree_node *youngest = $1.children;
      // while(youngest->sibilings) {
      //   youngest = youngest->sibilings;
      // }

      // $$ = create_node(&$$, LIST_OF_DECLARATIONS);
      // add_tree_node(&$$, &$1);
      // add_tree_node(&$$, &$2);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_node(&$1);
      // printf("$2: ");
      // print_node(&$2);
      // printf("\n");
    }
#line 2722 "src/syn.tab.c"
    break;

  case 5:
#line 179 "src/syn.y"
                 {
      // printf(BHBLU "list_of_declarations -> declaration\n\n" reset);
      // $$ = create_node(&$$, LIST_OF_DECLARATIONS);
      // add_tree_node(&$$, &$1);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_node(&$1);
    }
#line 2736 "src/syn.tab.c"
    break;

  case 6:
#line 191 "src/syn.y"
                   {
    printf(BHBLU "declaration -> func_declaration\n\n" reset);
      // $$ = create_node(&$$, DECLARATION);
      // add_tree_node(&$$, &$1);
    }
#line 2746 "src/syn.tab.c"
    break;

  case 7:
#line 196 "src/syn.y"
                    {
      printf(BHBLU "declaration -> var_declaration\n\n" reset);
      // $$ = create_node(&$$, DECLARATION);
      // add_tree_node(&$$, &$1);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_node(&$1);
      // printf("\n");
    }
#line 2761 "src/syn.tab.c"
    break;

  case 8:
#line 211 "src/syn.y"
          {
    printf(BHBLU "declaration -> error\n\n" reset);
    }
#line 2769 "src/syn.tab.c"
    break;

  case 9:
#line 217 "src/syn.y"
                  {increment_scope();}
#line 2775 "src/syn.tab.c"
    break;

  case 10:
#line 217 "src/syn.y"
                                                                             {
      printf(BHBLU "func_declaration -> unq_declaration '(' lst_parameters ')' '{' block_commands '}'\n\n" reset);
      // $$ = create_node(&$$, FUNCTION_DECLARATION);    
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$3, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$4);
      // add_tree_token_node(&$$, &$5, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$6, OPEN_CURLY_BRACKET);
      // add_tree_node(&$$, &$7);
      // add_tree_token_node(&$$, &$8, CLOSE_CURLY_BRACKET);
    }
#line 2791 "src/syn.tab.c"
    break;

  case 11:
#line 231 "src/syn.y"
                      {
    printf(BHBLU "var_declaration -> unq_declaration '';'\n\n" reset);
    // $$ = create_node(&$$, VARIABLE_DECLARATION);
    // add_tree_node(&$$, &$1);
    // add_tree_token_node(&$$, &$2, SEMICOLON);
   }
#line 2802 "src/syn.tab.c"
    break;

  case 12:
#line 240 "src/syn.y"
       {add_table_node(yytext);}
#line 2808 "src/syn.tab.c"
    break;

  case 13:
#line 240 "src/syn.y"
                                    {
    // printf(BHBLU "unq_declaration -> type <ID, %s> \n\n" reset, $3.lexeme);
    // $$ = create_node(&$$, UNIQUE_DECLARATION);
    // add_tree_node(&$$, &$1);
    // add_tree_token_node(&$$, &$3, IDENTIFIER);
   }
#line 2819 "src/syn.tab.c"
    break;

  case 14:
#line 249 "src/syn.y"
                { 
      printf(BHBLU "lst_parameters -> /* epsilon */\n\n" reset);
    }
#line 2827 "src/syn.tab.c"
    break;

  case 16:
#line 256 "src/syn.y"
                                {
    printf(BHBLU "lst_parameters -> parameter ',' lst_parameters\n\n" reset);
    // $$ = create_node(&$$, LIST_OF_PARAMETERS);
    // add_tree_node(&$$, &$1);
    // add_tree_token_node(&$$, &$2, COMMA);
    // add_tree_node(&$$, &$3);
   }
#line 2839 "src/syn.tab.c"
    break;

  case 17:
#line 263 "src/syn.y"
              {
      printf(BHBLU "lst_parameters -> parameter\n\n" reset);
      // $$ = create_node(&$$, LIST_OF_PARAMETERS);
      // add_tree_node(&$$, &$1);
    }
#line 2849 "src/syn.tab.c"
    break;

  case 18:
#line 271 "src/syn.y"
                  {
    printf(BHBLU "parameter -> unq_declaration\n\n" reset);
    // $$ = create_node(&$$, PARAMETER);
    // add_tree_node(&$$, &$1);
    }
#line 2859 "src/syn.tab.c"
    break;

  case 23:
#line 290 "src/syn.y"
                          {
    printf(BHBLU "block_commands -> command block_commands\n\n" reset);
    // $$ = create_node(&$$, BLOCK_OF_COMMANDS);
    // add_tree_node(&$$, &$1);
    // add_tree_node(&$$, &$2);
    }
#line 2870 "src/syn.tab.c"
    break;

  case 24:
#line 296 "src/syn.y"
                  {
      printf(BHBLU "block_commands -> /* epsilon */\n\n" reset);
    }
#line 2878 "src/syn.tab.c"
    break;

  case 25:
#line 302 "src/syn.y"
                  {
    printf(BHBLU "command -> var_declaration\n\n" reset);
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 2888 "src/syn.tab.c"
    break;

  case 26:
#line 307 "src/syn.y"
                     {
    printf(BHBLU "command -> conditional_stmt\n\n" reset);
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 2898 "src/syn.tab.c"
    break;

  case 27:
#line 312 "src/syn.y"
                {
    printf(BHBLU "command -> return_stmt\n\n" reset);
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 2908 "src/syn.tab.c"
    break;

  case 28:
#line 317 "src/syn.y"
                  {
    printf(BHBLU "command -> init_variable\n\n" reset);
    }
#line 2916 "src/syn.tab.c"
    break;

  case 29:
#line 320 "src/syn.y"
              {
    printf(BHBLU "command -> iteration\n\n" reset);
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 2926 "src/syn.tab.c"
    break;

  case 30:
#line 325 "src/syn.y"
          {
    printf(BHBLU "command -> input\n\n" reset);
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 2936 "src/syn.tab.c"
    break;

  case 31:
#line 330 "src/syn.y"
           {
    printf(BHBLU "command -> output\n\n" reset);
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 2946 "src/syn.tab.c"
    break;

  case 32:
#line 335 "src/syn.y"
                           {
    // $$ = $2;
    }
#line 2954 "src/syn.tab.c"
    break;

  case 34:
#line 342 "src/syn.y"
                                                  {
      printf(BHBLU "conditional_stmt -> IF_STMT '(' statement ')' '{' block_commands '}'\n\n" reset);
      // $$ = create_node(&$$, CONDITIONAL_STMT);
      // add_tree_token_node(&$$, &$1, IF);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, OPEN_CURLY_BRACKET);
      // add_tree_node(&$$, &$6);
      // add_tree_token_node(&$$, &$7, CLOSE_CURLY_BRACKET);
    }
#line 2970 "src/syn.tab.c"
    break;

  case 35:
#line 353 "src/syn.y"
                                                         {
      printf(BHBLU "conditional_stmt -> IF_STMT '(' statement ')' ELSE_STMT '{' block_commands '}'\n\n" reset);
      // $$ = create_node(&$$, CONDITIONAL_STMT);
      // add_tree_token_node(&$$, &$1, IF);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, ELSE);
      // add_tree_token_node(&$$, &$6, OPEN_CURLY_BRACKET);
      // add_tree_node(&$$, &$7);
      // add_tree_token_node(&$$, &$8, CLOSE_CURLY_BRACKET);
    }
#line 2987 "src/syn.tab.c"
    break;

  case 36:
#line 369 "src/syn.y"
                            {
    printf(BHBLU "return_stmt -> RETURN_STM statement ';'\n\n" reset);
      // $$ = create_node(&$$, RETURN_STMT);
      // add_tree_token_node(&$$, &$1, RETURN);
      // add_tree_node(&$$, &$2);
      // add_tree_token_node(&$$, &$3, SEMICOLON);
    }
#line 2999 "src/syn.tab.c"
    break;

  case 37:
#line 379 "src/syn.y"
                 {
    // printf(BHBLU "init_variable -> init_stmt ';'\n\n" reset);
    }
#line 3007 "src/syn.tab.c"
    break;

  case 38:
#line 385 "src/syn.y"
                                          {
    printf(BHBLU "FOR_STMT '(' loop_condition ')' '{' block_commands '}'\n\n" reset);
      // $$ = create_node(&$$, ITERATION_PROCESS);
      // add_tree_token_node(&$$, &$1, FOR);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, OPEN_CURLY_BRACKET);
      // add_tree_node(&$$, &$6);
      // add_tree_token_node(&$$, &$7, CLOSE_CURLY_BRACKET);
    }
#line 3023 "src/syn.tab.c"
    break;

  case 39:
#line 399 "src/syn.y"
                                          {
    printf(BHBLU "FOR_STMT '(' loop_condition ')' '{' block_commands '}'\n\n" reset);
      // $$ = create_node(&$$, LOOP_CONDITION);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, SEMICOLON);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, SEMICOLON);
      // add_tree_node(&$$, &$3);
    }
#line 3037 "src/syn.tab.c"
    break;

  case 40:
#line 411 "src/syn.y"
                    {
      // printf(BHBLU "init_stmt -> ID '=' statement\n\n" reset);
      // $$ = create_node(&$$, INITIALIZATION_STMT);
      // add_tree_token_node(&$$, &$1, IDENTIFIER);
      // add_tree_token_node(&$$, &$2, ASSIGN);
      // add_tree_node(&$$, &$3);
    }
#line 3049 "src/syn.tab.c"
    break;

  case 41:
#line 421 "src/syn.y"
            {
    printf(BHBLU "update_stmt -> statement\n\n" reset);
      // $$ = create_node(&$$, UPDATE_STMT);
      // add_tree_node(&$$, &$1);
    }
#line 3059 "src/syn.tab.c"
    break;

  case 42:
#line 426 "src/syn.y"
                  {
      printf(BHBLU "update_stmt -> /* epsilon */\n\n" reset);
   }
#line 3067 "src/syn.tab.c"
    break;

  case 43:
#line 432 "src/syn.y"
                                      {
    printf(BHBLU "output -> OUTPUT_WRITE '(' statement ')' ';'\n\n" reset);
      // $$ = create_node(&$$, INPUT_OPERATION);
      // add_tree_token_node(&$$, &$1, WRITE);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
#line 3081 "src/syn.tab.c"
    break;

  case 44:
#line 441 "src/syn.y"
                                         {
    printf(BHBLU "output -> OUTPUT_WRITELN '(' statement ')' ';'\n\n" reset);
      // $$ = create_node(&$$, INPUT_OPERATION);
      // add_tree_token_node(&$$, &$1, WRITELN);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
#line 3095 "src/syn.tab.c"
    break;

  case 45:
#line 450 "src/syn.y"
                                    {}
#line 3101 "src/syn.tab.c"
    break;

  case 46:
#line 451 "src/syn.y"
                                      {}
#line 3107 "src/syn.tab.c"
    break;

  case 47:
#line 455 "src/syn.y"
                                    {
    printf(BHBLU "input -> INPUT_READ '(' expression ')' ';'\n\n" reset);
      // $$ = create_node(&$$, OUTPUT_OPERATION);
      // add_tree_token_node(&$$, &$1, READ);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
#line 3121 "src/syn.tab.c"
    break;

  case 48:
#line 467 "src/syn.y"
                        {
    // printf(BHBLU "func_calling -> ID '(' lst_parameters ')' ';'\n\n" reset);
      // $$ = create_node(&$$, FUNCTION_CALLING);
      // add_tree_token_node(&$$, &$1, IDENTIFIER);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
#line 3135 "src/syn.tab.c"
    break;

  case 49:
#line 479 "src/syn.y"
               {
    // printf(BHBLU "command -> func_calling\n\n" reset);
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 3145 "src/syn.tab.c"
    break;

  case 50:
#line 484 "src/syn.y"
       {
    // printf(BHBLU "expression -> <ID, %s>\n\n" reset, $1.lexeme);
    // $$ = create_node(&$$, EXPRESSION);
    // add_tree_token_node(&$$, &$1, IDENTIFIER);
    // printf("$$: ");
    // print_node(&$$);
    // printf("$1: ");
    // print_token(&$1);
    // printf("\n\n");
    }
#line 3160 "src/syn.tab.c"
    break;

  case 51:
#line 494 "src/syn.y"
          {
    printf(BHBLU "expression -> const\n\n" reset);
      // $$ = create_node(&$$, EXPRESSION);
      // add_tree_node(&$$, &$1);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3175 "src/syn.tab.c"
    break;

  case 52:
#line 504 "src/syn.y"
                     {
    printf(BHBLU "operation -> single_operation\n\n" reset);
    }
#line 3183 "src/syn.tab.c"
    break;

  case 53:
#line 510 "src/syn.y"
         {
    printf(BHBLU "const -> number\n\n" reset);
      // $$ = create_node(&$$, CONSTANT);
      // add_tree_node(&$$, &$1);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3198 "src/syn.tab.c"
    break;

  case 54:
#line 520 "src/syn.y"
             {
    printf(BHBLU "const -> NIL_CNST\n\n" reset);
      // $$ = create_node(&$$, CONSTANT);
      // add_tree_token_node(&$$, &$1, NIL);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3213 "src/syn.tab.c"
    break;

  case 55:
#line 533 "src/syn.y"
          {
      printf(BHBLU "number -> <NUM_INT, %s>\n\n" reset, (yyvsp[0].token).lexeme);
      // $$ = create_node(&$$, NUMBER);
      // add_tree_token_node(&$$, &$1, NUMBER_INT);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3228 "src/syn.tab.c"
    break;

  case 56:
#line 543 "src/syn.y"
              {
      printf(BHBLU "number -> <NUM_FLOAT, %s>\n\n" reset, (yyvsp[0].token).lexeme);
      // $$ = create_node(&$$, NUMBER);
      // add_tree_token_node(&$$, &$1, NUMBER_FLOAT);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3243 "src/syn.tab.c"
    break;

  case 57:
#line 556 "src/syn.y"
            {
    printf(BHBLU "type -> type_lst\n\n" reset);
      // $$ = create_node(&$$, TYPE);
      // add_tree_node(&$$, &$1);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3258 "src/syn.tab.c"
    break;

  case 58:
#line 566 "src/syn.y"
                 {
    printf(BHBLU "type -> type_number\n\n" reset);
      // $$ = create_node(&$$, TYPE);
      // add_tree_node(&$$, &$1);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3273 "src/syn.tab.c"
    break;

  case 59:
#line 579 "src/syn.y"
                       {
    printf(BHBLU "type_lst -> type_number T_LIST \n\n" reset);
      // $$ = create_node(&$$, TYPE_LST);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, TYPE_LIST);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3289 "src/syn.tab.c"
    break;

  case 60:
#line 593 "src/syn.y"
        {
    printf(BHBLU "type_number -> T_INT\n\n" reset);
      // $$ = create_node(&$$, NUMBER);
      // add_tree_token_node(&$$, &$1, TYPE_INT);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3304 "src/syn.tab.c"
    break;

  case 61:
#line 603 "src/syn.y"
            {
    printf(BHBLU "type_number -> T_INT\n\n" reset);
      // $$ = create_node(&$$, NUMBER);
      // add_tree_token_node(&$$, &$1, TYPE_FLOAT);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3319 "src/syn.tab.c"
    break;

  case 62:
#line 616 "src/syn.y"
                   {
    printf(BHBLU "operation -> binary_operation\n\n" reset);
    }
#line 3327 "src/syn.tab.c"
    break;

  case 63:
#line 623 "src/syn.y"
               {
    printf(BHBLU "binary_operation -> arith_binary\n\n" reset);
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
    }
#line 3337 "src/syn.tab.c"
    break;

  case 64:
#line 628 "src/syn.y"
               {
    printf(BHBLU "binary_operation -> lst_binary\n\n" reset);
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
    }
#line 3347 "src/syn.tab.c"
    break;

  case 65:
#line 634 "src/syn.y"
                                                   {
    printf("arvore: %p", (yyvsp[0].node));
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
      // add_tree_node(&$$, &$2);
      // add_tree_node(&$$, &$3);
    }
#line 3359 "src/syn.tab.c"
    break;

  case 66:
#line 641 "src/syn.y"
                                             {
    printf(BHBLU "binary_operation -> expression log_operator expression\n\n" reset);
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
      // add_tree_node(&$$, &$2);
      // add_tree_node(&$$, &$3);
    }
#line 3371 "src/syn.tab.c"
    break;

  case 67:
#line 651 "src/syn.y"
               {
    printf(BHBLU "single_operation -> arith_single\n\n" reset);
      // $$ = create_node(&$$, S_OPERATION);
      // add_tree_node(&$$, &$1);
    }
#line 3381 "src/syn.tab.c"
    break;

  case 68:
#line 656 "src/syn.y"
               {
    printf(BHBLU "single_operation -> lst_single\n\n" reset);
      // $$ = create_node(&$$, S_OPERATION);
      // add_tree_node(&$$, &$1);
    }
#line 3391 "src/syn.tab.c"
    break;

  case 69:
#line 661 "src/syn.y"
                   {
    printf(BHBLU "single_operation -> '!' expression\n\n" reset);
    // printf(BHBLU "not_tail -> <NOT_OR_TAIL, %s>\n\n" reset, $1.lexeme);
    // $$ = create_node(&$$, S_OPERATION);
    // add_tree_token_node(&$$, &$1, NOT_OR_TAIL);
    // add_tree_node(&$$, &$2);
    // printf("$$: ");
    // print_node(&$$);
    // printf("$1: ");
    // print_token(&$1);
    // printf("\n\n");
  }
#line 3408 "src/syn.tab.c"
    break;

  case 72:
#line 678 "src/syn.y"
                                {
      printf(BHBLU "arith_binary -> expression '*' expression\n\n" reset);
      // $$ = create_node(&$$, ARITHMETIC_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, MULTIPLY_OP);
      // add_tree_node(&$$, &$3);
    }
#line 3420 "src/syn.tab.c"
    break;

  case 73:
#line 685 "src/syn.y"
                                {
      printf(BHBLU "arith_binary -> expression '/' expression \n\n" reset);
      //  $$ = create_node(&$$, ARITHMETIC_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, DIVISION_OP);
      // add_tree_node(&$$, &$3);
    }
#line 3432 "src/syn.tab.c"
    break;

  case 75:
#line 696 "src/syn.y"
                 {
    printf(BHBLU "arith_single -> '+' expression\n\n" reset);
    // $$ = create_node(&$$, ARITHMETIC_SINGLE);
    // add_tree_token_node(&$$, &$1, ADD_OP);
    // add_tree_node(&$$, &$2);
    }
#line 3443 "src/syn.tab.c"
    break;

  case 76:
#line 702 "src/syn.y"
                   {
      printf(BHBLU "arith_single -> '-' expression\n\n" reset);
      // $$ = create_node(&$$, ARITHMETIC_SINGLE);
      // add_tree_token_node(&$$, &$1, MINUS_OP);
      // add_tree_node(&$$, &$2);
    }
#line 3454 "src/syn.tab.c"
    break;

  case 77:
#line 711 "src/syn.y"
                 {
      printf(BHBLU "lst_single -> 'POP_OP' expression\n\n" reset);
      // $$ = create_node(&$$, LIST_SINGLE);
      // add_tree_token_node(&$$, &$1, POP_OP);
      // add_tree_node(&$$, &$2);
    }
#line 3465 "src/syn.tab.c"
    break;

  case 78:
#line 717 "src/syn.y"
                   {
      printf(BHBLU "lst_single -> '?' expression\n\n" reset);
      // $$ = create_node(&$$, LIST_SINGLE);
      // add_tree_token_node(&$$, &$1, HEAD_OP);
      // add_tree_node(&$$, &$2);
    }
#line 3476 "src/syn.tab.c"
    break;

  case 79:
#line 726 "src/syn.y"
                               {
      printf(BHBLU "lst_binary -> expression FILTER expression\n\n" reset);
      // $$ = create_node(&$$, LIST_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, FILTER_OP);

    }
#line 3488 "src/syn.tab.c"
    break;

  case 80:
#line 733 "src/syn.y"
                              {
      printf(BHBLU "lst_binary -> expression MAP expression\n\n" reset);
      // $$ = create_node(&$$, LIST_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, MAP_OP);
      // add_tree_node(&$$, &$3);
    }
#line 3500 "src/syn.tab.c"
    break;

  case 81:
#line 740 "src/syn.y"
                              {
      printf(BHBLU "lst_binary -> expression ':' expression\n\n" reset);
      // $$ = create_node(&$$, LIST_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, CONSTRUCTOR_OP);
      // add_tree_node(&$$, &$3);
    }
#line 3512 "src/syn.tab.c"
    break;

  case 82:
#line 750 "src/syn.y"
       {
      printf(BHBLU "log_operator -> AND\n\n" reset);
      // $$ = create_node(&$$, LOGIC_OPERATOR);
      // add_tree_token_node(&$$, &$1, AND_OP);
    }
#line 3522 "src/syn.tab.c"
    break;

  case 83:
#line 755 "src/syn.y"
       {
      printf(BHBLU "log_operator -> OR\n\n" reset);
      // $$ = create_node(&$$, LOGIC_OPERATOR);
      // add_tree_token_node(&$$, &$1, OR_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3537 "src/syn.tab.c"
    break;

  case 84:
#line 768 "src/syn.y"
          {
      printf(BHBLU "relation_operator -> GREATER\n\n" reset);
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, GT_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3552 "src/syn.tab.c"
    break;

  case 85:
#line 778 "src/syn.y"
               {
      printf(BHBLU "relation_operator -> GREATER_EQ\n\n" reset);
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, GE_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3567 "src/syn.tab.c"
    break;

  case 86:
#line 788 "src/syn.y"
         {
      printf(BHBLU "relation_operator -> LESS\n\n" reset);
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, LT_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3582 "src/syn.tab.c"
    break;

  case 87:
#line 798 "src/syn.y"
            {
      printf(BHBLU "relation_operator -> LESS_EQ\n\n" reset);
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, LE_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3597 "src/syn.tab.c"
    break;

  case 88:
#line 808 "src/syn.y"
          {
      printf(BHBLU "relation_operator -> EQUAL\n\n" reset);
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, EQ_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3612 "src/syn.tab.c"
    break;

  case 89:
#line 818 "src/syn.y"
           {
      printf(BHBLU "relation_operator -> NOT_EQ\n\n" reset);
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, NE_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3627 "src/syn.tab.c"
    break;


#line 3631 "src/syn.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 830 "src/syn.y"

//********** C Functions **********
int yyerror(char *s) {
  fprintf(stderr, BHRED "\nError: %s in line: %d, column: %d\n\n" reset "\n", s, yylineno, column-yyleng);
  return 0;
}

int main(int argc, char **argv) {
  ++argv, --argc;

  root_scope_tree = (t_scope_node*) malloc(sizeof(t_scope_node));
  root_scope_tree->scope_number = 0;
  scope_node_curr = root_scope_tree;

  symbol_table = create_table();
  
  if ( argc > 0 ) {
    yyin = fopen( argv[0], "r" );
    yyparse();
  }
  else
    yyin = stdin;
  
  total_lexical_errors();

  printf("\n~~~~ ABSTRACT TREE ~~~~\n\n");
  print_tree(&root, 1);

  printf("\n====================================================\n");
  printf("\t\t    SYMBOL TABLE");
  printf("\n====================================================\n");
  printf("  ID\t|  TOKENS\t\t\t|  SCOPE");
  printf("\n====================================================\n");
  print_table();
  destroy_table();
  fclose(yyin);
  yylex_destroy();
  
  return 0;
}
