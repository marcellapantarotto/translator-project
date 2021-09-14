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
#define YYLAST   5870

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  460

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
       0,   142,   142,   148,   152,   161,   168,   172,   176,   180,
     180,   193,   201,   201,   209,   210,   214,   220,   227,   228,
     232,   233,   237,   242,   246,   250,   254,   258,   262,   266,
     270,   274,   277,   285,   293,   303,   318,   327,   340,   351,
     360,   364,   368,   376,   384,   392,   403,   414,   425,   429,
     433,   437,   444,   448,   455,   459,   466,   470,   477,   485,
     489,   496,   500,   504,   511,   520,   524,   528,   536,   542,
     548,   554,   560,   567,   572,   580,   585,   593,   599,   605,
     614,   618,   625,   629,   633,   637,   641,   645
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
  "block_commands", "command", "init_variable", "conditional_stmt",
  "return_stmt", "iteration", "loop_condition", "init_stmt", "update_stmt",
  "output", "input", "func_calling", "expression", "const", "number",
  "type", "type_lst", "type_number", "operation", "single_operation",
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

#define YYPACT_NINF (-218)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-88)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      27,    91,    11,    50,     4,    17,   114,   116,   161,   -11,
      26,    28,    63,  -218,    41,   178,    25,    62,    64,    36,
      72,   109,    68,    74,    42,    78,    94,  2769,  4343,  4360,
    4377,  3608,   542,   102,   103,   115,   118,   119,  2769,   542,
     542,   542,   542,   542,  2808,   108,   122,  2769,  2847,  2886,
    2925,  2964,   117,  3003,  3042,  4394,  4411,  4428,  4445,   259,
    4462,  5295,  4479,  4496,   674,    56,   542,  3650,   690,   612,
     137,   142,   152,   654,   129,  4513,  4530,  4547,  4564,  4581,
     189,   130,  3081,   763,   763,   763,  3120,   860,   878,   891,
     932,  1041,  1138,  1156,  1169,   763,   763,  1210,  1210,  1210,
    1210,   141,   144,  1601,   952,  3159,  2924,   131,   153,   154,
     158,  2963,   175,  3002,   177,  3198,   968,  1230,  1246,  1508,
    1524,  5309,  5323,  5337,  5351,  4598,  1319,  3549,  3588,   542,
     179,   180,   182,   183,   184,   181,   501,  3237,  1689,  3276,
    3315,  3354,  3393,  3432,  3588,    19,  3471,   188,   190,    26,
      26,  3510,  3670,  3690,  3710,  3629,  1319,  1319,  1319,  1319,
    1319,  3730,  3750,  3770,  3790,  3810,  4618,  3830,  3850,  1674,
    3990,  4010,  4030,  1727,   612,   612,   612,   612,   612,  4050,
    4070,  4090,  4110,  4130,  4958,  4150,  4170,  3041,   192,   193,
     194,    85,   654,   654,   654,   654,   654,   197,   199,   200,
     201,   203,   204,  1704,  1802,  2080,    55,   763,   763,   763,
     763,   763,  2154,  5719,  5729,  5739,  5749,  5759,  5365,  5379,
    5393,  2013,  1210,  1210,  1210,  1210,  1210,  5407,  5421,  5435,
    5449,  5463,  5477,  1416,  1416,  1434,  1434,   542,   206,   212,
     213,   214,   215,  2769,   811,   220,  1089,  1367,  1645,  1923,
     226,  2184,  2223,  5769,   155,   227,   228,    56,  3870,  3890,
    3910,  3930,  3950,  1416,  1416,  1416,  1447,  1447,  1447,  1447,
      56,  4190,  4210,  4230,  4250,  4270,  1434,  1434,  1434,  1488,
    1488,  1488,  1488,    56,   217,   230,   231,   232,   235,    56,
    5779,  5789,  5799,  5809,  5819,    56,  5491,  5505,  5519,  5533,
    5547,  1879,  1952,  2222,  2065,  1416,  1416,  1416,  1416,  1416,
    2261,  2300,  2339,  2378,  2417,  2456,  2495,  2534,  3080,  3119,
    3158,  5579,  1434,  1434,  1434,  1434,  1434,  3197,  3236,  3275,
    3314,  3353,  3392,  3431,  3470,  5829,   612,   137,   234,   532,
     654,   236,  2262,  2301,  2340,   612,   112,   233,   241,  2573,
    2612,  2651,  4635,  4652,  4669,  4311,  1447,  1447,  1447,  1447,
    1447,  4686,  4703,  4720,  4737,  4754,  4771,  4788,  4805,  4822,
    4839,   250,  3509,  3548,  3587,  4975,  4992,  5009,  4329,  1488,
    1488,  1488,  1488,  1488,  5026,  5043,  5060,  5077,  5094,  5111,
    5128,  5145,  5162,  5179,   251,   252,   253,    56,  2690,  2729,
    2768,  2807,  2846,    56,  5592,  5605,  5618,  5631,  5644,  2379,
    5657,   263,   278,  5670,   279,  5683,   281,  2418,  5696,  3970,
      56,  4856,  4873,  4890,  4907,  4924,  4290,    56,  5196,  5213,
    5230,  5247,  5264,   282,  5839,  5561,   287,   288,  3549,  3549,
     286,   289,   290,   293,   296,   291,   300,  2885,  5709,  2457,
    2496,  2535,  2574,  2613,  2652,  2691,  4941,  5281,  3549,  2730
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -218,  -218,   247,  -218,  -218,  -218,     2,     0,   -31,  -218,
     285,  -217,   196,   -35,  -114,  -118,   -96,   -85,   -79,   -10,
     -69,  -218,   -73,   -71,   402,    69,   680,   958,    15,  -218,
    -218,   -22,  1236,   187,  1514,  1792,  1741,   -39,   -36
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    16,    44,    45,    17,    22,
      23,   101,   102,    46,    47,    48,    49,    50,    51,   108,
      52,   148,    53,    54,    55,    56,    57,    58,   150,    11,
      12,   103,    60,    61,    62,    63,    64,   235,   236
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,   109,     8,    74,    13,    59,     9,    -9,     8,   246,
      68,    15,    81,   136,   137,    10,    59,    -2,   -59,    21,
      95,    10,   -59,    96,    21,    59,   254,    -3,     1,    95,
     146,   247,    96,   -12,   149,   -56,     2,     3,   -41,   149,
     348,    -4,   248,    19,   104,     2,     3,   106,   249,   111,
     113,     2,     3,   371,   251,   -15,   252,   -60,   250,   152,
     153,   -60,   154,   155,   233,    95,   394,   234,    96,    20,
     -57,   -58,   395,   289,    18,   -19,   147,   -51,   396,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,    25,   156,   157,
     -13,    -8,    -8,   -14,   -13,   158,   159,   160,    27,    95,
      -8,    -8,    96,   283,   -51,   253,    59,   138,    75,    76,
      77,    78,    79,   -16,    -5,     1,    -6,    -6,   255,   256,
      69,    70,    59,     2,     3,    -6,    -6,   245,   -17,   244,
     151,   -13,    24,    71,   162,   -13,    72,    73,   180,    82,
     180,   180,   114,    80,   107,   170,   171,   110,   172,   173,
     115,   -22,   116,   117,   118,   170,   171,   112,   172,   173,
     125,    -7,    -7,   -18,   119,   120,   121,   122,   123,   124,
      -7,    -7,   128,    66,   174,   175,   129,   130,   -11,   -11,
     436,   176,   177,   178,   174,   175,   437,   -11,   -11,   -10,
     -10,   176,   177,   178,   132,   162,   134,   345,   -10,   -10,
     -20,   139,   140,   445,   141,   142,   143,   -40,   341,   -38,
     446,   -54,   -55,   -53,    95,   335,   -48,    96,   -50,   -52,
     -49,    59,   -65,   -66,   336,   258,   259,   260,   261,   262,
     337,   338,   339,   340,   346,   347,   -73,   170,   171,   412,
     172,   173,   342,   271,   272,   273,   274,   275,   343,   -74,
     -75,   -76,   166,    14,   -67,   -13,   184,   417,   184,   184,
     419,   284,   285,   286,   287,   288,   174,   175,   109,   426,
     433,   434,   435,   176,   177,   178,   290,   291,   292,   293,
     294,    86,   439,    87,    88,    89,    90,    91,    92,    93,
      94,   296,   297,   298,   299,   300,    95,   440,   442,    96,
     444,   -47,   311,   317,   328,   334,   447,   448,   451,    26,
     456,   452,   453,   166,   410,   454,   413,   415,   455,   457,
     246,   246,   135,   418,   449,   450,   162,   411,     0,     0,
       0,     0,   349,   350,   351,   362,   368,   369,   370,   162,
     246,     0,   247,   247,   459,   372,   373,   374,   385,   391,
     392,   393,   162,   248,   248,     0,     0,     0,   162,   249,
     249,     0,   247,     0,   162,   251,   251,   252,   252,   250,
     250,     0,     0,   248,   398,   399,   400,   401,   402,   249,
       0,     0,     0,     0,     0,   251,     0,   252,     0,   250,
       0,   404,   405,   406,   407,   408,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   180,     0,   180,   180,   416,
       0,     0,     0,     0,   180,     0,   253,   253,     0,     0,
       0,     0,     0,     0,     0,   421,   422,   423,   424,   425,
       0,     0,     0,     0,     0,     0,   253,     0,   245,   245,
     244,   244,     0,     0,   166,     0,     0,     0,   428,   429,
     430,   431,   432,     0,     0,     0,     0,   166,   245,     0,
     244,     0,     0,     0,     0,     0,   162,   161,     0,     0,
     166,   179,   162,   179,   179,   197,   166,     0,     0,     0,
       0,     0,   166,     0,     0,   212,   212,   212,     0,   162,
       0,     0,     0,     0,     0,     0,   162,   212,   212,   227,
     227,   227,   227,     0,   -34,   -34,     0,   -34,   -34,   -34,
     -34,   -34,     0,   -34,   144,   -34,   -34,   -34,   -34,     0,
       0,   -34,   -34,   184,     0,   184,   184,     0,   161,     0,
       0,     0,   184,   -34,   -34,   170,   171,   414,   172,   173,
     -34,   -34,   -34,     0,     0,    28,    29,     0,    30,    67,
       0,     0,     0,     0,     0,     0,     0,     0,   161,   161,
     161,   161,   161,     0,   174,   175,     0,     0,     0,     0,
       0,   176,   177,   178,    39,    40,   179,   179,   179,   179,
     179,    41,    42,    43,   166,     0,     0,     0,     0,     0,
     166,     0,     0,     0,   197,   197,   197,   197,   197,     0,
       0,     0,     0,     0,     0,     0,     0,   166,     0,   212,
     212,   212,   212,   212,   166,   170,   171,     0,   172,   173,
       0,     0,     0,     0,   227,   227,   227,   227,   227,     0,
       0,     0,     0,     0,     0,   310,   310,   327,   327,     0,
       0,     0,     0,     0,   174,   175,     0,     0,     0,     0,
       0,   176,   177,   178,     0,     0,     0,   188,   189,   161,
     190,   191,     0,     0,     0,   310,   310,   310,   361,   361,
     361,   361,   161,     0,     0,     0,     0,     0,   327,   327,
     327,   384,   384,   384,   384,   161,   192,   193,     0,     0,
       0,   161,     0,   194,   195,   196,   -62,   161,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,     0,   310,   310,   310,
     310,   310,   105,     0,    87,    88,    89,    90,    91,    92,
      93,    94,     0,     0,   327,   327,   327,   327,   327,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   179,     0,
     179,   179,   197,     0,     0,   163,     0,   179,     0,   181,
       0,   181,   181,   198,     0,     0,     0,     0,   361,   361,
     361,   361,   361,   213,   213,   213,   203,   204,     0,   205,
     206,     0,     0,     0,     0,   213,   213,   228,   228,   228,
     228,   384,   384,   384,   384,   384,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   207,   208,     0,     0,   161,
       0,     0,   209,   210,   211,   161,   163,     0,     0,     0,
       0,     0,     0,     0,   -24,   -24,     0,   -24,   -24,   -24,
     -24,   -24,   161,   -24,   -24,   -24,   -24,   -24,   -24,   161,
       0,   -24,   -24,     0,     0,     0,   163,   163,   163,   163,
     163,     0,     0,   -24,   -24,     0,     0,     0,     0,     0,
     -24,   -24,   -24,     0,   181,   181,   181,   181,   181,     0,
       0,     0,     0,   -80,   -80,     0,   -80,   -80,     0,     0,
       0,     0,   198,   198,   198,   198,   198,     0,     0,     0,
       0,   -81,   -81,     0,   -81,   -81,     0,   213,   213,   213,
     213,   213,   -80,   -80,   -82,   -82,     0,   -82,   -82,   -80,
     -80,   -80,   228,   228,   228,   228,   228,     0,     0,     0,
     -81,   -81,     0,   312,   312,   329,   329,   -81,   -81,   -81,
       0,     0,     0,   -82,   -82,     0,     0,     0,     0,     0,
     -82,   -82,   -82,     0,     0,   -83,   -83,   163,   -83,   -83,
       0,     0,     0,   312,   312,   312,   363,   363,   363,   363,
     163,     0,     0,     0,     0,     0,   329,   329,   329,   386,
     386,   386,   386,   163,   -83,   -83,     0,     0,     0,   163,
       0,   -83,   -83,   -83,   -39,   163,    87,    88,    89,    90,
      91,    92,    93,    94,     0,   312,   312,   312,   312,   312,
     -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,   329,   329,   329,   329,   329,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   181,     0,   181,   181,
     198,     0,     0,   164,     0,   181,     0,   182,     0,   182,
     182,   199,     0,     0,     0,     0,   363,   363,   363,   363,
     363,   214,   214,   214,   -84,   -84,     0,   -84,   -84,     0,
       0,     0,     0,   214,   214,   229,   229,   229,   229,   386,
     386,   386,   386,   386,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -84,   -84,     0,     0,   163,     0,     0,
     -84,   -84,   -84,   163,   164,     0,     0,     0,     0,     0,
       0,     0,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,
     163,   -25,   -25,   -25,   -25,   -25,   -25,   163,     0,   -25,
     -25,     0,     0,     0,   164,   164,   164,   164,   164,     0,
       0,   -25,   -25,     0,     0,     0,     0,     0,   -25,   -25,
     -25,     0,   182,   182,   182,   182,   182,     0,     0,     0,
       0,   -85,   -85,     0,   -85,   -85,     0,     0,     0,     0,
     199,   199,   199,   199,   199,     0,     0,     0,     0,   -86,
     -86,     0,   -86,   -86,     0,   214,   214,   214,   214,   214,
     -85,   -85,   -87,   -87,     0,   -87,   -87,   -85,   -85,   -85,
     229,   229,   229,   229,   229,     0,     0,     0,   -86,   -86,
       0,   313,   313,   330,   330,   -86,   -86,   -86,     0,     0,
       0,   -87,   -87,     0,     0,     0,     0,     0,   -87,   -87,
     -87,     0,     0,   218,   219,   164,   220,   221,     0,     0,
       0,   313,   313,   313,   364,   364,   364,   364,   164,     0,
       0,     0,     0,     0,   330,   330,   330,   387,   387,   387,
     387,   164,   222,   223,     0,     0,     0,   164,     0,   224,
     225,   226,   -78,   164,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,   313,   313,   313,   313,   313,   -79,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
     330,   330,   330,   330,   330,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   182,     0,   182,   182,   199,     0,
       0,   165,     0,   182,     0,   183,     0,   183,   183,   200,
       0,     0,     0,     0,   364,   364,   364,   364,   364,   215,
     215,   215,   152,   153,     0,   154,   155,     0,     0,     0,
       0,   215,   215,   230,   230,   230,   230,   387,   387,   387,
     387,   387,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   156,   157,     0,     0,   164,     0,     0,   158,   159,
     160,   164,   165,     0,     0,     0,     0,     0,     0,     0,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,   164,   -26,
     -26,   -26,   -26,   -26,   -26,   164,     0,   -26,   -26,     0,
       0,     0,   165,   165,   165,   165,   165,     0,     0,   -26,
     -26,     0,     0,     0,     0,     0,   -26,   -26,   -26,     0,
     183,   183,   183,   183,   183,     0,     0,     0,     0,   301,
     302,     0,   303,   304,     0,     0,     0,     0,   200,   200,
     200,   200,   200,     0,     0,     0,     0,   318,   319,     0,
     320,   321,     0,   215,   215,   215,   215,   215,   305,   306,
     352,   353,     0,   354,   355,   307,   308,   309,   230,   230,
     230,   230,   230,     0,     0,     0,   322,   323,     0,   314,
     314,   331,   331,   324,   325,   326,     0,     0,     0,   356,
     357,     0,     0,     0,     0,     0,   358,   359,   360,     0,
       0,   375,   376,   165,   377,   378,     0,     0,     0,   314,
     314,   314,   365,   365,   365,   365,   165,     0,     0,     0,
       0,     0,   331,   331,   331,   388,   388,   388,   388,   165,
     379,   380,     0,     0,     0,   165,     0,   381,   382,   383,
     -64,   165,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,   314,   314,   314,   314,   314,   -63,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,   331,   331,
     331,   331,   331,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   183,     0,   183,   183,   200,     0,     0,   167,
       0,   183,     0,   185,     0,   185,   185,   201,     0,     0,
       0,     0,   365,   365,   365,   365,   365,   216,   216,   216,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   216,
     216,   231,   231,   231,   231,   388,   388,   388,   388,   388,
     -21,     0,     0,     0,   126,    87,    88,    89,    90,    91,
      92,    93,    94,   165,     0,     0,     0,     0,     0,   165,
     167,     0,     0,     0,     0,     0,     0,     0,   -27,   -27,
       0,   -27,   -27,   -27,   -27,   -27,   165,   -27,   -27,   -27,
     -27,   -27,   -27,   165,     0,   -27,   -27,     0,     0,     0,
     167,   167,   167,   167,   167,     0,     0,   -27,   -27,     0,
       0,     0,     0,     0,   -27,   -27,   -27,     0,   185,   185,
     185,   185,   185,   -62,     0,     0,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   201,   201,   201,   201,
     201,   145,     0,    87,    88,    89,    90,    91,    92,    93,
      94,   216,   216,   216,   216,   216,   -54,     0,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   231,   231,   231,   231,
     231,     0,     0,     0,     0,   270,   -51,   315,   315,   332,
     332,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,     0,     0,     0,     0,
       0,   167,     0,     0,     0,     0,     0,   315,   315,   315,
     366,   366,   366,   366,   167,     0,     0,     0,     0,     0,
     332,   332,   332,   389,   389,   389,   389,   167,     0,     0,
       0,     0,     0,   167,     0,     0,   169,     0,     0,   167,
     187,     0,   187,   187,     0,     0,     0,     0,     0,   315,
     315,   315,   315,   315,   -55,     0,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,     0,     0,   332,   332,   332,   332,
     332,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     185,     0,   185,   185,   201,     0,     0,   168,     0,   185,
       0,   186,     0,   186,   186,   202,     0,   169,     0,     0,
     366,   366,   366,   366,   366,   217,   217,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   217,   217,   232,
     232,   232,   232,   389,   389,   389,   389,   389,   -54,     0,
       0,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   167,     0,     0,     0,     0,     0,   167,   168,     0,
       0,     0,     0,     0,     0,     0,   -28,   -28,     0,   -28,
     -28,   -28,   -28,   -28,   167,   -28,   -28,   -28,   -28,   -28,
     -28,   167,     0,   -28,   -28,     0,     0,     0,   168,   168,
     168,   168,   168,     0,     0,   -28,   -28,     0,     0,     0,
       0,     0,   -28,   -28,   -28,     0,   186,   186,   186,   186,
     186,   -55,     0,     0,     0,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   202,   202,   202,   202,   202,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   169,   217,
     217,   217,   217,   217,     0,     0,     0,     0,     0,     0,
       0,   169,     0,     0,   232,   232,   232,   232,   232,     0,
       0,     0,     0,     0,   169,   316,   316,   333,   333,     0,
     169,   295,     0,     0,     0,   -51,   169,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   168,
       0,     0,     0,     0,     0,   316,   316,   316,   367,   367,
     367,   367,   168,     0,     0,     0,     0,     0,   333,   333,
     333,   390,   390,   390,   390,   168,     0,   187,     0,   187,
     187,   168,     0,   397,   -51,     0,   187,   168,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   316,   316,   316,
     316,   316,   -53,     0,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,     0,     0,   333,   333,   333,   333,   333,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   186,     0,
     186,   186,   202,     0,     0,     0,     0,   186,   169,     0,
       0,     0,     0,     0,   169,     0,     0,     0,   367,   367,
     367,   367,   367,     0,     0,     0,     0,     0,     0,     0,
       0,   169,     0,     0,     0,     0,     0,     0,   169,     0,
       0,   390,   390,   390,   390,   390,   -48,     0,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,     0,   -30,   -30,   168,
     -30,   -30,   -30,   -30,   -30,   168,   -30,   -30,   -30,   -30,
     -30,   -30,     0,     0,   -30,   -30,     0,     0,     0,     0,
       0,     0,   168,     0,     0,     0,   -30,   -30,     0,   168,
       0,     0,     0,   -30,   -30,   -30,   -29,   -29,     0,   -29,
     -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,
     -29,   -53,     0,   -29,   -29,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,     0,   -29,   -29,     0,     0,     0,
       0,     0,   -29,   -29,   -29,   -11,   -11,     0,   -11,   -11,
     -11,   -11,   -11,     0,   -11,   -11,   -11,   -11,   -11,   -11,
     -48,     0,   -11,   -11,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,     0,   -11,   -11,     0,     0,     0,     0,
       0,   -11,   -11,   -11,   -33,   -33,     0,   -33,   -33,   -33,
     -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -64,
       0,   -33,   -33,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,   -33,   -33,     0,     0,     0,     0,     0,
     -33,   -33,   -33,   -32,   -32,     0,   -32,   -32,   -32,   -32,
     -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -50,     0,
     -32,   -32,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,     0,   -32,   -32,     0,     0,     0,     0,     0,   -32,
     -32,   -32,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,
       0,   -36,   -36,   -36,   -36,   -36,   -36,   -52,     0,   -36,
     -36,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
       0,   -36,   -36,     0,     0,     0,     0,     0,   -36,   -36,
     -36,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,     0,
     -31,   -31,   -31,   -31,   -31,   -31,   -49,     0,   -31,   -31,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,
     -31,   -31,     0,     0,     0,     0,     0,   -31,   -31,   -31,
     -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,     0,   -34,
     458,   -34,   -34,   -34,   -34,   -65,     0,   -34,   -34,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -34,
     -34,     0,     0,     0,     0,     0,   -34,   -34,   -34,   -37,
     -37,     0,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,
     -37,   -37,   -37,   -37,   -66,     0,   -37,   -37,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -37,   -37,
       0,     0,     0,     0,     0,   -37,   -37,   -37,   -44,   -44,
       0,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,
     -44,   -44,   -44,   -63,     0,   -44,   -44,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,     0,   -44,   -44,     0,
       0,     0,     0,     0,   -44,   -44,   -44,   -42,   -42,     0,
     -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,
     -42,   -42,   -77,     0,   -42,   -42,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,     0,   -42,   -42,     0,     0,
       0,     0,     0,   -42,   -42,   -42,   -45,   -45,     0,   -45,
     -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,
     -45,   -78,     0,   -45,   -45,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,   -45,   -45,     0,     0,     0,
       0,     0,   -45,   -45,   -45,   -43,   -43,     0,   -43,   -43,
     -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,
     -79,     0,   -43,   -43,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,     0,   -43,   -43,     0,     0,     0,     0,
       0,   -43,   -43,   -43,   -46,   -46,     0,   -46,   -46,   -46,
     -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -73,
       0,   -46,   -46,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,   -46,   -46,     0,     0,     0,     0,     0,
     -46,   -46,   -46,   -35,   -35,     0,   -35,   -35,   -35,   -35,
     -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -74,     0,
     -35,   -35,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,   -35,   -35,     0,     0,     0,     0,     0,   -35,
     -35,   -35,    28,    29,     0,    30,    31,    32,     2,     3,
       0,    33,     0,    34,    35,    36,    37,   -75,     0,    38,
     -23,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,    39,    40,     0,     0,     0,     0,     0,    41,    42,
      43,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,     0,
     -24,     0,   -24,   -24,   -24,   -24,   -76,     0,   -24,   -24,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
     -24,   -24,     0,     0,     0,     0,     0,   -24,   -24,   -24,
     -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,     0,   -25,
       0,   -25,   -25,   -25,   -25,   -67,     0,   -25,   -25,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,   -25,
     -25,     0,     0,     0,     0,     0,   -25,   -25,   -25,   -26,
     -26,     0,   -26,   -26,   -26,   -26,   -26,     0,   -26,     0,
     -26,   -26,   -26,   -26,   -47,     0,   -26,   -26,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,   -26,   -26,
       0,     0,     0,     0,     0,   -26,   -26,   -26,   -27,   -27,
       0,   -27,   -27,   -27,   -27,   -27,     0,   -27,     0,   -27,
     -27,   -27,   -27,   127,     0,   -27,   -27,     0,    87,    88,
      89,    90,    91,    92,    93,    94,     0,   -27,   -27,     0,
       0,     0,     0,     0,   -27,   -27,   -27,   -28,   -28,     0,
     -28,   -28,   -28,   -28,   -28,     0,   -28,     0,   -28,   -28,
     -28,   -28,   131,     0,   -28,   -28,     0,    87,    88,    89,
      90,    91,    92,    93,    94,     0,   -28,   -28,     0,     0,
       0,     0,     0,   -28,   -28,   -28,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,     0,   -30,     0,   -30,   -30,   -30,
     -30,   133,     0,   -30,   -30,     0,    87,    88,    89,    90,
      91,    92,    93,    94,     0,   -30,   -30,     0,     0,     0,
       0,     0,   -30,   -30,   -30,   -29,   -29,     0,   -29,   -29,
     -29,   -29,   -29,     0,   -29,     0,   -29,   -29,   -29,   -29,
     -62,     0,   -29,   -29,     0,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,     0,   -29,   -29,     0,     0,     0,     0,
       0,   -29,   -29,   -29,   -33,   -33,     0,   -33,   -33,   -33,
     -33,   -33,     0,   -33,     0,   -33,   -33,   -33,   -33,   -54,
       0,   -33,   -33,     0,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,     0,   -33,   -33,     0,     0,     0,     0,     0,
     -33,   -33,   -33,   -32,   -32,     0,   -32,   -32,   -32,   -32,
     -32,     0,   -32,     0,   -32,   -32,   -32,   -32,   -55,     0,
     -32,   -32,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,     0,   -32,   -32,     0,     0,     0,     0,     0,   -32,
     -32,   -32,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,
       0,   -36,     0,   -36,   -36,   -36,   -36,   -53,     0,   -36,
     -36,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
       0,   -36,   -36,     0,     0,     0,     0,     0,   -36,   -36,
     -36,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,     0,
     -31,     0,   -31,   -31,   -31,   -31,   -48,     0,   -31,   -31,
       0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,
     -31,   -31,     0,     0,     0,     0,     0,   -31,   -31,   -31,
     -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,   -37,
       0,   -37,   -37,   -37,   -37,   -64,     0,   -37,   -37,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,   -37,
     -37,     0,     0,     0,     0,     0,   -37,   -37,   -37,   -44,
     -44,     0,   -44,   -44,   -44,   -44,   -44,     0,   -44,     0,
     -44,   -44,   -44,   -44,   -50,     0,   -44,   -44,     0,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -44,   -44,
       0,     0,     0,     0,     0,   -44,   -44,   -44,   -42,   -42,
       0,   -42,   -42,   -42,   -42,   -42,     0,   -42,     0,   -42,
     -42,   -42,   -42,   -52,     0,   -42,   -42,     0,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,     0,   -42,   -42,     0,
       0,     0,     0,     0,   -42,   -42,   -42,   -45,   -45,     0,
     -45,   -45,   -45,   -45,   -45,     0,   -45,     0,   -45,   -45,
     -45,   -45,   -49,     0,   -45,   -45,     0,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,     0,   -45,   -45,     0,     0,
       0,     0,     0,   -45,   -45,   -45,   -43,   -43,     0,   -43,
     -43,   -43,   -43,   -43,     0,   -43,     0,   -43,   -43,   -43,
     -43,   -65,     0,   -43,   -43,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,     0,   -43,   -43,     0,     0,     0,
       0,     0,   -43,   -43,   -43,   -46,   -46,     0,   -46,   -46,
     -46,   -46,   -46,     0,   -46,     0,   -46,   -46,   -46,   -46,
     -66,     0,   -46,   -46,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,   -46,   -46,     0,     0,     0,     0,
       0,   -46,   -46,   -46,   -35,   -35,     0,   -35,   -35,   -35,
     -35,   -35,     0,   -35,     0,   -35,   -35,   -35,   -35,   -63,
       0,   -35,   -35,     0,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,     0,   -35,   -35,     0,     0,     0,     0,     0,
     -35,   -35,   -35,   -11,   -11,     0,   -11,   -11,   -11,   -11,
     -11,     0,   -11,     0,   -11,   -11,   -11,   -11,   -77,     0,
     -11,   -11,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,     0,   -11,   -11,     0,     0,     0,     0,     0,   -11,
     -11,   -11,    28,    29,     0,    30,    31,   237,     2,     3,
       0,   238,     0,   239,   240,   241,   242,   -78,     0,   243,
       0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,    39,    40,     0,     0,     0,     0,     0,    41,    42,
      43,    28,    29,     0,    30,    31,    32,     2,     3,     0,
      33,     0,    34,    35,    36,    37,   -79,     0,    38,     0,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,
      39,    40,     0,     0,     0,     0,    65,    41,    42,    43,
     -51,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   257,   -51,     0,
      66,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,    65,     0,
       0,     0,   -51,     0,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -54,
       0,     0,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -55,
       0,     0,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -53,
       0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -48,
       0,     0,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -72,
       0,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   263,   264,   265,   -50,
       0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -52,
       0,     0,     0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -49,
       0,     0,     0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -65,
       0,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -66,
       0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -73,
       0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -74,
       0,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -75,
       0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,
       0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -67,
       0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -47,
       0,     0,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -54,
       0,     0,     0,     0,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -55,
       0,     0,     0,     0,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -53,
       0,     0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -48,
       0,     0,     0,     0,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -72,
       0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   276,   277,   278,   -50,
       0,     0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -52,
       0,     0,     0,     0,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -49,
       0,     0,     0,     0,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -65,
       0,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -66,
       0,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -73,
       0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -74,
       0,     0,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -75,
       0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,
       0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -67,
       0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -47,
       0,     0,     0,     0,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   420,
     -51,     0,     0,     0,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   427,   -51,     0,
       0,     0,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -54,     0,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -55,     0,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -53,
       0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -48,     0,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -72,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,    83,    84,    85,
     -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -52,     0,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -49,     0,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -66,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -76,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -67,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -61,     0,     0,
       0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     266,   267,   268,   269,   -54,     0,     0,     0,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -55,     0,     0,     0,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -53,     0,
       0,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -48,     0,     0,     0,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -68,     0,     0,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -50,
       0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -52,     0,     0,     0,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -49,     0,     0,     0,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -65,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -66,     0,     0,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -69,     0,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -70,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -71,     0,
       0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -73,     0,     0,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -74,     0,     0,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -75,
       0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -76,     0,     0,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -67,     0,     0,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -47,     0,     0,     0,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -61,     0,     0,
       0,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     279,   280,   281,   282,   -54,     0,     0,     0,     0,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -55,     0,     0,     0,     0,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -53,     0,
       0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -48,     0,     0,     0,     0,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -68,     0,     0,     0,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -50,
       0,     0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -52,     0,     0,     0,
       0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -49,     0,     0,     0,     0,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -65,     0,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -66,     0,     0,
       0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -69,     0,     0,     0,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -70,     0,     0,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -71,     0,
       0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -73,     0,     0,     0,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -74,     0,     0,     0,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -75,
       0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -76,     0,     0,     0,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -67,     0,     0,     0,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -47,     0,     0,     0,     0,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -61,     0,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,    97,    98,    99,
     100,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -69,     0,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -70,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -54,     0,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -55,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -53,     0,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -48,
       0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -50,     0,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -52,     0,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -49,     0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -65,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -66,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -73,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -74,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -76,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -67,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -47,     0,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   403,   -51,     0,
       0,     0,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -73,     0,     0,     0,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -74,     0,     0,     0,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -75,     0,     0,
       0,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -76,     0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -67,     0,     0,     0,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   438,     0,     0,     0,
       0,    87,    88,    89,    90,    91,    92,    93,    94,   441,
       0,     0,     0,     0,    87,    88,    89,    90,    91,    92,
      93,    94,   443,     0,     0,     0,     0,    87,    88,    89,
      90,    91,    92,    93,    94,   -39,     0,     0,     0,     0,
      87,    88,    89,    90,    91,    92,    93,    94,   -47,     0,
       0,     0,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -52,     0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -49,     0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   344,     0,    87,    88,    89,    90,    91,    92,    93,
      94,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   409,     0,    87,    88,    89,    90,    91,    92,    93,
      94,   -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47
};

