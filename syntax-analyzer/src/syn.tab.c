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
#line 130 "src/syn.y"

  t_token token;
  t_node node;

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
#define YYFINAL  60
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6220

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  430

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
       0,   140,   140,   151,   157,   169,   181,   185,   189,   193,
     199,   207,   207,   220,   220,   229,   235,   239,   245,   249,
     253,   260,   265,   269,   275,   279,   283,   287,   291,   295,
     299,   303,   310,   320,   331,   349,   358,   371,   382,   391,
     395,   401,   409,   420,   431,   442,   446,   450,   457,   467,
     479,   488,   500,   510,   523,   532,   544,   557,   566,   578,
     579,   583,   587,   591,   597,   603,   612,   616,   620,   634,
     639,   644,   649,   662,   677,   688,   702,   713,   727,   739,
     751,   766,   776,   789,   799,   809,   819,   829,   839
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
  "func_declaration", "$@1", "unq_declaration", "$@2", "lst_parameters",
  "parameter", "block_commands", "command", "conditional_stmt",
  "return_stmt", "iteration", "loop_condition", "init_stmt", "update_stmt",
  "input", "output", "func_calling", "statement", "expression", "const",
  "number", "type", "type_lst", "type_number", "operation",
  "binary_operation", "single_operation", "arith_binary", "arith_single",
  "lst_single", "lst_binary", "log_operator", "relation_operator", YY_NULLPTR
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

