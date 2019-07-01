/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "splparser.y" /* yacc.c:339  */

#include "data.h"
#include "spl.h"
#include "file.h"
#include "node.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#line 77 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ALIAS = 258,
    DEFINE = 259,
    DO = 260,
    ELSE = 261,
    ENDIF = 262,
    ENDWHILE = 263,
    IF = 264,
    RETURN = 265,
    IRETURN = 266,
    LOAD = 267,
    STORE = 268,
    THEN = 269,
    WHILE = 270,
    HALT = 271,
    REG = 272,
    NUM = 273,
    ASSIGNOP = 274,
    ARITHOP1 = 275,
    ARITHOP2 = 276,
    RELOP = 277,
    LOGOP = 278,
    NOTOP = 279,
    ID = 280,
    BREAK = 281,
    CONTINUE = 282,
    CHKPT = 283,
    READ = 284,
    READI = 285,
    PRINT = 286,
    STRING = 287,
    INLINE = 288,
    BACKUP = 289,
    RESTORE = 290,
    LOADI = 291,
    GOTO = 292,
    CALL = 293,
    ENCRYPT = 294,
    PORT = 295,
    MULTIPUSH = 296,
    MULTIPOP = 297,
    UMIN = 298
  };
#endif
/* Tokens.  */
#define ALIAS 258
#define DEFINE 259
#define DO 260
#define ELSE 261
#define ENDIF 262
#define ENDWHILE 263
#define IF 264
#define RETURN 265
#define IRETURN 266
#define LOAD 267
#define STORE 268
#define THEN 269
#define WHILE 270
#define HALT 271
#define REG 272
#define NUM 273
#define ASSIGNOP 274
#define ARITHOP1 275
#define ARITHOP2 276
#define RELOP 277
#define LOGOP 278
#define NOTOP 279
#define ID 280
#define BREAK 281
#define CONTINUE 282
#define CHKPT 283
#define READ 284
#define READI 285
#define PRINT 286
#define STRING 287
#define INLINE 288
#define BACKUP 289
#define RESTORE 290
#define LOADI 291
#define GOTO 292
#define CALL 293
#define ENCRYPT 294
#define PORT 295
#define MULTIPUSH 296
#define MULTIPOP 297
#define UMIN 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "splparser.y" /* yacc.c:355  */

    struct tree *n;

#line 207 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 224 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   307

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  54
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  140

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      45,    47,     2,     2,    46,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,    44,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    50,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    29,    29,    36,    41,    42,    45,    48,    56,    59,
      64,    76,    88,    93,    99,   105,   109,   112,   115,   118,
     121,   124,   132,   140,   143,   150,   153,   156,   164,   167,
     170,   173,   181,   188,   195,   199,   202,   207,   210,   213,
     216,   219,   224,   227,   230,   233,   236,   239,   244,   249,
     254,   261,   264,   269,   272
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ALIAS", "DEFINE", "DO", "ELSE", "ENDIF",
  "ENDWHILE", "IF", "RETURN", "IRETURN", "LOAD", "STORE", "THEN", "WHILE",
  "HALT", "REG", "NUM", "ASSIGNOP", "ARITHOP1", "ARITHOP2", "RELOP",
  "LOGOP", "NOTOP", "ID", "BREAK", "CONTINUE", "CHKPT", "READ", "READI",
  "PRINT", "STRING", "INLINE", "BACKUP", "RESTORE", "LOADI", "GOTO",
  "CALL", "ENCRYPT", "PORT", "MULTIPUSH", "MULTIPOP", "UMIN", "';'", "'('",
  "','", "')'", "':'", "'['", "']'", "$accept", "body", "definelistpad",
  "definelist", "definestmt", "stmtlist", "stmt", "expr", "ifpad",
  "elsepad", "whilepad", "reglist", "ids", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,    59,    40,    44,    41,    58,    91,
      93
};
# endif

