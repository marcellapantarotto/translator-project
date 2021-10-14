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

#line 89 "src/syn.tab.c"

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
  YYSYMBOL_59_4 = 59,                      /* $@4  */
  YYSYMBOL_60_5 = 60,                      /* $@5  */
  YYSYMBOL_calling_parameters = 61,        /* calling_parameters  */
  YYSYMBOL_lst_calling_parameters = 62,    /* lst_calling_parameters  */
  YYSYMBOL_block_commands = 63,            /* block_commands  */
  YYSYMBOL_command = 64,                   /* command  */
  YYSYMBOL_65_6 = 65,                      /* $@6  */
  YYSYMBOL_init_variable = 66,             /* init_variable  */
  YYSYMBOL_init_stmt = 67,                 /* init_stmt  */
  YYSYMBOL_conditional_stmt = 68,          /* conditional_stmt  */
  YYSYMBOL_return_stmt = 69,               /* return_stmt  */
  YYSYMBOL_iteration = 70,                 /* iteration  */
  YYSYMBOL_loop_condition = 71,            /* loop_condition  */
  YYSYMBOL_update_stmt = 72,               /* update_stmt  */
  YYSYMBOL_stop_stmt = 73,                 /* stop_stmt  */
  YYSYMBOL_output = 74,                    /* output  */
  YYSYMBOL_input = 75,                     /* input  */
  YYSYMBOL_iden = 76,                      /* iden  */
  YYSYMBOL_operation = 77,                 /* operation  */
  YYSYMBOL_lst_binary = 78,                /* lst_binary  */
  YYSYMBOL_arith_binary = 79,              /* arith_binary  */
  YYSYMBOL_term = 80,                      /* term  */
  YYSYMBOL_expression = 81,                /* expression  */
  YYSYMBOL_const = 82,                     /* const  */
  YYSYMBOL_number = 83,                    /* number  */
  YYSYMBOL_single_operation = 84,          /* single_operation  */
  YYSYMBOL_arith_single = 85,              /* arith_single  */
  YYSYMBOL_lst_single = 86                 /* lst_single  */
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
#define YYLAST   5244

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  358

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
       0,   147,   147,   152,   158,   163,   171,   176,   181,   189,
     189,   201,   201,   201,   209,   215,   227,   230,   236,   244,
     248,   255,   261,   267,   267,   276,   276,   285,   289,   295,
     308,   323,   328,   334,   339,   344,   349,   354,   357,   360,
     363,   363,   369,   375,   380,   388,   396,   405,   413,   426,
     441,   450,   459,   462,   468,   471,   477,   482,   487,   493,
     502,   510,   521,   526,   533,   540,   547,   554,   561,   568,
     574,   583,   589,   595,   601,   609,   616,   623,   629,   636,
     643,   649,   652,   655,   658,   661,   667,   670,   677,   681,
     688,   691,   694,   702,   708,   717,   722
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
  "parameters", "lst_parameters", "$@4", "$@5", "calling_parameters",
  "lst_calling_parameters", "block_commands", "command", "$@6",
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

