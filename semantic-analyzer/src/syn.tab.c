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
  YYSYMBOL_const = 71,                     /* const  */
  YYSYMBOL_number = 72,                    /* number  */
  YYSYMBOL_type = 73,                      /* type  */
  YYSYMBOL_type_lst = 74,                  /* type_lst  */
  YYSYMBOL_type_number = 75,               /* type_number  */
  YYSYMBOL_operation = 76,                 /* operation  */
  YYSYMBOL_single_operation = 77,          /* single_operation  */
  YYSYMBOL_arith_binary = 78,              /* arith_binary  */
  YYSYMBOL_arith_single = 79,              /* arith_single  */
  YYSYMBOL_lst_single = 80,                /* lst_single  */
  YYSYMBOL_lst_binary = 81,                /* lst_binary  */
  YYSYMBOL_logical_op = 82,                /* logical_op  */
  YYSYMBOL_relational_op = 83              /* relational_op  */
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
#define YYLAST   6011

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  481

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
     189,   204,   213,   223,   229,   235,   244,   255,   259,   265,
     272,   280,   286,   292,   297,   302,   307,   312,   317,   322,
     327,   327,   334,   340,   348,   356,   364,   377,   386,   397,
     408,   417,   422,   428,   436,   444,   452,   463,   474,   474,
     474,   484,   489,   494,   499,   506,   511,   518,   522,   529,
     534,   542,   551,   555,   562,   567,   572,   578,   587,   592,
     597,   605,   614,   620,   626,   632,   640,   645,   653,   658,
     666,   671,   677,   686,   690,   697,   701,   705,   709,   713,
     717
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
  "func_calling", "$@3", "$@4", "expression", "const", "number", "type",
  "type_lst", "type_number", "operation", "single_operation",
  "arith_binary", "arith_single", "lst_single", "lst_binary", "logical_op",
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