#define YYPACT_NINF -67

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-67)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -67,    12,   217,    19,   -67,    -9,   -67,   -10,    -4,    -1,
       0,   -67,     3,   -67,   -67,    23,    -3,   -18,    30,    46,
      56,    69,   -12,    -3,   -67,    41,    70,    88,    32,   110,
     111,   -12,    94,    95,    -3,    -3,   217,   -67,   264,    -3,
      -3,   -67,   117,   -67,   132,   -67,   -67,    -3,    -3,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   131,   255,
     134,   -67,   -67,    -3,   137,   138,   146,   178,   178,    29,
      16,   -67,   -14,    -3,    -3,    -3,    -3,    61,   284,   -11,
     153,    65,   247,   -67,   -67,   -67,   251,   -67,   -67,   -67,
     108,   151,   152,   -67,   -67,   172,   259,   198,   -67,     7,
     136,   217,   217,   179,   204,   -67,    -3,    -3,    -3,   178,
     180,   187,   -67,   -67,    92,   135,   -67,   192,    33,    42,
      47,   -67,   -67,   -67,   -67,   194,   217,   195,   -67,   196,
     213,   216,   -67,   176,   -67,   -67,   -67,   -67,   219,   -67
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     3,     1,     0,    48,     0,     0,     0,
       0,    50,     0,    54,    45,     0,     0,    53,     0,     0,
       0,     0,     0,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     9,     0,     0,
       0,    46,     0,     4,     0,    19,    20,     0,     0,    23,
      41,    53,    42,    34,    21,    22,    25,    26,     0,     0,
       0,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,    28,    24,     0,    32,    33,    31,
      52,     0,     0,    44,    43,     0,     0,    37,    38,    39,
      40,     0,     0,     0,     0,    15,     0,     0,     0,     0,
       0,     0,    11,    10,     0,     0,     6,     0,     0,     0,
       0,    51,    35,    36,    49,     0,     0,     0,     7,     0,
       0,     0,    12,     0,    14,    16,    17,    18,     0,    13
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -67,   -67,   -67,   -67,   -67,   -30,   -36,   -15,   -67,   -67,
     -67,   -66,    84
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     3,    43,    36,    37,    38,    39,   126,
      40,    91,    41
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      71,    52,    92,    13,    14,    13,    15,   103,    59,   104,
      16,    51,     4,    51,    13,    14,    44,    15,    24,    69,
      70,    16,    51,    42,    77,    78,    95,    73,    74,    24,
      53,    34,    81,    82,    45,    35,    73,    74,    75,    76,
      46,    50,    34,   121,    47,    48,    35,    49,    86,    73,
      74,    75,    76,    73,    74,    75,    76,    96,    97,    98,
      99,   100,    73,    74,    75,    76,    94,    73,    74,    75,
      76,   114,   115,    60,    54,   101,    93,    63,    71,    71,
     129,    73,    74,    75,    76,    73,    74,    75,    76,   130,
      55,   118,   119,   120,   131,     5,   133,    71,   124,   125,
      56,     6,     7,     8,     9,    10,    58,    11,    12,    13,
      14,   106,    15,    57,    61,    66,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    62,    32,    33,    64,    65,    34,     5,    67,
      68,    35,    79,   127,     6,     7,     8,     9,    10,    80,
      11,    12,    13,    14,   109,    15,    73,    74,    75,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    83,    32,    33,    85,     5,
      34,    87,    88,   138,    35,     6,     7,     8,     9,    10,
      89,    11,    12,    13,    14,    90,    15,   105,   110,   111,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,   112,    32,    33,    74,
       5,    34,   117,   116,   122,    35,     6,     7,     8,     9,
      10,   123,    11,    12,    13,    14,   128,    15,   132,   134,
     135,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,   136,    32,    33,
     137,     0,    34,   139,     0,     0,    35,    73,    74,    75,
      76,    73,    74,    75,    76,    73,    74,    75,    76,    73,
      74,    75,    76,    72,    73,    74,    75,    76,     0,   102,
       0,     0,     0,   107,     0,     0,     0,   108,     0,    84,
       0,     0,     0,   113,    73,    74,    75,    76
};

