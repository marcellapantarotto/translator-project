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
#line 130 "src/syn.y"

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
#define YYLAST   5810

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  461

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
       0,   140,   140,   146,   150,   159,   166,   170,   174,   178,
     178,   191,   199,   199,   207,   208,   212,   218,   225,   232,
     234,   238,   239,   243,   248,   252,   256,   260,   264,   268,
     272,   276,   280,   283,   291,   301,   316,   325,   333,   346,
     357,   366,   370,   374,   382,   390,   398,   409,   420,   431,
     435,   439,   443,   451,   455,   462,   466,   473,   477,   484,
     492,   496,   503,   507,   511,   518,   527,   531,   535,   543,
     549,   555,   561,   567,   574,   579,   587,   592,   600,   606,
     612,   621,   625,   632,   636,   640,   644,   648,   652
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
  "type_lst", "type_number", "operation", "single_operation",
  "arith_binary", "arith_single", "lst_single", "lst_binary",
  "log_operator", "relation_operator", YY_NULLPTR
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

#define YYPACT_NINF (-255)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-89)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      24,    54,    38,    45,     3,    10,    76,    78,   136,    43,
      21,    28,    64,  -255,    37,   138,    22,    36,    46,   197,
      71,    72,    63,    75,   110,    70,    11,  2746,    82,  4300,
    4317,  4334,  3585,   519,    79,    89,    95,    96,    97,  2746,
     519,   519,   519,   519,   519,  2785,    98,   111,  2746,  2824,
    2863,  2902,  2941,   109,  2980,  3019,  4351,  4368,  4385,  4402,
     651,  4419,  5252,  4436,  4453,   667,   102,   519,  3627,   929,
     537,   133,   157,   236,   559,   128,  4470,  4487,  4504,  4521,
    4538,   199,   134,  3058,   577,   577,   577,  3097,   590,   631,
     740,   837,   855,   868,   909,  1018,   577,   577,  1115,  1115,
    1115,  1115,   135,   146,  1578,   945,  3136,   441,   115,   149,
     150,   152,  2901,   169,  2940,   172,  3175,  1207,  1223,  1388,
    1501,  1666,  5266,  5280,  5294,  5308,  4555,  1133,  3526,  3565,
     519,   170,   171,   173,   188,   189,   175,   479,  3214,  1681,
    3253,  3292,  3331,  3370,  3409,  3565,     4,  3448,   196,   198,
      21,    21,  3487,  1709,  3647,  3667,  3606,  1133,  1133,  1133,
    1133,  1133,  3687,  3707,  3727,  3747,  3767,  4575,  3787,  3807,
    1651,  3947,  3967,  3987,  1426,   537,   537,   537,   537,   537,
    4007,  4027,  4047,  4067,  4087,  4915,  4107,  4127,  2979,   205,
     206,   207,    41,   559,   559,   559,   559,   559,   208,   209,
     210,   211,   212,   213,  1779,  2057,  2131,   151,   577,   577,
     577,   577,   577,  5649,  5659,  5669,  5679,  5689,  5699,  5322,
    5336,  5350,  1990,  1115,  1115,  1115,  1115,  1115,  5364,  5378,
    5392,  5406,  5420,  5434,  1146,  1146,  1187,  1187,   519,   237,
     238,   239,   240,   246,  2746,   788,   232,  1066,  1344,  1622,
    1900,   243,  2161,  2200,  5709,   217,   260,   263,   102,  3827,
    3847,  3867,  3887,  3907,  1146,  1146,  1146,  1296,  1296,  1296,
    1296,   102,  4147,  4167,  4187,  4207,  4227,  1187,  1187,  1187,
    1393,  1393,  1393,  1393,   102,   252,   259,   264,   266,   267,
     102,  5719,  5729,  5739,  5749,  5759,   102,  5448,  5462,  5476,
    5490,  5504,  1856,  1929,  2199,  1486,  1146,  1146,  1146,  1146,
    1146,  2238,  2277,  2316,  2355,  2394,  2433,  2472,  2511,  3018,
    3057,  3096,  2041,  1187,  1187,  1187,  1187,  1187,  3135,  3174,
    3213,  3252,  3291,  3330,  3369,  3408,  5769,   537,   133,   241,
     395,   559,   258,  2239,  2278,  2317,   537,   147,   265,   269,
    2550,  2589,  2628,  4592,  4609,  4626,  4268,  1296,  1296,  1296,
    1296,  1296,  4643,  4660,  4677,  4694,  4711,  4728,  4745,  4762,
    4779,  4796,   270,  3447,  3486,  3525,  4932,  4949,  4966,  4286,
    1393,  1393,  1393,  1393,  1393,  4983,  5000,  5017,  5034,  5051,
    5068,  5085,  5102,  5119,  5136,   279,   280,   281,   102,  2667,
    2706,  2745,  2784,  2823,   102,  3564,  5535,  5548,  5561,  5574,
    2356,  5587,   282,   283,  5600,   293,  5613,   298,  2395,  5626,
    3927,   102,  4813,  4830,  4847,  4864,  4881,  4247,   102,  5153,
    5170,  5187,  5204,  5221,   299,  5779,  5518,   300,   302,  3526,
    3526,   307,   308,   309,   315,   320,   327,   335,  2862,  5639,
    2434,  2473,  2512,  2551,  2590,  2629,  2668,  4898,  5238,  3526,
    2707
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
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -255,  -255,   349,  -255,  -255,  -255,     2,     0,   -77,  -255,
     330,  -255,  -254,   244,   -30,  -114,  -116,  -112,  -101,   -99,
      39,   -66,  -255,   -78,   -71,   378,    26,   656,   934,    32,
    -255,  -255,   -26,  1212,    86,  1490,  1768,  1717,   -21,    12
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    16,    45,    46,    17,    22,
      23,    24,   102,   103,    47,    48,    49,    50,    51,    52,
     109,    53,   149,    54,    55,    56,    57,    58,    59,   151,
      11,    12,   104,    61,    62,    63,    64,    65,   236,   237
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    60,     8,    13,   349,   110,     9,    69,     8,    75,
      -2,   255,   247,    60,   137,   138,   248,   372,    82,    21,
       2,     3,    60,   -42,    -3,     1,    21,   249,   -12,   250,
     395,   147,    10,     2,     3,   -57,   396,    -4,    10,    96,
      19,   105,   397,    20,   107,   -60,   112,   114,    96,   -60,
     252,   150,   -61,   -59,    -8,    -8,   -61,   253,   150,   284,
     -51,    -9,   251,    -8,    -8,    15,    76,    77,    78,    79,
      80,   -58,    97,   256,   257,    18,    -5,     1,    -6,    -6,
     148,    97,    25,   234,    96,     2,     3,    -6,    -6,   -13,
      27,   -18,   163,   -13,   -15,   -18,   181,    70,   181,   181,
     115,   -16,   254,    60,   139,   153,   154,    71,   155,   156,
     117,   118,   119,    72,    73,    74,   235,    97,    96,    60,
     152,   -19,   120,   121,   122,   123,   124,   125,   246,   -17,
     245,    83,    81,    26,   157,   158,    -7,    -7,   -11,   -11,
     108,   159,   160,   161,   437,    -7,    -7,   -11,   -11,   116,
     438,    97,   167,   163,   126,   -23,   185,    67,   185,   185,
     171,   172,   111,   173,   174,   -20,   -13,   446,   129,   290,
     -13,   131,   130,   -51,   447,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   259,   260,   261,   262,   263,   133,   175,
     176,   135,   140,   141,   -21,   142,   177,   178,   179,   -10,
     -10,   272,   273,   274,   275,   276,     2,     3,   -10,   -10,
     143,   144,   336,   167,   342,   -41,   -14,   -39,    60,   285,
     286,   287,   288,   289,   -55,   -56,   -54,   -49,   -52,   -53,
     -50,   -66,   -67,    96,   291,   292,   293,   294,   295,   171,
     172,   113,   173,   174,   171,   172,   413,   173,   174,   297,
     298,   299,   300,   301,   343,   337,   338,   339,   340,   346,
     312,   318,   329,   335,   341,   344,    97,   347,   175,   176,
     348,   -74,   110,   175,   176,   177,   178,   179,   -75,   418,
     177,   178,   179,   -76,   163,   -77,   -68,   -13,   420,   427,
     350,   351,   352,   363,   369,   370,   371,   163,   434,   435,
     436,   440,   441,   373,   374,   375,   386,   392,   393,   394,
     163,   411,   443,   414,   416,    96,   163,   445,   -48,   448,
     419,   449,   163,   247,   247,   450,   451,   248,   248,   452,
     453,   454,   399,   400,   401,   402,   403,   455,   249,   249,
     250,   250,   456,   247,   167,   460,   457,   248,    97,   405,
     406,   407,   408,   409,   458,    14,    28,   167,   249,     0,
     250,   252,   252,   181,     0,   181,   181,   417,   253,   253,
     167,   136,   181,   251,   251,     0,   167,   412,     0,     0,
       0,   252,   167,   422,   423,   424,   425,   426,   253,     0,
       0,     0,     0,   251,     0,     0,     0,     0,   171,   172,
     415,   173,   174,     0,     0,     0,   429,   430,   431,   432,
     433,     0,     0,   254,   254,     0,     0,     0,     0,     0,
       0,     0,     0,   185,   163,   185,   185,   175,   176,     0,
     163,     0,   185,   254,   177,   178,   179,     0,     0,   246,
     246,   245,   245,     0,   162,     0,     0,   163,   180,     0,
     180,   180,   198,     0,   163,     0,     0,     0,     0,   246,
     128,   245,   213,   213,   213,    88,    89,    90,    91,    92,
      93,    94,    95,     0,   213,   213,   228,   228,   228,   228,
       0,     0,   -34,   -34,   167,   -34,   -34,   -34,   -34,   -34,
     167,   -34,   145,   -34,   -34,   -34,   -34,     0,     0,   -34,
     -34,     0,     0,     0,     0,   162,     0,   167,     0,     0,
       0,   -34,   -34,     0,   167,     0,     0,     0,   -34,   -34,
     -34,     0,    29,    30,     0,    31,    68,     0,     0,     0,
       0,     0,     0,     0,     0,   162,   162,   162,   162,   162,
     171,   172,     0,   173,   174,     0,     0,     0,     0,     0,
       0,    40,    41,   180,   180,   180,   180,   180,    42,    43,
      44,     0,   189,   190,     0,   191,   192,     0,     0,   175,
     176,   198,   198,   198,   198,   198,   177,   178,   179,     0,
     204,   205,     0,   206,   207,     0,   213,   213,   213,   213,
     213,   193,   194,   -81,   -81,     0,   -81,   -81,   195,   196,
     197,   228,   228,   228,   228,   228,     0,     0,     0,   208,
     209,     0,   311,   311,   328,   328,   210,   211,   212,     0,
       0,     0,   -81,   -81,     0,     0,     0,     0,     0,   -81,
     -81,   -81,     0,     0,   -82,   -82,   162,   -82,   -82,     0,
       0,     0,   311,   311,   311,   362,   362,   362,   362,   162,
       0,     0,     0,     0,     0,   328,   328,   328,   385,   385,
     385,   385,   162,   -82,   -82,     0,     0,     0,   162,     0,
     -82,   -82,   -82,    87,   162,    88,    89,    90,    91,    92,
      93,    94,    95,     0,   311,   311,   311,   311,   311,   -63,
       0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,
       0,   328,   328,   328,   328,   328,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   180,     0,   180,   180,   198,
       0,     0,   164,     0,   180,     0,   182,     0,   182,   182,
     199,     0,     0,     0,     0,   362,   362,   362,   362,   362,
     214,   214,   214,   -83,   -83,     0,   -83,   -83,     0,     0,
       0,     0,   214,   214,   229,   229,   229,   229,   385,   385,
     385,   385,   385,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -83,   -83,     0,     0,   162,     0,     0,   -83,
     -83,   -83,   162,   164,     0,     0,     0,     0,     0,     0,
       0,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,   162,
     -25,   -25,   -25,   -25,   -25,   -25,   162,     0,   -25,   -25,
       0,     0,     0,   164,   164,   164,   164,   164,     0,     0,
     -25,   -25,     0,     0,     0,     0,     0,   -25,   -25,   -25,
       0,   182,   182,   182,   182,   182,     0,     0,     0,     0,
     -84,   -84,     0,   -84,   -84,     0,     0,     0,     0,   199,
     199,   199,   199,   199,     0,     0,     0,     0,   -85,   -85,
       0,   -85,   -85,     0,   214,   214,   214,   214,   214,   -84,
     -84,   -86,   -86,     0,   -86,   -86,   -84,   -84,   -84,   229,
     229,   229,   229,   229,     0,     0,     0,   -85,   -85,     0,
     313,   313,   330,   330,   -85,   -85,   -85,     0,     0,     0,
     -86,   -86,     0,     0,     0,     0,     0,   -86,   -86,   -86,
       0,     0,   -87,   -87,   164,   -87,   -87,     0,     0,     0,
     313,   313,   313,   364,   364,   364,   364,   164,     0,     0,
       0,     0,     0,   330,   330,   330,   387,   387,   387,   387,
     164,   -87,   -87,     0,     0,     0,   164,     0,   -87,   -87,
     -87,   106,   164,    88,    89,    90,    91,    92,    93,    94,
      95,     0,   313,   313,   313,   313,   313,   -40,     0,    88,
      89,    90,    91,    92,    93,    94,    95,     0,     0,   330,
     330,   330,   330,   330,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   182,     0,   182,   182,   199,     0,     0,
     165,     0,   182,     0,   183,     0,   183,   183,   200,     0,
       0,     0,     0,   364,   364,   364,   364,   364,   215,   215,
     215,   -88,   -88,     0,   -88,   -88,     0,     0,     0,     0,
     215,   215,   230,   230,   230,   230,   387,   387,   387,   387,
     387,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -88,   -88,     0,     0,   164,     0,     0,   -88,   -88,   -88,
     164,   165,     0,     0,     0,     0,     0,     0,     0,   -26,
     -26,     0,   -26,   -26,   -26,   -26,   -26,   164,   -26,   -26,
     -26,   -26,   -26,   -26,   164,     0,   -26,   -26,     0,     0,
       0,   165,   165,   165,   165,   165,     0,     0,   -26,   -26,
       0,     0,     0,     0,     0,   -26,   -26,   -26,     0,   183,
     183,   183,   183,   183,     0,     0,     0,     0,   219,   220,
       0,   221,   222,     0,     0,     0,     0,   200,   200,   200,
     200,   200,     0,     0,     0,     0,   153,   154,     0,   155,
     156,     0,   215,   215,   215,   215,   215,   223,   224,   302,
     303,     0,   304,   305,   225,   226,   227,   230,   230,   230,
     230,   230,     0,     0,     0,   157,   158,     0,   314,   314,
     331,   331,   159,   160,   161,     0,     0,     0,   306,   307,
       0,     0,     0,     0,     0,   308,   309,   310,     0,     0,
     319,   320,   165,   321,   322,     0,     0,     0,   314,   314,
     314,   365,   365,   365,   365,   165,     0,     0,     0,     0,
       0,   331,   331,   331,   388,   388,   388,   388,   165,   323,
     324,     0,     0,     0,   165,     0,   325,   326,   327,   -78,
     165,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
     314,   314,   314,   314,   314,   -79,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,   331,   331,   331,
     331,   331,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   183,     0,   183,   183,   200,     0,     0,   166,     0,
     183,     0,   184,     0,   184,   184,   201,     0,     0,     0,
       0,   365,   365,   365,   365,   365,   216,   216,   216,   353,
     354,     0,   355,   356,     0,     0,     0,     0,   216,   216,
     231,   231,   231,   231,   388,   388,   388,   388,   388,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   357,   358,
       0,     0,   165,     0,     0,   359,   360,   361,   165,   166,
       0,     0,     0,     0,     0,     0,     0,   -27,   -27,     0,
     -27,   -27,   -27,   -27,   -27,   165,   -27,   -27,   -27,   -27,
     -27,   -27,   165,     0,   -27,   -27,     0,     0,     0,   166,
     166,   166,   166,   166,     0,     0,   -27,   -27,     0,     0,
       0,     0,     0,   -27,   -27,   -27,     0,   184,   184,   184,
     184,   184,     0,     0,     0,     0,   376,   377,     0,   378,
     379,     0,     0,     0,     0,   201,   201,   201,   201,   201,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     216,   216,   216,   216,   216,   380,   381,     0,     0,     0,
       0,     0,   382,   383,   384,   231,   231,   231,   231,   231,
       0,     0,     0,     0,   271,   -51,   315,   315,   332,   332,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,     0,     0,     0,     0,     0,
     166,     0,     0,     0,     0,     0,   315,   315,   315,   366,
     366,   366,   366,   166,     0,     0,     0,     0,     0,   332,
     332,   332,   389,   389,   389,   389,   166,     0,     0,     0,
       0,     0,   166,     0,   398,   -51,     0,     0,   166,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   315,   315,
     315,   315,   315,   -65,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,   332,   332,   332,   332,   332,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   184,
       0,   184,   184,   201,     0,     0,   168,     0,   184,     0,
     186,     0,   186,   186,   202,     0,     0,     0,     0,   366,
     366,   366,   366,   366,   217,   217,   217,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   217,   217,   232,   232,
     232,   232,   389,   389,   389,   389,   389,   -22,     0,     0,
       0,   127,    88,    89,    90,    91,    92,    93,    94,    95,
     166,     0,     0,     0,     0,     0,   166,   168,     0,     0,
       0,     0,     0,     0,     0,   -28,   -28,     0,   -28,   -28,
     -28,   -28,   -28,   166,   -28,   -28,   -28,   -28,   -28,   -28,
     166,     0,   -28,   -28,     0,     0,     0,   168,   168,   168,
     168,   168,     0,     0,   -28,   -28,     0,     0,     0,     0,
       0,   -28,   -28,   -28,     0,   186,   186,   186,   186,   186,
     -63,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   202,   202,   202,   202,   202,   -64,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   217,   217,
     217,   217,   217,   146,     0,    88,    89,    90,    91,    92,
      93,    94,    95,   232,   232,   232,   232,   232,     0,     0,
       0,     0,     0,     0,   316,   316,   333,   333,   -55,     0,
       0,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   168,     0,
       0,     0,     0,     0,   316,   316,   316,   367,   367,   367,
     367,   168,     0,     0,     0,     0,     0,   333,   333,   333,
     390,   390,   390,   390,   168,     0,     0,     0,     0,     0,
     168,     0,     0,   170,     0,     0,   168,   188,     0,   188,
     188,     0,     0,     0,     0,     0,   316,   316,   316,   316,
     316,   -55,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,     0,     0,   333,   333,   333,   333,   333,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   186,     0,   186,
     186,   202,     0,     0,   169,     0,   186,     0,   187,     0,
     187,   187,   203,     0,   170,     0,     0,   367,   367,   367,
     367,   367,   218,   218,   218,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   218,   218,   233,   233,   233,   233,
     390,   390,   390,   390,   390,   -55,     0,     0,     0,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   168,     0,
       0,     0,     0,     0,   168,   169,     0,     0,     0,     0,
       0,     0,     0,   -29,   -29,     0,   -29,   -29,   -29,   -29,
     -29,   168,   -29,   -29,   -29,   -29,   -29,   -29,   168,     0,
     -29,   -29,     0,     0,     0,   169,   169,   169,   169,   169,
       0,     0,   -29,   -29,     0,     0,     0,     0,     0,   -29,
     -29,   -29,     0,   187,   187,   187,   187,   187,   -56,     0,
       0,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   203,   203,   203,   203,   203,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   170,   218,   218,   218,   218,
     218,     0,     0,     0,     0,     0,     0,     0,   170,     0,
       0,   233,   233,   233,   233,   233,     0,     0,     0,     0,
       0,   170,   317,   317,   334,   334,     0,   170,   296,     0,
       0,     0,   -51,   170,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   169,     0,     0,     0,
       0,     0,   317,   317,   317,   368,   368,   368,   368,   169,
       0,     0,     0,     0,     0,   334,   334,   334,   391,   391,
     391,   391,   169,     0,   188,     0,   188,   188,   169,   404,
     -51,     0,     0,   188,   169,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,     0,   317,   317,   317,   317,   317,   -56,
       0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,
       0,   334,   334,   334,   334,   334,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   187,     0,   187,   187,   203,
       0,     0,     0,     0,   187,   170,     0,     0,     0,     0,
       0,   170,     0,     0,     0,   368,   368,   368,   368,   368,
       0,     0,     0,     0,     0,     0,     0,     0,   170,     0,
       0,     0,     0,     0,     0,   170,     0,     0,   391,   391,
     391,   391,   391,   -54,     0,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,     0,   -31,   -31,   169,   -31,   -31,   -31,
     -31,   -31,   169,   -31,   -31,   -31,   -31,   -31,   -31,     0,
       0,   -31,   -31,     0,     0,     0,     0,     0,     0,   169,
       0,     0,     0,   -31,   -31,     0,   169,     0,     0,     0,
     -31,   -31,   -31,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,   -54,     0,
     -30,   -30,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,     0,   -30,   -30,     0,     0,     0,     0,     0,   -30,
     -30,   -30,   -11,   -11,     0,   -11,   -11,   -11,   -11,   -11,
       0,   -11,   -11,   -11,   -11,   -11,   -11,   -49,     0,   -11,
     -11,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
       0,   -11,   -11,     0,     0,     0,     0,     0,   -11,   -11,
     -11,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,
     -37,   -37,   -37,   -37,   -37,   -37,   -65,     0,   -37,   -37,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,
     -37,   -37,     0,     0,     0,     0,     0,   -37,   -37,   -37,
     -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,   -33,   -52,     0,   -33,   -33,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,   -33,
     -33,     0,     0,     0,     0,     0,   -33,   -33,   -33,   -36,
     -36,     0,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,
     -36,   -36,   -36,   -36,   -53,     0,   -36,   -36,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,     0,   -36,   -36,
       0,     0,     0,     0,     0,   -36,   -36,   -36,   -32,   -32,
       0,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,
     -32,   -32,   -32,   -50,     0,   -32,   -32,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,     0,   -32,   -32,     0,
       0,     0,     0,     0,   -32,   -32,   -32,   -34,   -34,     0,
     -34,   -34,   -34,   -34,   -34,     0,   -34,   459,   -34,   -34,
     -34,   -34,   -66,     0,   -34,   -34,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,     0,   -34,   -34,     0,     0,
       0,     0,     0,   -34,   -34,   -34,   -38,   -38,     0,   -38,
     -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   -67,     0,   -38,   -38,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,     0,   -38,   -38,     0,     0,     0,
       0,     0,   -38,   -38,   -38,   -45,   -45,     0,   -45,   -45,
     -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,
     -64,     0,   -45,   -45,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,   -45,   -45,     0,     0,     0,     0,
       0,   -45,   -45,   -45,   -43,   -43,     0,   -43,   -43,   -43,
     -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -78,
       0,   -43,   -43,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,   -43,   -43,     0,     0,     0,     0,     0,
     -43,   -43,   -43,   -46,   -46,     0,   -46,   -46,   -46,   -46,
     -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -79,     0,
     -46,   -46,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,     0,   -46,   -46,     0,     0,     0,     0,     0,   -46,
     -46,   -46,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,
       0,   -44,   -44,   -44,   -44,   -44,   -44,   -80,     0,   -44,
     -44,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,   -44,   -44,     0,     0,     0,     0,     0,   -44,   -44,
     -44,   -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,     0,
     -47,   -47,   -47,   -47,   -47,   -47,   -74,     0,   -47,   -47,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
     -47,   -47,     0,     0,     0,     0,     0,   -47,   -47,   -47,
     -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,     0,   -35,
     -35,   -35,   -35,   -35,   -35,   -75,     0,   -35,   -35,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -35,
     -35,     0,     0,     0,     0,     0,   -35,   -35,   -35,    29,
      30,     0,    31,    32,    33,     2,     3,     0,    34,     0,
      35,    36,    37,    38,   -76,     0,    39,   -24,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,    40,    41,
       0,     0,     0,     0,     0,    42,    43,    44,   -25,   -25,
       0,   -25,   -25,   -25,   -25,   -25,     0,   -25,     0,   -25,
     -25,   -25,   -25,   -77,     0,   -25,   -25,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,     0,   -25,   -25,     0,
       0,     0,     0,     0,   -25,   -25,   -25,   -26,   -26,     0,
     -26,   -26,   -26,   -26,   -26,     0,   -26,     0,   -26,   -26,
     -26,   -26,   -68,     0,   -26,   -26,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,     0,   -26,   -26,     0,     0,
       0,     0,     0,   -26,   -26,   -26,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -27,     0,   -27,     0,   -27,   -27,   -27,
     -27,   -48,     0,   -27,   -27,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,     0,   -27,   -27,     0,     0,     0,
       0,     0,   -27,   -27,   -27,   -28,   -28,     0,   -28,   -28,
     -28,   -28,   -28,     0,   -28,     0,   -28,   -28,   -28,   -28,
     132,     0,   -28,   -28,     0,    88,    89,    90,    91,    92,
      93,    94,    95,     0,   -28,   -28,     0,     0,     0,     0,
       0,   -28,   -28,   -28,   -29,   -29,     0,   -29,   -29,   -29,
     -29,   -29,     0,   -29,     0,   -29,   -29,   -29,   -29,   134,
       0,   -29,   -29,     0,    88,    89,    90,    91,    92,    93,
      94,    95,     0,   -29,   -29,     0,     0,     0,     0,     0,
     -29,   -29,   -29,   -31,   -31,     0,   -31,   -31,   -31,   -31,
     -31,     0,   -31,     0,   -31,   -31,   -31,   -31,   -63,     0,
     -31,   -31,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,     0,   -31,   -31,     0,     0,     0,     0,     0,   -31,
     -31,   -31,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,
       0,   -30,     0,   -30,   -30,   -30,   -30,   -55,     0,   -30,
     -30,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
       0,   -30,   -30,     0,     0,     0,     0,     0,   -30,   -30,
     -30,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,
     -37,     0,   -37,   -37,   -37,   -37,   -56,     0,   -37,   -37,
       0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,
     -37,   -37,     0,     0,     0,     0,     0,   -37,   -37,   -37,
     -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,     0,   -33,
       0,   -33,   -33,   -33,   -33,   -54,     0,   -33,   -33,     0,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,     0,   -33,
     -33,     0,     0,     0,     0,     0,   -33,   -33,   -33,   -36,
     -36,     0,   -36,   -36,   -36,   -36,   -36,     0,   -36,     0,
     -36,   -36,   -36,   -36,   -49,     0,   -36,   -36,     0,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,   -36,   -36,
       0,     0,     0,     0,     0,   -36,   -36,   -36,   -32,   -32,
       0,   -32,   -32,   -32,   -32,   -32,     0,   -32,     0,   -32,
     -32,   -32,   -32,   -65,     0,   -32,   -32,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,     0,   -32,   -32,     0,
       0,     0,     0,     0,   -32,   -32,   -32,   -38,   -38,     0,
     -38,   -38,   -38,   -38,   -38,     0,   -38,     0,   -38,   -38,
     -38,   -38,   -52,     0,   -38,   -38,     0,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,     0,   -38,   -38,     0,     0,
       0,     0,     0,   -38,   -38,   -38,   -45,   -45,     0,   -45,
     -45,   -45,   -45,   -45,     0,   -45,     0,   -45,   -45,   -45,
     -45,   -53,     0,   -45,   -45,     0,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,     0,   -45,   -45,     0,     0,     0,
       0,     0,   -45,   -45,   -45,   -43,   -43,     0,   -43,   -43,
     -43,   -43,   -43,     0,   -43,     0,   -43,   -43,   -43,   -43,
     -50,     0,   -43,   -43,     0,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,     0,   -43,   -43,     0,     0,     0,     0,
       0,   -43,   -43,   -43,   -46,   -46,     0,   -46,   -46,   -46,
     -46,   -46,     0,   -46,     0,   -46,   -46,   -46,   -46,   -66,
       0,   -46,   -46,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,   -46,   -46,     0,     0,     0,     0,     0,
     -46,   -46,   -46,   -44,   -44,     0,   -44,   -44,   -44,   -44,
     -44,     0,   -44,     0,   -44,   -44,   -44,   -44,   -67,     0,
     -44,   -44,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,     0,   -44,   -44,     0,     0,     0,     0,     0,   -44,
     -44,   -44,   -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,
       0,   -47,     0,   -47,   -47,   -47,   -47,   -64,     0,   -47,
     -47,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,   -47,   -47,     0,     0,     0,     0,     0,   -47,   -47,
     -47,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,     0,
     -35,     0,   -35,   -35,   -35,   -35,   -78,     0,   -35,   -35,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
     -35,   -35,     0,     0,     0,     0,     0,   -35,   -35,   -35,
     -11,   -11,     0,   -11,   -11,   -11,   -11,   -11,     0,   -11,
       0,   -11,   -11,   -11,   -11,   -79,     0,   -11,   -11,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -11,
     -11,     0,     0,     0,     0,     0,   -11,   -11,   -11,    29,
      30,     0,    31,    32,   238,     2,     3,     0,   239,     0,
     240,   241,   242,   243,   -80,     0,   244,     0,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,    40,    41,
       0,     0,     0,     0,     0,    42,    43,    44,    29,    30,
       0,    31,    32,    33,     2,     3,     0,    34,     0,    35,
      36,    37,    38,   -74,     0,    39,     0,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,     0,    40,    41,     0,
       0,     0,     0,    66,    42,    43,    44,   -51,     0,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   258,   -51,     0,    67,     0,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,    66,     0,     0,     0,   -51,
       0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -56,     0,     0,     0,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -54,     0,     0,     0,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -49,     0,     0,     0,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -73,     0,     0,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   264,   265,   266,   -52,     0,     0,     0,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -53,     0,     0,     0,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -50,     0,     0,     0,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -66,     0,     0,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -67,     0,     0,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -74,     0,     0,     0,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -75,     0,     0,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -76,     0,     0,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -77,     0,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -68,     0,     0,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -48,     0,     0,     0,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -55,     0,     0,     0,
       0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -56,     0,     0,     0,
       0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -54,     0,     0,     0,
       0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -49,     0,     0,     0,
       0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -73,     0,     0,     0,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   277,   278,   279,   -52,     0,     0,     0,
       0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -53,     0,     0,     0,
       0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -50,     0,     0,     0,
       0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -66,     0,     0,     0,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -67,     0,     0,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -74,     0,     0,     0,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -75,     0,     0,     0,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -76,     0,     0,     0,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -77,     0,     0,     0,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -68,     0,     0,     0,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -48,     0,     0,     0,
       0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   421,   -51,     0,     0,
       0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   428,   -51,     0,     0,     0,     0,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -55,     0,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -56,
       0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -54,     0,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -49,     0,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,    84,    85,    86,   -52,     0,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -53,     0,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -66,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -67,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -76,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -48,     0,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -62,     0,     0,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   267,   268,   269,
     270,   -55,     0,     0,     0,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -56,     0,
       0,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -54,     0,     0,     0,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -49,     0,     0,     0,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -69,
       0,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -52,     0,     0,     0,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -53,     0,     0,     0,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -50,     0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -66,     0,     0,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -67,     0,     0,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -70,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -71,     0,
       0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -72,     0,     0,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -74,     0,     0,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -75,
       0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -76,     0,     0,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -77,     0,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -68,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -48,     0,     0,
       0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -62,     0,     0,     0,     0,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   280,   281,   282,
     283,   -55,     0,     0,     0,     0,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -56,     0,
       0,     0,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -54,     0,     0,     0,     0,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -49,     0,     0,     0,     0,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -69,
       0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -52,     0,     0,     0,
       0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -53,     0,     0,     0,     0,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -50,     0,     0,     0,     0,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -66,     0,     0,
       0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -67,     0,     0,     0,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -70,     0,     0,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -71,     0,
       0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -72,     0,     0,     0,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -74,     0,     0,     0,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -75,
       0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -76,     0,     0,     0,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -77,     0,     0,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -68,     0,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -48,     0,     0,
       0,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -62,     0,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,    98,    99,   100,   101,   -69,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -55,     0,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -56,     0,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -54,     0,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -49,     0,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -52,     0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -53,     0,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -50,     0,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -75,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -75,     0,     0,     0,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,     0,     0,
       0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -77,     0,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -68,     0,     0,     0,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   439,     0,     0,     0,
       0,    88,    89,    90,    91,    92,    93,    94,    95,   442,
       0,     0,     0,     0,    88,    89,    90,    91,    92,    93,
      94,    95,   444,     0,     0,     0,     0,    88,    89,    90,
      91,    92,    93,    94,    95,   -40,     0,     0,     0,     0,
      88,    89,    90,    91,    92,    93,    94,    95,   -48,     0,
       0,     0,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -49,     0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -52,     0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -53,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   345,     0,    88,    89,    90,    91,    92,    93,    94,
      95,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   410,     0,    88,    89,    90,    91,    92,    93,    94,
      95,   -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48
};

