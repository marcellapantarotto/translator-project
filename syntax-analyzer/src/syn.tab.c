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

  extern int yyleng;
  extern int yylineno;
  extern int yylex();
  extern int yylex_destroy();
  extern int yyerror(char *s);
  extern FILE *yyin;

  t_node root;

#line 87 "src/syn.tab.c"

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
    INPUT_WRITE = 270,
    INPUT_WRITELN = 271,
    OUTPUT_READ = 272,
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
#line 129 "src/syn.y"

  t_token token;
  t_node node;

#line 172 "src/syn.tab.c"

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
#define YYFINAL  60
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6135

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  426

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
       0,   139,   139,   150,   156,   168,   180,   184,   188,   192,
     198,   206,   219,   227,   233,   237,   243,   247,   251,   258,
     263,   267,   273,   277,   281,   285,   289,   293,   297,   301,
     308,   318,   329,   347,   356,   369,   380,   389,   393,   399,
     407,   418,   429,   440,   444,   448,   455,   465,   477,   486,
     498,   508,   521,   530,   542,   555,   564,   576,   577,   581,
     585,   589,   595,   601,   610,   614,   618,   632,   637,   642,
     647,   660,   675,   686,   700,   711,   725,   737,   749,   764,
     774,   787,   797,   807,   817,   827,   837
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM_INT", "NUM_FLOAT", "STRING",
  "NIL_CNST", "ID", "RETURN_STM", "T_INT", "T_FLOAT", "T_LIST", "IF_STMT",
  "ELSE_STMT", "FOR_STMT", "INPUT_WRITE", "INPUT_WRITELN", "OUTPUT_READ",
  "'('", "')'", "'{'", "'}'", "';'", "','", "AND", "OR", "GREATER",
  "GREATER_EQ", "LESS", "LESS_EQ", "EQUAL", "NOT_EQ", "'+'", "'-'", "'*'",
  "'/'", "FILTER", "MAP", "':'", "'%'", "'?'", "'!'", "'='", "$accept",
  "program", "lst_declarations", "s_declaration", "var_declaration",
  "func_declaration", "unq_declaration", "lst_parameters", "parameter",
  "block_commands", "command", "conditional_stmt", "return_stmt",
  "iteration", "loop_condition", "init_stmt", "update_stmt", "input",
  "output", "func_calling", "statement", "expression", "const", "number",
  "type", "type_lst", "type_number", "operation", "binary_operation",
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

