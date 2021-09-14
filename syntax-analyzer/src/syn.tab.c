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
#define YYLAST   6671

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  452

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
       0,   140,   140,   153,   159,   177,   189,   199,   204,   209,
     215,   224,   224,   238,   238,   247,   254,   259,   265,   270,
     275,   283,   289,   294,   300,   305,   310,   315,   320,   325,
     330,   335,   343,   354,   366,   385,   395,   409,   421,   431,
     436,   442,   451,   463,   475,   487,   492,   497,   505,   515,
     528,   538,   551,   561,   574,   584,   597,   611,   621,   634,
     637,   643,   648,   653,   660,   667,   674,   684,   689,   694,
     709,   715,   721,   727,   734,   744,   750,   759,   765,   774,
     781,   788,   798,   803,   816,   826,   836,   846,   856,   866
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
  "program", "lst_declarations", "declaration", "var_declaration",
  "func_declaration", "$@1", "unq_declaration", "$@2", "lst_parameters",
  "parameter", "block_commands", "command", "conditional_stmt",
  "return_stmt", "iteration", "loop_condition", "init_stmt", "update_stmt",
  "output", "input", "func_calling", "statement", "expression", "const",
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

#define YYTABLE_NINF (-90)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1668,  1710,  1196,  1243,  1752,  1286,  1151,   259,    55,   112,
     -10,    -1,    17,    57,    75,   210,   210,   210,   210,   210,
      45,    98,  1794,  1836,  1878,   149,  1920,  1962,  2004,  2046,
    2088,  2130,  2172,  2214,  1329,  1372,  1415,    92,   101,   166,
    2256,  2298,  2340,  2382,  2424,  2466,  2508,   709,  6515,    88,
     596,   110,   596,   596,   890,  2550,  2592,  2634,  2676,  2718,
    -189,   130,  2760,   120,   936,   974,  1054,  1059,  1072,  1120,
    1128,  1211,   210,   210,   210,   210,   210,  1258,  2802,   210,
     210,   136,   144,  2844,   164,  2886,    27,   156,   211,   140,
     229,   238,  2928,   157,   191,   163,   223,   189,   236,   257,
     709,  2970,  3012,  3054,  3096,  3138,   550,  3180,  3222,   256,
     255,   709,     8,   259,   291,   259,   273,   280,   300,   294,
    3264,  3306,   352,    44,    64,   360,    64,   366,  3348,  3390,
    3432,   357,   386,    64,  4486,   373,   384,  4525,   392,   186,
      64,   596,   394,  3474,   401,  3516,   412,   419,   406,   424,
    3558,  3600,   431,    64,   423,  3642,  6534,  6553,   438,  6572,
    1301,  1301,  1344,  1344,  1344,  6591,  6610,  6629,   442,   445,
     449,   331,   125,   451,   453,  3684,  3726,  3768,  3810,  3852,
    3894,   478,   501,   713,   768,  1387,  1387,   917,   955,   323,
     339,   342,   355,   374,    92,  6376,  6396,   460,  6416,  6436,
    1430,  1430,   890,   890,   890,  6456,  6476,  6496,   461,   467,
     468,    -8,   162,   469,   473,   474,   477,   485,   488,   509,
     510,  1080,  1458,  1500,  1542,  1584,  1626,  3973,  4013,  4564,
    4053,  3933,   259,   502,   512,   524,   525,   528,  1475,  1475,
    1475,  1475,  1475,  4603,  4642,  4681,  4720,  4759,  4798,  4837,
    4093,  4133,  4173,    92,  4876,  4915,  4954,  4993,  5032,  5071,
    5110,  5149,   403,   450,   462,   499,   541,   641,   717,   784,
     530,   539,   546,   549,   563,   566,   570,   571,   575,  1480,
    1480,  1480,  1480,  1344,  1344,  1344,  1344,   347,  1344,  1344,
     353,  1007,   379,    27,   217,   606,   905,   941,   988,  1041,
    1097,  1111,   591,   203,   240,   413,   801,   806,   846,   869,
     900,   592,   595,   605,  1489,  1489,  1489,  1489,   890,   890,
     890,  1517,   102,   890,   890,   117,  1017,   123,    27,   709,
     593,   596,   110,   596,   596,   890,  5188,  5227,  5266,  5305,
    5344,  5383,  5422,  5461,  5500,  5539,  5578,  1475,  1475,  1475,
    1475,  1475,  1522,  5617,  1475,  1475,   625,  5656,  1104,  5695,
      27,   408,   486,   492,   494,   548,   572,   574,   609,   671,
     719,   611,   618,   621,   624,   628,   637,   377,   151,   155,
     196,   235,   237,   275,   277,   293,   308,   324,   643,   645,
     648,    65,   126,   268,   282,   402,   436,   440,   650,   656,
     657,  5734,   659,   662,   663,   675,   677,  5773,  5812,  5851,
    5890,  5929,  4213,  4252,  4291,  4330,  4369,  4408,  4447,  5968,
    6007,   684,   686,   692,   695,    94,   694,   703,   704,   710,
    6046,  6085,    70,    64,    64,  6124,  6163,  6202,   716,    64,
     732,   733,   596,   740,  6241,  6280,   712,  6319,   718,    64,
     743,  6358
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -189,  -189,   721,  -189,     4,  -189,  -189,     1,  -188,   -98,
    -189,   -31,    10,    14,    15,    18,   433,  -189,  -189,    19,
      20,    29,     5,   683,     0,   337,    16,  -189,  -189,   253,
     376,   627,    39,   814,   722,   777,  -162,  -156
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,    21,    22,   134,    24,    63,   135,    81,    89,
      90,   136,   137,   243,   244,   245,    95,    96,   146,   246,
     247,   248,   249,   250,   179,   180,   253,    38,    39,   254,
     255,   256,   257,   258,   259,   260,    79,    80
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      35,    25,   119,   288,    23,    33,   302,   166,    50,   289,
      26,   -61,    49,   122,    27,    28,    37,    51,    29,    30,
      31,   123,    35,    25,   314,   315,    23,    33,   124,    32,
     181,   182,    26,   183,   184,    52,    27,    28,    37,    43,
      29,    30,    31,   323,   187,    60,   171,   192,    88,   324,
     206,    32,   206,   206,   219,    93,   132,    97,    98,   185,
     186,    43,   -57,   194,   133,   356,   -57,   227,   228,   229,
     230,   231,   232,     8,     9,    53,   233,   225,   234,   235,
     236,   237,   438,    85,   -52,   -23,   187,   -52,   354,   211,
     439,   211,   211,    54,   355,   138,   238,   239,    -2,   -13,
     192,    88,   142,   240,   241,   242,   144,   432,   -54,   148,
      92,   192,    88,   166,   433,   166,   194,    94,   125,   -58,
     127,   -70,   154,   -58,   251,    85,   251,   194,   181,   182,
      -4,   183,   184,   251,   -70,   -70,   -71,   251,   100,   206,
     251,   206,   -72,   109,   147,   -53,   149,   -67,   -53,   -71,
     -71,   -56,   171,   251,   171,   314,   315,   185,   186,   110,
     267,   267,   275,   275,   275,   181,   182,   -11,   183,   184,
     -52,    62,   187,   -55,   -53,   -19,   112,    82,   211,   -19,
     211,   -67,   114,   -52,   -52,   299,   299,   -53,   -53,   195,
     196,   197,   198,   199,   185,   186,    15,    16,    72,    73,
     308,   308,   219,   219,   219,   -40,   -52,   -52,   116,   -52,
     -52,   292,   187,   175,   176,   -51,   177,   178,   200,   201,
     -52,   -52,   -52,   -52,   -52,   202,   203,   204,   -51,   -51,
     -18,   400,   166,   113,   -18,   -52,   -52,   330,   341,   341,
     341,   341,   341,   -53,   -53,   115,   -53,   -53,   -16,   -52,
     -52,   327,   111,    40,   -48,   117,   -75,   -20,   187,   -53,
     168,   -20,   156,   157,   158,   159,    48,   -48,   -48,   -75,
     -75,   171,   -53,   -53,   -14,    40,   118,   121,   -14,   366,
     366,   366,   366,   275,   275,   275,   275,   -51,   275,   275,
     -51,   160,   161,   187,   -49,   128,   -50,   359,   162,   163,
     164,   -48,   129,   208,   -48,   208,   208,   -49,   -49,   -50,
     -50,   126,   -76,   131,   383,   383,   383,   383,   219,   219,
     219,   396,   130,   219,   219,   -76,   -76,   -73,   187,   192,
      88,   206,   292,   206,   206,   219,   402,    36,   404,   405,
     -73,   -73,   -52,   -74,   167,   194,   -52,   341,   341,   341,
     341,   341,   417,   -61,   341,   341,   -74,   -74,   -53,    36,
     187,   -51,   -53,   279,   280,   -51,   168,   327,   168,   -70,
     211,   -15,   211,   211,   -49,   -71,    41,   140,   -49,   -70,
     -70,   188,   -38,   169,   193,   -71,   -71,   207,   139,   207,
     207,   220,   208,   -50,   208,   261,   -14,   -50,    41,   359,
     -14,   -72,   440,   441,   141,   143,   -52,   -52,   443,   -52,
     -52,   279,   280,   145,   226,   150,   -51,   -51,   450,   -51,
     -51,   -63,   -21,   188,   423,   -52,   209,   151,   209,   209,
     -52,   -37,   -51,   251,   251,   -52,   -52,   193,   -39,   251,
     -52,   -52,   206,   152,   155,   -51,   -51,   446,   193,   251,
     167,   153,   167,   -53,   -53,   -49,   -53,   -53,   -49,   -50,
     -47,   252,   -50,   252,   -45,   -51,   -51,   -60,   -51,   -51,
     252,   -59,   -53,   -68,   252,   -62,   207,   252,   207,   -47,
     -45,   211,   -53,   -53,   -51,   168,   -60,   -59,   -68,   169,
     252,   169,   -62,   -52,   -51,   -51,   -53,   268,   268,   276,
     276,   276,   -48,   -48,   -51,   -48,   -48,   -48,   -53,   188,
     -52,   -52,   -52,   -52,   -51,   209,   -48,   209,   -53,   -53,
     331,   -48,   300,   300,   -51,   -51,   -48,   -48,   -49,   -50,
     332,   -48,   -48,   -53,   -53,   -53,   -53,   309,   309,   220,
     220,   220,   333,   334,   -75,   -75,   335,   -75,   -75,   188,
     -63,   -63,   -52,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -53,   -63,   -75,   -63,   -63,   -63,   -63,   -51,   167,
     -75,   -48,   120,   -75,   -75,   342,   342,   342,   342,   342,
     -75,   -75,   -63,   -63,   208,   -77,   208,   208,   -49,   -63,
     -63,   -63,   -50,   -78,   -49,   188,   -50,   -69,   377,   195,
     196,   197,   198,   199,   -49,   -49,   -50,   -50,   169,   -53,
     -53,   -77,   -53,   -53,   -78,   401,   367,   367,   367,   367,
     276,   276,   276,   276,   -69,   276,   276,    42,   200,   201,
     188,   -76,   421,   -79,   170,   202,   203,   204,   -53,   -53,
     -80,   -76,   -76,   -81,   -49,   -49,   422,   -49,   -49,    42,
     -66,   384,   384,   384,   384,   220,   220,   220,   397,   -65,
     220,   220,   -79,   -49,   -80,   188,   193,   -81,   207,   -66,
     207,   207,   220,   -49,   -49,   -65,   424,   210,   425,   210,
     210,   426,   427,    34,   342,   342,   342,   342,   342,   418,
     165,   342,   342,   -73,   428,   208,   429,   188,    55,    56,
      57,    58,    59,   -73,   -73,    34,   -14,   209,   -64,   209,
     209,   -64,   189,   190,   434,   191,    87,   431,     8,     9,
     -50,   -50,    45,   -50,   -50,   435,   436,    84,   -17,   173,
      91,   448,   437,   205,   442,   205,   205,    99,   449,   -50,
     170,   -74,   170,    61,    45,   -51,   -51,   -51,   -51,   -50,
     -50,   -74,   -74,   444,   445,   101,   102,   103,   104,   105,
     106,   447,   107,   108,   451,   403,   210,     0,   210,    84,
     252,   252,   213,     0,   213,   213,   252,    46,     0,   207,
       0,     0,     0,    91,   174,     0,   252,   -76,   -76,     0,
     -76,   -76,     0,     0,    91,     0,   165,     0,   165,    46,
     -48,   -48,   -48,   -48,   -48,   -48,   -76,   -48,   -48,   -75,
     -75,     0,   -75,   -75,    44,     0,   -76,   -76,   209,     0,
     -48,   172,   205,     0,   205,   -75,     0,   214,     0,   214,
     214,     0,     0,   -48,   -48,   173,    44,   173,   -75,   -75,
       0,     0,     0,   266,   269,   274,   277,   278,    78,   -49,
     -49,     0,   -49,   -49,     0,   291,     0,    83,    86,   170,
       0,   213,     0,   213,   212,   -49,   212,   212,   298,   301,
       0,     0,   -50,   -50,     0,   -50,   -50,     0,   -49,   -49,
       0,     0,     0,   307,   310,   311,   312,   313,   -50,     0,
     174,     0,   174,   215,   216,   326,   217,   218,    78,    83,
      86,   -50,   -50,   -76,   -76,     0,   -76,   -76,   -51,   -51,
       0,   -51,   -51,     0,     0,   165,   214,     0,   214,   -76,
       0,   340,   343,   344,   345,   346,     0,   172,     0,   172,
       0,     0,   -76,   -76,     0,     0,     0,   -51,   -51,   -82,
     -82,   358,   -82,   -82,   -48,   -48,     0,   -48,   -48,   -49,
     -49,   -49,   -49,   212,   173,   212,     0,     0,   210,     0,
     210,   210,   365,   368,   369,   370,   371,   372,   373,   374,
       0,   375,   376,   -48,   -48,     0,   291,   -83,   -83,   287,
     -83,   -83,     0,     0,     0,   290,   293,   -50,   -50,   -50,
     -50,   -75,   -75,     0,   -75,   -75,     0,   382,   385,   386,
     387,   388,   389,   390,   395,     0,   398,   399,     0,   174,
       0,   326,    91,     0,   205,     0,   205,   205,   406,   322,
     -75,   -75,     0,     0,     0,   325,   328,     0,     0,     0,
     407,   408,   409,   410,   411,   416,     0,   419,   420,   279,
     280,   281,   282,   358,   -49,   -49,   172,   -49,   -49,   314,
     315,   316,   317,   213,     0,   213,   213,   -84,   -84,     0,
     -84,   -84,   -85,   -85,   353,   -85,   -85,     0,     0,   210,
       0,   357,   360,   -49,   -49,   -86,   -86,     0,   -86,   -86,
     -52,   -52,     0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,     0,   -52,     0,   -52,   -52,   -52,   -52,     0,     0,
     -50,   -50,   -52,   -50,   -50,   287,   290,   293,   214,     0,
     214,   214,   -52,   -52,   -76,   -76,     0,   -76,   -76,   -52,
     -52,   -52,     0,   -87,   -87,   205,   -87,   -87,     0,   -50,
     -50,   -88,   -88,     0,   -88,   -88,   238,   239,   347,   348,
     322,   325,   328,   -76,   -76,   212,     0,   212,   212,     0,
       0,   -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,     0,   -48,   213,   -48,   -48,   -48,   -48,    47,
       0,     0,   353,   357,   360,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,     0,     0,   -52,   -52,     0,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,   -52,     0,
     -52,   -52,   -52,   -52,   -89,   -89,     0,   -89,   -89,   214,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,
       0,     0,     0,   -53,   -53,     0,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,     0,   -53,   212,   -53,   -53,   -53,
     -53,   221,   222,     0,   223,   224,     0,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -51,   -51,     0,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,   -51,     0,
     -51,   -51,   -51,   -51,   262,   263,     0,   264,   265,     0,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -46,
     -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
       0,   -46,     0,   -46,   -46,   -46,   -46,   270,   271,     0,
     272,   273,     0,    64,    65,    66,    67,    68,    69,    70,
      71,    15,    16,    72,    73,    74,    75,    76,   -46,   -46,
     -46,    77,   -49,   -49,     0,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,     0,   -49,     0,   -49,   -49,   -49,   -49,
     294,   295,     0,   296,   297,     0,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -50,   -50,     0,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,     0,   -50,
     -50,   -50,   -50,   303,   304,     0,   305,   306,     0,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -53,   -53,
       0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,     0,
     -53,     0,   -53,   -53,   -53,   -53,     0,     0,   336,   337,
     -53,   338,   339,   361,   362,     0,   363,   364,     0,     0,
     -53,   -53,   378,   379,     0,   380,   381,   -53,   -53,   -53,
     -51,   -51,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,     0,   -51,     0,   -51,   -51,   -51,   -51,     0,     0,
     391,   392,   -51,   393,   394,   412,   413,     0,   414,   415,
       0,     0,   -51,   -51,     0,     0,     0,     0,     0,   -51,
     -51,   -51,   -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,     0,   -48,     0,   -48,   -48,   -48,   -48,
       0,     0,     0,     0,   -48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -48,   -48,     0,     0,     0,     0,
       0,   -48,   -48,   -48,   -49,   -49,     0,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,     0,   -49,     0,   -49,   -49,
     -49,   -49,     0,     0,     0,     0,   -49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -49,   -49,     0,     0,
       0,     0,     0,   -49,   -49,   -49,   -50,   -50,     0,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,     0,
     -50,   -50,   -50,   -50,     0,     0,     0,     0,   -50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -50,   -50,
       0,     0,     0,     0,     0,   -50,   -50,   -50,    -3,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,     0,
      10,     0,    11,    12,    13,    14,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,    16,     0,     0,     0,     0,     0,    17,    18,    19,
      -9,    -9,     0,    -9,    -9,    -9,    -9,    -9,    -9,    -9,
      -9,     0,    -9,     0,    -9,    -9,    -9,    -9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    -9,    -9,     0,     0,     0,     0,     0,    -9,
      -9,    -9,   -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,     0,   -47,     0,   -47,   -47,   -47,   -47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -47,   -47,     0,     0,     0,     0,
       0,   -47,   -47,   -47,    -5,     1,     0,     2,     3,     4,
       5,     6,     7,     8,     9,     0,    10,     0,    11,    12,
      13,    14,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,    16,     0,     0,
       0,     0,     0,    17,    18,    19,    -6,    -6,     0,    -6,
      -6,    -6,    -6,    -6,    -6,    -6,    -6,     0,    -6,     0,
      -6,    -6,    -6,    -6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    -6,    -6,
       0,     0,     0,     0,     0,    -6,    -6,    -6,    -7,    -7,
       0,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,     0,
      -7,     0,    -7,    -7,    -7,    -7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      -7,    -7,     0,     0,     0,     0,     0,    -7,    -7,    -7,
      -8,    -8,     0,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
      -8,     0,    -8,     0,    -8,    -8,    -8,    -8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    -8,    -8,     0,     0,     0,     0,     0,    -8,
      -8,    -8,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,     0,   -25,     0,   -25,   -25,   -25,   -25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -25,   -25,     0,     0,     0,     0,
       0,   -25,   -25,   -25,   -26,   -26,     0,   -26,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,     0,   -26,     0,   -26,   -26,
     -26,   -26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -26,   -26,     0,     0,
       0,     0,     0,   -26,   -26,   -26,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,     0,
     -27,   -27,   -27,   -27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -27,   -27,
       0,     0,     0,     0,     0,   -27,   -27,   -27,   -29,   -29,
       0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,
     -29,     0,   -29,   -29,   -29,   -29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -29,   -29,     0,     0,     0,     0,     0,   -29,   -29,   -29,
     -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,     0,   -28,     0,   -28,   -28,   -28,   -28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -28,   -28,     0,     0,     0,     0,     0,   -28,
     -28,   -28,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,     0,   -30,     0,   -30,   -30,   -30,   -30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -30,   -30,     0,     0,     0,     0,
       0,   -30,   -30,   -30,   -31,   -31,     0,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,     0,   -31,     0,   -31,   -31,
     -31,   -31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -31,   -31,     0,     0,
       0,     0,     0,   -31,   -31,   -31,   -45,   -45,     0,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,     0,
     -45,   -45,   -45,   -45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -45,   -45,
       0,     0,     0,     0,     0,   -45,   -45,   -45,   -60,   -60,
       0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,
     -60,     0,   -60,   -60,   -60,   -60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -60,   -60,     0,     0,     0,     0,     0,   -60,   -60,   -60,
     -59,   -59,     0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,     0,   -59,     0,   -59,   -59,   -59,   -59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -59,   -59,     0,     0,     0,     0,     0,   -59,
     -59,   -59,   -61,   -61,     0,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,     0,   -61,     0,   -61,   -61,   -61,   -61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    15,    16,     0,     0,     0,     0,
       0,   -61,   -61,   -61,   -67,   -67,     0,   181,   182,   -67,
     183,   184,   -67,   -67,   -67,     0,   -67,     0,   -67,   -67,
     -67,   -67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   185,   186,     0,     0,
       0,     0,     0,   -67,   -67,   -67,   -68,   -68,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,   -68,     0,
     -68,   -68,   -68,   -68,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -68,   -68,
       0,     0,     0,     0,     0,   -68,   -68,   -68,   -62,   -62,
       0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,
     -62,     0,   -62,   -62,   -62,   -62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -62,   -62,     0,     0,     0,     0,     0,   -62,   -62,   -62,
     -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,     0,   -75,     0,   -75,   -75,   -75,   -75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -75,   -75,     0,     0,     0,     0,     0,   -75,
     -75,   -75,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,   -76,     0,   -76,   -76,   -76,   -76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -76,   -76,     0,     0,     0,     0,
       0,   -76,   -76,   -76,   -77,   -77,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,     0,   -77,     0,   -77,   -77,
     -77,   -77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -77,   -77,     0,     0,
       0,     0,     0,   -77,   -77,   -77,   -78,   -78,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,   -78,     0,
     -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -78,   -78,
       0,     0,     0,     0,     0,   -78,   -78,   -78,   -69,   -69,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,
     -69,     0,   -69,   -69,   -69,   -69,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -69,   -69,     0,     0,     0,     0,     0,   -69,   -69,   -69,
     -10,   -10,     0,   -10,   -10,   -10,   -10,   -10,   -10,   -10,
     -10,     0,   -10,     0,   -10,   -10,   -10,   -10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -10,   -10,     0,     0,     0,     0,     0,   -10,
     -10,   -10,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,   -70,     0,   -70,   -70,   -70,   -70,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -70,   -70,     0,     0,     0,     0,
       0,   -70,   -70,   -70,   -71,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,   -71,     0,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -71,   -71,     0,     0,
       0,     0,     0,   -71,   -71,   -71,   -72,   -72,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,   -72,     0,
     -72,   -72,   -72,   -72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    15,    16,
       0,     0,     0,     0,     0,   -72,   -72,   -72,   -35,   -35,
       0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,
     -35,     0,   -35,   -35,   -35,   -35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -35,   -35,     0,     0,     0,     0,     0,   -35,   -35,   -35,
     -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,     0,   -73,     0,   -73,   -73,   -73,   -73,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -73,   -73,     0,     0,     0,     0,     0,   -73,
     -73,   -73,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,     0,   -74,     0,   -74,   -74,   -74,   -74,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -74,   -74,     0,     0,     0,     0,
       0,   -74,   -74,   -74,   -79,   -79,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,   -79,     0,   -79,   -79,
     -79,   -79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -79,   -79,     0,     0,
       0,     0,     0,   -79,   -79,   -79,   -80,   -80,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,     0,
     -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -80,   -80,
       0,     0,     0,     0,     0,   -80,   -80,   -80,   -81,   -81,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,
     -81,     0,   -81,   -81,   -81,   -81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -81,   -81,     0,     0,     0,     0,     0,   -81,   -81,   -81,
     -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,     0,   -66,     0,   -66,   -66,   -66,   -66,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -66,   -66,     0,     0,     0,     0,     0,   -66,
     -66,   -66,   -65,   -65,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,   -65,     0,   -65,   -65,   -65,   -65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -65,   -65,     0,     0,     0,     0,
       0,   -65,   -65,   -65,   -64,   -64,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,     0,   -64,     0,   -64,   -64,
     -64,   -64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -64,   -64,     0,     0,
       0,     0,     0,   -64,   -64,   -64,   -44,   -44,     0,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,     0,
     -44,   -44,   -44,   -44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -44,   -44,
       0,     0,     0,     0,     0,   -44,   -44,   -44,   -41,   -41,
       0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,
     -41,     0,   -41,   -41,   -41,   -41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -41,   -41,     0,     0,     0,     0,     0,   -41,   -41,   -41,
     -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,     0,   -42,     0,   -42,   -42,   -42,   -42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -42,   -42,     0,     0,     0,     0,     0,   -42,
     -42,   -42,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,     0,   -43,     0,   -43,   -43,   -43,   -43,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -43,   -43,     0,     0,     0,     0,
       0,   -43,   -43,   -43,   -32,   -32,     0,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,     0,   -32,     0,   -32,   -32,
     -32,   -32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -32,   -32,     0,     0,
       0,     0,     0,   -32,   -32,   -32,   -36,   -36,     0,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,     0,
     -36,   -36,   -36,   -36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -36,   -36,
       0,     0,     0,     0,     0,   -36,   -36,   -36,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -33,     0,   -33,   -33,   -33,   -33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -33,   -33,     0,     0,     0,     0,     0,   -33,   -33,   -33,
     -12,   -12,     0,   -12,   -12,   -12,   -12,   -12,   -12,   -12,
     -12,     0,   -12,     0,   -12,   -12,   -12,   -12,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -12,   -12,     0,     0,     0,     0,     0,   -12,
     -12,   -12,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,     0,   -34,     0,   -34,   -34,   -34,   -34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -34,   -34,     0,     0,     0,     0,
       0,   -34,   -34,   -34,   -52,   -52,     0,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,     0,   -52,     0,   -52,   -52,
     -52,   -52,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -52,   -52,     0,     0,
       0,     0,     0,   -52,   -52,   -52,   -53,   -53,     0,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,     0,   -53,     0,
     -53,   -53,   -53,   -53,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -53,   -53,
       0,     0,     0,     0,     0,   -53,   -53,   -53,   -51,   -51,
       0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,
     -51,     0,   -51,   -51,   -51,   -51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -51,   -51,     0,     0,     0,     0,     0,   -51,   -51,   -51,
     -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,     0,   -48,     0,   -48,   -48,   -48,   -48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -48,   -48,     0,     0,     0,     0,     0,   -48,
     -48,   -48,   -49,   -49,     0,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,     0,   -49,     0,   -49,   -49,   -49,   -49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -49,   -49,     0,     0,     0,     0,
       0,   -49,   -49,   -49,   -50,   -50,     0,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,     0,   -50,     0,   -50,   -50,
     -50,   -50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -50,   -50,     0,     0,
       0,     0,     0,   -50,   -50,   -50,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,     0,   -48,     0,   -48,   -48,   -48,
     -48,   329,     0,     0,   -48,     0,     0,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,     0,   -52,     0,   -52,   -52,   -52,
     -52,     0,     0,     0,   -52,     0,     0,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,     0,   -53,     0,   -53,   -53,   -53,
     -53,     0,     0,     0,   -53,     0,     0,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,     0,   -51,     0,   -51,   -51,   -51,
     -51,     0,     0,     0,   -51,     0,     0,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,     0,   -46,     0,   -46,   -46,   -46,
     -46,     0,     0,     0,   -46,     0,     0,    64,    65,    66,
      67,    68,    69,    70,    71,   238,   239,   347,   348,   349,
     350,   351,   -46,   -46,   -46,   352,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,     0,   -49,     0,   -49,   -49,   -49,
     -49,     0,     0,     0,   -49,     0,     0,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,     0,   -50,     0,   -50,   -50,   -50,
     -50,     0,     0,     0,   -50,     0,     0,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,     0,   -52,     0,   -52,   -52,   -52,
     -52,     0,     0,     0,   -52,   -52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -52,   -52,     0,     0,     0,
       0,     0,   -52,   -52,   -52,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,     0,   -53,     0,   -53,   -53,   -53,   -53,
       0,     0,     0,   -53,   -53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -53,   -53,     0,     0,     0,     0,
       0,   -53,   -53,   -53,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,     0,   -51,     0,   -51,   -51,   -51,   -51,     0,
       0,     0,   -51,   -51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -51,   -51,     0,     0,     0,     0,     0,
     -51,   -51,   -51,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,     0,   -48,     0,   -48,   -48,   -48,   -48,     0,     0,
       0,   -48,   -48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -48,   -48,     0,     0,     0,     0,     0,   -48,
     -48,   -48,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
       0,   -63,     0,   -63,   -63,   -63,   -63,     0,     0,     0,
     -63,   430,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -63,   -63,     0,     0,     0,     0,     0,   -63,   -63,
     -63,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,
     -49,     0,   -49,   -49,   -49,   -49,     0,     0,     0,   -49,
     -49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -49,   -49,     0,     0,     0,     0,     0,   -49,   -49,   -49,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,
       0,   -50,   -50,   -50,   -50,     0,     0,     0,   -50,   -50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -50,
     -50,     0,     0,     0,     0,     0,   -50,   -50,   -50,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,     0,
     -24,   -24,   -24,   -24,     0,     0,     0,   -24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -24,   -24,
       0,     0,     0,     0,     0,   -24,   -24,   -24,   227,   228,
     229,   230,   231,   232,     8,     9,     0,   233,     0,   234,
     235,   236,   237,     0,     0,     0,   -22,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   238,   239,     0,
       0,     0,     0,     0,   240,   241,   242,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,     0,   -47,     0,   -47,   -47,
     -47,   -47,     0,     0,     0,   -47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -47,   -47,     0,     0,
       0,     0,     0,   -47,   -47,   -47,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,     0,   -25,     0,   -25,   -25,   -25,
     -25,     0,     0,     0,   -25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -25,   -25,     0,     0,     0,
       0,     0,   -25,   -25,   -25,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,     0,   -26,     0,   -26,   -26,   -26,   -26,
       0,     0,     0,   -26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -26,   -26,     0,     0,     0,     0,
       0,   -26,   -26,   -26,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,     0,   -27,     0,   -27,   -27,   -27,   -27,     0,
       0,     0,   -27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -27,   -27,     0,     0,     0,     0,     0,
     -27,   -27,   -27,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,     0,   -29,     0,   -29,   -29,   -29,   -29,     0,     0,
       0,   -29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -29,   -29,     0,     0,     0,     0,     0,   -29,
     -29,   -29,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
       0,   -28,     0,   -28,   -28,   -28,   -28,     0,     0,     0,
     -28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -28,   -28,     0,     0,     0,     0,     0,   -28,   -28,
     -28,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,
     -30,     0,   -30,   -30,   -30,   -30,     0,     0,     0,   -30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -30,   -30,     0,     0,     0,     0,     0,   -30,   -30,   -30,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,
       0,   -31,   -31,   -31,   -31,     0,     0,     0,   -31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -31,
     -31,     0,     0,     0,     0,     0,   -31,   -31,   -31,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,     0,
     -45,   -45,   -45,   -45,     0,     0,     0,   -45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -45,   -45,
       0,     0,     0,     0,     0,   -45,   -45,   -45,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,     0,   -60,     0,   -60,
     -60,   -60,   -60,     0,     0,     0,   -60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -60,   -60,     0,
       0,     0,     0,     0,   -60,   -60,   -60,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,     0,   -59,     0,   -59,   -59,
     -59,   -59,     0,     0,     0,   -59,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -59,   -59,     0,     0,
       0,     0,     0,   -59,   -59,   -59,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,     0,   -61,     0,   -61,   -61,   -61,
     -61,     0,     0,     0,   -61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   238,   239,     0,     0,     0,
       0,     0,   -61,   -61,   -61,   181,   182,   -67,   183,   184,
     -67,   -67,   -67,     0,   -67,     0,   -67,   -67,   -67,   -67,
       0,     0,     0,   -67,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   185,   186,     0,     0,     0,     0,
       0,   -67,   -67,   -67,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,   -68,     0,   -68,   -68,   -68,   -68,     0,
       0,     0,   -68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -68,   -68,     0,     0,     0,     0,     0,
     -68,   -68,   -68,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,     0,   -62,     0,   -62,   -62,   -62,   -62,     0,     0,
       0,   -62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -62,   -62,     0,     0,     0,     0,     0,   -62,
     -62,   -62,   -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,
       0,   -10,     0,   -10,   -10,   -10,   -10,     0,     0,     0,
     -10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -10,   -10,     0,     0,     0,     0,     0,   -10,   -10,
     -10,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,
     -52,     0,   -52,   -52,   -52,   -52,     0,     0,     0,   -52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -52,   -52,     0,     0,     0,     0,     0,   -52,   -52,   -52,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,     0,   -53,
       0,   -53,   -53,   -53,   -53,     0,     0,     0,   -53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -53,
     -53,     0,     0,     0,     0,     0,   -53,   -53,   -53,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,   -51,     0,
     -51,   -51,   -51,   -51,     0,     0,     0,   -51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -51,   -51,
       0,     0,     0,     0,     0,   -51,   -51,   -51,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,     0,   -48,     0,   -48,
     -48,   -48,   -48,     0,     0,     0,   -48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -48,   -48,     0,
       0,     0,     0,     0,   -48,   -48,   -48,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,     0,   -75,     0,   -75,   -75,
     -75,   -75,     0,     0,     0,   -75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -75,   -75,     0,     0,
       0,     0,     0,   -75,   -75,   -75,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,     0,   -49,     0,   -49,   -49,   -49,
     -49,     0,     0,     0,   -49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -49,   -49,     0,     0,     0,
       0,     0,   -49,   -49,   -49,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,     0,   -50,     0,   -50,   -50,   -50,   -50,
       0,     0,     0,   -50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -50,   -50,     0,     0,     0,     0,
       0,   -50,   -50,   -50,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,   -76,     0,   -76,   -76,   -76,   -76,     0,
       0,     0,   -76,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -76,   -76,     0,     0,     0,     0,     0,
     -76,   -76,   -76,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,     0,   -77,     0,   -77,   -77,   -77,   -77,     0,     0,
       0,   -77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -77,   -77,     0,     0,     0,     0,     0,   -77,
     -77,   -77,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,   -78,     0,   -78,   -78,   -78,   -78,     0,     0,     0,
     -78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -78,   -78,     0,     0,     0,     0,     0,   -78,   -78,
     -78,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,
     -69,     0,   -69,   -69,   -69,   -69,     0,     0,     0,   -69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -69,   -69,     0,     0,     0,     0,     0,   -69,   -69,   -69,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,
       0,   -70,   -70,   -70,   -70,     0,     0,     0,   -70,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -70,
     -70,     0,     0,     0,     0,     0,   -70,   -70,   -70,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,   -71,     0,
     -71,   -71,   -71,   -71,     0,     0,     0,   -71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -71,   -71,
       0,     0,     0,     0,     0,   -71,   -71,   -71,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,     0,   -72,     0,   -72,
     -72,   -72,   -72,     0,     0,     0,   -72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   238,   239,     0,
       0,     0,     0,     0,   -72,   -72,   -72,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,     0,   -35,     0,   -35,   -35,
     -35,   -35,     0,     0,     0,   -35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -35,   -35,     0,     0,
       0,     0,     0,   -35,   -35,   -35,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,   -73,     0,   -73,   -73,   -73,
     -73,     0,     0,     0,   -73,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -73,   -73,     0,     0,     0,
       0,     0,   -73,   -73,   -73,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,     0,   -74,     0,   -74,   -74,   -74,   -74,
       0,     0,     0,   -74,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -74,   -74,     0,     0,     0,     0,
       0,   -74,   -74,   -74,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,     0,   -79,     0,   -79,   -79,   -79,   -79,     0,
       0,     0,   -79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -79,   -79,     0,     0,     0,     0,     0,
     -79,   -79,   -79,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,   -80,     0,   -80,   -80,   -80,   -80,     0,     0,
       0,   -80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -80,   -80,     0,     0,     0,     0,     0,   -80,
     -80,   -80,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,   -81,     0,   -81,   -81,   -81,   -81,     0,     0,     0,
     -81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -81,   -81,     0,     0,     0,     0,     0,   -81,   -81,
     -81,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
     -66,     0,   -66,   -66,   -66,   -66,     0,     0,     0,   -66,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -66,   -66,     0,     0,     0,     0,     0,   -66,   -66,   -66,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -65,
       0,   -65,   -65,   -65,   -65,     0,     0,     0,   -65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -65,
     -65,     0,     0,     0,     0,     0,   -65,   -65,   -65,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,   -64,     0,
     -64,   -64,   -64,   -64,     0,     0,     0,   -64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -64,   -64,
       0,     0,     0,     0,     0,   -64,   -64,   -64,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,     0,   -44,
     -44,   -44,   -44,     0,     0,     0,   -44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -44,   -44,     0,
       0,     0,     0,     0,   -44,   -44,   -44,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,     0,   -41,     0,   -41,   -41,
     -41,   -41,     0,     0,     0,   -41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -41,   -41,     0,     0,
       0,     0,     0,   -41,   -41,   -41,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,     0,   -42,     0,   -42,   -42,   -42,
     -42,     0,     0,     0,   -42,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -42,   -42,     0,     0,     0,
       0,     0,   -42,   -42,   -42,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,     0,   -43,     0,   -43,   -43,   -43,   -43,
       0,     0,     0,   -43,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -43,   -43,     0,     0,     0,     0,
       0,   -43,   -43,   -43,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,     0,   -32,     0,   -32,   -32,   -32,   -32,     0,
       0,     0,   -32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -32,   -32,     0,     0,     0,     0,     0,
     -32,   -32,   -32,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,     0,   -36,     0,   -36,   -36,   -36,   -36,     0,     0,
       0,   -36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -36,   -36,     0,     0,     0,     0,     0,   -36,
     -36,   -36,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
       0,   -33,     0,   -33,   -33,   -33,   -33,     0,     0,     0,
     -33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -33,   -33,     0,     0,     0,     0,     0,   -33,   -33,
     -33,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,     0,   -34,   -34,   -34,   -34,     0,     0,     0,   -34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -34,   -34,     0,     0,     0,   -52,     0,   -34,   -34,   -34,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -53,     0,     0,   -52,     0,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -51,     0,     0,   -53,     0,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -48,     0,     0,   -51,     0,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -46,     0,     0,   -48,     0,
      64,    65,    66,    67,    68,    69,    70,    71,   314,   315,
     316,   317,   318,   319,   320,   -49,     0,     0,   321,     0,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -50,     0,     0,   -49,     0,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,     0,     0,   -48,   -50,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,     0,     0,   -52,   -48,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,     0,     0,   -53,   -52,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,     0,     0,   -51,   -53,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,     0,     0,   -46,   -51,    64,    65,    66,    67,    68,
      69,    70,    71,   279,   280,   281,   282,   283,   284,   285,
       0,     0,   -49,   286,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,
       0,   -50,   -49,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,     0,
       0,   -50
};

