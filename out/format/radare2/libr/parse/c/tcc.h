# 1 "project/radare2/libr/parse/c/tcc.h"
# 21 "project/radare2/libr/parse/c/tcc.h"
#ifndef _TCC_H
#define _TCC_H 

#include "r_types.h"
#ifndef _GNU_SOURCE
#define _GNU_SOURCE 
#endif
#include "tcc_config.h"


#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <errno.h>
#ifndef _MSC_VER
#include <math.h>
#endif
#include <signal.h>
#include <fcntl.h>
#ifndef __wasi__
#include <setjmp.h>
#endif
#include <time.h>

#ifdef CONFIG_TCCASSERT
#include <assert.h>
#define TCC_ASSERT(ex) assert(ex)
#else
#define TCC_ASSERT(ex) 
#endif

#ifndef __WINDOWS__
# include <unistd.h>
# include <sys/time.h>
# ifndef __HAIKU__
# endif
# include <sys/mman.h>
#else
# include <windows.h>
# include <sys/timeb.h>
# include <io.h>
# include <direct.h>
# ifdef __GNUC__
# include <stdint.h>
# else
typedef UINT_PTR uintptr_t;
# endif
#define inline __inline
#define inp next_inp
# ifdef LIBTCC_AS_DLL
#define LIBTCCAPI __declspec(dllexport)
#define PUB_FUNC LIBTCCAPI
# endif
#endif

#ifndef O_BINARY
#define O_BINARY 0
#endif

#include "stab.h"
#include "libtcc.h"

#ifndef __WINDOWS__
#include <inttypes.h>
#else
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long int uint64_t;
#ifdef _MSC_VER
typedef signed char int8_t;
typedef long long int int64_t;
#endif
#endif


#define LDOUBLE_SIZE 12
#define LDOUBLE_ALIGN 4
#define MAX_ALIGN 8
#define PTR_SIZE 4

#if !defined (__HAIKU__)
typedef uint64_t addr_t;
#endif
# 119 "project/radare2/libr/parse/c/tcc.h"
#ifndef CONFIG_SYSROOT
#define CONFIG_SYSROOT ""
#endif
#ifndef CONFIG_TCCDIR
#define CONFIG_TCCDIR "."
#endif
#ifndef CONFIG_LDDIR
#define CONFIG_LDDIR "lib"
#endif


#ifndef CONFIG_TCC_CRTPREFIX
#define CONFIG_TCC_CRTPREFIX CONFIG_SYSROOT "/usr/" CONFIG_LDDIR
#endif




#ifndef CONFIG_TCC_SYSINCLUDEPATHS
# ifdef TCC_TARGET_PE
#define CONFIG_TCC_SYSINCLUDEPATHS "{B}/include;{B}/include/winapi"
# elif defined CONFIG_MULTIARCHDIR
#define CONFIG_TCC_SYSINCLUDEPATHS \
 CONFIG_SYSROOT "/usr/local/include" \
":" CONFIG_SYSROOT "/usr/local/include/" CONFIG_MULTIARCHDIR \
":" CONFIG_SYSROOT "/usr/include" \
":" CONFIG_SYSROOT "/usr/include/" CONFIG_MULTIARCHDIR \
":" "{B}/include"
# else
#define CONFIG_TCC_SYSINCLUDEPATHS \
 CONFIG_SYSROOT "/usr/local/include" \
":" CONFIG_SYSROOT "/usr/include" \
":" "{B}/include"
# endif
#endif


#ifndef CONFIG_TCC_LIBPATHS
# ifdef TCC_TARGET_PE
#define CONFIG_TCC_LIBPATHS "{B}/lib;{B}"
# else
#define CONFIG_TCC_LIBPATHS \
 CONFIG_SYSROOT "/usr/" CONFIG_LDDIR \
":" CONFIG_SYSROOT "/" CONFIG_LDDIR \
":" CONFIG_SYSROOT "/usr/local/" CONFIG_LDDIR
# endif
#endif





#define STACK_NEW0(type,arg) \
 type arg; \
