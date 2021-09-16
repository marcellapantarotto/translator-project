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

  t_node *root;

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
#define YYLAST   5863

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  462

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
       0,   142,   142,   151,   158,   163,   170,   174,   178,   185,
     185,   198,   206,   206,   214,   218,   225,   231,   238,   242,
     249,   255,   262,   268,   275,   279,   283,   287,   291,   295,
     299,   303,   303,   310,   318,   326,   334,   347,   356,   367,
     378,   387,   391,   398,   406,   414,   422,   433,   444,   454,
     458,   462,   466,   473,   477,   484,   488,   495,   499,   506,
     514,   518,   525,   529,   533,   539,   548,   552,   556,   564,
     570,   576,   582,   588,   595,   600,   608,   613,   621,   626,
     632,   641,   645,   652,   656,   660,   664,   668,   672
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
  "var_declaration", "unq_declaration", "$@2", "parameters",
  "lst_parameters", "calling_parameters", "lst_calling_parameters",
  "block_commands", "command", "$@3", "init_variable", "conditional_stmt",
  "return_stmt", "iteration", "loop_condition", "init_stmt", "update_stmt",
  "output", "input", "func_calling", "expression", "const", "number",
  "type", "type_lst", "type_number", "operation", "single_operation",
  "arith_binary", "arith_single", "lst_single", "lst_binary", "logical_op",
  "relational_op", YY_NULLPTR
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

