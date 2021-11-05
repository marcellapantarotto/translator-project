/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

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
  #include "../lib/structures.h"
  #include "structures.c"

  extern char *yytext;
  extern int yyleng;
  extern int yylineno;
  extern int yylex();
  extern int yylex_destroy();
  extern int yyerror(const char *s);
  extern FILE *yyin;

  char func_name[50];

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

#include "syn.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUM_INT = 3,                    /* NUM_INT  */
  YYSYMBOL_NUM_FLOAT = 4,                  /* NUM_FLOAT  */
  YYSYMBOL_STRING = 5,                     /* STRING  */
  YYSYMBOL_NIL_CNST = 6,                   /* NIL_CNST  */
  YYSYMBOL_ID = 7,                         /* ID  */
  YYSYMBOL_RETURN_STM = 8,                 /* RETURN_STM  */
  YYSYMBOL_T_INT = 9,                      /* T_INT  */
  YYSYMBOL_T_FLOAT = 10,                   /* T_FLOAT  */
  YYSYMBOL_T_LIST = 11,                    /* T_LIST  */
  YYSYMBOL_IF_STMT = 12,                   /* IF_STMT  */
  YYSYMBOL_ELSE_STMT = 13,                 /* ELSE_STMT  */
  YYSYMBOL_FOR_STMT = 14,                  /* FOR_STMT  */
  YYSYMBOL_OUTPUT_WRITE = 15,              /* OUTPUT_WRITE  */
  YYSYMBOL_OUTPUT_WRITELN = 16,            /* OUTPUT_WRITELN  */
  YYSYMBOL_INPUT_READ = 17,                /* INPUT_READ  */
  YYSYMBOL_18_ = 18,                       /* '('  */
  YYSYMBOL_19_ = 19,                       /* ')'  */
  YYSYMBOL_20_ = 20,                       /* '{'  */
  YYSYMBOL_21_ = 21,                       /* '}'  */
  YYSYMBOL_22_ = 22,                       /* ';'  */
  YYSYMBOL_23_ = 23,                       /* ','  */
  YYSYMBOL_AND = 24,                       /* AND  */
  YYSYMBOL_OR = 25,                        /* OR  */
  YYSYMBOL_GREATER = 26,                   /* GREATER  */
  YYSYMBOL_GREATER_EQ = 27,                /* GREATER_EQ  */
  YYSYMBOL_LESS = 28,                      /* LESS  */
  YYSYMBOL_LESS_EQ = 29,                   /* LESS_EQ  */
  YYSYMBOL_EQUAL = 30,                     /* EQUAL  */
  YYSYMBOL_NOT_EQ = 31,                    /* NOT_EQ  */
  YYSYMBOL_32_ = 32,                       /* '+'  */
  YYSYMBOL_33_ = 33,                       /* '-'  */
  YYSYMBOL_34_ = 34,                       /* '*'  */
  YYSYMBOL_35_ = 35,                       /* '/'  */
  YYSYMBOL_FILTER = 36,                    /* FILTER  */
  YYSYMBOL_MAP = 37,                       /* MAP  */
  YYSYMBOL_38_ = 38,                       /* ':'  */
  YYSYMBOL_39_ = 39,                       /* '%'  */
  YYSYMBOL_40_ = 40,                       /* '?'  */
  YYSYMBOL_41_ = 41,                       /* '!'  */
  YYSYMBOL_42_ = 42,                       /* '='  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_program = 44,                   /* program  */
  YYSYMBOL_lst_declarations = 45,          /* lst_declarations  */
  YYSYMBOL_declaration = 46,               /* declaration  */
  YYSYMBOL_func_declaration = 47,          /* func_declaration  */
  YYSYMBOL_48_1 = 48,                      /* $@1  */
  YYSYMBOL_49_2 = 49,                      /* $@2  */
  YYSYMBOL_func_calling = 50,              /* func_calling  */
  YYSYMBOL_51_3 = 51,                      /* $@3  */
  YYSYMBOL_52_4 = 52,                      /* $@4  */
  YYSYMBOL_var_declaration = 53,           /* var_declaration  */
  YYSYMBOL_unq_declaration = 54,           /* unq_declaration  */
  YYSYMBOL_type = 55,                      /* type  */
  YYSYMBOL_type_lst = 56,                  /* type_lst  */
  YYSYMBOL_type_number = 57,               /* type_number  */
  YYSYMBOL_parameters = 58,                /* parameters  */
  YYSYMBOL_lst_parameters = 59,            /* lst_parameters  */
  YYSYMBOL_60_5 = 60,                      /* $@5  */
  YYSYMBOL_61_6 = 61,                      /* $@6  */
  YYSYMBOL_calling_parameters = 62,        /* calling_parameters  */
  YYSYMBOL_lst_calling_parameters = 63,    /* lst_calling_parameters  */
  YYSYMBOL_block_commands = 64,            /* block_commands  */
  YYSYMBOL_command = 65,                   /* command  */
  YYSYMBOL_66_7 = 66,                      /* $@7  */
  YYSYMBOL_init_variable = 67,             /* init_variable  */
  YYSYMBOL_init_stmt = 68,                 /* init_stmt  */
  YYSYMBOL_conditional_stmt = 69,          /* conditional_stmt  */
  YYSYMBOL_return_stmt = 70,               /* return_stmt  */
  YYSYMBOL_iteration = 71,                 /* iteration  */
  YYSYMBOL_loop_condition = 72,            /* loop_condition  */
  YYSYMBOL_update_stmt = 73,               /* update_stmt  */
  YYSYMBOL_stop_stmt = 74,                 /* stop_stmt  */
  YYSYMBOL_output = 75,                    /* output  */
  YYSYMBOL_input = 76,                     /* input  */
  YYSYMBOL_iden = 77,                      /* iden  */
  YYSYMBOL_operation = 78,                 /* operation  */
  YYSYMBOL_lst_binary = 79,                /* lst_binary  */
  YYSYMBOL_arith_binary = 80,              /* arith_binary  */
  YYSYMBOL_term = 81,                      /* term  */
  YYSYMBOL_expression = 82,                /* expression  */
  YYSYMBOL_const = 83,                     /* const  */
  YYSYMBOL_number = 84,                    /* number  */
  YYSYMBOL_single_operation = 85,          /* single_operation  */
  YYSYMBOL_arith_single = 86,              /* arith_single  */
  YYSYMBOL_lst_single = 87                 /* lst_single  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
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

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

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
# define YYCOPY_NEEDED 1
#endif /* 1 */

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
#define YYLAST   5243

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  359

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   282


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
       0,   145,   145,   150,   156,   161,   169,   174,   179,   187,
     193,   187,   205,   205,   205,   225,   232,   244,   247,   253,
     261,   265,   272,   275,   281,   281,   289,   289,   298,   302,
     308,   321,   336,   341,   347,   350,   353,   356,   359,   362,
     365,   368,   368,   372,   376,   381,   389,   396,   422,   428,
     439,   467,   476,   485,   488,   494,   497,   503,   510,   517,
     532,   548,   564,   576,   579,   585,   591,   597,   603,   609,
     615,   621,   630,   636,   642,   648,   656,   669,   681,   687,
     699,   711,   717,   720,   723,   726,   729,   735,   738,   745,
     751,   760,   763,   766,   776,   782,   796,   801
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUM_INT", "NUM_FLOAT",
  "STRING", "NIL_CNST", "ID", "RETURN_STM", "T_INT", "T_FLOAT", "T_LIST",
  "IF_STMT", "ELSE_STMT", "FOR_STMT", "OUTPUT_WRITE", "OUTPUT_WRITELN",
  "INPUT_READ", "'('", "')'", "'{'", "'}'", "';'", "','", "AND", "OR",
  "GREATER", "GREATER_EQ", "LESS", "LESS_EQ", "EQUAL", "NOT_EQ", "'+'",
  "'-'", "'*'", "'/'", "FILTER", "MAP", "':'", "'%'", "'?'", "'!'", "'='",
  "$accept", "program", "lst_declarations", "declaration",
  "func_declaration", "$@1", "$@2", "func_calling", "$@3", "$@4",
  "var_declaration", "unq_declaration", "type", "type_lst", "type_number",
  "parameters", "lst_parameters", "$@5", "$@6", "calling_parameters",
  "lst_calling_parameters", "block_commands", "command", "$@7",
  "init_variable", "init_stmt", "conditional_stmt", "return_stmt",
  "iteration", "loop_condition", "update_stmt", "stop_stmt", "output",
  "input", "iden", "operation", "lst_binary", "arith_binary", "term",
  "expression", "const", "number", "single_operation", "arith_single",
  "lst_single", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
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
#endif