#define YYPACT_NINF (-157)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-87)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     578,  1050,  1295,  1338,  1113,  1381,  1252,    33,    82,   114,
      15,    27,    70,    72,    73,   232,   232,   232,   232,   232,
      30,   101,  1181,  1553,  1595,   118,  1637,  1679,  1721,  1763,
    1805,  1847,  1889,  1931,  1424,  1467,  1510,   108,   111,   134,
    1973,  2015,  2057,  2099,  2141,  2183,  2225,   161,  1202,    98,
     171,   121,   171,   171,   560,  2267,  2309,  2351,  2393,  2435,
    -157,   143,   161,  2477,   617,   678,   697,   713,   795,   800,
     807,   880,   232,   232,   232,   232,   232,   232,  2519,   232,
     232,   166,   139,  2561,   -17,  2603,    75,   195,   221,   136,
     274,   333,  2645,   147,   131,   153,   169,   189,   201,   223,
     226,  2687,  2729,  2771,  2813,  2855,  2897,  2939,  2981,   180,
     161,    12,    33,   133,    33,   230,   236,   239,   244,  3023,
     247,     8,  3930,   245,  3930,   260,  3065,  3107,  3149,  3930,
     265,  3930,  3969,   263,   270,  4008,   279,    64,   280,   171,
     292,  3191,   295,  3233,   312,   340,  3275,   349,  3317,   357,
    3930,   348,  3359,  5998,  6017,   376,  6036,   966,   966,   975,
     975,   975,  6055,  6074,  6093,   381,   384,   388,   163,   183,
     395,   409,  3401,  3443,  3485,  3527,  3569,  3611,   506,   581,
     659,   673,  1026,  1026,   754,  1116,   334,   342,   369,   374,
     399,   372,  5859,  5879,   377,  5899,  5919,  1081,  1081,   560,
     560,   560,  5939,  5959,  5979,   410,   415,   418,    94,   218,
     420,   422,   425,   428,   437,   449,   453,   454,  3690,  3730,
    4047,  3770,  3650,    33,   373,   466,   475,   481,   486,  1103,
    1103,  1103,  1103,  1103,  4086,  4125,  4164,  4203,  4242,  4281,
    4320,  3810,  3850,  3890,   487,  4359,  4398,  4437,  4476,  4515,
    4554,  4593,  4632,   256,   367,   421,   429,   442,   476,   499,
     511,   485,   490,   491,   494,   502,   512,   528,   532,   547,
    1132,  1132,  1132,  1132,   975,   975,   975,   975,   322,   975,
     975,   354,  1123,   362,    75,   818,   894,   901,   915,   933,
    1009,  1065,  1072,   407,   516,   625,   657,   706,   743,   776,
     840,   863,   555,   556,   557,  1137,  1137,  1137,  1137,   560,
     560,   560,   560,   115,   560,   560,   119,  1127,   130,    75,
     161,   558,   171,   121,   171,   171,   560,  4671,  4710,  4749,
    4788,  4827,  4866,  4905,  4944,  4983,  5022,  5061,  1103,  1103,
    1103,  1103,  1103,  1103,  5100,  1103,  1103,   567,  5139,  1134,
    5178,    75,   379,   387,   438,   444,   459,   468,   514,   520,
     523,   540,   569,   574,   584,   587,   600,   603,   174,   194,
     215,   222,   224,   262,   285,   304,   315,   330,   607,   608,
     611,   622,   626,   627,   630,  5217,   632,   636,   637,   640,
     646,  5256,  5295,  5334,  5373,  5412,  5451,  5490,  5529,   650,
      96,   655,   656,   661,   664,  5568,    31,  3930,  3930,  5607,
    5646,  5685,   670,  3930,   690,   693,   171,   702,  5724,  5763,
     658,  5802,   698,  3930,   705,  5841
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -157,  -157,   707,  -157,     2,  -157,     1,   -51,  -157,  -121,
       4,     9,    19,    34,   408,  -157,  -157,    76,    77,    84,
       5,   680,     0,   328,    13,  -157,  -157,    42,    80,   715,
     246,   924,   721,   778,  -156,  -141
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,    21,    22,   132,    24,   133,    89,    90,   134,
     135,   234,   235,   236,    95,    96,   144,   237,   238,   239,
     240,   241,   176,   177,   244,    38,    39,   245,   246,   247,
     248,   249,   250,   251,    79,    80
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      35,    25,    23,   136,    26,    33,   279,   163,   138,    27,
     140,   100,    49,    37,   142,    15,    16,    72,    73,    28,
     130,   280,    35,    25,    23,   121,    26,    33,   131,   151,
      60,    27,   122,    50,    29,    37,   153,   154,   155,   156,
      48,    28,    40,   412,   184,    51,   314,   189,    88,   165,
     203,   413,   203,   203,   216,    93,    29,    97,    98,   120,
     191,   315,   189,    88,    40,   157,   158,   192,   193,   194,
     195,   196,   159,   160,   161,   191,    30,    31,   178,   179,
      41,   180,   181,   -38,    32,   345,   184,   166,    52,   -55,
      53,    54,   205,   -55,   205,   205,   197,   198,    30,    31,
     346,    -2,    41,   199,   200,   201,    32,   182,   183,   406,
     189,    88,   163,   -59,   163,    81,   407,   123,   -52,   125,
      92,   -56,   242,   191,   242,   -56,   305,   306,    94,   242,
     206,   242,   206,   206,   -67,   242,    62,   203,   -68,   203,
      63,   -53,   145,    -4,   147,    82,   -54,   -67,   -67,   -69,
     242,   -68,   -68,   124,   165,   109,   165,   258,   258,   266,
     266,   266,   305,   306,   186,   187,   111,   188,    87,   184,
       8,     9,   113,   112,   192,   193,   194,   195,   196,   205,
     -15,   205,   290,   290,   -12,   -59,   178,   179,   -12,   180,
     181,   114,   166,   -50,   166,   270,   271,   299,   299,   216,
     216,   216,   119,   197,   198,   -64,   -50,   -50,   115,   184,
     199,   200,   201,   -51,   -17,   182,   183,   206,   -17,   206,
     116,   178,   179,   163,   180,   181,   -51,   -51,   321,   332,
     332,   332,   332,   332,   -49,   172,   173,   -64,   174,   175,
     -16,   -46,   117,   -72,   -16,   118,    43,   -49,   -49,   184,
     182,   183,   126,   168,   -46,   -46,   -72,   -72,   127,   -50,
     -50,   128,   -50,   -50,   129,   165,   -13,   -36,    43,   384,
     357,   357,   357,   357,   266,   266,   266,   266,   -50,   266,
     266,   -47,   137,   139,   184,   252,   414,   415,   -50,   -50,
      85,   141,   417,   -14,   -47,   -47,   208,   110,   208,   208,
     143,   146,   424,   166,   -48,   373,   373,   373,   373,   216,
     216,   216,   216,   148,   216,   216,   -19,   -48,   -48,   184,
     189,    88,   203,   -73,   203,   203,   216,   386,    36,   388,
     389,   -35,    85,   191,   -70,   164,   -73,   -73,   332,   332,
     332,   332,   332,   332,   -67,   332,   332,   -70,   -70,   -71,
      36,   184,   -18,   -50,   -67,   -67,   -18,   -50,   168,   -37,
     168,   -51,   -71,   -71,   205,   -51,   205,   205,   149,   152,
     -51,   -51,   185,   -51,   -51,   190,   -68,   150,   204,   293,
     204,   204,   217,   208,   -69,   208,   -68,   -68,   -49,   -51,
     190,   322,   -49,   -47,   270,   271,   -45,   -47,   -45,   -51,
     -51,   -50,   206,   -43,   206,   206,   -58,   242,   242,   -51,
     -57,   -50,   -50,   242,   185,   283,   203,   -65,   -48,   -51,
     -51,   420,   -48,   242,   -49,   -49,   -12,   -49,   -49,   -43,
     -12,   -60,   -46,   -46,   -58,   -46,   -46,   -57,   190,   -65,
     164,   -60,   164,   -49,   -50,   -72,   -72,   -51,   -72,   -72,
     243,   -46,   243,   -49,   -49,   318,   -49,   243,   205,   243,
     -49,   -46,   -46,   243,   -72,   204,   -46,   204,   -46,   168,
     -49,   -49,   -47,   -48,   -72,   -72,   -46,   -46,   243,   -47,
     -47,   -72,   -47,   -47,   323,   259,   259,   267,   267,   267,
     -47,   -72,   -72,   324,   347,   350,   206,   185,   -47,   325,
     -47,   -47,   -48,   -48,   326,   -48,   -48,   -50,   -47,   -47,
     291,   291,   -51,   -49,   -73,   -73,   -46,   -73,   -73,   -50,
     -50,   -48,   -50,   -50,   -74,   300,   300,   217,   217,   217,
     283,   -48,   -48,   -73,   -47,   -50,   -48,   185,   -50,   -50,
     -50,   -50,   -73,   -73,   -73,   -70,   -48,   -48,   -50,   -50,
     -48,   164,   -73,   -73,   -75,   -70,   -70,   333,   333,   333,
     333,   333,   -71,   212,   213,   318,   214,   215,   208,   -66,
     208,   208,   -71,   -71,   -74,   -75,   -66,   185,    -3,     1,
     385,     2,     3,     4,     5,     6,     7,     8,     9,   -12,
      10,   -76,    11,    12,    13,    14,   -77,   350,   358,   358,
     358,   358,   267,   267,   267,   267,   -78,   267,   267,   -61,
      15,    16,   185,   -51,   -51,   -51,   -51,    17,    18,    19,
     -79,   -79,   -63,   -79,   -79,   -62,   -76,   -77,   -51,   -51,
     -78,   -51,   -51,   374,   374,   374,   374,   217,   217,   217,
     217,   -61,   217,   217,   -51,   -63,   -62,   185,   190,   399,
     204,   400,   204,   204,   217,   401,   402,   -51,   -51,   403,
     -49,   -49,   208,   -49,   -49,   404,   333,   333,   333,   333,
     333,   333,   405,   333,   333,   408,   -49,   422,   409,   185,
      34,   -80,   -80,   410,   -80,   -80,   411,   162,   416,   -49,
     -49,   -49,   -49,   -49,   -49,    55,    56,    57,    58,    59,
     -81,   -81,    34,   -81,   -81,   -46,   -46,   -46,   -46,   -46,
     -46,   418,   -46,   -46,   419,    42,   -82,   -82,   423,   -82,
     -82,    45,   167,   421,    84,   -46,   425,    91,   170,    61,
     202,   387,   202,   202,    99,   243,   243,    42,   -46,   -46,
       0,   243,    91,    45,   204,     0,   -72,   -72,     0,   -72,
     -72,   243,   101,   102,   103,   104,   105,   106,     0,   107,
     108,     0,   -72,     0,     0,   207,    84,   207,   207,     0,
       0,   210,     0,   210,   210,   -72,   -72,     0,    46,   -47,
     -47,     0,   -47,   -47,     0,   171,   -47,   -47,   -47,   -47,
      91,     0,   162,     0,   162,   -47,     0,     0,   -83,   -83,
      46,   -83,   -83,   -84,   -84,     0,   -84,   -84,   -47,   -47,
     -85,   -85,     0,   -85,   -85,     0,     0,   202,     0,   202,
       0,   -50,   -50,     0,   -50,   -50,     0,   167,   211,   167,
     211,   211,     0,   170,     0,   170,     0,   257,   260,   265,
     268,   269,     0,   -48,   -48,     0,   -48,   -48,     0,   282,
     -50,   -50,   207,     0,   207,     0,     0,     0,   210,   -48,
     210,     0,   289,   292,     0,     0,   -73,   -73,     0,   -73,
     -73,     0,   -48,   -48,     0,     0,     0,   298,   301,   302,
     303,   304,   -73,   -86,   -86,     0,   -86,   -86,     0,   317,
     171,     0,   171,     0,     0,   -73,   -73,   -51,   -51,     0,
     -51,   -51,     0,   162,   -49,   -49,     0,   -49,   -49,   331,
     334,   335,   336,   337,     0,   211,     0,   211,   -46,   -46,
       0,   -46,   -46,     0,    44,     0,   -51,   -51,     0,   349,
       0,   169,     0,   -49,   -49,     0,   -72,   -72,   167,   -72,
     -72,     0,     0,     0,   170,     0,    44,   -46,   -46,     0,
     356,   359,   360,   361,   362,   363,   364,   365,    78,   366,
     367,     0,     0,     0,   282,   -72,   -72,    83,    86,   253,
     254,     0,   255,   256,   209,     0,   209,   209,   261,   262,
       0,   263,   264,     0,     0,   372,   375,   376,   377,   378,
     379,   380,   381,     0,   382,   383,     0,     0,     0,   317,
      91,   171,   202,     0,   202,   202,   390,     0,    78,    83,
      86,     0,   -47,   -47,     0,   -47,   -47,     0,   391,   392,
     393,   394,   395,   396,     0,   397,   398,     0,     0,   285,
     286,   349,   287,   288,     0,     0,   169,   207,   169,   207,
     207,   -47,   -47,   210,     0,   210,   210,     0,     0,     0,
      -9,    -9,     0,    -9,    -9,    -9,    -9,    -9,    -9,    -9,
      -9,   209,    -9,   209,    -9,    -9,    -9,    -9,   -48,   -48,
       0,   -48,   -48,     0,     0,   -73,   -73,     0,   -73,   -73,
       0,     0,    -9,    -9,   294,   295,   278,   296,   297,    -9,
      -9,    -9,   281,   284,     0,     0,   202,   -48,   -48,     0,
     211,     0,   211,   211,   -73,   -73,   327,   328,     0,   329,
     330,     0,     0,   -45,   -45,     0,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,     0,   -45,   313,   -45,   -45,   -45,
     -45,   207,   316,   319,     0,   352,   353,   210,   354,   355,
     368,   369,     0,   370,   371,   -45,   -45,   169,   -48,   -48,
     -48,   -48,   -45,   -45,   -45,   270,   271,   272,   273,   305,
     306,   307,   308,     0,     0,   344,   229,   230,   338,   339,
       0,     0,   348,   351,     0,     0,     0,     0,     0,     0,
       0,    -5,     1,     0,     2,     3,     4,     5,     6,     7,
       8,     9,     0,    10,   211,    11,    12,    13,    14,     0,
       0,     0,     0,     0,     0,     0,   278,   281,   284,     0,
       0,     0,     0,    15,    16,     0,     0,     0,     0,     0,
      17,    18,    19,     0,   -46,     0,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   313,   316,   319,   -46,     0,   209,     0,   209,   209,
       0,     0,   -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,     0,   -46,     0,   -46,   -46,   -46,   -46,
      47,     0,     0,   344,   348,   351,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -50,   -50,     0,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,     0,   -50,
     -50,   -50,   -50,     0,     0,     0,     0,     0,     0,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -51,   -51,
     209,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,
     -51,     0,   -51,   -51,   -51,   -51,     0,     0,     0,     0,
       0,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -49,   -49,     0,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,     0,   -49,     0,   -49,   -49,   -49,   -49,     0,
       0,     0,     0,     0,     0,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -44,   -44,     0,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,     0,   -44,     0,   -44,   -44,
     -44,   -44,     0,     0,     0,     0,     0,     0,    64,    65,
      66,    67,    68,    69,    70,    71,    15,    16,    72,    73,
      74,    75,    76,   -44,   -44,   -44,    77,   -47,   -47,     0,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,
       0,   -47,   -47,   -47,   -47,     0,     0,     0,     0,     0,
       0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,     0,   -48,     0,   -48,   -48,   -48,   -48,     0,     0,
       0,     0,     0,     0,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,    -6,    -6,     0,    -6,    -6,    -6,    -6,
      -6,    -6,    -6,    -6,     0,    -6,     0,    -6,    -6,    -6,
      -6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    -6,    -6,     0,     0,     0,
       0,     0,    -6,    -6,    -6,    -7,    -7,     0,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,     0,    -7,
      -7,    -7,    -7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    -7,    -7,     0,
       0,     0,     0,     0,    -7,    -7,    -7,    -8,    -8,     0,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,     0,    -8,
       0,    -8,    -8,    -8,    -8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    -8,
      -8,     0,     0,     0,     0,     0,    -8,    -8,    -8,   -23,
     -23,     0,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
       0,   -23,     0,   -23,   -23,   -23,   -23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -23,   -23,     0,     0,     0,     0,     0,   -23,   -23,
     -23,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,     0,   -24,     0,   -24,   -24,   -24,   -24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -24,   -24,     0,     0,     0,     0,     0,
     -24,   -24,   -24,   -25,   -25,     0,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,     0,   -25,     0,   -25,   -25,   -25,
     -25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -25,   -25,     0,     0,     0,
       0,     0,   -25,   -25,   -25,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,     0,   -26,
     -26,   -26,   -26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -26,   -26,     0,
       0,     0,     0,     0,   -26,   -26,   -26,   -27,   -27,     0,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,
       0,   -27,   -27,   -27,   -27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -27,
     -27,     0,     0,     0,     0,     0,   -27,   -27,   -27,   -28,
     -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
       0,   -28,     0,   -28,   -28,   -28,   -28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -28,   -28,     0,     0,     0,     0,     0,   -28,   -28,
     -28,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,     0,   -29,     0,   -29,   -29,   -29,   -29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -29,   -29,     0,     0,     0,     0,     0,
     -29,   -29,   -29,   -43,   -43,     0,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,     0,   -43,     0,   -43,   -43,   -43,
     -43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -43,   -43,     0,     0,     0,
       0,     0,   -43,   -43,   -43,   -58,   -58,     0,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,     0,   -58,     0,   -58,
     -58,   -58,   -58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -58,   -58,     0,
       0,     0,     0,     0,   -58,   -58,   -58,   -57,   -57,     0,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,   -57,
       0,   -57,   -57,   -57,   -57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -57,
     -57,     0,     0,     0,     0,     0,   -57,   -57,   -57,   -59,
     -59,     0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
       0,   -59,     0,   -59,   -59,   -59,   -59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    15,    16,     0,     0,     0,     0,     0,   -59,   -59,
     -59,   -64,   -64,     0,   178,   179,   -64,   180,   181,   -64,
     -64,   -64,     0,   -64,     0,   -64,   -64,   -64,   -64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   182,   183,     0,     0,     0,     0,     0,
     -64,   -64,   -64,   -65,   -65,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,     0,   -65,     0,   -65,   -65,   -65,
     -65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -65,   -65,     0,     0,     0,
       0,     0,   -65,   -65,   -65,   -60,   -60,     0,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,     0,   -60,     0,   -60,
     -60,   -60,   -60,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -60,   -60,     0,
       0,     0,     0,     0,   -60,   -60,   -60,   -72,   -72,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,   -72,
       0,   -72,   -72,   -72,   -72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -72,
     -72,     0,     0,     0,     0,     0,   -72,   -72,   -72,   -73,
     -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
       0,   -73,     0,   -73,   -73,   -73,   -73,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -73,   -73,     0,     0,     0,     0,     0,   -73,   -73,
     -73,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,   -74,     0,   -74,   -74,   -74,   -74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -74,   -74,     0,     0,     0,     0,     0,
     -74,   -74,   -74,   -75,   -75,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,   -75,     0,   -75,   -75,   -75,
     -75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -75,   -75,     0,     0,     0,
       0,     0,   -75,   -75,   -75,   -66,   -66,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,     0,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -66,   -66,     0,
       0,     0,     0,     0,   -66,   -66,   -66,   -10,   -10,     0,
     -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,     0,   -10,
       0,   -10,   -10,   -10,   -10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -10,
     -10,     0,     0,     0,     0,     0,   -10,   -10,   -10,   -67,
     -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
       0,   -67,     0,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -67,   -67,     0,     0,     0,     0,     0,   -67,   -67,
     -67,   -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,   -68,     0,   -68,   -68,   -68,   -68,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -68,   -68,     0,     0,     0,     0,     0,
     -68,   -68,   -68,   -69,   -69,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,     0,   -69,     0,   -69,   -69,   -69,
     -69,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    15,    16,     0,     0,     0,
       0,     0,   -69,   -69,   -69,   -33,   -33,     0,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,     0,   -33,
     -33,   -33,   -33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -33,   -33,     0,
       0,     0,     0,     0,   -33,   -33,   -33,   -70,   -70,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,
       0,   -70,   -70,   -70,   -70,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -70,
     -70,     0,     0,     0,     0,     0,   -70,   -70,   -70,   -71,
     -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
       0,   -71,     0,   -71,   -71,   -71,   -71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -71,   -71,     0,     0,     0,     0,     0,   -71,   -71,
     -71,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,   -76,     0,   -76,   -76,   -76,   -76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -76,   -76,     0,     0,     0,     0,     0,
     -76,   -76,   -76,   -77,   -77,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,   -77,     0,   -77,   -77,   -77,
     -77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -77,   -77,     0,     0,     0,
       0,     0,   -77,   -77,   -77,   -78,   -78,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,   -78,     0,   -78,
     -78,   -78,   -78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -78,   -78,     0,
       0,     0,     0,     0,   -78,   -78,   -78,   -61,   -61,     0,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,   -61,
       0,   -61,   -61,   -61,   -61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -61,
     -61,     0,     0,     0,     0,     0,   -61,   -61,   -61,   -63,
     -63,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
       0,   -63,     0,   -63,   -63,   -63,   -63,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -63,   -63,     0,     0,     0,     0,     0,   -63,   -63,
     -63,   -62,   -62,     0,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,     0,   -62,     0,   -62,   -62,   -62,   -62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -62,   -62,     0,     0,     0,     0,     0,
     -62,   -62,   -62,   -42,   -42,     0,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,     0,   -42,     0,   -42,   -42,   -42,
     -42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -42,   -42,     0,     0,     0,
       0,     0,   -42,   -42,   -42,   -39,   -39,     0,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,     0,   -39,
     -39,   -39,   -39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -39,   -39,     0,
       0,     0,     0,     0,   -39,   -39,   -39,   -40,   -40,     0,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,
       0,   -40,   -40,   -40,   -40,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -40,
     -40,     0,     0,     0,     0,     0,   -40,   -40,   -40,   -41,
     -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
       0,   -41,     0,   -41,   -41,   -41,   -41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -41,   -41,     0,     0,     0,     0,     0,   -41,   -41,
     -41,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,     0,   -30,     0,   -30,   -30,   -30,   -30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -30,   -30,     0,     0,     0,     0,     0,
     -30,   -30,   -30,   -34,   -34,     0,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,     0,   -34,     0,   -34,   -34,   -34,
     -34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -34,   -34,     0,     0,     0,
       0,     0,   -34,   -34,   -34,   -11,   -11,     0,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,     0,   -11,     0,   -11,
     -11,   -11,   -11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -11,   -11,     0,
       0,     0,     0,     0,   -11,   -11,   -11,   -31,   -31,     0,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,
       0,   -31,   -31,   -31,   -31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -31,
     -31,     0,     0,     0,     0,     0,   -31,   -31,   -31,   -32,
     -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
       0,   -32,     0,   -32,   -32,   -32,   -32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -32,   -32,     0,     0,     0,     0,     0,   -32,   -32,
     -32,   -50,   -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,     0,   -50,     0,   -50,   -50,   -50,   -50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -50,   -50,     0,     0,     0,     0,     0,
     -50,   -50,   -50,   -51,   -51,     0,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,     0,   -51,     0,   -51,   -51,   -51,
     -51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -51,   -51,     0,     0,     0,
       0,     0,   -51,   -51,   -51,   -49,   -49,     0,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,     0,   -49,     0,   -49,
     -49,   -49,   -49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -49,   -49,     0,
       0,     0,     0,     0,   -49,   -49,   -49,   -46,   -46,     0,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,
       0,   -46,   -46,   -46,   -46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -46,
     -46,     0,     0,     0,     0,     0,   -46,   -46,   -46,   -47,
     -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
       0,   -47,     0,   -47,   -47,   -47,   -47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -47,   -47,     0,     0,     0,     0,     0,   -47,   -47,
     -47,   -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,     0,   -48,     0,   -48,   -48,   -48,   -48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -48,   -48,     0,     0,     0,     0,     0,
     -48,   -48,   -48,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,     0,   -46,     0,   -46,   -46,   -46,   -46,   320,     0,
       0,   -46,     0,     0,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,     0,   -50,     0,   -50,   -50,   -50,   -50,     0,     0,
       0,   -50,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,     0,   -51,     0,   -51,   -51,   -51,   -51,     0,     0,
       0,   -51,     0,     0,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,     0,   -49,     0,   -49,   -49,   -49,   -49,     0,     0,
       0,   -49,     0,     0,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,     0,   -44,     0,   -44,   -44,   -44,   -44,     0,     0,
       0,   -44,     0,     0,    64,    65,    66,    67,    68,    69,
      70,    71,   229,   230,   338,   339,   340,   341,   342,   -44,
     -44,   -44,   343,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,     0,   -47,     0,   -47,   -47,   -47,   -47,     0,     0,
       0,   -47,     0,     0,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,     0,   -48,     0,   -48,   -48,   -48,   -48,     0,     0,
       0,   -48,     0,     0,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   218,   219,   220,   221,   222,   223,     8,
       9,     0,   224,     0,   225,   226,   227,   228,     0,     0,
       0,   -21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   229,   230,     0,     0,     0,     0,     0,   231,
     232,   233,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
       0,   -22,     0,   -22,   -22,   -22,   -22,     0,     0,     0,
     -22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -22,   -22,     0,     0,     0,     0,     0,   -22,   -22,
     -22,   218,   219,   220,   221,   222,   223,     8,     9,     0,
     224,     0,   225,   226,   227,   228,     0,     0,     0,   -20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     229,   230,     0,     0,     0,     0,     0,   231,   232,   233,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,
       0,   -45,   -45,   -45,   -45,     0,     0,     0,   -45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -45,
     -45,     0,     0,     0,     0,     0,   -45,   -45,   -45,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,     0,   -23,     0,
     -23,   -23,   -23,   -23,     0,     0,     0,   -23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -23,   -23,
       0,     0,     0,     0,     0,   -23,   -23,   -23,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,     0,   -24,
     -24,   -24,   -24,     0,     0,     0,   -24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -24,   -24,     0,
       0,     0,     0,     0,   -24,   -24,   -24,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,     0,   -25,     0,   -25,   -25,
     -25,   -25,     0,     0,     0,   -25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -25,   -25,     0,     0,
       0,     0,     0,   -25,   -25,   -25,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,   -26,     0,   -26,     0,   -26,   -26,   -26,
     -26,     0,     0,     0,   -26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -26,   -26,     0,     0,     0,
       0,     0,   -26,   -26,   -26,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,     0,   -27,     0,   -27,   -27,   -27,   -27,
       0,     0,     0,   -27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -27,   -27,     0,     0,     0,     0,
       0,   -27,   -27,   -27,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,     0,   -28,     0,   -28,   -28,   -28,   -28,     0,
       0,     0,   -28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -28,   -28,     0,     0,     0,     0,     0,
     -28,   -28,   -28,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,     0,   -29,     0,   -29,   -29,   -29,   -29,     0,     0,
       0,   -29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -29,   -29,     0,     0,     0,     0,     0,   -29,
     -29,   -29,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
       0,   -43,     0,   -43,   -43,   -43,   -43,     0,     0,     0,
     -43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -43,   -43,     0,     0,     0,     0,     0,   -43,   -43,
     -43,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,
     -58,     0,   -58,   -58,   -58,   -58,     0,     0,     0,   -58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -58,   -58,     0,     0,     0,     0,     0,   -58,   -58,   -58,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,   -57,
       0,   -57,   -57,   -57,   -57,     0,     0,     0,   -57,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -57,
     -57,     0,     0,     0,     0,     0,   -57,   -57,   -57,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,   -59,     0,
     -59,   -59,   -59,   -59,     0,     0,     0,   -59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   229,   230,
       0,     0,     0,     0,     0,   -59,   -59,   -59,   178,   179,
     -64,   180,   181,   -64,   -64,   -64,     0,   -64,     0,   -64,
     -64,   -64,   -64,     0,     0,     0,   -64,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   182,   183,     0,
       0,     0,     0,     0,   -64,   -64,   -64,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,     0,   -65,     0,   -65,   -65,
     -65,   -65,     0,     0,     0,   -65,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -65,   -65,     0,     0,
       0,     0,     0,   -65,   -65,   -65,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,     0,   -60,     0,   -60,   -60,   -60,
     -60,     0,     0,     0,   -60,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -60,   -60,     0,     0,     0,
       0,     0,   -60,   -60,   -60,   -10,   -10,   -10,   -10,   -10,
     -10,   -10,   -10,     0,   -10,     0,   -10,   -10,   -10,   -10,
       0,     0,     0,   -10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -10,   -10,     0,     0,     0,     0,
       0,   -10,   -10,   -10,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,     0,   -50,     0,   -50,   -50,   -50,   -50,     0,
       0,     0,   -50,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -50,   -50,     0,     0,     0,     0,     0,
     -50,   -50,   -50,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,     0,   -51,     0,   -51,   -51,   -51,   -51,     0,     0,
       0,   -51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -51,   -51,     0,     0,     0,     0,     0,   -51,
     -51,   -51,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
       0,   -49,     0,   -49,   -49,   -49,   -49,     0,     0,     0,
     -49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -49,   -49,     0,     0,     0,     0,     0,   -49,   -49,
     -49,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,
     -46,     0,   -46,   -46,   -46,   -46,     0,     0,     0,   -46,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -46,   -46,     0,     0,     0,     0,     0,   -46,   -46,   -46,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,   -72,
       0,   -72,   -72,   -72,   -72,     0,     0,     0,   -72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -72,
     -72,     0,     0,     0,     0,     0,   -72,   -72,   -72,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,     0,
     -47,   -47,   -47,   -47,     0,     0,     0,   -47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -47,   -47,
       0,     0,     0,     0,     0,   -47,   -47,   -47,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,     0,   -48,     0,   -48,
     -48,   -48,   -48,     0,     0,     0,   -48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -48,   -48,     0,
       0,     0,     0,     0,   -48,   -48,   -48,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,     0,   -73,     0,   -73,   -73,
     -73,   -73,     0,     0,     0,   -73,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -73,   -73,     0,     0,
       0,     0,     0,   -73,   -73,   -73,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,   -74,     0,   -74,   -74,   -74,
     -74,     0,     0,     0,   -74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -74,   -74,     0,     0,     0,
       0,     0,   -74,   -74,   -74,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,     0,   -75,     0,   -75,   -75,   -75,   -75,
       0,     0,     0,   -75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -75,   -75,     0,     0,     0,     0,
       0,   -75,   -75,   -75,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,   -66,     0,   -66,   -66,   -66,   -66,     0,
       0,     0,   -66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -66,   -66,     0,     0,     0,     0,     0,
     -66,   -66,   -66,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,     0,   -67,     0,   -67,   -67,   -67,   -67,     0,     0,
       0,   -67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -67,   -67,     0,     0,     0,     0,     0,   -67,
     -67,   -67,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
       0,   -68,     0,   -68,   -68,   -68,   -68,     0,     0,     0,
     -68,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -68,   -68,     0,     0,     0,     0,     0,   -68,   -68,
     -68,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,
     -69,     0,   -69,   -69,   -69,   -69,     0,     0,     0,   -69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     229,   230,     0,     0,     0,     0,     0,   -69,   -69,   -69,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,
       0,   -33,   -33,   -33,   -33,     0,     0,     0,   -33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -33,
     -33,     0,     0,     0,     0,     0,   -33,   -33,   -33,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,     0,
     -70,   -70,   -70,   -70,     0,     0,     0,   -70,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -70,   -70,
       0,     0,     0,     0,     0,   -70,   -70,   -70,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,     0,   -71,     0,   -71,
     -71,   -71,   -71,     0,     0,     0,   -71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -71,   -71,     0,
       0,     0,     0,     0,   -71,   -71,   -71,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,     0,   -76,     0,   -76,   -76,
     -76,   -76,     0,     0,     0,   -76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -76,   -76,     0,     0,
       0,     0,     0,   -76,   -76,   -76,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,   -77,     0,   -77,   -77,   -77,
     -77,     0,     0,     0,   -77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -77,   -77,     0,     0,     0,
       0,     0,   -77,   -77,   -77,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,   -78,     0,   -78,   -78,   -78,   -78,
       0,     0,     0,   -78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -78,   -78,     0,     0,     0,     0,
       0,   -78,   -78,   -78,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,     0,   -61,     0,   -61,   -61,   -61,   -61,     0,
       0,     0,   -61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -61,   -61,     0,     0,     0,     0,     0,
     -61,   -61,   -61,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,     0,   -63,     0,   -63,   -63,   -63,   -63,     0,     0,
       0,   -63,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -63,   -63,     0,     0,     0,     0,     0,   -63,
     -63,   -63,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
       0,   -62,     0,   -62,   -62,   -62,   -62,     0,     0,     0,
     -62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -62,   -62,     0,     0,     0,     0,     0,   -62,   -62,
     -62,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,
     -42,     0,   -42,   -42,   -42,   -42,     0,     0,     0,   -42,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -42,   -42,     0,     0,     0,     0,     0,   -42,   -42,   -42,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,
       0,   -39,   -39,   -39,   -39,     0,     0,     0,   -39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -39,
     -39,     0,     0,     0,     0,     0,   -39,   -39,   -39,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,     0,
     -40,   -40,   -40,   -40,     0,     0,     0,   -40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -40,   -40,
       0,     0,     0,     0,     0,   -40,   -40,   -40,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,     0,   -41,     0,   -41,
     -41,   -41,   -41,     0,     0,     0,   -41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -41,   -41,     0,
       0,     0,     0,     0,   -41,   -41,   -41,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,     0,   -30,     0,   -30,   -30,
     -30,   -30,     0,     0,     0,   -30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -30,   -30,     0,     0,
       0,     0,     0,   -30,   -30,   -30,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,     0,   -34,     0,   -34,   -34,   -34,
     -34,     0,     0,     0,   -34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -34,   -34,     0,     0,     0,
       0,     0,   -34,   -34,   -34,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,     0,   -31,     0,   -31,   -31,   -31,   -31,
       0,     0,     0,   -31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -31,   -31,     0,     0,     0,     0,
       0,   -31,   -31,   -31,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,     0,   -32,     0,   -32,   -32,   -32,   -32,     0,
       0,     0,   -32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -32,   -32,     0,     0,     0,   -50,     0,
     -32,   -32,   -32,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -51,     0,
       0,   -50,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -49,     0,
       0,   -51,     0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -46,     0,
       0,   -49,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -44,     0,
       0,   -46,     0,    64,    65,    66,    67,    68,    69,    70,
      71,   305,   306,   307,   308,   309,   310,   311,   -47,     0,
       0,   312,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -48,     0,
       0,   -47,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,     0,
     -50,   -48,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,     0,   -51,
     -50,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,     0,     0,   -49,   -51,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,     0,     0,   -44,   -49,    64,
      65,    66,    67,    68,    69,    70,    71,   270,   271,   272,
     273,   274,   275,   276,     0,     0,   -47,   277,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,     0,     0,   -48,   -47,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,     0,     0,     0,   -48
};