#define YYPACT_NINF (-189)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-89)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1471,  1513,  1154,  1254,  1555,  1297,  1075,    34,    25,   103,
      -3,     2,    53,    54,    65,   239,   239,   239,   239,   239,
      45,    80,  1597,  1639,  1681,   136,  1723,  1765,  1807,  1849,
    1891,  1933,  1975,  2017,  1342,  1385,  1428,    95,    98,   182,
    2059,  2101,  2143,  2185,  2227,  2269,  2311,   368,  6064,    69,
     173,   115,   173,   173,   473,  2353,  2395,  2437,  2479,  2521,
    -189,   137,  2563,   135,   492,   532,   552,   575,   585,   620,
     625,   658,   239,   239,   239,   239,   239,   239,  2605,   239,
     239,   148,   157,  2647,   742,  2689,   861,   204,   225,   151,
     242,   311,  2731,   153,   125,   167,   169,   185,   191,   199,
     368,  2773,  2815,  2857,  2899,  2941,  2983,  3025,  3067,   336,
     217,   368,    56,    34,   208,    34,   227,   230,   232,   228,
    3109,   249,    -4,  4016,   247,  4016,   248,  3151,  3193,  3235,
     260,   265,  4016,  4055,   272,   275,  4094,   282,   252,  4016,
     173,   283,  3277,   294,  3319,   299,   306,   312,   333,  3361,
    3403,   335,  4016,   339,  3445,  6083,  6102,   348,  6121,   756,
     756,   798,   798,   798,  6140,  6159,  6178,   358,   363,   369,
      46,    86,   378,   380,  3487,  3529,  3571,  3613,  3655,  3697,
     787,   793,   818,   893,   805,   805,   946,   979,   344,   407,
     418,   484,   498,    95,  1187,  5945,   395,  5965,  5985,   879,
     879,   473,   473,   473,  6005,  6025,  6045,   397,   402,   415,
      62,   162,   424,   431,   432,   434,   447,   465,   468,   474,
    3776,  3816,  4133,  3856,  3736,    34,   387,   441,   476,   486,
     487,   932,   932,   932,   932,   932,  4172,  4211,  4250,  4289,
    4328,  4367,  4406,  3896,  3936,  3976,    95,  4445,  4484,  4523,
    4562,  4601,  4640,  4679,  4718,   362,   386,   403,   442,   479,
     512,   519,   543,   480,   488,   502,   521,   526,   531,   535,
     544,   545,   959,   959,   959,   959,   798,   798,   798,   798,
      74,   798,   798,   176,  1016,   266,   861,   866,   884,   901,
     915,  1026,  1064,  1115,  1120,   561,   234,   580,   615,   680,
     685,   702,   781,   791,   555,   558,   566,   966,   966,   966,
     966,   473,   473,   473,   473,    84,   473,   473,   102,  1020,
     109,   861,   368,   568,   173,   115,   173,   173,   473,  4757,
    4796,  4835,  4874,  4913,  4952,  4991,  5030,  5069,  5108,  5147,
     932,   932,   932,   932,   932,   932,  5186,   932,   932,   586,
    5225,  1097,  5264,   861,   317,   324,   364,   366,   391,   400,
     406,   425,   438,   440,   573,   576,   578,   587,   592,   594,
     514,   112,   114,   124,   155,   164,   188,   197,   231,   268,
     287,   598,   601,   606,   611,   630,   633,   635,  5303,   640,
     644,   647,   648,   649,  5342,  5381,  5420,  5459,  5498,  5537,
    5576,  5615,   622,   653,   206,   577,   657,   668,   676,  5654,
      50,  4016,  4016,  5693,  5732,  5771,   662,  4016,   681,   682,
     173,   686,  5810,  5849,   691,  5888,   694,  4016,   690,  5927
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -189,  -189,   679,  -189,     4,  -189,  -189,     1,  -188,   -98,
    -189,  -122,     6,    12,    21,    24,   390,  -189,  -189,    27,
      29,    60,    35,   678,     0,   329,     9,  -189,  -189,    77,
     456,   520,    11,   924,   716,   720,  -145,  -139
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,    21,    22,   133,    24,    63,   134,    81,    89,
      90,   135,   136,   236,   237,   238,    95,    96,   145,   239,
     240,   241,   242,   243,   178,   179,   246,    38,    39,   247,
     248,   249,   250,   251,   252,   253,    79,    80
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      35,    25,   119,   137,    23,   295,    26,   165,   131,    37,
     141,    43,    27,   121,   143,    50,   132,   147,   170,   281,
      51,    28,    35,    25,    29,   282,    23,    30,    26,    31,
     153,    37,   -57,    43,    27,    33,   -57,   155,   156,   157,
     158,    48,    49,    28,   186,    60,    29,   191,    88,    30,
     205,    31,   205,   205,   218,    85,   193,    33,   349,   316,
      32,   210,   416,   210,   210,   317,   159,   160,   -61,   122,
     417,    52,    53,   161,   162,   163,   123,    40,   272,   273,
      -2,   -61,    32,    54,   167,    93,   186,    97,    98,   180,
     181,    92,   182,   183,   307,   308,   -69,    85,   347,    40,
     191,    88,   -13,   -69,   348,   -54,   -69,   -69,   -66,   193,
     -58,   191,    88,   165,   -58,   165,   -69,   -69,   184,   185,
     193,   -70,    94,   244,   170,   244,   170,   207,   -71,   207,
     207,   -52,   244,   -53,   -70,   -70,   244,    -4,   205,   244,
     205,   307,   308,   -51,   -52,   -52,   -53,   -53,   124,   210,
     126,   210,   244,   100,   -11,   109,   -51,   -51,    62,   260,
     260,   268,   268,   268,   -56,   180,   181,   113,   182,   183,
     110,   186,   112,   146,   -48,   148,   194,   195,   196,   197,
     198,   -66,   285,   -74,   292,   292,   114,   -48,   -48,   -55,
     167,   115,   167,    82,   184,   185,   -74,   -74,   -70,   301,
     301,   218,   218,   218,   116,   199,   200,   -49,   -70,   -70,
     117,   186,   201,   202,   203,   207,   -50,   207,   118,   410,
     -49,   -49,   320,   -19,   387,   165,   411,   -19,   125,   -50,
     -50,   334,   334,   334,   334,   334,   170,   -52,   -52,   120,
     -52,   -52,   174,   175,   -18,   176,   177,   130,   -18,   127,
     -75,   186,   128,   -52,   129,   194,   195,   196,   197,   198,
     323,   -16,   352,   -75,   -75,   111,   -52,   -52,   -15,   -38,
     138,   -40,   359,   359,   359,   359,   268,   268,   268,   268,
     139,   268,   268,   140,   199,   200,   186,   -72,   -71,   418,
     419,   201,   202,   203,   254,   421,   142,   285,   272,   273,
     -72,   -72,   167,   144,   149,   428,   -73,   376,   376,   376,
     376,   218,   218,   218,   218,   -21,   218,   218,   -37,   -73,
     -73,   186,   191,    88,   205,   -39,   205,   205,   218,    36,
     -20,   193,   320,   150,   -20,   210,   166,   210,   210,   -52,
     334,   334,   334,   334,   334,   334,   -53,   334,   334,   -52,
     -52,    36,   151,   186,   -14,   152,   -53,   -53,   -14,   389,
     154,   391,   392,   -52,   352,   -52,   -52,   -52,   -52,   -52,
     -47,   188,   189,   187,   190,    87,   192,     8,     9,   206,
     -45,   206,   206,   219,   -52,   -60,   -51,   -17,   -48,   -53,
     -53,   -59,   -53,   -53,   -52,   -52,   -51,   -51,   -48,   -48,
     -67,   207,   -62,   207,   207,   324,   -51,   -51,   -53,   -51,
     -51,   244,   244,   -74,   -47,   187,   -45,   244,   -53,   -53,
     205,   -60,   -49,   -74,   -74,   -51,   -53,   244,   -50,   192,
     -53,   210,   -49,   -49,   -59,   -51,   -51,   -51,   -50,   -50,
     192,   -51,   166,   -67,   166,   -48,   -48,   -75,   -48,   -48,
     -62,   -52,   245,   -53,   245,   424,    41,   -75,   -75,   325,
     -72,   245,   -73,   168,   -48,   245,   -51,   206,   245,   206,
     -72,   -72,   -73,   -73,   -48,   -48,   214,   215,    41,   216,
     217,   245,   -74,   -74,   -48,   -74,   -74,   -49,   261,   261,
     269,   269,   269,   -50,   326,   -81,   -81,   207,   -81,   -81,
     187,   -74,   -52,   -49,   327,   328,   208,   -49,   208,   208,
     -53,   -74,   -74,   293,   293,   -49,   -49,   -50,   -49,   -49,
      42,   -50,   -50,   -50,   -51,   -50,   -50,   169,   302,   302,
     219,   219,   219,   -14,   -49,   -82,   -82,   -14,   -82,   -82,
     187,   -50,    42,   -48,   -49,   -49,   -75,   -75,   -76,   -75,
     -75,   -50,   -50,   -49,   166,   -83,   -83,   -50,   -83,   -83,
     335,   335,   335,   335,   335,   -75,   -77,   -68,   370,   168,
     209,   168,   209,   209,   -76,   -75,   -75,   -77,   -84,   -84,
     187,   -84,   -84,   -53,   -53,   -68,   -53,   -53,   -85,   -85,
     388,   -85,   -85,   402,   208,   -78,   208,   412,   -79,   -53,
     -80,   360,   360,   360,   360,   269,   269,   269,   269,   -63,
     269,   269,   -53,   -53,   -65,   187,   -64,   -78,   -51,   -51,
     -79,   -51,   -51,   -86,   -86,   -80,   -86,   -86,   -87,   -87,
     -63,   -87,   -87,   169,   -51,   169,   377,   377,   377,   377,
     219,   219,   219,   219,   -14,   219,   219,   -51,   -51,   -65,
     187,   192,   -64,   206,   403,   206,   206,   219,   209,   404,
     209,   -88,   -88,   405,   -88,   -88,   406,   407,   408,   335,
     335,   335,   335,   335,   335,   409,   335,   335,    34,   413,
     420,   168,   187,   -48,   -48,   164,   -48,   -48,   -74,   -74,
     414,   -74,   -74,    55,    56,    57,    58,    59,   415,   -48,
      34,    61,   422,   423,   -74,   -49,   -49,   425,   -49,   -49,
     426,   429,   -48,   -48,   427,   390,    45,   -74,   -74,     0,
      46,   -49,    84,   172,     0,    91,     0,   173,   204,     0,
     204,   204,    99,     0,   -49,   -49,     0,     0,    45,     0,
     245,   245,    46,     0,     0,   169,   245,     0,     0,   206,
     101,   102,   103,   104,   105,   106,   245,   107,   108,   255,
     256,     0,   257,   258,    84,     0,   212,     0,   212,   212,
     213,     0,   213,   213,    15,    16,    72,    73,    91,     0,
     208,     0,   208,   208,   -50,   -50,     0,   -50,   -50,    91,
       0,   164,     0,   164,   -75,   -75,     0,   -75,   -75,     0,
     -50,   263,   264,     0,   265,   266,     0,     0,   287,   288,
     -75,   289,   290,   -50,   -50,     0,   204,     0,   204,   -52,
     -52,   -52,   -52,   -75,   -75,   -53,   -53,   -53,   -53,   172,
       0,   172,     0,   173,     0,   173,     0,   259,   262,   267,
     270,   271,     0,     0,   209,     0,   209,   209,     0,   284,
     -51,   -51,   -51,   -51,   212,     0,   212,     0,   213,     0,
     213,     0,   291,   294,   180,   181,     0,   182,   183,   -52,
     -52,     0,   -52,   -52,     0,     0,   208,   300,   303,   304,
     305,   306,   296,   297,     0,   298,   299,   -53,   -53,   319,
     -53,   -53,     0,   184,   185,     0,     0,     0,   -52,   -52,
       0,     0,     0,   164,   -51,   -51,     0,   -51,   -51,   333,
     336,   337,   338,   339,     0,     0,   -53,   -53,   -48,   -48,
       0,   -48,   -48,     0,    44,   -48,   -48,   -48,   -48,   351,
       0,   171,     0,   -51,   -51,   329,   330,     0,   331,   332,
     209,   172,     0,     0,     0,   173,    44,   -48,   -48,     0,
     358,   361,   362,   363,   364,   365,   366,   367,    78,   368,
     369,     0,   354,   355,   284,   356,   357,    83,    86,   371,
     372,     0,   373,   374,   211,     0,   211,   211,   -49,   -49,
     -49,   -49,     0,     0,     0,   375,   378,   379,   380,   381,
     382,   383,   384,     0,   385,   386,     0,     0,     0,   319,
      91,     0,   204,     0,   204,   204,   393,     0,    78,    83,
      86,   -50,   -50,   -50,   -50,     0,     0,     0,   394,   395,
     396,   397,   398,   399,     0,   400,   401,     0,     0,   -74,
     -74,   351,   -74,   -74,     0,     0,     0,   171,     0,   171,
     212,     0,   212,   212,   213,     0,   213,   213,   272,   273,
     274,   275,   307,   308,   309,   310,     0,     0,   -74,   -74,
       0,     0,   211,     0,   211,     0,     0,   -49,   -49,     0,
     -49,   -49,     0,     0,     0,   -48,   -48,     0,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,     0,   -48,   280,   -48,
     -48,   -48,   -48,    47,   283,   286,   -49,   -49,   204,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -50,   -50,
       0,   -50,   -50,   -75,   -75,     0,   -75,   -75,   315,   231,
     232,   340,   341,     0,   318,   321,   212,     0,     0,     0,
     213,     0,     0,     0,     0,     0,     0,   -50,   -50,   171,
       0,     0,   -75,   -75,   -52,   -52,     0,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,     0,   -52,   346,   -52,   -52,
     -52,   -52,     0,     0,   350,   353,     0,     0,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -52,     0,   280,   283,
     286,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,     0,     0,     0,   -52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   315,   318,   321,     0,     0,   211,     0,
     211,   211,     0,     0,   -53,   -53,     0,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,     0,   -53,     0,   -53,   -53,
     -53,   -53,     0,     0,     0,   346,   350,   353,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -51,   -51,     0,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,   -51,
       0,   -51,   -51,   -51,   -51,     0,     0,     0,     0,     0,
       0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
       0,     0,   -46,   -46,   211,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,     0,   -46,     0,   -46,   -46,   -46,   -46,
       0,     0,     0,     0,     0,     0,    64,    65,    66,    67,
      68,    69,    70,    71,    15,    16,    72,    73,    74,    75,
      76,   -46,   -46,   -46,    77,   -49,   -49,     0,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,     0,   -49,     0,   -49,
     -49,   -49,   -49,     0,     0,     0,     0,     0,     0,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -50,   -50,
       0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,
     -50,     0,   -50,   -50,   -50,   -50,     0,     0,     0,     0,
       0,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,    -3,     1,     0,     2,     3,     4,     5,     6,     7,
       8,     9,     0,    10,     0,    11,    12,    13,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    15,    16,     0,     0,     0,     0,     0,
      17,    18,    19,    -9,    -9,     0,    -9,    -9,    -9,    -9,
      -9,    -9,    -9,    -9,     0,    -9,     0,    -9,    -9,    -9,
      -9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    -9,    -9,     0,     0,     0,
       0,     0,    -9,    -9,    -9,   -47,   -47,     0,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,     0,   -47,
     -47,   -47,   -47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -47,   -47,     0,
       0,     0,     0,     0,   -47,   -47,   -47,    -5,     1,     0,
       2,     3,     4,     5,     6,     7,     8,     9,     0,    10,
       0,    11,    12,    13,    14,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
      16,     0,     0,     0,     0,     0,    17,    18,    19,    -6,
      -6,     0,    -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,
       0,    -6,     0,    -6,    -6,    -6,    -6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    -6,    -6,     0,     0,     0,     0,     0,    -6,    -6,
      -6,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,     0,    -7,     0,    -7,    -7,    -7,    -7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    -7,    -7,     0,     0,     0,     0,     0,
      -7,    -7,    -7,    -8,    -8,     0,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,     0,    -8,     0,    -8,    -8,    -8,
      -8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    -8,    -8,     0,     0,     0,
       0,     0,    -8,    -8,    -8,   -25,   -25,     0,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,     0,   -25,
     -25,   -25,   -25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -25,   -25,     0,
       0,     0,     0,     0,   -25,   -25,   -25,   -26,   -26,     0,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,
       0,   -26,   -26,   -26,   -26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -26,
     -26,     0,     0,     0,     0,     0,   -26,   -26,   -26,   -27,
     -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
       0,   -27,     0,   -27,   -27,   -27,   -27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -27,   -27,     0,     0,     0,     0,     0,   -27,   -27,
     -27,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,     0,   -28,     0,   -28,   -28,   -28,   -28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -28,   -28,     0,     0,     0,     0,     0,
     -28,   -28,   -28,   -29,   -29,     0,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,     0,   -29,     0,   -29,   -29,   -29,
     -29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -29,   -29,     0,     0,     0,
       0,     0,   -29,   -29,   -29,   -30,   -30,     0,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,     0,   -30,
     -30,   -30,   -30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -30,   -30,     0,
       0,     0,     0,     0,   -30,   -30,   -30,   -31,   -31,     0,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,
       0,   -31,   -31,   -31,   -31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -31,
     -31,     0,     0,     0,     0,     0,   -31,   -31,   -31,   -45,
     -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
       0,   -45,     0,   -45,   -45,   -45,   -45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -45,   -45,     0,     0,     0,     0,     0,   -45,   -45,
     -45,   -60,   -60,     0,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,     0,   -60,     0,   -60,   -60,   -60,   -60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -60,   -60,     0,     0,     0,     0,     0,
     -60,   -60,   -60,   -59,   -59,     0,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,     0,   -59,     0,   -59,   -59,   -59,
     -59,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -59,   -59,     0,     0,     0,
       0,     0,   -59,   -59,   -59,   -61,   -61,     0,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,     0,   -61,     0,   -61,
     -61,   -61,   -61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    15,    16,     0,
       0,     0,     0,     0,   -61,   -61,   -61,   -66,   -66,     0,
     180,   181,   -66,   182,   183,   -66,   -66,   -66,     0,   -66,
       0,   -66,   -66,   -66,   -66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   184,
     185,     0,     0,     0,     0,     0,   -66,   -66,   -66,   -67,
     -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
       0,   -67,     0,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -67,   -67,     0,     0,     0,     0,     0,   -67,   -67,
     -67,   -62,   -62,     0,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,     0,   -62,     0,   -62,   -62,   -62,   -62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -62,   -62,     0,     0,     0,     0,     0,
     -62,   -62,   -62,   -74,   -74,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,   -74,     0,   -74,   -74,   -74,
     -74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -74,   -74,     0,     0,     0,
       0,     0,   -74,   -74,   -74,   -75,   -75,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,     0,   -75,
     -75,   -75,   -75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -75,   -75,     0,
       0,     0,     0,     0,   -75,   -75,   -75,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,   -76,
       0,   -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -76,
     -76,     0,     0,     0,     0,     0,   -76,   -76,   -76,   -77,
     -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,   -77,     0,   -77,   -77,   -77,   -77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -77,   -77,     0,     0,     0,     0,     0,   -77,   -77,
     -77,   -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,   -68,     0,   -68,   -68,   -68,   -68,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -68,   -68,     0,     0,     0,     0,     0,
     -68,   -68,   -68,   -10,   -10,     0,   -10,   -10,   -10,   -10,
     -10,   -10,   -10,   -10,     0,   -10,     0,   -10,   -10,   -10,
     -10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -10,   -10,     0,     0,     0,
       0,     0,   -10,   -10,   -10,   -69,   -69,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,   -69,     0,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -69,   -69,     0,
       0,     0,     0,     0,   -69,   -69,   -69,   -70,   -70,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,
       0,   -70,   -70,   -70,   -70,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -70,
     -70,     0,     0,     0,     0,     0,   -70,   -70,   -70,   -71,
     -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
       0,   -71,     0,   -71,   -71,   -71,   -71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    15,    16,     0,     0,     0,     0,     0,   -71,   -71,
     -71,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,     0,   -35,     0,   -35,   -35,   -35,   -35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -35,   -35,     0,     0,     0,     0,     0,
     -35,   -35,   -35,   -72,   -72,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,     0,   -72,     0,   -72,   -72,   -72,
     -72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -72,   -72,     0,     0,     0,
       0,     0,   -72,   -72,   -72,   -73,   -73,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,     0,   -73,
     -73,   -73,   -73,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -73,   -73,     0,
       0,     0,     0,     0,   -73,   -73,   -73,   -78,   -78,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,   -78,
       0,   -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -78,
     -78,     0,     0,     0,     0,     0,   -78,   -78,   -78,   -79,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,   -79,     0,   -79,   -79,   -79,   -79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -79,   -79,     0,     0,     0,     0,     0,   -79,   -79,
     -79,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,   -80,     0,   -80,   -80,   -80,   -80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -80,   -80,     0,     0,     0,     0,     0,
     -80,   -80,   -80,   -63,   -63,     0,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,   -63,     0,   -63,   -63,   -63,
     -63,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -63,   -63,     0,     0,     0,
       0,     0,   -63,   -63,   -63,   -65,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,     0,   -65,     0,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -65,   -65,     0,
       0,     0,     0,     0,   -65,   -65,   -65,   -64,   -64,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,   -64,
       0,   -64,   -64,   -64,   -64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -64,
     -64,     0,     0,     0,     0,     0,   -64,   -64,   -64,   -44,
     -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
       0,   -44,     0,   -44,   -44,   -44,   -44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -44,   -44,     0,     0,     0,     0,     0,   -44,   -44,
     -44,   -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,     0,   -41,     0,   -41,   -41,   -41,   -41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -41,   -41,     0,     0,     0,     0,     0,
     -41,   -41,   -41,   -42,   -42,     0,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,     0,   -42,     0,   -42,   -42,   -42,
     -42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -42,   -42,     0,     0,     0,
       0,     0,   -42,   -42,   -42,   -43,   -43,     0,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,     0,   -43,
     -43,   -43,   -43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -43,   -43,     0,
       0,     0,     0,     0,   -43,   -43,   -43,   -32,   -32,     0,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,
       0,   -32,   -32,   -32,   -32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -32,
     -32,     0,     0,     0,     0,     0,   -32,   -32,   -32,   -36,
     -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
       0,   -36,     0,   -36,   -36,   -36,   -36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -36,   -36,     0,     0,     0,     0,     0,   -36,   -36,
     -36,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,     0,   -33,     0,   -33,   -33,   -33,   -33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -33,   -33,     0,     0,     0,     0,     0,
     -33,   -33,   -33,   -12,   -12,     0,   -12,   -12,   -12,   -12,
     -12,   -12,   -12,   -12,     0,   -12,     0,   -12,   -12,   -12,
     -12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -12,   -12,     0,     0,     0,
       0,     0,   -12,   -12,   -12,   -34,   -34,     0,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,     0,   -34,
     -34,   -34,   -34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -34,   -34,     0,
       0,     0,     0,     0,   -34,   -34,   -34,   -52,   -52,     0,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,   -52,
       0,   -52,   -52,   -52,   -52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -52,
     -52,     0,     0,     0,     0,     0,   -52,   -52,   -52,   -53,
     -53,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
       0,   -53,     0,   -53,   -53,   -53,   -53,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -53,   -53,     0,     0,     0,     0,     0,   -53,   -53,
     -53,   -51,   -51,     0,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,     0,   -51,     0,   -51,   -51,   -51,   -51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -51,   -51,     0,     0,     0,     0,     0,
     -51,   -51,   -51,   -48,   -48,     0,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,     0,   -48,     0,   -48,   -48,   -48,
     -48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -48,   -48,     0,     0,     0,
       0,     0,   -48,   -48,   -48,   -49,   -49,     0,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,     0,   -49,     0,   -49,
     -49,   -49,   -49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -49,   -49,     0,
       0,     0,     0,     0,   -49,   -49,   -49,   -50,   -50,     0,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,
       0,   -50,   -50,   -50,   -50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -50,
     -50,     0,     0,     0,     0,     0,   -50,   -50,   -50,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,   -48,     0,
     -48,   -48,   -48,   -48,   322,     0,     0,   -48,     0,     0,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,   -52,     0,
     -52,   -52,   -52,   -52,     0,     0,     0,   -52,     0,     0,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,     0,   -53,     0,
     -53,   -53,   -53,   -53,     0,     0,     0,   -53,     0,     0,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,   -51,     0,
     -51,   -51,   -51,   -51,     0,     0,     0,   -51,     0,     0,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,     0,
     -46,   -46,   -46,   -46,     0,     0,     0,   -46,     0,     0,
      64,    65,    66,    67,    68,    69,    70,    71,   231,   232,
     340,   341,   342,   343,   344,   -46,   -46,   -46,   345,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,   -49,     0,
     -49,   -49,   -49,   -49,     0,     0,     0,   -49,     0,     0,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,     0,
     -50,   -50,   -50,   -50,     0,     0,     0,   -50,     0,     0,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   220,
     221,   222,   223,   224,   225,     8,     9,     0,   226,     0,
     227,   228,   229,   230,     0,     0,     0,   -23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   231,   232,
       0,     0,     0,     0,     0,   233,   234,   235,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,     0,   -24,
     -24,   -24,   -24,     0,     0,     0,   -24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -24,   -24,     0,
       0,     0,     0,     0,   -24,   -24,   -24,   220,   221,   222,
     223,   224,   225,     8,     9,     0,   226,     0,   227,   228,
     229,   230,     0,     0,     0,   -22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   231,   232,     0,     0,
       0,     0,     0,   233,   234,   235,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,     0,   -47,     0,   -47,   -47,   -47,
     -47,     0,     0,     0,   -47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -47,   -47,     0,     0,     0,
       0,     0,   -47,   -47,   -47,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,     0,   -25,     0,   -25,   -25,   -25,   -25,
       0,     0,     0,   -25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -25,   -25,     0,     0,     0,     0,
       0,   -25,   -25,   -25,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,     0,   -26,     0,   -26,   -26,   -26,   -26,     0,
       0,     0,   -26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -26,   -26,     0,     0,     0,     0,     0,
     -26,   -26,   -26,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,     0,   -27,     0,   -27,   -27,   -27,   -27,     0,     0,
       0,   -27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -27,   -27,     0,     0,     0,     0,     0,   -27,
     -27,   -27,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
       0,   -28,     0,   -28,   -28,   -28,   -28,     0,     0,     0,
     -28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -28,   -28,     0,     0,     0,     0,     0,   -28,   -28,
     -28,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,
     -29,     0,   -29,   -29,   -29,   -29,     0,     0,     0,   -29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -29,   -29,     0,     0,     0,     0,     0,   -29,   -29,   -29,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,
       0,   -30,   -30,   -30,   -30,     0,     0,     0,   -30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -30,
     -30,     0,     0,     0,     0,     0,   -30,   -30,   -30,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,     0,
     -31,   -31,   -31,   -31,     0,     0,     0,   -31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -31,   -31,
       0,     0,     0,     0,     0,   -31,   -31,   -31,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,     0,   -45,
     -45,   -45,   -45,     0,     0,     0,   -45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -45,   -45,     0,
       0,     0,     0,     0,   -45,   -45,   -45,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,     0,   -60,     0,   -60,   -60,
     -60,   -60,     0,     0,     0,   -60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -60,   -60,     0,     0,
       0,     0,     0,   -60,   -60,   -60,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,     0,   -59,     0,   -59,   -59,   -59,
     -59,     0,     0,     0,   -59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -59,   -59,     0,     0,     0,
       0,     0,   -59,   -59,   -59,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,     0,   -61,     0,   -61,   -61,   -61,   -61,
       0,     0,     0,   -61,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   231,   232,     0,     0,     0,     0,
       0,   -61,   -61,   -61,   180,   181,   -66,   182,   183,   -66,
     -66,   -66,     0,   -66,     0,   -66,   -66,   -66,   -66,     0,
       0,     0,   -66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   184,   185,     0,     0,     0,     0,     0,
     -66,   -66,   -66,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,     0,   -67,     0,   -67,   -67,   -67,   -67,     0,     0,
       0,   -67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -67,   -67,     0,     0,     0,     0,     0,   -67,
     -67,   -67,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
       0,   -62,     0,   -62,   -62,   -62,   -62,     0,     0,     0,
     -62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -62,   -62,     0,     0,     0,     0,     0,   -62,   -62,
     -62,   -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,     0,
     -10,     0,   -10,   -10,   -10,   -10,     0,     0,     0,   -10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -10,   -10,     0,     0,     0,     0,     0,   -10,   -10,   -10,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,   -52,
       0,   -52,   -52,   -52,   -52,     0,     0,     0,   -52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -52,
     -52,     0,     0,     0,     0,     0,   -52,   -52,   -52,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,     0,   -53,     0,
     -53,   -53,   -53,   -53,     0,     0,     0,   -53,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -53,   -53,
       0,     0,     0,     0,     0,   -53,   -53,   -53,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,     0,   -51,     0,   -51,
     -51,   -51,   -51,     0,     0,     0,   -51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -51,   -51,     0,
       0,     0,     0,     0,   -51,   -51,   -51,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,     0,   -48,     0,   -48,   -48,
     -48,   -48,     0,     0,     0,   -48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -48,   -48,     0,     0,
       0,     0,     0,   -48,   -48,   -48,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,   -74,     0,   -74,   -74,   -74,
     -74,     0,     0,     0,   -74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -74,   -74,     0,     0,     0,
       0,     0,   -74,   -74,   -74,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,     0,   -49,     0,   -49,   -49,   -49,   -49,
       0,     0,     0,   -49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -49,   -49,     0,     0,     0,     0,
       0,   -49,   -49,   -49,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,     0,   -50,     0,   -50,   -50,   -50,   -50,     0,
       0,     0,   -50,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -50,   -50,     0,     0,     0,     0,     0,
     -50,   -50,   -50,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,     0,   -75,     0,   -75,   -75,   -75,   -75,     0,     0,
       0,   -75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -75,   -75,     0,     0,     0,     0,     0,   -75,
     -75,   -75,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
       0,   -76,     0,   -76,   -76,   -76,   -76,     0,     0,     0,
     -76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -76,   -76,     0,     0,     0,     0,     0,   -76,   -76,
     -76,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
     -77,     0,   -77,   -77,   -77,   -77,     0,     0,     0,   -77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -77,   -77,     0,     0,     0,     0,     0,   -77,   -77,   -77,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,   -68,
       0,   -68,   -68,   -68,   -68,     0,     0,     0,   -68,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -68,
     -68,     0,     0,     0,     0,     0,   -68,   -68,   -68,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,   -69,     0,
     -69,   -69,   -69,   -69,     0,     0,     0,   -69,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -69,   -69,
       0,     0,     0,     0,     0,   -69,   -69,   -69,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,     0,   -70,
     -70,   -70,   -70,     0,     0,     0,   -70,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -70,   -70,     0,
       0,     0,     0,     0,   -70,   -70,   -70,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,   -71,     0,   -71,   -71,
     -71,   -71,     0,     0,     0,   -71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   231,   232,     0,     0,
       0,     0,     0,   -71,   -71,   -71,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,     0,   -35,     0,   -35,   -35,   -35,
     -35,     0,     0,     0,   -35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -35,   -35,     0,     0,     0,
       0,     0,   -35,   -35,   -35,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,   -72,     0,   -72,   -72,   -72,   -72,
       0,     0,     0,   -72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -72,   -72,     0,     0,     0,     0,
       0,   -72,   -72,   -72,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,   -73,     0,   -73,   -73,   -73,   -73,     0,
       0,     0,   -73,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -73,   -73,     0,     0,     0,     0,     0,
     -73,   -73,   -73,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,   -78,     0,   -78,   -78,   -78,   -78,     0,     0,
       0,   -78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -78,   -78,     0,     0,     0,     0,     0,   -78,
     -78,   -78,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,   -79,     0,   -79,   -79,   -79,   -79,     0,     0,     0,
     -79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -79,   -79,     0,     0,     0,     0,     0,   -79,   -79,
     -79,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
     -80,     0,   -80,   -80,   -80,   -80,     0,     0,     0,   -80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -80,   -80,     0,     0,     0,     0,     0,   -80,   -80,   -80,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,   -63,
       0,   -63,   -63,   -63,   -63,     0,     0,     0,   -63,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -63,
     -63,     0,     0,     0,     0,     0,   -63,   -63,   -63,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -65,     0,
     -65,   -65,   -65,   -65,     0,     0,     0,   -65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -65,   -65,
       0,     0,     0,     0,     0,   -65,   -65,   -65,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,     0,   -64,     0,   -64,
     -64,   -64,   -64,     0,     0,     0,   -64,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -64,   -64,     0,
       0,     0,     0,     0,   -64,   -64,   -64,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,     0,   -44,     0,   -44,   -44,
     -44,   -44,     0,     0,     0,   -44,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -44,   -44,     0,     0,
       0,     0,     0,   -44,   -44,   -44,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,     0,   -41,     0,   -41,   -41,   -41,
     -41,     0,     0,     0,   -41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -41,   -41,     0,     0,     0,
       0,     0,   -41,   -41,   -41,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,     0,   -42,     0,   -42,   -42,   -42,   -42,
       0,     0,     0,   -42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -42,   -42,     0,     0,     0,     0,
       0,   -42,   -42,   -42,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,     0,   -43,     0,   -43,   -43,   -43,   -43,     0,
       0,     0,   -43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -43,   -43,     0,     0,     0,     0,     0,
     -43,   -43,   -43,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,     0,   -32,     0,   -32,   -32,   -32,   -32,     0,     0,
       0,   -32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -32,   -32,     0,     0,     0,     0,     0,   -32,
     -32,   -32,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
       0,   -36,     0,   -36,   -36,   -36,   -36,     0,     0,     0,
     -36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -36,   -36,     0,     0,     0,     0,     0,   -36,   -36,
     -36,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -33,     0,   -33,   -33,   -33,   -33,     0,     0,     0,   -33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -33,   -33,     0,     0,     0,     0,     0,   -33,   -33,   -33,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,
       0,   -34,   -34,   -34,   -34,     0,     0,     0,   -34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -34,
     -34,     0,     0,     0,   -53,     0,   -34,   -34,   -34,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -51,     0,     0,   -53,     0,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -48,     0,     0,   -51,     0,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -46,     0,     0,   -48,     0,    64,
      65,    66,    67,    68,    69,    70,    71,   307,   308,   309,
     310,   311,   312,   313,   -49,     0,     0,   314,     0,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -50,     0,     0,   -49,     0,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,     0,     0,   -48,   -50,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,     0,     0,   -52,   -48,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,     0,     0,   -53,   -52,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,     0,     0,   -51,   -53,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
       0,     0,   -46,   -51,    64,    65,    66,    67,    68,    69,
      70,    71,   272,   273,   274,   275,   276,   277,   278,     0,
       0,   -49,   279,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,     0,
     -50,   -49,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,     0,     0,
     -50
};