static const yytype_int16 yycheck[] =
{
       0,    70,     0,    38,     0,    27,     6,    18,     6,   127,
      32,    22,    47,   127,   128,     0,    38,     0,     7,    19,
      59,     6,    11,    59,    24,    47,     7,     0,     1,    68,
     144,   127,    68,     7,    19,     7,     9,    10,    19,    24,
     257,     0,   127,    18,    66,     9,    10,    69,   127,    71,
      72,     9,    10,   270,   127,    19,   127,     7,   127,     3,
       4,    11,     6,     7,   103,   104,   283,   103,   104,     7,
       7,     7,   289,    18,    11,    19,   145,    22,   295,    24,
      25,    26,    27,    28,    29,    30,    31,    19,    32,    33,
      18,     0,     1,    19,    22,    39,    40,    41,    20,   138,
       9,    10,   138,    18,    19,   127,   128,   129,    39,    40,
      41,    42,    43,    19,     0,     1,     0,     1,   149,   150,
      18,    18,   144,     9,    10,     9,    10,   127,    19,   127,
      22,    19,    23,    18,    65,    23,    18,    18,    69,    22,
      71,    72,    73,    21,     7,     3,     4,     5,     6,     7,
      21,    21,    83,    84,    85,     3,     4,     5,     6,     7,
      19,     0,     1,    19,    95,    96,    97,    98,    99,   100,
       9,    10,    19,    42,    32,    33,    22,    19,     0,     1,
     397,    39,    40,    41,    32,    33,   403,     9,    10,     0,
       1,    39,    40,    41,    19,   126,    19,    42,     9,    10,
      19,    22,    22,   420,    22,    22,    22,    19,   243,    19,
     427,    19,    19,    19,   253,   237,    19,   253,    19,    19,
      19,   243,    19,    19,    18,   156,   157,   158,   159,   160,
      18,    18,    18,    18,     7,     7,    19,     3,     4,     5,
       6,     7,    22,   174,   175,   176,   177,   178,    22,    19,
      19,    19,    65,     6,    19,    22,    69,    21,    71,    72,
      19,   192,   193,   194,   195,   196,    32,    33,   337,    19,
      19,    19,    19,    39,    40,    41,   207,   208,   209,   210,
     211,    22,    19,    24,    25,    26,    27,    28,    29,    30,
      31,   222,   223,   224,   225,   226,   335,    19,    19,   335,
      19,    19,   233,   234,   235,   236,    19,    19,    22,    24,
      19,    22,    22,   126,   336,    22,   338,   339,    22,    19,
     438,   439,   126,   345,   438,   439,   257,   337,    -1,    -1,
      -1,    -1,   263,   264,   265,   266,   267,   268,   269,   270,
     458,    -1,   438,   439,   458,   276,   277,   278,   279,   280,
     281,   282,   283,   438,   439,    -1,    -1,    -1,   289,   438,
     439,    -1,   458,    -1,   295,   438,   439,   438,   439,   438,
     439,    -1,    -1,   458,   305,   306,   307,   308,   309,   458,
      -1,    -1,    -1,    -1,    -1,   458,    -1,   458,    -1,   458,
      -1,   322,   323,   324,   325,   326,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   336,    -1,   338,   339,   340,
      -1,    -1,    -1,    -1,   345,    -1,   438,   439,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   356,   357,   358,   359,   360,
      -1,    -1,    -1,    -1,    -1,    -1,   458,    -1,   438,   439,
     438,   439,    -1,    -1,   257,    -1,    -1,    -1,   379,   380,
     381,   382,   383,    -1,    -1,    -1,    -1,   270,   458,    -1,
     458,    -1,    -1,    -1,    -1,    -1,   397,    65,    -1,    -1,
     283,    69,   403,    71,    72,    73,   289,    -1,    -1,    -1,
      -1,    -1,   295,    -1,    -1,    83,    84,    85,    -1,   420,
      -1,    -1,    -1,    -1,    -1,    -1,   427,    95,    96,    97,
      98,    99,   100,    -1,     3,     4,    -1,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      -1,    20,    21,   336,    -1,   338,   339,    -1,   126,    -1,
      -1,    -1,   345,    32,    33,     3,     4,     5,     6,     7,
      39,    40,    41,    -1,    -1,     3,     4,    -1,     6,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,   157,
     158,   159,   160,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,    32,    33,   174,   175,   176,   177,
     178,    39,    40,    41,   397,    -1,    -1,    -1,    -1,    -1,
     403,    -1,    -1,    -1,   192,   193,   194,   195,   196,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   420,    -1,   207,
     208,   209,   210,   211,   427,     3,     4,    -1,     6,     7,
      -1,    -1,    -1,    -1,   222,   223,   224,   225,   226,    -1,
      -1,    -1,    -1,    -1,    -1,   233,   234,   235,   236,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,     3,     4,   257,
       6,     7,    -1,    -1,    -1,   263,   264,   265,   266,   267,
     268,   269,   270,    -1,    -1,    -1,    -1,    -1,   276,   277,
     278,   279,   280,   281,   282,   283,    32,    33,    -1,    -1,
      -1,   289,    -1,    39,    40,    41,    22,   295,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,   305,   306,   307,
     308,   309,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,   322,   323,   324,   325,   326,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,
     338,   339,   340,    -1,    -1,    65,    -1,   345,    -1,    69,
      -1,    71,    72,    73,    -1,    -1,    -1,    -1,   356,   357,
     358,   359,   360,    83,    84,    85,     3,     4,    -1,     6,
       7,    -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,   379,   380,   381,   382,   383,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,   397,
      -1,    -1,    39,    40,    41,   403,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    10,   420,    12,    13,    14,    15,    16,    17,   427,
      -1,    20,    21,    -1,    -1,    -1,   156,   157,   158,   159,
     160,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,   174,   175,   176,   177,   178,    -1,
      -1,    -1,    -1,     3,     4,    -1,     6,     7,    -1,    -1,
      -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
      -1,     3,     4,    -1,     6,     7,    -1,   207,   208,   209,
     210,   211,    32,    33,     3,     4,    -1,     6,     7,    39,
      40,    41,   222,   223,   224,   225,   226,    -1,    -1,    -1,
      32,    33,    -1,   233,   234,   235,   236,    39,    40,    41,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,     3,     4,   257,     6,     7,
      -1,    -1,    -1,   263,   264,   265,   266,   267,   268,   269,
     270,    -1,    -1,    -1,    -1,    -1,   276,   277,   278,   279,
     280,   281,   282,   283,    32,    33,    -1,    -1,    -1,   289,
      -1,    39,    40,    41,    22,   295,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,   305,   306,   307,   308,   309,
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,   322,   323,   324,   325,   326,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,   339,
     340,    -1,    -1,    65,    -1,   345,    -1,    69,    -1,    71,
      72,    73,    -1,    -1,    -1,    -1,   356,   357,   358,   359,
     360,    83,    84,    85,     3,     4,    -1,     6,     7,    -1,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,   379,
     380,   381,   382,   383,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,   397,    -1,    -1,
      39,    40,    41,   403,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
     420,    12,    13,    14,    15,    16,    17,   427,    -1,    20,
      21,    -1,    -1,    -1,   156,   157,   158,   159,   160,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,    -1,   174,   175,   176,   177,   178,    -1,    -1,    -1,
      -1,     3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,
     192,   193,   194,   195,   196,    -1,    -1,    -1,    -1,     3,
       4,    -1,     6,     7,    -1,   207,   208,   209,   210,   211,
      32,    33,     3,     4,    -1,     6,     7,    39,    40,    41,
     222,   223,   224,   225,   226,    -1,    -1,    -1,    32,    33,
      -1,   233,   234,   235,   236,    39,    40,    41,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,     3,     4,   257,     6,     7,    -1,    -1,
      -1,   263,   264,   265,   266,   267,   268,   269,   270,    -1,
      -1,    -1,    -1,    -1,   276,   277,   278,   279,   280,   281,
     282,   283,    32,    33,    -1,    -1,    -1,   289,    -1,    39,
      40,    41,    22,   295,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,   305,   306,   307,   308,   309,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
     322,   323,   324,   325,   326,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   336,    -1,   338,   339,   340,    -1,
      -1,    65,    -1,   345,    -1,    69,    -1,    71,    72,    73,
      -1,    -1,    -1,    -1,   356,   357,   358,   359,   360,    83,
      84,    85,     3,     4,    -1,     6,     7,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,   379,   380,   381,
     382,   383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,   397,    -1,    -1,    39,    40,
      41,   403,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,     6,     7,     8,     9,    10,   420,    12,
      13,    14,    15,    16,    17,   427,    -1,    20,    21,    -1,
      -1,    -1,   156,   157,   158,   159,   160,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,
     174,   175,   176,   177,   178,    -1,    -1,    -1,    -1,     3,
       4,    -1,     6,     7,    -1,    -1,    -1,    -1,   192,   193,
     194,   195,   196,    -1,    -1,    -1,    -1,     3,     4,    -1,
       6,     7,    -1,   207,   208,   209,   210,   211,    32,    33,
       3,     4,    -1,     6,     7,    39,    40,    41,   222,   223,
     224,   225,   226,    -1,    -1,    -1,    32,    33,    -1,   233,
     234,   235,   236,    39,    40,    41,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,     3,     4,   257,     6,     7,    -1,    -1,    -1,   263,
     264,   265,   266,   267,   268,   269,   270,    -1,    -1,    -1,
      -1,    -1,   276,   277,   278,   279,   280,   281,   282,   283,
      32,    33,    -1,    -1,    -1,   289,    -1,    39,    40,    41,
      22,   295,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,   305,   306,   307,   308,   309,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,   322,   323,
     324,   325,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   336,    -1,   338,   339,   340,    -1,    -1,    65,
      -1,   345,    -1,    69,    -1,    71,    72,    73,    -1,    -1,
      -1,    -1,   356,   357,   358,   359,   360,    83,    84,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,   379,   380,   381,   382,   383,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,   397,    -1,    -1,    -1,    -1,    -1,   403,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,     6,     7,     8,     9,    10,   420,    12,    13,    14,
      15,    16,    17,   427,    -1,    20,    21,    -1,    -1,    -1,
     156,   157,   158,   159,   160,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    -1,   174,   175,
     176,   177,   178,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,   192,   193,   194,   195,
     196,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,   207,   208,   209,   210,   211,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,   222,   223,   224,   225,
     226,    -1,    -1,    -1,    -1,    18,    19,   233,   234,   235,
     236,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,
      -1,   257,    -1,    -1,    -1,    -1,    -1,   263,   264,   265,
     266,   267,   268,   269,   270,    -1,    -1,    -1,    -1,    -1,
     276,   277,   278,   279,   280,   281,   282,   283,    -1,    -1,
      -1,    -1,    -1,   289,    -1,    -1,    65,    -1,    -1,   295,
      69,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,   305,
     306,   307,   308,   309,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,   322,   323,   324,   325,
     326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     336,    -1,   338,   339,   340,    -1,    -1,    65,    -1,   345,
      -1,    69,    -1,    71,    72,    73,    -1,   126,    -1,    -1,
     356,   357,   358,   359,   360,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,   379,   380,   381,   382,   383,    19,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,   397,    -1,    -1,    -1,    -1,    -1,   403,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,
       7,     8,     9,    10,   420,    12,    13,    14,    15,    16,
      17,   427,    -1,    20,    21,    -1,    -1,    -1,   156,   157,
     158,   159,   160,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,    -1,   174,   175,   176,   177,
     178,    19,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,   192,   193,   194,   195,   196,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   257,   207,
     208,   209,   210,   211,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   270,    -1,    -1,   222,   223,   224,   225,   226,    -1,
      -1,    -1,    -1,    -1,   283,   233,   234,   235,   236,    -1,
     289,    18,    -1,    -1,    -1,    22,   295,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,   257,
      -1,    -1,    -1,    -1,    -1,   263,   264,   265,   266,   267,
     268,   269,   270,    -1,    -1,    -1,    -1,    -1,   276,   277,
     278,   279,   280,   281,   282,   283,    -1,   336,    -1,   338,
     339,   289,    -1,    18,    19,    -1,   345,   295,    23,    24,
      25,    26,    27,    28,    29,    30,    31,   305,   306,   307,
     308,   309,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,   322,   323,   324,   325,   326,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,
     338,   339,   340,    -1,    -1,    -1,    -1,   345,   397,    -1,
      -1,    -1,    -1,    -1,   403,    -1,    -1,    -1,   356,   357,
     358,   359,   360,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   420,    -1,    -1,    -1,    -1,    -1,    -1,   427,    -1,
      -1,   379,   380,   381,   382,   383,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,     3,     4,   397,
       6,     7,     8,     9,    10,   403,    12,    13,    14,    15,
      16,    17,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,   420,    -1,    -1,    -1,    32,    33,    -1,   427,
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
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       3,     4,    -1,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    19,    -1,    20,    21,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     3,
       4,    -1,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    19,    -1,    20,    21,    23,    24,
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
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
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
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
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
      33,    34,    35,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
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
      33,    34,    35,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    18,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    19,    -1,    -1,    -1,    -1,    24,
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
      31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     9,    10,    44,    45,    46,    47,    49,    50,
      71,    72,    73,     0,    45,    22,    48,    51,    11,    18,
       7,    50,    52,    53,    23,    19,    53,    20,     3,     4,
       6,     7,     8,    12,    14,    15,    16,    17,    20,    32,
      33,    39,    40,    41,    49,    50,    56,    57,    58,    59,
      60,    61,    63,    65,    66,    67,    68,    69,    70,    74,
      75,    76,    77,    78,    79,    18,    42,     7,    74,    18,
      18,    18,    18,    18,    56,    68,    68,    68,    68,    68,
      21,    56,    22,    36,    37,    38,    22,    24,    25,    26,
      27,    28,    29,    30,    31,    80,    81,    32,    33,    34,
      35,    54,    55,    74,    74,    22,    74,     7,    62,    63,
       5,    74,     5,    74,    68,    21,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    19,    23,    19,    19,    22,
      19,    19,    19,    19,    19,    55,    57,    57,    74,    22,
      22,    22,    22,    22,    13,    22,    57,    63,    64,    71,
      71,    22,     3,     4,     6,     7,    32,    33,    39,    40,
      41,    67,    68,    69,    70,    75,    76,    77,    78,    79,
       3,     4,     6,     7,    32,    33,    39,    40,    41,    67,
      68,    69,    70,    75,    76,    77,    78,    79,     3,     4,
       6,     7,    32,    33,    39,    40,    41,    67,    69,    70,
      75,    77,    78,     3,     4,     6,     7,    32,    33,    39,
      40,    41,    67,    69,    70,    75,    77,    78,     3,     4,
       6,     7,    32,    33,    39,    40,    41,    67,    69,    70,
      75,    77,    78,    80,    81,    80,    81,     8,    12,    14,
      15,    16,    17,    20,    49,    50,    58,    59,    60,    61,
      63,    65,    66,    74,     7,    51,    51,    18,    68,    68,
      68,    68,    68,    36,    37,    38,    32,    33,    34,    35,
      18,    68,    68,    68,    68,    68,    36,    37,    38,    32,
      33,    34,    35,    18,    68,    68,    68,    68,    68,    18,
      68,    68,    68,    68,    68,    18,    68,    68,    68,    68,
      68,     3,     4,     6,     7,    32,    33,    39,    40,    41,
      67,    68,    69,    70,    75,    77,    78,    68,     3,     4,
       6,     7,    32,    33,    39,    40,    41,    67,    68,    69,
      70,    75,    77,    78,    68,    74,    18,    18,    18,    18,
      18,    56,    22,    22,    22,    42,     7,     7,    54,    68,
      68,    68,     3,     4,     6,     7,    32,    33,    39,    40,
      41,    67,    68,    69,    70,    75,    77,    78,    68,    68,
      68,    54,    68,    68,    68,     3,     4,     6,     7,    32,
      33,    39,    40,    41,    67,    68,    69,    70,    75,    77,
      78,    68,    68,    68,    54,    54,    54,    18,    68,    68,
      68,    68,    68,    18,    68,    68,    68,    68,    68,    22,
      74,    62,     5,    74,     5,    74,    68,    21,    74,    19,
      18,    68,    68,    68,    68,    68,    19,    18,    68,    68,
      68,    68,    68,    19,    19,    19,    54,    54,    19,    19,
      19,    19,    19,    19,    19,    54,    54,    19,    19,    57,
      57,    22,    22,    22,    22,    22,    19,    19,    13,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    45,    45,    46,    46,    46,    48,
      47,    49,    51,    50,    52,    52,    53,    53,    54,    54,
      55,    55,    56,    56,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    58,    59,    59,    60,    61,    62,    63,
      64,    64,    65,    65,    65,    65,    66,    67,    68,    68,
      68,    68,    69,    69,    70,    70,    71,    71,    72,    73,
      73,    74,    74,    74,    74,    75,    75,    75,    76,    76,
      76,    76,    76,    77,    77,    78,    78,    79,    79,    79,
      80,    80,    81,    81,    81,    81,    81,    81
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     0,
       8,     2,     0,     3,     1,     0,     3,     1,     1,     0,
       3,     1,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     2,     5,     7,     3,     5,     5,     3,
       1,     0,     5,     5,     5,     5,     5,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     3,     3,     1,     1,     2,     3,     3,
       3,     3,     1,     2,     2,     2,     2,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1
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
      // $$ = create_node(&$$, PROGRAM);
      // root = $$;
      // add_tree_node(&$$, &root);
      // add_tree_node(&$$, &$1);
    }
