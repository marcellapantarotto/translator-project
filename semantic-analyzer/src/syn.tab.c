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

  char *id_buff;

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
#define YYLAST   5782

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  459

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
     189,   202,   211,   221,   226,   232,   238,   246,   250,   256,
     262,   269,   275,   281,   286,   291,   296,   301,   306,   311,
     316,   316,   323,   331,   339,   347,   360,   369,   380,   391,
     400,   405,   411,   419,   427,   435,   446,   457,   467,   472,
     477,   482,   489,   494,   501,   505,   512,   517,   525,   534,
     538,   545,   550,   555,   561,   570,   575,   580,   588,   597,
     603,   609,   615,   623,   628,   636,   641,   649,   654,   660,
     669,   673,   680,   684,   688,   692,   696,   700
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

#define YYPACT_NINF (-198)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-88)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      40,    74,    13,    26,     5,    10,    81,   115,   132,    17,
      11,    18,    45,  -198,    27,   158,   -15,    47,    25,   104,
      66,    69,    75,     3,    24,    76,  3814,  1281,  2064,  2396,
    3873,   207,    41,    46,    83,    94,   111,   207,   207,   207,
     207,   207,  3034,    71,   109,  3073,   116,  3112,  3151,  3190,
    3229,   112,  3268,  3307,  4470,  4487,  4504,  4521,   227,  4538,
    5371,  4555,  4572,   242,    39,   207,  1844,   687,   579,   133,
     114,   167,   727,  4589,  4606,  4623,  4640,  4657,   178,   122,
    3814,  3346,   779,   779,   779,  3385,   871,   889,   911,   929,
     942,   983,  1040,  1058,   779,   779,  1089,  1089,  1089,  1089,
     125,   126,   285,  1351,  3424,  1385,   106,   137,   130,   138,
    1717,   141,  2049,   150,   154,  1570,  1585,  1683,  1902,  1917,
    5385,  5399,  5413,  5427,  4674,  1111,  3853,  3814,   207,   160,
     163,   164,   168,   169,  3463,   157,   513,  3502,  2015,  3541,
    3580,  3619,  3658,  3697,  3814,    -3,  3736,   161,   170,   186,
     187,  3775,  1945,  2175,  2277,  1511,  1111,  1111,  1111,  1111,
    1111,  3893,  3913,  3933,  3953,  3973,  4694,  3993,  4013,  1426,
    4153,  4173,  4193,  1608,   579,   579,   579,   579,   579,  4213,
    4233,  4253,  4273,  4293,  5034,  4313,  4333,  2381,   176,   177,
     182,    58,   727,   727,   727,   727,   727,   183,   184,   190,
     196,   197,   199,  2234,  2249,  2347,  1003,   779,   779,   779,
     779,   779,  2419,  3811,  3850,  5651,  5661,  5671,  5441,  5455,
    5469,  1404,  1089,  1089,  1089,  1089,  1089,  5483,  5497,  5511,
    5525,  5539,  5553,  1203,  1203,  1221,  1221,   207,   179,   201,
     204,   211,   212,   828,   209,   185,  1160,  1492,  1824,  2156,
     210,  2449,  2488,  5681,   191,    77,   213,    39,  4033,  4053,
    4073,  4093,  4113,  1203,  1203,  1203,  1243,  1243,  1243,  1243,
      39,  4353,  4373,  4393,  4413,  4433,  1221,  1221,  1221,  1261,
    1261,  1261,  1261,    39,   215,   217,   218,   231,   246,    39,
    5691,  5701,  5711,  5721,  5731,    39,  5567,  5581,  5595,  5609,
    5623,  1537,  1555,  1668,   672,  1203,  1203,  1203,  1203,  1203,
    1758,  1869,  1887,  2000,  2090,  2201,  2219,  2332,  2838,  2877,
    2916,  1335,  1221,  1221,  1221,  1221,  1221,  2955,  2994,  3033,
    3072,  3111,  3150,  3189,  3228,  5741,   579,   133,   470,   557,
     727,  2527,  3814,  2566,  2605,   579,   261,  2487,  2526,  2565,
    4711,  4728,  4745,   620,  1243,  1243,  1243,  1243,  1243,  4762,
    4779,  4796,  4813,  4830,  4847,  4864,  4881,  4898,  4915,   262,
    3267,  3306,  3345,  5051,  5068,  5085,  1736,  1261,  1261,  1261,
    1261,  1261,  5102,  5119,  5136,  5153,  5170,  5187,  5204,  5221,
    5238,  5255,   263,   264,   265,    39,  2604,  2643,  2682,  2721,
    2760,    39,  3384,  3423,  3462,  3501,  3540,  2644,  3579,   266,
     267,  3618,   268,  3657,   269,   274,  3696,  4133,    39,  4932,
    4949,  4966,  4983,  5000,  4453,    39,  5272,  5289,  5306,  5323,
    5340,   277,  5751,  5637,   278,   286,  3853,  3853,   284,   298,
     301,   304,   305,  2683,   288,   310,  2799,  3735,  2722,  2761,
    2800,  2839,  2878,  2917,  2956,  5017,  5357,  3853,  2995
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -198,  -198,   335,  -198,  -198,  -198,     2,     0,  -198,   319,
    -197,   226,   -44,   -97,  -119,   -71,   -69,   -56,   -27,    16,
     -58,  -198,   -23,    -4,   399,    67,   731,  1063,    15,  -198,
    -198,   -17,  1395,   113,  1727,  2059,   347,   -41,   -36
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,     7,    16,    42,    43,    21,    22,
     100,   101,    44,    45,    46,    47,    48,    49,    50,   107,
      51,   148,    52,    53,    54,    55,    56,    57,   150,    11,
      12,   102,    59,    60,    61,    62,    63,   235,   236
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    79,     8,    19,   254,    13,     9,   245,     8,    58,
      -2,   108,     2,     3,    67,    10,   -41,    94,    17,    20,
     -59,    10,    95,    20,   -59,   -56,    94,    -4,    58,   136,
     137,    95,   -58,   -60,   149,    -9,   114,   -60,   149,    15,
      -3,     1,   152,   153,    26,   154,   155,   146,   103,     2,
       3,   105,   -57,   110,   112,   246,    18,   247,   -18,    68,
     346,   233,    94,    58,    69,   -12,   234,    95,   250,   -12,
     248,   156,   157,   369,    -8,    -8,   283,   -51,   158,   159,
     160,    -5,     1,    -8,    -8,   -16,   392,   147,    24,    23,
       2,     3,   393,   151,   -13,   -15,   -12,    94,   394,   249,
     -12,    70,    95,   251,    73,    74,    75,    76,    77,   253,
      58,   138,    71,     2,     3,    -6,    -6,   170,   171,   109,
     172,   173,   252,   -14,    -6,    -6,   244,    58,   243,    72,
      78,   162,    -7,    -7,    81,   180,    80,   180,   180,   113,
     106,    -7,    -7,   -21,   124,   -17,   174,   175,    65,   115,
     116,   117,   128,   176,   177,   178,   127,   129,   -11,   -11,
     131,   118,   119,   120,   121,   122,   123,   -11,   -11,   133,
     170,   171,   111,   172,   173,   134,   -19,   166,   -10,   -10,
     -40,   184,   139,   184,   184,   140,   141,   -10,   -10,   -38,
     142,   143,   162,   255,   256,   -54,   -55,   336,   434,   174,
     175,   -53,   -48,   -50,   435,   342,   176,   177,   178,   -52,
      27,    28,    94,    29,    66,   -49,   -65,    95,   -66,   337,
     335,   444,   338,   258,   259,   260,   261,   262,   445,   339,
     340,   341,   343,   345,   -73,   -12,   -74,   -75,   166,    37,
      38,   271,   272,   273,   274,   275,    39,    40,    41,    85,
     -76,    86,    87,    88,    89,    90,    91,    92,    93,   284,
     285,   286,   287,   288,   -62,   -67,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   290,   291,   292,   293,   294,   108,
     417,   424,   431,   432,   433,   437,   438,   440,   442,   296,
     297,   298,   299,   300,    94,   443,   -47,   446,   415,    95,
     311,   317,   328,   334,   -20,   447,   450,   455,   125,    86,
      87,    88,    89,    90,    91,    92,    93,   245,   245,   408,
     451,   411,   413,   452,   162,    58,   453,   454,   416,   456,
     347,   348,   349,   360,   366,   367,   368,   162,   245,   448,
     449,    14,    25,   370,   371,   372,   383,   389,   390,   391,
     162,   135,     0,   409,     0,     0,   162,     0,     0,     0,
     458,     0,   162,     0,     0,   246,   246,   247,   247,     0,
     166,     0,   396,   397,   398,   399,   400,     0,   250,   250,
     248,   248,     0,   166,     0,     0,   246,     0,   247,   402,
     403,   404,   405,   406,     0,     0,   166,     0,     0,   250,
       0,   248,   166,   180,     0,   180,   180,   414,   166,   249,
     249,   169,   180,   251,   251,   187,     0,   187,   187,   253,
     253,   419,   420,   421,   422,   423,     0,     0,     0,     0,
     249,     0,   252,   252,   251,     0,   244,   244,   243,   243,
     253,     0,     0,     0,   426,   427,   428,   429,   430,   184,
       0,   184,   184,   252,     0,     0,     0,   244,   184,   243,
       0,     0,   162,   161,     0,     0,     0,   179,   162,   179,
     179,   197,   169,   170,   171,   410,   172,   173,     0,     0,
       0,   212,   212,   212,     0,   162,     0,     0,     0,     0,
       0,     0,   162,   212,   212,   227,   227,   227,   227,     0,
       0,     0,   174,   175,     0,     0,     0,     0,   166,   176,
     177,   178,     0,     0,   166,     0,   -34,   -34,     0,   -34,
     -34,   -34,   -34,   -34,   161,   -34,   144,   -34,   -34,   -34,
     -34,   166,     0,   -34,   -34,     0,     0,     0,   166,     0,
       0,     0,     0,     0,     0,   -34,   -34,     0,     0,     0,
       0,     0,   -34,   -34,   -34,   161,   161,   161,   161,   161,
     170,   171,   412,   172,   173,     0,     0,     0,     0,     0,
       0,     0,     0,   179,   179,   179,   179,   179,     0,     0,
       0,     0,   170,   171,     0,   172,   173,     0,     0,   174,
     175,   197,   197,   197,   197,   197,   176,   177,   178,     0,
       0,     0,     0,     0,   169,     0,   212,   212,   212,   212,
     212,   174,   175,     0,     0,     0,     0,   169,   176,   177,
     178,   227,   227,   227,   227,   227,     0,     0,     0,     0,
     169,     0,   310,   310,   327,   327,   169,     0,   418,   -51,
       0,     0,   169,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   161,     0,     0,     0,
       0,     0,   310,   310,   310,   359,   359,   359,   359,   161,
       0,     0,     0,     0,     0,   327,   327,   327,   382,   382,
     382,   382,   161,   187,     0,   187,   187,     0,   161,     0,
     395,   -51,   187,     0,   161,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   310,   310,   310,   310,   310,   104,
       0,    86,    87,    88,    89,    90,    91,    92,    93,     0,
       0,   327,   327,   327,   327,   327,     0,     0,     0,     0,
     188,   189,     0,   190,   191,   179,     0,   179,   179,   197,
       0,     0,   169,     0,   179,     0,     0,     0,   169,     0,
       0,     0,     0,   359,   359,   359,   359,   359,     0,   192,
     193,     0,     0,     0,     0,   169,   194,   195,   196,     0,
       0,     0,   169,     0,     0,     0,   382,   382,   382,   382,
     382,     0,   203,   204,     0,   205,   206,     0,     0,     0,
       0,     0,     0,     0,   161,   163,     0,     0,     0,   181,
     161,   181,   181,   198,     0,     0,     0,     0,     0,     0,
       0,   207,   208,   213,   213,   213,     0,   161,   209,   210,
     211,     0,     0,     0,   161,   213,   213,   228,   228,   228,
     228,   -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,     0,
     -23,   -23,   -23,   -23,   -23,   -23,     0,     0,   -23,   -23,
       0,     0,     0,     0,     0,     0,   163,     0,     0,     0,
     -23,   -23,     0,     0,     0,     0,     0,   -23,   -23,   -23,
       0,     0,     0,     0,   -80,   -80,     0,   -80,   -80,     0,
       0,     0,     0,     0,     0,     0,     0,   163,   163,   163,
     163,   163,   -81,   -81,     0,   -81,   -81,     0,     0,     0,
       0,     0,     0,   -80,   -80,   181,   181,   181,   181,   181,
     -80,   -80,   -80,     0,   -82,   -82,     0,   -82,   -82,     0,
       0,   -81,   -81,   198,   198,   198,   198,   198,   -81,   -81,
     -81,     0,   -83,   -83,     0,   -83,   -83,     0,   213,   213,
     213,   213,   213,   -82,   -82,   -84,   -84,     0,   -84,   -84,
     -82,   -82,   -82,   228,   228,   228,   228,   228,     0,     0,
       0,   -83,   -83,     0,   312,   312,   329,   329,   -83,   -83,
     -83,     0,     0,     0,   -84,   -84,     0,     0,     0,     0,
       0,   -84,   -84,   -84,     0,     0,   -85,   -85,   163,   -85,
     -85,     0,     0,     0,   312,   312,   312,   361,   361,   361,
     361,   163,     0,     0,     0,     0,     0,   329,   329,   329,
     384,   384,   384,   384,   163,   -85,   -85,     0,     0,     0,
     163,   289,   -85,   -85,   -85,   -51,   163,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,     0,   312,   312,   312,   312,
     312,     0,     0,   -86,   -86,     0,   -86,   -86,     0,     0,
       0,     0,     0,   329,   329,   329,   329,   329,     0,     0,
       0,   -87,   -87,     0,   -87,   -87,     0,   181,     0,   181,
     181,   198,   -86,   -86,     0,     0,   181,     0,     0,   -86,
     -86,   -86,     0,     0,     0,   361,   361,   361,   361,   361,
     -87,   -87,   218,   219,     0,   220,   221,   -87,   -87,   -87,
       0,     0,     0,     0,     0,     0,     0,     0,   384,   384,
     384,   384,   384,     0,   152,   153,     0,   154,   155,     0,
       0,   222,   223,     0,     0,     0,   163,   164,   224,   225,
     226,   182,   163,   182,   182,   199,     0,     0,     0,     0,
       0,     0,     0,   156,   157,   214,   214,   214,     0,   163,
     158,   159,   160,     0,     0,     0,   163,   214,   214,   229,
     229,   229,   229,   -24,   -24,     0,   -24,   -24,   -24,   -24,
     -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,
     -24,   -24,     0,     0,     0,     0,     0,     0,   164,     0,
       0,     0,   -24,   -24,     0,     0,     0,     0,     0,   -24,
     -24,   -24,     0,     0,     0,     0,   301,   302,     0,   303,
     304,     0,     0,     0,     0,     0,     0,     0,     0,   164,
     164,   164,   164,   164,   318,   319,     0,   320,   321,     0,
       0,     0,     0,     0,     0,   305,   306,   182,   182,   182,
     182,   182,   307,   308,   309,     0,   350,   351,     0,   352,
     353,     0,     0,   322,   323,   199,   199,   199,   199,   199,
     324,   325,   326,     0,   373,   374,     0,   375,   376,     0,
     214,   214,   214,   214,   214,   354,   355,     0,     0,     0,
       0,     0,   356,   357,   358,   229,   229,   229,   229,   229,
       0,     0,     0,   377,   378,     0,   313,   313,   330,   330,
     379,   380,   381,   -54,     0,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     164,     0,     0,     0,     0,     0,   313,   313,   313,   362,
     362,   362,   362,   164,     0,     0,     0,     0,     0,   330,
     330,   330,   385,   385,   385,   385,   164,     0,     0,     0,
       0,     0,   164,   401,   -51,     0,     0,     0,   164,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,   313,   313,
     313,   313,   313,   -39,     0,    86,    87,    88,    89,    90,
      91,    92,    93,     0,     0,   330,   330,   330,   330,   330,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   182,
       0,   182,   182,   199,   126,     0,     0,     0,   182,    86,
      87,    88,    89,    90,    91,    92,    93,   362,   362,   362,
     362,   362,   295,     0,     0,     0,   -51,     0,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     385,   385,   385,   385,   385,   -62,     0,     0,     0,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   164,   165,
       0,     0,     0,   183,   164,   183,   183,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   215,   215,   215,
       0,   164,     0,     0,     0,     0,     0,     0,   164,   215,
     215,   230,   230,   230,   230,   -25,   -25,     0,   -25,   -25,
     -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,
       0,     0,   -25,   -25,     0,     0,     0,     0,     0,     0,
     165,     0,     0,     0,   -25,   -25,     0,     0,     0,   257,
     -51,   -25,   -25,   -25,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
       0,   165,   165,   165,   165,   165,   -54,     0,     0,     0,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   183,
     183,   183,   183,   183,   -55,     0,     0,     0,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   200,   200,   200,
     200,   200,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   215,   215,   215,   215,   215,   -78,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   230,   230,   230,
     230,   230,     0,     0,     0,     0,   270,   -51,   314,   314,
     331,   331,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,     0,     0,
       0,     0,   165,     0,     0,     0,     0,     0,   314,   314,
     314,   363,   363,   363,   363,   165,     0,     0,     0,     0,
       0,   331,   331,   331,   386,   386,   386,   386,   165,     0,
       0,     0,     0,     0,   165,     0,     0,   -53,     0,     0,
     165,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     314,   314,   314,   314,   314,   -79,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,   331,   331,   331,
     331,   331,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   183,     0,   183,   183,   200,   130,     0,     0,     0,
     183,    86,    87,    88,    89,    90,    91,    92,    93,   363,
     363,   363,   363,   363,   425,   -51,     0,     0,     0,     0,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   386,   386,   386,   386,   386,   -48,     0,     0,
       0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     165,   167,     0,     0,     0,   185,   165,   185,   185,   201,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   216,
     216,   216,     0,   165,     0,     0,     0,     0,     0,     0,
     165,   216,   216,   231,   231,   231,   231,   -26,   -26,     0,
     -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,
     -26,   -26,     0,     0,   -26,   -26,     0,     0,     0,     0,
       0,     0,   167,     0,     0,     0,   -26,   -26,     0,     0,
       0,     0,    64,   -26,   -26,   -26,   -51,     0,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   167,   167,   167,   167,   167,   -64,     0,
       0,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   185,   185,   185,   185,   185,   -50,     0,     0,     0,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   201,
     201,   201,   201,   201,   -64,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   216,   216,   216,   216,   216,   -63,
       0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   231,
     231,   231,   231,   231,     0,     0,     0,     0,     0,     0,
     315,   315,   332,   332,   -54,     0,     0,     0,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   167,     0,     0,     0,     0,     0,
     315,   315,   315,   364,   364,   364,   364,   167,     0,     0,
       0,     0,     0,   332,   332,   332,   387,   387,   387,   387,
     167,     0,     0,     0,     0,     0,   167,     0,     0,   -52,
       0,     0,   167,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   315,   315,   315,   315,   315,   145,     0,    86,
      87,    88,    89,    90,    91,    92,    93,     0,     0,   332,
     332,   332,   332,   332,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   185,     0,   185,   185,   201,   132,     0,
       0,     0,   185,    86,    87,    88,    89,    90,    91,    92,
      93,   364,   364,   364,   364,   364,   -55,     0,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,     0,   387,   387,   387,   387,   387,   -49,
       0,     0,     0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   167,   168,     0,     0,     0,   186,   167,   186,
     186,   202,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   217,   217,   217,     0,   167,     0,     0,     0,     0,
       0,     0,   167,   217,   217,   232,   232,   232,   232,   -27,
     -27,     0,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,
     -27,   -27,   -27,   -27,     0,     0,   -27,   -27,     0,     0,
       0,     0,     0,     0,   168,     0,     0,     0,   -27,   -27,
       0,     0,     0,     0,   -55,   -27,   -27,   -27,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,     0,   168,   168,   168,   168,   168,
     -65,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   186,   186,   186,   186,   186,   -66,     0,
       0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   202,   202,   202,   202,   202,   -54,     0,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   217,   217,   217,   217,
     217,   -55,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   232,   232,   232,   232,   232,     0,     0,     0,     0,
       0,     0,   316,   316,   333,   333,   -53,     0,     0,     0,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   168,     0,     0,     0,
       0,     0,   316,   316,   316,   365,   365,   365,   365,   168,
       0,     0,     0,     0,     0,   333,   333,   333,   388,   388,
     388,   388,   168,     0,     0,     0,     0,     0,   168,     0,
       0,   -63,     0,     0,   168,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   316,   316,   316,   316,   316,   -53,
       0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,     0,
       0,   333,   333,   333,   333,   333,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   186,     0,   186,   186,   202,
     -62,     0,     0,     0,   186,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   365,   365,   365,   365,   365,   -53,     0,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,     0,   388,   388,   388,   388,
     388,   -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,     0,   -29,   -29,   168,   -29,   -29,   -29,   -29,   -29,
     168,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,   -29,
     -29,     0,     0,     0,     0,     0,     0,   168,     0,     0,
       0,   -29,   -29,     0,   168,     0,     0,     0,   -29,   -29,
     -29,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,     0,
     -28,   -28,   -28,   -28,   -28,   -28,   -77,     0,   -28,   -28,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
     -28,   -28,     0,     0,     0,     0,     0,   -28,   -28,   -28,
     -11,   -11,     0,   -11,   -11,   -11,   -11,   -11,     0,   -11,
     -11,   -11,   -11,   -11,   -11,   -78,     0,   -11,   -11,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,   -11,
     -11,     0,     0,     0,     0,     0,   -11,   -11,   -11,   -33,
     -33,     0,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,
     -33,   -33,   -33,   -33,   -79,     0,   -33,   -33,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -33,   -33,
       0,     0,     0,     0,     0,   -33,   -33,   -33,   -32,   -32,
       0,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,
     -32,   -32,   -32,   -73,     0,   -32,   -32,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,   -32,   -32,     0,
       0,     0,     0,     0,   -32,   -32,   -32,   -36,   -36,     0,
     -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,
     -36,   -36,   -74,     0,   -36,   -36,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,     0,   -36,   -36,     0,     0,
       0,     0,     0,   -36,   -36,   -36,   -31,   -31,     0,   -31,
     -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,
     -31,   -75,     0,   -31,   -31,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,   -31,   -31,     0,     0,     0,
       0,     0,   -31,   -31,   -31,   -34,   -34,     0,   -34,   -34,
     -34,   -34,   -34,     0,   -34,   457,   -34,   -34,   -34,   -34,
     -76,     0,   -34,   -34,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,   -34,   -34,     0,     0,     0,     0,
       0,   -34,   -34,   -34,   -37,   -37,     0,   -37,   -37,   -37,
     -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -67,
       0,   -37,   -37,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,   -37,   -37,     0,     0,     0,     0,     0,
     -37,   -37,   -37,   -44,   -44,     0,   -44,   -44,   -44,   -44,
     -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,   -47,     0,
     -44,   -44,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,     0,   -44,   -44,     0,     0,     0,     0,     0,   -44,
     -44,   -44,   -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,
       0,   -42,   -42,   -42,   -42,   -42,   -42,   -54,     0,   -42,
     -42,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
       0,   -42,   -42,     0,     0,     0,     0,     0,   -42,   -42,
     -42,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,     0,
     -45,   -45,   -45,   -45,   -45,   -45,   -55,     0,   -45,   -45,
       0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,     0,
     -45,   -45,     0,     0,     0,     0,     0,   -45,   -45,   -45,
     -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,     0,   -43,
     -43,   -43,   -43,   -43,   -43,   -53,     0,   -43,   -43,     0,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,     0,   -43,
     -43,     0,     0,     0,     0,     0,   -43,   -43,   -43,   -46,
     -46,     0,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,
     -46,   -46,   -46,   -46,   -48,     0,   -46,   -46,     0,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,   -46,   -46,
       0,     0,     0,     0,     0,   -46,   -46,   -46,   -35,   -35,
       0,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,
     -35,   -35,   -35,   -64,     0,   -35,   -35,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,     0,   -35,   -35,     0,
       0,     0,     0,     0,   -35,   -35,   -35,   -23,   -23,     0,
     -23,   -23,   -23,   -23,   -23,     0,   -23,     0,   -23,   -23,
     -23,   -23,   -50,     0,   -23,   -23,     0,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,     0,   -23,   -23,     0,     0,
       0,     0,     0,   -23,   -23,   -23,    27,    28,     0,    29,
      30,    31,     2,     3,     0,    32,     0,    33,    34,    35,
      36,   -52,     0,   -30,   -22,     0,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,     0,    37,    38,     0,     0,     0,
       0,     0,    39,    40,    41,   -24,   -24,     0,   -24,   -24,
     -24,   -24,   -24,     0,   -24,     0,   -24,   -24,   -24,   -24,
     -49,     0,   -24,   -24,     0,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,     0,   -24,   -24,     0,     0,     0,     0,
       0,   -24,   -24,   -24,   -25,   -25,     0,   -25,   -25,   -25,
     -25,   -25,     0,   -25,     0,   -25,   -25,   -25,   -25,   -65,
       0,   -25,   -25,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,     0,   -25,   -25,     0,     0,     0,     0,     0,
     -25,   -25,   -25,   -26,   -26,     0,   -26,   -26,   -26,   -26,
     -26,     0,   -26,     0,   -26,   -26,   -26,   -26,   -66,     0,
     -26,   -26,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,     0,   -26,   -26,     0,     0,     0,     0,     0,   -26,
     -26,   -26,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,
       0,   -27,     0,   -27,   -27,   -27,   -27,   -63,     0,   -27,
     -27,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
       0,   -27,   -27,     0,     0,     0,     0,     0,   -27,   -27,
     -27,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,     0,
     -29,     0,   -29,   -29,   -29,   -29,   -77,     0,   -29,   -29,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
     -29,   -29,     0,     0,     0,     0,     0,   -29,   -29,   -29,
     -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,     0,   -28,
       0,   -28,   -28,   -28,   -28,   -78,     0,   -28,   -28,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,   -28,
     -28,     0,     0,     0,     0,     0,   -28,   -28,   -28,   -33,
     -33,     0,   -33,   -33,   -33,   -33,   -33,     0,   -33,     0,
     -33,   -33,   -33,   -33,   -79,     0,   -33,   -33,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -33,   -33,
       0,     0,     0,     0,     0,   -33,   -33,   -33,   -32,   -32,
       0,   -32,   -32,   -32,   -32,   -32,     0,   -32,     0,   -32,
     -32,   -32,   -32,   -73,     0,   -32,   -32,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,   -32,   -32,     0,
       0,     0,     0,     0,   -32,   -32,   -32,   -36,   -36,     0,
     -36,   -36,   -36,   -36,   -36,     0,   -36,     0,   -36,   -36,
     -36,   -36,   -74,     0,   -36,   -36,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,     0,   -36,   -36,     0,     0,
       0,     0,     0,   -36,   -36,   -36,   -31,   -31,     0,   -31,
     -31,   -31,   -31,   -31,     0,   -31,     0,   -31,   -31,   -31,
     -31,   -75,     0,   -31,   -31,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,   -31,   -31,     0,     0,     0,
       0,     0,   -31,   -31,   -31,   -37,   -37,     0,   -37,   -37,
     -37,   -37,   -37,     0,   -37,     0,   -37,   -37,   -37,   -37,
     -76,     0,   -37,   -37,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,   -37,   -37,     0,     0,     0,     0,
       0,   -37,   -37,   -37,   -44,   -44,     0,   -44,   -44,   -44,
     -44,   -44,     0,   -44,     0,   -44,   -44,   -44,   -44,   -67,
       0,   -44,   -44,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,   -44,   -44,     0,     0,     0,     0,     0,
     -44,   -44,   -44,   -42,   -42,     0,   -42,   -42,   -42,   -42,
     -42,     0,   -42,     0,   -42,   -42,   -42,   -42,   436,     0,
     -42,   -42,     0,    86,    87,    88,    89,    90,    91,    92,
      93,     0,   -42,   -42,     0,     0,     0,     0,     0,   -42,
     -42,   -42,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,
       0,   -45,     0,   -45,   -45,   -45,   -45,   439,     0,   -45,
     -45,     0,    86,    87,    88,    89,    90,    91,    92,    93,
       0,   -45,   -45,     0,     0,     0,     0,     0,   -45,   -45,
     -45,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,     0,
     -43,     0,   -43,   -43,   -43,   -43,   441,     0,   -43,   -43,
       0,    86,    87,    88,    89,    90,    91,    92,    93,     0,
     -43,   -43,     0,     0,     0,     0,     0,   -43,   -43,   -43,
     -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,     0,   -46,
       0,   -46,   -46,   -46,   -46,   -39,     0,   -46,   -46,     0,
      86,    87,    88,    89,    90,    91,    92,    93,     0,   -46,
     -46,     0,     0,     0,     0,     0,   -46,   -46,   -46,   -35,
     -35,     0,   -35,   -35,   -35,   -35,   -35,     0,   -35,     0,
     -35,   -35,   -35,   -35,   -47,     0,   -35,   -35,     0,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,   -35,   -35,
       0,     0,     0,     0,     0,   -35,   -35,   -35,   -11,   -11,
       0,   -11,   -11,   -11,   -11,   -11,     0,   -11,     0,   -11,
     -11,   -11,   -11,     0,     0,   -11,   -11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -11,   -11,     0,
       0,     0,     0,     0,   -11,   -11,   -11,    27,    28,     0,
      29,    30,    31,     2,     3,     0,    32,     0,    33,    34,
      35,    36,     0,   -50,   -30,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,     0,     0,     0,    37,    38,     0,     0,
       0,     0,     0,    39,    40,    41,    27,    28,     0,    29,
      30,   237,     2,     3,     0,   238,     0,   239,   240,   241,
     242,     0,   -52,   -30,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,     0,     0,     0,    37,    38,     0,     0,     0,
       0,    64,    39,    40,    41,   -51,     0,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -48,     0,     0,    65,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -72,     0,     0,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   263,
     264,   265,   -50,     0,     0,     0,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -52,     0,     0,     0,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -49,     0,     0,     0,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -65,     0,     0,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -66,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -73,     0,     0,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -74,     0,     0,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -75,     0,     0,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -76,     0,     0,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -67,     0,     0,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -47,     0,     0,     0,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -54,     0,     0,     0,     0,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -55,     0,     0,     0,     0,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -53,     0,     0,     0,     0,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -48,     0,     0,     0,     0,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -72,     0,     0,     0,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   276,
     277,   278,   -50,     0,     0,     0,     0,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -52,     0,     0,     0,     0,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -49,     0,     0,     0,     0,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -65,     0,     0,     0,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -66,     0,     0,     0,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -73,     0,     0,     0,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -74,     0,     0,     0,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -75,     0,     0,     0,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -76,     0,     0,     0,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -67,     0,     0,     0,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -47,     0,     0,     0,     0,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -72,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,    82,    83,    84,   -50,     0,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -52,     0,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -49,     0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -65,     0,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -66,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -74,     0,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -67,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -47,     0,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -61,     0,     0,     0,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   266,   267,   268,   269,
     -54,     0,     0,     0,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -55,     0,     0,
       0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -53,     0,     0,     0,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -48,     0,     0,     0,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -68,     0,
       0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -50,     0,     0,     0,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -52,     0,     0,     0,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -49,
       0,     0,     0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -65,     0,     0,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -66,     0,     0,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -69,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -70,     0,     0,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -71,     0,     0,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -73,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -74,     0,
       0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -75,     0,     0,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -76,     0,     0,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -67,
       0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -47,     0,     0,     0,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -61,     0,     0,     0,     0,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   279,   280,   281,   282,
     -54,     0,     0,     0,     0,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -55,     0,     0,
       0,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -53,     0,     0,     0,     0,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -48,     0,     0,     0,     0,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -68,     0,
       0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -50,     0,     0,     0,     0,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -52,     0,     0,     0,     0,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -49,
       0,     0,     0,     0,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -65,     0,     0,     0,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -66,     0,     0,     0,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -69,     0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -70,     0,     0,
       0,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -71,     0,     0,     0,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -73,     0,     0,     0,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -74,     0,
       0,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -75,     0,     0,     0,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -76,     0,     0,     0,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -67,
       0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -47,     0,     0,     0,
       0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -61,     0,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,    96,    97,    98,    99,   -68,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -71,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -54,     0,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -55,     0,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -53,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -48,     0,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -50,
       0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -52,     0,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -49,     0,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -73,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -74,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -67,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -47,
       0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -49,     0,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -65,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -66,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   344,     0,    86,    87,    88,    89,    90,
      91,    92,    93,   -73,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -74,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -67,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   407,     0,    86,    87,    88,    89,    90,
      91,    92,    93,   -47,     0,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47
};