#define YYPACT_NINF (-299)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-97)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     189,   217,    10,    86,    42,    94,   236,   282,   334,    92,
       3,    69,   106,  -299,    96,   421,   100,    97,   113,     5,
     110,   116,   120,   122,   124,   121,   128,   523,   133,   436,
    4578,  4595,  4612,  1868,   977,   107,   135,   136,   137,   142,
    1001,   977,   977,   977,   977,   977,  4629,  2739,   148,   151,
    2780,   161,  2821,   160,  2862,  2903,  2944,  2985,  3026,  1890,
      41,  1191,  4969,  4646,  4663,  4680,  4697,  4714,  4731,  4748,
    3067,   105,  4765,   603,  1001,     4,   314,   571,   176,  1574,
    4782,  4799,  4816,  4833,  4850,   487,   163,   523,  3108,   977,
    3149,   977,   977,   977,   977,   977,   977,   977,   977,   977,
     977,   977,   977,   977,   977,   977,   731,  3190,  1779,   143,
     164,   168,   174,   155,   187,  1804,   196,  5001,   201,  4867,
     204,   634,   763,   923,  1083,  1114,  1243,  1274,  1404,  1453,
    1351,  1650,  4986,  4884,  4901,  4918,  4935,   209,   212,    76,
     683,   523,   817,   211,   222,   225,   227,   228,  3231,   232,
    1051,  1621,  3272,   230,  5193,  3313,  3354,  3395,  3436,  3477,
    4952,   239,   523,    55,  3518,   241,   255,   256,    22,   340,
    3998,  4018,  1140,  1001,  1001,  1001,  1001,  1001,  1001,  4038,
    4058,  4516,  4453,  4078,  4098,  4118,  4138,  4158,  4178,  4198,
    3559,   245,  1001,  1001,  1001,  1001,  1001,  1001,  1001,  1001,
    1302,  1380,  3578,  1220,  1001,  1051,  1051,  1051,  1051,  1051,
    3598,  3618,  1914,  4438,  3638,  3658,  3678,  3698,  3718,  3738,
    3758,  1051,  1051,  1051,  1051,  1051,  1051,  1051,  1051,   393,
     977,   247,   267,   270,   272,   276,  1750,   251,   277,  1848,
     278,  1960,  2001,  2042,  2083,  2124,  5203,   279,   257,   111,
     289,   105,  5014,  4218,  4238,  4258,  4278,  4298,  1001,  1001,
    1001,  1001,  1001,  1001,  1001,  5027,  5040,  5053,  5066,  5079,
    5092,  5105,  5118,   105,  5131,  3778,  3798,  3818,  3838,  3858,
    1051,  1051,  1051,  1051,  1051,  1051,  1051,   138,  1172,  1332,
    1470,  1492,  1540,  1679,  1708,  2165,  5213,  1001,     4,   841,
     891,   176,  2206,   523,  2247,  2288,  1001,   731,  4318,  4531,
    4546,  4561,  4338,  4358,  4378,  4398,   731,  3878,  4469,  4485,
    4501,  3898,  3918,  3938,  3958,  2329,  5144,   294,   296,  5157,
     297,  5170,   303,   280,  5183,   209,   209,   683,   683,   311,
     319,   323,   326,   327,  2370,   306,   317,  2411,  2452,  2493,
    2534,  2575,  2616,  2657,  4418,  3978,   683,  2698
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
       0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -299,  -299,   344,  -299,  -299,  -299,   446,  -239,  -185,     2,
       0,    16,  -299,  -299,  -299,   328,  -299,  -299,  -298,   202,
     -49,  -137,  -135,  -133,   -42,  -108,  -103,   -99,    59,   198,
    -299,   -97,   -95,   -14,    82,  1520,  1649,  1385,   286,   606,
     766,   926,  1086,  1246
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,     7,    16,    46,   106,   149,    47,
      48,   167,    11,    12,    21,    22,    28,    24,   137,   138,
      49,    50,    51,    52,    53,    54,    55,    56,   111,   112,
     153,    57,    58,   180,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    86,     8,   151,   152,   238,     9,   239,     8,   335,
      17,   109,   307,    59,     2,     3,    10,   -19,   336,    20,
      72,   -19,    10,    20,   -22,   164,   -53,    72,    72,    72,
      72,    72,   241,   110,   316,   166,    59,   242,   120,   166,
      71,   243,    13,   244,   -61,   245,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   113,   109,    90,   118,    91,    92,    93,    94,    95,
      96,    97,    98,    59,   -53,    72,   -16,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,   211,   -20,    -2,   -30,    -4,   -20,   240,   150,
     221,   222,   223,   224,   225,   226,   227,   228,   -11,   -11,
      -9,   -11,   -11,   -17,    15,   -15,    73,    18,    19,   -15,
     -18,   247,    79,   -11,   -11,    74,    59,    59,    72,   -25,
     -15,     2,     3,    23,   -15,    25,   211,   -11,   -11,   -21,
     237,    27,   236,   -26,   -11,   -11,   -11,   -23,    59,   248,
     345,   346,   -24,    75,    76,    77,   108,   -69,   115,   117,
      78,   -69,   -69,   -69,   223,   224,   225,   226,   227,   228,
     190,   121,    85,   122,   123,   124,   125,   126,   127,   128,
     129,    87,    88,   191,   -31,   -61,   -52,   141,   139,    -3,
       1,   211,   211,   211,   211,   211,   142,    89,     2,     3,
     347,   348,   238,   238,   239,   239,   143,   211,   211,   211,
     211,   211,   211,   211,   211,   145,    72,    -8,    -8,   357,
     147,   238,   246,   239,   154,   148,    -8,    -8,   -12,   241,
     241,   -27,   139,   155,   242,   242,    -5,     1,   243,   243,
     244,   244,   245,   245,   156,     2,     3,   157,   241,   158,
     159,   160,   163,   242,   333,   252,   110,   243,   -29,   244,
     -51,   245,   249,   250,   -61,   297,   211,   211,   211,   211,
     211,   211,   211,   302,   265,   266,   267,   268,   269,   270,
     271,   272,    -6,    -6,   113,   298,   274,   332,   299,    59,
     300,    -6,    -6,   211,   301,   240,   240,   303,   -52,   306,
     304,   344,   211,   287,   288,   289,   290,   291,   292,   293,
     294,   -15,   296,   338,   240,   339,   341,   169,   170,   114,
     171,   172,   343,    59,    59,   354,   184,    80,    81,    82,
      83,    84,   173,   349,    -7,    -7,   355,   237,   237,   236,
     236,   350,    59,    -7,    -7,   351,   174,   175,   352,   353,
      14,    26,   161,   176,   177,   178,   237,   327,   236,   -88,
     184,   165,   184,   184,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   326,
       0,   329,   331,     0,     0,     0,     0,     0,   334,   139,
     135,   136,   215,     0,   -44,     0,   -44,   -44,   139,   -44,
     -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,     0,   -44,   -44,   295,     0,     0,     0,   246,
     246,   -14,   -14,     0,     0,   -44,   -44,     0,     0,     0,
     -14,   -14,   -44,   -44,   -44,     0,   215,   -44,   246,   -44,
     -44,     0,   -44,   -44,   -44,   -44,   -44,     0,   -44,     0,
     -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,    70,   184,
     253,   254,   255,   256,   257,     0,     0,     0,   -44,   -44,
       0,     0,     0,     0,     0,   -44,   -44,   -44,   184,   184,
     184,   184,   184,   184,   184,   184,   179,   -10,   -10,     0,
     184,   275,   276,   277,   278,   279,   -10,   -10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   215,   215,   215,
     215,   215,   215,   215,   215,     0,     0,     0,     0,     0,
     179,     0,   179,   179,    29,     0,    30,    31,     0,    32,
      33,    34,     2,     3,     0,    35,     0,    36,    37,    38,
      39,    40,     0,   -40,   184,   184,   184,   184,   184,   314,
     315,     0,   210,     0,     0,    41,    42,     0,     0,     0,
       0,     0,    43,    44,    45,     0,   215,   215,   215,   215,
     215,   323,   324,     0,   169,   170,   116,   171,   172,     0,
       0,     0,     0,   184,     0,   184,   184,     0,     0,   173,
       0,     0,   184,   215,     0,     0,   210,     0,     0,     0,
       0,     0,   215,   174,   175,     0,     0,     0,     0,     0,
     176,   177,   178,     0,     0,     0,     0,     0,     0,   179,
     179,   179,   179,   179,   179,   107,     0,    91,    92,    93,
      94,    95,    96,    97,    98,     0,     0,     0,   179,   179,
     179,   179,   179,   179,   179,   179,   185,     0,     0,     0,
     179,   210,   210,   210,   210,   210,   -46,     0,    91,    92,
      93,    94,    95,    96,    97,    98,     0,   210,   210,   210,
     210,   210,   210,   210,   210,     0,     0,     0,     0,     0,
     185,     0,   185,   185,   229,     0,    30,    31,     0,    32,
      33,   230,     2,     3,     0,   231,     0,   232,   233,   234,
     235,    40,     0,   -40,   179,   179,   179,   179,   179,   179,
     179,     0,   216,     0,     0,    41,    42,     0,     0,     0,
       0,     0,    43,    44,    45,     0,   210,   210,   210,   210,
     210,   210,   210,     0,   200,   201,     0,   202,   203,     0,
       0,     0,     0,   179,     0,   179,   179,     0,     0,   204,
     -28,     0,   179,   210,     0,     0,   216,     0,     0,     0,
       0,     0,   210,   205,   206,     0,     0,     0,     0,     0,
     207,   208,   209,     0,     0,     0,     0,     0,     0,   185,
     185,   185,   185,   185,   185,   -69,     0,   -69,   -69,    93,
      94,    95,    96,    97,    98,     0,     0,     0,   185,   185,
     185,   185,   185,   185,   185,   185,   186,     0,     0,     0,
     185,   216,   216,   216,   216,   216,     0,     0,     0,     0,
      30,    31,     0,    32,   168,     0,     0,   216,   216,   216,
     216,   216,   216,   216,   216,    40,     0,     0,     0,   -55,
     186,     0,   186,   186,   169,   170,   328,   171,   172,    41,
      42,     0,     0,     0,     0,     0,    43,    44,    45,   173,
       0,     0,     0,     0,   185,   185,   185,   185,   185,   185,
     185,     0,   217,   174,   175,     0,     0,     0,     0,     0,
     176,   177,   178,     0,     0,     0,   216,   216,   216,   216,
     216,   216,   216,     0,   169,   170,   330,   171,   172,     0,
       0,     0,     0,   185,     0,   185,   185,     0,     0,   173,
       0,     0,   185,   216,     0,     0,   217,     0,     0,     0,
       0,     0,   216,   174,   175,     0,     0,     0,     0,     0,
     176,   177,   178,     0,     0,     0,     0,     0,     0,   186,
     186,   186,   186,   186,   186,   -70,     0,   -70,   -70,    93,
      94,    95,    96,    97,    98,     0,     0,     0,   186,   186,
     186,   186,   186,   186,   186,   186,   187,     0,     0,     0,
     186,   217,   217,   217,   217,   217,     0,     0,     0,     0,
      30,    31,     0,    32,   168,     0,     0,   217,   217,   217,
     217,   217,   217,   217,   217,    40,     0,     0,     0,     0,
     187,     0,   187,   187,   169,   170,     0,   171,   172,    41,
      42,     0,     0,     0,     0,     0,    43,    44,    45,   173,
       0,     0,     0,     0,   186,   186,   186,   186,   186,   186,
     186,     0,   218,   174,   175,     0,     0,     0,     0,     0,
     176,   177,   178,     0,     0,     0,   217,   217,   217,   217,
     217,   217,   217,     0,   200,   201,     0,   202,   203,     0,
       0,     0,     0,   186,     0,   186,   186,     0,     0,   204,
       0,     0,   186,   217,     0,     0,   218,     0,     0,     0,
       0,     0,   217,   205,   206,     0,     0,     0,     0,     0,
     207,   208,   209,     0,     0,     0,     0,     0,     0,   187,
     187,   187,   187,   187,   187,   -63,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,     0,     0,     0,   187,   187,
     187,   187,   187,   187,   187,   187,   188,     0,     0,     0,
     187,   218,   218,   218,   218,   218,   -64,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,     0,   218,   218,   218,
     218,   218,   218,   218,   218,     0,     0,     0,   251,   -61,
     188,     0,   188,   188,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,
       0,     0,     0,     0,   187,   187,   187,   187,   187,   187,
     187,   -70,   219,     0,     0,   -70,   -70,   -70,   223,   224,
     225,   226,   227,   228,     0,     0,   218,   218,   218,   218,
     218,   218,   218,   -62,     0,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   187,     0,   187,   187,    99,   100,   101,
       0,     0,   187,   218,     0,     0,   219,     0,   273,   -61,
       0,     0,   218,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   188,
     188,   188,   188,   188,   188,   -65,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,     0,     0,     0,   188,   188,
     188,   188,   188,   188,   188,   188,   189,     0,     0,     0,
     188,   219,   219,   219,   219,   219,   -66,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,     0,   219,   219,   219,
     219,   219,   219,   219,   219,     0,     0,     0,     0,     0,
     189,   -88,   189,   189,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,     0,     0,     0,   188,   188,   188,   188,   188,   188,
     188,   -63,   220,     0,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,     0,   219,   219,   219,   219,
     219,   219,   219,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   188,     0,   188,   188,    99,   100,   101,
       0,     0,   188,   219,     0,     0,   220,     0,     0,   -89,
       0,     0,   219,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   189,
     189,   189,   189,   189,   189,   183,   -67,     0,   -67,   -67,
      93,    94,    95,    96,   -67,   -67,     0,     0,   189,   189,
     189,   189,   189,   189,   189,   189,     0,     0,     0,     0,
     189,   220,   220,   220,   220,   220,     0,     0,     0,   183,
       0,   183,   183,     0,     0,     0,     0,   220,   220,   220,
     220,   220,   220,   220,   220,   -68,     0,   -68,   -68,    93,
      94,    95,    96,   -68,   -68,     0,     0,   133,   134,   -64,
       0,   214,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,   189,   189,   189,   189,   189,   189,
     189,   -65,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,     0,     0,   220,   220,   220,   220,
     220,   220,   220,     0,     0,   214,     0,     0,     0,     0,
       0,     0,     0,   189,     0,   189,   189,     0,     0,     0,
       0,     0,   189,   220,     0,     0,     0,     0,   183,   -66,
     181,     0,   220,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,     0,     0,     0,   183,   183,   183,
     183,   183,   183,   183,   183,     0,     0,     0,     0,   183,
       0,     0,     0,   119,   181,     0,   181,   181,   192,   193,
     194,   195,   196,   197,   198,   199,   214,   214,   214,   214,
     214,   214,   214,   214,     0,     0,     0,     0,     0,   130,
     131,   132,   -47,     0,   -47,   -47,   212,   -47,   -47,   -47,
     -47,   -47,     0,   -47,   162,   -47,   -47,   -47,   -47,   -47,
       0,   -47,   -47,   183,   183,   183,   312,   313,     0,     0,
       0,     0,     0,   -47,   -47,     0,     0,     0,     0,     0,
     -47,   -47,   -47,     0,     0,   214,   214,   214,   321,   322,
     212,     0,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   183,     0,   183,   183,    99,   100,   101,   182,
       0,   183,   214,   181,     0,     0,     0,     0,   -67,     0,
       0,   214,   -67,   -67,   -67,   223,   224,   225,   226,   -67,
     -67,     0,   181,   181,   181,   181,   181,   181,   181,   181,
       0,     0,     0,   182,   181,   182,   182,   -68,     0,     0,
       0,   -68,   -68,   -68,   223,   224,   225,   226,   -68,   -68,
       0,   212,   212,   212,   212,   212,   212,   212,   212,     0,
       0,   -33,     0,   -33,   -33,   213,   -33,   -33,   -33,   -33,
     -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -33,   -33,     0,     0,     0,     0,     0,     0,   309,   310,
     311,     0,   -33,   -33,     0,     0,     0,     0,     0,   -33,
     -33,   -33,     0,     0,     0,     0,     0,     0,   140,   213,
     318,   319,   320,   192,   193,   194,   195,   196,   197,   198,
     199,     0,     0,     0,     0,     0,     0,   181,     0,   181,
     181,     0,   182,   144,     0,     0,   181,   212,   192,   193,
     194,   195,   196,   197,   198,   199,   212,     0,     0,     0,
       0,   182,   182,   182,   182,   182,   182,   182,   182,   -34,
       0,   -34,   -34,   182,   -34,   -34,   -34,   -34,   -34,     0,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,
     213,   213,   213,   213,   213,   213,   213,   213,     0,     0,
     -34,   -34,     0,     0,     0,     0,    71,   -34,   -34,   -34,
     -61,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   182,   182,   182,
     -61,     0,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   213,
     213,   213,    89,   -62,     0,     0,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   182,     0,   182,   182,
     280,   281,   282,     0,     0,   182,   213,     0,     0,     0,
       0,   -35,     0,   -35,   -35,   213,   -35,   -35,   -35,   -35,
     -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,
     -35,   -35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -35,   -35,     0,     0,     0,     0,     0,   -35,
     -35,   -35,   -36,     0,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
       0,   -36,   -36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -36,   -36,     0,     0,     0,     0,     0,
     -36,   -36,   -36,   -37,     0,   -37,   -37,     0,   -37,   -37,
     -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,     0,   -37,   -37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -37,   -37,     0,     0,     0,     0,
       0,   -37,   -37,   -37,   -38,     0,   -38,   -38,     0,   -38,
     -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,     0,   -38,   -38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -38,   -38,     0,     0,     0,
       0,     0,   -38,   -38,   -38,   -39,     0,   -39,   -39,     0,
     -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,     0,   -39,   -39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -39,   -39,     0,     0,
       0,     0,     0,   -39,   -39,   -39,   -43,     0,   -43,   -43,
       0,   -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,     0,   -43,   -43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -43,   -43,     0,
       0,     0,     0,     0,   -43,   -43,   -43,   -14,     0,   -14,
     -14,     0,   -14,   -14,   -14,   -14,   -14,     0,   -14,   -14,
     -14,   -14,   -14,   -14,   -14,     0,   -14,   -14,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -14,   -14,
       0,     0,     0,     0,     0,   -14,   -14,   -14,   -45,     0,
     -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,     0,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -45,
     -45,     0,     0,     0,     0,     0,   -45,   -45,   -45,   -42,
       0,   -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,     0,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -42,   -42,     0,     0,     0,     0,     0,   -42,   -42,   -42,
     -49,     0,   -49,   -49,     0,   -49,   -49,   -49,   -49,   -49,
       0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,   -49,
     -49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -49,   -49,     0,     0,     0,     0,     0,   -49,   -49,
     -49,   -41,     0,   -41,   -41,     0,   -41,   -41,   -41,   -41,
     -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,
     -41,   -41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -41,   -41,     0,     0,     0,     0,     0,   -41,
     -41,   -41,   -47,     0,   -47,   -47,     0,   -47,   -47,   -47,
     -47,   -47,     0,   -47,   356,   -47,   -47,   -47,   -47,   -47,
       0,   -47,   -47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -47,   -47,     0,     0,     0,     0,     0,
     -47,   -47,   -47,   -50,     0,   -50,   -50,     0,   -50,   -50,
     -50,   -50,   -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,     0,   -50,   -50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -50,   -50,     0,     0,     0,     0,
       0,   -50,   -50,   -50,   -58,     0,   -58,   -58,     0,   -58,
     -58,   -58,   -58,   -58,     0,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,     0,   -58,   -58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -58,   -58,     0,     0,     0,
       0,     0,   -58,   -58,   -58,   -56,     0,   -56,   -56,     0,
     -56,   -56,   -56,   -56,   -56,     0,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,     0,   -56,   -56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -56,   -56,     0,     0,
       0,     0,     0,   -56,   -56,   -56,   -59,     0,   -59,   -59,
       0,   -59,   -59,   -59,   -59,   -59,     0,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,     0,   -59,   -59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -59,   -59,     0,
       0,     0,     0,     0,   -59,   -59,   -59,   -57,     0,   -57,
     -57,     0,   -57,   -57,   -57,   -57,   -57,     0,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,     0,   -57,   -57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -57,   -57,
       0,     0,     0,     0,     0,   -57,   -57,   -57,   -60,     0,
     -60,   -60,     0,   -60,   -60,   -60,   -60,   -60,     0,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,     0,   -60,   -60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -60,
     -60,     0,     0,     0,     0,     0,   -60,   -60,   -60,   -48,
       0,   -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,     0,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,   -48,   -48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -48,   -48,     0,     0,     0,     0,     0,   -48,   -48,   -48,
     -33,     0,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,
       0,   -33,     0,   -33,   -33,   -33,   -33,   -33,     0,   -33,
     -33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -33,   -33,     0,     0,     0,     0,     0,   -33,   -33,
     -33,    29,     0,    30,    31,     0,    32,    33,    34,     2,
       3,     0,    35,     0,    36,    37,    38,    39,    40,     0,
     -40,   -32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    41,    42,     0,     0,     0,     0,     0,    43,
      44,    45,   -34,     0,   -34,   -34,     0,   -34,   -34,   -34,
     -34,   -34,     0,   -34,     0,   -34,   -34,   -34,   -34,   -34,
       0,   -34,   -34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -34,   -34,     0,     0,     0,     0,     0,
     -34,   -34,   -34,   -35,     0,   -35,   -35,     0,   -35,   -35,
     -35,   -35,   -35,     0,   -35,     0,   -35,   -35,   -35,   -35,
     -35,     0,   -35,   -35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -35,   -35,     0,     0,     0,     0,
       0,   -35,   -35,   -35,   -36,     0,   -36,   -36,     0,   -36,
     -36,   -36,   -36,   -36,     0,   -36,     0,   -36,   -36,   -36,
     -36,   -36,     0,   -36,   -36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -36,   -36,     0,     0,     0,
       0,     0,   -36,   -36,   -36,   -37,     0,   -37,   -37,     0,
     -37,   -37,   -37,   -37,   -37,     0,   -37,     0,   -37,   -37,
     -37,   -37,   -37,     0,   -37,   -37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -37,   -37,     0,     0,
       0,     0,     0,   -37,   -37,   -37,   -38,     0,   -38,   -38,
       0,   -38,   -38,   -38,   -38,   -38,     0,   -38,     0,   -38,
     -38,   -38,   -38,   -38,     0,   -38,   -38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -38,   -38,     0,
       0,     0,     0,     0,   -38,   -38,   -38,   -39,     0,   -39,
     -39,     0,   -39,   -39,   -39,   -39,   -39,     0,   -39,     0,
     -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -39,   -39,
       0,     0,     0,     0,     0,   -39,   -39,   -39,   -43,     0,
     -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,     0,   -43,
       0,   -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -43,
     -43,     0,     0,     0,     0,     0,   -43,   -43,   -43,   -45,
       0,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,     0,
     -45,     0,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -45,   -45,     0,     0,     0,     0,     0,   -45,   -45,   -45,
     -42,     0,   -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,
       0,   -42,     0,   -42,   -42,   -42,   -42,   -42,     0,   -42,
     -42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -42,   -42,     0,     0,     0,     0,     0,   -42,   -42,
     -42,   -49,     0,   -49,   -49,     0,   -49,   -49,   -49,   -49,
     -49,     0,   -49,     0,   -49,   -49,   -49,   -49,   -49,     0,
     -49,   -49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -49,   -49,     0,     0,     0,     0,     0,   -49,
     -49,   -49,   -41,     0,   -41,   -41,     0,   -41,   -41,   -41,
     -41,   -41,     0,   -41,     0,   -41,   -41,   -41,   -41,   -41,
       0,   -41,   -41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -41,   -41,     0,     0,     0,     0,     0,
     -41,   -41,   -41,   -50,     0,   -50,   -50,     0,   -50,   -50,
     -50,   -50,   -50,     0,   -50,     0,   -50,   -50,   -50,   -50,
     -50,     0,   -50,   -50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -50,   -50,     0,     0,     0,     0,
       0,   -50,   -50,   -50,   -58,     0,   -58,   -58,     0,   -58,
     -58,   -58,   -58,   -58,     0,   -58,     0,   -58,   -58,   -58,
     -58,   -58,     0,   -58,   -58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -58,   -58,     0,     0,     0,
       0,     0,   -58,   -58,   -58,   -56,     0,   -56,   -56,     0,
     -56,   -56,   -56,   -56,   -56,     0,   -56,     0,   -56,   -56,
     -56,   -56,   -56,     0,   -56,   -56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -56,   -56,     0,     0,
       0,     0,     0,   -56,   -56,   -56,   -59,     0,   -59,   -59,
       0,   -59,   -59,   -59,   -59,   -59,     0,   -59,     0,   -59,
     -59,   -59,   -59,   -59,     0,   -59,   -59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -59,   -59,     0,
       0,     0,     0,     0,   -59,   -59,   -59,   -57,     0,   -57,
     -57,     0,   -57,   -57,   -57,   -57,   -57,     0,   -57,     0,
     -57,   -57,   -57,   -57,   -57,     0,   -57,   -57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -57,   -57,
       0,     0,     0,     0,     0,   -57,   -57,   -57,   -60,     0,
     -60,   -60,     0,   -60,   -60,   -60,   -60,   -60,     0,   -60,
       0,   -60,   -60,   -60,   -60,   -60,     0,   -60,   -60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -60,
     -60,     0,     0,     0,     0,     0,   -60,   -60,   -60,   -48,
       0,   -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,     0,
     -48,     0,   -48,   -48,   -48,   -48,   -48,     0,   -48,   -48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -48,   -48,     0,     0,     0,     0,     0,   -48,   -48,   -48,
     -14,     0,   -14,   -14,     0,   -14,   -14,   -14,   -14,   -14,
       0,   -14,     0,   -14,   -14,   -14,   -14,   -14,     0,   -14,
     -14,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -14,   -14,     0,     0,     0,     0,   -87,   -14,   -14,
     -14,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -81,     0,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -84,     0,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -77,     0,     0,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   285,   286,   -77,   -77,   -77,   -80,     0,     0,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -83,     0,     0,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -86,     0,     0,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -82,     0,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -90,     0,     0,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -91,     0,     0,
       0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -93,     0,     0,
       0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -94,     0,     0,
       0,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -95,     0,     0,
       0,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -96,     0,     0,
       0,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -92,     0,     0,
       0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -85,     0,     0,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -75,     0,     0,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   285,   286,   -75,   -75,   -75,   -76,     0,     0,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   285,   286,   -76,   -76,   -76,   -78,     0,     0,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -79,     0,     0,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -13,     0,     0,
       0,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,   -13,   -13,   -13,   -89,     0,     0,
       0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -87,     0,     0,
       0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -81,     0,     0,
       0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -84,     0,     0,
       0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -77,     0,     0,
       0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   263,   264,   -77,   -77,   -77,   -80,     0,     0,
       0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -83,     0,     0,
       0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -86,     0,     0,
       0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -82,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -90,     0,     0,
       0,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -91,     0,     0,
       0,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -93,     0,     0,
       0,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -94,     0,     0,
       0,     0,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -95,     0,     0,
       0,     0,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -96,     0,     0,
       0,     0,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -92,     0,     0,
       0,     0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -85,     0,     0,
       0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -75,     0,     0,
       0,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   263,   264,   -75,   -75,   -75,   -76,     0,     0,
       0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   263,   264,   -76,   -76,   -76,   -78,     0,     0,
       0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -79,     0,     0,
       0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -13,     0,     0,
       0,     0,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,   -13,   -13,   -13,   -74,     0,     0,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     283,   284,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   261,   262,     0,   -71,   -74,
     -74,   -74,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,     0,     0,     0,   -72,   280,   281,   282,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
     -73,   280,   281,   282,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,     0,     0,   -62,     0,   280,   281,   282,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,
     -71,     0,   258,   259,   260,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,   -72,     0,   258,   259,   260,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,
     -73,     0,   258,   259,   260,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,     0,     0,     0,     0,   258,   259,   260,
     -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,     0,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -87,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     104,   105,   -77,   -77,   -77,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -86,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -82,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -90,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -84,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -93,     0,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -94,     0,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -95,     0,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -96,     0,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -92,     0,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -85,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -75,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   104,   105,
     -75,   -75,   -75,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   104,   105,   -76,   -76,   -76,
     -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -79,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -13,     0,   -13,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   102,   103,     0,     0,   -74,   -74,   -74,   -73,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,
     146,     0,    99,   100,   101,   192,   193,   194,   195,   196,
     197,   198,   199,   308,     0,     0,     0,     0,   192,   193,
     194,   195,   196,   197,   198,   199,   -69,     0,     0,     0,
       0,   -69,   -69,   194,   195,   196,   197,   198,   199,   -70,
       0,     0,     0,     0,   -70,   -70,   194,   195,   196,   197,
     198,   199,   -63,     0,     0,     0,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -64,     0,     0,     0,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -65,     0,
       0,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -66,     0,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -67,     0,     0,     0,     0,   -67,
     -67,   194,   195,   196,   197,   -67,   -67,   -68,     0,     0,
       0,     0,   -68,   -68,   194,   195,   196,   197,   -68,   -68,
     317,     0,     0,     0,     0,   192,   193,   194,   195,   196,
     197,   198,   199,   337,     0,     0,     0,     0,   192,   193,
     194,   195,   196,   197,   198,   199,   340,     0,     0,     0,
       0,   192,   193,   194,   195,   196,   197,   198,   199,   342,
       0,     0,     0,     0,   192,   193,   194,   195,   196,   197,
     198,   199,   -46,     0,     0,     0,     0,   192,   193,   194,
     195,   196,   197,   198,   199,   -54,     0,    91,    92,    93,
      94,    95,    96,    97,    98,   305,     0,    91,    92,    93,
      94,    95,    96,    97,    98,   325,     0,    91,    92,    93,
      94,    95,    96,    97,    98
};

