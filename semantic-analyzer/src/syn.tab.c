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
  YYSYMBOL_expression = 68,                /* expression  */
  YYSYMBOL_const = 69,                     /* const  */
  YYSYMBOL_number = 70,                    /* number  */
  YYSYMBOL_type = 71,                      /* type  */
  YYSYMBOL_type_lst = 72,                  /* type_lst  */
  YYSYMBOL_type_number = 73,               /* type_number  */
  YYSYMBOL_operation = 74,                 /* operation  */
  YYSYMBOL_single_operation = 75,          /* single_operation  */
  YYSYMBOL_arith_binary = 76,              /* arith_binary  */
  YYSYMBOL_arith_single = 77,              /* arith_single  */
  YYSYMBOL_lst_single = 78,                /* lst_single  */
  YYSYMBOL_lst_binary = 79,                /* lst_binary  */
  YYSYMBOL_logical_op = 80,                /* logical_op  */
  YYSYMBOL_relational_op = 81              /* relational_op  */
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
#define YYLAST   5946

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  461

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
     189,   204,   213,   223,   229,   235,   246,   260,   264,   270,
     276,   283,   289,   295,   300,   305,   310,   315,   320,   325,
     330,   330,   337,   343,   351,   359,   367,   380,   389,   400,
     411,   420,   425,   431,   439,   447,   455,   466,   477,   487,
     492,   497,   502,   509,   514,   521,   525,   532,   537,   545,
     554,   558,   565,   570,   575,   581,   590,   595,   600,   608,
     617,   623,   629,   635,   643,   648,   656,   661,   669,   674,
     680,   689,   693,   700,   704,   708,   712,   716,   720
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