ZERO_FILL(arg)

#define INCLUDE_STACK_SIZE 32
#define IFDEF_STACK_SIZE 64
#define VSTACK_SIZE 1024
#define STRING_MAX_SIZE 1024
#define PACK_STACK_SIZE 8

#define TOK_HASH_SIZE 8192
#define TOK_ALLOC_INCR 512
#define TOK_MAX_SIZE 4


typedef struct TokenSym {
 struct TokenSym *hash_next;
 struct Sym *sym_define;
 struct Sym *sym_label;
 struct Sym *sym_struct;
 struct Sym *sym_identifier;
 int tok;
 int len;
 char str[1];
} TokenSym;

#ifdef TCC_TARGET_PE
typedef unsigned short nwchar_t;
#else
typedef int nwchar_t;
#endif

typedef struct CString {
 int size;
 void *data;
 int size_allocated;
 void *data_allocated;
} CString;


typedef struct CType {
 int t;
 struct Sym *ref;
} CType;


typedef union CValue {
 long double ld;
 double d;
 float f;
 int i;
 unsigned int ui;
 unsigned int ul;
 long long ll;
 unsigned long long ull;
 struct CString *cstr;
 void *ptr;
 int tab[LDOUBLE_SIZE/4];
} CValue;


typedef struct SValue {
 CType type;
 unsigned short r;
 unsigned short r2;

 CValue c;
 struct Sym *sym;
} SValue;


typedef struct Sym {
 int v;
 char *asm_label;
 unsigned int r;
 union {
  long long c;
  int *d;
 };
 CType type;
 union {
  struct Sym *next;
  long jnext;
 };
 struct Sym *prev;
 struct Sym *prev_tok;
} Sym;


typedef struct AttributeDef {
 unsigned int
  func_call : 3,
         aligned : 5,
         packed : 1,
         func_export : 1,
         func_import : 1,
         func_args : 5,
         mode : 4,
         weak : 1,
         fill : 11;
 int alias_target;
} AttributeDef;


#define FUNC_CALL(r) (((AttributeDef*)&(r))->func_call)
#define FUNC_EXPORT(r) (((AttributeDef*)&(r))->func_export)
#define FUNC_IMPORT(r) (((AttributeDef*)&(r))->func_import)
#define FUNC_ARGS(r) (((AttributeDef*)&(r))->func_args)
#define FUNC_ALIGN(r) (((AttributeDef*)&(r))->aligned)
#define FUNC_PACKED(r) (((AttributeDef*)&(r))->packed)
#define ATTR_MODE(r) (((AttributeDef*)&(r))->mode)
#define INT_ATTR(ad) (*(int*)(ad))



#define SYM_STRUCT 0x40000000
#define SYM_FIELD 0x20000000
#define SYM_FIRST_ANOM 0x10000000

#define VLA_SP_LOC_SET 0x01
#define VLA_SP_SAVED 0x02
#define VLA_NEED_NEW_FRAME 0x04
#define VLA_IN_SCOPE 0x08
#define VLA_SCOPE_FLAGS (VLA_SP_SAVED|VLA_NEED_NEW_FRAME|VLA_IN_SCOPE)


#define FUNC_NEW 1
#define FUNC_OLD 2
#define FUNC_ELLIPSIS 3


#define FUNC_CDECL 0
#define FUNC_STDCALL 1
#define FUNC_FASTCALL1 2
#define FUNC_FASTCALL2 3
#define FUNC_FASTCALL3 4
#define FUNC_FASTCALLW 5


#define MACRO_OBJ 0
#define MACRO_FUNC 1


#define LABEL_DEFINED 0
#define LABEL_FORWARD 1
#define LABEL_DECLARED 2


#define TYPE_ABSTRACT 1
#define TYPE_DIRECT 2

#define IO_BUF_SIZE 8192