static const yytype_int16 yycheck[] =
{
       0,     0,     0,   124,     0,     0,   162,     7,   129,     0,
     131,    62,     7,     0,   135,    32,    33,    34,    35,     0,
      12,   162,    22,    22,    22,    13,    22,    22,    20,   150,
       0,    22,    20,    18,     0,    22,     3,     4,     5,     6,
       7,    22,     0,    12,    44,    18,   202,    47,    47,     7,
      50,    20,    52,    53,    54,    50,    22,    52,    53,   110,
      47,   202,    62,    62,    22,    32,    33,     3,     4,     5,
       6,     7,    39,    40,    41,    62,     0,     0,     3,     4,
       0,     6,     7,    19,     0,   241,    86,     7,    18,     7,
      18,    18,    50,    11,    52,    53,    32,    33,    22,    22,
     241,     0,    22,    39,    40,    41,    22,    32,    33,    13,
     110,   110,   112,    19,   114,     7,    20,   112,     7,   114,
      22,     7,   122,   110,   124,    11,    32,    33,     7,   129,
      50,   131,    52,    53,    19,   135,    18,   137,    19,   139,
      22,     7,   137,     0,   139,    11,     7,    32,    33,    19,
     150,    32,    33,    20,   112,    19,   114,   157,   158,   159,
     160,   161,    32,    33,     3,     4,    19,     6,     7,   169,
       9,    10,    19,    42,     3,     4,     5,     6,     7,   137,
      19,   139,   182,   183,    18,    22,     3,     4,    22,     6,
       7,    22,   112,    19,   114,    32,    33,   197,   198,   199,
     200,   201,    22,    32,    33,    22,    32,    33,    19,   209,
      39,    40,    41,    19,    19,    32,    33,   137,    23,   139,
      19,     3,     4,   223,     6,     7,    32,    33,   223,   229,
     230,   231,   232,   233,    19,     3,     4,    19,     6,     7,
      19,    19,    19,    19,    23,    19,     0,    32,    33,   249,
      32,    33,    22,     7,    32,    33,    32,    33,    22,     3,
       4,    22,     6,     7,    20,   223,    19,    22,    22,   320,
     270,   271,   272,   273,   274,   275,   276,   277,    22,   279,
     280,    19,    22,    18,   284,    22,   407,   408,    32,    33,
      44,    21,   413,    19,    32,    33,    50,    23,    52,    53,
      21,    21,   423,   223,    19,   305,   306,   307,   308,   309,
     310,   311,   312,    21,   314,   315,    21,    32,    33,   319,
     320,   320,   322,    19,   324,   325,   326,   322,     0,   324,
     325,    19,    86,   320,    19,     7,    32,    33,   338,   339,
     340,   341,   342,   343,    22,   345,   346,    32,    33,    19,
      22,   351,    19,    19,    32,    33,    23,    23,   112,    19,
     114,    19,    32,    33,   322,    23,   324,   325,    19,    21,
       3,     4,    44,     6,     7,    47,    22,    20,    50,     7,
      52,    53,    54,   137,    22,   139,    32,    33,    19,    22,
      62,    18,    23,    19,    32,    33,    19,    23,    22,    32,
      33,    22,   322,    22,   324,   325,    22,   407,   408,    22,
      22,    32,    33,   413,    86,   169,   416,    22,    19,    32,
      33,   416,    23,   423,     3,     4,    19,     6,     7,    19,
      23,    22,     3,     4,    19,     6,     7,    19,   110,    19,
     112,    19,   114,    22,    19,     3,     4,    19,     6,     7,
     122,    22,   124,    32,    33,   209,    19,   129,   416,   131,
      22,    32,    33,   135,    22,   137,    22,   139,    19,   223,
      32,    33,    19,    19,    32,    33,    32,    33,   150,     3,
       4,    22,     6,     7,    18,   157,   158,   159,   160,   161,
      22,    32,    33,    18,     7,   249,   416,   169,    22,    18,
      32,    33,     3,     4,    18,     6,     7,    22,    32,    33,
     182,   183,    22,    22,     3,     4,    22,     6,     7,     3,
       4,    22,     6,     7,    22,   197,   198,   199,   200,   201,
     284,    32,    33,    22,    22,    19,    22,   209,    32,    33,
      34,    35,    22,    32,    33,    22,    32,    33,    32,    33,
      22,   223,    32,    33,    22,    32,    33,   229,   230,   231,
     232,   233,    22,     3,     4,   319,     6,     7,   322,    22,
     324,   325,    32,    33,    19,    19,    19,   249,     0,     1,
      22,     3,     4,     5,     6,     7,     8,     9,    10,    22,
      12,    22,    14,    15,    16,    17,    22,   351,   270,   271,
     272,   273,   274,   275,   276,   277,    22,   279,   280,    22,
      32,    33,   284,    32,    33,    34,    35,    39,    40,    41,
       3,     4,    22,     6,     7,    22,    19,    19,     3,     4,
      19,     6,     7,   305,   306,   307,   308,   309,   310,   311,
     312,    19,   314,   315,    19,    19,    19,   319,   320,    19,
     322,    19,   324,   325,   326,    19,    19,    32,    33,    19,
       3,     4,   416,     6,     7,    19,   338,   339,   340,   341,
     342,   343,    22,   345,   346,    20,    19,    19,    22,   351,
       0,     3,     4,    22,     6,     7,    22,     7,    18,    32,
      33,    32,    33,    34,    35,    15,    16,    17,    18,    19,
       3,     4,    22,     6,     7,    32,    33,    34,    35,     3,
       4,    21,     6,     7,    21,     0,     3,     4,    20,     6,
       7,     0,     7,    21,    44,    19,    21,    47,     7,    22,
      50,   323,    52,    53,    54,   407,   408,    22,    32,    33,
      -1,   413,    62,    22,   416,    -1,     3,     4,    -1,     6,
       7,   423,    72,    73,    74,    75,    76,    77,    -1,    79,
      80,    -1,    19,    -1,    -1,    50,    86,    52,    53,    -1,
      -1,    50,    -1,    52,    53,    32,    33,    -1,     0,     3,
       4,    -1,     6,     7,    -1,     7,    32,    33,    34,    35,
     110,    -1,   112,    -1,   114,    19,    -1,    -1,     3,     4,
      22,     6,     7,     3,     4,    -1,     6,     7,    32,    33,
       3,     4,    -1,     6,     7,    -1,    -1,   137,    -1,   139,
      -1,     3,     4,    -1,     6,     7,    -1,   112,    50,   114,
      52,    53,    -1,   112,    -1,   114,    -1,   157,   158,   159,
     160,   161,    -1,     3,     4,    -1,     6,     7,    -1,   169,
      32,    33,   137,    -1,   139,    -1,    -1,    -1,   137,    19,
     139,    -1,   182,   183,    -1,    -1,     3,     4,    -1,     6,
       7,    -1,    32,    33,    -1,    -1,    -1,   197,   198,   199,
     200,   201,    19,     3,     4,    -1,     6,     7,    -1,   209,
     112,    -1,   114,    -1,    -1,    32,    33,     3,     4,    -1,
       6,     7,    -1,   223,     3,     4,    -1,     6,     7,   229,
     230,   231,   232,   233,    -1,   137,    -1,   139,     3,     4,
      -1,     6,     7,    -1,     0,    -1,    32,    33,    -1,   249,
      -1,     7,    -1,    32,    33,    -1,     3,     4,   223,     6,
       7,    -1,    -1,    -1,   223,    -1,    22,    32,    33,    -1,
     270,   271,   272,   273,   274,   275,   276,   277,    34,   279,
     280,    -1,    -1,    -1,   284,    32,    33,    43,    44,     3,
       4,    -1,     6,     7,    50,    -1,    52,    53,     3,     4,
      -1,     6,     7,    -1,    -1,   305,   306,   307,   308,   309,
     310,   311,   312,    -1,   314,   315,    -1,    -1,    -1,   319,
     320,   223,   322,    -1,   324,   325,   326,    -1,    84,    85,
      86,    -1,     3,     4,    -1,     6,     7,    -1,   338,   339,
     340,   341,   342,   343,    -1,   345,   346,    -1,    -1,     3,
       4,   351,     6,     7,    -1,    -1,   112,   322,   114,   324,
     325,    32,    33,   322,    -1,   324,   325,    -1,    -1,    -1,
       0,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,   137,    12,   139,    14,    15,    16,    17,     3,     4,
      -1,     6,     7,    -1,    -1,     3,     4,    -1,     6,     7,
      -1,    -1,    32,    33,     3,     4,   162,     6,     7,    39,
      40,    41,   168,   169,    -1,    -1,   416,    32,    33,    -1,
     322,    -1,   324,   325,    32,    33,     3,     4,    -1,     6,
       7,    -1,    -1,     0,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,   202,    14,    15,    16,
      17,   416,   208,   209,    -1,     3,     4,   416,     6,     7,
       3,     4,    -1,     6,     7,    32,    33,   223,    32,    33,
      34,    35,    39,    40,    41,    32,    33,    34,    35,    32,
      33,    34,    35,    -1,    -1,   241,    32,    33,    34,    35,
      -1,    -1,   248,   249,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     0,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,   416,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   282,   283,   284,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,   317,   318,   319,    42,    -1,   322,    -1,   324,   325,
      -1,    -1,     0,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      18,    -1,    -1,   349,   350,   351,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,     0,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     0,     1,
     416,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     0,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     0,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     0,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
       0,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,     0,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     0,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     0,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     0,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     0,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     0,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     0,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     0,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     0,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     0,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     0,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     0,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     0,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     0,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     0,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     0,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     0,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     0,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     0,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     0,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     0,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     0,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     0,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     0,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     0,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     0,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     0,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     0,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     0,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     0,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     0,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     0,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     0,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     0,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     0,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     0,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     0,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     0,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     0,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     0,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     0,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     0,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     0,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     0,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     0,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     0,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     0,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     0,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     0,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     0,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    18,    -1,
      -1,    21,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    19,    -1,
      39,    40,    41,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    19,    -1,
      -1,    42,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    19,    -1,
      -1,    42,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    19,    -1,
      -1,    42,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    19,    -1,
      -1,    42,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    19,    -1,
      -1,    42,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    19,    -1,
      -1,    42,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      22,    42,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    22,
      42,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,    22,    42,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    -1,    22,    42,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    22,    42,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    22,    42,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    10,
      12,    14,    15,    16,    17,    32,    33,    39,    40,    41,
      44,    45,    46,    47,    48,    49,    53,    54,    55,    56,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    18,     7,    63,
      18,    18,    18,    18,    18,    64,    64,    64,    64,    64,
       0,    45,    18,    22,    24,    25,    26,    27,    28,    29,
      30,    31,    34,    35,    36,    37,    38,    42,    74,    77,
      78,     7,    11,    74,    64,    73,    74,     7,    49,    50,
      51,    64,    22,    63,     7,    57,    58,    63,    63,    64,
      50,    64,    64,    64,    64,    64,    64,    64,    64,    19,
      23,    19,    42,    19,    22,    19,    19,    19,    19,    22,
      50,    13,    20,    63,    20,    63,    22,    22,    22,    20,
      12,    20,    47,    49,    52,    53,    52,    22,    52,    18,
      52,    21,    52,    21,    59,    63,    21,    63,    21,    19,
      20,    52,    21,     3,     4,     5,     6,    32,    33,    39,
      40,    41,    64,    65,    66,    70,    71,    72,    73,    74,
      75,    76,     3,     4,     6,     7,    65,    66,     3,     4,
       6,     7,    32,    33,    65,    66,     3,     4,     6,    65,
      66,    67,     3,     4,     5,     6,     7,    32,    33,    39,
      40,    41,    64,    65,    66,    70,    71,    72,    73,    74,
      75,    76,     3,     4,     6,     7,    65,    66,     3,     4,
       5,     6,     7,     8,    12,    14,    15,    16,    17,    32,
      33,    39,    40,    41,    54,    55,    56,    60,    61,    62,
      63,    64,    65,    66,    67,    70,    71,    72,    73,    74,
      75,    76,    22,     3,     4,     6,     7,    64,    65,    66,
      64,     3,     4,     6,     7,    64,    65,    66,    64,    64,
      32,    33,    34,    35,    36,    37,    38,    42,    74,    77,
      78,    74,    64,    73,    74,     3,     4,     6,     7,    64,
      65,    66,    64,     7,     3,     4,     6,     7,    64,    65,
      66,    64,    64,    64,    64,    32,    33,    34,    35,    36,
      37,    38,    42,    74,    77,    78,    74,    64,    73,    74,
      18,    63,    18,    18,    18,    18,    18,     3,     4,     6,
       7,    64,    65,    66,    64,    64,    64,    64,    34,    35,
      36,    37,    38,    42,    74,    77,    78,     7,    74,    64,
      73,    74,     3,     4,     6,     7,    64,    65,    66,    64,
      64,    64,    64,    64,    64,    64,    64,    64,     3,     4,
       6,     7,    64,    65,    66,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    50,    22,    63,    57,    63,    63,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    19,
      19,    19,    19,    19,    19,    22,    13,    20,    20,    22,
      22,    22,    12,    20,    52,    52,    18,    52,    21,    21,
      63,    21,    19,    20,    52,    21
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    45,    45,    46,    46,    46,    46,
      47,    48,    49,    50,    50,    50,    51,    51,    51,    52,
      52,    52,    53,    53,    53,    53,    53,    53,    53,    53,
      54,    54,    54,    55,    56,    57,    58,    59,    59,    60,
      60,    61,    62,    63,    63,    63,    64,    64,    65,    65,
      66,    66,    67,    67,    68,    69,    69,    70,    70,    71,
      71,    71,    71,    71,    72,    72,    72,    73,    73,    73,
      73,    73,    74,    74,    75,    75,    76,    76,    76,    77,
      77,    78,    78,    78,    78,    78,    78
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     1,
       2,     7,     2,     3,     1,     0,     1,     1,     1,     2,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       7,     8,    12,     3,     7,     5,     3,     1,     0,     5,
       5,     5,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     1,     1,     2,     2,     2,     2,
       3,     3,     2,     2,     2,     2,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1
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
#line 139 "src/syn.y"
                   {
      (yyval.node) = create_node(&(yyval.node), PROGRAM);
      root = (yyval.node);
      add_tree_node(&(yyval.node), &root);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_node(&$1);
      // printf("\n");
    }
#line 2745 "src/syn.tab.c"
    break;

  case 3:
#line 150 "src/syn.y"
                  {

    }
#line 2753 "src/syn.tab.c"
    break;

  case 4:
#line 156 "src/syn.y"
                                  {
      // printf(BHBLU "list_of_declarations -> declaration list_of_declarations\n" reset);
      (yyval.node) = create_node(&(yyval.node), LIST_OF_DECLARATIONS);
      add_tree_node(&(yyval.node), &(yyvsp[-1].node));
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_node(&$1);
      // printf("$2: ");
      // print_node(&$2);
    }
#line 2770 "src/syn.tab.c"
    break;

  case 5:
#line 168 "src/syn.y"
                   {
      // printf(BHBLU "list_of_declarations -> declaration\n" reset);
      (yyval.node) = create_node(&(yyval.node), LIST_OF_DECLARATIONS);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_node(&$1);
    }
#line 2784 "src/syn.tab.c"
    break;

  case 6:
#line 180 "src/syn.y"
                  {
    (yyval.node) = create_node(&(yyval.node), DECLARATION);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2793 "src/syn.tab.c"
    break;

  case 7:
#line 184 "src/syn.y"
                     {
    (yyval.node) = create_node(&(yyval.node), DECLARATION);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2802 "src/syn.tab.c"
    break;

  case 8:
#line 188 "src/syn.y"
            {
    (yyval.node) = create_node(&(yyval.node), DECLARATION);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2811 "src/syn.tab.c"
    break;

  case 9:
#line 192 "src/syn.y"
          {
    
    }
#line 2819 "src/syn.tab.c"
    break;

  case 10:
#line 198 "src/syn.y"
                      {
    (yyval.node) = create_node(&(yyval.node), VARIABLE_DECLARATION);
    add_tree_node(&(yyval.node), &(yyvsp[-1].node));
    add_tree_token_node(&(yyval.node), &(yyvsp[0].token), SEMICOLON);
   }
#line 2829 "src/syn.tab.c"
    break;

  case 11:
#line 206 "src/syn.y"
                                                                {
      (yyval.node) = create_node(&(yyval.node), FUNCTION_DECLARATION);
      add_tree_node(&(yyval.node), &(yyvsp[-6].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-5].token), OPEN_PARENTHESES);
      add_tree_node(&(yyval.node), &(yyvsp[-4].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-3].token), CLOSE_PARENTHESES);
      add_tree_token_node(&(yyval.node), &(yyvsp[-2].token), OPEN_CURLY_BRACKET);
      add_tree_node(&(yyval.node), &(yyvsp[-1].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), CLOSE_CURLY_BRACKET);
    }
#line 2844 "src/syn.tab.c"
    break;

  case 12:
#line 219 "src/syn.y"
          {
    (yyval.node) = create_node(&(yyval.node), UNIQUE_DECLARATION);
    add_tree_node(&(yyval.node), &(yyvsp[-1].node));
    add_tree_token_node(&(yyval.node), &(yyvsp[0].token), IDENTIFIER);
   }
#line 2854 "src/syn.tab.c"
    break;

  case 13:
#line 227 "src/syn.y"
                                {
    (yyval.node) = create_node(&(yyval.node), LIST_OF_PARAMETERS);
    add_tree_node(&(yyval.node), &(yyvsp[-2].node));
    add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), COMMA);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
   }
