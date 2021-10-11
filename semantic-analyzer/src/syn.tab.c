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
  // #include <stdlib.h>
  // #include <string.h>
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

  // extern t_node *root;

#line 91 "src/syn.tab.c"

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
  YYSYMBOL_var_declaration = 49,           /* var_declaration  */
  YYSYMBOL_unq_declaration = 50,           /* unq_declaration  */
  YYSYMBOL_parameters = 51,                /* parameters  */
  YYSYMBOL_lst_parameters = 52,            /* lst_parameters  */
  YYSYMBOL_calling_parameters = 53,        /* calling_parameters  */
  YYSYMBOL_lst_calling_parameters = 54,    /* lst_calling_parameters  */
  YYSYMBOL_block_commands = 55,            /* block_commands  */
  YYSYMBOL_command = 56,                   /* command  */
  YYSYMBOL_57_2 = 57,                      /* $@2  */
  YYSYMBOL_init_variable = 58,             /* init_variable  */
  YYSYMBOL_conditional_stmt = 59,          /* conditional_stmt  */
  YYSYMBOL_return_stmt = 60,               /* return_stmt  */
  YYSYMBOL_iteration = 61,                 /* iteration  */
  YYSYMBOL_loop_condition = 62,            /* loop_condition  */
  YYSYMBOL_init_stmt = 63,                 /* init_stmt  */
  YYSYMBOL_update_stmt = 64,               /* update_stmt  */
  YYSYMBOL_output = 65,                    /* output  */
  YYSYMBOL_input = 66,                     /* input  */
  YYSYMBOL_func_calling = 67,              /* func_calling  */
  YYSYMBOL_68_3 = 68,                      /* $@3  */
  YYSYMBOL_69_4 = 69,                      /* $@4  */
  YYSYMBOL_expression = 70,                /* expression  */
  YYSYMBOL_iden = 71,                      /* iden  */
  YYSYMBOL_const = 72,                     /* const  */
  YYSYMBOL_number = 73,                    /* number  */
  YYSYMBOL_type = 74,                      /* type  */
  YYSYMBOL_type_lst = 75,                  /* type_lst  */
  YYSYMBOL_type_number = 76,               /* type_number  */
  YYSYMBOL_operation = 77,                 /* operation  */
  YYSYMBOL_single_operation = 78,          /* single_operation  */
  YYSYMBOL_arith_binary = 79,              /* arith_binary  */
  YYSYMBOL_term = 80,                      /* term  */
  YYSYMBOL_arith_single = 81,              /* arith_single  */
  YYSYMBOL_lst_single = 82,                /* lst_single  */
  YYSYMBOL_lst_binary = 83                 /* lst_binary  */
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
#define YYLAST   5225

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  349

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
       0,   148,   148,   153,   159,   164,   172,   177,   182,   190,
     190,   205,   214,   224,   230,   236,   245,   256,   260,   266,
     273,   281,   286,   292,   297,   302,   307,   312,   317,   322,
     327,   327,   333,   339,   347,   355,   363,   376,   385,   396,
     407,   417,   422,   428,   436,   444,   452,   463,   474,   474,
     474,   485,   490,   495,   500,   503,   509,   517,   522,   529,
     533,   540,   545,   553,   561,   565,   572,   577,   583,   589,
     595,   601,   607,   613,   619,   628,   633,   638,   646,   653,
     659,   667,   673,   679,   687,   692,   700,   705,   713,   719,
     725,   731
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
  "func_declaration", "$@1", "var_declaration", "unq_declaration",
  "parameters", "lst_parameters", "calling_parameters",
  "lst_calling_parameters", "block_commands", "command", "$@2",
  "init_variable", "conditional_stmt", "return_stmt", "iteration",
  "loop_condition", "init_stmt", "update_stmt", "output", "input",
  "func_calling", "$@3", "$@4", "expression", "iden", "const", "number",
  "type", "type_lst", "type_number", "operation", "single_operation",
  "arith_binary", "term", "arith_single", "lst_single", "lst_binary", YY_NULLPTR
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