#define YYTABLE_NINF (-89)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      32,    64,    11,    33,     3,    45,    79,   116,   161,    35,
      28,    60,    48,  -222,    70,   208,    66,    96,   105,     1,
      44,    53,    94,    95,    16,    99,   109,  2809,  1459,  4383,
    4400,  3648,   562,    97,   112,   113,   114,   115,   562,   562,
     562,   562,   562,  2848,   121,   118,  2809,   124,  2887,  2926,
    2965,  3004,   123,  3043,  3082,  4417,  4434,  4451,  4468,   692,
    4485,  5301,  4502,  4519,   955,   117,   562,  3690,   971,   584,
     128,   217,   235,   602,  4536,  4553,  4570,  4587,  4604,   251,
     125,  2809,  3121,   615,   615,   615,  3160,   656,   765,   863,
     881,   894,   935,  1044,  1142,   615,   615,  1160,  1160,  1160,
    1160,   129,   132,  1606,  1234,  3199,  2847,   130,   136,   137,
     141,  2886,   144,  2925,   154,   126,  1250,  1529,  1695,  1710,
    1808,  5315,  5329,  5343,  5357,  4621,  1173,  3589,  3628,   562,
     152,   168,   169,   174,   175,  3238,   179,   172,  3277,  2087,
    3316,  3355,  3394,  3433,  3472,  3628,    -2,  3511,   180,   182,
      28,    28,  3550,  3710,  3730,  3750,  3669,  1173,  1173,  1173,
    1173,  1173,  3770,  3790,  3810,  3830,  3850,  4641,  3870,  3890,
    1680,  4030,  4050,  4070,  1733,   584,   584,   584,   584,   584,
    4090,  4110,  4130,  4150,  4170,    67,  4190,  4210,  2964,   184,
     187,   191,     9,   602,   602,   602,   602,   602,   195,   197,
     200,   206,   212,   213,  5672,  5682,  5692,   676,   615,   615,
     615,   615,   615,  5702,  5712,  5722,  5732,  5742,  5752,  5371,
    5385,  5399,  2020,  1160,  1160,  1160,  1160,  1160,  5413,  5427,
    5441,  5455,  5469,  5483,  1214,  1214,  1323,  1323,   562,   119,
     176,   216,   218,   219,   501,   221,   215,   813,  1092,  1371,
    1650,   231,  2221,  2263,  5762,   227,   247,   248,   117,  3910,
    3930,  3950,  3970,  3990,  1214,  1214,  1214,  1421,  1421,  1421,
    1421,   117,  4230,  4250,  4270,  4290,  4310,  1323,  1323,  1323,
    1439,  1439,  1439,  1439,   117,   240,   252,   253,   254,   264,
     117,  5772,  5782,  5792,  5802,  5812,   117,  5497,  5511,  5525,
    5539,  5553,  1885,  1941,  1959,  1514,  1214,  1214,  1214,  1214,
    1214,  2072,  2164,  2220,  2301,  2340,  2379,  2418,  2457,  3003,
    3042,  3081,  1901,  1323,  1323,  1323,  1323,  1323,  3120,  3159,
    3198,  3237,  3276,  3315,  3354,  3393,  5822,   584,   128,   452,
     544,   602,  2302,  2809,  2341,  2380,   584,    58,   263,   267,
    2496,  2535,  2574,  4658,  4675,  4692,  4351,  1421,  1421,  1421,
    1421,  1421,  4709,  4726,  4743,  4760,  4777,  4794,  4811,  4828,
    4845,  4862,   268,  3432,  3471,  3510,  4981,  4998,  5015,  4369,
    1439,  1439,  1439,  1439,  1439,  5032,  5049,  5066,  5083,  5100,
    5117,  5134,  5151,  5168,  5185,   269,   270,   271,   117,  2613,
    2652,  2691,  2730,  2769,   117,  3549,  3588,  3627,  5584,  5597,
    2419,  5610,   272,   278,  5623,   280,  5636,   281,   249,  5649,
    4010,   117,  4879,  4896,  4913,  4930,  4947,  4330,   117,  5202,
    5219,  5236,  5253,  5270,   282,  5832,  5567,   283,   288,  3589,
    3589,   286,   287,   289,   290,   291,  2458,   299,   300,  2808,
    5662,  2497,  2536,  2575,  2614,  2653,  2692,  2731,  4964,  5287,
    3589,  2770
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
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -222,  -222,   304,  -222,  -222,  -222,     2,     0,   -90,  -222,
     297,  -221,   196,   -45,  -115,   -98,   -96,   -73,   -71,   -59,
     -12,   -56,  -222,   -49,   -42,   403,    69,   682,   961,    15,
    -222,  -222,   -23,  1240,  1747,  1519,  1798,  1870,   -52,   -21
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    16,    43,    44,    17,    22,
      23,   101,   102,    45,    46,    47,    48,    49,    50,    51,
     108,    52,   149,    53,    54,    55,    56,    57,    58,   151,
      11,    12,   103,    60,    61,    62,    63,    64,   236,   237
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    80,     8,    13,    59,   255,     9,    95,     8,    68,
       2,     3,   137,   138,   109,    10,    95,   -42,   -60,    21,
     -15,    10,   -60,    59,    21,     2,     3,   284,   -52,   246,
     147,   247,    -3,     1,   150,   -12,   115,   349,    96,   150,
     -61,     2,     3,   104,   -61,    -2,   106,    96,   111,   113,
     372,   234,    95,    -9,   248,   -58,   249,    15,    59,    18,
     256,   257,   -13,   395,    -8,    -8,   -13,   -57,   250,   396,
      -4,   251,   -17,    -8,    -8,   397,    24,   -13,   252,    -5,
       1,   -13,   235,    96,    19,   253,   -62,    95,     2,     3,
     148,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   280,
     281,   282,   283,    20,   254,    59,   139,    74,    75,    76,
      77,    78,   -59,    25,   -14,    69,    -6,    -6,    96,    27,
     153,   154,    59,   155,   156,    -6,    -6,   245,   -16,   244,
      70,    71,    72,    73,   163,   107,   -19,   337,   181,    79,
     181,   181,   114,   152,    81,    82,   -22,   135,   125,   157,
     158,   -18,   116,   117,   118,   128,   159,   160,   161,   129,
     130,    -7,    -7,   132,   119,   120,   121,   122,   123,   124,
      -7,    -7,    66,   134,   140,   -35,   -35,   437,   -35,   -35,
     -35,   -35,   -35,   438,   -35,   145,   -35,   -35,   -35,   -35,
     141,   142,   -35,   -35,   338,   163,   143,   144,   -20,   -41,
     447,   -39,    95,   -55,   -35,   -35,   -56,   448,   -11,   -11,
     -54,   -35,   -35,   -35,   -49,   336,   -51,   -11,   -11,   -53,
     171,   172,   110,   173,   174,   -50,   259,   260,   261,   262,
     263,   -66,   -67,    96,   339,   343,   340,   341,   171,   172,
     112,   173,   174,   342,   272,   273,   274,   275,   276,   175,
     176,   -10,   -10,   344,   347,   348,   177,   178,   179,   -74,
     -10,   -10,   285,   286,   287,   288,   289,   175,   176,   346,
     446,   -75,   -76,   -77,   177,   178,   179,   291,   292,   293,
     294,   295,   109,   -68,    95,   -13,   420,   427,   434,   435,
     436,   440,   297,   298,   299,   300,   301,   441,   418,   443,
     445,   -48,   449,   312,   318,   329,   335,   450,   453,   454,
      14,   455,   456,   457,   411,    96,   414,   416,   458,   459,
      59,    26,   136,   419,   451,   452,   412,   163,     0,     0,
       0,     0,     0,   350,   351,   352,   363,   369,   370,   371,
     163,   246,   246,   247,   247,   461,   373,   374,   375,   386,
     392,   393,   394,   163,     0,     0,     0,     0,     0,   163,
       0,     0,   246,     0,   247,   163,   248,   248,   249,   249,
       0,     0,     0,     0,     0,   399,   400,   401,   402,   403,
     250,   250,     0,   251,   251,     0,     0,   248,     0,   249,
     252,   252,   405,   406,   407,   408,   409,   253,   253,     0,
       0,   250,     0,     0,   251,     0,   181,     0,   181,   181,
     417,   252,     0,     0,     0,   181,   254,   254,   253,     0,
       0,     0,     0,     0,     0,     0,   422,   423,   424,   425,
     426,     0,     0,     0,     0,     0,     0,   254,     0,   245,
     245,   244,   244,     0,     0,     0,     0,     0,     0,   429,
     430,   431,   432,   433,     0,   171,   172,   413,   173,   174,
     245,     0,   244,     0,     0,     0,     0,   163,   162,     0,
       0,     0,   180,   163,   180,   180,   198,     0,     0,     0,
       0,     0,     0,     0,   175,   176,   213,   213,   213,     0,
     163,   177,   178,   179,     0,     0,     0,   163,   213,   213,
     228,   228,   228,   228,   -24,   -24,     0,   -24,   -24,   -24,
     -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,     0,
       0,   -24,   -24,     0,     0,     0,     0,     0,     0,   162,
       0,     0,     0,   -24,   -24,     0,     0,     0,     0,     0,
     -24,   -24,   -24,     0,     0,     0,     0,   171,   172,   415,
     173,   174,     0,     0,     0,     0,     0,     0,     0,     0,
     162,   162,   162,   162,   162,    28,    29,     0,    30,    67,
       0,     0,     0,     0,     0,     0,   175,   176,   180,   180,
     180,   180,   180,   177,   178,   179,     0,   171,   172,     0,
     173,   174,     0,     0,    38,    39,   198,   198,   198,   198,
     198,    40,    41,    42,     0,   189,   190,     0,   191,   192,
       0,   213,   213,   213,   213,   213,   175,   176,   204,   205,
       0,   206,   207,   177,   178,   179,   228,   228,   228,   228,
     228,     0,     0,     0,   193,   194,     0,   311,   311,   328,
     328,   195,   196,   197,     0,     0,     0,   208,   209,     0,
       0,     0,     0,     0,   210,   211,   212,     0,     0,   -81,
     -81,   162,   -81,   -81,     0,     0,     0,   311,   311,   311,
     362,   362,   362,   362,   162,     0,     0,     0,     0,     0,
     328,   328,   328,   385,   385,   385,   385,   162,   -81,   -81,
       0,     0,     0,   162,   290,   -81,   -81,   -81,   -52,   162,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,   311,
     311,   311,   311,   311,    86,     0,    87,    88,    89,    90,
      91,    92,    93,    94,     0,     0,   328,   328,   328,   328,
     328,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     180,     0,   180,   180,   198,     0,     0,   164,     0,   180,
       0,   182,     0,   182,   182,   199,     0,     0,     0,     0,
     362,   362,   362,   362,   362,   214,   214,   214,   -82,   -82,
       0,   -82,   -82,     0,     0,     0,     0,   214,   214,   229,
     229,   229,   229,   385,   385,   385,   385,   385,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -82,   -82,     0,
       0,   162,     0,     0,   -82,   -82,   -82,   162,   164,     0,
       0,     0,     0,     0,     0,     0,   -25,   -25,     0,   -25,
     -25,   -25,   -25,   -25,   162,   -25,   -25,   -25,   -25,   -25,
     -25,   162,     0,   -25,   -25,     0,     0,     0,     0,   164,
     164,   164,   164,   164,     0,   -25,   -25,     0,     0,     0,
       0,     0,   -25,   -25,   -25,     0,     0,   182,   182,   182,
     182,   182,     0,     0,     0,     0,   -83,   -83,     0,   -83,
     -83,     0,     0,     0,     0,   199,   199,   199,   199,   199,
       0,     0,     0,     0,   -84,   -84,     0,   -84,   -84,     0,
     214,   214,   214,   214,   214,   -83,   -83,   -85,   -85,     0,
     -85,   -85,   -83,   -83,   -83,   229,   229,   229,   229,   229,
       0,     0,     0,   -84,   -84,     0,   313,   313,   330,   330,
     -84,   -84,   -84,     0,     0,     0,   -85,   -85,     0,     0,
       0,     0,     0,   -85,   -85,   -85,     0,     0,   -86,   -86,
     164,   -86,   -86,     0,     0,     0,   313,   313,   313,   364,
     364,   364,   364,   164,     0,     0,     0,     0,     0,   330,
     330,   330,   387,   387,   387,   387,   164,   -86,   -86,     0,
       0,     0,   164,     0,   -86,   -86,   -86,   -63,   164,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,   313,   313,
     313,   313,   313,   105,     0,    87,    88,    89,    90,    91,
      92,    93,    94,     0,     0,   330,   330,   330,   330,   330,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   182,
       0,   182,   182,   199,     0,     0,   165,     0,   182,     0,
     183,     0,   183,   183,   200,     0,     0,     0,     0,   364,
     364,   364,   364,   364,   215,   215,   215,   -87,   -87,     0,
     -87,   -87,     0,     0,     0,     0,   215,   215,   230,   230,
     230,   230,   387,   387,   387,   387,   387,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -87,   -87,     0,     0,
     164,     0,     0,   -87,   -87,   -87,   164,   165,     0,     0,
       0,     0,     0,     0,     0,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   164,   -26,   -26,   -26,   -26,   -26,   -26,
     164,     0,   -26,   -26,     0,     0,     0,     0,   165,   165,
     165,   165,   165,     0,   -26,   -26,     0,     0,     0,     0,
       0,   -26,   -26,   -26,     0,     0,   183,   183,   183,   183,
     183,     0,     0,     0,     0,   -88,   -88,     0,   -88,   -88,
       0,     0,     0,     0,   200,   200,   200,   200,   200,     0,
       0,     0,     0,   219,   220,     0,   221,   222,     0,   215,
     215,   215,   215,   215,   -88,   -88,   153,   154,     0,   155,
     156,   -88,   -88,   -88,   230,   230,   230,   230,   230,     0,
       0,     0,   223,   224,     0,   314,   314,   331,   331,   225,
     226,   227,     0,     0,     0,   157,   158,     0,     0,     0,
       0,     0,   159,   160,   161,     0,     0,   302,   303,   165,
     304,   305,     0,     0,     0,   314,   314,   314,   365,   365,
     365,   365,   165,     0,     0,     0,     0,     0,   331,   331,
     331,   388,   388,   388,   388,   165,   306,   307,     0,     0,
       0,   165,     0,   308,   309,   310,   -40,   165,    87,    88,
      89,    90,    91,    92,    93,    94,     0,   314,   314,   314,
     314,   314,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,   331,   331,   331,   331,   331,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   183,     0,
     183,   183,   200,     0,     0,   166,     0,   183,     0,   184,
       0,   184,   184,   201,     0,     0,     0,     0,   365,   365,
     365,   365,   365,   216,   216,   216,   319,   320,     0,   321,
     322,     0,     0,     0,     0,   216,   216,   231,   231,   231,
     231,   388,   388,   388,   388,   388,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   323,   324,     0,     0,   165,
       0,     0,   325,   326,   327,   165,   166,     0,     0,     0,
       0,     0,     0,     0,   -27,   -27,     0,   -27,   -27,   -27,
     -27,   -27,   165,   -27,   -27,   -27,   -27,   -27,   -27,   165,
       0,   -27,   -27,     0,     0,     0,     0,   166,   166,   166,
     166,   166,     0,   -27,   -27,     0,     0,     0,     0,     0,
     -27,   -27,   -27,     0,     0,   184,   184,   184,   184,   184,
       0,     0,     0,     0,   353,   354,     0,   355,   356,     0,
       0,     0,     0,   201,   201,   201,   201,   201,     0,     0,
       0,     0,   376,   377,     0,   378,   379,     0,   216,   216,
     216,   216,   216,   357,   358,     0,     0,     0,     0,     0,
     359,   360,   361,   231,   231,   231,   231,   231,     0,     0,
       0,   380,   381,     0,   315,   315,   332,   332,   382,   383,
     384,   -55,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   166,     0,
       0,     0,     0,     0,   315,   315,   315,   366,   366,   366,
     366,   166,     0,     0,     0,     0,     0,   332,   332,   332,
     389,   389,   389,   389,   166,     0,     0,     0,     0,     0,
     166,     0,   398,   -52,     0,     0,   166,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   315,   315,   315,   315,
     315,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,     0,     0,   332,   332,   332,   332,   332,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   184,     0,   184,
     184,   201,     0,     0,   168,     0,   184,     0,   186,     0,
     186,   186,   202,     0,     0,     0,     0,   366,   366,   366,
     366,   366,   217,   217,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   217,   217,   232,   232,   232,   232,
     389,   389,   389,   389,   389,   -21,     0,     0,     0,   126,
      87,    88,    89,    90,    91,    92,    93,    94,   166,     0,
       0,     0,     0,     0,   166,   168,     0,     0,     0,     0,
       0,     0,     0,   -28,   -28,     0,   -28,   -28,   -28,   -28,
     -28,   166,   -28,   -28,   -28,   -28,   -28,   -28,   166,     0,
     -28,   -28,     0,     0,     0,     0,   168,   168,   168,   168,
     168,     0,   -28,   -28,     0,     0,     0,     0,     0,   -28,
     -28,   -28,     0,     0,   186,   186,   186,   186,   186,   -63,
       0,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   202,   202,   202,   202,   202,   -80,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   217,   217,   217,
     217,   217,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   232,   232,   232,   232,   232,     0,     0,     0,
       0,   271,   -52,   316,   316,   333,   333,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,     0,     0,     0,     0,     0,   168,     0,     0,
       0,     0,     0,   316,   316,   316,   367,   367,   367,   367,
     168,     0,     0,     0,     0,     0,   333,   333,   333,   390,
     390,   390,   390,   168,     0,     0,     0,     0,     0,   168,
       0,     0,   167,     0,     0,   168,   185,     0,   185,   185,
       0,     0,     0,     0,     0,   316,   316,   316,   316,   316,
     -64,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,     0,   333,   333,   333,   333,   333,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   186,     0,   186,   186,
     202,     0,     0,   169,     0,   186,     0,   187,     0,   187,
     187,   203,     0,   167,     0,     0,   367,   367,   367,   367,
     367,   218,   218,   218,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   218,   218,   233,   233,   233,   233,   390,
     390,   390,   390,   390,   -55,     0,     0,     0,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   168,     0,   404,
     -52,     0,     0,   168,   169,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,     0,     0,   170,     0,     0,     0,   188,
     168,   188,   188,     0,     0,     0,     0,   168,     0,     0,
       0,     0,     0,     0,     0,   169,   169,   169,   169,   169,
     -56,     0,     0,     0,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   187,   187,   187,   187,   187,   -54,     0,
       0,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   203,   203,   203,   203,   203,   170,     0,     0,     0,
       0,     0,     0,     0,     0,   167,   218,   218,   218,   218,
     218,     0,     0,     0,     0,     0,     0,     0,   167,     0,
       0,   233,   233,   233,   233,   233,     0,     0,     0,     0,
       0,   167,   317,   317,   334,   334,     0,   167,   296,     0,
       0,     0,   -52,   167,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   169,     0,     0,     0,
       0,     0,   317,   317,   317,   368,   368,   368,   368,   169,
       0,     0,     0,     0,     0,   334,   334,   334,   391,   391,
     391,   391,   169,     0,   185,     0,   185,   185,   169,     0,
       0,   -49,     0,   185,   169,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   317,   317,   317,   317,   317,   146,
       0,    87,    88,    89,    90,    91,    92,    93,    94,     0,
       0,   334,   334,   334,   334,   334,     0,     0,   170,     0,
       0,     0,     0,     0,     0,   187,     0,   187,   187,   203,
       0,   170,     0,     0,   187,   167,     0,     0,     0,     0,
       0,   167,     0,     0,   170,   368,   368,   368,   368,   368,
     170,     0,     0,     0,     0,     0,   170,     0,   167,     0,
       0,     0,     0,     0,     0,   167,     0,     0,   391,   391,
     391,   391,   391,   -65,     0,     0,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   169,     0,     0,     0,
       0,     0,   169,     0,     0,     0,     0,   188,     0,   188,
     188,     0,     0,     0,     0,     0,   188,     0,     0,   169,
       0,     0,     0,     0,   -30,   -30,   169,   -30,   -30,   -30,
     -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,   -51,
       0,   -30,   -30,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,     0,   -30,   -30,     0,     0,     0,     0,     0,
     -30,   -30,   -30,     0,     0,     0,   -29,   -29,   170,   -29,
     -29,   -29,   -29,   -29,   170,   -29,   -29,   -29,   -29,   -29,
     -29,     0,     0,   -29,   -29,     0,     0,     0,     0,     0,
       0,   170,     0,     0,     0,   -29,   -29,     0,   170,     0,
       0,     0,   -29,   -29,   -29,   -11,   -11,     0,   -11,   -11,
     -11,   -11,   -11,     0,   -11,   -11,   -11,   -11,   -11,   -11,
     -53,     0,   -11,   -11,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,     0,   -11,   -11,     0,     0,     0,     0,
       0,   -11,   -11,   -11,   -34,   -34,     0,   -34,   -34,   -34,
     -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -50,
       0,   -34,   -34,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,     0,   -34,   -34,     0,     0,     0,     0,     0,
     -34,   -34,   -34,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -66,     0,
     -33,   -33,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,     0,   -33,   -33,     0,     0,     0,     0,     0,   -33,
     -33,   -33,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,
       0,   -37,   -37,   -37,   -37,   -37,   -37,   -67,     0,   -37,
     -37,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
       0,   -37,   -37,     0,     0,     0,     0,     0,   -37,   -37,
     -37,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,     0,
     -32,   -32,   -32,   -32,   -32,   -32,   -64,     0,   -32,   -32,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
     -32,   -32,     0,     0,     0,     0,     0,   -32,   -32,   -32,
     -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,     0,   -35,
     460,   -35,   -35,   -35,   -35,   -78,     0,   -35,   -35,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,   -35,
     -35,     0,     0,     0,     0,     0,   -35,   -35,   -35,   -38,
     -38,     0,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -38,   -79,     0,   -38,   -38,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -38,   -38,
       0,     0,     0,     0,     0,   -38,   -38,   -38,   -45,   -45,
       0,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,
     -45,   -45,   -45,   -80,     0,   -45,   -45,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,   -45,   -45,     0,
       0,     0,     0,     0,   -45,   -45,   -45,   -43,   -43,     0,
     -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,
     -43,   -43,   -74,     0,   -43,   -43,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,     0,   -43,   -43,     0,     0,
       0,     0,     0,   -43,   -43,   -43,   -46,   -46,     0,   -46,
     -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,
     -46,   -75,     0,   -46,   -46,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,   -46,   -46,     0,     0,     0,
       0,     0,   -46,   -46,   -46,   -44,   -44,     0,   -44,   -44,
     -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,
     -76,     0,   -44,   -44,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,   -44,   -44,     0,     0,     0,     0,
       0,   -44,   -44,   -44,   -47,   -47,     0,   -47,   -47,   -47,
     -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -77,
       0,   -47,   -47,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,   -47,   -47,     0,     0,     0,     0,     0,
     -47,   -47,   -47,   -36,   -36,     0,   -36,   -36,   -36,   -36,
     -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -68,     0,
     -36,   -36,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,     0,   -36,   -36,     0,     0,     0,     0,     0,   -36,
     -36,   -36,    28,    29,     0,    30,    31,    32,     2,     3,
       0,    33,     0,    34,    35,    36,    37,   -48,     0,   -31,
     -23,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
       0,    38,    39,     0,     0,     0,     0,     0,    40,    41,
      42,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,     0,
     -24,     0,   -24,   -24,   -24,   -24,   127,     0,   -24,   -24,
       0,    87,    88,    89,    90,    91,    92,    93,    94,     0,
     -24,   -24,     0,     0,     0,     0,     0,   -24,   -24,   -24,
     -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,     0,   -25,
       0,   -25,   -25,   -25,   -25,   131,     0,   -25,   -25,     0,
      87,    88,    89,    90,    91,    92,    93,    94,     0,   -25,
     -25,     0,     0,     0,     0,     0,   -25,   -25,   -25,   -26,
     -26,     0,   -26,   -26,   -26,   -26,   -26,     0,   -26,     0,
     -26,   -26,   -26,   -26,   133,     0,   -26,   -26,     0,    87,
      88,    89,    90,    91,    92,    93,    94,     0,   -26,   -26,
       0,     0,     0,     0,     0,   -26,   -26,   -26,   -27,   -27,
       0,   -27,   -27,   -27,   -27,   -27,     0,   -27,     0,   -27,
     -27,   -27,   -27,   -63,     0,   -27,   -27,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,     0,   -27,   -27,     0,
       0,     0,     0,     0,   -27,   -27,   -27,   -28,   -28,     0,
     -28,   -28,   -28,   -28,   -28,     0,   -28,     0,   -28,   -28,
     -28,   -28,   -55,     0,   -28,   -28,     0,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,     0,   -28,   -28,     0,     0,
       0,     0,     0,   -28,   -28,   -28,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,     0,   -30,     0,   -30,   -30,   -30,
     -30,   -56,     0,   -30,   -30,     0,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,     0,   -30,   -30,     0,     0,     0,
       0,     0,   -30,   -30,   -30,   -29,   -29,     0,   -29,   -29,
     -29,   -29,   -29,     0,   -29,     0,   -29,   -29,   -29,   -29,
     -54,     0,   -29,   -29,     0,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,     0,   -29,   -29,     0,     0,     0,     0,
       0,   -29,   -29,   -29,   -34,   -34,     0,   -34,   -34,   -34,
     -34,   -34,     0,   -34,     0,   -34,   -34,   -34,   -34,   -49,
       0,   -34,   -34,     0,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,     0,   -34,   -34,     0,     0,     0,     0,     0,
     -34,   -34,   -34,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,     0,   -33,     0,   -33,   -33,   -33,   -33,   -65,     0,
     -33,   -33,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,     0,   -33,   -33,     0,     0,     0,     0,     0,   -33,
     -33,   -33,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,
       0,   -37,     0,   -37,   -37,   -37,   -37,   -51,     0,   -37,
     -37,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
       0,   -37,   -37,     0,     0,     0,     0,     0,   -37,   -37,
     -37,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,     0,
     -32,     0,   -32,   -32,   -32,   -32,   -53,     0,   -32,   -32,
       0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,     0,
     -32,   -32,     0,     0,     0,     0,     0,   -32,   -32,   -32,
     -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,     0,   -38,
       0,   -38,   -38,   -38,   -38,   -50,     0,   -38,   -38,     0,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -38,
     -38,     0,     0,     0,     0,     0,   -38,   -38,   -38,   -45,
     -45,     0,   -45,   -45,   -45,   -45,   -45,     0,   -45,     0,
     -45,   -45,   -45,   -45,   -66,     0,   -45,   -45,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -45,   -45,
       0,     0,     0,     0,     0,   -45,   -45,   -45,   -43,   -43,
       0,   -43,   -43,   -43,   -43,   -43,     0,   -43,     0,   -43,
     -43,   -43,   -43,   -67,     0,   -43,   -43,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,   -43,   -43,     0,
       0,     0,     0,     0,   -43,   -43,   -43,   -46,   -46,     0,
     -46,   -46,   -46,   -46,   -46,     0,   -46,     0,   -46,   -46,
     -46,   -46,   -64,     0,   -46,   -46,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,     0,   -46,   -46,     0,     0,
       0,     0,     0,   -46,   -46,   -46,   -44,   -44,     0,   -44,
     -44,   -44,   -44,   -44,     0,   -44,     0,   -44,   -44,   -44,
     -44,   -78,     0,   -44,   -44,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,   -44,   -44,     0,     0,     0,
       0,     0,   -44,   -44,   -44,   -47,   -47,     0,   -47,   -47,
     -47,   -47,   -47,     0,   -47,     0,   -47,   -47,   -47,   -47,
     -79,     0,   -47,   -47,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,     0,   -47,   -47,     0,     0,     0,     0,
       0,   -47,   -47,   -47,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   -36,     0,   -36,     0,   -36,   -36,   -36,   -36,   -80,
       0,   -36,   -36,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,   -36,   -36,     0,     0,     0,     0,     0,
     -36,   -36,   -36,   -11,   -11,     0,   -11,   -11,   -11,   -11,
     -11,     0,   -11,     0,   -11,   -11,   -11,   -11,   -74,     0,
     -11,   -11,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,   -11,   -11,     0,     0,     0,     0,     0,   -11,
     -11,   -11,    28,    29,     0,    30,    31,   238,     2,     3,
       0,   239,     0,   240,   241,   242,   243,   -75,     0,   -31,
       0,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,    38,    39,     0,     0,     0,     0,     0,    40,    41,
      42,    28,    29,     0,    30,    31,    32,     2,     3,     0,
      33,     0,    34,    35,    36,    37,   -76,     0,   -31,     0,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
      38,    39,     0,     0,     0,     0,    65,    40,    41,    42,
     -52,     0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   258,   -52,     0,
      66,     0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,    65,     0,
       0,     0,   -52,     0,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -55,
       0,     0,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -56,
       0,     0,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -54,
       0,     0,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -49,
       0,     0,     0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -73,
       0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   264,   265,   266,   -51,
       0,     0,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -53,
       0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -50,
       0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -66,
       0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -67,
       0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -74,
       0,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -75,
       0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,
       0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -77,
       0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -68,
       0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -48,
       0,     0,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -55,
       0,     0,     0,     0,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -56,
       0,     0,     0,     0,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -54,
       0,     0,     0,     0,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -49,
       0,     0,     0,     0,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -73,
       0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   277,   278,   279,   -51,
       0,     0,     0,     0,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -53,
       0,     0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -50,
       0,     0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -66,
       0,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -67,
       0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -74,
       0,     0,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -75,
       0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,
       0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -77,
       0,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -68,
       0,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -48,
       0,     0,     0,     0,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   421,
     -52,     0,     0,     0,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   428,   -52,     0,
       0,     0,     0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -56,     0,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -54,     0,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -49,
       0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -73,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
      83,    84,    85,   -51,     0,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -53,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -50,     0,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -66,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -74,     0,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -77,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -48,     0,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -62,     0,     0,     0,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   267,   268,   269,   270,   -55,     0,     0,
       0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -56,     0,     0,     0,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -54,     0,     0,     0,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -49,     0,
       0,     0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -69,     0,     0,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -51,     0,     0,     0,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -53,
       0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -50,     0,     0,     0,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -66,     0,     0,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -67,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -70,     0,     0,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -71,     0,     0,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -72,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -74,     0,
       0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -75,     0,     0,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -76,     0,     0,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -77,
       0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -68,     0,     0,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -48,     0,     0,     0,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -55,     0,     0,     0,     0,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -56,     0,     0,
       0,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -54,     0,     0,     0,     0,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -49,     0,     0,     0,     0,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -69,     0,
       0,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -51,     0,     0,     0,     0,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -53,     0,     0,     0,     0,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -50,
       0,     0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -66,     0,     0,     0,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -67,     0,     0,     0,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -70,     0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -71,     0,     0,
       0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -72,     0,     0,     0,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -74,     0,     0,     0,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -75,     0,
       0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -76,     0,     0,     0,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -77,     0,     0,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -68,
       0,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -48,     0,     0,     0,
       0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -62,     0,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,    97,    98,    99,   100,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -72,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -55,     0,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -56,     0,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -54,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -49,     0,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -51,
       0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -53,     0,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -50,     0,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -67,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -74,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -48,
       0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -77,     0,     0,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -68,     0,     0,     0,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   439,
       0,     0,     0,     0,    87,    88,    89,    90,    91,    92,
      93,    94,   442,     0,     0,     0,     0,    87,    88,    89,
      90,    91,    92,    93,    94,   444,     0,     0,     0,     0,
      87,    88,    89,    90,    91,    92,    93,    94,   -40,     0,
       0,     0,     0,    87,    88,    89,    90,    91,    92,    93,
      94,   -48,     0,     0,     0,     0,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -55,     0,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -56,     0,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -54,     0,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -49,     0,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -51,     0,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -53,     0,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -50,     0,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -66,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -67,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   345,     0,    87,    88,    89,    90,
      91,    92,    93,    94,   -74,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -75,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -76,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -77,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -68,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   410,     0,    87,    88,    89,    90,
      91,    92,    93,    94,   -48,     0,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48
};