typedef struct BufferedFile {
 uint8_t *buf_ptr;
 uint8_t *buf_end;
 int fd;
 struct BufferedFile *prev;
 int line_num;
 int ifndef_macro;
 int ifndef_macro_saved;
 int *ifdef_stack_ptr;
 char filename[1024];
 unsigned char buffer[IO_BUF_SIZE + 1];
} BufferedFile;


#define CH_EOB '\\'
#define CH_EOF (-1)



typedef struct ParseState {
 const int *macro_ptr;
 int line_num;
 int tok;
 CValue tokc;
} ParseState;


typedef struct TokenString {
 int *str;
 int len;
 int allocated_len;
 int last_line_num;
} TokenString;


typedef struct InlineFunc {
 int *token_str;
 Sym *sym;
 char filename[1];
} InlineFunc;



typedef struct CachedInclude {
 int ifndef_macro;
 int hash_next;
 char filename[1];
} CachedInclude;

#define CACHED_INCLUDES_HASH_SIZE 512

struct TCCState {
 int verbose;

 char *tcc_lib_path;


 int output_type;



 char *arch;
 int bits;
 char *os;


 bool char_is_unsigned;


 int warn_write_strings;
 int warn_unsupported;
 int warn_error;
 int warn_none;
 int warn_implicit_function_declaration;


 char **include_paths;
 int nb_include_paths;

 char **sysinclude_paths;
 int nb_sysinclude_paths;


 void *error_opaque;
 void (*error_func)(void *opaque, const char *msg);
 bool error_set_jmp_enabled;
#ifndef __wasi__
 jmp_buf error_jmp_buf;
#endif
 int nb_errors;


 FILE *ppfp;


 char **target_deps;
 int nb_target_deps;


 BufferedFile *include_stack[INCLUDE_STACK_SIZE];
 BufferedFile **include_stack_ptr;

 int ifdef_stack[IFDEF_STACK_SIZE];
 int *ifdef_stack_ptr;


 int cached_includes_hash[CACHED_INCLUDES_HASH_SIZE];
 CachedInclude **cached_includes;
 int nb_cached_includes;


 int pack_stack[PACK_STACK_SIZE];
 int *pack_stack_ptr;



 struct InlineFunc **inline_fns;
 int nb_inline_fns;

 struct sym_attr *sym_attrs;
 int nb_sym_attrs;

 int *symtab_to_dynsym;


 Sym *asm_labels;


 char *deps_outfile;
};


#define VT_VALMASK 0x003f
#define VT_CONST 0x0030
#define VT_LLOCAL 0x0031
#define VT_LOCAL 0x0032
#define VT_CMP 0x0033
#define VT_JMP 0x0034
#define VT_JMPI 0x0035
#define VT_REF 0x0040
#define VT_LVAL 0x0100
#define VT_SYM 0x0200
#define VT_MUSTCAST 0x0400

#define VT_MUSTBOUND 0x0800

#define VT_BOUNDED 0x8000

#define VT_LVAL_BYTE 0x1000
#define VT_LVAL_SHORT 0x2000
#define VT_LVAL_UNSIGNED 0x4000
#define VT_LVAL_TYPE (VT_LVAL_BYTE | VT_LVAL_SHORT | VT_LVAL_UNSIGNED)


#define VT_BTYPE 0x000f
#define VT_INT32 0
#define VT_INT16 1
#define VT_INT8 2
#define VT_VOID 3
#define VT_PTR 4
#define VT_ENUM 5
#define VT_FUNC 6
#define VT_STRUCT 7
#define VT_UNION 8
#define VT_FLOAT 9
#define VT_DOUBLE 10
#define VT_LDOUBLE 11
#define VT_BOOL 12
#define VT_INT64 13
#define VT_LONG 14

#define VT_QLONG 15
#define VT_QFLOAT 0x0010
#define VT_UNSIGNED 0x0020
#define VT_ARRAY 0x0040
#define VT_BITFIELD 0x0800
#define VT_CONSTANT 0x1000
#define VT_VOLATILE 0x2000
#define VT_SIGNED 0x4000
#define VT_CHAR 0x00040000
#define VT_VLA 0x00080000