#define YYPACT_NINF (-286)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-92)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      39,   107,    17,    19,    15,    21,   268,   351,   407,    14,
      28,    30,    40,  -286,    54,   425,    51,    48,    60,    46,
      86,    63,    66,    43,    71,    91,  1555,    80,  4590,  4607,
    4624,  3508,   694,    81,   100,   104,   105,   116,   775,   694,
     694,   694,   694,   694,  2709,   125,   127,  2750,   129,  2791,
    2832,  2873,  2914,   128,  2955,  2996,  4641,  4658,  4675,  4692,
    4709,   284,  4726,  4981,  4743,  4760,  4777,   102,   364,   694,
     936,   414,   775,   118,   381,   465,   775,    49,  4794,  4811,
    4828,  4845,  4862,   455,   130,  1555,  3037,  3078,   694,   694,
     694,   694,   694,   694,   694,   694,   694,   694,   694,   694,
     694,   694,   694,   523,   567,  3119,   143,   110,   134,   141,
     145,  1406,   146,  1429,  1475,  4879,   155,   722,   877,   907,
    1032,  1062,  1187,  1217,  1343,  4896,  4913,  4930,  4947,  4998,
    5015,  5032,   161,   162,   315,  1820,  1555,   694,   160,   169,
     171,   172,   173,  3160,   181,   833,  1679,  3201,  5174,  3242,
    3283,  3324,  3365,  3406,  4964,   186,  1555,    10,  3447,   197,
     201,   214,   217,  3990,  4010,  4030,  3550,   775,   775,   775,
     775,   775,   775,  4050,  4070,  4090,  4110,  4130,  4150,  4465,
    4170,  4190,  4210,  4528,  3488,   775,   775,   775,   775,   775,
     775,   775,   775,  1090,  1245,  3570,  3529,   775,   833,   833,
     833,   833,   833,  3590,  3610,  3630,  3650,  3670,  3690,  4450,
    3710,  3730,  3750,   216,   833,   833,   833,   833,   833,   833,
     833,   833,  1779,   694,   205,   209,   211,   213,   215,  1889,
     212,   218,  1930,  1971,  2012,  2053,   227,  2094,  2135,  5184,
     194,    92,   228,   364,  1506,  4230,  4250,  4270,  4290,  4310,
     775,   775,   775,   775,   775,   775,   775,  1581,  1626,  1736,
    1843,  5047,  5060,  5073,  5086,   364,  5099,  3770,  3790,  3810,
    3830,  3850,   833,   833,   833,   833,   833,   833,   833,   546,
     856,   964,  1011,  1119,  1166,  1274,  1321,  5194,   775,   118,
     620,   678,   775,  2176,  1555,  2217,  2258,   775,   523,  4330,
    4350,  4370,  4390,  4410,  4543,  4558,  4573,   523,  3870,  3890,
    3910,  3930,  3950,  4481,  4497,  4513,  2299,  5112,   236,   237,
    5125,   239,  5138,  5151,   241,  5164,   161,   161,  1820,  1820,
     257,   258,   259,   260,   262,  2340,   244,   266,  2381,  2422,
    2463,  2504,  2545,  2586,  2627,  4430,  3970,  1820,  2668
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -286,  -286,   280,  -286,  -286,  -286,     2,     0,  -286,   264,
    -285,   151,   -43,  -125,  -132,  -130,  -121,  -119,  -117,    18,
     -64,  -286,  -115,  -110,   261,  -231,  -224,   103,   416,   571,
     726,    27,  -286,  -286,   -31,   881,  1587,  1326,  1036,  1191,
    1452
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,     7,    16,    44,    45,    21,    22,
     132,   133,    46,    47,    48,    49,    50,    51,    52,   108,
      53,   160,    54,    55,    56,   103,   144,    57,    58,    59,
      60,   162,    11,    12,    61,    62,    63,    64,    65,    66,
      67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    71,     8,   231,    84,   232,     9,    77,     8,   109,
     146,   147,   298,   326,   233,    13,   234,   240,   235,    20,
     237,    -2,   327,    20,   -64,   238,   -65,    10,   -64,   -42,
     -65,   158,    -9,    10,   307,    17,    15,   -61,   104,    -3,
       1,   106,   116,   111,   113,   114,   161,   -62,     2,     3,
     161,    18,     2,     3,    -4,     2,     3,   117,   118,   119,
     120,   121,   122,   123,   124,   -14,   -12,   -63,   115,    19,
     -12,   236,   134,   185,   186,   187,   188,   189,   190,   191,
     192,   -33,    24,   -33,   -33,   -13,   -33,   -33,   -33,   -33,
     -33,    26,   -33,   159,   -33,   -33,   -33,   -33,   -33,    72,
     -33,   -33,   336,   337,   239,   -16,   148,    -8,    -8,    23,
     -15,   -12,   -33,   -33,   134,   -12,    -8,    -8,    73,   -33,
     -33,   -33,    74,    75,   -66,   107,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,    76,   230,   244,   229,   100,   101,
     102,   174,    78,    79,    80,    81,    82,   184,    83,    85,
      86,   -21,    69,   136,   257,   258,   259,   260,   261,   262,
     263,   264,   135,   137,   138,   140,   266,   185,   186,   187,
     188,   189,   190,   191,   192,   174,   143,   174,   174,   174,
     -49,   -17,   149,   279,   280,   281,   282,   283,   284,   285,
     286,   150,   287,   151,   152,   153,   231,   231,   232,   232,
     154,   127,   128,   338,   339,   -19,   204,   233,   233,   234,
     234,   235,   235,   237,   237,   231,   -41,   232,   238,   238,
     -39,   241,   348,   288,   242,   109,   233,   289,   234,   290,
     235,   291,   237,   292,   293,   -66,   297,   238,   294,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   204,   295,
     -12,   324,   276,   277,   278,   329,   330,   317,   332,   320,
     322,   323,   335,   345,   236,   236,   325,   134,    -5,     1,
     174,   245,   246,   247,   248,   249,   134,     2,     3,   340,
     341,   342,   343,   236,   344,   346,    14,    25,   174,   174,
     174,   174,   174,   174,   174,   174,   155,   239,   239,   173,
     174,   267,   268,   269,   270,   271,    87,   318,    88,    89,
      90,    91,    92,    93,    94,    95,   239,   204,   204,   204,
     204,   204,   204,   204,   204,     0,     0,     0,   230,   230,
     229,   229,     0,   173,   -20,   173,   173,   173,   145,   214,
     215,   216,   217,   218,   219,   220,   221,   230,     0,   229,
       0,    -6,    -6,   174,   174,   302,   303,   174,   174,   174,
      -6,    -6,     0,     0,   203,     0,     0,   -48,   -48,     0,
     -48,   -48,     0,     0,     0,   204,   204,   311,   312,   204,
     204,   204,   -48,   -48,   163,   164,   110,   165,   166,     0,
       0,   174,     0,   174,   174,   174,   -48,   -48,     0,   167,
     174,   204,     0,   -48,   -48,   -48,   203,    -7,    -7,     0,
     204,     0,     0,   168,   169,     0,    -7,    -7,     0,     0,
     170,   171,   172,     0,     0,   -11,   -11,     0,   173,   173,
     173,   173,   173,   173,   -11,   -11,   105,     0,    88,    89,
      90,    91,    92,    93,    94,    95,   173,   173,   173,   173,
     173,   173,   173,   173,   175,   -10,   -10,     0,   173,   203,
     203,   203,   203,   203,   -10,   -10,     0,     0,   163,   164,
     112,   165,   166,     0,     0,   203,   203,   203,   203,   203,
     203,   203,   203,   167,     0,     0,     0,     0,   175,     0,
     175,   175,   175,     0,     0,     0,     0,   168,   169,     0,
       0,     0,     0,     0,   170,   171,   172,     0,     0,     0,
       0,   173,   173,   173,   173,   173,   173,   173,     0,   205,
       0,     0,     0,     0,     0,     0,   193,   194,     0,   195,
     196,     0,     0,   203,   203,   203,   203,   203,   203,   203,
       0,   197,   -18,     0,     0,     0,     0,     0,     0,   173,
       0,   173,   173,   173,     0,   198,   199,     0,   173,   203,
       0,   205,   200,   201,   202,   -73,     0,     0,   203,   -73,
     -73,   -73,   216,   217,   218,   219,   220,   221,     0,     0,
       0,     0,     0,   175,   175,   175,   175,   175,   175,   -40,
       0,    88,    89,    90,    91,    92,    93,    94,    95,     0,
       0,   175,   175,   175,   175,   175,   175,   175,   175,   176,
       0,     0,     0,   175,   205,   205,   205,   205,   205,     0,
       0,     0,     0,   163,   164,   319,   165,   166,     0,     0,
     205,   205,   205,   205,   205,   205,   205,   205,   167,     0,
       0,     0,     0,   176,     0,   176,   176,   176,     0,     0,
       0,     0,   168,   169,     0,     0,     0,     0,     0,   170,
     171,   172,     0,     0,     0,     0,   175,   175,   175,   175,
     175,   175,   175,     0,   206,     0,     0,     0,     0,     0,
       0,   163,   164,   321,   165,   166,     0,     0,   205,   205,
     205,   205,   205,   205,   205,     0,   167,    28,    29,     0,
      30,    70,     0,     0,   175,     0,   175,   175,   175,     0,
     168,   169,    38,   175,   205,     0,   206,   170,   171,   172,
       0,     0,     0,   205,     0,     0,    39,    40,     0,     0,
       0,     0,     0,    41,    42,    43,     0,     0,   176,   176,
     176,   176,   176,   176,   -73,     0,   -73,   -73,    90,    91,
      92,    93,    94,    95,     0,     0,   176,   176,   176,   176,
     176,   176,   176,   176,   177,     0,     0,     0,   176,   206,
     206,   206,   206,   206,     0,     0,     0,     0,   163,   164,
       0,   165,   166,     0,     0,   206,   206,   206,   206,   206,
     206,   206,   206,   167,     0,     0,     0,     0,   177,     0,
     177,   177,   177,     0,     0,     0,     0,   168,   169,     0,
       0,     0,     0,     0,   170,   171,   172,     0,     0,     0,
       0,   176,   176,   176,   176,   176,   176,   176,     0,   207,
       0,     0,     0,     0,     0,     0,   193,   194,     0,   195,
     196,     0,     0,   206,   206,   206,   206,   206,   206,   206,
       0,   197,     0,     0,     0,     0,     0,     0,     0,   176,
       0,   176,   176,   176,     0,   198,   199,     0,   176,   206,
       0,   207,   200,   201,   202,   -74,     0,     0,   206,   -74,
     -74,   -74,   216,   217,   218,   219,   220,   221,     0,     0,
       0,     0,     0,   177,   177,   177,   177,   177,   177,   -74,
       0,   -74,   -74,    90,    91,    92,    93,    94,    95,     0,
       0,   177,   177,   177,   177,   177,   177,   177,   177,   178,
       0,     0,     0,   177,   207,   207,   207,   207,   207,   -67,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
     207,   207,   207,   207,   207,   207,   207,   207,     0,     0,
       0,     0,     0,   178,    68,   178,   178,   178,   -56,     0,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,     0,   177,   177,   177,   177,
     177,   177,   177,   -67,   208,     0,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,     0,   207,   207,
     207,   207,   207,   207,   207,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   177,     0,   177,   177,   177,     0,
       0,     0,     0,   177,   207,     0,   208,     0,     0,     0,
     -68,     0,     0,   207,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,   178,   178,
     178,   178,   178,   178,   -68,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,     0,   178,   178,   178,   178,
     178,   178,   178,   178,   181,     0,     0,     0,   178,   208,
     208,   208,   208,   208,   -69,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,     0,   208,   208,   208,   208,   208,
     208,   208,   208,     0,     0,     0,     0,     0,   181,   -59,
     181,   181,   181,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,
       0,   178,   178,   178,   178,   178,   178,   178,   -69,   211,
       0,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,     0,     0,   208,   208,   208,   208,   208,   208,   208,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   178,
       0,   178,   178,   178,     0,     0,     0,     0,   178,   208,
       0,   211,     0,     0,     0,   -70,     0,     0,   208,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,     0,     0,   181,   181,   181,   181,   181,   181,   -70,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,
       0,   181,   181,   181,   181,   181,   181,   181,   181,   182,
       0,     0,     0,   181,   211,   211,   211,   211,   211,   -71,
       0,   -71,   -71,    90,    91,    92,    93,   -71,   -71,     0,
     211,   211,   211,   211,   211,   211,   211,   211,     0,     0,
       0,     0,     0,   182,   -60,   182,   182,   182,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,     0,     0,   181,   181,   181,   181,
     181,   181,   181,   -71,   212,     0,     0,   -71,   -71,   -71,
     216,   217,   218,   219,   -71,   -71,     0,     0,   211,   211,
     211,   211,   211,   211,   211,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   181,     0,   181,   181,   181,     0,
       0,     0,     0,   181,   211,     0,   212,     0,     0,     0,
     -72,     0,     0,   211,   -72,   -72,   -72,   216,   217,   218,
     219,   -72,   -72,     0,     0,     0,     0,     0,   182,   182,
     182,   182,   182,   182,   180,   -72,     0,   -72,   -72,    90,
      91,    92,    93,   -72,   -72,     0,   182,   182,   182,   182,
     182,   182,   182,   182,     0,     0,     0,     0,   182,   212,
     212,   212,   212,   212,     0,     0,     0,     0,   180,     0,
     180,   180,   180,     0,     0,   212,   212,   212,   212,   212,
     212,   212,   212,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   125,   126,     0,   139,     0,     0,     0,   210,
     185,   186,   187,   188,   189,   190,   191,   192,     0,     0,
       0,   182,   182,   182,   182,   182,   182,   182,   141,     0,
       0,     0,     0,   185,   186,   187,   188,   189,   190,   191,
     192,     0,     0,   212,   212,   212,   212,   212,   212,   212,
       0,   210,     0,     0,     0,     0,     0,     0,     0,   182,
       0,   182,   182,   182,     0,     0,     0,     0,   182,   212,
     183,     0,     0,   180,   142,     0,     0,     0,   212,   185,
     186,   187,   188,   189,   190,   191,   192,     0,     0,     0,
       0,   180,   180,   180,   180,   180,   180,   180,   180,     0,
       0,     0,     0,   180,   183,   299,   183,   183,   183,     0,
     185,   186,   187,   188,   189,   190,   191,   192,     0,     0,
     210,   210,   210,   210,   210,   210,   210,   210,     0,     0,
       0,     0,   129,   130,   131,   213,    27,     0,    28,    29,
       0,    30,    31,    32,     2,     3,     0,    33,     0,    34,
      35,    36,    37,    38,     0,   -30,   300,   301,     0,     0,
     180,   180,   180,     0,     0,     0,     0,    39,    40,     0,
       0,     0,     0,     0,    41,    42,    43,   213,   309,   310,
     -73,     0,   210,   210,   210,   -73,   -73,   187,   188,   189,
     190,   191,   192,     0,   180,     0,   180,   180,   180,   183,
       0,     0,     0,   180,   210,   179,     0,     0,     0,     0,
       0,     0,     0,   210,     0,     0,     0,   183,   183,   183,
     183,   183,   183,   183,   183,   -74,     0,     0,     0,   183,
     -74,   -74,   187,   188,   189,   190,   191,   192,     0,   179,
       0,   179,   179,   179,     0,     0,   213,   213,   213,   213,
     213,   213,   213,   213,     0,     0,     0,     0,     0,     0,
     -35,     0,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,
     209,   -35,   156,   -35,   -35,   -35,   -35,   -35,     0,   -35,
     -35,     0,     0,     0,     0,     0,   304,   305,   306,     0,
       0,   -35,   -35,     0,     0,     0,     0,     0,   -35,   -35,
     -35,     0,     0,     0,     0,     0,     0,     0,   313,   314,
     315,     0,   209,     0,     0,     0,     0,     0,     0,     0,
     183,     0,   183,   183,   183,     0,     0,     0,     0,   183,
     213,     0,     0,     0,   179,   -67,     0,     0,     0,   213,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,
       0,     0,   179,   179,   179,   179,   179,   179,   179,   179,
     -33,     0,   -33,   -33,   179,   -33,   -33,   -33,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,
     -33,   209,   209,   209,   209,   209,   209,   209,   209,     0,
       0,   -33,   -33,     0,     0,     0,     0,     0,   -33,   -33,
     -33,   222,     0,    28,    29,     0,    30,    31,   223,     2,
       3,     0,   224,     0,   225,   226,   227,   228,    38,     0,
     -30,   179,   179,   179,     0,     0,     0,     0,     0,     0,
       0,     0,    39,    40,     0,     0,     0,     0,     0,    41,
      42,    43,   -68,   209,   209,   209,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   179,     0,   179,   179,   179,
       0,     0,     0,     0,   179,   209,     0,     0,     0,     0,
     -23,     0,   -23,   -23,   209,   -23,   -23,   -23,   -23,   -23,
       0,   -23,   -23,   -23,   -23,   -23,   -23,   -23,     0,   -23,
     -23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -23,   -23,     0,     0,     0,     0,     0,   -23,   -23,
     -23,   -24,     0,   -24,   -24,     0,   -24,   -24,   -24,   -24,
     -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,
     -24,   -24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -24,   -24,     0,     0,     0,     0,     0,   -24,
     -24,   -24,   -25,     0,   -25,   -25,     0,   -25,   -25,   -25,
     -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
       0,   -25,   -25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -25,   -25,     0,     0,     0,     0,     0,
     -25,   -25,   -25,   -26,     0,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,     0,   -26,   -26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -26,   -26,     0,     0,     0,     0,
       0,   -26,   -26,   -26,   -27,     0,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,     0,   -27,   -27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -27,   -27,     0,     0,     0,
       0,     0,   -27,   -27,   -27,   -29,     0,   -29,   -29,     0,
     -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,     0,   -29,   -29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -29,   -29,     0,     0,
       0,     0,     0,   -29,   -29,   -29,   -28,     0,   -28,   -28,
       0,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,     0,   -28,   -28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -28,   -28,     0,
       0,     0,     0,     0,   -28,   -28,   -28,   -11,     0,   -11,
     -11,     0,   -11,   -11,   -11,   -11,   -11,     0,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,     0,   -11,   -11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -11,   -11,
       0,     0,     0,     0,     0,   -11,   -11,   -11,   -34,     0,
     -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,     0,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -34,
     -34,     0,     0,     0,     0,     0,   -34,   -34,   -34,   -32,
       0,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,     0,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -32,   -32,     0,     0,     0,     0,     0,   -32,   -32,   -32,
     -37,     0,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,
       0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,
     -37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -37,   -37,     0,     0,     0,     0,     0,   -37,   -37,
     -37,   -31,     0,   -31,   -31,     0,   -31,   -31,   -31,   -31,
     -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,
     -31,   -31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -31,   -31,     0,     0,     0,     0,     0,   -31,
     -31,   -31,   -35,     0,   -35,   -35,     0,   -35,   -35,   -35,
     -35,   -35,     0,   -35,   347,   -35,   -35,   -35,   -35,   -35,
       0,   -35,   -35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -35,   -35,     0,     0,     0,     0,     0,
     -35,   -35,   -35,   -38,     0,   -38,   -38,     0,   -38,   -38,
     -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,     0,   -38,   -38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -38,   -38,     0,     0,     0,     0,
       0,   -38,   -38,   -38,   -45,     0,   -45,   -45,     0,   -45,
     -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,     0,   -45,   -45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -45,   -45,     0,     0,     0,
       0,     0,   -45,   -45,   -45,   -43,     0,   -43,   -43,     0,
     -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,     0,   -43,   -43,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -43,   -43,     0,     0,
       0,     0,     0,   -43,   -43,   -43,   -46,     0,   -46,   -46,
       0,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,     0,   -46,   -46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -46,   -46,     0,
       0,     0,     0,     0,   -46,   -46,   -46,   -44,     0,   -44,
     -44,     0,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -44,   -44,
       0,     0,     0,     0,     0,   -44,   -44,   -44,   -47,     0,
     -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,     0,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -47,
     -47,     0,     0,     0,     0,     0,   -47,   -47,   -47,   -36,
       0,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,     0,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -36,   -36,     0,     0,     0,     0,     0,   -36,   -36,   -36,
     -23,     0,   -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,
       0,   -23,     0,   -23,   -23,   -23,   -23,   -23,     0,   -23,
     -23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -23,   -23,     0,     0,     0,     0,     0,   -23,   -23,
     -23,    27,     0,    28,    29,     0,    30,    31,    32,     2,
       3,     0,    33,     0,    34,    35,    36,    37,    38,     0,
     -30,   -22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,    40,     0,     0,     0,     0,     0,    41,
      42,    43,   -24,     0,   -24,   -24,     0,   -24,   -24,   -24,
     -24,   -24,     0,   -24,     0,   -24,   -24,   -24,   -24,   -24,
       0,   -24,   -24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -24,   -24,     0,     0,     0,     0,     0,
     -24,   -24,   -24,   -25,     0,   -25,   -25,     0,   -25,   -25,
     -25,   -25,   -25,     0,   -25,     0,   -25,   -25,   -25,   -25,
     -25,     0,   -25,   -25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -25,   -25,     0,     0,     0,     0,
       0,   -25,   -25,   -25,   -26,     0,   -26,   -26,     0,   -26,
     -26,   -26,   -26,   -26,     0,   -26,     0,   -26,   -26,   -26,
     -26,   -26,     0,   -26,   -26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -26,   -26,     0,     0,     0,
       0,     0,   -26,   -26,   -26,   -27,     0,   -27,   -27,     0,
     -27,   -27,   -27,   -27,   -27,     0,   -27,     0,   -27,   -27,
     -27,   -27,   -27,     0,   -27,   -27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -27,   -27,     0,     0,
       0,     0,     0,   -27,   -27,   -27,   -29,     0,   -29,   -29,
       0,   -29,   -29,   -29,   -29,   -29,     0,   -29,     0,   -29,
     -29,   -29,   -29,   -29,     0,   -29,   -29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -29,   -29,     0,
       0,     0,     0,     0,   -29,   -29,   -29,   -28,     0,   -28,
     -28,     0,   -28,   -28,   -28,   -28,   -28,     0,   -28,     0,
     -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -28,   -28,
       0,     0,     0,     0,     0,   -28,   -28,   -28,   -34,     0,
     -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,     0,   -34,
       0,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -34,
     -34,     0,     0,     0,     0,     0,   -34,   -34,   -34,   -32,
       0,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,     0,
     -32,     0,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -32,   -32,     0,     0,     0,     0,     0,   -32,   -32,   -32,
     -37,     0,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,
       0,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,   -37,
     -37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -37,   -37,     0,     0,     0,     0,     0,   -37,   -37,
     -37,   -31,     0,   -31,   -31,     0,   -31,   -31,   -31,   -31,
     -31,     0,   -31,     0,   -31,   -31,   -31,   -31,   -31,     0,
     -31,   -31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -31,   -31,     0,     0,     0,     0,     0,   -31,
     -31,   -31,   -38,     0,   -38,   -38,     0,   -38,   -38,   -38,
     -38,   -38,     0,   -38,     0,   -38,   -38,   -38,   -38,   -38,
       0,   -38,   -38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -38,   -38,     0,     0,     0,     0,     0,
     -38,   -38,   -38,   -45,     0,   -45,   -45,     0,   -45,   -45,
     -45,   -45,   -45,     0,   -45,     0,   -45,   -45,   -45,   -45,
     -45,     0,   -45,   -45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -45,   -45,     0,     0,     0,     0,
       0,   -45,   -45,   -45,   -43,     0,   -43,   -43,     0,   -43,
     -43,   -43,   -43,   -43,     0,   -43,     0,   -43,   -43,   -43,
     -43,   -43,     0,   -43,   -43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -43,   -43,     0,     0,     0,
       0,     0,   -43,   -43,   -43,   -46,     0,   -46,   -46,     0,
     -46,   -46,   -46,   -46,   -46,     0,   -46,     0,   -46,   -46,
     -46,   -46,   -46,     0,   -46,   -46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -46,   -46,     0,     0,
       0,     0,     0,   -46,   -46,   -46,   -44,     0,   -44,   -44,
       0,   -44,   -44,   -44,   -44,   -44,     0,   -44,     0,   -44,
     -44,   -44,   -44,   -44,     0,   -44,   -44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -44,   -44,     0,
       0,     0,     0,     0,   -44,   -44,   -44,   -47,     0,   -47,
     -47,     0,   -47,   -47,   -47,   -47,   -47,     0,   -47,     0,
     -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -47,   -47,
       0,     0,     0,     0,     0,   -47,   -47,   -47,   -36,     0,
     -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,     0,   -36,
       0,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -36,
     -36,     0,     0,     0,     0,     0,   -36,   -36,   -36,   -11,
       0,   -11,   -11,     0,   -11,   -11,   -11,   -11,   -11,     0,
     -11,     0,   -11,   -11,   -11,   -11,   -11,     0,   -11,   -11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -11,   -11,     0,     0,     0,     0,    68,   -11,   -11,   -11,
     -56,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   265,   -56,     0,
      69,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   243,   -56,
       0,     0,     0,     0,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -58,
       0,     0,     0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -51,
       0,     0,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -83,
       0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -54,
       0,     0,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -53,
       0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -57,
       0,     0,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -52,
       0,     0,     0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -80,
       0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   274,   275,   -80,   -80,   -80,   -75,
       0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,
       0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -84,
       0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,
       0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,
       0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,
       0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -77,
       0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -55,
       0,     0,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -78,
       0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   274,   275,   -78,   -78,   -78,   -79,
       0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   274,   275,   -79,   -79,   -79,   -81,
       0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -82,
       0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -50,
       0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -59,
       0,     0,     0,     0,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -60,
       0,     0,     0,     0,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -58,
       0,     0,     0,     0,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -51,
       0,     0,     0,     0,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -83,
       0,     0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -54,
       0,     0,     0,     0,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -53,
       0,     0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -57,
       0,     0,     0,     0,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -52,
       0,     0,     0,     0,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -80,
       0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   252,   253,   -80,   -80,   -80,   -75,
       0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,
       0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -84,
       0,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,
       0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,
       0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,
       0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -77,
       0,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -55,
       0,     0,     0,     0,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -78,
       0,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   252,   253,   -78,   -78,   -78,   -79,
       0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   252,   253,   -79,   -79,   -79,   -81,
       0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -82,
       0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -50,
       0,     0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -91,
       0,     0,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   272,   273,   -91,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   250,   251,     0,
     -88,   -91,   -91,   -91,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,     0,     0,     0,   -89,   276,   277,   278,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,
       0,     0,   -90,   276,   277,   278,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,     0,     0,   -66,     0,   276,
     277,   278,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,     0,   -88,     0,   254,   255,   256,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,   -89,     0,   254,
     255,   256,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
       0,     0,   -90,     0,   254,   255,   256,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,     0,     0,     0,     0,   254,
     255,   256,   -59,     0,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -60,
       0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -58,     0,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -51,     0,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -54,     0,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -53,     0,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -57,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -52,     0,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,    98,    99,   -80,
     -80,   -80,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -84,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -85,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -77,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -55,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -78,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
      98,    99,   -78,   -78,   -78,   -79,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,    98,    99,   -79,
     -79,   -79,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -82,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -50,     0,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -91,     0,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,    96,    97,     0,     0,   -91,   -91,   -91,
     -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
       0,     0,     0,     0,   100,   101,   102,   -89,     0,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,
       0,   100,   101,   102,   -90,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,     0,     0,   -69,     0,   100,   101,
     102,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -70,
       0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -71,     0,     0,     0,     0,   -71,   -71,   187,
     188,   189,   190,   -71,   -71,   -72,     0,     0,     0,     0,
     -72,   -72,   187,   188,   189,   190,   -72,   -72,   308,     0,
       0,     0,     0,   185,   186,   187,   188,   189,   190,   191,
     192,   328,     0,     0,     0,     0,   185,   186,   187,   188,
     189,   190,   191,   192,   331,     0,     0,     0,     0,   185,
     186,   187,   188,   189,   190,   191,   192,   333,     0,     0,
       0,     0,   185,   186,   187,   188,   189,   190,   191,   192,
     334,     0,     0,     0,     0,   185,   186,   187,   188,   189,
     190,   191,   192,   -40,     0,     0,     0,     0,   185,   186,
     187,   188,   189,   190,   191,   192,   157,     0,    88,    89,
      90,    91,    92,    93,    94,    95,   296,     0,    88,    89,
      90,    91,    92,    93,    94,    95,   316,     0,    88,    89,
      90,    91,    92,    93,    94,    95
};