static const yytype_int16 yycheck[] =
{
       0,    27,     0,     0,   258,    71,     6,    33,     6,    39,
       0,     7,   128,    39,   128,   129,   128,   271,    48,    19,
       9,    10,    48,    19,     0,     1,    26,   128,     7,   128,
     284,   145,     0,     9,    10,     7,   290,     0,     6,    60,
      18,    67,   296,     7,    70,     7,    72,    73,    69,    11,
     128,    19,     7,     7,     0,     1,    11,   128,    26,    18,
      19,    18,   128,     9,    10,    22,    40,    41,    42,    43,
      44,     7,    60,   150,   151,    11,     0,     1,     0,     1,
     146,    69,    19,   104,   105,     9,    10,     9,    10,    18,
      20,    19,    66,    22,    19,    23,    70,    18,    72,    73,
      74,    19,   128,   129,   130,     3,     4,    18,     6,     7,
      84,    85,    86,    18,    18,    18,   104,   105,   139,   145,
      22,    19,    96,    97,    98,    99,   100,   101,   128,    19,
     128,    22,    21,    23,    32,    33,     0,     1,     0,     1,
       7,    39,    40,    41,   398,     9,    10,     9,    10,    21,
     404,   139,    66,   127,    19,    21,    70,    42,    72,    73,
       3,     4,     5,     6,     7,    19,    19,   421,    19,    18,
      23,    19,    22,    22,   428,    24,    25,    26,    27,    28,
      29,    30,    31,   157,   158,   159,   160,   161,    19,    32,
      33,    19,    22,    22,    19,    22,    39,    40,    41,     0,
       1,   175,   176,   177,   178,   179,     9,    10,     9,    10,
      22,    22,   238,   127,   244,    19,    19,    19,   244,   193,
     194,   195,   196,   197,    19,    19,    19,    19,    19,    19,
      19,    19,    19,   254,   208,   209,   210,   211,   212,     3,
       4,     5,     6,     7,     3,     4,     5,     6,     7,   223,
     224,   225,   226,   227,    22,    18,    18,    18,    18,    42,
     234,   235,   236,   237,    18,    22,   254,     7,    32,    33,
       7,    19,   338,    32,    33,    39,    40,    41,    19,    21,
      39,    40,    41,    19,   258,    19,    19,    22,    19,    19,
     264,   265,   266,   267,   268,   269,   270,   271,    19,    19,
      19,    19,    19,   277,   278,   279,   280,   281,   282,   283,
     284,   337,    19,   339,   340,   336,   290,    19,    19,    19,
     346,    19,   296,   439,   440,   439,   440,   439,   440,    22,
      22,    22,   306,   307,   308,   309,   310,    22,   439,   440,
     439,   440,    22,   459,   258,   459,    19,   459,   336,   323,
     324,   325,   326,   327,    19,     6,    26,   271,   459,    -1,
     459,   439,   440,   337,    -1,   339,   340,   341,   439,   440,
     284,   127,   346,   439,   440,    -1,   290,   338,    -1,    -1,
      -1,   459,   296,   357,   358,   359,   360,   361,   459,    -1,
      -1,    -1,    -1,   459,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,   380,   381,   382,   383,
     384,    -1,    -1,   439,   440,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   337,   398,   339,   340,    32,    33,    -1,
     404,    -1,   346,   459,    39,    40,    41,    -1,    -1,   439,
     440,   439,   440,    -1,    66,    -1,    -1,   421,    70,    -1,
      72,    73,    74,    -1,   428,    -1,    -1,    -1,    -1,   459,
      19,   459,    84,    85,    86,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    96,    97,    98,    99,   100,   101,
      -1,    -1,     3,     4,   398,     6,     7,     8,     9,    10,
     404,    12,    13,    14,    15,    16,    17,    -1,    -1,    20,
      21,    -1,    -1,    -1,    -1,   127,    -1,   421,    -1,    -1,
      -1,    32,    33,    -1,   428,    -1,    -1,    -1,    39,    40,
      41,    -1,     3,     4,    -1,     6,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   157,   158,   159,   160,   161,
       3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,   175,   176,   177,   178,   179,    39,    40,
      41,    -1,     3,     4,    -1,     6,     7,    -1,    -1,    32,
      33,   193,   194,   195,   196,   197,    39,    40,    41,    -1,
       3,     4,    -1,     6,     7,    -1,   208,   209,   210,   211,
     212,    32,    33,     3,     4,    -1,     6,     7,    39,    40,
      41,   223,   224,   225,   226,   227,    -1,    -1,    -1,    32,
      33,    -1,   234,   235,   236,   237,    39,    40,    41,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,     3,     4,   258,     6,     7,    -1,
      -1,    -1,   264,   265,   266,   267,   268,   269,   270,   271,
      -1,    -1,    -1,    -1,    -1,   277,   278,   279,   280,   281,
     282,   283,   284,    32,    33,    -1,    -1,    -1,   290,    -1,
      39,    40,    41,    22,   296,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,   306,   307,   308,   309,   310,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,   323,   324,   325,   326,   327,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   337,    -1,   339,   340,   341,
      -1,    -1,    66,    -1,   346,    -1,    70,    -1,    72,    73,
      74,    -1,    -1,    -1,    -1,   357,   358,   359,   360,   361,
      84,    85,    86,     3,     4,    -1,     6,     7,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,   101,   380,   381,
     382,   383,   384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,   398,    -1,    -1,    39,
      40,    41,   404,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,     6,     7,     8,     9,    10,   421,
      12,    13,    14,    15,    16,    17,   428,    -1,    20,    21,
      -1,    -1,    -1,   157,   158,   159,   160,   161,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,   175,   176,   177,   178,   179,    -1,    -1,    -1,    -1,
       3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,   193,
     194,   195,   196,   197,    -1,    -1,    -1,    -1,     3,     4,
      -1,     6,     7,    -1,   208,   209,   210,   211,   212,    32,
      33,     3,     4,    -1,     6,     7,    39,    40,    41,   223,
     224,   225,   226,   227,    -1,    -1,    -1,    32,    33,    -1,
     234,   235,   236,   237,    39,    40,    41,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,     3,     4,   258,     6,     7,    -1,    -1,    -1,
     264,   265,   266,   267,   268,   269,   270,   271,    -1,    -1,
      -1,    -1,    -1,   277,   278,   279,   280,   281,   282,   283,
     284,    32,    33,    -1,    -1,    -1,   290,    -1,    39,    40,
      41,    22,   296,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,   306,   307,   308,   309,   310,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,   323,
     324,   325,   326,   327,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   337,    -1,   339,   340,   341,    -1,    -1,
      66,    -1,   346,    -1,    70,    -1,    72,    73,    74,    -1,
      -1,    -1,    -1,   357,   358,   359,   360,   361,    84,    85,
      86,     3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,   380,   381,   382,   383,
     384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,   398,    -1,    -1,    39,    40,    41,
     404,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,     6,     7,     8,     9,    10,   421,    12,    13,
      14,    15,    16,    17,   428,    -1,    20,    21,    -1,    -1,
      -1,   157,   158,   159,   160,   161,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,   175,
     176,   177,   178,   179,    -1,    -1,    -1,    -1,     3,     4,
      -1,     6,     7,    -1,    -1,    -1,    -1,   193,   194,   195,
     196,   197,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,
       7,    -1,   208,   209,   210,   211,   212,    32,    33,     3,
       4,    -1,     6,     7,    39,    40,    41,   223,   224,   225,
     226,   227,    -1,    -1,    -1,    32,    33,    -1,   234,   235,
     236,   237,    39,    40,    41,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
       3,     4,   258,     6,     7,    -1,    -1,    -1,   264,   265,
     266,   267,   268,   269,   270,   271,    -1,    -1,    -1,    -1,
      -1,   277,   278,   279,   280,   281,   282,   283,   284,    32,
      33,    -1,    -1,    -1,   290,    -1,    39,    40,    41,    22,
     296,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
     306,   307,   308,   309,   310,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,   323,   324,   325,
     326,   327,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   337,    -1,   339,   340,   341,    -1,    -1,    66,    -1,
     346,    -1,    70,    -1,    72,    73,    74,    -1,    -1,    -1,
      -1,   357,   358,   359,   360,   361,    84,    85,    86,     3,
       4,    -1,     6,     7,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,   380,   381,   382,   383,   384,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,   398,    -1,    -1,    39,    40,    41,   404,   127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,
       6,     7,     8,     9,    10,   421,    12,    13,    14,    15,
      16,    17,   428,    -1,    20,    21,    -1,    -1,    -1,   157,
     158,   159,   160,   161,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,   175,   176,   177,
     178,   179,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,
       7,    -1,    -1,    -1,    -1,   193,   194,   195,   196,   197,
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
     208,   209,   210,   211,   212,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,    18,    19,   234,   235,   236,   237,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,
     258,    -1,    -1,    -1,    -1,    -1,   264,   265,   266,   267,
     268,   269,   270,   271,    -1,    -1,    -1,    -1,    -1,   277,
     278,   279,   280,   281,   282,   283,   284,    -1,    -1,    -1,
      -1,    -1,   290,    -1,    18,    19,    -1,    -1,   296,    23,
      24,    25,    26,    27,    28,    29,    30,    31,   306,   307,
     308,   309,   310,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,   323,   324,   325,   326,   327,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   337,
      -1,   339,   340,   341,    -1,    -1,    66,    -1,   346,    -1,
      70,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,   357,
     358,   359,   360,   361,    84,    85,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,   380,   381,   382,   383,   384,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
     398,    -1,    -1,    -1,    -1,    -1,   404,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    10,   421,    12,    13,    14,    15,    16,    17,
     428,    -1,    20,    21,    -1,    -1,    -1,   157,   158,   159,
     160,   161,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,   175,   176,   177,   178,   179,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,   193,   194,   195,   196,   197,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,   208,   209,
     210,   211,   212,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,   223,   224,   225,   226,   227,    -1,    -1,
      -1,    -1,    -1,    -1,   234,   235,   236,   237,    19,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,   258,    -1,
      -1,    -1,    -1,    -1,   264,   265,   266,   267,   268,   269,
     270,   271,    -1,    -1,    -1,    -1,    -1,   277,   278,   279,
     280,   281,   282,   283,   284,    -1,    -1,    -1,    -1,    -1,
     290,    -1,    -1,    66,    -1,    -1,   296,    70,    -1,    72,
      73,    -1,    -1,    -1,    -1,    -1,   306,   307,   308,   309,
     310,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,   323,   324,   325,   326,   327,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   337,    -1,   339,
     340,   341,    -1,    -1,    66,    -1,   346,    -1,    70,    -1,
      72,    73,    74,    -1,   127,    -1,    -1,   357,   358,   359,
     360,   361,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
     380,   381,   382,   383,   384,    19,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,   398,    -1,
      -1,    -1,    -1,    -1,   404,   127,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      10,   421,    12,    13,    14,    15,    16,    17,   428,    -1,
      20,    21,    -1,    -1,    -1,   157,   158,   159,   160,   161,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,   175,   176,   177,   178,   179,    19,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,   193,   194,   195,   196,   197,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   258,   208,   209,   210,   211,
     212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   271,    -1,
      -1,   223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,
      -1,   284,   234,   235,   236,   237,    -1,   290,    18,    -1,
      -1,    -1,    22,   296,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,   258,    -1,    -1,    -1,
      -1,    -1,   264,   265,   266,   267,   268,   269,   270,   271,
      -1,    -1,    -1,    -1,    -1,   277,   278,   279,   280,   281,
     282,   283,   284,    -1,   337,    -1,   339,   340,   290,    18,
      19,    -1,    -1,   346,   296,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,   306,   307,   308,   309,   310,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,   323,   324,   325,   326,   327,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   337,    -1,   339,   340,   341,
      -1,    -1,    -1,    -1,   346,   398,    -1,    -1,    -1,    -1,
      -1,   404,    -1,    -1,    -1,   357,   358,   359,   360,   361,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   421,    -1,
      -1,    -1,    -1,    -1,    -1,   428,    -1,    -1,   380,   381,
     382,   383,   384,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,     3,     4,   398,     6,     7,     8,
       9,    10,   404,    12,    13,    14,    15,    16,    17,    -1,
      -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,   421,
      -1,    -1,    -1,    32,    33,    -1,   428,    -1,    -1,    -1,
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
       4,    -1,     6,     7,     8,     9,    10,    -1,    12,    -1,
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
      14,    15,    16,    17,    19,    -1,    20,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     3,     4,
      -1,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    19,    -1,    20,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    32,    33,    -1,
      -1,    -1,    -1,    18,    39,    40,    41,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    18,    19,    -1,    42,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    18,    -1,    -1,    -1,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    18,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    18,    19,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    22,    -1,    24,    25,    26,    27,    28,    29,
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
      35,    36,    37,    38,    19,    -1,    -1,    -1,    23,    24,
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
      32,    33,    34,    35,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    22,    -1,
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
      32,    33,    34,    35,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    22,    -1,
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
      32,    33,    34,    35,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    19,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31
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
      75,    76,    77,    78,    79,    80,    18,    42,     7,    75,
      18,    18,    18,    18,    18,    57,    69,    69,    69,    69,
      69,    21,    57,    22,    36,    37,    38,    22,    24,    25,
      26,    27,    28,    29,    30,    31,    81,    82,    32,    33,
      34,    35,    55,    56,    75,    75,    22,    75,     7,    63,
      64,     5,    75,     5,    75,    69,    21,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    19,    23,    19,    19,
      22,    19,    19,    19,    19,    19,    56,    58,    58,    75,
      22,    22,    22,    22,    22,    13,    22,    58,    64,    65,
      72,    72,    22,     3,     4,     6,     7,    32,    33,    39,
      40,    41,    68,    69,    70,    71,    76,    77,    78,    79,
      80,     3,     4,     6,     7,    32,    33,    39,    40,    41,
      68,    69,    70,    71,    76,    77,    78,    79,    80,     3,
       4,     6,     7,    32,    33,    39,    40,    41,    68,    70,
      71,    76,    78,    79,     3,     4,     6,     7,    32,    33,
      39,    40,    41,    68,    70,    71,    76,    78,    79,     3,
       4,     6,     7,    32,    33,    39,    40,    41,    68,    70,
      71,    76,    78,    79,    81,    82,    81,    82,     8,    12,
      14,    15,    16,    17,    20,    49,    50,    59,    60,    61,
      62,    64,    66,    67,    75,     7,    51,    51,    18,    69,
      69,    69,    69,    69,    36,    37,    38,    32,    33,    34,
      35,    18,    69,    69,    69,    69,    69,    36,    37,    38,
      32,    33,    34,    35,    18,    69,    69,    69,    69,    69,
      18,    69,    69,    69,    69,    69,    18,    69,    69,    69,
      69,    69,     3,     4,     6,     7,    32,    33,    39,    40,
      41,    68,    69,    70,    71,    76,    78,    79,    69,     3,
       4,     6,     7,    32,    33,    39,    40,    41,    68,    69,
      70,    71,    76,    78,    79,    69,    75,    18,    18,    18,
      18,    18,    57,    22,    22,    22,    42,     7,     7,    55,
      69,    69,    69,     3,     4,     6,     7,    32,    33,    39,
      40,    41,    68,    69,    70,    71,    76,    78,    79,    69,
      69,    69,    55,    69,    69,    69,     3,     4,     6,     7,
      32,    33,    39,    40,    41,    68,    69,    70,    71,    76,
      78,    79,    69,    69,    69,    55,    55,    55,    18,    69,
      69,    69,    69,    69,    18,    69,    69,    69,    69,    69,
      22,    75,    63,     5,    75,     5,    75,    69,    21,    75,
      19,    18,    69,    69,    69,    69,    69,    19,    18,    69,
      69,    69,    69,    69,    19,    19,    19,    55,    55,    19,
      19,    19,    19,    19,    19,    19,    55,    55,    19,    19,
      58,    58,    22,    22,    22,    22,    22,    19,    19,    13,
      58
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
      74,    74,    75,    75,    75,    75,    76,    76,    76,    77,
      77,    77,    77,    77,    78,    78,    79,    79,    80,    80,
      80,    81,    81,    82,    82,    82,    82,    82,    82
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
       1,     1,     1,     1,     3,     3,     1,     1,     2,     3,
       3,     3,     3,     1,     2,     2,     2,     2,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1
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
#line 140 "src/syn.y"
                   {
      // $$ = create_node(&$$, PROGRAM);
      // root = $$;
      // add_tree_node(&$$, &root);
      // add_tree_node(&$$, &$1);
    }
#line 2690 "src/syn.tab.c"
    break;

  case 3:
#line 146 "src/syn.y"
                  { }
#line 2696 "src/syn.tab.c"
    break;

  case 4:
#line 150 "src/syn.y"
                                {
      // tree_node *youngest = $1.children;
      // while(youngest->sibilings) {
      //   youngest = youngest->sibilings;
      // }
      // $$ = create_node(&$$, LIST_OF_DECLARATIONS);
      // add_tree_node(&$$, &$1);
      // add_tree_node(&$$, &$2);
    }
#line 2710 "src/syn.tab.c"
    break;

  case 5:
#line 159 "src/syn.y"
                 {
      // $$ = create_node(&$$, LIST_OF_DECLARATIONS);
      // add_tree_node(&$$, &$1);
    }
#line 2719 "src/syn.tab.c"
    break;

  case 6:
#line 166 "src/syn.y"
                   {
      // $$ = create_node(&$$, DECLARATION);
      // add_tree_node(&$$, &$1);
    }
#line 2728 "src/syn.tab.c"
    break;

  case 7:
#line 170 "src/syn.y"
                    {
      // $$ = create_node(&$$, DECLARATION);
      // add_tree_node(&$$, &$1);
    }
#line 2737 "src/syn.tab.c"
    break;

  case 8:
#line 174 "src/syn.y"
          { }
#line 2743 "src/syn.tab.c"
    break;

  case 9:
#line 178 "src/syn.y"
                  {increment_scope();}
#line 2749 "src/syn.tab.c"
    break;

  case 10:
#line 178 "src/syn.y"
                                                                             {
      // $$ = create_node(&$$, FUNCTION_DECLARATION);    
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$3, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$4);
      // add_tree_token_node(&$$, &$5, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$6, OPEN_CURLY_BRACKET);
      // add_tree_node(&$$, &$7);
      // add_tree_token_node(&$$, &$8, CLOSE_CURLY_BRACKET);
    }