static const yytype_int16 yycheck[] =
{
       0,    50,     0,   140,   141,   140,     6,   140,     6,   307,
       7,     7,   251,    27,     9,    10,     0,     7,   316,    19,
      34,    11,     6,    23,    19,   162,    22,    41,    42,    43,
      44,    45,   140,    75,   273,    19,    50,   140,    87,    23,
      18,   140,     0,   140,    22,   140,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    75,     7,    22,    78,    24,    25,    26,    27,    28,
      29,    30,    31,    87,    19,    89,     7,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,     7,     0,    19,     0,    11,   140,    23,
      24,    25,    26,    27,    28,    29,    30,    31,     3,     4,
      18,     6,     7,     7,    22,    18,    34,    11,    18,    22,
       7,   163,    40,    18,    19,    18,   140,   141,   142,    19,
      19,     9,    10,    23,    23,    19,   150,    32,    33,    19,
     140,    20,   140,    19,    39,    40,    41,    19,   162,   163,
     335,   336,    19,    18,    18,    18,    74,    19,    76,    77,
      18,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      22,    89,    21,    91,    92,    93,    94,    95,    96,    97,
      98,    20,    22,     7,    21,    42,    22,    19,   106,     0,
       1,   205,   206,   207,   208,   209,    22,    42,     9,    10,
     337,   338,   337,   338,   337,   338,    19,   221,   222,   223,
     224,   225,   226,   227,   228,    19,   230,     0,     1,   356,
      19,   356,   140,   356,   142,    21,     9,    10,    19,   337,
     338,    19,   150,    22,   337,   338,     0,     1,   337,   338,
     337,   338,   337,   338,    22,     9,    10,    22,   356,    22,
      22,    19,    22,   356,   303,   173,   298,   356,    19,   356,
      19,   356,     7,     7,    19,    18,   280,   281,   282,   283,
     284,   285,   286,    22,   192,   193,   194,   195,   196,   197,
     198,   199,     0,     1,   298,    18,   204,   301,    18,   303,
      18,     9,    10,   307,    18,   337,   338,    20,    19,    42,
      22,    21,   316,   221,   222,   223,   224,   225,   226,   227,
     228,    22,   230,    19,   356,    19,    19,     3,     4,     5,
       6,     7,    19,   337,   338,    19,    40,    41,    42,    43,
      44,    45,    18,    22,     0,     1,    19,   337,   338,   337,
     338,    22,   356,     9,    10,    22,    32,    33,    22,    22,
       6,    23,   150,    39,    40,    41,   356,   298,   356,    19,
      74,   163,    76,    77,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,   297,
      -1,   299,   300,    -1,    -1,    -1,    -1,    -1,   306,   307,
     104,   105,   106,    -1,     1,    -1,     3,     4,   316,     6,
       7,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,    -1,    -1,    -1,   337,
     338,     0,     1,    -1,    -1,    32,    33,    -1,    -1,    -1,
       9,    10,    39,    40,    41,    -1,   150,     1,   356,     3,
       4,    -1,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,   173,
     174,   175,   176,   177,   178,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,   192,   193,
     194,   195,   196,   197,   198,   199,    40,     0,     1,    -1,
     204,   205,   206,   207,   208,   209,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,   223,
     224,   225,   226,   227,   228,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    76,    77,     1,    -1,     3,     4,    -1,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    18,    -1,    20,   258,   259,   260,   261,   262,   263,
     264,    -1,   106,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,    -1,   280,   281,   282,   283,
     284,   285,   286,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,   297,    -1,   299,   300,    -1,    -1,    18,
      -1,    -1,   306,   307,    -1,    -1,   150,    -1,    -1,    -1,
      -1,    -1,   316,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,   173,
     174,   175,   176,   177,   178,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,    40,    -1,    -1,    -1,
     204,   205,   206,   207,   208,   209,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,   221,   222,   223,
     224,   225,   226,   227,   228,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    76,    77,     1,    -1,     3,     4,    -1,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    18,    -1,    20,   258,   259,   260,   261,   262,   263,
     264,    -1,   106,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,    -1,   280,   281,   282,   283,
     284,   285,   286,    -1,     3,     4,    -1,     6,     7,    -1,
      -1,    -1,    -1,   297,    -1,   299,   300,    -1,    -1,    18,
      19,    -1,   306,   307,    -1,    -1,   150,    -1,    -1,    -1,
      -1,    -1,   316,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,   173,
     174,   175,   176,   177,   178,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,    40,    -1,    -1,    -1,
     204,   205,   206,   207,   208,   209,    -1,    -1,    -1,    -1,
       3,     4,    -1,     6,     7,    -1,    -1,   221,   222,   223,
     224,   225,   226,   227,   228,    18,    -1,    -1,    -1,    22,
      74,    -1,    76,    77,     3,     4,     5,     6,     7,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    18,
      -1,    -1,    -1,    -1,   258,   259,   260,   261,   262,   263,
     264,    -1,   106,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    -1,   280,   281,   282,   283,
     284,   285,   286,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,   297,    -1,   299,   300,    -1,    -1,    18,
      -1,    -1,   306,   307,    -1,    -1,   150,    -1,    -1,    -1,
      -1,    -1,   316,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,   173,
     174,   175,   176,   177,   178,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,    40,    -1,    -1,    -1,
     204,   205,   206,   207,   208,   209,    -1,    -1,    -1,    -1,
       3,     4,    -1,     6,     7,    -1,    -1,   221,   222,   223,
     224,   225,   226,   227,   228,    18,    -1,    -1,    -1,    -1,
      74,    -1,    76,    77,     3,     4,    -1,     6,     7,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    18,
      -1,    -1,    -1,    -1,   258,   259,   260,   261,   262,   263,
     264,    -1,   106,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    -1,   280,   281,   282,   283,
     284,   285,   286,    -1,     3,     4,    -1,     6,     7,    -1,
      -1,    -1,    -1,   297,    -1,   299,   300,    -1,    -1,    18,
      -1,    -1,   306,   307,    -1,    -1,   150,    -1,    -1,    -1,
      -1,    -1,   316,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,   173,
     174,   175,   176,   177,   178,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,    40,    -1,    -1,    -1,
     204,   205,   206,   207,   208,   209,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,   221,   222,   223,
     224,   225,   226,   227,   228,    -1,    -1,    -1,    18,    19,
      74,    -1,    76,    77,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    -1,   258,   259,   260,   261,   262,   263,
     264,    19,   106,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,   280,   281,   282,   283,
     284,   285,   286,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,   297,    -1,   299,   300,    36,    37,    38,
      -1,    -1,   306,   307,    -1,    -1,   150,    -1,    18,    19,
      -1,    -1,   316,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,   173,
     174,   175,   176,   177,   178,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,    40,    -1,    -1,    -1,
     204,   205,   206,   207,   208,   209,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,   221,   222,   223,
     224,   225,   226,   227,   228,    -1,    -1,    -1,    -1,    -1,
      74,    19,    76,    77,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    -1,   258,   259,   260,   261,   262,   263,
     264,    19,   106,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,   280,   281,   282,   283,
     284,   285,   286,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,   297,    -1,   299,   300,    36,    37,    38,
      -1,    -1,   306,   307,    -1,    -1,   150,    -1,    -1,    19,
      -1,    -1,   316,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,   173,
     174,   175,   176,   177,   178,    40,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,    -1,    -1,    -1,    -1,
     204,   205,   206,   207,   208,   209,    -1,    -1,    -1,    74,
      -1,    76,    77,    -1,    -1,    -1,    -1,   221,   222,   223,
     224,   225,   226,   227,   228,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,   102,   103,    19,
      -1,   106,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,   258,   259,   260,   261,   262,   263,
     264,    19,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,   280,   281,   282,   283,
     284,   285,   286,    -1,    -1,   150,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   297,    -1,   299,   300,    -1,    -1,    -1,
      -1,    -1,   306,   307,    -1,    -1,    -1,    -1,   173,    19,
      40,    -1,   316,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,    -1,    -1,    -1,    -1,   204,
      -1,    -1,    -1,    19,    74,    -1,    76,    77,    24,    25,
      26,    27,    28,    29,    30,    31,   221,   222,   223,   224,
     225,   226,   227,   228,    -1,    -1,    -1,    -1,    -1,    99,
     100,   101,     1,    -1,     3,     4,   106,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,   258,   259,   260,   261,   262,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,   280,   281,   282,   283,   284,
     150,    -1,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,   297,    -1,   299,   300,    36,    37,    38,    40,
      -1,   306,   307,   173,    -1,    -1,    -1,    -1,    19,    -1,
      -1,   316,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,   192,   193,   194,   195,   196,   197,   198,   199,
      -1,    -1,    -1,    74,   204,    76,    77,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,   221,   222,   223,   224,   225,   226,   227,   228,    -1,
      -1,     1,    -1,     3,     4,   106,     6,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,   258,   259,
     260,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    19,   150,
     280,   281,   282,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,   297,    -1,   299,
     300,    -1,   173,    19,    -1,    -1,   306,   307,    24,    25,
      26,    27,    28,    29,    30,    31,   316,    -1,    -1,    -1,
      -1,   192,   193,   194,   195,   196,   197,   198,   199,     1,
      -1,     3,     4,   204,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    -1,    20,    21,
     221,   222,   223,   224,   225,   226,   227,   228,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    18,    39,    40,    41,
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,   258,   259,   260,
      42,    -1,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,   280,
     281,   282,    42,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,   297,    -1,   299,   300,
      36,    37,    38,    -1,    -1,   306,   307,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,   316,     6,     7,     8,     9,
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
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    19,    39,    40,
      41,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    19,    -1,    36,    37,    38,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    19,    36,
      37,    38,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    -1,    19,    36,    37,    38,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    -1,
      19,    36,    37,    38,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    19,    -1,    36,    37,    38,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      19,    -1,    36,    37,    38,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    19,    -1,    36,    37,    38,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      19,    -1,    36,    37,    38,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    36,    37,    38,
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
      32,    33,    34,    35,    36,    37,    38,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    -1,    36,    37,    38,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      19,    -1,    36,    37,    38,    24,    25,    26,    27,    28,
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
      25,    26,    27,    28,    29,    30,    31,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     9,    10,    44,    45,    46,    47,    52,    53,
      54,    55,    56,     0,    45,    22,    48,     7,    11,    18,
      53,    57,    58,    23,    60,    19,    58,    20,    59,     1,
       3,     4,     6,     7,     8,    12,    14,    15,    16,    17,
      18,    32,    33,    39,    40,    41,    49,    52,    53,    63,
      64,    65,    66,    67,    68,    69,    70,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      22,    18,    76,    77,    18,    18,    18,    18,    18,    77,
      81,    81,    81,    81,    81,    21,    63,    20,    22,    42,
      22,    24,    25,    26,    27,    28,    29,    30,    31,    36,
      37,    38,    32,    33,    34,    35,    50,    22,    77,     7,
      67,    71,    72,    76,     5,    77,     5,    77,    76,    19,
      63,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      78,    78,    78,    80,    80,    81,    81,    61,    62,    77,
      19,    19,    22,    19,    19,    19,    19,    19,    21,    51,
      23,    64,    64,    73,    77,    22,    22,    22,    22,    22,
      19,    62,    13,    22,    64,    72,    54,    54,     7,     3,
       4,     6,     7,    18,    32,    33,    39,    40,    41,    49,
      76,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      22,     7,    24,    25,    26,    27,    28,    29,    30,    31,
       3,     4,     6,     7,    18,    32,    33,    39,    40,    41,
      49,    76,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    24,    25,    26,    27,    28,    29,    30,    31,     1,
       8,    12,    14,    15,    16,    17,    52,    53,    65,    66,
      67,    68,    69,    70,    74,    75,    77,    67,    76,     7,
       7,    18,    77,    81,    81,    81,    81,    81,    36,    37,
      38,    32,    33,    34,    35,    77,    77,    77,    77,    77,
      77,    77,    77,    18,    77,    81,    81,    81,    81,    81,
      36,    37,    38,    32,    33,    34,    35,    77,    77,    77,
      77,    77,    77,    77,    77,    22,    77,    18,    18,    18,
      18,    18,    22,    20,    22,    22,    42,    50,    19,    78,
      78,    78,    80,    80,    81,    81,    50,    19,    78,    78,
      78,    80,    80,    81,    81,    22,    77,    71,     5,    77,
       5,    77,    76,    63,    77,    61,    61,    19,    19,    19,
      19,    19,    19,    19,    21,    51,    51,    64,    64,    22,
      22,    22,    22,    22,    19,    19,    13,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    45,    45,    46,    46,    46,    48,
      47,    50,    51,    49,    52,    53,    54,    54,    55,    56,
      56,    57,    57,    59,    58,    60,    58,    61,    61,    62,
      62,    63,    63,    64,    64,    64,    64,    64,    64,    64,
      65,    64,    64,    64,    64,    66,    67,    68,    68,    69,
      70,    71,    72,    72,    73,    73,    74,    74,    74,    74,
      75,    76,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    78,    78,    78,    78,    79,    79,    79,    80,    80,
      80,    81,    81,    81,    81,    81,    82,    82,    83,    83,
      84,    84,    84,    85,    85,    86,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     0,
       8,     0,     0,     6,     2,     2,     1,     1,     2,     1,
       1,     1,     0,     0,     4,     0,     2,     1,     0,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     2,     2,     1,     2,     3,     5,     7,     3,
       5,     5,     1,     0,     1,     0,     5,     5,     5,     5,
       5,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2
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
#line 147 "src/syn.y"
                   {
      root = (yyval.node);
      root = create_node(PROGRAM);
      add_tree_node(root, (yyvsp[0].node));
    }
#line 2875 "src/syn.tab.c"
    break;

  case 3: /* program: %empty  */
#line 152 "src/syn.y"
           {
      (yyval.node) = create_node(PROGRAM);
    }
#line 2883 "src/syn.tab.c"
    break;

  case 4: /* lst_declarations: declaration lst_declarations  */
#line 158 "src/syn.y"
                                {
      (yyval.node) = create_node(LIST_DECLARATIONS);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 2893 "src/syn.tab.c"
    break;

  case 5: /* lst_declarations: declaration  */
#line 163 "src/syn.y"
                 {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(LIST_DECLARATIONS);
      // add_tree_node($$, $1);
    }
#line 2903 "src/syn.tab.c"
    break;

  case 6: /* declaration: func_declaration  */
#line 171 "src/syn.y"
                   {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(DECLARATION);
      // add_tree_node($$, $1);
    }
#line 2913 "src/syn.tab.c"
    break;

  case 7: /* declaration: var_declaration  */
#line 176 "src/syn.y"
                    {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(DECLARATION);
      // add_tree_node($$, $1);
    }
#line 2923 "src/syn.tab.c"
    break;

  case 8: /* declaration: error  */
#line 181 "src/syn.y"
          {
      yyerrok;
      (yyval.node) = create_node(DECLARATION); 
      syntax_errors++;
    }
#line 2933 "src/syn.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 189 "src/syn.y"
                  {strcpy(return_type_function, curr_type); increment_scope(); strcpy(func_name, (yyvsp[0].node)->children->sibilings->child->token.lexeme);}
#line 2939 "src/syn.tab.c"
    break;

  case 10: /* func_declaration: unq_declaration $@1 '(' parameters ')' '{' block_commands '}'  */
#line 189 "src/syn.y"
                                                                                                                                                                                           {
      (yyval.node) = create_node(FUNCTION_DECLARATION);    
      add_tree_node((yyval.node), (yyvsp[-7].node));
      add_tree_node((yyval.node), (yyvsp[-4].node));
      add_tree_node((yyval.node), (yyvsp[-1].node));
      set_F_table((yyvsp[-7].node)->children->sibilings->child);
      // param_lst = create_params_list();
      
    }
#line 2953 "src/syn.tab.c"
    break;

  case 11: /* $@2: %empty  */
#line 201 "src/syn.y"
          {calling_params_counter = 0;}
#line 2959 "src/syn.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 201 "src/syn.y"
                                                           {verify_amount_params((yyvsp[0].node), &(yyvsp[-3].token));}
#line 2965 "src/syn.tab.c"
    break;

  case 13: /* func_calling: ID '(' $@2 calling_parameters $@3 ')'  */
#line 201 "src/syn.y"
                                                                                                {
      (yyval.node) = create_node(FUNCTION_CALLING);
      add_tree_operation_leaf((yyval.node), &(yyvsp[-5].token), IDENTIFIER, verify_existing_function(&(yyvsp[-5].token)));
      add_tree_node((yyval.node), (yyvsp[-2].node));
    }
#line 2975 "src/syn.tab.c"
    break;

  case 14: /* var_declaration: unq_declaration ';'  */
#line 209 "src/syn.y"
                      {
      (yyval.node) = (yyvsp[-1].node);
    }
#line 2983 "src/syn.tab.c"
    break;

  case 15: /* unq_declaration: type ID  */
#line 215 "src/syn.y"
          {
      (yyval.node) = create_node(UNIQUE_DECLARATION);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[0].token), IDENTIFIER, curr_type);
      add_table_node((yyvsp[0].token).lexeme, (yyvsp[-1].node), idx);
      strcpy((yyvsp[-1].node)->type, get_type((yyvsp[-1].node), idx));
      strcpy((yyvsp[-1].node)->children->child->type, curr_type);
      idx++;
    }