static const yytype_int16 yycheck[] =
{
       0,     0,   100,   125,     0,   193,     0,     7,    12,     0,
     132,     0,     0,   111,   136,    18,    20,   139,     7,   164,
      18,     0,    22,    22,     0,   164,    22,     0,    22,     0,
     152,    22,     7,    22,    22,     0,    11,     3,     4,     5,
       6,     7,     7,    22,    44,     0,    22,    47,    47,    22,
      50,    22,    52,    53,    54,    44,    47,    22,   246,   204,
       0,    50,    12,    52,    53,   204,    32,    33,    22,    13,
      20,    18,    18,    39,    40,    41,    20,     0,    32,    33,
       0,    19,    22,    18,     7,    50,    86,    52,    53,     3,
       4,    22,     6,     7,    32,    33,    22,    86,   243,    22,
     100,   100,     7,    19,   243,     7,    32,    33,    22,   100,
       7,   111,   111,   113,    11,   115,    32,    33,    32,    33,
     111,    19,     7,   123,   113,   125,   115,    50,    19,    52,
      53,    19,   132,    19,    32,    33,   136,     0,   138,   139,
     140,    32,    33,    19,    32,    33,    32,    33,   113,   138,
     115,   140,   152,    18,    18,     7,    32,    33,    22,   159,
     160,   161,   162,   163,     7,     3,     4,    42,     6,     7,
      19,   171,    19,   138,    19,   140,     3,     4,     5,     6,
       7,    19,   171,    19,   184,   185,    19,    32,    33,     7,
     113,    22,   115,    11,    32,    33,    32,    33,    22,   199,
     200,   201,   202,   203,    19,    32,    33,    19,    32,    33,
      19,   211,    39,    40,    41,   138,    19,   140,    19,    13,
      32,    33,   211,    19,   322,   225,    20,    23,    20,    32,
      33,   231,   232,   233,   234,   235,   225,     3,     4,    22,
       6,     7,     3,     4,    19,     6,     7,    19,    23,    22,
      19,   251,    22,    19,    22,     3,     4,     5,     6,     7,
     225,    19,   251,    32,    33,    23,    32,    33,    19,    22,
      22,    19,   272,   273,   274,   275,   276,   277,   278,   279,
      20,   281,   282,    18,    32,    33,   286,    19,    22,   411,
     412,    39,    40,    41,    22,   417,    21,   286,    32,    33,
      32,    33,   225,    21,    21,   427,    19,   307,   308,   309,
     310,   311,   312,   313,   314,    21,   316,   317,    19,    32,
      33,   321,   322,   322,   324,    19,   326,   327,   328,     0,
      19,   322,   321,    21,    23,   324,     7,   326,   327,    22,
     340,   341,   342,   343,   344,   345,    22,   347,   348,    32,
      33,    22,    19,   353,    18,    20,    32,    33,    22,   324,
      21,   326,   327,    19,   353,     3,     4,    23,     6,     7,
      22,     3,     4,    44,     6,     7,    47,     9,    10,    50,
      22,    52,    53,    54,    22,    22,    22,    19,    22,     3,
       4,    22,     6,     7,    32,    33,    32,    33,    32,    33,
      22,   324,    22,   326,   327,    18,     3,     4,    22,     6,
       7,   411,   412,    22,    19,    86,    19,   417,    32,    33,
     420,    19,    22,    32,    33,    22,    19,   427,    22,   100,
      23,   420,    32,    33,    19,    32,    33,    19,    32,    33,
     111,    23,   113,    19,   115,     3,     4,    22,     6,     7,
      19,    19,   123,    19,   125,   420,     0,    32,    33,    18,
      22,   132,    22,     7,    22,   136,    19,   138,   139,   140,
      32,    33,    32,    33,    32,    33,     3,     4,    22,     6,
       7,   152,     3,     4,    19,     6,     7,    19,   159,   160,
     161,   162,   163,    19,    18,     3,     4,   420,     6,     7,
     171,    22,    22,    19,    18,    18,    50,    23,    52,    53,
      22,    32,    33,   184,   185,     3,     4,    19,     6,     7,
       0,    23,     3,     4,    22,     6,     7,     7,   199,   200,
     201,   202,   203,    19,    22,     3,     4,    23,     6,     7,
     211,    22,    22,    22,    32,    33,     3,     4,    22,     6,
       7,    32,    33,    22,   225,     3,     4,    22,     6,     7,
     231,   232,   233,   234,   235,    22,    22,    22,     7,   113,
      50,   115,    52,    53,    19,    32,    33,    19,     3,     4,
     251,     6,     7,     3,     4,    19,     6,     7,     3,     4,
      22,     6,     7,     7,   138,    22,   140,    20,    22,    19,
      22,   272,   273,   274,   275,   276,   277,   278,   279,    22,
     281,   282,    32,    33,    22,   286,    22,    19,     3,     4,
      19,     6,     7,     3,     4,    19,     6,     7,     3,     4,
      19,     6,     7,   113,    19,   115,   307,   308,   309,   310,
     311,   312,   313,   314,    22,   316,   317,    32,    33,    19,
     321,   322,    19,   324,    19,   326,   327,   328,   138,    19,
     140,     3,     4,    19,     6,     7,    19,    19,    19,   340,
     341,   342,   343,   344,   345,    22,   347,   348,     0,    22,
      18,   225,   353,     3,     4,     7,     6,     7,     3,     4,
      22,     6,     7,    15,    16,    17,    18,    19,    22,    19,
      22,    22,    21,    21,    19,     3,     4,    21,     6,     7,
      19,    21,    32,    33,    20,   325,     0,    32,    33,    -1,
       0,    19,    44,     7,    -1,    47,    -1,     7,    50,    -1,
      52,    53,    54,    -1,    32,    33,    -1,    -1,    22,    -1,
     411,   412,    22,    -1,    -1,   225,   417,    -1,    -1,   420,
      72,    73,    74,    75,    76,    77,   427,    79,    80,     3,
       4,    -1,     6,     7,    86,    -1,    50,    -1,    52,    53,
      50,    -1,    52,    53,    32,    33,    34,    35,   100,    -1,
     324,    -1,   326,   327,     3,     4,    -1,     6,     7,   111,
      -1,   113,    -1,   115,     3,     4,    -1,     6,     7,    -1,
      19,     3,     4,    -1,     6,     7,    -1,    -1,     3,     4,
      19,     6,     7,    32,    33,    -1,   138,    -1,   140,    32,
      33,    34,    35,    32,    33,    32,    33,    34,    35,   113,
      -1,   115,    -1,   113,    -1,   115,    -1,   159,   160,   161,
     162,   163,    -1,    -1,   324,    -1,   326,   327,    -1,   171,
      32,    33,    34,    35,   138,    -1,   140,    -1,   138,    -1,
     140,    -1,   184,   185,     3,     4,    -1,     6,     7,     3,
       4,    -1,     6,     7,    -1,    -1,   420,   199,   200,   201,
     202,   203,     3,     4,    -1,     6,     7,     3,     4,   211,
       6,     7,    -1,    32,    33,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,   225,     3,     4,    -1,     6,     7,   231,
     232,   233,   234,   235,    -1,    -1,    32,    33,     3,     4,
      -1,     6,     7,    -1,     0,    32,    33,    34,    35,   251,
      -1,     7,    -1,    32,    33,     3,     4,    -1,     6,     7,
     420,   225,    -1,    -1,    -1,   225,    22,    32,    33,    -1,
     272,   273,   274,   275,   276,   277,   278,   279,    34,   281,
     282,    -1,     3,     4,   286,     6,     7,    43,    44,     3,
       4,    -1,     6,     7,    50,    -1,    52,    53,    32,    33,
      34,    35,    -1,    -1,    -1,   307,   308,   309,   310,   311,
     312,   313,   314,    -1,   316,   317,    -1,    -1,    -1,   321,
     322,    -1,   324,    -1,   326,   327,   328,    -1,    84,    85,
      86,    32,    33,    34,    35,    -1,    -1,    -1,   340,   341,
     342,   343,   344,   345,    -1,   347,   348,    -1,    -1,     3,
       4,   353,     6,     7,    -1,    -1,    -1,   113,    -1,   115,
     324,    -1,   326,   327,   324,    -1,   326,   327,    32,    33,
      34,    35,    32,    33,    34,    35,    -1,    -1,    32,    33,
      -1,    -1,   138,    -1,   140,    -1,    -1,     3,     4,    -1,
       6,     7,    -1,    -1,    -1,     0,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,   164,    14,
      15,    16,    17,    18,   170,   171,    32,    33,   420,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     3,     4,
      -1,     6,     7,     3,     4,    -1,     6,     7,   204,    32,
      33,    34,    35,    -1,   210,   211,   420,    -1,    -1,    -1,
     420,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,   225,
      -1,    -1,    32,    33,     0,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,   243,    14,    15,
      16,    17,    -1,    -1,   250,   251,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,   284,   285,
     286,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   319,   320,   321,    -1,    -1,   324,    -1,
     326,   327,    -1,    -1,     0,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,   351,   352,   353,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     0,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    -1,     0,     1,   420,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,     0,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     0,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     0,     1,    -1,     3,     4,     5,     6,     7,     8,
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
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    18,    -1,    -1,    21,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     3,
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
      33,    -1,    -1,    -1,    19,    -1,    39,    40,    41,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    42,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    42,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    42,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    42,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    -1,    -1,    42,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    22,    42,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    22,    42,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    22,    42,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    22,    42,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    22,    42,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    22,    42,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      22,    42,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    10,
      12,    14,    15,    16,    17,    32,    33,    39,    40,    41,
      44,    45,    46,    47,    48,    50,    55,    56,    57,    58,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    18,     7,    65,
      18,    18,    18,    18,    18,    66,    66,    66,    66,    66,
       0,    45,    22,    49,    24,    25,    26,    27,    28,    29,
      30,    31,    34,    35,    36,    37,    38,    42,    76,    79,
      80,    51,    11,    76,    66,    75,    76,     7,    50,    52,
      53,    66,    22,    65,     7,    59,    60,    65,    65,    66,
      18,    66,    66,    66,    66,    66,    66,    66,    66,     7,
      19,    23,    19,    42,    19,    22,    19,    19,    19,    52,
      22,    52,    13,    20,    65,    20,    65,    22,    22,    22,
      19,    12,    20,    47,    50,    54,    55,    54,    22,    20,
      18,    54,    21,    54,    21,    61,    65,    54,    65,    21,
      21,    19,    20,    54,    21,     3,     4,     5,     6,    32,
      33,    39,    40,    41,    66,    67,    68,    72,    73,    74,
      75,    76,    77,    78,     3,     4,     6,     7,    67,    68,
       3,     4,     6,     7,    32,    33,    67,    68,     3,     4,
       6,    67,    68,    69,     3,     4,     5,     6,     7,    32,
      33,    39,    40,    41,    66,    67,    68,    72,    73,    74,
      75,    76,    77,    78,     3,     4,     6,     7,    67,    68,
       3,     4,     5,     6,     7,     8,    12,    14,    15,    16,
      17,    32,    33,    39,    40,    41,    56,    57,    58,    62,
      63,    64,    65,    66,    67,    68,    69,    72,    73,    74,
      75,    76,    77,    78,    22,     3,     4,     6,     7,    66,
      67,    68,    66,     3,     4,     6,     7,    66,    67,    68,
      66,    66,    32,    33,    34,    35,    36,    37,    38,    42,
      76,    79,    80,    76,    66,    75,    76,     3,     4,     6,
       7,    66,    67,    68,    66,    51,     3,     4,     6,     7,
      66,    67,    68,    66,    66,    66,    66,    32,    33,    34,
      35,    36,    37,    38,    42,    76,    79,    80,    76,    66,
      75,    76,    18,    65,    18,    18,    18,    18,    18,     3,
       4,     6,     7,    66,    67,    68,    66,    66,    66,    66,
      34,    35,    36,    37,    38,    42,    76,    79,    80,    51,
      76,    66,    75,    76,     3,     4,     6,     7,    66,    67,
      68,    66,    66,    66,    66,    66,    66,    66,    66,    66,
       7,     3,     4,     6,     7,    66,    67,    68,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    52,    22,    65,
      59,    65,    65,    66,    66,    66,    66,    66,    66,    66,
      66,    66,     7,    19,    19,    19,    19,    19,    19,    22,
      13,    20,    20,    22,    22,    22,    12,    20,    54,    54,
      18,    54,    21,    21,    65,    21,    19,    20,    54,    21
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    45,    45,    46,    46,    46,    46,
      47,    49,    48,    51,    50,    52,    52,    52,    53,    53,
      53,    54,    54,    54,    55,    55,    55,    55,    55,    55,
      55,    55,    56,    56,    56,    57,    58,    59,    60,    61,
      61,    62,    62,    63,    64,    65,    65,    65,    66,    66,
      67,    67,    68,    68,    69,    69,    70,    71,    71,    72,
      72,    73,    73,    73,    73,    73,    74,    74,    74,    75,
      75,    75,    75,    75,    76,    76,    77,    77,    78,    78,
      78,    79,    79,    80,    80,    80,    80,    80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     1,
       2,     0,     8,     0,     3,     3,     1,     0,     1,     1,
       1,     2,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     7,     8,    12,     3,     7,     5,     3,     1,
       0,     5,     5,     5,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     1,     1,     2,     2,
       2,     2,     3,     3,     2,     2,     2,     2,     3,     3,
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
#line 2764 "src/syn.tab.c"
    break;

  case 3:
#line 151 "src/syn.y"
                  {

    }
#line 2772 "src/syn.tab.c"
    break;

  case 4:
#line 157 "src/syn.y"
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
#line 2789 "src/syn.tab.c"
    break;

  case 5:
#line 169 "src/syn.y"
                   {
      // printf(BHBLU "list_of_declarations -> declaration\n" reset);
      (yyval.node) = create_node(&(yyval.node), LIST_OF_DECLARATIONS);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_node(&$1);
    }
#line 2803 "src/syn.tab.c"
    break;

  case 6:
#line 181 "src/syn.y"
                  {
    (yyval.node) = create_node(&(yyval.node), DECLARATION);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2812 "src/syn.tab.c"
    break;

  case 7:
#line 185 "src/syn.y"
                     {
    (yyval.node) = create_node(&(yyval.node), DECLARATION);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2821 "src/syn.tab.c"
    break;

  case 8:
#line 189 "src/syn.y"
            {
    (yyval.node) = create_node(&(yyval.node), DECLARATION);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2830 "src/syn.tab.c"
    break;

  case 9:
#line 193 "src/syn.y"
          {
    
    }
#line 2838 "src/syn.tab.c"
    break;

  case 10:
#line 199 "src/syn.y"
                      {
    (yyval.node) = create_node(&(yyval.node), VARIABLE_DECLARATION);
    add_tree_node(&(yyval.node), &(yyvsp[-1].node));
    add_tree_token_node(&(yyval.node), &(yyvsp[0].token), SEMICOLON);
   }
#line 2848 "src/syn.tab.c"
    break;

  case 11:
#line 207 "src/syn.y"
                  {increment_scope();}
#line 2854 "src/syn.tab.c"
    break;

  case 12:
#line 207 "src/syn.y"
                                                                                     {
      (yyval.node) = create_node(&(yyval.node), FUNCTION_DECLARATION);
      add_tree_node(&(yyval.node), &(yyvsp[-7].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-5].token), OPEN_PARENTHESES);
      add_tree_node(&(yyval.node), &(yyvsp[-4].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-3].token), CLOSE_PARENTHESES);
      add_tree_token_node(&(yyval.node), &(yyvsp[-2].token), OPEN_CURLY_BRACKET);
      add_tree_node(&(yyval.node), &(yyvsp[-1].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), CLOSE_CURLY_BRACKET);
    }
#line 2869 "src/syn.tab.c"
    break;

  case 13:
#line 220 "src/syn.y"
       {add_table_node(yytext);}
#line 2875 "src/syn.tab.c"
    break;

  case 14:
#line 220 "src/syn.y"
                                    {
    // add_table_node(yytext);
    (yyval.node) = create_node(&(yyval.node), UNIQUE_DECLARATION);
    add_tree_node(&(yyval.node), &(yyvsp[-2].node));
    add_tree_token_node(&(yyval.node), &(yyvsp[0].token), IDENTIFIER);
   }
#line 2886 "src/syn.tab.c"
    break;

  case 15:
#line 229 "src/syn.y"
                                {
    (yyval.node) = create_node(&(yyval.node), LIST_OF_PARAMETERS);
    add_tree_node(&(yyval.node), &(yyvsp[-2].node));
    add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), COMMA);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
   }