static const yytype_int16 yycheck[] =
{
       0,     0,   100,   165,     0,     0,   194,     7,    18,   165,
       0,    19,     7,   111,     0,     0,     0,    18,     0,     0,
       0,    13,    22,    22,    32,    33,    22,    22,    20,     0,
       3,     4,    22,     6,     7,    18,    22,    22,    22,     0,
      22,    22,    22,   205,    44,     0,     7,    47,    47,   205,
      50,    22,    52,    53,    54,    50,    12,    52,    53,    32,
      33,    22,     7,    47,    20,   253,    11,     3,     4,     5,
       6,     7,     8,     9,    10,    18,    12,    77,    14,    15,
      16,    17,    12,    44,    19,    21,    86,    22,   250,    50,
      20,    52,    53,    18,   250,   126,    32,    33,     0,     7,
     100,   100,   133,    39,    40,    41,   137,    13,     7,   140,
      22,   111,   111,   113,    20,   115,   100,     7,   113,     7,
     115,    19,   153,    11,   124,    86,   126,   111,     3,     4,
       0,     6,     7,   133,    32,    33,    19,   137,    18,   139,
     140,   141,    19,     7,   139,    19,   141,    22,    22,    32,
      33,     7,   113,   153,   115,    32,    33,    32,    33,    19,
     160,   161,   162,   163,   164,     3,     4,    18,     6,     7,
      19,    22,   172,     7,    19,    19,    19,    11,   139,    23,
     141,    19,    19,    32,    33,   185,   186,    32,    33,     3,
       4,     5,     6,     7,    32,    33,    32,    33,    34,    35,
     200,   201,   202,   203,   204,    19,     3,     4,    19,     6,
       7,   172,   212,     3,     4,    19,     6,     7,    32,    33,
       3,     4,    19,     6,     7,    39,    40,    41,    32,    33,
      19,   329,   232,    42,    23,    32,    33,   232,   238,   239,
     240,   241,   242,     3,     4,    22,     6,     7,    19,    32,
      33,   212,    23,     0,    19,    19,    19,    19,   258,    19,
       7,    23,     3,     4,     5,     6,     7,    32,    33,    32,
      33,   232,    32,    33,    18,    22,    19,    22,    22,   279,
     280,   281,   282,   283,   284,   285,   286,    19,   288,   289,
      22,    32,    33,   293,    19,    22,    19,   258,    39,    40,
      41,    19,    22,    50,    22,    52,    53,    32,    33,    32,
      33,    20,    19,    19,   314,   315,   316,   317,   318,   319,
     320,   321,    22,   323,   324,    32,    33,    19,   328,   329,
     329,   331,   293,   333,   334,   335,   331,     0,   333,   334,
      32,    33,    19,    19,     7,   329,    23,   347,   348,   349,
     350,   351,   352,    22,   354,   355,    32,    33,    19,    22,
     360,    19,    23,    32,    33,    23,   113,   328,   115,    22,
     331,    19,   333,   334,    19,    22,     0,    20,    23,    32,
      33,    44,    22,     7,    47,    32,    33,    50,    22,    52,
      53,    54,   139,    19,   141,    22,    19,    23,    22,   360,
      23,    22,   433,   434,    18,    21,     3,     4,   439,     6,
       7,    32,    33,    21,    77,    21,     3,     4,   449,     6,
       7,    19,    21,    86,    22,    22,    50,    21,    52,    53,
      22,    19,    19,   433,   434,    32,    33,   100,    19,   439,
      32,    33,   442,    19,    21,    32,    33,   442,   111,   449,
     113,    20,   115,     3,     4,    19,     6,     7,    22,    19,
      22,   124,    22,   126,    22,     3,     4,    22,     6,     7,
     133,    22,    22,    22,   137,    22,   139,   140,   141,    19,
      19,   442,    32,    33,    22,   232,    19,    19,    19,   113,
     153,   115,    19,    19,    32,    33,    19,   160,   161,   162,
     163,   164,     3,     4,    19,     6,     7,    19,    22,   172,
      32,    33,    34,    35,    22,   139,    22,   141,    32,    33,
      18,    22,   185,   186,    32,    33,    32,    33,    19,    19,
      18,    32,    33,    32,    33,    34,    35,   200,   201,   202,
     203,   204,    18,    18,     3,     4,    18,     6,     7,   212,
       0,     1,    22,     3,     4,     5,     6,     7,     8,     9,
      10,    22,    12,    22,    14,    15,    16,    17,    22,   232,
      22,    22,    22,    32,    33,   238,   239,   240,   241,   242,
      32,    33,    32,    33,   331,    22,   333,   334,    22,    39,
      40,    41,    22,    22,    22,   258,    22,    22,     7,     3,
       4,     5,     6,     7,    32,    33,    32,    33,   232,     3,
       4,    19,     6,     7,    19,    22,   279,   280,   281,   282,
     283,   284,   285,   286,    19,   288,   289,     0,    32,    33,
     293,    22,     7,    22,     7,    39,    40,    41,    32,    33,
      22,    32,    33,    22,     3,     4,    22,     6,     7,    22,
      22,   314,   315,   316,   317,   318,   319,   320,   321,    22,
     323,   324,    19,    22,    19,   328,   329,    19,   331,    19,
     333,   334,   335,    32,    33,    19,    19,    50,    19,    52,
      53,    19,    19,     0,   347,   348,   349,   350,   351,   352,
       7,   354,   355,    22,    19,   442,    19,   360,    15,    16,
      17,    18,    19,    32,    33,    22,    22,   331,    22,   333,
     334,    19,     3,     4,    20,     6,     7,    22,     9,    10,
       3,     4,     0,     6,     7,    22,    22,    44,    19,     7,
      47,    19,    22,    50,    18,    52,    53,    54,    20,    22,
     113,    22,   115,    22,    22,    32,    33,    34,    35,    32,
      33,    32,    33,    21,    21,    72,    73,    74,    75,    76,
      77,    21,    79,    80,    21,   332,   139,    -1,   141,    86,
     433,   434,    50,    -1,    52,    53,   439,     0,    -1,   442,
      -1,    -1,    -1,   100,     7,    -1,   449,     3,     4,    -1,
       6,     7,    -1,    -1,   111,    -1,   113,    -1,   115,    22,
      32,    33,    34,    35,     3,     4,    22,     6,     7,     3,
       4,    -1,     6,     7,     0,    -1,    32,    33,   442,    -1,
      19,     7,   139,    -1,   141,    19,    -1,    50,    -1,    52,
      53,    -1,    -1,    32,    33,   113,    22,   115,    32,    33,
      -1,    -1,    -1,   160,   161,   162,   163,   164,    34,     3,
       4,    -1,     6,     7,    -1,   172,    -1,    43,    44,   232,
      -1,   139,    -1,   141,    50,    19,    52,    53,   185,   186,
      -1,    -1,     3,     4,    -1,     6,     7,    -1,    32,    33,
      -1,    -1,    -1,   200,   201,   202,   203,   204,    19,    -1,
     113,    -1,   115,     3,     4,   212,     6,     7,    84,    85,
      86,    32,    33,     3,     4,    -1,     6,     7,     3,     4,
      -1,     6,     7,    -1,    -1,   232,   139,    -1,   141,    19,
      -1,   238,   239,   240,   241,   242,    -1,   113,    -1,   115,
      -1,    -1,    32,    33,    -1,    -1,    -1,    32,    33,     3,
       4,   258,     6,     7,     3,     4,    -1,     6,     7,    32,
      33,    34,    35,   139,   232,   141,    -1,    -1,   331,    -1,
     333,   334,   279,   280,   281,   282,   283,   284,   285,   286,
      -1,   288,   289,    32,    33,    -1,   293,     3,     4,   165,
       6,     7,    -1,    -1,    -1,   171,   172,    32,    33,    34,
      35,     3,     4,    -1,     6,     7,    -1,   314,   315,   316,
     317,   318,   319,   320,   321,    -1,   323,   324,    -1,   232,
      -1,   328,   329,    -1,   331,    -1,   333,   334,   335,   205,
      32,    33,    -1,    -1,    -1,   211,   212,    -1,    -1,    -1,
     347,   348,   349,   350,   351,   352,    -1,   354,   355,    32,
      33,    34,    35,   360,     3,     4,   232,     6,     7,    32,
      33,    34,    35,   331,    -1,   333,   334,     3,     4,    -1,
       6,     7,     3,     4,   250,     6,     7,    -1,    -1,   442,
      -1,   257,   258,    32,    33,     3,     4,    -1,     6,     7,
       0,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
       3,     4,    22,     6,     7,   291,   292,   293,   331,    -1,
     333,   334,    32,    33,     3,     4,    -1,     6,     7,    39,
      40,    41,    -1,     3,     4,   442,     6,     7,    -1,    32,
      33,     3,     4,    -1,     6,     7,    32,    33,    34,    35,
     326,   327,   328,    32,    33,   331,    -1,   333,   334,    -1,
      -1,     0,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,   442,    14,    15,    16,    17,    18,
      -1,    -1,   358,   359,   360,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    -1,     0,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,     3,     4,    -1,     6,     7,   442,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    -1,    -1,     0,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,   442,    14,    15,    16,
      17,     3,     4,    -1,     6,     7,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     0,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,     3,     4,    -1,     6,     7,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     0,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,     3,     4,    -1,
       6,     7,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,     0,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
       3,     4,    -1,     6,     7,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,     0,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,     3,     4,    -1,     6,     7,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     0,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    -1,    -1,     3,     4,
      22,     6,     7,     3,     4,    -1,     6,     7,    -1,    -1,
      32,    33,     3,     4,    -1,     6,     7,    39,    40,    41,
       0,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
       3,     4,    22,     6,     7,     3,     4,    -1,     6,     7,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     0,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     0,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     0,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     0,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       0,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     0,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     0,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     0,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     0,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       0,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     0,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     0,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     0,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     0,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       0,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     0,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     0,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     0,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     0,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       0,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     0,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     0,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     0,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     0,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       0,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     0,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     0,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     0,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     0,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       0,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     0,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     0,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     0,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     0,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       0,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     0,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     0,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     0,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     0,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       0,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     0,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     0,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     0,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     0,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       0,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     0,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     0,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     0,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     0,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       0,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     0,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     0,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     0,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     0,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       0,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     0,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     0,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    21,    22,
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
      32,    33,    -1,    -1,    -1,    19,    -1,    39,    40,    41,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    19,    -1,    -1,    42,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    19,    -1,    -1,    42,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    19,    -1,    -1,    42,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    19,    -1,    -1,    42,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    19,    -1,    -1,    42,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    19,    -1,    -1,    42,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    -1,    22,    42,    24,
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
      -1,    42
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
      22,    22,    52,    13,    20,    65,    20,    65,    22,    22,
      22,    19,    12,    20,    47,    50,    54,    55,    54,    22,
      20,    18,    54,    21,    54,    21,    61,    65,    54,    65,
      21,    21,    19,    20,    54,    21,     3,     4,     5,     6,
      32,    33,    39,    40,    41,    66,    67,    68,    72,    73,
      74,    75,    76,    77,    78,     3,     4,     6,     7,    67,
      68,     3,     4,     6,     7,    32,    33,    67,    68,     3,
       4,     6,    67,    68,    69,     3,     4,     5,     6,     7,
      32,    33,    39,    40,    41,    66,    67,    68,    72,    73,
      74,    75,    76,    77,    78,     3,     4,     6,     7,    67,
      68,     3,     4,     6,     7,    67,    68,     3,     4,     5,
       6,     7,     8,    12,    14,    15,    16,    17,    32,    33,
      39,    40,    41,    56,    57,    58,    62,    63,    64,    65,
      66,    67,    68,    69,    72,    73,    74,    75,    76,    77,
      78,    22,     3,     4,     6,     7,    66,    67,    68,    66,
       3,     4,     6,     7,    66,    67,    68,    66,    66,    32,
      33,    34,    35,    36,    37,    38,    42,    76,    79,    80,
      76,    66,    75,    76,     3,     4,     6,     7,    66,    67,
      68,    66,    51,     3,     4,     6,     7,    66,    67,    68,
      66,    66,    66,    66,    32,    33,    34,    35,    36,    37,
      38,    42,    76,    79,    80,    76,    66,    75,    76,    18,
      65,    18,    18,    18,    18,    18,     3,     4,     6,     7,
      66,    67,    68,    66,    66,    66,    66,    34,    35,    36,
      37,    38,    42,    76,    79,    80,    51,    76,    66,    75,
      76,     3,     4,     6,     7,    66,    67,    68,    66,    66,
      66,    66,    66,    66,    66,    66,    66,     7,     3,     4,
       6,     7,    66,    67,    68,    66,    66,    66,    66,    66,
      66,     3,     4,     6,     7,    66,    67,    68,    66,    66,
      52,    22,    65,    59,    65,    65,    66,    66,    66,    66,
      66,    66,     3,     4,     6,     7,    66,    67,    68,    66,
      66,     7,    22,    22,    19,    19,    19,    19,    19,    19,
      22,    22,    13,    20,    20,    22,    22,    22,    12,    20,
      54,    54,    18,    54,    21,    21,    65,    21,    19,    20,
      54,    21
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
      72,    73,    73,    73,    73,    73,    73,    74,    74,    74,
      75,    75,    75,    75,    75,    76,    76,    77,    77,    78,
      78,    78,    79,    79,    80,    80,    80,    80,    80,    80
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
       1,     1,     1,     3,     4,     3,     3,     1,     1,     2,
       2,     2,     2,     3,     3,     2,     2,     2,     2,     3,
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
#line 140 "src/syn.y"
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
#line 2865 "src/syn.tab.c"
    break;

  case 3:
#line 153 "src/syn.y"
                  {

    }
#line 2873 "src/syn.tab.c"
    break;

  case 4:
#line 159 "src/syn.y"
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
#line 2896 "src/syn.tab.c"
    break;

  case 5:
#line 177 "src/syn.y"
                 {
      // printf(BHBLU "list_of_declarations -> declaration\n\n" reset);
      // $$ = create_node(&$$, LIST_OF_DECLARATIONS);
      // add_tree_node(&$$, &$1);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_node(&$1);
    }
#line 2910 "src/syn.tab.c"
    break;

  case 6:
#line 189 "src/syn.y"
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
#line 2925 "src/syn.tab.c"
    break;

  case 7:
#line 199 "src/syn.y"
                     {
    printf(BHBLU "declaration -> func_declaration\n\n" reset);
      // $$ = create_node(&$$, DECLARATION);
      // add_tree_node(&$$, &$1);
    }
#line 2935 "src/syn.tab.c"
    break;

  case 8:
#line 204 "src/syn.y"
            {
    printf(BHBLU "declaration -> command\n\n" reset);
    // $$ = create_node(&$$, DECLARATION);
    // add_tree_node(&$$, &$1);
    }
#line 2945 "src/syn.tab.c"
    break;

  case 9:
#line 209 "src/syn.y"
          {
    printf(BHBLU "declaration -> error\n\n" reset);
    }
#line 2953 "src/syn.tab.c"
    break;

  case 10:
#line 215 "src/syn.y"
                      {
    printf(BHBLU "var_declaration -> unq_declaration ;\n\n" reset);
    // $$ = create_node(&$$, VARIABLE_DECLARATION);
    // add_tree_node(&$$, &$1);
    // add_tree_token_node(&$$, &$2, SEMICOLON);
   }
#line 2964 "src/syn.tab.c"
    break;

  case 11:
#line 224 "src/syn.y"
                  {increment_scope();}
#line 2970 "src/syn.tab.c"
    break;

  case 12:
#line 224 "src/syn.y"
                                                                                     {
      printf(BHBLU "func_declaration -> unq_declaration {increment_scope();} '(' lst_parameters ')' '{' block_commands '}'\n\n" reset);
      // $$ = create_node(&$$, FUNCTION_DECLARATION);    
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$3, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$4);
      // add_tree_token_node(&$$, &$5, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$6, OPEN_CURLY_BRACKET);
      // add_tree_node(&$$, &$7);
      // add_tree_token_node(&$$, &$8, CLOSE_CURLY_BRACKET);
    }