#line 2997 "src/syn.tab.c"
    break;

  case 16: /* type: type_lst  */
#line 227 "src/syn.y"
            {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3005 "src/syn.tab.c"
    break;

  case 17: /* type: type_number  */
#line 230 "src/syn.y"
                 {
    (yyval.node) = (yyvsp[0].node);
    }
#line 3013 "src/syn.tab.c"
    break;

  case 18: /* type_lst: type_number T_LIST  */
#line 236 "src/syn.y"
                       {
      (yyval.node) = create_node(TYPE_LIST);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_token_node((yyval.node), &(yyvsp[0].token), LIST);
    }
#line 3023 "src/syn.tab.c"
    break;

  case 19: /* type_number: T_INT  */
#line 244 "src/syn.y"
        {
      (yyval.node) = create_node(TYPE_NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), INT);
    }
#line 3032 "src/syn.tab.c"
    break;

  case 20: /* type_number: T_FLOAT  */
#line 248 "src/syn.y"
            {
      (yyval.node) = create_node(TYPE_NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), FLOAT);
    }
#line 3041 "src/syn.tab.c"
    break;

  case 21: /* parameters: lst_parameters  */
#line 255 "src/syn.y"
                 {
      (yyval.node) = (yyvsp[0].node);
      
      // $$ = create_node(PARAMETERS);
      // add_tree_node($$, $1);
    }