#define YYPACT_NINF (-300)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-98)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     135,   138,     3,    63,    12,    24,   175,   177,   197,     4,
      30,    33,    86,  -300,    35,   274,    42,    78,    88,    57,
     123,    50,    79,    62,    97,    98,   114,   150,   121,  1571,
    4487,  4504,  4521,    21,  1622,   134,   137,   143,   145,   154,
    3295,  1622,  1622,  1622,  1622,  1622,  4538,   439,   151,   153,
     583,   160,   727,   159,   871,  1015,  1159,  2649,  2690,  3349,
      84,  4895,  4878,  4555,  4572,  4589,  4606,  4623,  4640,  4657,
    2731,  1300,  4674,  1225,  3295,    -6,  1492,  1612,   181,   344,
    4691,  4708,  4725,  4742,  4759,   311,   183,   150,  2772,  1622,
    2813,  1622,  1622,  1622,  1622,  1622,  1622,  1622,  1622,  1622,
    1622,  1622,  1622,  1622,  1622,  1622,  1352,  2854,   363,   163,
     194,   199,   198,   189,   213,   487,   215,   507,   216,  4776,
     351,   217,  5102,  5112,  5122,  5132,  5142,  5152,  5162,  5172,
    5182,  4912,  4929,  4946,  4793,  4810,  4827,  4844,   218,   222,
    1742,  3264,   150,  1707,   214,   227,   238,   242,   244,  2895,
     258,  3313,  1676,  2936,   260,  5192,  2977,  3018,  3059,  3100,
    3141,  4861,   261,   150,    -2,  3182,   267,   280,   282,  3370,
    3871,  3891,  3911,  3391,  3295,  3295,  3295,  3295,  3295,  3295,
    3931,  3951,  4425,  4346,  3971,  3991,  4011,  4031,  4051,  4071,
    4091,  3223,   276,  3295,  3295,  3295,  3295,  3295,  3295,  3295,
    3295,  3411,  3431,  3451,  3332,  3295,  3313,  3313,  3313,  3313,
    3313,  3471,  3491,  4362,  4331,  3511,  3531,  3551,  3571,  3591,
    3611,  3631,  3313,  3313,  3313,  3313,  3313,  3313,  3313,  3313,
    1442,  1622,   275,   284,   291,   295,   296,  1788,   294,   298,
    1829,   300,  1870,  1911,  1952,  1993,  2034,  5202,   308,   288,
     180,   309,  1300,   631,  4111,  4131,  4151,  4171,  4191,  3295,
    3295,  3295,  3295,  3295,  3295,  3295,   651,   775,   795,   919,
     939,  1063,  1083,  1207,  1300,  1395,  3651,  3671,  3691,  3711,
    3731,  3313,  3313,  3313,  3313,  3313,  3313,  3313,  4962,  4975,
    4988,  5001,  5014,  5027,  5040,  5053,  2075,  5212,  3295,    -6,
    1746,  3282,   181,  2116,   150,  2157,  2198,  3295,  1352,  4211,
    4440,  4455,  4470,  4231,  4251,  4271,  4291,  1352,  3751,  4378,
    4394,  4410,  3771,  3791,  3811,  3831,  2239,  1530,   313,   314,
    5066,   315,  5079,   318,   321,  5092,   218,   218,  3264,  3264,
     322,   324,   325,   326,   327,  2280,   331,   335,  2321,  2362,
    2403,  2444,  2485,  2526,  2567,  4311,  3851,  3264,  2608
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -300,  -300,   349,  -300,  -300,  -300,  -300,   346,  -241,  -205,
       2,     0,    15,  -300,  -300,  -300,   333,  -300,  -300,  -299,
     207,   -43,  -138,  -109,   -99,   -34,   -76,   -47,   -42,    65,
     201,  -300,   -40,   -38,   -14,    28,  1341,  1476,  1206,   202,
     490,   634,   778,   922,  1066
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,     7,    16,   120,    46,   106,   150,
      47,    48,   168,    11,    12,    21,    22,    28,    24,   138,
     139,    49,    50,    51,    52,    53,    54,    55,    56,   111,
     112,   154,    57,    58,   181,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,   109,     8,   152,   153,   109,     9,    86,     8,   336,
     -20,   308,    13,    59,   -20,    10,   -54,   -54,   337,    20,
      72,    10,    -9,    20,    -2,   165,    15,    72,    72,    72,
      72,    72,   239,   317,   167,    -4,    59,    17,   167,    71,
     -17,   110,   240,   -62,   121,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
      19,   113,    73,   -62,   118,   242,     2,     3,    79,    25,
     -21,     2,     3,    59,   -21,    72,   -23,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,   212,   -18,   243,   -19,   -16,    18,   -22,   244,
     -16,   245,   108,   246,   115,   117,    90,   241,    91,    92,
      93,    94,    95,    96,    97,    98,   -27,   122,    27,   123,
     124,   125,   126,   127,   128,   129,   130,    59,    59,    72,
     248,   346,   347,   -24,   140,    -3,     1,   212,    -8,    -8,
     -25,   238,   -26,   237,     2,     3,    23,    -8,    -8,    59,
     249,    29,    74,    30,    31,    75,    32,    33,    34,     2,
       3,    76,    35,    77,    36,    37,    38,    39,    40,   247,
     -41,   155,    78,   191,    85,    -5,     1,    -6,    -6,   140,
      87,    88,    41,    42,     2,     3,    -6,    -6,   192,    43,
      44,    45,   212,   212,   212,   212,   212,    -7,    -7,   -16,
     348,   349,   253,   -16,   -32,   -62,    -7,    -7,   212,   212,
     212,   212,   212,   212,   212,   212,   -53,    72,   142,   358,
     143,   266,   267,   268,   269,   270,   271,   272,   273,   239,
     239,    89,   144,   275,   146,   148,   156,   -13,   149,   240,
     240,   -28,   185,    80,    81,    82,    83,    84,   239,   157,
     288,   289,   290,   291,   292,   293,   294,   295,   240,   297,
     158,   334,   242,   242,   159,   110,   160,   212,   212,   212,
     212,   212,   212,   212,   -15,   -15,   185,   161,   185,   185,
     -30,   242,   164,   -15,   -15,   113,   -52,   250,   333,   251,
      59,   243,   243,   298,   212,   -62,   244,   244,   245,   245,
     246,   246,   299,   212,   241,   241,   136,   137,   216,   300,
     243,   -10,   -10,   301,   302,   244,   303,   245,   304,   246,
     -10,   -10,   305,   241,    59,    59,   327,   -53,   330,   332,
     307,   -16,   339,   340,   342,   335,   140,   344,   238,   238,
     237,   237,   345,    59,   350,   140,   351,   352,   353,   354,
     355,   -11,   -11,   216,   356,    14,    26,   238,   162,   237,
     -11,   -11,     0,   119,   328,   166,   247,   247,   193,   194,
     195,   196,   197,   198,   199,   200,   185,   254,   255,   256,
     257,   258,   141,     0,     0,   247,   180,   193,   194,   195,
     196,   197,   198,   199,   200,   185,   185,   185,   185,   185,
     185,   185,   185,     0,     0,     0,     0,   185,   276,   277,
     278,   279,   280,     0,     0,     0,     0,     0,     0,     0,
     180,     0,   180,   180,   216,   216,   216,   216,   216,   216,
     216,   216,     0,     0,     0,     0,     0,     0,     0,     0,
     -34,     0,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,
       0,   -34,   211,   -34,   -34,   -34,   -34,   -34,     0,   -34,
     -34,   185,   185,   185,   185,   185,   315,   316,     0,     0,
       0,   -34,   -34,     0,     0,     0,     0,     0,   -34,   -34,
     -34,     0,     0,   216,   216,   216,   216,   216,   324,   325,
       0,     0,     0,     0,     0,     0,     0,   211,     0,     0,
     185,     0,   185,   185,     0,     0,   145,     0,     0,   185,
     216,   193,   194,   195,   196,   197,   198,   199,   200,   216,
     180,   180,   180,   180,   180,   180,   147,     0,     0,     0,
     186,   193,   194,   195,   196,   197,   198,   199,   200,   180,
     180,   180,   180,   180,   180,   180,   180,     0,     0,     0,
       0,   180,   211,   211,   211,   211,   211,     0,     0,     0,
       0,     0,     0,     0,   186,     0,   186,   186,   211,   211,
     211,   211,   211,   211,   211,   211,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,    30,    31,     0,    32,
      33,    34,     2,     3,     0,    35,   217,    36,    37,    38,
      39,    40,     0,   -41,   -33,   180,   180,   180,   180,   180,
     180,   180,     0,     0,     0,    41,    42,     0,     0,     0,
       0,     0,    43,    44,    45,     0,     0,   211,   211,   211,
     211,   211,   211,   211,     0,     0,     0,     0,     0,     0,
       0,   217,     0,     0,   180,     0,   180,   180,     0,     0,
     309,     0,     0,   180,   211,   193,   194,   195,   196,   197,
     198,   199,   200,   211,   186,   186,   186,   186,   186,   186,
     -70,     0,     0,     0,   187,   -70,   -70,   195,   196,   197,
     198,   199,   200,   186,   186,   186,   186,   186,   186,   186,
     186,     0,     0,     0,     0,   186,   217,   217,   217,   217,
     217,     0,     0,     0,     0,     0,     0,     0,   187,     0,
     187,   187,   217,   217,   217,   217,   217,   217,   217,   217,
       0,     0,     0,     0,     0,     0,     0,     0,   -35,     0,
     -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,     0,   -35,
     218,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,   186,
     186,   186,   186,   186,   186,   186,     0,     0,     0,   -35,
     -35,     0,     0,     0,     0,     0,   -35,   -35,   -35,     0,
       0,   217,   217,   217,   217,   217,   217,   217,     0,     0,
       0,     0,     0,     0,     0,   218,     0,     0,   186,     0,
     186,   186,     0,     0,   -71,     0,     0,   186,   217,   -71,
     -71,   195,   196,   197,   198,   199,   200,   217,   187,   187,
     187,   187,   187,   187,   -64,     0,     0,     0,   188,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   187,   187,   187,
     187,   187,   187,   187,   187,     0,     0,     0,     0,   187,
     218,   218,   218,   218,   218,     0,     0,     0,     0,     0,
       0,     0,   188,     0,   188,   188,   218,   218,   218,   218,
     218,   218,   218,   218,     0,     0,     0,     0,     0,     0,
       0,     0,   -36,     0,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   -36,     0,   -36,   219,   -36,   -36,   -36,   -36,   -36,
       0,   -36,   -36,   187,   187,   187,   187,   187,   187,   187,
       0,     0,     0,   -36,   -36,     0,     0,     0,     0,     0,
     -36,   -36,   -36,     0,     0,   218,   218,   218,   218,   218,
     218,   218,     0,     0,     0,     0,     0,     0,     0,   219,
       0,     0,   187,     0,   187,   187,     0,     0,   -65,     0,
       0,   187,   218,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   218,   188,   188,   188,   188,   188,   188,   -66,     0,
       0,     0,   189,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   188,   188,   188,   188,   188,   188,   188,   188,     0,
       0,     0,     0,   188,   219,   219,   219,   219,   219,     0,
       0,     0,     0,     0,     0,     0,   189,     0,   189,   189,
     219,   219,   219,   219,   219,   219,   219,   219,     0,     0,
       0,     0,     0,     0,     0,     0,   -37,     0,   -37,   -37,
       0,   -37,   -37,   -37,   -37,   -37,     0,   -37,   220,   -37,
     -37,   -37,   -37,   -37,     0,   -37,   -37,   188,   188,   188,
     188,   188,   188,   188,     0,     0,     0,   -37,   -37,     0,
       0,     0,     0,     0,   -37,   -37,   -37,     0,     0,   219,
     219,   219,   219,   219,   219,   219,     0,     0,     0,     0,
       0,     0,     0,   220,     0,     0,   188,     0,   188,   188,
       0,     0,   -67,     0,     0,   188,   219,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   219,   189,   189,   189,   189,
     189,   189,   -68,     0,     0,     0,   190,   -68,   -68,   195,
     196,   197,   198,   -68,   -68,   189,   189,   189,   189,   189,
     189,   189,   189,     0,     0,     0,     0,   189,   220,   220,
     220,   220,   220,     0,     0,     0,     0,     0,     0,     0,
     190,     0,   190,   190,   220,   220,   220,   220,   220,   220,
     220,   220,     0,     0,     0,     0,     0,     0,     0,     0,
     -38,     0,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,
       0,   -38,   221,   -38,   -38,   -38,   -38,   -38,     0,   -38,
     -38,   189,   189,   189,   189,   189,   189,   189,     0,     0,
       0,   -38,   -38,     0,     0,     0,     0,     0,   -38,   -38,
     -38,     0,     0,   220,   220,   220,   220,   220,   220,   220,
       0,     0,     0,     0,     0,     0,     0,   221,     0,     0,
     189,     0,   189,   189,     0,     0,   -69,     0,     0,   189,
     220,   -69,   -69,   195,   196,   197,   198,   -69,   -69,   220,
     190,   190,   190,   190,   190,   190,   184,   107,     0,    91,
      92,    93,    94,    95,    96,    97,    98,     0,     0,   190,
     190,   190,   190,   190,   190,   190,   190,     0,     0,     0,
       0,   190,   221,   221,   221,   221,   221,     0,     0,     0,
     184,     0,   184,   184,     0,     0,     0,     0,   221,   221,
     221,   221,   221,   221,   221,   221,     0,     0,     0,     0,
       0,     0,     0,   -12,   -12,     0,   -12,   -12,   134,   135,
       0,     0,   215,     0,     0,     0,     0,     0,   -12,   -12,
       0,     0,     0,     0,     0,   190,   190,   190,   190,   190,
     190,   190,   -12,   -12,     0,     0,     0,     0,     0,   -12,
     -12,   -12,     0,     0,     0,     0,     0,   221,   221,   221,
     221,   221,   221,   221,     0,   201,   202,   215,   203,   204,
       0,     0,     0,     0,   190,     0,   190,   190,     0,     0,
     205,   -29,     0,   190,   221,     0,     0,     0,     0,     0,
     184,   182,     0,   221,   206,   207,     0,     0,     0,     0,
       0,   208,   209,   210,     0,     0,     0,     0,     0,   184,
     184,   184,   184,   184,   184,   184,   184,     0,     0,     0,
       0,   184,     0,     0,   318,   182,     0,   182,   182,   193,
     194,   195,   196,   197,   198,   199,   200,     0,   215,   215,
     215,   215,   215,   215,   215,   215,     0,     0,     0,     0,
     131,   132,   133,   -45,     0,   -45,   -45,   213,   -45,   -45,
     -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,     0,   -45,   -45,   296,   184,   184,   184,   313,   314,
       0,     0,     0,     0,   -45,   -45,     0,     0,     0,     0,
       0,   -45,   -45,   -45,     0,     0,     0,   215,   215,   215,
     322,   323,   213,     0,     0,   170,   171,   114,   172,   173,
       0,     0,     0,     0,   184,     0,   184,   184,     0,     0,
     174,     0,     0,   184,   215,   182,   183,     0,     0,     0,
       0,     0,     0,   215,   175,   176,     0,     0,     0,     0,
       0,   177,   178,   179,   182,   182,   182,   182,   182,   182,
     182,   182,     0,     0,     0,     0,   182,     0,     0,   338,
     183,     0,   183,   183,   193,   194,   195,   196,   197,   198,
     199,   200,     0,   213,   213,   213,   213,   213,   213,   213,
     213,     0,   -45,     0,   -45,   -45,     0,   -45,   -45,   -45,
     -45,   -45,   214,   -45,     0,   -45,   -45,   -45,   -45,   -45,
       0,   -45,   -45,    70,     0,     0,     0,     0,     0,     0,
     310,   311,   312,   -45,   -45,     0,     0,     0,     0,     0,
     -45,   -45,   -45,     0,     0,   170,   171,   116,   172,   173,
       0,     0,   319,   320,   321,    30,    31,   214,    32,   169,
     174,     0,     0,     0,     0,     0,     0,     0,     0,   182,
      40,   182,   182,     0,   175,   176,     0,     0,   182,   213,
     183,   177,   178,   179,    41,    42,     0,     0,   213,     0,
       0,    43,    44,    45,     0,     0,     0,     0,     0,   183,
     183,   183,   183,   183,   183,   183,   183,   -48,     0,   -48,
     -48,   183,   -48,   -48,   -48,   -48,   -48,     0,   -48,   163,
     -48,   -48,   -48,   -48,   -48,     0,   -48,   -48,   214,   214,
     214,   214,   214,   214,   214,   214,     0,     0,   -48,   -48,
      30,    31,     0,    32,   169,   -48,   -48,   -48,     0,     0,
       0,     0,     0,     0,     0,    40,     0,     0,     0,   -56,
       0,     0,     0,     0,     0,   183,   183,   183,     0,    41,
      42,     0,     0,     0,     0,     0,    43,    44,    45,   170,
     171,   329,   172,   173,     0,     0,     0,   214,   214,   214,
       0,   -31,     0,     0,   174,   151,   222,   223,   224,   225,
     226,   227,   228,   229,   183,     0,   183,   183,   175,   176,
       0,     0,     0,   183,   214,   177,   178,   179,     0,   -34,
       0,   -34,   -34,   214,   -34,   -34,   -34,   -34,   -34,     0,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -34,   -34,     0,     0,     0,     0,     0,   -34,   -34,   -34,
     -35,     0,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,
       0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,
     -35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -35,   -35,     0,     0,     0,     0,     0,   -35,   -35,
     -35,   -36,     0,   -36,   -36,     0,   -36,   -36,   -36,   -36,
     -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,
     -36,   -36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -36,   -36,     0,     0,     0,     0,     0,   -36,
     -36,   -36,   -37,     0,   -37,   -37,     0,   -37,   -37,   -37,
     -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
       0,   -37,   -37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -37,   -37,     0,     0,     0,     0,     0,
     -37,   -37,   -37,   -38,     0,   -38,   -38,     0,   -38,   -38,
     -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,     0,   -38,   -38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -38,   -38,     0,     0,     0,     0,
       0,   -38,   -38,   -38,   -39,     0,   -39,   -39,     0,   -39,
     -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,     0,   -39,   -39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -39,   -39,     0,     0,     0,
       0,     0,   -39,   -39,   -39,   -40,     0,   -40,   -40,     0,
     -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,     0,   -40,   -40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -40,   -40,     0,     0,
       0,     0,     0,   -40,   -40,   -40,   -44,     0,   -44,   -44,
       0,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,     0,   -44,   -44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -44,   -44,     0,
       0,     0,     0,     0,   -44,   -44,   -44,   -15,     0,   -15,
     -15,     0,   -15,   -15,   -15,   -15,   -15,     0,   -15,   -15,
     -15,   -15,   -15,   -15,   -15,     0,   -15,   -15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -15,   -15,
       0,     0,     0,     0,     0,   -15,   -15,   -15,   -46,     0,
     -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,     0,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -46,
     -46,     0,     0,     0,     0,     0,   -46,   -46,   -46,   -43,
       0,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,     0,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -43,   -43,     0,     0,     0,     0,     0,   -43,   -43,   -43,
     -50,     0,   -50,   -50,     0,   -50,   -50,   -50,   -50,   -50,
       0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,
     -50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -50,   -50,     0,     0,     0,     0,     0,   -50,   -50,
     -50,   -42,     0,   -42,   -42,     0,   -42,   -42,   -42,   -42,
     -42,     0,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,
     -42,   -42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -42,   -42,     0,     0,     0,     0,     0,   -42,
     -42,   -42,   -48,     0,   -48,   -48,     0,   -48,   -48,   -48,
     -48,   -48,     0,   -48,   357,   -48,   -48,   -48,   -48,   -48,
       0,   -48,   -48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -48,   -48,     0,     0,     0,     0,     0,
     -48,   -48,   -48,   -51,     0,   -51,   -51,     0,   -51,   -51,
     -51,   -51,   -51,     0,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,     0,   -51,   -51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -51,   -51,     0,     0,     0,     0,
       0,   -51,   -51,   -51,   -59,     0,   -59,   -59,     0,   -59,
     -59,   -59,   -59,   -59,     0,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,     0,   -59,   -59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -59,   -59,     0,     0,     0,
       0,     0,   -59,   -59,   -59,   -57,     0,   -57,   -57,     0,
     -57,   -57,   -57,   -57,   -57,     0,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,     0,   -57,   -57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -57,   -57,     0,     0,
       0,     0,     0,   -57,   -57,   -57,   -60,     0,   -60,   -60,
       0,   -60,   -60,   -60,   -60,   -60,     0,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,     0,   -60,   -60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -60,   -60,     0,
       0,     0,     0,     0,   -60,   -60,   -60,   -58,     0,   -58,
     -58,     0,   -58,   -58,   -58,   -58,   -58,     0,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,     0,   -58,   -58,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -58,   -58,
       0,     0,     0,     0,     0,   -58,   -58,   -58,   -61,     0,
     -61,   -61,     0,   -61,   -61,   -61,   -61,   -61,     0,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,     0,   -61,   -61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -61,
     -61,     0,     0,     0,     0,     0,   -61,   -61,   -61,   -49,
       0,   -49,   -49,     0,   -49,   -49,   -49,   -49,   -49,     0,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,   -49,   -49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -49,   -49,     0,     0,     0,     0,     0,   -49,   -49,   -49,
     -39,     0,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,
       0,   -39,     0,   -39,   -39,   -39,   -39,   -39,     0,   -39,
     -39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -39,   -39,     0,     0,     0,     0,     0,   -39,   -39,
     -39,   -40,     0,   -40,   -40,     0,   -40,   -40,   -40,   -40,
     -40,     0,   -40,     0,   -40,   -40,   -40,   -40,   -40,     0,
     -40,   -40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -40,   -40,     0,     0,     0,     0,     0,   -40,
     -40,   -40,   -44,     0,   -44,   -44,     0,   -44,   -44,   -44,
     -44,   -44,     0,   -44,     0,   -44,   -44,   -44,   -44,   -44,
       0,   -44,   -44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -44,   -44,     0,     0,     0,     0,     0,
     -44,   -44,   -44,   -46,     0,   -46,   -46,     0,   -46,   -46,
     -46,   -46,   -46,     0,   -46,     0,   -46,   -46,   -46,   -46,
     -46,     0,   -46,   -46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -46,   -46,     0,     0,     0,     0,
       0,   -46,   -46,   -46,   -43,     0,   -43,   -43,     0,   -43,
     -43,   -43,   -43,   -43,     0,   -43,     0,   -43,   -43,   -43,
     -43,   -43,     0,   -43,   -43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -43,   -43,     0,     0,     0,
       0,     0,   -43,   -43,   -43,   -50,     0,   -50,   -50,     0,
     -50,   -50,   -50,   -50,   -50,     0,   -50,     0,   -50,   -50,
     -50,   -50,   -50,     0,   -50,   -50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -50,   -50,     0,     0,
       0,     0,     0,   -50,   -50,   -50,   -42,     0,   -42,   -42,
       0,   -42,   -42,   -42,   -42,   -42,     0,   -42,     0,   -42,
     -42,   -42,   -42,   -42,     0,   -42,   -42,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -42,   -42,     0,
       0,     0,     0,     0,   -42,   -42,   -42,   -51,     0,   -51,
     -51,     0,   -51,   -51,   -51,   -51,   -51,     0,   -51,     0,
     -51,   -51,   -51,   -51,   -51,     0,   -51,   -51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -51,   -51,
       0,     0,     0,     0,     0,   -51,   -51,   -51,   -59,     0,
     -59,   -59,     0,   -59,   -59,   -59,   -59,   -59,     0,   -59,
       0,   -59,   -59,   -59,   -59,   -59,     0,   -59,   -59,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -59,
     -59,     0,     0,     0,     0,     0,   -59,   -59,   -59,   -57,
       0,   -57,   -57,     0,   -57,   -57,   -57,   -57,   -57,     0,
     -57,     0,   -57,   -57,   -57,   -57,   -57,     0,   -57,   -57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -57,   -57,     0,     0,     0,     0,     0,   -57,   -57,   -57,
     -60,     0,   -60,   -60,     0,   -60,   -60,   -60,   -60,   -60,
       0,   -60,     0,   -60,   -60,   -60,   -60,   -60,     0,   -60,
     -60,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -60,   -60,     0,     0,     0,     0,     0,   -60,   -60,
     -60,   -58,     0,   -58,   -58,     0,   -58,   -58,   -58,   -58,
     -58,     0,   -58,     0,   -58,   -58,   -58,   -58,   -58,     0,
     -58,   -58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -58,   -58,     0,     0,     0,     0,     0,   -58,
     -58,   -58,   -61,     0,   -61,   -61,     0,   -61,   -61,   -61,
     -61,   -61,     0,   -61,     0,   -61,   -61,   -61,   -61,   -61,
       0,   -61,   -61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -61,   -61,     0,     0,     0,     0,     0,
     -61,   -61,   -61,   -49,     0,   -49,   -49,     0,   -49,   -49,
     -49,   -49,   -49,     0,   -49,     0,   -49,   -49,   -49,   -49,
     -49,     0,   -49,   -49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -49,   -49,     0,     0,     0,     0,
       0,   -49,   -49,   -49,   -15,     0,   -15,   -15,     0,   -15,
     -15,   -15,   -15,   -15,     0,   -15,     0,   -15,   -15,   -15,
     -15,   -15,     0,   -15,   -15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -15,   -15,     0,     0,     0,
       0,     0,   -15,   -15,   -15,   230,     0,    30,    31,     0,
      32,    33,   231,     2,     3,     0,   232,     0,   233,   234,
     235,   236,    40,     0,   -41,   170,   171,   331,   172,   173,
       0,     0,     0,     0,     0,     0,    41,    42,   170,   171,
     174,   172,   173,    43,    44,    45,     0,     0,     0,     0,
       0,     0,     0,   174,   175,   176,   201,   202,     0,   203,
     204,   177,   178,   179,     0,     0,     0,   175,   176,     0,
       0,   205,     0,     0,   177,   178,   179,     0,     0,     0,
       0,     0,     0,     0,     0,   206,   207,     0,     0,     0,
     274,   -62,   208,   209,   210,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,    71,     0,
       0,    89,   -62,     0,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   252,
     -62,     0,     0,     0,     0,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -89,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -90,     0,     0,     0,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -88,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -82,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -85,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -78,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   286,   287,   -78,   -78,   -78,
     -81,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -84,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -87,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -83,     0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -91,     0,     0,     0,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -92,     0,     0,     0,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -94,     0,     0,     0,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -95,     0,     0,     0,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -96,     0,     0,     0,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -97,     0,     0,     0,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -93,     0,     0,     0,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -86,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -76,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   286,   287,   -76,   -76,   -76,
     -77,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   286,   287,   -77,   -77,   -77,
     -79,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -80,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -14,     0,     0,     0,   -14,   -14,   -14,   -14,   -14,   -14,
     -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,
     -89,     0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -90,     0,     0,     0,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -88,     0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -82,     0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -85,     0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -78,     0,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   264,   265,   -78,   -78,   -78,
     -81,     0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -84,     0,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -87,     0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -83,     0,     0,     0,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -91,     0,     0,     0,     0,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -92,     0,     0,     0,     0,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -94,     0,     0,     0,     0,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -95,     0,     0,     0,     0,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -96,     0,     0,     0,     0,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -97,     0,     0,     0,     0,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -93,     0,     0,     0,     0,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -86,     0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -76,     0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   264,   265,   -76,   -76,   -76,
     -77,     0,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   264,   265,   -77,   -77,   -77,
     -79,     0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -80,     0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -14,     0,     0,     0,     0,   -14,   -14,   -14,   -14,   -14,
     -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,
     -75,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   284,   285,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   262,   263,
       0,   -63,   -75,   -75,   -75,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,     0,     0,   -72,   281,   282,
     283,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,   -73,   281,   282,   283,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,   -74,
     281,   282,   283,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,   -63,     0,   281,   282,   283,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,   -72,
       0,   259,   260,   261,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,   -73,     0,   259,   260,   261,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,   -74,
       0,   259,   260,   261,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,     0,   259,   260,   261,   -89,
       0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -90,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -88,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -78,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   104,
     105,   -78,   -78,   -78,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -87,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -83,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -92,
       0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -85,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -94,     0,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -95,     0,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -96,     0,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -97,     0,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -86,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -76,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   104,   105,   -76,
     -76,   -76,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   104,   105,   -77,   -77,   -77,   -79,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -80,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -14,     0,   -14,   -14,   -14,   -14,   -14,
     -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,
     -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     102,   103,     0,     0,   -75,   -75,   -75,   -63,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,
       0,    99,   100,   101,   -72,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,     0,     0,     0,     0,    99,   100,
     101,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,     0,     0,     0,     0,    99,   100,   101,   -74,     0,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,
       0,   -70,    99,   100,   101,   -70,   -70,   -70,   224,   225,
     226,   227,   228,   229,   -71,     0,     0,     0,   -71,   -71,
     -71,   224,   225,   226,   227,   228,   229,   -64,     0,     0,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -65,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -66,     0,     0,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -67,     0,     0,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -68,
       0,     0,     0,   -68,   -68,   -68,   224,   225,   226,   227,
     -68,   -68,   -69,     0,     0,     0,   -69,   -69,   -69,   224,
     225,   226,   227,   -69,   -69,   341,     0,     0,     0,     0,
     193,   194,   195,   196,   197,   198,   199,   200,   343,     0,
       0,     0,     0,   193,   194,   195,   196,   197,   198,   199,
     200,   -47,     0,     0,     0,     0,   193,   194,   195,   196,
     197,   198,   199,   200,   -47,     0,    91,    92,    93,    94,
      95,    96,    97,    98,   -70,     0,   -70,   -70,    93,    94,
      95,    96,    97,    98,   -71,     0,   -71,   -71,    93,    94,
      95,    96,    97,    98,   -64,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -65,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -66,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -67,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -68,     0,   -68,   -68,    93,    94,
      95,    96,   -68,   -68,   -69,     0,   -69,   -69,    93,    94,
      95,    96,   -69,   -69,   -55,     0,    91,    92,    93,    94,
      95,    96,    97,    98,   306,     0,    91,    92,    93,    94,
      95,    96,    97,    98,   326,     0,    91,    92,    93,    94,
      95,    96,    97,    98
};