static const yytype_int16 yycheck[] =
{
       0,    45,     0,    18,     7,     0,     6,   126,     6,    26,
       0,    69,     9,    10,    31,     0,    19,    58,     7,    19,
       7,     6,    58,    23,    11,     7,    67,     0,    45,   126,
     127,    67,     7,     7,    19,    18,    80,    11,    23,    22,
       0,     1,     3,     4,    20,     6,     7,   144,    65,     9,
      10,    68,     7,    70,    71,   126,    11,   126,    19,    18,
     257,   102,   103,    80,    18,    18,   102,   103,   126,    22,
     126,    32,    33,   270,     0,     1,    18,    19,    39,    40,
      41,     0,     1,     9,    10,    19,   283,   145,    19,    23,
       9,    10,   289,    22,    19,    19,    19,   138,   295,   126,
      23,    18,   138,   126,    37,    38,    39,    40,    41,   126,
     127,   128,    18,     9,    10,     0,     1,     3,     4,     5,
       6,     7,   126,    19,     9,    10,   126,   144,   126,    18,
      21,    64,     0,     1,    22,    68,    20,    70,    71,    72,
       7,     9,    10,    21,    19,    19,    32,    33,    42,    82,
      83,    84,    22,    39,    40,    41,    19,    19,     0,     1,
      19,    94,    95,    96,    97,    98,    99,     9,    10,    19,
       3,     4,     5,     6,     7,    21,    19,    64,     0,     1,
      19,    68,    22,    70,    71,    22,    22,     9,    10,    19,
      22,    22,   125,     7,     7,    19,    19,    18,   395,    32,
      33,    19,    19,    19,   401,    20,    39,    40,    41,    19,
       3,     4,   253,     6,     7,    19,    19,   253,    19,    18,
     237,   418,    18,   156,   157,   158,   159,   160,   425,    18,
      18,    22,    22,    42,    19,    22,    19,    19,   125,    32,
      33,   174,   175,   176,   177,   178,    39,    40,    41,    22,
      19,    24,    25,    26,    27,    28,    29,    30,    31,   192,
     193,   194,   195,   196,    22,    19,    24,    25,    26,    27,
      28,    29,    30,    31,   207,   208,   209,   210,   211,   337,
      19,    19,    19,    19,    19,    19,    19,    19,    19,   222,
     223,   224,   225,   226,   335,    21,    19,    19,   342,   335,
     233,   234,   235,   236,    19,    19,    22,    19,    23,    24,
      25,    26,    27,    28,    29,    30,    31,   436,   437,   336,
      22,   338,   339,    22,   257,   342,    22,    22,   345,    19,
     263,   264,   265,   266,   267,   268,   269,   270,   457,   436,
     437,     6,    23,   276,   277,   278,   279,   280,   281,   282,
     283,   125,    -1,   337,    -1,    -1,   289,    -1,    -1,    -1,
     457,    -1,   295,    -1,    -1,   436,   437,   436,   437,    -1,
     257,    -1,   305,   306,   307,   308,   309,    -1,   436,   437,
     436,   437,    -1,   270,    -1,    -1,   457,    -1,   457,   322,
     323,   324,   325,   326,    -1,    -1,   283,    -1,    -1,   457,
      -1,   457,   289,   336,    -1,   338,   339,   340,   295,   436,
     437,    64,   345,   436,   437,    68,    -1,    70,    71,   436,
     437,   354,   355,   356,   357,   358,    -1,    -1,    -1,    -1,
     457,    -1,   436,   437,   457,    -1,   436,   437,   436,   437,
     457,    -1,    -1,    -1,   377,   378,   379,   380,   381,   336,
      -1,   338,   339,   457,    -1,    -1,    -1,   457,   345,   457,
      -1,    -1,   395,    64,    -1,    -1,    -1,    68,   401,    70,
      71,    72,   125,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    82,    83,    84,    -1,   418,    -1,    -1,    -1,    -1,
      -1,    -1,   425,    94,    95,    96,    97,    98,    99,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,   395,    39,
      40,    41,    -1,    -1,   401,    -1,     3,     4,    -1,     6,
       7,     8,     9,    10,   125,    12,    13,    14,    15,    16,
      17,   418,    -1,    20,    21,    -1,    -1,    -1,   425,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,   156,   157,   158,   159,   160,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   174,   175,   176,   177,   178,    -1,    -1,
      -1,    -1,     3,     4,    -1,     6,     7,    -1,    -1,    32,
      33,   192,   193,   194,   195,   196,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,   257,    -1,   207,   208,   209,   210,
     211,    32,    33,    -1,    -1,    -1,    -1,   270,    39,    40,
      41,   222,   223,   224,   225,   226,    -1,    -1,    -1,    -1,
     283,    -1,   233,   234,   235,   236,   289,    -1,    18,    19,
      -1,    -1,   295,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,   257,    -1,    -1,    -1,
      -1,    -1,   263,   264,   265,   266,   267,   268,   269,   270,
      -1,    -1,    -1,    -1,    -1,   276,   277,   278,   279,   280,
     281,   282,   283,   336,    -1,   338,   339,    -1,   289,    -1,
      18,    19,   345,    -1,   295,    23,    24,    25,    26,    27,
      28,    29,    30,    31,   305,   306,   307,   308,   309,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,   322,   323,   324,   325,   326,    -1,    -1,    -1,    -1,
       3,     4,    -1,     6,     7,   336,    -1,   338,   339,   340,
      -1,    -1,   395,    -1,   345,    -1,    -1,    -1,   401,    -1,
      -1,    -1,    -1,   354,   355,   356,   357,   358,    -1,    32,
      33,    -1,    -1,    -1,    -1,   418,    39,    40,    41,    -1,
      -1,    -1,   425,    -1,    -1,    -1,   377,   378,   379,   380,
     381,    -1,     3,     4,    -1,     6,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   395,    64,    -1,    -1,    -1,    68,
     401,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    82,    83,    84,    -1,   418,    39,    40,
      41,    -1,    -1,    -1,   425,    94,    95,    96,    97,    98,
      99,     3,     4,    -1,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    -1,    -1,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,   157,   158,
     159,   160,     3,     4,    -1,     6,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,   174,   175,   176,   177,   178,
      39,    40,    41,    -1,     3,     4,    -1,     6,     7,    -1,
      -1,    32,    33,   192,   193,   194,   195,   196,    39,    40,
      41,    -1,     3,     4,    -1,     6,     7,    -1,   207,   208,
     209,   210,   211,    32,    33,     3,     4,    -1,     6,     7,
      39,    40,    41,   222,   223,   224,   225,   226,    -1,    -1,
      -1,    32,    33,    -1,   233,   234,   235,   236,    39,    40,
      41,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,     3,     4,   257,     6,
       7,    -1,    -1,    -1,   263,   264,   265,   266,   267,   268,
     269,   270,    -1,    -1,    -1,    -1,    -1,   276,   277,   278,
     279,   280,   281,   282,   283,    32,    33,    -1,    -1,    -1,
     289,    18,    39,    40,    41,    22,   295,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,   305,   306,   307,   308,
     309,    -1,    -1,     3,     4,    -1,     6,     7,    -1,    -1,
      -1,    -1,    -1,   322,   323,   324,   325,   326,    -1,    -1,
      -1,     3,     4,    -1,     6,     7,    -1,   336,    -1,   338,
     339,   340,    32,    33,    -1,    -1,   345,    -1,    -1,    39,
      40,    41,    -1,    -1,    -1,   354,   355,   356,   357,   358,
      32,    33,     3,     4,    -1,     6,     7,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   377,   378,
     379,   380,   381,    -1,     3,     4,    -1,     6,     7,    -1,
      -1,    32,    33,    -1,    -1,    -1,   395,    64,    39,    40,
      41,    68,   401,    70,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    82,    83,    84,    -1,   418,
      39,    40,    41,    -1,    -1,    -1,   425,    94,    95,    96,
      97,    98,    99,     3,     4,    -1,     6,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    -1,    -1,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,
     157,   158,   159,   160,     3,     4,    -1,     6,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,   174,   175,   176,
     177,   178,    39,    40,    41,    -1,     3,     4,    -1,     6,
       7,    -1,    -1,    32,    33,   192,   193,   194,   195,   196,
      39,    40,    41,    -1,     3,     4,    -1,     6,     7,    -1,
     207,   208,   209,   210,   211,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,   222,   223,   224,   225,   226,
      -1,    -1,    -1,    32,    33,    -1,   233,   234,   235,   236,
      39,    40,    41,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     257,    -1,    -1,    -1,    -1,    -1,   263,   264,   265,   266,
     267,   268,   269,   270,    -1,    -1,    -1,    -1,    -1,   276,
     277,   278,   279,   280,   281,   282,   283,    -1,    -1,    -1,
      -1,    -1,   289,    18,    19,    -1,    -1,    -1,   295,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,   305,   306,
     307,   308,   309,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,   322,   323,   324,   325,   326,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,
      -1,   338,   339,   340,    19,    -1,    -1,    -1,   345,    24,
      25,    26,    27,    28,    29,    30,    31,   354,   355,   356,
     357,   358,    18,    -1,    -1,    -1,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
     377,   378,   379,   380,   381,    19,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,   395,    64,
      -1,    -1,    -1,    68,   401,    70,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,
      -1,   418,    -1,    -1,    -1,    -1,    -1,    -1,   425,    94,
      95,    96,    97,    98,    99,     3,     4,    -1,     6,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
     125,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    18,
      19,    39,    40,    41,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,   156,   157,   158,   159,   160,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,   174,
     175,   176,   177,   178,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,   192,   193,   194,
     195,   196,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,   207,   208,   209,   210,   211,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,   222,   223,   224,
     225,   226,    -1,    -1,    -1,    -1,    18,    19,   233,   234,
     235,   236,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,   263,   264,
     265,   266,   267,   268,   269,   270,    -1,    -1,    -1,    -1,
      -1,   276,   277,   278,   279,   280,   281,   282,   283,    -1,
      -1,    -1,    -1,    -1,   289,    -1,    -1,    19,    -1,    -1,
     295,    23,    24,    25,    26,    27,    28,    29,    30,    31,
     305,   306,   307,   308,   309,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,   322,   323,   324,
     325,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   336,    -1,   338,   339,   340,    19,    -1,    -1,    -1,
     345,    24,    25,    26,    27,    28,    29,    30,    31,   354,
     355,   356,   357,   358,    18,    19,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,   377,   378,   379,   380,   381,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
     395,    64,    -1,    -1,    -1,    68,   401,    70,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      83,    84,    -1,   418,    -1,    -1,    -1,    -1,    -1,    -1,
     425,    94,    95,    96,    97,    98,    99,     3,     4,    -1,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,   125,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    18,    39,    40,    41,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,   156,   157,   158,   159,   160,    19,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,   174,   175,   176,   177,   178,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,   192,
     193,   194,   195,   196,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,   207,   208,   209,   210,   211,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,   222,
     223,   224,   225,   226,    -1,    -1,    -1,    -1,    -1,    -1,
     233,   234,   235,   236,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,   257,    -1,    -1,    -1,    -1,    -1,
     263,   264,   265,   266,   267,   268,   269,   270,    -1,    -1,
      -1,    -1,    -1,   276,   277,   278,   279,   280,   281,   282,
     283,    -1,    -1,    -1,    -1,    -1,   289,    -1,    -1,    19,
      -1,    -1,   295,    23,    24,    25,    26,    27,    28,    29,
      30,    31,   305,   306,   307,   308,   309,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,   322,
     323,   324,   325,   326,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   336,    -1,   338,   339,   340,    19,    -1,
      -1,    -1,   345,    24,    25,    26,    27,    28,    29,    30,
      31,   354,   355,   356,   357,   358,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,   377,   378,   379,   380,   381,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,   395,    64,    -1,    -1,    -1,    68,   401,    70,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    83,    84,    -1,   418,    -1,    -1,    -1,    -1,
      -1,    -1,   425,    94,    95,    96,    97,    98,    99,     3,
       4,    -1,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    -1,    -1,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    19,    39,    40,    41,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,   156,   157,   158,   159,   160,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,   174,   175,   176,   177,   178,    19,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,   192,   193,   194,   195,   196,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,   207,   208,   209,   210,
     211,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,   222,   223,   224,   225,   226,    -1,    -1,    -1,    -1,
      -1,    -1,   233,   234,   235,   236,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,   257,    -1,    -1,    -1,
      -1,    -1,   263,   264,   265,   266,   267,   268,   269,   270,
      -1,    -1,    -1,    -1,    -1,   276,   277,   278,   279,   280,
     281,   282,   283,    -1,    -1,    -1,    -1,    -1,   289,    -1,
      -1,    19,    -1,    -1,   295,    23,    24,    25,    26,    27,
      28,    29,    30,    31,   305,   306,   307,   308,   309,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,   322,   323,   324,   325,   326,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   336,    -1,   338,   339,   340,
      19,    -1,    -1,    -1,   345,    24,    25,    26,    27,    28,
      29,    30,    31,   354,   355,   356,   357,   358,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,   377,   378,   379,   380,
     381,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,     3,     4,   395,     6,     7,     8,     9,    10,
     401,    12,    13,    14,    15,    16,    17,    -1,    -1,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,
      -1,    32,    33,    -1,   425,    -1,    -1,    -1,    39,    40,
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
      -1,    12,    13,    14,    15,    16,    17,    19,    -1,    20,
      21,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     3,     4,    -1,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    19,    -1,    20,    21,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       3,     4,    -1,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    19,    -1,    20,    21,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     3,
       4,    -1,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    19,    -1,    20,    21,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     3,     4,
      -1,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
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
      15,    16,    17,    -1,    -1,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     3,     4,    -1,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    -1,    22,    20,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     3,     4,    -1,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    -1,    22,    20,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    18,    39,    40,    41,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    19,    -1,    -1,    42,    23,    24,    25,    26,
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
      36,    37,    38,    19,    -1,    -1,    -1,    23,    24,    25,
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
      33,    34,    35,    22,    -1,    24,    25,    26,    27,    28,
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
      71,    72,    73,     0,    45,    22,    48,     7,    11,    18,
      50,    51,    52,    23,    19,    52,    20,     3,     4,     6,
       7,     8,    12,    14,    15,    16,    17,    32,    33,    39,
      40,    41,    49,    50,    55,    56,    57,    58,    59,    60,
      61,    63,    65,    66,    67,    68,    69,    70,    74,    75,
      76,    77,    78,    79,    18,    42,     7,    74,    18,    18,
      18,    18,    18,    68,    68,    68,    68,    68,    21,    55,
      20,    22,    36,    37,    38,    22,    24,    25,    26,    27,
      28,    29,    30,    31,    80,    81,    32,    33,    34,    35,
      53,    54,    74,    74,    22,    74,     7,    62,    63,     5,
      74,     5,    74,    68,    55,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    19,    23,    19,    19,    22,    19,
      19,    19,    19,    19,    21,    54,    56,    56,    74,    22,
      22,    22,    22,    22,    13,    22,    56,    63,    64,    71,
      71,    22,     3,     4,     6,     7,    32,    33,    39,    40,
      41,    67,    68,    69,    70,    75,    76,    77,    78,    79,
       3,     4,     6,     7,    32,    33,    39,    40,    41,    67,
      68,    69,    70,    75,    76,    77,    78,    79,     3,     4,
       6,     7,    32,    33,    39,    40,    41,    67,    69,    70,
      75,    77,    78,     3,     4,     6,     7,    32,    33,    39,
      40,    41,    67,    69,    70,    75,    77,    78,     3,     4,
       6,     7,    32,    33,    39,    40,    41,    67,    69,    70,
      75,    77,    78,    80,    81,    80,    81,     8,    12,    14,
      15,    16,    17,    49,    50,    57,    58,    59,    60,    61,
      63,    65,    66,    74,     7,     7,     7,    18,    68,    68,
      68,    68,    68,    36,    37,    38,    32,    33,    34,    35,
      18,    68,    68,    68,    68,    68,    36,    37,    38,    32,
      33,    34,    35,    18,    68,    68,    68,    68,    68,    18,
      68,    68,    68,    68,    68,    18,    68,    68,    68,    68,
      68,     3,     4,     6,     7,    32,    33,    39,    40,    41,
      67,    68,    69,    70,    75,    77,    78,    68,     3,     4,
       6,     7,    32,    33,    39,    40,    41,    67,    68,    69,
      70,    75,    77,    78,    68,    74,    18,    18,    18,    18,
      18,    22,    20,    22,    22,    42,    53,    68,    68,    68,
       3,     4,     6,     7,    32,    33,    39,    40,    41,    67,
      68,    69,    70,    75,    77,    78,    68,    68,    68,    53,
      68,    68,    68,     3,     4,     6,     7,    32,    33,    39,
      40,    41,    67,    68,    69,    70,    75,    77,    78,    68,
      68,    68,    53,    53,    53,    18,    68,    68,    68,    68,
      68,    18,    68,    68,    68,    68,    68,    22,    74,    62,
       5,    74,     5,    74,    68,    55,    74,    19,    18,    68,
      68,    68,    68,    68,    19,    18,    68,    68,    68,    68,
      68,    19,    19,    19,    53,    53,    19,    19,    19,    19,
      19,    19,    19,    21,    53,    53,    19,    19,    56,    56,
      22,    22,    22,    22,    22,    19,    19,    13,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    45,    45,    46,    46,    46,    48,
      47,    49,    50,    51,    51,    52,    52,    53,    53,    54,
      54,    55,    55,    56,    56,    56,    56,    56,    56,    56,
      57,    56,    56,    58,    59,    59,    60,    61,    62,    63,
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
       8,     2,     2,     1,     0,     3,     1,     1,     0,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     2,     2,     5,     7,     3,     5,     5,     3,
       1,     0,     5,     5,     5,     5,     5,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     3,     3,     1,     1,     2,     3,     3,
       3,     3,     1,     2,     2,     2,     2,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1
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
#line 3005 "src/syn.tab.c"
    break;

  case 3: /* program: %empty  */
#line 152 "src/syn.y"
           {
      (yyval.node) = create_node(PROGRAM);
    }
#line 3013 "src/syn.tab.c"
    break;

  case 4: /* lst_declarations: declaration lst_declarations  */
#line 158 "src/syn.y"
                                {
      (yyval.node) = create_node(LIST_DECLARATIONS);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3023 "src/syn.tab.c"
    break;

  case 5: /* lst_declarations: declaration  */
#line 163 "src/syn.y"
                 {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(LIST_DECLARATIONS);
      // add_tree_node($$, $1);
    }
#line 3033 "src/syn.tab.c"
    break;

  case 6: /* declaration: func_declaration  */
#line 171 "src/syn.y"
                   {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(DECLARATION);
      // add_tree_node($$, $1);
    }
#line 3043 "src/syn.tab.c"
    break;

  case 7: /* declaration: var_declaration  */
#line 176 "src/syn.y"
                    {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(DECLARATION);
      // add_tree_node($$, $1);
    }
#line 3053 "src/syn.tab.c"
    break;

  case 8: /* declaration: error  */
#line 181 "src/syn.y"
          {
      yyerrok;
      (yyval.node) = create_node(DECLARATION); 
      syntax_errors++;
    }
#line 3063 "src/syn.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 189 "src/syn.y"
                  {increment_scope();}
#line 3069 "src/syn.tab.c"
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
    }
#line 3084 "src/syn.tab.c"
    break;

  case 11: /* var_declaration: unq_declaration ';'  */
#line 202 "src/syn.y"
                      {
      // $$ = create_node(VARIABLE_DECLARATION);
      (yyval.node) = (yyvsp[-1].node);
      // add_tree_node($$, $1);
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 3095 "src/syn.tab.c"
    break;

  case 12: /* unq_declaration: type ID  */
#line 211 "src/syn.y"
          {
      (yyval.node) = create_node(UNIQUE_DECLARATION);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_token_node((yyval.node), &(yyvsp[0].token), IDENTIFIER);
      add_table_node((yyvsp[0].token).lexeme, (yyvsp[-1].node), idx);
      idx++;
    }
#line 3107 "src/syn.tab.c"
    break;

  case 13: /* parameters: lst_parameters  */
#line 221 "src/syn.y"
                 {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(PARAMETERS);
      // add_tree_node($$, $1);
    }
#line 3117 "src/syn.tab.c"
    break;

  case 14: /* parameters: %empty  */
#line 226 "src/syn.y"
           {
      (yyval.node) = create_node(PARAMETERS);
    }
#line 3125 "src/syn.tab.c"
    break;

  case 15: /* lst_parameters: unq_declaration ',' lst_parameters  */
#line 232 "src/syn.y"
                                      {
      (yyval.node) = create_node(LIST_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$2, COMMA);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3136 "src/syn.tab.c"
    break;

  case 16: /* lst_parameters: unq_declaration  */
#line 238 "src/syn.y"
                    {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(LIST_PARAMETERS);
      // add_tree_node($$, $1);
    }
#line 3146 "src/syn.tab.c"
    break;

  case 17: /* calling_parameters: lst_calling_parameters  */
#line 246 "src/syn.y"
                         {
      (yyval.node) = create_node(CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3155 "src/syn.tab.c"
    break;

  case 18: /* calling_parameters: %empty  */
#line 250 "src/syn.y"
           {
      (yyval.node) = create_node(CALLING_PARAMETERS);
    }
#line 3163 "src/syn.tab.c"
    break;

  case 19: /* lst_calling_parameters: operation ',' lst_calling_parameters  */
#line 256 "src/syn.y"
                                       {
      (yyval.node) = create_node(LIST_CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$2, COMMA);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3174 "src/syn.tab.c"
    break;

  case 20: /* lst_calling_parameters: operation  */
#line 262 "src/syn.y"
              {
      (yyval.node) = create_node(LIST_CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3183 "src/syn.tab.c"
    break;

  case 21: /* block_commands: command block_commands  */
#line 269 "src/syn.y"
                          {
      // $$ = $1;
      (yyval.node) = create_node(BLOCK_COMMANDS);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3194 "src/syn.tab.c"
    break;

  case 22: /* block_commands: command  */
#line 275 "src/syn.y"
            {
    (yyval.node) = (yyvsp[0].node);
  }
#line 3202 "src/syn.tab.c"
    break;

  case 23: /* command: var_declaration  */
#line 281 "src/syn.y"
                  {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3212 "src/syn.tab.c"
    break;

  case 24: /* command: init_variable  */
#line 286 "src/syn.y"
                  {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3222 "src/syn.tab.c"
    break;

  case 25: /* command: conditional_stmt  */
#line 291 "src/syn.y"
                     {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3232 "src/syn.tab.c"
    break;

  case 26: /* command: return_stmt  */
#line 296 "src/syn.y"
                {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3242 "src/syn.tab.c"
    break;

  case 27: /* command: iteration  */
#line 301 "src/syn.y"
              {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3252 "src/syn.tab.c"
    break;

  case 28: /* command: input  */
#line 306 "src/syn.y"
          {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3262 "src/syn.tab.c"
    break;

  case 29: /* command: output  */
#line 311 "src/syn.y"
           {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3272 "src/syn.tab.c"
    break;

  case 30: /* $@2: %empty  */
#line 316 "src/syn.y"
    {increment_scope();}
#line 3278 "src/syn.tab.c"
    break;

  case 31: /* command: $@2 '{' block_commands '}'  */
#line 316 "src/syn.y"
                                                {
    // $$ = $2;
      (yyval.node) = create_node(COMMAND);
      // add_tree_token_node($$, &$2, OPEN_CURLY_BRACKET);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$4, CLOSE_CURLY_BRACKET);
    }
#line 3290 "src/syn.tab.c"
    break;

  case 32: /* command: operation ';'  */
#line 323 "src/syn.y"
                  { 
      (yyval.node) = create_node(COMMAND);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 3300 "src/syn.tab.c"
    break;

  case 33: /* init_variable: init_stmt ';'  */
#line 331 "src/syn.y"
                {
      (yyval.node) = create_node(INIT_VARIABLE);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 3310 "src/syn.tab.c"
    break;

  case 34: /* conditional_stmt: IF_STMT '(' operation ')' command  */
#line 339 "src/syn.y"
                                                  {
      (yyval.node) = create_node(CONDITIONAL_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), IF);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3323 "src/syn.tab.c"
    break;

  case 35: /* conditional_stmt: IF_STMT '(' operation ')' command ELSE_STMT command  */
#line 347 "src/syn.y"
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
#line 3338 "src/syn.tab.c"
    break;

  case 36: /* return_stmt: RETURN_STM operation ';'  */
#line 360 "src/syn.y"
                            {
      (yyval.node) = create_node(RETURN_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), RETURN);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$3, SEMICOLON);
    }
#line 3349 "src/syn.tab.c"
    break;

  case 37: /* iteration: FOR_STMT '(' loop_condition ')' command  */
#line 369 "src/syn.y"
                                          {
      (yyval.node) = create_node(ITERATION_PROCESS);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), FOR);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3362 "src/syn.tab.c"
    break;

  case 38: /* loop_condition: init_stmt ';' operation ';' update_stmt  */
#line 380 "src/syn.y"
                                          {
      (yyval.node) = create_node(LOOP_CONDITION);
      add_tree_node((yyval.node), (yyvsp[-4].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, SEMICOLON);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3375 "src/syn.tab.c"
    break;

  case 39: /* init_stmt: ID '=' operation  */
#line 391 "src/syn.y"
                    {
      (yyval.node) = create_node(INIT_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), IDENTIFIER);
      // add_tree_token_node($$, &$2, ASSIGN);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3386 "src/syn.tab.c"
    break;

  case 40: /* update_stmt: init_stmt  */
#line 400 "src/syn.y"
            {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(UPDATE_STMT);
      // add_tree_node($$, $1);
    }
#line 3396 "src/syn.tab.c"
    break;

  case 41: /* update_stmt: %empty  */
#line 405 "src/syn.y"
           {
      (yyval.node) = create_node(UPDATE_STMT);
    }
#line 3404 "src/syn.tab.c"
    break;

  case 42: /* output: OUTPUT_WRITE '(' operation ')' ';'  */
#line 411 "src/syn.y"
                                      {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITE);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3417 "src/syn.tab.c"
    break;

  case 43: /* output: OUTPUT_WRITELN '(' operation ')' ';'  */
#line 419 "src/syn.y"
                                         {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITELN);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3430 "src/syn.tab.c"
    break;

  case 44: /* output: OUTPUT_WRITE '(' STRING ')' ';'  */
#line 427 "src/syn.y"
                                    {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITELN);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), STRING);
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3443 "src/syn.tab.c"
    break;

  case 45: /* output: OUTPUT_WRITELN '(' STRING ')' ';'  */
#line 435 "src/syn.y"
                                      {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITELN);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), STRING);
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3456 "src/syn.tab.c"
    break;

  case 46: /* input: INPUT_READ '(' expression ')' ';'  */
#line 446 "src/syn.y"
                                    {
      (yyval.node) = create_node(INPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), READ);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3469 "src/syn.tab.c"
    break;

  case 47: /* func_calling: ID '(' calling_parameters ')'  */
#line 457 "src/syn.y"
                                {
      (yyval.node) = create_node(FUNCTION_CALLING);
      add_tree_token_node((yyval.node), &(yyvsp[-3].token), IDENTIFIER);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
    }
#line 3481 "src/syn.tab.c"
    break;

  case 48: /* expression: func_calling  */
#line 467 "src/syn.y"
               {
    (yyval.node) = (yyvsp[0].node);
    // $$ = create_node(EXPRESSION);
    // add_tree_node($$, $1);
    }
#line 3491 "src/syn.tab.c"
    break;

  case 49: /* expression: single_operation  */
#line 472 "src/syn.y"
                     {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(EXPRESSION);
      // add_tree_node($$, $1);
    }
#line 3501 "src/syn.tab.c"
    break;

  case 50: /* expression: const  */
#line 477 "src/syn.y"
          {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(EXPRESSION);
      // add_tree_node($$, $1);
    }
#line 3511 "src/syn.tab.c"
    break;

  case 51: /* expression: ID  */
#line 482 "src/syn.y"
       {
      (yyval.node) = create_node(EXPRESSION);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), IDENTIFIER);
    }
#line 3520 "src/syn.tab.c"
    break;

  case 52: /* const: number  */
#line 489 "src/syn.y"
         {
    (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(CONSTANT);
      // add_tree_node($$, $1);
    }
#line 3530 "src/syn.tab.c"
    break;

  case 53: /* const: NIL_CNST  */
#line 494 "src/syn.y"
             {
      (yyval.node) = create_node(CONSTANT);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NIL);
    }
#line 3539 "src/syn.tab.c"
    break;

  case 54: /* number: NUM_INT  */
#line 501 "src/syn.y"
          {
      (yyval.node) = create_node(NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NUMBER_INT);
    }
#line 3548 "src/syn.tab.c"
    break;

  case 55: /* number: NUM_FLOAT  */
#line 505 "src/syn.y"
              {
      (yyval.node) = create_node(NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NUMBER_FLOAT);
    }
#line 3557 "src/syn.tab.c"
    break;

  case 56: /* type: type_lst  */
#line 512 "src/syn.y"
            {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(TYPE);
      // add_tree_node($$, $1);
    }
#line 3567 "src/syn.tab.c"
    break;

  case 57: /* type: type_number  */
#line 517 "src/syn.y"
                 {
    (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(TYPE);
      // add_tree_node($$, $1);
    }
#line 3577 "src/syn.tab.c"
    break;

  case 58: /* type_lst: type_number T_LIST  */
#line 525 "src/syn.y"
                       {
      (yyval.node) = create_node(TYPE_LIST);
      // add_tree_node($$, $1);
      (yyval.node) = (yyvsp[-1].node);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), LIST);
    }
#line 3588 "src/syn.tab.c"
    break;

  case 59: /* type_number: T_INT  */
#line 534 "src/syn.y"
        {
      (yyval.node) = create_node(TYPE_NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), INT);
    }
#line 3597 "src/syn.tab.c"
    break;

  case 60: /* type_number: T_FLOAT  */
#line 538 "src/syn.y"
            {
      (yyval.node) = create_node(TYPE_NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), FLOAT);
    }
#line 3606 "src/syn.tab.c"
    break;

  case 61: /* operation: arith_binary  */
#line 545 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(OPERATION);
      // add_tree_node($$, $1);
    }
#line 3616 "src/syn.tab.c"
    break;

  case 62: /* operation: lst_binary  */
#line 550 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(OPERATION);
      // add_tree_node($$, $1);
    }
#line 3626 "src/syn.tab.c"
    break;

  case 63: /* operation: operation relational_op expression  */
#line 555 "src/syn.y"
                                        {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3637 "src/syn.tab.c"
    break;

  case 64: /* operation: operation logical_op expression  */
#line 561 "src/syn.y"
                                    {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3648 "src/syn.tab.c"
    break;

  case 65: /* single_operation: arith_single  */
#line 570 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(SINGLE_OPERATION);
      // add_tree_node($$, $1);
    }
#line 3658 "src/syn.tab.c"
    break;

  case 66: /* single_operation: lst_single  */
#line 575 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(SINGLE_OPERATION);
      // add_tree_node($$, $1);
    }
#line 3668 "src/syn.tab.c"
    break;

  case 67: /* single_operation: '!' expression  */
#line 580 "src/syn.y"
                   {
    (yyval.node) = create_node(SINGLE_OPERATION);
    add_tree_token_node((yyval.node), &(yyvsp[-1].token), NOT_OR_TAIL);
    add_tree_node((yyval.node), (yyvsp[0].node));
  }
#line 3678 "src/syn.tab.c"
    break;

  case 68: /* arith_binary: arith_binary '+' expression  */
#line 588 "src/syn.y"
                              {
      (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), ADD_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));

      // convert_numbers($1, $3, '+');

    }
#line 3692 "src/syn.tab.c"
    break;

  case 69: /* arith_binary: arith_binary '-' expression  */
#line 597 "src/syn.y"
                                {
      (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MINUS_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3703 "src/syn.tab.c"
    break;

  case 70: /* arith_binary: arith_binary '*' expression  */
#line 603 "src/syn.y"
                                {
      (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MULTIPLY_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3714 "src/syn.tab.c"
    break;

  case 71: /* arith_binary: arith_binary '/' expression  */
#line 609 "src/syn.y"
                                {
       (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), DIVISION_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3725 "src/syn.tab.c"
    break;

  case 72: /* arith_binary: expression  */
#line 615 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(ARITHMETIC_BINARY);
      // add_tree_node($$, $1);
    }
#line 3735 "src/syn.tab.c"
    break;

  case 73: /* arith_single: '+' expression  */
#line 623 "src/syn.y"
                 {
    (yyval.node) = create_node(ARITHMETIC_SINGLE);
    add_tree_token_node((yyval.node), &(yyvsp[-1].token), ADD_OP);
    add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3745 "src/syn.tab.c"
    break;

  case 74: /* arith_single: '-' expression  */
#line 628 "src/syn.y"
                   {
      (yyval.node) = create_node(ARITHMETIC_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MINUS_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3755 "src/syn.tab.c"
    break;

  case 75: /* lst_single: '%' expression  */
#line 636 "src/syn.y"
                 {
      (yyval.node) = create_node(LIST_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), POP_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3765 "src/syn.tab.c"
    break;

  case 76: /* lst_single: '?' expression  */
#line 641 "src/syn.y"
                   {
      (yyval.node) = create_node(LIST_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), HEAD_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3775 "src/syn.tab.c"
    break;

  case 77: /* lst_binary: expression FILTER expression  */
#line 649 "src/syn.y"
                               {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), FILTER_OP);
    }
#line 3785 "src/syn.tab.c"
    break;

  case 78: /* lst_binary: expression MAP expression  */
#line 654 "src/syn.y"
                              {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MAP_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3796 "src/syn.tab.c"
    break;

  case 79: /* lst_binary: expression ':' expression  */
#line 660 "src/syn.y"
                              {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), CONSTRUCTOR_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3807 "src/syn.tab.c"
    break;

  case 80: /* logical_op: AND  */
#line 669 "src/syn.y"
      {
      (yyval.node) = create_node(LOGIC_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), AND_OP);
    }
#line 3816 "src/syn.tab.c"
    break;

  case 81: /* logical_op: OR  */
#line 673 "src/syn.y"
       {
      (yyval.node) = create_node(LOGIC_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), OR_OP);
    }
#line 3825 "src/syn.tab.c"
    break;

  case 82: /* relational_op: GREATER  */
#line 680 "src/syn.y"
          {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), GT_OP);
    }
#line 3834 "src/syn.tab.c"
    break;

  case 83: /* relational_op: GREATER_EQ  */
#line 684 "src/syn.y"
               {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), GE_OP);
    }
#line 3843 "src/syn.tab.c"
    break;

  case 84: /* relational_op: LESS  */
#line 688 "src/syn.y"
         {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), LT_OP);
    }
#line 3852 "src/syn.tab.c"
    break;

  case 85: /* relational_op: LESS_EQ  */
#line 692 "src/syn.y"
            {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), LE_OP);
    }
#line 3861 "src/syn.tab.c"
    break;

  case 86: /* relational_op: EQUAL  */
#line 696 "src/syn.y"
          {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), EQ_OP);
    }
#line 3870 "src/syn.tab.c"
    break;

  case 87: /* relational_op: NOT_EQ  */
#line 700 "src/syn.y"
           {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NE_OP);
    }
#line 3879 "src/syn.tab.c"
    break;


#line 3883 "src/syn.tab.c"

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

#line 706 "src/syn.y"

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
