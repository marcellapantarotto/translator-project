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
  YYSYMBOL_func_calling = 49,              /* func_calling  */
  YYSYMBOL_50_2 = 50,                      /* $@2  */
  YYSYMBOL_51_3 = 51,                      /* $@3  */
  YYSYMBOL_var_declaration = 52,           /* var_declaration  */
  YYSYMBOL_unq_declaration = 53,           /* unq_declaration  */
  YYSYMBOL_type = 54,                      /* type  */
  YYSYMBOL_type_lst = 55,                  /* type_lst  */
  YYSYMBOL_type_number = 56,               /* type_number  */
  YYSYMBOL_parameters = 57,                /* parameters  */
  YYSYMBOL_lst_parameters = 58,            /* lst_parameters  */
  YYSYMBOL_calling_parameters = 59,        /* calling_parameters  */
  YYSYMBOL_lst_calling_parameters = 60,    /* lst_calling_parameters  */
  YYSYMBOL_block_commands = 61,            /* block_commands  */
  YYSYMBOL_command = 62,                   /* command  */
  YYSYMBOL_63_4 = 63,                      /* $@4  */
  YYSYMBOL_init_variable = 64,             /* init_variable  */
  YYSYMBOL_init_stmt = 65,                 /* init_stmt  */
  YYSYMBOL_conditional_stmt = 66,          /* conditional_stmt  */
  YYSYMBOL_return_stmt = 67,               /* return_stmt  */
  YYSYMBOL_iteration = 68,                 /* iteration  */
  YYSYMBOL_loop_condition = 69,            /* loop_condition  */
  YYSYMBOL_update_stmt = 70,               /* update_stmt  */
  YYSYMBOL_stop_stmt = 71,                 /* stop_stmt  */
  YYSYMBOL_output = 72,                    /* output  */
  YYSYMBOL_input = 73,                     /* input  */
  YYSYMBOL_iden = 74,                      /* iden  */
  YYSYMBOL_operation = 75,                 /* operation  */
  YYSYMBOL_lst_binary = 76,                /* lst_binary  */
  YYSYMBOL_arith_binary = 77,              /* arith_binary  */
  YYSYMBOL_term = 78,                      /* term  */
  YYSYMBOL_expression = 79,                /* expression  */
  YYSYMBOL_const = 80,                     /* const  */
  YYSYMBOL_number = 81,                    /* number  */
  YYSYMBOL_single_operation = 82,          /* single_operation  */
  YYSYMBOL_arith_single = 83,              /* arith_single  */
  YYSYMBOL_lst_single = 84                 /* lst_single  */
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
#define YYLAST   5246

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  356

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
       0,   149,   149,   154,   160,   165,   173,   178,   183,   191,
     191,   201,   201,   201,   210,   219,   231,   234,   240,   248,
     252,   259,   265,   271,   280,   291,   295,   301,   308,   316,
     321,   327,   332,   337,   342,   347,   350,   353,   356,   356,
     362,   368,   373,   381,   389,   398,   406,   419,   432,   443,
     454,   459,   465,   470,   476,   484,   492,   500,   511,   519,
     530,   535,   541,   547,   553,   559,   565,   571,   577,   586,
     592,   598,   604,   612,   619,   626,   634,   641,   648,   656,
     659,   662,   665,   668,   673,   676,   683,   687,   694,   699,
     704,   712,   718,   727,   732
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
  "func_declaration", "$@1", "func_calling", "$@2", "$@3",
  "var_declaration", "unq_declaration", "type", "type_lst", "type_number",
  "parameters", "lst_parameters", "calling_parameters",
  "lst_calling_parameters", "block_commands", "command", "$@4",
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

