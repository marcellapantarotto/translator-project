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

  t_node *root;

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
  YYSYMBOL_var_declaration = 49,           /* var_declaration  */
  YYSYMBOL_unq_declaration = 50,           /* unq_declaration  */
  YYSYMBOL_51_2 = 51,                      /* $@2  */
  YYSYMBOL_parameters = 52,                /* parameters  */
  YYSYMBOL_lst_parameters = 53,            /* lst_parameters  */
  YYSYMBOL_calling_parameters = 54,        /* calling_parameters  */
  YYSYMBOL_lst_calling_parameters = 55,    /* lst_calling_parameters  */
  YYSYMBOL_block_commands = 56,            /* block_commands  */
  YYSYMBOL_command = 57,                   /* command  */
  YYSYMBOL_58_3 = 58,                      /* $@3  */
  YYSYMBOL_init_variable = 59,             /* init_variable  */
  YYSYMBOL_conditional_stmt = 60,          /* conditional_stmt  */
  YYSYMBOL_return_stmt = 61,               /* return_stmt  */
  YYSYMBOL_iteration = 62,                 /* iteration  */
  YYSYMBOL_loop_condition = 63,            /* loop_condition  */
  YYSYMBOL_init_stmt = 64,                 /* init_stmt  */
  YYSYMBOL_update_stmt = 65,               /* update_stmt  */
  YYSYMBOL_output = 66,                    /* output  */
  YYSYMBOL_input = 67,                     /* input  */
  YYSYMBOL_func_calling = 68,              /* func_calling  */
  YYSYMBOL_expression = 69,                /* expression  */
  YYSYMBOL_const = 70,                     /* const  */
  YYSYMBOL_number = 71,                    /* number  */
  YYSYMBOL_type = 72,                      /* type  */
  YYSYMBOL_type_lst = 73,                  /* type_lst  */
  YYSYMBOL_type_number = 74,               /* type_number  */
  YYSYMBOL_operation = 75,                 /* operation  */
  YYSYMBOL_single_operation = 76,          /* single_operation  */
  YYSYMBOL_arith_binary = 77,              /* arith_binary  */
  YYSYMBOL_arith_single = 78,              /* arith_single  */
  YYSYMBOL_lst_single = 79,                /* lst_single  */
  YYSYMBOL_lst_binary = 80,                /* lst_binary  */
  YYSYMBOL_logical_op = 81,                /* logical_op  */
  YYSYMBOL_relational_op = 82              /* relational_op  */
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
#define YYLAST   5872

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  466

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
       0,   145,   145,   150,   157,   162,   170,   175,   180,   188,
     188,   201,   210,   210,   218,   223,   230,   236,   244,   248,
     255,   261,   268,   274,   280,   285,   290,   295,   300,   305,
     310,   315,   315,   322,   327,   335,   343,   351,   364,   373,
     384,   395,   404,   409,   416,   424,   432,   440,   451,   462,
     472,   477,   482,   487,   494,   499,   506,   510,   517,   522,
     530,   539,   543,   550,   555,   560,   566,   575,   580,   585,
     593,   599,   605,   611,   617,   625,   630,   638,   643,   651,
     656,   662,   671,   675,   682,   686,   690,   694,   698,   702
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
  "func_declaration", "$@1", "var_declaration", "unq_declaration", "$@2",
  "parameters", "lst_parameters", "calling_parameters",
  "lst_calling_parameters", "block_commands", "command", "$@3",
  "init_variable", "conditional_stmt", "return_stmt", "iteration",
  "loop_condition", "init_stmt", "update_stmt", "output", "input",
  "func_calling", "expression", "const", "number", "type", "type_lst",
  "type_number", "operation", "single_operation", "arith_binary",
  "arith_single", "lst_single", "lst_binary", "logical_op",
  "relational_op", YY_NULLPTR
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

