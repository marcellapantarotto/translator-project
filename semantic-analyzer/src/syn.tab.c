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
  YYSYMBOL_init_stmt = 59,                 /* init_stmt  */
  YYSYMBOL_conditional_stmt = 60,          /* conditional_stmt  */
  YYSYMBOL_return_stmt = 61,               /* return_stmt  */
  YYSYMBOL_iteration = 62,                 /* iteration  */
  YYSYMBOL_loop_condition = 63,            /* loop_condition  */
  YYSYMBOL_update_stmt = 64,               /* update_stmt  */
  YYSYMBOL_stop_stmt = 65,                 /* stop_stmt  */
  YYSYMBOL_output = 66,                    /* output  */
  YYSYMBOL_input = 67,                     /* input  */
  YYSYMBOL_func_calling = 68,              /* func_calling  */
  YYSYMBOL_69_3 = 69,                      /* $@3  */
  YYSYMBOL_70_4 = 70,                      /* $@4  */
  YYSYMBOL_expression = 71,                /* expression  */
  YYSYMBOL_iden = 72,                      /* iden  */
  YYSYMBOL_const = 73,                     /* const  */
  YYSYMBOL_number = 74,                    /* number  */
  YYSYMBOL_type = 75,                      /* type  */
  YYSYMBOL_type_lst = 76,                  /* type_lst  */
  YYSYMBOL_type_number = 77,               /* type_number  */
  YYSYMBOL_operation = 78,                 /* operation  */
  YYSYMBOL_single_operation = 79,          /* single_operation  */
  YYSYMBOL_arith_binary = 80,              /* arith_binary  */
  YYSYMBOL_term = 81,                      /* term  */
  YYSYMBOL_arith_single = 82,              /* arith_single  */
  YYSYMBOL_lst_single = 83,                /* lst_single  */
  YYSYMBOL_lst_binary = 84                 /* lst_binary  */
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
#define YYLAST   5219

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  353

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
     191,   206,   215,   225,   231,   237,   246,   257,   261,   267,
     274,   282,   287,   293,   298,   303,   308,   313,   318,   323,
     328,   328,   334,   340,   348,   356,   366,   374,   387,   396,
     407,   418,   423,   429,   434,   440,   448,   456,   464,   475,
     486,   486,   486,   497,   502,   507,   512,   515,   521,   529,
     534,   541,   545,   552,   557,   565,   573,   577,   584,   589,
     595,   601,   607,   613,   619,   625,   631,   640,   645,   650,
     658,   665,   671,   679,   685,   691,   699,   704,   712,   717,
     725,   731,   737,   743
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
  "init_variable", "init_stmt", "conditional_stmt", "return_stmt",
  "iteration", "loop_condition", "update_stmt", "stop_stmt", "output",
  "input", "func_calling", "$@3", "$@4", "expression", "iden", "const",
  "number", "type", "type_lst", "type_number", "operation",
  "single_operation", "arith_binary", "term", "arith_single", "lst_single",
  "lst_binary", YY_NULLPTR
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