#line 2764 "src/syn.tab.c"
    break;

  case 11:
#line 191 "src/syn.y"
                      {
    // $$ = create_node(&$$, VARIABLE_DECLARATION);
    // add_tree_node(&$$, &$1);
    // add_tree_token_node(&$$, &$2, SEMICOLON);
   }
#line 2774 "src/syn.tab.c"
    break;

  case 12:
#line 199 "src/syn.y"
       {add_table_node(yytext);}
#line 2780 "src/syn.tab.c"
    break;

  case 13:
#line 199 "src/syn.y"
                                    {
    // $$ = create_node(&$$, UNIQUE_DECLARATION);
    // add_tree_node(&$$, &$1);
    // add_tree_token_node(&$$, &$3, IDENTIFIER);
   }
#line 2790 "src/syn.tab.c"
    break;

  case 14:
#line 207 "src/syn.y"
                { }
#line 2796 "src/syn.tab.c"
    break;

  case 15:
#line 208 "src/syn.y"
                   { }
#line 2802 "src/syn.tab.c"
    break;

  case 16:
#line 212 "src/syn.y"
                                {
    // $$ = create_node(&$$, LIST_OF_PARAMETERS);
    // add_tree_node(&$$, &$1);
    // add_tree_token_node(&$$, &$2, COMMA);
    // add_tree_node(&$$, &$3);
   }