#line 2865 "src/syn.tab.c"
    break;

  case 14:
#line 233 "src/syn.y"
              {
    (yyval.node) = create_node(&(yyval.node), LIST_OF_PARAMETERS);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2874 "src/syn.tab.c"
    break;

  case 15:
#line 237 "src/syn.y"
                  {

    }
#line 2882 "src/syn.tab.c"
    break;

  case 16:
#line 243 "src/syn.y"
                  {
    (yyval.node) = create_node(&(yyval.node), PARAMETER);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2891 "src/syn.tab.c"
    break;

  case 17:
#line 247 "src/syn.y"
        {
    (yyval.node) = create_node(&(yyval.node), PARAMETER);
    add_tree_token_node(&(yyval.node), &(yyvsp[0].token), IDENTIFIER);
    }
#line 2900 "src/syn.tab.c"
    break;

  case 18:
#line 251 "src/syn.y"
               {
    (yyval.node) = create_node(&(yyval.node), PARAMETER);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2909 "src/syn.tab.c"
    break;

  case 19:
#line 258 "src/syn.y"
                          {
    (yyval.node) = create_node(&(yyval.node), BLOCK_OF_COMMANDS);
    add_tree_node(&(yyval.node), &(yyvsp[-1].node));
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2919 "src/syn.tab.c"
    break;

  case 20:
#line 263 "src/syn.y"
            {
    (yyval.node) = create_node(&(yyval.node), BLOCK_OF_COMMANDS);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2928 "src/syn.tab.c"
    break;

  case 21:
#line 267 "src/syn.y"
                  {

    }
#line 2936 "src/syn.tab.c"
    break;

  case 22:
#line 273 "src/syn.y"
                  {
    (yyval.node) = create_node(&(yyval.node), COMMAND);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2945 "src/syn.tab.c"
    break;

  case 23:
#line 277 "src/syn.y"
                     {
    (yyval.node) = create_node(&(yyval.node), COMMAND);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2954 "src/syn.tab.c"
    break;

  case 24:
#line 281 "src/syn.y"
                {
    (yyval.node) = create_node(&(yyval.node), COMMAND);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2963 "src/syn.tab.c"
    break;

  case 25:
#line 285 "src/syn.y"
              {
    (yyval.node) = create_node(&(yyval.node), COMMAND);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2972 "src/syn.tab.c"
    break;

  case 26:
#line 289 "src/syn.y"
          {
    (yyval.node) = create_node(&(yyval.node), COMMAND);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2981 "src/syn.tab.c"
    break;

  case 27:
#line 293 "src/syn.y"
           {
    (yyval.node) = create_node(&(yyval.node), COMMAND);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2990 "src/syn.tab.c"
    break;

  case 28:
#line 297 "src/syn.y"
                 {
    (yyval.node) = create_node(&(yyval.node), COMMAND);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2999 "src/syn.tab.c"
    break;

  case 29:
#line 301 "src/syn.y"
               {
    (yyval.node) = create_node(&(yyval.node), COMMAND);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3008 "src/syn.tab.c"
    break;

  case 30:
#line 308 "src/syn.y"
                                                    {
      (yyval.node) = create_node(&(yyval.node), CONDITIONAL_STMT);
      add_tree_token_node(&(yyval.node), &(yyvsp[-6].token), IF);
      add_tree_token_node(&(yyval.node), &(yyvsp[-5].token), OPEN_PARENTHESES);
      add_tree_node(&(yyval.node), &(yyvsp[-4].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-3].token), CLOSE_PARENTHESES);
      add_tree_token_node(&(yyval.node), &(yyvsp[-2].token), OPEN_CURLY_BRACKET);
      add_tree_node(&(yyval.node), &(yyvsp[-1].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), CLOSE_CURLY_BRACKET);
    }
#line 3023 "src/syn.tab.c"
    break;

  case 31:
#line 318 "src/syn.y"
                                                                {
      (yyval.node) = create_node(&(yyval.node), CONDITIONAL_STMT);
      add_tree_token_node(&(yyval.node), &(yyvsp[-7].token), IF);
      add_tree_token_node(&(yyval.node), &(yyvsp[-6].token), OPEN_PARENTHESES);
      add_tree_node(&(yyval.node), &(yyvsp[-5].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-4].token), CLOSE_PARENTHESES);
      add_tree_token_node(&(yyval.node), &(yyvsp[-3].token), ELSE);
      add_tree_token_node(&(yyval.node), &(yyvsp[-2].token), OPEN_CURLY_BRACKET);
      add_tree_node(&(yyval.node), &(yyvsp[-1].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), CLOSE_CURLY_BRACKET);
    }
#line 3039 "src/syn.tab.c"
    break;

  case 32:
#line 329 "src/syn.y"
                                                                                         {
      (yyval.node) = create_node(&(yyval.node), CONDITIONAL_STMT);
      add_tree_token_node(&(yyval.node), &(yyvsp[-11].token), IF);
      add_tree_token_node(&(yyval.node), &(yyvsp[-10].token), OPEN_PARENTHESES);
      add_tree_node(&(yyval.node), &(yyvsp[-9].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-8].token), CLOSE_PARENTHESES);
      add_tree_token_node(&(yyval.node), &(yyvsp[-7].token), ELSE);
      add_tree_token_node(&(yyval.node), &(yyvsp[-6].token), IF);
      add_tree_token_node(&(yyval.node), &(yyvsp[-5].token), OPEN_PARENTHESES);
      add_tree_node(&(yyval.node), &(yyvsp[-4].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-3].token), CLOSE_PARENTHESES);
      add_tree_token_node(&(yyval.node), &(yyvsp[-2].token), OPEN_CURLY_BRACKET);
      add_tree_node(&(yyval.node), &(yyvsp[-1].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), CLOSE_CURLY_BRACKET);
    }
#line 3059 "src/syn.tab.c"
    break;

  case 33:
#line 347 "src/syn.y"
                            {
      (yyval.node) = create_node(&(yyval.node), RETURN_STMT);
      add_tree_token_node(&(yyval.node), &(yyvsp[-2].token), RETURN);
      add_tree_node(&(yyval.node), &(yyvsp[-1].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), SEMICOLON);
    }
#line 3070 "src/syn.tab.c"
    break;

  case 34:
#line 356 "src/syn.y"
                                                         {
      (yyval.node) = create_node(&(yyval.node), ITERATION_PROCESS);
      add_tree_token_node(&(yyval.node), &(yyvsp[-6].token), FOR);
      add_tree_token_node(&(yyval.node), &(yyvsp[-5].token), OPEN_PARENTHESES);
      add_tree_node(&(yyval.node), &(yyvsp[-4].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-3].token), CLOSE_PARENTHESES);
      add_tree_token_node(&(yyval.node), &(yyvsp[-2].token), OPEN_CURLY_BRACKET);
      add_tree_node(&(yyval.node), &(yyvsp[-1].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), CLOSE_CURLY_BRACKET);
    }
#line 3085 "src/syn.tab.c"
    break;

  case 35:
#line 369 "src/syn.y"
                                          {
      (yyval.node) = create_node(&(yyval.node), LOOP_CONDITION);
      add_tree_node(&(yyval.node), &(yyvsp[-4].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-3].token), SEMICOLON);
      add_tree_node(&(yyval.node), &(yyvsp[-2].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), SEMICOLON);
      add_tree_node(&(yyval.node), &(yyvsp[-2].node));
    }
#line 3098 "src/syn.tab.c"
    break;

  case 36:
#line 380 "src/syn.y"
                    {
      (yyval.node) = create_node(&(yyval.node), INITIALIZATION_STMT);
      add_tree_token_node(&(yyval.node), &(yyvsp[-2].token), IDENTIFIER);
      add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), ASSIGN);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3109 "src/syn.tab.c"
    break;

  case 37:
#line 389 "src/syn.y"
            {
      (yyval.node) = create_node(&(yyval.node), UPDATE_STMT);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3118 "src/syn.tab.c"
    break;

  case 38:
#line 393 "src/syn.y"
                  {

   }
#line 3126 "src/syn.tab.c"
    break;

  case 39:
#line 399 "src/syn.y"
                                     {
      (yyval.node) = create_node(&(yyval.node), INPUT_OPERATION);
      add_tree_token_node(&(yyval.node), &(yyvsp[-4].token), WRITE);
      add_tree_token_node(&(yyval.node), &(yyvsp[-3].token), OPEN_PARENTHESES);
      add_tree_node(&(yyval.node), &(yyvsp[-2].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), CLOSE_PARENTHESES);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), SEMICOLON);
    }
#line 3139 "src/syn.tab.c"
    break;

  case 40:
#line 407 "src/syn.y"
                                        {
      (yyval.node) = create_node(&(yyval.node), INPUT_OPERATION);
      add_tree_token_node(&(yyval.node), &(yyvsp[-4].token), WRITELN);
      add_tree_token_node(&(yyval.node), &(yyvsp[-3].token), OPEN_PARENTHESES);
      add_tree_node(&(yyval.node), &(yyvsp[-2].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), CLOSE_PARENTHESES);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), SEMICOLON);
    }
#line 3152 "src/syn.tab.c"
    break;

  case 41:
#line 418 "src/syn.y"
                                     {
      (yyval.node) = create_node(&(yyval.node), OUTPUT_OPERATION);
      add_tree_token_node(&(yyval.node), &(yyvsp[-4].token), READ);
      add_tree_token_node(&(yyval.node), &(yyvsp[-3].token), OPEN_PARENTHESES);
      add_tree_node(&(yyval.node), &(yyvsp[-2].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), CLOSE_PARENTHESES);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), SEMICOLON);
    }
#line 3165 "src/syn.tab.c"
    break;

  case 42:
#line 429 "src/syn.y"
                                {
      (yyval.node) = create_node(&(yyval.node), FUNCTION_CALLING);
      add_tree_token_node(&(yyval.node), &(yyvsp[-4].token), IDENTIFIER);
      add_tree_token_node(&(yyval.node), &(yyvsp[-3].token), OPEN_PARENTHESES);
      add_tree_node(&(yyval.node), &(yyvsp[-2].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), CLOSE_PARENTHESES);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), SEMICOLON);
    }