#line 3052 "src/syn.tab.c"
    break;

  case 22: /* parameters: %empty  */
#line 261 "src/syn.y"
           {
      (yyval.node) = create_node(PARAMETERS);
    }
#line 3060 "src/syn.tab.c"
    break;

  case 23: /* $@4: %empty  */
#line 267 "src/syn.y"
                                     {strcpy(param_type, (yyvsp[-2].node)->children->child->type);}
#line 3066 "src/syn.tab.c"
    break;

  case 24: /* lst_parameters: unq_declaration ',' lst_parameters $@4  */
#line 267 "src/syn.y"
                                                                                       {
      (yyval.node) = create_node(LIST_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[-3].node));
      add_tree_node((yyval.node), (yyvsp[-1].node));
      set_P_table((yyvsp[-3].node));
      set_amount_params(func_name, get_amount_params((yyvsp[-3].node), func_name));

      // printf(">>>> %s\n", $1->children->child->type);
    }
#line 3080 "src/syn.tab.c"
    break;

  case 25: /* $@5: %empty  */
#line 276 "src/syn.y"
                    {strcpy(param_type, (yyvsp[0].node)->children->child->type);}
#line 3086 "src/syn.tab.c"
    break;

  case 26: /* lst_parameters: unq_declaration $@5  */