#define YYPACT_NINF (-301)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-95)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      59,    97,    60,    83,     7,    10,   111,   141,   186,    74,
      34,    37,    94,  -301,    49,   248,    55,    86,    84,    27,
     103,    90,    91,     3,    73,    98,   520,   433,  4599,  4616,
    4633,  1865,   974,   112,   114,   116,   121,   125,   998,   974,
     974,   974,   974,   974,  4650,  2736,   122,    95,  2777,   127,
    2818,   126,  2859,  2900,  2941,  2982,  3023,  1887,   471,    26,
    4990,  4667,  4684,  4701,  4718,  4735,  4752,  4769,  3064,    96,
    4786,   631,   998,    25,   311,   568,   142,  1489,  4803,  4820,
    4837,  4854,  4871,   279,   131,   520,  3105,   974,  3146,   974,
     974,   974,   974,   974,   974,   974,   974,   974,   974,   974,
     974,   974,   974,   974,   728,  3187,  1537,   115,   145,   150,
     156,   137,   161,  1571,   162,  1675,   163,  4888,   172,  1111,
    1271,  1401,  1450,  5145,  5155,  5165,  5175,  5185,  1188,  1348,
    1647,  4905,  4922,  4939,  4956,   164,   165,   135,   680,   520,
     814,   175,   176,   177,   178,   181,  3228,   193,  1048,  1618,
    3269,   192,  5195,  3310,  3351,  3392,  3433,  3474,  4973,   203,
     520,    -4,  3515,   204,   187,   217,  1140,  4015,  4035,  4055,
    1297,   998,   998,   998,   998,   998,   998,  4075,  4095,  4537,
    4490,  4115,  4135,  4155,  4175,  4195,  4215,  4235,  3556,   206,
     998,   998,   998,   998,   998,   998,   998,   998,  1377,  3575,
    3595,  1217,   998,  1048,  1048,  1048,  1048,  1048,  3615,  3635,
     344,  4475,  3655,  3675,  3695,  3715,  3735,  3755,  3775,  1048,
    1048,  1048,  1048,  1048,  1048,  1048,  1048,   390,   974,   210,
     212,   215,   221,   226,  1747,   213,   227,  1845,   224,  1957,
    1998,  2039,  2080,  2121,  5205,   232,   218,   108,   233,    96,
    1700,  4255,  4275,  4295,  4315,  4335,   998,   998,   998,   998,
     998,   998,   998,  1776,  1801,  5005,  5018,  5031,  5044,  5057,
    5070,    96,  5083,  3795,  3815,  3835,  3855,  3875,  1048,  1048,
    1048,  1048,  1048,  1048,  1048,   603,   763,   923,  1083,  1169,
    1243,  1329,  1467,  2162,  5215,   998,    25,   838,   888,   142,
    2203,   520,  2244,  2285,   998,   728,  4355,  4552,  4567,  4582,
    4375,  4395,  4415,  4435,   728,  3895,  1911,  4506,  4522,  3915,
    3935,  3955,  3975,  2326,  5096,   243,   251,  5109,   263,  5122,
     266,   270,  5135,   164,   164,   680,   680,   265,   272,   273,
     274,   275,  2367,   289,   291,  2408,  2449,  2490,  2531,  2572,
    2613,  2654,  4455,  3995,   680,  2695
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
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -301,  -301,   292,  -301,  -301,  -301,   445,  -240,  -268,     2,
       0,    16,  -301,  -301,  -301,   290,  -300,   171,   -47,  -118,
    -134,  -120,   -43,  -109,  -104,   -98,    35,   151,  -301,   -95,
     -93,   -15,    81,  1519,  1648,  1384,   285,   605,   765,   925,
    1085,  1245
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,     7,    16,    44,   104,   147,    45,
      46,   165,    11,    12,    21,    22,   135,   136,    47,    48,
      49,    50,    51,    52,    53,    54,   109,   110,   151,    55,
      56,   178,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    84,     8,   107,   236,   333,     9,    13,     8,   305,
      -2,    57,     2,     3,   334,   -51,    10,    70,   237,    20,
     149,   150,    10,    20,    70,    70,    70,    70,    70,   239,
     108,   314,   107,    57,   240,   164,     2,     3,   118,   164,
     241,    17,   162,   242,   -16,   243,   -22,   -51,   -60,    -4,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   111,    -3,
       1,   116,    97,    98,    99,   343,   344,   -19,     2,     3,
      57,   -19,    70,    19,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,   209,
     -20,   -18,    -9,    26,   -20,   238,    15,    -8,    -8,   -11,
     -11,   -17,   -11,   -11,   -15,    18,    -8,    -8,   -15,    24,
     -21,    -5,     1,    71,   -11,   -11,    83,   -23,   245,    77,
       2,     3,   -24,    57,    57,    70,    23,   -15,   -11,   -11,
      72,   -15,    73,   209,    74,   -11,   -11,   -11,   235,    75,
     234,    -6,    -6,    76,   188,    57,   246,    85,    86,   189,
      -6,    -6,   -29,   106,   -28,   113,   115,   -59,   148,   219,
     220,   221,   222,   223,   224,   225,   226,   -50,   119,   139,
     120,   121,   122,   123,   124,   125,   126,   127,   140,    87,
     141,   143,   145,   -12,   -25,   137,    -7,    -7,   209,   209,
     209,   209,   209,   146,   247,    -7,    -7,   153,   154,   155,
     156,   236,   236,   157,   209,   209,   209,   209,   209,   209,
     209,   209,   158,    70,   161,   237,   237,   345,   346,   244,
     236,   152,   -27,   -49,   248,   -59,   239,   239,   295,   137,
     296,   240,   240,   297,   237,   300,   355,   241,   241,   298,
     242,   242,   243,   243,   299,   239,   302,   301,   -14,   -14,
     240,   -50,   250,   108,   331,   -15,   241,   -14,   -14,   242,
     304,   243,   336,   209,   209,   209,   209,   209,   209,   209,
     337,   263,   264,   265,   266,   267,   268,   269,   270,   -10,
     -10,   111,   339,   272,   330,   341,    57,   347,   -10,   -10,
     209,   342,   238,   238,   348,   349,   350,   351,    14,   209,
     285,   286,   287,   288,   289,   290,   291,   292,   352,   294,
     353,   238,   163,    25,   167,   168,   112,   169,   170,   159,
      57,    57,     0,   182,    78,    79,    80,    81,    82,   171,
       0,   325,     0,     0,     0,   235,   235,   234,   234,    57,
       0,     0,     0,   172,   173,     0,     0,     0,     0,     0,
     174,   175,   176,     0,   235,     0,   234,   182,     0,   182,
     182,     0,     0,   -60,     0,     0,     0,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   324,     0,   327,   329,
     278,   279,   280,     0,     0,   332,   137,   133,   134,   213,
       0,   -42,     0,   -42,   -42,   137,   -42,   -42,   -42,   -42,
     -42,     0,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,
     -42,   -42,   293,     0,     0,     0,   244,   244,     0,     0,
       0,     0,   -42,   -42,     0,     0,     0,     0,     0,   -42,
     -42,   -42,     0,   213,   -42,   244,   -42,   -42,     0,   -42,
     -42,   -42,   -42,   -42,     0,   -42,     0,   -42,   -42,   -42,
     -42,   -42,     0,   -42,   -42,    68,   182,   251,   252,   253,
     254,   255,     0,     0,     0,   -42,   -42,     0,     0,     0,
       0,     0,   -42,   -42,   -42,   182,   182,   182,   182,   182,
     182,   182,   182,   177,     0,     0,     0,   182,   273,   274,
     275,   276,   277,    88,     0,    89,    90,    91,    92,    93,
      94,    95,    96,     0,   213,   213,   213,   213,   213,   213,
     213,   213,     0,     0,     0,     0,     0,   177,     0,   177,
     177,    27,     0,    28,    29,     0,    30,    31,    32,     2,
       3,     0,    33,     0,    34,    35,    36,    37,    38,     0,
     -38,   182,   182,   182,   182,   182,   312,   313,     0,   208,
       0,     0,    39,    40,     0,     0,     0,     0,     0,    41,
      42,    43,     0,   213,   213,   213,   213,   213,   321,   322,
       0,   167,   168,   114,   169,   170,     0,     0,     0,     0,
     182,     0,   182,   182,     0,     0,   171,     0,     0,   182,
     213,     0,     0,   208,     0,     0,     0,     0,     0,   213,
     172,   173,     0,     0,     0,     0,     0,   174,   175,   176,
       0,     0,     0,     0,     0,     0,   177,   177,   177,   177,
     177,   177,   -67,     0,     0,     0,   -67,   -67,   -67,   221,
     222,   223,   224,   225,   226,   177,   177,   177,   177,   177,
     177,   177,   177,   183,     0,     0,     0,   177,   208,   208,
     208,   208,   208,   105,     0,    89,    90,    91,    92,    93,
      94,    95,    96,     0,   208,   208,   208,   208,   208,   208,
     208,   208,     0,     0,     0,     0,     0,   183,     0,   183,
     183,   227,     0,    28,    29,     0,    30,    31,   228,     2,
       3,     0,   229,     0,   230,   231,   232,   233,    38,     0,
     -38,   177,   177,   177,   177,   177,   177,   177,     0,   214,
       0,     0,    39,    40,     0,     0,     0,     0,     0,    41,
      42,    43,     0,   208,   208,   208,   208,   208,   208,   208,
       0,   198,   199,     0,   200,   201,     0,     0,     0,     0,
     177,     0,   177,   177,     0,     0,   202,   -26,     0,   177,
     208,     0,     0,   214,     0,     0,     0,     0,     0,   208,
     203,   204,     0,     0,     0,     0,     0,   205,   206,   207,
       0,     0,     0,     0,     0,     0,   183,   183,   183,   183,
     183,   183,   -68,     0,     0,     0,   -68,   -68,   -68,   221,
     222,   223,   224,   225,   226,   183,   183,   183,   183,   183,
     183,   183,   183,   184,     0,     0,     0,   183,   214,   214,
     214,   214,   214,     0,     0,     0,     0,    28,    29,     0,
      30,   166,     0,     0,   214,   214,   214,   214,   214,   214,
     214,   214,    38,     0,     0,     0,   -53,   184,     0,   184,
     184,   167,   168,   326,   169,   170,    39,    40,     0,     0,
       0,     0,     0,    41,    42,    43,   171,     0,     0,     0,
       0,   183,   183,   183,   183,   183,   183,   183,     0,   215,
     172,   173,     0,     0,     0,     0,     0,   174,   175,   176,
       0,     0,     0,   214,   214,   214,   214,   214,   214,   214,
       0,   167,   168,   328,   169,   170,     0,     0,     0,     0,
     183,     0,   183,   183,     0,     0,   171,     0,     0,   183,
     214,     0,     0,   215,     0,     0,     0,     0,     0,   214,
     172,   173,     0,     0,     0,     0,     0,   174,   175,   176,
       0,     0,     0,     0,     0,     0,   184,   184,   184,   184,
     184,   184,   -61,     0,     0,     0,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   184,   184,   184,   184,   184,
     184,   184,   184,   185,     0,     0,     0,   184,   215,   215,
     215,   215,   215,     0,     0,     0,     0,    28,    29,     0,
      30,   166,     0,     0,   215,   215,   215,   215,   215,   215,
     215,   215,    38,     0,     0,     0,     0,   185,     0,   185,
     185,   167,   168,     0,   169,   170,    39,    40,     0,     0,
       0,     0,     0,    41,    42,    43,   171,     0,     0,     0,
       0,   184,   184,   184,   184,   184,   184,   184,     0,   216,
     172,   173,     0,     0,     0,     0,     0,   174,   175,   176,
       0,     0,     0,   215,   215,   215,   215,   215,   215,   215,
       0,   198,   199,     0,   200,   201,     0,     0,     0,     0,
     184,     0,   184,   184,     0,     0,   202,     0,     0,   184,
     215,     0,     0,   216,     0,     0,     0,     0,     0,   215,
     203,   204,     0,     0,     0,     0,     0,   205,   206,   207,
       0,     0,     0,     0,     0,     0,   185,   185,   185,   185,
     185,   185,   -62,     0,     0,     0,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   185,   185,   185,   185,   185,
     185,   185,   185,   186,     0,     0,     0,   185,   216,   216,
     216,   216,   216,   -44,     0,    89,    90,    91,    92,    93,
      94,    95,    96,     0,   216,   216,   216,   216,   216,   216,
     216,   216,     0,     0,     0,     0,     0,   186,    69,   186,
     186,     0,   -59,     0,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,
       0,   185,   185,   185,   185,   185,   185,   185,   -63,   217,
       0,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,     0,     0,   216,   216,   216,   216,   216,   216,   216,
     -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     185,     0,   185,   185,    97,    98,    99,     0,     0,   185,
     216,     0,     0,   217,     0,   271,   -59,     0,     0,   216,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   186,   186,   186,   186,
     186,   186,   -64,     0,     0,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   186,   186,   186,   186,   186,
     186,   186,   186,   187,     0,     0,     0,   186,   217,   217,
     217,   217,   217,   -67,     0,   -67,   -67,    91,    92,    93,
      94,    95,    96,     0,   217,   217,   217,   217,   217,   217,
     217,   217,     0,     0,     0,   249,   -59,   187,     0,   187,
     187,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,     0,     0,     0,     0,
       0,   186,   186,   186,   186,   186,   186,   186,   -65,   218,
       0,     0,   -65,   -65,   -65,   221,   222,   223,   224,   -65,
     -65,     0,     0,   217,   217,   217,   217,   217,   217,   217,
     -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     186,     0,   186,   186,    97,    98,    99,     0,     0,   186,
     217,     0,     0,   218,     0,     0,   -86,     0,     0,   217,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   187,   187,   187,   187,
     187,   187,   181,   -68,     0,   -68,   -68,    91,    92,    93,
      94,    95,    96,     0,     0,   187,   187,   187,   187,   187,
     187,   187,   187,     0,     0,     0,     0,   187,   218,   218,
     218,   218,   218,     0,     0,     0,   181,     0,   181,   181,
       0,     0,     0,     0,   218,   218,   218,   218,   218,   218,
     218,   218,   -61,     0,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,     0,     0,   131,   132,   -66,     0,   212,     0,
     -66,   -66,   -66,   221,   222,   223,   224,   -66,   -66,     0,
       0,   187,   187,   187,   187,   187,   187,   187,   117,     0,
       0,     0,     0,   190,   191,   192,   193,   194,   195,   196,
     197,     0,     0,   218,   218,   218,   218,   218,   218,   218,
       0,     0,   212,     0,     0,     0,     0,     0,     0,     0,
     187,     0,   187,   187,     0,     0,     0,     0,     0,   187,
     218,     0,     0,     0,     0,   181,   138,   179,     0,   218,
       0,   190,   191,   192,   193,   194,   195,   196,   197,     0,
       0,     0,     0,     0,   181,   181,   181,   181,   181,   181,
     181,   181,     0,     0,     0,     0,   181,     0,     0,     0,
     142,   179,     0,   179,   179,   190,   191,   192,   193,   194,
     195,   196,   197,   212,   212,   212,   212,   212,   212,   212,
     212,     0,     0,     0,     0,     0,   128,   129,   130,   -45,
       0,   -45,   -45,   210,   -45,   -45,   -45,   -45,   -45,     0,
     -45,   160,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,
     181,   181,   181,   310,   311,     0,     0,     0,     0,     0,
     -45,   -45,     0,     0,     0,     0,     0,   -45,   -45,   -45,
       0,     0,   212,   212,   212,   319,   320,   210,     0,   -71,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   181,
       0,   181,   181,    97,    98,    99,   180,     0,   181,   212,
     179,     0,     0,     0,   144,     0,     0,     0,   212,   190,
     191,   192,   193,   194,   195,   196,   197,     0,     0,   179,
     179,   179,   179,   179,   179,   179,   179,     0,     0,   306,
     180,   179,   180,   180,   190,   191,   192,   193,   194,   195,
     196,   197,     0,     0,     0,     0,     0,     0,   210,   210,
     210,   210,   210,   210,   210,   210,     0,     0,   -31,     0,
     -31,   -31,   211,   -31,   -31,   -31,   -31,   -31,     0,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,     0,
       0,     0,     0,     0,     0,   307,   308,   309,     0,   -31,
     -31,     0,     0,     0,     0,     0,   -31,   -31,   -31,     0,
       0,     0,     0,     0,     0,   -67,   211,   316,   317,   318,
     -67,   -67,   192,   193,   194,   195,   196,   197,     0,     0,
       0,     0,     0,     0,   179,     0,   179,   179,     0,   180,
     -68,     0,     0,   179,   210,   -68,   -68,   192,   193,   194,
     195,   196,   197,   210,     0,     0,     0,     0,   180,   180,
     180,   180,   180,   180,   180,   180,   -32,     0,   -32,   -32,
     180,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,     0,   -32,   -32,   211,   211,   211,
     211,   211,   211,   211,   211,     0,     0,   -32,   -32,     0,
       0,     0,     0,    69,   -32,   -32,   -32,   -59,     0,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   180,   180,   180,   -59,     0,   -82,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   211,   211,   211,    87,
     -69,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   180,     0,   180,   180,   278,   279,   280,
       0,     0,   180,   211,     0,     0,     0,     0,   -33,     0,
     -33,   -33,   211,   -33,   -33,   -33,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -33,
     -33,     0,     0,     0,     0,     0,   -33,   -33,   -33,   -34,
       0,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,     0,
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
     -37,   -37,   -37,   -41,     0,   -41,   -41,     0,   -41,   -41,
     -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,     0,   -41,   -41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -41,   -41,     0,     0,     0,     0,
       0,   -41,   -41,   -41,   -14,     0,   -14,   -14,     0,   -14,
     -14,   -14,   -14,   -14,     0,   -14,   -14,   -14,   -14,   -14,
     -14,   -14,     0,   -14,   -14,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -14,   -14,     0,     0,     0,
       0,     0,   -14,   -14,   -14,   -43,     0,   -43,   -43,     0,
     -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,     0,   -43,   -43,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -43,   -43,     0,     0,
       0,     0,     0,   -43,   -43,   -43,   -40,     0,   -40,   -40,
       0,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,     0,   -40,   -40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -40,   -40,     0,
       0,     0,     0,     0,   -40,   -40,   -40,   -47,     0,   -47,
     -47,     0,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -47,   -47,
       0,     0,     0,     0,     0,   -47,   -47,   -47,   -39,     0,
     -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,     0,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -39,
     -39,     0,     0,     0,     0,     0,   -39,   -39,   -39,   -45,
       0,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,     0,
     -45,   354,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -45,   -45,     0,     0,     0,     0,     0,   -45,   -45,   -45,
     -48,     0,   -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,
       0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,   -48,
     -48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -48,   -48,     0,     0,     0,     0,     0,   -48,   -48,
     -48,   -56,     0,   -56,   -56,     0,   -56,   -56,   -56,   -56,
     -56,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,
     -56,   -56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -56,   -56,     0,     0,     0,     0,     0,   -56,
     -56,   -56,   -54,     0,   -54,   -54,     0,   -54,   -54,   -54,
     -54,   -54,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
       0,   -54,   -54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -54,   -54,     0,     0,     0,     0,     0,
     -54,   -54,   -54,   -57,     0,   -57,   -57,     0,   -57,   -57,
     -57,   -57,   -57,     0,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,     0,   -57,   -57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -57,   -57,     0,     0,     0,     0,
       0,   -57,   -57,   -57,   -55,     0,   -55,   -55,     0,   -55,
     -55,   -55,   -55,   -55,     0,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,     0,   -55,   -55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -55,   -55,     0,     0,     0,
       0,     0,   -55,   -55,   -55,   -58,     0,   -58,   -58,     0,
     -58,   -58,   -58,   -58,   -58,     0,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,     0,   -58,   -58,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -58,   -58,     0,     0,
       0,     0,     0,   -58,   -58,   -58,   -46,     0,   -46,   -46,
       0,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,     0,   -46,   -46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -46,   -46,     0,
       0,     0,     0,     0,   -46,   -46,   -46,   -31,     0,   -31,
     -31,     0,   -31,   -31,   -31,   -31,   -31,     0,   -31,     0,
     -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -31,   -31,
       0,     0,     0,     0,     0,   -31,   -31,   -31,    27,     0,
      28,    29,     0,    30,    31,    32,     2,     3,     0,    33,
       0,    34,    35,    36,    37,    38,     0,   -38,   -30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
      40,     0,     0,     0,     0,     0,    41,    42,    43,   -32,
       0,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,     0,
     -32,     0,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -32,   -32,     0,     0,     0,     0,     0,   -32,   -32,   -32,
     -33,     0,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,
       0,   -33,     0,   -33,   -33,   -33,   -33,   -33,     0,   -33,
     -33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -33,   -33,     0,     0,     0,     0,     0,   -33,   -33,
     -33,   -34,     0,   -34,   -34,     0,   -34,   -34,   -34,   -34,
     -34,     0,   -34,     0,   -34,   -34,   -34,   -34,   -34,     0,
     -34,   -34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -34,   -34,     0,     0,     0,     0,     0,   -34,
     -34,   -34,   -35,     0,   -35,   -35,     0,   -35,   -35,   -35,
     -35,   -35,     0,   -35,     0,   -35,   -35,   -35,   -35,   -35,
       0,   -35,   -35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -35,   -35,     0,     0,     0,     0,     0,
     -35,   -35,   -35,   -36,     0,   -36,   -36,     0,   -36,   -36,
     -36,   -36,   -36,     0,   -36,     0,   -36,   -36,   -36,   -36,
     -36,     0,   -36,   -36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -36,   -36,     0,     0,     0,     0,
       0,   -36,   -36,   -36,   -37,     0,   -37,   -37,     0,   -37,
     -37,   -37,   -37,   -37,     0,   -37,     0,   -37,   -37,   -37,
     -37,   -37,     0,   -37,   -37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -37,   -37,     0,     0,     0,
       0,     0,   -37,   -37,   -37,   -41,     0,   -41,   -41,     0,
     -41,   -41,   -41,   -41,   -41,     0,   -41,     0,   -41,   -41,
     -41,   -41,   -41,     0,   -41,   -41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -41,   -41,     0,     0,
       0,     0,     0,   -41,   -41,   -41,   -43,     0,   -43,   -43,
       0,   -43,   -43,   -43,   -43,   -43,     0,   -43,     0,   -43,
     -43,   -43,   -43,   -43,     0,   -43,   -43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -43,   -43,     0,
       0,     0,     0,     0,   -43,   -43,   -43,   -40,     0,   -40,
     -40,     0,   -40,   -40,   -40,   -40,   -40,     0,   -40,     0,
     -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -40,   -40,
       0,     0,     0,     0,     0,   -40,   -40,   -40,   -47,     0,
     -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,     0,   -47,
       0,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -47,
     -47,     0,     0,     0,     0,     0,   -47,   -47,   -47,   -39,
       0,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,     0,
     -39,     0,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -39,   -39,     0,     0,     0,     0,     0,   -39,   -39,   -39,
     -48,     0,   -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,
       0,   -48,     0,   -48,   -48,   -48,   -48,   -48,     0,   -48,
     -48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -48,   -48,     0,     0,     0,     0,     0,   -48,   -48,
     -48,   -56,     0,   -56,   -56,     0,   -56,   -56,   -56,   -56,
     -56,     0,   -56,     0,   -56,   -56,   -56,   -56,   -56,     0,
     -56,   -56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -56,   -56,     0,     0,     0,     0,     0,   -56,
     -56,   -56,   -54,     0,   -54,   -54,     0,   -54,   -54,   -54,
     -54,   -54,     0,   -54,     0,   -54,   -54,   -54,   -54,   -54,
       0,   -54,   -54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -54,   -54,     0,     0,     0,     0,     0,
     -54,   -54,   -54,   -57,     0,   -57,   -57,     0,   -57,   -57,
     -57,   -57,   -57,     0,   -57,     0,   -57,   -57,   -57,   -57,
     -57,     0,   -57,   -57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -57,   -57,     0,     0,     0,     0,
       0,   -57,   -57,   -57,   -55,     0,   -55,   -55,     0,   -55,
     -55,   -55,   -55,   -55,     0,   -55,     0,   -55,   -55,   -55,
     -55,   -55,     0,   -55,   -55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -55,   -55,     0,     0,     0,
       0,     0,   -55,   -55,   -55,   -58,     0,   -58,   -58,     0,
     -58,   -58,   -58,   -58,   -58,     0,   -58,     0,   -58,   -58,
     -58,   -58,   -58,     0,   -58,   -58,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -58,   -58,     0,     0,
       0,     0,     0,   -58,   -58,   -58,   -46,     0,   -46,   -46,
       0,   -46,   -46,   -46,   -46,   -46,     0,   -46,     0,   -46,
     -46,   -46,   -46,   -46,     0,   -46,   -46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -46,   -46,     0,
       0,     0,     0,     0,   -46,   -46,   -46,   -14,     0,   -14,
     -14,     0,   -14,   -14,   -14,   -14,   -14,     0,   -14,     0,
     -14,   -14,   -14,   -14,   -14,     0,   -14,   -14,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -14,   -14,
       0,     0,     0,     0,   -87,   -14,   -14,   -14,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -85,     0,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -79,     0,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -82,     0,     0,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -75,     0,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   283,
     284,   -75,   -75,   -75,   -78,     0,     0,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -81,     0,     0,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -84,     0,     0,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -80,     0,     0,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -88,     0,     0,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -89,     0,     0,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -91,     0,     0,     0,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -92,     0,     0,     0,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -93,     0,     0,     0,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -94,     0,     0,     0,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -90,     0,     0,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -83,     0,     0,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -73,     0,     0,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   283,
     284,   -73,   -73,   -73,   -74,     0,     0,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   283,
     284,   -74,   -74,   -74,   -76,     0,     0,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -77,     0,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -13,     0,     0,     0,   -13,   -13,
     -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,   -86,     0,     0,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -87,     0,     0,     0,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -85,     0,     0,     0,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -79,     0,     0,     0,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -82,     0,     0,     0,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -75,     0,     0,     0,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   261,
     262,   -75,   -75,   -75,   -78,     0,     0,     0,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -81,     0,     0,     0,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -84,     0,     0,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -80,     0,     0,     0,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -88,     0,     0,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -89,     0,     0,     0,     0,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -91,     0,     0,     0,     0,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -92,     0,     0,     0,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -93,     0,     0,     0,     0,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -94,     0,     0,     0,     0,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -90,     0,     0,     0,     0,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -83,     0,     0,     0,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -73,     0,     0,     0,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   261,
     262,   -73,   -73,   -73,   -74,     0,     0,     0,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   261,
     262,   -74,   -74,   -74,   -76,     0,     0,     0,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -77,     0,     0,     0,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -13,     0,     0,     0,     0,   -13,
     -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,   -72,     0,     0,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   281,   282,   -72,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   259,   260,     0,   -70,   -72,   -72,   -72,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,   -71,   278,   279,   280,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,     0,   -60,     0,   278,   279,
     280,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,
       0,   -69,     0,   256,   257,   258,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,     0,     0,   -70,     0,   256,   257,
     258,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,
       0,   -71,     0,   256,   257,   258,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,     0,     0,     0,   256,   257,
     258,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -85,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   102,   103,   -75,   -75,   -75,   -78,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -81,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -80,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -88,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -82,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -91,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -92,     0,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -93,
       0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -94,     0,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -90,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   102,
     103,   -73,   -73,   -73,   -74,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   102,   103,   -74,   -74,
     -74,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -13,     0,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   100,   101,   -61,     0,   -72,   -72,   -72,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -62,     0,     0,
       0,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -63,     0,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -64,     0,     0,     0,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -65,     0,     0,     0,
       0,   -65,   -65,   192,   193,   194,   195,   -65,   -65,   -66,
       0,     0,     0,     0,   -66,   -66,   192,   193,   194,   195,
     -66,   -66,   315,     0,     0,     0,     0,   190,   191,   192,
     193,   194,   195,   196,   197,   335,     0,     0,     0,     0,
     190,   191,   192,   193,   194,   195,   196,   197,   338,     0,
       0,     0,     0,   190,   191,   192,   193,   194,   195,   196,
     197,   340,     0,     0,     0,     0,   190,   191,   192,   193,
     194,   195,   196,   197,   -44,     0,     0,     0,     0,   190,
     191,   192,   193,   194,   195,   196,   197,   -62,     0,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -63,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -64,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -65,     0,   -65,
     -65,    91,    92,    93,    94,   -65,   -65,   -66,     0,   -66,
     -66,    91,    92,    93,    94,   -66,   -66,   -52,     0,    89,
      90,    91,    92,    93,    94,    95,    96,   303,     0,    89,
      90,    91,    92,    93,    94,    95,    96,   323,     0,    89,
      90,    91,    92,    93,    94,    95,    96
};