#line 2986 "src/syn.tab.c"
    break;

  case 13:
#line 238 "src/syn.y"
       {add_table_node(yytext);}
#line 2992 "src/syn.tab.c"
    break;

  case 14:
#line 238 "src/syn.y"
                                    {
    printf(BHBLU "unq_declaration -> type {add_table_node(yytext);} ID " reset);
    // $$ = create_node(&$$, UNIQUE_DECLARATION);
    // add_tree_node(&$$, &$1);
    // add_tree_token_node(&$$, &$3, IDENTIFIER);
   }
#line 3003 "src/syn.tab.c"
    break;

  case 15:
#line 247 "src/syn.y"
                                {
    printf(BHBLU "lst_parameters -> parameter ',' lst_parameters\n\n" reset);
    // $$ = create_node(&$$, LIST_OF_PARAMETERS);
    // add_tree_node(&$$, &$1);
    // add_tree_token_node(&$$, &$2, COMMA);
    // add_tree_node(&$$, &$3);
   }
#line 3015 "src/syn.tab.c"
    break;

  case 16:
#line 254 "src/syn.y"
              {
      printf(BHBLU "lst_parameters -> parameter\n\n" reset);
      // $$ = create_node(&$$, LIST_OF_PARAMETERS);
      // add_tree_node(&$$, &$1);
    }