#line 2813 "src/syn.tab.c"
    break;

  case 17:
#line 218 "src/syn.y"
              {
      // $$ = create_node(&$$, LIST_OF_PARAMETERS);
      // add_tree_node(&$$, &$1);
    }
#line 2822 "src/syn.tab.c"
    break;

  case 18:
#line 225 "src/syn.y"
                  {
    // $$ = create_node(&$$, PARAMETER);
    // add_tree_node(&$$, &$1);
    }
#line 2831 "src/syn.tab.c"
    break;

  case 20:
#line 234 "src/syn.y"
                       { }
#line 2837 "src/syn.tab.c"
    break;

  case 21:
#line 238 "src/syn.y"
                                   { }
#line 2843 "src/syn.tab.c"
    break;

  case 22:
#line 239 "src/syn.y"
              { }
#line 2849 "src/syn.tab.c"
    break;

  case 23:
#line 243 "src/syn.y"
                          {
    // $$ = create_node(&$$, BLOCK_OF_COMMANDS);
    // add_tree_node(&$$, &$1);
    // add_tree_node(&$$, &$2);
    }
#line 2859 "src/syn.tab.c"
    break;

  case 24:
#line 248 "src/syn.y"
                  { }
#line 2865 "src/syn.tab.c"
    break;

  case 25:
#line 252 "src/syn.y"
                  {
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 2874 "src/syn.tab.c"
    break;

  case 26:
#line 256 "src/syn.y"
                     {
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 2883 "src/syn.tab.c"
    break;

  case 27:
#line 260 "src/syn.y"
                {
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 2892 "src/syn.tab.c"
    break;

  case 28:
#line 264 "src/syn.y"
                  {
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 2901 "src/syn.tab.c"
    break;

  case 29:
#line 268 "src/syn.y"
              {
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 2910 "src/syn.tab.c"
    break;

  case 30:
#line 272 "src/syn.y"
          {
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 2919 "src/syn.tab.c"
    break;

  case 31:
#line 276 "src/syn.y"
           {
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 2928 "src/syn.tab.c"
    break;

  case 32:
#line 280 "src/syn.y"
                           {
    // $$ = $2;
    }
#line 2936 "src/syn.tab.c"
    break;

  case 33:
#line 283 "src/syn.y"
                  { 
      // $$ = create_node(&$$, INPUT_OPERATION);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, SEMICOLON);
    }
#line 2946 "src/syn.tab.c"
    break;

  case 34:
#line 291 "src/syn.y"
                                                  {
      // $$ = create_node(&$$, CONDITIONAL_STMT);
      // add_tree_token_node(&$$, &$1, IF);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, OPEN_CURLY_BRACKET);
      // add_tree_node(&$$, &$6);
      // add_tree_token_node(&$$, &$7, CLOSE_CURLY_BRACKET);
    }
#line 2961 "src/syn.tab.c"
    break;

  case 35:
#line 301 "src/syn.y"
                                                         {
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
#line 2977 "src/syn.tab.c"
    break;

  case 36:
#line 316 "src/syn.y"
                            {
      // $$ = create_node(&$$, RETURN_STMT);
      // add_tree_token_node(&$$, &$1, RETURN);
      // add_tree_node(&$$, &$2);
      // add_tree_token_node(&$$, &$3, SEMICOLON);
    }
#line 2988 "src/syn.tab.c"
    break;

  case 37:
#line 325 "src/syn.y"
                {
      // $$ = create_node(&$$, INPUT_OPERATION);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, SEMICOLON);
    }
#line 2998 "src/syn.tab.c"
    break;

  case 38:
#line 333 "src/syn.y"
                                          {
      // $$ = create_node(&$$, ITERATION_PROCESS);
      // add_tree_token_node(&$$, &$1, FOR);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, OPEN_CURLY_BRACKET);
      // add_tree_node(&$$, &$6);
      // add_tree_token_node(&$$, &$7, CLOSE_CURLY_BRACKET);
    }
#line 3013 "src/syn.tab.c"
    break;

  case 39:
#line 346 "src/syn.y"
                                          {
      // $$ = create_node(&$$, LOOP_CONDITION);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, SEMICOLON);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, SEMICOLON);
      // add_tree_node(&$$, &$3);
    }
#line 3026 "src/syn.tab.c"
    break;

  case 40:
#line 357 "src/syn.y"
                    {
      // $$ = create_node(&$$, INITIALIZATION_STMT);
      // add_tree_token_node(&$$, &$1, IDENTIFIER);
      // add_tree_token_node(&$$, &$2, ASSIGN);
      // add_tree_node(&$$, &$3);
    }
#line 3037 "src/syn.tab.c"
    break;

  case 41:
#line 366 "src/syn.y"
            {
      // $$ = create_node(&$$, UPDATE_STMT);
      // add_tree_node(&$$, &$1);
    }
#line 3046 "src/syn.tab.c"
    break;

  case 42:
#line 370 "src/syn.y"
                  { }
#line 3052 "src/syn.tab.c"
    break;

  case 43:
#line 374 "src/syn.y"
                                      {
      // $$ = create_node(&$$, INPUT_OPERATION);
      // add_tree_token_node(&$$, &$1, WRITE);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
#line 3065 "src/syn.tab.c"
    break;

  case 44:
#line 382 "src/syn.y"
                                         {
      // $$ = create_node(&$$, INPUT_OPERATION);
      // add_tree_token_node(&$$, &$1, WRITELN);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
#line 3078 "src/syn.tab.c"
    break;

  case 45:
#line 390 "src/syn.y"
                                    {
      // $$ = create_node(&$$, INPUT_OPERATION);
      // add_tree_token_node(&$$, &$1, WRITELN);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
#line 3091 "src/syn.tab.c"
    break;

  case 46:
#line 398 "src/syn.y"
                                      {
      // $$ = create_node(&$$, INPUT_OPERATION);
      // add_tree_token_node(&$$, &$1, WRITELN);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
#line 3104 "src/syn.tab.c"
    break;

  case 47:
#line 409 "src/syn.y"
                                    {
      // $$ = create_node(&$$, OUTPUT_OPERATION);
      // add_tree_token_node(&$$, &$1, READ);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
#line 3117 "src/syn.tab.c"
    break;

  case 48:
#line 420 "src/syn.y"
                        {
      // $$ = create_node(&$$, FUNCTION_CALLING);
      // add_tree_token_node(&$$, &$1, IDENTIFIER);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
#line 3130 "src/syn.tab.c"
    break;

  case 49:
#line 431 "src/syn.y"
               {
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 3139 "src/syn.tab.c"
    break;

  case 50:
#line 435 "src/syn.y"
                     {
      // $$ = create_node(&$$, COMMAND);
      // add_tree_node(&$$, &$1);
    }
#line 3148 "src/syn.tab.c"
    break;

  case 51:
#line 439 "src/syn.y"
       {
    // $$ = create_node(&$$, EXPRESSION);
    // add_tree_token_node(&$$, &$1, IDENTIFIER);
    }
#line 3157 "src/syn.tab.c"
    break;

  case 52:
#line 443 "src/syn.y"
          {
      // $$ = create_node(&$$, EXPRESSION);
      // add_tree_node(&$$, &$1);
    }
#line 3166 "src/syn.tab.c"
    break;

  case 53:
#line 451 "src/syn.y"
         {
      // $$ = create_node(&$$, CONSTANT);
      // add_tree_node(&$$, &$1);
    }
#line 3175 "src/syn.tab.c"
    break;

  case 54:
#line 455 "src/syn.y"
             {
      // $$ = create_node(&$$, CONSTANT);
      // add_tree_token_node(&$$, &$1, NIL);
    }
#line 3184 "src/syn.tab.c"
    break;

  case 55:
#line 462 "src/syn.y"
          {
      // $$ = create_node(&$$, NUMBER);
      // add_tree_token_node(&$$, &$1, NUMBER_INT);
    }
#line 3193 "src/syn.tab.c"
    break;

  case 56:
#line 466 "src/syn.y"
              {
      // $$ = create_node(&$$, NUMBER);
      // add_tree_token_node(&$$, &$1, NUMBER_FLOAT);
    }
#line 3202 "src/syn.tab.c"
    break;

  case 57:
#line 473 "src/syn.y"
            {
      // $$ = create_node(&$$, TYPE);
      // add_tree_node(&$$, &$1);
    }
#line 3211 "src/syn.tab.c"
    break;

  case 58:
#line 477 "src/syn.y"
                 {
      // $$ = create_node(&$$, TYPE);
      // add_tree_node(&$$, &$1);
    }
#line 3220 "src/syn.tab.c"
    break;

  case 59:
#line 484 "src/syn.y"
                       {
      // $$ = create_node(&$$, TYPE_LST);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, TYPE_LIST);
    }
#line 3230 "src/syn.tab.c"
    break;

  case 60:
#line 492 "src/syn.y"
        {
      // $$ = create_node(&$$, NUMBER);
      // add_tree_token_node(&$$, &$1, TYPE_INT);
    }
#line 3239 "src/syn.tab.c"
    break;

  case 61:
#line 496 "src/syn.y"
            {
      // $$ = create_node(&$$, NUMBER);
      // add_tree_token_node(&$$, &$1, TYPE_FLOAT);
    }
#line 3248 "src/syn.tab.c"
    break;

  case 62:
#line 503 "src/syn.y"
               {
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
    }
#line 3257 "src/syn.tab.c"
    break;

  case 63:
#line 507 "src/syn.y"
               {
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
    }
#line 3266 "src/syn.tab.c"
    break;

  case 64:
#line 511 "src/syn.y"
                                            {
      printf("arvore: %p\n", (yyvsp[0].node));
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
      // add_tree_node(&$$, &$2);
      // add_tree_node(&$$, &$3);
    }
#line 3278 "src/syn.tab.c"
    break;

  case 65:
#line 518 "src/syn.y"
                                      {
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
      // add_tree_node(&$$, &$2);
      // add_tree_node(&$$, &$3);
    }
#line 3289 "src/syn.tab.c"
    break;

  case 66:
#line 527 "src/syn.y"
               {
      // $$ = create_node(&$$, S_OPERATION);
      // add_tree_node(&$$, &$1);
    }
#line 3298 "src/syn.tab.c"
    break;

  case 67:
#line 531 "src/syn.y"
               {
      // $$ = create_node(&$$, S_OPERATION);
      // add_tree_node(&$$, &$1);
    }
#line 3307 "src/syn.tab.c"
    break;

  case 68:
#line 535 "src/syn.y"
                   {
    // $$ = create_node(&$$, S_OPERATION);
    // add_tree_token_node(&$$, &$1, NOT_OR_TAIL);
    // add_tree_node(&$$, &$2);
  }
#line 3317 "src/syn.tab.c"
    break;

  case 69:
#line 543 "src/syn.y"
                              {
      // $$ = create_node(&$$, ARITHMETIC_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, MULTIPLY_OP);
      // add_tree_node(&$$, &$3);
    }
#line 3328 "src/syn.tab.c"
    break;

  case 70:
#line 549 "src/syn.y"
                                {
      // $$ = create_node(&$$, ARITHMETIC_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, MULTIPLY_OP);
      // add_tree_node(&$$, &$3);
    }
#line 3339 "src/syn.tab.c"
    break;

  case 71:
#line 555 "src/syn.y"
                                {
      // $$ = create_node(&$$, ARITHMETIC_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, MULTIPLY_OP);
      // add_tree_node(&$$, &$3);
    }
#line 3350 "src/syn.tab.c"
    break;

  case 72:
#line 561 "src/syn.y"
                                {
      //  $$ = create_node(&$$, ARITHMETIC_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, DIVISION_OP);
      // add_tree_node(&$$, &$3);
    }
#line 3361 "src/syn.tab.c"
    break;

  case 73:
#line 567 "src/syn.y"
               {
      //  $$ = create_node(&$$, ARITHMETIC_BINARY);
      // add_tree_node(&$$, &$1);
    }
#line 3370 "src/syn.tab.c"
    break;

  case 74:
#line 574 "src/syn.y"
                 {
    // $$ = create_node(&$$, ARITHMETIC_SINGLE);
    // add_tree_token_node(&$$, &$1, ADD_OP);
    // add_tree_node(&$$, &$2);
    }
#line 3380 "src/syn.tab.c"
    break;

  case 75:
#line 579 "src/syn.y"
                   {
      // $$ = create_node(&$$, ARITHMETIC_SINGLE);
      // add_tree_token_node(&$$, &$1, MINUS_OP);
      // add_tree_node(&$$, &$2);
    }
#line 3390 "src/syn.tab.c"
    break;

  case 76:
#line 587 "src/syn.y"
                 {
      // $$ = create_node(&$$, LIST_SINGLE);
      // add_tree_token_node(&$$, &$1, POP_OP);
      // add_tree_node(&$$, &$2);
    }
#line 3400 "src/syn.tab.c"
    break;

  case 77:
#line 592 "src/syn.y"
                   {
      // $$ = create_node(&$$, LIST_SINGLE);
      // add_tree_token_node(&$$, &$1, HEAD_OP);
      // add_tree_node(&$$, &$2);
    }
#line 3410 "src/syn.tab.c"
    break;

  case 78:
#line 600 "src/syn.y"
                               {
      // $$ = create_node(&$$, LIST_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, FILTER_OP);

    }
#line 3421 "src/syn.tab.c"
    break;

  case 79:
#line 606 "src/syn.y"
                              {
      // $$ = create_node(&$$, LIST_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, MAP_OP);
      // add_tree_node(&$$, &$3);
    }
#line 3432 "src/syn.tab.c"
    break;

  case 80:
#line 612 "src/syn.y"
                              {
      // $$ = create_node(&$$, LIST_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, CONSTRUCTOR_OP);
      // add_tree_node(&$$, &$3);
    }
#line 3443 "src/syn.tab.c"
    break;

  case 81:
#line 621 "src/syn.y"
      {
      // $$ = create_node(&$$, LOGIC_OPERATOR);
      // add_tree_token_node(&$$, &$1, AND_OP);
    }
#line 3452 "src/syn.tab.c"
    break;

  case 82:
#line 625 "src/syn.y"
       {
      // $$ = create_node(&$$, LOGIC_OPERATOR);
      // add_tree_token_node(&$$, &$1, OR_OP);
    }
#line 3461 "src/syn.tab.c"
    break;

  case 83:
#line 632 "src/syn.y"
          {
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, GT_OP);
    }
#line 3470 "src/syn.tab.c"
    break;

  case 84:
#line 636 "src/syn.y"
               {
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, GE_OP);
    }
#line 3479 "src/syn.tab.c"
    break;

  case 85:
#line 640 "src/syn.y"
         {
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, LT_OP);
    }
#line 3488 "src/syn.tab.c"
    break;

  case 86:
#line 644 "src/syn.y"
            {
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, LE_OP);
    }
#line 3497 "src/syn.tab.c"
    break;

  case 87:
#line 648 "src/syn.y"
          {
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, EQ_OP);
    }
#line 3506 "src/syn.tab.c"
    break;

  case 88:
#line 652 "src/syn.y"
           {
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, NE_OP);
    }
#line 3515 "src/syn.tab.c"
    break;


#line 3519 "src/syn.tab.c"

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
#line 658 "src/syn.y"

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