#line 2699 "src/syn.tab.c"
    break;

  case 3:
#line 148 "src/syn.y"
                  { }
#line 2705 "src/syn.tab.c"
    break;

  case 4:
#line 152 "src/syn.y"
                                {
      // tree_node *youngest = $1.children;
      // while(youngest->sibilings) {
      //   youngest = youngest->sibilings;
      // }
      // $$ = create_node(&$$, LIST_OF_DECLARATIONS);
      // add_tree_node(&$$, &$1);
      // add_tree_node(&$$, &$2);
    }
#line 2719 "src/syn.tab.c"
    break;

  case 5:
#line 161 "src/syn.y"
                 {
      // $$ = create_node(&$$, LIST_OF_DECLARATIONS);
      // add_tree_node(&$$, &$1);
    }
#line 2728 "src/syn.tab.c"
    break;

  case 6:
#line 168 "src/syn.y"
                   {
      // $$ = create_node(&$$, DECLARATION);
      // add_tree_node(&$$, &$1);
    }
#line 2737 "src/syn.tab.c"
    break;

  case 7:
#line 172 "src/syn.y"
                    {
      // $$ = create_node(&$$, DECLARATION);
      // add_tree_node(&$$, &$1);
    }
#line 2746 "src/syn.tab.c"
    break;

  case 8:
#line 176 "src/syn.y"
          { }
#line 2752 "src/syn.tab.c"
    break;

  case 9:
#line 180 "src/syn.y"
                  {increment_scope();}
#line 2758 "src/syn.tab.c"
    break;

  case 10:
#line 180 "src/syn.y"
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
#line 2773 "src/syn.tab.c"
    break;

  case 11:
#line 193 "src/syn.y"
                      {
    // $$ = create_node(&$$, VARIABLE_DECLARATION);
    // add_tree_node(&$$, &$1);
    // add_tree_token_node(&$$, &$2, SEMICOLON);
   }
#line 2783 "src/syn.tab.c"
    break;

  case 12:
#line 201 "src/syn.y"
       {add_table_node(yytext);}
#line 2789 "src/syn.tab.c"
    break;

  case 13:
#line 201 "src/syn.y"
                                    {
    // $$ = create_node(&$$, UNIQUE_DECLARATION);
    // add_tree_node(&$$, &$1);
    // add_tree_token_node(&$$, &$3, IDENTIFIER);
   }
#line 2799 "src/syn.tab.c"
    break;

  case 14:
#line 209 "src/syn.y"
                 { }
#line 2805 "src/syn.tab.c"
    break;

  case 15:
#line 210 "src/syn.y"
                  { }