static const yytype_int16 yycheck[] =
{
       0,    32,     0,   135,    47,   135,     6,    38,     6,    73,
     135,   136,   243,   298,   135,     0,   135,     7,   135,    19,
     135,     0,   307,    23,     7,   135,     7,     0,    11,    19,
      11,   156,    18,     6,   265,     7,    22,     7,    69,     0,
       1,    72,    85,    74,    75,    76,    19,     7,     9,    10,
      23,    11,     9,    10,     0,     9,    10,    88,    89,    90,
      91,    92,    93,    94,    95,    19,    18,     7,    19,    18,
      22,   135,   103,    24,    25,    26,    27,    28,    29,    30,
      31,     1,    19,     3,     4,    19,     6,     7,     8,     9,
      10,    20,    12,   157,    14,    15,    16,    17,    18,    18,
      20,    21,   326,   327,   135,    19,   137,     0,     1,    23,
      19,    19,    32,    33,   145,    23,     9,    10,    18,    39,
      40,    41,    18,    18,    22,     7,    24,    25,    26,    27,
      28,    29,    30,    31,    18,   135,   167,   135,    36,    37,
      38,    38,    39,    40,    41,    42,    43,    22,    21,    20,
      22,    21,    42,    19,   185,   186,   187,   188,   189,   190,
     191,   192,    19,    22,    19,    19,   197,    24,    25,    26,
      27,    28,    29,    30,    31,    72,    21,    74,    75,    76,
      19,    19,    22,   214,   215,   216,   217,   218,   219,   220,
     221,    22,   223,    22,    22,    22,   328,   329,   328,   329,
      19,    98,    99,   328,   329,    19,   103,   328,   329,   328,
     329,   328,   329,   328,   329,   347,    19,   347,   328,   329,
      19,     7,   347,    18,     7,   289,   347,    18,   347,    18,
     347,    18,   347,    18,    22,    19,    42,   347,    20,    23,
      24,    25,    26,    27,    28,    29,    30,    31,   145,    22,
      22,   294,    36,    37,    38,    19,    19,   288,    19,   290,
     291,   292,    21,    19,   328,   329,   297,   298,     0,     1,
     167,   168,   169,   170,   171,   172,   307,     9,    10,    22,
      22,    22,    22,   347,    22,    19,     6,    23,   185,   186,
     187,   188,   189,   190,   191,   192,   145,   328,   329,    38,
     197,   198,   199,   200,   201,   202,    22,   289,    24,    25,
      26,    27,    28,    29,    30,    31,   347,   214,   215,   216,
     217,   218,   219,   220,   221,    -1,    -1,    -1,   328,   329,
     328,   329,    -1,    72,    19,    74,    75,    76,    23,    24,
      25,    26,    27,    28,    29,    30,    31,   347,    -1,   347,
      -1,     0,     1,   250,   251,   252,   253,   254,   255,   256,
       9,    10,    -1,    -1,   103,    -1,    -1,     3,     4,    -1,
       6,     7,    -1,    -1,    -1,   272,   273,   274,   275,   276,
     277,   278,    18,    19,     3,     4,     5,     6,     7,    -1,
      -1,   288,    -1,   290,   291,   292,    32,    33,    -1,    18,
     297,   298,    -1,    39,    40,    41,   145,     0,     1,    -1,
     307,    -1,    -1,    32,    33,    -1,     9,    10,    -1,    -1,
      39,    40,    41,    -1,    -1,     0,     1,    -1,   167,   168,
     169,   170,   171,   172,     9,    10,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,   185,   186,   187,   188,
     189,   190,   191,   192,    38,     0,     1,    -1,   197,   198,
     199,   200,   201,   202,     9,    10,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,   214,   215,   216,   217,   218,
     219,   220,   221,    18,    -1,    -1,    -1,    -1,    72,    -1,
      74,    75,    76,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,
      -1,   250,   251,   252,   253,   254,   255,   256,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,
       7,    -1,    -1,   272,   273,   274,   275,   276,   277,   278,
      -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,   288,
      -1,   290,   291,   292,    -1,    32,    33,    -1,   297,   298,
      -1,   145,    39,    40,    41,    19,    -1,    -1,   307,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,   167,   168,   169,   170,   171,   172,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,    38,
      -1,    -1,    -1,   197,   198,   199,   200,   201,   202,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
     214,   215,   216,   217,   218,   219,   220,   221,    18,    -1,
      -1,    -1,    -1,    72,    -1,    74,    75,    76,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    -1,    -1,   250,   251,   252,   253,
     254,   255,   256,    -1,   103,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,   272,   273,
     274,   275,   276,   277,   278,    -1,    18,     3,     4,    -1,
       6,     7,    -1,    -1,   288,    -1,   290,   291,   292,    -1,
      32,    33,    18,   297,   298,    -1,   145,    39,    40,    41,
      -1,    -1,    -1,   307,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,   167,   168,
     169,   170,   171,   172,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,   185,   186,   187,   188,
     189,   190,   191,   192,    38,    -1,    -1,    -1,   197,   198,
     199,   200,   201,   202,    -1,    -1,    -1,    -1,     3,     4,
      -1,     6,     7,    -1,    -1,   214,   215,   216,   217,   218,
     219,   220,   221,    18,    -1,    -1,    -1,    -1,    72,    -1,
      74,    75,    76,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,
      -1,   250,   251,   252,   253,   254,   255,   256,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,
       7,    -1,    -1,   272,   273,   274,   275,   276,   277,   278,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   288,
      -1,   290,   291,   292,    -1,    32,    33,    -1,   297,   298,
      -1,   145,    39,    40,    41,    19,    -1,    -1,   307,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,   167,   168,   169,   170,   171,   172,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,    38,
      -1,    -1,    -1,   197,   198,   199,   200,   201,   202,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,    -1,    72,    18,    74,    75,    76,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,   250,   251,   252,   253,
     254,   255,   256,    19,   103,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,   272,   273,
     274,   275,   276,   277,   278,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   288,    -1,   290,   291,   292,    -1,
      -1,    -1,    -1,   297,   298,    -1,   145,    -1,    -1,    -1,
      19,    -1,    -1,   307,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,   167,   168,
     169,   170,   171,   172,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,   185,   186,   187,   188,
     189,   190,   191,   192,    38,    -1,    -1,    -1,   197,   198,
     199,   200,   201,   202,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,   214,   215,   216,   217,   218,
     219,   220,   221,    -1,    -1,    -1,    -1,    -1,    72,    19,
      74,    75,    76,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,   250,   251,   252,   253,   254,   255,   256,    19,   103,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,   272,   273,   274,   275,   276,   277,   278,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   288,
      -1,   290,   291,   292,    -1,    -1,    -1,    -1,   297,   298,
      -1,   145,    -1,    -1,    -1,    19,    -1,    -1,   307,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,   167,   168,   169,   170,   171,   172,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,    38,
      -1,    -1,    -1,   197,   198,   199,   200,   201,   202,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,    -1,    72,    19,    74,    75,    76,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,   250,   251,   252,   253,
     254,   255,   256,    19,   103,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,   272,   273,
     274,   275,   276,   277,   278,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   288,    -1,   290,   291,   292,    -1,
      -1,    -1,    -1,   297,   298,    -1,   145,    -1,    -1,    -1,
      19,    -1,    -1,   307,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,   167,   168,
     169,   170,   171,   172,    38,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,   185,   186,   187,   188,
     189,   190,   191,   192,    -1,    -1,    -1,    -1,   197,   198,
     199,   200,   201,   202,    -1,    -1,    -1,    -1,    72,    -1,
      74,    75,    76,    -1,    -1,   214,   215,   216,   217,   218,
     219,   220,   221,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    -1,    19,    -1,    -1,    -1,   103,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,   250,   251,   252,   253,   254,   255,   256,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,   272,   273,   274,   275,   276,   277,   278,
      -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   288,
      -1,   290,   291,   292,    -1,    -1,    -1,    -1,   297,   298,
      38,    -1,    -1,   167,    19,    -1,    -1,    -1,   307,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,    -1,
      -1,    -1,    -1,   197,    72,    19,    74,    75,    76,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,   100,   101,   102,   103,     1,    -1,     3,     4,
      -1,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    18,    -1,    20,   250,   251,    -1,    -1,
     254,   255,   256,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,   145,   272,   273,
      19,    -1,   276,   277,   278,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,   288,    -1,   290,   291,   292,   167,
      -1,    -1,    -1,   297,   298,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   307,    -1,    -1,    -1,   185,   186,   187,
     188,   189,   190,   191,   192,    19,    -1,    -1,    -1,   197,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    72,
      -1,    74,    75,    76,    -1,    -1,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
     103,    12,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    -1,    -1,    -1,   254,   255,   256,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   276,   277,
     278,    -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     288,    -1,   290,   291,   292,    -1,    -1,    -1,    -1,   297,
     298,    -1,    -1,    -1,   167,    19,    -1,    -1,    -1,   307,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,   185,   186,   187,   188,   189,   190,   191,   192,
       1,    -1,     3,     4,   197,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,   214,   215,   216,   217,   218,   219,   220,   221,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    18,    -1,
      20,   254,   255,   256,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    19,   276,   277,   278,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,   288,    -1,   290,   291,   292,
      -1,    -1,    -1,    -1,   297,   298,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,   307,     6,     7,     8,     9,    10,
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
      32,    33,    -1,    -1,    -1,    -1,    18,    39,    40,    41,
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    18,    19,    -1,
      42,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
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
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    19,    -1,    36,    37,    38,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      19,    36,    37,    38,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    19,    36,    37,    38,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    19,    36,    37,    38,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    19,    -1,    36,
      37,    38,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    19,    -1,    36,    37,    38,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    19,    -1,    36,
      37,    38,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    19,    -1,    36,    37,    38,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    36,
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
      29,    30,    31,    32,    33,    -1,    -1,    36,    37,    38,
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    -1,    -1,    36,    37,    38,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    36,    37,    38,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,    19,    -1,    36,    37,
      38,    24,    25,    26,    27,    28,    29,    30,    31,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    19,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     9,    10,    44,    45,    46,    47,    49,    50,
      74,    75,    76,     0,    45,    22,    48,     7,    11,    18,
      50,    51,    52,    23,    19,    52,    20,     1,     3,     4,
       6,     7,     8,    12,    14,    15,    16,    17,    18,    32,
      33,    39,    40,    41,    49,    50,    55,    56,    57,    58,
      59,    60,    61,    63,    65,    66,    67,    70,    71,    72,
      73,    77,    78,    79,    80,    81,    82,    83,    18,    42,
       7,    77,    18,    18,    18,    18,    18,    77,    70,    70,
      70,    70,    70,    21,    55,    20,    22,    22,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    68,    77,    22,    77,     7,    62,    63,
       5,    77,     5,    77,    77,    19,    55,    77,    77,    77,
      77,    77,    77,    77,    77,    80,    80,    70,    70,    83,
      83,    83,    53,    54,    77,    19,    19,    22,    19,    19,
      19,    19,    19,    21,    69,    23,    56,    56,    77,    22,
      22,    22,    22,    22,    19,    54,    13,    22,    56,    63,
      64,    74,    74,     3,     4,     6,     7,    18,    32,    33,
      39,    40,    41,    67,    70,    71,    72,    73,    78,    79,
      80,    81,    82,    83,    22,    24,    25,    26,    27,    28,
      29,    30,    31,     3,     4,     6,     7,    18,    32,    33,
      39,    40,    41,    67,    70,    71,    72,    73,    78,    79,
      80,    81,    82,    83,    24,    25,    26,    27,    28,    29,
      30,    31,     1,     8,    12,    14,    15,    16,    17,    49,
      50,    57,    58,    59,    60,    61,    63,    65,    66,    77,
       7,     7,     7,    18,    77,    70,    70,    70,    70,    70,
      32,    33,    34,    35,    36,    37,    38,    77,    77,    77,
      77,    77,    77,    77,    77,    18,    77,    70,    70,    70,
      70,    70,    32,    33,    34,    35,    36,    37,    38,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    18,    18,
      18,    18,    18,    22,    20,    22,    22,    42,    68,    19,
      80,    80,    70,    70,    83,    83,    83,    68,    19,    80,
      80,    70,    70,    83,    83,    83,    22,    77,    62,     5,
      77,     5,    77,    77,    55,    77,    53,    53,    19,    19,
      19,    19,    19,    19,    19,    21,    69,    69,    56,    56,
      22,    22,    22,    22,    22,    19,    19,    13,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    45,    45,    46,    46,    46,    48,
      47,    49,    50,    51,    51,    52,    52,    53,    53,    54,
      54,    55,    55,    56,    56,    56,    56,    56,    56,    56,
      57,    56,    56,    56,    58,    59,    59,    60,    61,    62,
      63,    64,    64,    65,    65,    65,    65,    66,    68,    69,
      67,    70,    70,    70,    70,    70,    71,    72,    72,    73,
      73,    74,    74,    75,    76,    76,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    78,    78,    78,    79,    79,
      79,    80,    80,    80,    81,    81,    82,    82,    83,    83,
      83,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     0,
       8,     2,     2,     1,     0,     3,     1,     1,     0,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     2,     1,     2,     5,     7,     3,     5,     5,
       3,     1,     0,     5,     5,     5,     5,     5,     0,     0,
       6,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     2,     3,     3,
       1,     3,     3,     1,     2,     2,     2,     2,     3,     3,
       3,     1
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
#line 148 "src/syn.y"
                   {
      root = (yyval.node);
      root = create_node(PROGRAM);
      add_tree_node(root, (yyvsp[0].node));
    }
#line 2866 "src/syn.tab.c"
    break;

  case 3: /* program: %empty  */
#line 153 "src/syn.y"
           {
      (yyval.node) = create_node(PROGRAM);
    }
#line 2874 "src/syn.tab.c"
    break;

  case 4: /* lst_declarations: declaration lst_declarations  */
#line 159 "src/syn.y"
                                {
      (yyval.node) = create_node(LIST_DECLARATIONS);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 2884 "src/syn.tab.c"
    break;

  case 5: /* lst_declarations: declaration  */
#line 164 "src/syn.y"
                 {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(LIST_DECLARATIONS);
      // add_tree_node($$, $1);
    }
#line 2894 "src/syn.tab.c"
    break;

  case 6: /* declaration: func_declaration  */
#line 172 "src/syn.y"
                   {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(DECLARATION);
      // add_tree_node($$, $1);
    }
#line 2904 "src/syn.tab.c"
    break;

  case 7: /* declaration: var_declaration  */
#line 177 "src/syn.y"
                    {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(DECLARATION);
      // add_tree_node($$, $1);
    }
#line 2914 "src/syn.tab.c"
    break;

  case 8: /* declaration: error  */
#line 182 "src/syn.y"
          {
      yyerrok;
      (yyval.node) = create_node(DECLARATION); 
      syntax_errors++;
    }
#line 2924 "src/syn.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 190 "src/syn.y"
                  {increment_scope(); strcpy(func_name, (yyvsp[0].node)->children->sibilings->child->token.lexeme);}
#line 2930 "src/syn.tab.c"
    break;

  case 10: /* func_declaration: unq_declaration $@1 '(' parameters ')' '{' block_commands '}'  */
#line 190 "src/syn.y"
                                                                                                                                                  {
      (yyval.node) = create_node(FUNCTION_DECLARATION);    
      add_tree_node((yyval.node), (yyvsp[-7].node));
      // add_tree_token_node($$, &$3, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-4].node));
      // add_tree_token_node($$, &$5, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$6, OPEN_CURLY_BRACKET);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$8, CLOSE_CURLY_BRACKET);

      set_F_table((yyvsp[-7].node)->children->sibilings->child);
    }
#line 2947 "src/syn.tab.c"
    break;

  case 11: /* var_declaration: unq_declaration ';'  */
#line 205 "src/syn.y"
                      {
      // $$ = create_node(VARIABLE_DECLARATION);
      (yyval.node) = (yyvsp[-1].node);
      // add_tree_node($$, $1);
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 2958 "src/syn.tab.c"
    break;

  case 12: /* unq_declaration: type ID  */
#line 214 "src/syn.y"
          {
      (yyval.node) = create_node(UNIQUE_DECLARATION);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_token_node((yyval.node), &(yyvsp[0].token), IDENTIFIER);
      add_table_node((yyvsp[0].token).lexeme, (yyvsp[-1].node), idx);
      idx++;
    }
#line 2970 "src/syn.tab.c"
    break;

  case 13: /* parameters: lst_parameters  */
#line 224 "src/syn.y"
                 {
      (yyval.node) = (yyvsp[0].node);
      
      // $$ = create_node(PARAMETERS);
      // add_tree_node($$, $1);
    }
#line 2981 "src/syn.tab.c"
    break;

  case 14: /* parameters: %empty  */
#line 230 "src/syn.y"
           {
      (yyval.node) = create_node(PARAMETERS);
    }
#line 2989 "src/syn.tab.c"
    break;

  case 15: /* lst_parameters: unq_declaration ',' lst_parameters  */
#line 236 "src/syn.y"
                                      {
      (yyval.node) = create_node(LIST_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$2, COMMA);
      add_tree_node((yyval.node), (yyvsp[0].node));

      set_P_table((yyvsp[-2].node));
      set_amount_params(func_name, get_amount_params((yyvsp[-2].node)));
    }
#line 3003 "src/syn.tab.c"
    break;

  case 16: /* lst_parameters: unq_declaration  */
#line 245 "src/syn.y"
                    {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(LIST_PARAMETERS);
      // add_tree_node($$, $1);

      set_P_table((yyvsp[0].node));
      set_amount_params(func_name, get_amount_params((yyvsp[0].node)));
    }
#line 3016 "src/syn.tab.c"
    break;

  case 17: /* calling_parameters: lst_calling_parameters  */
#line 256 "src/syn.y"
                         {
      (yyval.node) = create_node(CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3025 "src/syn.tab.c"
    break;

  case 18: /* calling_parameters: %empty  */
#line 260 "src/syn.y"
           {
      (yyval.node) = create_node(CALLING_PARAMETERS);
    }
#line 3033 "src/syn.tab.c"
    break;

  case 19: /* lst_calling_parameters: operation ',' lst_calling_parameters  */
#line 266 "src/syn.y"
                                       {
      (yyval.node) = create_node(LIST_CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$2, COMMA);
      add_tree_node((yyval.node), (yyvsp[0].node));
      calling_params_counter += 1;
    }
#line 3045 "src/syn.tab.c"
    break;

  case 20: /* lst_calling_parameters: operation  */
#line 273 "src/syn.y"
              {
      (yyval.node) = create_node(LIST_CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[0].node));
      calling_params_counter += 1;
    }
#line 3055 "src/syn.tab.c"
    break;

  case 21: /* block_commands: command block_commands  */
#line 281 "src/syn.y"
                          {
      (yyval.node) = create_node(BLOCK_COMMANDS);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3065 "src/syn.tab.c"
    break;

  case 22: /* block_commands: command  */
#line 286 "src/syn.y"
            {
    (yyval.node) = (yyvsp[0].node);
  }
#line 3073 "src/syn.tab.c"
    break;

  case 23: /* command: var_declaration  */
#line 292 "src/syn.y"
                  {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3083 "src/syn.tab.c"
    break;

  case 24: /* command: init_variable  */
#line 297 "src/syn.y"
                  {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3093 "src/syn.tab.c"
    break;

  case 25: /* command: conditional_stmt  */
#line 302 "src/syn.y"
                     {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3103 "src/syn.tab.c"
    break;

  case 26: /* command: return_stmt  */
#line 307 "src/syn.y"
                {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3113 "src/syn.tab.c"
    break;

  case 27: /* command: iteration  */
#line 312 "src/syn.y"
              {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3123 "src/syn.tab.c"
    break;

  case 28: /* command: input  */
#line 317 "src/syn.y"
          {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3133 "src/syn.tab.c"
    break;

  case 29: /* command: output  */
#line 322 "src/syn.y"
           {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3143 "src/syn.tab.c"
    break;

  case 30: /* $@2: %empty  */
#line 327 "src/syn.y"
    {increment_scope();}
#line 3149 "src/syn.tab.c"
    break;

  case 31: /* command: $@2 '{' block_commands '}'  */
#line 327 "src/syn.y"
                                                {
      (yyval.node) = create_node(COMMAND);
      // add_tree_token_node($$, &$2, OPEN_CURLY_BRACKET);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$4, CLOSE_CURLY_BRACKET);
    }
#line 3160 "src/syn.tab.c"
    break;

  case 32: /* command: operation ';'  */
#line 333 "src/syn.y"
                  { 
      (yyval.node) = create_node(COMMAND);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 3170 "src/syn.tab.c"
    break;

  case 33: /* command: error  */
#line 339 "src/syn.y"
          {
      yyerrok;
      (yyval.node) = create_node(COMMAND); 
      syntax_errors++;
    }
#line 3180 "src/syn.tab.c"
    break;

  case 34: /* init_variable: init_stmt ';'  */
#line 347 "src/syn.y"
                {
      (yyval.node) = create_node(INIT_VARIABLE);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 3190 "src/syn.tab.c"
    break;

  case 35: /* conditional_stmt: IF_STMT '(' operation ')' command  */
#line 355 "src/syn.y"
                                                  {
      (yyval.node) = create_node(CONDITIONAL_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), IF);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3203 "src/syn.tab.c"
    break;

  case 36: /* conditional_stmt: IF_STMT '(' operation ')' command ELSE_STMT command  */
#line 363 "src/syn.y"
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
#line 3218 "src/syn.tab.c"
    break;

  case 37: /* return_stmt: RETURN_STM operation ';'  */
#line 376 "src/syn.y"
                            {
      (yyval.node) = create_node(RETURN_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), RETURN);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$3, SEMICOLON);
    }
#line 3229 "src/syn.tab.c"
    break;

  case 38: /* iteration: FOR_STMT '(' loop_condition ')' command  */
#line 385 "src/syn.y"
                                          {
      (yyval.node) = create_node(ITERATION_PROCESS);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), FOR);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3242 "src/syn.tab.c"
    break;

  case 39: /* loop_condition: init_stmt ';' operation ';' update_stmt  */
#line 396 "src/syn.y"
                                          {
      (yyval.node) = create_node(LOOP_CONDITION);
      add_tree_node((yyval.node), (yyvsp[-4].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, SEMICOLON);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3255 "src/syn.tab.c"
    break;

  case 40: /* init_stmt: ID '=' operation  */
#line 407 "src/syn.y"
                    {
      (yyval.node) = create_node(INIT_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), IDENTIFIER);
      // add_tree_token_node($$, &$2, ASSIGN);
      add_tree_node((yyval.node), (yyvsp[0].node));
      verify_existing_variable(&(yyvsp[-2].token));
    }
#line 3267 "src/syn.tab.c"
    break;

  case 41: /* update_stmt: init_stmt  */
#line 417 "src/syn.y"
            {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(UPDATE_STMT);
      // add_tree_node($$, $1);
    }
#line 3277 "src/syn.tab.c"
    break;

  case 42: /* update_stmt: %empty  */
#line 422 "src/syn.y"
           {
      (yyval.node) = create_node(UPDATE_STMT);
    }
#line 3285 "src/syn.tab.c"
    break;

  case 43: /* output: OUTPUT_WRITE '(' operation ')' ';'  */
#line 428 "src/syn.y"
                                      {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITE);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3298 "src/syn.tab.c"
    break;

  case 44: /* output: OUTPUT_WRITELN '(' operation ')' ';'  */
#line 436 "src/syn.y"
                                         {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITELN);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3311 "src/syn.tab.c"
    break;

  case 45: /* output: OUTPUT_WRITE '(' STRING ')' ';'  */
#line 444 "src/syn.y"
                                    {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITELN);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), STRING);
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3324 "src/syn.tab.c"
    break;

  case 46: /* output: OUTPUT_WRITELN '(' STRING ')' ';'  */
#line 452 "src/syn.y"
                                      {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITELN);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), STRING);
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3337 "src/syn.tab.c"
    break;

  case 47: /* input: INPUT_READ '(' operation ')' ';'  */
#line 463 "src/syn.y"
                                   {
      (yyval.node) = create_node(INPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), READ);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3350 "src/syn.tab.c"
    break;

  case 48: /* $@3: %empty  */
#line 474 "src/syn.y"
          {calling_params_counter = 0;}
#line 3356 "src/syn.tab.c"
    break;

  case 49: /* $@4: %empty  */
#line 474 "src/syn.y"
                                                           {verify_amount_params((yyvsp[0].node), &(yyvsp[-3].token));}
#line 3362 "src/syn.tab.c"
    break;

  case 50: /* func_calling: ID '(' $@3 calling_parameters $@4 ')'  */
#line 474 "src/syn.y"
                                                                                                 {
      (yyval.node) = create_node(FUNCTION_CALLING);
      add_tree_token_node((yyval.node), &(yyvsp[-5].token), IDENTIFIER);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);      
      verify_existing_function(&(yyvsp[-5].token));
    }
#line 3375 "src/syn.tab.c"
    break;

  case 51: /* expression: func_calling  */
#line 485 "src/syn.y"
               {
    (yyval.node) = (yyvsp[0].node);
    // $$ = create_node(EXPRESSION);
    // add_tree_node($$, $1);
    }
#line 3385 "src/syn.tab.c"
    break;

  case 52: /* expression: single_operation  */
#line 490 "src/syn.y"
                     {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(EXPRESSION);
      // add_tree_node($$, $1);
    }
#line 3395 "src/syn.tab.c"
    break;

  case 53: /* expression: const  */
#line 495 "src/syn.y"
          {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(EXPRESSION);
      // add_tree_node($$, $1);
    }
#line 3405 "src/syn.tab.c"
    break;

  case 54: /* expression: iden  */
#line 500 "src/syn.y"
         {
    (yyval.node) = (yyvsp[0].node);
  }
#line 3413 "src/syn.tab.c"
    break;

  case 55: /* expression: '(' operation ')'  */
#line 503 "src/syn.y"
                      {
    (yyval.node) = (yyvsp[-1].node);
  }
#line 3421 "src/syn.tab.c"
    break;

  case 56: /* iden: ID  */
#line 509 "src/syn.y"
     {
      (yyval.node) = create_node(IDEN);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), IDENTIFIER);
      verify_existing_variable(&(yyvsp[0].token));
    }
#line 3431 "src/syn.tab.c"
    break;

  case 57: /* const: number  */
#line 517 "src/syn.y"
         {
    (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(CONSTANT);
      // add_tree_node($$, $1);
    }
#line 3441 "src/syn.tab.c"
    break;

  case 58: /* const: NIL_CNST  */
#line 522 "src/syn.y"
             {
      (yyval.node) = create_node(CONSTANT);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NIL);
    }
#line 3450 "src/syn.tab.c"
    break;

  case 59: /* number: NUM_INT  */
#line 529 "src/syn.y"
          {
      (yyval.node) = create_node(NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NUMBER_INT);
    }
#line 3459 "src/syn.tab.c"
    break;

  case 60: /* number: NUM_FLOAT  */
#line 533 "src/syn.y"
              {
      (yyval.node) = create_node(NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NUMBER_FLOAT);
    }
#line 3468 "src/syn.tab.c"
    break;

  case 61: /* type: type_lst  */
#line 540 "src/syn.y"
            {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(TYPE);
      // add_tree_node($$, $1);
    }
#line 3478 "src/syn.tab.c"
    break;

  case 62: /* type: type_number  */
#line 545 "src/syn.y"
                 {
    (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(TYPE);
      // add_tree_node($$, $1);
    }
#line 3488 "src/syn.tab.c"
    break;

  case 63: /* type_lst: type_number T_LIST  */
#line 553 "src/syn.y"
                       {
      (yyval.node) = create_node(TYPE_LIST);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_token_node((yyval.node), &(yyvsp[0].token), LIST);
    }
#line 3498 "src/syn.tab.c"
    break;

  case 64: /* type_number: T_INT  */
#line 561 "src/syn.y"
        {
      (yyval.node) = create_node(TYPE_NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), INT);
    }
#line 3507 "src/syn.tab.c"
    break;

  case 65: /* type_number: T_FLOAT  */
#line 565 "src/syn.y"
            {
      (yyval.node) = create_node(TYPE_NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), FLOAT);
    }
#line 3516 "src/syn.tab.c"
    break;

  case 66: /* operation: lst_binary  */
#line 572 "src/syn.y"
             {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(OPERATION);
      // add_tree_node($$, $1);
    }
#line 3526 "src/syn.tab.c"
    break;

  case 67: /* operation: operation GREATER operation  */
#line 577 "src/syn.y"
                                 {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), GT_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3537 "src/syn.tab.c"
    break;

  case 68: /* operation: operation GREATER_EQ operation  */
#line 583 "src/syn.y"
                                    {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), GE_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3548 "src/syn.tab.c"
    break;

  case 69: /* operation: operation LESS operation  */
#line 589 "src/syn.y"
                              {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), LT_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3559 "src/syn.tab.c"
    break;

  case 70: /* operation: operation LESS_EQ operation  */
#line 595 "src/syn.y"
                                 {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), LE_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3570 "src/syn.tab.c"
    break;

  case 71: /* operation: operation EQUAL operation  */
#line 601 "src/syn.y"
                               {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), EQ_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3581 "src/syn.tab.c"
    break;

  case 72: /* operation: operation NOT_EQ operation  */
#line 607 "src/syn.y"
                                {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), NE_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3592 "src/syn.tab.c"
    break;

  case 73: /* operation: operation AND operation  */
#line 613 "src/syn.y"
                            {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), AND_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3603 "src/syn.tab.c"
    break;

  case 74: /* operation: operation OR operation  */
#line 619 "src/syn.y"
                           {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), OR_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3614 "src/syn.tab.c"
    break;

  case 75: /* single_operation: arith_single  */
#line 628 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(SINGLE_OPERATION);
      // add_tree_node($$, $1);
    }
#line 3624 "src/syn.tab.c"
    break;

  case 76: /* single_operation: lst_single  */
#line 633 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(SINGLE_OPERATION);
      // add_tree_node($$, $1);
    }
#line 3634 "src/syn.tab.c"
    break;

  case 77: /* single_operation: '!' expression  */
#line 638 "src/syn.y"
                   {
    (yyval.node) = create_node(SINGLE_OPERATION);
    add_tree_token_node((yyval.node), &(yyvsp[-1].token), NOT_OR_TAIL);
    add_tree_node((yyval.node), (yyvsp[0].node));
  }
#line 3644 "src/syn.tab.c"
    break;

  case 78: /* arith_binary: arith_binary '+' term  */
#line 646 "src/syn.y"
                        {
      (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), ADD_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
      // convert_numbers($1, $3, '+');
    }
#line 3656 "src/syn.tab.c"
    break;

  case 79: /* arith_binary: arith_binary '-' term  */
#line 653 "src/syn.y"
                          {
      (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MINUS_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3667 "src/syn.tab.c"
    break;

  case 80: /* arith_binary: term  */
#line 659 "src/syn.y"
         {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(ARITHMETIC_BINARY);
      // add_tree_node($$, $1);
    }
#line 3677 "src/syn.tab.c"
    break;

  case 81: /* term: term '*' expression  */
#line 667 "src/syn.y"
                      {
      (yyval.node) = create_node(TERM);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MULTIPLY_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3688 "src/syn.tab.c"
    break;

  case 82: /* term: term '/' expression  */
#line 673 "src/syn.y"
                        {
      (yyval.node) = create_node(TERM);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), DIVISION_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3699 "src/syn.tab.c"
    break;

  case 83: /* term: expression  */
#line 679 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(TERM);
      // add_tree_node($$, $1);
    }
#line 3709 "src/syn.tab.c"
    break;

  case 84: /* arith_single: '+' expression  */
#line 687 "src/syn.y"
                 {
    (yyval.node) = create_node(ARITHMETIC_SINGLE);
    add_tree_token_node((yyval.node), &(yyvsp[-1].token), ADD_OP);
    add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3719 "src/syn.tab.c"
    break;

  case 85: /* arith_single: '-' expression  */
#line 692 "src/syn.y"
                   {
      (yyval.node) = create_node(ARITHMETIC_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MINUS_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3729 "src/syn.tab.c"
    break;

  case 86: /* lst_single: '%' expression  */
#line 700 "src/syn.y"
                 {
      (yyval.node) = create_node(LIST_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), POP_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3739 "src/syn.tab.c"
    break;

  case 87: /* lst_single: '?' expression  */
#line 705 "src/syn.y"
                   {
      (yyval.node) = create_node(LIST_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), HEAD_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3749 "src/syn.tab.c"
    break;

  case 88: /* lst_binary: lst_binary FILTER lst_binary  */
#line 713 "src/syn.y"
                               {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), FILTER_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3760 "src/syn.tab.c"
    break;

  case 89: /* lst_binary: lst_binary MAP lst_binary  */
#line 719 "src/syn.y"
                              {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MAP_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3771 "src/syn.tab.c"
    break;

  case 90: /* lst_binary: lst_binary ':' lst_binary  */
#line 725 "src/syn.y"
                              {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), CONSTRUCTOR_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3782 "src/syn.tab.c"
    break;

  case 91: /* lst_binary: arith_binary  */
#line 731 "src/syn.y"
                 {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(OPERATION);
      // add_tree_node($$, $1);
    }
#line 3792 "src/syn.tab.c"
    break;


#line 3796 "src/syn.tab.c"

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

#line 738 "src/syn.y"

//********** C Functions **********
int yyerror(const char *s) {
  fprintf(stderr, BHRED "\nSYNTAX ERROR: line: %d, column: %d - %s " reset "\n", yylineno, column-yyleng, s);
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
  

  print_tree(root, 1);
  semantic_parser();
  print_table();

  total_lexical_errors();
  total_syntax_errors();
  total_semantic_errors();

  destroy_tree(root);
  destroy_table();
  free(root_scope_tree);
  
  fclose(yyin);
  yylex_destroy();
  
  return 0;
}