#define VT_EXTERN 0x00000080
#define VT_STATIC 0x00000100
#define VT_TYPEDEF 0x00000200
#define VT_INLINE 0x00000400
#define VT_IMPORT 0x00008000
#define VT_EXPORT 0x00010000
#define VT_WEAK 0x00020000

#define VT_STRUCT_SHIFT 18


#define VT_STORAGE (VT_EXTERN | VT_STATIC | VT_TYPEDEF | VT_INLINE | VT_IMPORT | VT_EXPORT | VT_WEAK)
#define VT_TYPE (~(VT_STORAGE))




#define TOK_ULT 0x92
#define TOK_UGE 0x93
#define TOK_EQ 0x94
#define TOK_NE 0x95
#define TOK_ULE 0x96
#define TOK_UGT 0x97
#define TOK_Nset 0x98
#define TOK_Nclear 0x99
#define TOK_LT 0x9c
#define TOK_GE 0x9d
#define TOK_LE 0x9e
#define TOK_GT 0x9f

#define TOK_LAND 0xa0
#define TOK_LOR 0xa1

#define TOK_DEC 0xa2
#define TOK_MID 0xa3
#define TOK_INC 0xa4
#define TOK_UDIV 0xb0
#define TOK_UMOD 0xb1
#define TOK_PDIV 0xb2
#define TOK_CINT 0xb3
#define TOK_CCHAR 0xb4
#define TOK_STR 0xb5
#define TOK_TWOSHARPS 0xb6
#define TOK_LCHAR 0xb7
#define TOK_LSTR 0xb8
#define TOK_CFLOAT 0xb9
#define TOK_LINENUM 0xba
#define TOK_CDOUBLE 0xc0
#define TOK_CLDOUBLE 0xc1
#define TOK_UMULL 0xc2
#define TOK_ADDC1 0xc3
#define TOK_ADDC2 0xc4
#define TOK_SUBC1 0xc5
#define TOK_SUBC2 0xc6
#define TOK_CUINT 0xc8
#define TOK_CLLONG 0xc9
#define TOK_CULLONG 0xca
#define TOK_ARROW 0xcb
#define TOK_DOTS 0xcc
#define TOK_SHR 0xcd
#define TOK_PPNUM 0xce
#define TOK_NOSUBST 0xcf

#define TOK_SHL 0x01
#define TOK_SAR 0x02


#define TOK_A_MOD 0xa5
#define TOK_A_AND 0xa6
#define TOK_A_MUL 0xaa
#define TOK_A_ADD 0xab
#define TOK_A_SUB 0xad
#define TOK_A_DIV 0xaf
#define TOK_A_XOR 0xde
#define TOK_A_OR 0xfc
#define TOK_A_SHL 0x81
#define TOK_A_SAR 0x82

#ifndef offsetof
#define offsetof(type,field) ((size_t) &((type *)0)->field)
#endif

#ifndef countof
#define countof(tab) (sizeof(tab) / sizeof((tab)[0]))
#endif

#define TOK_EOF (-1)
#define TOK_LINEFEED 10


#define TOK_IDENT 256

#define DEF_ASM(x) DEF(TOK_ASM_ ## x, #x)
#define TOK_ASM_int TOK_INT
#define TOK_ASM_weak TOK_WEAK1

#if defined TCC_TARGET_I386 || defined TCC_TARGET_X86_64