static const yytype_int16 yycheck[] =
{
      36,    16,    68,    17,    18,    17,    20,    18,    23,    20,
      24,    25,     0,    25,    17,    18,    25,    20,    32,    34,
      35,    24,    25,     4,    39,    40,    40,    20,    21,    32,
      48,    45,    47,    48,    44,    49,    20,    21,    22,    23,
      44,    18,    45,   109,    45,    45,    49,    44,    63,    20,
      21,    22,    23,    20,    21,    22,    23,    72,    73,    74,
      75,    76,    20,    21,    22,    23,    50,    20,    21,    22,
      23,   101,   102,    32,    44,    14,    47,    45,   114,   115,
      47,    20,    21,    22,    23,    20,    21,    22,    23,    47,
      44,   106,   107,   108,    47,     3,   126,   133,     6,     7,
      44,     9,    10,    11,    12,    13,    22,    15,    16,    17,
      18,    46,    20,    44,    44,    31,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    44,    41,    42,    25,    25,    45,     3,    45,
      45,    49,    25,     8,     9,    10,    11,    12,    13,    17,
      15,    16,    17,    18,    46,    20,    20,    21,    22,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    44,    41,    42,    44,     3,
      45,    44,    44,     7,    49,     9,    10,    11,    12,    13,
      44,    15,    16,    17,    18,    17,    20,    44,    47,    47,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    44,    41,    42,    21,
       3,    45,    18,    44,    44,    49,     9,    10,    11,    12,
      13,    44,    15,    16,    17,    18,    44,    20,    44,    44,
      44,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    44,    41,    42,
      44,    -1,    45,    44,    -1,    -1,    49,    20,    21,    22,
      23,    20,    21,    22,    23,    20,    21,    22,    23,    20,
      21,    22,    23,    19,    20,    21,    22,    23,    -1,     5,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    46,    -1,    44,
      -1,    -1,    -1,    44,    20,    21,    22,    23
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    52,    53,    54,     0,     3,     9,    10,    11,    12,
      13,    15,    16,    17,    18,    20,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    41,    42,    45,    49,    56,    57,    58,    59,
      61,    63,     4,    55,    25,    44,    44,    45,    45,    44,
      18,    25,    58,    48,    44,    44,    44,    44,    63,    58,
      32,    44,    44,    45,    25,    25,    63,    45,    45,    58,
      58,    57,    19,    20,    21,    22,    23,    58,    58,    25,
      17,    58,    58,    44,    44,    44,    58,    44,    44,    44,
      17,    62,    62,    47,    50,    40,    58,    58,    58,    58,
      58,    14,     5,    18,    20,    44,    46,    46,    46,    46,
      47,    47,    44,    44,    56,    56,    44,    18,    58,    58,
      58,    62,    44,    44,     6,     7,    60,     8,    44,    47,
      47,    47,    44,    56,    44,    44,    44,    44,     7,    44
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    54,    54,    55,    55,    56,    56,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    59,    60,
      61,    62,    62,    63,    63
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     0,     4,     5,     2,     1,
       4,     4,     6,     8,     6,     4,     7,     7,     7,     2,
       2,     2,     2,     2,     3,     2,     2,     3,     3,     2,
       2,     3,     3,     3,     2,     5,     5,     3,     3,     3,
       3,     2,     2,     3,     3,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 29 "splparser.y" /* yacc.c:1646  */
    {
                                    codegen((yyvsp[0].n));
                                    out_linecount++;
                                    fprintf(fp, "HALT");
                                }
#line 1425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 36 "splparser.y" /* yacc.c:1646  */
    {
                                    add_predefined_constants();
                                }
#line 1433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 45 "splparser.y" /* yacc.c:1646  */
    {
                                                    insert_constant((yyvsp[-2].n)->name, (yyvsp[-1].n)->value);
                                                }
#line 1441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 48 "splparser.y" /* yacc.c:1646  */
    {
                                                    if (node_getType((yyvsp[-2].n)) == NODE_SUB)
                                                        insert_constant((yyvsp[-3].n)->name, -1 * (yyvsp[-1].n)->value);
                                                    else
                                                        insert_constant((yyvsp[-3].n)->name, (yyvsp[-1].n)->value);
                                                }
#line 1452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 56 "splparser.y" /* yacc.c:1646  */
    {
                                                    (yyval.n) = create_nontermNode(NODE_STMTLIST, (yyvsp[-1].n), (yyvsp[0].n));
                                                }
#line 1460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 59 "splparser.y" /* yacc.c:1646  */
    {
                                                    (yyval.n) = (yyvsp[0].n);
                                                }
#line 1468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 64 "splparser.y" /* yacc.c:1646  */
    {
                                                    if (node_getType((yyvsp[-3].n)) == NODE_REG || node_getType((yyvsp[-3].n)) == NODE_ADDR_EXPR)
                                                    {
                                                        (yyvsp[-2].n)->value = 2;
                                                        (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[-3].n), (yyvsp[-1].n), NULL);
                                                    }
                                                    else
                                                    {
                                                        printf("\n%d: Invalid operands in assignment!!\n", linecount);
                                                        exit(0);
                                                    }
                                                }
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 76 "splparser.y" /* yacc.c:1646  */
    {
                                                    if (node_getType((yyvsp[-3].n)) == NODE_REG || node_getType((yyvsp[-3].n)) == NODE_ADDR_EXPR)
                                                    {
                                                        (yyvsp[-2].n)->value = 2;
                                                        (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[-3].n), (yyvsp[-1].n), NULL);
                                                    }
                                                    else
                                                    {
                                                        printf("\n%d: Invalid operands in assignment!!\n",  linecount);
                                                        exit(0);
                                                    }
                                                }
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 88 "splparser.y" /* yacc.c:1646  */
    {
                                                            (yyval.n) = create_tree((yyvsp[-5].n), (yyvsp[-4].n), (yyvsp[-2].n), NULL);
                                                            pop_alias();
                                                            depth--;
                                                        }
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 94 "splparser.y" /* yacc.c:1646  */
    {
                                                            (yyval.n) = create_tree((yyvsp[-7].n), (yyvsp[-6].n), (yyvsp[-4].n), (yyvsp[-2].n));
                                                            pop_alias();
                                                            depth--;
                                                        }
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 99 "splparser.y" /* yacc.c:1646  */
    {
                                                            (yyval.n) = create_tree((yyvsp[-5].n), (yyvsp[-4].n), (yyvsp[-2].n), NULL);
                                                            pop_alias();
                                                            depth--;
                                                            flag_break--;
                                                        }
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 105 "splparser.y" /* yacc.c:1646  */
    {
                                                            push_alias((yyvsp[-2].n)->name, (yyvsp[-1].n)->value);
                                                            (yyval.n) = NULL;
                                                        }
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 109 "splparser.y" /* yacc.c:1646  */
    {
                                                            (yyval.n) = create_tree((yyvsp[-6].n), (yyvsp[-4].n), (yyvsp[-2].n), NULL);
                                                        }
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 112 "splparser.y" /* yacc.c:1646  */
    {
                                                            (yyval.n) = create_tree((yyvsp[-6].n), (yyvsp[-4].n), (yyvsp[-2].n), NULL);
                                                        }
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 115 "splparser.y" /* yacc.c:1646  */
    {
                                                            (yyval.n) = create_tree((yyvsp[-6].n), (yyvsp[-4].n), (yyvsp[-2].n), NULL);
                                                        }
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 118 "splparser.y" /* yacc.c:1646  */
    {
                                                            (yyval.n) = (yyvsp[-1].n);
                                                        }
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 121 "splparser.y" /* yacc.c:1646  */
    {
                                                            (yyval.n) = (yyvsp[-1].n);
                                                        }
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 124 "splparser.y" /* yacc.c:1646  */
    {
                                                            if (flag_break == 0)
                                                            {
                                                                printf("\n%d: break or continue should be used inside while!!\n", linecount);
                                                                exit(0);
                                                            }
                                                            (yyval.n)=(yyvsp[-1].n);
                                                        }
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 132 "splparser.y" /* yacc.c:1646  */
    {
                                                if (flag_break==0)
                                                {
                                                    printf("\n%d: break or continue should be used inside while!!\n", linecount);
                                                    exit(0);
                                                }
                                                (yyval.n) = (yyvsp[-1].n);
                                            }
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 140 "splparser.y" /* yacc.c:1646  */
    {
                                                (yyval.n) = (yyvsp[-1].n);
                                            }
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 143 "splparser.y" /* yacc.c:1646  */
    {
                                                int temp;
                                                (yyvsp[-1].n)->name++;
                                                temp = strlen((yyvsp[-1].n)->name);
                                                (yyvsp[-1].n)->name[temp - 1] = '\0';
                                                (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[-1].n), NULL, NULL);
                                            }
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 150 "splparser.y" /* yacc.c:1646  */
    {
                                                (yyval.n) = (yyvsp[-1].n);
                                            }
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 153 "splparser.y" /* yacc.c:1646  */
    {
                                                (yyval.n) = (yyvsp[-1].n);
                                            }
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 156 "splparser.y" /* yacc.c:1646  */
    {
                                                if (node_getType((yyvsp[-1].n)) != NODE_REG || !isAllowedRegister((yyvsp[-1].n)->value))
                                                {
                                                    printf("\n%d: Invalid operand in read!!\n", linecount);
                                                    exit(0);
                                                }
                                                (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[-1].n), NULL, NULL);
                                            }
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 164 "splparser.y" /* yacc.c:1646  */
    {
                                                (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[-1].n), NULL, NULL);
                                            }
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 167 "splparser.y" /* yacc.c:1646  */
    {
                                                (yyval.n) = create_tree((yyvsp[-1].n), NULL, NULL, NULL);
                                            }
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 170 "splparser.y" /* yacc.c:1646  */
    {
                                                (yyval.n) = create_tree((yyvsp[-1].n), NULL, NULL, NULL);
                                            }
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 173 "splparser.y" /* yacc.c:1646  */
    {
                                                if (node_getType((yyvsp[-1].n)) != NODE_REG || !isAllowedRegister((yyvsp[-1].n)->value))
                                                {
                                                    printf("\n%d: Invalid operand in encrypt!!\n", linecount);
                                                    exit(0);
                                                }
                                                (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[-1].n), NULL, NULL);
                                            }
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 181 "splparser.y" /* yacc.c:1646  */
    {
                                                if (lookup_constant(node_getName((yyvsp[-1].n))) != NULL) // if the address to jump to is a predefined value in constants file
                                                    (yyval.n) = create_tree((yyvsp[-2].n), substitute_id((yyvsp[-1].n)), NULL, NULL);
                                                else
                                                    (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[-1].n), NULL, NULL);
                                                (yyval.n)->value = linecount; // Hack to show line numbers in case of syntax errors
                                            }
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 188 "splparser.y" /* yacc.c:1646  */
    {
                                                if(lookup_constant(node_getName((yyvsp[-1].n))) != NULL) // if the address to jump to is a predefined value in constants file
                                                    (yyval.n) = create_tree((yyvsp[-2].n), substitute_id((yyvsp[-1].n)), NULL, NULL);
                                                else
                                                    (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[-1].n), NULL, NULL);
                                                (yyval.n)->value = linecount; // Hack to show line numbers in case of syntax errors
                                            }
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 195 "splparser.y" /* yacc.c:1646  */
    {
                                                label_add(node_getName((yyvsp[-1].n)));
                                                (yyval.n) = create_nontermNode(NODE_LABEL_DEF, (yyvsp[-1].n), NULL);
                                            }
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 199 "splparser.y" /* yacc.c:1646  */
    {
                                                    (yyval.n) = create_tree((yyvsp[-4].n), (yyvsp[-2].n), NULL, NULL);
                                                }
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 202 "splparser.y" /* yacc.c:1646  */
    {
                                                    (yyval.n) = create_tree((yyvsp[-4].n), (yyvsp[-2].n), NULL, NULL);
                                                }
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 207 "splparser.y" /* yacc.c:1646  */
    {
                                                (yyval.n) = create_tree((yyvsp[-1].n), (yyvsp[-2].n), (yyvsp[0].n), NULL);
                                            }
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 210 "splparser.y" /* yacc.c:1646  */
    {
                                                (yyval.n) = create_tree((yyvsp[-1].n), (yyvsp[-2].n), (yyvsp[0].n), NULL);
                                            }
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 213 "splparser.y" /* yacc.c:1646  */
    {
                                                (yyval.n) = create_tree((yyvsp[-1].n), (yyvsp[-2].n), (yyvsp[0].n), NULL);
                                            }
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 216 "splparser.y" /* yacc.c:1646  */
    {
                                                (yyval.n) = create_tree((yyvsp[-1].n), (yyvsp[-2].n), (yyvsp[0].n), NULL);
                                            }
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 219 "splparser.y" /* yacc.c:1646  */
    {
                                                if (node_getType((yyvsp[-1].n)) == NODE_SUB)
                                                    (yyvsp[0].n)->value = (yyvsp[0].n)->value * -1;
                                                (yyval.n) = (yyvsp[0].n);
                                            }
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 224 "splparser.y" /* yacc.c:1646  */
    {
                                                (yyval.n) = create_tree((yyvsp[-1].n), (yyvsp[0].n), NULL, NULL);
                                            }
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 227 "splparser.y" /* yacc.c:1646  */
    {
                                                (yyval.n) = create_nontermNode(NODE_ADDR_EXPR, (yyvsp[-1].n), NULL);
                                            }
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 230 "splparser.y" /* yacc.c:1646  */
    {
                                                (yyval.n) = (yyvsp[-1].n);
                                            }
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 233 "splparser.y" /* yacc.c:1646  */
    {
                                                (yyval.n) = (yyvsp[0].n);
                                            }
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 236 "splparser.y" /* yacc.c:1646  */
    {
                                                (yyval.n) = (yyvsp[0].n);
                                            }
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 239 "splparser.y" /* yacc.c:1646  */
    {
                                                (yyval.n) = (yyvsp[0].n);
                                            }
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 244 "splparser.y" /* yacc.c:1646  */
    {
                                                depth++;
                                                (yyval.n) = (yyvsp[0].n);
                                            }
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 249 "splparser.y" /* yacc.c:1646  */
    {
                                                pop_alias();
                                            }
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 254 "splparser.y" /* yacc.c:1646  */
    {
                                                depth++;
                                                flag_break++;
                                                (yyval.n) = (yyvsp[0].n);
                                            }
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 261 "splparser.y" /* yacc.c:1646  */
    {
                                                (yyval.n) = create_tree((yyvsp[-2].n), (yyvsp[0].n), NULL, NULL);
                                            }
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 264 "splparser.y" /* yacc.c:1646  */
    {
                                                (yyval.n) = (yyvsp[0].n);
                                            }
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 269 "splparser.y" /* yacc.c:1646  */
    {
                                                (yyval.n) = substitute_id((yyvsp[0].n));
                                            }
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 272 "splparser.y" /* yacc.c:1646  */
    {
                                                (yyval.n) = (yyvsp[0].n);
                                            }
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1896 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 276 "splparser.y" /* yacc.c:1906  */


int yyerror (char *msg)
{
    return fprintf (stderr, "%d: %s\n", linecount, msg);
}