static const yytype_int16 yycheck[] =
{
       0,     7,     0,   141,   142,     7,     6,    50,     6,   308,
       7,   252,     0,    27,    11,     0,    22,    19,   317,    19,
      34,     6,    18,    23,     0,   163,    22,    41,    42,    43,
      44,    45,   141,   274,    19,     0,    50,     7,    23,    18,
       7,    75,   141,    22,    87,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      18,    75,    34,    42,    78,   141,     9,    10,    40,    19,
       7,     9,    10,    87,    11,    89,    19,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,     7,   141,     7,    18,    11,    19,   141,
      22,   141,    74,   141,    76,    77,    22,   141,    24,    25,
      26,    27,    28,    29,    30,    31,    19,    89,    20,    91,
      92,    93,    94,    95,    96,    97,    98,   141,   142,   143,
     164,   336,   337,    19,   106,     0,     1,   151,     0,     1,
      19,   141,    19,   141,     9,    10,    23,     9,    10,   163,
     164,     1,    18,     3,     4,    18,     6,     7,     8,     9,
      10,    18,    12,    18,    14,    15,    16,    17,    18,   141,
      20,   143,    18,    22,    21,     0,     1,     0,     1,   151,
      20,    22,    32,    33,     9,    10,     9,    10,     7,    39,
      40,    41,   206,   207,   208,   209,   210,     0,     1,    19,
     338,   339,   174,    23,    21,    42,     9,    10,   222,   223,
     224,   225,   226,   227,   228,   229,    22,   231,    19,   357,
      22,   193,   194,   195,   196,   197,   198,   199,   200,   338,
     339,    42,    19,   205,    19,    19,    22,    19,    21,   338,
     339,    19,    40,    41,    42,    43,    44,    45,   357,    22,
     222,   223,   224,   225,   226,   227,   228,   229,   357,   231,
      22,   304,   338,   339,    22,   299,    22,   281,   282,   283,
     284,   285,   286,   287,     0,     1,    74,    19,    76,    77,
      19,   357,    22,     9,    10,   299,    19,     7,   302,     7,
     304,   338,   339,    18,   308,    19,   338,   339,   338,   339,
     338,   339,    18,   317,   338,   339,   104,   105,   106,    18,
     357,     0,     1,    18,    18,   357,    22,   357,    20,   357,
       9,    10,    22,   357,   338,   339,   298,    19,   300,   301,
      42,    22,    19,    19,    19,   307,   308,    19,   338,   339,
     338,   339,    21,   357,    22,   317,    22,    22,    22,    22,
      19,     0,     1,   151,    19,     6,    23,   357,   151,   357,
       9,    10,    -1,    19,   299,   164,   338,   339,    24,    25,
      26,    27,    28,    29,    30,    31,   174,   175,   176,   177,
     178,   179,    19,    -1,    -1,   357,    40,    24,    25,    26,
      27,    28,    29,    30,    31,   193,   194,   195,   196,   197,
     198,   199,   200,    -1,    -1,    -1,    -1,   205,   206,   207,
     208,   209,   210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    76,    77,   222,   223,   224,   225,   226,   227,
     228,   229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
      -1,    12,   106,    14,    15,    16,    17,    18,    -1,    20,
      21,   259,   260,   261,   262,   263,   264,   265,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,   281,   282,   283,   284,   285,   286,   287,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,    -1,
     298,    -1,   300,   301,    -1,    -1,    19,    -1,    -1,   307,
     308,    24,    25,    26,    27,    28,    29,    30,    31,   317,
     174,   175,   176,   177,   178,   179,    19,    -1,    -1,    -1,
      40,    24,    25,    26,    27,    28,    29,    30,    31,   193,
     194,   195,   196,   197,   198,   199,   200,    -1,    -1,    -1,
      -1,   205,   206,   207,   208,   209,   210,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    76,    77,   222,   223,
     224,   225,   226,   227,   228,   229,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,    -1,     6,
       7,     8,     9,    10,    -1,    12,   106,    14,    15,    16,
      17,    18,    -1,    20,    21,   259,   260,   261,   262,   263,
     264,   265,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,   281,   282,   283,
     284,   285,   286,   287,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   151,    -1,    -1,   298,    -1,   300,   301,    -1,    -1,
      19,    -1,    -1,   307,   308,    24,    25,    26,    27,    28,
      29,    30,    31,   317,   174,   175,   176,   177,   178,   179,
      19,    -1,    -1,    -1,    40,    24,    25,    26,    27,    28,
      29,    30,    31,   193,   194,   195,   196,   197,   198,   199,
     200,    -1,    -1,    -1,    -1,   205,   206,   207,   208,   209,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      76,    77,   222,   223,   224,   225,   226,   227,   228,   229,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,    -1,     6,     7,     8,     9,    10,    -1,    12,
     106,    14,    15,    16,    17,    18,    -1,    20,    21,   259,
     260,   261,   262,   263,   264,   265,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,   281,   282,   283,   284,   285,   286,   287,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   151,    -1,    -1,   298,    -1,
     300,   301,    -1,    -1,    19,    -1,    -1,   307,   308,    24,
      25,    26,    27,    28,    29,    30,    31,   317,   174,   175,
     176,   177,   178,   179,    19,    -1,    -1,    -1,    40,    24,
      25,    26,    27,    28,    29,    30,    31,   193,   194,   195,
     196,   197,   198,   199,   200,    -1,    -1,    -1,    -1,   205,
     206,   207,   208,   209,   210,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    76,    77,   222,   223,   224,   225,
     226,   227,   228,   229,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    10,    -1,    12,   106,    14,    15,    16,    17,    18,
      -1,    20,    21,   259,   260,   261,   262,   263,   264,   265,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,   281,   282,   283,   284,   285,
     286,   287,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,
      -1,    -1,   298,    -1,   300,   301,    -1,    -1,    19,    -1,
      -1,   307,   308,    24,    25,    26,    27,    28,    29,    30,
      31,   317,   174,   175,   176,   177,   178,   179,    19,    -1,
      -1,    -1,    40,    24,    25,    26,    27,    28,    29,    30,
      31,   193,   194,   195,   196,   197,   198,   199,   200,    -1,
      -1,    -1,    -1,   205,   206,   207,   208,   209,   210,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    77,
     222,   223,   224,   225,   226,   227,   228,   229,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
      -1,     6,     7,     8,     9,    10,    -1,    12,   106,    14,
      15,    16,    17,    18,    -1,    20,    21,   259,   260,   261,
     262,   263,   264,   265,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,   281,
     282,   283,   284,   285,   286,   287,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   151,    -1,    -1,   298,    -1,   300,   301,
      -1,    -1,    19,    -1,    -1,   307,   308,    24,    25,    26,
      27,    28,    29,    30,    31,   317,   174,   175,   176,   177,
     178,   179,    19,    -1,    -1,    -1,    40,    24,    25,    26,
      27,    28,    29,    30,    31,   193,   194,   195,   196,   197,
     198,   199,   200,    -1,    -1,    -1,    -1,   205,   206,   207,
     208,   209,   210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    76,    77,   222,   223,   224,   225,   226,   227,
     228,   229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
      -1,    12,   106,    14,    15,    16,    17,    18,    -1,    20,
      21,   259,   260,   261,   262,   263,   264,   265,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,   281,   282,   283,   284,   285,   286,   287,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,    -1,
     298,    -1,   300,   301,    -1,    -1,    19,    -1,    -1,   307,
     308,    24,    25,    26,    27,    28,    29,    30,    31,   317,
     174,   175,   176,   177,   178,   179,    40,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,   193,
     194,   195,   196,   197,   198,   199,   200,    -1,    -1,    -1,
      -1,   205,   206,   207,   208,   209,   210,    -1,    -1,    -1,
      74,    -1,    76,    77,    -1,    -1,    -1,    -1,   222,   223,
     224,   225,   226,   227,   228,   229,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,     6,     7,   102,   103,
      -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    18,    19,
      -1,    -1,    -1,    -1,    -1,   259,   260,   261,   262,   263,
     264,   265,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,   281,   282,   283,
     284,   285,   286,   287,    -1,     3,     4,   151,     6,     7,
      -1,    -1,    -1,    -1,   298,    -1,   300,   301,    -1,    -1,
      18,    19,    -1,   307,   308,    -1,    -1,    -1,    -1,    -1,
     174,    40,    -1,   317,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,   193,
     194,   195,   196,   197,   198,   199,   200,    -1,    -1,    -1,
      -1,   205,    -1,    -1,    19,    74,    -1,    76,    77,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,   222,   223,
     224,   225,   226,   227,   228,   229,    -1,    -1,    -1,    -1,
      99,   100,   101,     1,    -1,     3,     4,   106,     6,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,   259,   260,   261,   262,   263,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,   281,   282,   283,
     284,   285,   151,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,   298,    -1,   300,   301,    -1,    -1,
      18,    -1,    -1,   307,   308,   174,    40,    -1,    -1,    -1,
      -1,    -1,    -1,   317,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,   193,   194,   195,   196,   197,   198,
     199,   200,    -1,    -1,    -1,    -1,   205,    -1,    -1,    19,
      74,    -1,    76,    77,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,   222,   223,   224,   225,   226,   227,   228,
     229,    -1,     1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    10,   106,    12,    -1,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
     259,   260,   261,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,   281,   282,   283,     3,     4,   151,     6,     7,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   298,
      18,   300,   301,    -1,    32,    33,    -1,    -1,   307,   308,
     174,    39,    40,    41,    32,    33,    -1,    -1,   317,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,   193,
     194,   195,   196,   197,   198,   199,   200,     1,    -1,     3,
       4,   205,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,   222,   223,
     224,   225,   226,   227,   228,   229,    -1,    -1,    32,    33,
       3,     4,    -1,     6,     7,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    -1,   259,   260,   261,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     3,
       4,     5,     6,     7,    -1,    -1,    -1,   281,   282,   283,
      -1,    19,    -1,    -1,    18,    23,    24,    25,    26,    27,
      28,    29,    30,    31,   298,    -1,   300,   301,    32,    33,
      -1,    -1,    -1,   307,   308,    39,    40,    41,    -1,     1,
      -1,     3,     4,   317,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    -1,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    -1,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    -1,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    18,    -1,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    18,
      -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    18,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    18,    -1,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    18,    -1,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    18,    -1,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    18,    -1,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    18,    -1,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    18,
      -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    18,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    18,    -1,    20,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,     3,     4,
      18,     6,     7,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    32,    33,     3,     4,    -1,     6,
       7,    39,    40,    41,    -1,    -1,    -1,    32,    33,    -1,
      -1,    18,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      18,    19,    39,    40,    41,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    18,    -1,
      -1,    42,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    18,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    19,    -1,    36,    37,    38,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    19,    36,    37,    38,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    19,    36,    37,
      38,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    -1,    19,    36,    37,    38,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    -1,    19,
      36,    37,    38,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    19,    -1,    36,    37,    38,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    19,
      -1,    36,    37,    38,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    19,    -1,    36,    37,    38,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    19,
      -1,    36,    37,    38,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    36,    37,    38,    22,
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
      32,    33,    -1,    -1,    36,    37,    38,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    36,    37,    38,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    36,    37,
      38,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,    36,    37,    38,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    19,    36,    37,    38,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    19,    -1,    -1,    -1,    23,    24,    25,    26,
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
      28,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     9,    10,    44,    45,    46,    47,    53,    54,
      55,    56,    57,     0,    45,    22,    48,     7,    11,    18,
      54,    58,    59,    23,    61,    19,    59,    20,    60,     1,
       3,     4,     6,     7,     8,    12,    14,    15,    16,    17,
      18,    32,    33,    39,    40,    41,    50,    53,    54,    64,
      65,    66,    67,    68,    69,    70,    71,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      22,    18,    77,    78,    18,    18,    18,    18,    18,    78,
      82,    82,    82,    82,    82,    21,    64,    20,    22,    42,
      22,    24,    25,    26,    27,    28,    29,    30,    31,    36,
      37,    38,    32,    33,    34,    35,    51,    22,    78,     7,
      68,    72,    73,    77,     5,    78,     5,    78,    77,    19,
      49,    64,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    79,    79,    79,    81,    81,    82,    82,    62,    63,
      78,    19,    19,    22,    19,    19,    19,    19,    19,    21,
      52,    23,    65,    65,    74,    78,    22,    22,    22,    22,
      22,    19,    63,    13,    22,    65,    73,    55,    55,     7,
       3,     4,     6,     7,    18,    32,    33,    39,    40,    41,
      50,    77,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    22,     7,    24,    25,    26,    27,    28,    29,    30,
      31,     3,     4,     6,     7,    18,    32,    33,    39,    40,
      41,    50,    77,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    24,    25,    26,    27,    28,    29,    30,    31,
       1,     8,    12,    14,    15,    16,    17,    53,    54,    66,
      67,    68,    69,    70,    71,    75,    76,    78,    68,    77,
       7,     7,    18,    78,    82,    82,    82,    82,    82,    36,
      37,    38,    32,    33,    34,    35,    78,    78,    78,    78,
      78,    78,    78,    78,    18,    78,    82,    82,    82,    82,
      82,    36,    37,    38,    32,    33,    34,    35,    78,    78,
      78,    78,    78,    78,    78,    78,    22,    78,    18,    18,
      18,    18,    18,    22,    20,    22,    22,    42,    51,    19,
      79,    79,    79,    81,    81,    82,    82,    51,    19,    79,
      79,    79,    81,    81,    82,    82,    22,    78,    72,     5,
      78,     5,    78,    77,    64,    78,    62,    62,    19,    19,
      19,    19,    19,    19,    19,    21,    52,    52,    65,    65,
      22,    22,    22,    22,    22,    19,    19,    13,    65
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    45,    45,    46,    46,    46,    48,
      49,    47,    51,    52,    50,    53,    54,    55,    55,    56,
      57,    57,    58,    58,    60,    59,    61,    59,    62,    62,
      63,    63,    64,    64,    65,    65,    65,    65,    65,    65,
      65,    66,    65,    65,    65,    65,    67,    68,    69,    69,
      70,    71,    72,    73,    73,    74,    74,    75,    75,    75,
      75,    76,    77,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    79,    79,    79,    79,    80,    80,    80,    81,
      81,    81,    82,    82,    82,    82,    82,    83,    83,    84,
      84,    85,    85,    85,    86,    86,    87,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     0,
       0,     9,     0,     0,     6,     2,     2,     1,     1,     2,
       1,     1,     1,     0,     0,     4,     0,     2,     1,     0,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     2,     2,     1,     2,     3,     5,     7,
       3,     5,     5,     1,     0,     1,     0,     5,     5,     5,
       5,     5,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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
        YY_LAC_DISCARD ("YYBACKUP");                              \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return YYENOMEM if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYPTRDIFF_T *yycapacity, YYPTRDIFF_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yy_state_t **yybottom,
                      yy_state_t *yybottom_no_free,
                      yy_state_t **yytop, yy_state_t *yytop_empty)
{
  YYPTRDIFF_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYPTRDIFF_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYPTRDIFF_T yyalloc = 2 * yysize_new;
      yy_state_t *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return YYENOMEM;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        YY_CAST (yy_state_t *,
                 YYSTACK_ALLOC (YY_CAST (YYSIZE_T,
                                         yyalloc * YYSIZEOF (*yybottom_new))));
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return YYENOMEM;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                                \
do {                                                                    \
  if (!yy_lac_established)                                              \
    {                                                                   \
      YYDPRINTF ((stderr,                                               \
                  "LAC: initial context established for %s\n",          \
                  yysymbol_name (yytoken)));                            \
      yy_lac_established = 1;                                           \
      switch (yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken))    \
        {                                                               \
        case YYENOMEM:                                                  \
          goto yyexhaustedlab;                                          \
        case 1:                                                         \
          goto yyerrlab;                                                \
        }                                                               \
    }                                                                   \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      YYDPRINTF ((stderr, "LAC: initial context discarded due to "       \
                  Event "\n"));                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return YYENOMEM if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yy_state_t *yyesa, yy_state_t **yyes,
        YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, yysymbol_kind_t yytoken)
{
  yy_state_t *yyes_prev = yyssp;
  yy_state_t *yyesp = yyes_prev;
  /* Reduce until we encounter a shift and thereby accept the token.  */
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yysymbol_name (yytoken)));
  if (yytoken == YYSYMBOL_YYUNDEF)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[+*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          /* Use the default action.  */
          yyrule = yydefact[+*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          /* Use the action from yytable.  */
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      /* By now we know we have to simulate a reduce.  */
      YYDPRINTF ((stderr, " R%d", yyrule - 1));
      {
        /* Pop the corresponding number of values from the stack.  */
        YYPTRDIFF_T yylen = yyr2[yyrule];
        /* First pop from the LAC stack as many tokens as possible.  */
        if (yyesp != yyes_prev)
          {
            YYPTRDIFF_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yyesp = yyes_prev;
                yylen -= yysize;
              }
          }
        /* Only afterwards look at the main stack.  */
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      /* Push the resulting state of the reduction.  */
      {
        yy_state_fast_t yystate;
        {
          const int yylhs = yyr1[yyrule] - YYNTOKENS;
          const int yyi = yypgoto[yylhs] + *yyesp;
          yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyesp
                     ? yytable[yyi]
                     : yydefgoto[yylhs]);
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            YY_IGNORE_USELESS_CAST_BEGIN
            *yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return YYENOMEM;
              }
            YY_IGNORE_USELESS_CAST_BEGIN
            *++yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}

/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yy_state_t *yyesa;
  yy_state_t **yyes;
  YYPTRDIFF_T *yyes_capacity;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;

  int yyx;
  for (yyx = 0; yyx < YYNTOKENS; ++yyx)
    {
      yysymbol_kind_t yysym = YY_CAST (yysymbol_kind_t, yyx);
      if (yysym != YYSYMBOL_YYerror && yysym != YYSYMBOL_YYUNDEF)
        switch (yy_lac (yyctx->yyesa, yyctx->yyes, yyctx->yyes_capacity, yyctx->yyssp, yysym))
          {
          case YYENOMEM:
            return YYENOMEM;
          case 1:
            continue;
          default:
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = yysym;
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else if (yyn == 0)
        YYDPRINTF ((stderr, "No expected tokens.\n"));
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store or if
   yy_lac returned YYENOMEM.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    yy_state_t yyesa[20];
    yy_state_t *yyes = yyesa;
    YYPTRDIFF_T yyes_capacity = 20 < YYMAXDEPTH ? 20 : YYMAXDEPTH;

  /* Whether LAC context is established.  A Boolean.  */
  int yy_lac_established = 0;
  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

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
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      YY_LAC_ESTABLISH;
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
  YY_LAC_DISCARD ("shift");
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
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
  case 2: /* program: lst_declarations  */
#line 145 "src/syn.y"
                   {
      root = (yyval.node);
      root = create_node(PROGRAM);
      add_tree_node(root, (yyvsp[0].node));
    }
#line 2874 "src/syn.tab.c"
    break;

  case 3: /* program: %empty  */
#line 150 "src/syn.y"
           {
      (yyval.node) = create_node(PROGRAM);
    }
#line 2882 "src/syn.tab.c"
    break;

  case 4: /* lst_declarations: declaration lst_declarations  */
#line 156 "src/syn.y"
                                {
      (yyval.node) = create_node(LIST_DECLARATIONS);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 2892 "src/syn.tab.c"
    break;

  case 5: /* lst_declarations: declaration  */
#line 161 "src/syn.y"
                 {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(LIST_DECLARATIONS);
      // add_tree_node($$, $1);
    }
#line 2902 "src/syn.tab.c"
    break;

  case 6: /* declaration: func_declaration  */
#line 169 "src/syn.y"
                   {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(DECLARATION);
      // add_tree_node($$, $1);
    }
#line 2912 "src/syn.tab.c"
    break;

  case 7: /* declaration: var_declaration  */
#line 174 "src/syn.y"
                    {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(DECLARATION);
      // add_tree_node($$, $1);
    }
#line 2922 "src/syn.tab.c"
    break;

  case 8: /* declaration: error  */
#line 179 "src/syn.y"
          {
      yyerrok;
      (yyval.node) = create_node(DECLARATION); 
      syntax_errors++;
    }
#line 2932 "src/syn.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 187 "src/syn.y"
                  {
    tac_params_counter2 = 0; 
    fprintf(tac_commands, "\n%s: \n", (yyvsp[0].node)->children->sibilings->child->token.lexeme); 
    strcpy(return_type_function, curr_type); 
    increment_scope(); 
    strcpy(func_name, (yyvsp[0].node)->children->sibilings->child->token.lexeme);
  }
#line 2944 "src/syn.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 193 "src/syn.y"
                                              {
    tac_params_counter2 = get_num_params_table(&(yyvsp[-7].node)->children->sibilings->child->token);
  }
#line 2952 "src/syn.tab.c"
    break;

  case 11: /* func_declaration: unq_declaration $@1 '(' parameters ')' '{' block_commands '}' $@2  */
#line 195 "src/syn.y"
   {
      (yyval.node) = create_node(FUNCTION_DECLARATION);    
      add_tree_node((yyval.node), (yyvsp[-8].node));
      add_tree_node((yyval.node), (yyvsp[-5].node));
      add_tree_node((yyval.node), (yyvsp[-2].node));
      set_F_table((yyvsp[-8].node)->children->sibilings->child);
    }
#line 2964 "src/syn.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 205 "src/syn.y"
          {calling_params_counter = 0; }
#line 2970 "src/syn.tab.c"
    break;

  case 13: /* $@4: %empty  */
#line 205 "src/syn.y"
                                                            {verify_amount_params(&(yyvsp[-3].token));}
#line 2976 "src/syn.tab.c"
    break;

  case 14: /* func_calling: ID '(' $@3 calling_parameters $@4 ')'  */
#line 205 "src/syn.y"
                                                                                             {
      (yyval.node) = create_node(FUNCTION_CALLING);
      add_tree_operation_leaf((yyval.node), &(yyvsp[-5].token), IDENTIFIER, verify_existing_function(&(yyvsp[-5].token)));
      add_tree_node((yyval.node), (yyvsp[-2].node));

      param_list = create_param_list();
      add_all_params_2list((yyvsp[-2].node));
      // print_params_stack();

      parameter *aux = param_list.beginning;
      print_params(aux->next);
      destroy_params_list();
      
      fprintf(tac_commands, "call %s, %d\n", (yyvsp[-5].token).lexeme, get_num_params_table(&(yyvsp[-5].token))); 
      fprintf(tac_commands, "pop $0\n");     
      // sprintf($$->tac,"$0");
    }
#line 2998 "src/syn.tab.c"
    break;

  case 15: /* var_declaration: unq_declaration ';'  */
#line 225 "src/syn.y"
                      {
      (yyval.node) = (yyvsp[-1].node);
      add_variables_tac(&(yyvsp[-1].node)->children->sibilings->child->token);
    }
#line 3007 "src/syn.tab.c"
    break;

  case 16: /* unq_declaration: type ID  */
#line 232 "src/syn.y"
          {
      (yyval.node) = create_node(UNIQUE_DECLARATION);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[0].token), IDENTIFIER, curr_type);
      add_table_node((yyvsp[0].token).lexeme, (yyvsp[-1].node), idx);
      strcpy((yyvsp[-1].node)->type, get_type((yyvsp[-1].node), idx));
      strcpy((yyvsp[-1].node)->children->child->type, curr_type);
      idx++;
    }
#line 3021 "src/syn.tab.c"
    break;

  case 17: /* type: type_lst  */
#line 244 "src/syn.y"
            {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3029 "src/syn.tab.c"
    break;

  case 18: /* type: type_number  */
#line 247 "src/syn.y"
                 {
    (yyval.node) = (yyvsp[0].node);
    }
#line 3037 "src/syn.tab.c"
    break;

  case 19: /* type_lst: type_number T_LIST  */
#line 253 "src/syn.y"
                       {
      (yyval.node) = create_node(TYPE_LIST);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_token_node((yyval.node), &(yyvsp[0].token), LIST);
    }
#line 3047 "src/syn.tab.c"
    break;

  case 20: /* type_number: T_INT  */
#line 261 "src/syn.y"
        {
      (yyval.node) = create_node(TYPE_NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), INT);
    }
#line 3056 "src/syn.tab.c"
    break;

  case 21: /* type_number: T_FLOAT  */
#line 265 "src/syn.y"
            {
      (yyval.node) = create_node(TYPE_NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), FLOAT);
    }
#line 3065 "src/syn.tab.c"
    break;

  case 22: /* parameters: lst_parameters  */
#line 272 "src/syn.y"
                 {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3073 "src/syn.tab.c"
    break;

  case 23: /* parameters: %empty  */
#line 275 "src/syn.y"
           {
      (yyval.node) = create_node(PARAMETERS);
    }
#line 3081 "src/syn.tab.c"
    break;

  case 24: /* $@5: %empty  */
#line 281 "src/syn.y"
                                     {strcpy(param_type, (yyvsp[-2].node)->children->child->type);}
#line 3087 "src/syn.tab.c"
    break;

  case 25: /* lst_parameters: unq_declaration ',' lst_parameters $@5  */
#line 281 "src/syn.y"
                                                                                      {
      (yyval.node) = create_node(LIST_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[-3].node));
      add_tree_node((yyval.node), (yyvsp[-1].node));
      set_P_table((yyvsp[-3].node));
      set_amount_params(func_name, get_amount_params_declaration((yyvsp[-3].node), func_name));
      add_parameter_tac(&(yyvsp[-3].node)->children->sibilings->child->token);
    }
#line 3100 "src/syn.tab.c"
    break;

  case 26: /* $@6: %empty  */
#line 289 "src/syn.y"
                    {strcpy(param_type, (yyvsp[0].node)->children->child->type);}
#line 3106 "src/syn.tab.c"
    break;

  case 27: /* lst_parameters: unq_declaration $@6  */
#line 289 "src/syn.y"
                                                                     {
      (yyval.node) = (yyvsp[-1].node);
      set_P_table((yyvsp[-1].node));
      set_amount_params(func_name, get_amount_params_declaration((yyvsp[-1].node), func_name));
      add_parameter_tac(&(yyvsp[-1].node)->children->sibilings->child->token);
    }
#line 3117 "src/syn.tab.c"
    break;

  case 28: /* calling_parameters: lst_calling_parameters  */
#line 298 "src/syn.y"
                         {
      (yyval.node) = create_node(CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3126 "src/syn.tab.c"
    break;

  case 29: /* calling_parameters: %empty  */
#line 302 "src/syn.y"
           {
      (yyval.node) = create_node(CALLING_PARAMETERS);
    }
#line 3134 "src/syn.tab.c"
    break;

  case 30: /* lst_calling_parameters: operation ',' lst_calling_parameters  */
#line 308 "src/syn.y"
                                        {
      (yyval.node) = create_node(LIST_CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
      calling_params_counter += 1;

      // printf("<<< %s\n", $1->children->child->type);
      // pop_param_stack($1);
      // else {
      //   printf(RED "SEMANTIC ERROR (line: %d, column: %d): Type of parameter passed is different then the expected! Type passed: %s, expected: %s \n" RESET, yylineno, column-yyleng, $1->children->child->type, param_type);
      //   semantic_errors++;
      // }
    }
#line 3152 "src/syn.tab.c"
    break;

  case 31: /* lst_calling_parameters: operation  */
#line 321 "src/syn.y"
               {
      (yyval.node) = create_node(LIST_CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[0].node));
      calling_params_counter += 1;

      // printf("<<< %s\n", $1->children->child->type);
      // pop_param_stack($1);
      //  else {
      //   printf(RED "SEMANTIC ERROR (line: %d, column: %d): Type of parameter passed is different then the expected! Type passed: %s, expected: %s \n" RESET, yylineno, column-yyleng, $1->children->child->type, param_type);
      //   semantic_errors++;
      // }
    }
#line 3169 "src/syn.tab.c"
    break;

  case 32: /* block_commands: command block_commands  */
#line 336 "src/syn.y"
                          {
      (yyval.node) = create_node(BLOCK_COMMANDS);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3179 "src/syn.tab.c"
    break;

  case 33: /* block_commands: command  */
#line 341 "src/syn.y"
            {
    (yyval.node) = (yyvsp[0].node);
  }
#line 3187 "src/syn.tab.c"
    break;

  case 34: /* command: var_declaration  */
#line 347 "src/syn.y"
                  {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3195 "src/syn.tab.c"
    break;

  case 35: /* command: init_variable  */
#line 350 "src/syn.y"
                  {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3203 "src/syn.tab.c"
    break;

  case 36: /* command: conditional_stmt  */
#line 353 "src/syn.y"
                     {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3211 "src/syn.tab.c"
    break;

  case 37: /* command: return_stmt  */
#line 356 "src/syn.y"
                {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3219 "src/syn.tab.c"
    break;

  case 38: /* command: iteration  */
#line 359 "src/syn.y"
              {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3227 "src/syn.tab.c"
    break;

  case 39: /* command: output  */
#line 362 "src/syn.y"
           {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3235 "src/syn.tab.c"
    break;

  case 40: /* command: input  */
#line 365 "src/syn.y"
          {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3243 "src/syn.tab.c"
    break;

  case 41: /* $@7: %empty  */
#line 368 "src/syn.y"
    {increment_scope();}
#line 3249 "src/syn.tab.c"
    break;

  case 42: /* command: $@7 '{' block_commands '}'  */
#line 368 "src/syn.y"
                                                {
      (yyval.node) = create_node(COMMAND);
      add_tree_node((yyval.node), (yyvsp[-1].node));
    }
#line 3258 "src/syn.tab.c"
    break;

  case 43: /* command: operation ';'  */
#line 372 "src/syn.y"
                  { 
      (yyval.node) = create_node(COMMAND);
      add_tree_node((yyval.node), (yyvsp[-1].node));
    }
#line 3267 "src/syn.tab.c"
    break;

  case 44: /* command: error ';'  */
#line 376 "src/syn.y"
              {
      yyerrok;
      (yyval.node) = create_node(COMMAND); 
      syntax_errors++;
    }
#line 3277 "src/syn.tab.c"
    break;

  case 45: /* command: error  */
#line 381 "src/syn.y"
          {
      yyerrok;
      (yyval.node) = create_node(COMMAND); 
      syntax_errors++;
    }
#line 3287 "src/syn.tab.c"
    break;

  case 46: /* init_variable: init_stmt ';'  */
#line 389 "src/syn.y"
                {
      (yyval.node) = create_node(INIT_VARIABLE);
      add_tree_node((yyval.node), (yyvsp[-1].node));
    }
#line 3296 "src/syn.tab.c"
    break;

  case 47: /* init_stmt: iden '=' operation  */
#line 396 "src/syn.y"
                      {
      (yyval.node) = create_node(INIT_STMT);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), ASSIGN, verify_existing_variable(&(yyvsp[-2].node)->children->child->token));
      add_tree_node((yyval.node), (yyvsp[0].node));

      if(strcmp((yyvsp[0].node)->children->child->type, get_type_table((yyvsp[-2].node)->children->child)) != 0) {
        if(strcmp((yyvsp[0].node)->children->child->type, "-") == 0) {
          strcpy((yyvsp[0].node)->type, get_type_table((yyvsp[-2].node)->children->child));
          strcpy((yyvsp[0].node)->children->child->type, get_type_table((yyvsp[-2].node)->children->child));
        } else {
          strcpy((yyvsp[0].node)->type, get_type_table((yyvsp[-2].node)->children->child));
          strcpy((yyvsp[0].node)->children->child->type, get_type_table((yyvsp[-2].node)->children->child));
        }
      }
      // printf(">> %s\n", rule_label[$3->label]);
      if(strcmp(rule_label[(yyvsp[0].node)->label], "FUNCTION_CALLING") == 0) {
        fprintf(tac_commands, "mov %s, $0\n", get_tac_name(&(yyvsp[-2].node)->children->child->token)); 
      } else {
        print_assign_tac(&(yyvsp[-2].node)->children->child->token, (yyvsp[0].node), temp);
      }
      
    }
#line 3324 "src/syn.tab.c"
    break;

  case 48: /* conditional_stmt: IF_STMT '(' operation ')' command  */
#line 422 "src/syn.y"
                                                  {
      (yyval.node) = create_node(CONDITIONAL_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), IF);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3335 "src/syn.tab.c"
    break;

  case 49: /* conditional_stmt: IF_STMT '(' operation ')' command ELSE_STMT command  */
#line 428 "src/syn.y"
                                                         {
      (yyval.node) = create_node(CONDITIONAL_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-6].token), IF);
      add_tree_node((yyval.node), (yyvsp[-4].node));
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), ELSE);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3348 "src/syn.tab.c"
    break;

  case 50: /* return_stmt: RETURN_STM operation ';'  */
#line 439 "src/syn.y"
                            {
      (yyval.node) = create_node(RETURN_STMT);
      add_tree_operation_leaf((yyval.node), &(yyvsp[-2].token), RETURN, return_type_function);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      strcpy((yyvsp[-1].node)->type, get_type((yyvsp[-1].node), id));
      id++;
      if(strcmp((yyvsp[-1].node)->children->child->type, "-") == 0) {
        strcpy((yyvsp[-1].node)->type, get_type((yyvsp[-1].node), id2));
        id2++;
      }
      if(strcmp((yyvsp[-1].node)->children->child->type, return_type_function) != 0) {
        if(strcmp((yyvsp[-1].node)->children->child->type, "-") == 0) {
          strcpy((yyvsp[-1].node)->type, get_type((yyvsp[-1].node), id2));
          id2++;
          if(strcmp((yyvsp[-1].node)->type, return_type_function) != 0) {
            strcpy((yyvsp[-1].node)->type, return_type_function);
            strcpy((yyvsp[-1].node)->children->child->type, return_type_function);
          }
        } else {
          strcpy((yyvsp[-1].node)->type, return_type_function);
          strcpy((yyvsp[-1].node)->children->child->type, return_type_function);
        }
      }
      fprintf(tac_commands, "return %s \n", get_tac_name(&(yyvsp[-1].node)->children->child->token));
    }
#line 3378 "src/syn.tab.c"
    break;

  case 51: /* iteration: FOR_STMT '(' loop_condition ')' command  */
#line 467 "src/syn.y"
                                          {
      (yyval.node) = create_node(ITERATION_PROCESS);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), FOR);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3389 "src/syn.tab.c"
    break;

  case 52: /* loop_condition: update_stmt ';' stop_stmt ';' update_stmt  */
#line 476 "src/syn.y"
                                            {
      (yyval.node) = create_node(LOOP_CONDITION);
      add_tree_node((yyval.node), (yyvsp[-4].node));
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3400 "src/syn.tab.c"
    break;

  case 53: /* update_stmt: init_stmt  */
#line 485 "src/syn.y"
            {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3408 "src/syn.tab.c"
    break;

  case 54: /* update_stmt: %empty  */
#line 488 "src/syn.y"
           {
      (yyval.node) = create_node(UPDATE_STMT);
    }
#line 3416 "src/syn.tab.c"
    break;

  case 55: /* stop_stmt: operation  */
#line 494 "src/syn.y"
            {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3424 "src/syn.tab.c"
    break;

  case 56: /* stop_stmt: %empty  */
#line 497 "src/syn.y"
           {
      (yyval.node) = create_node(STOP_STMT);
    }
#line 3432 "src/syn.tab.c"
    break;

  case 57: /* output: OUTPUT_WRITE '(' operation ')' ';'  */
#line 503 "src/syn.y"
                                      {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_operation_leaf((yyval.node), &(yyvsp[-4].token), WRITE, "-");
      add_tree_node((yyval.node), (yyvsp[-2].node));
      
      fprintf(tac_commands, "print %s\n", get_tac_name(&(yyvsp[-2].node)->children->child->token));
    }
#line 3444 "src/syn.tab.c"
    break;

  case 58: /* output: OUTPUT_WRITELN '(' operation ')' ';'  */
#line 510 "src/syn.y"
                                         {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_operation_leaf((yyval.node), &(yyvsp[-4].token), WRITELN, "-");
      add_tree_node((yyval.node), (yyvsp[-2].node));
      
      fprintf(tac_commands, "println %s\n", get_tac_name(&(yyvsp[-2].node)->children->child->token));
    }
#line 3456 "src/syn.tab.c"
    break;

  case 59: /* output: OUTPUT_WRITE '(' STRING ')' ';'  */
#line 517 "src/syn.y"
                                    {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_operation_leaf((yyval.node), &(yyvsp[-4].token), WRITE, "-");
      add_tree_operation_leaf((yyval.node), &(yyvsp[-2].token), STRING_STMT, "-");

      // int size = strlen($3.lexeme);
      // temp_string = create_temp_4string(&$3);
      // fprintf(tac_table, "char %s[] = %s\n", temp_string, $3.lexeme);
      // strcpy($3.tac, temp_string);
      // fprintf(tac_commands, "print %s\n", $3.tac);

      for(int i = 1; i < strlen((yyvsp[-2].token).lexeme) - 1; i++) {
        fprintf(tac_commands, "print '%c'\n", (yyvsp[-2].token).lexeme[i]);
      }
    }
#line 3476 "src/syn.tab.c"
    break;

  case 60: /* output: OUTPUT_WRITELN '(' STRING ')' ';'  */
#line 532 "src/syn.y"
                                      {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_operation_leaf((yyval.node), &(yyvsp[-4].token), WRITELN, "-");
      add_tree_operation_leaf((yyval.node), &(yyvsp[-2].token), STRING_STMT, "-");

      // temp_string = create_temp_4string(&$3);
      // fprintf(tac_table, "char %s[] = %s\n", temp_string, $3.lexeme);
      // strcpy($3.tac, temp_string);
      // fprintf(tac_commands, "println %s\n", $3.tac);
      for(int i = 1; i < strlen((yyvsp[-2].token).lexeme) - 1; i++) {
        fprintf(tac_commands, "println '%c'\n", (yyvsp[-2].token).lexeme[i]);
      }
    }
#line 3494 "src/syn.tab.c"
    break;

  case 61: /* input: INPUT_READ '(' iden ')' ';'  */
#line 548 "src/syn.y"
                              {
      (yyval.node) = create_node(INPUT_OPERATION);
      add_tree_operation_leaf((yyval.node), &(yyvsp[-4].token), READ, verify_existing_variable(&(yyvsp[-2].node)->children->child->token));
      add_tree_node((yyval.node), (yyvsp[-2].node));
      
      if(strcmp((yyvsp[-2].node)->children->child->type, "int") == 0){
        fprintf(tac_commands, "scani %s\n", get_tac_name(&(yyvsp[-2].node)->children->child->token));
      }
      else if(strcmp((yyvsp[-2].node)->children->child->type, "float") == 0){
        fprintf(tac_commands, "scanf %s\n", get_tac_name(&(yyvsp[-2].node)->children->child->token));

      }
    }
#line 3512 "src/syn.tab.c"
    break;

  case 62: /* iden: ID  */
#line 564 "src/syn.y"
     {
      (yyval.node) = create_node(IDEN);
      add_tree_operation_leaf((yyval.node), &(yyvsp[0].token), IDENTIFIER, verify_existing_variable(&(yyvsp[0].token)));      
      // if(get_scope_from_table(&$1) != $1.scope && get_scope_from_table(&$1) != 0){
      //   printf(">> %d %d %d \n", get_scope_from_table(&$1), $1.scope, g_scope);
      //   printf(RED "SEMANTIC ERROR (line: %d, column: %d): Variable <%s> is being used in the wrong scope! \n" RESET, $1.line, $1.column, $1.lexeme);
      //   semantic_errors++;
      // }  
    }
#line 3526 "src/syn.tab.c"
    break;

  case 63: /* operation: lst_binary  */
#line 576 "src/syn.y"
             {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3534 "src/syn.tab.c"
    break;

  case 64: /* operation: operation GREATER operation  */
#line 579 "src/syn.y"
                                 {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), GT_OP, type_check_num((yyvsp[-2].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3545 "src/syn.tab.c"
    break;

  case 65: /* operation: operation GREATER_EQ operation  */
#line 585 "src/syn.y"
                                    {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), GE_OP, type_check_num((yyvsp[-2].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3556 "src/syn.tab.c"
    break;

  case 66: /* operation: operation LESS operation  */
#line 591 "src/syn.y"
                              {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), LT_OP, type_check_num((yyvsp[-2].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3567 "src/syn.tab.c"
    break;

  case 67: /* operation: operation LESS_EQ operation  */
#line 597 "src/syn.y"
                                 {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), LE_OP, type_check_num((yyvsp[-2].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3578 "src/syn.tab.c"
    break;

  case 68: /* operation: operation EQUAL operation  */
#line 603 "src/syn.y"
                               {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), EQ_OP, type_check_num((yyvsp[-2].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3589 "src/syn.tab.c"
    break;

  case 69: /* operation: operation NOT_EQ operation  */
#line 609 "src/syn.y"
                                {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), NE_OP, type_check_num((yyvsp[-2].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3600 "src/syn.tab.c"
    break;

  case 70: /* operation: operation AND operation  */
#line 615 "src/syn.y"
                            {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), AND_OP, "int");
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3611 "src/syn.tab.c"
    break;

  case 71: /* operation: operation OR operation  */
#line 621 "src/syn.y"
                           {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), OR_OP, "int");
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3622 "src/syn.tab.c"
    break;

  case 72: /* lst_binary: lst_binary FILTER lst_binary  */
#line 630 "src/syn.y"
                               {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), FILTER_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3633 "src/syn.tab.c"
    break;

  case 73: /* lst_binary: lst_binary MAP lst_binary  */
#line 636 "src/syn.y"
                              {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MAP_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3644 "src/syn.tab.c"
    break;

  case 74: /* lst_binary: lst_binary ':' lst_binary  */
#line 642 "src/syn.y"
                              {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), CONSTRUCTOR_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3655 "src/syn.tab.c"
    break;

  case 75: /* lst_binary: arith_binary  */
#line 648 "src/syn.y"
                 {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(OPERATION);
      // add_tree_node($$, $1);
    }
#line 3665 "src/syn.tab.c"
    break;

  case 76: /* arith_binary: arith_binary '+' term  */
#line 656 "src/syn.y"
                        {
      (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      type_check_num((yyvsp[-2].node), (yyvsp[0].node), &(yyvsp[-1].token));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), ADD_OP, (yyvsp[-1].token).type);
      add_tree_node((yyval.node), (yyvsp[0].node));
      strcpy((yyval.node)->type, (yyvsp[-2].node)->type);

      temp = create_temp_4op((yyvsp[-2].node));
      fprintf(tac_table, "%s %s\n", (yyvsp[-2].node)->children->child->type, temp);
      strcpy((yyvsp[-1].token).tac, temp);
      fprintf(tac_commands, "add %s, %s, %s\n", (yyvsp[-1].token).tac, get_tac_name(&(yyvsp[-2].node)->children->child->token), get_tac_name(&(yyvsp[0].node)->children->child->token));
    }
#line 3683 "src/syn.tab.c"
    break;

  case 77: /* arith_binary: arith_binary '-' term  */
#line 669 "src/syn.y"
                          {
      (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), MINUS_OP, type_check_num((yyvsp[-2].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      add_tree_node((yyval.node), (yyvsp[0].node));
      strcpy((yyval.node)->type, (yyvsp[-2].node)->type);

      temp = create_temp_4op((yyvsp[-2].node));
      fprintf(tac_table, "%s %s\n", (yyvsp[-2].node)->children->child->type, temp);
      strcpy((yyvsp[-1].token).tac, temp);
      fprintf(tac_commands, "sub %s, %s, %s\n", (yyvsp[-1].token).tac, get_tac_name(&(yyvsp[-2].node)->children->child->token), get_tac_name(&(yyvsp[0].node)->children->child->token));
    }
#line 3700 "src/syn.tab.c"
    break;

  case 78: /* arith_binary: term  */
#line 681 "src/syn.y"
         {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3708 "src/syn.tab.c"
    break;

  case 79: /* term: term '*' expression  */
#line 687 "src/syn.y"
                      {
      (yyval.node) = create_node(TERM);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), MULTIPLY_OP, type_check_num((yyvsp[-2].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      add_tree_node((yyval.node), (yyvsp[0].node));
      strcpy((yyval.node)->type, (yyvsp[-2].node)->type);

      temp = create_temp_4op((yyvsp[-2].node));
      fprintf(tac_table, "%s %s\n", (yyvsp[-2].node)->children->child->type, temp);
      strcpy((yyvsp[-1].token).tac, temp);
      fprintf(tac_commands, "mul %s, %s, %s\n", (yyvsp[-1].token).tac, get_tac_name(&(yyvsp[-2].node)->children->child->token), get_tac_name(&(yyvsp[0].node)->children->child->token));
    }
#line 3725 "src/syn.tab.c"
    break;

  case 80: /* term: term '/' expression  */
#line 699 "src/syn.y"
                        {
      (yyval.node) = create_node(TERM);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), DIVISION_OP, type_check_num((yyvsp[-2].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      add_tree_node((yyval.node), (yyvsp[0].node));
      strcpy((yyval.node)->type, (yyvsp[-2].node)->type);

      temp = create_temp_4op((yyvsp[-2].node));
      fprintf(tac_table, "%s %s\n", (yyvsp[-2].node)->children->child->type, temp);
      strcpy((yyvsp[-1].token).tac, temp);
      fprintf(tac_commands, "div %s, %s, %s\n", (yyvsp[-1].token).tac, get_tac_name(&(yyvsp[-2].node)->children->child->token), get_tac_name(&(yyvsp[0].node)->children->child->token));
    }
#line 3742 "src/syn.tab.c"
    break;

  case 81: /* term: expression  */
#line 711 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3750 "src/syn.tab.c"
    break;

  case 82: /* expression: func_calling  */
#line 717 "src/syn.y"
               {
    (yyval.node) = (yyvsp[0].node);
    }
#line 3758 "src/syn.tab.c"
    break;

  case 83: /* expression: single_operation  */
#line 720 "src/syn.y"
                     {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3766 "src/syn.tab.c"
    break;

  case 84: /* expression: const  */
#line 723 "src/syn.y"
          {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3774 "src/syn.tab.c"
    break;

  case 85: /* expression: iden  */
#line 726 "src/syn.y"
         {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3782 "src/syn.tab.c"
    break;

  case 86: /* expression: '(' operation ')'  */
#line 729 "src/syn.y"
                      {
    (yyval.node) = (yyvsp[-1].node);
  }
#line 3790 "src/syn.tab.c"
    break;

  case 87: /* const: number  */
#line 735 "src/syn.y"
         {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3798 "src/syn.tab.c"
    break;

  case 88: /* const: NIL_CNST  */
#line 738 "src/syn.y"
             {
      (yyval.node) = create_node(CONSTANT);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NIL);
    }
#line 3807 "src/syn.tab.c"
    break;

  case 89: /* number: NUM_INT  */
#line 745 "src/syn.y"
          {
      (yyval.node) = create_node(NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NUMBER_INT);
      // strcpy($$->tac, $1.lexeme);
      // strcpy($1->tac, $1.lexeme);
    }
#line 3818 "src/syn.tab.c"
    break;

  case 90: /* number: NUM_FLOAT  */
#line 751 "src/syn.y"
              {
      (yyval.node) = create_node(NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NUMBER_FLOAT);
      // strcpy($$->tac, $1.lexeme);
      // strcpy($1->tac, $1.lexeme);
    }
#line 3829 "src/syn.tab.c"
    break;

  case 91: /* single_operation: arith_single  */
#line 760 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3837 "src/syn.tab.c"
    break;

  case 92: /* single_operation: lst_single  */
#line 763 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3845 "src/syn.tab.c"
    break;

  case 93: /* single_operation: '!' expression  */
#line 766 "src/syn.y"
                   {
    (yyval.node) = create_node(SINGLE_OPERATION);
    add_tree_token_node((yyval.node), &(yyvsp[-1].token), NOT_OR_TAIL);
    add_tree_node((yyval.node), (yyvsp[0].node));

    fprintf(tac_commands, "not %s, %s\n", get_tac_name(&(yyvsp[0].node)->children->child->token), get_tac_name(&(yyvsp[0].node)->children->child->token));
  }
#line 3857 "src/syn.tab.c"
    break;

  case 94: /* arith_single: '+' expression  */
#line 776 "src/syn.y"
                 {
      (yyval.node) = create_node(ARITHMETIC_SINGLE);
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), ADD_OP, type_check_num((yyvsp[0].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      add_tree_node((yyval.node), (yyvsp[0].node));
      strcpy((yyval.node)->type, (yyvsp[0].node)->type);
    }
#line 3868 "src/syn.tab.c"
    break;

  case 95: /* arith_single: '-' expression  */
#line 782 "src/syn.y"
                   {
      (yyval.node) = create_node(ARITHMETIC_SINGLE);
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), MINUS_OP, type_check_num((yyvsp[0].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      add_tree_node((yyval.node), (yyvsp[0].node));
      strcpy((yyval.node)->type, (yyvsp[0].node)->type);

      temp = create_temp_4op((yyvsp[0].node));
      fprintf(tac_table, "%s %s\n", (yyvsp[0].node)->children->child->type, temp);
      strcpy((yyvsp[-1].token).tac, temp);
      fprintf(tac_commands, "minus %s, %s\n", (yyvsp[-1].token).tac, get_tac_name(&(yyvsp[0].node)->children->child->token));
    }
#line 3884 "src/syn.tab.c"
    break;

  case 96: /* lst_single: '%' expression  */
#line 796 "src/syn.y"
                 {
      (yyval.node) = create_node(LIST_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), POP_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3894 "src/syn.tab.c"
    break;

  case 97: /* lst_single: '?' expression  */
#line 801 "src/syn.y"
                   {
      (yyval.node) = create_node(LIST_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), HEAD_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3904 "src/syn.tab.c"
    break;


#line 3908 "src/syn.tab.c"

        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yyesa, &yyes, &yyes_capacity, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 808 "src/syn.y"

//********** C Functions **********
int yyerror(const char *s) {
  fprintf(stderr, RED "SYNTAX ERROR   (line: %d, column: %d): %s " RESET "\n", yylineno, column-yyleng, s);
  return 0;
}

int main(int argc, char **argv) {
  ++argv, --argc;
  char output_name[50];
  strcpy(output_name, argv[0]);
  strip_ext(output_name);

  strcat(output_name, ".tac");
  tac_file = fopen(output_name, "w");
  tac_commands = fopen("tests/tac_commands.tac", "w");
  tac_table = fopen("tests/tac_table.tac", "w");

  root_scope_tree = (t_scope_node*) malloc(sizeof(t_scope_node));
  root_scope_tree->scope_number = 0;
  scope_node_curr = root_scope_tree;

  symbol_table = create_table();
  
  if ( argc > 0 ) {
    yyin = fopen( argv[0], "r" );
    printf("\n");
    yyparse();
  }
  else
    yyin = stdin;
  
  // print_ast_tree();
  print_annotated_tree();
  print_table();
  find_main();

  total_lexical_errors();
  total_syntax_errors();
  total_semantic_errors();  

  if( lexical_errors != 0 || syntax_errors != 0 || semantic_errors != 0 )
    remove(output_name);

  fclose(tac_commands);
  fclose(tac_table);
  build_tac();

  destroy_tree(root);
  destroy_table();
  free(root_scope_tree);
  
  fclose(yyin);
  fclose(tac_file);
  remove("tests/tac_commands.tac");
  remove("tests/tac_table.tac");
  yylex_destroy();
  
  return 0;
}