#define YYPACT_NINF (-274)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-94)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      21,    47,    29,    42,    16,    52,   109,   226,   272,    32,
      59,    77,    44,  -274,    87,   336,    75,    49,    97,   145,
      88,    86,    93,    25,    81,   101,  3508,   102,  4626,  4643,
    4660,  3569,   785,   107,   118,   131,   132,   133,   845,   785,
     785,   785,   785,   785,    82,   130,   106,  2688,   147,  2729,
     144,  2770,  2811,  2852,  2893,  2934,  4677,  4694,  4711,  4728,
    4745,   288,  4762,  5017,  4779,  4796,  4813,   104,  2975,   370,
     785,   949,   418,   845,     6,   387,   471,   845,  1425,  4830,
    4847,  4864,  4881,  4898,   347,   158,  3508,  3016,  3057,   785,
     785,   785,   785,   785,   785,   785,   785,   785,   785,   785,
     785,   785,   785,   785,   531,   575,  3098,  1448,   111,   161,
     165,   171,   176,  1495,   177,  1623,  1658,  4915,   181,   732,
     889,   919,   996,  1046,  1076,  1153,  1203,  4932,  4949,  4966,
    4983,   220,  1409,  3507,   178,   184,    51,  3549,  3508,   628,
     186,   192,   196,   202,   208,  3139,   213,   861,  1702,  3180,
     211,  1233,  3221,  3262,  3303,  3344,  3385,  5000,   218,  3508,
       7,  3426,   219,   233,   236,  1580,  4030,  4050,  1555,   845,
     845,   845,   845,   845,   845,  4070,  4090,  4110,  4130,  4150,
    4170,  4485,  4190,  4210,  4230,  4564,  3467,   845,   845,   845,
     845,   845,   845,   845,   845,  1105,  1262,  3610,  3590,   845,
     861,   861,   861,   861,   861,  3630,  3650,  3670,  3690,  3710,
    3730,  4470,  3750,  3770,  3790,  4501,   861,   861,   861,   861,
     861,   861,   861,   861,   231,   785,   241,   242,   244,   248,
     251,  1797,   232,   263,  1838,   262,  1909,  1950,  1991,  2032,
    2073,  1310,   243,   268,    94,   266,   370,  1732,  4250,  4270,
    4290,  4310,  4330,   845,   845,   845,   845,   845,   845,   845,
    1861,  5032,  5045,  5058,  5071,  5084,  5097,  5110,   370,  5123,
    3810,  3830,  3850,  3870,  3890,   861,   861,   861,   861,   861,
     861,   861,   146,   554,   977,  1025,  1134,  1182,  1291,  1339,
    2114,  1361,   845,     6,   688,   704,   845,  2155,  3508,  2196,
    2237,   845,   531,  4350,  4370,  4390,  4410,  4430,  4579,  4594,
    4609,   531,  3910,  3930,  3950,  3970,  3990,  4517,  4533,  4549,
    2278,  5136,   270,   271,  5149,   281,  5162,  5175,   290,  5188,
     178,   178,  3549,  3549,   269,   307,   308,   309,   317,  2319,
     324,   325,  2360,  2401,  2442,  2483,  2524,  2565,  2606,  4450,
    4010,  3549,  2647
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
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -274,  -274,   343,  -274,  -274,  -274,     2,     0,  -274,   327,
    -273,   205,   -43,  -126,  -134,  -132,   -65,  -122,  -120,  -117,
      61,   195,  -274,  -112,  -110,   265,  -236,  -262,   105,   422,
     579,   736,    18,  -274,  -274,   -31,   893,  1603,  1344,  1050,
    1207,  1474
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,     7,    16,    44,    45,    21,    22,
     134,   135,    46,    47,    48,    49,    50,    51,    52,    53,
     110,   111,   150,    54,    55,    56,   104,   146,    57,    58,
      59,    60,   164,    11,    12,    61,    62,    63,    64,    65,
      66,    67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    72,     8,   233,    85,   234,     9,    78,     8,   109,
     302,   148,   149,   108,   242,   236,    13,   237,    10,    20,
     238,    -3,     1,    20,    10,   239,   -42,   240,   -42,   330,
       2,     3,   311,   161,     2,     3,   -66,   163,   331,   105,
     -66,   163,   107,   118,   113,   115,   116,    -8,    -8,   -67,
      -9,   -64,    -2,   -67,    15,    18,    -8,    -8,   119,   120,
     121,   122,   123,   124,   125,   126,    17,   -12,   340,   341,
     -20,   -12,   235,   136,   147,   216,   217,   218,   219,   220,
     221,   222,   223,   -23,   -63,   -23,   -23,    -4,   -23,   -23,
     -23,   -23,   -23,    19,   -23,   243,   -23,   -23,   -23,   -23,
     -23,    26,   -23,   -23,   -65,    24,   241,   -16,   151,    -5,
       1,    23,   -13,   -12,   -23,   -23,   136,   -12,     2,     3,
     -15,   -23,   -23,   -23,    68,    73,   -68,    84,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,    74,   232,   247,   231,
     101,   102,   103,   176,    79,    80,    81,    82,    83,    75,
      76,    77,   186,    70,     2,     3,   260,   261,   262,   263,
     264,   265,   266,   267,   -14,   -75,    87,    86,   269,   -75,
     -75,   -75,   218,   219,   220,   221,   222,   223,   176,   -21,
     176,   176,   176,   -41,   138,   282,   283,   284,   285,   286,
     287,   288,   289,   139,   291,   140,   142,   -51,   233,   233,
     234,   234,   145,   -17,   129,   130,   342,   343,   152,   206,
     236,   236,   237,   237,   153,   238,   238,   233,   154,   234,
     239,   239,   240,   240,   155,   352,    -6,    -6,   109,   236,
     156,   237,   157,   160,   238,    -6,    -6,   -19,   -40,   239,
     244,   240,   -90,   245,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   206,   290,   297,   328,   101,   102,   103,   292,
     293,   321,   294,   324,   326,   327,   295,   235,   235,   296,
     329,   136,    -7,    -7,   176,   248,   249,   250,   251,   252,
     136,    -7,    -7,   298,   299,   301,   235,   -41,   -12,   333,
     334,   344,   176,   176,   176,   176,   176,   176,   176,   176,
     336,   241,   241,   175,   176,   270,   271,   272,   273,   274,
      88,   339,    89,    90,    91,    92,    93,    94,    95,    96,
     241,   206,   206,   206,   206,   206,   206,   206,   206,   345,
     346,   347,   232,   232,   231,   231,   -11,   -11,   175,   348,
     175,   175,   175,   349,   350,   -11,   -11,   -10,   -10,    14,
      25,   232,   158,   231,   322,   162,   -10,   -10,   176,   176,
     306,   307,   176,   176,   176,     0,     0,     0,     0,   205,
       0,     0,     0,   -50,   -50,     0,   -50,   -50,     0,     0,
     206,   206,   315,   316,   206,   206,   206,     0,   -50,   -50,
     165,   166,   112,   167,   168,     0,     0,   176,     0,   176,
     176,   176,   -50,   -50,     0,   169,   176,   206,     0,   -50,
     -50,   -50,   205,     0,     0,     0,   206,     0,     0,   170,
     171,     0,     0,     0,     0,     0,   172,   173,   174,     0,
       0,     0,     0,     0,   175,   175,   175,   175,   175,   175,
     106,     0,    89,    90,    91,    92,    93,    94,    95,    96,
       0,     0,   175,   175,   175,   175,   175,   175,   175,   175,
     177,     0,     0,     0,   175,   205,   205,   205,   205,   205,
       0,     0,     0,     0,   165,   166,   114,   167,   168,     0,
       0,   205,   205,   205,   205,   205,   205,   205,   205,   169,
       0,     0,     0,     0,     0,   177,     0,   177,   177,   177,
       0,     0,     0,   170,   171,     0,     0,     0,     0,     0,
     172,   173,   174,     0,     0,     0,     0,     0,   175,   175,
     175,   175,   175,   175,   175,     0,   207,     0,     0,     0,
       0,     0,     0,     0,   195,   196,     0,   197,   198,     0,
     205,   205,   205,   205,   205,   205,   205,     0,     0,   199,
     -18,     0,     0,     0,     0,     0,     0,   175,     0,   175,
     175,   175,     0,   200,   201,     0,   175,   205,     0,   207,
     202,   203,   204,   -76,     0,     0,   205,   -76,   -76,   -76,
     218,   219,   220,   221,   222,   223,     0,     0,     0,     0,
       0,   177,   177,   177,   177,   177,   177,   -35,     0,    89,
      90,    91,    92,    93,    94,    95,    96,     0,     0,   177,
     177,   177,   177,   177,   177,   177,   177,   178,     0,     0,
       0,   177,   207,   207,   207,   207,   207,     0,     0,     0,
       0,    28,    29,     0,    30,    71,     0,     0,   207,   207,
     207,   207,   207,   207,   207,   207,    38,     0,     0,     0,
     -44,     0,   178,     0,   178,   178,   178,     0,     0,     0,
      39,    40,     0,     0,     0,     0,     0,    41,    42,    43,
       0,     0,     0,     0,     0,   177,   177,   177,   177,   177,
     177,   177,     0,   208,     0,     0,     0,     0,     0,     0,
       0,   165,   166,   323,   167,   168,     0,   207,   207,   207,
     207,   207,   207,   207,     0,     0,   169,   165,   166,   325,
     167,   168,     0,     0,   177,     0,   177,   177,   177,     0,
     170,   171,   169,   177,   207,     0,   208,   172,   173,   174,
       0,     0,     0,   207,     0,     0,   170,   171,     0,     0,
       0,     0,     0,   172,   173,   174,     0,     0,   178,   178,
     178,   178,   178,   178,   -75,     0,   -75,   -75,    91,    92,
      93,    94,    95,    96,     0,     0,   178,   178,   178,   178,
     178,   178,   178,   178,   179,     0,     0,     0,   178,   208,
     208,   208,   208,   208,     0,     0,     0,     0,    28,    29,
       0,    30,    71,     0,     0,   208,   208,   208,   208,   208,
     208,   208,   208,    38,     0,     0,     0,     0,     0,   179,
       0,   179,   179,   179,     0,     0,     0,    39,    40,     0,
       0,     0,     0,     0,    41,    42,    43,     0,     0,     0,
       0,     0,   178,   178,   178,   178,   178,   178,   178,     0,
     209,     0,     0,     0,     0,     0,     0,     0,   165,   166,
       0,   167,   168,     0,   208,   208,   208,   208,   208,   208,
     208,     0,     0,   169,   195,   196,     0,   197,   198,     0,
       0,   178,     0,   178,   178,   178,     0,   170,   171,   199,
     178,   208,     0,   209,   172,   173,   174,     0,     0,     0,
     208,     0,     0,   200,   201,     0,     0,     0,     0,     0,
     202,   203,   204,     0,     0,   179,   179,   179,   179,   179,
     179,   -76,     0,   -76,   -76,    91,    92,    93,    94,    95,
      96,     0,     0,   179,   179,   179,   179,   179,   179,   179,
     179,   180,     0,     0,     0,   179,   209,   209,   209,   209,
     209,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,     0,   209,   209,   209,   209,   209,   209,   209,   209,
       0,     0,     0,     0,     0,     0,   180,    69,   180,   180,
     180,   -58,     0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,   179,
     179,   179,   179,   179,   179,   179,   -69,   210,     0,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,
       0,   209,   209,   209,   209,   209,   209,   209,   -70,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   179,     0,
     179,   179,   179,     0,     0,     0,     0,   179,   209,     0,
     210,     0,     0,     0,   -70,     0,     0,   209,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,
       0,     0,   180,   180,   180,   180,   180,   180,   -71,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,
     180,   180,   180,   180,   180,   180,   180,   180,   183,     0,
       0,     0,   180,   210,   210,   210,   210,   210,   -72,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,   210,
     210,   210,   210,   210,   210,   210,   210,     0,     0,     0,
       0,     0,     0,   183,   -61,   183,   183,   183,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,     0,     0,   180,   180,   180,   180,
     180,   180,   180,   -71,   213,     0,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,     0,     0,   210,   210,
     210,   210,   210,   210,   210,   -73,     0,   -73,   -73,    91,
      92,    93,    94,   -73,   -73,   180,     0,   180,   180,   180,
       0,     0,     0,     0,   180,   210,     0,   213,     0,     0,
       0,   -72,     0,     0,   210,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,     0,     0,     0,     0,     0,   183,
     183,   183,   183,   183,   183,   -74,     0,   -74,   -74,    91,
      92,    93,    94,   -74,   -74,     0,     0,   183,   183,   183,
     183,   183,   183,   183,   183,   184,     0,     0,     0,   183,
     213,   213,   213,   213,   213,   -43,     0,    89,    90,    91,
      92,    93,    94,    95,    96,     0,   213,   213,   213,   213,
     213,   213,   213,   213,     0,     0,     0,     0,     0,     0,
     184,   -62,   184,   184,   184,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,     0,     0,   183,   183,   183,   183,   183,   183,   183,
     -73,   214,     0,     0,   -73,   -73,   -73,   218,   219,   220,
     221,   -73,   -73,     0,     0,   213,   213,   213,   213,   213,
     213,   213,   300,     0,    89,    90,    91,    92,    93,    94,
      95,    96,   183,     0,   183,   183,   183,     0,     0,     0,
       0,   183,   213,     0,   214,     0,     0,     0,   -74,     0,
       0,   213,   -74,   -74,   -74,   218,   219,   220,   221,   -74,
     -74,     0,     0,     0,     0,     0,   184,   184,   184,   184,
     184,   184,   182,   320,     0,    89,    90,    91,    92,    93,
      94,    95,    96,     0,   184,   184,   184,   184,   184,   184,
     184,   184,     0,     0,     0,     0,   184,   214,   214,   214,
     214,   214,     0,     0,     0,     0,     0,   182,     0,   182,
     182,   182,     0,   214,   214,   214,   214,   214,   214,   214,
     214,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   127,   128,     0,   117,   101,   102,   103,   212,   187,
     188,   189,   190,   191,   192,   193,   194,     0,     0,     0,
     184,   184,   184,   184,   184,   184,   184,   137,     0,     0,
       0,     0,   187,   188,   189,   190,   191,   192,   193,   194,
       0,     0,   214,   214,   214,   214,   214,   214,   214,     0,
       0,   212,     0,     0,     0,     0,     0,     0,     0,   184,
       0,   184,   184,   184,     0,     0,     0,     0,   184,   214,
       0,     0,   185,   182,   141,     0,     0,     0,   214,   187,
     188,   189,   190,   191,   192,   193,   194,     0,     0,     0,
       0,   182,   182,   182,   182,   182,   182,   182,   182,     0,
       0,     0,     0,   182,     0,     0,     0,   185,     0,   185,
     185,   185,     0,     0,     0,     0,     0,     0,     0,     0,
     212,   212,   212,   212,   212,   212,   212,   212,     0,     0,
       0,     0,     0,   246,   -58,   131,   132,   133,   215,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,     0,     0,     0,   304,   305,   -61,
       0,   182,   182,   182,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   313,
     314,   215,     0,   212,   212,   212,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   182,     0,   182,   182,
     182,   181,   143,   185,     0,   182,   212,   187,   188,   189,
     190,   191,   192,   193,   194,   212,     0,     0,     0,     0,
       0,   185,   185,   185,   185,   185,   185,   185,   185,     0,
       0,     0,     0,   185,     0,     0,   181,   144,   181,   181,
     181,     0,   187,   188,   189,   190,   191,   192,   193,   194,
     215,   215,   215,   215,   215,   215,   215,   215,     0,     0,
       0,     0,     0,   -36,     0,   -36,   -36,   211,   -36,   -36,
     -36,   -36,   -36,     0,   -36,   159,   -36,   -36,   -36,   -36,
     -36,     0,   -36,   -36,     0,     0,     0,     0,     0,     0,
       0,   308,   309,   310,   -36,   -36,     0,     0,     0,     0,
       0,   -36,   -36,   -36,     0,     0,     0,     0,     0,     0,
     211,   303,     0,   317,   318,   319,   187,   188,   189,   190,
     191,   192,   193,   194,     0,     0,   185,     0,   185,   185,
     185,     0,   181,     0,     0,   185,   215,     0,     0,     0,
       0,     0,     0,     0,     0,   215,     0,     0,     0,     0,
     181,   181,   181,   181,   181,   181,   181,   181,   -23,     0,
     -23,   -23,   181,   -23,   -23,   -23,   -23,   -23,     0,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,   211,
     211,   211,   211,   211,   211,   211,   211,     0,     0,   -23,
     -23,     0,     0,     0,     0,     0,   -23,   -23,   -23,   -24,
       0,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,     0,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,
     181,   181,   181,     0,     0,     0,     0,     0,     0,     0,
     -24,   -24,     0,     0,     0,     0,     0,   -24,   -24,   -24,
     -75,     0,   211,   211,   211,   -75,   -75,   189,   190,   191,
     192,   193,   194,     0,     0,   181,     0,   181,   181,   181,
       0,     0,     0,     0,   181,   211,     0,     0,     0,     0,
     -25,     0,   -25,   -25,   211,   -25,   -25,   -25,   -25,   -25,
       0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,
     -25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -25,   -25,     0,     0,     0,     0,     0,   -25,   -25,
     -25,   -26,     0,   -26,   -26,     0,   -26,   -26,   -26,   -26,
     -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,
     -26,   -26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -26,   -26,     0,     0,     0,     0,     0,   -26,
     -26,   -26,   -27,     0,   -27,   -27,     0,   -27,   -27,   -27,
     -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
       0,   -27,   -27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -27,   -27,     0,     0,     0,     0,     0,
     -27,   -27,   -27,   -29,     0,   -29,   -29,     0,   -29,   -29,
     -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,     0,   -29,   -29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -29,   -29,     0,     0,     0,     0,
       0,   -29,   -29,   -29,   -28,     0,   -28,   -28,     0,   -28,
     -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,     0,   -28,   -28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -28,   -28,     0,     0,     0,
       0,     0,   -28,   -28,   -28,   -33,     0,   -33,   -33,     0,
     -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,     0,   -33,   -33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -33,   -33,     0,     0,
       0,     0,     0,   -33,   -33,   -33,   -11,     0,   -11,   -11,
       0,   -11,   -11,   -11,   -11,   -11,     0,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,     0,   -11,   -11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -11,   -11,     0,
       0,     0,     0,     0,   -11,   -11,   -11,   -34,     0,   -34,
     -34,     0,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -34,   -34,
       0,     0,     0,     0,     0,   -34,   -34,   -34,   -32,     0,
     -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -32,
     -32,     0,     0,     0,     0,     0,   -32,   -32,   -32,   -38,
       0,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,     0,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -38,   -38,     0,     0,     0,     0,     0,   -38,   -38,   -38,
     -31,     0,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,
       0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,
     -31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -31,   -31,     0,     0,     0,     0,     0,   -31,   -31,
     -31,   -36,     0,   -36,   -36,     0,   -36,   -36,   -36,   -36,
     -36,     0,   -36,   351,   -36,   -36,   -36,   -36,   -36,     0,
     -36,   -36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -36,   -36,     0,     0,     0,     0,     0,   -36,
     -36,   -36,   -39,     0,   -39,   -39,     0,   -39,   -39,   -39,
     -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
       0,   -39,   -39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -39,   -39,     0,     0,     0,     0,     0,
     -39,   -39,   -39,   -47,     0,   -47,   -47,     0,   -47,   -47,
     -47,   -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,     0,   -47,   -47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -47,   -47,     0,     0,     0,     0,
       0,   -47,   -47,   -47,   -45,     0,   -45,   -45,     0,   -45,
     -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,     0,   -45,   -45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -45,   -45,     0,     0,     0,
       0,     0,   -45,   -45,   -45,   -48,     0,   -48,   -48,     0,
     -48,   -48,   -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,     0,   -48,   -48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -48,   -48,     0,     0,
       0,     0,     0,   -48,   -48,   -48,   -46,     0,   -46,   -46,
       0,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,     0,   -46,   -46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -46,   -46,     0,
       0,     0,     0,     0,   -46,   -46,   -46,   -49,     0,   -49,
     -49,     0,   -49,   -49,   -49,   -49,   -49,     0,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,     0,   -49,   -49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -49,   -49,
       0,     0,     0,     0,     0,   -49,   -49,   -49,   -37,     0,
     -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -37,
     -37,     0,     0,     0,     0,     0,   -37,   -37,   -37,    27,
       0,    28,    29,     0,    30,    31,    32,     2,     3,     0,
      33,     0,    34,    35,    36,    37,    38,     0,   -30,   -22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,    40,     0,     0,     0,     0,     0,    41,    42,    43,
     -24,     0,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,
       0,   -24,     0,   -24,   -24,   -24,   -24,   -24,     0,   -24,
     -24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -24,   -24,     0,     0,     0,     0,     0,   -24,   -24,
     -24,   -25,     0,   -25,   -25,     0,   -25,   -25,   -25,   -25,
     -25,     0,   -25,     0,   -25,   -25,   -25,   -25,   -25,     0,
     -25,   -25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -25,   -25,     0,     0,     0,     0,     0,   -25,
     -25,   -25,   -26,     0,   -26,   -26,     0,   -26,   -26,   -26,
     -26,   -26,     0,   -26,     0,   -26,   -26,   -26,   -26,   -26,
       0,   -26,   -26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -26,   -26,     0,     0,     0,     0,     0,
     -26,   -26,   -26,   -27,     0,   -27,   -27,     0,   -27,   -27,
     -27,   -27,   -27,     0,   -27,     0,   -27,   -27,   -27,   -27,
     -27,     0,   -27,   -27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -27,   -27,     0,     0,     0,     0,
       0,   -27,   -27,   -27,   -29,     0,   -29,   -29,     0,   -29,
     -29,   -29,   -29,   -29,     0,   -29,     0,   -29,   -29,   -29,
     -29,   -29,     0,   -29,   -29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -29,   -29,     0,     0,     0,
       0,     0,   -29,   -29,   -29,   -28,     0,   -28,   -28,     0,
     -28,   -28,   -28,   -28,   -28,     0,   -28,     0,   -28,   -28,
     -28,   -28,   -28,     0,   -28,   -28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -28,   -28,     0,     0,
       0,     0,     0,   -28,   -28,   -28,   -33,     0,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -33,     0,   -33,     0,   -33,
     -33,   -33,   -33,   -33,     0,   -33,   -33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -33,   -33,     0,
       0,     0,     0,     0,   -33,   -33,   -33,   -34,     0,   -34,
     -34,     0,   -34,   -34,   -34,   -34,   -34,     0,   -34,     0,
     -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -34,   -34,
       0,     0,     0,     0,     0,   -34,   -34,   -34,   -32,     0,
     -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,     0,   -32,
       0,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -32,
     -32,     0,     0,     0,     0,     0,   -32,   -32,   -32,   -38,
       0,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,     0,
     -38,     0,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -38,   -38,     0,     0,     0,     0,     0,   -38,   -38,   -38,
     -31,     0,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,
       0,   -31,     0,   -31,   -31,   -31,   -31,   -31,     0,   -31,
     -31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -31,   -31,     0,     0,     0,     0,     0,   -31,   -31,
     -31,   -39,     0,   -39,   -39,     0,   -39,   -39,   -39,   -39,
     -39,     0,   -39,     0,   -39,   -39,   -39,   -39,   -39,     0,
     -39,   -39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -39,   -39,     0,     0,     0,     0,     0,   -39,
     -39,   -39,   -47,     0,   -47,   -47,     0,   -47,   -47,   -47,
     -47,   -47,     0,   -47,     0,   -47,   -47,   -47,   -47,   -47,
       0,   -47,   -47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -47,   -47,     0,     0,     0,     0,     0,
     -47,   -47,   -47,   -45,     0,   -45,   -45,     0,   -45,   -45,
     -45,   -45,   -45,     0,   -45,     0,   -45,   -45,   -45,   -45,
     -45,     0,   -45,   -45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -45,   -45,     0,     0,     0,     0,
       0,   -45,   -45,   -45,   -48,     0,   -48,   -48,     0,   -48,
     -48,   -48,   -48,   -48,     0,   -48,     0,   -48,   -48,   -48,
     -48,   -48,     0,   -48,   -48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -48,   -48,     0,     0,     0,
       0,     0,   -48,   -48,   -48,   -46,     0,   -46,   -46,     0,
     -46,   -46,   -46,   -46,   -46,     0,   -46,     0,   -46,   -46,
     -46,   -46,   -46,     0,   -46,   -46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -46,   -46,     0,     0,
       0,     0,     0,   -46,   -46,   -46,   -49,     0,   -49,   -49,
       0,   -49,   -49,   -49,   -49,   -49,     0,   -49,     0,   -49,
     -49,   -49,   -49,   -49,     0,   -49,   -49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -49,   -49,     0,
       0,     0,     0,     0,   -49,   -49,   -49,   -37,     0,   -37,
     -37,     0,   -37,   -37,   -37,   -37,   -37,     0,   -37,     0,
     -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -37,   -37,
       0,     0,     0,     0,     0,   -37,   -37,   -37,   -11,     0,
     -11,   -11,     0,   -11,   -11,   -11,   -11,   -11,     0,   -11,
       0,   -11,   -11,   -11,   -11,   -11,     0,   -11,   -11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -11,
     -11,     0,     0,     0,     0,     0,   -11,   -11,   -11,    27,
       0,    28,    29,     0,    30,    31,    32,     2,     3,     0,
      33,     0,    34,    35,    36,    37,    38,     0,   -30,   -92,
       0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,
      39,    40,     0,   101,   102,   103,     0,    41,    42,    43,
     224,     0,    28,    29,     0,    30,    31,   225,     2,     3,
       0,   226,     0,   227,   228,   229,   230,    38,     0,   -30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,    40,     0,     0,     0,     0,    69,    41,    42,
      43,   -58,     0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   268,   -58,
       0,    70,     0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -60,
       0,     0,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -53,
       0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -85,
       0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -56,
       0,     0,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -55,
       0,     0,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -59,
       0,     0,     0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -54,
       0,     0,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -82,
       0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   277,   278,   -82,   -82,   -82,   -77,
       0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -78,
       0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -86,
       0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,
       0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,
       0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,
       0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -79,
       0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -57,
       0,     0,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -80,
       0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   277,   278,   -80,   -80,   -80,   -81,
       0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   277,   278,   -81,   -81,   -81,   -83,
       0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -84,
       0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -52,
       0,     0,     0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -62,
       0,     0,     0,     0,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -60,
       0,     0,     0,     0,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -53,
       0,     0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -85,
       0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -56,
       0,     0,     0,     0,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -55,
       0,     0,     0,     0,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -59,
       0,     0,     0,     0,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -54,
       0,     0,     0,     0,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -82,
       0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   255,   256,   -82,   -82,   -82,   -77,
       0,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -78,
       0,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -86,
       0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,
       0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,
       0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,
       0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -79,
       0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -57,
       0,     0,     0,     0,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -80,
       0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   255,   256,   -80,   -80,   -80,   -81,
       0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   255,   256,   -81,   -81,   -81,   -83,
       0,     0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -84,
       0,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -52,
       0,     0,     0,     0,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -93,
       0,     0,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   275,   276,   -93,     0,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   253,   254,     0,
     -68,   -93,   -93,   -93,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,   -90,   279,   280,   281,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,
       0,     0,   -91,   279,   280,   281,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,     0,     0,     0,   -92,   279,
     280,   281,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,     0,     0,   -68,     0,   279,   280,   281,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,     0,     0,   -90,     0,
     257,   258,   259,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,     0,     0,   -91,     0,   257,   258,   259,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,     0,     0,   -92,     0,
     257,   258,   259,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,     0,     0,     0,     0,   257,   258,   259,   -61,     0,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -62,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -60,     0,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -53,
       0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -85,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -56,     0,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -55,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -59,     0,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -54,     0,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,    99,   100,   -82,   -82,   -82,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -88,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -89,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -57,     0,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -80,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,    99,   100,   -80,   -80,
     -80,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,    99,   100,   -81,   -81,   -81,   -83,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -84,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -52,     0,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -93,
       0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,    97,
      98,   -76,     0,   -93,   -93,   -93,   -76,   -76,   189,   190,
     191,   192,   193,   194,   -69,     0,     0,     0,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -70,     0,     0,
       0,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -71,     0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -72,     0,     0,     0,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -73,     0,     0,     0,
       0,   -73,   -73,   189,   190,   191,   192,   -73,   -73,   -74,
       0,     0,     0,     0,   -74,   -74,   189,   190,   191,   192,
     -74,   -74,   312,     0,     0,     0,     0,   187,   188,   189,
     190,   191,   192,   193,   194,   332,     0,     0,     0,     0,
     187,   188,   189,   190,   191,   192,   193,   194,   335,     0,
       0,     0,     0,   187,   188,   189,   190,   191,   192,   193,
     194,   337,     0,     0,     0,     0,   187,   188,   189,   190,
     191,   192,   193,   194,   338,     0,     0,     0,     0,   187,
     188,   189,   190,   191,   192,   193,   194,   -35,     0,     0,
       0,     0,   187,   188,   189,   190,   191,   192,   193,   194
};