#line 3025 "src/syn.tab.c"
    break;

  case 17:
#line 259 "src/syn.y"
                  {
      printf(BHBLU "lst_parameters -> /* epsilon */\n\n" reset);
    }
#line 3033 "src/syn.tab.c"
    break;

  case 18:
#line 265 "src/syn.y"
                  {
    printf(BHBLU "parameter -> unq_declaration\n\n" reset);
    // $$ = create_node(&$$, PARAMETER);
    // add_tree_node(&$$, &$1);
    }
#line 3043 "src/syn.tab.c"
    break;

  case 19:
#line 270 "src/syn.y"
        {
    printf(BHBLU "parameter -> ID\n\n" reset);
    // $$ = create_node(&$$, PARAMETER);
    // add_tree_token_node(&$$, &$1, IDENTIFIER);
    }
#line 3053 "src/syn.tab.c"
    break;

  case 20:
#line 275 "src/syn.y"
               {
    printf(BHBLU "parameter -> expression\n\n" reset);
    // $$ = create_node(&$$, PARAMETER);
    // add_tree_node(&$$, &$1);
    }
#line 3063 "src/syn.tab.c"
    break;

  case 21:
#line 283 "src/syn.y"
                          {
    printf(BHBLU "block_commands -> command block_commands\n\n" reset);
    // $$ = create_node(&$$, BLOCK_OF_COMMANDS);
    // add_tree_node(&$$, &$1);
    // add_tree_node(&$$, &$2);
    }