#define YYPACT_NINF (-350)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-91)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      53,   195,     7,    24,     4,    11,   201,   244,   384,    46,
      23,    25,    59,  -350,    40,   399,    30,    66,    36,     3,
      67,    31,    50,    48,    39,    55,  3563,   167,  4376,  4393,
    4410,   811,   106,    82,    86,    87,    96,    97,   106,   106,
     106,   106,   106,  2743,    63,    98,  2784,   100,  2825,  2866,
    2907,  2948,    95,  2989,  3030,  4427,  4444,  4461,  4478,  1172,
    4495,  5311,  4512,  4529,  1454,    92,   106,  3644,  1736,   858,
     111,   224,   234,   998,  4546,  4563,  4580,  4597,  4614,   425,
     102,  3563,  3071,  1046,  1046,  1046,  3112,  1177,  1280,  1328,
    1459,  1562,  1610,  1741,  1844,  1046,  1046,  1892,  1892,  1892,
    1892,   398,  2018,  3153,  1403,    85,   110,   108,   115,  1685,
     116,  1967,   117,   121,  5760,  5770,  5780,  5790,  5800,  5325,
    5339,  5353,  5367,   118,   124,  2260,  3604,  3563,   106,   122,
     126,   127,   128,   132,  3194,   136,  2023,   675,  3235,  5810,
    3276,  3317,  3358,  3399,  3440,  4631,   147,  3563,     8,  3481,
     148,   150,   165,   171,  3522,  4005,  4025,  4045,  3665,   858,
     858,   858,   858,   858,  4065,  4085,  4105,  4125,  4145,  4974,
    4165,  4185,  3152,   166,   175,   178,    73,   998,   998,   998,
     998,   998,   179,   190,   193,   198,   199,   202,  5820,  5830,
    5840,   264,  1046,  1046,  1046,  1046,  1046,  5850,  5860,  5870,
    5880,  5890,  5900,  5381,  5395,  5409,  4344,  1892,  1892,  1892,
    1892,  1892,  5423,  5437,  5451,  5465,  5479,  5493,  3685,  3705,
    3725,  3623,  2023,  2023,  2023,  2023,  2023,  3745,  3765,  3785,
    3805,  3825,   533,  3845,  3865,  2291,  2125,  2125,  2156,  2156,
     957,   106,   196,   207,   214,   215,   225,  1103,   197,   222,
    1239,  1385,  1521,  1667,   233,  1803,  1949,  5910,   216,    70,
     237,    92,  4205,  4225,  4245,  4265,  4285,  2125,  2125,  2125,
    2174,  2174,  2174,  2174,    92,   241,   242,   243,   249,   251,
      92,  5920,  5930,  5940,  5950,  5960,    92,  5507,  5521,  5535,
    5549,  5563,    92,  3885,  3905,  3925,  3945,  3965,  2156,  2156,
    2156,  2217,  2217,  2217,  2217,  3193,  3234,  3275,  1121,  2125,
    2125,  2125,  2125,  2125,  3316,  3357,  3398,  3439,  3480,  3521,
    3562,  3603,  2332,  2373,  2414,   134,  2156,  2156,  2156,  2156,
    2156,  2455,  2496,  2537,  2578,  2619,  2660,  2701,  2742,  5970,
     858,   111,   716,   764,   998,  2085,  3563,  2231,  2292,   858,
     398,  5594,  5607,  5620,  4991,  5008,  5025,  4362,  2174,  2174,
    2174,  2174,  2174,  5042,  5059,  5076,  5093,  5110,  5127,  5144,
    5161,  5178,  5195,   398,   398,   398,   398,  2783,  2824,  2865,
    4651,  4668,  4685,  4326,  2217,  2217,  2217,  2217,  2217,  4702,
    4719,  4736,  4753,  4770,  4787,  4804,  4821,  4838,  4855,    92,
    5633,  5646,  5659,  5672,  5685,    92,  2906,  2947,  2988,  3029,
    3070,  2333,  5698,   257,   258,  5711,   259,  5724,   260,   262,
    5737,   118,    92,  5212,  5229,  5246,  5263,  5280,   118,   118,
     118,   118,    92,  4872,  4889,  4906,  4923,  4940,   398,   398,
    3604,  3604,   263,   274,   276,   277,   278,  2374,   265,   398,
     283,   285,   286,   287,   398,   118,   118,  2415,  2456,  2497,
    2538,  2579,  2620,  2661,  4305,   118,   288,  5980,  5577,  3985,
     118,   290,   297,  3604,   303,   304,  5750,  3111,  2702,  5297,
    4957
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -350,  -350,   275,  -350,  -350,  -350,     2,     0,  -350,   302,
    -298,   191,   -43,  -102,  -121,  -106,   -92,   -90,   -87,   -15,
     -61,  -350,   -77,   -75,   433,  -219,  -349,   151,   715,   997,
      10,  -350,  -350,   -25,  1279,   200,  1561,  1843,   482,   -42,
     -31
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,     7,    16,    43,    44,    21,    22,
     123,   124,    45,    46,    47,    48,    49,    50,    51,   106,
      52,   151,    53,    54,    55,   101,   135,    56,    57,    58,
     153,    11,    12,   125,    60,    61,    62,    63,    64,   236,
     237
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    59,     8,    80,    13,   249,     9,    68,     8,   107,
      10,    -2,     2,     3,   -62,   258,    10,    95,   -62,    20,
     250,    59,   -14,    20,   137,   138,    95,   -42,    96,   152,
      17,   -63,   -59,   152,   251,   -63,   252,    96,   113,   253,
      -4,   102,   350,   -61,   104,   149,   109,   111,    19,   255,
      24,   256,   421,    -3,     1,   373,    59,     2,     3,    26,
      95,   374,     2,     3,    -9,   254,   -60,   375,    15,   -13,
      18,    96,   448,   376,   -15,   428,   429,   430,   431,   450,
     451,   452,   453,   238,   -12,   154,   -16,   150,   -12,   -12,
      23,   274,   -54,   -12,   239,   -48,   -48,    95,   -48,   -48,
      69,   257,    59,   139,    70,    71,   471,   472,    96,    28,
      29,   -48,    30,    67,    72,    73,   474,    82,   105,    79,
      81,   475,    59,   -21,   -48,   -48,   248,    66,   247,   127,
     128,   -48,   -48,   -48,   129,   131,   133,   -49,    38,    39,
     455,   456,   134,   -17,   140,    40,    41,    42,   141,   142,
     143,   465,   405,   -54,   144,   145,   470,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -19,   -41,   -33,   -39,
     -33,   -33,   259,   -33,   -33,   -33,   -33,   -33,   260,   -33,
     438,   -33,   -33,   -33,   -33,   -57,   439,   -33,   -33,    74,
      75,    76,    77,    78,   -58,    -8,    -8,   -56,   -51,   -33,
     -33,    -5,     1,   449,    -8,    -8,   -33,   -33,   -33,   -53,
       2,     3,   -55,   454,   340,    95,   339,   -52,   -68,   345,
     165,   -69,   165,   165,   112,   341,    96,   155,   156,   108,
     157,   158,   342,   343,   114,   115,   116,   155,   156,   110,
     157,   158,   346,   344,    -6,    -6,   117,   118,   119,   120,
     121,   122,   228,    -6,    -6,   347,   159,   160,   349,   -12,
     -76,   -77,   -78,   161,   162,   163,   159,   160,   -79,   169,
     -70,   169,   169,   161,   162,   163,   441,   442,   444,   446,
     107,    14,   280,   447,   464,   459,   -54,   228,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   460,    95,   461,   462,
     463,   232,   466,   419,   467,   468,   469,   -50,    96,   476,
     262,   263,   264,   265,   266,   412,   477,   415,   417,   249,
     249,    59,   479,   480,   420,    25,   413,   146,   275,   276,
     277,   278,   279,     0,   250,   250,   232,     0,   457,   458,
       0,     0,     0,   281,   282,   283,   284,   285,   251,   251,
     252,   252,   249,   253,   253,     0,     0,     0,   287,   288,
     289,   290,   291,   255,   255,   256,   256,   250,     0,     0,
       0,   478,     0,   293,   294,   295,   296,   297,     0,   254,
     254,   251,     0,   252,    -7,    -7,   253,   315,   321,   332,
     338,     0,     0,    -7,    -7,     0,   255,     0,   256,   -11,
     -11,   218,   219,     0,   220,   221,     0,     0,   -11,   -11,
       0,     0,   254,     0,     0,   257,   257,   -18,   351,   352,
     353,   364,   370,   371,   372,   -10,   -10,     0,     0,     0,
     222,   223,     0,     0,   -10,   -10,     0,   224,   225,   226,
     248,   248,   247,   247,     0,     0,     0,     0,   257,   377,
     378,   379,   390,   396,   397,   398,     0,     0,     0,     0,
     400,   401,   402,   403,   404,     0,     0,     0,     0,     0,
       0,     0,     0,   248,     0,   247,     0,   406,   407,   408,
     409,   410,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   165,     0,   165,   165,   418,     0,     0,     0,     0,
     165,   228,   164,     0,   164,   164,   182,     0,     0,   423,
     424,   425,   426,   427,     0,     0,   197,   197,   197,     0,
       0,     0,     0,     0,   228,   228,   228,   228,   197,   197,
     212,   212,   212,   212,   227,   433,   434,   435,   436,   437,
     169,     0,   169,   169,     0,     0,     0,     0,     0,   169,
     232,   172,   -64,   172,   172,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   301,   302,   303,   304,   227,
       0,     0,     0,   232,   232,   232,   232,     0,     0,     0,
       0,     0,     0,   235,     0,     0,     0,     0,     0,   228,
     228,     0,   164,   164,   164,   164,   164,     0,     0,     0,
     228,     0,     0,     0,     0,   228,     0,     0,     0,     0,
     182,   182,   182,   182,   182,     0,     0,     0,   235,     0,
       0,     0,     0,     0,     0,   197,   197,   197,   197,   197,
       0,     0,     0,     0,     0,     0,     0,     0,   232,   232,
     212,   212,   212,   212,   212,     0,     0,     0,     0,   232,
       0,     0,     0,     0,   232,   227,   227,   227,   227,   227,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   314,
     314,   331,   331,     0,     0,     0,   -35,     0,   -35,   -35,
       0,   -35,   -35,   -35,   -35,   -35,     0,   -35,   147,   -35,
     -35,   -35,   -35,     0,     0,   -35,   -35,     0,     0,     0,
     314,   314,   314,   363,   363,   363,   363,   -35,   -35,     0,
       0,     0,     0,     0,   -35,   -35,   -35,     0,     0,   155,
     156,   414,   157,   158,     0,     0,     0,     0,     0,     0,
       0,   331,   331,   331,   389,   389,   389,   389,     0,     0,
       0,     0,   314,   314,   314,   314,   314,     0,   159,   160,
       0,     0,     0,     0,     0,   161,   162,   163,     0,   331,
     331,   331,   331,   331,     0,     0,     0,   155,   156,   416,
     157,   158,     0,   164,     0,   164,   164,   182,     0,     0,
       0,     0,   164,   227,   166,     0,   166,   166,   183,     0,
       0,   363,   363,   363,   363,   363,   159,   160,   198,   198,
     198,     0,     0,   161,   162,   163,   227,   227,   227,   227,
     198,   198,   213,   213,   213,   213,   229,   389,   389,   389,
     389,   389,   172,     0,   172,   172,     0,     0,     0,    65,
       0,   172,   235,   -54,     0,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
       0,   229,     0,    66,     0,   235,   235,   235,   235,     0,
       0,   155,   156,     0,   157,   158,     0,     0,     0,     0,
       0,   227,   227,     0,   166,   166,   166,   166,   166,     0,
       0,     0,   227,     0,     0,     0,     0,   227,     0,     0,
     159,   160,   183,   183,   183,   183,   183,   161,   162,   163,
       0,     0,     0,     0,     0,     0,     0,   198,   198,   198,
     198,   198,     0,     0,     0,     0,     0,     0,     0,     0,
     235,   235,   213,   213,   213,   213,   213,     0,     0,     0,
       0,   235,     0,     0,     0,     0,   235,   229,   229,   229,
     229,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   316,   316,   333,   333,     0,     0,     0,   -33,     0,
     -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,   -33,     0,     0,   -33,   -33,     0,
       0,     0,   316,   316,   316,   365,   365,   365,   365,   -33,
     -33,     0,     0,     0,     0,     0,   -33,   -33,   -33,     0,
       0,   173,   174,     0,   175,   176,     0,     0,     0,     0,
       0,     0,     0,   333,   333,   333,   391,   391,   391,   391,
       0,     0,     0,     0,   316,   316,   316,   316,   316,     0,
     177,   178,     0,     0,     0,     0,     0,   179,   180,   181,
       0,   333,   333,   333,   333,   333,     0,     0,     0,   188,
     189,     0,   190,   191,     0,   166,     0,   166,   166,   183,
       0,     0,     0,     0,   166,   229,   167,     0,   167,   167,
     184,     0,     0,   365,   365,   365,   365,   365,   192,   193,
     199,   199,   199,     0,     0,   194,   195,   196,   229,   229,
     229,   229,   199,   199,   214,   214,   214,   214,   230,   391,
     391,   391,   391,   391,   -23,     0,   -23,   -23,     0,   -23,
     -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,
     -23,     0,     0,   -23,   -23,     0,     0,     0,     0,     0,
       0,     0,     0,   230,     0,   -23,   -23,     0,     0,   399,
     -54,     0,   -23,   -23,   -23,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   229,   229,     0,   167,   167,   167,   167,
     167,     0,     0,     0,   229,     0,     0,     0,     0,   229,
       0,     0,     0,     0,   184,   184,   184,   184,   184,     0,
     -83,   -83,     0,   -83,   -83,     0,     0,     0,     0,   199,
     199,   199,   199,   199,    86,     0,    87,    88,    89,    90,
      91,    92,    93,    94,   214,   214,   214,   214,   214,   -83,
     -83,     0,     0,     0,     0,     0,   -83,   -83,   -83,   230,
     230,   230,   230,   230,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   317,   317,   334,   334,     0,     0,     0,
     -24,     0,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,
       0,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,   -24,
     -24,     0,     0,     0,   317,   317,   317,   366,   366,   366,
     366,   -24,   -24,     0,     0,     0,     0,     0,   -24,   -24,
     -24,     0,     0,   -84,   -84,     0,   -84,   -84,     0,     0,
       0,     0,     0,     0,     0,   334,   334,   334,   392,   392,
     392,   392,     0,     0,     0,     0,   317,   317,   317,   317,
     317,     0,   -84,   -84,     0,     0,     0,     0,     0,   -84,
     -84,   -84,     0,   334,   334,   334,   334,   334,     0,     0,
       0,   -85,   -85,     0,   -85,   -85,     0,   167,     0,   167,
     167,   184,     0,     0,     0,     0,   167,   230,   168,     0,
     168,   168,   185,     0,     0,   366,   366,   366,   366,   366,
     -85,   -85,   200,   200,   200,     0,     0,   -85,   -85,   -85,
     230,   230,   230,   230,   200,   200,   215,   215,   215,   215,
     231,   392,   392,   392,   392,   392,   -25,     0,   -25,   -25,
       0,   -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,
     -25,   -25,   -25,     0,     0,   -25,   -25,     0,     0,     0,
       0,     0,     0,     0,     0,   231,     0,   -25,   -25,     0,
       0,     0,   126,     0,   -25,   -25,   -25,    87,    88,    89,
      90,    91,    92,    93,    94,   230,   230,     0,   168,   168,
     168,   168,   168,     0,     0,     0,   230,     0,     0,     0,
       0,   230,     0,     0,     0,     0,   185,   185,   185,   185,
     185,     0,   -86,   -86,     0,   -86,   -86,     0,     0,     0,
       0,   200,   200,   200,   200,   200,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   215,   215,   215,   215,
     215,   -86,   -86,     0,     0,     0,     0,     0,   -86,   -86,
     -86,   231,   231,   231,   231,   231,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   318,   318,   335,   335,     0,
       0,     0,   -26,     0,   -26,   -26,     0,   -26,   -26,   -26,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,     0,
       0,   -26,   -26,     0,     0,     0,   318,   318,   318,   367,
     367,   367,   367,   -26,   -26,     0,     0,     0,     0,     0,
     -26,   -26,   -26,     0,     0,   -87,   -87,     0,   -87,   -87,
       0,     0,     0,     0,     0,     0,     0,   335,   335,   335,
     393,   393,   393,   393,     0,     0,     0,     0,   318,   318,
     318,   318,   318,     0,   -87,   -87,     0,     0,     0,     0,
       0,   -87,   -87,   -87,     0,   335,   335,   335,   335,   335,
       0,     0,     0,   -88,   -88,     0,   -88,   -88,     0,   168,
       0,   168,   168,   185,     0,     0,     0,     0,   168,   231,
     170,     0,   170,   170,   186,     0,     0,   367,   367,   367,
     367,   367,   -88,   -88,   201,   201,   201,     0,     0,   -88,
     -88,   -88,   231,   231,   231,   231,   201,   201,   216,   216,
     216,   216,   233,   393,   393,   393,   393,   393,   -27,     0,
     -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   -27,     0,     0,   -27,   -27,     0,
       0,     0,     0,     0,     0,     0,     0,   233,     0,   -27,
     -27,     0,     0,     0,   130,     0,   -27,   -27,   -27,    87,
      88,    89,    90,    91,    92,    93,    94,   231,   231,     0,
     170,   170,   170,   170,   170,     0,     0,     0,   231,     0,
       0,     0,     0,   231,     0,     0,     0,     0,   186,   186,
     186,   186,   186,     0,   -89,   -89,     0,   -89,   -89,     0,
       0,     0,     0,   201,   201,   201,   201,   201,   103,     0,
      87,    88,    89,    90,    91,    92,    93,    94,   216,   216,
     216,   216,   216,   -89,   -89,     0,     0,     0,     0,     0,
     -89,   -89,   -89,   233,   233,   233,   233,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   319,   319,   336,
     336,     0,     0,     0,   -29,     0,   -29,   -29,     0,   -29,
     -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,
     -29,     0,     0,   -29,   -29,     0,     0,     0,   319,   319,
     319,   368,   368,   368,   368,   -29,   -29,     0,     0,     0,
       0,     0,   -29,   -29,   -29,     0,     0,   -90,   -90,     0,
     -90,   -90,     0,     0,     0,     0,     0,     0,     0,   336,
     336,   336,   394,   394,   394,   394,     0,     0,     0,     0,
     319,   319,   319,   319,   319,     0,   -90,   -90,     0,     0,
       0,     0,     0,   -90,   -90,   -90,     0,   336,   336,   336,
     336,   336,     0,     0,     0,   203,   204,     0,   205,   206,
       0,   170,     0,   170,   170,   186,     0,     0,     0,     0,
     170,   233,   171,     0,   171,   171,   187,     0,     0,   368,
     368,   368,   368,   368,   207,   208,   202,   202,   202,     0,
       0,   209,   210,   211,   233,   233,   233,   233,   202,   202,
     217,   217,   217,   217,   234,   394,   394,   394,   394,   394,
     -28,     0,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,
       0,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,   -28,
     -28,     0,     0,     0,     0,     0,     0,     0,     0,   234,
       0,   -28,   -28,     0,     0,     0,   132,     0,   -28,   -28,
     -28,    87,    88,    89,    90,    91,    92,    93,    94,   233,
     233,     0,   171,   171,   171,   171,   171,     0,     0,     0,
     233,     0,     0,     0,     0,   233,     0,     0,     0,     0,
     187,   187,   187,   187,   187,     0,   218,   219,     0,   220,
     221,     0,     0,     0,     0,   202,   202,   202,   202,   202,
     -40,     0,    87,    88,    89,    90,    91,    92,    93,    94,
     217,   217,   217,   217,   217,   222,   223,     0,     0,     0,
       0,     0,   224,   225,   226,   234,   234,   234,   234,   234,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   320,
     320,   337,   337,     0,     0,     0,   -11,     0,   -11,   -11,
       0,   -11,   -11,   -11,   -11,   -11,     0,   -11,   -11,   -11,
     -11,   -11,   -11,     0,     0,   -11,   -11,     0,     0,     0,
     320,   320,   320,   369,   369,   369,   369,   -11,   -11,     0,
       0,     0,     0,     0,   -11,   -11,   -11,     0,   305,   306,
       0,   307,   308,     0,     0,     0,     0,     0,     0,     0,
       0,   337,   337,   337,   395,   395,   395,   395,     0,     0,
       0,     0,   320,   320,   320,   320,   320,   309,   310,   322,
     323,     0,   324,   325,   311,   312,   313,     0,     0,   337,
     337,   337,   337,   337,     0,     0,     0,   354,   355,     0,
     356,   357,     0,   171,     0,   171,   171,   187,   326,   327,
       0,     0,   171,   234,     0,   328,   329,   330,     0,     0,
       0,   369,   369,   369,   369,   369,   358,   359,     0,     0,
       0,     0,     0,   360,   361,   362,   234,   234,   234,   234,
     380,   381,     0,   382,   383,     0,     0,   395,   395,   395,
     395,   395,   -34,     0,   -34,   -34,     0,   -34,   -34,   -34,
     -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,   384,
     385,   -34,   -34,     0,     0,     0,   386,   387,   388,     0,
       0,     0,     0,   -34,   -34,     0,     0,     0,     0,     0,
     -34,   -34,   -34,     0,     0,     0,     0,     0,     0,   -20,
       0,   234,   234,   136,    87,    88,    89,    90,    91,    92,
      93,    94,   234,   -32,     0,   -32,   -32,   234,   -32,   -32,
     -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
     -65,     0,   -32,   -32,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,   -32,   -32,     0,     0,     0,     0,
       0,   -32,   -32,   -32,   -37,     0,   -37,   -37,     0,   -37,
     -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,
     -37,   -57,     0,   -37,   -37,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,     0,   -37,   -37,     0,     0,     0,
       0,     0,   -37,   -37,   -37,   -31,     0,   -31,   -31,     0,
     -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,
     -31,   -31,   -58,     0,   -31,   -31,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,     0,   -31,   -31,     0,     0,
       0,     0,     0,   -31,   -31,   -31,   -35,     0,   -35,   -35,
       0,   -35,   -35,   -35,   -35,   -35,     0,   -35,   473,   -35,
     -35,   -35,   -35,   -56,     0,   -35,   -35,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,     0,   -35,   -35,     0,
       0,     0,     0,     0,   -35,   -35,   -35,   -38,     0,   -38,
     -38,     0,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -38,   -51,     0,   -38,   -38,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,   -38,   -38,
       0,     0,     0,     0,     0,   -38,   -38,   -38,   -45,     0,
     -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,     0,   -45,
     -45,   -45,   -45,   -45,   -45,   -67,     0,   -45,   -45,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,   -45,
     -45,     0,     0,     0,     0,     0,   -45,   -45,   -45,   -43,
       0,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,     0,
     -43,   -43,   -43,   -43,   -43,   -43,   -53,     0,   -43,   -43,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,     0,
     -43,   -43,     0,     0,     0,     0,     0,   -43,   -43,   -43,
     -46,     0,   -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,
       0,   -46,   -46,   -46,   -46,   -46,   -46,   -55,     0,   -46,
     -46,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
       0,   -46,   -46,     0,     0,     0,     0,     0,   -46,   -46,
     -46,   -44,     0,   -44,   -44,     0,   -44,   -44,   -44,   -44,
     -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,   -52,     0,
     -44,   -44,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,     0,   -44,   -44,     0,     0,     0,     0,     0,   -44,
     -44,   -44,   -47,     0,   -47,   -47,     0,   -47,   -47,   -47,
     -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -68,
       0,   -47,   -47,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,   -47,   -47,     0,     0,     0,     0,     0,
     -47,   -47,   -47,   -36,     0,   -36,   -36,     0,   -36,   -36,
     -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,
     -69,     0,   -36,   -36,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,   -36,   -36,     0,     0,     0,     0,
       0,   -36,   -36,   -36,   -23,     0,   -23,   -23,     0,   -23,
     -23,   -23,   -23,   -23,     0,   -23,     0,   -23,   -23,   -23,
     -23,   -66,     0,   -23,   -23,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,   -23,   -23,     0,     0,     0,
       0,     0,   -23,   -23,   -23,    27,     0,    28,    29,     0,
      30,    31,    32,     2,     3,     0,    33,     0,    34,    35,
      36,    37,   -80,     0,   -30,   -22,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,    38,    39,     0,     0,
       0,     0,     0,    40,    41,    42,   -24,     0,   -24,   -24,
       0,   -24,   -24,   -24,   -24,   -24,     0,   -24,     0,   -24,
     -24,   -24,   -24,   -81,     0,   -24,   -24,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,   -24,   -24,     0,
       0,     0,     0,     0,   -24,   -24,   -24,   -25,     0,   -25,
     -25,     0,   -25,   -25,   -25,   -25,   -25,     0,   -25,     0,
     -25,   -25,   -25,   -25,   -82,     0,   -25,   -25,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -25,   -25,
       0,     0,     0,     0,     0,   -25,   -25,   -25,   -26,     0,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,     0,   -26,
       0,   -26,   -26,   -26,   -26,   -76,     0,   -26,   -26,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,   -26,
     -26,     0,     0,     0,     0,     0,   -26,   -26,   -26,   -27,
       0,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,     0,
     -27,     0,   -27,   -27,   -27,   -27,   -77,     0,   -27,   -27,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
     -27,   -27,     0,     0,     0,     0,     0,   -27,   -27,   -27,
     -29,     0,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,
       0,   -29,     0,   -29,   -29,   -29,   -29,   -78,     0,   -29,
     -29,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,   -29,   -29,     0,     0,     0,     0,     0,   -29,   -29,
     -29,   -28,     0,   -28,   -28,     0,   -28,   -28,   -28,   -28,
     -28,     0,   -28,     0,   -28,   -28,   -28,   -28,   -79,     0,
     -28,   -28,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,     0,   -28,   -28,     0,     0,     0,     0,     0,   -28,
     -28,   -28,   -34,     0,   -34,   -34,     0,   -34,   -34,   -34,
     -34,   -34,     0,   -34,     0,   -34,   -34,   -34,   -34,   -70,
       0,   -34,   -34,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,   -34,   -34,     0,     0,     0,     0,     0,
     -34,   -34,   -34,   -32,     0,   -32,   -32,     0,   -32,   -32,
     -32,   -32,   -32,     0,   -32,     0,   -32,   -32,   -32,   -32,
     -50,     0,   -32,   -32,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,     0,   -32,   -32,     0,     0,     0,     0,
       0,   -32,   -32,   -32,   -37,     0,   -37,   -37,     0,   -37,
     -37,   -37,   -37,   -37,     0,   -37,     0,   -37,   -37,   -37,
     -37,   -65,     0,   -37,   -37,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,     0,   -37,   -37,     0,     0,     0,
       0,     0,   -37,   -37,   -37,   -31,     0,   -31,   -31,     0,
     -31,   -31,   -31,   -31,   -31,     0,   -31,     0,   -31,   -31,
     -31,   -31,   -57,     0,   -31,   -31,     0,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,     0,   -31,   -31,     0,     0,
       0,     0,     0,   -31,   -31,   -31,   -38,     0,   -38,   -38,
       0,   -38,   -38,   -38,   -38,   -38,     0,   -38,     0,   -38,
     -38,   -38,   -38,   -58,     0,   -38,   -38,     0,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,     0,   -38,   -38,     0,
       0,     0,     0,     0,   -38,   -38,   -38,   -45,     0,   -45,
     -45,     0,   -45,   -45,   -45,   -45,   -45,     0,   -45,     0,
     -45,   -45,   -45,   -45,   -56,     0,   -45,   -45,     0,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,   -45,   -45,
       0,     0,     0,     0,     0,   -45,   -45,   -45,   -43,     0,
     -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,     0,   -43,
       0,   -43,   -43,   -43,   -43,   -51,     0,   -43,   -43,     0,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,   -43,
     -43,     0,     0,     0,     0,     0,   -43,   -43,   -43,   -46,
       0,   -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,     0,
     -46,     0,   -46,   -46,   -46,   -46,   -67,     0,   -46,   -46,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
     -46,   -46,     0,     0,     0,     0,     0,   -46,   -46,   -46,
     -44,     0,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,
       0,   -44,     0,   -44,   -44,   -44,   -44,   -53,     0,   -44,
     -44,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
       0,   -44,   -44,     0,     0,     0,     0,     0,   -44,   -44,
     -44,   -47,     0,   -47,   -47,     0,   -47,   -47,   -47,   -47,
     -47,     0,   -47,     0,   -47,   -47,   -47,   -47,   -55,     0,
     -47,   -47,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,     0,   -47,   -47,     0,     0,     0,     0,     0,   -47,
     -47,   -47,   -36,     0,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   -36,     0,   -36,     0,   -36,   -36,   -36,   -36,   -52,
       0,   -36,   -36,     0,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,     0,   -36,   -36,     0,     0,     0,     0,     0,
     -36,   -36,   -36,   -11,     0,   -11,   -11,     0,   -11,   -11,
     -11,   -11,   -11,     0,   -11,     0,   -11,   -11,   -11,   -11,
     -68,     0,   -11,   -11,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,   -11,   -11,     0,     0,     0,     0,
       0,   -11,   -11,   -11,    27,     0,    28,    29,     0,    30,
      31,    32,     2,     3,     0,    33,     0,    34,    35,    36,
      37,   -69,     0,   -30,     0,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,     0,    38,    39,     0,     0,     0,
       0,     0,    40,    41,    42,   240,     0,    28,    29,     0,
      30,    31,   241,     2,     3,     0,   242,     0,   243,   244,
     245,   246,   -66,     0,   -30,     0,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,     0,    38,    39,     0,     0,
       0,   292,   -54,    40,    41,    42,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,    65,     0,     0,     0,   -54,     0,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   261,   -54,     0,     0,     0,     0,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -57,     0,     0,     0,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -58,     0,     0,     0,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -56,     0,     0,     0,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -51,     0,     0,     0,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -75,     0,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   298,   299,   300,   -53,     0,     0,     0,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -55,     0,     0,     0,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -52,     0,     0,     0,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -68,     0,     0,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -69,     0,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -76,     0,     0,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -77,     0,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -78,     0,     0,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -79,     0,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -70,     0,     0,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -50,     0,     0,     0,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -57,     0,     0,     0,     0,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -58,     0,     0,     0,     0,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -56,     0,     0,     0,     0,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -51,     0,     0,     0,     0,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -75,     0,     0,     0,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   267,   268,   269,   -53,     0,     0,     0,     0,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -55,     0,     0,     0,     0,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -52,     0,     0,     0,     0,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -68,     0,     0,     0,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -69,     0,     0,     0,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -76,     0,     0,     0,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -77,     0,     0,     0,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -78,     0,     0,     0,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -79,     0,     0,     0,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -70,     0,     0,     0,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -50,     0,     0,     0,     0,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   432,   -54,     0,     0,     0,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   286,     0,     0,     0,   -54,     0,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     422,   -54,     0,     0,     0,     0,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -57,     0,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -58,     0,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -56,     0,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -51,
       0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -75,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
      83,    84,    85,   -53,     0,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -55,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -52,     0,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -68,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -77,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -79,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -50,     0,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -57,     0,     0,     0,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -58,     0,     0,
       0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -56,     0,     0,     0,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -51,     0,     0,     0,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -71,     0,
       0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -53,     0,     0,     0,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -55,     0,     0,     0,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -52,
       0,     0,     0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -68,     0,     0,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -69,     0,     0,     0,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -72,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -73,     0,     0,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -74,     0,     0,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -76,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -77,     0,
       0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -78,     0,     0,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -79,     0,     0,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -70,
       0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -50,     0,     0,     0,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -64,     0,     0,     0,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   270,   271,   272,   273,
     -57,     0,     0,     0,     0,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -58,     0,     0,
       0,     0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -56,     0,     0,     0,     0,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -51,     0,     0,     0,     0,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -71,     0,
       0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -53,     0,     0,     0,     0,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -55,     0,     0,     0,     0,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -52,
       0,     0,     0,     0,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -68,     0,     0,     0,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -69,     0,     0,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -72,     0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -73,     0,     0,
       0,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -74,     0,     0,     0,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -76,     0,     0,     0,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -77,     0,
       0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -78,     0,     0,     0,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -79,     0,     0,     0,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -70,
       0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -50,     0,     0,     0,
       0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -64,     0,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,    97,    98,    99,   100,   -71,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -74,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -57,     0,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -58,     0,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -56,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -51,     0,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -53,
       0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -55,     0,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -52,     0,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -69,     0,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -76,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -78,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -50,
       0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -80,     0,     0,     0,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -81,     0,     0,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -82,
       0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -76,     0,     0,     0,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -77,     0,     0,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -78,     0,
       0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -79,     0,     0,     0,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -70,     0,     0,     0,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   440,     0,     0,
       0,     0,    87,    88,    89,    90,    91,    92,    93,    94,
     443,     0,     0,     0,     0,    87,    88,    89,    90,    91,
      92,    93,    94,   445,     0,     0,     0,     0,    87,    88,
      89,    90,    91,    92,    93,    94,   -40,     0,     0,     0,
       0,    87,    88,    89,    90,    91,    92,    93,    94,   -50,
       0,     0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   148,     0,    87,    88,    89,    90,    91,    92,
      93,    94,   -57,     0,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -58,     0,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -56,     0,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -51,     0,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -53,     0,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -55,     0,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -52,     0,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   348,     0,    87,    88,    89,    90,    91,    92,
      93,    94,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   411,     0,    87,    88,    89,    90,    91,    92,
      93,    94,   -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50
};