#line 2897 "src/syn.tab.c"
    break;

  case 16:
#line 235 "src/syn.y"
              {
    (yyval.node) = create_node(&(yyval.node), LIST_OF_PARAMETERS);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2906 "src/syn.tab.c"
    break;

  case 17:
#line 239 "src/syn.y"
                  {

    }
#line 2914 "src/syn.tab.c"
    break;

  case 18:
#line 245 "src/syn.y"
                  {
    (yyval.node) = create_node(&(yyval.node), PARAMETER);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2923 "src/syn.tab.c"
    break;

  case 19:
#line 249 "src/syn.y"
        {
    (yyval.node) = create_node(&(yyval.node), PARAMETER);
    add_tree_token_node(&(yyval.node), &(yyvsp[0].token), IDENTIFIER);
    }
#line 2932 "src/syn.tab.c"
    break;

  case 20:
#line 253 "src/syn.y"
               {
    (yyval.node) = create_node(&(yyval.node), PARAMETER);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2941 "src/syn.tab.c"
    break;

  case 21:
#line 260 "src/syn.y"
                          {
    (yyval.node) = create_node(&(yyval.node), BLOCK_OF_COMMANDS);
    add_tree_node(&(yyval.node), &(yyvsp[-1].node));
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2951 "src/syn.tab.c"
    break;

  case 22:
#line 265 "src/syn.y"
            {
    (yyval.node) = create_node(&(yyval.node), BLOCK_OF_COMMANDS);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2960 "src/syn.tab.c"
    break;

  case 23:
#line 269 "src/syn.y"
                  {

    }
#line 2968 "src/syn.tab.c"
    break;

  case 24:
#line 275 "src/syn.y"
                  {
    (yyval.node) = create_node(&(yyval.node), COMMAND);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2977 "src/syn.tab.c"
    break;

  case 25:
#line 279 "src/syn.y"
                     {
    (yyval.node) = create_node(&(yyval.node), COMMAND);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2986 "src/syn.tab.c"
    break;

  case 26:
#line 283 "src/syn.y"
                {
    (yyval.node) = create_node(&(yyval.node), COMMAND);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 2995 "src/syn.tab.c"
    break;

  case 27:
#line 287 "src/syn.y"
              {
    (yyval.node) = create_node(&(yyval.node), COMMAND);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3004 "src/syn.tab.c"
    break;

  case 28:
#line 291 "src/syn.y"
          {
    (yyval.node) = create_node(&(yyval.node), COMMAND);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3013 "src/syn.tab.c"
    break;

  case 29:
#line 295 "src/syn.y"
           {
    (yyval.node) = create_node(&(yyval.node), COMMAND);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3022 "src/syn.tab.c"
    break;

  case 30:
#line 299 "src/syn.y"
                 {
    (yyval.node) = create_node(&(yyval.node), COMMAND);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3031 "src/syn.tab.c"
    break;

  case 31:
#line 303 "src/syn.y"
               {
    (yyval.node) = create_node(&(yyval.node), COMMAND);
    add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3040 "src/syn.tab.c"
    break;

  case 32:
#line 310 "src/syn.y"
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
#line 3055 "src/syn.tab.c"
    break;

  case 33:
#line 320 "src/syn.y"
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
#line 3071 "src/syn.tab.c"
    break;

  case 34:
#line 331 "src/syn.y"
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
#line 3091 "src/syn.tab.c"
    break;

  case 35:
#line 349 "src/syn.y"
                            {
      (yyval.node) = create_node(&(yyval.node), RETURN_STMT);
      add_tree_token_node(&(yyval.node), &(yyvsp[-2].token), RETURN);
      add_tree_node(&(yyval.node), &(yyvsp[-1].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), SEMICOLON);
    }
#line 3102 "src/syn.tab.c"
    break;

  case 36:
#line 358 "src/syn.y"
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
#line 3117 "src/syn.tab.c"
    break;

  case 37:
#line 371 "src/syn.y"
                                          {
      (yyval.node) = create_node(&(yyval.node), LOOP_CONDITION);
      add_tree_node(&(yyval.node), &(yyvsp[-4].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-3].token), SEMICOLON);
      add_tree_node(&(yyval.node), &(yyvsp[-2].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), SEMICOLON);
      add_tree_node(&(yyval.node), &(yyvsp[-2].node));
    }
#line 3130 "src/syn.tab.c"
    break;

  case 38:
#line 382 "src/syn.y"
                    {
      (yyval.node) = create_node(&(yyval.node), INITIALIZATION_STMT);
      add_tree_token_node(&(yyval.node), &(yyvsp[-2].token), IDENTIFIER);
      add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), ASSIGN);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3141 "src/syn.tab.c"
    break;

  case 39:
#line 391 "src/syn.y"
            {
      (yyval.node) = create_node(&(yyval.node), UPDATE_STMT);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3150 "src/syn.tab.c"
    break;

  case 40:
#line 395 "src/syn.y"
                  {

   }
#line 3158 "src/syn.tab.c"
    break;

  case 41:
#line 401 "src/syn.y"
                                     {
      (yyval.node) = create_node(&(yyval.node), INPUT_OPERATION);
      add_tree_token_node(&(yyval.node), &(yyvsp[-4].token), WRITE);
      add_tree_token_node(&(yyval.node), &(yyvsp[-3].token), OPEN_PARENTHESES);
      add_tree_node(&(yyval.node), &(yyvsp[-2].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), CLOSE_PARENTHESES);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), SEMICOLON);
    }
#line 3171 "src/syn.tab.c"
    break;

  case 42:
#line 409 "src/syn.y"
                                        {
      (yyval.node) = create_node(&(yyval.node), INPUT_OPERATION);
      add_tree_token_node(&(yyval.node), &(yyvsp[-4].token), WRITELN);
      add_tree_token_node(&(yyval.node), &(yyvsp[-3].token), OPEN_PARENTHESES);
      add_tree_node(&(yyval.node), &(yyvsp[-2].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), CLOSE_PARENTHESES);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), SEMICOLON);
    }
#line 3184 "src/syn.tab.c"
    break;

  case 43:
#line 420 "src/syn.y"
                                     {
      (yyval.node) = create_node(&(yyval.node), OUTPUT_OPERATION);
      add_tree_token_node(&(yyval.node), &(yyvsp[-4].token), READ);
      add_tree_token_node(&(yyval.node), &(yyvsp[-3].token), OPEN_PARENTHESES);
      add_tree_node(&(yyval.node), &(yyvsp[-2].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), CLOSE_PARENTHESES);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), SEMICOLON);
    }
#line 3197 "src/syn.tab.c"
    break;

  case 44:
#line 431 "src/syn.y"
                                {
      (yyval.node) = create_node(&(yyval.node), FUNCTION_CALLING);
      add_tree_token_node(&(yyval.node), &(yyvsp[-4].token), IDENTIFIER);
      add_tree_token_node(&(yyval.node), &(yyvsp[-3].token), OPEN_PARENTHESES);
      add_tree_node(&(yyval.node), &(yyvsp[-2].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), CLOSE_PARENTHESES);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), SEMICOLON);
    }
#line 3210 "src/syn.tab.c"
    break;

  case 45:
#line 442 "src/syn.y"
            {
      (yyval.node) = create_node(&(yyval.node), STATEMENT);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3219 "src/syn.tab.c"
    break;

  case 46:
#line 446 "src/syn.y"
               {
      (yyval.node) = create_node(&(yyval.node), STATEMENT);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3228 "src/syn.tab.c"
    break;

  case 47:
#line 450 "src/syn.y"
           {
      (yyval.node) = create_node(&(yyval.node), STATEMENT);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), STRING);
    }
#line 3237 "src/syn.tab.c"
    break;

  case 48:
#line 457 "src/syn.y"
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
#line 3252 "src/syn.tab.c"
    break;

  case 49:
#line 467 "src/syn.y"
            {
      (yyval.node) = create_node(&(yyval.node), EXPRESSION);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3266 "src/syn.tab.c"
    break;

  case 50:
#line 479 "src/syn.y"
          {
      (yyval.node) = create_node(&(yyval.node), CONSTANT);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3280 "src/syn.tab.c"
    break;

  case 51:
#line 488 "src/syn.y"
             {
      (yyval.node) = create_node(&(yyval.node), CONSTANT);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), NIL);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3294 "src/syn.tab.c"
    break;

  case 52:
#line 500 "src/syn.y"
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
#line 3309 "src/syn.tab.c"
    break;

  case 53:
#line 510 "src/syn.y"
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
#line 3324 "src/syn.tab.c"
    break;

  case 54:
#line 523 "src/syn.y"
            {
      (yyval.node) = create_node(&(yyval.node), TYPE);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3338 "src/syn.tab.c"
    break;

  case 55:
#line 532 "src/syn.y"
                 {
      (yyval.node) = create_node(&(yyval.node), TYPE);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3352 "src/syn.tab.c"
    break;

  case 56:
#line 544 "src/syn.y"
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
#line 3367 "src/syn.tab.c"
    break;

  case 57:
#line 557 "src/syn.y"
        {
      (yyval.node) = create_node(&(yyval.node), NUMBER);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), TYPE_INT);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3381 "src/syn.tab.c"
    break;

  case 58:
#line 566 "src/syn.y"
            {
      (yyval.node) = create_node(&(yyval.node), NUMBER);
      add_tree_token_node(&(yyval.node), &(yyvsp[0].token), TYPE_FLOAT);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
#line 3395 "src/syn.tab.c"
    break;

  case 61:
#line 583 "src/syn.y"
               {
      (yyval.node) = create_node(&(yyval.node), B_OPERATION);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3404 "src/syn.tab.c"
    break;

  case 62:
#line 587 "src/syn.y"
               {
      (yyval.node) = create_node(&(yyval.node), B_OPERATION);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3413 "src/syn.tab.c"
    break;

  case 63:
#line 591 "src/syn.y"
                              {
      (yyval.node) = create_node(&(yyval.node), B_OPERATION);
      add_tree_node(&(yyval.node), &(yyvsp[-2].node));
      add_tree_token_node(&(yyval.node), &(yyvsp[-1].token), ASSIGN);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3424 "src/syn.tab.c"
    break;

  case 64:
#line 597 "src/syn.y"
                                             {
      (yyval.node) = create_node(&(yyval.node), B_OPERATION);
      add_tree_node(&(yyval.node), &(yyvsp[-2].node));
      add_tree_node(&(yyval.node), &(yyvsp[-1].node));
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3435 "src/syn.tab.c"
    break;

  case 65:
#line 603 "src/syn.y"
                                       {
      (yyval.node) = create_node(&(yyval.node), B_OPERATION);
      add_tree_node(&(yyval.node), &(yyvsp[-2].node));
      add_tree_node(&(yyval.node), &(yyvsp[-1].node));
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3446 "src/syn.tab.c"
    break;

  case 66:
#line 612 "src/syn.y"
               {
      (yyval.node) = create_node(&(yyval.node), S_OPERATION);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3455 "src/syn.tab.c"
    break;

  case 67:
#line 616 "src/syn.y"
               {
      (yyval.node) = create_node(&(yyval.node), S_OPERATION);
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3464 "src/syn.tab.c"
    break;

  case 68:
#line 620 "src/syn.y"
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
#line 3480 "src/syn.tab.c"
    break;

  case 69:
#line 634 "src/syn.y"
                          {
      (yyval.node) = create_node(&(yyval.node), ARITHMETIC_BINARY);
      add_tree_node(&(yyval.node), &(yyvsp[-1].node));
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3490 "src/syn.tab.c"
    break;

  case 70:
#line 639 "src/syn.y"
                              {
      (yyval.node) = create_node(&(yyval.node), ARITHMETIC_BINARY);
      add_tree_node(&(yyval.node), &(yyvsp[-1].node));
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3500 "src/syn.tab.c"
    break;

  case 71:
#line 644 "src/syn.y"
                              {
      (yyval.node) = create_node(&(yyval.node), ARITHMETIC_BINARY);
      add_tree_node(&(yyval.node), &(yyvsp[-1].node));
      add_tree_node(&(yyval.node), &(yyvsp[0].node));
    }
#line 3510 "src/syn.tab.c"
    break;

  case 72:
#line 649 "src/syn.y"
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
#line 3528 "src/syn.tab.c"
    break;

  case 73:
#line 662 "src/syn.y"
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
#line 3545 "src/syn.tab.c"
    break;

  case 74:
#line 677 "src/syn.y"
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
#line 3561 "src/syn.tab.c"
    break;

  case 75:
#line 688 "src/syn.y"
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
#line 3577 "src/syn.tab.c"
    break;

  case 76:
#line 702 "src/syn.y"
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
#line 3593 "src/syn.tab.c"
    break;

  case 77:
#line 713 "src/syn.y"
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
#line 3609 "src/syn.tab.c"
    break;

  case 78:
#line 727 "src/syn.y"
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
#line 3626 "src/syn.tab.c"
    break;

  case 79:
#line 739 "src/syn.y"
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
#line 3643 "src/syn.tab.c"
    break;

  case 80:
#line 751 "src/syn.y"
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
#line 3660 "src/syn.tab.c"
    break;

  case 81:
#line 766 "src/syn.y"
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
#line 3675 "src/syn.tab.c"
    break;

  case 82:
#line 776 "src/syn.y"
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
#line 3690 "src/syn.tab.c"
    break;

  case 83:
#line 789 "src/syn.y"
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
#line 3705 "src/syn.tab.c"
    break;

  case 84:
#line 799 "src/syn.y"
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
#line 3720 "src/syn.tab.c"
    break;

  case 85:
#line 809 "src/syn.y"
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
#line 3735 "src/syn.tab.c"
    break;

  case 86:
#line 819 "src/syn.y"
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
#line 3750 "src/syn.tab.c"
    break;

  case 87:
#line 829 "src/syn.y"
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
#line 3765 "src/syn.tab.c"
    break;

  case 88:
#line 839 "src/syn.y"
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
#line 3780 "src/syn.tab.c"
    break;


#line 3784 "src/syn.tab.c"

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
#line 886 "src/syn.y"

//********** C Functions **********
int yyerror(char *s) {
  fprintf(stderr, BHRED "\nError: %s in line: %d, column: %d\n" reset "\n", s, yylineno, column-yyleng);
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