static const yytype_int16 yycheck[] =
{
       0,    48,     0,     7,   138,   305,     6,     0,     6,   249,
       0,    26,     9,    10,   314,    19,     0,    32,   138,    19,
     138,   139,     6,    23,    39,    40,    41,    42,    43,   138,
      73,   271,     7,    48,   138,    19,     9,    10,    85,    23,
     138,     7,   160,   138,     7,   138,    19,    22,    22,     0,
      24,    25,    26,    27,    28,    29,    30,    31,    73,     0,
       1,    76,    36,    37,    38,   333,   334,     7,     9,    10,
      85,    11,    87,    18,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
       7,     7,    18,    20,    11,   138,    22,     0,     1,     3,
       4,     7,     6,     7,    18,    11,     9,    10,    22,    19,
      19,     0,     1,    32,    18,    19,    21,    19,   161,    38,
       9,    10,    19,   138,   139,   140,    23,    19,    32,    33,
      18,    23,    18,   148,    18,    39,    40,    41,   138,    18,
     138,     0,     1,    18,    22,   160,   161,    20,    22,     7,
       9,    10,    21,    72,    19,    74,    75,    42,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    22,    87,    19,
      89,    90,    91,    92,    93,    94,    95,    96,    22,    42,
      19,    19,    19,    19,    19,   104,     0,     1,   203,   204,
     205,   206,   207,    21,     7,     9,    10,    22,    22,    22,
      22,   335,   336,    22,   219,   220,   221,   222,   223,   224,
     225,   226,    19,   228,    22,   335,   336,   335,   336,   138,
     354,   140,    19,    19,     7,    19,   335,   336,    18,   148,
      18,   335,   336,    18,   354,    22,   354,   335,   336,    18,
     335,   336,   335,   336,    18,   354,    22,    20,     0,     1,
     354,    19,   171,   296,   301,    22,   354,     9,    10,   354,
      42,   354,    19,   278,   279,   280,   281,   282,   283,   284,
      19,   190,   191,   192,   193,   194,   195,   196,   197,     0,
       1,   296,    19,   202,   299,    19,   301,    22,     9,    10,
     305,    21,   335,   336,    22,    22,    22,    22,     6,   314,
     219,   220,   221,   222,   223,   224,   225,   226,    19,   228,
      19,   354,   161,    23,     3,     4,     5,     6,     7,   148,
     335,   336,    -1,    38,    39,    40,    41,    42,    43,    18,
      -1,   296,    -1,    -1,    -1,   335,   336,   335,   336,   354,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,   354,    -1,   354,    72,    -1,    74,
      75,    -1,    -1,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,   295,    -1,   297,   298,
      36,    37,    38,    -1,    -1,   304,   305,   102,   103,   104,
      -1,     1,    -1,     3,     4,   314,     6,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    -1,    -1,    -1,   335,   336,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,   148,     1,   354,     3,     4,    -1,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,   171,   172,   173,   174,
     175,   176,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,   190,   191,   192,   193,   194,
     195,   196,   197,    38,    -1,    -1,    -1,   202,   203,   204,
     205,   206,   207,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,   219,   220,   221,   222,   223,   224,
     225,   226,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      75,     1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    18,    -1,
      20,   256,   257,   258,   259,   260,   261,   262,    -1,   104,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,   278,   279,   280,   281,   282,   283,   284,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
     295,    -1,   297,   298,    -1,    -1,    18,    -1,    -1,   304,
     305,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,   314,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,   171,   172,   173,   174,
     175,   176,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,   190,   191,   192,   193,   194,
     195,   196,   197,    38,    -1,    -1,    -1,   202,   203,   204,
     205,   206,   207,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,   219,   220,   221,   222,   223,   224,
     225,   226,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      75,     1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    18,    -1,
      20,   256,   257,   258,   259,   260,   261,   262,    -1,   104,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,   278,   279,   280,   281,   282,   283,   284,
      -1,     3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,
     295,    -1,   297,   298,    -1,    -1,    18,    19,    -1,   304,
     305,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,   314,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,   171,   172,   173,   174,
     175,   176,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,   190,   191,   192,   193,   194,
     195,   196,   197,    38,    -1,    -1,    -1,   202,   203,   204,
     205,   206,   207,    -1,    -1,    -1,    -1,     3,     4,    -1,
       6,     7,    -1,    -1,   219,   220,   221,   222,   223,   224,
     225,   226,    18,    -1,    -1,    -1,    22,    72,    -1,    74,
      75,     3,     4,     5,     6,     7,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    18,    -1,    -1,    -1,
      -1,   256,   257,   258,   259,   260,   261,   262,    -1,   104,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,   278,   279,   280,   281,   282,   283,   284,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
     295,    -1,   297,   298,    -1,    -1,    18,    -1,    -1,   304,
     305,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,   314,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,   171,   172,   173,   174,
     175,   176,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,   190,   191,   192,   193,   194,
     195,   196,   197,    38,    -1,    -1,    -1,   202,   203,   204,
     205,   206,   207,    -1,    -1,    -1,    -1,     3,     4,    -1,
       6,     7,    -1,    -1,   219,   220,   221,   222,   223,   224,
     225,   226,    18,    -1,    -1,    -1,    -1,    72,    -1,    74,
      75,     3,     4,    -1,     6,     7,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    18,    -1,    -1,    -1,
      -1,   256,   257,   258,   259,   260,   261,   262,    -1,   104,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,   278,   279,   280,   281,   282,   283,   284,
      -1,     3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,
     295,    -1,   297,   298,    -1,    -1,    18,    -1,    -1,   304,
     305,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,   314,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,   171,   172,   173,   174,
     175,   176,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,   190,   191,   192,   193,   194,
     195,   196,   197,    38,    -1,    -1,    -1,   202,   203,   204,
     205,   206,   207,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,   219,   220,   221,   222,   223,   224,
     225,   226,    -1,    -1,    -1,    -1,    -1,    72,    18,    74,
      75,    -1,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,   256,   257,   258,   259,   260,   261,   262,    19,   104,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,   278,   279,   280,   281,   282,   283,   284,
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
     295,    -1,   297,   298,    36,    37,    38,    -1,    -1,   304,
     305,    -1,    -1,   148,    -1,    18,    19,    -1,    -1,   314,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,   171,   172,   173,   174,
     175,   176,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,   190,   191,   192,   193,   194,
     195,   196,   197,    38,    -1,    -1,    -1,   202,   203,   204,
     205,   206,   207,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,   219,   220,   221,   222,   223,   224,
     225,   226,    -1,    -1,    -1,    18,    19,    72,    -1,    74,
      75,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,
      -1,   256,   257,   258,   259,   260,   261,   262,    19,   104,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,   278,   279,   280,   281,   282,   283,   284,
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
     295,    -1,   297,   298,    36,    37,    38,    -1,    -1,   304,
     305,    -1,    -1,   148,    -1,    -1,    19,    -1,    -1,   314,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,   171,   172,   173,   174,
     175,   176,    38,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,   190,   191,   192,   193,   194,
     195,   196,   197,    -1,    -1,    -1,    -1,   202,   203,   204,
     205,   206,   207,    -1,    -1,    -1,    72,    -1,    74,    75,
      -1,    -1,    -1,    -1,   219,   220,   221,   222,   223,   224,
     225,   226,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,   100,   101,    19,    -1,   104,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,   256,   257,   258,   259,   260,   261,   262,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,   278,   279,   280,   281,   282,   283,   284,
      -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     295,    -1,   297,   298,    -1,    -1,    -1,    -1,    -1,   304,
     305,    -1,    -1,    -1,    -1,   171,    19,    38,    -1,   314,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,   190,   191,   192,   193,   194,   195,
     196,   197,    -1,    -1,    -1,    -1,   202,    -1,    -1,    -1,
      19,    72,    -1,    74,    75,    24,    25,    26,    27,    28,
      29,    30,    31,   219,   220,   221,   222,   223,   224,   225,
     226,    -1,    -1,    -1,    -1,    -1,    97,    98,    99,     1,
      -1,     3,     4,   104,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    -1,    20,    21,
     256,   257,   258,   259,   260,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,   278,   279,   280,   281,   282,   148,    -1,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,   295,
      -1,   297,   298,    36,    37,    38,    38,    -1,   304,   305,
     171,    -1,    -1,    -1,    19,    -1,    -1,    -1,   314,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,   190,
     191,   192,   193,   194,   195,   196,   197,    -1,    -1,    19,
      72,   202,    74,    75,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,
     221,   222,   223,   224,   225,   226,    -1,    -1,     1,    -1,
       3,     4,   104,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,   256,   257,   258,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    19,   148,   278,   279,   280,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,   295,    -1,   297,   298,    -1,   171,
      19,    -1,    -1,   304,   305,    24,    25,    26,    27,    28,
      29,    30,    31,   314,    -1,    -1,    -1,    -1,   190,   191,
     192,   193,   194,   195,   196,   197,     1,    -1,     3,     4,
     202,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,   219,   220,   221,
     222,   223,   224,   225,   226,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    18,    39,    40,    41,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,   256,   257,   258,    42,    -1,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,   278,   279,   280,    42,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,   295,    -1,   297,   298,    36,    37,    38,
      -1,    -1,   304,   305,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,   314,     6,     7,     8,     9,    10,    -1,    12,
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
      -1,    -1,    -1,    -1,    19,    39,    40,    41,    23,    24,
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
      35,    36,    37,    38,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    19,
      -1,    36,    37,    38,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    19,    36,    37,    38,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    19,    36,    37,    38,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,    19,    -1,    36,    37,
      38,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    19,    -1,    36,    37,    38,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,    19,    -1,    36,    37,
      38,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    19,    -1,    36,    37,    38,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    36,    37,
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
      30,    31,    32,    33,    19,    -1,    36,    37,    38,    24,
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
      31,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     9,    10,    44,    45,    46,    47,    52,    53,
      54,    55,    56,     0,    45,    22,    48,     7,    11,    18,
      53,    57,    58,    23,    19,    58,    20,     1,     3,     4,
       6,     7,     8,    12,    14,    15,    16,    17,    18,    32,
      33,    39,    40,    41,    49,    52,    53,    61,    62,    63,
      64,    65,    66,    67,    68,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    22,    18,
      74,    75,    18,    18,    18,    18,    18,    75,    79,    79,
      79,    79,    79,    21,    61,    20,    22,    42,    22,    24,
      25,    26,    27,    28,    29,    30,    31,    36,    37,    38,
      32,    33,    34,    35,    50,    22,    75,     7,    65,    69,
      70,    74,     5,    75,     5,    75,    74,    19,    61,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    76,    76,
      76,    78,    78,    79,    79,    59,    60,    75,    19,    19,
      22,    19,    19,    19,    19,    19,    21,    51,    23,    62,
      62,    71,    75,    22,    22,    22,    22,    22,    19,    60,
      13,    22,    62,    70,    54,    54,     7,     3,     4,     6,
       7,    18,    32,    33,    39,    40,    41,    49,    74,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    22,     7,
      24,    25,    26,    27,    28,    29,    30,    31,     3,     4,
       6,     7,    18,    32,    33,    39,    40,    41,    49,    74,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    24,
      25,    26,    27,    28,    29,    30,    31,     1,     8,    12,
      14,    15,    16,    17,    52,    53,    63,    64,    65,    66,
      67,    68,    72,    73,    75,    65,    74,     7,     7,    18,
      75,    79,    79,    79,    79,    79,    36,    37,    38,    32,
      33,    34,    35,    75,    75,    75,    75,    75,    75,    75,
      75,    18,    75,    79,    79,    79,    79,    79,    36,    37,
      38,    32,    33,    34,    35,    75,    75,    75,    75,    75,
      75,    75,    75,    22,    75,    18,    18,    18,    18,    18,
      22,    20,    22,    22,    42,    50,    19,    76,    76,    76,
      78,    78,    79,    79,    50,    19,    76,    76,    76,    78,
      78,    79,    79,    22,    75,    69,     5,    75,     5,    75,
      74,    61,    75,    59,    59,    19,    19,    19,    19,    19,
      19,    19,    21,    51,    51,    62,    62,    22,    22,    22,
      22,    22,    19,    19,    13,    62
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    45,    45,    46,    46,    46,    48,
      47,    50,    51,    49,    52,    53,    54,    54,    55,    56,
      56,    57,    57,    58,    58,    59,    59,    60,    60,    61,
      61,    62,    62,    62,    62,    62,    62,    62,    63,    62,
      62,    62,    62,    64,    65,    66,    66,    67,    68,    69,
      70,    70,    71,    71,    72,    72,    72,    72,    73,    74,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    76,
      76,    76,    76,    77,    77,    77,    78,    78,    78,    79,
      79,    79,    79,    79,    80,    80,    81,    81,    82,    82,
      82,    83,    83,    84,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     0,
       8,     0,     0,     6,     2,     2,     1,     1,     2,     1,
       1,     1,     0,     3,     1,     1,     0,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       2,     2,     1,     2,     3,     5,     7,     3,     5,     5,
       1,     0,     1,     0,     5,     5,     5,     5,     5,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     2
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
#line 149 "src/syn.y"
                   {
      root = (yyval.node);
      root = create_node(PROGRAM);
      add_tree_node(root, (yyvsp[0].node));
    }
#line 2875 "src/syn.tab.c"
    break;

  case 3: /* program: %empty  */
#line 154 "src/syn.y"
           {
      (yyval.node) = create_node(PROGRAM);
    }
#line 2883 "src/syn.tab.c"
    break;

  case 4: /* lst_declarations: declaration lst_declarations  */
#line 160 "src/syn.y"
                                {
      (yyval.node) = create_node(LIST_DECLARATIONS);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 2893 "src/syn.tab.c"
    break;

  case 5: /* lst_declarations: declaration  */
#line 165 "src/syn.y"
                 {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(LIST_DECLARATIONS);
      // add_tree_node($$, $1);
    }
#line 2903 "src/syn.tab.c"
    break;

  case 6: /* declaration: func_declaration  */
#line 173 "src/syn.y"
                   {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(DECLARATION);
      // add_tree_node($$, $1);
    }
#line 2913 "src/syn.tab.c"
    break;

  case 7: /* declaration: var_declaration  */
#line 178 "src/syn.y"
                    {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(DECLARATION);
      // add_tree_node($$, $1);
    }
#line 2923 "src/syn.tab.c"
    break;

  case 8: /* declaration: error  */
#line 183 "src/syn.y"
          {
      yyerrok;
      (yyval.node) = create_node(DECLARATION); 
      syntax_errors++;
    }
#line 2933 "src/syn.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 191 "src/syn.y"
                  {strcpy(return_function, curr_type); increment_scope(); strcpy(func_name, (yyvsp[0].node)->children->sibilings->child->token.lexeme);}
#line 2939 "src/syn.tab.c"
    break;

  case 10: /* func_declaration: unq_declaration $@1 '(' parameters ')' '{' block_commands '}'  */
#line 191 "src/syn.y"
                                                                                                                                                                                      {
      (yyval.node) = create_node(FUNCTION_DECLARATION);    
      add_tree_node((yyval.node), (yyvsp[-7].node));
      add_tree_node((yyval.node), (yyvsp[-4].node));
      add_tree_node((yyval.node), (yyvsp[-1].node));
      set_F_table((yyvsp[-7].node)->children->sibilings->child);
    }
#line 2951 "src/syn.tab.c"
    break;

  case 11: /* $@2: %empty  */
#line 201 "src/syn.y"
          {calling_params_counter = 0;}
#line 2957 "src/syn.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 201 "src/syn.y"
                                                           {verify_amount_params((yyvsp[0].node), &(yyvsp[-3].token));}
#line 2963 "src/syn.tab.c"
    break;

  case 13: /* func_calling: ID '(' $@2 calling_parameters $@3 ')'  */
#line 201 "src/syn.y"
                                                                                                 {
      (yyval.node) = create_node(FUNCTION_CALLING);
      add_tree_operation_leaf((yyval.node), &(yyvsp[-5].token), IDENTIFIER, verify_existing_function(&(yyvsp[-5].token)));
      add_tree_node((yyval.node), (yyvsp[-2].node));
      strcpy((yyvsp[-5].token).type, verify_existing_function(&(yyvsp[-5].token)));
    }
#line 2974 "src/syn.tab.c"
    break;

  case 14: /* var_declaration: unq_declaration ';'  */
#line 210 "src/syn.y"
                      {
      // $$ = create_node(VARIABLE_DECLARATION);
      (yyval.node) = (yyvsp[-1].node);
      // add_tree_node($$, $1);
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 2985 "src/syn.tab.c"
    break;

  case 15: /* unq_declaration: type ID  */
#line 219 "src/syn.y"
          {
      (yyval.node) = create_node(UNIQUE_DECLARATION);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[0].token), IDENTIFIER, curr_type);
      add_table_node((yyvsp[0].token).lexeme, (yyvsp[-1].node), idx);
      strcpy((yyvsp[-1].node)->type, get_type((yyvsp[-1].node), idx));
      strcpy((yyvsp[-1].node)->children->child->type, curr_type);
      idx++;
    }
#line 2999 "src/syn.tab.c"
    break;

  case 16: /* type: type_lst  */
#line 231 "src/syn.y"
            {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3007 "src/syn.tab.c"
    break;

  case 17: /* type: type_number  */
#line 234 "src/syn.y"
                 {
    (yyval.node) = (yyvsp[0].node);
    }
#line 3015 "src/syn.tab.c"
    break;

  case 18: /* type_lst: type_number T_LIST  */
#line 240 "src/syn.y"
                       {
      (yyval.node) = create_node(TYPE_LIST);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_token_node((yyval.node), &(yyvsp[0].token), LIST);
    }
#line 3025 "src/syn.tab.c"
    break;

  case 19: /* type_number: T_INT  */
#line 248 "src/syn.y"
        {
      (yyval.node) = create_node(TYPE_NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), INT);
    }
#line 3034 "src/syn.tab.c"
    break;

  case 20: /* type_number: T_FLOAT  */
#line 252 "src/syn.y"
            {
      (yyval.node) = create_node(TYPE_NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), FLOAT);
    }