#define YYPACT_NINF (-192)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-90)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      62,   106,    66,    67,     9,    12,   109,   170,   172,    15,
      -3,    13,    69,  -192,    22,   183,     7,    31,    33,     8,
      17,    68,    42,    45,    49,    55,    70,  3695,    63,  4447,
    4464,  4481,  1447,   583,    14,    74,    77,    96,   102,   583,
     583,   583,   583,   583,  2834,   100,   111,  2875,   110,  2916,
    2957,  2998,  3039,   113,  3080,  3121,  4498,  4515,  4532,  4549,
     674,  4566,  5399,  4583,  4600,   955,  3162,   158,   583,  2009,
    1236,   594,   130,   239,   400,   599,  4617,  4634,  4651,  4668,
    4685,   200,   119,  3695,  3203,   638,   638,   638,  3244,   681,
     748,   846,   864,   877,   919,   962,  1029,   638,   638,  1127,
    1127,  1127,  1127,   127,   139,  1388,  1403,  3285,    25,   121,
     147,   156,   177,   446,   189,  2874,   197,   181,  1418,  1517,
    1534,  1684,  1699,  5413,  5427,  5441,  5455,  4702,  1145,  3736,
    3695,   583,   196,   198,   204,   205,   206,  3326,   210,   135,
    3367,  1798,  3408,  3449,  3490,  3531,  3572,  3695,     4,  3613,
     211,   212,    -3,    -3,  3654,  3774,  3794,  3814,  1728,  1145,
    1145,  1145,  1145,  1145,  3834,  3854,  3874,  3894,  3914,  4722,
    3934,  3954,  1595,  4094,  4114,  4134,  3754,   594,   594,   594,
     594,   594,  4154,  4174,  4194,  4214,  4234,  5062,  4254,  4274,
    2915,   213,   216,   228,   176,   599,   599,   599,   599,   599,
     229,   230,   231,   237,   238,   240,  1815,  1965,  1980,  1782,
     638,   638,   638,   638,   638,  2079,  2096,  5731,  5741,  5751,
    5761,  5469,  5483,  5497,  4415,  1127,  1127,  1127,  1127,  1127,
    5511,  5525,  5539,  5553,  5567,  5581,  1158,  1158,  1200,  1200,
     236,   583,   201,   242,   243,   248,   249,   492,   246,   250,
     796,  1077,  1358,  1639,   247,  1920,  2219,  5771,   232,   268,
     269,   158,  3974,  3994,  4014,  4034,  4054,  1158,  1158,  1158,
    1243,  1243,  1243,  1243,   158,  4294,  4314,  4334,  4354,  4374,
    1200,  1200,  1200,  1310,  1310,  1310,  1310,   158,   258,   262,
     263,   264,   265,   158,  5781,  5791,  5801,  5811,  5821,   158,
    5595,  5609,  5623,  5637,  5651,  1669,  1876,  1950,  1502,  1158,
    1158,  1158,  1158,  1158,  2157,  2218,  2259,  2300,  2341,  2382,
    2423,  2464,  2956,  2997,  3038,  2178,  1200,  1200,  1200,  1200,
    1200,  3079,  3120,  3161,  3202,  3243,  3284,  3325,  3366,  2260,
    5831,   594,   130,   516,   532,   599,  2301,  3695,  2342,  2383,
     594,    71,   266,   267,  2505,  2546,  2587,  4739,  4756,  4773,
    2135,  1243,  1243,  1243,  1243,  1243,  4790,  4807,  4824,  4841,
    4858,  4875,  4892,  4909,  4926,  4943,   270,  3407,  3448,  3489,
    5079,  5096,  5113,  4433,  1310,  1310,  1310,  1310,  1310,  5130,
    5147,  5164,  5181,  5198,  5215,  5232,  5249,  5266,  5283,   271,
     272,   273,   158,  2628,  2669,  2710,  2751,  2792,   158,  3530,
    3571,  3612,  3653,  3694,  2424,  3735,   282,   283,  5682,   284,
    5695,   285,   293,  5708,  4074,   158,  4960,  4977,  4994,  5011,
    5028,  4394,   158,  5300,  5317,  5334,  5351,  5368,   301,  5841,
    5665,   303,   304,  3736,  3736,   309,   310,   311,   312,   324,
    2465,   307,   330,  2833,  5721,  2506,  2547,  2588,  2629,  2670,
    2711,  2752,  5045,  5385,  3736,  2793
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
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -192,  -192,   345,  -192,  -192,  -192,     2,     0,    60,  -192,
     335,  -191,   234,   -42,  -116,  -114,  -103,  -101,   -99,   -86,
      24,   -69,  -192,   -45,   -43,   382,    26,   663,   944,    10,
    -192,  -192,   -26,  1225,    86,  1506,  1787,  1792,   -24,    28
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,     7,    16,    44,    45,    17,    22,
      23,   103,   104,    46,    47,    48,    49,    50,    51,    52,
     110,    53,   151,    54,    55,    56,    57,    58,    59,   153,
      11,    12,   105,    61,    62,    63,    64,    65,   238,   239
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    60,     8,   111,   -12,    82,     9,    70,     8,    13,
      10,   258,    -2,   139,   140,   249,    10,     2,     3,    21,
     -58,    60,    -4,   -43,    21,    19,   250,   -15,   251,   152,
     252,   149,    71,    -9,   152,   -13,    97,    15,    20,   -13,
     -60,   117,   106,   253,   129,   108,    97,   113,   115,    89,
      90,    91,    92,    93,    94,    95,    96,    60,     2,     3,
     254,    25,    -3,     1,   -14,    76,    77,    78,    79,    80,
     353,     2,     3,   -61,   -62,    27,   -59,   -61,   -62,   150,
      18,   236,    97,   376,   255,    66,   256,   -17,    98,   -16,
     -13,    24,    72,   165,   -13,    73,   399,   183,    98,   183,
     183,   116,   400,   257,    60,   141,    -8,    -8,   401,    -5,
       1,   118,   119,   120,    74,    -8,    -8,    97,     2,     3,
      75,    60,   154,   121,   122,   123,   124,   125,   126,   248,
      83,   247,    81,   237,    98,    84,   -36,   109,   -36,   -36,
     -22,   -36,   -36,   -36,   -36,   -36,   127,   -36,   147,   -36,
     -36,   -36,   -36,   169,   165,   -36,   -36,   187,   -18,   187,
     187,   155,   156,    68,   157,   158,   130,   -36,   -36,    98,
      -6,    -6,    -7,    -7,   -36,   -36,   -36,   -19,   131,    -6,
      -6,    -7,    -7,   -11,   -11,   262,   263,   264,   265,   266,
     159,   160,   -11,   -11,   287,   -53,   132,   161,   162,   163,
     -10,   -10,   137,   275,   276,   277,   278,   279,   134,   -10,
     -10,   441,   259,   260,   169,   340,   136,   442,   142,   341,
     143,   288,   289,   290,   291,   292,   144,   145,   146,   -20,
     -42,   -40,   -56,    97,   451,   -57,   294,   295,   296,   297,
     298,   452,   173,   174,   112,   175,   176,   -55,   -50,   -52,
     -54,   300,   301,   302,   303,   304,   -51,   -67,   339,   -68,
     342,   343,   315,   321,   332,   338,   344,   345,   346,   348,
     347,   177,   178,   111,   350,   351,   352,   -75,   179,   180,
     181,   -76,   -77,   -78,   -69,    98,   424,   165,   -13,   431,
     438,   439,   440,   354,   355,   356,   367,   373,   374,   375,
     165,   444,   445,   447,   449,   422,   377,   378,   379,   390,
     396,   397,   398,   165,   450,   415,    97,   418,   420,   165,
     -49,    60,   453,   454,   423,   165,   462,   455,   456,   249,
     249,   457,   458,   459,   460,   403,   404,   405,   406,   407,
     250,   250,   251,   251,   252,   252,   461,   169,   465,   463,
     249,    14,   409,   410,   411,   412,   413,   253,   253,    26,
     169,   250,   138,   251,     0,   252,   416,   183,    98,   183,
     183,   421,     0,   169,   254,   254,   183,     0,   253,   169,
       0,     0,     0,     0,     0,   169,     0,   426,   427,   428,
     429,   430,     0,     0,     0,   254,     0,     0,   255,   255,
     256,   256,     0,   173,   174,   114,   175,   176,     0,     0,
     433,   434,   435,   436,   437,     0,     0,   257,   257,   255,
       0,   256,     0,     0,     0,     0,     0,   187,   165,   187,
     187,     0,   177,   178,   165,     0,   187,     0,   257,   179,
     180,   181,     0,   248,   248,   247,   247,     0,     0,   164,
       0,   165,     0,   182,     0,   182,   182,   200,   165,     0,
       0,     0,     0,     0,   248,   133,   247,   215,   215,   215,
      89,    90,    91,    92,    93,    94,    95,    96,     0,   215,
     215,   230,   230,   230,   230,     0,     0,     0,   169,     0,
       0,     0,     0,   -24,   169,   -24,   -24,     0,   -24,   -24,
     -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,
     164,   169,   -24,   -24,     0,     0,     0,     0,   169,   173,
     174,   417,   175,   176,   -24,   -24,     0,     0,     0,     0,
       0,   -24,   -24,   -24,     0,   173,   174,   419,   175,   176,
       0,   164,   164,   164,   164,   164,     0,     0,   177,   178,
       0,     0,     0,     0,     0,   179,   180,   181,     0,   182,
     182,   182,   182,   182,   177,   178,     0,     0,     0,     0,
       0,   179,   180,   181,     0,     0,     0,   200,   200,   200,
     200,   200,     0,     0,     0,     0,    29,    30,     0,    31,
      69,     0,   215,   215,   215,   215,   215,   173,   174,     0,
     175,   176,   191,   192,     0,   193,   194,   230,   230,   230,
     230,   230,     0,     0,     0,    39,    40,     0,   314,   314,
     331,   331,    41,    42,    43,     0,   177,   178,     0,     0,
       0,   195,   196,   179,   180,   181,     0,     0,   197,   198,
     199,   206,   207,   164,   208,   209,     0,     0,     0,   314,
     314,   314,   366,   366,   366,   366,   164,     0,     0,     0,
       0,     0,   331,   331,   331,   389,   389,   389,   389,   164,
     210,   211,     0,     0,     0,   164,     0,   212,   213,   214,
       0,   164,     0,     0,   -82,   -82,     0,   -82,   -82,     0,
       0,   314,   314,   314,   314,   314,    88,     0,    89,    90,
      91,    92,    93,    94,    95,    96,     0,     0,   331,   331,
     331,   331,   331,   -82,   -82,     0,     0,     0,     0,     0,
     -82,   -82,   -82,   182,     0,   182,   182,   200,     0,     0,
     166,     0,   182,     0,   184,     0,   184,   184,   201,     0,
       0,     0,     0,   366,   366,   366,   366,   366,   216,   216,
     216,   -83,   -83,     0,   -83,   -83,     0,     0,     0,     0,
     216,   216,   231,   231,   231,   231,   389,   389,   389,   389,
     389,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -83,   -83,     0,     0,   164,     0,     0,   -83,   -83,   -83,
     164,   166,     0,     0,     0,     0,     0,   -25,     0,   -25,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   164,   -25,   -25,
     -25,   -25,   -25,   -25,   164,     0,   -25,   -25,     0,     0,
       0,     0,   166,   166,   166,   166,   166,     0,   -25,   -25,
       0,     0,     0,     0,     0,   -25,   -25,   -25,     0,     0,
     184,   184,   184,   184,   184,     0,     0,     0,     0,   -84,
     -84,     0,   -84,   -84,     0,     0,     0,     0,   201,   201,
     201,   201,   201,     0,     0,     0,     0,   -85,   -85,     0,
     -85,   -85,     0,   216,   216,   216,   216,   216,   -84,   -84,
     -86,   -86,     0,   -86,   -86,   -84,   -84,   -84,   231,   231,
     231,   231,   231,     0,     0,     0,   -85,   -85,     0,   316,
     316,   333,   333,   -85,   -85,   -85,     0,     0,     0,   -86,
     -86,     0,     0,     0,     0,     0,   -86,   -86,   -86,     0,
       0,     0,   -87,   -87,   166,   -87,   -87,     0,     0,     0,
     316,   316,   316,   368,   368,   368,   368,   166,     0,     0,
       0,     0,     0,   333,   333,   333,   391,   391,   391,   391,
     166,   -87,   -87,     0,     0,     0,   166,     0,   -87,   -87,
     -87,     0,   166,     0,     0,   -88,   -88,     0,   -88,   -88,
       0,     0,   316,   316,   316,   316,   316,   -64,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,   333,
     333,   333,   333,   333,   -88,   -88,     0,     0,     0,     0,
       0,   -88,   -88,   -88,   184,     0,   184,   184,   201,     0,
       0,   167,     0,   184,     0,   185,     0,   185,   185,   202,
       0,     0,     0,     0,   368,   368,   368,   368,   368,   217,
     217,   217,   -89,   -89,     0,   -89,   -89,     0,     0,     0,
       0,   217,   217,   232,   232,   232,   232,   391,   391,   391,
     391,   391,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -89,   -89,     0,     0,   166,     0,     0,   -89,   -89,
     -89,   166,   167,     0,     0,     0,     0,     0,   -26,     0,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,   166,   -26,
     -26,   -26,   -26,   -26,   -26,   166,     0,   -26,   -26,     0,
       0,     0,     0,   167,   167,   167,   167,   167,     0,   -26,
     -26,     0,     0,     0,     0,     0,   -26,   -26,   -26,     0,
       0,   185,   185,   185,   185,   185,     0,     0,     0,     0,
     221,   222,     0,   223,   224,     0,     0,     0,     0,   202,
     202,   202,   202,   202,     0,     0,     0,     0,   155,   156,
       0,   157,   158,     0,   217,   217,   217,   217,   217,   225,
     226,   305,   306,     0,   307,   308,   227,   228,   229,   232,
     232,   232,   232,   232,     0,     0,     0,   159,   160,     0,
     317,   317,   334,   334,   161,   162,   163,     0,     0,     0,
     309,   310,     0,     0,     0,     0,     0,   311,   312,   313,
       0,     0,     0,   322,   323,   167,   324,   325,     0,     0,
       0,   317,   317,   317,   369,   369,   369,   369,   167,     0,
       0,     0,     0,     0,   334,   334,   334,   392,   392,   392,
     392,   167,   326,   327,     0,     0,     0,   167,     0,   328,
     329,   330,     0,   167,     0,     0,   357,   358,     0,   359,
     360,     0,     0,   317,   317,   317,   317,   317,   107,     0,
      89,    90,    91,    92,    93,    94,    95,    96,     0,     0,
     334,   334,   334,   334,   334,   361,   362,     0,     0,     0,
       0,     0,   363,   364,   365,   185,     0,   185,   185,   202,
       0,     0,   168,     0,   185,     0,   186,     0,   186,   186,
     203,     0,     0,     0,     0,   369,   369,   369,   369,   369,
     218,   218,   218,   380,   381,     0,   382,   383,     0,     0,
       0,     0,   218,   218,   233,   233,   233,   233,   392,   392,
     392,   392,   392,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   384,   385,     0,     0,   167,     0,     0,   386,
     387,   388,   167,   168,     0,     0,     0,     0,     0,   -27,
       0,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,   167,
     -27,   -27,   -27,   -27,   -27,   -27,   167,     0,   -27,   -27,
       0,     0,     0,     0,   168,   168,   168,   168,   168,     0,
     -27,   -27,     0,     0,     0,     0,     0,   -27,   -27,   -27,
       0,     0,   186,   186,   186,   186,   186,   -21,     0,     0,
       0,   128,    89,    90,    91,    92,    93,    94,    95,    96,
     203,   203,   203,   203,   203,   -41,     0,    89,    90,    91,
      92,    93,    94,    95,    96,   218,   218,   218,   218,   218,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     233,   233,   233,   233,   233,     0,     0,     0,     0,     0,
       0,   318,   318,   335,   335,    67,     0,     0,     0,   -53,
       0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   168,     0,     0,    68,
       0,     0,   318,   318,   318,   370,   370,   370,   370,   168,
       0,     0,     0,     0,     0,   335,   335,   335,   393,   393,
     393,   393,   168,     0,     0,     0,     0,     0,   168,     0,
     402,   -53,     0,     0,   168,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   318,   318,   318,   318,   318,   -80,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
       0,   335,   335,   335,   335,   335,   -81,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   186,     0,   186,   186,
     203,     0,     0,   170,     0,   186,     0,   188,     0,   188,
     188,   204,     0,     0,     0,     0,   370,   370,   370,   370,
     370,   219,   219,   219,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,   219,   234,   234,   234,   234,   393,
     393,   393,   393,   393,   -64,     0,     0,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   168,     0,     0,
       0,     0,     0,   168,   170,     0,     0,     0,     0,     0,
     -28,     0,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,
     168,   -28,   -28,   -28,   -28,   -28,   -28,   168,     0,   -28,
     -28,     0,     0,     0,     0,   170,   170,   170,   170,   170,
       0,   -28,   -28,     0,     0,     0,     0,     0,   -28,   -28,
     -28,     0,     0,   188,   188,   188,   188,   188,   -56,     0,
       0,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   204,   204,   204,   204,   204,   -66,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   219,   219,   219,   219,
     219,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   234,   234,   234,   234,   234,     0,     0,     0,     0,
       0,     0,   319,   319,   336,   336,   261,   -53,     0,     0,
       0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   170,     0,     0,
       0,     0,     0,   319,   319,   319,   371,   371,   371,   371,
     170,     0,     0,     0,     0,     0,   336,   336,   336,   394,
     394,   394,   394,   170,     0,     0,     0,     0,     0,   170,
     293,     0,     0,     0,   -53,   170,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,     0,   319,   319,   319,   319,   319,
     148,     0,    89,    90,    91,    92,    93,    94,    95,    96,
       0,     0,   336,   336,   336,   336,   336,   -56,     0,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   188,     0,   188,
     188,   204,     0,     0,   171,     0,   188,     0,   189,   172,
     189,   189,   205,   190,     0,   190,   190,   371,   371,   371,
     371,   371,   220,   220,   220,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   220,   220,   235,   235,   235,   235,
     394,   394,   394,   394,   394,   -57,     0,     0,     0,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   170,     0,
       0,     0,     0,     0,   170,   171,     0,     0,     0,     0,
     172,   -30,     0,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -30,   170,   -30,   -30,   -30,   -30,   -30,   -30,   170,     0,
     -30,   -30,     0,     0,     0,     0,   171,   171,   171,   171,
     171,     0,   -30,   -30,     0,     0,     0,     0,     0,   -30,
     -30,   -30,     0,     0,   189,   189,   189,   189,   189,   -55,
       0,     0,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   205,   205,   205,   205,   205,   -57,     0,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   220,   220,   220,
     220,   220,   -55,     0,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   235,   235,   235,   235,   235,     0,     0,     0,
       0,     0,     0,   320,   320,   337,   337,    67,     0,     0,
       0,   -53,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   171,     0,
       0,     0,     0,   172,   320,   320,   320,   372,   372,   372,
     372,   171,     0,     0,     0,     0,   172,   337,   337,   337,
     395,   395,   395,   395,   171,     0,     0,     0,     0,   172,
     171,     0,     0,     0,     0,   172,   171,     0,     0,     0,
       0,   172,     0,     0,     0,     0,   320,   320,   320,   320,
     320,   -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,     0,     0,   337,   337,   337,   337,   337,   -52,     0,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   189,     0,
     189,   189,   205,   190,     0,   190,   190,   189,     0,     0,
       0,     0,   190,     0,     0,     0,     0,     0,   372,   372,
     372,   372,   372,   425,   -53,     0,     0,     0,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   395,   395,   395,   395,   395,   -50,     0,     0,     0,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   171,
       0,     0,     0,     0,   172,   171,   408,   -53,     0,     0,
     172,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
       0,     0,   171,     0,     0,     0,     0,   172,     0,   171,
     -29,     0,   -29,   -29,   172,   -29,   -29,   -29,   -29,   -29,
       0,   -29,   -29,   -29,   -29,   -29,   -29,   -66,     0,   -29,
     -29,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,   -29,   -29,     0,     0,     0,     0,     0,   -29,   -29,
     -29,   -34,     0,   -34,   -34,     0,   -34,   -34,   -34,   -34,
     -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -52,     0,
     -34,   -34,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,     0,   -34,   -34,     0,     0,     0,     0,     0,   -34,
     -34,   -34,   -11,     0,   -11,   -11,     0,   -11,   -11,   -11,
     -11,   -11,     0,   -11,   -11,   -11,   -11,   -11,   -11,   -54,
       0,   -11,   -11,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,     0,   -11,   -11,     0,     0,     0,     0,     0,
     -11,   -11,   -11,   -35,     0,   -35,   -35,     0,   -35,   -35,
     -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,
     -51,     0,   -35,   -35,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,     0,   -35,   -35,     0,     0,     0,     0,
       0,   -35,   -35,   -35,   -33,     0,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,
     -33,   -67,     0,   -33,   -33,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,     0,   -33,   -33,     0,     0,     0,
       0,     0,   -33,   -33,   -33,   -38,     0,   -38,   -38,     0,
     -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,
     -38,   -38,   -68,     0,   -38,   -38,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,     0,   -38,   -38,     0,     0,
       0,     0,     0,   -38,   -38,   -38,   -32,     0,   -32,   -32,
       0,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,
     -32,   -32,   -32,   -65,     0,   -32,   -32,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,     0,   -32,   -32,     0,
       0,     0,     0,     0,   -32,   -32,   -32,   -36,     0,   -36,
     -36,     0,   -36,   -36,   -36,   -36,   -36,     0,   -36,   464,
     -36,   -36,   -36,   -36,   -79,     0,   -36,   -36,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -36,   -36,
       0,     0,     0,     0,     0,   -36,   -36,   -36,   -39,     0,
     -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,     0,   -39,
     -39,   -39,   -39,   -39,   -39,   -80,     0,   -39,   -39,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -39,
     -39,     0,     0,     0,     0,     0,   -39,   -39,   -39,   -46,
       0,   -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,     0,
     -46,   -46,   -46,   -46,   -46,   -46,   -81,     0,   -46,   -46,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,
     -46,   -46,     0,     0,     0,     0,     0,   -46,   -46,   -46,
     -44,     0,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,
       0,   -44,   -44,   -44,   -44,   -44,   -44,   -75,     0,   -44,
     -44,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,   -44,   -44,     0,     0,     0,     0,     0,   -44,   -44,
     -44,   -47,     0,   -47,   -47,     0,   -47,   -47,   -47,   -47,
     -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -76,     0,
     -47,   -47,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,   -47,   -47,     0,     0,     0,     0,     0,   -47,
     -47,   -47,   -45,     0,   -45,   -45,     0,   -45,   -45,   -45,
     -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -77,
       0,   -45,   -45,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,   -45,   -45,     0,     0,     0,     0,     0,
     -45,   -45,   -45,   -48,     0,   -48,   -48,     0,   -48,   -48,
     -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,
     -78,     0,   -48,   -48,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,   -48,   -48,     0,     0,     0,     0,
       0,   -48,   -48,   -48,   -37,     0,   -37,   -37,     0,   -37,
     -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,
     -37,   -69,     0,   -37,   -37,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,     0,   -37,   -37,     0,     0,     0,
       0,     0,   -37,   -37,   -37,   -24,     0,   -24,   -24,     0,
     -24,   -24,   -24,   -24,   -24,     0,   -24,     0,   -24,   -24,
     -24,   -24,   -49,     0,   -24,   -24,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,     0,   -24,   -24,     0,     0,
       0,     0,     0,   -24,   -24,   -24,    28,     0,    29,    30,
       0,    31,    32,    33,     2,     3,     0,    34,     0,    35,
      36,    37,    38,   135,     0,   -31,   -23,     0,    89,    90,
      91,    92,    93,    94,    95,    96,     0,    39,    40,     0,
       0,     0,     0,     0,    41,    42,    43,   -25,     0,   -25,
     -25,     0,   -25,   -25,   -25,   -25,   -25,     0,   -25,     0,
     -25,   -25,   -25,   -25,   -64,     0,   -25,   -25,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,   -25,   -25,
       0,     0,     0,     0,     0,   -25,   -25,   -25,   -26,     0,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,     0,   -26,
       0,   -26,   -26,   -26,   -26,   -56,     0,   -26,   -26,     0,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,   -26,
     -26,     0,     0,     0,     0,     0,   -26,   -26,   -26,   -27,
       0,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,     0,
     -27,     0,   -27,   -27,   -27,   -27,   -57,     0,   -27,   -27,
       0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,
     -27,   -27,     0,     0,     0,     0,     0,   -27,   -27,   -27,
     -28,     0,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,
       0,   -28,     0,   -28,   -28,   -28,   -28,   -55,     0,   -28,
     -28,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
       0,   -28,   -28,     0,     0,     0,     0,     0,   -28,   -28,
     -28,   -30,     0,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -30,     0,   -30,     0,   -30,   -30,   -30,   -30,   -50,     0,
     -30,   -30,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,     0,   -30,   -30,     0,     0,     0,     0,     0,   -30,
     -30,   -30,   -29,     0,   -29,   -29,     0,   -29,   -29,   -29,
     -29,   -29,     0,   -29,     0,   -29,   -29,   -29,   -29,   -66,
       0,   -29,   -29,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,   -29,   -29,     0,     0,     0,     0,     0,
     -29,   -29,   -29,   -34,     0,   -34,   -34,     0,   -34,   -34,
     -34,   -34,   -34,     0,   -34,     0,   -34,   -34,   -34,   -34,
     -52,     0,   -34,   -34,     0,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,     0,   -34,   -34,     0,     0,     0,     0,
       0,   -34,   -34,   -34,   -35,     0,   -35,   -35,     0,   -35,
     -35,   -35,   -35,   -35,     0,   -35,     0,   -35,   -35,   -35,
     -35,   -54,     0,   -35,   -35,     0,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,     0,   -35,   -35,     0,     0,     0,
       0,     0,   -35,   -35,   -35,   -33,     0,   -33,   -33,     0,
     -33,   -33,   -33,   -33,   -33,     0,   -33,     0,   -33,   -33,
     -33,   -33,   -51,     0,   -33,   -33,     0,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,     0,   -33,   -33,     0,     0,
       0,     0,     0,   -33,   -33,   -33,   -38,     0,   -38,   -38,
       0,   -38,   -38,   -38,   -38,   -38,     0,   -38,     0,   -38,
     -38,   -38,   -38,   -67,     0,   -38,   -38,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,   -38,   -38,     0,
       0,     0,     0,     0,   -38,   -38,   -38,   -32,     0,   -32,
     -32,     0,   -32,   -32,   -32,   -32,   -32,     0,   -32,     0,
     -32,   -32,   -32,   -32,   -68,     0,   -32,   -32,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,   -32,   -32,
       0,     0,     0,     0,     0,   -32,   -32,   -32,   -39,     0,
     -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,     0,   -39,
       0,   -39,   -39,   -39,   -39,   -65,     0,   -39,   -39,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -39,
     -39,     0,     0,     0,     0,     0,   -39,   -39,   -39,   -46,
       0,   -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,     0,
     -46,     0,   -46,   -46,   -46,   -46,   -79,     0,   -46,   -46,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,
     -46,   -46,     0,     0,     0,     0,     0,   -46,   -46,   -46,
     -44,     0,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,
       0,   -44,     0,   -44,   -44,   -44,   -44,   -80,     0,   -44,
     -44,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,   -44,   -44,     0,     0,     0,     0,     0,   -44,   -44,
     -44,   -47,     0,   -47,   -47,     0,   -47,   -47,   -47,   -47,
     -47,     0,   -47,     0,   -47,   -47,   -47,   -47,   -81,     0,
     -47,   -47,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,     0,   -47,   -47,     0,     0,     0,     0,     0,   -47,
     -47,   -47,   -45,     0,   -45,   -45,     0,   -45,   -45,   -45,
     -45,   -45,     0,   -45,     0,   -45,   -45,   -45,   -45,   -75,
       0,   -45,   -45,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,     0,   -45,   -45,     0,     0,     0,     0,     0,
     -45,   -45,   -45,   -48,     0,   -48,   -48,     0,   -48,   -48,
     -48,   -48,   -48,     0,   -48,     0,   -48,   -48,   -48,   -48,
     -76,     0,   -48,   -48,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,   -48,   -48,     0,     0,     0,     0,
       0,   -48,   -48,   -48,   -37,     0,   -37,   -37,     0,   -37,
     -37,   -37,   -37,   -37,     0,   -37,     0,   -37,   -37,   -37,
     -37,   -77,     0,   -37,   -37,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,   -37,   -37,     0,     0,     0,
       0,     0,   -37,   -37,   -37,   -11,     0,   -11,   -11,     0,
     -11,   -11,   -11,   -11,   -11,     0,   -11,     0,   -11,   -11,
     -11,   -11,   -78,     0,   -11,   -11,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,   -11,   -11,     0,     0,
       0,     0,     0,   -11,   -11,   -11,    28,     0,    29,    30,
       0,    31,    32,    33,     2,     3,     0,    34,     0,    35,
      36,    37,    38,   -69,     0,   -31,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,    39,    40,     0,
       0,     0,     0,     0,    41,    42,    43,   240,     0,    29,
      30,     0,    31,    32,   241,     2,     3,     0,   242,     0,
     243,   244,   245,   246,   443,     0,   -31,     0,     0,    89,
      90,    91,    92,    93,    94,    95,    96,     0,    39,    40,
       0,     0,   274,   -53,     0,    41,    42,    43,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -56,     0,     0,     0,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -57,     0,     0,     0,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -55,     0,     0,     0,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -50,     0,     0,     0,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -74,     0,     0,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     267,   268,   269,   -52,     0,     0,     0,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -54,     0,     0,     0,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -51,     0,     0,     0,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -67,     0,     0,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -68,     0,     0,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -75,     0,     0,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -76,     0,     0,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -77,     0,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -78,     0,     0,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -69,     0,     0,     0,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -49,     0,     0,     0,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -56,     0,     0,     0,     0,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -57,     0,     0,     0,     0,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -55,     0,     0,     0,     0,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -50,     0,     0,     0,     0,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -74,     0,     0,     0,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     280,   281,   282,   -52,     0,     0,     0,     0,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -54,     0,     0,     0,     0,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -51,     0,     0,     0,     0,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -67,     0,     0,     0,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -68,     0,     0,     0,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -75,     0,     0,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -76,     0,     0,     0,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -77,     0,     0,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -78,     0,     0,     0,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -69,     0,     0,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -49,     0,     0,     0,     0,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   299,     0,     0,     0,   -53,     0,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   432,   -53,     0,     0,     0,     0,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -56,
       0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -57,     0,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -55,     0,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -74,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,    85,    86,    87,   -52,     0,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -54,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -51,     0,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -67,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -76,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -49,     0,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -63,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   270,   271,   272,   273,   -56,     0,
       0,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -57,     0,     0,     0,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -55,     0,     0,     0,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -50,
       0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -70,     0,     0,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -52,     0,     0,     0,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -54,     0,     0,     0,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -51,     0,     0,
       0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -67,     0,     0,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -68,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -71,     0,
       0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -72,     0,     0,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -73,     0,     0,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -75,
       0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -76,     0,     0,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -77,     0,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -78,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -69,     0,     0,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -49,     0,     0,     0,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -63,     0,     0,     0,     0,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   283,   284,   285,   286,   -56,     0,
       0,     0,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -57,     0,     0,     0,     0,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -55,     0,     0,     0,     0,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -50,
       0,     0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -70,     0,     0,     0,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -52,     0,     0,     0,     0,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -54,     0,     0,     0,     0,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -51,     0,     0,
       0,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -67,     0,     0,     0,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -68,     0,     0,     0,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -71,     0,
       0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -72,     0,     0,     0,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -73,     0,     0,     0,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -75,
       0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -76,     0,     0,     0,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -77,     0,     0,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -78,     0,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -69,     0,     0,
       0,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -49,     0,     0,     0,     0,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -63,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,    99,   100,   101,   102,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -71,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -72,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -56,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -57,     0,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -55,
       0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -50,     0,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -52,     0,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -54,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -51,     0,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -67,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -68,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -77,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -78,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -69,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -49,     0,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   446,     0,     0,     0,     0,    89,    90,    91,    92,
      93,    94,    95,    96,   448,     0,     0,     0,     0,    89,
      90,    91,    92,    93,    94,    95,    96,   -41,     0,     0,
       0,     0,    89,    90,    91,    92,    93,    94,    95,    96,
     -49,     0,     0,     0,     0,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -54,     0,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -51,     0,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -67,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -68,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   349,     0,    89,    90,    91,    92,    93,
      94,    95,    96,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -78,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -69,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   414,     0,    89,    90,    91,    92,    93,
      94,    95,    96,   -49,     0,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49
};