#line 3178 "src/syn.tab.c"
    break;

  case 43:
#line 440 "src/syn.y"
            {
      (yyval.node) = create_node(&(yyval.node), STATEMENT);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3187 "src/syn.tab.c"
    break;

  case 44:
#line 444 "src/syn.y"
               {
      (yyval.node) = create_node(&(yyval.node), STATEMENT);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3196 "src/syn.tab.c"
    break;

  case 45:
#line 448 "src/syn.y"
           {
      (yyval.node) = create_node(&(yyval.node), STATEMENT);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), STRING);
    }
#line 3205 "src/syn.tab.c"
    break;

  case 46:
#line 455 "src/syn.y"
     {
    // printf(BHBLU "declaration -> <ID, %s>\n" reset, $1.lexeme);
    (yyval.node) = create_node(&(yyval.node), EXPRESSION);
    add_tree_token_node(&(yyval.node), &(yyvsp[0].token), IDENTIFIER);
    // printf("$$: ");
    // print_node(&$$);
    // printf("$1: ");
    // print_token(&$1);
    // printf("\n\n");
    }
#line 3220 "src/syn.tab.c"
    break;

  case 47:
#line 465 "src/syn.y"
            {
      (yyval.node) = create_node(&(yyval.node), EXPRESSION);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3234 "src/syn.tab.c"
    break;

  case 48:
#line 477 "src/syn.y"
          {
      (yyval.node) = create_node(&(yyval.node), CONSTANT);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3248 "src/syn.tab.c"
    break;

  case 49:
#line 486 "src/syn.y"
             {
      (yyval.node) = create_node(&(yyval.node), CONSTANT);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), NIL);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3262 "src/syn.tab.c"
    break;

  case 50:
#line 498 "src/syn.y"
          {
      // printf(BHBLU "declaration -> <INTEGER, %s>\n" reset, $1.lexeme);
      (yyval.node) = create_node(&(yyval.node), NUMBER);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), NUMBER_INT);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3277 "src/syn.tab.c"
    break;

  case 51:
#line 508 "src/syn.y"
              {
      // printf(BHBLU "declaration -> <FLOAT, %s>\n" reset, $1.lexeme);
      (yyval.node) = create_node(&(yyval.node), NUMBER);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), NUMBER_FLOAT);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3292 "src/syn.tab.c"
    break;

  case 52:
#line 521 "src/syn.y"
            {
      (yyval.node) = create_node(&(yyval.node), TYPE);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3306 "src/syn.tab.c"
    break;

  case 53:
#line 530 "src/syn.y"
                 {
      (yyval.node) = create_node(&(yyval.node), TYPE);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3320 "src/syn.tab.c"
    break;

  case 54:
#line 542 "src/syn.y"
                       {
      (yyval.node) = create_node(&(yyval.node), TYPE_LST);
      add_tree_node(&(yyval.node), &(yyvsp[-1].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), TYPE_LIST);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3335 "src/syn.tab.c"
    break;

  case 55:
#line 555 "src/syn.y"
        {
      (yyval.node) = create_node(&(yyval.node), NUMBER);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), TYPE_INT);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3349 "src/syn.tab.c"
    break;

  case 56:
#line 564 "src/syn.y"
            {
      (yyval.node) = create_node(&(yyval.node), NUMBER);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), TYPE_FLOAT);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3363 "src/syn.tab.c"
    break;

  case 59:
#line 581 "src/syn.y"
               {
      (yyval.node) = create_node(&(yyval.node), B_OPERATION);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3372 "src/syn.tab.c"
    break;

  case 60:
#line 585 "src/syn.y"
               {
      (yyval.node) = create_node(&(yyval.node), B_OPERATION);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3381 "src/syn.tab.c"
    break;

  case 61:
#line 589 "src/syn.y"
                              {
      (yyval.node) = create_node(&(yyval.node), B_OPERATION);
      add_tree_node(&(yyval.node), &(yyvsp[-2].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), ASSIGN);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3392 "src/syn.tab.c"
    break;

  case 62:
#line 595 "src/syn.y"
                                             {
      (yyval.node) = create_node(&(yyval.node), B_OPERATION);
      add_tree_node(&(yyval.node), &(yyvsp[-2].node));
      add_tree_node(&(yyval.node), &(yyvsp[-1].node));
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3403 "src/syn.tab.c"
    break;

  case 63:
#line 601 "src/syn.y"
                                       {
      (yyval.node) = create_node(&(yyval.node), B_OPERATION);
      add_tree_node(&(yyval.node), &(yyvsp[-2].node));
      add_tree_node(&(yyval.node), &(yyvsp[-1].node));
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3414 "src/syn.tab.c"
    break;

  case 64:
#line 610 "src/syn.y"
               {
      (yyval.node) = create_node(&(yyval.node), S_OPERATION);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3423 "src/syn.tab.c"
    break;

  case 65:
#line 614 "src/syn.y"
               {
      (yyval.node) = create_node(&(yyval.node), S_OPERATION);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3432 "src/syn.tab.c"
    break;

  case 66:
#line 618 "src/syn.y"
                   {
    // printf(BHBLU "not_tail -> <NOT_OR_TAIL, %s>\n" reset, $1.lexeme);
    (yyval.node) = create_node(&(yyval.node), S_OPERATION);
    add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), NOT_OR_TAIL);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    // printf("$$: ");
    // print_node(&$$);
    // printf("$1: ");
    // print_token(&$1);
    // printf("\n\n");
  }
#line 3448 "src/syn.tab.c"
    break;

  case 67:
#line 632 "src/syn.y"
                          {
      (yyval.node) = create_node(&(yyval.node), ARITHMETIC_BINARY);
      add_tree_node(&(yyval.node), &(yyvsp[-1].node));
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3458 "src/syn.tab.c"
    break;

  case 68:
#line 637 "src/syn.y"
                              {
      (yyval.node) = create_node(&(yyval.node), ARITHMETIC_BINARY);
      add_tree_node(&(yyval.node), &(yyvsp[-1].node));
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3468 "src/syn.tab.c"
    break;

  case 69:
#line 642 "src/syn.y"
                              {
      (yyval.node) = create_node(&(yyval.node), ARITHMETIC_BINARY);
      add_tree_node(&(yyval.node), &(yyvsp[-1].node));
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3478 "src/syn.tab.c"
    break;

  case 70:
#line 647 "src/syn.y"
                              {
      // printf(BHBLU "arithmetic_operator -> <MULTIPLY_OP, %s>\n" reset, $1.lexeme);
      (yyval.node) = create_node(&(yyval.node), ARITHMETIC_BINARY);
      add_tree_node(&(yyval.node), &(yyvsp[-2].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), MULTIPLY_OP);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
      
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n");
    }
#line 3496 "src/syn.tab.c"
    break;

  case 71:
#line 660 "src/syn.y"
                              {
      // printf(BHBLU "arithmetic_operator -> <DIVISION_OP, %s>\n" reset, $1.lexeme);
       (yyval.node) = create_node(&(yyval.node), ARITHMETIC_BINARY);
      add_tree_node(&(yyval.node), &(yyvsp[-2].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), DIVISION_OP);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3513 "src/syn.tab.c"
    break;

  case 72:
#line 675 "src/syn.y"
                   {
      // printf(BHBLU "arithmetic_operator -> <ADD_OP, %s>\n" reset, $1.lexeme);
      (yyval.node) = create_node(&(yyval.node), ARITHMETIC_SINGLE);
      add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), ADD_OP);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3529 "src/syn.tab.c"
    break;

  case 73:
#line 686 "src/syn.y"
                   {
      // printf(BHBLU "arithmetic_operator -> <MINUS_OP, %s>\n" reset, $1.lexeme);
      (yyval.node) = create_node(&(yyval.node), ARITHMETIC_SINGLE);
      add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), MINUS_OP);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n");
    }
#line 3545 "src/syn.tab.c"
    break;

  case 74:
#line 700 "src/syn.y"
                 {
      // printf(BHBLU "list_operator -> <POP_OP, %s>\n" reset, $1.lexeme);
      (yyval.node) = create_node(&(yyval.node), LIST_SINGLE);
      add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), POP_OP);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3561 "src/syn.tab.c"
    break;

  case 75:
#line 711 "src/syn.y"
                   {
      // printf(BHBLU "list_operator -> <HEAD_OP, %s>\n" reset, $1.lexeme);
      (yyval.node) = create_node(&(yyval.node), LIST_SINGLE);
      add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), HEAD_OP);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3577 "src/syn.tab.c"
    break;

  case 76:
#line 725 "src/syn.y"
                               {
      // printf(BHBLU "list_operator -> <FILTER_OP, %s>\n" reset, $1.lexeme);
      (yyval.node) = create_node(&(yyval.node), LIST_BINARY);
      add_tree_node(&(yyval.node), &(yyvsp[-2].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), FILTER_OP);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3594 "src/syn.tab.c"
    break;

  case 77:
#line 737 "src/syn.y"
                              {
      // printf(BHBLU "list_operator -> <MAP_OP, %s>\n" reset, $1.lexeme);
      (yyval.node) = create_node(&(yyval.node), LIST_BINARY);
      add_tree_node(&(yyval.node), &(yyvsp[-2].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), MAP_OP);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3611 "src/syn.tab.c"
    break;

  case 78:
#line 749 "src/syn.y"
                              {
      // printf(BHBLU "list_operator -> <CONSTRUCTOR_OP, %s>\n" reset, $1.lexeme);
      (yyval.node) = create_node(&(yyval.node), LIST_BINARY);
      add_tree_node(&(yyval.node), &(yyvsp[-2].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), CONSTRUCTOR_OP);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3628 "src/syn.tab.c"
    break;

  case 79:
#line 764 "src/syn.y"
       {
      // printf(BHBLU "logic_operator -> <CONSTRUCTOR_OP, %s>\n" reset, $1.lexeme);
      (yyval.node) = create_node(&(yyval.node), LOGIC_OPERATOR);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), AND_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3643 "src/syn.tab.c"
    break;

  case 80:
#line 774 "src/syn.y"
       {
      // printf(BHBLU "logic_operator -> <CONSTRUCTOR_OP, %s>\n" reset, $1.lexeme);
      (yyval.node) = create_node(&(yyval.node), LOGIC_OPERATOR);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), OR_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3658 "src/syn.tab.c"
    break;

  case 81:
#line 787 "src/syn.y"
          {
      // printf(BHBLU "relational_operator -> <CONSTRUCTOR_OP, %s>\n" reset, $1.lexeme);
      (yyval.node) = create_node(&(yyval.node), RELATIONAL_OPERATOR);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), GT_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3673 "src/syn.tab.c"
    break;

  case 82:
#line 797 "src/syn.y"
               {
      // printf(BHBLU "relational_operator -> <POP_OP, %s>\n" reset, $1.lexeme);
      (yyval.node) = create_node(&(yyval.node), RELATIONAL_OPERATOR);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), GE_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3688 "src/syn.tab.c"
    break;

  case 83:
#line 807 "src/syn.y"
         {
      // printf(BHBLU "relational_operator -> <HEAD_OP, %s>\n" reset, $1.lexeme);
      (yyval.node) = create_node(&(yyval.node), RELATIONAL_OPERATOR);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), LT_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3703 "src/syn.tab.c"
    break;

  case 84:
#line 817 "src/syn.y"
            {
      // printf(BHBLU "relational_operator -> <HEAD_OP, %s>\n" reset, $1.lexeme);
      (yyval.node) = create_node(&(yyval.node), RELATIONAL_OPERATOR);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), LE_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3718 "src/syn.tab.c"
    break;

  case 85:
#line 827 "src/syn.y"
          {
      // printf(BHBLU "relational_operator -> <HEAD_OP, %s>\n" reset, $1.lexeme);
      (yyval.node) = create_node(&(yyval.node), RELATIONAL_OPERATOR);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), EQ_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3733 "src/syn.tab.c"
    break;

  case 86:
#line 837 "src/syn.y"
           {
      // printf(BHBLU "relational_operator -> <HEAD_OP, %s>\n" reset, $1.lexeme);
      (yyval.node) = create_node(&(yyval.node), RELATIONAL_OPERATOR);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), NE_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3748 "src/syn.tab.c"
    break;


#line 3752 "src/syn.tab.c"

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
#line 884 "src/syn.y"

//********** C Functions **********
int yyerror(char *s) {
  fprintf(stderr, BHRED "\nError: %s in line: %d, column: %d\n" reset "\n", s, yylineno, column-yyleng);
  return 0;
}

int main(int argc, char **argv) {
  ++argv, --argc;
  symbol_table = create_table();
  
  // tree_node *root = create_node();

  if ( argc > 0 ) {
    yyin = fopen( argv[0], "r" );
    yyparse();
  }
  else
    yyin = stdin;
  
  total_lexical_errors();

  printf("\n~~~~ ABSTRACT TREE ~~~~\n\n");
  print_tree(&root, 1);

  printf("\n----------------------------------------------------\n");
  printf("\t\t    SYMBOL TABLE");
  printf("\n----------------------------------------------------\n");
  printf("  ID\t|  TOKENS\t\t\t|  SCOPE");
  printf("\n----------------------------------------------------\n");
  print_table();
  destroy_table();
  fclose(yyin);
  yylex_destroy();
  
  return 0;
}
