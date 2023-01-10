/* A Bison parser, made by GNU Bison 3.8.2.  */

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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"


#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "utilitar.h"


#define IS_TYPE 1
#define NOT_TYPE 0
#define IS_ARRAY 1
#define NOT_ARRAY 0
#define IS_CONST 1
#define NOT_CONST 0

#define UNDEFINED "N/A"

#define GLOBAL_SCOPE "global"
#define TYPES_SCOPE "types"
#define FUNCTIONS_SCOPE "functions"
#define MAIN_SCOPE "main"


extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern void yyerror();
extern int yylex();



struct symbol_table symbols[100]; // aici vor fi stocate variabilele si array-urile
int index_symbol = 0;


char SCOPE[50] = "global"; // la inceput intram in global(default)
char UNDEFINED_ARRAY[200][1000]={"N/A"};










#line 120 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    START = 258,                   /* START  */
    GLOBAL = 259,                  /* GLOBAL  */
    END_GLOBAL = 260,              /* END_GLOBAL  */
    FUNCTIONS = 261,               /* FUNCTIONS  */
    END_FUNCTIONS = 262,           /* END_FUNCTIONS  */
    TYPES = 263,                   /* TYPES  */
    END_TYPES = 264,               /* END_TYPES  */
    MEMBERS = 265,                 /* MEMBERS  */
    METHODS = 266,                 /* METHODS  */
    MAIN = 267,                    /* MAIN  */
    END_MAIN = 268,                /* END_MAIN  */
    END = 269,                     /* END  */
    DATA_TYPE = 270,               /* DATA_TYPE  */
    CONST = 271,                   /* CONST  */
    ACCES = 272,                   /* ACCES  */
    IDENTIFIER = 273,              /* IDENTIFIER  */
    INTEGER_VALUE = 274,           /* INTEGER_VALUE  */
    BOOL_VALUE = 275,              /* BOOL_VALUE  */
    FLOAT_VALUE = 276,             /* FLOAT_VALUE  */
    STRING_VALUE = 277,            /* STRING_VALUE  */
    CHAR_VALUE = 278,              /* CHAR_VALUE  */
    EVAL = 279,                    /* EVAL  */
    TYPEOF = 280,                  /* TYPEOF  */
    IF = 281,                      /* IF  */
    ELSE = 282,                    /* ELSE  */
    FOR = 283,                     /* FOR  */
    WHILE = 284,                   /* WHILE  */
    RETURN = 285,                  /* RETURN  */
    PRINT = 286,                   /* PRINT  */
    ASSIGN = 287,                  /* ASSIGN  */
    ARITHMETIC_OPERATOR = 288,     /* ARITHMETIC_OPERATOR  */
    RELATIONAL_OPERATOR = 289,     /* RELATIONAL_OPERATOR  */
    SEMICOLON = 290,               /* SEMICOLON  */
    NOT = 291,                     /* NOT  */
    COMMA = 292,                   /* COMMA  */
    LSB = 293,                     /* LSB  */
    RSB = 294,                     /* RSB  */
    LCB = 295,                     /* LCB  */
    RCB = 296,                     /* RCB  */
    RPB = 297,                     /* RPB  */
    LPB = 298,                     /* LPB  */
    BOOLEAN_OPERATOR = 299,        /* BOOLEAN_OPERATOR  */
    TYPE = 300                     /* TYPE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define START 258
#define GLOBAL 259
#define END_GLOBAL 260
#define FUNCTIONS 261
#define END_FUNCTIONS 262
#define TYPES 263
#define END_TYPES 264
#define MEMBERS 265
#define METHODS 266
#define MAIN 267
#define END_MAIN 268
#define END 269
#define DATA_TYPE 270
#define CONST 271
#define ACCES 272
#define IDENTIFIER 273
#define INTEGER_VALUE 274
#define BOOL_VALUE 275
#define FLOAT_VALUE 276
#define STRING_VALUE 277
#define CHAR_VALUE 278
#define EVAL 279
#define TYPEOF 280
#define IF 281
#define ELSE 282
#define FOR 283
#define WHILE 284
#define RETURN 285
#define PRINT 286
#define ASSIGN 287
#define ARITHMETIC_OPERATOR 288
#define RELATIONAL_OPERATOR 289
#define SEMICOLON 290
#define NOT 291
#define COMMA 292
#define LSB 293
#define RSB 294
#define LCB 295
#define RCB 296
#define RPB 297
#define LPB 298
#define BOOLEAN_OPERATOR 299
#define TYPE 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 51 "parser.y"

      
int int_value;
char* string_value;
float float_value;

struct variableInformation* varInfo;


#line 273 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_START = 3,                      /* START  */
  YYSYMBOL_GLOBAL = 4,                     /* GLOBAL  */
  YYSYMBOL_END_GLOBAL = 5,                 /* END_GLOBAL  */
  YYSYMBOL_FUNCTIONS = 6,                  /* FUNCTIONS  */
  YYSYMBOL_END_FUNCTIONS = 7,              /* END_FUNCTIONS  */
  YYSYMBOL_TYPES = 8,                      /* TYPES  */
  YYSYMBOL_END_TYPES = 9,                  /* END_TYPES  */
  YYSYMBOL_MEMBERS = 10,                   /* MEMBERS  */
  YYSYMBOL_METHODS = 11,                   /* METHODS  */
  YYSYMBOL_MAIN = 12,                      /* MAIN  */
  YYSYMBOL_END_MAIN = 13,                  /* END_MAIN  */
  YYSYMBOL_END = 14,                       /* END  */
  YYSYMBOL_DATA_TYPE = 15,                 /* DATA_TYPE  */
  YYSYMBOL_CONST = 16,                     /* CONST  */
  YYSYMBOL_ACCES = 17,                     /* ACCES  */
  YYSYMBOL_IDENTIFIER = 18,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER_VALUE = 19,             /* INTEGER_VALUE  */
  YYSYMBOL_BOOL_VALUE = 20,                /* BOOL_VALUE  */
  YYSYMBOL_FLOAT_VALUE = 21,               /* FLOAT_VALUE  */
  YYSYMBOL_STRING_VALUE = 22,              /* STRING_VALUE  */
  YYSYMBOL_CHAR_VALUE = 23,                /* CHAR_VALUE  */
  YYSYMBOL_EVAL = 24,                      /* EVAL  */
  YYSYMBOL_TYPEOF = 25,                    /* TYPEOF  */
  YYSYMBOL_IF = 26,                        /* IF  */
  YYSYMBOL_ELSE = 27,                      /* ELSE  */
  YYSYMBOL_FOR = 28,                       /* FOR  */
  YYSYMBOL_WHILE = 29,                     /* WHILE  */
  YYSYMBOL_RETURN = 30,                    /* RETURN  */
  YYSYMBOL_PRINT = 31,                     /* PRINT  */
  YYSYMBOL_ASSIGN = 32,                    /* ASSIGN  */
  YYSYMBOL_ARITHMETIC_OPERATOR = 33,       /* ARITHMETIC_OPERATOR  */
  YYSYMBOL_RELATIONAL_OPERATOR = 34,       /* RELATIONAL_OPERATOR  */
  YYSYMBOL_SEMICOLON = 35,                 /* SEMICOLON  */
  YYSYMBOL_NOT = 36,                       /* NOT  */
  YYSYMBOL_COMMA = 37,                     /* COMMA  */
  YYSYMBOL_LSB = 38,                       /* LSB  */
  YYSYMBOL_RSB = 39,                       /* RSB  */
  YYSYMBOL_LCB = 40,                       /* LCB  */
  YYSYMBOL_RCB = 41,                       /* RCB  */
  YYSYMBOL_RPB = 42,                       /* RPB  */
  YYSYMBOL_LPB = 43,                       /* LPB  */
  YYSYMBOL_BOOLEAN_OPERATOR = 44,          /* BOOLEAN_OPERATOR  */
  YYSYMBOL_TYPE = 45,                      /* TYPE  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_program = 47,                   /* program  */
  YYSYMBOL_continut = 48,                  /* continut  */
  YYSYMBOL_block = 49,                     /* block  */
  YYSYMBOL_global_block = 50,              /* global_block  */
  YYSYMBOL_declaratii_variabile = 51,      /* declaratii_variabile  */
  YYSYMBOL_declaratie_variabila = 52,      /* declaratie_variabila  */
  YYSYMBOL_value = 53,                     /* value  */
  YYSYMBOL_array_values = 54,              /* array_values  */
  YYSYMBOL_functions_block = 55,           /* functions_block  */
  YYSYMBOL_functions_decl = 56,            /* functions_decl  */
  YYSYMBOL_func_decl = 57,                 /* func_decl  */
  YYSYMBOL_function_params = 58,           /* function_params  */
  YYSYMBOL_func_param = 59,                /* func_param  */
  YYSYMBOL_function_call = 60,             /* function_call  */
  YYSYMBOL_function_arguments = 61,        /* function_arguments  */
  YYSYMBOL_control_statement = 62,         /* control_statement  */
  YYSYMBOL_conditions = 63,                /* conditions  */
  YYSYMBOL_condition = 64,                 /* condition  */
  YYSYMBOL_statements = 65,                /* statements  */
  YYSYMBOL_statement = 66,                 /* statement  */
  YYSYMBOL_assignment = 67,                /* assignment  */
  YYSYMBOL_expression = 68,                /* expression  */
  YYSYMBOL_typeof_arguments = 69,          /* typeof_arguments  */
  YYSYMBOL_types_block = 70,               /* types_block  */
  YYSYMBOL_type = 71,                      /* type  */
  YYSYMBOL_inner_content = 72,             /* inner_content  */
  YYSYMBOL_main_block = 73                 /* main_block  */
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
typedef yytype_uint8 yy_state_t;

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

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   516

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  238

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   152,   152,   156,   157,   161,   162,   163,   164,   169,
     174,   175,   179,   183,   186,   187,   190,   193,   197,   200,
     206,   213,   214,   215,   216,   217,   221,   222,   228,   231,
     232,   235,   236,   237,   238,   241,   242,   245,   246,   247,
     248,   249,   253,   254,   258,   259,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   280,   281,
     282,   283,   287,   292,   293,   297,   298,   299,   300,   301,
     302,   303,   304,   309,   310,   311,   315,   316,   317,   318,
     319,   320,   321,   322,   326,   329,   330,   333,   334,   337,
     338,   339,   340,   341,   342,   343,   344,   351,   352
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "START", "GLOBAL",
  "END_GLOBAL", "FUNCTIONS", "END_FUNCTIONS", "TYPES", "END_TYPES",
  "MEMBERS", "METHODS", "MAIN", "END_MAIN", "END", "DATA_TYPE", "CONST",
  "ACCES", "IDENTIFIER", "INTEGER_VALUE", "BOOL_VALUE", "FLOAT_VALUE",
  "STRING_VALUE", "CHAR_VALUE", "EVAL", "TYPEOF", "IF", "ELSE", "FOR",
  "WHILE", "RETURN", "PRINT", "ASSIGN", "ARITHMETIC_OPERATOR",
  "RELATIONAL_OPERATOR", "SEMICOLON", "NOT", "COMMA", "LSB", "RSB", "LCB",
  "RCB", "RPB", "LPB", "BOOLEAN_OPERATOR", "TYPE", "$accept", "program",
  "continut", "block", "global_block", "declaratii_variabile",
  "declaratie_variabila", "value", "array_values", "functions_block",
  "functions_decl", "func_decl", "function_params", "func_param",
  "function_call", "function_arguments", "control_statement", "conditions",
  "condition", "statements", "statement", "assignment", "expression",
  "typeof_arguments", "types_block", "type", "inner_content", "main_block", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-126)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      45,   105,    77,    26,    80,    97,   459,   148,  -126,  -126,
     100,    83,   109,   123,    26,   118,   132,   103,    80,  -126,
     121,    73,  -126,    61,   129,   133,   150,   163,   184,   187,
     167,   199,  -126,  -126,   204,   106,  -126,  -126,    -2,   180,
     211,  -126,   222,  -126,   203,  -126,  -126,    10,  -126,  -126,
     242,   194,   244,   473,   240,  -126,   122,    15,   122,   168,
    -126,  -126,  -126,  -126,  -126,   168,     0,   232,  -126,  -126,
      47,     2,    80,  -126,   224,   -21,   231,    11,  -126,  -126,
    -126,  -126,  -126,   194,  -126,  -126,   245,   236,  -126,    22,
     245,   238,   239,   241,   122,    -4,  -126,    -8,    64,   247,
     248,   115,   249,  -126,   254,   264,   168,   280,   284,   282,
     269,    30,  -126,    80,    16,    80,  -126,   194,  -126,   283,
     292,    72,   194,   285,   194,  -126,   281,   294,   122,   124,
      24,   274,   122,   194,   300,   277,   122,   287,   299,   303,
     296,  -126,   309,   314,  -126,   155,   159,   310,    80,    80,
     245,   311,  -126,   298,  -126,  -126,   194,   245,  -126,  -126,
     157,  -126,   179,  -126,   245,   320,   313,    62,   207,  -126,
     316,   168,     5,  -126,   194,   225,  -126,  -126,   243,    80,
    -126,   245,  -126,   328,   261,   279,   345,  -126,   297,   168,
    -126,    75,   326,  -126,   176,   194,  -126,   194,   315,   330,
     341,  -126,   333,   329,  -126,    92,   168,  -126,  -126,   331,
     186,   209,   194,   351,   343,  -126,   346,  -126,  -126,  -126,
     332,   340,   212,  -126,   369,   387,   405,  -126,  -126,   347,
    -126,  -126,   423,  -126,   441,  -126,  -126,  -126
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     3,     1,
       0,     0,     0,     0,     9,     0,     0,     0,    28,    29,
       0,     0,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    69,    97,     0,     0,     2,     4,    12,     0,
       0,     5,     0,    10,     0,     6,    30,     0,     7,    86,
       0,     0,     0,     0,     0,    84,     0,     0,     0,     0,
      66,    67,    65,     8,    98,     0,     0,    14,    20,    11,
       0,    93,    95,    88,     0,     0,     0,    77,    21,    22,
      25,    23,    24,     0,    76,    81,    73,     0,    43,     0,
      44,     0,     0,     0,     0,     0,    58,     0,     0,     0,
       0,     0,     0,    13,     0,    17,     0,     0,     0,     0,
       0,     0,    35,    92,    94,    96,    87,     0,    68,     0,
       0,     0,     0,     0,     0,    42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
       0,    15,    37,     0,    41,     0,     0,     0,    91,    90,
      75,    79,    80,     0,    82,    83,     0,    45,    71,    70,
       0,    60,     0,    61,    62,     0,     0,     0,     0,    72,
       0,     0,     0,    38,     0,     0,    63,    36,     0,    89,
      78,    74,    59,    47,     0,     0,     0,    53,     0,     0,
      26,     0,     0,    39,     0,     0,    64,     0,     0,     0,
      46,    57,     0,     0,    52,     0,     0,    19,    40,     0,
       0,     0,     0,     0,     0,    56,     0,    18,    27,    34,
       0,     0,     0,    51,     0,     0,     0,    32,    33,     0,
      49,    50,     0,    55,     0,    31,    48,    54
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,  -126,  -126,   382,  -126,   319,     9,   -51,   202,  -126,
     -57,   -12,  -126,   253,   -49,  -126,  -126,   -42,  -126,  -125,
      -6,   -47,   -48,  -126,  -126,   380,  -126,  -126
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     7,     8,    13,    14,    30,    84,   191,    17,
      18,    19,   111,   112,    31,    89,    32,    95,    96,   175,
     176,    34,    97,    92,    21,    22,    74,    35
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      33,    76,    85,    86,    85,    90,    46,    85,   102,    85,
     100,   117,    15,   113,   103,   115,   101,    10,    11,   104,
      71,    72,    53,    42,   192,   122,   133,   149,   119,    64,
      65,    10,    11,    98,    85,   121,    66,   184,   131,   105,
     132,    10,    11,   188,   193,    85,   130,    12,     1,   120,
      99,    73,   129,   198,    53,   141,   148,   122,   133,   124,
     202,    12,   107,   108,   125,   109,   154,   146,    85,   150,
     152,    12,   147,    85,   155,    85,   157,     9,    50,    85,
      15,   134,    48,    85,    85,   164,   160,    85,   224,   110,
     163,    20,   179,    51,   167,    16,    51,   186,    39,    52,
     232,   234,    52,    46,    53,   122,   132,    85,   181,     3,
      45,     4,   206,     5,   154,    20,   207,     6,    38,    63,
     190,    10,    11,    42,    23,    85,   194,    40,    41,   206,
      24,    25,    26,   217,    27,    28,    46,    29,   190,   203,
      77,    78,    79,    80,    81,    82,    85,   210,    85,   211,
      44,    12,     3,    43,     4,   218,     5,   137,    93,   132,
       6,    47,    36,    85,   222,    94,   161,    46,   132,   196,
      10,    11,    54,    23,   107,   108,    55,   109,   196,    24,
      25,    26,   196,    27,    28,   174,    29,    78,    79,    80,
      81,    82,   196,    56,    10,    11,   196,    23,    67,   182,
      12,   132,    60,    24,    25,    26,    57,    27,    28,   122,
      29,   209,    77,    78,    79,    80,    81,    82,   196,   122,
     183,   220,    10,    11,    12,    23,   196,    58,   196,    68,
      59,    24,    25,    26,    61,    27,    28,    83,    29,    62,
      10,    11,   122,    23,   221,   122,    70,   229,   187,    24,
      25,    26,    12,    27,    28,   195,    29,    69,    10,    11,
      75,    23,    91,    87,   106,   116,   118,    24,    25,    26,
      12,    27,    28,   197,    29,   123,    10,    11,   122,    23,
     126,   127,   135,   136,   128,    24,    25,    26,    12,    27,
      28,   138,    29,   139,    10,    11,   140,    23,   142,   143,
     144,   151,   200,    24,    25,    26,    12,    27,    28,   145,
      29,   153,    10,    11,   162,    23,   158,   156,   165,   166,
     201,    24,    25,    26,    12,    27,    28,   168,    29,   159,
      10,    11,   173,    23,   169,   170,   171,   180,   204,    24,
      25,    26,    12,    27,    28,   212,    29,   172,    10,    11,
     178,    23,   117,   185,    53,   199,   189,    24,    25,    26,
      12,    27,    28,    98,    29,   208,    10,    11,   214,    23,
     213,   216,   219,   227,   215,    24,    25,    26,    12,    27,
      28,   228,    29,   225,    10,    11,   226,    23,   235,    37,
     114,   205,   223,    24,    25,    26,    12,    27,    28,   177,
      29,    49,    10,    11,     0,    23,     0,     0,     0,     0,
     230,    24,    25,    26,    12,    27,    28,     0,    29,     0,
      10,    11,     0,    23,     0,     0,     0,     0,   231,    24,
      25,    26,    12,    27,    28,     0,    29,     0,    10,    11,
       0,    23,     0,     0,     0,     0,   233,    24,    25,    26,
      12,    27,    28,     0,    29,     0,    10,    11,     0,    23,
       0,     0,     0,     0,   236,    24,    25,    26,    12,    27,
      28,     0,    29,     0,    10,    11,     0,    23,     0,     0,
       0,     0,   237,    24,    25,    26,    12,    27,    28,     0,
      29,    77,    78,    79,    80,    81,    82,     0,     0,     0,
       0,     0,     0,     0,    12,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    83
};