static const yytype_int16 yycheck[] =
{
       0,    32,     0,   137,    47,   137,     6,    38,     6,    74,
     246,   137,   138,     7,     7,   137,     0,   137,     0,    19,
     137,     0,     1,    23,     6,   137,    19,   137,    22,   302,
       9,    10,   268,   159,     9,    10,     7,    19,   311,    70,
      11,    23,    73,    86,    75,    76,    77,     0,     1,     7,
      18,     7,     0,    11,    22,    11,     9,    10,    89,    90,
      91,    92,    93,    94,    95,    96,     7,    18,   330,   331,
      19,    22,   137,   104,    23,    24,    25,    26,    27,    28,
      29,    30,    31,     1,     7,     3,     4,     0,     6,     7,
       8,     9,    10,    18,    12,   160,    14,    15,    16,    17,
      18,    20,    20,    21,     7,    19,   137,    19,   139,     0,
       1,    23,    19,    19,    32,    33,   147,    23,     9,    10,
      19,    39,    40,    41,    22,    18,    22,    21,    24,    25,
      26,    27,    28,    29,    30,    31,    18,   137,   169,   137,
      36,    37,    38,    38,    39,    40,    41,    42,    43,    18,
      18,    18,    22,    42,     9,    10,   187,   188,   189,   190,
     191,   192,   193,   194,    19,    19,    22,    20,   199,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    73,    21,
      75,    76,    77,    22,    19,   216,   217,   218,   219,   220,
     221,   222,   223,    22,   225,    19,    19,    19,   332,   333,
     332,   333,    21,    19,    99,   100,   332,   333,    22,   104,
     332,   333,   332,   333,    22,   332,   333,   351,    22,   351,
     332,   333,   332,   333,    22,   351,     0,     1,   293,   351,
      22,   351,    19,    22,   351,     9,    10,    19,    19,   351,
       7,   351,    22,     7,    24,    25,    26,    27,    28,    29,
      30,    31,   147,    22,    22,   298,    36,    37,    38,    18,
      18,   292,    18,   294,   295,   296,    18,   332,   333,    18,
     301,   302,     0,     1,   169,   170,   171,   172,   173,   174,
     311,     9,    10,    20,    22,    42,   351,    19,    22,    19,
      19,    22,   187,   188,   189,   190,   191,   192,   193,   194,
      19,   332,   333,    38,   199,   200,   201,   202,   203,   204,
      22,    21,    24,    25,    26,    27,    28,    29,    30,    31,
     351,   216,   217,   218,   219,   220,   221,   222,   223,    22,
      22,    22,   332,   333,   332,   333,     0,     1,    73,    22,
      75,    76,    77,    19,    19,     9,    10,     0,     1,     6,
      23,   351,   147,   351,   293,   160,     9,    10,   253,   254,
     255,   256,   257,   258,   259,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,     3,     4,    -1,     6,     7,    -1,    -1,
     275,   276,   277,   278,   279,   280,   281,    -1,    18,    19,
       3,     4,     5,     6,     7,    -1,    -1,   292,    -1,   294,
     295,   296,    32,    33,    -1,    18,   301,   302,    -1,    39,
      40,    41,   147,    -1,    -1,    -1,   311,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,   169,   170,   171,   172,   173,   174,
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,   187,   188,   189,   190,   191,   192,   193,   194,
      38,    -1,    -1,    -1,   199,   200,   201,   202,   203,   204,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,   216,   217,   218,   219,   220,   221,   222,   223,    18,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    75,    76,    77,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,   253,   254,
     255,   256,   257,   258,   259,    -1,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,    -1,
     275,   276,   277,   278,   279,   280,   281,    -1,    -1,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,   292,    -1,   294,
     295,   296,    -1,    32,    33,    -1,   301,   302,    -1,   147,
      39,    40,    41,    19,    -1,    -1,   311,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,   169,   170,   171,   172,   173,   174,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,   187,
     188,   189,   190,   191,   192,   193,   194,    38,    -1,    -1,
      -1,   199,   200,   201,   202,   203,   204,    -1,    -1,    -1,
      -1,     3,     4,    -1,     6,     7,    -1,    -1,   216,   217,
     218,   219,   220,   221,   222,   223,    18,    -1,    -1,    -1,
      22,    -1,    73,    -1,    75,    76,    77,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,   253,   254,   255,   256,   257,
     258,   259,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,   275,   276,   277,
     278,   279,   280,   281,    -1,    -1,    18,     3,     4,     5,
       6,     7,    -1,    -1,   292,    -1,   294,   295,   296,    -1,
      32,    33,    18,   301,   302,    -1,   147,    39,    40,    41,
      -1,    -1,    -1,   311,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,   169,   170,
     171,   172,   173,   174,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,   187,   188,   189,   190,
     191,   192,   193,   194,    38,    -1,    -1,    -1,   199,   200,
     201,   202,   203,   204,    -1,    -1,    -1,    -1,     3,     4,
      -1,     6,     7,    -1,    -1,   216,   217,   218,   219,   220,
     221,   222,   223,    18,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    75,    76,    77,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,   253,   254,   255,   256,   257,   258,   259,    -1,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,     6,     7,    -1,   275,   276,   277,   278,   279,   280,
     281,    -1,    -1,    18,     3,     4,    -1,     6,     7,    -1,
      -1,   292,    -1,   294,   295,   296,    -1,    32,    33,    18,
     301,   302,    -1,   147,    39,    40,    41,    -1,    -1,    -1,
     311,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,   169,   170,   171,   172,   173,
     174,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,   187,   188,   189,   190,   191,   192,   193,
     194,    38,    -1,    -1,    -1,   199,   200,   201,   202,   203,
     204,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    18,    75,    76,
      77,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,   253,
     254,   255,   256,   257,   258,   259,    19,   104,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,   275,   276,   277,   278,   279,   280,   281,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,   292,    -1,
     294,   295,   296,    -1,    -1,    -1,    -1,   301,   302,    -1,
     147,    -1,    -1,    -1,    19,    -1,    -1,   311,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,   169,   170,   171,   172,   173,   174,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
     187,   188,   189,   190,   191,   192,   193,   194,    38,    -1,
      -1,    -1,   199,   200,   201,   202,   203,   204,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    19,    75,    76,    77,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,   253,   254,   255,   256,
     257,   258,   259,    19,   104,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,   275,   276,
     277,   278,   279,   280,   281,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,   292,    -1,   294,   295,   296,
      -1,    -1,    -1,    -1,   301,   302,    -1,   147,    -1,    -1,
      -1,    19,    -1,    -1,   311,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,   169,
     170,   171,   172,   173,   174,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,   187,   188,   189,
     190,   191,   192,   193,   194,    38,    -1,    -1,    -1,   199,
     200,   201,   202,   203,   204,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,   216,   217,   218,   219,
     220,   221,   222,   223,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    19,    75,    76,    77,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,   253,   254,   255,   256,   257,   258,   259,
      19,   104,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,   275,   276,   277,   278,   279,
     280,   281,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,   292,    -1,   294,   295,   296,    -1,    -1,    -1,
      -1,   301,   302,    -1,   147,    -1,    -1,    -1,    19,    -1,
      -1,   311,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,    -1,   169,   170,   171,   172,
     173,   174,    38,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,   187,   188,   189,   190,   191,   192,
     193,   194,    -1,    -1,    -1,    -1,   199,   200,   201,   202,
     203,   204,    -1,    -1,    -1,    -1,    -1,    73,    -1,    75,
      76,    77,    -1,   216,   217,   218,   219,   220,   221,   222,
     223,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    97,    98,    -1,    19,    36,    37,    38,   104,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    -1,
     253,   254,   255,   256,   257,   258,   259,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,   275,   276,   277,   278,   279,   280,   281,    -1,
      -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,
      -1,   294,   295,   296,    -1,    -1,    -1,    -1,   301,   302,
      -1,    -1,    38,   169,    19,    -1,    -1,    -1,   311,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,   187,   188,   189,   190,   191,   192,   193,   194,    -1,
      -1,    -1,    -1,   199,    -1,    -1,    -1,    73,    -1,    75,
      76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,    -1,
      -1,    -1,    -1,    18,    19,   101,   102,   103,   104,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,   253,   254,    19,
      -1,   257,   258,   259,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,   275,
     276,   147,    -1,   279,   280,   281,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   292,    -1,   294,   295,
     296,    38,    19,   169,    -1,   301,   302,    24,    25,    26,
      27,    28,    29,    30,    31,   311,    -1,    -1,    -1,    -1,
      -1,   187,   188,   189,   190,   191,   192,   193,   194,    -1,
      -1,    -1,    -1,   199,    -1,    -1,    73,    19,    75,    76,
      77,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,   104,     6,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   257,   258,   259,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
     147,    19,    -1,   279,   280,   281,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,   292,    -1,   294,   295,
     296,    -1,   169,    -1,    -1,   301,   302,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   311,    -1,    -1,    -1,    -1,
     187,   188,   189,   190,   191,   192,   193,   194,     1,    -1,
       3,     4,   199,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    -1,    20,    21,
     257,   258,   259,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      19,    -1,   279,   280,   281,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,   292,    -1,   294,   295,   296,
      -1,    -1,    -1,    -1,   301,   302,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,   311,     6,     7,     8,     9,    10,
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
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    18,    -1,    20,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      32,    33,    -1,    36,    37,    38,    -1,    39,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    18,    39,    40,
      41,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    18,    19,
      -1,    42,    -1,    23,    24,    25,    26,    27,    28,    29,
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
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    19,    -1,    36,    37,    38,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      19,    36,    37,    38,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    19,    36,    37,    38,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    19,    36,    37,    38,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    19,    36,
      37,    38,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    19,    -1,    36,    37,    38,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    19,    -1,
      36,    37,    38,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    19,    -1,    36,    37,    38,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    19,    -1,
      36,    37,    38,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,    36,    37,    38,    22,    -1,
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
      30,    31,    32,    33,    34,    35,    36,    37,    38,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    19,    -1,    36,    37,    38,    24,    25,    26,    27,
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
      31,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     9,    10,    44,    45,    46,    47,    49,    50,
      75,    76,    77,     0,    45,    22,    48,     7,    11,    18,
      50,    51,    52,    23,    19,    52,    20,     1,     3,     4,
       6,     7,     8,    12,    14,    15,    16,    17,    18,    32,
      33,    39,    40,    41,    49,    50,    55,    56,    57,    58,
      59,    60,    61,    62,    66,    67,    68,    71,    72,    73,
      74,    78,    79,    80,    81,    82,    83,    84,    22,    18,
      42,     7,    78,    18,    18,    18,    18,    18,    78,    71,
      71,    71,    71,    71,    21,    55,    20,    22,    22,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    69,    78,    22,    78,     7,    59,
      63,    64,     5,    78,     5,    78,    78,    19,    55,    78,
      78,    78,    78,    78,    78,    78,    78,    81,    81,    71,
      71,    84,    84,    84,    53,    54,    78,    19,    19,    22,
      19,    19,    19,    19,    19,    21,    70,    23,    56,    56,
      65,    78,    22,    22,    22,    22,    22,    19,    54,    13,
      22,    56,    64,    75,    75,     3,     4,     6,     7,    18,
      32,    33,    39,    40,    41,    68,    71,    72,    73,    74,
      79,    80,    81,    82,    83,    84,    22,    24,    25,    26,
      27,    28,    29,    30,    31,     3,     4,     6,     7,    18,
      32,    33,    39,    40,    41,    68,    71,    72,    73,    74,
      79,    80,    81,    82,    83,    84,    24,    25,    26,    27,
      28,    29,    30,    31,     1,     8,    12,    14,    15,    16,
      17,    49,    50,    57,    58,    59,    60,    61,    62,    66,
      67,    78,     7,    59,     7,     7,    18,    78,    71,    71,
      71,    71,    71,    32,    33,    34,    35,    36,    37,    38,
      78,    78,    78,    78,    78,    78,    78,    78,    18,    78,
      71,    71,    71,    71,    71,    32,    33,    34,    35,    36,
      37,    38,    78,    78,    78,    78,    78,    78,    78,    78,
      22,    78,    18,    18,    18,    18,    18,    22,    20,    22,
      22,    42,    69,    19,    81,    81,    71,    71,    84,    84,
      84,    69,    19,    81,    81,    71,    71,    84,    84,    84,
      22,    78,    63,     5,    78,     5,    78,    78,    55,    78,
      53,    53,    19,    19,    19,    19,    19,    19,    19,    21,
      70,    70,    56,    56,    22,    22,    22,    22,    22,    19,
      19,    13,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    45,    45,    46,    46,    46,    48,
      47,    49,    50,    51,    51,    52,    52,    53,    53,    54,
      54,    55,    55,    56,    56,    56,    56,    56,    56,    56,
      57,    56,    56,    56,    58,    59,    60,    60,    61,    62,
      63,    64,    64,    65,    65,    66,    66,    66,    66,    67,
      69,    70,    68,    71,    71,    71,    71,    71,    72,    73,
      73,    74,    74,    75,    75,    76,    77,    77,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    79,    79,    79,
      80,    80,    80,    81,    81,    81,    82,    82,    83,    83,
      84,    84,    84,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     0,
       8,     2,     2,     1,     0,     3,     1,     1,     0,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     2,     2,     2,     3,     5,     7,     3,     5,
       5,     1,     0,     1,     0,     5,     5,     5,     5,     5,
       0,     0,     6,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     2,
       3,     3,     1,     3,     3,     1,     2,     2,     2,     2,
       3,     3,     3,     1
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
#line 2869 "src/syn.tab.c"
    break;

  case 3: /* program: %empty  */
#line 154 "src/syn.y"
           {
      (yyval.node) = create_node(PROGRAM);
    }
#line 2877 "src/syn.tab.c"
    break;

  case 4: /* lst_declarations: declaration lst_declarations  */
#line 160 "src/syn.y"
                                {
      (yyval.node) = create_node(LIST_DECLARATIONS);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 2887 "src/syn.tab.c"
    break;

  case 5: /* lst_declarations: declaration  */
#line 165 "src/syn.y"
                 {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(LIST_DECLARATIONS);
      // add_tree_node($$, $1);
    }
#line 2897 "src/syn.tab.c"
    break;

  case 6: /* declaration: func_declaration  */
#line 173 "src/syn.y"
                   {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(DECLARATION);
      // add_tree_node($$, $1);
    }
#line 2907 "src/syn.tab.c"
    break;

  case 7: /* declaration: var_declaration  */
#line 178 "src/syn.y"
                    {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(DECLARATION);
      // add_tree_node($$, $1);
    }
#line 2917 "src/syn.tab.c"
    break;

  case 8: /* declaration: error  */
#line 183 "src/syn.y"
          {
      yyerrok;
      (yyval.node) = create_node(DECLARATION); 
      syntax_errors++;
    }
#line 2927 "src/syn.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 191 "src/syn.y"
                  {increment_scope(); strcpy(func_name, (yyvsp[0].node)->children->sibilings->child->token.lexeme);}
#line 2933 "src/syn.tab.c"
    break;

  case 10: /* func_declaration: unq_declaration $@1 '(' parameters ')' '{' block_commands '}'  */
#line 191 "src/syn.y"
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
#line 2950 "src/syn.tab.c"
    break;

  case 11: /* var_declaration: unq_declaration ';'  */
#line 206 "src/syn.y"
                      {
      // $$ = create_node(VARIABLE_DECLARATION);
      (yyval.node) = (yyvsp[-1].node);
      // add_tree_node($$, $1);
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 2961 "src/syn.tab.c"
    break;

  case 12: /* unq_declaration: type ID  */
#line 215 "src/syn.y"
          {
      (yyval.node) = create_node(UNIQUE_DECLARATION);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_token_node((yyval.node), &(yyvsp[0].token), IDENTIFIER);
      add_table_node((yyvsp[0].token).lexeme, (yyvsp[-1].node), idx);
      idx++;
    }
#line 2973 "src/syn.tab.c"
    break;

  case 13: /* parameters: lst_parameters  */
#line 225 "src/syn.y"
                 {
      (yyval.node) = (yyvsp[0].node);
      
      // $$ = create_node(PARAMETERS);
      // add_tree_node($$, $1);
    }
#line 2984 "src/syn.tab.c"
    break;

  case 14: /* parameters: %empty  */
#line 231 "src/syn.y"
           {
      (yyval.node) = create_node(PARAMETERS);
    }
#line 2992 "src/syn.tab.c"
    break;

  case 15: /* lst_parameters: unq_declaration ',' lst_parameters  */
#line 237 "src/syn.y"
                                      {
      (yyval.node) = create_node(LIST_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$2, COMMA);
      add_tree_node((yyval.node), (yyvsp[0].node));

      set_P_table((yyvsp[-2].node));
      set_amount_params(func_name, get_amount_params((yyvsp[-2].node)));
    }
#line 3006 "src/syn.tab.c"
    break;

  case 16: /* lst_parameters: unq_declaration  */
#line 246 "src/syn.y"
                    {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(LIST_PARAMETERS);
      // add_tree_node($$, $1);

      set_P_table((yyvsp[0].node));
      set_amount_params(func_name, get_amount_params((yyvsp[0].node)));
    }
#line 3019 "src/syn.tab.c"
    break;

  case 17: /* calling_parameters: lst_calling_parameters  */
#line 257 "src/syn.y"
                         {
      (yyval.node) = create_node(CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3028 "src/syn.tab.c"
    break;

  case 18: /* calling_parameters: %empty  */
#line 261 "src/syn.y"
           {
      (yyval.node) = create_node(CALLING_PARAMETERS);
    }
#line 3036 "src/syn.tab.c"
    break;

  case 19: /* lst_calling_parameters: operation ',' lst_calling_parameters  */
#line 267 "src/syn.y"
                                       {
      (yyval.node) = create_node(LIST_CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$2, COMMA);
      add_tree_node((yyval.node), (yyvsp[0].node));
      calling_params_counter += 1;
    }
#line 3048 "src/syn.tab.c"
    break;

  case 20: /* lst_calling_parameters: operation  */
#line 274 "src/syn.y"
              {
      (yyval.node) = create_node(LIST_CALLING_PARAMETERS);
      add_tree_node((yyval.node), (yyvsp[0].node));
      calling_params_counter += 1;
    }
#line 3058 "src/syn.tab.c"
    break;

  case 21: /* block_commands: command block_commands  */
#line 282 "src/syn.y"
                          {
      (yyval.node) = create_node(BLOCK_COMMANDS);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3068 "src/syn.tab.c"
    break;

  case 22: /* block_commands: command  */
#line 287 "src/syn.y"
            {
    (yyval.node) = (yyvsp[0].node);
  }
#line 3076 "src/syn.tab.c"
    break;

  case 23: /* command: var_declaration  */
#line 293 "src/syn.y"
                  {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3086 "src/syn.tab.c"
    break;

  case 24: /* command: init_variable  */
#line 298 "src/syn.y"
                  {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3096 "src/syn.tab.c"
    break;

  case 25: /* command: conditional_stmt  */
#line 303 "src/syn.y"
                     {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3106 "src/syn.tab.c"
    break;

  case 26: /* command: return_stmt  */
#line 308 "src/syn.y"
                {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3116 "src/syn.tab.c"
    break;

  case 27: /* command: iteration  */
#line 313 "src/syn.y"
              {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3126 "src/syn.tab.c"
    break;

  case 28: /* command: input  */
#line 318 "src/syn.y"
          {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3136 "src/syn.tab.c"
    break;

  case 29: /* command: output  */
#line 323 "src/syn.y"
           {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(COMMAND);
      // add_tree_node($$, $1);
    }
#line 3146 "src/syn.tab.c"
    break;

  case 30: /* $@2: %empty  */
#line 328 "src/syn.y"
    {increment_scope();}
#line 3152 "src/syn.tab.c"
    break;

  case 31: /* command: $@2 '{' block_commands '}'  */
#line 328 "src/syn.y"
                                                {
      (yyval.node) = create_node(COMMAND);
      // add_tree_token_node($$, &$2, OPEN_CURLY_BRACKET);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$4, CLOSE_CURLY_BRACKET);
    }
#line 3163 "src/syn.tab.c"
    break;

  case 32: /* command: operation ';'  */
#line 334 "src/syn.y"
                  { 
      (yyval.node) = create_node(COMMAND);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 3173 "src/syn.tab.c"
    break;

  case 33: /* command: error ';'  */
#line 340 "src/syn.y"
              {
      yyerrok;
      (yyval.node) = create_node(COMMAND); 
      syntax_errors++;
    }
#line 3183 "src/syn.tab.c"
    break;

  case 34: /* init_variable: init_stmt ';'  */
#line 348 "src/syn.y"
                {
      (yyval.node) = create_node(INIT_VARIABLE);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
    }
#line 3193 "src/syn.tab.c"
    break;

  case 35: /* init_stmt: ID '=' operation  */
#line 356 "src/syn.y"
                    {
      (yyval.node) = create_node(INIT_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), IDENTIFIER);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), ASSIGN);
      add_tree_node((yyval.node), (yyvsp[0].node));
      verify_existing_variable(&(yyvsp[-2].token));
    }
#line 3205 "src/syn.tab.c"
    break;

  case 36: /* conditional_stmt: IF_STMT '(' operation ')' command  */
#line 366 "src/syn.y"
                                                  {
      (yyval.node) = create_node(CONDITIONAL_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), IF);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3218 "src/syn.tab.c"
    break;

  case 37: /* conditional_stmt: IF_STMT '(' operation ')' command ELSE_STMT command  */
#line 374 "src/syn.y"
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
#line 3233 "src/syn.tab.c"
    break;

  case 38: /* return_stmt: RETURN_STM operation ';'  */
#line 387 "src/syn.y"
                            {
      (yyval.node) = create_node(RETURN_STMT);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), RETURN);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      // add_tree_token_node($$, &$3, SEMICOLON);
    }
#line 3244 "src/syn.tab.c"
    break;

  case 39: /* iteration: FOR_STMT '(' loop_condition ')' command  */
#line 396 "src/syn.y"
                                          {
      (yyval.node) = create_node(ITERATION_PROCESS);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), FOR);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3257 "src/syn.tab.c"
    break;

  case 40: /* loop_condition: update_stmt ';' stop_stmt ';' update_stmt  */
#line 407 "src/syn.y"
                                            {
      (yyval.node) = create_node(LOOP_CONDITION);
      add_tree_node((yyval.node), (yyvsp[-4].node));
      // add_tree_token_node($$, &$2, SEMICOLON);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, SEMICOLON);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3270 "src/syn.tab.c"
    break;

  case 41: /* update_stmt: init_stmt  */
#line 418 "src/syn.y"
            {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(UPDATE_STMT);
      // add_tree_node($$, $1);
    }
#line 3280 "src/syn.tab.c"
    break;

  case 42: /* update_stmt: %empty  */
#line 423 "src/syn.y"
           {
      (yyval.node) = create_node(UPDATE_STMT);
    }
#line 3288 "src/syn.tab.c"
    break;

  case 43: /* stop_stmt: operation  */
#line 429 "src/syn.y"
            {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(STOP_STMT);
      // add_tree_node($$, $1);
    }
#line 3298 "src/syn.tab.c"
    break;

  case 44: /* stop_stmt: %empty  */
#line 434 "src/syn.y"
           {
      (yyval.node) = create_node(STOP_STMT);
    }
#line 3306 "src/syn.tab.c"
    break;

  case 45: /* output: OUTPUT_WRITE '(' operation ')' ';'  */
#line 440 "src/syn.y"
                                      {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITE);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3319 "src/syn.tab.c"
    break;

  case 46: /* output: OUTPUT_WRITELN '(' operation ')' ';'  */
#line 448 "src/syn.y"
                                         {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITELN);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3332 "src/syn.tab.c"
    break;

  case 47: /* output: OUTPUT_WRITE '(' STRING ')' ';'  */
#line 456 "src/syn.y"
                                    {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITELN);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), STRING);
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3345 "src/syn.tab.c"
    break;

  case 48: /* output: OUTPUT_WRITELN '(' STRING ')' ';'  */
#line 464 "src/syn.y"
                                      {
      (yyval.node) = create_node(OUTPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), WRITELN);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_token_node((yyval.node), &(yyvsp[-2].token), STRING);
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3358 "src/syn.tab.c"
    break;

  case 49: /* input: INPUT_READ '(' operation ')' ';'  */
#line 475 "src/syn.y"
                                   {
      (yyval.node) = create_node(INPUT_OPERATION);
      add_tree_token_node((yyval.node), &(yyvsp[-4].token), READ);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node($$, &$5, SEMICOLON);
    }
#line 3371 "src/syn.tab.c"
    break;

  case 50: /* $@3: %empty  */
#line 486 "src/syn.y"
          {calling_params_counter = 0;}
#line 3377 "src/syn.tab.c"
    break;

  case 51: /* $@4: %empty  */
#line 486 "src/syn.y"
                                                           {verify_amount_params((yyvsp[0].node), &(yyvsp[-3].token));}
#line 3383 "src/syn.tab.c"
    break;

  case 52: /* func_calling: ID '(' $@3 calling_parameters $@4 ')'  */
#line 486 "src/syn.y"
                                                                                                 {
      (yyval.node) = create_node(FUNCTION_CALLING);
      add_tree_token_node((yyval.node), &(yyvsp[-5].token), IDENTIFIER);
      // add_tree_token_node($$, &$2, OPEN_PARENTHESES);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      // add_tree_token_node($$, &$4, CLOSE_PARENTHESES);      
      verify_existing_function(&(yyvsp[-5].token));
    }
#line 3396 "src/syn.tab.c"
    break;

  case 53: /* expression: func_calling  */
#line 497 "src/syn.y"
               {
    (yyval.node) = (yyvsp[0].node);
    // $$ = create_node(EXPRESSION);
    // add_tree_node($$, $1);
    }
#line 3406 "src/syn.tab.c"
    break;

  case 54: /* expression: single_operation  */
#line 502 "src/syn.y"
                     {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(EXPRESSION);
      // add_tree_node($$, $1);
    }
#line 3416 "src/syn.tab.c"
    break;

  case 55: /* expression: const  */
#line 507 "src/syn.y"
          {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(EXPRESSION);
      // add_tree_node($$, $1);
    }
#line 3426 "src/syn.tab.c"
    break;

  case 56: /* expression: iden  */
#line 512 "src/syn.y"
         {
    (yyval.node) = (yyvsp[0].node);
  }
#line 3434 "src/syn.tab.c"
    break;

  case 57: /* expression: '(' operation ')'  */
#line 515 "src/syn.y"
                      {
    (yyval.node) = (yyvsp[-1].node);
  }
#line 3442 "src/syn.tab.c"
    break;

  case 58: /* iden: ID  */
#line 521 "src/syn.y"
     {
      (yyval.node) = create_node(IDEN);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), IDENTIFIER);
      verify_existing_variable(&(yyvsp[0].token));
    }
#line 3452 "src/syn.tab.c"
    break;

  case 59: /* const: number  */
#line 529 "src/syn.y"
         {
    (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(CONSTANT);
      // add_tree_node($$, $1);
    }
#line 3462 "src/syn.tab.c"
    break;

  case 60: /* const: NIL_CNST  */
#line 534 "src/syn.y"
             {
      (yyval.node) = create_node(CONSTANT);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NIL);
    }
#line 3471 "src/syn.tab.c"
    break;

  case 61: /* number: NUM_INT  */
#line 541 "src/syn.y"
          {
      (yyval.node) = create_node(NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NUMBER_INT);
    }
#line 3480 "src/syn.tab.c"
    break;

  case 62: /* number: NUM_FLOAT  */
#line 545 "src/syn.y"
              {
      (yyval.node) = create_node(NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), NUMBER_FLOAT);
    }
#line 3489 "src/syn.tab.c"
    break;

  case 63: /* type: type_lst  */
#line 552 "src/syn.y"
            {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(TYPE);
      // add_tree_node($$, $1);
    }
#line 3499 "src/syn.tab.c"
    break;

  case 64: /* type: type_number  */
#line 557 "src/syn.y"
                 {
    (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(TYPE);
      // add_tree_node($$, $1);
    }
#line 3509 "src/syn.tab.c"
    break;

  case 65: /* type_lst: type_number T_LIST  */
#line 565 "src/syn.y"
                       {
      (yyval.node) = create_node(TYPE_LIST);
      add_tree_node((yyval.node), (yyvsp[-1].node));
      add_tree_token_node((yyval.node), &(yyvsp[0].token), LIST);
    }
#line 3519 "src/syn.tab.c"
    break;

  case 66: /* type_number: T_INT  */
#line 573 "src/syn.y"
        {
      (yyval.node) = create_node(TYPE_NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), INT);
    }
#line 3528 "src/syn.tab.c"
    break;

  case 67: /* type_number: T_FLOAT  */
#line 577 "src/syn.y"
            {
      (yyval.node) = create_node(TYPE_NUMBER);
      add_tree_token_node((yyval.node), &(yyvsp[0].token), FLOAT);
    }
#line 3537 "src/syn.tab.c"
    break;

  case 68: /* operation: lst_binary  */
#line 584 "src/syn.y"
             {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(OPERATION);
      // add_tree_node($$, $1);
    }
#line 3547 "src/syn.tab.c"
    break;

  case 69: /* operation: operation GREATER operation  */
#line 589 "src/syn.y"
                                 {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), GT_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3558 "src/syn.tab.c"
    break;

  case 70: /* operation: operation GREATER_EQ operation  */
#line 595 "src/syn.y"
                                    {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), GE_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3569 "src/syn.tab.c"
    break;

  case 71: /* operation: operation LESS operation  */
#line 601 "src/syn.y"
                              {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), LT_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3580 "src/syn.tab.c"
    break;

  case 72: /* operation: operation LESS_EQ operation  */
#line 607 "src/syn.y"
                                 {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), LE_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3591 "src/syn.tab.c"
    break;

  case 73: /* operation: operation EQUAL operation  */
#line 613 "src/syn.y"
                               {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), EQ_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3602 "src/syn.tab.c"
    break;

  case 74: /* operation: operation NOT_EQ operation  */
#line 619 "src/syn.y"
                                {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), NE_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3613 "src/syn.tab.c"
    break;

  case 75: /* operation: operation AND operation  */
#line 625 "src/syn.y"
                            {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), AND_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3624 "src/syn.tab.c"
    break;

  case 76: /* operation: operation OR operation  */
#line 631 "src/syn.y"
                           {
      (yyval.node) = create_node(OPERATION);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), OR_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3635 "src/syn.tab.c"
    break;

  case 77: /* single_operation: arith_single  */
#line 640 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(SINGLE_OPERATION);
      // add_tree_node($$, $1);
    }
#line 3645 "src/syn.tab.c"
    break;

  case 78: /* single_operation: lst_single  */
#line 645 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(SINGLE_OPERATION);
      // add_tree_node($$, $1);
    }
#line 3655 "src/syn.tab.c"
    break;

  case 79: /* single_operation: '!' expression  */
#line 650 "src/syn.y"
                   {
    (yyval.node) = create_node(SINGLE_OPERATION);
    add_tree_token_node((yyval.node), &(yyvsp[-1].token), NOT_OR_TAIL);
    add_tree_node((yyval.node), (yyvsp[0].node));
  }
#line 3665 "src/syn.tab.c"
    break;

  case 80: /* arith_binary: arith_binary '+' term  */
#line 658 "src/syn.y"
                        {
      (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), ADD_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
      // convert_numbers($1, $3, '+');
    }
#line 3677 "src/syn.tab.c"
    break;

  case 81: /* arith_binary: arith_binary '-' term  */
#line 665 "src/syn.y"
                          {
      (yyval.node) = create_node(ARITHMETIC_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MINUS_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3688 "src/syn.tab.c"
    break;

  case 82: /* arith_binary: term  */
#line 671 "src/syn.y"
         {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(ARITHMETIC_BINARY);
      // add_tree_node($$, $1);
    }
#line 3698 "src/syn.tab.c"
    break;

  case 83: /* term: term '*' expression  */
#line 679 "src/syn.y"
                      {
      (yyval.node) = create_node(TERM);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MULTIPLY_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3709 "src/syn.tab.c"
    break;

  case 84: /* term: term '/' expression  */
#line 685 "src/syn.y"
                        {
      (yyval.node) = create_node(TERM);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), DIVISION_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3720 "src/syn.tab.c"
    break;

  case 85: /* term: expression  */
#line 691 "src/syn.y"
               {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(TERM);
      // add_tree_node($$, $1);
    }
#line 3730 "src/syn.tab.c"
    break;

  case 86: /* arith_single: '+' expression  */
#line 699 "src/syn.y"
                 {
    (yyval.node) = create_node(ARITHMETIC_SINGLE);
    add_tree_token_node((yyval.node), &(yyvsp[-1].token), ADD_OP);
    add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3740 "src/syn.tab.c"
    break;

  case 87: /* arith_single: '-' expression  */
#line 704 "src/syn.y"
                   {
      (yyval.node) = create_node(ARITHMETIC_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MINUS_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3750 "src/syn.tab.c"
    break;

  case 88: /* lst_single: '%' expression  */
#line 712 "src/syn.y"
                 {
      (yyval.node) = create_node(LIST_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), POP_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3760 "src/syn.tab.c"
    break;

  case 89: /* lst_single: '?' expression  */
#line 717 "src/syn.y"
                   {
      (yyval.node) = create_node(LIST_SINGLE);
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), HEAD_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3770 "src/syn.tab.c"
    break;

  case 90: /* lst_binary: lst_binary FILTER lst_binary  */
#line 725 "src/syn.y"
                               {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), FILTER_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3781 "src/syn.tab.c"
    break;

  case 91: /* lst_binary: lst_binary MAP lst_binary  */
#line 731 "src/syn.y"
                              {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), MAP_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3792 "src/syn.tab.c"
    break;

  case 92: /* lst_binary: lst_binary ':' lst_binary  */
#line 737 "src/syn.y"
                              {
      (yyval.node) = create_node(LIST_BINARY);
      add_tree_node((yyval.node), (yyvsp[-2].node));
      add_tree_token_node((yyval.node), &(yyvsp[-1].token), CONSTRUCTOR_OP);
      add_tree_node((yyval.node), (yyvsp[0].node));
    }
#line 3803 "src/syn.tab.c"
    break;

  case 93: /* lst_binary: arith_binary  */
#line 743 "src/syn.y"
                 {
      (yyval.node) = (yyvsp[0].node);
      // $$ = create_node(OPERATION);
      // add_tree_node($$, $1);
    }
#line 3813 "src/syn.tab.c"
    break;


#line 3817 "src/syn.tab.c"

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

#line 750 "src/syn.y"

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