static const yytype_int16 yycheck[] =
{
       0,    27,     0,    72,     7,    47,     6,    33,     6,     0,
       0,     7,     0,   129,   130,   129,     6,     9,    10,    19,
       7,    47,     0,    19,    24,    18,   129,    19,   129,    19,
     129,   147,    18,    18,    24,    18,    60,    22,     7,    22,
       7,    83,    68,   129,    19,    71,    70,    73,    74,    24,
      25,    26,    27,    28,    29,    30,    31,    83,     9,    10,
     129,    19,     0,     1,    19,    39,    40,    41,    42,    43,
     261,     9,    10,     7,     7,    20,     7,    11,    11,   148,
      11,   105,   106,   274,   129,    22,   129,    19,    60,    19,
      19,    23,    18,    67,    23,    18,   287,    71,    70,    73,
      74,    75,   293,   129,   130,   131,     0,     1,   299,     0,
       1,    85,    86,    87,    18,     9,    10,   141,     9,    10,
      18,   147,    22,    97,    98,    99,   100,   101,   102,   129,
      20,   129,    21,   105,   106,    22,     1,     7,     3,     4,
      21,     6,     7,     8,     9,    10,    19,    12,    13,    14,
      15,    16,    17,    67,   128,    20,    21,    71,    19,    73,
      74,     3,     4,    42,     6,     7,    19,    32,    33,   141,
       0,     1,     0,     1,    39,    40,    41,    19,    22,     9,
      10,     9,    10,     0,     1,   159,   160,   161,   162,   163,
      32,    33,     9,    10,    18,    19,    19,    39,    40,    41,
       0,     1,    21,   177,   178,   179,   180,   181,    19,     9,
      10,   402,   152,   153,   128,   241,    19,   408,    22,    18,
      22,   195,   196,   197,   198,   199,    22,    22,    22,    19,
      19,    19,    19,   257,   425,    19,   210,   211,   212,   213,
     214,   432,     3,     4,     5,     6,     7,    19,    19,    19,
      19,   225,   226,   227,   228,   229,    19,    19,    22,    19,
      18,    18,   236,   237,   238,   239,    18,    18,    22,    22,
      20,    32,    33,   342,    42,     7,     7,    19,    39,    40,
      41,    19,    19,    19,    19,   257,    19,   261,    22,    19,
      19,    19,    19,   267,   268,   269,   270,   271,   272,   273,
     274,    19,    19,    19,    19,   347,   280,   281,   282,   283,
     284,   285,   286,   287,    21,   341,   340,   343,   344,   293,
      19,   347,    19,    19,   350,   299,    19,   443,   444,   443,
     444,    22,    22,    22,    22,   309,   310,   311,   312,   313,
     443,   444,   443,   444,   443,   444,    22,   261,   464,    19,
     464,     6,   326,   327,   328,   329,   330,   443,   444,    24,
     274,   464,   128,   464,    -1,   464,   342,   341,   340,   343,
     344,   345,    -1,   287,   443,   444,   350,    -1,   464,   293,
      -1,    -1,    -1,    -1,    -1,   299,    -1,   361,   362,   363,
     364,   365,    -1,    -1,    -1,   464,    -1,    -1,   443,   444,
     443,   444,    -1,     3,     4,     5,     6,     7,    -1,    -1,
     384,   385,   386,   387,   388,    -1,    -1,   443,   444,   464,
      -1,   464,    -1,    -1,    -1,    -1,    -1,   341,   402,   343,
     344,    -1,    32,    33,   408,    -1,   350,    -1,   464,    39,
      40,    41,    -1,   443,   444,   443,   444,    -1,    -1,    67,
      -1,   425,    -1,    71,    -1,    73,    74,    75,   432,    -1,
      -1,    -1,    -1,    -1,   464,    19,   464,    85,    86,    87,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    97,
      98,    99,   100,   101,   102,    -1,    -1,    -1,   402,    -1,
      -1,    -1,    -1,     1,   408,     3,     4,    -1,     6,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
     128,   425,    20,    21,    -1,    -1,    -1,    -1,   432,     3,
       4,     5,     6,     7,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,     3,     4,     5,     6,     7,
      -1,   159,   160,   161,   162,   163,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,   177,
     178,   179,   180,   181,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,   195,   196,   197,
     198,   199,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,
       7,    -1,   210,   211,   212,   213,   214,     3,     4,    -1,
       6,     7,     3,     4,    -1,     6,     7,   225,   226,   227,
     228,   229,    -1,    -1,    -1,    32,    33,    -1,   236,   237,
     238,   239,    39,    40,    41,    -1,    32,    33,    -1,    -1,
      -1,    32,    33,    39,    40,    41,    -1,    -1,    39,    40,
      41,     3,     4,   261,     6,     7,    -1,    -1,    -1,   267,
     268,   269,   270,   271,   272,   273,   274,    -1,    -1,    -1,
      -1,    -1,   280,   281,   282,   283,   284,   285,   286,   287,
      32,    33,    -1,    -1,    -1,   293,    -1,    39,    40,    41,
      -1,   299,    -1,    -1,     3,     4,    -1,     6,     7,    -1,
      -1,   309,   310,   311,   312,   313,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,   326,   327,
     328,   329,   330,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,   341,    -1,   343,   344,   345,    -1,    -1,
      67,    -1,   350,    -1,    71,    -1,    73,    74,    75,    -1,
      -1,    -1,    -1,   361,   362,   363,   364,   365,    85,    86,
      87,     3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,
      97,    98,    99,   100,   101,   102,   384,   385,   386,   387,
     388,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,   402,    -1,    -1,    39,    40,    41,
     408,   128,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,    -1,     6,     7,     8,     9,    10,   425,    12,    13,
      14,    15,    16,    17,   432,    -1,    20,    21,    -1,    -1,
      -1,    -1,   159,   160,   161,   162,   163,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
     177,   178,   179,   180,   181,    -1,    -1,    -1,    -1,     3,
       4,    -1,     6,     7,    -1,    -1,    -1,    -1,   195,   196,
     197,   198,   199,    -1,    -1,    -1,    -1,     3,     4,    -1,
       6,     7,    -1,   210,   211,   212,   213,   214,    32,    33,
       3,     4,    -1,     6,     7,    39,    40,    41,   225,   226,
     227,   228,   229,    -1,    -1,    -1,    32,    33,    -1,   236,
     237,   238,   239,    39,    40,    41,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    -1,     3,     4,   261,     6,     7,    -1,    -1,    -1,
     267,   268,   269,   270,   271,   272,   273,   274,    -1,    -1,
      -1,    -1,    -1,   280,   281,   282,   283,   284,   285,   286,
     287,    32,    33,    -1,    -1,    -1,   293,    -1,    39,    40,
      41,    -1,   299,    -1,    -1,     3,     4,    -1,     6,     7,
      -1,    -1,   309,   310,   311,   312,   313,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,   326,
     327,   328,   329,   330,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,   341,    -1,   343,   344,   345,    -1,
      -1,    67,    -1,   350,    -1,    71,    -1,    73,    74,    75,
      -1,    -1,    -1,    -1,   361,   362,   363,   364,   365,    85,
      86,    87,     3,     4,    -1,     6,     7,    -1,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,   384,   385,   386,
     387,   388,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,   402,    -1,    -1,    39,    40,
      41,   408,   128,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,    -1,     6,     7,     8,     9,    10,   425,    12,
      13,    14,    15,    16,    17,   432,    -1,    20,    21,    -1,
      -1,    -1,    -1,   159,   160,   161,   162,   163,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,   177,   178,   179,   180,   181,    -1,    -1,    -1,    -1,
       3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,   195,
     196,   197,   198,   199,    -1,    -1,    -1,    -1,     3,     4,
      -1,     6,     7,    -1,   210,   211,   212,   213,   214,    32,
      33,     3,     4,    -1,     6,     7,    39,    40,    41,   225,
     226,   227,   228,   229,    -1,    -1,    -1,    32,    33,    -1,
     236,   237,   238,   239,    39,    40,    41,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,     3,     4,   261,     6,     7,    -1,    -1,
      -1,   267,   268,   269,   270,   271,   272,   273,   274,    -1,
      -1,    -1,    -1,    -1,   280,   281,   282,   283,   284,   285,
     286,   287,    32,    33,    -1,    -1,    -1,   293,    -1,    39,
      40,    41,    -1,   299,    -1,    -1,     3,     4,    -1,     6,
       7,    -1,    -1,   309,   310,   311,   312,   313,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
     326,   327,   328,   329,   330,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,   341,    -1,   343,   344,   345,
      -1,    -1,    67,    -1,   350,    -1,    71,    -1,    73,    74,
      75,    -1,    -1,    -1,    -1,   361,   362,   363,   364,   365,
      85,    86,    87,     3,     4,    -1,     6,     7,    -1,    -1,
      -1,    -1,    97,    98,    99,   100,   101,   102,   384,   385,
     386,   387,   388,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,   402,    -1,    -1,    39,
      40,    41,   408,   128,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,    -1,     6,     7,     8,     9,    10,   425,
      12,    13,    14,    15,    16,    17,   432,    -1,    20,    21,
      -1,    -1,    -1,    -1,   159,   160,   161,   162,   163,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,   177,   178,   179,   180,   181,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
     195,   196,   197,   198,   199,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,   210,   211,   212,   213,   214,
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
     225,   226,   227,   228,   229,    -1,    -1,    -1,    -1,    -1,
      -1,   236,   237,   238,   239,    18,    -1,    -1,    -1,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,   261,    -1,    -1,    42,
      -1,    -1,   267,   268,   269,   270,   271,   272,   273,   274,
      -1,    -1,    -1,    -1,    -1,   280,   281,   282,   283,   284,
     285,   286,   287,    -1,    -1,    -1,    -1,    -1,   293,    -1,
      18,    19,    -1,    -1,   299,    23,    24,    25,    26,    27,
      28,    29,    30,    31,   309,   310,   311,   312,   313,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,   326,   327,   328,   329,   330,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,   341,    -1,   343,   344,
     345,    -1,    -1,    67,    -1,   350,    -1,    71,    -1,    73,
      74,    75,    -1,    -1,    -1,    -1,   361,   362,   363,   364,
     365,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    97,    98,    99,   100,   101,   102,   384,
     385,   386,   387,   388,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,   402,    -1,    -1,
      -1,    -1,    -1,   408,   128,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
     425,    12,    13,    14,    15,    16,    17,   432,    -1,    20,
      21,    -1,    -1,    -1,    -1,   159,   160,   161,   162,   163,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,   177,   178,   179,   180,   181,    19,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,   195,   196,   197,   198,   199,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,   210,   211,   212,   213,
     214,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,   225,   226,   227,   228,   229,    -1,    -1,    -1,    -1,
      -1,    -1,   236,   237,   238,   239,    18,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,   261,    -1,    -1,
      -1,    -1,    -1,   267,   268,   269,   270,   271,   272,   273,
     274,    -1,    -1,    -1,    -1,    -1,   280,   281,   282,   283,
     284,   285,   286,   287,    -1,    -1,    -1,    -1,    -1,   293,
      18,    -1,    -1,    -1,    22,   299,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,   309,   310,   311,   312,   313,
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,   326,   327,   328,   329,   330,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,   341,    -1,   343,
     344,   345,    -1,    -1,    67,    -1,   350,    -1,    71,    67,
      73,    74,    75,    71,    -1,    73,    74,   361,   362,   363,
     364,   365,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    97,    98,    99,   100,   101,   102,
     384,   385,   386,   387,   388,    19,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,   402,    -1,
      -1,    -1,    -1,    -1,   408,   128,    -1,    -1,    -1,    -1,
     128,     1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      10,   425,    12,    13,    14,    15,    16,    17,   432,    -1,
      20,    21,    -1,    -1,    -1,    -1,   159,   160,   161,   162,
     163,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,   177,   178,   179,   180,   181,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,   195,   196,   197,   198,   199,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,   210,   211,   212,
     213,   214,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,   225,   226,   227,   228,   229,    -1,    -1,    -1,
      -1,    -1,    -1,   236,   237,   238,   239,    18,    -1,    -1,
      -1,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,   261,    -1,
      -1,    -1,    -1,   261,   267,   268,   269,   270,   271,   272,
     273,   274,    -1,    -1,    -1,    -1,   274,   280,   281,   282,
     283,   284,   285,   286,   287,    -1,    -1,    -1,    -1,   287,
     293,    -1,    -1,    -1,    -1,   293,   299,    -1,    -1,    -1,
      -1,   299,    -1,    -1,    -1,    -1,   309,   310,   311,   312,
     313,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,   326,   327,   328,   329,   330,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,   341,    -1,
     343,   344,   345,   341,    -1,   343,   344,   350,    -1,    -1,
      -1,    -1,   350,    -1,    -1,    -1,    -1,    -1,   361,   362,
     363,   364,   365,    18,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,   384,   385,   386,   387,   388,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,   402,
      -1,    -1,    -1,    -1,   402,   408,    18,    19,    -1,    -1,
     408,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,   425,    -1,    -1,    -1,    -1,   425,    -1,   432,
       1,    -1,     3,     4,   432,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    19,    -1,    20,
      21,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    19,    -1,
      20,    21,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    19,
      -1,    20,    21,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      19,    -1,    20,    21,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    19,    -1,    20,    21,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    19,    -1,    20,    21,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    19,    -1,    20,    21,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    19,    -1,    20,    21,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    19,    -1,    20,    21,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    19,    -1,    20,    21,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    19,    -1,    20,
      21,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    19,    -1,
      20,    21,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    19,
      -1,    20,    21,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      19,    -1,    20,    21,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    19,    -1,    20,    21,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    19,    -1,    20,    21,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    19,    -1,    20,    21,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    19,    -1,    20,    21,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    19,    -1,    20,    21,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    19,    -1,    20,    21,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    19,    -1,    20,
      21,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    19,    -1,
      20,    21,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    19,
      -1,    20,    21,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      19,    -1,    20,    21,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    19,    -1,    20,    21,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    19,    -1,    20,    21,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    19,    -1,    20,    21,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    19,    -1,    20,    21,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    19,    -1,    20,    21,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    19,    -1,    20,    21,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    19,    -1,    20,
      21,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    19,    -1,
      20,    21,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    19,
      -1,    20,    21,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      19,    -1,    20,    21,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    19,    -1,    20,    21,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    19,    -1,    20,    21,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    19,    -1,    20,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    19,    -1,    20,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    32,    33,
      -1,    -1,    18,    19,    -1,    39,    40,    41,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    18,    -1,    -1,    -1,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    18,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    22,
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
      38,    19,    -1,    -1,    -1,    23,    24,    25,    26,    27,
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
      32,    33,    34,    35,    19,    -1,    -1,    -1,    23,    24,
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
      32,    33,    34,    35,    19,    -1,    -1,    -1,    -1,    24,
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
      29,    30,    31,    32,    33,    34,    35,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     9,    10,    44,    45,    46,    47,    49,    50,
      72,    73,    74,     0,    45,    22,    48,    51,    11,    18,
       7,    50,    52,    53,    23,    19,    53,    20,     1,     3,
       4,     6,     7,     8,    12,    14,    15,    16,    17,    32,
      33,    39,    40,    41,    49,    50,    56,    57,    58,    59,
      60,    61,    62,    64,    66,    67,    68,    69,    70,    71,
      75,    76,    77,    78,    79,    80,    22,    18,    42,     7,
      75,    18,    18,    18,    18,    18,    69,    69,    69,    69,
      69,    21,    56,    20,    22,    36,    37,    38,    22,    24,
      25,    26,    27,    28,    29,    30,    31,    81,    82,    32,
      33,    34,    35,    54,    55,    75,    75,    22,    75,     7,
      63,    64,     5,    75,     5,    75,    69,    56,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    19,    23,    19,
      19,    22,    19,    19,    19,    19,    19,    21,    55,    57,
      57,    75,    22,    22,    22,    22,    22,    13,    22,    57,
      64,    65,    72,    72,    22,     3,     4,     6,     7,    32,
      33,    39,    40,    41,    68,    69,    70,    71,    76,    77,
      78,    79,    80,     3,     4,     6,     7,    32,    33,    39,
      40,    41,    68,    69,    70,    71,    76,    77,    78,    79,
      80,     3,     4,     6,     7,    32,    33,    39,    40,    41,
      68,    70,    71,    76,    78,    79,     3,     4,     6,     7,
      32,    33,    39,    40,    41,    68,    70,    71,    76,    78,
      79,     3,     4,     6,     7,    32,    33,    39,    40,    41,
      68,    70,    71,    76,    78,    79,    81,    82,    81,    82,
       1,     8,    12,    14,    15,    16,    17,    49,    50,    58,
      59,    60,    61,    62,    64,    66,    67,    75,     7,    51,
      51,    18,    69,    69,    69,    69,    69,    36,    37,    38,
      32,    33,    34,    35,    18,    69,    69,    69,    69,    69,
      36,    37,    38,    32,    33,    34,    35,    18,    69,    69,
      69,    69,    69,    18,    69,    69,    69,    69,    69,    18,
      69,    69,    69,    69,    69,     3,     4,     6,     7,    32,
      33,    39,    40,    41,    68,    69,    70,    71,    76,    78,
      79,    69,     3,     4,     6,     7,    32,    33,    39,    40,
      41,    68,    69,    70,    71,    76,    78,    79,    69,    22,
      75,    18,    18,    18,    18,    18,    22,    20,    22,    22,
      42,     7,     7,    54,    69,    69,    69,     3,     4,     6,
       7,    32,    33,    39,    40,    41,    68,    69,    70,    71,
      76,    78,    79,    69,    69,    69,    54,    69,    69,    69,
       3,     4,     6,     7,    32,    33,    39,    40,    41,    68,
      69,    70,    71,    76,    78,    79,    69,    69,    69,    54,
      54,    54,    18,    69,    69,    69,    69,    69,    18,    69,
      69,    69,    69,    69,    22,    75,    63,     5,    75,     5,
      75,    69,    56,    75,    19,    18,    69,    69,    69,    69,
      69,    19,    18,    69,    69,    69,    69,    69,    19,    19,
      19,    54,    54,    19,    19,    19,    19,    19,    19,    19,
      21,    54,    54,    19,    19,    57,    57,    22,    22,    22,
      22,    22,    19,    19,    13,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    45,    45,    46,    46,    46,    48,
      47,    49,    51,    50,    52,    52,    53,    53,    54,    54,
      55,    55,    56,    56,    57,    57,    57,    57,    57,    57,
      57,    58,    57,    57,    57,    59,    60,    60,    61,    62,
      63,    64,    65,    65,    66,    66,    66,    66,    67,    68,
      69,    69,    69,    69,    70,    70,    71,    71,    72,    72,
      73,    74,    74,    75,    75,    75,    75,    76,    76,    76,
      77,    77,    77,    77,    77,    78,    78,    79,    79,    80,
      80,    80,    81,    81,    82,    82,    82,    82,    82,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     0,
       8,     2,     0,     3,     1,     0,     3,     1,     1,     0,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     2,     2,     2,     5,     7,     3,     5,
       5,     3,     1,     0,     5,     5,     5,     5,     5,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     3,     3,     1,     1,     2,
       3,     3,     3,     3,     1,     2,     2,     2,     2,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1
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
#line 3025 "src/syn.tab.c"
    break;

  case 3: /* program: %empty  */
#line 150 "src/syn.y"
           {
      (yyval.node) = create_node(PROGRAM);
      printf("epsilon (program) \n");
    }
#line 3034 "src/syn.tab.c"
    break;

  case 4: /* lst_declarations: declaration lst_declarations  */
#line 157 "src/syn.y"
                                {
      (yyval.node) = create_node(LIST_DECLARATIONS);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3044 "src/syn.tab.c"
    break;

  case 5: /* lst_declarations: declaration  */
#line 162 "src/syn.y"
                 {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(LIST_DECLARATIONS);
      // add_tree_node($$, $1);
    }
#line 3054 "src/syn.tab.c"
    break;

  case 6: /* declaration: func_declaration  */
#line 170 "src/syn.y"
                   {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(DECLARATION);
      // add_tree_node($$, $1);
    }
#line 3064 "src/syn.tab.c"
    break;

  case 7: /* declaration: var_declaration  */
#line 175 "src/syn.y"
                    {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(DECLARATION);
      // add_tree_node($$, $1);
    }
#line 3074 "src/syn.tab.c"
    break;

  case 8: /* declaration: error  */
#line 180 "src/syn.y"
          {
      yyerrok;
      (yyval.node) = create_node(DECLARATION); 
      syntax_errors++;
    }
#line 3084 "src/syn.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 188 "src/syn.y"
                  {increment_scope();}
#line 3090 "src/syn.tab.c"
    break;

  case 10: /* func_declaration: unq_declaration $@1 '(' parameters ')' '{' block_commands '}'  */
#line 188 "src/syn.y"
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
#line 3105 "src/syn.tab.c"
    break;

  case 11: /* var_declaration: unq_declaration ';'  */
#line 201 "src/syn.y"
                      {
      // $$ = create_node(VARIABLE_DECLARATION);
      (yyval.node) = (yyvsp[-1].node);
      // add_tree_node($$, $1);
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 3116 "src/syn.tab.c"
    break;

  case 12: /* $@2: %empty  */
#line 210 "src/syn.y"
       {add_table_node(yytext);}
#line 3122 "src/syn.tab.c"
    break;

  case 13: /* unq_declaration: type $@2 ID  */
#line 210 "src/syn.y"
                                    {
      (yyval.node) = create_node(UNIQUE_DECLARATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[0].token), IDENTIFIER);
    }
#line 3132 "src/syn.tab.c"
    break;

  case 14: /* parameters: lst_parameters  */
#line 218 "src/syn.y"
                 {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(PARAMETERS);
      // add_tree_node($$, $1);
    }
#line 3142 "src/syn.tab.c"
    break;

  case 15: /* parameters: %empty  */
#line 223 "src/syn.y"
           {
      (yyval.node) = create_node(PARAMETERS);
      printf("epsilon (parameters) \n");
    }
#line 3151 "src/syn.tab.c"
    break;

  case 16: /* lst_parameters: unq_declaration ',' lst_parameters  */
#line 230 "src/syn.y"
                                      {
      (yyval.node) = create_node(LIST_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$2, COMMA);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3162 "src/syn.tab.c"
    break;

  case 17: /* lst_parameters: unq_declaration  */
#line 236 "src/syn.y"
                    {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(LIST_PARAMETERS);
      // add_tree_node($$, $1);
    }
#line 3172 "src/syn.tab.c"
    break;

  case 18: /* calling_parameters: lst_calling_parameters  */
#line 244 "src/syn.y"
                         {
      (yyval.node) = create_node(CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3181 "src/syn.tab.c"
    break;

  case 19: /* calling_parameters: %empty  */
#line 248 "src/syn.y"
           {
      (yyval.node) = create_node(CALLING_PARAMETERS);
      printf("epsilon (calling_parameters) \n");
    }
#line 3190 "src/syn.tab.c"
    break;

  case 20: /* lst_calling_parameters: operation ',' lst_calling_parameters  */
#line 255 "src/syn.y"
                                       {
      (yyval.node) = create_node(LIST_CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$2, COMMA);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3201 "src/syn.tab.c"
    break;

  case 21: /* lst_calling_parameters: operation  */
#line 261 "src/syn.y"
              {
      (yyval.node) = create_node(LIST_CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3210 "src/syn.tab.c"
    break;

  case 22: /* block_commands: command block_commands  */
#line 268 "src/syn.y"
                          {
      // $$ = $1;
      (yyval.node) = create_node(BLOCK_COMMANDS);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3221 "src/syn.tab.c"
    break;

  case 23: /* block_commands: command  */
#line 274 "src/syn.y"
            {
    (yyval.node) = (yyvsp[0].node);
  }
#line 3229 "src/syn.tab.c"
    break;

  case 24: /* command: var_declaration  */
#line 280 "src/syn.y"
                  {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3239 "src/syn.tab.c"
    break;

  case 25: /* command: init_variable  */
#line 285 "src/syn.y"
                  {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3249 "src/syn.tab.c"
    break;

  case 26: /* command: conditional_stmt  */
#line 290 "src/syn.y"
                     {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3259 "src/syn.tab.c"
    break;

  case 27: /* command: return_stmt  */
#line 295 "src/syn.y"
                {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3269 "src/syn.tab.c"
    break;

  case 28: /* command: iteration  */
#line 300 "src/syn.y"
              {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3279 "src/syn.tab.c"
    break;

  case 29: /* command: input  */
#line 305 "src/syn.y"
          {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3289 "src/syn.tab.c"
    break;

  case 30: /* command: output  */
#line 310 "src/syn.y"
           {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3299 "src/syn.tab.c"
    break;

  case 31: /* $@3: %empty  */
#line 315 "src/syn.y"
    {increment_scope();}
#line 3305 "src/syn.tab.c"
    break;

  case 32: /* command: $@3 '{' block_commands '}'  */
#line 315 "src/syn.y"
                                                {
    // $$ = $2;
      (yyval.node) = create_node(COMMAND);
      // add_tree_token_node($$, &$2, OPEN_CURLY_BRACKET);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$4, CLOSE_CURLY_BRACKET);
    }
#line 3317 "src/syn.tab.c"
    break;

  case 33: /* command: operation ';'  */
#line 322 "src/syn.y"
                  { 
      (yyval.node) = create_node(COMMAND);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 3327 "src/syn.tab.c"
    break;

  case 34: /* command: error ';'  */
#line 327 "src/syn.y"
              {
      yyerrok;
      (yyval.node) = create_node(COMMAND); 
      syntax_errors++;
    }
#line 3337 "src/syn.tab.c"
    break;

  case 35: /* init_variable: init_stmt ';'  */
#line 335 "src/syn.y"
                {
      (yyval.node) = create_node(INIT_VARIABLE);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 3347 "src/syn.tab.c"
    break;

  case 36: /* conditional_stmt: IF_STMT '(' operation ')' command  */
#line 343 "src/syn.y"
                                                  {
      (yyval.node) = create_node(CONDITIONAL_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), IF);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3360 "src/syn.tab.c"
    break;

  case 37: /* conditional_stmt: IF_STMT '(' operation ')' command ELSE_STMT command  */
#line 351 "src/syn.y"
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
#line 3375 "src/syn.tab.c"
    break;

  case 38: /* return_stmt: RETURN_STM operation ';'  */
#line 364 "src/syn.y"
                            {
      (yyval.node) = create_node(RETURN_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), RETURN);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$3, SEMICOLON);
    }
#line 3386 "src/syn.tab.c"
    break;

  case 39: /* iteration: FOR_STMT '(' loop_condition ')' command  */
#line 373 "src/syn.y"
                                          {
      (yyval.node) = create_node(ITERATION_PROCESS);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), FOR);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3399 "src/syn.tab.c"
    break;

  case 40: /* loop_condition: init_stmt ';' operation ';' update_stmt  */
#line 384 "src/syn.y"
                                          {
      (yyval.node) = create_node(LOOP_CONDITION);
      add_tree_node((yyval.node), (yyvsp[-4].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, SEMICOLON);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3412 "src/syn.tab.c"
    break;

  case 41: /* init_stmt: ID '=' operation  */
#line 395 "src/syn.y"
                    {
      (yyval.node) = create_node(INIT_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), IDENTIFIER);
      // add_tree_token_node($$, &$2, ASSIGN);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3423 "src/syn.tab.c"
    break;

  case 42: /* update_stmt: init_stmt  */
#line 404 "src/syn.y"
            {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(UPDATE_STMT);
      // add_tree_node($$, $1);
    }
#line 3433 "src/syn.tab.c"
    break;

  case 43: /* update_stmt: %empty  */
#line 409 "src/syn.y"
           {
      (yyval.node) = create_node(UPDATE_STMT);
      printf("epsilon (update_stmt) \n");
    }
#line 3442 "src/syn.tab.c"
    break;

  case 44: /* output: OUTPUT_WRITE '(' operation ')' ';'  */
#line 416 "src/syn.y"
                                      {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITE);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3455 "src/syn.tab.c"
    break;

  case 45: /* output: OUTPUT_WRITELN '(' operation ')' ';'  */
#line 424 "src/syn.y"
                                         {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITELN);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3468 "src/syn.tab.c"
    break;

  case 46: /* output: OUTPUT_WRITE '(' STRING ')' ';'  */
#line 432 "src/syn.y"
                                    {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITELN);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), STRING);
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3481 "src/syn.tab.c"
    break;

  case 47: /* output: OUTPUT_WRITELN '(' STRING ')' ';'  */
#line 440 "src/syn.y"
                                      {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITELN);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), STRING);
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3494 "src/syn.tab.c"
    break;

  case 48: /* input: INPUT_READ '(' expression ')' ';'  */
#line 451 "src/syn.y"
                                    {
      (yyval.node) = create_node(INPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), READ);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3507 "src/syn.tab.c"
    break;

  case 49: /* func_calling: ID '(' calling_parameters ')'  */
#line 462 "src/syn.y"
                                {
      (yyval.node) = create_node(FUNCTION_CALLING);
      add_tree_token_node((yyval.node), &(yyvsp[-3].token), IDENTIFIER);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
    }
#line 3519 "src/syn.tab.c"
    break;

  case 50: /* expression: func_calling  */
#line 472 "src/syn.y"
               {
    (yyval.node) = (yyvsp[0].node);
    // $$ = create_node(EXPRESSION);
    // add_tree_node($$, $1);
    }
#line 3529 "src/syn.tab.c"
    break;

  case 51: /* expression: single_operation  */
#line 477 "src/syn.y"
                     {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(EXPRESSION);
      // add_tree_node($$, $1);
    }
#line 3539 "src/syn.tab.c"
    break;

  case 52: /* expression: const  */
#line 482 "src/syn.y"
          {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(EXPRESSION);
      // add_tree_node($$, $1);
    }
#line 3549 "src/syn.tab.c"
    break;

  case 53: /* expression: ID  */
#line 487 "src/syn.y"
       {
      (yyval.node) = create_node(EXPRESSION);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), IDENTIFIER);
    }
#line 3558 "src/syn.tab.c"
    break;

  case 54: /* const: number  */
#line 494 "src/syn.y"
         {
    (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(CONSTANT);
      // add_tree_node($$, $1);
    }
#line 3568 "src/syn.tab.c"
    break;

  case 55: /* const: NIL_CNST  */
#line 499 "src/syn.y"
             {
      (yyval.node) = create_node(CONSTANT);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NIL);
    }
#line 3577 "src/syn.tab.c"
    break;

  case 56: /* number: NUM_INT  */
#line 506 "src/syn.y"
          {
      (yyval.node) = create_node(NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NUMBER_INT);
    }
#line 3586 "src/syn.tab.c"
    break;

  case 57: /* number: NUM_FLOAT  */
#line 510 "src/syn.y"
              {
      (yyval.node) = create_node(NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NUMBER_FLOAT);
    }
#line 3595 "src/syn.tab.c"
    break;

  case 58: /* type: type_lst  */
#line 517 "src/syn.y"
            {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(TYPE);
      // add_tree_node($$, $1);
    }
#line 3605 "src/syn.tab.c"
    break;

  case 59: /* type: type_number  */
#line 522 "src/syn.y"
                 {
    (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(TYPE);
      // add_tree_node($$, $1);
    }
#line 3615 "src/syn.tab.c"
    break;

  case 60: /* type_lst: type_number T_LIST  */
#line 530 "src/syn.y"
                       {
      (yyval.node) = create_node(TYPE_LIST);
      // add_tree_node($$, $1);
      (yyval.node) = (yyvsp[-1].node);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), LIST);
    }
#line 3626 "src/syn.tab.c"
    break;

  case 61: /* type_number: T_INT  */
#line 539 "src/syn.y"
        {
      (yyval.node) = create_node(TYPE_NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), INT);
    }
#line 3635 "src/syn.tab.c"
    break;

  case 62: /* type_number: T_FLOAT  */
#line 543 "src/syn.y"
            {
      (yyval.node) = create_node(TYPE_NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), FLOAT);
    }
#line 3644 "src/syn.tab.c"
    break;

  case 63: /* operation: arith_binary  */
#line 550 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(OPERATION);
      // add_tree_node($$, $1);
    }
#line 3654 "src/syn.tab.c"
    break;

  case 64: /* operation: lst_binary  */
#line 555 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(OPERATION);
      // add_tree_node($$, $1);
    }
#line 3664 "src/syn.tab.c"
    break;

  case 65: /* operation: operation relational_op expression  */
#line 560 "src/syn.y"
                                        {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3675 "src/syn.tab.c"
    break;

  case 66: /* operation: operation logical_op expression  */
#line 566 "src/syn.y"
                                    {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3686 "src/syn.tab.c"
    break;

  case 67: /* single_operation: arith_single  */
#line 575 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(SINGLE_OPERATION);
      // add_tree_node($$, $1);
    }
#line 3696 "src/syn.tab.c"
    break;

  case 68: /* single_operation: lst_single  */
#line 580 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(SINGLE_OPERATION);
      // add_tree_node($$, $1);
    }
#line 3706 "src/syn.tab.c"
    break;

  case 69: /* single_operation: '!' expression  */
#line 585 "src/syn.y"
                   {
    (yyval.node) = create_node(SINGLE_OPERATION);
    add_tree_token_node((yyval.node), &(yyvsp[-1].token), NOT_OR_TAIL);
    add_tree_node((yyval.node), (yyvsp[0].node));
  }
#line 3716 "src/syn.tab.c"
    break;

  case 70: /* arith_binary: arith_binary '+' expression  */
#line 593 "src/syn.y"
                              {
      (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), ADD_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3727 "src/syn.tab.c"
    break;

  case 71: /* arith_binary: arith_binary '-' expression  */
#line 599 "src/syn.y"
                                {
      (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MINUS_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3738 "src/syn.tab.c"
    break;

  case 72: /* arith_binary: arith_binary '*' expression  */
#line 605 "src/syn.y"
                                {
      (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MULTIPLY_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3749 "src/syn.tab.c"
    break;

  case 73: /* arith_binary: arith_binary '/' expression  */
#line 611 "src/syn.y"
                                {
       (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), DIVISION_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3760 "src/syn.tab.c"
    break;

  case 74: /* arith_binary: expression  */
#line 617 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(ARITHMETIC_BINARY);
      // add_tree_node($$, $1);
    }
#line 3770 "src/syn.tab.c"
    break;

  case 75: /* arith_single: '+' expression  */
#line 625 "src/syn.y"
                 {
    (yyval.node) = create_node(ARITHMETIC_SINGLE);
    add_tree_token_node((yyval.node), &(yyvsp[-1].token), ADD_OP);
    add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3780 "src/syn.tab.c"
    break;

  case 76: /* arith_single: '-' expression  */
#line 630 "src/syn.y"
                   {
      (yyval.node) = create_node(ARITHMETIC_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MINUS_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3790 "src/syn.tab.c"
    break;

  case 77: /* lst_single: '%' expression  */
#line 638 "src/syn.y"
                 {
      (yyval.node) = create_node(LIST_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), POP_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3800 "src/syn.tab.c"
    break;

  case 78: /* lst_single: '?' expression  */
#line 643 "src/syn.y"
                   {
      (yyval.node) = create_node(LIST_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), HEAD_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3810 "src/syn.tab.c"
    break;

  case 79: /* lst_binary: expression FILTER expression  */
#line 651 "src/syn.y"
                               {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), FILTER_OP);
    }
#line 3820 "src/syn.tab.c"
    break;

  case 80: /* lst_binary: expression MAP expression  */
#line 656 "src/syn.y"
                              {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MAP_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3831 "src/syn.tab.c"
    break;

  case 81: /* lst_binary: expression ':' expression  */
#line 662 "src/syn.y"
                              {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), CONSTRUCTOR_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3842 "src/syn.tab.c"
    break;

  case 82: /* logical_op: AND  */
#line 671 "src/syn.y"
      {
      (yyval.node) = create_node(LOGIC_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), AND_OP);
    }
#line 3851 "src/syn.tab.c"
    break;

  case 83: /* logical_op: OR  */
#line 675 "src/syn.y"
       {
      (yyval.node) = create_node(LOGIC_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), OR_OP);
    }
#line 3860 "src/syn.tab.c"
    break;

  case 84: /* relational_op: GREATER  */
#line 682 "src/syn.y"
          {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), GT_OP);
    }
#line 3869 "src/syn.tab.c"
    break;

  case 85: /* relational_op: GREATER_EQ  */
#line 686 "src/syn.y"
               {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), GE_OP);
    }
#line 3878 "src/syn.tab.c"
    break;

  case 86: /* relational_op: LESS  */
#line 690 "src/syn.y"
         {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), LT_OP);
    }
#line 3887 "src/syn.tab.c"
    break;

  case 87: /* relational_op: LESS_EQ  */
#line 694 "src/syn.y"
            {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), LE_OP);
    }
#line 3896 "src/syn.tab.c"
    break;

  case 88: /* relational_op: EQUAL  */
#line 698 "src/syn.y"
          {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), EQ_OP);
    }
#line 3905 "src/syn.tab.c"
    break;

  case 89: /* relational_op: NOT_EQ  */
#line 702 "src/syn.y"
           {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NE_OP);
    }
#line 3914 "src/syn.tab.c"
    break;


#line 3918 "src/syn.tab.c"

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

#line 708 "src/syn.y"

//********** C Functions **********
int yyerror(const char *s) {
  fprintf(stderr, BHRED "\nError: in line: %d, column: %d - %s " reset "\n", yylineno, column-yyleng, s);
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
  total_syntax_errors();

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