#define YYPACT_NINF (-210)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-89)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      24,    29,    15,    62,    11,    14,    42,    48,    61,    37,
      13,    25,    79,  -210,    72,   105,    19,    71,    70,    65,
      89,    73,    75,    44,    87,    99,   817,  3133,  2383,  4570,
    4587,  1265,   528,   101,   110,   112,   115,   118,   528,   528,
     528,   528,   528,  3174,   129,   133,  3215,   137,  3256,  3297,
    3338,  3379,   138,  3420,  3461,  4604,  4621,  4638,  4655,  1221,
    4672,  5505,  4689,  4706,  1236,   131,   528,  1931,  1335,   578,
     151,   136,   141,   589,  4723,  4740,  4757,  4774,  4791,   189,
     140,   817,  3502,   594,   594,   594,  3543,   633,   692,   708,
     747,   860,   871,   911,   922,   594,   594,   927,   927,   927,
     927,   143,   146,  1188,  1554,  3584,   441,   117,   147,   156,
     160,  1369,   172,  1702,   173,   174,  1569,  1668,  1887,  1902,
    2001,  5519,  5533,  5547,  5561,  4808,   966,  3994,   817,   528,
     171,   175,   178,   184,   185,  3625,   177,   509,  3666,  2220,
    3707,  3748,  3789,  3830,  3871,   817,    -3,  3912,   190,   193,
     201,   206,  3953,  2263,  4013,  4033,  1598,   966,   966,   966,
     966,   966,  4053,  4073,  4093,  4113,  4133,  4828,  4153,  4173,
    1206,  1496,  1829,  2162,  1163,   578,   578,   578,   578,   578,
    4313,  4333,  4353,  4373,  4393,  5168,  4413,  4433,  2035,   196,
     197,   198,    82,   589,   589,   589,   589,   589,   205,   207,
     208,   209,   210,   211,  2235,  2334,  3991,   986,   594,   594,
     594,   594,   594,  5785,  5795,  5805,  5815,  5825,  5835,  5575,
    5589,  5603,  1721,   927,   927,   927,   927,   927,  5617,  5631,
    5645,  5659,  5673,  5687,  1023,  1023,  1041,  1041,  1145,   528,
     213,   215,   237,   238,   239,  1478,   203,   234,  1811,  2144,
    2436,  2477,   242,  2518,  2559,  5845,   216,    94,   243,   131,
    4193,  4213,  4233,  4253,  4273,  1023,  1023,  1023,  1072,  1072,
    1072,  1072,   131,  4453,  4473,  4493,  4513,  4533,  1041,  1041,
    1041,  1094,  1094,  1094,  1094,   131,   240,   247,   248,   251,
     252,   131,  5855,  5865,  5875,  5885,  5895,   131,  5701,  5715,
    5729,  5743,  5757,  1410,  1521,  1539,  1320,  1023,  1023,  1023,
    1023,  1023,  1743,  1854,  1872,  1986,  2076,  2187,  2205,  2319,
    2368,  2845,  2886,  1652,  1041,  1041,  1041,  1041,  1041,  2927,
    2968,  3009,  3050,  3091,  3132,  3173,  3214,  5905,   578,   151,
     236,   241,   589,  2600,   817,  2641,  2682,   578,   259,  2476,
    2517,  2558,  4845,  4862,  4879,  1388,  1072,  1072,  1072,  1072,
    1072,  4896,  4913,  4930,  4947,  4964,  4981,  4998,  5015,  5032,
    5049,   260,  3255,  3296,  3337,  5185,  5202,  5219,  2054,  1094,
    1094,  1094,  1094,  1094,  5236,  5253,  5270,  5287,  5304,  5321,
    5338,  5355,  5372,  5389,   265,   267,   268,   131,  2599,  2640,
    2681,  2722,  2763,   131,  3378,  3419,  3460,  3501,  3542,  2723,
    3583,   269,   270,  3624,   271,  3665,   280,   279,  3706,  4293,
     131,  5066,  5083,  5100,  5117,  5134,  4553,   131,  5406,  5423,
    5440,  5457,  5474,   282,  5915,  5771,   283,   293,  3994,  3994,
     296,   308,   309,   310,   316,  2764,   323,   325,  2804,  3747,
    2805,  2846,  2887,  2928,  2969,  3010,  3051,  5151,  5491,  3994,
    3092
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
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -210,  -210,   340,  -210,  -210,  -210,     2,     0,  -210,   332,
    -209,   222,   -41,  -118,  -114,  -112,  -110,   -99,   -49,    18,
     -67,  -210,   -44,   -42,   379,    26,   712,  1045,    12,  -210,
    -210,   -25,  1378,    84,  1711,  2044,   425,   -23,    28
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,     7,    16,    43,    44,    21,    22,
     101,   102,    45,    46,    47,    48,    49,    50,    51,   108,
      52,   149,    53,    54,    55,    56,    57,    58,   151,    11,
      12,   103,    60,    61,    62,    63,    64,   236,   237
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    59,     8,   109,   256,    80,     9,    68,     8,   137,
     138,    13,    10,   247,    -2,   248,   -42,   249,    10,    20,
      17,    59,   -60,    20,    -3,     1,   -60,   147,   250,    -8,
      -8,   150,   -57,     2,     3,   150,    95,    19,    -8,    -8,
     115,   104,    -5,     1,   106,    95,   111,   113,    -6,    -6,
     348,     2,     3,     2,     3,    -9,    59,    -6,    -6,    15,
     252,    -7,    -7,   371,    74,    75,    76,    77,    78,   -61,
      -7,    -7,    -4,   -61,     2,     3,   394,   -59,   251,   148,
     234,    95,   395,   253,   -14,   254,   -58,    96,   396,   -12,
      18,   163,    24,   -12,   -13,   181,    96,   181,   181,   114,
     285,   -52,   255,    59,   139,   -11,   -11,    26,   -16,   116,
     117,   118,    23,   -12,   -11,   -11,    95,   -12,   -15,    69,
      59,   119,   120,   121,   122,   123,   124,   246,    70,   245,
      71,   235,    96,    72,   153,   154,    73,   155,   156,   171,
     172,   110,   173,   174,   171,   172,   112,   173,   174,   167,
     -18,   152,   163,   185,    79,   185,   185,    81,   107,    66,
      82,   -21,   125,   157,   158,   -17,   128,    96,   175,   176,
     159,   160,   161,   175,   176,   177,   178,   179,   129,   130,
     177,   178,   179,   260,   261,   262,   263,   264,   436,   -10,
     -10,   132,   134,   140,   437,   135,   -19,   141,   -10,   -10,
     142,   273,   274,   275,   276,   277,   143,   144,   257,   -41,
     167,   446,   -39,   258,   337,   -55,   -56,   -54,   447,   286,
     287,   288,   289,   290,   -49,   343,   -51,   -53,   -50,   -66,
     -67,   338,    95,   339,   292,   293,   294,   295,   296,   171,
     172,   412,   173,   174,   171,   172,   414,   173,   174,   298,
     299,   300,   301,   302,   344,   340,   341,   342,   347,   -74,
     313,   319,   330,   336,   345,   -12,   -75,   -76,   175,   176,
     -77,   -68,   109,   175,   176,   177,   178,   179,   419,   426,
     177,   178,   179,    96,   433,   163,   434,   435,   439,   440,
     442,   349,   350,   351,   362,   368,   369,   370,   163,   444,
     445,   -48,   448,   417,   372,   373,   374,   385,   391,   392,
     393,   163,   449,   410,    95,   413,   415,   163,   452,    59,
     450,   451,   418,   163,   247,   247,   248,   248,   249,   249,
     453,   454,   455,   398,   399,   400,   401,   402,   456,   250,
     250,   460,   457,   167,   458,   247,    14,   248,   136,   249,
     404,   405,   406,   407,   408,    25,   167,   411,     0,     0,
     250,     0,     0,     0,   181,    96,   181,   181,   416,   167,
       0,   252,   252,   181,     0,   167,     0,     0,     0,     0,
       0,   167,   421,   422,   423,   424,   425,     0,     0,   251,
     251,     0,   252,     0,   253,   253,   254,   254,     0,     0,
       0,     0,     0,     0,     0,   428,   429,   430,   431,   432,
     251,     0,     0,   255,   255,   253,     0,   254,     0,     0,
       0,     0,   185,   163,   185,   185,     0,     0,     0,   163,
       0,   185,     0,     0,   255,     0,     0,     0,   246,   246,
     245,   245,     0,     0,   162,     0,   163,     0,   180,     0,
     180,   180,   198,   163,     0,     0,     0,     0,     0,   246,
     127,   245,   213,   213,   213,    87,    88,    89,    90,    91,
      92,    93,    94,     0,   213,   213,   228,   228,   228,   228,
       0,   167,     0,     0,     0,     0,     0,   167,     0,     0,
     170,     0,     0,     0,   188,     0,   188,   188,     0,     0,
       0,     0,     0,     0,   167,   162,     0,     0,     0,     0,
     -35,   167,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,
       0,   -35,   145,   -35,   -35,   -35,   -35,     0,     0,   -35,
     -35,    28,    29,     0,    30,    67,   162,   162,   162,   162,
     162,   -35,   -35,     0,     0,     0,     0,     0,   -35,   -35,
     -35,   170,     0,     0,   180,   180,   180,   180,   180,     0,
      38,    39,     0,     0,     0,     0,     0,    40,    41,    42,
       0,     0,   198,   198,   198,   198,   198,     0,     0,     0,
       0,   171,   172,     0,   173,   174,     0,   213,   213,   213,
     213,   213,   189,   190,     0,   191,   192,   204,   205,     0,
     206,   207,   228,   228,   228,   228,   228,     0,     0,     0,
     175,   176,     0,   312,   312,   329,   329,   177,   178,   179,
       0,   193,   194,     0,     0,     0,   208,   209,   195,   196,
     197,     0,     0,   210,   211,   212,   -81,   -81,   162,   -81,
     -81,     0,     0,     0,   312,   312,   312,   361,   361,   361,
     361,   162,     0,     0,     0,     0,     0,   329,   329,   329,
     384,   384,   384,   384,   162,   -81,   -81,     0,     0,     0,
     162,     0,   -81,   -81,   -81,     0,   162,     0,     0,     0,
       0,     0,     0,     0,   170,     0,   312,   312,   312,   312,
     312,     0,     0,     0,     0,   -82,   -82,   170,   -82,   -82,
       0,     0,     0,   329,   329,   329,   329,   329,     0,     0,
     170,   -83,   -83,     0,   -83,   -83,   170,   180,     0,   180,
     180,   198,   170,     0,   -82,   -82,   180,     0,     0,     0,
       0,   -82,   -82,   -82,     0,   361,   361,   361,   361,   361,
     -83,   -83,     0,     0,     0,     0,     0,   -83,   -83,   -83,
     -84,   -84,     0,   -84,   -84,     0,     0,     0,   384,   384,
     384,   384,   384,   188,     0,   188,   188,     0,     0,     0,
       0,     0,   188,     0,     0,     0,   162,   164,     0,   -84,
     -84,   182,   162,   182,   182,   199,   -84,   -84,   -84,     0,
       0,     0,     0,     0,     0,   214,   214,   214,     0,   162,
       0,     0,     0,     0,     0,     0,   162,   214,   214,   229,
     229,   229,   229,     0,     0,     0,     0,     0,    27,     0,
      28,    29,   170,    30,    31,    32,     2,     3,   170,    33,
       0,    34,    35,    36,    37,     0,     0,   -30,   164,     0,
       0,     0,     0,     0,     0,   170,     0,     0,     0,    38,
      39,     0,   170,     0,     0,     0,    40,    41,    42,     0,
       0,     0,     0,   -85,   -85,     0,   -85,   -85,     0,   164,
     164,   164,   164,   164,   -86,   -86,     0,   -86,   -86,     0,
       0,     0,     0,     0,     0,     0,     0,   182,   182,   182,
     182,   182,   -85,   -85,     0,     0,     0,     0,     0,   -85,
     -85,   -85,     0,   -86,   -86,   199,   199,   199,   199,   199,
     -86,   -86,   -86,     0,   -87,   -87,     0,   -87,   -87,     0,
     214,   214,   214,   214,   214,   -88,   -88,     0,   -88,   -88,
     219,   220,     0,   221,   222,   229,   229,   229,   229,   229,
       0,     0,     0,   -87,   -87,     0,   314,   314,   331,   331,
     -87,   -87,   -87,     0,   -88,   -88,     0,     0,     0,   223,
     224,   -88,   -88,   -88,     0,     0,   225,   226,   227,   153,
     154,   164,   155,   156,     0,     0,     0,   314,   314,   314,
     363,   363,   363,   363,   164,     0,     0,     0,     0,     0,
     331,   331,   331,   386,   386,   386,   386,   164,   157,   158,
       0,     0,     0,   164,   291,   159,   160,   161,   -52,   164,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,   314,
     314,   314,   314,   314,     0,     0,   303,   304,     0,   305,
     306,     0,     0,     0,     0,     0,   331,   331,   331,   331,
     331,     0,     0,     0,   320,   321,     0,   322,   323,     0,
     182,     0,   182,   182,   199,   307,   308,     0,     0,   182,
       0,     0,   309,   310,   311,     0,     0,     0,   363,   363,
     363,   363,   363,   324,   325,   352,   353,     0,   354,   355,
     326,   327,   328,     0,     0,     0,     0,     0,     0,     0,
       0,   386,   386,   386,   386,   386,     0,   375,   376,     0,
     377,   378,     0,     0,   356,   357,     0,     0,     0,   164,
     165,   358,   359,   360,   183,   164,   183,   183,   200,     0,
       0,     0,     0,     0,     0,     0,   379,   380,   215,   215,
     215,     0,   164,   381,   382,   383,     0,     0,     0,   164,
     215,   215,   230,   230,   230,   230,   -33,     0,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,
     -33,   -33,   -33,     0,     0,   -33,   -33,     0,     0,     0,
       0,   165,     0,     0,     0,     0,     0,   -33,   -33,     0,
       0,   272,   -52,     0,   -33,   -33,   -33,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   165,   165,   165,   165,   165,   -20,     0,     0,
       0,   126,    87,    88,    89,    90,    91,    92,    93,    94,
     183,   183,   183,   183,   183,   -63,     0,     0,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   200,   200,
     200,   200,   200,    86,     0,    87,    88,    89,    90,    91,
      92,    93,    94,   215,   215,   215,   215,   215,   -63,     0,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   230,   230,
     230,   230,   230,     0,     0,     0,     0,     0,     0,   315,
     315,   332,   332,    65,     0,     0,     0,   -52,     0,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   165,     0,     0,    66,     0,     0,
     315,   315,   315,   364,   364,   364,   364,   165,     0,     0,
       0,     0,     0,   332,   332,   332,   387,   387,   387,   387,
     165,     0,     0,     0,     0,     0,   165,     0,   397,   -52,
       0,     0,   165,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   315,   315,   315,   315,   315,   105,     0,    87,
      88,    89,    90,    91,    92,    93,    94,     0,     0,   332,
     332,   332,   332,   332,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   183,     0,   183,   183,   200,   131,     0,
       0,     0,   183,    87,    88,    89,    90,    91,    92,    93,
      94,   364,   364,   364,   364,   364,   420,   -52,     0,     0,
       0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   387,   387,   387,   387,   387,   -55,
       0,     0,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   165,   166,     0,     0,     0,   184,   165,   184,
     184,   201,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   216,   216,   216,     0,   165,     0,     0,     0,     0,
       0,     0,   165,   216,   216,   231,   231,   231,   231,   -23,
       0,   -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,     0,
     -23,   -23,   -23,   -23,   -23,   -23,     0,     0,   -23,   -23,
       0,     0,     0,     0,   166,     0,     0,     0,     0,     0,
     -23,   -23,     0,     0,     0,   -55,     0,   -23,   -23,   -23,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   166,   166,   166,   166,   166,
     -56,     0,     0,     0,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   184,   184,   184,   184,   184,   -54,     0,
       0,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   201,   201,   201,   201,   201,   -40,     0,    87,    88,
      89,    90,    91,    92,    93,    94,   216,   216,   216,   216,
     216,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   231,   231,   231,   231,   231,     0,     0,     0,     0,
       0,     0,   316,   316,   333,   333,   259,   -52,     0,     0,
       0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   166,     0,     0,
       0,     0,     0,   316,   316,   316,   365,   365,   365,   365,
     166,     0,     0,     0,     0,     0,   333,   333,   333,   388,
     388,   388,   388,   166,     0,     0,     0,     0,     0,   166,
     403,   -52,     0,     0,     0,   166,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,     0,   316,   316,   316,   316,   316,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,     0,   333,   333,   333,   333,   333,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   184,     0,   184,   184,
     201,   133,     0,     0,     0,   184,    87,    88,    89,    90,
      91,    92,    93,    94,   365,   365,   365,   365,   365,   297,
       0,     0,     0,   -52,     0,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   388,   388,   388,
     388,   388,   -49,     0,     0,     0,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   166,   168,     0,     0,     0,
     186,   166,   186,   186,   202,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   217,   217,   217,     0,   166,     0,
       0,     0,     0,     0,     0,   166,   217,   217,   232,   232,
     232,   232,   -24,     0,   -24,   -24,     0,   -24,   -24,   -24,
     -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,     0,
       0,   -24,   -24,     0,     0,     0,     0,   168,     0,     0,
       0,     0,     0,   -24,   -24,     0,     0,     0,   -56,     0,
     -24,   -24,   -24,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   168,   168,
     168,   168,   168,   -65,     0,     0,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   186,   186,   186,   186,
     186,   -51,     0,     0,     0,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   202,   202,   202,   202,   202,   -80,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   217,
     217,   217,   217,   217,   -65,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   232,   232,   232,   232,   232,     0,
       0,     0,     0,     0,     0,   317,   317,   334,   334,    65,
       0,     0,     0,   -52,     0,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     168,     0,     0,     0,     0,     0,   317,   317,   317,   366,
     366,   366,   366,   168,     0,     0,     0,     0,     0,   334,
     334,   334,   389,   389,   389,   389,   168,     0,     0,     0,
       0,     0,   168,     0,     0,   -53,     0,     0,   168,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   317,   317,
     317,   317,   317,   -64,     0,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,   334,   334,   334,   334,   334,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   186,
       0,   186,   186,   202,   -63,     0,     0,     0,   186,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   366,   366,   366,
     366,   366,   427,   -52,     0,     0,     0,     0,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     389,   389,   389,   389,   389,   -50,     0,     0,     0,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   168,   169,
       0,     0,     0,   187,   168,   187,   187,   203,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   218,   218,   218,
       0,   168,     0,     0,     0,     0,     0,     0,   168,   218,
     218,   233,   233,   233,   233,   -25,     0,   -25,   -25,     0,
     -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,
     -25,   -25,     0,     0,   -25,   -25,     0,     0,     0,     0,
     169,     0,     0,     0,     0,     0,   -25,   -25,     0,     0,
       0,   -54,     0,   -25,   -25,   -25,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   169,   169,   169,   169,   169,   -66,     0,     0,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   187,
     187,   187,   187,   187,   -67,     0,     0,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   203,   203,   203,
     203,   203,   146,     0,    87,    88,    89,    90,    91,    92,
      93,    94,   218,   218,   218,   218,   218,   -55,     0,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   233,   233,   233,
     233,   233,     0,     0,     0,     0,     0,     0,   318,   318,
     335,   335,   -55,     0,     0,     0,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,     0,   169,     0,     0,     0,     0,     0,   318,
     318,   318,   367,   367,   367,   367,   169,     0,     0,     0,
       0,     0,   335,   335,   335,   390,   390,   390,   390,   169,
       0,     0,     0,     0,     0,   169,     0,     0,   -64,     0,
       0,   169,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   318,   318,   318,   318,   318,   -56,     0,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,     0,     0,   335,   335,
     335,   335,   335,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   187,     0,   187,   187,   203,   -55,     0,     0,
       0,   187,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     367,   367,   367,   367,   367,   -55,     0,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,     0,   390,   390,   390,   390,   390,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -26,     0,   -26,
     -26,   169,   -26,   -26,   -26,   -26,   -26,   169,   -26,   -26,
     -26,   -26,   -26,   -26,     0,     0,   -26,   -26,     0,     0,
       0,     0,     0,     0,   169,     0,     0,     0,   -26,   -26,
       0,   169,     0,     0,     0,   -26,   -26,   -26,   -27,     0,
     -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   -27,   -78,     0,   -27,   -27,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,   -27,
     -27,     0,     0,     0,     0,     0,   -27,   -27,   -27,   -29,
       0,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,     0,
     -29,   -29,   -29,   -29,   -29,   -29,   -79,     0,   -29,   -29,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,
     -29,   -29,     0,     0,     0,     0,     0,   -29,   -29,   -29,
     -28,     0,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,
       0,   -28,   -28,   -28,   -28,   -28,   -28,   -80,     0,   -28,
     -28,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,   -28,   -28,     0,     0,     0,     0,     0,   -28,   -28,
     -28,   -11,     0,   -11,   -11,     0,   -11,   -11,   -11,   -11,
     -11,     0,   -11,   -11,   -11,   -11,   -11,   -11,   -74,     0,
     -11,   -11,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,   -11,   -11,     0,     0,     0,     0,     0,   -11,
     -11,   -11,   -34,     0,   -34,   -34,     0,   -34,   -34,   -34,
     -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -75,
       0,   -34,   -34,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,     0,   -34,   -34,     0,     0,     0,     0,     0,
     -34,   -34,   -34,   -32,     0,   -32,   -32,     0,   -32,   -32,
     -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
     -76,     0,   -32,   -32,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,   -32,   -32,     0,     0,     0,     0,
       0,   -32,   -32,   -32,   -37,     0,   -37,   -37,     0,   -37,
     -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,
     -37,   -77,     0,   -37,   -37,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,   -37,   -37,     0,     0,     0,
       0,     0,   -37,   -37,   -37,   -31,     0,   -31,   -31,     0,
     -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,
     -31,   -31,   -68,     0,   -31,   -31,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,     0,   -31,   -31,     0,     0,
       0,     0,     0,   -31,   -31,   -31,   -35,     0,   -35,   -35,
       0,   -35,   -35,   -35,   -35,   -35,     0,   -35,   459,   -35,
     -35,   -35,   -35,   -48,     0,   -35,   -35,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,     0,   -35,   -35,     0,
       0,     0,     0,     0,   -35,   -35,   -35,   -38,     0,   -38,
     -38,     0,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -38,   -56,     0,   -38,   -38,     0,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,   -38,   -38,
       0,     0,     0,     0,     0,   -38,   -38,   -38,   -45,     0,
     -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,     0,   -45,
     -45,   -45,   -45,   -45,   -45,   -54,     0,   -45,   -45,     0,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,     0,   -45,
     -45,     0,     0,     0,     0,     0,   -45,   -45,   -45,   -43,
       0,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,     0,
     -43,   -43,   -43,   -43,   -43,   -43,   -49,     0,   -43,   -43,
       0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,
     -43,   -43,     0,     0,     0,     0,     0,   -43,   -43,   -43,
     -46,     0,   -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,
       0,   -46,   -46,   -46,   -46,   -46,   -46,   -65,     0,   -46,
     -46,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
       0,   -46,   -46,     0,     0,     0,     0,     0,   -46,   -46,
     -46,   -44,     0,   -44,   -44,     0,   -44,   -44,   -44,   -44,
     -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,   -51,     0,
     -44,   -44,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,     0,   -44,   -44,     0,     0,     0,     0,     0,   -44,
     -44,   -44,   -47,     0,   -47,   -47,     0,   -47,   -47,   -47,
     -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -53,
       0,   -47,   -47,     0,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,     0,   -47,   -47,     0,     0,     0,     0,     0,
     -47,   -47,   -47,   -36,     0,   -36,   -36,     0,   -36,   -36,
     -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,
     -50,     0,   -36,   -36,     0,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,     0,   -36,   -36,     0,     0,     0,     0,
       0,   -36,   -36,   -36,   -33,     0,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,     0,   -33,     0,   -33,   -33,   -33,
     -33,   -66,     0,   -33,   -33,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,   -33,   -33,     0,     0,     0,
       0,     0,   -33,   -33,   -33,   -23,     0,   -23,   -23,     0,
     -23,   -23,   -23,   -23,   -23,     0,   -23,     0,   -23,   -23,
     -23,   -23,   -67,     0,   -23,   -23,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,     0,   -23,   -23,     0,     0,
       0,     0,     0,   -23,   -23,   -23,    27,     0,    28,    29,
       0,    30,    31,    32,     2,     3,     0,    33,     0,    34,
      35,    36,    37,   -64,     0,   -30,   -22,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,     0,    38,    39,     0,
       0,     0,     0,     0,    40,    41,    42,   -24,     0,   -24,
     -24,     0,   -24,   -24,   -24,   -24,   -24,     0,   -24,     0,
     -24,   -24,   -24,   -24,   -78,     0,   -24,   -24,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,   -24,   -24,
       0,     0,     0,     0,     0,   -24,   -24,   -24,   -25,     0,
     -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,     0,   -25,
       0,   -25,   -25,   -25,   -25,   -79,     0,   -25,   -25,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -25,
     -25,     0,     0,     0,     0,     0,   -25,   -25,   -25,   -26,
       0,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,     0,
     -26,     0,   -26,   -26,   -26,   -26,   -80,     0,   -26,   -26,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
     -26,   -26,     0,     0,     0,     0,     0,   -26,   -26,   -26,
     -27,     0,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,
       0,   -27,     0,   -27,   -27,   -27,   -27,   -74,     0,   -27,
     -27,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
       0,   -27,   -27,     0,     0,     0,     0,     0,   -27,   -27,
     -27,   -29,     0,   -29,   -29,     0,   -29,   -29,   -29,   -29,
     -29,     0,   -29,     0,   -29,   -29,   -29,   -29,   -75,     0,
     -29,   -29,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,     0,   -29,   -29,     0,     0,     0,     0,     0,   -29,
     -29,   -29,   -28,     0,   -28,   -28,     0,   -28,   -28,   -28,
     -28,   -28,     0,   -28,     0,   -28,   -28,   -28,   -28,   -76,
       0,   -28,   -28,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,   -28,   -28,     0,     0,     0,     0,     0,
     -28,   -28,   -28,   -34,     0,   -34,   -34,     0,   -34,   -34,
     -34,   -34,   -34,     0,   -34,     0,   -34,   -34,   -34,   -34,
     -77,     0,   -34,   -34,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,   -34,   -34,     0,     0,     0,     0,
       0,   -34,   -34,   -34,   -32,     0,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -32,     0,   -32,     0,   -32,   -32,   -32,
     -32,   -68,     0,   -32,   -32,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,   -32,   -32,     0,     0,     0,
       0,     0,   -32,   -32,   -32,   -37,     0,   -37,   -37,     0,
     -37,   -37,   -37,   -37,   -37,     0,   -37,     0,   -37,   -37,
     -37,   -37,   438,     0,   -37,   -37,     0,    87,    88,    89,
      90,    91,    92,    93,    94,     0,   -37,   -37,     0,     0,
       0,     0,     0,   -37,   -37,   -37,   -31,     0,   -31,   -31,
       0,   -31,   -31,   -31,   -31,   -31,     0,   -31,     0,   -31,
     -31,   -31,   -31,   441,     0,   -31,   -31,     0,    87,    88,
      89,    90,    91,    92,    93,    94,     0,   -31,   -31,     0,
       0,     0,     0,     0,   -31,   -31,   -31,   -38,     0,   -38,
     -38,     0,   -38,   -38,   -38,   -38,   -38,     0,   -38,     0,
     -38,   -38,   -38,   -38,   443,     0,   -38,   -38,     0,    87,
      88,    89,    90,    91,    92,    93,    94,     0,   -38,   -38,
       0,     0,     0,     0,     0,   -38,   -38,   -38,   -45,     0,
     -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,     0,   -45,
       0,   -45,   -45,   -45,   -45,   -40,     0,   -45,   -45,     0,
      87,    88,    89,    90,    91,    92,    93,    94,     0,   -45,
     -45,     0,     0,     0,     0,     0,   -45,   -45,   -45,   -43,
       0,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,     0,
     -43,     0,   -43,   -43,   -43,   -43,   -48,     0,   -43,   -43,
       0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,
     -43,   -43,     0,     0,     0,     0,     0,   -43,   -43,   -43,
     -46,     0,   -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,
       0,   -46,     0,   -46,   -46,   -46,   -46,     0,     0,   -46,
     -46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -46,   -46,     0,     0,     0,     0,     0,   -46,   -46,
     -46,   -44,     0,   -44,   -44,     0,   -44,   -44,   -44,   -44,
     -44,     0,   -44,     0,   -44,   -44,   -44,   -44,     0,     0,
     -44,   -44,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -44,   -44,     0,     0,     0,     0,     0,   -44,
     -44,   -44,   -47,     0,   -47,   -47,     0,   -47,   -47,   -47,
     -47,   -47,     0,   -47,     0,   -47,   -47,   -47,   -47,     0,
       0,   -47,   -47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -47,   -47,     0,     0,     0,     0,     0,
     -47,   -47,   -47,   -36,     0,   -36,   -36,     0,   -36,   -36,
     -36,   -36,   -36,     0,   -36,     0,   -36,   -36,   -36,   -36,
       0,     0,   -36,   -36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -36,   -36,     0,     0,     0,     0,
       0,   -36,   -36,   -36,   -11,     0,   -11,   -11,     0,   -11,
     -11,   -11,   -11,   -11,     0,   -11,     0,   -11,   -11,   -11,
     -11,     0,     0,   -11,   -11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -11,   -11,     0,     0,     0,
       0,     0,   -11,   -11,   -11,   238,     0,    28,    29,     0,
      30,    31,   239,     2,     3,     0,   240,     0,   241,   242,
     243,   244,     0,   -54,   -30,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,     0,     0,     0,    38,    39,     0,     0,
       0,     0,   -56,    40,    41,    42,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -54,     0,     0,     0,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -49,     0,     0,     0,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -73,     0,     0,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   265,
     266,   267,   -51,     0,     0,     0,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -53,     0,     0,     0,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -50,     0,     0,     0,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -66,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -67,     0,     0,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -74,     0,     0,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -75,     0,     0,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -76,     0,     0,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -77,     0,     0,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -68,     0,     0,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -48,     0,     0,     0,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -49,     0,     0,     0,     0,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -73,     0,     0,     0,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   278,
     279,   280,   -51,     0,     0,     0,     0,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -53,     0,     0,     0,     0,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -50,     0,     0,     0,     0,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -66,     0,     0,     0,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -67,     0,     0,     0,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -74,     0,     0,     0,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -75,     0,     0,     0,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -76,     0,     0,     0,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -77,     0,     0,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -68,     0,     0,     0,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -48,     0,     0,     0,     0,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -56,     0,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -54,
       0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -49,     0,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -73,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,    83,    84,    85,
     -51,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -53,     0,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -50,     0,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -67,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -74,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -77,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -68,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -62,     0,     0,
       0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     268,   269,   270,   271,   -55,     0,     0,     0,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -56,     0,     0,     0,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -54,     0,
       0,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -49,     0,     0,     0,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -69,     0,     0,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -51,
       0,     0,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -53,     0,     0,     0,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -50,     0,     0,     0,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -66,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -67,     0,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -70,     0,     0,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -71,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -72,     0,
       0,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -74,     0,     0,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -75,     0,     0,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,
       0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -77,     0,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -68,     0,     0,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -48,     0,     0,     0,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -62,     0,     0,
       0,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     281,   282,   283,   284,   -55,     0,     0,     0,     0,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -56,     0,     0,     0,     0,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -54,     0,
       0,     0,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -49,     0,     0,     0,     0,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -69,     0,     0,     0,     0,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -51,
       0,     0,     0,     0,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -53,     0,     0,     0,
       0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -50,     0,     0,     0,     0,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -66,     0,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -67,     0,     0,
       0,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -70,     0,     0,     0,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -71,     0,     0,     0,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -72,     0,
       0,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -74,     0,     0,     0,     0,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -75,     0,     0,     0,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,
       0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -77,     0,     0,     0,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -68,     0,     0,     0,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -48,     0,     0,     0,     0,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -62,     0,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,    97,    98,    99,
     100,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -71,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -72,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -55,     0,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -56,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -54,     0,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -49,
       0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -51,     0,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -53,     0,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -67,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -74,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -77,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -68,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -48,     0,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -49,     0,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -51,     0,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -53,     0,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -50,     0,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -66,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -67,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   346,     0,    87,
      88,    89,    90,    91,    92,    93,    94,   -74,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -77,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -68,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   409,     0,    87,
      88,    89,    90,    91,    92,    93,    94,   -48,     0,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48
};