#line 3043 "src/syn.tab.c"
    break;

  case 21: /* parameters: lst_parameters  */
#line 259 "src/syn.y"
                 {
      (yyval.node) = (yyvsp[0].node);
      
      // $$ = create_node(PARAMETERS);
      // add_tree_node($$, $1);
    }
#line 3054 "src/syn.tab.c"
    break;

  case 22: /* parameters: %empty  */
#line 265 "src/syn.y"
           {
      (yyval.node) = create_node(PARAMETERS);
    }
#line 3062 "src/syn.tab.c"
    break;

  case 23: /* lst_parameters: unq_declaration ',' lst_parameters  */
#line 271 "src/syn.y"
                                      {
      (yyval.node) = create_node(LIST_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$2, COMMA);
      add_tree_node((yyval.node), (yyvsp[0].node));

      set_P_table((yyvsp[-2].node));
      set_amount_params(func_name, get_amount_params((yyvsp[-2].node)));
    }
#line 3076 "src/syn.tab.c"
    break;

  case 24: /* lst_parameters: unq_declaration  */
#line 280 "src/syn.y"
                    {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(LIST_PARAMETERS);
      // add_tree_node($$, $1);

      set_P_table((yyvsp[0].node));
      set_amount_params(func_name, get_amount_params((yyvsp[0].node)));
    }