#line 276 "src/syn.y"
                                                                     {
      (yyval.node) = (yyvsp[-1].node);
      set_P_table((yyvsp[-1].node));
      set_amount_params(func_name, get_amount_params((yyvsp[-1].node), func_name));
      // printf(">>>> %s\n", $1->children->child->type);     
    }
#line 3097 "src/syn.tab.c"
    break;

  case 27: /* calling_parameters: lst_calling_parameters  */
#line 285 "src/syn.y"
                         {
      (yyval.node) = create_node(CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3106 "src/syn.tab.c"
    break;

  case 28: /* calling_parameters: %empty  */
#line 289 "src/syn.y"
           {
      (yyval.node) = create_node(CALLING_PARAMETERS);
    }
#line 3114 "src/syn.tab.c"
    break;

  case 29: /* lst_calling_parameters: operation ',' lst_calling_parameters  */
#line 295 "src/syn.y"
                                        {
      (yyval.node) = create_node(LIST_CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
      calling_params_counter += 1;

      // printf("<<< %s\n", $1->children->child->type);
      // remove_param_from_list($1);
      // else {
      //   printf(BHRED "SEMANTIC ERROR (line: %d, column: %d): Type of parameter passed is different then the expected! Type passed: %s, expected: %s \n" reset, yylineno, column-yyleng, $1->children->child->type, param_type);
      //   semantic_errors++;
      // }
    }
#line 3132 "src/syn.tab.c"
    break;

  case 30: /* lst_calling_parameters: operation  */
#line 308 "src/syn.y"
               {
      (yyval.node) = create_node(LIST_CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[0].node));
      calling_params_counter += 1;

      // printf("<<< %s\n", $1->children->child->type);
      // remove_param_from_list($1);
      //  else {
      //   printf(BHRED "SEMANTIC ERROR (line: %d, column: %d): Type of parameter passed is different then the expected! Type passed: %s, expected: %s \n" reset, yylineno, column-yyleng, $1->children->child->type, param_type);
      //   semantic_errors++;
      // }
    }
#line 3149 "src/syn.tab.c"
    break;

  case 31: /* block_commands: command block_commands  */
#line 323 "src/syn.y"
                          {
      (yyval.node) = create_node(BLOCK_COMMANDS);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3159 "src/syn.tab.c"
    break;

  case 32: /* block_commands: command  */
#line 328 "src/syn.y"
            {
    (yyval.node) = (yyvsp[0].node);
  }
#line 3167 "src/syn.tab.c"
    break;

  case 33: /* command: var_declaration  */
#line 334 "src/syn.y"
                  {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3177 "src/syn.tab.c"
    break;

  case 34: /* command: init_variable  */
#line 339 "src/syn.y"
                  {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3187 "src/syn.tab.c"
    break;

  case 35: /* command: conditional_stmt  */
#line 344 "src/syn.y"
                     {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3197 "src/syn.tab.c"
    break;

  case 36: /* command: return_stmt  */
#line 349 "src/syn.y"
                {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3207 "src/syn.tab.c"
    break;

  case 37: /* command: iteration  */
#line 354 "src/syn.y"
              {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3215 "src/syn.tab.c"
    break;

  case 38: /* command: output  */
#line 357 "src/syn.y"
           {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3223 "src/syn.tab.c"
    break;

  case 39: /* command: input  */
#line 360 "src/syn.y"
          {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3231 "src/syn.tab.c"
    break;

  case 40: /* $@6: %empty  */
#line 363 "src/syn.y"
    {increment_scope();}
#line 3237 "src/syn.tab.c"
    break;

  case 41: /* command: $@6 '{' block_commands '}'  */
#line 363 "src/syn.y"
                                                {
      (yyval.node) = create_node(COMMAND);
      // add_tree_token_node($$, &$2, OPEN_CURLY_BRACKET);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$4, CLOSE_CURLY_BRACKET);
    }
#line 3248 "src/syn.tab.c"
    break;

  case 42: /* command: operation ';'  */
#line 369 "src/syn.y"
                  { 
      (yyval.node) = create_node(COMMAND);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 3258 "src/syn.tab.c"
    break;

  case 43: /* command: error ';'  */
#line 375 "src/syn.y"
              {
      yyerrok;
      (yyval.node) = create_node(COMMAND); 
      syntax_errors++;
    }
#line 3268 "src/syn.tab.c"
    break;

  case 44: /* command: error  */
#line 380 "src/syn.y"
          {
      yyerrok;
      (yyval.node) = create_node(COMMAND); 
      syntax_errors++;
    }
#line 3278 "src/syn.tab.c"
    break;

  case 45: /* init_variable: init_stmt ';'  */
#line 388 "src/syn.y"
                {
      (yyval.node) = create_node(INIT_VARIABLE);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 3288 "src/syn.tab.c"
    break;

  case 46: /* init_stmt: iden '=' operation  */
#line 396 "src/syn.y"
                      {
      (yyval.node) = create_node(INIT_STMT);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), ASSIGN, verify_existing_variable(&(yyvsp[-2].node)->token));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3299 "src/syn.tab.c"
    break;

  case 47: /* conditional_stmt: IF_STMT '(' operation ')' command  */
#line 405 "src/syn.y"
                                                  {
      (yyval.node) = create_node(CONDITIONAL_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), IF);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3312 "src/syn.tab.c"
    break;

  case 48: /* conditional_stmt: IF_STMT '(' operation ')' command ELSE_STMT command  */
#line 413 "src/syn.y"
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
#line 3327 "src/syn.tab.c"
    break;

  case 49: /* return_stmt: RETURN_STM operation ';'  */
#line 426 "src/syn.y"
                            {
      (yyval.node) = create_node(RETURN_STMT);
      add_tree_operation_leaf((yyval.node), &(yyvsp[-2].token), RETURN, return_type_function);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // strcpy($2->type, get_type($2));
      printf("->> $2->type %s\n", (yyvsp[-1].node)->type);

      if(strcmp((yyvsp[-1].node)->type, return_type_function) != 0) {
        printf(BHRED "SEMANTIC ERROR (line: %d, column: %d): Type passed in the return is different from the expected type for the function return! Type passed: %s, expected: %s\n" reset, (yyvsp[-2].token).line, (yyvsp[-2].token).column+7, (yyvsp[-1].node)->type, return_type_function);
        semantic_errors++;
      }
    }
#line 3344 "src/syn.tab.c"
    break;

  case 50: /* iteration: FOR_STMT '(' loop_condition ')' command  */
#line 441 "src/syn.y"
                                          {
      (yyval.node) = create_node(ITERATION_PROCESS);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), FOR);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3355 "src/syn.tab.c"
    break;

  case 51: /* loop_condition: update_stmt ';' stop_stmt ';' update_stmt  */
#line 450 "src/syn.y"
                                            {
      (yyval.node) = create_node(LOOP_CONDITION);
      add_tree_node((yyval.node), (yyvsp[-4].node));
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3366 "src/syn.tab.c"
    break;

  case 52: /* update_stmt: init_stmt  */
#line 459 "src/syn.y"
            {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3374 "src/syn.tab.c"
    break;

  case 53: /* update_stmt: %empty  */
#line 462 "src/syn.y"
           {
      (yyval.node) = create_node(UPDATE_STMT);
    }
#line 3382 "src/syn.tab.c"
    break;

  case 54: /* stop_stmt: operation  */
#line 468 "src/syn.y"
            {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3390 "src/syn.tab.c"
    break;

  case 55: /* stop_stmt: %empty  */
#line 471 "src/syn.y"
           {
      (yyval.node) = create_node(STOP_STMT);
    }
#line 3398 "src/syn.tab.c"
    break;

  case 56: /* output: OUTPUT_WRITE '(' operation ')' ';'  */
#line 477 "src/syn.y"
                                      {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITE);
      add_tree_node((yyval.node), (yyvsp[-2].node));
    }
#line 3408 "src/syn.tab.c"
    break;

  case 57: /* output: OUTPUT_WRITELN '(' operation ')' ';'  */
#line 482 "src/syn.y"
                                         {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITELN);
      add_tree_node((yyval.node), (yyvsp[-2].node));
    }
#line 3418 "src/syn.tab.c"
    break;

  case 58: /* output: OUTPUT_WRITE '(' STRING ')' ';'  */
#line 487 "src/syn.y"
                                    {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITELN);
      // add_tree_token_node($$, &$3, STRING);
      add_tree_operation_leaf((yyval.node), &(yyvsp[-2].token), STRING_STMT, "-");
    }
#line 3429 "src/syn.tab.c"
    break;

  case 59: /* output: OUTPUT_WRITELN '(' STRING ')' ';'  */
#line 493 "src/syn.y"
                                      {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITELN);
      // add_tree_token_node($$, &$3, STRING);
      add_tree_operation_leaf((yyval.node), &(yyvsp[-2].token), STRING_STMT, "-");
    }
#line 3440 "src/syn.tab.c"
    break;

  case 60: /* input: INPUT_READ '(' iden ')' ';'  */
#line 502 "src/syn.y"
                              {
      (yyval.node) = create_node(INPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), READ);
      add_tree_node((yyval.node), (yyvsp[-2].node));
    }
#line 3450 "src/syn.tab.c"
    break;

  case 61: /* iden: ID  */
#line 510 "src/syn.y"
     {
      (yyval.node) = create_node(IDEN);
      add_tree_operation_leaf((yyval.node), &(yyvsp[0].token), IDENTIFIER, verify_existing_variable(&(yyvsp[0].token)));
      // if(get_scope_from_table(&$1) != $1.scope){
      //   printf(BHRED "SEMANTIC ERROR (line: %d, column: %d): Variable <%s> is being used in the wrong scope! \n" reset, $1.line, $1.column, $1.lexeme);
      //   semantic_errors++;
      // }  
    }
#line 3463 "src/syn.tab.c"
    break;

  case 62: /* operation: lst_binary  */
#line 521 "src/syn.y"
             {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(OPERATION);
      // add_tree_node($$, $1);
    }
#line 3473 "src/syn.tab.c"
    break;

  case 63: /* operation: operation GREATER operation  */
#line 526 "src/syn.y"
                                 {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), GT_OP, type_check_num((yyvsp[-2].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      // add_tree_token_node($$, &$2, GT_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3485 "src/syn.tab.c"
    break;

  case 64: /* operation: operation GREATER_EQ operation  */
#line 533 "src/syn.y"
                                    {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), GE_OP, type_check_num((yyvsp[-2].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), GE_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3497 "src/syn.tab.c"
    break;

  case 65: /* operation: operation LESS operation  */
#line 540 "src/syn.y"
                              {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), LT_OP, type_check_num((yyvsp[-2].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), LT_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3509 "src/syn.tab.c"
    break;

  case 66: /* operation: operation LESS_EQ operation  */
#line 547 "src/syn.y"
                                 {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), LE_OP, type_check_num((yyvsp[-2].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      // add_tree_token_node($$, &$2, LE_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3521 "src/syn.tab.c"
    break;

  case 67: /* operation: operation EQUAL operation  */
#line 554 "src/syn.y"
                               {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), EQ_OP, type_check_num((yyvsp[-2].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      // add_tree_token_node($$, &$2, EQ_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3533 "src/syn.tab.c"
    break;

  case 68: /* operation: operation NOT_EQ operation  */
#line 561 "src/syn.y"
                                {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), NE_OP, type_check_num((yyvsp[-2].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      // add_tree_token_node($$, &$2, NE_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3545 "src/syn.tab.c"
    break;

  case 69: /* operation: operation AND operation  */
#line 568 "src/syn.y"
                            {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), AND_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3556 "src/syn.tab.c"
    break;

  case 70: /* operation: operation OR operation  */
#line 574 "src/syn.y"
                           {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), OR_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3567 "src/syn.tab.c"
    break;

  case 71: /* lst_binary: lst_binary FILTER lst_binary  */
#line 583 "src/syn.y"
                               {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), FILTER_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3578 "src/syn.tab.c"
    break;

  case 72: /* lst_binary: lst_binary MAP lst_binary  */
#line 589 "src/syn.y"
                              {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MAP_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3589 "src/syn.tab.c"
    break;

  case 73: /* lst_binary: lst_binary ':' lst_binary  */
#line 595 "src/syn.y"
                              {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), CONSTRUCTOR_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3600 "src/syn.tab.c"
    break;

  case 74: /* lst_binary: arith_binary  */
#line 601 "src/syn.y"
                 {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(OPERATION);
      // add_tree_node($$, $1);
    }
#line 3610 "src/syn.tab.c"
    break;

  case 75: /* arith_binary: arith_binary '+' term  */
#line 609 "src/syn.y"
                        {
      (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), ADD_OP, type_check_num((yyvsp[-2].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      add_tree_node((yyval.node), (yyvsp[0].node));
      strcpy((yyval.node)->type, (yyvsp[-2].node)->type);
    }
#line 3622 "src/syn.tab.c"
    break;

  case 76: /* arith_binary: arith_binary '-' term  */
#line 616 "src/syn.y"
                          {
      (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), MINUS_OP, type_check_num((yyvsp[-2].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      add_tree_node((yyval.node), (yyvsp[0].node));
      strcpy((yyval.node)->type, (yyvsp[-2].node)->type);
    }
#line 3634 "src/syn.tab.c"
    break;

  case 77: /* arith_binary: term  */
#line 623 "src/syn.y"
         {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3642 "src/syn.tab.c"
    break;

  case 78: /* term: term '*' expression  */
#line 629 "src/syn.y"
                      {
      (yyval.node) = create_node(TERM);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), MULTIPLY_OP, type_check_num((yyvsp[-2].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      add_tree_node((yyval.node), (yyvsp[0].node));
      strcpy((yyval.node)->type, (yyvsp[-2].node)->type);
    }
#line 3654 "src/syn.tab.c"
    break;

  case 79: /* term: term '/' expression  */
#line 636 "src/syn.y"
                        {
      (yyval.node) = create_node(TERM);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), DIVISION_OP, type_check_num((yyvsp[-2].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      add_tree_node((yyval.node), (yyvsp[0].node));
      strcpy((yyval.node)->type, (yyvsp[-2].node)->type);
    }
#line 3666 "src/syn.tab.c"
    break;

  case 80: /* term: expression  */
#line 643 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3674 "src/syn.tab.c"
    break;

  case 81: /* expression: func_calling  */
#line 649 "src/syn.y"
               {
    (yyval.node) = (yyvsp[0].node);
    }
#line 3682 "src/syn.tab.c"
    break;

  case 82: /* expression: single_operation  */
#line 652 "src/syn.y"
                     {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3690 "src/syn.tab.c"
    break;

  case 83: /* expression: const  */
#line 655 "src/syn.y"
          {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3698 "src/syn.tab.c"
    break;

  case 84: /* expression: iden  */
#line 658 "src/syn.y"
         {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3706 "src/syn.tab.c"
    break;

  case 85: /* expression: '(' operation ')'  */
#line 661 "src/syn.y"
                      {
    (yyval.node) = (yyvsp[-1].node);
  }
#line 3714 "src/syn.tab.c"
    break;

  case 86: /* const: number  */
#line 667 "src/syn.y"
         {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3722 "src/syn.tab.c"
    break;

  case 87: /* const: NIL_CNST  */
#line 670 "src/syn.y"
             {
      (yyval.node) = create_node(CONSTANT);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NIL);
    }
#line 3731 "src/syn.tab.c"
    break;

  case 88: /* number: NUM_INT  */
#line 677 "src/syn.y"
          {
      (yyval.node) = create_node(NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NUMBER_INT);
    }
#line 3740 "src/syn.tab.c"
    break;

  case 89: /* number: NUM_FLOAT  */
#line 681 "src/syn.y"
              {
      (yyval.node) = create_node(NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NUMBER_FLOAT);
    }
#line 3749 "src/syn.tab.c"
    break;

  case 90: /* single_operation: arith_single  */
#line 688 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3757 "src/syn.tab.c"
    break;

  case 91: /* single_operation: lst_single  */
#line 691 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3765 "src/syn.tab.c"
    break;

  case 92: /* single_operation: '!' expression  */
#line 694 "src/syn.y"
                   {
    (yyval.node) = create_node(SINGLE_OPERATION);
    add_tree_token_node((yyval.node), &(yyvsp[-1].token), NOT_OR_TAIL);
    add_tree_node((yyval.node), (yyvsp[0].node));
  }
#line 3775 "src/syn.tab.c"
    break;

  case 93: /* arith_single: '+' expression  */
#line 702 "src/syn.y"
                 {
      (yyval.node) = create_node(ARITHMETIC_SINGLE);
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), ADD_OP, type_check_num((yyvsp[0].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      add_tree_node((yyval.node), (yyvsp[0].node));
      strcpy((yyval.node)->type, (yyvsp[0].node)->type);
    }
#line 3786 "src/syn.tab.c"
    break;

  case 94: /* arith_single: '-' expression  */
#line 708 "src/syn.y"
                   {
      (yyval.node) = create_node(ARITHMETIC_SINGLE);
      add_tree_operation_leaf((yyval.node), &(yyvsp[-1].token), MINUS_OP, type_check_num((yyvsp[0].node), (yyvsp[0].node), &(yyvsp[-1].token)));
      add_tree_node((yyval.node), (yyvsp[0].node));
      strcpy((yyval.node)->type, (yyvsp[0].node)->type);
    }
#line 3797 "src/syn.tab.c"
    break;

  case 95: /* lst_single: '%' expression  */
#line 717 "src/syn.y"
                 {
      (yyval.node) = create_node(LIST_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), POP_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3807 "src/syn.tab.c"
    break;

  case 96: /* lst_single: '?' expression  */
#line 722 "src/syn.y"
                   {
      (yyval.node) = create_node(LIST_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), HEAD_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3817 "src/syn.tab.c"
    break;


#line 3821 "src/syn.tab.c"

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

#line 729 "src/syn.y"

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