#line 3074 "src/syn.tab.c"
    break;

  case 22:
#line 289 "src/syn.y"
            {
    printf(BHBLU "block_commands -> command\n\n" reset);
    // $$ = create_node(&$$, BLOCK_OF_COMMANDS);
    // add_tree_node(&$$, &$1);
    }
#line 3084 "src/syn.tab.c"
    break;

  case 23:
#line 294 "src/syn.y"
                  {
      printf(BHBLU "block_commands -> /* epsilon */\n\n" reset);
    }
#line 3092 "src/syn.tab.c"
    break;

  case 24:
#line 300 "src/syn.y"
                  {
    printf(BHBLU "command -> var_declaration\n\n" reset);
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 3102 "src/syn.tab.c"
    break;

  case 25:
#line 305 "src/syn.y"
                     {
    printf(BHBLU "command -> conditional_stmt\n\n" reset);
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 3112 "src/syn.tab.c"
    break;

  case 26:
#line 310 "src/syn.y"
                {
    printf(BHBLU "command -> return_stmt\n\n" reset);
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 3122 "src/syn.tab.c"
    break;

  case 27:
#line 315 "src/syn.y"
              {
    printf(BHBLU "command -> iteration\n\n" reset);
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 3132 "src/syn.tab.c"
    break;

  case 28:
#line 320 "src/syn.y"
          {
    printf(BHBLU "command -> input\n\n" reset);
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 3142 "src/syn.tab.c"
    break;

  case 29:
#line 325 "src/syn.y"
           {
    printf(BHBLU "command -> output\n\n" reset);
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 3152 "src/syn.tab.c"
    break;

  case 30:
#line 330 "src/syn.y"
                 {
    printf(BHBLU "command -> func_calling\n\n" reset);
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 3162 "src/syn.tab.c"
    break;

  case 31:
#line 335 "src/syn.y"
               {
    printf(BHBLU "command -> statement\n\n" reset);
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 3172 "src/syn.tab.c"
    break;

  case 32:
#line 343 "src/syn.y"
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
#line 3188 "src/syn.tab.c"
    break;

  case 33:
#line 354 "src/syn.y"
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
#line 3205 "src/syn.tab.c"
    break;

  case 34:
#line 366 "src/syn.y"
                                                                                         {
      printf(BHBLU "conditional_stmt -> IF_STMT '(' statement ')' ELSE_STMT IF_STMT '(' statement ')' '{' block_commands '}'\n\n" reset);
      // $$ = create_node(&$$, CONDITIONAL_STMT);
      // add_tree_token_node(&$$, &$1, IF);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, ELSE);
      // add_tree_token_node(&$$, &$6, IF);
      // add_tree_token_node(&$$, &$7, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$8);
      // add_tree_token_node(&$$, &$9, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$10, OPEN_CURLY_BRACKET);
      // add_tree_node(&$$, &$11);
      // add_tree_token_node(&$$, &$12, CLOSE_CURLY_BRACKET);
    }
#line 3226 "src/syn.tab.c"
    break;

  case 35:
#line 385 "src/syn.y"
                            {
    printf(BHBLU "return_stmt -> RETURN_STM statement ';'\n\n" reset);
      // $$ = create_node(&$$, RETURN_STMT);
      // add_tree_token_node(&$$, &$1, RETURN);
      // add_tree_node(&$$, &$2);
      // add_tree_token_node(&$$, &$3, SEMICOLON);
    }
#line 3238 "src/syn.tab.c"
    break;

  case 36:
#line 395 "src/syn.y"
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
#line 3254 "src/syn.tab.c"
    break;

  case 37:
#line 409 "src/syn.y"
                                          {
    printf(BHBLU "FOR_STMT '(' loop_condition ')' '{' block_commands '}'\n\n" reset);
      // $$ = create_node(&$$, LOOP_CONDITION);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, SEMICOLON);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, SEMICOLON);
      // add_tree_node(&$$, &$3);
    }
#line 3268 "src/syn.tab.c"
    break;

  case 38:
#line 421 "src/syn.y"
                    {
      printf(BHBLU "init_stmt -> ID '=' statement\n\n" reset);
      // $$ = create_node(&$$, INITIALIZATION_STMT);
      // add_tree_token_node(&$$, &$1, IDENTIFIER);
      // add_tree_token_node(&$$, &$2, ASSIGN);
      // add_tree_node(&$$, &$3);
    }
#line 3280 "src/syn.tab.c"
    break;

  case 39:
#line 431 "src/syn.y"
            {
    printf(BHBLU "update_stmt -> statement\n\n" reset);
      // $$ = create_node(&$$, UPDATE_STMT);
      // add_tree_node(&$$, &$1);
    }
#line 3290 "src/syn.tab.c"
    break;

  case 40:
#line 436 "src/syn.y"
                  {
      printf(BHBLU "update_stmt -> /* epsilon */\n\n" reset);
   }
#line 3298 "src/syn.tab.c"
    break;

  case 41:
#line 442 "src/syn.y"
                                      {
    printf(BHBLU "output -> OUTPUT_WRITE '(' statement ')' ';'\n\n" reset);
      // $$ = create_node(&$$, INPUT_OPERATION);
      // add_tree_token_node(&$$, &$1, WRITE);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
#line 3312 "src/syn.tab.c"
    break;

  case 42:
#line 451 "src/syn.y"
                                         {
    printf(BHBLU "output -> OUTPUT_WRITELN '(' statement ')' ';'\n\n" reset);
      // $$ = create_node(&$$, INPUT_OPERATION);
      // add_tree_token_node(&$$, &$1, WRITELN);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
#line 3326 "src/syn.tab.c"
    break;

  case 43:
#line 463 "src/syn.y"
                                    {
    printf(BHBLU "input -> INPUT_READ '(' expression ')' ';'\n\n" reset);
      // $$ = create_node(&$$, OUTPUT_OPERATION);
      // add_tree_token_node(&$$, &$1, READ);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
#line 3340 "src/syn.tab.c"
    break;

  case 44:
#line 475 "src/syn.y"
                                {
    printf(BHBLU "func_calling -> ID '(' lst_parameters ')' ';'\n\n" reset);
      // $$ = create_node(&$$, FUNCTION_CALLING);
      // add_tree_token_node(&$$, &$1, IDENTIFIER);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
#line 3354 "src/syn.tab.c"
    break;

  case 45:
#line 487 "src/syn.y"
            {
    printf(BHBLU "statement -> operation\n\n" reset);
      // $$ = create_node(&$$, STATEMENT);
      // add_tree_node(&$$, &$1);
    }
#line 3364 "src/syn.tab.c"
    break;

  case 46:
#line 492 "src/syn.y"
               {
    printf(BHBLU "statement -> expression\n\n" reset);
      // $$ = create_node(&$$, STATEMENT);
      // add_tree_node(&$$, &$1);
    }
#line 3374 "src/syn.tab.c"
    break;

  case 47:
#line 497 "src/syn.y"
           {
    printf(BHBLU "statement -> STRING\n\n" reset);
      // $$ = create_node(&$$, STATEMENT);
      // add_tree_token_node(&$$, &$1, STRING);
    }
#line 3384 "src/syn.tab.c"
    break;

  case 48:
#line 505 "src/syn.y"
     {
    printf(BHBLU "expression -> <ID, %s>\n\n" reset, (yyvsp[0].token).lexeme);
    // $$ = create_node(&$$, EXPRESSION);
    // add_tree_token_node(&$$, &$1, IDENTIFIER);
    // printf("$$: ");
    // print_node(&$$);
    // printf("$1: ");
    // print_token(&$1);
    // printf("\n\n");
    }
#line 3399 "src/syn.tab.c"
    break;

  case 49:
#line 515 "src/syn.y"
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
#line 3414 "src/syn.tab.c"
    break;

  case 50:
#line 528 "src/syn.y"
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
#line 3429 "src/syn.tab.c"
    break;

  case 51:
#line 538 "src/syn.y"
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
#line 3444 "src/syn.tab.c"
    break;

  case 52:
#line 551 "src/syn.y"
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
#line 3459 "src/syn.tab.c"
    break;

  case 53:
#line 561 "src/syn.y"
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
#line 3474 "src/syn.tab.c"
    break;

  case 54:
#line 574 "src/syn.y"
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
#line 3489 "src/syn.tab.c"
    break;

  case 55:
#line 584 "src/syn.y"
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
#line 3504 "src/syn.tab.c"
    break;

  case 56:
#line 597 "src/syn.y"
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
#line 3520 "src/syn.tab.c"
    break;

  case 57:
#line 611 "src/syn.y"
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
#line 3535 "src/syn.tab.c"
    break;

  case 58:
#line 621 "src/syn.y"
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
#line 3550 "src/syn.tab.c"
    break;

  case 59:
#line 634 "src/syn.y"
                   {
    printf(BHBLU "operation -> single_operation\n\n" reset);
  }
#line 3558 "src/syn.tab.c"
    break;

  case 60:
#line 637 "src/syn.y"
                     {
    printf(BHBLU "operation -> binary_operation\n\n" reset);
  }
#line 3566 "src/syn.tab.c"
    break;

  case 61:
#line 643 "src/syn.y"
               {
    printf(BHBLU "binary_operation -> arith_binary\n\n" reset);
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
    }
#line 3576 "src/syn.tab.c"
    break;

  case 62:
#line 648 "src/syn.y"
               {
    printf(BHBLU "binary_operation -> lst_binary\n\n" reset);
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
    }
#line 3586 "src/syn.tab.c"
    break;

  case 63:
#line 653 "src/syn.y"
                               {
    printf(BHBLU "binary_operation -> expression '=' expression\n\n" reset);
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, ASSIGN);
      // add_tree_node(&$$, &$3);
    }
#line 3598 "src/syn.tab.c"
    break;

  case 64:
#line 660 "src/syn.y"
                                  {
    printf(BHBLU "binary_operation -> expression '=' expression\n\n" reset);
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, ASSIGN);
      // add_tree_node(&$$, &$3);
    }
#line 3610 "src/syn.tab.c"
    break;

  case 65:
#line 667 "src/syn.y"
                                             {
    printf(BHBLU "binary_operation -> expression relation_operator expression\n\n" reset);
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
      // add_tree_node(&$$, &$2);
      // add_tree_node(&$$, &$3);
    }
#line 3622 "src/syn.tab.c"
    break;

  case 66:
#line 674 "src/syn.y"
                                       {
    printf(BHBLU "binary_operation -> expression log_operator expression\n\n" reset);
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
      // add_tree_node(&$$, &$2);
      // add_tree_node(&$$, &$3);
    }
#line 3634 "src/syn.tab.c"
    break;

  case 67:
#line 684 "src/syn.y"
               {
    printf(BHBLU "single_operation -> arith_single\n\n" reset);
      // $$ = create_node(&$$, S_OPERATION);
      // add_tree_node(&$$, &$1);
    }
#line 3644 "src/syn.tab.c"
    break;

  case 68:
#line 689 "src/syn.y"
               {
    printf(BHBLU "single_operation -> lst_single\n\n" reset);
      // $$ = create_node(&$$, S_OPERATION);
      // add_tree_node(&$$, &$1);
    }
#line 3654 "src/syn.tab.c"
    break;

  case 69:
#line 694 "src/syn.y"
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
#line 3671 "src/syn.tab.c"
    break;

  case 70:
#line 709 "src/syn.y"
                          {
    printf(BHBLU "arith_binary -> expression arith_single\n\n" reset);
      // $$ = create_node(&$$, ARITHMETIC_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_node(&$$, &$2);
    }
#line 3682 "src/syn.tab.c"
    break;

  case 71:
#line 715 "src/syn.y"
                              {
    printf(BHBLU "arith_binary -> arith_binary arith_single\n\n" reset);
      // $$ = create_node(&$$, ARITHMETIC_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_node(&$$, &$2);
    }
#line 3693 "src/syn.tab.c"
    break;

  case 72:
#line 721 "src/syn.y"
                              {
    printf(BHBLU "arith_binary -> arith_single arith_binary\n\n" reset);
      // $$ = create_node(&$$, ARITHMETIC_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_node(&$$, &$2);
    }
#line 3704 "src/syn.tab.c"
    break;

  case 73:
#line 727 "src/syn.y"
                              {
      printf(BHBLU "arith_binary -> expression '*' expression\n\n" reset);
      // $$ = create_node(&$$, ARITHMETIC_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, MULTIPLY_OP);
      // add_tree_node(&$$, &$3);
    }
#line 3716 "src/syn.tab.c"
    break;

  case 74:
#line 734 "src/syn.y"
                              {
      printf(BHBLU "arith_binary -> expression '/' expression \n\n" reset);
      //  $$ = create_node(&$$, ARITHMETIC_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, DIVISION_OP);
      // add_tree_node(&$$, &$3);
    }
#line 3728 "src/syn.tab.c"
    break;

  case 75:
#line 744 "src/syn.y"
                 {
    printf(BHBLU "arith_single -> '+' expression\n\n" reset);
    // $$ = create_node(&$$, ARITHMETIC_SINGLE);
    // add_tree_token_node(&$$, &$1, ADD_OP);
    // add_tree_node(&$$, &$2);
    }
#line 3739 "src/syn.tab.c"
    break;

  case 76:
#line 750 "src/syn.y"
                   {
      printf(BHBLU "arith_single -> '-' expression\n\n" reset);
      // $$ = create_node(&$$, ARITHMETIC_SINGLE);
      // add_tree_token_node(&$$, &$1, MINUS_OP);
      // add_tree_node(&$$, &$2);
    }
#line 3750 "src/syn.tab.c"
    break;

  case 77:
#line 759 "src/syn.y"
                 {
      printf(BHBLU "lst_single -> 'POP_OP' expression\n\n" reset);
      // $$ = create_node(&$$, LIST_SINGLE);
      // add_tree_token_node(&$$, &$1, POP_OP);
      // add_tree_node(&$$, &$2);
    }
#line 3761 "src/syn.tab.c"
    break;

  case 78:
#line 765 "src/syn.y"
                   {
      printf(BHBLU "lst_single -> '?' expression\n\n" reset);
      // $$ = create_node(&$$, LIST_SINGLE);
      // add_tree_token_node(&$$, &$1, HEAD_OP);
      // add_tree_node(&$$, &$2);
    }
#line 3772 "src/syn.tab.c"
    break;

  case 79:
#line 774 "src/syn.y"
                               {
      printf(BHBLU "lst_binary -> expression FILTER expression\n\n" reset);
      // $$ = create_node(&$$, LIST_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, FILTER_OP);

    }
#line 3784 "src/syn.tab.c"
    break;

  case 80:
#line 781 "src/syn.y"
                              {
      printf(BHBLU "lst_binary -> expression MAP expression\n\n" reset);
      // $$ = create_node(&$$, LIST_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, MAP_OP);
      // add_tree_node(&$$, &$3);
    }
#line 3796 "src/syn.tab.c"
    break;

  case 81:
#line 788 "src/syn.y"
                              {
      printf(BHBLU "lst_binary -> expression ':' expression\n\n" reset);
      // $$ = create_node(&$$, LIST_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, CONSTRUCTOR_OP);
      // add_tree_node(&$$, &$3);
    }
#line 3808 "src/syn.tab.c"
    break;

  case 82:
#line 798 "src/syn.y"
       {
      printf(BHBLU "log_operator -> AND\n\n" reset);
      // $$ = create_node(&$$, LOGIC_OPERATOR);
      // add_tree_token_node(&$$, &$1, AND_OP);
    }
#line 3818 "src/syn.tab.c"
    break;

  case 83:
#line 803 "src/syn.y"
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
#line 3833 "src/syn.tab.c"
    break;

  case 84:
#line 816 "src/syn.y"
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
#line 3848 "src/syn.tab.c"
    break;

  case 85:
#line 826 "src/syn.y"
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
#line 3863 "src/syn.tab.c"
    break;

  case 86:
#line 836 "src/syn.y"
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
#line 3878 "src/syn.tab.c"
    break;

  case 87:
#line 846 "src/syn.y"
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
#line 3893 "src/syn.tab.c"
    break;

  case 88:
#line 856 "src/syn.y"
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
#line 3908 "src/syn.tab.c"
    break;

  case 89:
#line 866 "src/syn.y"
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
#line 3923 "src/syn.tab.c"
    break;


#line 3927 "src/syn.tab.c"

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
#line 878 "src/syn.y"

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