#line 2811 "src/syn.tab.c"
    break;

  case 16:
#line 214 "src/syn.y"
                                      {
    // $$ = create_node(&$$, LIST_OF_PARAMETERS);
    // add_tree_node(&$$, &$1);
    // add_tree_token_node(&$$, &$2, COMMA);
    // add_tree_node(&$$, &$3);
   }
#line 2822 "src/syn.tab.c"
    break;

  case 17:
#line 220 "src/syn.y"
                    {
      // $$ = create_node(&$$, LIST_OF_PARAMETERS);
      // add_tree_node(&$$, &$1);
    }
#line 2831 "src/syn.tab.c"
    break;

  case 18:
#line 227 "src/syn.y"
                         { }
#line 2837 "src/syn.tab.c"
    break;

  case 19:
#line 228 "src/syn.y"
                  { }
#line 2843 "src/syn.tab.c"
    break;

  case 20:
#line 232 "src/syn.y"
                                       { }
#line 2849 "src/syn.tab.c"
    break;

  case 21:
#line 233 "src/syn.y"
              { }
#line 2855 "src/syn.tab.c"
    break;

  case 22:
#line 237 "src/syn.y"
                          {
    // $$ = create_node(&$$, BLOCK_OF_COMMANDS);
    // add_tree_node(&$$, &$1);
    // add_tree_node(&$$, &$2);
    }