#line 3089 "src/syn.tab.c"
    break;

  case 25: /* calling_parameters: lst_calling_parameters  */
#line 291 "src/syn.y"
                         {
      (yyval.node) = create_node(CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3098 "src/syn.tab.c"
    break;

  case 26: /* calling_parameters: %empty  */
#line 295 "src/syn.y"
           {
      (yyval.node) = create_node(CALLING_PARAMETERS);
    }
#line 3106 "src/syn.tab.c"
    break;

  case 27: /* lst_calling_parameters: operation ',' lst_calling_parameters  */
#line 301 "src/syn.y"
                                       {
      (yyval.node) = create_node(LIST_CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$2, COMMA);
      add_tree_node((yyval.node), (yyvsp[0].node));
      calling_params_counter += 1;
    }
#line 3118 "src/syn.tab.c"
    break;

  case 28: /* lst_calling_parameters: operation  */
#line 308 "src/syn.y"
              {
      (yyval.node) = create_node(LIST_CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[0].node));
      calling_params_counter += 1;
    }
#line 3128 "src/syn.tab.c"
    break;

  case 29: /* block_commands: command block_commands  */
#line 316 "src/syn.y"
                          {
      (yyval.node) = create_node(BLOCK_COMMANDS);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3138 "src/syn.tab.c"
    break;

  case 30: /* block_commands: command  */
#line 321 "src/syn.y"
            {
    (yyval.node) = (yyvsp[0].node);
  }
#line 3146 "src/syn.tab.c"
    break;

  case 31: /* command: var_declaration  */
#line 327 "src/syn.y"
                  {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3156 "src/syn.tab.c"
    break;

  case 32: /* command: init_variable  */
#line 332 "src/syn.y"
                  {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3166 "src/syn.tab.c"
    break;

  case 33: /* command: conditional_stmt  */
#line 337 "src/syn.y"
                     {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3176 "src/syn.tab.c"
    break;

  case 34: /* command: return_stmt  */
#line 342 "src/syn.y"
                {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3186 "src/syn.tab.c"
    break;

  case 35: /* command: iteration  */
#line 347 "src/syn.y"
              {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3194 "src/syn.tab.c"
    break;

  case 36: /* command: output  */
#line 350 "src/syn.y"
           {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3202 "src/syn.tab.c"
    break;

  case 37: /* command: input  */
#line 353 "src/syn.y"
          {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3210 "src/syn.tab.c"
    break;

  case 38: /* $@4: %empty  */
#line 356 "src/syn.y"
    {increment_scope();}
#line 3216 "src/syn.tab.c"
    break;

  case 39: /* command: $@4 '{' block_commands '}'  */
#line 356 "src/syn.y"
                                                {
      (yyval.node) = create_node(COMMAND);
      // add_tree_token_node($$, &$2, OPEN_CURLY_BRACKET);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$4, CLOSE_CURLY_BRACKET);
    }
#line 3227 "src/syn.tab.c"
    break;

  case 40: /* command: operation ';'  */
#line 362 "src/syn.y"
                  { 
      (yyval.node) = create_node(COMMAND);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 3237 "src/syn.tab.c"
    break;

  case 41: /* command: error ';'  */
#line 368 "src/syn.y"
              {
      yyerrok;
      (yyval.node) = create_node(COMMAND); 
      syntax_errors++;
    }
#line 3247 "src/syn.tab.c"
    break;

  case 42: /* command: error  */
#line 373 "src/syn.y"
          {
      yyerrok;
      (yyval.node) = create_node(COMMAND); 
      syntax_errors++;
    }
#line 3257 "src/syn.tab.c"
    break;

  case 43: /* init_variable: init_stmt ';'  */
#line 381 "src/syn.y"
                {
      (yyval.node) = create_node(INIT_VARIABLE);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 3267 "src/syn.tab.c"
    break;

  case 44: /* init_stmt: iden '=' operation  */
#line 389 "src/syn.y"
                      {
      (yyval.node) = create_node(INIT_STMT);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), ASSIGN, verify_existing_variable(&(yyvsp[-2].node)->token));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3278 "src/syn.tab.c"
    break;

  case 45: /* conditional_stmt: IF_STMT '(' operation ')' command  */
#line 398 "src/syn.y"
                                                  {
      (yyval.node) = create_node(CONDITIONAL_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), IF);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3291 "src/syn.tab.c"
    break;

  case 46: /* conditional_stmt: IF_STMT '(' operation ')' command ELSE_STMT command  */
#line 406 "src/syn.y"
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
#line 3306 "src/syn.tab.c"
    break;

  case 47: /* return_stmt: RETURN_STM operation ';'  */
#line 419 "src/syn.y"
                            {
      (yyval.node) = create_node(RETURN_STMT);
      add_tree_operation_leaf((yyval.node), &(yyvsp[-2].token), RETURN, return_function);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      strcpy((yyvsp[-1].node)->type, (yyvsp[-1].node)->children->child->type);
      if(strcmp((yyvsp[-1].node)->type, return_function) != 0) {
        printf(BHRED "SEMANTIC ERROR (line: %d, column: %d): Type passed in the return is different from the expected type for the function return! Type passed: %s, expected: %s\n" reset, (yyvsp[-2].token).line, (yyvsp[-2].token).column+7, (yyvsp[-1].node)->type, return_function);
        semantic_errors++;
      }
    }
#line 3321 "src/syn.tab.c"
    break;

  case 48: /* iteration: FOR_STMT '(' loop_condition ')' command  */
#line 432 "src/syn.y"
                                          {
      (yyval.node) = create_node(ITERATION_PROCESS);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), FOR);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3334 "src/syn.tab.c"
    break;

  case 49: /* loop_condition: update_stmt ';' stop_stmt ';' update_stmt  */
#line 443 "src/syn.y"
                                            {
      (yyval.node) = create_node(LOOP_CONDITION);
      add_tree_node((yyval.node), (yyvsp[-4].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, SEMICOLON);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3347 "src/syn.tab.c"
    break;

  case 50: /* update_stmt: init_stmt  */
#line 454 "src/syn.y"
            {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(UPDATE_STMT);
      // add_tree_node($$, $1);
    }
#line 3357 "src/syn.tab.c"
    break;

  case 51: /* update_stmt: %empty  */
#line 459 "src/syn.y"
           {
      (yyval.node) = create_node(UPDATE_STMT);
    }
#line 3365 "src/syn.tab.c"
    break;

  case 52: /* stop_stmt: operation  */
#line 465 "src/syn.y"
            {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(STOP_STMT);
      // add_tree_node($$, $1);
    }
#line 3375 "src/syn.tab.c"
    break;

  case 53: /* stop_stmt: %empty  */
#line 470 "src/syn.y"
           {
      (yyval.node) = create_node(STOP_STMT);
    }
#line 3383 "src/syn.tab.c"
    break;

  case 54: /* output: OUTPUT_WRITE '(' operation ')' ';'  */
#line 476 "src/syn.y"
                                      {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITE);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3396 "src/syn.tab.c"
    break;

  case 55: /* output: OUTPUT_WRITELN '(' operation ')' ';'  */
#line 484 "src/syn.y"
                                         {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITELN);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3409 "src/syn.tab.c"
    break;

  case 56: /* output: OUTPUT_WRITE '(' STRING ')' ';'  */
#line 492 "src/syn.y"
                                    {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITELN);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), STRING);
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3422 "src/syn.tab.c"
    break;

  case 57: /* output: OUTPUT_WRITELN '(' STRING ')' ';'  */
#line 500 "src/syn.y"
                                      {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITELN);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), STRING);
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3435 "src/syn.tab.c"
    break;

  case 58: /* input: INPUT_READ '(' iden ')' ';'  */
#line 511 "src/syn.y"
                              {
      (yyval.node) = create_node(INPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), READ);
      add_tree_node((yyval.node), (yyvsp[-2].node));
    }
#line 3445 "src/syn.tab.c"
    break;

  case 59: /* iden: ID  */
#line 519 "src/syn.y"
     {
      (yyval.node) = create_node(IDEN);
      add_tree_operation_leaf((yyval.node), &(yyvsp[0].token), IDENTIFIER, verify_existing_variable(&(yyvsp[0].token)));
      if(get_scope_from_table(&(yyvsp[0].token)) != (yyvsp[0].token).scope){
        printf(BHRED "SEMANTIC ERROR (line: %d, column: %d): Variable <%s> is being used in the wrong scope! \n" reset, (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).lexeme);
        semantic_errors++;
      }  
    }
#line 3458 "src/syn.tab.c"
    break;

  case 60: /* operation: lst_binary  */
#line 530 "src/syn.y"
             {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(OPERATION);
      // add_tree_node($$, $1);
    }
#line 3468 "src/syn.tab.c"
    break;

  case 61: /* operation: operation GREATER operation  */
#line 535 "src/syn.y"
                                 {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), GT_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3479 "src/syn.tab.c"
    break;

  case 62: /* operation: operation GREATER_EQ operation  */
#line 541 "src/syn.y"
                                    {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), GE_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3490 "src/syn.tab.c"
    break;

  case 63: /* operation: operation LESS operation  */
#line 547 "src/syn.y"
                              {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), LT_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3501 "src/syn.tab.c"
    break;

  case 64: /* operation: operation LESS_EQ operation  */
#line 553 "src/syn.y"
                                 {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), LE_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3512 "src/syn.tab.c"
    break;

  case 65: /* operation: operation EQUAL operation  */
#line 559 "src/syn.y"
                               {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), EQ_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3523 "src/syn.tab.c"
    break;

  case 66: /* operation: operation NOT_EQ operation  */
#line 565 "src/syn.y"
                                {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), NE_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3534 "src/syn.tab.c"
    break;

  case 67: /* operation: operation AND operation  */
#line 571 "src/syn.y"
                            {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), AND_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3545 "src/syn.tab.c"
    break;

  case 68: /* operation: operation OR operation  */
#line 577 "src/syn.y"
                           {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), OR_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3556 "src/syn.tab.c"
    break;

  case 69: /* lst_binary: lst_binary FILTER lst_binary  */
#line 586 "src/syn.y"
                               {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), FILTER_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3567 "src/syn.tab.c"
    break;

  case 70: /* lst_binary: lst_binary MAP lst_binary  */
#line 592 "src/syn.y"
                              {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MAP_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3578 "src/syn.tab.c"
    break;

  case 71: /* lst_binary: lst_binary ':' lst_binary  */
#line 598 "src/syn.y"
                              {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), CONSTRUCTOR_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3589 "src/syn.tab.c"
    break;

  case 72: /* lst_binary: arith_binary  */
#line 604 "src/syn.y"
                 {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(OPERATION);
      // add_tree_node($$, $1);
    }
#line 3599 "src/syn.tab.c"
    break;

  case 73: /* arith_binary: arith_binary '+' term  */
#line 612 "src/syn.y"
                        {
      (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), ADD_OP, type_check_num((yyvsp[-2].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      add_tree_node((yyval.node), (yyvsp[0].node));
      strcpy((yyval.node)->type, (yyvsp[-2].node)->type);
    }
#line 3611 "src/syn.tab.c"
    break;

  case 74: /* arith_binary: arith_binary '-' term  */
#line 619 "src/syn.y"
                          {
      (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), MINUS_OP, type_check_num((yyvsp[-2].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      add_tree_node((yyval.node), (yyvsp[0].node));
      strcpy((yyval.node)->type, (yyvsp[-2].node)->type);
    }
#line 3623 "src/syn.tab.c"
    break;

  case 75: /* arith_binary: term  */
#line 626 "src/syn.y"
         {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(ARITHMETIC_BINARY);
      // add_tree_node($$, $1);
    }
#line 3633 "src/syn.tab.c"
    break;

  case 76: /* term: term '*' expression  */
#line 634 "src/syn.y"
                      {
      (yyval.node) = create_node(TERM);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), MULTIPLY_OP, type_check_num((yyvsp[-2].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      add_tree_node((yyval.node), (yyvsp[0].node));
      strcpy((yyval.node)->type, (yyvsp[-2].node)->type);
    }
#line 3645 "src/syn.tab.c"
    break;

  case 77: /* term: term '/' expression  */
#line 641 "src/syn.y"
                        {
      (yyval.node) = create_node(TERM);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), DIVISION_OP, type_check_num((yyvsp[-2].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      add_tree_node((yyval.node), (yyvsp[0].node));
      strcpy((yyval.node)->type, (yyvsp[-2].node)->type);
    }
#line 3657 "src/syn.tab.c"
    break;

  case 78: /* term: expression  */
#line 648 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(TERM);
      // add_tree_node($$, $1);
    }
#line 3667 "src/syn.tab.c"
    break;

  case 79: /* expression: func_calling  */
#line 656 "src/syn.y"
               {
    (yyval.node) = (yyvsp[0].node);
    }
#line 3675 "src/syn.tab.c"
    break;

  case 80: /* expression: single_operation  */
#line 659 "src/syn.y"
                     {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3683 "src/syn.tab.c"
    break;

  case 81: /* expression: const  */
#line 662 "src/syn.y"
          {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3691 "src/syn.tab.c"
    break;

  case 82: /* expression: iden  */
#line 665 "src/syn.y"
         {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3699 "src/syn.tab.c"
    break;

  case 83: /* expression: '(' operation ')'  */
#line 668 "src/syn.y"
                      {
    (yyval.node) = (yyvsp[-1].node);
  }
#line 3707 "src/syn.tab.c"
    break;

  case 84: /* const: number  */
#line 673 "src/syn.y"
         {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3715 "src/syn.tab.c"
    break;

  case 85: /* const: NIL_CNST  */
#line 676 "src/syn.y"
             {
      (yyval.node) = create_node(CONSTANT);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NIL);
    }
#line 3724 "src/syn.tab.c"
    break;

  case 86: /* number: NUM_INT  */
#line 683 "src/syn.y"
          {
      (yyval.node) = create_node(NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NUMBER_INT);
    }
#line 3733 "src/syn.tab.c"
    break;

  case 87: /* number: NUM_FLOAT  */
#line 687 "src/syn.y"
              {
      (yyval.node) = create_node(NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NUMBER_FLOAT);
    }
#line 3742 "src/syn.tab.c"
    break;

  case 88: /* single_operation: arith_single  */
#line 694 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(SINGLE_OPERATION);
      // add_tree_node($$, $1);
    }
#line 3752 "src/syn.tab.c"
    break;

  case 89: /* single_operation: lst_single  */
#line 699 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(SINGLE_OPERATION);
      // add_tree_node($$, $1);
    }
#line 3762 "src/syn.tab.c"
    break;

  case 90: /* single_operation: '!' expression  */
#line 704 "src/syn.y"
                   {
    (yyval.node) = create_node(SINGLE_OPERATION);
    add_tree_token_node((yyval.node), &(yyvsp[-1].token), NOT_OR_TAIL);
    add_tree_node((yyval.node), (yyvsp[0].node));
  }
#line 3772 "src/syn.tab.c"
    break;

  case 91: /* arith_single: '+' expression  */
#line 712 "src/syn.y"
                 {
      (yyval.node) = create_node(ARITHMETIC_SINGLE);
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), ADD_OP, type_check_num((yyvsp[0].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      add_tree_node((yyval.node), (yyvsp[0].node));
      strcpy((yyval.node)->type, (yyvsp[0].node)->type);
    }
#line 3783 "src/syn.tab.c"
    break;

  case 92: /* arith_single: '-' expression  */
#line 718 "src/syn.y"
                   {
      (yyval.node) = create_node(ARITHMETIC_SINGLE);
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), MINUS_OP, type_check_num((yyvsp[0].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      add_tree_node((yyval.node), (yyvsp[0].node));
      strcpy((yyval.node)->type, (yyvsp[0].node)->type);
    }
#line 3794 "src/syn.tab.c"
    break;

  case 93: /* lst_single: '%' expression  */
#line 727 "src/syn.y"
                 {
      (yyval.node) = create_node(LIST_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), POP_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3804 "src/syn.tab.c"
    break;

  case 94: /* lst_single: '?' expression  */
#line 732 "src/syn.y"
                   {
      (yyval.node) = create_node(LIST_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), HEAD_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3814 "src/syn.tab.c"
    break;


#line 3818 "src/syn.tab.c"

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

#line 739 "src/syn.y"

//********** C Functions **********
int yyerror(const char *s) {
  fprintf(stderr, BHRED "SYNTAX ERROR   (line: %d, column: %d): %s " reset "\n", yylineno, column-yyleng, s);
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
    printf("\n");
    yyparse();
  }
  else
    yyin = stdin;
  

  // print_ast_tree();
  print_annotated_tree();
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