static const yytype_int16 yycheck[] =
{
       0,    26,     0,    70,     7,    46,     6,    32,     6,   127,
     128,     0,     0,   127,     0,   127,    19,   127,     6,    19,
       7,    46,     7,    23,     0,     1,    11,   145,   127,     0,
       1,    19,     7,     9,    10,    23,    59,    18,     9,    10,
      81,    66,     0,     1,    69,    68,    71,    72,     0,     1,
     259,     9,    10,     9,    10,    18,    81,     9,    10,    22,
     127,     0,     1,   272,    38,    39,    40,    41,    42,     7,
       9,    10,     0,    11,     9,    10,   285,     7,   127,   146,
     103,   104,   291,   127,    19,   127,     7,    59,   297,    18,
      11,    65,    19,    22,    19,    69,    68,    71,    72,    73,
      18,    19,   127,   128,   129,     0,     1,    20,    19,    83,
      84,    85,    23,    19,     9,    10,   139,    23,    19,    18,
     145,    95,    96,    97,    98,    99,   100,   127,    18,   127,
      18,   103,   104,    18,     3,     4,    18,     6,     7,     3,
       4,     5,     6,     7,     3,     4,     5,     6,     7,    65,
      19,    22,   126,    69,    21,    71,    72,    20,     7,    42,
      22,    21,    19,    32,    33,    19,    19,   139,    32,    33,
      39,    40,    41,    32,    33,    39,    40,    41,    22,    19,
      39,    40,    41,   157,   158,   159,   160,   161,   397,     0,
       1,    19,    19,    22,   403,    21,    19,    22,     9,    10,
      22,   175,   176,   177,   178,   179,    22,    22,     7,    19,
     126,   420,    19,     7,   239,    19,    19,    19,   427,   193,
     194,   195,   196,   197,    19,    22,    19,    19,    19,    19,
      19,    18,   255,    18,   208,   209,   210,   211,   212,     3,
       4,     5,     6,     7,     3,     4,     5,     6,     7,   223,
     224,   225,   226,   227,    20,    18,    18,    18,    42,    19,
     234,   235,   236,   237,    22,    22,    19,    19,    32,    33,
      19,    19,   339,    32,    33,    39,    40,    41,    19,    19,
      39,    40,    41,   255,    19,   259,    19,    19,    19,    19,
      19,   265,   266,   267,   268,   269,   270,   271,   272,    19,
      21,    19,    19,   344,   278,   279,   280,   281,   282,   283,
     284,   285,    19,   338,   337,   340,   341,   291,    22,   344,
     438,   439,   347,   297,   438,   439,   438,   439,   438,   439,
      22,    22,    22,   307,   308,   309,   310,   311,    22,   438,
     439,   459,    19,   259,    19,   459,     6,   459,   126,   459,
     324,   325,   326,   327,   328,    23,   272,   339,    -1,    -1,
     459,    -1,    -1,    -1,   338,   337,   340,   341,   342,   285,
      -1,   438,   439,   347,    -1,   291,    -1,    -1,    -1,    -1,
      -1,   297,   356,   357,   358,   359,   360,    -1,    -1,   438,
     439,    -1,   459,    -1,   438,   439,   438,   439,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   379,   380,   381,   382,   383,
     459,    -1,    -1,   438,   439,   459,    -1,   459,    -1,    -1,
      -1,    -1,   338,   397,   340,   341,    -1,    -1,    -1,   403,
      -1,   347,    -1,    -1,   459,    -1,    -1,    -1,   438,   439,
     438,   439,    -1,    -1,    65,    -1,   420,    -1,    69,    -1,
      71,    72,    73,   427,    -1,    -1,    -1,    -1,    -1,   459,
      19,   459,    83,    84,    85,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    95,    96,    97,    98,    99,   100,
      -1,   397,    -1,    -1,    -1,    -1,    -1,   403,    -1,    -1,
      65,    -1,    -1,    -1,    69,    -1,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,   420,   126,    -1,    -1,    -1,    -1,
       1,   427,     3,     4,    -1,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    -1,    -1,    20,
      21,     3,     4,    -1,     6,     7,   157,   158,   159,   160,
     161,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,   126,    -1,    -1,   175,   176,   177,   178,   179,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,
      -1,     3,     4,    -1,     6,     7,    -1,   208,   209,   210,
     211,   212,     3,     4,    -1,     6,     7,     3,     4,    -1,
       6,     7,   223,   224,   225,   226,   227,    -1,    -1,    -1,
      32,    33,    -1,   234,   235,   236,   237,    39,    40,    41,
      -1,    32,    33,    -1,    -1,    -1,    32,    33,    39,    40,
      41,    -1,    -1,    39,    40,    41,     3,     4,   259,     6,
       7,    -1,    -1,    -1,   265,   266,   267,   268,   269,   270,
     271,   272,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,
     281,   282,   283,   284,   285,    32,    33,    -1,    -1,    -1,
     291,    -1,    39,    40,    41,    -1,   297,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   259,    -1,   307,   308,   309,   310,
     311,    -1,    -1,    -1,    -1,     3,     4,   272,     6,     7,
      -1,    -1,    -1,   324,   325,   326,   327,   328,    -1,    -1,
     285,     3,     4,    -1,     6,     7,   291,   338,    -1,   340,
     341,   342,   297,    -1,    32,    33,   347,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,   356,   357,   358,   359,   360,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       3,     4,    -1,     6,     7,    -1,    -1,    -1,   379,   380,
     381,   382,   383,   338,    -1,   340,   341,    -1,    -1,    -1,
      -1,    -1,   347,    -1,    -1,    -1,   397,    65,    -1,    32,
      33,    69,   403,    71,    72,    73,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    -1,   420,
      -1,    -1,    -1,    -1,    -1,    -1,   427,    95,    96,    97,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,   397,     6,     7,     8,     9,    10,   403,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    20,   126,    -1,
      -1,    -1,    -1,    -1,    -1,   420,    -1,    -1,    -1,    32,
      33,    -1,   427,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    -1,    -1,     3,     4,    -1,     6,     7,    -1,   157,
     158,   159,   160,   161,     3,     4,    -1,     6,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,   176,   177,
     178,   179,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,    32,    33,   193,   194,   195,   196,   197,
      39,    40,    41,    -1,     3,     4,    -1,     6,     7,    -1,
     208,   209,   210,   211,   212,     3,     4,    -1,     6,     7,
       3,     4,    -1,     6,     7,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    32,    33,    -1,   234,   235,   236,   237,
      39,    40,    41,    -1,    32,    33,    -1,    -1,    -1,    32,
      33,    39,    40,    41,    -1,    -1,    39,    40,    41,     3,
       4,   259,     6,     7,    -1,    -1,    -1,   265,   266,   267,
     268,   269,   270,   271,   272,    -1,    -1,    -1,    -1,    -1,
     278,   279,   280,   281,   282,   283,   284,   285,    32,    33,
      -1,    -1,    -1,   291,    18,    39,    40,    41,    22,   297,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,   307,
     308,   309,   310,   311,    -1,    -1,     3,     4,    -1,     6,
       7,    -1,    -1,    -1,    -1,    -1,   324,   325,   326,   327,
     328,    -1,    -1,    -1,     3,     4,    -1,     6,     7,    -1,
     338,    -1,   340,   341,   342,    32,    33,    -1,    -1,   347,
      -1,    -1,    39,    40,    41,    -1,    -1,    -1,   356,   357,
     358,   359,   360,    32,    33,     3,     4,    -1,     6,     7,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   379,   380,   381,   382,   383,    -1,     3,     4,    -1,
       6,     7,    -1,    -1,    32,    33,    -1,    -1,    -1,   397,
      65,    39,    40,    41,    69,   403,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    83,    84,
      85,    -1,   420,    39,    40,    41,    -1,    -1,    -1,   427,
      95,    96,    97,    98,    99,   100,     1,    -1,     3,     4,
      -1,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    -1,    -1,    20,    21,    -1,    -1,    -1,
      -1,   126,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    18,    19,    -1,    39,    40,    41,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,   157,   158,   159,   160,   161,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
     175,   176,   177,   178,   179,    19,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,   193,   194,
     195,   196,   197,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,   208,   209,   210,   211,   212,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,   223,   224,
     225,   226,   227,    -1,    -1,    -1,    -1,    -1,    -1,   234,
     235,   236,   237,    18,    -1,    -1,    -1,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,   259,    -1,    -1,    42,    -1,    -1,
     265,   266,   267,   268,   269,   270,   271,   272,    -1,    -1,
      -1,    -1,    -1,   278,   279,   280,   281,   282,   283,   284,
     285,    -1,    -1,    -1,    -1,    -1,   291,    -1,    18,    19,
      -1,    -1,   297,    23,    24,    25,    26,    27,    28,    29,
      30,    31,   307,   308,   309,   310,   311,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,   324,
     325,   326,   327,   328,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   338,    -1,   340,   341,   342,    19,    -1,
      -1,    -1,   347,    24,    25,    26,    27,    28,    29,    30,
      31,   356,   357,   358,   359,   360,    18,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,   379,   380,   381,   382,   383,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,   397,    65,    -1,    -1,    -1,    69,   403,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    -1,   420,    -1,    -1,    -1,    -1,
      -1,    -1,   427,    95,    96,    97,    98,    99,   100,     1,
      -1,     3,     4,    -1,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    -1,    -1,    20,    21,
      -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    19,    -1,    39,    40,    41,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,   157,   158,   159,   160,   161,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,   175,   176,   177,   178,   179,    19,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,   193,   194,   195,   196,   197,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,   208,   209,   210,   211,
     212,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,   223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,
      -1,    -1,   234,   235,   236,   237,    18,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,   259,    -1,    -1,
      -1,    -1,    -1,   265,   266,   267,   268,   269,   270,   271,
     272,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,   281,
     282,   283,   284,   285,    -1,    -1,    -1,    -1,    -1,   291,
      18,    19,    -1,    -1,    -1,   297,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,   307,   308,   309,   310,   311,
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,   324,   325,   326,   327,   328,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   338,    -1,   340,   341,
     342,    19,    -1,    -1,    -1,   347,    24,    25,    26,    27,
      28,    29,    30,    31,   356,   357,   358,   359,   360,    18,
      -1,    -1,    -1,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,   379,   380,   381,
     382,   383,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,   397,    65,    -1,    -1,    -1,
      69,   403,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    -1,   420,    -1,
      -1,    -1,    -1,    -1,    -1,   427,    95,    96,    97,    98,
      99,   100,     1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      -1,    20,    21,    -1,    -1,    -1,    -1,   126,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    19,    -1,
      39,    40,    41,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,   157,   158,
     159,   160,   161,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,   175,   176,   177,   178,
     179,    19,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,   193,   194,   195,   196,   197,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,   208,
     209,   210,   211,   212,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,   223,   224,   225,   226,   227,    -1,
      -1,    -1,    -1,    -1,    -1,   234,   235,   236,   237,    18,
      -1,    -1,    -1,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     259,    -1,    -1,    -1,    -1,    -1,   265,   266,   267,   268,
     269,   270,   271,   272,    -1,    -1,    -1,    -1,    -1,   278,
     279,   280,   281,   282,   283,   284,   285,    -1,    -1,    -1,
      -1,    -1,   291,    -1,    -1,    19,    -1,    -1,   297,    23,
      24,    25,    26,    27,    28,    29,    30,    31,   307,   308,
     309,   310,   311,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,   324,   325,   326,   327,   328,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   338,
      -1,   340,   341,   342,    19,    -1,    -1,    -1,   347,    24,
      25,    26,    27,    28,    29,    30,    31,   356,   357,   358,
     359,   360,    18,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
     379,   380,   381,   382,   383,    19,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,   397,    65,
      -1,    -1,    -1,    69,   403,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,
      -1,   420,    -1,    -1,    -1,    -1,    -1,    -1,   427,    95,
      96,    97,    98,    99,   100,     1,    -1,     3,     4,    -1,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,
     126,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    19,    -1,    39,    40,    41,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,   157,   158,   159,   160,   161,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,   175,
     176,   177,   178,   179,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,   193,   194,   195,
     196,   197,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,   208,   209,   210,   211,   212,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,   223,   224,   225,
     226,   227,    -1,    -1,    -1,    -1,    -1,    -1,   234,   235,
     236,   237,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,   259,    -1,    -1,    -1,    -1,    -1,   265,
     266,   267,   268,   269,   270,   271,   272,    -1,    -1,    -1,
      -1,    -1,   278,   279,   280,   281,   282,   283,   284,   285,
      -1,    -1,    -1,    -1,    -1,   291,    -1,    -1,    19,    -1,
      -1,   297,    23,    24,    25,    26,    27,    28,    29,    30,
      31,   307,   308,   309,   310,   311,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,   324,   325,
     326,   327,   328,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   338,    -1,   340,   341,   342,    19,    -1,    -1,
      -1,   347,    24,    25,    26,    27,    28,    29,    30,    31,
     356,   357,   358,   359,   360,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,   379,   380,   381,   382,   383,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,   397,     6,     7,     8,     9,    10,   403,    12,    13,
      14,    15,    16,    17,    -1,    -1,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,   420,    -1,    -1,    -1,    32,    33,
      -1,   427,    -1,    -1,    -1,    39,    40,    41,     1,    -1,
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
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    19,    -1,    20,    21,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    19,    -1,    20,    21,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    19,    -1,    20,    21,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    19,    -1,    20,    21,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    19,    -1,    20,    21,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    19,    -1,    20,
      21,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    19,    -1,
      20,    21,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    19,
      -1,    20,    21,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
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
      -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    -1,    22,    20,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    19,    39,    40,    41,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
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
      29,    30,    31,    32,    33,    34,    35,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    22,    -1,    24,
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
       0,     1,     9,    10,    44,    45,    46,    47,    49,    50,
      71,    72,    73,     0,    45,    22,    48,     7,    11,    18,
      50,    51,    52,    23,    19,    52,    20,     1,     3,     4,
       6,     7,     8,    12,    14,    15,    16,    17,    32,    33,
      39,    40,    41,    49,    50,    55,    56,    57,    58,    59,
      60,    61,    63,    65,    66,    67,    68,    69,    70,    74,
      75,    76,    77,    78,    79,    18,    42,     7,    74,    18,
      18,    18,    18,    18,    68,    68,    68,    68,    68,    21,
      55,    20,    22,    36,    37,    38,    22,    24,    25,    26,
      27,    28,    29,    30,    31,    80,    81,    32,    33,    34,
      35,    53,    54,    74,    74,    22,    74,     7,    62,    63,
       5,    74,     5,    74,    68,    55,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    19,    23,    19,    19,    22,
      19,    19,    19,    19,    19,    21,    54,    56,    56,    74,
      22,    22,    22,    22,    22,    13,    22,    56,    63,    64,
      71,    71,    22,     3,     4,     6,     7,    32,    33,    39,
      40,    41,    67,    68,    69,    70,    75,    76,    77,    78,
      79,     3,     4,     6,     7,    32,    33,    39,    40,    41,
      67,    68,    69,    70,    75,    76,    77,    78,    79,     3,
       4,     6,     7,    32,    33,    39,    40,    41,    67,    69,
      70,    75,    77,    78,     3,     4,     6,     7,    32,    33,
      39,    40,    41,    67,    69,    70,    75,    77,    78,     3,
       4,     6,     7,    32,    33,    39,    40,    41,    67,    69,
      70,    75,    77,    78,    80,    81,    80,    81,     1,     8,
      12,    14,    15,    16,    17,    49,    50,    57,    58,    59,
      60,    61,    63,    65,    66,    74,     7,     7,     7,    18,
      68,    68,    68,    68,    68,    36,    37,    38,    32,    33,
      34,    35,    18,    68,    68,    68,    68,    68,    36,    37,
      38,    32,    33,    34,    35,    18,    68,    68,    68,    68,
      68,    18,    68,    68,    68,    68,    68,    18,    68,    68,
      68,    68,    68,     3,     4,     6,     7,    32,    33,    39,
      40,    41,    67,    68,    69,    70,    75,    77,    78,    68,
       3,     4,     6,     7,    32,    33,    39,    40,    41,    67,
      68,    69,    70,    75,    77,    78,    68,    74,    18,    18,
      18,    18,    18,    22,    20,    22,    22,    42,    53,    68,
      68,    68,     3,     4,     6,     7,    32,    33,    39,    40,
      41,    67,    68,    69,    70,    75,    77,    78,    68,    68,
      68,    53,    68,    68,    68,     3,     4,     6,     7,    32,
      33,    39,    40,    41,    67,    68,    69,    70,    75,    77,
      78,    68,    68,    68,    53,    53,    53,    18,    68,    68,
      68,    68,    68,    18,    68,    68,    68,    68,    68,    22,
      74,    62,     5,    74,     5,    74,    68,    55,    74,    19,
      18,    68,    68,    68,    68,    68,    19,    18,    68,    68,
      68,    68,    68,    19,    19,    19,    53,    53,    19,    19,
      19,    19,    19,    19,    19,    21,    53,    53,    19,    19,
      56,    56,    22,    22,    22,    22,    22,    19,    19,    13,
      56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    45,    45,    46,    46,    46,    48,
      47,    49,    50,    51,    51,    52,    52,    53,    53,    54,
      54,    55,    55,    56,    56,    56,    56,    56,    56,    56,
      57,    56,    56,    56,    58,    59,    59,    60,    61,    62,
      63,    64,    64,    65,    65,    65,    65,    66,    67,    68,
      68,    68,    68,    69,    69,    70,    70,    71,    71,    72,
      73,    73,    74,    74,    74,    74,    75,    75,    75,    76,
      76,    76,    76,    76,    77,    77,    78,    78,    79,    79,
      79,    80,    80,    81,    81,    81,    81,    81,    81
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     0,
       8,     2,     2,     1,     0,     3,     1,     1,     0,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     2,     1,     2,     5,     7,     3,     5,     5,
       3,     1,     0,     5,     5,     5,     5,     5,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     3,     3,     1,     1,     2,     3,
       3,     3,     3,     1,     2,     2,     2,     2,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1
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
#line 3040 "src/syn.tab.c"
    break;

  case 3: /* program: %empty  */
#line 152 "src/syn.y"
           {
      (yyval.node) = create_node(PROGRAM);
    }
#line 3048 "src/syn.tab.c"
    break;

  case 4: /* lst_declarations: declaration lst_declarations  */
#line 158 "src/syn.y"
                                {
      (yyval.node) = create_node(LIST_DECLARATIONS);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3058 "src/syn.tab.c"
    break;

  case 5: /* lst_declarations: declaration  */
#line 163 "src/syn.y"
                 {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(LIST_DECLARATIONS);
      // add_tree_node($$, $1);
    }
#line 3068 "src/syn.tab.c"
    break;

  case 6: /* declaration: func_declaration  */
#line 171 "src/syn.y"
                   {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(DECLARATION);
      // add_tree_node($$, $1);
    }
#line 3078 "src/syn.tab.c"
    break;

  case 7: /* declaration: var_declaration  */
#line 176 "src/syn.y"
                    {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(DECLARATION);
      // add_tree_node($$, $1);
    }
#line 3088 "src/syn.tab.c"
    break;

  case 8: /* declaration: error  */
#line 181 "src/syn.y"
          {
      yyerrok;
      (yyval.node) = create_node(DECLARATION); 
      syntax_errors++;
    }
#line 3098 "src/syn.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 189 "src/syn.y"
                  {increment_scope(); strcpy(func_name, (yyvsp[0].node)->children->sibilings->child->token.lexeme);}
#line 3104 "src/syn.tab.c"
    break;

  case 10: /* func_declaration: unq_declaration $@1 '(' parameters ')' '{' block_commands '}'  */
#line 189 "src/syn.y"
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
#line 3121 "src/syn.tab.c"
    break;

  case 11: /* var_declaration: unq_declaration ';'  */
#line 204 "src/syn.y"
                      {
      // $$ = create_node(VARIABLE_DECLARATION);
      (yyval.node) = (yyvsp[-1].node);
      // add_tree_node($$, $1);
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 3132 "src/syn.tab.c"
    break;

  case 12: /* unq_declaration: type ID  */
#line 213 "src/syn.y"
          {
      (yyval.node) = create_node(UNIQUE_DECLARATION);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_token_node((yyval.node), &(yyvsp[0].token), IDENTIFIER);
      add_table_node((yyvsp[0].token).lexeme, (yyvsp[-1].node), idx);
      idx++;
    }
#line 3144 "src/syn.tab.c"
    break;

  case 13: /* parameters: lst_parameters  */
#line 223 "src/syn.y"
                 {
      (yyval.node) = (yyvsp[0].node);
      
      // $$ = create_node(PARAMETERS);
      // add_tree_node($$, $1);
    }
#line 3155 "src/syn.tab.c"
    break;

  case 14: /* parameters: %empty  */
#line 229 "src/syn.y"
           {
      (yyval.node) = create_node(PARAMETERS);
    }
#line 3163 "src/syn.tab.c"
    break;

  case 15: /* lst_parameters: unq_declaration ',' lst_parameters  */
#line 235 "src/syn.y"
                                      {
      (yyval.node) = create_node(LIST_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$2, COMMA);
      add_tree_node((yyval.node), (yyvsp[0].node));

      set_P_table((yyvsp[-2].node));
      // set_amount_params(func_name, get_amount_params($1));
      get_amount_params((yyvsp[-2].node));

    }
#line 3179 "src/syn.tab.c"
    break;

  case 16: /* lst_parameters: unq_declaration  */
#line 246 "src/syn.y"
                    {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(LIST_PARAMETERS);
      // add_tree_node($$, $1);

      set_P_table((yyvsp[0].node));
      // strcpy(func_name, $1->children->sibilings->child->token.lexeme);
      // set_amount_params(func_name, get_amount_params($1));
      // printf("");
      get_amount_params((yyvsp[0].node));
    }
#line 3195 "src/syn.tab.c"
    break;

  case 17: /* calling_parameters: lst_calling_parameters  */
#line 260 "src/syn.y"
                         {
      (yyval.node) = create_node(CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3204 "src/syn.tab.c"
    break;

  case 18: /* calling_parameters: %empty  */
#line 264 "src/syn.y"
           {
      (yyval.node) = create_node(CALLING_PARAMETERS);
    }
#line 3212 "src/syn.tab.c"
    break;

  case 19: /* lst_calling_parameters: operation ',' lst_calling_parameters  */
#line 270 "src/syn.y"
                                       {
      (yyval.node) = create_node(LIST_CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$2, COMMA);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3223 "src/syn.tab.c"
    break;

  case 20: /* lst_calling_parameters: operation  */
#line 276 "src/syn.y"
              {
      (yyval.node) = create_node(LIST_CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3232 "src/syn.tab.c"
    break;

  case 21: /* block_commands: command block_commands  */
#line 283 "src/syn.y"
                          {
      // $$ = $1;
      (yyval.node) = create_node(BLOCK_COMMANDS);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3243 "src/syn.tab.c"
    break;

  case 22: /* block_commands: command  */
#line 289 "src/syn.y"
            {
    (yyval.node) = (yyvsp[0].node);
  }
#line 3251 "src/syn.tab.c"
    break;

  case 23: /* command: var_declaration  */
#line 295 "src/syn.y"
                  {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3261 "src/syn.tab.c"
    break;

  case 24: /* command: init_variable  */
#line 300 "src/syn.y"
                  {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3271 "src/syn.tab.c"
    break;

  case 25: /* command: conditional_stmt  */
#line 305 "src/syn.y"
                     {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3281 "src/syn.tab.c"
    break;

  case 26: /* command: return_stmt  */
#line 310 "src/syn.y"
                {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3291 "src/syn.tab.c"
    break;

  case 27: /* command: iteration  */
#line 315 "src/syn.y"
              {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3301 "src/syn.tab.c"
    break;

  case 28: /* command: input  */
#line 320 "src/syn.y"
          {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3311 "src/syn.tab.c"
    break;

  case 29: /* command: output  */
#line 325 "src/syn.y"
           {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3321 "src/syn.tab.c"
    break;

  case 30: /* $@2: %empty  */
#line 330 "src/syn.y"
    {increment_scope();}
#line 3327 "src/syn.tab.c"
    break;

  case 31: /* command: $@2 '{' block_commands '}'  */
#line 330 "src/syn.y"
                                                {
    // $$ = $2;
      (yyval.node) = create_node(COMMAND);
      // add_tree_token_node($$, &$2, OPEN_CURLY_BRACKET);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$4, CLOSE_CURLY_BRACKET);
    }
#line 3339 "src/syn.tab.c"
    break;

  case 32: /* command: operation ';'  */
#line 337 "src/syn.y"
                  { 
      (yyval.node) = create_node(COMMAND);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 3349 "src/syn.tab.c"
    break;

  case 33: /* command: error  */
#line 343 "src/syn.y"
          {
      yyerrok;
      (yyval.node) = create_node(COMMAND); 
      syntax_errors++;
    }
#line 3359 "src/syn.tab.c"
    break;

  case 34: /* init_variable: init_stmt ';'  */
#line 351 "src/syn.y"
                {
      (yyval.node) = create_node(INIT_VARIABLE);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 3369 "src/syn.tab.c"
    break;

  case 35: /* conditional_stmt: IF_STMT '(' operation ')' command  */
#line 359 "src/syn.y"
                                                  {
      (yyval.node) = create_node(CONDITIONAL_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), IF);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3382 "src/syn.tab.c"
    break;

  case 36: /* conditional_stmt: IF_STMT '(' operation ')' command ELSE_STMT command  */
#line 367 "src/syn.y"
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
#line 3397 "src/syn.tab.c"
    break;

  case 37: /* return_stmt: RETURN_STM operation ';'  */
#line 380 "src/syn.y"
                            {
      (yyval.node) = create_node(RETURN_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), RETURN);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$3, SEMICOLON);
    }
#line 3408 "src/syn.tab.c"
    break;

  case 38: /* iteration: FOR_STMT '(' loop_condition ')' command  */
#line 389 "src/syn.y"
                                          {
      (yyval.node) = create_node(ITERATION_PROCESS);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), FOR);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3421 "src/syn.tab.c"
    break;

  case 39: /* loop_condition: init_stmt ';' operation ';' update_stmt  */
#line 400 "src/syn.y"
                                          {
      (yyval.node) = create_node(LOOP_CONDITION);
      add_tree_node((yyval.node), (yyvsp[-4].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, SEMICOLON);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3434 "src/syn.tab.c"
    break;

  case 40: /* init_stmt: ID '=' operation  */
#line 411 "src/syn.y"
                    {
      (yyval.node) = create_node(INIT_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), IDENTIFIER);
      // add_tree_token_node($$, &$2, ASSIGN);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3445 "src/syn.tab.c"
    break;

  case 41: /* update_stmt: init_stmt  */
#line 420 "src/syn.y"
            {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(UPDATE_STMT);
      // add_tree_node($$, $1);
    }
#line 3455 "src/syn.tab.c"
    break;

  case 42: /* update_stmt: %empty  */
#line 425 "src/syn.y"
           {
      (yyval.node) = create_node(UPDATE_STMT);
    }
#line 3463 "src/syn.tab.c"
    break;

  case 43: /* output: OUTPUT_WRITE '(' operation ')' ';'  */
#line 431 "src/syn.y"
                                      {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITE);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3476 "src/syn.tab.c"
    break;

  case 44: /* output: OUTPUT_WRITELN '(' operation ')' ';'  */
#line 439 "src/syn.y"
                                         {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITELN);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3489 "src/syn.tab.c"
    break;

  case 45: /* output: OUTPUT_WRITE '(' STRING ')' ';'  */
#line 447 "src/syn.y"
                                    {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITELN);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), STRING);
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3502 "src/syn.tab.c"
    break;

  case 46: /* output: OUTPUT_WRITELN '(' STRING ')' ';'  */
#line 455 "src/syn.y"
                                      {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITELN);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), STRING);
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3515 "src/syn.tab.c"
    break;

  case 47: /* input: INPUT_READ '(' expression ')' ';'  */
#line 466 "src/syn.y"
                                    {
      (yyval.node) = create_node(INPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), READ);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3528 "src/syn.tab.c"
    break;

  case 48: /* func_calling: ID '(' calling_parameters ')'  */
#line 477 "src/syn.y"
                                {
      (yyval.node) = create_node(FUNCTION_CALLING);
      add_tree_token_node((yyval.node), &(yyvsp[-3].token), IDENTIFIER);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
    }
#line 3540 "src/syn.tab.c"
    break;

  case 49: /* expression: func_calling  */
#line 487 "src/syn.y"
               {
    (yyval.node) = (yyvsp[0].node);
    // $$ = create_node(EXPRESSION);
    // add_tree_node($$, $1);
    }
#line 3550 "src/syn.tab.c"
    break;

  case 50: /* expression: single_operation  */
#line 492 "src/syn.y"
                     {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(EXPRESSION);
      // add_tree_node($$, $1);
    }
#line 3560 "src/syn.tab.c"
    break;

  case 51: /* expression: const  */
#line 497 "src/syn.y"
          {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(EXPRESSION);
      // add_tree_node($$, $1);
    }
#line 3570 "src/syn.tab.c"
    break;

  case 52: /* expression: ID  */
#line 502 "src/syn.y"
       {
      (yyval.node) = create_node(EXPRESSION);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), IDENTIFIER);
    }
#line 3579 "src/syn.tab.c"
    break;

  case 53: /* const: number  */
#line 509 "src/syn.y"
         {
    (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(CONSTANT);
      // add_tree_node($$, $1);
    }
#line 3589 "src/syn.tab.c"
    break;

  case 54: /* const: NIL_CNST  */
#line 514 "src/syn.y"
             {
      (yyval.node) = create_node(CONSTANT);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NIL);
    }
#line 3598 "src/syn.tab.c"
    break;

  case 55: /* number: NUM_INT  */
#line 521 "src/syn.y"
          {
      (yyval.node) = create_node(NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NUMBER_INT);
    }
#line 3607 "src/syn.tab.c"
    break;

  case 56: /* number: NUM_FLOAT  */
#line 525 "src/syn.y"
              {
      (yyval.node) = create_node(NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NUMBER_FLOAT);
    }
#line 3616 "src/syn.tab.c"
    break;

  case 57: /* type: type_lst  */
#line 532 "src/syn.y"
            {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(TYPE);
      // add_tree_node($$, $1);
    }
#line 3626 "src/syn.tab.c"
    break;

  case 58: /* type: type_number  */
#line 537 "src/syn.y"
                 {
    (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(TYPE);
      // add_tree_node($$, $1);
    }
#line 3636 "src/syn.tab.c"
    break;

  case 59: /* type_lst: type_number T_LIST  */
#line 545 "src/syn.y"
                       {
      (yyval.node) = create_node(TYPE_LIST);
      // add_tree_node($$, $1);
      (yyval.node) = (yyvsp[-1].node);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), LIST);
    }
#line 3647 "src/syn.tab.c"
    break;

  case 60: /* type_number: T_INT  */
#line 554 "src/syn.y"
        {
      (yyval.node) = create_node(TYPE_NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), INT);
    }
#line 3656 "src/syn.tab.c"
    break;

  case 61: /* type_number: T_FLOAT  */
#line 558 "src/syn.y"
            {
      (yyval.node) = create_node(TYPE_NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), FLOAT);
    }
#line 3665 "src/syn.tab.c"
    break;

  case 62: /* operation: arith_binary  */
#line 565 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(OPERATION);
      // add_tree_node($$, $1);
    }
#line 3675 "src/syn.tab.c"
    break;

  case 63: /* operation: lst_binary  */
#line 570 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(OPERATION);
      // add_tree_node($$, $1);
    }
#line 3685 "src/syn.tab.c"
    break;

  case 64: /* operation: operation relational_op expression  */
#line 575 "src/syn.y"
                                        {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3696 "src/syn.tab.c"
    break;

  case 65: /* operation: operation logical_op expression  */
#line 581 "src/syn.y"
                                    {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3707 "src/syn.tab.c"
    break;

  case 66: /* single_operation: arith_single  */
#line 590 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(SINGLE_OPERATION);
      // add_tree_node($$, $1);
    }
#line 3717 "src/syn.tab.c"
    break;

  case 67: /* single_operation: lst_single  */
#line 595 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(SINGLE_OPERATION);
      // add_tree_node($$, $1);
    }
#line 3727 "src/syn.tab.c"
    break;

  case 68: /* single_operation: '!' expression  */
#line 600 "src/syn.y"
                   {
    (yyval.node) = create_node(SINGLE_OPERATION);
    add_tree_token_node((yyval.node), &(yyvsp[-1].token), NOT_OR_TAIL);
    add_tree_node((yyval.node), (yyvsp[0].node));
  }
#line 3737 "src/syn.tab.c"
    break;

  case 69: /* arith_binary: arith_binary '+' expression  */
#line 608 "src/syn.y"
                              {
      (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), ADD_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));

      // convert_numbers($1, $3, '+');

    }
#line 3751 "src/syn.tab.c"
    break;

  case 70: /* arith_binary: arith_binary '-' expression  */
#line 617 "src/syn.y"
                                {
      (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MINUS_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3762 "src/syn.tab.c"
    break;

  case 71: /* arith_binary: arith_binary '*' expression  */
#line 623 "src/syn.y"
                                {
      (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MULTIPLY_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3773 "src/syn.tab.c"
    break;

  case 72: /* arith_binary: arith_binary '/' expression  */
#line 629 "src/syn.y"
                                {
       (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), DIVISION_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3784 "src/syn.tab.c"
    break;

  case 73: /* arith_binary: expression  */
#line 635 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(ARITHMETIC_BINARY);
      // add_tree_node($$, $1);
    }
#line 3794 "src/syn.tab.c"
    break;

  case 74: /* arith_single: '+' expression  */
#line 643 "src/syn.y"
                 {
    (yyval.node) = create_node(ARITHMETIC_SINGLE);
    add_tree_token_node((yyval.node), &(yyvsp[-1].token), ADD_OP);
    add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3804 "src/syn.tab.c"
    break;

  case 75: /* arith_single: '-' expression  */
#line 648 "src/syn.y"
                   {
      (yyval.node) = create_node(ARITHMETIC_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MINUS_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3814 "src/syn.tab.c"
    break;

  case 76: /* lst_single: '%' expression  */
#line 656 "src/syn.y"
                 {
      (yyval.node) = create_node(LIST_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), POP_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3824 "src/syn.tab.c"
    break;

  case 77: /* lst_single: '?' expression  */
#line 661 "src/syn.y"
                   {
      (yyval.node) = create_node(LIST_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), HEAD_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3834 "src/syn.tab.c"
    break;

  case 78: /* lst_binary: expression FILTER expression  */
#line 669 "src/syn.y"
                               {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), FILTER_OP);
    }
#line 3844 "src/syn.tab.c"
    break;

  case 79: /* lst_binary: expression MAP expression  */
#line 674 "src/syn.y"
                              {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MAP_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3855 "src/syn.tab.c"
    break;

  case 80: /* lst_binary: expression ':' expression  */
#line 680 "src/syn.y"
                              {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), CONSTRUCTOR_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3866 "src/syn.tab.c"
    break;

  case 81: /* logical_op: AND  */
#line 689 "src/syn.y"
      {
      (yyval.node) = create_node(LOGIC_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), AND_OP);
    }
#line 3875 "src/syn.tab.c"
    break;

  case 82: /* logical_op: OR  */
#line 693 "src/syn.y"
       {
      (yyval.node) = create_node(LOGIC_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), OR_OP);
    }
#line 3884 "src/syn.tab.c"
    break;

  case 83: /* relational_op: GREATER  */
#line 700 "src/syn.y"
          {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), GT_OP);
    }
#line 3893 "src/syn.tab.c"
    break;

  case 84: /* relational_op: GREATER_EQ  */
#line 704 "src/syn.y"
               {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), GE_OP);
    }
#line 3902 "src/syn.tab.c"
    break;

  case 85: /* relational_op: LESS  */
#line 708 "src/syn.y"
         {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), LT_OP);
    }
#line 3911 "src/syn.tab.c"
    break;

  case 86: /* relational_op: LESS_EQ  */
#line 712 "src/syn.y"
            {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), LE_OP);
    }
#line 3920 "src/syn.tab.c"
    break;

  case 87: /* relational_op: EQUAL  */
#line 716 "src/syn.y"
          {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), EQ_OP);
    }
#line 3929 "src/syn.tab.c"
    break;

  case 88: /* relational_op: NOT_EQ  */
#line 720 "src/syn.y"
           {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NE_OP);
    }
#line 3938 "src/syn.tab.c"
    break;


#line 3942 "src/syn.tab.c"

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

#line 726 "src/syn.y"

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
  

  // print_tree(root, 1);
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