static const yytype_int16 yycheck[] =
{
       0,    46,     0,     0,    27,     7,     6,    59,     6,    32,
       9,    10,   127,   128,    70,     0,    68,    19,     7,    19,
      19,     6,    11,    46,    24,     9,    10,    18,    19,   127,
     145,   127,     0,     1,    19,     7,    81,   258,    59,    24,
       7,     9,    10,    66,    11,     0,    69,    68,    71,    72,
     271,   103,   104,    18,   127,     7,   127,    22,    81,    11,
     150,   151,    18,   284,     0,     1,    22,     7,   127,   290,
       0,   127,    19,     9,    10,   296,    23,    19,   127,     0,
       1,    23,   103,   104,    18,   127,    19,   139,     9,    10,
     146,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,     7,   127,   128,   129,    38,    39,    40,
      41,    42,     7,    19,    19,    18,     0,     1,   139,    20,
       3,     4,   145,     6,     7,     9,    10,   127,    19,   127,
      18,    18,    18,    18,    65,     7,    19,    18,    69,    21,
      71,    72,    73,    22,    20,    22,    21,    21,    19,    32,
      33,    19,    83,    84,    85,    19,    39,    40,    41,    22,
      19,     0,     1,    19,    95,    96,    97,    98,    99,   100,
       9,    10,    42,    19,    22,     3,     4,   398,     6,     7,
       8,     9,    10,   404,    12,    13,    14,    15,    16,    17,
      22,    22,    20,    21,    18,   126,    22,    22,    19,    19,
     421,    19,   254,    19,    32,    33,    19,   428,     0,     1,
      19,    39,    40,    41,    19,   238,    19,     9,    10,    19,
       3,     4,     5,     6,     7,    19,   157,   158,   159,   160,
     161,    19,    19,   254,    18,    20,    18,    18,     3,     4,
       5,     6,     7,    22,   175,   176,   177,   178,   179,    32,
      33,     0,     1,    22,     7,     7,    39,    40,    41,    19,
       9,    10,   193,   194,   195,   196,   197,    32,    33,    42,
      21,    19,    19,    19,    39,    40,    41,   208,   209,   210,
     211,   212,   338,    19,   336,    22,    19,    19,    19,    19,
      19,    19,   223,   224,   225,   226,   227,    19,   343,    19,
      19,    19,    19,   234,   235,   236,   237,    19,    22,    22,
       6,    22,    22,    22,   337,   336,   339,   340,    19,    19,
     343,    24,   126,   346,   439,   440,   338,   258,    -1,    -1,
      -1,    -1,    -1,   264,   265,   266,   267,   268,   269,   270,
     271,   439,   440,   439,   440,   460,   277,   278,   279,   280,
     281,   282,   283,   284,    -1,    -1,    -1,    -1,    -1,   290,
      -1,    -1,   460,    -1,   460,   296,   439,   440,   439,   440,
      -1,    -1,    -1,    -1,    -1,   306,   307,   308,   309,   310,
     439,   440,    -1,   439,   440,    -1,    -1,   460,    -1,   460,
     439,   440,   323,   324,   325,   326,   327,   439,   440,    -1,
      -1,   460,    -1,    -1,   460,    -1,   337,    -1,   339,   340,
     341,   460,    -1,    -1,    -1,   346,   439,   440,   460,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   357,   358,   359,   360,
     361,    -1,    -1,    -1,    -1,    -1,    -1,   460,    -1,   439,
     440,   439,   440,    -1,    -1,    -1,    -1,    -1,    -1,   380,
     381,   382,   383,   384,    -1,     3,     4,     5,     6,     7,
     460,    -1,   460,    -1,    -1,    -1,    -1,   398,    65,    -1,
      -1,    -1,    69,   404,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    83,    84,    85,    -1,
     421,    39,    40,    41,    -1,    -1,    -1,   428,    95,    96,
      97,    98,    99,   100,     3,     4,    -1,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,   126,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     157,   158,   159,   160,   161,     3,     4,    -1,     6,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,   175,   176,
     177,   178,   179,    39,    40,    41,    -1,     3,     4,    -1,
       6,     7,    -1,    -1,    32,    33,   193,   194,   195,   196,
     197,    39,    40,    41,    -1,     3,     4,    -1,     6,     7,
      -1,   208,   209,   210,   211,   212,    32,    33,     3,     4,
      -1,     6,     7,    39,    40,    41,   223,   224,   225,   226,
     227,    -1,    -1,    -1,    32,    33,    -1,   234,   235,   236,
     237,    39,    40,    41,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,     3,
       4,   258,     6,     7,    -1,    -1,    -1,   264,   265,   266,
     267,   268,   269,   270,   271,    -1,    -1,    -1,    -1,    -1,
     277,   278,   279,   280,   281,   282,   283,   284,    32,    33,
      -1,    -1,    -1,   290,    18,    39,    40,    41,    22,   296,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,   306,
     307,   308,   309,   310,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,   323,   324,   325,   326,
     327,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     337,    -1,   339,   340,   341,    -1,    -1,    65,    -1,   346,
      -1,    69,    -1,    71,    72,    73,    -1,    -1,    -1,    -1,
     357,   358,   359,   360,   361,    83,    84,    85,     3,     4,
      -1,     6,     7,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,   380,   381,   382,   383,   384,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,   398,    -1,    -1,    39,    40,    41,   404,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,
       7,     8,     9,    10,   421,    12,    13,    14,    15,    16,
      17,   428,    -1,    20,    21,    -1,    -1,    -1,    -1,   157,
     158,   159,   160,   161,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,   175,   176,   177,
     178,   179,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,
       7,    -1,    -1,    -1,    -1,   193,   194,   195,   196,   197,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,    -1,
     208,   209,   210,   211,   212,    32,    33,     3,     4,    -1,
       6,     7,    39,    40,    41,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    32,    33,    -1,   234,   235,   236,   237,
      39,    40,    41,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,     3,     4,
     258,     6,     7,    -1,    -1,    -1,   264,   265,   266,   267,
     268,   269,   270,   271,    -1,    -1,    -1,    -1,    -1,   277,
     278,   279,   280,   281,   282,   283,   284,    32,    33,    -1,
      -1,    -1,   290,    -1,    39,    40,    41,    22,   296,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,   306,   307,
     308,   309,   310,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,   323,   324,   325,   326,   327,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   337,
      -1,   339,   340,   341,    -1,    -1,    65,    -1,   346,    -1,
      69,    -1,    71,    72,    73,    -1,    -1,    -1,    -1,   357,
     358,   359,   360,   361,    83,    84,    85,     3,     4,    -1,
       6,     7,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
      99,   100,   380,   381,   382,   383,   384,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
     398,    -1,    -1,    39,    40,    41,   404,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    10,   421,    12,    13,    14,    15,    16,    17,
     428,    -1,    20,    21,    -1,    -1,    -1,    -1,   157,   158,
     159,   160,   161,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,   175,   176,   177,   178,
     179,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,
      -1,    -1,    -1,    -1,   193,   194,   195,   196,   197,    -1,
      -1,    -1,    -1,     3,     4,    -1,     6,     7,    -1,   208,
     209,   210,   211,   212,    32,    33,     3,     4,    -1,     6,
       7,    39,    40,    41,   223,   224,   225,   226,   227,    -1,
      -1,    -1,    32,    33,    -1,   234,   235,   236,   237,    39,
      40,    41,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,     3,     4,   258,
       6,     7,    -1,    -1,    -1,   264,   265,   266,   267,   268,
     269,   270,   271,    -1,    -1,    -1,    -1,    -1,   277,   278,
     279,   280,   281,   282,   283,   284,    32,    33,    -1,    -1,
      -1,   290,    -1,    39,    40,    41,    22,   296,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,   306,   307,   308,
     309,   310,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,   323,   324,   325,   326,   327,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   337,    -1,
     339,   340,   341,    -1,    -1,    65,    -1,   346,    -1,    69,
      -1,    71,    72,    73,    -1,    -1,    -1,    -1,   357,   358,
     359,   360,   361,    83,    84,    85,     3,     4,    -1,     6,
       7,    -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,   380,   381,   382,   383,   384,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,   398,
      -1,    -1,    39,    40,    41,   404,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    10,   421,    12,    13,    14,    15,    16,    17,   428,
      -1,    20,    21,    -1,    -1,    -1,    -1,   157,   158,   159,
     160,   161,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,   175,   176,   177,   178,   179,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,    -1,
      -1,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
      -1,    -1,     3,     4,    -1,     6,     7,    -1,   208,   209,
     210,   211,   212,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,   223,   224,   225,   226,   227,    -1,    -1,
      -1,    32,    33,    -1,   234,   235,   236,   237,    39,    40,
      41,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,   258,    -1,
      -1,    -1,    -1,    -1,   264,   265,   266,   267,   268,   269,
     270,   271,    -1,    -1,    -1,    -1,    -1,   277,   278,   279,
     280,   281,   282,   283,   284,    -1,    -1,    -1,    -1,    -1,
     290,    -1,    18,    19,    -1,    -1,   296,    23,    24,    25,
      26,    27,    28,    29,    30,    31,   306,   307,   308,   309,
     310,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,   323,   324,   325,   326,   327,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   337,    -1,   339,
     340,   341,    -1,    -1,    65,    -1,   346,    -1,    69,    -1,
      71,    72,    73,    -1,    -1,    -1,    -1,   357,   358,   359,
     360,   361,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,   100,
     380,   381,   382,   383,   384,    19,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,   398,    -1,
      -1,    -1,    -1,    -1,   404,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      10,   421,    12,    13,    14,    15,    16,    17,   428,    -1,
      20,    21,    -1,    -1,    -1,    -1,   157,   158,   159,   160,
     161,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,   175,   176,   177,   178,   179,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,   193,   194,   195,   196,   197,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,   208,   209,   210,
     211,   212,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,   223,   224,   225,   226,   227,    -1,    -1,    -1,
      -1,    18,    19,   234,   235,   236,   237,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,   258,    -1,    -1,
      -1,    -1,    -1,   264,   265,   266,   267,   268,   269,   270,
     271,    -1,    -1,    -1,    -1,    -1,   277,   278,   279,   280,
     281,   282,   283,   284,    -1,    -1,    -1,    -1,    -1,   290,
      -1,    -1,    65,    -1,    -1,   296,    69,    -1,    71,    72,
      -1,    -1,    -1,    -1,    -1,   306,   307,   308,   309,   310,
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,   323,   324,   325,   326,   327,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   337,    -1,   339,   340,
     341,    -1,    -1,    65,    -1,   346,    -1,    69,    -1,    71,
      72,    73,    -1,   126,    -1,    -1,   357,   358,   359,   360,
     361,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,   380,
     381,   382,   383,   384,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,   398,    -1,    18,
      19,    -1,    -1,   404,   126,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    65,    -1,    -1,    -1,    69,
     421,    71,    72,    -1,    -1,    -1,    -1,   428,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   157,   158,   159,   160,   161,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,   175,   176,   177,   178,   179,    19,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,   193,   194,   195,   196,   197,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   258,   208,   209,   210,   211,
     212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   271,    -1,
      -1,   223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,
      -1,   284,   234,   235,   236,   237,    -1,   290,    18,    -1,
      -1,    -1,    22,   296,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,   258,    -1,    -1,    -1,
      -1,    -1,   264,   265,   266,   267,   268,   269,   270,   271,
      -1,    -1,    -1,    -1,    -1,   277,   278,   279,   280,   281,
     282,   283,   284,    -1,   337,    -1,   339,   340,   290,    -1,
      -1,    19,    -1,   346,   296,    23,    24,    25,    26,    27,
      28,    29,    30,    31,   306,   307,   308,   309,   310,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,   323,   324,   325,   326,   327,    -1,    -1,   258,    -1,
      -1,    -1,    -1,    -1,    -1,   337,    -1,   339,   340,   341,
      -1,   271,    -1,    -1,   346,   398,    -1,    -1,    -1,    -1,
      -1,   404,    -1,    -1,   284,   357,   358,   359,   360,   361,
     290,    -1,    -1,    -1,    -1,    -1,   296,    -1,   421,    -1,
      -1,    -1,    -1,    -1,    -1,   428,    -1,    -1,   380,   381,
     382,   383,   384,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,   398,    -1,    -1,    -1,
      -1,    -1,   404,    -1,    -1,    -1,    -1,   337,    -1,   339,
     340,    -1,    -1,    -1,    -1,    -1,   346,    -1,    -1,   421,
      -1,    -1,    -1,    -1,     3,     4,   428,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    19,
      -1,    20,    21,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    -1,     3,     4,   398,     6,
       7,     8,     9,    10,   404,    12,    13,    14,    15,    16,
      17,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,   421,    -1,    -1,    -1,    32,    33,    -1,   428,    -1,
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
      -1,    12,    -1,    14,    15,    16,    17,    19,    -1,    20,
      21,    23,    24,    25,    26,    27,    28,    29,    30,    31,
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
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     3,     4,    -1,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    19,    -1,    20,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      32,    33,    -1,    -1,    -1,    -1,    18,    39,    40,    41,
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    18,    19,    -1,
      42,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    18,    -1,
      -1,    -1,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    18,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    18,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    22,    -1,    24,    25,    26,
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
      37,    38,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
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
      34,    35,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    19,    -1,    -1,    -1,    23,    24,    25,
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
      34,    35,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    19,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     9,    10,    44,    45,    46,    47,    49,    50,
      72,    73,    74,     0,    45,    22,    48,    51,    11,    18,
       7,    50,    52,    53,    23,    19,    53,    20,     3,     4,
       6,     7,     8,    12,    14,    15,    16,    17,    32,    33,
      39,    40,    41,    49,    50,    56,    57,    58,    59,    60,
      61,    62,    64,    66,    67,    68,    69,    70,    71,    75,
      76,    77,    78,    79,    80,    18,    42,     7,    75,    18,
      18,    18,    18,    18,    69,    69,    69,    69,    69,    21,
      56,    20,    22,    36,    37,    38,    22,    24,    25,    26,
      27,    28,    29,    30,    31,    81,    82,    32,    33,    34,
      35,    54,    55,    75,    75,    22,    75,     7,    63,    64,
       5,    75,     5,    75,    69,    56,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    19,    23,    19,    19,    22,
      19,    19,    19,    19,    19,    21,    55,    57,    57,    75,
      22,    22,    22,    22,    22,    13,    22,    57,    64,    65,
      72,    72,    22,     3,     4,     6,     7,    32,    33,    39,
      40,    41,    68,    69,    70,    71,    76,    77,    78,    79,
      80,     3,     4,     6,     7,    32,    33,    39,    40,    41,
      68,    69,    70,    71,    76,    77,    78,    79,    80,     3,
       4,     6,     7,    32,    33,    39,    40,    41,    68,    70,
      71,    76,    78,    79,     3,     4,     6,     7,    32,    33,
      39,    40,    41,    68,    70,    71,    76,    78,    79,     3,
       4,     6,     7,    32,    33,    39,    40,    41,    68,    70,
      71,    76,    78,    79,    81,    82,    81,    82,     8,    12,
      14,    15,    16,    17,    49,    50,    58,    59,    60,    61,
      62,    64,    66,    67,    75,     7,    51,    51,    18,    69,
      69,    69,    69,    69,    36,    37,    38,    32,    33,    34,
      35,    18,    69,    69,    69,    69,    69,    36,    37,    38,
      32,    33,    34,    35,    18,    69,    69,    69,    69,    69,
      18,    69,    69,    69,    69,    69,    18,    69,    69,    69,
      69,    69,     3,     4,     6,     7,    32,    33,    39,    40,
      41,    68,    69,    70,    71,    76,    78,    79,    69,     3,
       4,     6,     7,    32,    33,    39,    40,    41,    68,    69,
      70,    71,    76,    78,    79,    69,    75,    18,    18,    18,
      18,    18,    22,    20,    22,    22,    42,     7,     7,    54,
      69,    69,    69,     3,     4,     6,     7,    32,    33,    39,
      40,    41,    68,    69,    70,    71,    76,    78,    79,    69,
      69,    69,    54,    69,    69,    69,     3,     4,     6,     7,
      32,    33,    39,    40,    41,    68,    69,    70,    71,    76,
      78,    79,    69,    69,    69,    54,    54,    54,    18,    69,
      69,    69,    69,    69,    18,    69,    69,    69,    69,    69,
      22,    75,    63,     5,    75,     5,    75,    69,    56,    75,
      19,    18,    69,    69,    69,    69,    69,    19,    18,    69,
      69,    69,    69,    69,    19,    19,    19,    54,    54,    19,
      19,    19,    19,    19,    19,    19,    21,    54,    54,    19,
      19,    57,    57,    22,    22,    22,    22,    22,    19,    19,
      13,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    45,    45,    46,    46,    46,    48,
      47,    49,    51,    50,    52,    52,    53,    53,    54,    54,
      55,    55,    56,    56,    57,    57,    57,    57,    57,    57,
      57,    58,    57,    57,    59,    60,    60,    61,    62,    63,
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
       8,     2,     0,     3,     1,     0,     3,     1,     1,     0,
       3,     1,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     2,     2,     5,     7,     3,     5,     5,
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
#line 142 "src/syn.y"
                   {
      (yyval.node) = create_node(PROGRAM);
      root = (yyval.node);
      add_tree_node(root, (yyvsp[0].node));

      // root = $$;
      // root = create_node(root, PROGRAM);
      // add_tree_node(root, $1);
    }
#line 2703 "src/syn.tab.c"
    break;

  case 3:
#line 151 "src/syn.y"
           {
      (yyval.node) = create_node(PROGRAM);
      printf("epsilon (program) \n");
    }
#line 2712 "src/syn.tab.c"
    break;

  case 4:
#line 158 "src/syn.y"
                                {
      (yyval.node) = create_node(LIST_DECLARATIONS);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 2722 "src/syn.tab.c"
    break;

  case 5:
#line 163 "src/syn.y"
                 {
      (yyval.node) = create_node(LIST_DECLARATIONS);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 2731 "src/syn.tab.c"
    break;

  case 6:
#line 170 "src/syn.y"
                   {
      (yyval.node) = create_node(DECLARATION);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 2740 "src/syn.tab.c"
    break;

  case 7:
#line 174 "src/syn.y"
                    {
      (yyval.node) = create_node(DECLARATION);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 2749 "src/syn.tab.c"
    break;

  case 8:
#line 178 "src/syn.y"
          {
      (yyval.node) = create_node(DECLARATION); 
      printf("**error** \n");
    }
#line 2758 "src/syn.tab.c"
    break;

  case 9:
#line 185 "src/syn.y"
                  {increment_scope();}
#line 2764 "src/syn.tab.c"
    break;

  case 10:
#line 185 "src/syn.y"
                                                                                 {
      (yyval.node) = create_node(FUNCTION_DECLARATION);    
      add_tree_node((yyval.node), (yyvsp[-7].node));
      // add_tree_token_node($$, &$3, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-4].node));
      // add_tree_token_node($$, &$5, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$6, OPEN_CURLY_BRACKET);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$8, CLOSE_CURLY_BRACKET);
    }
#line 2779 "src/syn.tab.c"
    break;

  case 11:
#line 198 "src/syn.y"
                      {
      (yyval.node) = create_node(VARIABLE_DECLARATION);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 2789 "src/syn.tab.c"
    break;

  case 12:
#line 206 "src/syn.y"
       {add_table_node(yytext);}
#line 2795 "src/syn.tab.c"
    break;

  case 13:
#line 206 "src/syn.y"
                                    {
      (yyval.node) = create_node(UNIQUE_DECLARATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[0].token), IDENTIFIER);
    }
#line 2805 "src/syn.tab.c"
    break;

  case 14:
#line 214 "src/syn.y"
                 {
      (yyval.node) = create_node(PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 2814 "src/syn.tab.c"
    break;

  case 15:
#line 218 "src/syn.y"
           {
      (yyval.node) = create_node(PARAMETERS);
      printf("epsilon (parameters) \n");
    }
#line 2823 "src/syn.tab.c"
    break;

  case 16:
#line 225 "src/syn.y"
                                      {
      (yyval.node) = create_node(LIST_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$2, COMMA);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 2834 "src/syn.tab.c"
    break;

  case 17:
#line 231 "src/syn.y"
                    {
      (yyval.node) = create_node(LIST_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 2843 "src/syn.tab.c"
    break;

  case 18:
#line 238 "src/syn.y"
                         {
      (yyval.node) = create_node(CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 2852 "src/syn.tab.c"
    break;

  case 19:
#line 242 "src/syn.y"
           {
      (yyval.node) = create_node(CALLING_PARAMETERS);
      printf("epsilon (calling_parameters) \n");
    }
#line 2861 "src/syn.tab.c"
    break;

  case 20:
#line 249 "src/syn.y"
                                       {
      (yyval.node) = create_node(LIST_CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$2, COMMA);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 2872 "src/syn.tab.c"
    break;

  case 21:
#line 255 "src/syn.y"
              {
      (yyval.node) = create_node(LIST_CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 2881 "src/syn.tab.c"
    break;

  case 22:
#line 262 "src/syn.y"
                          {
      (yyval.node) = create_node(BLOCK_COMMANDS);
      // $$ = $1;
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 2892 "src/syn.tab.c"
    break;

  case 23:
#line 268 "src/syn.y"
           {
      (yyval.node) = create_node(BLOCK_COMMANDS);
      printf("epsilon (block_commands) \n");
    }
#line 2901 "src/syn.tab.c"
    break;

  case 24:
#line 275 "src/syn.y"
                  {
      (yyval.node) = create_node(COMMAND);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 2910 "src/syn.tab.c"
    break;

  case 25:
#line 279 "src/syn.y"
                  {
      (yyval.node) = create_node(COMMAND);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 2919 "src/syn.tab.c"
    break;

  case 26:
#line 283 "src/syn.y"
                     {
      (yyval.node) = create_node(COMMAND);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 2928 "src/syn.tab.c"
    break;

  case 27:
#line 287 "src/syn.y"
                {
      (yyval.node) = create_node(COMMAND);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 2937 "src/syn.tab.c"
    break;

  case 28:
#line 291 "src/syn.y"
              {
      (yyval.node) = create_node(COMMAND);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 2946 "src/syn.tab.c"
    break;

  case 29:
#line 295 "src/syn.y"
          {
      (yyval.node) = create_node(COMMAND);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 2955 "src/syn.tab.c"
    break;

  case 30:
#line 299 "src/syn.y"
           {
      (yyval.node) = create_node(COMMAND);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 2964 "src/syn.tab.c"
    break;

  case 31:
#line 303 "src/syn.y"
    {increment_scope();}
#line 2970 "src/syn.tab.c"
    break;

  case 32:
#line 303 "src/syn.y"
                                                {
    // $$ = $2;
      (yyval.node) = create_node(COMMAND);
      // add_tree_token_node($$, &$2, OPEN_CURLY_BRACKET);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$4, CLOSE_CURLY_BRACKET);
    }
#line 2982 "src/syn.tab.c"
    break;

  case 33:
#line 310 "src/syn.y"
                  { 
      (yyval.node) = create_node(COMMAND);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 2992 "src/syn.tab.c"
    break;

  case 34:
#line 318 "src/syn.y"
                {
      (yyval.node) = create_node(INIT_VARIABLE);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 3002 "src/syn.tab.c"
    break;

  case 35:
#line 326 "src/syn.y"
                                                  {
      (yyval.node) = create_node(CONDITIONAL_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), IF);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3015 "src/syn.tab.c"
    break;

  case 36:
#line 334 "src/syn.y"
                                                         {
      (yyval.node) = create_node(CONDITIONAL_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-6].token), IF);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-4].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), ELSE);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3030 "src/syn.tab.c"
    break;

  case 37:
#line 347 "src/syn.y"
                            {
      (yyval.node) = create_node(RETURN_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), RETURN);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$3, SEMICOLON);
    }
#line 3041 "src/syn.tab.c"
    break;

  case 38:
#line 356 "src/syn.y"
                                          {
      (yyval.node) = create_node(ITERATION_PROCESS);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), FOR);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3054 "src/syn.tab.c"
    break;

  case 39:
#line 367 "src/syn.y"
                                          {
      (yyval.node) = create_node(LOOP_CONDITION);
      add_tree_node((yyval.node), (yyvsp[-4].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, SEMICOLON);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3067 "src/syn.tab.c"
    break;

  case 40:
#line 378 "src/syn.y"
                    {
      (yyval.node) = create_node(INIT_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), IDENTIFIER);
      // add_tree_token_node($$, &$2, ASSIGN);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3078 "src/syn.tab.c"
    break;

  case 41:
#line 387 "src/syn.y"
            {
      (yyval.node) = create_node(UPDATE_STMT);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3087 "src/syn.tab.c"
    break;

  case 42:
#line 391 "src/syn.y"
           {
      (yyval.node) = create_node(UPDATE_STMT);
      printf("epsilon (update_stmt) \n");
    }
#line 3096 "src/syn.tab.c"
    break;

  case 43:
#line 398 "src/syn.y"
                                      {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITE);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3109 "src/syn.tab.c"
    break;

  case 44:
#line 406 "src/syn.y"
                                         {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITELN);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3122 "src/syn.tab.c"
    break;

  case 45:
#line 414 "src/syn.y"
                                    {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITELN);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), STRING);
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3135 "src/syn.tab.c"
    break;

  case 46:
#line 422 "src/syn.y"
                                      {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITELN);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), STRING);
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3148 "src/syn.tab.c"
    break;

  case 47:
#line 433 "src/syn.y"
                                    {
      (yyval.node) = create_node(INPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), READ);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3161 "src/syn.tab.c"
    break;

  case 48:
#line 444 "src/syn.y"
                                {
      (yyval.node) = create_node(FUNCTION_CALLING);
      add_tree_token_node((yyval.node), &(yyvsp[-3].token), IDENTIFIER);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
    }
#line 3173 "src/syn.tab.c"
    break;

  case 49:
#line 454 "src/syn.y"
               {
    (yyval.node) = create_node(EXPRESSION);
    add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3182 "src/syn.tab.c"
    break;

  case 50:
#line 458 "src/syn.y"
                     {
      (yyval.node) = create_node(EXPRESSION);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3191 "src/syn.tab.c"
    break;

  case 51:
#line 462 "src/syn.y"
          {
      (yyval.node) = create_node(EXPRESSION);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3200 "src/syn.tab.c"
    break;

  case 52:
#line 466 "src/syn.y"
       {
      (yyval.node) = create_node(EXPRESSION);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), IDENTIFIER);
    }
#line 3209 "src/syn.tab.c"
    break;

  case 53:
#line 473 "src/syn.y"
         {
      (yyval.node) = create_node(CONSTANT);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3218 "src/syn.tab.c"
    break;

  case 54:
#line 477 "src/syn.y"
             {
      (yyval.node) = create_node(CONSTANT);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NIL);
    }
#line 3227 "src/syn.tab.c"
    break;

  case 55:
#line 484 "src/syn.y"
          {
      (yyval.node) = create_node(NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NUMBER_INT);
    }
#line 3236 "src/syn.tab.c"
    break;

  case 56:
#line 488 "src/syn.y"
              {
      (yyval.node) = create_node(NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NUMBER_FLOAT);
    }
#line 3245 "src/syn.tab.c"
    break;

  case 57:
#line 495 "src/syn.y"
            {
      (yyval.node) = create_node(TYPE);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3254 "src/syn.tab.c"
    break;

  case 58:
#line 499 "src/syn.y"
                 {
      (yyval.node) = create_node(TYPE);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3263 "src/syn.tab.c"
    break;

  case 59:
#line 506 "src/syn.y"
                       {
      (yyval.node) = create_node(TYPE_LIST);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_token_node((yyval.node), &(yyvsp[0].token), LIST);
    }
#line 3273 "src/syn.tab.c"
    break;

  case 60:
#line 514 "src/syn.y"
        {
      (yyval.node) = create_node(TYPE_NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), INT);
    }
#line 3282 "src/syn.tab.c"
    break;

  case 61:
#line 518 "src/syn.y"
            {
      (yyval.node) = create_node(TYPE_NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), FLOAT);
    }
#line 3291 "src/syn.tab.c"
    break;

  case 62:
#line 525 "src/syn.y"
               {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3300 "src/syn.tab.c"
    break;

  case 63:
#line 529 "src/syn.y"
               {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3309 "src/syn.tab.c"
    break;

  case 64:
#line 533 "src/syn.y"
                                        {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3320 "src/syn.tab.c"
    break;

  case 65:
#line 539 "src/syn.y"
                                    {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3331 "src/syn.tab.c"
    break;

  case 66:
#line 548 "src/syn.y"
               {
      (yyval.node) = create_node(SINGLE_OPERATION);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3340 "src/syn.tab.c"
    break;

  case 67:
#line 552 "src/syn.y"
               {
      (yyval.node) = create_node(SINGLE_OPERATION);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3349 "src/syn.tab.c"
    break;

  case 68:
#line 556 "src/syn.y"
                   {
    (yyval.node) = create_node(SINGLE_OPERATION);
    add_tree_token_node((yyval.node), &(yyvsp[-1].token), NOT_OR_TAIL);
    add_tree_node((yyval.node), (yyvsp[0].node));
  }
#line 3359 "src/syn.tab.c"
    break;

  case 69:
#line 564 "src/syn.y"
                              {
      (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), ADD_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3370 "src/syn.tab.c"
    break;

  case 70:
#line 570 "src/syn.y"
                                {
      (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MINUS_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3381 "src/syn.tab.c"
    break;

  case 71:
#line 576 "src/syn.y"
                                {
      (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MULTIPLY_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3392 "src/syn.tab.c"
    break;

  case 72:
#line 582 "src/syn.y"
                                {
       (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), DIVISION_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3403 "src/syn.tab.c"
    break;

  case 73:
#line 588 "src/syn.y"
               {
       (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3412 "src/syn.tab.c"
    break;

  case 74:
#line 595 "src/syn.y"
                 {
    (yyval.node) = create_node(ARITHMETIC_SINGLE);
    add_tree_token_node((yyval.node), &(yyvsp[-1].token), ADD_OP);
    add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3422 "src/syn.tab.c"
    break;

  case 75:
#line 600 "src/syn.y"
                   {
      (yyval.node) = create_node(ARITHMETIC_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MINUS_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3432 "src/syn.tab.c"
    break;

  case 76:
#line 608 "src/syn.y"
                 {
      (yyval.node) = create_node(LIST_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), POP_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3442 "src/syn.tab.c"
    break;

  case 77:
#line 613 "src/syn.y"
                   {
      (yyval.node) = create_node(LIST_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), HEAD_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3452 "src/syn.tab.c"
    break;

  case 78:
#line 621 "src/syn.y"
                               {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), FILTER_OP);
    }
#line 3462 "src/syn.tab.c"
    break;

  case 79:
#line 626 "src/syn.y"
                              {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MAP_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3473 "src/syn.tab.c"
    break;

  case 80:
#line 632 "src/syn.y"
                              {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), CONSTRUCTOR_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3484 "src/syn.tab.c"
    break;

  case 81:
#line 641 "src/syn.y"
      {
      (yyval.node) = create_node(LOGIC_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), AND_OP);
    }
#line 3493 "src/syn.tab.c"
    break;

  case 82:
#line 645 "src/syn.y"
       {
      (yyval.node) = create_node(LOGIC_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), OR_OP);
    }
#line 3502 "src/syn.tab.c"
    break;

  case 83:
#line 652 "src/syn.y"
          {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), GT_OP);
    }
#line 3511 "src/syn.tab.c"
    break;

  case 84:
#line 656 "src/syn.y"
               {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), GE_OP);
    }
#line 3520 "src/syn.tab.c"
    break;

  case 85:
#line 660 "src/syn.y"
         {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), LT_OP);
    }
#line 3529 "src/syn.tab.c"
    break;

  case 86:
#line 664 "src/syn.y"
            {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), LE_OP);
    }
#line 3538 "src/syn.tab.c"
    break;

  case 87:
#line 668 "src/syn.y"
          {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), EQ_OP);
    }
#line 3547 "src/syn.tab.c"
    break;

  case 88:
#line 672 "src/syn.y"
           {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NE_OP);
    }
#line 3556 "src/syn.tab.c"
    break;


#line 3560 "src/syn.tab.c"

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
#line 678 "src/syn.y"

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

  // printf("\n~~~~ ABSTRACT TREE ~~~~\n\n");
  printf("\n====================================================\n");
  printf("\t\t    ABSTRACT TREE");
  printf("\n====================================================\n\n");
  print_tree(root, 1);

  printf("\n\n====================================================\n");
  printf("\t\t    SYMBOL TABLE");
  printf("\n====================================================\n");
  printf("  ID\t|  TOKENS\t\t\t|  SCOPE");
  printf("\n====================================================\n");
  print_table();
  printf("====================================================\n\n");

  destroy_tree(root);
  destroy_table();
  free(root_scope_tree);
  
  fclose(yyin);
  yylex_destroy();
  
  return 0;
}