static const yytype_int16 yycheck[] =
{
       0,    26,     0,    46,     0,   126,     6,    32,     6,    70,
       0,     0,     9,    10,     7,     7,     6,    59,    11,    19,
     126,    46,    19,    23,   126,   127,    68,    19,    59,    19,
       7,     7,     7,    23,   126,    11,   126,    68,    81,   126,
       0,    66,   261,     7,    69,   147,    71,    72,    18,   126,
      19,   126,   350,     0,     1,   274,    81,     9,    10,    20,
     102,   280,     9,    10,    18,   126,     7,   286,    22,    19,
      11,   102,   421,   292,    19,   373,   374,   375,   376,   428,
     429,   430,   431,   125,    18,    22,    19,   148,    22,    19,
      23,    18,    19,    23,   125,     3,     4,   139,     6,     7,
      18,   126,   127,   128,    18,    18,   455,   456,   139,     3,
       4,    19,     6,     7,    18,    18,   465,    22,     7,    21,
      20,   470,   147,    21,    32,    33,   126,    42,   126,    19,
      22,    39,    40,    41,    19,    19,    19,    19,    32,    33,
     438,   439,    21,    19,    22,    39,    40,    41,    22,    22,
      22,   449,    18,    19,    22,    19,   454,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    19,    19,     1,    19,
       3,     4,     7,     6,     7,     8,     9,    10,     7,    12,
     399,    14,    15,    16,    17,    19,   405,    20,    21,    38,
      39,    40,    41,    42,    19,     0,     1,    19,    19,    32,
      33,     0,     1,   422,     9,    10,    39,    40,    41,    19,
       9,    10,    19,   432,    18,   257,   241,    19,    19,    22,
      69,    19,    71,    72,    73,    18,   257,     3,     4,     5,
       6,     7,    18,    18,    83,    84,    85,     3,     4,     5,
       6,     7,    20,    18,     0,     1,    95,    96,    97,    98,
      99,   100,   101,     9,    10,    22,    32,    33,    42,    22,
      19,    19,    19,    39,    40,    41,    32,    33,    19,    69,
      19,    71,    72,    39,    40,    41,    19,    19,    19,    19,
     341,     6,    18,    21,    19,    22,    22,   136,    24,    25,
      26,    27,    28,    29,    30,    31,    22,   339,    22,    22,
      22,   101,    19,   346,    19,    19,    19,    19,   339,    19,
     159,   160,   161,   162,   163,   340,    19,   342,   343,   440,
     441,   346,    19,    19,   349,    23,   341,   136,   177,   178,
     179,   180,   181,    -1,   440,   441,   136,    -1,   440,   441,
      -1,    -1,    -1,   192,   193,   194,   195,   196,   440,   441,
     440,   441,   473,   440,   441,    -1,    -1,    -1,   207,   208,
     209,   210,   211,   440,   441,   440,   441,   473,    -1,    -1,
      -1,   473,    -1,   222,   223,   224,   225,   226,    -1,   440,
     441,   473,    -1,   473,     0,     1,   473,   236,   237,   238,
     239,    -1,    -1,     9,    10,    -1,   473,    -1,   473,     0,
       1,     3,     4,    -1,     6,     7,    -1,    -1,     9,    10,
      -1,    -1,   473,    -1,    -1,   440,   441,    19,   267,   268,
     269,   270,   271,   272,   273,     0,     1,    -1,    -1,    -1,
      32,    33,    -1,    -1,     9,    10,    -1,    39,    40,    41,
     440,   441,   440,   441,    -1,    -1,    -1,    -1,   473,   298,
     299,   300,   301,   302,   303,   304,    -1,    -1,    -1,    -1,
     309,   310,   311,   312,   313,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   473,    -1,   473,    -1,   326,   327,   328,
     329,   330,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   340,    -1,   342,   343,   344,    -1,    -1,    -1,    -1,
     349,   350,    69,    -1,    71,    72,    73,    -1,    -1,   358,
     359,   360,   361,   362,    -1,    -1,    83,    84,    85,    -1,
      -1,    -1,    -1,    -1,   373,   374,   375,   376,    95,    96,
      97,    98,    99,   100,   101,   384,   385,   386,   387,   388,
     340,    -1,   342,   343,    -1,    -1,    -1,    -1,    -1,   349,
     350,    69,    19,    71,    72,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,   136,
      -1,    -1,    -1,   373,   374,   375,   376,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,   438,
     439,    -1,   159,   160,   161,   162,   163,    -1,    -1,    -1,
     449,    -1,    -1,    -1,    -1,   454,    -1,    -1,    -1,    -1,
     177,   178,   179,   180,   181,    -1,    -1,    -1,   136,    -1,
      -1,    -1,    -1,    -1,    -1,   192,   193,   194,   195,   196,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   438,   439,
     207,   208,   209,   210,   211,    -1,    -1,    -1,    -1,   449,
      -1,    -1,    -1,    -1,   454,   222,   223,   224,   225,   226,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,
     237,   238,   239,    -1,    -1,    -1,     1,    -1,     3,     4,
      -1,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    -1,    -1,    20,    21,    -1,    -1,    -1,
     267,   268,   269,   270,   271,   272,   273,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   298,   299,   300,   301,   302,   303,   304,    -1,    -1,
      -1,    -1,   309,   310,   311,   312,   313,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,   326,
     327,   328,   329,   330,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,   340,    -1,   342,   343,   344,    -1,    -1,
      -1,    -1,   349,   350,    69,    -1,    71,    72,    73,    -1,
      -1,   358,   359,   360,   361,   362,    32,    33,    83,    84,
      85,    -1,    -1,    39,    40,    41,   373,   374,   375,   376,
      95,    96,    97,    98,    99,   100,   101,   384,   385,   386,
     387,   388,   340,    -1,   342,   343,    -1,    -1,    -1,    18,
      -1,   349,   350,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,   136,    -1,    42,    -1,   373,   374,   375,   376,    -1,
      -1,     3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,
      -1,   438,   439,    -1,   159,   160,   161,   162,   163,    -1,
      -1,    -1,   449,    -1,    -1,    -1,    -1,   454,    -1,    -1,
      32,    33,   177,   178,   179,   180,   181,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,
     195,   196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     438,   439,   207,   208,   209,   210,   211,    -1,    -1,    -1,
      -1,   449,    -1,    -1,    -1,    -1,   454,   222,   223,   224,
     225,   226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   236,   237,   238,   239,    -1,    -1,    -1,     1,    -1,
       3,     4,    -1,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    -1,    -1,    20,    21,    -1,
      -1,    -1,   267,   268,   269,   270,   271,   272,   273,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,     3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   298,   299,   300,   301,   302,   303,   304,
      -1,    -1,    -1,    -1,   309,   310,   311,   312,   313,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,   326,   327,   328,   329,   330,    -1,    -1,    -1,     3,
       4,    -1,     6,     7,    -1,   340,    -1,   342,   343,   344,
      -1,    -1,    -1,    -1,   349,   350,    69,    -1,    71,    72,
      73,    -1,    -1,   358,   359,   360,   361,   362,    32,    33,
      83,    84,    85,    -1,    -1,    39,    40,    41,   373,   374,
     375,   376,    95,    96,    97,    98,    99,   100,   101,   384,
     385,   386,   387,   388,     1,    -1,     3,     4,    -1,     6,
       7,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    -1,    32,    33,    -1,    -1,    18,
      19,    -1,    39,    40,    41,    24,    25,    26,    27,    28,
      29,    30,    31,   438,   439,    -1,   159,   160,   161,   162,
     163,    -1,    -1,    -1,   449,    -1,    -1,    -1,    -1,   454,
      -1,    -1,    -1,    -1,   177,   178,   179,   180,   181,    -1,
       3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,   192,
     193,   194,   195,   196,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,   207,   208,   209,   210,   211,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,   222,
     223,   224,   225,   226,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   236,   237,   238,   239,    -1,    -1,    -1,
       1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    -1,    -1,    20,
      21,    -1,    -1,    -1,   267,   268,   269,   270,   271,   272,
     273,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,     3,     4,    -1,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   298,   299,   300,   301,   302,
     303,   304,    -1,    -1,    -1,    -1,   309,   310,   311,   312,
     313,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,   326,   327,   328,   329,   330,    -1,    -1,
      -1,     3,     4,    -1,     6,     7,    -1,   340,    -1,   342,
     343,   344,    -1,    -1,    -1,    -1,   349,   350,    69,    -1,
      71,    72,    73,    -1,    -1,   358,   359,   360,   361,   362,
      32,    33,    83,    84,    85,    -1,    -1,    39,    40,    41,
     373,   374,   375,   376,    95,    96,    97,    98,    99,   100,
     101,   384,   385,   386,   387,   388,     1,    -1,     3,     4,
      -1,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    -1,    -1,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    32,    33,    -1,
      -1,    -1,    19,    -1,    39,    40,    41,    24,    25,    26,
      27,    28,    29,    30,    31,   438,   439,    -1,   159,   160,
     161,   162,   163,    -1,    -1,    -1,   449,    -1,    -1,    -1,
      -1,   454,    -1,    -1,    -1,    -1,   177,   178,   179,   180,
     181,    -1,     3,     4,    -1,     6,     7,    -1,    -1,    -1,
      -1,   192,   193,   194,   195,   196,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,   207,   208,   209,   210,
     211,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,   222,   223,   224,   225,   226,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   236,   237,   238,   239,    -1,
      -1,    -1,     1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      -1,    20,    21,    -1,    -1,    -1,   267,   268,   269,   270,
     271,   272,   273,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,     3,     4,    -1,     6,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   298,   299,   300,
     301,   302,   303,   304,    -1,    -1,    -1,    -1,   309,   310,
     311,   312,   313,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,   326,   327,   328,   329,   330,
      -1,    -1,    -1,     3,     4,    -1,     6,     7,    -1,   340,
      -1,   342,   343,   344,    -1,    -1,    -1,    -1,   349,   350,
      69,    -1,    71,    72,    73,    -1,    -1,   358,   359,   360,
     361,   362,    32,    33,    83,    84,    85,    -1,    -1,    39,
      40,    41,   373,   374,   375,   376,    95,    96,    97,    98,
      99,   100,   101,   384,   385,   386,   387,   388,     1,    -1,
       3,     4,    -1,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    -1,    -1,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    32,
      33,    -1,    -1,    -1,    19,    -1,    39,    40,    41,    24,
      25,    26,    27,    28,    29,    30,    31,   438,   439,    -1,
     159,   160,   161,   162,   163,    -1,    -1,    -1,   449,    -1,
      -1,    -1,    -1,   454,    -1,    -1,    -1,    -1,   177,   178,
     179,   180,   181,    -1,     3,     4,    -1,     6,     7,    -1,
      -1,    -1,    -1,   192,   193,   194,   195,   196,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,   207,   208,
     209,   210,   211,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,   222,   223,   224,   225,   226,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,   237,   238,
     239,    -1,    -1,    -1,     1,    -1,     3,     4,    -1,     6,
       7,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    -1,    -1,    20,    21,    -1,    -1,    -1,   267,   268,
     269,   270,   271,   272,   273,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,     3,     4,    -1,
       6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   298,
     299,   300,   301,   302,   303,   304,    -1,    -1,    -1,    -1,
     309,   310,   311,   312,   313,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,   326,   327,   328,
     329,   330,    -1,    -1,    -1,     3,     4,    -1,     6,     7,
      -1,   340,    -1,   342,   343,   344,    -1,    -1,    -1,    -1,
     349,   350,    69,    -1,    71,    72,    73,    -1,    -1,   358,
     359,   360,   361,   362,    32,    33,    83,    84,    85,    -1,
      -1,    39,    40,    41,   373,   374,   375,   376,    95,    96,
      97,    98,    99,   100,   101,   384,   385,   386,   387,   388,
       1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    -1,    -1,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,
      -1,    32,    33,    -1,    -1,    -1,    19,    -1,    39,    40,
      41,    24,    25,    26,    27,    28,    29,    30,    31,   438,
     439,    -1,   159,   160,   161,   162,   163,    -1,    -1,    -1,
     449,    -1,    -1,    -1,    -1,   454,    -1,    -1,    -1,    -1,
     177,   178,   179,   180,   181,    -1,     3,     4,    -1,     6,
       7,    -1,    -1,    -1,    -1,   192,   193,   194,   195,   196,
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
     207,   208,   209,   210,   211,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,   222,   223,   224,   225,   226,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,
     237,   238,   239,    -1,    -1,    -1,     1,    -1,     3,     4,
      -1,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    -1,    -1,    20,    21,    -1,    -1,    -1,
     267,   268,   269,   270,   271,   272,   273,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    -1,     3,     4,
      -1,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   298,   299,   300,   301,   302,   303,   304,    -1,    -1,
      -1,    -1,   309,   310,   311,   312,   313,    32,    33,     3,
       4,    -1,     6,     7,    39,    40,    41,    -1,    -1,   326,
     327,   328,   329,   330,    -1,    -1,    -1,     3,     4,    -1,
       6,     7,    -1,   340,    -1,   342,   343,   344,    32,    33,
      -1,    -1,   349,   350,    -1,    39,    40,    41,    -1,    -1,
      -1,   358,   359,   360,   361,   362,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,   373,   374,   375,   376,
       3,     4,    -1,     6,     7,    -1,    -1,   384,   385,   386,
     387,   388,     1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    32,
      33,    20,    21,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,   438,   439,    23,    24,    25,    26,    27,    28,    29,
      30,    31,   449,     1,    -1,     3,     4,   454,     6,     7,
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
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    19,    -1,    20,    21,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    19,    -1,    20,    21,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    19,    -1,    20,    21,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    19,    -1,    20,    21,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    19,    -1,    20,    21,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    19,    -1,    20,    21,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    19,    -1,    20,
      21,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    19,    -1,
      20,    21,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    19,
      -1,    20,    21,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      19,    -1,    20,    21,    23,    24,    25,    26,    27,    28,
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
      17,    19,    -1,    20,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    19,    -1,    20,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    32,    33,    -1,    -1,
      -1,    18,    19,    39,    40,    41,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    18,    -1,    -1,    -1,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    18,    19,    -1,    -1,    -1,    -1,    24,
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
      35,    36,    37,    38,    18,    19,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    18,    -1,    -1,    -1,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      18,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    22,    -1,
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
      33,    34,    35,    19,    -1,    -1,    -1,    -1,    24,    25,
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
      30,    31,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     9,    10,    44,    45,    46,    47,    49,    50,
      73,    74,    75,     0,    45,    22,    48,     7,    11,    18,
      50,    51,    52,    23,    19,    52,    20,     1,     3,     4,
       6,     7,     8,    12,    14,    15,    16,    17,    32,    33,
      39,    40,    41,    49,    50,    55,    56,    57,    58,    59,
      60,    61,    63,    65,    66,    67,    70,    71,    72,    76,
      77,    78,    79,    80,    81,    18,    42,     7,    76,    18,
      18,    18,    18,    18,    70,    70,    70,    70,    70,    21,
      55,    20,    22,    36,    37,    38,    22,    24,    25,    26,
      27,    28,    29,    30,    31,    82,    83,    32,    33,    34,
      35,    68,    76,    22,    76,     7,    62,    63,     5,    76,
       5,    76,    70,    55,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    53,    54,    76,    19,    19,    22,    19,
      19,    19,    19,    19,    21,    69,    23,    56,    56,    76,
      22,    22,    22,    22,    22,    19,    54,    13,    22,    56,
      63,    64,    73,    73,    22,     3,     4,     6,     7,    32,
      33,    39,    40,    41,    67,    70,    71,    72,    77,    78,
      79,    80,    81,     3,     4,     6,     7,    32,    33,    39,
      40,    41,    67,    71,    72,    77,    79,    80,     3,     4,
       6,     7,    32,    33,    39,    40,    41,    67,    71,    72,
      77,    79,    80,     3,     4,     6,     7,    32,    33,    39,
      40,    41,    67,    71,    72,    77,    79,    80,     3,     4,
       6,     7,    32,    33,    39,    40,    41,    67,    70,    71,
      72,    77,    78,    79,    80,    81,    82,    83,    82,    83,
       1,     8,    12,    14,    15,    16,    17,    49,    50,    57,
      58,    59,    60,    61,    63,    65,    66,    76,     7,     7,
       7,    18,    70,    70,    70,    70,    70,    36,    37,    38,
      32,    33,    34,    35,    18,    70,    70,    70,    70,    70,
      18,    70,    70,    70,    70,    70,    18,    70,    70,    70,
      70,    70,    18,    70,    70,    70,    70,    70,    36,    37,
      38,    32,    33,    34,    35,     3,     4,     6,     7,    32,
      33,    39,    40,    41,    67,    70,    71,    72,    77,    79,
      80,    70,     3,     4,     6,     7,    32,    33,    39,    40,
      41,    67,    70,    71,    72,    77,    79,    80,    70,    76,
      18,    18,    18,    18,    18,    22,    20,    22,    22,    42,
      68,    70,    70,    70,     3,     4,     6,     7,    32,    33,
      39,    40,    41,    67,    70,    71,    72,    77,    79,    80,
      70,    70,    70,    68,    68,    68,    68,    70,    70,    70,
       3,     4,     6,     7,    32,    33,    39,    40,    41,    67,
      70,    71,    72,    77,    79,    80,    70,    70,    70,    18,
      70,    70,    70,    70,    70,    18,    70,    70,    70,    70,
      70,    22,    76,    62,     5,    76,     5,    76,    70,    55,
      76,    53,    18,    70,    70,    70,    70,    70,    53,    53,
      53,    53,    18,    70,    70,    70,    70,    70,    68,    68,
      19,    19,    19,    19,    19,    19,    19,    21,    69,    68,
      69,    69,    69,    69,    68,    53,    53,    56,    56,    22,
      22,    22,    22,    22,    19,    53,    19,    19,    19,    19,
      53,    69,    69,    13,    69,    69,    19,    19,    56,    19,
      19
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    45,    45,    46,    46,    46,    48,
      47,    49,    50,    51,    51,    52,    52,    53,    53,    54,
      54,    55,    55,    56,    56,    56,    56,    56,    56,    56,
      57,    56,    56,    56,    58,    59,    59,    60,    61,    62,
      63,    64,    64,    65,    65,    65,    65,    66,    68,    69,
      67,    70,    70,    70,    70,    71,    71,    72,    72,    73,
      73,    74,    75,    75,    76,    76,    76,    76,    77,    77,
      77,    78,    78,    78,    78,    78,    79,    79,    80,    80,
      81,    81,    81,    82,    82,    83,    83,    83,    83,    83,
      83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     0,
       8,     2,     2,     1,     0,     3,     1,     1,     0,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     2,     1,     2,     5,     7,     3,     5,     5,
       3,     1,     0,     5,     5,     5,     5,     5,     0,     0,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     3,     3,     1,     1,
       2,     3,     3,     3,     3,     1,     2,     2,     2,     2,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1
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
#line 3067 "src/syn.tab.c"
    break;

  case 3: /* program: %empty  */
#line 152 "src/syn.y"
           {
      (yyval.node) = create_node(PROGRAM);
    }
#line 3075 "src/syn.tab.c"
    break;

  case 4: /* lst_declarations: declaration lst_declarations  */
#line 158 "src/syn.y"
                                {
      (yyval.node) = create_node(LIST_DECLARATIONS);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3085 "src/syn.tab.c"
    break;

  case 5: /* lst_declarations: declaration  */
#line 163 "src/syn.y"
                 {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(LIST_DECLARATIONS);
      // add_tree_node($$, $1);
    }
#line 3095 "src/syn.tab.c"
    break;

  case 6: /* declaration: func_declaration  */
#line 171 "src/syn.y"
                   {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(DECLARATION);
      // add_tree_node($$, $1);
    }
#line 3105 "src/syn.tab.c"
    break;

  case 7: /* declaration: var_declaration  */
#line 176 "src/syn.y"
                    {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(DECLARATION);
      // add_tree_node($$, $1);
    }
#line 3115 "src/syn.tab.c"
    break;

  case 8: /* declaration: error  */
#line 181 "src/syn.y"
          {
      yyerrok;
      (yyval.node) = create_node(DECLARATION); 
      syntax_errors++;
    }
#line 3125 "src/syn.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 189 "src/syn.y"
                  {increment_scope(); strcpy(func_name, (yyvsp[0].node)->children->sibilings->child->token.lexeme);}
#line 3131 "src/syn.tab.c"
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
#line 3148 "src/syn.tab.c"
    break;

  case 11: /* var_declaration: unq_declaration ';'  */
#line 204 "src/syn.y"
                      {
      // $$ = create_node(VARIABLE_DECLARATION);
      (yyval.node) = (yyvsp[-1].node);
      // add_tree_node($$, $1);
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 3159 "src/syn.tab.c"
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
#line 3171 "src/syn.tab.c"
    break;

  case 13: /* parameters: lst_parameters  */
#line 223 "src/syn.y"
                 {
      (yyval.node) = (yyvsp[0].node);
      
      // $$ = create_node(PARAMETERS);
      // add_tree_node($$, $1);
    }
#line 3182 "src/syn.tab.c"
    break;

  case 14: /* parameters: %empty  */
#line 229 "src/syn.y"
           {
      (yyval.node) = create_node(PARAMETERS);
    }
#line 3190 "src/syn.tab.c"
    break;

  case 15: /* lst_parameters: unq_declaration ',' lst_parameters  */
#line 235 "src/syn.y"
                                      {
      (yyval.node) = create_node(LIST_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$2, COMMA);
      add_tree_node((yyval.node), (yyvsp[0].node));

      set_P_table((yyvsp[-2].node));
      set_amount_params(func_name, get_amount_params((yyvsp[-2].node)));
    }
#line 3204 "src/syn.tab.c"
    break;

  case 16: /* lst_parameters: unq_declaration  */
#line 244 "src/syn.y"
                    {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(LIST_PARAMETERS);
      // add_tree_node($$, $1);

      set_P_table((yyvsp[0].node));
      set_amount_params(func_name, get_amount_params((yyvsp[0].node)));
    }
#line 3217 "src/syn.tab.c"
    break;

  case 17: /* calling_parameters: lst_calling_parameters  */
#line 255 "src/syn.y"
                         {
      (yyval.node) = create_node(CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3226 "src/syn.tab.c"
    break;

  case 18: /* calling_parameters: %empty  */
#line 259 "src/syn.y"
           {
      (yyval.node) = create_node(CALLING_PARAMETERS);
    }
#line 3234 "src/syn.tab.c"
    break;

  case 19: /* lst_calling_parameters: operation ',' lst_calling_parameters  */
#line 265 "src/syn.y"
                                       {
      (yyval.node) = create_node(LIST_CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$2, COMMA);
      add_tree_node((yyval.node), (yyvsp[0].node));
      calling_params_counter += 1;
    }
#line 3246 "src/syn.tab.c"
    break;

  case 20: /* lst_calling_parameters: operation  */
#line 272 "src/syn.y"
              {
      (yyval.node) = create_node(LIST_CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[0].node));
      calling_params_counter += 1;
    }
#line 3256 "src/syn.tab.c"
    break;

  case 21: /* block_commands: command block_commands  */
#line 280 "src/syn.y"
                          {
      // $$ = $1;
      (yyval.node) = create_node(BLOCK_COMMANDS);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3267 "src/syn.tab.c"
    break;

  case 22: /* block_commands: command  */
#line 286 "src/syn.y"
            {
    (yyval.node) = (yyvsp[0].node);
  }
#line 3275 "src/syn.tab.c"
    break;

  case 23: /* command: var_declaration  */
#line 292 "src/syn.y"
                  {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3285 "src/syn.tab.c"
    break;

  case 24: /* command: init_variable  */
#line 297 "src/syn.y"
                  {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3295 "src/syn.tab.c"
    break;

  case 25: /* command: conditional_stmt  */
#line 302 "src/syn.y"
                     {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3305 "src/syn.tab.c"
    break;

  case 26: /* command: return_stmt  */
#line 307 "src/syn.y"
                {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3315 "src/syn.tab.c"
    break;

  case 27: /* command: iteration  */
#line 312 "src/syn.y"
              {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3325 "src/syn.tab.c"
    break;

  case 28: /* command: input  */
#line 317 "src/syn.y"
          {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3335 "src/syn.tab.c"
    break;

  case 29: /* command: output  */
#line 322 "src/syn.y"
           {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3345 "src/syn.tab.c"
    break;

  case 30: /* $@2: %empty  */
#line 327 "src/syn.y"
    {increment_scope();}
#line 3351 "src/syn.tab.c"
    break;

  case 31: /* command: $@2 '{' block_commands '}'  */
#line 327 "src/syn.y"
                                                {
    // $$ = $2;
      (yyval.node) = create_node(COMMAND);
      // add_tree_token_node($$, &$2, OPEN_CURLY_BRACKET);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$4, CLOSE_CURLY_BRACKET);
    }
#line 3363 "src/syn.tab.c"
    break;

  case 32: /* command: operation ';'  */
#line 334 "src/syn.y"
                  { 
      (yyval.node) = create_node(COMMAND);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 3373 "src/syn.tab.c"
    break;

  case 33: /* command: error  */
#line 340 "src/syn.y"
          {
      yyerrok;
      (yyval.node) = create_node(COMMAND); 
      syntax_errors++;
    }
#line 3383 "src/syn.tab.c"
    break;

  case 34: /* init_variable: init_stmt ';'  */
#line 348 "src/syn.y"
                {
      (yyval.node) = create_node(INIT_VARIABLE);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 3393 "src/syn.tab.c"
    break;

  case 35: /* conditional_stmt: IF_STMT '(' operation ')' command  */
#line 356 "src/syn.y"
                                                  {
      (yyval.node) = create_node(CONDITIONAL_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), IF);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3406 "src/syn.tab.c"
    break;

  case 36: /* conditional_stmt: IF_STMT '(' operation ')' command ELSE_STMT command  */
#line 364 "src/syn.y"
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
#line 3421 "src/syn.tab.c"
    break;

  case 37: /* return_stmt: RETURN_STM operation ';'  */
#line 377 "src/syn.y"
                            {
      (yyval.node) = create_node(RETURN_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), RETURN);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$3, SEMICOLON);
    }
#line 3432 "src/syn.tab.c"
    break;

  case 38: /* iteration: FOR_STMT '(' loop_condition ')' command  */
#line 386 "src/syn.y"
                                          {
      (yyval.node) = create_node(ITERATION_PROCESS);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), FOR);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3445 "src/syn.tab.c"
    break;

  case 39: /* loop_condition: init_stmt ';' operation ';' update_stmt  */
#line 397 "src/syn.y"
                                          {
      (yyval.node) = create_node(LOOP_CONDITION);
      add_tree_node((yyval.node), (yyvsp[-4].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, SEMICOLON);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3458 "src/syn.tab.c"
    break;

  case 40: /* init_stmt: ID '=' operation  */
#line 408 "src/syn.y"
                    {
      (yyval.node) = create_node(INIT_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), IDENTIFIER);
      // add_tree_token_node($$, &$2, ASSIGN);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3469 "src/syn.tab.c"
    break;

  case 41: /* update_stmt: init_stmt  */
#line 417 "src/syn.y"
            {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(UPDATE_STMT);
      // add_tree_node($$, $1);
    }
#line 3479 "src/syn.tab.c"
    break;

  case 42: /* update_stmt: %empty  */
#line 422 "src/syn.y"
           {
      (yyval.node) = create_node(UPDATE_STMT);
    }
#line 3487 "src/syn.tab.c"
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
#line 3500 "src/syn.tab.c"
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
#line 3513 "src/syn.tab.c"
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
#line 3526 "src/syn.tab.c"
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
#line 3539 "src/syn.tab.c"
    break;

  case 47: /* input: INPUT_READ '(' expression ')' ';'  */
#line 463 "src/syn.y"
                                    {
      (yyval.node) = create_node(INPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), READ);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3552 "src/syn.tab.c"
    break;

  case 48: /* $@3: %empty  */
#line 474 "src/syn.y"
          {calling_params_counter = 0;}
#line 3558 "src/syn.tab.c"
    break;

  case 49: /* $@4: %empty  */
#line 474 "src/syn.y"
                                                           {verify_amount_params((yyvsp[0].node), &(yyvsp[-3].token));}
#line 3564 "src/syn.tab.c"
    break;

  case 50: /* func_calling: ID '(' $@3 calling_parameters $@4 ')'  */
#line 474 "src/syn.y"
                                                                                                 {
      (yyval.node) = create_node(FUNCTION_CALLING);
      add_tree_token_node((yyval.node), &(yyvsp[-5].token), IDENTIFIER);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);      
    }
#line 3576 "src/syn.tab.c"
    break;

  case 51: /* expression: func_calling  */
#line 484 "src/syn.y"
               {
    (yyval.node) = (yyvsp[0].node);
    // $$ = create_node(EXPRESSION);
    // add_tree_node($$, $1);
    }
#line 3586 "src/syn.tab.c"
    break;

  case 52: /* expression: single_operation  */
#line 489 "src/syn.y"
                     {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(EXPRESSION);
      // add_tree_node($$, $1);
    }
#line 3596 "src/syn.tab.c"
    break;

  case 53: /* expression: const  */
#line 494 "src/syn.y"
          {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(EXPRESSION);
      // add_tree_node($$, $1);
    }
#line 3606 "src/syn.tab.c"
    break;

  case 54: /* expression: ID  */
#line 499 "src/syn.y"
       {
      (yyval.node) = create_node(EXPRESSION);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), IDENTIFIER);
    }
#line 3615 "src/syn.tab.c"
    break;

  case 55: /* const: number  */
#line 506 "src/syn.y"
         {
    (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(CONSTANT);
      // add_tree_node($$, $1);
    }
#line 3625 "src/syn.tab.c"
    break;

  case 56: /* const: NIL_CNST  */
#line 511 "src/syn.y"
             {
      (yyval.node) = create_node(CONSTANT);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NIL);
    }
#line 3634 "src/syn.tab.c"
    break;

  case 57: /* number: NUM_INT  */
#line 518 "src/syn.y"
          {
      (yyval.node) = create_node(NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NUMBER_INT);
    }
#line 3643 "src/syn.tab.c"
    break;

  case 58: /* number: NUM_FLOAT  */
#line 522 "src/syn.y"
              {
      (yyval.node) = create_node(NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NUMBER_FLOAT);
    }
#line 3652 "src/syn.tab.c"
    break;

  case 59: /* type: type_lst  */
#line 529 "src/syn.y"
            {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(TYPE);
      // add_tree_node($$, $1);
    }
#line 3662 "src/syn.tab.c"
    break;

  case 60: /* type: type_number  */
#line 534 "src/syn.y"
                 {
    (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(TYPE);
      // add_tree_node($$, $1);
    }
#line 3672 "src/syn.tab.c"
    break;

  case 61: /* type_lst: type_number T_LIST  */
#line 542 "src/syn.y"
                       {
      (yyval.node) = create_node(TYPE_LIST);
      // add_tree_node($$, $1);
      (yyval.node) = (yyvsp[-1].node);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), LIST);
    }
#line 3683 "src/syn.tab.c"
    break;

  case 62: /* type_number: T_INT  */
#line 551 "src/syn.y"
        {
      (yyval.node) = create_node(TYPE_NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), INT);
    }
#line 3692 "src/syn.tab.c"
    break;

  case 63: /* type_number: T_FLOAT  */
#line 555 "src/syn.y"
            {
      (yyval.node) = create_node(TYPE_NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), FLOAT);
    }
#line 3701 "src/syn.tab.c"
    break;

  case 64: /* operation: arith_binary  */
#line 562 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(OPERATION);
      // add_tree_node($$, $1);
    }
#line 3711 "src/syn.tab.c"
    break;

  case 65: /* operation: lst_binary  */
#line 567 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(OPERATION);
      // add_tree_node($$, $1);
    }
#line 3721 "src/syn.tab.c"
    break;

  case 66: /* operation: operation relational_op expression  */
#line 572 "src/syn.y"
                                        {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3732 "src/syn.tab.c"
    break;

  case 67: /* operation: operation logical_op expression  */
#line 578 "src/syn.y"
                                    {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3743 "src/syn.tab.c"
    break;

  case 68: /* single_operation: arith_single  */
#line 587 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(SINGLE_OPERATION);
      // add_tree_node($$, $1);
    }
#line 3753 "src/syn.tab.c"
    break;

  case 69: /* single_operation: lst_single  */
#line 592 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(SINGLE_OPERATION);
      // add_tree_node($$, $1);
    }
#line 3763 "src/syn.tab.c"
    break;

  case 70: /* single_operation: '!' expression  */
#line 597 "src/syn.y"
                   {
    (yyval.node) = create_node(SINGLE_OPERATION);
    add_tree_token_node((yyval.node), &(yyvsp[-1].token), NOT_OR_TAIL);
    add_tree_node((yyval.node), (yyvsp[0].node));
  }
#line 3773 "src/syn.tab.c"
    break;

  case 71: /* arith_binary: arith_binary '+' expression  */
#line 605 "src/syn.y"
                              {
      (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), ADD_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));

      // convert_numbers($1, $3, '+');

    }
#line 3787 "src/syn.tab.c"
    break;

  case 72: /* arith_binary: arith_binary '-' expression  */
#line 614 "src/syn.y"
                                {
      (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MINUS_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3798 "src/syn.tab.c"
    break;

  case 73: /* arith_binary: arith_binary '*' expression  */
#line 620 "src/syn.y"
                                {
      (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MULTIPLY_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3809 "src/syn.tab.c"
    break;

  case 74: /* arith_binary: arith_binary '/' expression  */
#line 626 "src/syn.y"
                                {
       (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), DIVISION_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3820 "src/syn.tab.c"
    break;

  case 75: /* arith_binary: expression  */
#line 632 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(ARITHMETIC_BINARY);
      // add_tree_node($$, $1);
    }
#line 3830 "src/syn.tab.c"
    break;

  case 76: /* arith_single: '+' expression  */
#line 640 "src/syn.y"
                 {
    (yyval.node) = create_node(ARITHMETIC_SINGLE);
    add_tree_token_node((yyval.node), &(yyvsp[-1].token), ADD_OP);
    add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3840 "src/syn.tab.c"
    break;

  case 77: /* arith_single: '-' expression  */
#line 645 "src/syn.y"
                   {
      (yyval.node) = create_node(ARITHMETIC_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MINUS_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3850 "src/syn.tab.c"
    break;

  case 78: /* lst_single: '%' expression  */
#line 653 "src/syn.y"
                 {
      (yyval.node) = create_node(LIST_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), POP_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3860 "src/syn.tab.c"
    break;

  case 79: /* lst_single: '?' expression  */
#line 658 "src/syn.y"
                   {
      (yyval.node) = create_node(LIST_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), HEAD_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3870 "src/syn.tab.c"
    break;

  case 80: /* lst_binary: expression FILTER expression  */
#line 666 "src/syn.y"
                               {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), FILTER_OP);
    }
#line 3880 "src/syn.tab.c"
    break;

  case 81: /* lst_binary: expression MAP expression  */
#line 671 "src/syn.y"
                              {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MAP_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3891 "src/syn.tab.c"
    break;

  case 82: /* lst_binary: expression ':' expression  */
#line 677 "src/syn.y"
                              {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), CONSTRUCTOR_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3902 "src/syn.tab.c"
    break;

  case 83: /* logical_op: AND  */
#line 686 "src/syn.y"
      {
      (yyval.node) = create_node(LOGIC_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), AND_OP);
    }
#line 3911 "src/syn.tab.c"
    break;

  case 84: /* logical_op: OR  */
#line 690 "src/syn.y"
       {
      (yyval.node) = create_node(LOGIC_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), OR_OP);
    }
#line 3920 "src/syn.tab.c"
    break;

  case 85: /* relational_op: GREATER  */
#line 697 "src/syn.y"
          {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), GT_OP);
    }
#line 3929 "src/syn.tab.c"
    break;

  case 86: /* relational_op: GREATER_EQ  */
#line 701 "src/syn.y"
               {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), GE_OP);
    }
#line 3938 "src/syn.tab.c"
    break;

  case 87: /* relational_op: LESS  */
#line 705 "src/syn.y"
         {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), LT_OP);
    }
#line 3947 "src/syn.tab.c"
    break;

  case 88: /* relational_op: LESS_EQ  */
#line 709 "src/syn.y"
            {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), LE_OP);
    }
#line 3956 "src/syn.tab.c"
    break;

  case 89: /* relational_op: EQUAL  */
#line 713 "src/syn.y"
          {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), EQ_OP);
    }
#line 3965 "src/syn.tab.c"
    break;

  case 90: /* relational_op: NOT_EQ  */
#line 717 "src/syn.y"
           {
      (yyval.node) = create_node(RELATIONAL_OPERATOR);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NE_OP);
    }
#line 3974 "src/syn.tab.c"
    break;


#line 3978 "src/syn.tab.c"

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

#line 723 "src/syn.y"

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