#define DEF_BWL(x) \
 DEF(TOK_ASM_ ## x ## b, #x "b") \
 DEF(TOK_ASM_ ## x ## w, #x "w") \
 DEF(TOK_ASM_ ## x ## l, #x "l") \
 DEF(TOK_ASM_ ## x, #x)
#define DEF_WL(x) \
 DEF(TOK_ASM_ ## x ## w, #x "w") \
 DEF(TOK_ASM_ ## x ## l, #x "l") \
 DEF(TOK_ASM_ ## x, #x)
#ifdef TCC_TARGET_X86_64
#define DEF_BWLQ(x) \
 DEF(TOK_ASM_ ## x ## b, #x "b") \
 DEF(TOK_ASM_ ## x ## w, #x "w") \
 DEF(TOK_ASM_ ## x ## l, #x "l") \
 DEF(TOK_ASM_ ## x ## q, #x "q") \
 DEF(TOK_ASM_ ## x, #x)
#define DEF_WLQ(x) \
 DEF(TOK_ASM_ ## x ## w, #x "w") \
 DEF(TOK_ASM_ ## x ## l, #x "l") \
 DEF(TOK_ASM_ ## x ## q, #x "q") \
 DEF(TOK_ASM_ ## x, #x)
#define DEF_BWLX DEF_BWLQ
#define DEF_WLX DEF_WLQ

#define NBWLX 5
#else
#define DEF_BWLX DEF_BWL
#define DEF_WLX DEF_WL

#define NBWLX 4
#endif

#define DEF_FP1(x) \
 DEF(TOK_ASM_ ## f ## x ## s, "f" #x "s") \
 DEF(TOK_ASM_ ## fi ## x ## l, "fi" #x "l") \
 DEF(TOK_ASM_ ## f ## x ## l, "f" #x "l") \
 DEF(TOK_ASM_ ## fi ## x ## s, "fi" #x "s")

#define DEF_FP(x) \
 DEF(TOK_ASM_ ## f ## x, "f" #x ) \
 DEF(TOK_ASM_ ## f ## x ## p, "f" #x "p") \
 DEF_FP1(x)

#define DEF_ASMTEST(x) \
 DEF_ASM(x ## o) \
 DEF_ASM(x ## no) \
 DEF_ASM(x ## b) \
 DEF_ASM(x ## c) \
 DEF_ASM(x ## nae) \
 DEF_ASM(x ## nb) \
 DEF_ASM(x ## nc) \
 DEF_ASM(x ## ae) \
 DEF_ASM(x ## e) \
 DEF_ASM(x ## z) \
 DEF_ASM(x ## ne) \
 DEF_ASM(x ## nz) \
 DEF_ASM(x ## be) \
 DEF_ASM(x ## na) \
 DEF_ASM(x ## nbe) \
 DEF_ASM(x ## a) \
 DEF_ASM(x ## s) \
 DEF_ASM(x ## ns) \
 DEF_ASM(x ## p) \
 DEF_ASM(x ## pe) \
 DEF_ASM(x ## np) \
 DEF_ASM(x ## po) \
 DEF_ASM(x ## l) \
 DEF_ASM(x ## nge) \
 DEF_ASM(x ## nl) \
 DEF_ASM(x ## ge) \
 DEF_ASM(x ## le) \
 DEF_ASM(x ## ng) \
 DEF_ASM(x ## nle) \
 DEF_ASM(x ## g)

#endif

enum tcc_token {
 TOK_LAST = TOK_IDENT - 1,
#define DEF(id,str) id,
#include "tcctok.h"
#undef DEF
};

#define TOK_UIDENT TOK_DEFINE

#ifdef __WINDOWS__
#define IS_DIRSEP(c) (c == '/' || c == '\\')
#define IS_ABSPATH(p) (IS_DIRSEP(p[0]) || (p[0] && p[1] == ':' && IS_DIRSEP(p[2])))
#define PATHCMP stricmp
#define snprintf _snprintf
#define vsnprintf _vsnprintf
#ifndef __GNUC__
#define strtold (long double)strtod
#define strtof (float)strtod
#define strtoll _strtoi64
#define strtoull _strtoui64
#endif
#else
#define IS_DIRSEP(c) (c == '/')
#define IS_ABSPATH(p) IS_DIRSEP(p[0])
#define PATHCMP strcmp

extern float strtof (const char *__nptr, char **__endptr);
extern long double strtold (const char *__nptr, char **__endptr);
#endif

#ifdef TCC_TARGET_PE
#define PATHSEP ';'
#else
#define PATHSEP ':'
#endif


static inline int is_space(int ch)
{
 return ch == ' ' || ch == '\t' || ch == '\v' || ch == '\f' || ch == '\r';
}

static inline int isid(int c)
{
 return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '_';
}

static inline int isnum(int c)
{
 return c >= '0' && c <= '9';
}

static inline int isdot(int c)
{
 return c == '.';
}

static inline int isoct(int c)
{
 return c >= '0' && c <= '7';
}

static inline int toup(int c)
{
 return (c >= 'a' && c <= 'z') ? c - 'a' + 'A' : c;
}

#ifndef PUB_FUNC
#define PUB_FUNC 
#endif

#ifdef ONE_SOURCE
#define ST_INLN static inline
#define ST_FUNC static
#define ST_DATA static
#else
#define ST_INLN 
#define ST_FUNC 
#define ST_DATA extern
extern char **tcc_cb_ptr;
#endif




ST_DATA int gnu_ext;

ST_DATA int tcc_ext;

ST_DATA struct TCCState *tcc_state;

static inline int tcc_nerr(void) {
 return tcc_state->nb_errors;
}


#ifdef MEM_DEBUG
ST_DATA int mem_cur_size;
ST_DATA int mem_max_size;
#endif

#define AFF_PRINT_ERROR 0x0001
#define AFF_REFERENCED_DLL 0x0002
#define AFF_PREPROCESS 0x0004


PUB_FUNC char *pstrcat(char *buf, int buf_size, const char *s);
PUB_FUNC char *pstrncpy(char *out, const char *in, size_t num);
PUB_FUNC char *tcc_basename(const char *name);
PUB_FUNC char *tcc_fileextension (const char *name);
PUB_FUNC void tcc_free(void *ptr);
PUB_FUNC void *tcc_malloc(unsigned long size);
PUB_FUNC void *tcc_mallocz(unsigned long size);
PUB_FUNC void *tcc_realloc(void *ptr, unsigned long size);
PUB_FUNC char *tcc_strdup(const char *str);
PUB_FUNC void tcc_memstats(void);
PUB_FUNC void tcc_error_noabort(const char *fmt, ...);
PUB_FUNC void tcc_error(const char *fmt, ...);
PUB_FUNC void tcc_warning(const char *fmt, ...);
PUB_FUNC void strcat_printf(char *buf, int buf_size, const char *fmt, ...);


ST_FUNC void dynarray_add(void ***ptab, int *nb_ptr, void *data);
ST_FUNC void dynarray_reset(void *pp, int *n);
ST_FUNC void cstr_ccat(CString *cstr, int ch);
ST_FUNC void cstr_cat(CString *cstr, const char *str);
ST_FUNC void cstr_wccat(CString *cstr, int ch);
ST_FUNC void cstr_new(CString *cstr);
ST_FUNC void cstr_free(CString *cstr);
ST_FUNC void cstr_reset(CString *cstr);

ST_INLN void sym_free(Sym *sym);
ST_FUNC Sym *sym_push2(Sym **ps, int v, int t, long long c);
ST_FUNC Sym *sym_find2(Sym *s, int v);
ST_FUNC Sym *sym_push(int v, CType *type, int r, long long c);
ST_FUNC void sym_pop(Sym **ptop, Sym *b);
ST_INLN Sym *struct_find(int v);
ST_INLN Sym *sym_find(int v);
ST_FUNC Sym *global_identifier_push(int v, int t, long long c);

ST_FUNC void tcc_open_bf(TCCState *s1, const char *filename, int initlen);
ST_FUNC int tcc_open(TCCState *s1, const char *filename);
ST_FUNC void tcc_close(void);
ST_FUNC int tcc_add_file_internal(TCCState *s1, const char *filename, int flags);
PUB_FUNC int tcc_parse_args(TCCState *s, int argc, char **argv);



ST_DATA int ch, tok;
ST_DATA CValue tokc;
ST_DATA const int *macro_ptr;
ST_DATA CString tokcstr;


ST_DATA int total_lines;
ST_DATA int total_bytes;
ST_DATA int tok_ident;
ST_DATA TokenSym **table_ident;

#define TOK_FLAG_BOL 0x0001
#define TOK_FLAG_BOF 0x0002
#define TOK_FLAG_ENDIF 0x0004
#define TOK_FLAG_EOF 0x0008

#define PARSE_FLAG_PREPROCESS 0x0001
#define PARSE_FLAG_TOK_NUM 0x0002
#define PARSE_FLAG_LINEFEED 0x0004


#define PARSE_FLAG_ASM_COMMENTS 0x0008
#define PARSE_FLAG_SPACES 0x0010

ST_FUNC TokenSym *tok_alloc(const char *str, int len);
ST_FUNC char *get_tok_str(int v, CValue *cv);
ST_FUNC void save_parse_state(ParseState *s);
ST_INLN void tok_str_new(TokenString *s);
ST_FUNC void tok_str_free(int *str);
ST_FUNC void tok_str_add(TokenString *s, int t);
ST_FUNC void tok_str_add_tok(TokenString *s);
ST_INLN void define_push(int v, int macro_type, int *str, Sym *first_arg);
ST_FUNC void define_undef(Sym *s);
ST_INLN Sym *define_find(int v);
ST_FUNC void free_defines(Sym *b);
ST_FUNC void parse_define(void);
ST_FUNC void preprocess(int is_bof);
ST_FUNC void next_nomacro(void);
ST_FUNC void next(void);
ST_INLN void unget_tok(int last_tok);
ST_FUNC void preprocess_init(TCCState *s1);
ST_FUNC void preprocess_new(void);
ST_FUNC int tcc_preprocess(TCCState *s1);
ST_FUNC void skip(int c);
ST_FUNC void expect(const char *msg);



#define RC_INT 0x0001
#define RC_FLOAT 0x0002
#define RC_IRET 0x0004
#define RC_LRET 0x0020
#define RC_FRET 0x0008
#define REG_IRET 0
#define REG_LRET 2
#define REG_FRET 3

#define SYM_POOL_NB (8192 / sizeof(Sym))
ST_DATA CType char_pointer_type, func_old_type;
ST_DATA CType int8_type, int16_type, int32_type, int64_type, size_type;
ST_DATA SValue __vstack[1+ VSTACK_SIZE], *vtop;
#define vstack (__vstack + 1)

ST_INLN bool is_structured(CType *t);
ST_INLN bool is_struct(CType *t);
ST_INLN bool is_union(CType *t);
ST_INLN bool is_float(int t);
ST_INLN bool not_structured(CType *t);

#ifdef TCC_TARGET_ARM
ST_FUNC int get_reg_ex(int rc, int rc2);
ST_FUNC void lexpand_nr(void);
#endif
ST_FUNC int type_size(CType *type, int *a);
ST_FUNC void mk_pointer(CType *type);
ST_FUNC int lvalue_type(int t);
ST_FUNC void indir(void);
ST_FUNC void unary(void);
ST_FUNC void expr_prod(void);
ST_FUNC void expr_sum(void);
ST_FUNC void gexpr(void);
ST_FUNC long long expr_const(void);


#undef ST_DATA
#ifdef ONE_SOURCE
#define ST_DATA static
#else
#define ST_DATA 
#endif

PUB_FUNC void tcc_appendf(const char *fmt, ...);
PUB_FUNC void tcc_typedef_appendf(const char *fmt, ...);
PUB_FUNC void tcc_typedef_alias_fields(const char *alias);

extern void (*tcc_cb)(const char *, char **);

ST_DATA bool nocode_wanted;

static BufferedFile *file;
static char *funcname;
ST_DATA Sym *define_stack;
ST_DATA int tok_flags;
ST_DATA int parse_flags;

ST_DATA Sym *global_stack;
ST_DATA Sym *local_stack;
ST_DATA Sym *define_stack;

ST_DATA void **sym_pools;
ST_DATA int nb_sym_pools;

ST_DATA Sym *sym_free_first;
ST_DATA char *dir_name;

#endif