static const yytype_int16 yycheck[] =
{
       6,    50,    51,    51,    53,    53,    18,    56,    59,    58,
      57,    32,     3,    11,    65,    72,    58,    15,    16,    19,
      10,    11,    43,    14,    19,    33,    34,    11,    17,    35,
      32,    15,    16,    18,    83,    83,    38,   162,    42,    39,
      44,    15,    16,   168,    39,    94,    94,    45,     3,    38,
      35,    41,    94,   178,    43,   106,   113,    33,    34,    37,
     185,    45,    15,    16,    42,    18,    42,    37,   117,   117,
     119,    45,    42,   122,   122,   124,   124,     0,    17,   128,
      71,    17,     9,   132,   133,   133,   128,   136,   213,    42,
     132,    18,   149,    32,   136,    15,    32,    35,    15,    38,
     225,   226,    38,   115,    43,    33,    44,   156,   156,     4,
       7,     6,    37,     8,    42,    18,    41,    12,    18,    13,
     171,    15,    16,   114,    18,   174,   174,    18,     5,    37,
      24,    25,    26,    41,    28,    29,   148,    31,   189,   186,
      18,    19,    20,    21,    22,    23,   195,   195,   197,   197,
      18,    45,     4,    35,     6,   206,     8,    42,    36,    44,
      12,    40,    14,   212,   212,    43,    42,   179,    44,   175,
      15,    16,    43,    18,    15,    16,    43,    18,   184,    24,
      25,    26,   188,    28,    29,    30,    31,    19,    20,    21,
      22,    23,   198,    43,    15,    16,   202,    18,    18,    42,
      45,    44,    35,    24,    25,    26,    43,    28,    29,    33,
      31,    35,    18,    19,    20,    21,    22,    23,   224,    33,
      41,    35,    15,    16,    45,    18,   232,    43,   234,    18,
      43,    24,    25,    26,    35,    28,    29,    43,    31,    35,
      15,    16,    33,    18,    35,    33,    43,    35,    41,    24,
      25,    26,    45,    28,    29,    30,    31,    35,    15,    16,
      18,    18,    22,    19,    32,    41,    35,    24,    25,    26,
      45,    28,    29,    30,    31,    39,    15,    16,    33,    18,
      42,    42,    35,    35,    43,    24,    25,    26,    45,    28,
      29,    42,    31,    39,    15,    16,    32,    18,    18,    15,
      18,    18,    41,    24,    25,    26,    45,    28,    29,    40,
      31,    19,    15,    16,    40,    18,    35,    32,    18,    42,
      41,    24,    25,    26,    45,    28,    29,    40,    31,    35,
      15,    16,    18,    18,    35,    32,    40,    39,    41,    24,
      25,    26,    45,    28,    29,    30,    31,    38,    15,    16,
      40,    18,    32,    40,    43,    27,    40,    24,    25,    26,
      45,    28,    29,    18,    31,    39,    15,    16,    27,    18,
      40,    42,    41,    41,    41,    24,    25,    26,    45,    28,
      29,    41,    31,    40,    15,    16,    40,    18,    41,     7,
      71,   189,    41,    24,    25,    26,    45,    28,    29,   146,
      31,    21,    15,    16,    -1,    18,    -1,    -1,    -1,    -1,
      41,    24,    25,    26,    45,    28,    29,    -1,    31,    -1,
      15,    16,    -1,    18,    -1,    -1,    -1,    -1,    41,    24,
      25,    26,    45,    28,    29,    -1,    31,    -1,    15,    16,
      -1,    18,    -1,    -1,    -1,    -1,    41,    24,    25,    26,
      45,    28,    29,    -1,    31,    -1,    15,    16,    -1,    18,
      -1,    -1,    -1,    -1,    41,    24,    25,    26,    45,    28,
      29,    -1,    31,    -1,    15,    16,    -1,    18,    -1,    -1,
      -1,    -1,    41,    24,    25,    26,    45,    28,    29,    -1,
      31,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    47,     4,     6,     8,    12,    48,    49,     0,
      15,    16,    45,    50,    51,    52,    15,    55,    56,    57,
      18,    70,    71,    18,    24,    25,    26,    28,    29,    31,
      52,    60,    62,    66,    67,    73,    14,    49,    18,    15,
      18,     5,    52,    35,    18,     7,    57,    40,     9,    71,
      17,    32,    38,    43,    43,    43,    43,    43,    43,    43,
      35,    35,    35,    13,    66,    32,    38,    18,    18,    35,
      43,    10,    11,    41,    72,    18,    60,    18,    19,    20,
      21,    22,    23,    43,    53,    60,    68,    19,    42,    61,
      68,    22,    69,    36,    43,    63,    64,    68,    18,    35,
      67,    63,    53,    53,    19,    39,    32,    15,    16,    18,
      42,    58,    59,    11,    51,    56,    41,    32,    35,    17,
      38,    68,    33,    39,    37,    42,    42,    42,    43,    63,
      68,    42,    44,    34,    17,    35,    35,    42,    42,    39,
      32,    53,    18,    15,    18,    40,    37,    42,    56,    11,
      68,    18,    60,    19,    42,    68,    32,    68,    35,    35,
      63,    42,    40,    63,    68,    18,    42,    63,    40,    35,
      32,    40,    38,    18,    30,    65,    66,    59,    40,    56,
      39,    68,    42,    41,    65,    40,    35,    41,    65,    40,
      53,    54,    19,    39,    68,    30,    66,    30,    65,    27,
      41,    41,    65,    67,    41,    54,    37,    41,    39,    35,
      68,    68,    30,    40,    27,    41,    42,    41,    53,    41,
      35,    35,    68,    41,    65,    40,    40,    41,    41,    35,
      41,    41,    65,    41,    65,    41,    41,    41
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    49,    49,    50,
      51,    51,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    53,    53,    53,    53,    53,    54,    54,    55,    56,
      56,    57,    57,    57,    57,    58,    58,    59,    59,    59,
      59,    59,    60,    60,    61,    61,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    63,    63,
      63,    63,    64,    65,    65,    66,    66,    66,    66,    66,
      66,    66,    66,    67,    67,    67,    68,    68,    68,    68,
      68,    68,    68,    68,    69,    70,    70,    71,    71,    72,
      72,    72,    72,    72,    72,    72,    72,    73,    73
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     2,     3,     3,     3,     3,     1,
       2,     3,     2,     4,     3,     5,     5,     4,     9,     8,
       3,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       2,    11,    10,    10,     9,     1,     3,     2,     3,     4,
       5,     2,     4,     3,     1,     3,     7,     6,    11,    10,
      10,     9,     7,     6,    11,    10,     8,     7,     1,     4,
       3,     3,     3,     1,     2,     2,     2,     2,     4,     1,
       5,     5,     5,     3,     6,     5,     1,     1,     4,     3,
       3,     1,     3,     3,     0,     1,     2,     4,     3,     4,
       3,     3,     2,     1,     2,     1,     2,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* program: START continut END  */
#line 152 "parser.y"
                              {printf("Programul este corect sintactic!\n");}
#line 1530 "y.tab.c"
    break;

  case 5: /* block: GLOBAL global_block END_GLOBAL  */
#line 161 "parser.y"
                                       {strcpy(SCOPE,FUNCTIONS_SCOPE);}
#line 1536 "y.tab.c"
    break;

  case 6: /* block: FUNCTIONS functions_block END_FUNCTIONS  */
#line 162 "parser.y"
                                                {strcpy(SCOPE,TYPES_SCOPE);}
#line 1542 "y.tab.c"
    break;

  case 7: /* block: TYPES types_block END_TYPES  */
#line 163 "parser.y"
                                    {strcpy(SCOPE,MAIN_SCOPE);}
#line 1548 "y.tab.c"
    break;

  case 12: /* declaratie_variabila: DATA_TYPE IDENTIFIER  */
#line 179 "parser.y"
                                           {
      addVariable(SCOPE, symbols, NOT_TYPE, NOT_ARRAY, NOT_CONST, (yyvsp[-1].string_value), (yyvsp[0].string_value), UNDEFINED,UNDEFINED_ARRAY,0,0);
   /*ex: int a;*/
}
#line 1557 "y.tab.c"
    break;

  case 13: /* declaratie_variabila: DATA_TYPE IDENTIFIER ASSIGN value  */
#line 183 "parser.y"
                                             {
      addVariable(SCOPE, symbols, NOT_TYPE, NOT_ARRAY, NOT_CONST, (yyvsp[-3].string_value), (yyvsp[-2].string_value), (yyvsp[0].string_value),UNDEFINED_ARRAY,0,0);
}
#line 1565 "y.tab.c"
    break;

  case 14: /* declaratie_variabila: CONST DATA_TYPE IDENTIFIER  */
#line 186 "parser.y"
                                          {/*thows error*/ yyerror("const without value asociated!");}
#line 1571 "y.tab.c"
    break;

  case 15: /* declaratie_variabila: CONST DATA_TYPE IDENTIFIER ASSIGN value  */
#line 187 "parser.y"
                                                   {
      addVariable(SCOPE, symbols, NOT_TYPE, NOT_ARRAY, IS_CONST, (yyvsp[-3].string_value), (yyvsp[-2].string_value), (yyvsp[0].string_value), UNDEFINED_ARRAY,0,0);
}
#line 1579 "y.tab.c"
    break;

  case 16: /* declaratie_variabila: DATA_TYPE IDENTIFIER LSB INTEGER_VALUE RSB  */
#line 190 "parser.y"
                                                      {
      addVariable(SCOPE, symbols, NOT_TYPE, IS_ARRAY, NOT_CONST, (yyvsp[-4].string_value), (yyvsp[-3].string_value), UNDEFINED, UNDEFINED_ARRAY,(yyvsp[-1].int_value),111);
}
#line 1587 "y.tab.c"
    break;

  case 17: /* declaratie_variabila: DATA_TYPE IDENTIFIER LSB RSB  */
#line 193 "parser.y"
                                           {/*throws error array with no space allocated*/ yyerror("error array with no space allocated!");}
#line 1593 "y.tab.c"
    break;

  case 18: /* declaratie_variabila: DATA_TYPE IDENTIFIER LSB INTEGER_VALUE RSB ASSIGN LCB array_values RCB  */
#line 197 "parser.y"
                                                                                  {
      //addVariable(SCOPE, symbols, NOT_TYPE, IS_ARRAY, NOT_CONST, $1, $2, UNDEFINED, ,$4);
}
#line 1601 "y.tab.c"
    break;

  case 19: /* declaratie_variabila: DATA_TYPE IDENTIFIER LSB RSB ASSIGN LCB array_values RCB  */
#line 200 "parser.y"
                                                                    {
      //addVariable(SCOPE, symbols, NOT_TYPE, IS_ARRAY, NOT_CONST, $1, $2, UNDEFINED, ,0);
}
#line 1609 "y.tab.c"
    break;

  case 20: /* declaratie_variabila: TYPE IDENTIFIER IDENTIFIER  */
#line 206 "parser.y"
                                      {
      addVariable(SCOPE, symbols, IS_TYPE, NOT_ARRAY, NOT_CONST, (yyvsp[-1].string_value), (yyvsp[0].string_value), UNDEFINED, UNDEFINED_ARRAY,0,0);
}
#line 1617 "y.tab.c"
    break;

  case 21: /* value: INTEGER_VALUE  */
#line 213 "parser.y"
                      {(yyval.string_value) = strdup(yytext);}
#line 1623 "y.tab.c"
    break;

  case 22: /* value: BOOL_VALUE  */
#line 214 "parser.y"
                      {(yyval.string_value) = strdup(yytext);}
#line 1629 "y.tab.c"
    break;

  case 23: /* value: STRING_VALUE  */
#line 215 "parser.y"
                      {(yyval.string_value) = strdup(yytext);}
#line 1635 "y.tab.c"
    break;

  case 24: /* value: CHAR_VALUE  */
#line 216 "parser.y"
                      {(yyval.string_value) = strdup(yytext);}
#line 1641 "y.tab.c"
    break;

  case 25: /* value: FLOAT_VALUE  */
#line 217 "parser.y"
                      {(yyval.string_value) = strdup(yytext);}
#line 1647 "y.tab.c"
    break;

  case 71: /* statement: EVAL LPB STRING_VALUE RPB SEMICOLON  */
#line 303 "parser.y"
                                                {Eval((yyvsp[-2].string_value),yylineno);}
#line 1653 "y.tab.c"
    break;


#line 1657 "y.tab.c"

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
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

  return yyresult;
}

#line 356 "parser.y"





void yyerror(char * s){

printf("EROARE: %s LA LINIA : %d\n",s,yylineno);

}

int main(int argc, char** argv){

 /*  
extern int yydebug;
yydebug = 1;
*/

yyin=fopen(argv[1],"r");
yyparse();
return 0;

} 