#line 2865 "src/syn.tab.c"
    break;

  case 23:
#line 242 "src/syn.y"
                  { }
#line 2871 "src/syn.tab.c"
    break;

  case 24:
#line 246 "src/syn.y"
                  {
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 2880 "src/syn.tab.c"
    break;

  case 25:
#line 250 "src/syn.y"
                  {
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 2889 "src/syn.tab.c"
    break;

  case 26:
#line 254 "src/syn.y"
                     {
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 2898 "src/syn.tab.c"
    break;

  case 27:
#line 258 "src/syn.y"
                {
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 2907 "src/syn.tab.c"
    break;

  case 28:
#line 262 "src/syn.y"
              {
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 2916 "src/syn.tab.c"
    break;

  case 29:
#line 266 "src/syn.y"
          {
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 2925 "src/syn.tab.c"
    break;

  case 30:
#line 270 "src/syn.y"
           {
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 2934 "src/syn.tab.c"
    break;

  case 31:
#line 274 "src/syn.y"
                           {
    // $$ = $2;
    }
#line 2942 "src/syn.tab.c"
    break;

  case 32:
#line 277 "src/syn.y"
                  { 
      // $$ = create_node(&$$, INPUT_OPERATION);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, SEMICOLON);
    }
#line 2952 "src/syn.tab.c"
    break;

  case 33:
#line 285 "src/syn.y"
                {
      // $$ = create_node(&$$, INPUT_OPERATION);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, SEMICOLON);
    }
#line 2962 "src/syn.tab.c"
    break;

  case 34:
#line 293 "src/syn.y"
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
#line 2977 "src/syn.tab.c"
    break;

  case 35:
#line 303 "src/syn.y"
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
#line 2993 "src/syn.tab.c"
    break;

  case 36:
#line 318 "src/syn.y"
                            {
      // $$ = create_node(&$$, RETURN_STMT);
      // add_tree_token_node(&$$, &$1, RETURN);
      // add_tree_node(&$$, &$2);
      // add_tree_token_node(&$$, &$3, SEMICOLON);
    }
#line 3004 "src/syn.tab.c"
    break;

  case 37:
#line 327 "src/syn.y"
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
#line 3019 "src/syn.tab.c"
    break;

  case 38:
#line 340 "src/syn.y"
                                          {
      // $$ = create_node(&$$, LOOP_CONDITION);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, SEMICOLON);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, SEMICOLON);
      // add_tree_node(&$$, &$3);
    }
#line 3032 "src/syn.tab.c"
    break;

  case 39:
#line 351 "src/syn.y"
                    {
      // $$ = create_node(&$$, INITIALIZATION_STMT);
      // add_tree_token_node(&$$, &$1, IDENTIFIER);
      // add_tree_token_node(&$$, &$2, ASSIGN);
      // add_tree_node(&$$, &$3);
    }
#line 3043 "src/syn.tab.c"
    break;

  case 40:
#line 360 "src/syn.y"
            {
      // $$ = create_node(&$$, UPDATE_STMT);
      // add_tree_node(&$$, &$1);
    }
#line 3052 "src/syn.tab.c"
    break;

  case 41:
#line 364 "src/syn.y"
                  { }
#line 3058 "src/syn.tab.c"
    break;

  case 42:
#line 368 "src/syn.y"
                                      {
      // $$ = create_node(&$$, INPUT_OPERATION);
      // add_tree_token_node(&$$, &$1, WRITE);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
#line 3071 "src/syn.tab.c"
    break;

  case 43:
#line 376 "src/syn.y"
                                         {
      // $$ = create_node(&$$, INPUT_OPERATION);
      // add_tree_token_node(&$$, &$1, WRITELN);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
#line 3084 "src/syn.tab.c"
    break;

  case 44:
#line 384 "src/syn.y"
                                    {
      // $$ = create_node(&$$, INPUT_OPERATION);
      // add_tree_token_node(&$$, &$1, WRITELN);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
#line 3097 "src/syn.tab.c"
    break;

  case 45:
#line 392 "src/syn.y"
                                      {
      // $$ = create_node(&$$, INPUT_OPERATION);
      // add_tree_token_node(&$$, &$1, WRITELN);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
#line 3110 "src/syn.tab.c"
    break;

  case 46:
#line 403 "src/syn.y"
                                    {
      // $$ = create_node(&$$, OUTPUT_OPERATION);
      // add_tree_token_node(&$$, &$1, READ);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
#line 3123 "src/syn.tab.c"
    break;

  case 47:
#line 414 "src/syn.y"
                                {
      // $$ = create_node(&$$, FUNCTION_CALLING);
      // add_tree_token_node(&$$, &$1, IDENTIFIER);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
#line 3136 "src/syn.tab.c"
    break;

  case 48:
#line 425 "src/syn.y"
               {
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
#line 3145 "src/syn.tab.c"
    break;

  case 49:
#line 429 "src/syn.y"
                     {
      // $$ = create_node(&$$, COMMAND);
      // add_tree_node(&$$, &$1);
    }
#line 3154 "src/syn.tab.c"
    break;

  case 50:
#line 433 "src/syn.y"
          {
      // $$ = create_node(&$$, EXPRESSION);
      // add_tree_node(&$$, &$1);
    }
#line 3163 "src/syn.tab.c"
    break;

  case 51:
#line 437 "src/syn.y"
       {
    // $$ = create_node(&$$, EXPRESSION);
    // add_tree_token_node(&$$, &$1, IDENTIFIER);
    }
#line 3172 "src/syn.tab.c"
    break;

  case 52:
#line 444 "src/syn.y"
         {
      // $$ = create_node(&$$, CONSTANT);
      // add_tree_node(&$$, &$1);
    }
#line 3181 "src/syn.tab.c"
    break;

  case 53:
#line 448 "src/syn.y"
             {
      // $$ = create_node(&$$, CONSTANT);
      // add_tree_token_node(&$$, &$1, NIL);
    }
#line 3190 "src/syn.tab.c"
    break;

  case 54:
#line 455 "src/syn.y"
          {
      // $$ = create_node(&$$, NUMBER);
      // add_tree_token_node(&$$, &$1, NUMBER_INT);
    }
#line 3199 "src/syn.tab.c"
    break;

  case 55:
#line 459 "src/syn.y"
              {
      // $$ = create_node(&$$, NUMBER);
      // add_tree_token_node(&$$, &$1, NUMBER_FLOAT);
    }
#line 3208 "src/syn.tab.c"
    break;

  case 56:
#line 466 "src/syn.y"
            {
      // $$ = create_node(&$$, TYPE);
      // add_tree_node(&$$, &$1);
    }
#line 3217 "src/syn.tab.c"
    break;

  case 57:
#line 470 "src/syn.y"
                 {
      // $$ = create_node(&$$, TYPE);
      // add_tree_node(&$$, &$1);
    }
#line 3226 "src/syn.tab.c"
    break;

  case 58:
#line 477 "src/syn.y"
                       {
      // $$ = create_node(&$$, TYPE_LST);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, TYPE_LIST);
    }
#line 3236 "src/syn.tab.c"
    break;

  case 59:
#line 485 "src/syn.y"
        {
      // $$ = create_node(&$$, NUMBER);
      // add_tree_token_node(&$$, &$1, TYPE_INT);
    }
#line 3245 "src/syn.tab.c"
    break;

  case 60:
#line 489 "src/syn.y"
            {
      // $$ = create_node(&$$, NUMBER);
      // add_tree_token_node(&$$, &$1, TYPE_FLOAT);
    }
#line 3254 "src/syn.tab.c"
    break;

  case 61:
#line 496 "src/syn.y"
               {
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
    }
#line 3263 "src/syn.tab.c"
    break;

  case 62:
#line 500 "src/syn.y"
               {
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
    }
#line 3272 "src/syn.tab.c"
    break;

  case 63:
#line 504 "src/syn.y"
                                            {
      printf("arvore: %p\n", (yyvsp[0].node));
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
      // add_tree_node(&$$, &$2);
      // add_tree_node(&$$, &$3);
    }
#line 3284 "src/syn.tab.c"
    break;

  case 64:
#line 511 "src/syn.y"
                                      {
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
      // add_tree_node(&$$, &$2);
      // add_tree_node(&$$, &$3);
    }
#line 3295 "src/syn.tab.c"
    break;

  case 65:
#line 520 "src/syn.y"
               {
      // $$ = create_node(&$$, S_OPERATION);
      // add_tree_node(&$$, &$1);
    }
#line 3304 "src/syn.tab.c"
    break;

  case 66:
#line 524 "src/syn.y"
               {
      // $$ = create_node(&$$, S_OPERATION);
      // add_tree_node(&$$, &$1);
    }
#line 3313 "src/syn.tab.c"
    break;

  case 67:
#line 528 "src/syn.y"
                   {
    // $$ = create_node(&$$, S_OPERATION);
    // add_tree_token_node(&$$, &$1, NOT_OR_TAIL);
    // add_tree_node(&$$, &$2);
  }
#line 3323 "src/syn.tab.c"
    break;

  case 68:
#line 536 "src/syn.y"
                              {
      // $$ = create_node(&$$, ARITHMETIC_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, MULTIPLY_OP);
      // add_tree_node(&$$, &$3);
    }
#line 3334 "src/syn.tab.c"
    break;

  case 69:
#line 542 "src/syn.y"
                                {
      // $$ = create_node(&$$, ARITHMETIC_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, MULTIPLY_OP);
      // add_tree_node(&$$, &$3);
    }
#line 3345 "src/syn.tab.c"
    break;

  case 70:
#line 548 "src/syn.y"
                                {
      // $$ = create_node(&$$, ARITHMETIC_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, MULTIPLY_OP);
      // add_tree_node(&$$, &$3);
    }
#line 3356 "src/syn.tab.c"
    break;

  case 71:
#line 554 "src/syn.y"
                                {
      //  $$ = create_node(&$$, ARITHMETIC_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, DIVISION_OP);
      // add_tree_node(&$$, &$3);
    }
#line 3367 "src/syn.tab.c"
    break;

  case 72:
#line 560 "src/syn.y"
               {
      //  $$ = create_node(&$$, ARITHMETIC_BINARY);
      // add_tree_node(&$$, &$1);
    }
#line 3376 "src/syn.tab.c"
    break;

  case 73:
#line 567 "src/syn.y"
                 {
    // $$ = create_node(&$$, ARITHMETIC_SINGLE);
    // add_tree_token_node(&$$, &$1, ADD_OP);
    // add_tree_node(&$$, &$2);
    }
#line 3386 "src/syn.tab.c"
    break;

  case 74:
#line 572 "src/syn.y"
                   {
      // $$ = create_node(&$$, ARITHMETIC_SINGLE);
      // add_tree_token_node(&$$, &$1, MINUS_OP);
      // add_tree_node(&$$, &$2);
    }
#line 3396 "src/syn.tab.c"
    break;

  case 75:
#line 580 "src/syn.y"
                 {
      // $$ = create_node(&$$, LIST_SINGLE);
      // add_tree_token_node(&$$, &$1, POP_OP);
      // add_tree_node(&$$, &$2);
    }
#line 3406 "src/syn.tab.c"
    break;

  case 76:
#line 585 "src/syn.y"
                   {
      // $$ = create_node(&$$, LIST_SINGLE);
      // add_tree_token_node(&$$, &$1, HEAD_OP);
      // add_tree_node(&$$, &$2);
    }
#line 3416 "src/syn.tab.c"
    break;

  case 77:
#line 593 "src/syn.y"
                               {
      // $$ = create_node(&$$, LIST_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, FILTER_OP);

    }
#line 3427 "src/syn.tab.c"
    break;

  case 78:
#line 599 "src/syn.y"
                              {
      // $$ = create_node(&$$, LIST_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, MAP_OP);
      // add_tree_node(&$$, &$3);
    }
#line 3438 "src/syn.tab.c"
    break;

  case 79:
#line 605 "src/syn.y"
                              {
      // $$ = create_node(&$$, LIST_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, CONSTRUCTOR_OP);
      // add_tree_node(&$$, &$3);
    }
#line 3449 "src/syn.tab.c"
    break;

  case 80:
#line 614 "src/syn.y"
      {
      // $$ = create_node(&$$, LOGIC_OPERATOR);
      // add_tree_token_node(&$$, &$1, AND_OP);
    }
#line 3458 "src/syn.tab.c"
    break;

  case 81:
#line 618 "src/syn.y"
       {
      // $$ = create_node(&$$, LOGIC_OPERATOR);
      // add_tree_token_node(&$$, &$1, OR_OP);
    }
#line 3467 "src/syn.tab.c"
    break;

  case 82:
#line 625 "src/syn.y"
          {
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, GT_OP);
    }
#line 3476 "src/syn.tab.c"
    break;

  case 83:
#line 629 "src/syn.y"
               {
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, GE_OP);
    }
#line 3485 "src/syn.tab.c"
    break;

  case 84:
#line 633 "src/syn.y"
         {
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, LT_OP);
    }
#line 3494 "src/syn.tab.c"
    break;

  case 85:
#line 637 "src/syn.y"
            {
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, LE_OP);
    }
#line 3503 "src/syn.tab.c"
    break;

  case 86:
#line 641 "src/syn.y"
          {
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, EQ_OP);
    }
#line 3512 "src/syn.tab.c"
    break;

  case 87:
#line 645 "src/syn.y"
           {
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, NE_OP);
    }
#line 3521 "src/syn.tab.c"
    break;


#line 3525 "src/syn.tab.c"

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
#line 651 "src/syn.y"

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
