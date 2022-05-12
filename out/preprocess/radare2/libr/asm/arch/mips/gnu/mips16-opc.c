# 0 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
# 26 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/sysdep.h" 1 3 4
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/sysdep.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/ansidecl.h" 1 3 4
# 31 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/sysdep.h" 2 3 4
# 27 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 2
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 1 3 4
# 14 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 1 3 4
# 40 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4

# 40 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 15 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 2 3 4
# 78 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 1 3 4
# 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 1 3 4
# 649 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 650 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 715 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_posix_availability.h" 1 3 4
# 716 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 1 3 4
# 135 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/AvailabilityVersions.h" 1 3 4
# 136 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/AvailabilityInternal.h" 1 3 4
# 137 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 1 3 4
# 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_types.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_types.h" 1 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_types.h" 2 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 2 3 4
# 55 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_types.h" 1 3 4
# 57 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_types.h" 3 4
struct __darwin_pthread_handler_rec {
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_cond_t {
 long __sig;
 char __opaque[40];
};

struct _opaque_pthread_condattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_mutex_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_once_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
 long __sig;
 char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
 long __sig;
 char __opaque[16];
};

struct _opaque_pthread_t {
 long __sig;
 struct __darwin_pthread_handler_rec *__cleanup_stack;
 char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 2 3 4
# 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 2 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_va_list.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_va_list.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/types.h" 1 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 1 3 4
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int8_t.h" 3 4
typedef signed char int8_t;
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int8_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int8_t.h" 3 4
typedef unsigned char u_int8_t;
# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int16_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int16_t.h" 3 4
typedef unsigned short u_int16_t;
# 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int32_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int32_t.h" 3 4
typedef unsigned int u_int32_t;
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int64_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int64_t.h" 3 4
typedef unsigned long long u_int64_t;
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4


typedef int64_t register_t;




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_intptr_t.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/types.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_intptr_t.h" 2 3 4

typedef __darwin_intptr_t intptr_t;
# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uintptr_t.h" 3 4
typedef unsigned long uintptr_t;
# 94 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4



typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;







typedef u_int64_t syscall_arg_t;
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/types.h" 2 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_va_list.h" 2 3 4
typedef __darwin_va_list va_list;
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_null.h" 1 3 4
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stdio.h" 1 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stdio.h" 3 4


int renameat(int, const char *, int, const char *) ;






int renamex_np(const char *, const char *, unsigned int) ;
int renameatx_np(int, const char *, int, const char *, unsigned int) ;




# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 2 3 4

typedef __darwin_off_t fpos_t;
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 126 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (* _close)(void *);
 int (* _read) (void *, char *, int);
 fpos_t (* _seek) (void *, fpos_t, int);
 int (* _write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;
# 79 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 2 3 4


extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;

# 155 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4

void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * restrict, fpos_t *);
char *fgets(char * restrict, int, FILE *);



FILE *fopen(const char * restrict __filename, const char * restrict __mode) __asm("_" "fopen" );

int fprintf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * restrict, FILE * restrict) __asm("_" "fputs" );
size_t fread(void * restrict __ptr, size_t __size, size_t __nitems, FILE * restrict __stream);
FILE *freopen(const char * restrict, const char * restrict,
                 FILE * restrict) __asm("_" "freopen" );
int fscanf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * restrict __ptr, size_t __size, size_t __nitems, FILE * restrict __stream) __asm("_" "fwrite" );
int getc(FILE *);
int getchar(void);
char *gets(char *);
void perror(const char *) __attribute__((__cold__));
int printf(const char * restrict, ...) __attribute__((__format__ (__printf__, 1, 2)));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *__old, const char *__new);
void rewind(FILE *);
int scanf(const char * restrict, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * restrict, char * restrict);
int setvbuf(FILE * restrict, char * restrict, int, size_t);
int sprintf(char * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int sscanf(const char * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);



__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * restrict, const char * restrict, __gnuc_va_list) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * restrict, __gnuc_va_list) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char * restrict, const char * restrict, __gnuc_va_list) __attribute__((__format__ (__printf__, 2, 0))) ;

# 218 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctermid.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctermid.h" 3 4


char *ctermid(char *);


# 220 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 2 3 4




FILE *fdopen(int, const char *) __asm("_" "fdopen" );

int fileno(FILE *);

# 241 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4

int pclose(FILE *) ;



FILE *popen(const char *, const char *) __asm("_" "popen" ) ;


# 262 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4

int __srget(FILE *);
int __svfscanf(FILE *, const char *, __gnuc_va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);








extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 299 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4

void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



int getw(FILE *);
int putw(int, FILE *);




__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tempnam(const char *__dir, const char *__prefix) __asm("_" "tempnam" );

# 338 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_off_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 339 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 2 3 4


int fseeko(FILE * __stream, off_t __offset, int __whence);
off_t ftello(FILE * __stream);





int snprintf(char * restrict __str, size_t __size, const char * restrict __format, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * restrict __stream, const char * restrict __format, __gnuc_va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * restrict __format, __gnuc_va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * restrict __str, size_t __size, const char * restrict __format, __gnuc_va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * restrict __str, const char * restrict __format, __gnuc_va_list) __attribute__((__format__ (__scanf__, 2, 0)));

# 363 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 364 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 2 3 4


int dprintf(int, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int vdprintf(int, const char * restrict, __gnuc_va_list) __attribute__((__format__ (__printf__, 2, 0))) ;
ssize_t getdelim(char ** restrict __linep, size_t * restrict __linecapp, int __delimiter, FILE * restrict __stream) ;
ssize_t getline(char ** restrict __linep, size_t * restrict __linecapp, FILE * restrict __stream) ;
FILE *fmemopen(void * restrict __buf, size_t __size, const char * restrict __mode) ;
FILE *open_memstream(char **__bufp, size_t *__sizep) ;









extern const int sys_nerr;
extern const char *const sys_errlist[];

int asprintf(char ** restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
char *ctermid_r(char *);
char *fgetln(FILE *, size_t *);
const char *fmtcheck(const char *, const char *);
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char ** restrict, const char * restrict, __gnuc_va_list) __attribute__((__format__ (__printf__, 2, 0)));
FILE *zopen(const char *, const char *, int);





FILE *funopen(const void *,
                 int (* )(void *, char *, int),
                 int (* )(void *, const char *, int),
                 fpos_t (* )(void *, fpos_t, int),
                 int (* )(void *));

# 421 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_stdio.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_common.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_stdio.h" 2 3 4
# 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_stdio.h" 3 4
extern int __sprintf_chk (char * restrict, int, size_t,
     const char * restrict, ...);
# 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_stdio.h" 3 4
extern int __snprintf_chk (char * restrict, size_t, int, size_t,
      const char * restrict, ...);







extern int __vsprintf_chk (char * restrict, int, size_t,
      const char * restrict, va_list);







extern int __vsnprintf_chk (char * restrict, size_t, int, size_t,
       const char * restrict, va_list);
# 422 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 2 3 4
# 28 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/mips.h" 1 3 4
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/mips.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 1 3 4
# 36 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/symcat.h" 1 3 4
# 37 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 2 3 4
# 62 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
typedef long long bfd_int64_t;
typedef unsigned long long bfd_uint64_t;
# 79 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
typedef struct bfd bfd;
# 91 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
typedef int bfd_boolean;
# 104 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
typedef unsigned long long bfd_vma;
typedef long long bfd_signed_vma;
typedef unsigned long long bfd_size_type;
typedef unsigned long long symvalue;
# 159 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
typedef long long file_ptr;
typedef unsigned long long ufile_ptr;

extern void bfd_sprintf_vma (bfd *, char *, bfd_vma);
extern void bfd_fprintf_vma (bfd *, void *, bfd_vma);




typedef unsigned int flagword;
typedef unsigned char bfd_byte;



typedef enum bfd_format
{
  bfd_unknown = 0,
  bfd_object,
  bfd_archive,
  bfd_core,
  bfd_type_end
}
bfd_format;
# 250 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
typedef unsigned long symindex;


typedef const struct reloc_howto_struct reloc_howto_type;
# 272 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
typedef struct carsym
{
  char *name;
  file_ptr file_offset;
}
carsym;



struct orl
{
  char **name;
  union
  {
    file_ptr pos;
    bfd *abfd;
  } u;
  int namidx;
};


typedef struct lineno_cache_entry
{
  unsigned int line_number;
  union
  {
    struct bfd_symbol *sym;
    bfd_vma offset;
  } u;
}
alent;






typedef struct bfd_section *sec_ptr;
# 334 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
typedef struct stat stat_type;

typedef enum bfd_print_symbol
{
  bfd_print_symbol_name,
  bfd_print_symbol_more,
  bfd_print_symbol_all
} bfd_print_symbol_type;



typedef struct _symbol_info
{
  symvalue value;
  char type;
  const char *name;
  unsigned char stab_type;
  char stab_other;
  short stab_desc;
  const char *stab_name;
} symbol_info;



extern const char *bfd_get_stab_name (int);






struct bfd_hash_entry
{

  struct bfd_hash_entry *next;

  const char *string;


  unsigned long hash;
};



struct bfd_hash_table
{

  struct bfd_hash_entry **table;

  unsigned int size;

  unsigned int entsize;







  struct bfd_hash_entry *(*newfunc)
    (struct bfd_hash_entry *, struct bfd_hash_table *, const char *);


  void *memory;
};


extern bfd_boolean bfd_hash_table_init
  (struct bfd_hash_table *,
   struct bfd_hash_entry *(*) (struct bfd_hash_entry *,
          struct bfd_hash_table *,
          const char *),
   unsigned int);


extern bfd_boolean bfd_hash_table_init_n
  (struct bfd_hash_table *,
   struct bfd_hash_entry *(*) (struct bfd_hash_entry *,
          struct bfd_hash_table *,
          const char *),
   unsigned int, unsigned int);


extern void bfd_hash_table_free
  (struct bfd_hash_table *);





extern struct bfd_hash_entry *bfd_hash_lookup
  (struct bfd_hash_table *, const char *, bfd_boolean create,
   bfd_boolean copy);


extern void bfd_hash_replace
  (struct bfd_hash_table *, struct bfd_hash_entry *old,
   struct bfd_hash_entry *nw);


extern struct bfd_hash_entry *bfd_hash_newfunc
  (struct bfd_hash_entry *, struct bfd_hash_table *, const char *);


extern void *bfd_hash_allocate
  (struct bfd_hash_table *, unsigned int);




extern void bfd_hash_traverse
  (struct bfd_hash_table *,
   bfd_boolean (*) (struct bfd_hash_entry *, void *),
   void *info);




extern void bfd_hash_set_default_size (bfd_size_type);




struct stab_info
{

  struct bfd_strtab_hash *strings;

  struct bfd_hash_table includes;

  struct bfd_section *stabstr;
};
# 474 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
extern bfd_size_type bfd_bread (void *, bfd_size_type, bfd *);
extern bfd_size_type bfd_bwrite (const void *, bfd_size_type, bfd *);
extern int bfd_seek (bfd *, file_ptr, int);
extern file_ptr bfd_tell (bfd *);
extern int bfd_flush (bfd *);
extern int bfd_stat (bfd *, struct stat *);
# 506 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
extern void warn_deprecated (const char *, const char *, int, const char *);
# 544 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
extern bfd_boolean bfd_cache_close
  (bfd *abfd);


extern bfd_boolean bfd_cache_close_all (void);

extern bfd_boolean bfd_record_phdr
  (bfd *, unsigned long, bfd_boolean, flagword, bfd_boolean, bfd_vma,
   bfd_boolean, bfd_boolean, unsigned int, struct bfd_section **);



bfd_uint64_t bfd_getb64 (const void *);
bfd_uint64_t bfd_getl64 (const void *);
bfd_int64_t bfd_getb_signed_64 (const void *);
bfd_int64_t bfd_getl_signed_64 (const void *);
bfd_signed_vma bfd_getb_signed_32 (const void *);
bfd_signed_vma bfd_getl_signed_32 (const void *);






bfd_signed_vma bfd_getb_signed_16 (const void *);
bfd_signed_vma bfd_getl_signed_16 (const void *);
void bfd_putb64 (bfd_uint64_t, void *);
void bfd_putl64 (bfd_uint64_t, void *);
void bfd_putb32 (bfd_vma, void *);
void bfd_putl32 (bfd_vma, void *);
void bfd_putb16 (bfd_vma, void *);
void bfd_putl16 (bfd_vma, void *);




static inline bfd_uint64_t
bfd_get_bits (const void *p, int bits, bfd_boolean big_p)
{
  const bfd_byte *addr = (const bfd_byte *) p;
  bfd_uint64_t data;
  int i;
  int bytes;

  if (bits % 8 != 0)
    return 0;

  data = 0;
  bytes = bits / 8;
  for (i = 0; i < bytes; i++)
    {
      int addr_index = big_p ? i : bytes - i - 1;

      data = (data << 8) | addr[addr_index];
    }

  return data;
}
void bfd_put_bits (bfd_uint64_t, void *, int, bfd_boolean);

extern bfd_boolean bfd_section_already_linked_table_init (void);
extern void bfd_section_already_linked_table_free (void);




struct ecoff_debug_info;
struct ecoff_debug_swap;
struct ecoff_extr;
struct bfd_symbol;
struct bfd_link_info;
struct bfd_link_hash_entry;
struct bfd_elf_version_tree;

extern bfd_vma bfd_ecoff_get_gp_value
  (bfd * abfd);
extern bfd_boolean bfd_ecoff_set_gp_value
  (bfd *abfd, bfd_vma gp_value);
extern bfd_boolean bfd_ecoff_set_regmasks
  (bfd *abfd, unsigned long gprmask, unsigned long fprmask,
   unsigned long *cprmask);
extern void *bfd_ecoff_debug_init
  (bfd *output_bfd, struct ecoff_debug_info *output_debug,
   const struct ecoff_debug_swap *output_swap, struct bfd_link_info *);
extern void bfd_ecoff_debug_free
  (void *handle, bfd *output_bfd, struct ecoff_debug_info *output_debug,
   const struct ecoff_debug_swap *output_swap, struct bfd_link_info *);
extern bfd_boolean bfd_ecoff_debug_accumulate
  (void *handle, bfd *output_bfd, struct ecoff_debug_info *output_debug,
   const struct ecoff_debug_swap *output_swap, bfd *input_bfd,
   struct ecoff_debug_info *input_debug,
   const struct ecoff_debug_swap *input_swap, struct bfd_link_info *);
extern bfd_boolean bfd_ecoff_debug_accumulate_other
  (void *handle, bfd *output_bfd, struct ecoff_debug_info *output_debug,
   const struct ecoff_debug_swap *output_swap, bfd *input_bfd,
   struct bfd_link_info *);
extern bfd_boolean bfd_ecoff_debug_externals
  (bfd *abfd, struct ecoff_debug_info *debug,
   const struct ecoff_debug_swap *swap, bfd_boolean relocatable,
   bfd_boolean (*get_extr) (struct bfd_symbol *, struct ecoff_extr *),
   void (*set_index) (struct bfd_symbol *, bfd_size_type));
extern bfd_boolean bfd_ecoff_debug_one_external
  (bfd *abfd, struct ecoff_debug_info *debug,
   const struct ecoff_debug_swap *swap, const char *name,
   struct ecoff_extr *esym);
extern bfd_size_type bfd_ecoff_debug_size
  (bfd *abfd, struct ecoff_debug_info *debug,
   const struct ecoff_debug_swap *swap);
extern bfd_boolean bfd_ecoff_write_debug
  (bfd *abfd, struct ecoff_debug_info *debug,
   const struct ecoff_debug_swap *swap, file_ptr where);
extern bfd_boolean bfd_ecoff_write_accumulated_debug
  (void *handle, bfd *abfd, struct ecoff_debug_info *debug,
   const struct ecoff_debug_swap *swap,
   struct bfd_link_info *info, file_ptr where);



struct bfd_link_needed_list
{
  struct bfd_link_needed_list *next;
  bfd *by;
  const char *name;
};

enum dynamic_lib_link_class {
  DYN_NORMAL = 0,
  DYN_AS_NEEDED = 1,
  DYN_DT_NEEDED = 2,
  DYN_NO_ADD_NEEDED = 4,
  DYN_NO_NEEDED = 8
};

extern bfd_boolean bfd_elf_record_link_assignment
  (bfd *, struct bfd_link_info *, const char *, bfd_boolean,
   bfd_boolean);
extern struct bfd_link_needed_list *bfd_elf_get_needed_list
  (bfd *, struct bfd_link_info *);
extern bfd_boolean bfd_elf_get_bfd_needed_list
  (bfd *, struct bfd_link_needed_list **);
extern bfd_boolean bfd_elf_size_dynamic_sections
  (bfd *, const char *, const char *, const char *, const char * const *,
   struct bfd_link_info *, struct bfd_section **,
   struct bfd_elf_version_tree *);
extern bfd_boolean bfd_elf_size_dynsym_hash_dynstr
  (bfd *, struct bfd_link_info *);
extern void bfd_elf_set_dt_needed_name
  (bfd *, const char *);
extern const char *bfd_elf_get_dt_soname
  (bfd *);
extern void bfd_elf_set_dyn_lib_class
  (bfd *, int);
extern int bfd_elf_get_dyn_lib_class
  (bfd *);
extern struct bfd_link_needed_list *bfd_elf_get_runpath_list
  (bfd *, struct bfd_link_info *);
extern bfd_boolean bfd_elf_discard_info
  (bfd *, struct bfd_link_info *);
extern unsigned int _bfd_elf_default_action_discarded
  (struct bfd_section *);




extern long bfd_get_elf_phdr_upper_bound
  (bfd *abfd);
# 718 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
extern int bfd_get_elf_phdrs
  (bfd *abfd, void *phdrs);
# 733 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
extern bfd *bfd_elf_bfd_from_remote_memory
  (bfd *templ, bfd_vma ehdr_vma, bfd_vma *loadbasep,
   int (*target_read_memory) (bfd_vma vma, bfd_byte *myaddr, int len));


extern int bfd_get_arch_size
  (bfd *);


extern int bfd_get_sign_extend_vma
  (bfd *);

extern struct bfd_section *_bfd_elf_tls_setup
  (bfd *, struct bfd_link_info *);

extern void _bfd_fix_excluded_sec_syms
  (bfd *, struct bfd_link_info *);

extern unsigned bfd_m68k_mach_to_features (int);

extern int bfd_m68k_features_to_mach (unsigned);

extern bfd_boolean bfd_m68k_elf32_create_embedded_relocs
  (bfd *, struct bfd_link_info *, struct bfd_section *, struct bfd_section *,
   char **);

extern bfd_boolean bfd_bfin_elf32_create_embedded_relocs
  (bfd *, struct bfd_link_info *, struct bfd_section *, struct bfd_section *,
   char **);



extern struct bfd_link_needed_list *bfd_sunos_get_needed_list
  (bfd *, struct bfd_link_info *);
extern bfd_boolean bfd_sunos_record_link_assignment
  (bfd *, struct bfd_link_info *, const char *);
extern bfd_boolean bfd_sunos_size_dynamic_sections
  (bfd *, struct bfd_link_info *, struct bfd_section **,
   struct bfd_section **, struct bfd_section **);



extern bfd_boolean bfd_i386linux_size_dynamic_sections
  (bfd *, struct bfd_link_info *);
extern bfd_boolean bfd_m68klinux_size_dynamic_sections
  (bfd *, struct bfd_link_info *);
extern bfd_boolean bfd_sparclinux_size_dynamic_sections
  (bfd *, struct bfd_link_info *);



struct _bfd_window_internal;
typedef struct _bfd_window_internal bfd_window_internal;

typedef struct _bfd_window
{

  void *data;
  bfd_size_type size;






  struct _bfd_window_internal *i;
}
bfd_window;

extern void bfd_init_window
  (bfd_window *);
extern void bfd_free_window
  (bfd_window *);
extern bfd_boolean bfd_get_file_window
  (bfd *, file_ptr, bfd_size_type, bfd_window *, bfd_boolean);



extern bfd_boolean bfd_xcoff_link_record_set
  (bfd *, struct bfd_link_info *, struct bfd_link_hash_entry *, bfd_size_type);
extern bfd_boolean bfd_xcoff_import_symbol
  (bfd *, struct bfd_link_info *, struct bfd_link_hash_entry *, bfd_vma,
   const char *, const char *, const char *, unsigned int);
extern bfd_boolean bfd_xcoff_export_symbol
  (bfd *, struct bfd_link_info *, struct bfd_link_hash_entry *);
extern bfd_boolean bfd_xcoff_link_count_reloc
  (bfd *, struct bfd_link_info *, const char *);
extern bfd_boolean bfd_xcoff_record_link_assignment
  (bfd *, struct bfd_link_info *, const char *);
extern bfd_boolean bfd_xcoff_size_dynamic_sections
  (bfd *, struct bfd_link_info *, const char *, const char *,
   unsigned long, unsigned long, unsigned long, bfd_boolean,
   int, bfd_boolean, bfd_boolean, struct bfd_section **, bfd_boolean);
extern bfd_boolean bfd_xcoff_link_generate_rtinit
  (bfd *, const char *, const char *, bfd_boolean);


extern bfd_boolean bfd_xcoff_ar_archive_set_magic
  (bfd *, char *);




struct internal_syment;
union internal_auxent;


extern bfd_boolean bfd_coff_get_syment
  (bfd *, struct bfd_symbol *, struct internal_syment *);

extern bfd_boolean bfd_coff_get_auxent
  (bfd *, struct bfd_symbol *, int, union internal_auxent *);

extern bfd_boolean bfd_coff_set_symbol_class
  (bfd *, struct bfd_symbol *, unsigned int);

extern bfd_boolean bfd_m68k_coff_create_embedded_relocs
  (bfd *, struct bfd_link_info *, struct bfd_section *, struct bfd_section *, char **);


extern bfd_boolean bfd_arm_allocate_interworking_sections
  (struct bfd_link_info *);

extern bfd_boolean bfd_arm_process_before_allocation
  (bfd *, struct bfd_link_info *, int);

extern bfd_boolean bfd_arm_get_bfd_for_interworking
  (bfd *, struct bfd_link_info *);


extern bfd_boolean bfd_arm_pe_allocate_interworking_sections
  (struct bfd_link_info *);

extern bfd_boolean bfd_arm_pe_process_before_allocation
  (bfd *, struct bfd_link_info *, int);

extern bfd_boolean bfd_arm_pe_get_bfd_for_interworking
  (bfd *, struct bfd_link_info *);


extern bfd_boolean bfd_elf32_arm_allocate_interworking_sections
  (struct bfd_link_info *);

extern bfd_boolean bfd_elf32_arm_process_before_allocation
  (bfd *, struct bfd_link_info *, int);

void bfd_elf32_arm_set_target_relocs
  (struct bfd_link_info *, int, char *, int, int);

extern bfd_boolean bfd_elf32_arm_get_bfd_for_interworking
  (bfd *, struct bfd_link_info *);

extern bfd_boolean bfd_elf32_arm_add_glue_sections_to_bfd
  (bfd *, struct bfd_link_info *);


extern bfd_boolean bfd_is_arm_mapping_symbol_name
  (const char * name);


extern bfd_boolean bfd_arm_merge_machines
  (bfd *, bfd *);

extern bfd_boolean bfd_arm_update_notes
  (bfd *, const char *);

extern unsigned int bfd_arm_get_mach_from_notes
  (bfd *, const char *);


extern void bfd_ticoff_set_section_load_page
  (struct bfd_section *, int);

extern int bfd_ticoff_get_section_load_page
  (struct bfd_section *);


extern bfd_vma bfd_h8300_pad_address
  (bfd *, bfd_vma);


extern void bfd_elf32_ia64_after_parse
  (int);

extern void bfd_elf64_ia64_after_parse
  (int);






struct coff_comdat_info
{

  const char *name;





  long symbol;
};

extern struct coff_comdat_info *bfd_coff_get_comdat_section
  (bfd *, struct bfd_section *);


void bfd_init (void);


bfd *bfd_fopen (const char *filename, const char *target,
    const char *mode, int fd);

bfd *bfd_openr (const char *filename, const char *target);

bfd *bfd_fdopenr (const char *filename, const char *target, int fd);

bfd *bfd_openstreamr (const char *, const char *, void *);

bfd *bfd_openr_iovec (const char *filename, const char *target,
    void *(*open) (struct bfd *nbfd,
    void *open_closure),
    void *open_closure,
    file_ptr (*pread) (struct bfd *nbfd,
    void *stream,
    void *buf,
    file_ptr nbytes,
    file_ptr offset),
    int (*close) (struct bfd *nbfd,
    void *stream));

bfd *bfd_openw (const char *filename, const char *target);

bfd_boolean bfd_close (bfd *abfd);

bfd_boolean bfd_close_all_done (bfd *);

bfd *bfd_create (const char *filename, bfd *templ);

bfd_boolean bfd_make_writable (bfd *abfd);

bfd_boolean bfd_make_readable (bfd *abfd);

unsigned long bfd_calc_gnu_debuglink_crc32
   (unsigned long crc, const unsigned char *buf, bfd_size_type len);

char *bfd_follow_gnu_debuglink (bfd *abfd, const char *dir);

struct bfd_section *bfd_create_gnu_debuglink_section
   (bfd *abfd, const char *filename);

bfd_boolean bfd_fill_in_gnu_debuglink_section
   (bfd *abfd, struct bfd_section *sect, const char *filename);
# 1102 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
long bfd_get_mtime (bfd *abfd);

long bfd_get_size (bfd *abfd);



typedef struct bfd_section
{


  const char *name;


  int id;


  int index;


  struct bfd_section *next;


  struct bfd_section *prev;




  flagword flags;
# 1304 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  unsigned int user_set_vma : 1;


  unsigned int linker_mark : 1;



  unsigned int linker_has_input : 1;


  unsigned int gc_mark : 1;
  unsigned int gc_mark_from_eh : 1;




  unsigned int segment_mark : 1;


  unsigned int sec_info_type:3;







  unsigned int use_rela_p:1;





  unsigned int has_tls_reloc:1;


  unsigned int has_gp_reloc:1;


  unsigned int need_finalize_relax:1;


  unsigned int reloc_done : 1;
# 1356 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_vma vma;




  bfd_vma lma;




  bfd_size_type size;
# 1376 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_size_type rawsize;
# 1385 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_vma output_offset;


  struct bfd_section *output_section;



  unsigned int alignment_power;



  struct reloc_cache_entry *relocation;



  struct reloc_cache_entry **orelocation;


  unsigned reloc_count;





  file_ptr filepos;


  file_ptr rel_filepos;


  file_ptr line_filepos;


  void *userdata;



  unsigned char *contents;


  alent *lineno;


  unsigned int lineno_count;


  unsigned int entsize;



  struct bfd_section *kept_section;



  file_ptr moving_line_filepos;


  int target_index;

  void *used_by_bfd;



  struct relent_chain *constructor_chain;


  bfd *owner;


  struct bfd_symbol *symbol;
  struct bfd_symbol **symbol_ptr_ptr;





  union {
    struct bfd_link_order *link_order;
    struct bfd_section *s;
  } map_head, map_tail;
} asection;
# 1478 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
extern asection bfd_abs_section;



extern asection bfd_und_section;



extern asection bfd_com_section;


extern asection bfd_ind_section;
# 1499 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
extern const struct bfd_symbol * const bfd_abs_symbol;
extern const struct bfd_symbol * const bfd_com_symbol;
extern const struct bfd_symbol * const bfd_und_symbol;
extern const struct bfd_symbol * const bfd_ind_symbol;
# 1635 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
void bfd_section_list_clear (bfd *);

asection *bfd_get_section_by_name (bfd *abfd, const char *name);

asection *bfd_get_section_by_name_if
   (bfd *abfd,
    const char *name,
    bfd_boolean (*func) (bfd *abfd, asection *sect, void *obj),
    void *obj);

char *bfd_get_unique_section_name
   (bfd *abfd, const char *templat, int *count);

asection *bfd_make_section_old_way (bfd *abfd, const char *name);

asection *bfd_make_section_anyway_with_flags
   (bfd *abfd, const char *name, flagword flags);

asection *bfd_make_section_anyway (bfd *abfd, const char *name);

asection *bfd_make_section_with_flags
   (bfd *, const char *name, flagword flags);

asection *bfd_make_section (bfd *, const char *name);

bfd_boolean bfd_set_section_flags
   (bfd *abfd, asection *sec, flagword flags);

void bfd_map_over_sections
   (bfd *abfd,
    void (*func) (bfd *abfd, asection *sect, void *obj),
    void *obj);

asection *bfd_sections_find_if
   (bfd *abfd,
    bfd_boolean (*operation) (bfd *abfd, asection *sect, void *obj),
    void *obj);

bfd_boolean bfd_set_section_size
   (bfd *abfd, asection *sec, bfd_size_type val);

bfd_boolean bfd_set_section_contents
   (bfd *abfd, asection *section, const void *data,
    file_ptr offset, bfd_size_type count);

bfd_boolean bfd_get_section_contents
   (bfd *abfd, asection *section, void *location, file_ptr offset,
    bfd_size_type count);

bfd_boolean bfd_malloc_and_get_section
   (bfd *abfd, asection *section, bfd_byte **buf);

bfd_boolean bfd_copy_private_section_data
   (bfd *ibfd, asection *isec, bfd *obfd, asection *osec);




bfd_boolean bfd_generic_is_group_section (bfd *, const asection *sec);

bfd_boolean bfd_generic_discard_group (bfd *abfd, asection *group);


enum bfd_architecture
{
  bfd_arch_unknown,
  bfd_arch_obscure,
  bfd_arch_m68k,
# 1727 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_arch_vax,
  bfd_arch_i960,
# 1746 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_arch_or32,

  bfd_arch_sparc,
# 1767 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_arch_mips,
# 1816 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_arch_i386,





  bfd_arch_we32k,
  bfd_arch_tahoe,
  bfd_arch_i860,
  bfd_arch_i370,
  bfd_arch_romp,
  bfd_arch_convex,
  bfd_arch_m88k,
  bfd_arch_m98k,
  bfd_arch_pyramid,
  bfd_arch_h8300,







  bfd_arch_pdp11,
  bfd_arch_powerpc,
# 1861 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_arch_rs6000,




  bfd_arch_hppa,




  bfd_arch_d10v,



  bfd_arch_d30v,
  bfd_arch_dlx,
  bfd_arch_m68hc11,
  bfd_arch_m68hc12,



  bfd_arch_z8k,


  bfd_arch_h8500,
  bfd_arch_sh,
# 1908 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_arch_alpha,



  bfd_arch_arm,
# 1927 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_arch_ns32k,
  bfd_arch_w65,
  bfd_arch_tic30,
  bfd_arch_tic4x,


  bfd_arch_tic54x,
  bfd_arch_tic80,
  bfd_arch_v850,



  bfd_arch_arc,




 bfd_arch_m32c,


  bfd_arch_m32r,



  bfd_arch_mn10200,
  bfd_arch_mn10300,



  bfd_arch_fr30,

  bfd_arch_frv,
# 1967 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_arch_mcore,
  bfd_arch_ia64,


  bfd_arch_ip2k,


 bfd_arch_iq2000,


  bfd_arch_mt,



  bfd_arch_pj,
  bfd_arch_avr,






  bfd_arch_bfin,

  bfd_arch_cr16c,

  bfd_arch_crx,

  bfd_arch_cris,



  bfd_arch_s390,


  bfd_arch_openrisc,
  bfd_arch_mmix,
  bfd_arch_xstormy16,

  bfd_arch_msp430,
# 2022 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_arch_xc16x,



  bfd_arch_xtensa,

  bfd_arch_tricore,

   bfd_arch_maxq,


  bfd_arch_z80,




  bfd_arch_last
  };

typedef struct bfd_arch_info
{
  int bits_per_word;
  int bits_per_address;
  int bits_per_byte;
  enum bfd_architecture arch;
  unsigned long mach;
  const char *arch_name;
  const char *printable_name;
  unsigned int section_align_power;



  bfd_boolean the_default;
  const struct bfd_arch_info * (*compatible)
    (const struct bfd_arch_info *a, const struct bfd_arch_info *b);

  bfd_boolean (*scan) (const struct bfd_arch_info *, const char *);

  const struct bfd_arch_info *next;
}
bfd_arch_info_type;

const char *bfd_printable_name (bfd *abfd);

const bfd_arch_info_type *bfd_scan_arch (const char *string);

const char **bfd_arch_list (void);

const bfd_arch_info_type *bfd_arch_get_compatible
   (const bfd *abfd, const bfd *bbfd, bfd_boolean accept_unknowns);

void bfd_set_arch_info (bfd *abfd, const bfd_arch_info_type *arg);

enum bfd_architecture bfd_get_arch (bfd *abfd);

unsigned long bfd_get_mach (bfd *abfd);

unsigned int bfd_arch_bits_per_byte (bfd *abfd);

unsigned int bfd_arch_bits_per_address (bfd *abfd);

const bfd_arch_info_type *bfd_get_arch_info (bfd *abfd);

const bfd_arch_info_type *bfd_lookup_arch
   (enum bfd_architecture arch, unsigned long machine);

const char *bfd_printable_arch_mach
   (enum bfd_architecture arch, unsigned long machine);

unsigned int bfd_octets_per_byte (bfd *abfd);

unsigned int bfd_arch_mach_octets_per_byte
   (enum bfd_architecture arch, unsigned long machine);


typedef enum bfd_reloc_status
{

  bfd_reloc_ok,


  bfd_reloc_overflow,


  bfd_reloc_outofrange,


  bfd_reloc_continue,


  bfd_reloc_notsupported,


  bfd_reloc_other,


  bfd_reloc_undefined,





  bfd_reloc_dangerous
 }
 bfd_reloc_status_type;


typedef struct reloc_cache_entry
{

  struct bfd_symbol **sym_ptr_ptr;


  bfd_size_type address;


  bfd_vma addend;


  reloc_howto_type *howto;

}
arelent;

enum complain_overflow
{

  complain_overflow_dont,




  complain_overflow_bitfield,



  complain_overflow_signed,



  complain_overflow_unsigned
};

struct reloc_howto_struct
{






  unsigned int type;



  unsigned int rightshift;




  int size;



  unsigned int bitsize;





  bfd_boolean pc_relative;



  unsigned int bitpos;



  enum complain_overflow complain_on_overflow;





  bfd_reloc_status_type (*special_function)
    (bfd *, arelent *, struct bfd_symbol *, void *, asection *,
     bfd *, char **);


  char *name;
# 2228 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_boolean partial_inplace;
# 2238 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_vma src_mask;



  bfd_vma dst_mask;







  bfd_boolean pcrel_offset;
};
# 2278 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
unsigned int bfd_get_reloc_size (reloc_howto_type *);

typedef struct relent_chain
{
  arelent relent;
  struct relent_chain *next;
}
arelent_chain;

bfd_reloc_status_type bfd_check_overflow
   (enum complain_overflow how,
    unsigned int bitsize,
    unsigned int rightshift,
    unsigned int addrsize,
    bfd_vma relocation);

bfd_reloc_status_type bfd_perform_relocation
   (bfd *abfd,
    arelent *reloc_entry,
    void *data,
    asection *input_section,
    bfd *output_bfd,
    char **error_message);

bfd_reloc_status_type bfd_install_relocation
   (bfd *abfd,
    arelent *reloc_entry,
    void *data, bfd_vma data_start,
    asection *input_section,
    char **error_message);

enum bfd_reloc_code_real {
  _dummy_first_bfd_reloc_code_real,



  BFD_RELOC_64,
  BFD_RELOC_32,
  BFD_RELOC_26,
  BFD_RELOC_24,
  BFD_RELOC_16,
  BFD_RELOC_14,
  BFD_RELOC_8,






  BFD_RELOC_64_PCREL,
  BFD_RELOC_32_PCREL,
  BFD_RELOC_24_PCREL,
  BFD_RELOC_16_PCREL,
  BFD_RELOC_12_PCREL,
  BFD_RELOC_8_PCREL,


  BFD_RELOC_32_SECREL,


  BFD_RELOC_32_GOT_PCREL,
  BFD_RELOC_16_GOT_PCREL,
  BFD_RELOC_8_GOT_PCREL,
  BFD_RELOC_32_GOTOFF,
  BFD_RELOC_16_GOTOFF,
  BFD_RELOC_LO16_GOTOFF,
  BFD_RELOC_HI16_GOTOFF,
  BFD_RELOC_HI16_S_GOTOFF,
  BFD_RELOC_8_GOTOFF,
  BFD_RELOC_64_PLT_PCREL,
  BFD_RELOC_32_PLT_PCREL,
  BFD_RELOC_24_PLT_PCREL,
  BFD_RELOC_16_PLT_PCREL,
  BFD_RELOC_8_PLT_PCREL,
  BFD_RELOC_64_PLTOFF,
  BFD_RELOC_32_PLTOFF,
  BFD_RELOC_16_PLTOFF,
  BFD_RELOC_LO16_PLTOFF,
  BFD_RELOC_HI16_PLTOFF,
  BFD_RELOC_HI16_S_PLTOFF,
  BFD_RELOC_8_PLTOFF,


  BFD_RELOC_68K_GLOB_DAT,
  BFD_RELOC_68K_JMP_SLOT,
  BFD_RELOC_68K_RELATIVE,


  BFD_RELOC_32_BASEREL,
  BFD_RELOC_16_BASEREL,
  BFD_RELOC_LO16_BASEREL,
  BFD_RELOC_HI16_BASEREL,
  BFD_RELOC_HI16_S_BASEREL,
  BFD_RELOC_8_BASEREL,
  BFD_RELOC_RVA,


  BFD_RELOC_8_FFnn,







  BFD_RELOC_32_PCREL_S2,
  BFD_RELOC_16_PCREL_S2,
  BFD_RELOC_23_PCREL_S2,



  BFD_RELOC_HI22,
  BFD_RELOC_LO10,





  BFD_RELOC_GPREL16,
  BFD_RELOC_GPREL32,


  BFD_RELOC_I960_CALLJ,



  BFD_RELOC_NONE,
  BFD_RELOC_SPARC_WDISP22,
  BFD_RELOC_SPARC22,
  BFD_RELOC_SPARC13,
  BFD_RELOC_SPARC_GOT10,
  BFD_RELOC_SPARC_GOT13,
  BFD_RELOC_SPARC_GOT22,
  BFD_RELOC_SPARC_PC10,
  BFD_RELOC_SPARC_PC22,
  BFD_RELOC_SPARC_WPLT30,
  BFD_RELOC_SPARC_COPY,
  BFD_RELOC_SPARC_GLOB_DAT,
  BFD_RELOC_SPARC_JMP_SLOT,
  BFD_RELOC_SPARC_RELATIVE,
  BFD_RELOC_SPARC_UA16,
  BFD_RELOC_SPARC_UA32,
  BFD_RELOC_SPARC_UA64,


  BFD_RELOC_SPARC_BASE13,
  BFD_RELOC_SPARC_BASE22,



  BFD_RELOC_SPARC_10,
  BFD_RELOC_SPARC_11,
  BFD_RELOC_SPARC_OLO10,
  BFD_RELOC_SPARC_HH22,
  BFD_RELOC_SPARC_HM10,
  BFD_RELOC_SPARC_LM22,
  BFD_RELOC_SPARC_PC_HH22,
  BFD_RELOC_SPARC_PC_HM10,
  BFD_RELOC_SPARC_PC_LM22,
  BFD_RELOC_SPARC_WDISP16,
  BFD_RELOC_SPARC_WDISP19,
  BFD_RELOC_SPARC_7,
  BFD_RELOC_SPARC_6,
  BFD_RELOC_SPARC_5,

  BFD_RELOC_SPARC_PLT32,
  BFD_RELOC_SPARC_PLT64,
  BFD_RELOC_SPARC_HIX22,
  BFD_RELOC_SPARC_LOX10,
  BFD_RELOC_SPARC_H44,
  BFD_RELOC_SPARC_M44,
  BFD_RELOC_SPARC_L44,
  BFD_RELOC_SPARC_REGISTER,


  BFD_RELOC_SPARC_REV32,


  BFD_RELOC_SPARC_TLS_GD_HI22,
  BFD_RELOC_SPARC_TLS_GD_LO10,
  BFD_RELOC_SPARC_TLS_GD_ADD,
  BFD_RELOC_SPARC_TLS_GD_CALL,
  BFD_RELOC_SPARC_TLS_LDM_HI22,
  BFD_RELOC_SPARC_TLS_LDM_LO10,
  BFD_RELOC_SPARC_TLS_LDM_ADD,
  BFD_RELOC_SPARC_TLS_LDM_CALL,
  BFD_RELOC_SPARC_TLS_LDO_HIX22,
  BFD_RELOC_SPARC_TLS_LDO_LOX10,
  BFD_RELOC_SPARC_TLS_LDO_ADD,
  BFD_RELOC_SPARC_TLS_IE_HI22,
  BFD_RELOC_SPARC_TLS_IE_LO10,
  BFD_RELOC_SPARC_TLS_IE_LD,
  BFD_RELOC_SPARC_TLS_IE_LDX,
  BFD_RELOC_SPARC_TLS_IE_ADD,
  BFD_RELOC_SPARC_TLS_LE_HIX22,
  BFD_RELOC_SPARC_TLS_LE_LOX10,
  BFD_RELOC_SPARC_TLS_DTPMOD32,
  BFD_RELOC_SPARC_TLS_DTPMOD64,
  BFD_RELOC_SPARC_TLS_DTPOFF32,
  BFD_RELOC_SPARC_TLS_DTPOFF64,
  BFD_RELOC_SPARC_TLS_TPOFF32,
  BFD_RELOC_SPARC_TLS_TPOFF64,







  BFD_RELOC_ALPHA_GPDISP_HI16,





  BFD_RELOC_ALPHA_GPDISP_LO16,




  BFD_RELOC_ALPHA_GPDISP,
# 2523 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  BFD_RELOC_ALPHA_LITERAL,
  BFD_RELOC_ALPHA_ELF_LITERAL,
  BFD_RELOC_ALPHA_LITUSE,




  BFD_RELOC_ALPHA_HINT,



  BFD_RELOC_ALPHA_LINKAGE,



  BFD_RELOC_ALPHA_CODEADDR,



  BFD_RELOC_ALPHA_GPREL_HI16,
  BFD_RELOC_ALPHA_GPREL_LO16,




  BFD_RELOC_ALPHA_BRSGP,


  BFD_RELOC_ALPHA_TLSGD,
  BFD_RELOC_ALPHA_TLSLDM,
  BFD_RELOC_ALPHA_DTPMOD64,
  BFD_RELOC_ALPHA_GOTDTPREL16,
  BFD_RELOC_ALPHA_DTPREL64,
  BFD_RELOC_ALPHA_DTPREL_HI16,
  BFD_RELOC_ALPHA_DTPREL_LO16,
  BFD_RELOC_ALPHA_DTPREL16,
  BFD_RELOC_ALPHA_GOTTPREL16,
  BFD_RELOC_ALPHA_TPREL64,
  BFD_RELOC_ALPHA_TPREL_HI16,
  BFD_RELOC_ALPHA_TPREL_LO16,
  BFD_RELOC_ALPHA_TPREL16,



  BFD_RELOC_MIPS_JMP,


  BFD_RELOC_MIPS16_JMP,


  BFD_RELOC_MIPS16_GPREL,


  BFD_RELOC_HI16,





  BFD_RELOC_HI16_S,


  BFD_RELOC_LO16,


  BFD_RELOC_HI16_PCREL,


  BFD_RELOC_HI16_S_PCREL,


  BFD_RELOC_LO16_PCREL,


  BFD_RELOC_MIPS16_HI16,





  BFD_RELOC_MIPS16_HI16_S,


  BFD_RELOC_MIPS16_LO16,


  BFD_RELOC_MIPS_LITERAL,


  BFD_RELOC_MIPS_GOT16,
  BFD_RELOC_MIPS_CALL16,
  BFD_RELOC_MIPS_GOT_HI16,
  BFD_RELOC_MIPS_GOT_LO16,
  BFD_RELOC_MIPS_CALL_HI16,
  BFD_RELOC_MIPS_CALL_LO16,
  BFD_RELOC_MIPS_SUB,
  BFD_RELOC_MIPS_GOT_PAGE,
  BFD_RELOC_MIPS_GOT_OFST,
  BFD_RELOC_MIPS_GOT_DISP,
  BFD_RELOC_MIPS_SHIFT5,
  BFD_RELOC_MIPS_SHIFT6,
  BFD_RELOC_MIPS_INSERT_A,
  BFD_RELOC_MIPS_INSERT_B,
  BFD_RELOC_MIPS_DELETE,
  BFD_RELOC_MIPS_HIGHEST,
  BFD_RELOC_MIPS_HIGHER,
  BFD_RELOC_MIPS_SCN_DISP,
  BFD_RELOC_MIPS_REL16,
  BFD_RELOC_MIPS_RELGOT,
  BFD_RELOC_MIPS_JALR,
  BFD_RELOC_MIPS_TLS_DTPMOD32,
  BFD_RELOC_MIPS_TLS_DTPREL32,
  BFD_RELOC_MIPS_TLS_DTPMOD64,
  BFD_RELOC_MIPS_TLS_DTPREL64,
  BFD_RELOC_MIPS_TLS_GD,
  BFD_RELOC_MIPS_TLS_LDM,
  BFD_RELOC_MIPS_TLS_DTPREL_HI16,
  BFD_RELOC_MIPS_TLS_DTPREL_LO16,
  BFD_RELOC_MIPS_TLS_GOTTPREL,
  BFD_RELOC_MIPS_TLS_TPREL32,
  BFD_RELOC_MIPS_TLS_TPREL64,
  BFD_RELOC_MIPS_TLS_TPREL_HI16,
  BFD_RELOC_MIPS_TLS_TPREL_LO16,



  BFD_RELOC_MIPS_COPY,
  BFD_RELOC_MIPS_JUMP_SLOT,



  BFD_RELOC_FRV_LABEL16,
  BFD_RELOC_FRV_LABEL24,
  BFD_RELOC_FRV_LO16,
  BFD_RELOC_FRV_HI16,
  BFD_RELOC_FRV_GPREL12,
  BFD_RELOC_FRV_GPRELU12,
  BFD_RELOC_FRV_GPREL32,
  BFD_RELOC_FRV_GPRELHI,
  BFD_RELOC_FRV_GPRELLO,
  BFD_RELOC_FRV_GOT12,
  BFD_RELOC_FRV_GOTHI,
  BFD_RELOC_FRV_GOTLO,
  BFD_RELOC_FRV_FUNCDESC,
  BFD_RELOC_FRV_FUNCDESC_GOT12,
  BFD_RELOC_FRV_FUNCDESC_GOTHI,
  BFD_RELOC_FRV_FUNCDESC_GOTLO,
  BFD_RELOC_FRV_FUNCDESC_VALUE,
  BFD_RELOC_FRV_FUNCDESC_GOTOFF12,
  BFD_RELOC_FRV_FUNCDESC_GOTOFFHI,
  BFD_RELOC_FRV_FUNCDESC_GOTOFFLO,
  BFD_RELOC_FRV_GOTOFF12,
  BFD_RELOC_FRV_GOTOFFHI,
  BFD_RELOC_FRV_GOTOFFLO,
  BFD_RELOC_FRV_GETTLSOFF,
  BFD_RELOC_FRV_TLSDESC_VALUE,
  BFD_RELOC_FRV_GOTTLSDESC12,
  BFD_RELOC_FRV_GOTTLSDESCHI,
  BFD_RELOC_FRV_GOTTLSDESCLO,
  BFD_RELOC_FRV_TLSMOFF12,
  BFD_RELOC_FRV_TLSMOFFHI,
  BFD_RELOC_FRV_TLSMOFFLO,
  BFD_RELOC_FRV_GOTTLSOFF12,
  BFD_RELOC_FRV_GOTTLSOFFHI,
  BFD_RELOC_FRV_GOTTLSOFFLO,
  BFD_RELOC_FRV_TLSOFF,
  BFD_RELOC_FRV_TLSDESC_RELAX,
  BFD_RELOC_FRV_GETTLSOFF_RELAX,
  BFD_RELOC_FRV_TLSOFF_RELAX,
  BFD_RELOC_FRV_TLSMOFF,



  BFD_RELOC_MN10300_GOTOFF24,



  BFD_RELOC_MN10300_GOT32,



  BFD_RELOC_MN10300_GOT24,



  BFD_RELOC_MN10300_GOT16,


  BFD_RELOC_MN10300_COPY,


  BFD_RELOC_MN10300_GLOB_DAT,


  BFD_RELOC_MN10300_JMP_SLOT,


  BFD_RELOC_MN10300_RELATIVE,



  BFD_RELOC_386_GOT32,
  BFD_RELOC_386_PLT32,
  BFD_RELOC_386_COPY,
  BFD_RELOC_386_GLOB_DAT,
  BFD_RELOC_386_JUMP_SLOT,
  BFD_RELOC_386_RELATIVE,
  BFD_RELOC_386_GOTOFF,
  BFD_RELOC_386_GOTPC,
  BFD_RELOC_386_TLS_TPOFF,
  BFD_RELOC_386_TLS_IE,
  BFD_RELOC_386_TLS_GOTIE,
  BFD_RELOC_386_TLS_LE,
  BFD_RELOC_386_TLS_GD,
  BFD_RELOC_386_TLS_LDM,
  BFD_RELOC_386_TLS_LDO_32,
  BFD_RELOC_386_TLS_IE_32,
  BFD_RELOC_386_TLS_LE_32,
  BFD_RELOC_386_TLS_DTPMOD32,
  BFD_RELOC_386_TLS_DTPOFF32,
  BFD_RELOC_386_TLS_TPOFF32,
  BFD_RELOC_386_TLS_GOTDESC,
  BFD_RELOC_386_TLS_DESC_CALL,
  BFD_RELOC_386_TLS_DESC,


  BFD_RELOC_X86_64_GOT32,
  BFD_RELOC_X86_64_PLT32,
  BFD_RELOC_X86_64_COPY,
  BFD_RELOC_X86_64_GLOB_DAT,
  BFD_RELOC_X86_64_JUMP_SLOT,
  BFD_RELOC_X86_64_RELATIVE,
  BFD_RELOC_X86_64_GOTPCREL,
  BFD_RELOC_X86_64_32S,
  BFD_RELOC_X86_64_DTPMOD64,
  BFD_RELOC_X86_64_DTPOFF64,
  BFD_RELOC_X86_64_TPOFF64,
  BFD_RELOC_X86_64_TLSGD,
  BFD_RELOC_X86_64_TLSLD,
  BFD_RELOC_X86_64_DTPOFF32,
  BFD_RELOC_X86_64_GOTTPOFF,
  BFD_RELOC_X86_64_TPOFF32,
  BFD_RELOC_X86_64_GOTOFF64,
  BFD_RELOC_X86_64_GOTPC32,
  BFD_RELOC_X86_64_GOT64,
  BFD_RELOC_X86_64_GOTPCREL64,
  BFD_RELOC_X86_64_GOTPC64,
  BFD_RELOC_X86_64_GOTPLT64,
  BFD_RELOC_X86_64_PLTOFF64,
  BFD_RELOC_X86_64_GOTPC32_TLSDESC,
  BFD_RELOC_X86_64_TLSDESC_CALL,
  BFD_RELOC_X86_64_TLSDESC,


  BFD_RELOC_NS32K_IMM_8,
  BFD_RELOC_NS32K_IMM_16,
  BFD_RELOC_NS32K_IMM_32,
  BFD_RELOC_NS32K_IMM_8_PCREL,
  BFD_RELOC_NS32K_IMM_16_PCREL,
  BFD_RELOC_NS32K_IMM_32_PCREL,
  BFD_RELOC_NS32K_DISP_8,
  BFD_RELOC_NS32K_DISP_16,
  BFD_RELOC_NS32K_DISP_32,
  BFD_RELOC_NS32K_DISP_8_PCREL,
  BFD_RELOC_NS32K_DISP_16_PCREL,
  BFD_RELOC_NS32K_DISP_32_PCREL,


  BFD_RELOC_PDP11_DISP_8_PCREL,
  BFD_RELOC_PDP11_DISP_6_PCREL,


  BFD_RELOC_PJ_CODE_HI16,
  BFD_RELOC_PJ_CODE_LO16,
  BFD_RELOC_PJ_CODE_DIR16,
  BFD_RELOC_PJ_CODE_DIR32,
  BFD_RELOC_PJ_CODE_REL16,
  BFD_RELOC_PJ_CODE_REL32,


  BFD_RELOC_PPC_B26,
  BFD_RELOC_PPC_BA26,
  BFD_RELOC_PPC_TOC16,
  BFD_RELOC_PPC_B16,
  BFD_RELOC_PPC_B16_BRTAKEN,
  BFD_RELOC_PPC_B16_BRNTAKEN,
  BFD_RELOC_PPC_BA16,
  BFD_RELOC_PPC_BA16_BRTAKEN,
  BFD_RELOC_PPC_BA16_BRNTAKEN,
  BFD_RELOC_PPC_COPY,
  BFD_RELOC_PPC_GLOB_DAT,
  BFD_RELOC_PPC_JMP_SLOT,
  BFD_RELOC_PPC_RELATIVE,
  BFD_RELOC_PPC_LOCAL24PC,
  BFD_RELOC_PPC_EMB_NADDR32,
  BFD_RELOC_PPC_EMB_NADDR16,
  BFD_RELOC_PPC_EMB_NADDR16_LO,
  BFD_RELOC_PPC_EMB_NADDR16_HI,
  BFD_RELOC_PPC_EMB_NADDR16_HA,
  BFD_RELOC_PPC_EMB_SDAI16,
  BFD_RELOC_PPC_EMB_SDA2I16,
  BFD_RELOC_PPC_EMB_SDA2REL,
  BFD_RELOC_PPC_EMB_SDA21,
  BFD_RELOC_PPC_EMB_MRKREF,
  BFD_RELOC_PPC_EMB_RELSEC16,
  BFD_RELOC_PPC_EMB_RELST_LO,
  BFD_RELOC_PPC_EMB_RELST_HI,
  BFD_RELOC_PPC_EMB_RELST_HA,
  BFD_RELOC_PPC_EMB_BIT_FLD,
  BFD_RELOC_PPC_EMB_RELSDA,
  BFD_RELOC_PPC64_HIGHER,
  BFD_RELOC_PPC64_HIGHER_S,
  BFD_RELOC_PPC64_HIGHEST,
  BFD_RELOC_PPC64_HIGHEST_S,
  BFD_RELOC_PPC64_TOC16_LO,
  BFD_RELOC_PPC64_TOC16_HI,
  BFD_RELOC_PPC64_TOC16_HA,
  BFD_RELOC_PPC64_TOC,
  BFD_RELOC_PPC64_PLTGOT16,
  BFD_RELOC_PPC64_PLTGOT16_LO,
  BFD_RELOC_PPC64_PLTGOT16_HI,
  BFD_RELOC_PPC64_PLTGOT16_HA,
  BFD_RELOC_PPC64_ADDR16_DS,
  BFD_RELOC_PPC64_ADDR16_LO_DS,
  BFD_RELOC_PPC64_GOT16_DS,
  BFD_RELOC_PPC64_GOT16_LO_DS,
  BFD_RELOC_PPC64_PLT16_LO_DS,
  BFD_RELOC_PPC64_SECTOFF_DS,
  BFD_RELOC_PPC64_SECTOFF_LO_DS,
  BFD_RELOC_PPC64_TOC16_DS,
  BFD_RELOC_PPC64_TOC16_LO_DS,
  BFD_RELOC_PPC64_PLTGOT16_DS,
  BFD_RELOC_PPC64_PLTGOT16_LO_DS,


  BFD_RELOC_PPC_TLS,
  BFD_RELOC_PPC_DTPMOD,
  BFD_RELOC_PPC_TPREL16,
  BFD_RELOC_PPC_TPREL16_LO,
  BFD_RELOC_PPC_TPREL16_HI,
  BFD_RELOC_PPC_TPREL16_HA,
  BFD_RELOC_PPC_TPREL,
  BFD_RELOC_PPC_DTPREL16,
  BFD_RELOC_PPC_DTPREL16_LO,
  BFD_RELOC_PPC_DTPREL16_HI,
  BFD_RELOC_PPC_DTPREL16_HA,
  BFD_RELOC_PPC_DTPREL,
  BFD_RELOC_PPC_GOT_TLSGD16,
  BFD_RELOC_PPC_GOT_TLSGD16_LO,
  BFD_RELOC_PPC_GOT_TLSGD16_HI,
  BFD_RELOC_PPC_GOT_TLSGD16_HA,
  BFD_RELOC_PPC_GOT_TLSLD16,
  BFD_RELOC_PPC_GOT_TLSLD16_LO,
  BFD_RELOC_PPC_GOT_TLSLD16_HI,
  BFD_RELOC_PPC_GOT_TLSLD16_HA,
  BFD_RELOC_PPC_GOT_TPREL16,
  BFD_RELOC_PPC_GOT_TPREL16_LO,
  BFD_RELOC_PPC_GOT_TPREL16_HI,
  BFD_RELOC_PPC_GOT_TPREL16_HA,
  BFD_RELOC_PPC_GOT_DTPREL16,
  BFD_RELOC_PPC_GOT_DTPREL16_LO,
  BFD_RELOC_PPC_GOT_DTPREL16_HI,
  BFD_RELOC_PPC_GOT_DTPREL16_HA,
  BFD_RELOC_PPC64_TPREL16_DS,
  BFD_RELOC_PPC64_TPREL16_LO_DS,
  BFD_RELOC_PPC64_TPREL16_HIGHER,
  BFD_RELOC_PPC64_TPREL16_HIGHERA,
  BFD_RELOC_PPC64_TPREL16_HIGHEST,
  BFD_RELOC_PPC64_TPREL16_HIGHESTA,
  BFD_RELOC_PPC64_DTPREL16_DS,
  BFD_RELOC_PPC64_DTPREL16_LO_DS,
  BFD_RELOC_PPC64_DTPREL16_HIGHER,
  BFD_RELOC_PPC64_DTPREL16_HIGHERA,
  BFD_RELOC_PPC64_DTPREL16_HIGHEST,
  BFD_RELOC_PPC64_DTPREL16_HIGHESTA,


  BFD_RELOC_I370_D12,




  BFD_RELOC_CTOR,



  BFD_RELOC_ARM_PCREL_BRANCH,




  BFD_RELOC_ARM_PCREL_BLX,




  BFD_RELOC_THUMB_PCREL_BLX,


  BFD_RELOC_ARM_PCREL_CALL,


  BFD_RELOC_ARM_PCREL_JUMP,






  BFD_RELOC_THUMB_PCREL_BRANCH7,
  BFD_RELOC_THUMB_PCREL_BRANCH9,
  BFD_RELOC_THUMB_PCREL_BRANCH12,
  BFD_RELOC_THUMB_PCREL_BRANCH20,
  BFD_RELOC_THUMB_PCREL_BRANCH23,
  BFD_RELOC_THUMB_PCREL_BRANCH25,


  BFD_RELOC_ARM_OFFSET_IMM,


  BFD_RELOC_ARM_THUMB_OFFSET,



  BFD_RELOC_ARM_TARGET1,


  BFD_RELOC_ARM_ROSEGREL32,


  BFD_RELOC_ARM_SBREL32,




  BFD_RELOC_ARM_TARGET2,


  BFD_RELOC_ARM_PREL31,


  BFD_RELOC_ARM_JUMP_SLOT,
  BFD_RELOC_ARM_GLOB_DAT,
  BFD_RELOC_ARM_GOT32,
  BFD_RELOC_ARM_PLT32,
  BFD_RELOC_ARM_RELATIVE,
  BFD_RELOC_ARM_GOTOFF,
  BFD_RELOC_ARM_GOTPC,


  BFD_RELOC_ARM_TLS_GD32,
  BFD_RELOC_ARM_TLS_LDO32,
  BFD_RELOC_ARM_TLS_LDM32,
  BFD_RELOC_ARM_TLS_DTPOFF32,
  BFD_RELOC_ARM_TLS_DTPMOD32,
  BFD_RELOC_ARM_TLS_TPOFF32,
  BFD_RELOC_ARM_TLS_IE32,
  BFD_RELOC_ARM_TLS_LE32,



  BFD_RELOC_ARM_IMMEDIATE,
  BFD_RELOC_ARM_ADRL_IMMEDIATE,
  BFD_RELOC_ARM_T32_IMMEDIATE,
  BFD_RELOC_ARM_T32_IMM12,
  BFD_RELOC_ARM_T32_ADD_PC12,
  BFD_RELOC_ARM_SHIFT_IMM,
  BFD_RELOC_ARM_SMC,
  BFD_RELOC_ARM_SWI,
  BFD_RELOC_ARM_MULTI,
  BFD_RELOC_ARM_CP_OFF_IMM,
  BFD_RELOC_ARM_CP_OFF_IMM_S2,
  BFD_RELOC_ARM_T32_CP_OFF_IMM,
  BFD_RELOC_ARM_T32_CP_OFF_IMM_S2,
  BFD_RELOC_ARM_ADR_IMM,
  BFD_RELOC_ARM_LDR_IMM,
  BFD_RELOC_ARM_LITERAL,
  BFD_RELOC_ARM_IN_POOL,
  BFD_RELOC_ARM_OFFSET_IMM8,
  BFD_RELOC_ARM_T32_OFFSET_U8,
  BFD_RELOC_ARM_T32_OFFSET_IMM,
  BFD_RELOC_ARM_HWLITERAL,
  BFD_RELOC_ARM_THUMB_ADD,
  BFD_RELOC_ARM_THUMB_IMM,
  BFD_RELOC_ARM_THUMB_SHIFT,


  BFD_RELOC_SH_PCDISP8BY2,
  BFD_RELOC_SH_PCDISP12BY2,
  BFD_RELOC_SH_IMM3,
  BFD_RELOC_SH_IMM3U,
  BFD_RELOC_SH_DISP12,
  BFD_RELOC_SH_DISP12BY2,
  BFD_RELOC_SH_DISP12BY4,
  BFD_RELOC_SH_DISP12BY8,
  BFD_RELOC_SH_DISP20,
  BFD_RELOC_SH_DISP20BY8,
  BFD_RELOC_SH_IMM4,
  BFD_RELOC_SH_IMM4BY2,
  BFD_RELOC_SH_IMM4BY4,
  BFD_RELOC_SH_IMM8,
  BFD_RELOC_SH_IMM8BY2,
  BFD_RELOC_SH_IMM8BY4,
  BFD_RELOC_SH_PCRELIMM8BY2,
  BFD_RELOC_SH_PCRELIMM8BY4,
  BFD_RELOC_SH_SWITCH16,
  BFD_RELOC_SH_SWITCH32,
  BFD_RELOC_SH_USES,
  BFD_RELOC_SH_COUNT,
  BFD_RELOC_SH_ALIGN,
  BFD_RELOC_SH_CODE,
  BFD_RELOC_SH_DATA,
  BFD_RELOC_SH_LABEL,
  BFD_RELOC_SH_LOOP_START,
  BFD_RELOC_SH_LOOP_END,
  BFD_RELOC_SH_COPY,
  BFD_RELOC_SH_GLOB_DAT,
  BFD_RELOC_SH_JMP_SLOT,
  BFD_RELOC_SH_RELATIVE,
  BFD_RELOC_SH_GOTPC,
  BFD_RELOC_SH_GOT_LOW16,
  BFD_RELOC_SH_GOT_MEDLOW16,
  BFD_RELOC_SH_GOT_MEDHI16,
  BFD_RELOC_SH_GOT_HI16,
  BFD_RELOC_SH_GOTPLT_LOW16,
  BFD_RELOC_SH_GOTPLT_MEDLOW16,
  BFD_RELOC_SH_GOTPLT_MEDHI16,
  BFD_RELOC_SH_GOTPLT_HI16,
  BFD_RELOC_SH_PLT_LOW16,
  BFD_RELOC_SH_PLT_MEDLOW16,
  BFD_RELOC_SH_PLT_MEDHI16,
  BFD_RELOC_SH_PLT_HI16,
  BFD_RELOC_SH_GOTOFF_LOW16,
  BFD_RELOC_SH_GOTOFF_MEDLOW16,
  BFD_RELOC_SH_GOTOFF_MEDHI16,
  BFD_RELOC_SH_GOTOFF_HI16,
  BFD_RELOC_SH_GOTPC_LOW16,
  BFD_RELOC_SH_GOTPC_MEDLOW16,
  BFD_RELOC_SH_GOTPC_MEDHI16,
  BFD_RELOC_SH_GOTPC_HI16,
  BFD_RELOC_SH_COPY64,
  BFD_RELOC_SH_GLOB_DAT64,
  BFD_RELOC_SH_JMP_SLOT64,
  BFD_RELOC_SH_RELATIVE64,
  BFD_RELOC_SH_GOT10BY4,
  BFD_RELOC_SH_GOT10BY8,
  BFD_RELOC_SH_GOTPLT10BY4,
  BFD_RELOC_SH_GOTPLT10BY8,
  BFD_RELOC_SH_GOTPLT32,
  BFD_RELOC_SH_SHMEDIA_CODE,
  BFD_RELOC_SH_IMMU5,
  BFD_RELOC_SH_IMMS6,
  BFD_RELOC_SH_IMMS6BY32,
  BFD_RELOC_SH_IMMU6,
  BFD_RELOC_SH_IMMS10,
  BFD_RELOC_SH_IMMS10BY2,
  BFD_RELOC_SH_IMMS10BY4,
  BFD_RELOC_SH_IMMS10BY8,
  BFD_RELOC_SH_IMMS16,
  BFD_RELOC_SH_IMMU16,
  BFD_RELOC_SH_IMM_LOW16,
  BFD_RELOC_SH_IMM_LOW16_PCREL,
  BFD_RELOC_SH_IMM_MEDLOW16,
  BFD_RELOC_SH_IMM_MEDLOW16_PCREL,
  BFD_RELOC_SH_IMM_MEDHI16,
  BFD_RELOC_SH_IMM_MEDHI16_PCREL,
  BFD_RELOC_SH_IMM_HI16,
  BFD_RELOC_SH_IMM_HI16_PCREL,
  BFD_RELOC_SH_PT_16,
  BFD_RELOC_SH_TLS_GD_32,
  BFD_RELOC_SH_TLS_LD_32,
  BFD_RELOC_SH_TLS_LDO_32,
  BFD_RELOC_SH_TLS_IE_32,
  BFD_RELOC_SH_TLS_LE_32,
  BFD_RELOC_SH_TLS_DTPMOD32,
  BFD_RELOC_SH_TLS_DTPOFF32,
  BFD_RELOC_SH_TLS_TPOFF32,





  BFD_RELOC_ARC_B22_PCREL,




  BFD_RELOC_ARC_B26,


  BFD_RELOC_BFIN_16_IMM,


  BFD_RELOC_BFIN_16_HIGH,


  BFD_RELOC_BFIN_4_PCREL,


  BFD_RELOC_BFIN_5_PCREL,


  BFD_RELOC_BFIN_16_LOW,


  BFD_RELOC_BFIN_10_PCREL,


  BFD_RELOC_BFIN_11_PCREL,


  BFD_RELOC_BFIN_12_PCREL_JUMP,


  BFD_RELOC_BFIN_12_PCREL_JUMP_S,


  BFD_RELOC_BFIN_24_PCREL_CALL_X,


  BFD_RELOC_BFIN_24_PCREL_JUMP_L,


  BFD_RELOC_BFIN_GOT17M4,
  BFD_RELOC_BFIN_GOTHI,
  BFD_RELOC_BFIN_GOTLO,
  BFD_RELOC_BFIN_FUNCDESC,
  BFD_RELOC_BFIN_FUNCDESC_GOT17M4,
  BFD_RELOC_BFIN_FUNCDESC_GOTHI,
  BFD_RELOC_BFIN_FUNCDESC_GOTLO,
  BFD_RELOC_BFIN_FUNCDESC_VALUE,
  BFD_RELOC_BFIN_FUNCDESC_GOTOFF17M4,
  BFD_RELOC_BFIN_FUNCDESC_GOTOFFHI,
  BFD_RELOC_BFIN_FUNCDESC_GOTOFFLO,
  BFD_RELOC_BFIN_GOTOFF17M4,
  BFD_RELOC_BFIN_GOTOFFHI,
  BFD_RELOC_BFIN_GOTOFFLO,


  BFD_RELOC_BFIN_GOT,


  BFD_RELOC_BFIN_PLTPC,


  BFD_ARELOC_BFIN_PUSH,


  BFD_ARELOC_BFIN_CONST,


  BFD_ARELOC_BFIN_ADD,


  BFD_ARELOC_BFIN_SUB,


  BFD_ARELOC_BFIN_MULT,


  BFD_ARELOC_BFIN_DIV,


  BFD_ARELOC_BFIN_MOD,


  BFD_ARELOC_BFIN_LSHIFT,


  BFD_ARELOC_BFIN_RSHIFT,


  BFD_ARELOC_BFIN_AND,


  BFD_ARELOC_BFIN_OR,


  BFD_ARELOC_BFIN_XOR,


  BFD_ARELOC_BFIN_LAND,


  BFD_ARELOC_BFIN_LOR,


  BFD_ARELOC_BFIN_LEN,


  BFD_ARELOC_BFIN_NEG,


  BFD_ARELOC_BFIN_COMP,


  BFD_ARELOC_BFIN_PAGE,


  BFD_ARELOC_BFIN_HWPAGE,


  BFD_ARELOC_BFIN_ADDR,




  BFD_RELOC_D10V_10_PCREL_R,






  BFD_RELOC_D10V_10_PCREL_L,



  BFD_RELOC_D10V_18,



  BFD_RELOC_D10V_18_PCREL,



  BFD_RELOC_D30V_6,



  BFD_RELOC_D30V_9_PCREL,





  BFD_RELOC_D30V_9_PCREL_R,



  BFD_RELOC_D30V_15,



  BFD_RELOC_D30V_15_PCREL,





  BFD_RELOC_D30V_15_PCREL_R,



  BFD_RELOC_D30V_21,



  BFD_RELOC_D30V_21_PCREL,





  BFD_RELOC_D30V_21_PCREL_R,


  BFD_RELOC_D30V_32,


  BFD_RELOC_D30V_32_PCREL,


  BFD_RELOC_DLX_HI16_S,


  BFD_RELOC_DLX_LO16,


  BFD_RELOC_DLX_JMP26,


  BFD_RELOC_M32C_HI8,
  BFD_RELOC_M32C_RL_JUMP,
  BFD_RELOC_M32C_RL_1ADDR,
  BFD_RELOC_M32C_RL_2ADDR,



  BFD_RELOC_M32R_24,


  BFD_RELOC_M32R_10_PCREL,


  BFD_RELOC_M32R_18_PCREL,


  BFD_RELOC_M32R_26_PCREL,



  BFD_RELOC_M32R_HI16_ULO,



  BFD_RELOC_M32R_HI16_SLO,


  BFD_RELOC_M32R_LO16,



  BFD_RELOC_M32R_SDA16,


  BFD_RELOC_M32R_GOT24,
  BFD_RELOC_M32R_26_PLTREL,
  BFD_RELOC_M32R_COPY,
  BFD_RELOC_M32R_GLOB_DAT,
  BFD_RELOC_M32R_JMP_SLOT,
  BFD_RELOC_M32R_RELATIVE,
  BFD_RELOC_M32R_GOTOFF,
  BFD_RELOC_M32R_GOTOFF_HI_ULO,
  BFD_RELOC_M32R_GOTOFF_HI_SLO,
  BFD_RELOC_M32R_GOTOFF_LO,
  BFD_RELOC_M32R_GOTPC24,
  BFD_RELOC_M32R_GOT16_HI_ULO,
  BFD_RELOC_M32R_GOT16_HI_SLO,
  BFD_RELOC_M32R_GOT16_LO,
  BFD_RELOC_M32R_GOTPC_HI_ULO,
  BFD_RELOC_M32R_GOTPC_HI_SLO,
  BFD_RELOC_M32R_GOTPC_LO,



  BFD_RELOC_V850_9_PCREL,


  BFD_RELOC_V850_22_PCREL,


  BFD_RELOC_V850_SDA_16_16_OFFSET,



  BFD_RELOC_V850_SDA_15_16_OFFSET,


  BFD_RELOC_V850_ZDA_16_16_OFFSET,



  BFD_RELOC_V850_ZDA_15_16_OFFSET,



  BFD_RELOC_V850_TDA_6_8_OFFSET,



  BFD_RELOC_V850_TDA_7_8_OFFSET,


  BFD_RELOC_V850_TDA_7_7_OFFSET,


  BFD_RELOC_V850_TDA_16_16_OFFSET,



  BFD_RELOC_V850_TDA_4_5_OFFSET,


  BFD_RELOC_V850_TDA_4_4_OFFSET,



  BFD_RELOC_V850_SDA_16_16_SPLIT_OFFSET,



  BFD_RELOC_V850_ZDA_16_16_SPLIT_OFFSET,


  BFD_RELOC_V850_CALLT_6_7_OFFSET,


  BFD_RELOC_V850_CALLT_16_16_OFFSET,


  BFD_RELOC_V850_LONGCALL,


  BFD_RELOC_V850_LONGJUMP,


  BFD_RELOC_V850_ALIGN,



  BFD_RELOC_V850_LO16_SPLIT_OFFSET,


  BFD_RELOC_V850_16_PCREL,


  BFD_RELOC_V850_17_PCREL,


  BFD_RELOC_V850_23,


  BFD_RELOC_V850_32_PCREL,


  BFD_RELOC_V850_32_ABS,


  BFD_RELOC_V850_16_SPLIT_OFFSET,


  BFD_RELOC_V850_16_S1,


  BFD_RELOC_V850_LO16_S1,


  BFD_RELOC_V850_CALLT_15_16_OFFSET,


  BFD_RELOC_V850_32_GOTPCREL,


  BFD_RELOC_V850_16_GOT,


  BFD_RELOC_V850_32_GOT,


  BFD_RELOC_V850_22_PLT_PCREL,


  BFD_RELOC_V850_32_PLT_PCREL,


  BFD_RELOC_V850_COPY,


  BFD_RELOC_V850_GLOB_DAT,


  BFD_RELOC_V850_JMP_SLOT,


  BFD_RELOC_V850_RELATIVE,


  BFD_RELOC_V850_16_GOTOFF,


  BFD_RELOC_V850_32_GOTOFF,


  BFD_RELOC_V850_CODE,


  BFD_RELOC_V850_DATA,



  BFD_RELOC_MN10300_32_PCREL,



  BFD_RELOC_MN10300_16_PCREL,




  BFD_RELOC_TIC30_LDP,




  BFD_RELOC_TIC54X_PARTLS7,




  BFD_RELOC_TIC54X_PARTMS9,


  BFD_RELOC_TIC54X_23,




  BFD_RELOC_TIC54X_16_OF_23,




  BFD_RELOC_TIC54X_MS7_OF_23,


  BFD_RELOC_FR30_48,



  BFD_RELOC_FR30_20,



  BFD_RELOC_FR30_6_IN_4,



  BFD_RELOC_FR30_8_IN_8,



  BFD_RELOC_FR30_9_IN_8,



  BFD_RELOC_FR30_10_IN_8,



  BFD_RELOC_FR30_9_PCREL,



  BFD_RELOC_FR30_12_PCREL,


  BFD_RELOC_MCORE_PCREL_IMM8BY4,
  BFD_RELOC_MCORE_PCREL_IMM11BY2,
  BFD_RELOC_MCORE_PCREL_IMM4BY2,
  BFD_RELOC_MCORE_PCREL_32,
  BFD_RELOC_MCORE_PCREL_JSR_IMM11BY2,
  BFD_RELOC_MCORE_RVA,


  BFD_RELOC_MMIX_GETA,
  BFD_RELOC_MMIX_GETA_1,
  BFD_RELOC_MMIX_GETA_2,
  BFD_RELOC_MMIX_GETA_3,


  BFD_RELOC_MMIX_CBRANCH,
  BFD_RELOC_MMIX_CBRANCH_J,
  BFD_RELOC_MMIX_CBRANCH_1,
  BFD_RELOC_MMIX_CBRANCH_2,
  BFD_RELOC_MMIX_CBRANCH_3,


  BFD_RELOC_MMIX_PUSHJ,
  BFD_RELOC_MMIX_PUSHJ_1,
  BFD_RELOC_MMIX_PUSHJ_2,
  BFD_RELOC_MMIX_PUSHJ_3,
  BFD_RELOC_MMIX_PUSHJ_STUBBABLE,


  BFD_RELOC_MMIX_JMP,
  BFD_RELOC_MMIX_JMP_1,
  BFD_RELOC_MMIX_JMP_2,
  BFD_RELOC_MMIX_JMP_3,



  BFD_RELOC_MMIX_ADDR19,


  BFD_RELOC_MMIX_ADDR27,



  BFD_RELOC_MMIX_REG_OR_BYTE,



  BFD_RELOC_MMIX_REG,



  BFD_RELOC_MMIX_BASE_PLUS_OFFSET,



  BFD_RELOC_MMIX_LOCAL,



  BFD_RELOC_AVR_7_PCREL,



  BFD_RELOC_AVR_13_PCREL,



  BFD_RELOC_AVR_16_PM,



  BFD_RELOC_AVR_LO8_LDI,



  BFD_RELOC_AVR_HI8_LDI,



  BFD_RELOC_AVR_HH8_LDI,



  BFD_RELOC_AVR_MS8_LDI,



  BFD_RELOC_AVR_LO8_LDI_NEG,




  BFD_RELOC_AVR_HI8_LDI_NEG,




  BFD_RELOC_AVR_HH8_LDI_NEG,



  BFD_RELOC_AVR_MS8_LDI_NEG,



  BFD_RELOC_AVR_LO8_LDI_PM,





  BFD_RELOC_AVR_LO8_LDI_GS,



  BFD_RELOC_AVR_HI8_LDI_PM,





  BFD_RELOC_AVR_HI8_LDI_GS,



  BFD_RELOC_AVR_HH8_LDI_PM,



  BFD_RELOC_AVR_LO8_LDI_PM_NEG,




  BFD_RELOC_AVR_HI8_LDI_PM_NEG,




  BFD_RELOC_AVR_HH8_LDI_PM_NEG,



  BFD_RELOC_AVR_CALL,



  BFD_RELOC_AVR_LDI,



  BFD_RELOC_AVR_6,



  BFD_RELOC_AVR_6_ADIW,


  BFD_RELOC_390_12,


  BFD_RELOC_390_GOT12,


  BFD_RELOC_390_PLT32,


  BFD_RELOC_390_COPY,


  BFD_RELOC_390_GLOB_DAT,


  BFD_RELOC_390_JMP_SLOT,


  BFD_RELOC_390_RELATIVE,


  BFD_RELOC_390_GOTPC,


  BFD_RELOC_390_GOT16,


  BFD_RELOC_390_PC16DBL,


  BFD_RELOC_390_PLT16DBL,


  BFD_RELOC_390_PC32DBL,


  BFD_RELOC_390_PLT32DBL,


  BFD_RELOC_390_GOTPCDBL,


  BFD_RELOC_390_GOT64,


  BFD_RELOC_390_PLT64,


  BFD_RELOC_390_GOTENT,


  BFD_RELOC_390_GOTOFF64,


  BFD_RELOC_390_GOTPLT12,


  BFD_RELOC_390_GOTPLT16,


  BFD_RELOC_390_GOTPLT32,


  BFD_RELOC_390_GOTPLT64,


  BFD_RELOC_390_GOTPLTENT,


  BFD_RELOC_390_PLTOFF16,


  BFD_RELOC_390_PLTOFF32,


  BFD_RELOC_390_PLTOFF64,


  BFD_RELOC_390_TLS_LOAD,
  BFD_RELOC_390_TLS_GDCALL,
  BFD_RELOC_390_TLS_LDCALL,
  BFD_RELOC_390_TLS_GD32,
  BFD_RELOC_390_TLS_GD64,
  BFD_RELOC_390_TLS_GOTIE12,
  BFD_RELOC_390_TLS_GOTIE32,
  BFD_RELOC_390_TLS_GOTIE64,
  BFD_RELOC_390_TLS_LDM32,
  BFD_RELOC_390_TLS_LDM64,
  BFD_RELOC_390_TLS_IE32,
  BFD_RELOC_390_TLS_IE64,
  BFD_RELOC_390_TLS_IEENT,
  BFD_RELOC_390_TLS_LE32,
  BFD_RELOC_390_TLS_LE64,
  BFD_RELOC_390_TLS_LDO32,
  BFD_RELOC_390_TLS_LDO64,
  BFD_RELOC_390_TLS_DTPMOD,
  BFD_RELOC_390_TLS_DTPOFF,
  BFD_RELOC_390_TLS_TPOFF,


  BFD_RELOC_390_20,
  BFD_RELOC_390_GOT20,
  BFD_RELOC_390_GOTPLT20,
  BFD_RELOC_390_TLS_GOTIE20,


  BFD_RELOC_IP2K_FR9,


  BFD_RELOC_IP2K_BANK,


  BFD_RELOC_IP2K_ADDR16CJP,


  BFD_RELOC_IP2K_PAGE3,


  BFD_RELOC_IP2K_LO8DATA,
  BFD_RELOC_IP2K_HI8DATA,
  BFD_RELOC_IP2K_EX8DATA,


  BFD_RELOC_IP2K_LO8INSN,
  BFD_RELOC_IP2K_HI8INSN,


  BFD_RELOC_IP2K_PC_SKIP,


  BFD_RELOC_IP2K_TEXT,


  BFD_RELOC_IP2K_FR_OFFSET,


  BFD_RELOC_VPE4KMATH_DATA,
  BFD_RELOC_VPE4KMATH_INSN,
# 3873 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  BFD_RELOC_VTABLE_INHERIT,
  BFD_RELOC_VTABLE_ENTRY,


  BFD_RELOC_IA64_IMM14,
  BFD_RELOC_IA64_IMM22,
  BFD_RELOC_IA64_IMM64,
  BFD_RELOC_IA64_DIR32MSB,
  BFD_RELOC_IA64_DIR32LSB,
  BFD_RELOC_IA64_DIR64MSB,
  BFD_RELOC_IA64_DIR64LSB,
  BFD_RELOC_IA64_GPREL22,
  BFD_RELOC_IA64_GPREL64I,
  BFD_RELOC_IA64_GPREL32MSB,
  BFD_RELOC_IA64_GPREL32LSB,
  BFD_RELOC_IA64_GPREL64MSB,
  BFD_RELOC_IA64_GPREL64LSB,
  BFD_RELOC_IA64_LTOFF22,
  BFD_RELOC_IA64_LTOFF64I,
  BFD_RELOC_IA64_PLTOFF22,
  BFD_RELOC_IA64_PLTOFF64I,
  BFD_RELOC_IA64_PLTOFF64MSB,
  BFD_RELOC_IA64_PLTOFF64LSB,
  BFD_RELOC_IA64_FPTR64I,
  BFD_RELOC_IA64_FPTR32MSB,
  BFD_RELOC_IA64_FPTR32LSB,
  BFD_RELOC_IA64_FPTR64MSB,
  BFD_RELOC_IA64_FPTR64LSB,
  BFD_RELOC_IA64_PCREL21B,
  BFD_RELOC_IA64_PCREL21BI,
  BFD_RELOC_IA64_PCREL21M,
  BFD_RELOC_IA64_PCREL21F,
  BFD_RELOC_IA64_PCREL22,
  BFD_RELOC_IA64_PCREL60B,
  BFD_RELOC_IA64_PCREL64I,
  BFD_RELOC_IA64_PCREL32MSB,
  BFD_RELOC_IA64_PCREL32LSB,
  BFD_RELOC_IA64_PCREL64MSB,
  BFD_RELOC_IA64_PCREL64LSB,
  BFD_RELOC_IA64_LTOFF_FPTR22,
  BFD_RELOC_IA64_LTOFF_FPTR64I,
  BFD_RELOC_IA64_LTOFF_FPTR32MSB,
  BFD_RELOC_IA64_LTOFF_FPTR32LSB,
  BFD_RELOC_IA64_LTOFF_FPTR64MSB,
  BFD_RELOC_IA64_LTOFF_FPTR64LSB,
  BFD_RELOC_IA64_SEGREL32MSB,
  BFD_RELOC_IA64_SEGREL32LSB,
  BFD_RELOC_IA64_SEGREL64MSB,
  BFD_RELOC_IA64_SEGREL64LSB,
  BFD_RELOC_IA64_SECREL32MSB,
  BFD_RELOC_IA64_SECREL32LSB,
  BFD_RELOC_IA64_SECREL64MSB,
  BFD_RELOC_IA64_SECREL64LSB,
  BFD_RELOC_IA64_REL32MSB,
  BFD_RELOC_IA64_REL32LSB,
  BFD_RELOC_IA64_REL64MSB,
  BFD_RELOC_IA64_REL64LSB,
  BFD_RELOC_IA64_LTV32MSB,
  BFD_RELOC_IA64_LTV32LSB,
  BFD_RELOC_IA64_LTV64MSB,
  BFD_RELOC_IA64_LTV64LSB,
  BFD_RELOC_IA64_IPLTMSB,
  BFD_RELOC_IA64_IPLTLSB,
  BFD_RELOC_IA64_COPY,
  BFD_RELOC_IA64_LTOFF22X,
  BFD_RELOC_IA64_LDXMOV,
  BFD_RELOC_IA64_TPREL14,
  BFD_RELOC_IA64_TPREL22,
  BFD_RELOC_IA64_TPREL64I,
  BFD_RELOC_IA64_TPREL64MSB,
  BFD_RELOC_IA64_TPREL64LSB,
  BFD_RELOC_IA64_LTOFF_TPREL22,
  BFD_RELOC_IA64_DTPMOD64MSB,
  BFD_RELOC_IA64_DTPMOD64LSB,
  BFD_RELOC_IA64_LTOFF_DTPMOD22,
  BFD_RELOC_IA64_DTPREL14,
  BFD_RELOC_IA64_DTPREL22,
  BFD_RELOC_IA64_DTPREL64I,
  BFD_RELOC_IA64_DTPREL32MSB,
  BFD_RELOC_IA64_DTPREL32LSB,
  BFD_RELOC_IA64_DTPREL64MSB,
  BFD_RELOC_IA64_DTPREL64LSB,
  BFD_RELOC_IA64_LTOFF_DTPREL22,



  BFD_RELOC_M68HC11_HI8,



  BFD_RELOC_M68HC11_LO8,



  BFD_RELOC_M68HC11_3B,






  BFD_RELOC_M68HC11_RL_JUMP,





  BFD_RELOC_M68HC11_RL_GROUP,





  BFD_RELOC_M68HC11_LO16,





  BFD_RELOC_M68HC11_PAGE,





  BFD_RELOC_M68HC11_24,



  BFD_RELOC_M68HC12_5B,


  BFD_RELOC_16C_NUM08,
  BFD_RELOC_16C_NUM08_C,
  BFD_RELOC_16C_NUM16,
  BFD_RELOC_16C_NUM16_C,
  BFD_RELOC_16C_NUM32,
  BFD_RELOC_16C_NUM32_C,
  BFD_RELOC_16C_DISP04,
  BFD_RELOC_16C_DISP04_C,
  BFD_RELOC_16C_DISP08,
  BFD_RELOC_16C_DISP08_C,
  BFD_RELOC_16C_DISP16,
  BFD_RELOC_16C_DISP16_C,
  BFD_RELOC_16C_DISP24,
  BFD_RELOC_16C_DISP24_C,
  BFD_RELOC_16C_DISP24a,
  BFD_RELOC_16C_DISP24a_C,
  BFD_RELOC_16C_REG04,
  BFD_RELOC_16C_REG04_C,
  BFD_RELOC_16C_REG04a,
  BFD_RELOC_16C_REG04a_C,
  BFD_RELOC_16C_REG14,
  BFD_RELOC_16C_REG14_C,
  BFD_RELOC_16C_REG16,
  BFD_RELOC_16C_REG16_C,
  BFD_RELOC_16C_REG20,
  BFD_RELOC_16C_REG20_C,
  BFD_RELOC_16C_ABS20,
  BFD_RELOC_16C_ABS20_C,
  BFD_RELOC_16C_ABS24,
  BFD_RELOC_16C_ABS24_C,
  BFD_RELOC_16C_IMM04,
  BFD_RELOC_16C_IMM04_C,
  BFD_RELOC_16C_IMM16,
  BFD_RELOC_16C_IMM16_C,
  BFD_RELOC_16C_IMM20,
  BFD_RELOC_16C_IMM20_C,
  BFD_RELOC_16C_IMM24,
  BFD_RELOC_16C_IMM24_C,
  BFD_RELOC_16C_IMM32,
  BFD_RELOC_16C_IMM32_C,


  BFD_RELOC_CRX_REL4,
  BFD_RELOC_CRX_REL8,
  BFD_RELOC_CRX_REL8_CMP,
  BFD_RELOC_CRX_REL16,
  BFD_RELOC_CRX_REL24,
  BFD_RELOC_CRX_REL32,
  BFD_RELOC_CRX_REGREL12,
  BFD_RELOC_CRX_REGREL22,
  BFD_RELOC_CRX_REGREL28,
  BFD_RELOC_CRX_REGREL32,
  BFD_RELOC_CRX_ABS16,
  BFD_RELOC_CRX_ABS32,
  BFD_RELOC_CRX_NUM8,
  BFD_RELOC_CRX_NUM16,
  BFD_RELOC_CRX_NUM32,
  BFD_RELOC_CRX_IMM16,
  BFD_RELOC_CRX_IMM32,
  BFD_RELOC_CRX_SWITCH8,
  BFD_RELOC_CRX_SWITCH16,
  BFD_RELOC_CRX_SWITCH32,



  BFD_RELOC_CRIS_BDISP8,
  BFD_RELOC_CRIS_UNSIGNED_5,
  BFD_RELOC_CRIS_SIGNED_6,
  BFD_RELOC_CRIS_UNSIGNED_6,
  BFD_RELOC_CRIS_SIGNED_8,
  BFD_RELOC_CRIS_UNSIGNED_8,
  BFD_RELOC_CRIS_SIGNED_16,
  BFD_RELOC_CRIS_UNSIGNED_16,
  BFD_RELOC_CRIS_LAPCQ_OFFSET,
  BFD_RELOC_CRIS_UNSIGNED_4,


  BFD_RELOC_CRIS_COPY,
  BFD_RELOC_CRIS_GLOB_DAT,
  BFD_RELOC_CRIS_JUMP_SLOT,
  BFD_RELOC_CRIS_RELATIVE,


  BFD_RELOC_CRIS_32_GOT,


  BFD_RELOC_CRIS_16_GOT,


  BFD_RELOC_CRIS_32_GOTPLT,


  BFD_RELOC_CRIS_16_GOTPLT,


  BFD_RELOC_CRIS_32_GOTREL,


  BFD_RELOC_CRIS_32_PLT_GOTREL,


  BFD_RELOC_CRIS_32_PLT_PCREL,


  BFD_RELOC_860_COPY,
  BFD_RELOC_860_GLOB_DAT,
  BFD_RELOC_860_JUMP_SLOT,
  BFD_RELOC_860_RELATIVE,
  BFD_RELOC_860_PC26,
  BFD_RELOC_860_PLT26,
  BFD_RELOC_860_PC16,
  BFD_RELOC_860_LOW0,
  BFD_RELOC_860_SPLIT0,
  BFD_RELOC_860_LOW1,
  BFD_RELOC_860_SPLIT1,
  BFD_RELOC_860_LOW2,
  BFD_RELOC_860_SPLIT2,
  BFD_RELOC_860_LOW3,
  BFD_RELOC_860_LOGOT0,
  BFD_RELOC_860_SPGOT0,
  BFD_RELOC_860_LOGOT1,
  BFD_RELOC_860_SPGOT1,
  BFD_RELOC_860_LOGOTOFF0,
  BFD_RELOC_860_SPGOTOFF0,
  BFD_RELOC_860_LOGOTOFF1,
  BFD_RELOC_860_SPGOTOFF1,
  BFD_RELOC_860_LOGOTOFF2,
  BFD_RELOC_860_LOGOTOFF3,
  BFD_RELOC_860_LOPC,
  BFD_RELOC_860_HIGHADJ,
  BFD_RELOC_860_HAGOT,
  BFD_RELOC_860_HAGOTOFF,
  BFD_RELOC_860_HAPC,
  BFD_RELOC_860_HIGH,
  BFD_RELOC_860_HIGOT,
  BFD_RELOC_860_HIGOTOFF,


  BFD_RELOC_OPENRISC_ABS_26,
  BFD_RELOC_OPENRISC_REL_26,


  BFD_RELOC_H8_DIR16A8,
  BFD_RELOC_H8_DIR16R8,
  BFD_RELOC_H8_DIR24A8,
  BFD_RELOC_H8_DIR24R8,
  BFD_RELOC_H8_DIR32A16,


  BFD_RELOC_XSTORMY16_REL_12,
  BFD_RELOC_XSTORMY16_12,
  BFD_RELOC_XSTORMY16_24,
  BFD_RELOC_XSTORMY16_FPTR16,


  BFD_RELOC_XC16X_PAG,
  BFD_RELOC_XC16X_POF,
  BFD_RELOC_XC16X_SEG,
  BFD_RELOC_XC16X_SOF,


  BFD_RELOC_VAX_GLOB_DAT,
  BFD_RELOC_VAX_JMP_SLOT,
  BFD_RELOC_VAX_RELATIVE,


  BFD_RELOC_MT_PC16,


  BFD_RELOC_MT_HI16,


  BFD_RELOC_MT_LO16,


  BFD_RELOC_MT_GNU_VTINHERIT,


  BFD_RELOC_MT_GNU_VTENTRY,


  BFD_RELOC_MT_PCINSN8,


  BFD_RELOC_MSP430_10_PCREL,
  BFD_RELOC_MSP430_16_PCREL,
  BFD_RELOC_MSP430_16,
  BFD_RELOC_MSP430_16_PCREL_BYTE,
  BFD_RELOC_MSP430_16_BYTE,
  BFD_RELOC_MSP430_2X_PCREL,
  BFD_RELOC_MSP430_RL_PCREL,


  BFD_RELOC_IQ2000_OFFSET_16,
  BFD_RELOC_IQ2000_OFFSET_21,
  BFD_RELOC_IQ2000_UHI16,




  BFD_RELOC_XTENSA_RTLD,


  BFD_RELOC_XTENSA_GLOB_DAT,
  BFD_RELOC_XTENSA_JMP_SLOT,
  BFD_RELOC_XTENSA_RELATIVE,



  BFD_RELOC_XTENSA_PLT,







  BFD_RELOC_XTENSA_DIFF8,
  BFD_RELOC_XTENSA_DIFF16,
  BFD_RELOC_XTENSA_DIFF32,





  BFD_RELOC_XTENSA_SLOT0_OP,
  BFD_RELOC_XTENSA_SLOT1_OP,
  BFD_RELOC_XTENSA_SLOT2_OP,
  BFD_RELOC_XTENSA_SLOT3_OP,
  BFD_RELOC_XTENSA_SLOT4_OP,
  BFD_RELOC_XTENSA_SLOT5_OP,
  BFD_RELOC_XTENSA_SLOT6_OP,
  BFD_RELOC_XTENSA_SLOT7_OP,
  BFD_RELOC_XTENSA_SLOT8_OP,
  BFD_RELOC_XTENSA_SLOT9_OP,
  BFD_RELOC_XTENSA_SLOT10_OP,
  BFD_RELOC_XTENSA_SLOT11_OP,
  BFD_RELOC_XTENSA_SLOT12_OP,
  BFD_RELOC_XTENSA_SLOT13_OP,
  BFD_RELOC_XTENSA_SLOT14_OP,



  BFD_RELOC_XTENSA_SLOT0_ALT,
  BFD_RELOC_XTENSA_SLOT1_ALT,
  BFD_RELOC_XTENSA_SLOT2_ALT,
  BFD_RELOC_XTENSA_SLOT3_ALT,
  BFD_RELOC_XTENSA_SLOT4_ALT,
  BFD_RELOC_XTENSA_SLOT5_ALT,
  BFD_RELOC_XTENSA_SLOT6_ALT,
  BFD_RELOC_XTENSA_SLOT7_ALT,
  BFD_RELOC_XTENSA_SLOT8_ALT,
  BFD_RELOC_XTENSA_SLOT9_ALT,
  BFD_RELOC_XTENSA_SLOT10_ALT,
  BFD_RELOC_XTENSA_SLOT11_ALT,
  BFD_RELOC_XTENSA_SLOT12_ALT,
  BFD_RELOC_XTENSA_SLOT13_ALT,
  BFD_RELOC_XTENSA_SLOT14_ALT,



  BFD_RELOC_XTENSA_OP0,
  BFD_RELOC_XTENSA_OP1,
  BFD_RELOC_XTENSA_OP2,




  BFD_RELOC_XTENSA_ASM_EXPAND,





  BFD_RELOC_XTENSA_ASM_SIMPLIFY,


  BFD_RELOC_Z80_DISP8,


  BFD_RELOC_Z8K_DISP7,


  BFD_RELOC_Z8K_CALLR,


  BFD_RELOC_Z8K_IMM4L,
  BFD_RELOC_UNUSED };
typedef enum bfd_reloc_code_real bfd_reloc_code_real_type;
reloc_howto_type *bfd_reloc_type_lookup
   (bfd *abfd, bfd_reloc_code_real_type code);

const char *bfd_get_reloc_code_name (bfd_reloc_code_real_type code);



typedef struct bfd_symbol
{
# 4312 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  struct bfd *the_bfd;



  const char *name;




  symvalue value;
# 4408 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  flagword flags;




  struct bfd_section *section;


  union
    {
      void *p;
      bfd_vma i;
    }
  udata;
}
asymbol;




bfd_boolean bfd_is_local_label (bfd *abfd, asymbol *sym);

bfd_boolean bfd_is_local_label_name (bfd *abfd, const char *name);




bfd_boolean bfd_is_target_special_symbol (bfd *abfd, asymbol *sym);







bfd_boolean bfd_set_symtab
   (bfd *abfd, asymbol **location, unsigned int count);

void bfd_print_symbol_vandf (bfd *abfd, void *file, asymbol *symbol);




asymbol *_bfd_generic_make_empty_symbol (bfd *);




int bfd_decode_symclass (asymbol *symbol);

bfd_boolean bfd_is_undefined_symclass (int symclass);

void bfd_symbol_info (asymbol *symbol, symbol_info *ret);

bfd_boolean bfd_copy_private_symbol_data
   (bfd *ibfd, asymbol *isym, bfd *obfd, asymbol *osym);






struct bfd
{

  unsigned int id;


  const char *filename;


  const struct bfd_target *xvec;



  void *iostream;
  const struct bfd_iovec *iovec;



  bfd_boolean cacheable;




  bfd_boolean target_defaulted;



  struct bfd *lru_prev, *lru_next;



  ufile_ptr where;


  bfd_boolean opened_once;



  bfd_boolean mtime_set;


  long mtime;


  int ifd;


  bfd_format format;


  enum bfd_direction
    {
      no_direction = 0,
      read_direction = 1,
      write_direction = 2,
      both_direction = 3
    }
  direction;


  flagword flags;




  ufile_ptr origin;



  bfd_boolean output_has_begun;


  struct bfd_hash_table section_htab;


  struct bfd_section *sections;


  struct bfd_section *section_last;


  unsigned int section_count;



  bfd_vma start_address;


  unsigned int symcount;


  struct bfd_symbol **outsymbols;


  unsigned int dynsymcount;


  const struct bfd_arch_info *arch_info;


  bfd_boolean no_export;


  void *arelt_data;
  struct bfd *my_archive;
  struct bfd *next;
  struct bfd *archive_head;
  bfd_boolean has_armap;


  struct bfd *link_next;



  int archive_pass;


  union
    {
      struct aout_data_struct *aout_data;
      struct artdata *aout_ar_data;
      struct _oasys_data *oasys_obj_data;
      struct _oasys_ar_data *oasys_ar_data;
      struct coff_tdata *coff_obj_data;
      struct pe_tdata *pe_obj_data;
      struct xcoff_tdata *xcoff_obj_data;
      struct ecoff_tdata *ecoff_obj_data;
      struct ieee_data_struct *ieee_data;
      struct ieee_ar_data_struct *ieee_ar_data;
      struct srec_data_struct *srec_data;
      struct ihex_data_struct *ihex_data;
      struct tekhex_data_struct *tekhex_data;
      struct elf_obj_tdata *elf_obj_data;
      struct nlm_obj_tdata *nlm_obj_data;
      struct bout_data_struct *bout_data;
      struct mmo_data_struct *mmo_data;
      struct sun_core_struct *sun_core_data;
      struct sco5_core_struct *sco5_core_data;
      struct trad_core_struct *trad_core_data;
      struct som_data_struct *som_data;
      struct hpux_core_struct *hpux_core_data;
      struct hppabsd_core_struct *hppabsd_core_data;
      struct sgi_core_struct *sgi_core_data;
      struct lynx_core_struct *lynx_core_data;
      struct osf_core_struct *osf_core_data;
      struct cisco_core_struct *cisco_core_data;
      struct versados_data_struct *versados_data;
      struct netbsd_core_struct *netbsd_core_data;
      struct mach_o_data_struct *mach_o_data;
      struct mach_o_fat_data_struct *mach_o_fat_data;
      struct bfd_pef_data_struct *pef_data;
      struct bfd_pef_xlib_data_struct *pef_xlib_data;
      struct bfd_sym_data_struct *sym_data;
      void *any;
    }
  tdata;


  void *usrdata;




  void *memory;
};

typedef enum bfd_error
{
  bfd_error_no_error = 0,
  bfd_error_system_call,
  bfd_error_invalid_target,
  bfd_error_wrong_format,
  bfd_error_wrong_object_format,
  bfd_error_invalid_operation,
  bfd_error_no_memory,
  bfd_error_no_symbols,
  bfd_error_no_armap,
  bfd_error_no_more_archived_files,
  bfd_error_malformed_archive,
  bfd_error_file_not_recognized,
  bfd_error_file_ambiguously_recognized,
  bfd_error_no_contents,
  bfd_error_nonrepresentable_section,
  bfd_error_no_debug_section,
  bfd_error_bad_value,
  bfd_error_file_truncated,
  bfd_error_file_too_big,
  bfd_error_invalid_error_code
}
bfd_error_type;

bfd_error_type bfd_get_error (void);

void bfd_set_error (bfd_error_type error_tag);

const char *bfd_errmsg (bfd_error_type error_tag);

void bfd_perror (const char *message);

typedef void (*bfd_error_plugin_type) (const char *, ...);

bfd_error_plugin_type bfd_set_error_handler (bfd_error_plugin_type);

void bfd_set_error_program_name (const char *);

bfd_error_plugin_type bfd_get_error_handler (void);

long bfd_get_reloc_upper_bound (bfd *abfd, asection *sect);

long bfd_canonicalize_reloc
   (bfd *abfd, asection *sec, arelent **loc, asymbol **syms);

void bfd_set_reloc
   (bfd *abfd, asection *sec, arelent **rel, unsigned int count);

bfd_boolean bfd_set_file_flags (bfd *abfd, flagword flags);

int bfd_get_arch_size (bfd *abfd);

int bfd_get_sign_extend_vma (bfd *abfd);

bfd_boolean bfd_set_start_address (bfd *abfd, bfd_vma vma);

unsigned int bfd_get_gp_size (bfd *abfd);

void bfd_set_gp_size (bfd *abfd, unsigned int i);

bfd_vma bfd_scan_vma (const char *string, const char **end, int base);

bfd_boolean bfd_copy_private_header_data (bfd *ibfd, bfd *obfd);




bfd_boolean bfd_copy_private_bfd_data (bfd *ibfd, bfd *obfd);




bfd_boolean bfd_merge_private_bfd_data (bfd *ibfd, bfd *obfd);




bfd_boolean bfd_set_private_flags (bfd *abfd, flagword flags);
# 4803 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
extern bfd_byte *bfd_get_relocated_section_contents
  (bfd *, struct bfd_link_info *, struct bfd_link_order *, bfd_byte *,
   bfd_boolean, asymbol **);

bfd_boolean bfd_alt_mach_code (bfd *abfd, int alternative);

struct bfd_preserve
{
  void *marker;
  void *tdata;
  flagword flags;
  const struct bfd_arch_info *arch_info;
  struct bfd_section *sections;
  struct bfd_section *section_last;
  unsigned int section_count;
  struct bfd_hash_table section_htab;
};

bfd_boolean bfd_preserve_save (bfd *, struct bfd_preserve *);

void bfd_preserve_restore (bfd *, struct bfd_preserve *);

void bfd_preserve_finish (bfd *, struct bfd_preserve *);


symindex bfd_get_next_mapent
   (bfd *abfd, symindex previous, carsym **sym);

bfd_boolean bfd_set_archive_head (bfd *output, bfd *new_head);

bfd *bfd_openr_next_archived_file (bfd *archive, bfd *previous);


const char *bfd_core_file_failing_command (bfd *abfd);

int bfd_core_file_failing_signal (bfd *abfd);

bfd_boolean core_file_matches_executable_p
   (bfd *core_bfd, bfd *exec_bfd);

bfd_boolean generic_core_file_matches_executable_p
   (bfd *core_bfd, bfd *exec_bfd);
# 4868 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
enum bfd_flavour
{
  bfd_target_unknown_flavour,
  bfd_target_aout_flavour,
  bfd_target_coff_flavour,
  bfd_target_ecoff_flavour,
  bfd_target_xcoff_flavour,
  bfd_target_elf_flavour,
  bfd_target_ieee_flavour,
  bfd_target_nlm_flavour,
  bfd_target_oasys_flavour,
  bfd_target_tekhex_flavour,
  bfd_target_srec_flavour,
  bfd_target_ihex_flavour,
  bfd_target_som_flavour,
  bfd_target_os9k_flavour,
  bfd_target_versados_flavour,
  bfd_target_msdos_flavour,
  bfd_target_ovax_flavour,
  bfd_target_evax_flavour,
  bfd_target_mmo_flavour,
  bfd_target_mach_o_flavour,
  bfd_target_pef_flavour,
  bfd_target_pef_xlib_flavour,
  bfd_target_sym_flavour
};

enum bfd_endian { BFD_ENDIAN_BIG, BFD_ENDIAN_LITTLE, BFD_ENDIAN_UNKNOWN };


typedef struct bfd_link_info _bfd_link_info;

typedef struct bfd_target
{

  char *name;



  enum bfd_flavour flavour;


  enum bfd_endian byteorder;


  enum bfd_endian header_byteorder;



  flagword object_flags;



  flagword section_flags;



  char symbol_leading_char;


  char ar_pad_char;


  unsigned short ar_max_namelen;




  bfd_uint64_t (*bfd_getx64) (const void *);
  bfd_int64_t (*bfd_getx_signed_64) (const void *);
  void (*bfd_putx64) (bfd_uint64_t, void *);
  bfd_vma (*bfd_getx32) (const void *);
  bfd_signed_vma (*bfd_getx_signed_32) (const void *);
  void (*bfd_putx32) (bfd_vma, void *);
  bfd_vma (*bfd_getx16) (const void *);
  bfd_signed_vma (*bfd_getx_signed_16) (const void *);
  void (*bfd_putx16) (bfd_vma, void *);


  bfd_uint64_t (*bfd_h_getx64) (const void *);
  bfd_int64_t (*bfd_h_getx_signed_64) (const void *);
  void (*bfd_h_putx64) (bfd_uint64_t, void *);
  bfd_vma (*bfd_h_getx32) (const void *);
  bfd_signed_vma (*bfd_h_getx_signed_32) (const void *);
  void (*bfd_h_putx32) (bfd_vma, void *);
  bfd_vma (*bfd_h_getx16) (const void *);
  bfd_signed_vma (*bfd_h_getx_signed_16) (const void *);
  void (*bfd_h_putx16) (bfd_vma, void *);





  const struct bfd_target *(*_bfd_check_format[bfd_type_end]) (bfd *);


  bfd_boolean (*_bfd_set_format[bfd_type_end]) (bfd *);


  bfd_boolean (*_bfd_write_contents[bfd_type_end]) (bfd *);
# 4979 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_boolean (*_close_and_cleanup) (bfd *);

  bfd_boolean (*_bfd_free_cached_info) (bfd *);

  bfd_boolean (*_new_section_hook) (bfd *, sec_ptr);

  bfd_boolean (*_bfd_get_section_contents)
    (bfd *, sec_ptr, void *, file_ptr, bfd_size_type);
  bfd_boolean (*_bfd_get_section_contents_in_window)
    (bfd *, sec_ptr, bfd_window *, file_ptr, bfd_size_type);
# 5003 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_boolean (*_bfd_copy_private_bfd_data) (bfd *, bfd *);


  bfd_boolean (*_bfd_merge_private_bfd_data) (bfd *, bfd *);




  bfd_boolean (*_bfd_init_private_section_data)
    (bfd *, sec_ptr, bfd *, sec_ptr, struct bfd_link_info *);


  bfd_boolean (*_bfd_copy_private_section_data)
    (bfd *, sec_ptr, bfd *, sec_ptr);


  bfd_boolean (*_bfd_copy_private_symbol_data)
    (bfd *, asymbol *, bfd *, asymbol *);


  bfd_boolean (*_bfd_copy_private_header_data)
    (bfd *, bfd *);

  bfd_boolean (*_bfd_set_private_flags) (bfd *, flagword);


  bfd_boolean (*_bfd_print_private_bfd_data) (bfd *, void *);







  char * (*_core_file_failing_command) (bfd *);
  int (*_core_file_failing_signal) (bfd *);
  bfd_boolean (*_core_file_matches_executable_p) (bfd *, bfd *);
# 5054 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_boolean (*_bfd_slurp_armap) (bfd *);
  bfd_boolean (*_bfd_slurp_extended_name_table) (bfd *);
  bfd_boolean (*_bfd_construct_extended_name_table)
    (bfd *, char **, bfd_size_type *, const char **);
  void (*_bfd_truncate_arname) (bfd *, const char *, char *);
  bfd_boolean (*write_armap)
    (bfd *, unsigned int, struct orl *, unsigned int, int);
  void * (*_bfd_read_ar_hdr_fn) (bfd *);
  bfd * (*openr_next_archived_file) (bfd *, bfd *);

  bfd * (*_bfd_get_elt_at_index) (bfd *, symindex);
  int (*_bfd_stat_arch_elt) (bfd *, struct stat *);
  bfd_boolean (*_bfd_update_armap_timestamp) (bfd *);
# 5085 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  long (*_bfd_get_symtab_upper_bound) (bfd *);
  long (*_bfd_canonicalize_symtab)
    (bfd *, struct bfd_symbol **);
  struct bfd_symbol *
              (*_bfd_make_empty_symbol) (bfd *);
  void (*_bfd_print_symbol)
    (bfd *, void *, struct bfd_symbol *, bfd_print_symbol_type);

  void (*_bfd_get_symbol_info)
    (bfd *, struct bfd_symbol *, symbol_info *);

  bfd_boolean (*_bfd_is_local_label_name) (bfd *, const char *);
  bfd_boolean (*_bfd_is_target_special_symbol) (bfd *, asymbol *);
  alent * (*_get_lineno) (bfd *, struct bfd_symbol *);
  bfd_boolean (*_bfd_find_nearest_line)
    (bfd *, struct bfd_section *, struct bfd_symbol **, bfd_vma,
     const char **, const char **, unsigned int *);
  bfd_boolean (*_bfd_find_line)
    (bfd *, struct bfd_symbol **, struct bfd_symbol *,
     const char **, unsigned int *);
  bfd_boolean (*_bfd_find_inliner_info)
    (bfd *, const char **, const char **, unsigned int *);



  asymbol * (*_bfd_make_debug_symbol)
    (bfd *, void *, unsigned long size);


  long (*_read_minisymbols)
    (bfd *, bfd_boolean, void **, unsigned int *);


  asymbol * (*_minisymbol_to_symbol)
    (bfd *, bfd_boolean, const void *, asymbol *);







  long (*_get_reloc_upper_bound) (bfd *, sec_ptr);
  long (*_bfd_canonicalize_reloc)
    (bfd *, sec_ptr, arelent **, struct bfd_symbol **);

  reloc_howto_type *
              (*reloc_type_lookup) (bfd *, bfd_reloc_code_real_type);






  bfd_boolean (*_bfd_set_arch_mach)
    (bfd *, enum bfd_architecture, unsigned long);
  bfd_boolean (*_bfd_set_section_contents)
    (bfd *, sec_ptr, const void *, file_ptr, bfd_size_type);
# 5161 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  int (*_bfd_sizeof_headers) (bfd *, bfd_boolean);
  bfd_byte * (*_bfd_get_relocated_section_contents)
    (bfd *, struct bfd_link_info *, struct bfd_link_order *,
     bfd_byte *, bfd_boolean, struct bfd_symbol **);

  bfd_boolean (*_bfd_relax_section)
    (bfd *, struct bfd_section *, struct bfd_link_info *, bfd_boolean *);



  struct bfd_link_hash_table *
              (*_bfd_link_hash_table_create) (bfd *);


  void (*_bfd_link_hash_table_free) (struct bfd_link_hash_table *);


  bfd_boolean (*_bfd_link_add_symbols) (bfd *, struct bfd_link_info *);


  void (*_bfd_link_just_syms) (asection *, struct bfd_link_info *);



  bfd_boolean (*_bfd_final_link) (bfd *, struct bfd_link_info *);


  bfd_boolean (*_bfd_link_split_section) (bfd *, struct bfd_section *);


  bfd_boolean (*_bfd_gc_sections) (bfd *, struct bfd_link_info *);


  bfd_boolean (*_bfd_merge_sections) (bfd *, struct bfd_link_info *);


  bfd_boolean (*_bfd_is_group_section) (bfd *, const struct bfd_section *);


  bfd_boolean (*_bfd_discard_group) (bfd *, struct bfd_section *);



  void (*_section_already_linked) (bfd *, struct bfd_section *);
# 5215 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  long (*_bfd_get_dynamic_symtab_upper_bound) (bfd *);

  long (*_bfd_canonicalize_dynamic_symtab)
    (bfd *, struct bfd_symbol **);

  long (*_bfd_get_synthetic_symtab)
    (bfd *, long, struct bfd_symbol **, long, struct bfd_symbol **,
     struct bfd_symbol **);

  long (*_bfd_get_dynamic_reloc_upper_bound) (bfd *);

  long (*_bfd_canonicalize_dynamic_reloc)
    (bfd *, arelent **, struct bfd_symbol **);


  const struct bfd_target * alternative_target;



  const void *backend_data;

} bfd_target;

bfd_boolean bfd_set_default_target (const char *name);

const bfd_target *bfd_find_target (const char *target_name, bfd *abfd);

const char ** bfd_target_list (void);

const bfd_target *bfd_search_for_target
   (int (*search_func) (const bfd_target *, void *),
    void *);


bfd_boolean bfd_check_format (bfd *abfd, bfd_format format);

bfd_boolean bfd_check_format_matches
   (bfd *abfd, bfd_format format, char ***matching);

bfd_boolean bfd_set_format (bfd *abfd, bfd_format format);

const char *bfd_format_string (bfd_format format);


bfd_boolean bfd_link_split_section (bfd *abfd, asection *sec);




void bfd_section_already_linked (bfd *abfd, asection *sec);





bfd_byte *bfd_simple_get_relocated_section_contents
   (bfd *abfd, asection *sec, bfd_byte *outbuf, asymbol **symbol_table);







static inline bfd_vma bfd_getl16 (const void *p) {
  const bfd_byte *addr = p;
  return (addr[1] << 8) | addr[0];
}

static inline bfd_vma bfd_getb16 (const void *p) {
  const bfd_byte *addr = p;
  return (addr[0] << 8) | addr[1];
}


static inline bfd_vma bfd_getb32 (const void *p) {
  const bfd_byte *addr = p;
  unsigned long v;

  v = (unsigned long) addr[0] << 24;
  v |= (unsigned long) addr[1] << 16;
  v |= (unsigned long) addr[2] << 8;
  v |= (unsigned long) addr[3];
  return v;
}

static inline bfd_vma bfd_getl32 (const void *p) {
  const bfd_byte *addr = p;
  unsigned long v;

  v = (unsigned long) addr[0];
  v |= (unsigned long) addr[1] << 8;
  v |= (unsigned long) addr[2] << 16;
  v |= (unsigned long) addr[3] << 24;
  return v;
}
# 31 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/mips.h" 2 3 4
# 344 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/mips.h" 3 4
enum mips_operand_type {

  OP_INT,


  OP_MAPPED_INT,


  OP_MSB,


  OP_REG,



  OP_OPTIONAL_REG,


  OP_REG_PAIR,


  OP_PCREL,



  OP_PERF_REG,
# 379 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/mips.h" 3 4
  OP_ADDIUSP_INT,




  OP_CLO_CLZ_DEST,



  OP_LWM_SWM_LIST,


  OP_ENTRY_EXIT_LIST,



  OP_SAVE_RESTORE_LIST,
# 407 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/mips.h" 3 4
  OP_MDMX_IMM_REG,


  OP_REPEAT_DEST_REG,


  OP_REPEAT_PREV_REG,


  OP_PC,


  OP_REG28,



  OP_VU0_SUFFIX,



  OP_VU0_MATCH_SUFFIX,


  OP_IMM_INDEX,


  OP_REG_INDEX,



  OP_SAME_RS_RT,


  OP_CHECK_PREV,


  OP_NON_ZERO_REG
};


enum mips_reg_operand_type {

  OP_REG_GP,


  OP_REG_FP,



  OP_REG_CCC,




  OP_REG_VEC,


  OP_REG_ACC,



  OP_REG_COPRO,



  OP_REG_HW,


  OP_REG_VF,


  OP_REG_VI,


  OP_REG_R5900_I,
  OP_REG_R5900_Q,
  OP_REG_R5900_R,
  OP_REG_R5900_ACC,


  OP_REG_MSA,


  OP_REG_MSA_CTRL
};


struct mips_operand
{

  enum mips_operand_type type;


  unsigned short size;
  unsigned short lsb;
};


struct mips_int_operand
{
  struct mips_operand root;
# 523 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/mips.h" 3 4
  unsigned int max_val;
  int bias;
  unsigned int shift;


  bfd_boolean print_hex;
};


struct mips_mapped_int_operand
{
  struct mips_operand root;


  const int *int_map;


  bfd_boolean print_hex;
};
# 551 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/mips.h" 3 4
struct mips_msb_operand
{
  struct mips_operand root;


  int bias;



  bfd_boolean add_lsb;


  unsigned int opsize;
};


struct mips_reg_operand
{
  struct mips_operand root;


  enum mips_reg_operand_type reg_type;



  const unsigned char *reg_map;
};



struct mips_check_prev_operand
{
  struct mips_operand root;

  bfd_boolean greater_than_ok;
  bfd_boolean less_than_ok;
  bfd_boolean equal_ok;
  bfd_boolean zero_ok;
};


struct mips_reg_pair_operand
{
  struct mips_operand root;


  enum mips_reg_operand_type reg_type;


  unsigned char *reg1_map;
  unsigned char *reg2_map;
};




struct mips_pcrel_operand
{

  struct mips_int_operand root;



  unsigned int align_log2 : 8;




  unsigned int include_isa_bit : 1;



  unsigned int flip_isa_bit : 1;
};



static inline bfd_boolean
mips_optional_operand_p (const struct mips_operand *operand)
{
  return (operand->type == OP_OPTIONAL_REG
   || operand->type == OP_REPEAT_PREV_REG);
}




static inline unsigned int
mips_insert_operand (const struct mips_operand *operand, unsigned int insn,
       unsigned int uval)
{
  unsigned int mask;

  mask = (1 << operand->size) - 1;
  insn &= ~(mask << operand->lsb);
  insn |= (uval & mask) << operand->lsb;
  return insn;
}



static inline unsigned int
mips_extract_operand (const struct mips_operand *operand, unsigned int insn)
{
  return (insn >> operand->lsb) & ((1 << operand->size) - 1);
}



static inline int
mips_signed_operand (const struct mips_operand *operand, unsigned int uval)
{
  unsigned int sign_bit, mask;

  mask = (1 << operand->size) - 1;
  sign_bit = 1 << (operand->size - 1);
  return ((uval + sign_bit) & mask) - sign_bit;
}



static inline int
mips_decode_int_operand (const struct mips_int_operand *operand,
    unsigned int uval)
{
  uval |= (operand->max_val - uval) & -(1 << operand->root.size);
  uval += operand->bias;
  uval <<= operand->shift;
  return uval;
}



static inline int
mips_int_operand_max (const struct mips_int_operand *operand)
{
  return (operand->max_val + operand->bias) << operand->shift;
}



static inline int
mips_int_operand_min (const struct mips_int_operand *operand)
{
  unsigned int mask;

  mask = (1 << operand->root.size) - 1;
  return mips_int_operand_max (operand) - (mask << operand->shift);
}



static inline int
mips_decode_reg_operand (const struct mips_reg_operand *operand,
    unsigned int uval)
{
  if (operand->reg_map)
    uval = operand->reg_map[uval];
  return uval;
}




static inline bfd_vma
mips_decode_pcrel_operand (const struct mips_pcrel_operand *operand,
      bfd_vma base_pc, unsigned int uval)
{
  bfd_vma addr;

  addr = base_pc & -(1 << operand->align_log2);
  addr += mips_decode_int_operand (&operand->root, uval);
  if (operand->include_isa_bit)
    addr |= base_pc & 1;
  if (operand->flip_isa_bit)
    addr ^= 1;
  return addr;
}



struct mips_opcode
{

  const char *name;

  const char *args;



  unsigned long match;





  unsigned long mask;



  unsigned long pinfo;

  unsigned long pinfo2;


  unsigned long membership;


  unsigned long ase;


  unsigned long exclusions;
};



static inline bfd_boolean
mips_opcode_32bit_p (const struct mips_opcode *mo)
{
  return mo->mask >> 16 != 0;
}
# 1210 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/mips.h" 3 4
static const unsigned int mips_isa_table[] = {
  (1 << (1 - 1)),
  (1 << (1 - 1)) | (1 << (2 - 1)),
  (1 << (1 - 1)) | (1 << (2 - 1)) | (1 << (3 - 1)) | (1 << (16 - 1)) | (1 << (17 - 1)),
  (1 << (1 - 1)) | (1 << (2 - 1)) | (1 << (3 - 1)) | (1 << (16 - 1)) | (1 << (17 - 1)) | (1 << (4 - 1)) | (1 << (18 - 1)) | (1 << (19 - 1)),
  (1 << (1 - 1)) | (1 << (2 - 1)) | (1 << (3 - 1)) | (1 << (16 - 1)) | (1 << (17 - 1)) | (1 << (4 - 1)) | (1 << (18 - 1)) | (1 << (19 - 1)) | (1 << (5 - 1)) | (1 << (20 - 1)),
  (1 << (1 - 1)) | (1 << (2 - 1)) | (1 << (6 - 1)) | (1 << (16 - 1)) | (1 << (18 - 1)),
  (1 << (1 - 1)) | (1 << (2 - 1)) | (1 << (6 - 1)) | (1 << (16 - 1)) | (1 << (18 - 1)) | (1 << (7 - 1)) | (1 << (17 - 1)) | (1 << (19 - 1)) | (1 << (20 - 1)),
  (1 << (1 - 1)) | (1 << (2 - 1)) | (1 << (6 - 1)) | (1 << (16 - 1)) | (1 << (18 - 1)) | (1 << (7 - 1)) | (1 << (17 - 1)) | (1 << (19 - 1)) | (1 << (20 - 1)) | (1 << (8 - 1)),
  (1 << (1 - 1)) | (1 << (2 - 1)) | (1 << (6 - 1)) | (1 << (16 - 1)) | (1 << (18 - 1)) | (1 << (7 - 1)) | (1 << (17 - 1)) | (1 << (19 - 1)) | (1 << (20 - 1)) | (1 << (8 - 1)) | (1 << (9 - 1)),
  (1 << (1 - 1)) | (1 << (2 - 1)) | (1 << (6 - 1)) | (1 << (16 - 1)) | (1 << (18 - 1)) | (1 << (7 - 1)) | (1 << (17 - 1)) | (1 << (19 - 1)) | (1 << (20 - 1)) | (1 << (8 - 1)) | (1 << (9 - 1)) | (1 << (10 - 1)),
  (1 << (1 - 1)) | (1 << (2 - 1)) | (1 << (3 - 1)) | (1 << (16 - 1)) | (1 << (17 - 1)) | (1 << (4 - 1)) | (1 << (18 - 1)) | (1 << (19 - 1)) | (1 << (5 - 1)) | (1 << (20 - 1)) | (1 << (11 - 1)) | (1 << (6 - 1)),
  (1 << (1 - 1)) | (1 << (2 - 1)) | (1 << (3 - 1)) | (1 << (16 - 1)) | (1 << (17 - 1)) | (1 << (4 - 1)) | (1 << (18 - 1)) | (1 << (19 - 1)) | (1 << (5 - 1)) | (1 << (20 - 1)) | (1 << (11 - 1)) | (1 << (6 - 1)) | (1 << (12 - 1)) | (1 << (7 - 1)),
  (1 << (1 - 1)) | (1 << (2 - 1)) | (1 << (3 - 1)) | (1 << (16 - 1)) | (1 << (17 - 1)) | (1 << (4 - 1)) | (1 << (18 - 1)) | (1 << (19 - 1)) | (1 << (5 - 1)) | (1 << (20 - 1)) | (1 << (11 - 1)) | (1 << (6 - 1)) | (1 << (12 - 1)) | (1 << (7 - 1)) | (1 << (13 - 1)) | (1 << (8 - 1)),
  (1 << (1 - 1)) | (1 << (2 - 1)) | (1 << (3 - 1)) | (1 << (16 - 1)) | (1 << (17 - 1)) | (1 << (4 - 1)) | (1 << (18 - 1)) | (1 << (19 - 1)) | (1 << (5 - 1)) | (1 << (20 - 1)) | (1 << (11 - 1)) | (1 << (6 - 1)) | (1 << (12 - 1)) | (1 << (7 - 1)) | (1 << (13 - 1)) | (1 << (8 - 1)) | (1 << (14 - 1)) | (1 << (9 - 1)),
  (1 << (1 - 1)) | (1 << (2 - 1)) | (1 << (3 - 1)) | (1 << (16 - 1)) | (1 << (17 - 1)) | (1 << (4 - 1)) | (1 << (18 - 1)) | (1 << (19 - 1)) | (1 << (5 - 1)) | (1 << (20 - 1)) | (1 << (11 - 1)) | (1 << (6 - 1)) | (1 << (12 - 1)) | (1 << (7 - 1)) | (1 << (13 - 1)) | (1 << (8 - 1)) | (1 << (14 - 1)) | (1 << (9 - 1)) | (1 << (15 - 1)) | (1 << (10 - 1))
};
# 1397 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/mips.h" 3 4
static inline bfd_boolean
cpu_is_member (int cpu, unsigned int mask)
{
  switch (cpu)
    {
    case 4650:
    case 7000:
    case 9000:
      return (mask & 0x00010000) != 0;

    case 4010:
      return (mask & 0x00020000) != 0;

    case 4100:
      return (mask & 0x00040000) != 0;

    case 3900:
      return (mask & 0x00080000) != 0;

    case 10000:
    case 12000:
    case 14000:
    case 16000:
      return (mask & 0x00100000) != 0;

    case 12310201:
      return (mask & 0x00200000) != 0;

    case 4111:
      return (mask & 0x00400000) != 0;

    case 4120:
      return (mask & 0x00800000) != 0;

    case 5400:
      return (mask & 0x01000000) != 0;

    case 5500:
      return (mask & 0x02000000) != 0;

    case 5900:
      return (mask & 0x00004000) != 0;

    case 3001:
      return (mask & 0x40000000) != 0;

    case 3002:
      return (mask & 0x80000000) != 0;

    case 6501:
      return (mask & 0x00000800) != 0;

    case 6601:
      return (mask & 0x00000200) != 0;

    case 6502:
      return (mask & 0x00000100) != 0;

    case 6503:
      return (mask & 0x00000040) != 0;

    case 887682:
      return (mask & 0x00000020) != 0;

    case 736550:
      return (mask & 0x04000000) != 0;

    case 37:
      return (mask & 0x0000001ful) == 10;

    case 69:
      return ((mask & 0x0000001ful) == 10)
      || ((mask & 0x0000001ful) == 15);

    default:
      return 0;
    }
}







static inline bfd_boolean
opcode_is_member (const struct mips_opcode *insn, int isa, int ase, int cpu)
{
  if (!cpu_is_member (cpu, insn->exclusions))
    {

      if ((isa & 0x0000001ful) != 0
   && (insn->membership & 0x0000001ful) != 0
   && ((mips_isa_table[(isa & 0x0000001ful) - 1]
        >> ((insn->membership & 0x0000001ful) - 1)) & 1) != 0)
 return 1;


      if ((ase & insn->ase) != 0)
 return 1;


      if (cpu_is_member (cpu, insn->membership))
 return 1;
    }
  return 0;
}
# 1513 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/mips.h" 3 4
enum
{
  M_ABS,
  M_ACLR_AB,
  M_ADD_I,
  M_ADDU_I,
  M_AND_I,
  M_ASET_AB,
  M_BALIGN,
  M_BC1FL,
  M_BC1TL,
  M_BC2FL,
  M_BC2TL,
  M_BEQ,
  M_BEQ_I,
  M_BEQL,
  M_BEQL_I,
  M_BGE,
  M_BGEL,
  M_BGE_I,
  M_BGEL_I,
  M_BGEU,
  M_BGEUL,
  M_BGEU_I,
  M_BGEUL_I,
  M_BGEZ,
  M_BGEZL,
  M_BGEZALL,
  M_BGT,
  M_BGTL,
  M_BGT_I,
  M_BGTL_I,
  M_BGTU,
  M_BGTUL,
  M_BGTU_I,
  M_BGTUL_I,
  M_BGTZ,
  M_BGTZL,
  M_BLE,
  M_BLEL,
  M_BLE_I,
  M_BLEL_I,
  M_BLEU,
  M_BLEUL,
  M_BLEU_I,
  M_BLEUL_I,
  M_BLEZ,
  M_BLEZL,
  M_BLT,
  M_BLTL,
  M_BLT_I,
  M_BLTL_I,
  M_BLTU,
  M_BLTUL,
  M_BLTU_I,
  M_BLTUL_I,
  M_BLTZ,
  M_BLTZL,
  M_BLTZALL,
  M_BNE,
  M_BNEL,
  M_BNE_I,
  M_BNEL_I,
  M_CACHE_AB,
  M_CACHEE_AB,
  M_DABS,
  M_DADD_I,
  M_DADDU_I,
  M_DDIV_3,
  M_DDIV_3I,
  M_DDIVU_3,
  M_DDIVU_3I,
  M_DIV_3,
  M_DIV_3I,
  M_DIVU_3,
  M_DIVU_3I,
  M_DLA_AB,
  M_DLCA_AB,
  M_DLI,
  M_DMUL,
  M_DMUL_I,
  M_DMULO,
  M_DMULO_I,
  M_DMULOU,
  M_DMULOU_I,
  M_DREM_3,
  M_DREM_3I,
  M_DREMU_3,
  M_DREMU_3I,
  M_DSUB_I,
  M_DSUBU_I,
  M_DSUBU_I_2,
  M_J_A,
  M_JAL_1,
  M_JAL_2,
  M_JAL_A,
  M_JALS_1,
  M_JALS_2,
  M_JALS_A,
  M_JRADDIUSP,
  M_JRC,
  M_L_DAB,
  M_LA_AB,
  M_LB_AB,
  M_LBE_AB,
  M_LBU_AB,
  M_LBUE_AB,
  M_LCA_AB,
  M_LD_AB,
  M_LDC1_AB,
  M_LDC2_AB,
  M_LQC2_AB,
  M_LDC3_AB,
  M_LDL_AB,
  M_LDM_AB,
  M_LDP_AB,
  M_LDR_AB,
  M_LH_AB,
  M_LHE_AB,
  M_LHU_AB,
  M_LHUE_AB,
  M_LI,
  M_LI_D,
  M_LI_DD,
  M_LI_S,
  M_LI_SS,
  M_LL_AB,
  M_LLD_AB,
  M_LLDP_AB,
  M_LLE_AB,
  M_LLWP_AB,
  M_LLWPE_AB,
  M_LQ_AB,
  M_LW_AB,
  M_LWE_AB,
  M_LWC0_AB,
  M_LWC1_AB,
  M_LWC2_AB,
  M_LWC3_AB,
  M_LWL_AB,
  M_LWLE_AB,
  M_LWM_AB,
  M_LWP_AB,
  M_LWR_AB,
  M_LWRE_AB,
  M_LWU_AB,
  M_MSGSND,
  M_MSGLD,
  M_MSGLD_T,
  M_MSGWAIT,
  M_MSGWAIT_T,
  M_MOVE,
  M_MOVEP,
  M_MUL,
  M_MUL_I,
  M_MULO,
  M_MULO_I,
  M_MULOU,
  M_MULOU_I,
  M_NOR_I,
  M_OR_I,
  M_PREF_AB,
  M_PREFE_AB,
  M_REM_3,
  M_REM_3I,
  M_REMU_3,
  M_REMU_3I,
  M_DROL,
  M_ROL,
  M_DROL_I,
  M_ROL_I,
  M_DROR,
  M_ROR,
  M_DROR_I,
  M_ROR_I,
  M_S_DA,
  M_S_DAB,
  M_S_S,
  M_SAA_AB,
  M_SAAD_AB,
  M_SC_AB,
  M_SCD_AB,
  M_SCDP_AB,
  M_SCE_AB,
  M_SCWP_AB,
  M_SCWPE_AB,
  M_SD_AB,
  M_SDC1_AB,
  M_SDC2_AB,
  M_SQC2_AB,
  M_SDC3_AB,
  M_SDL_AB,
  M_SDM_AB,
  M_SDP_AB,
  M_SDR_AB,
  M_SEQ,
  M_SEQ_I,
  M_SGE,
  M_SGE_I,
  M_SGEU,
  M_SGEU_I,
  M_SGT,
  M_SGT_I,
  M_SGTU,
  M_SGTU_I,
  M_SLE,
  M_SLE_I,
  M_SLEU,
  M_SLEU_I,
  M_SLT_I,
  M_SLTU_I,
  M_SNE,
  M_SNE_I,
  M_SB_AB,
  M_SBE_AB,
  M_SH_AB,
  M_SHE_AB,
  M_SQ_AB,
  M_SW_AB,
  M_SWE_AB,
  M_SWC0_AB,
  M_SWC1_AB,
  M_SWC2_AB,
  M_SWC3_AB,
  M_SWL_AB,
  M_SWLE_AB,
  M_SWM_AB,
  M_SWP_AB,
  M_SWR_AB,
  M_SWRE_AB,
  M_SUB_I,
  M_SUBU_I,
  M_SUBU_I_2,
  M_TEQ_I,
  M_TGE_I,
  M_TGEU_I,
  M_TLT_I,
  M_TLTU_I,
  M_TNE_I,
  M_TRUNCWD,
  M_TRUNCWS,
  M_ULD_AB,
  M_ULH_AB,
  M_ULHU_AB,
  M_ULW_AB,
  M_USH_AB,
  M_USW_AB,
  M_USD_AB,
  M_XOR_I,
  M_COP0,
  M_COP1,
  M_COP2,
  M_COP3,
  M_NUM_MACROS
};
# 1780 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/mips.h" 3 4
extern const struct mips_operand mips_vu0_channel_mask;
extern const struct mips_operand *decode_mips_operand (const char *);
extern const struct mips_opcode mips_builtin_opcodes[];
extern const int bfd_mips_num_builtin_opcodes;
extern struct mips_opcode *mips_opcodes;
extern int bfd_mips_num_opcodes;
# 1950 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/mips.h" 3 4
extern const struct mips_operand *decode_mips16_operand (char, bfd_boolean);
extern const struct mips_opcode mips16_opcodes[];
extern const int bfd_mips16_num_opcodes;
# 2371 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/mips.h" 3 4
extern const struct mips_operand *decode_micromips_operand (const char *);
extern const struct mips_opcode micromips_opcodes[];
extern const int bfd_micromips_num_opcodes;
# 29 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 2
# 1 "project/radare2/libr/asm/arch/mips/gnu/mips-formats.h" 1
# 25 "project/radare2/libr/asm/arch/mips/gnu/mips-formats.h"
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 1 3 4
# 45 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 321 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef int wchar_t;
# 415 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
} max_align_t;
# 46 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 2 3 4

# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 1 3 4
# 99 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 48 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 2 3 4







extern void unlock_stream (FILE *);





extern void unlock_std_streams (void);





extern FILE *fopen_unlocked (const char *, const char *);
extern FILE *fdopen_unlocked (int, const char *);
extern FILE *freopen_unlocked (const char *, const char *, FILE *);




extern char **buildargv (const char *) __attribute__ ((__malloc__));



extern void freeargv (char **);




extern char **dupargv (char **) __attribute__ ((__malloc__));



extern void expandargv (int *, char ***);
# 112 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
extern const char *lbasename (const char *);



extern char *lrealpath (const char *);





extern char *concat (const char *, ...) __attribute__ ((__malloc__)) __attribute__ ((__sentinel__));
# 131 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
extern char *reconcat (char *, const char *, ...) __attribute__ ((__malloc__)) __attribute__ ((__sentinel__));





extern unsigned long concat_length (const char *, ...) __attribute__ ((__sentinel__));






extern char *concat_copy (char *, const char *, ...) __attribute__ ((__sentinel__));






extern char *concat_copy2 (const char *, ...) __attribute__ ((__sentinel__));



extern char *libiberty_concat_ptr;
# 167 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
extern int fdmatch (int fd1, int fd2);
# 179 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
extern char * getpwd (void);
# 192 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
extern long get_run_time (void);




extern char *make_relative_prefix (const char *, const char *,
                                   const char *) __attribute__ ((__malloc__));



extern char *choose_temp_base (void) __attribute__ ((__malloc__));



extern char *make_temp_file (const char *) __attribute__ ((__malloc__));



extern int unlink_if_ordinary (const char *);



extern const char *spaces (int count);




extern int errno_max (void);




extern const char *strerrno (int);



extern int strtoerrno (const char *);



extern char *xstrerror (int);




extern int signo_max (void);
# 249 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
extern const char *strsigno (int);



extern int strtosigno (const char *);



extern int xatexit (void (*fn) (void));



extern void xexit (int status) __attribute__ ((__noreturn__));



extern void xmalloc_set_program_name (const char *);


extern void xmalloc_failed (size_t) __attribute__ ((__noreturn__));





extern void *xmalloc (size_t) __attribute__ ((__malloc__));





extern void *xrealloc (void *, size_t);




extern void *xcalloc (size_t, size_t) __attribute__ ((__malloc__));



extern char *xstrdup (const char *) __attribute__ ((__malloc__));



extern char *xstrndup (const char *, size_t) __attribute__ ((__malloc__));



extern void *xmemdup (const void *, size_t, size_t) __attribute__ ((__malloc__));


extern double physmem_total (void);
extern double physmem_available (void);
# 343 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
extern const unsigned char _hex_value[256];
extern void hex_init (void);
# 369 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
extern struct pex_obj *pex_init (int flags, const char *pname,
     const char *tempbase);
# 451 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
extern const char *pex_run (struct pex_obj *obj, int flags,
       const char *executable, char * const *argv,
       const char *outname, const char *errname,
       int *err);
# 481 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
extern FILE *pex_write_input (struct pex_obj *obj, int binary);





extern FILE *pex_input_file (struct pex_obj *obj, int flags,
                             const char *in_name);






extern FILE *pex_input_pipe (struct pex_obj *obj, int binary);







extern FILE *pex_read_output (struct pex_obj *, int binary);





extern int pex_get_status (struct pex_obj *, int count, int *vector);






struct pex_time
{
  unsigned long user_seconds;
  unsigned long user_microseconds;
  unsigned long system_seconds;
  unsigned long system_microseconds;
};

extern int pex_get_times (struct pex_obj *, int count,
     struct pex_time *vector);



extern void pex_free (struct pex_obj *);
# 542 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
extern const char *pex_one (int flags, const char *executable,
       char * const *argv, const char *pname,
       const char *outname, const char *errname,
       int *status, int *err);
# 561 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
extern int pexecute (const char *, char * const *, const char *,
                     const char *, char **, char **, int);



extern int pwait (int, int *, int);
# 581 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
extern void *C_alloca (size_t) __attribute__ ((__malloc__));
# 26 "project/radare2/libr/asm/arch/mips/gnu/mips-formats.h" 2
# 30 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 2


# 31 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
static unsigned char reg_0_map[] = { 0 };
static unsigned char reg_29_map[] = { 29 };
static unsigned char reg_31_map[] = { 31 };
static unsigned char reg_m16_map[] = { 16, 17, 2, 3, 4, 5, 6, 7 };
static unsigned char reg32r_map[] = {
  0, 8, 16, 24,
  1, 9, 17, 25,
  2, 10, 18, 26,
  3, 11, 19, 27,
  4, 12, 20, 28,
  5, 13, 21, 29,
  6, 14, 22, 30,
  7, 15, 23, 31
};






const struct mips_operand *
decode_mips16_operand (char type, bfd_boolean extended_p)
{
  switch (type)
    {
    case '.': { static const struct mips_reg_operand op = { { OP_REG, 0, 0 }, OP_REG_GP, reg_0_map }; return &op.root; };
    case '>': { static const struct mips_int_operand op = { { OP_INT, 5, 22 }, (1 << (5)) - 1, 0, 0, 
# 57 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             1 
# 57 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             }; return &op.root; };

    case '0': { static const struct mips_int_operand op = { { OP_INT, 5, 0 }, (1 << (5)) - 1, 0, 0, 
# 59 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             1 
# 59 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             }; return &op.root; };
    case '1': { static const struct mips_int_operand op = { { OP_INT, 3, 5 }, (1 << (3)) - 1, 0, 0, 
# 60 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             1 
# 60 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             }; return &op.root; };
    case '2': { static const struct mips_int_operand op = { { OP_INT, 3, 8 }, (1 << (3)) - 1, 0, 0, 
# 61 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             1 
# 61 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             }; return &op.root; };
    case '3': { static const struct mips_int_operand op = { { OP_INT, 5, 16 }, (1 << (5)) - 1, 0, 0, 
# 62 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             1 
# 62 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             }; return &op.root; };
    case '4': { static const struct mips_int_operand op = { { OP_INT, 3, 21 }, (1 << (3)) - 1, 0, 0, 
# 63 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             1 
# 63 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             }; return &op.root; };
    case '6': { static const struct mips_int_operand op = { { OP_INT, 6, 5 }, (1 << (6)) - 1, 0, 0, 
# 64 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             1 
# 64 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             }; return &op.root; };
    case '9': { static const struct mips_int_operand op = { { OP_INT, 9, 0 }, (1 << ((9) - 1)) - 1, 0, 0, 
# 65 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             0 
# 65 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             }; return &op.root; };

    case 'G': { static const struct mips_operand op = { OP_REG28, 0, 0 }; return &op; };
    case 'L': { static const struct mips_operand op = { OP_ENTRY_EXIT_LIST, 6, 5 }; return &op; };
    case 'N': { static const struct mips_reg_operand op = { { OP_REG, 5, 0 }, OP_REG_COPRO, 0 }; return &op.root; };
    case 'O': { static const struct mips_int_operand op = { { OP_INT, 3, 21 }, (1 << (3)) - 1, 0, 0, 
# 70 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             0 
# 70 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             }; return &op.root; };
    case 'Q': { static const struct mips_reg_operand op = { { OP_REG, 5, 16 }, OP_REG_HW, 0 }; return &op.root; };
    case 'P': { static const struct mips_operand op = { OP_PC, 0, 0 }; return &op; };
    case 'R': { static const struct mips_reg_operand op = { { OP_REG, 0, 0 }, OP_REG_GP, reg_31_map }; return &op.root; };
    case 'S': { static const struct mips_reg_operand op = { { OP_REG, 0, 0 }, OP_REG_GP, reg_29_map }; return &op.root; };
    case 'T': { static const struct mips_int_operand op = { { OP_INT, 5, 16 }, (1 << (5)) - 1, 0, 0, 
# 75 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             1 
# 75 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             }; return &op.root; };
    case 'X': { static const struct mips_reg_operand op = { { OP_REG, 5, 0 }, OP_REG_GP, 0 }; return &op.root; };
    case 'Y': { static const struct mips_reg_operand op = { { OP_REG, 5, 3 }, OP_REG_GP, reg32r_map }; return &op.root; };
    case 'Z': { static const struct mips_reg_operand op = { { OP_REG, 3, 0 }, OP_REG_GP, reg_m16_map }; return &op.root; };

    case 'a': { static const struct mips_pcrel_operand op = { { { OP_PCREL, 26, 0 }, (1 << ((26) - (
# 80 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             0
# 80 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             ))) - 1, 0, 2, 
# 80 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             1 
# 80 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             }, 26 + 2, 
# 80 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             1
# 80 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             , 
# 80 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             0 
# 80 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             }; return &op.root.root; };
    case 'b': { static const struct mips_int_operand op = { { OP_INT, 5, 22 }, (1 << (5)) - 1, 0, 0, 
# 81 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             1 
# 81 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             }; return &op.root; };
    case 'c': { static const struct mips_msb_operand op = { { OP_MSB, 5, 16 }, 1, 
# 82 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             1
# 82 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             , 32 }; return &op.root; };
    case 'd': { static const struct mips_msb_operand op = { { OP_MSB, 5, 16 }, 1, 
# 83 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             0
# 83 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             , 32 }; return &op.root; };
    case 'e': { static const struct mips_int_operand op = { { OP_INT, 11, 0 }, (1 << (11)) - 1, 0, 0, 
# 84 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             1 
# 84 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             }; return &op.root; };
    case 'i': { static const struct mips_pcrel_operand op = { { { OP_PCREL, 26, 0 }, (1 << ((26) - (
# 85 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             0
# 85 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             ))) - 1, 0, 2, 
# 85 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             1 
# 85 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             }, 26 + 2, 
# 85 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             1
# 85 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             , 
# 85 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             1 
# 85 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             }; return &op.root.root; };
    case 'l': { static const struct mips_operand op = { OP_ENTRY_EXIT_LIST, 6, 5 }; return &op; };
    case 'm': { static const struct mips_operand op = { OP_SAVE_RESTORE_LIST, 7, 0 }; return &op; };
    case 'n': { static const struct mips_int_operand op = { { OP_INT, 2, 0 }, 3, 1, 0, 
# 88 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             0 
# 88 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             }; return &op.root; };
    case 'o': { static const struct mips_int_operand op = { { OP_INT, 5, 16 }, 31, 0, 4, 
# 89 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             0 
# 89 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             }; return &op.root; };
    case 'r': { static const struct mips_reg_operand op = { { OP_REG, 3, 16 }, OP_REG_GP, reg_m16_map }; return &op.root; };
    case 's': { static const struct mips_int_operand op = { { OP_INT, 3, 24 }, (1 << (3)) - 1, 0, 0, 
# 91 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             1 
# 91 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             }; return &op.root; };
    case 'u': { static const struct mips_int_operand op = { { OP_INT, 16, 0 }, (1 << (16)) - 1, 0, 0, 
# 92 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
             1 
# 92 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
             }; return &op.root; };
    case 'v': { static const struct mips_reg_operand op = { { OP_OPTIONAL_REG, 3, 8 }, OP_REG_GP, reg_m16_map }; return &op.root; };
    case 'w': { static const struct mips_reg_operand op = { { OP_OPTIONAL_REG, 3, 5 }, OP_REG_GP, reg_m16_map }; return &op.root; };
    case 'x': { static const struct mips_reg_operand op = { { OP_REG, 3, 8 }, OP_REG_GP, reg_m16_map }; return &op.root; };
    case 'y': { static const struct mips_reg_operand op = { { OP_REG, 3, 5 }, OP_REG_GP, reg_m16_map }; return &op.root; };
    case 'z': { static const struct mips_reg_operand op = { { OP_REG, 3, 2 }, OP_REG_GP, reg_m16_map }; return &op.root; };
    }

  if (extended_p)
    switch (type)
      {
      case '<': { static const struct mips_int_operand op = { { OP_INT, 5, 22 }, (1 << (5)) - 1, 0, 0, 
# 103 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 103 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };
      case '[': { static const struct mips_int_operand op = { { OP_INT, 6, 0 }, (1 << (6)) - 1, 0, 0, 
# 104 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 104 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };
      case ']': { static const struct mips_int_operand op = { { OP_INT, 6, 0 }, (1 << (6)) - 1, 0, 0, 
# 105 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 105 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };

      case '5': { static const struct mips_int_operand op = { { OP_INT, 16, 0 }, (1 << ((16) - 1)) - 1, 0, 0, 
# 107 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 107 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };
      case '8': { static const struct mips_int_operand op = { { OP_INT, 16, 0 }, (1 << ((16) - 1)) - 1, 0, 0, 
# 108 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 108 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };

      case 'A': { static const struct mips_pcrel_operand op = { { { OP_PCREL, 16, 0 }, (1 << ((16) - (
# 110 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               1
# 110 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               ))) - 1, 0, 0, 
# 110 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               1 
# 110 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }, 2, 
# 110 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0
# 110 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               , 
# 110 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 110 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root.root; };
      case 'B': { static const struct mips_pcrel_operand op = { { { OP_PCREL, 16, 0 }, (1 << ((16) - (
# 111 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               1
# 111 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               ))) - 1, 0, 0, 
# 111 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               1 
# 111 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }, 3, 
# 111 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0
# 111 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               , 
# 111 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 111 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root.root; };
      case 'C': { static const struct mips_int_operand op = { { OP_INT, 16, 0 }, (1 << ((16) - 1)) - 1, 0, 0, 
# 112 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 112 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };
      case 'D': { static const struct mips_int_operand op = { { OP_INT, 16, 0 }, (1 << ((16) - 1)) - 1, 0, 0, 
# 113 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 113 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };
      case 'E': { static const struct mips_pcrel_operand op = { { { OP_PCREL, 16, 0 }, (1 << ((16) - (
# 114 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               1
# 114 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               ))) - 1, 0, 0, 
# 114 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               1 
# 114 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }, 2, 
# 114 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0
# 114 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               , 
# 114 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 114 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root.root; };
      case 'F': { static const struct mips_int_operand op = { { OP_INT, 15, 0 }, (1 << ((15) - 1)) - 1, 0, 0, 
# 115 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 115 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };
      case 'H': { static const struct mips_int_operand op = { { OP_INT, 16, 0 }, (1 << ((16) - 1)) - 1, 0, 0, 
# 116 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 116 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };
      case 'K': { static const struct mips_int_operand op = { { OP_INT, 16, 0 }, (1 << ((16) - 1)) - 1, 0, 0, 
# 117 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 117 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };
      case 'U': { static const struct mips_int_operand op = { { OP_INT, 16, 0 }, (1 << (16)) - 1, 0, 0, 
# 118 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 118 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };
      case 'V': { static const struct mips_int_operand op = { { OP_INT, 16, 0 }, (1 << ((16) - 1)) - 1, 0, 0, 
# 119 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 119 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };
      case 'W': { static const struct mips_int_operand op = { { OP_INT, 16, 0 }, (1 << ((16) - 1)) - 1, 0, 0, 
# 120 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 120 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };

      case 'j': { static const struct mips_int_operand op = { { OP_INT, 16, 0 }, (1 << ((16) - 1)) - 1, 0, 0, 
# 122 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 122 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };
      case 'k': { static const struct mips_int_operand op = { { OP_INT, 16, 0 }, (1 << ((16) - 1)) - 1, 0, 0, 
# 123 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 123 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };
      case 'p': { static const struct mips_pcrel_operand op = { { { OP_PCREL, 16, 0 }, (1 << ((16) - (
# 124 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               1
# 124 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               ))) - 1, 0, 1, 
# 124 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               1 
# 124 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }, 0, 
# 124 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               1
# 124 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               , 
# 124 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 124 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root.root; };
      case 'q': { static const struct mips_pcrel_operand op = { { { OP_PCREL, 16, 0 }, (1 << ((16) - (
# 125 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               1
# 125 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               ))) - 1, 0, 1, 
# 125 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               1 
# 125 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }, 0, 
# 125 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               1
# 125 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               , 
# 125 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 125 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root.root; };
      }
  else
    switch (type)
      {
      case '<': { static const struct mips_int_operand op = { { OP_INT, 3, 2 }, 8, 0, 0, 
# 130 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 130 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };
      case '[': { static const struct mips_int_operand op = { { OP_INT, 3, 2 }, 8, 0, 0, 
# 131 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 131 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };
      case ']': { static const struct mips_int_operand op = { { OP_INT, 3, 8 }, 8, 0, 0, 
# 132 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 132 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };

      case '5': { static const struct mips_int_operand op = { { OP_INT, 5, 0 }, (1 << (5)) - 1, 0, 0, 
# 134 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 134 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };
      case '8': { static const struct mips_int_operand op = { { OP_INT, 8, 0 }, (1 << (8)) - 1, 0, 0, 
# 135 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 135 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };

      case 'A': { static const struct mips_pcrel_operand op = { { { OP_PCREL, 8, 0 }, (1 << ((8) - (
# 137 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0
# 137 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               ))) - 1, 0, 2, 
# 137 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               1 
# 137 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }, 2, 
# 137 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0
# 137 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               , 
# 137 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 137 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root.root; };
      case 'B': { static const struct mips_pcrel_operand op = { { { OP_PCREL, 5, 0 }, (1 << ((5) - (
# 138 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0
# 138 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               ))) - 1, 0, 3, 
# 138 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               1 
# 138 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }, 3, 
# 138 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0
# 138 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               , 
# 138 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 138 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root.root; };
      case 'C': { static const struct mips_int_operand op = { { OP_INT, 8, 0 }, 255, 0, 3, 
# 139 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 139 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };
      case 'D': { static const struct mips_int_operand op = { { OP_INT, 5, 0 }, 31, 0, 3, 
# 140 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 140 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };
      case 'E': { static const struct mips_pcrel_operand op = { { { OP_PCREL, 5, 0 }, (1 << ((5) - (
# 141 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0
# 141 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               ))) - 1, 0, 2, 
# 141 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               1 
# 141 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }, 2, 
# 141 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0
# 141 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               , 
# 141 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 141 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root.root; };
      case 'F': { static const struct mips_int_operand op = { { OP_INT, 4, 0 }, (1 << ((4) - 1)) - 1, 0, 0, 
# 142 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 142 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };
      case 'H': { static const struct mips_int_operand op = { { OP_INT, 5, 0 }, 31, 0, 1, 
# 143 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 143 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };
      case 'K': { static const struct mips_int_operand op = { { OP_INT, 8, 0 }, 127, 0, 3, 
# 144 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 144 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };
      case 'U': { static const struct mips_int_operand op = { { OP_INT, 8, 0 }, (1 << (8)) - 1, 0, 0, 
# 145 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 145 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };
      case 'V': { static const struct mips_int_operand op = { { OP_INT, 8, 0 }, 255, 0, 2, 
# 146 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 146 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };
      case 'W': { static const struct mips_int_operand op = { { OP_INT, 5, 0 }, 31, 0, 2, 
# 147 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 147 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };

      case 'j': { static const struct mips_int_operand op = { { OP_INT, 5, 0 }, (1 << ((5) - 1)) - 1, 0, 0, 
# 149 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 149 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };
      case 'k': { static const struct mips_int_operand op = { { OP_INT, 8, 0 }, (1 << ((8) - 1)) - 1, 0, 0, 
# 150 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 150 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root; };
      case 'p': { static const struct mips_pcrel_operand op = { { { OP_PCREL, 8, 0 }, (1 << ((8) - (
# 151 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               1
# 151 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               ))) - 1, 0, 1, 
# 151 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               1 
# 151 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }, 0, 
# 151 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               1
# 151 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               , 
# 151 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 151 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root.root; };
      case 'q': { static const struct mips_pcrel_operand op = { { { OP_PCREL, 11, 0 }, (1 << ((11) - (
# 152 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               1
# 152 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               ))) - 1, 0, 1, 
# 152 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               1 
# 152 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }, 0, 
# 152 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               1
# 152 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               , 
# 152 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
               0 
# 152 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
               }; return &op.root.root; };
      }
  return 0;
}
# 214 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
const struct mips_opcode mips16_opcodes[] =
{

{"nop", "", 0x6500, 0xffff, 0, 
# 217 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                      0x00010000
# 217 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                        |
# 217 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00002000
# 217 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              |
# 217 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00000001
# 217 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 
# 217 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                   1
# 217 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 0 },
{"la", "x,A", 0x0800, 0xf800, 
# 218 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                  0x00000001
# 218 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                      , 
# 218 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000400
# 218 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               |
# 218 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                0x00000001
# 218 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 218 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    1
# 218 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 0, 0 },
{"abs", "x,w", 0, (int) M_ABS, 
# 219 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0xffffffff
# 219 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             , 0, 
# 219 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    1
# 219 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 0, 0 },
{"addiu", "y,x,F", 0x4000, 0xf810, 
# 220 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 220 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 220 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000008
# 220 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 0, 
# 220 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 220 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"addiu", "x,k", 0x4800, 0xf800, (
# 221 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000001
# 221 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   |
# 221 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 221 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   ), 0, 
# 221 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                1
# 221 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 0, 0 },
{"addiu", "S,K", 0x6300, 0xff00, 0, (
# 222 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000100
# 222 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                        |
# 222 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000080
# 222 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                        ), 
# 222 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 1
# 222 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                   , 0, 0 },
{"addiu", "S,S,K", 0x6300, 0xff00, 0, (
# 223 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000100
# 223 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                          |
# 223 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000080
# 223 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                          ), 
# 223 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                   1
# 223 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 0 },
{"addiu", "x,P,V", 0x0800, 0xf800, 
# 224 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 224 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         , 
# 224 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00000400
# 224 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 224 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 224 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"addiu", "x,S,V", 0x0000, 0xf800, 
# 225 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 225 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         , 
# 225 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00010000
# 225 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               |
# 225 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                0x00000100
# 225 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 
# 225 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                          0x00008000
# 225 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                            , 0 },
{"addiu", "x,S,V", 0x0000, 0xf800, 
# 226 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 226 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         , 
# 226 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00000100
# 226 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 226 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 226 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"addiu", "x,S,V", 0xf0000000, 0xf800f8e0, 
# 227 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000001
# 227 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                , 
# 227 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    0x00000100
# 227 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                         , 0, 
# 227 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                               0x00008000
# 227 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                 , 0 },
{"addiu", "x,G,V", 0xf0000020, 0xf800f8e0, 
# 228 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000001
# 228 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                |
# 228 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 0x00000008
# 228 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 0, 
# 228 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                               0x00008000
# 228 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                 , 0 },
{"addu", "z,v,y", 0xe001, 0xf803, 
# 229 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 229 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 229 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000008
# 229 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              |
# 229 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00000010
# 229 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                   , 
# 229 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      0x00010000
# 229 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 
# 229 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                           1
# 229 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                             , 0, 0 },
{"addu", "y,x,F", 0x4000, 0xf810, 
# 230 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 230 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 230 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000008
# 230 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 0, 
# 230 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 230 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"addu", "x,k", 0x4800, 0xf800, (
# 231 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000001
# 231 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   |
# 231 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 231 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   ), 0, 
# 231 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                1
# 231 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 0, 0 },
{"addu", "S,K", 0x6300, 0xff00, 0, (
# 232 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000100
# 232 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                        |
# 232 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000080
# 232 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                        ), 
# 232 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 1
# 232 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                   , 0, 0 },
{"addu", "S,S,K", 0x6300, 0xff00, 0, (
# 233 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000100
# 233 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                          |
# 233 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000080
# 233 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                          ), 
# 233 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                   1
# 233 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 0 },
{"addu", "x,P,V", 0x0800, 0xf800, 
# 234 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 234 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         , 
# 234 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00000400
# 234 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 234 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 234 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"addu", "x,S,V", 0x0000, 0xf800, 
# 235 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 235 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         , 
# 235 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00010000
# 235 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               |
# 235 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                0x00000100
# 235 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 
# 235 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                          0x00008000
# 235 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                            , 0 },
{"addu", "x,S,V", 0x0000, 0xf800, 
# 236 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 236 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         , 
# 236 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00000100
# 236 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 236 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 236 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"addu", "x,S,V", 0xf0000000, 0xf800f8e0, 
# 237 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000001
# 237 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                , 
# 237 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    0x00000100
# 237 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                         , 0, 
# 237 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                               0x00008000
# 237 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                 , 0 },
{"addu", "x,G,V", 0xf0000020, 0xf800f8e0, 
# 238 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000001
# 238 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                |
# 238 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 0x00000008
# 238 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 0, 
# 238 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                               0x00008000
# 238 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                 , 0 },
{"and", "x,y", 0xe80c, 0xf81f, (
# 239 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000001
# 239 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   |
# 239 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 239 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   )|
# 239 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00000008
# 239 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             , 
# 239 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                0x00010000
# 239 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 239 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 239 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"andi", "x,u", 0xf0006860, 0xf800f8e0, 
# 240 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000001
# 240 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 0, 0, 
# 240 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                         0x00008000
# 240 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                           , 0 },
{"b", "q", 0x1000, 0xf800, 0, 
# 241 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                    0x00000800
# 241 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                       , 
# 241 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          1
# 241 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 0, 0 },
{"beq", "x,y,p", 0, (int) M_BEQ, 
# 242 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0xffffffff
# 242 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               , 0, 
# 242 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      1
# 242 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0 },
{"beq", "x,I,p", 0, (int) M_BEQ_I, 
# 243 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                      0xffffffff
# 243 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                , 0, 
# 243 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                       1
# 243 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                         , 0, 0 },
{"beqz", "x,p", 0x2000, 0xf800, 
# 244 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 244 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                       , 
# 244 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                           0x00001000
# 244 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 
# 244 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 1
# 244 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                   , 0, 0 },
{"bge", "x,y,p", 0, (int) M_BGE, 
# 245 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0xffffffff
# 245 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               , 0, 
# 245 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      1
# 245 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0 },
{"bge", "x,I,p", 0, (int) M_BGE_I, 
# 246 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                      0xffffffff
# 246 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                , 0, 
# 246 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                       1
# 246 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                         , 0, 0 },
{"bgeu", "x,y,p", 0, (int) M_BGEU, 
# 247 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0xffffffff
# 247 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               , 0, 
# 247 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      1
# 247 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0 },
{"bgeu", "x,I,p", 0, (int) M_BGEU_I, 
# 248 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                       0xffffffff
# 248 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 0, 
# 248 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                        1
# 248 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 0, 0 },
{"bgt", "x,y,p", 0, (int) M_BGT, 
# 249 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0xffffffff
# 249 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               , 0, 
# 249 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      1
# 249 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0 },
{"bgt", "x,I,p", 0, (int) M_BGT_I, 
# 250 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                      0xffffffff
# 250 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                , 0, 
# 250 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                       1
# 250 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                         , 0, 0 },
{"bgtu", "x,y,p", 0, (int) M_BGTU, 
# 251 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0xffffffff
# 251 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               , 0, 
# 251 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      1
# 251 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0 },
{"bgtu", "x,I,p", 0, (int) M_BGTU_I, 
# 252 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                       0xffffffff
# 252 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 0, 
# 252 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                        1
# 252 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 0, 0 },
{"ble", "x,y,p", 0, (int) M_BLE, 
# 253 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0xffffffff
# 253 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               , 0, 
# 253 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      1
# 253 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0 },
{"ble", "x,I,p", 0, (int) M_BLE_I, 
# 254 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                      0xffffffff
# 254 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                , 0, 
# 254 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                       1
# 254 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                         , 0, 0 },
{"bleu", "x,y,p", 0, (int) M_BLEU, 
# 255 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0xffffffff
# 255 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               , 0, 
# 255 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      1
# 255 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0 },
{"bleu", "x,I,p", 0, (int) M_BLEU_I, 
# 256 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                       0xffffffff
# 256 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 0, 
# 256 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                        1
# 256 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 0, 0 },
{"blt", "x,y,p", 0, (int) M_BLT, 
# 257 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0xffffffff
# 257 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               , 0, 
# 257 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      1
# 257 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0 },
{"blt", "x,I,p", 0, (int) M_BLT_I, 
# 258 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                      0xffffffff
# 258 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                , 0, 
# 258 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                       1
# 258 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                         , 0, 0 },
{"bltu", "x,y,p", 0, (int) M_BLTU, 
# 259 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0xffffffff
# 259 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               , 0, 
# 259 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      1
# 259 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0 },
{"bltu", "x,I,p", 0, (int) M_BLTU_I, 
# 260 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                       0xffffffff
# 260 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 0, 
# 260 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                        1
# 260 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 0, 0 },
{"bne", "x,y,p", 0, (int) M_BNE, 
# 261 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0xffffffff
# 261 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               , 0, 
# 261 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      1
# 261 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0 },
{"bne", "x,I,p", 0, (int) M_BNE_I, 
# 262 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                      0xffffffff
# 262 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                , 0, 
# 262 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                       1
# 262 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                         , 0, 0 },
{"bnez", "x,p", 0x2800, 0xf800, 
# 263 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 263 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                       , 
# 263 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                           0x00001000
# 263 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 
# 263 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 1
# 263 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                   , 0, 0 },
{"break", "", 0xe805, 0xffff, 
# 264 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00400000
# 264 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                     , 
# 264 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00010000
# 264 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                           , 
# 264 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              1
# 264 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                , 0, 0 },
{"break", "6", 0xe805, 0xf81f, 
# 265 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00400000
# 265 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                     , 
# 265 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00010000
# 265 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                           , 
# 265 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              1
# 265 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                , 0, 0 },
{"bteqz", "p", 0x6000, 0xff00, 
# 266 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x08000000
# 266 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                     , 
# 266 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00001000
# 266 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 
# 266 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               1
# 266 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 0, 0 },
{"btnez", "p", 0x6100, 0xff00, 
# 267 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x08000000
# 267 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                     , 
# 267 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00001000
# 267 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 
# 267 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               1
# 267 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 0, 0 },
{"cache", "T,9(x)", 0xf000d0a0, 0xfe00f8e0, 
# 268 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00000010
# 268 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 0, 0, 
# 268 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                            0x00008000
# 268 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                              , 0 },
{"cmpi", "x,U", 0x7000, 0xf800, 
# 269 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 269 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                       |
# 269 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x10000000
# 269 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 0, 
# 269 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                   1
# 269 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 0 },
{"cmp", "x,y", 0xe80a, 0xf81f, 
# 270 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 270 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                       |
# 270 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000008
# 270 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            |
# 270 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x10000000
# 270 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 
# 270 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    0x00010000
# 270 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 
# 270 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                         1
# 270 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                           , 0, 0 },
{"cmp", "x,U", 0x7000, 0xf800, 
# 271 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 271 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                       |
# 271 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x10000000
# 271 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 0, 
# 271 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                   1
# 271 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 0 },
{"dla", "y,E", 0xfe00, 0xff00, 
# 272 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000001
# 272 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                       , 
# 272 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000400
# 272 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 |
# 272 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                  0x00000001
# 272 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                    , 
# 272 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      3
# 272 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0 },
{"daddiu", "y,x,F", 0x4010, 0xf810, 
# 273 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 273 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 273 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000008
# 273 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 0, 
# 273 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      3
# 273 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0 },
{"daddiu", "y,j", 0xfd00, 0xff00, (
# 274 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000001
# 274 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   |
# 274 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 274 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   ), 0, 
# 274 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                3
# 274 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 0, 0 },
{"daddiu", "S,K", 0xfb00, 0xff00, 0, (
# 275 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00000100
# 275 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 275 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00000080
# 275 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         ), 
# 275 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                  3
# 275 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                    , 0, 0 },
{"daddiu", "S,S,K", 0xfb00, 0xff00, 0, (
# 276 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                           0x00000100
# 276 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                           |
# 276 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                           0x00000080
# 276 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                           ), 
# 276 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    3
# 276 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 0, 0 },
{"daddiu", "y,P,W", 0xfe00, 0xff00, 
# 277 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 277 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         , 
# 277 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              0x00000400
# 277 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                   , 
# 277 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      3
# 277 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0 },
{"daddiu", "y,S,W", 0xff00, 0xff00, 
# 278 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 278 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         , 
# 278 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00000100
# 278 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 278 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     3
# 278 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"daddu", "z,v,y", 0xe000, 0xf803, 
# 279 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 279 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 279 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000008
# 279 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              |
# 279 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00000010
# 279 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                   , 
# 279 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      0x00010000
# 279 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 
# 279 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                           3
# 279 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                             , 0, 0 },
{"daddu", "y,x,F", 0x4010, 0xf810, 
# 280 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 280 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 280 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000008
# 280 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 0, 
# 280 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      3
# 280 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0 },
{"daddu", "y,j", 0xfd00, 0xff00, (
# 281 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000001
# 281 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   |
# 281 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 281 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   ), 0, 
# 281 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                3
# 281 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 0, 0 },
{"daddu", "S,K", 0xfb00, 0xff00, 0, (
# 282 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00000100
# 282 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 282 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00000080
# 282 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         ), 
# 282 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                  3
# 282 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                    , 0, 0 },
{"daddu", "S,S,K", 0xfb00, 0xff00, 0, (
# 283 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                           0x00000100
# 283 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                           |
# 283 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                           0x00000080
# 283 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                           ), 
# 283 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    3
# 283 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 0, 0 },
{"daddu", "y,P,W", 0xfe00, 0xff00, 
# 284 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 284 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         , 
# 284 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              0x00000400
# 284 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                   , 
# 284 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      3
# 284 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0 },
{"daddu", "y,S,W", 0xff00, 0xff00, 
# 285 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 285 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         , 
# 285 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00000100
# 285 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 285 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     3
# 285 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"ddiv", ".,x,y", 0xe81e, 0xf81f, 
# 286 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000008
# 286 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 286 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000010
# 286 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              |
# 286 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00100000
# 286 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                    |
# 286 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     0x00200000
# 286 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 
# 286 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                            0x00010000
# 286 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                              , 
# 286 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                 3
# 286 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                   , 0, 0 },
{"ddiv", "z,v,y", 0, (int) M_DDIV_3, 
# 287 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                       0xffffffff
# 287 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 0, 
# 287 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                        3
# 287 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 0, 0 },
{"ddivu", ".,x,y", 0xe81f, 0xf81f, 
# 288 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000008
# 288 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 288 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000010
# 288 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              |
# 288 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00100000
# 288 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                    |
# 288 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     0x00200000
# 288 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 
# 288 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                            0x00010000
# 288 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                              , 
# 288 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                 3
# 288 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                   , 0, 0 },
{"ddivu", "z,v,y", 0, (int) M_DDIVU_3, 
# 289 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0xffffffff
# 289 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 0, 
# 289 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                         3
# 289 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                           , 0, 0 },
{"di", "", 0xf006670c, 0xffffffff, 
# 290 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                       0x00000400
# 290 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 0, 0, 
# 290 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                       0x00008000
# 290 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                         , 0 },
{"di", ".", 0xf006670c, 0xffffffff, 
# 291 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                       0x00000400
# 291 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 0, 0, 
# 291 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                       0x00008000
# 291 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                         , 0 },
{"di", "y", 0xf002670c, 0xffffff1f, 
# 292 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                       0x00000001
# 292 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                           |
# 292 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000400
# 292 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 0, 0, 
# 292 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                           0x00008000
# 292 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                             , 0 },
{"div", ".,x,y", 0xe81a, 0xf81f, 
# 293 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000008
# 293 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 293 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000010
# 293 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              |
# 293 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00100000
# 293 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                    |
# 293 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     0x00200000
# 293 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 
# 293 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                            0x00010000
# 293 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                              , 
# 293 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                 1
# 293 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                   , 0, 0 },
{"div", "z,v,y", 0, (int) M_DIV_3, 
# 294 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                      0xffffffff
# 294 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                , 0, 
# 294 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                       1
# 294 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                         , 0, 0 },
{"divu", ".,x,y", 0xe81b, 0xf81f, 
# 295 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000008
# 295 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 295 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000010
# 295 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              |
# 295 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00100000
# 295 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                    |
# 295 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     0x00200000
# 295 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 
# 295 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                            0x00010000
# 295 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                              , 
# 295 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                 1
# 295 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                   , 0, 0 },
{"divu", "z,v,y", 0, (int) M_DIVU_3, 
# 296 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                       0xffffffff
# 296 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 0, 
# 296 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                        1
# 296 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 0, 0 },
{"dmul", "z,v,y", 0, (int) M_DMUL, 
# 297 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0xffffffff
# 297 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               , 0, 
# 297 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                       3
# 297 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                         , 0, 0 },
{"dmult", "x,y", 0xe81c, 0xf81f, 
# 298 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 298 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                       |
# 298 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000008
# 298 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            |
# 298 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00100000
# 298 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  |
# 298 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                   0x00200000
# 298 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 
# 298 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                          0x00010000
# 298 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                            , 
# 298 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                               3
# 298 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                 , 0, 0 },
{"dmultu", "x,y", 0xe81d, 0xf81f, 
# 299 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 299 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                       |
# 299 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000008
# 299 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            |
# 299 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00100000
# 299 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  |
# 299 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                   0x00200000
# 299 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 
# 299 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                          0x00010000
# 299 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                            , 
# 299 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                               3
# 299 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                 , 0, 0 },
{"drem", ".,x,y", 0xe81e, 0xf81f, 
# 300 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000008
# 300 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 300 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000010
# 300 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              |
# 300 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00100000
# 300 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                    |
# 300 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     0x00200000
# 300 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 
# 300 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                            0x00010000
# 300 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                              , 
# 300 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                 3
# 300 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                   , 0, 0 },
{"drem", "z,v,y", 0, (int) M_DREM_3, 
# 301 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                       0xffffffff
# 301 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 0, 
# 301 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                        3
# 301 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 0, 0 },
{"dremu", ".,x,y", 0xe81f, 0xf81f, 
# 302 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000008
# 302 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 302 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000010
# 302 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              |
# 302 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00100000
# 302 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                    |
# 302 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     0x00200000
# 302 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 
# 302 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                            0x00010000
# 302 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                              , 
# 302 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                 3
# 302 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                   , 0, 0 },
{"dremu", "z,v,y", 0, (int) M_DREMU_3, 
# 303 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0xffffffff
# 303 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 0, 
# 303 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                         3
# 303 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                           , 0, 0 },
{"dsllv", "y,x", 0xe814, 0xf81f, (
# 304 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000001
# 304 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   |
# 304 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 304 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   )|
# 304 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00000008
# 304 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             , 
# 304 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                0x00010000
# 304 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 304 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     3
# 304 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"dsll", "x,w,[", 0x3001, 0xf803, 
# 305 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 305 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 305 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000008
# 305 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 0, 
# 305 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      3
# 305 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0 },
{"dsll", "y,x", 0xe814, 0xf81f, (
# 306 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000001
# 306 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   |
# 306 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 306 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   )|
# 306 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00000008
# 306 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             , 
# 306 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                0x00010000
# 306 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 306 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     3
# 306 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"dsrav", "y,x", 0xe817, 0xf81f, (
# 307 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000001
# 307 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   |
# 307 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 307 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   )|
# 307 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00000008
# 307 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             , 
# 307 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                0x00010000
# 307 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 307 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     3
# 307 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"dsra", "y,]", 0xe813, 0xf81f, (
# 308 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000001
# 308 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   |
# 308 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 308 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   ), 0, 
# 308 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                3
# 308 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 0, 0 },
{"dsra", "y,x", 0xe817, 0xf81f, (
# 309 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000001
# 309 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   |
# 309 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 309 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   )|
# 309 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00000008
# 309 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             , 
# 309 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                0x00010000
# 309 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 309 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     3
# 309 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"dsrlv", "y,x", 0xe816, 0xf81f, (
# 310 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000001
# 310 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   |
# 310 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 310 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   )|
# 310 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00000008
# 310 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             , 
# 310 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                0x00010000
# 310 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 310 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     3
# 310 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"dsrl", "y,]", 0xe808, 0xf81f, (
# 311 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000001
# 311 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   |
# 311 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 311 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   ), 0, 
# 311 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                3
# 311 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 0, 0 },
{"dsrl", "y,x", 0xe816, 0xf81f, (
# 312 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000001
# 312 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   |
# 312 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 312 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   )|
# 312 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00000008
# 312 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             , 
# 312 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                0x00010000
# 312 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 312 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     3
# 312 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"dsubu", "z,v,y", 0xe002, 0xf803, 
# 313 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 313 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 313 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000008
# 313 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              |
# 313 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00000010
# 313 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                   , 
# 313 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      0x00010000
# 313 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 
# 313 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                           3
# 313 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                             , 0, 0 },
{"dsubu", "y,x,I", 0, (int) M_DSUBU_I, 
# 314 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0xffffffff
# 314 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 0, 
# 314 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                         3
# 314 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                           , 0, 0 },
{"dsubu", "y,I", 0, (int) M_DSUBU_I_2, 
# 315 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0xffffffff
# 315 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 0, 
# 315 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                          3
# 315 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                            , 0, 0 },
{"ehb", "", 0xf0c03010, 0xffffffff, 0, 0, 0, 
# 316 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    0x00008000
# 316 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 0 },
{"ei", "", 0xf007670c, 0xffffffff, 
# 317 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                       0x00000400
# 317 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 0, 0, 
# 317 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                       0x00008000
# 317 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                         , 0 },
{"ei", ".", 0xf007670c, 0xffffffff, 
# 318 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                       0x00000400
# 318 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 0, 0, 
# 318 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                       0x00008000
# 318 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                         , 0 },
{"ei", "y", 0xf003670c, 0xffffff1f, 
# 319 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                       0x00000001
# 319 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                           |
# 319 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000400
# 319 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 0, 0, 
# 319 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                           0x00008000
# 319 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                             , 0 },
{"exit", "L", 0xed09, 0xff1f, 
# 320 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00400000
# 320 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                     , 
# 320 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00010000
# 320 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                           , 
# 320 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              1
# 320 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                , 0, 0 },
{"exit", "L", 0xee09, 0xff1f, 
# 321 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00400000
# 321 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                     , 
# 321 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00010000
# 321 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                           , 
# 321 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              1
# 321 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                , 0, 0 },
{"exit", "", 0xef09, 0xffff, 
# 322 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00400000
# 322 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                     , 
# 322 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00010000
# 322 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                           , 
# 322 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              1
# 322 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                , 0, 0 },
{"exit", "L", 0xef09, 0xff1f, 
# 323 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00400000
# 323 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                     , 
# 323 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00010000
# 323 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                           , 
# 323 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              1
# 323 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                , 0, 0 },
{"entry", "", 0xe809, 0xffff, 
# 324 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00400000
# 324 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                     , 
# 324 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00010000
# 324 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                           , 
# 324 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              1
# 324 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                , 0, 0 },
{"entry", "l", 0xe809, 0xf81f, 
# 325 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00400000
# 325 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                     , 
# 325 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00010000
# 325 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                           , 
# 325 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              1
# 325 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                , 0, 0 },
{"ext", "y,x,b,d", 0xf0203008, 0xf820f81f, 
# 326 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              0x00000001
# 326 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  |
# 326 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                   0x00000008
# 326 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0, 
# 326 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                 0x00008000
# 326 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                   , 0 },
{"ins", "y,.,b,c", 0xf0003004, 0xf820ff1f, 
# 327 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              0x00000001
# 327 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 0, 0, 
# 327 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                             0x00008000
# 327 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                               , 0 },
{"ins", "y,x,b,c", 0xf0203004, 0xf820f81f, 
# 328 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              0x00000001
# 328 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  |
# 328 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                   0x00000008
# 328 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0, 
# 328 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                 0x00008000
# 328 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                   , 0 },
{"jalr", "x", 0xe840, 0xf8ff, 
# 329 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00000004
# 329 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                     |
# 329 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                      0x00000040
# 329 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                           |
# 329 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00002000
# 329 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               , 
# 329 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                  0x00010000
# 329 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                    , 
# 329 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                       1
# 329 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                         , 0, 0 },
{"jalr", "R,x", 0xe840, 0xf8ff, 
# 330 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000008
# 330 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                       |
# 330 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000040
# 330 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             |
# 330 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              0x00002000
# 330 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 
# 330 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    0x00010000
# 330 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 
# 330 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                         1
# 330 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                           , 0, 0 },
{"jal", "x", 0xe840, 0xf8ff, 
# 331 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00000004
# 331 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                     |
# 331 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                      0x00000040
# 331 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                           |
# 331 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00002000
# 331 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               , 
# 331 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                  0x00010000
# 331 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                    , 
# 331 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                       1
# 331 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                         , 0, 0 },
{"jal", "R,x", 0xe840, 0xf8ff, 
# 332 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000008
# 332 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                       |
# 332 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000040
# 332 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             |
# 332 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              0x00002000
# 332 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 
# 332 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    0x00010000
# 332 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 
# 332 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                         1
# 332 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                           , 0, 0 },
{"jal", "a", 0x18000000, 0xfc000000, 
# 333 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000040
# 333 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             |
# 333 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              0x00002000
# 333 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 0, 
# 333 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                        1
# 333 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 0, 0 },
{"jalx", "i", 0x1c000000, 0xfc000000, 
# 334 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000040
# 334 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             |
# 334 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              0x00002000
# 334 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 0, 
# 334 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                        1
# 334 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 0, 0 },
{"jr", "x", 0xe800, 0xf8ff, 
# 335 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                0x00000004
# 335 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                    |
# 335 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00002000
# 335 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                        , 
# 335 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                           0x00010000
# 335 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             , 
# 335 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                1
# 335 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 0, 0 },
{"jr", "R", 0xe820, 0xffff, 
# 336 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                0x00002000
# 336 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   , 
# 336 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                       0x00010000
# 336 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 336 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000200
# 336 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               , 
# 336 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 1
# 336 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                   , 0, 0 },
{"j", "x", 0xe800, 0xf8ff, 
# 337 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                               0x00000004
# 337 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   |
# 337 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                    0x00002000
# 337 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                       , 
# 337 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00010000
# 337 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 
# 337 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               1
# 337 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 0, 0 },
{"j", "R", 0xe820, 0xffff, 
# 338 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                               0x00002000
# 338 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                  , 
# 338 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                      0x00010000
# 338 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                        |
# 338 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00000200
# 338 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 
# 338 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                1
# 338 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 0, 0 },



{"jalrc", "x", 0xe8c0, 0xf8ff, 
# 342 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00000004
# 342 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                     |
# 342 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                      0x00000040
# 342 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                           |
# 342 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00400000
# 342 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                , 
# 342 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                  0x00010000
# 342 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                    |
# 342 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     0x00000800
# 342 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 
# 342 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                           6
# 342 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                              , 0, 0 },
{"jalrc", "R,x", 0xe8c0, 0xf8ff, 
# 343 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000008
# 343 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                       |
# 343 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000040
# 343 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             |
# 343 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              0x00400000
# 343 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 343 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    0x00010000
# 343 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      |
# 343 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                       0x00000800
# 343 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 
# 343 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                             6
# 343 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                , 0, 0 },
{"jrc", "x", 0xe880, 0xf8ff, 
# 344 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00000004
# 344 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                     |
# 344 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                      0x00400000
# 344 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                          , 
# 344 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00010000
# 344 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               |
# 344 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                0x00000800
# 344 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                   , 
# 344 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      6
# 344 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                         , 0, 0 },
{"jrc", "R", 0xe8a0, 0xffff, 
# 345 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00400000
# 345 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                     , 
# 345 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00010000
# 345 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                           |
# 345 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000200
# 345 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 |
# 345 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                  0x00000800
# 345 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 
# 345 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                       6
# 345 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 0, 0 },
{"lb", "y,5(x)", 0x8000, 0xf800, 
# 346 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 346 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 346 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000010
# 346 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 0, 
# 346 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 346 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"lb", "x,V(G)", 0xf0009060, 0xf800f8e0, 
# 347 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000001
# 347 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                |
# 347 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 0x00000010
# 347 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 0, 
# 347 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                               0x00008000
# 347 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                 , 0 },
{"lbu", "y,5(x)", 0xa000, 0xf800, 
# 348 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                      0x00000001
# 348 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                          |
# 348 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                           0x00000010
# 348 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               , 0, 
# 348 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      1
# 348 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0 },
{"lbu", "x,V(G)", 0xf00090a0, 0xf800f8e0, 
# 349 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00000001
# 349 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 |
# 349 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                  0x00000010
# 349 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 0, 0, 
# 349 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                0x00008000
# 349 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                  , 0 },
{"ld", "y,D(x)", 0x3800, 0xf800, 
# 350 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 350 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 350 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000010
# 350 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 0, 
# 350 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      3
# 350 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0 },
{"ld", "y,B", 0xfc00, 0xff00, 
# 351 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                  0x00000001
# 351 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                      , 
# 351 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                           0x00000400
# 351 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                |
# 351 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 0x00000001
# 351 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                   , 
# 351 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     3
# 351 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"ld", "y,D(P)", 0xfc00, 0xff00, 
# 352 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 352 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         , 
# 352 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              0x00000400
# 352 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                   , 
# 352 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      3
# 352 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0 },
{"ld", "y,D(S)", 0xf800, 0xff00, 
# 353 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 353 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         , 
# 353 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00000100
# 353 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 353 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     3
# 353 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"lh", "y,H(x)", 0x8800, 0xf800, 
# 354 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 354 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 354 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000010
# 354 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 0, 
# 354 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 354 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"lh", "x,V(G)", 0xf0009040, 0xf800f8e0, 
# 355 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000001
# 355 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                |
# 355 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 0x00000010
# 355 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 0, 
# 355 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                               0x00008000
# 355 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                 , 0 },
{"lhu", "y,H(x)", 0xa800, 0xf800, 
# 356 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                      0x00000001
# 356 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                          |
# 356 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                           0x00000010
# 356 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               , 0, 
# 356 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      1
# 356 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0 },
{"lhu", "x,V(G)", 0xf0009080, 0xf800f8e0, 
# 357 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00000001
# 357 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 |
# 357 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                  0x00000010
# 357 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 0, 0, 
# 357 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                0x00008000
# 357 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                  , 0 },
{"li", "x,U", 0x6800, 0xf800, 
# 358 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                  0x00000001
# 358 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                      , 
# 358 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00010000
# 358 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 0, 
# 358 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                  0x00008000
# 358 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                    , 0 },
{"li", "x,U", 0x6800, 0xf800, 
# 359 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                  0x00000001
# 359 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                      , 0, 
# 359 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              1
# 359 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                , 0, 0 },
{"li", "x,U", 0xf0006800, 0xf800f8e0, 
# 360 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00000001
# 360 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             , 0, 0, 
# 360 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                        0x00008000
# 360 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 0 },
{"ll", "x,9(r)", 0xf00090c0, 0xfe18f8e0, 
# 361 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000001
# 361 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                |
# 361 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 0x00000010
# 361 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 0, 
# 361 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                               0x00008000
# 361 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                 , 0 },
{"lui", "x,u", 0xf0006820, 0xf800f8e0, 
# 362 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000001
# 362 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 0, 0, 
# 362 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                         0x00008000
# 362 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                           , 0 },
{"lw", "y,W(x)", 0x9800, 0xf800, 
# 363 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 363 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 363 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000010
# 363 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 0, 
# 363 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 363 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"lw", "x,A", 0xb000, 0xf800, 
# 364 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                  0x00000001
# 364 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                      , 
# 364 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000400
# 364 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               |
# 364 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                0x00000001
# 364 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 364 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    1
# 364 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 0, 0 },
{"lw", "x,V(P)", 0xb000, 0xf800, 
# 365 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 365 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         , 
# 365 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00000400
# 365 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 365 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 365 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"lw", "x,V(S)", 0x9000, 0xf800, 
# 366 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 366 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         , 
# 366 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00010000
# 366 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               |
# 366 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                0x00000100
# 366 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 
# 366 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                          0x00008000
# 366 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                            , 0 },
{"lw", "x,V(S)", 0x9000, 0xf800, 
# 367 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 367 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         , 
# 367 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00000100
# 367 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 367 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 367 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"lw", "x,V(S)", 0xf0009000, 0xf800f8e0, 
# 368 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000001
# 368 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                , 
# 368 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    0x00000100
# 368 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                         , 0, 
# 368 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                               0x00008000
# 368 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                 , 0 },
{"lw", "x,V(G)", 0xf0009020, 0xf800f8e0, 
# 369 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000001
# 369 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                |
# 369 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 0x00000010
# 369 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 0, 
# 369 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                               0x00008000
# 369 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                 , 0 },
{"lwl", "x,9(r)", 0xf00090e0, 0xfe18f8e0, 
# 370 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00000001
# 370 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 |
# 370 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                  0x00000010
# 370 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 0, 0, 
# 370 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                0x00008000
# 370 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                  , 0 },
{"lwr", "x,9(r)", 0xf01090e0, 0xfe18f8e0, 
# 371 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00000001
# 371 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 |
# 371 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                  0x00000010
# 371 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 0, 0, 
# 371 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                0x00008000
# 371 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                  , 0 },
{"lwu", "y,W(x)", 0xb800, 0xf800, 
# 372 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                      0x00000001
# 372 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                          |
# 372 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                           0x00000010
# 372 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               , 0, 
# 372 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                       3
# 372 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                         , 0, 0 },
{"mfc0", "y,N", 0xf0006700, 0xffffff00, 
# 373 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000001
# 373 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              |
# 373 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00000400
# 373 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                    , 0, 0, 
# 373 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                              0x00008000
# 373 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                , 0 },
{"mfc0", "y,N,O", 0xf0006700, 0xff1fff00, 
# 374 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000001
# 374 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                |
# 374 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 0x00000400
# 374 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 0, 0, 
# 374 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                0x00008000
# 374 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                  , 0 },
{"mfhi", "x", 0xe810, 0xf8ff, 
# 375 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00000001
# 375 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                     |
# 375 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                      0x00040000
# 375 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                           , 
# 375 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              0x00010000
# 375 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                , 
# 375 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                   1
# 375 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 0 },
{"mflo", "x", 0xe812, 0xf8ff, 
# 376 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00000001
# 376 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                     |
# 376 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                      0x00080000
# 376 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                           , 
# 376 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              0x00010000
# 376 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                , 
# 376 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                   1
# 376 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 0 },
{"move", "y,X", 0x6700, 0xff00, 
# 377 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000001
# 377 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                       |
# 377 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000008
# 377 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 
# 377 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00010000
# 377 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 
# 377 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    1
# 377 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 0, 0 },
{"move", "Y,Z", 0x6500, 0xff00, 
# 378 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000001
# 378 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                       |
# 378 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000008
# 378 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 
# 378 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00010000
# 378 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 
# 378 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    1
# 378 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 0, 0 },
{"movn", "x,.,w", 0xf000300a, 0xfffff81f, 
# 379 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000001
# 379 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                |
# 379 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 0x00000008
# 379 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     |
# 379 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      0x00000010
# 379 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 0, 0, 
# 379 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                    0x00008000
# 379 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                      , 0 },
{"movn", "x,r,w", 0xf020300a, 0xfff8f81f, 
# 380 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000001
# 380 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                |
# 380 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 0x00000008
# 380 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     |
# 380 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      0x00000010
# 380 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 0, 0, 
# 380 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                    0x00008000
# 380 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                      , 0 },
{"movtn", "x,.", 0xf000301a, 0xfffff8ff, 
# 381 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000001
# 381 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              |
# 381 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00000008
# 381 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                   |
# 381 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    0x08000000
# 381 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0, 
# 381 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                  0x00008000
# 381 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                    , 0 },
{"movtn", "x,r", 0xf020301a, 0xfff8f8ff, 
# 382 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000001
# 382 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              |
# 382 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00000008
# 382 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                   |
# 382 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    0x08000000
# 382 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0, 
# 382 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                  0x00008000
# 382 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                    , 0 },
{"movtz", "x,.", 0xf0003016, 0xfffff8ff, 
# 383 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000001
# 383 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              |
# 383 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00000008
# 383 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                   |
# 383 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    0x08000000
# 383 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0, 
# 383 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                  0x00008000
# 383 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                    , 0 },
{"movtz", "x,r", 0xf0203016, 0xfff8f8ff, 
# 384 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000001
# 384 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              |
# 384 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00000008
# 384 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                   |
# 384 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    0x08000000
# 384 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0, 
# 384 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                  0x00008000
# 384 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                    , 0 },
{"movz", "x,.,w", 0xf0003006, 0xfffff81f, 
# 385 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000001
# 385 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                |
# 385 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 0x00000008
# 385 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     |
# 385 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      0x00000010
# 385 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 0, 0, 
# 385 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                    0x00008000
# 385 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                      , 0 },
{"movz", "x,r,w", 0xf0203006, 0xfff8f81f, 
# 386 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000001
# 386 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                |
# 386 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 0x00000008
# 386 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     |
# 386 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      0x00000010
# 386 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 0, 0, 
# 386 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                    0x00008000
# 386 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                      , 0 },
{"mtc0", "y,N", 0xf0016700, 0xffffff00, 
# 387 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000004
# 387 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              |
# 387 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00000400
# 387 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                    , 0, 0, 
# 387 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                              0x00008000
# 387 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                , 0 },
{"mtc0", "y,N,O", 0xf0016700, 0xff1fff00, 
# 388 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000004
# 388 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                |
# 388 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 0x00000400
# 388 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 0, 0, 
# 388 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                0x00008000
# 388 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                  , 0 },
{"mul", "z,v,y", 0, (int) M_MUL, 
# 389 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0xffffffff
# 389 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               , 0, 
# 389 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      1
# 389 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0 },
{"mult", "x,y", 0xe818, 0xf81f, 
# 390 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 390 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                       |
# 390 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000008
# 390 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            |
# 390 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00100000
# 390 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  |
# 390 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                   0x00200000
# 390 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 
# 390 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                          0x00010000
# 390 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                            , 
# 390 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                               1
# 390 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                 , 0, 0 },
{"multu", "x,y", 0xe819, 0xf81f, 
# 391 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 391 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                       |
# 391 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000008
# 391 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            |
# 391 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00100000
# 391 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  |
# 391 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                   0x00200000
# 391 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 
# 391 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                          0x00010000
# 391 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                            , 
# 391 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                               1
# 391 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                 , 0, 0 },
{"neg", "x,w", 0xe80b, 0xf81f, 
# 392 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000001
# 392 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                       |
# 392 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000008
# 392 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 
# 392 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00010000
# 392 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 
# 392 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    1
# 392 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 0, 0 },
{"not", "x,w", 0xe80f, 0xf81f, 
# 393 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000001
# 393 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                       |
# 393 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000008
# 393 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 
# 393 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00010000
# 393 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 
# 393 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    1
# 393 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 0, 0 },
{"or", "x,y", 0xe80d, 0xf81f, (
# 394 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                  0x00000001
# 394 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                  |
# 394 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                  0x00000004
# 394 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                  )|
# 394 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000008
# 394 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 
# 394 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00010000
# 394 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 
# 394 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    1
# 394 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 0, 0 },
{"ori", "x,u", 0xf0006840, 0xf800f8e0, 
# 395 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000001
# 395 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 0, 0, 
# 395 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                         0x00008000
# 395 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                           , 0 },
{"pause", "", 0xf1403018, 0xffffffff, 0, 0, 0, 
# 396 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    0x00008000
# 396 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 0 },
{"pref", "T,9(x)", 0xf000d080, 0xfe00f8e0, 
# 397 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00000010
# 397 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 0, 0, 
# 397 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                            0x00008000
# 397 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                              , 0 },
{"rdhwr", "y,Q", 0xf000300c, 0xffe0ff1f, 
# 398 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000001
# 398 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 0, 0, 
# 398 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                         0x00008000
# 398 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                           , 0 },
{"rem", ".,x,y", 0xe81a, 0xf81f, 
# 399 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000008
# 399 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 399 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000010
# 399 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              |
# 399 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00100000
# 399 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                    |
# 399 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     0x00200000
# 399 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 
# 399 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                            0x00010000
# 399 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                              , 
# 399 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                 1
# 399 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                   , 0, 0 },
{"rem", "z,v,y", 0, (int) M_REM_3, 
# 400 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                      0xffffffff
# 400 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                , 0, 
# 400 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                       1
# 400 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                         , 0, 0 },
{"remu", ".,x,y", 0xe81b, 0xf81f, 
# 401 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000008
# 401 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 401 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000010
# 401 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              |
# 401 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00100000
# 401 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                    |
# 401 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     0x00200000
# 401 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 
# 401 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                            0x00010000
# 401 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                              , 
# 401 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                 1
# 401 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                   , 0, 0 },
{"remu", "z,v,y", 0, (int) M_REMU_3, 
# 402 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                       0xffffffff
# 402 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 0, 
# 402 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                        1
# 402 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 0, 0 },
{"sb", "y,5(x)", 0xc000, 0xf800, 
# 403 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000004
# 403 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 403 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000010
# 403 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 0, 
# 403 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 403 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"sb", "x,V(G)", 0xf000d060, 0xf800f8e0, 
# 404 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000004
# 404 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                |
# 404 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 0x00000010
# 404 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 0, 
# 404 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                               0x00008000
# 404 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                 , 0 },
{"sc", "x,9(r)", 0xf000d0c0, 0xfe18f8e0, 
# 405 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000004
# 405 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                |
# 405 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 0x00000010
# 405 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 0, 
# 405 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                               0x00008000
# 405 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                 , 0 },
{"sd", "y,D(x)", 0x7800, 0xf800, 
# 406 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000004
# 406 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 406 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000010
# 406 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 0, 
# 406 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      3
# 406 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0 },
{"sd", "y,D(S)", 0xf900, 0xff00, 
# 407 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000004
# 407 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         , 
# 407 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              0x00000100
# 407 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                   , 
# 407 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      3
# 407 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 0, 0 },
{"sd", "R,C(S)", 0xfa00, 0xff00, 0, 
# 408 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000200
# 408 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               |
# 408 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                0x00000100
# 408 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 
# 408 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                       3
# 408 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                         , 0, 0 },
{"sh", "y,H(x)", 0xc800, 0xf800, 
# 409 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000004
# 409 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 409 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000010
# 409 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 0, 
# 409 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 409 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"sh", "x,V(G)", 0xf000d040, 0xf800f8e0, 
# 410 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000004
# 410 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                |
# 410 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 0x00000010
# 410 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 0, 
# 410 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                               0x00008000
# 410 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                 , 0 },
{"sllv", "y,x", 0xe804, 0xf81f, (
# 411 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000001
# 411 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   |
# 411 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 411 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   )|
# 411 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00000008
# 411 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             , 
# 411 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                0x00010000
# 411 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 411 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 411 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"sll", "x,w,<", 0x3000, 0xf803, 
# 412 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 412 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 412 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000008
# 412 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 
# 412 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 0x00010000
# 412 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                   , 0, 
# 412 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                         0x00008000
# 412 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                           , 0 },
{"sll", "x,w,<", 0x3000, 0xf803, 
# 413 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 413 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 413 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000008
# 413 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 0, 
# 413 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 413 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"sll", "x,w,<", 0xf0003000, 0xf83ff81f, 
# 414 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000001
# 414 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                |
# 414 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 0x00000008
# 414 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 0, 
# 414 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                               0x00008000
# 414 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                 , 0 },
{"sll", "y,x", 0xe804, 0xf81f, (
# 415 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000001
# 415 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   |
# 415 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 415 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   )|
# 415 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00000008
# 415 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             , 
# 415 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                0x00010000
# 415 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 415 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 415 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"slti", "x,8", 0x5000, 0xf800, 
# 416 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 416 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                       |
# 416 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x10000000
# 416 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 0, 
# 416 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                   1
# 416 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 0 },
{"slt", "x,y", 0xe802, 0xf81f, 
# 417 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 417 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                       |
# 417 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000008
# 417 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            |
# 417 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x10000000
# 417 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 
# 417 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    0x00010000
# 417 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 
# 417 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                         1
# 417 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                           , 0, 0 },
{"slt", "x,8", 0x5000, 0xf800, 
# 418 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 418 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                       |
# 418 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x10000000
# 418 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 0, 
# 418 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                   1
# 418 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 0 },
{"sltiu", "x,8", 0x5800, 0xf800, 
# 419 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 419 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                       |
# 419 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x10000000
# 419 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 0, 
# 419 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                   1
# 419 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 0 },
{"sltu", "x,y", 0xe803, 0xf81f, 
# 420 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 420 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                       |
# 420 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000008
# 420 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            |
# 420 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x10000000
# 420 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 
# 420 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    0x00010000
# 420 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 
# 420 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                         1
# 420 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                           , 0, 0 },
{"sltu", "x,8", 0x5800, 0xf800, 
# 421 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 421 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                       |
# 421 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x10000000
# 421 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 0, 
# 421 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                   1
# 421 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 0 },
{"srav", "y,x", 0xe807, 0xf81f, (
# 422 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000001
# 422 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   |
# 422 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 422 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   )|
# 422 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00000008
# 422 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             , 
# 422 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                0x00010000
# 422 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 422 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 422 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"sra", "x,w,<", 0x3003, 0xf803, 
# 423 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 423 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 423 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000008
# 423 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 0, 
# 423 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 423 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"sra", "y,x", 0xe807, 0xf81f, (
# 424 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000001
# 424 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   |
# 424 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 424 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   )|
# 424 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00000008
# 424 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             , 
# 424 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                0x00010000
# 424 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 424 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 424 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"srlv", "y,x", 0xe806, 0xf81f, (
# 425 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000001
# 425 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   |
# 425 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 425 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   )|
# 425 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00000008
# 425 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             , 
# 425 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                0x00010000
# 425 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 425 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 425 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"srl", "x,w,<", 0x3002, 0xf803, 
# 426 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 426 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 426 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000008
# 426 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 
# 426 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 0x00010000
# 426 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                   , 0, 
# 426 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                         0x00008000
# 426 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                           , 0 },
{"srl", "x,w,<", 0x3002, 0xf803, 
# 427 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 427 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 427 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000008
# 427 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 0, 
# 427 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 427 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"srl", "x,w,<", 0xf0003002, 0xf83ff81f, 
# 428 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000001
# 428 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                |
# 428 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 0x00000008
# 428 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 0, 
# 428 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                               0x00008000
# 428 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                 , 0 },
{"srl", "y,x", 0xe806, 0xf81f, (
# 429 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000001
# 429 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   |
# 429 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 429 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   )|
# 429 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00000008
# 429 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             , 
# 429 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                0x00010000
# 429 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 429 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 429 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"subu", "z,v,y", 0xe003, 0xf803, 
# 430 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000001
# 430 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 430 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000008
# 430 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              |
# 430 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00000010
# 430 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                   , 
# 430 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                      0x00010000
# 430 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                        , 
# 430 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                           1
# 430 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                             , 0, 0 },
{"subu", "y,x,I", 0, (int) M_SUBU_I, 
# 431 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                       0xffffffff
# 431 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 0, 
# 431 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                        1
# 431 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 0, 0 },
{"subu", "x,I", 0, (int) M_SUBU_I_2, 
# 432 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                       0xffffffff
# 432 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 0, 
# 432 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                        1
# 432 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 0, 0 },
{"sw", "y,W(x)", 0xd800, 0xf800, 
# 433 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000004
# 433 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         |
# 433 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000010
# 433 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 0, 
# 433 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 433 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"sw", "x,V(S)", 0xd000, 0xf800, 
# 434 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000004
# 434 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         , 
# 434 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00010000
# 434 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               |
# 434 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                0x00000100
# 434 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 
# 434 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                          0x00008000
# 434 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                            , 0 },
{"sw", "x,V(S)", 0xd000, 0xf800, 
# 435 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                     0x00000004
# 435 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                         , 
# 435 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00000100
# 435 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 435 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 435 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"sw", "x,V(S)", 0xf000d000, 0xf800f8e0, 
# 436 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000004
# 436 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                , 
# 436 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    0x00000100
# 436 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                         , 0, 
# 436 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                               0x00008000
# 436 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                 , 0 },
{"sw", "R,V(S)", 0x6200, 0xff00, 0, 
# 437 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000200
# 437 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               |
# 437 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                0x00000100
# 437 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 
# 437 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                       1
# 437 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                         , 0, 0 },
{"sw", "x,V(G)", 0xf000d020, 0xf800f8e0, 
# 438 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                            0x00000004
# 438 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                |
# 438 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 0x00000010
# 438 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                     , 0, 0, 
# 438 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                               0x00008000
# 438 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                 , 0 },
{"swl", "x,9(r)", 0xf000d0e0, 0xfe18f8e0, 
# 439 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00000004
# 439 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 |
# 439 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                  0x00000010
# 439 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 0, 0, 
# 439 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                0x00008000
# 439 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                  , 0 },
{"swr", "x,9(r)", 0xf010d0e0, 0xfe18f8e0, 
# 440 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00000004
# 440 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 |
# 440 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                  0x00000010
# 440 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 0, 0, 
# 440 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                0x00008000
# 440 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                  , 0 },
{"sync_acquire", "", 0xf4403014, 0xffffffff, 0, 
# 441 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 0x00000001
# 441 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                   , 0, 
# 441 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                         0x00008000
# 441 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                           , 0 },
{"sync_mb", "", 0xf4003014, 0xffffffff, 0, 
# 442 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00000001
# 442 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               , 0, 
# 442 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     0x00008000
# 442 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0 },
{"sync_release", "", 0xf4803014, 0xffffffff, 0, 
# 443 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                 0x00000001
# 443 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                   , 0, 
# 443 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                         0x00008000
# 443 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                           , 0 },
{"sync_rmb", "", 0xf4c03014, 0xffffffff, 0, 
# 444 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00000001
# 444 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               , 0, 
# 444 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     0x00008000
# 444 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0 },
{"sync_wmb", "", 0xf1003014, 0xffffffff, 0, 
# 445 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00000001
# 445 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               , 0, 
# 445 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     0x00008000
# 445 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0 },
{"sync", "", 0xf0003014, 0xffffffff, 0, 0, 0, 
# 446 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    0x00008000
# 446 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 0 },
{"sync", ">", 0xf0003014, 0xf83fffff, 0, 0, 0, 
# 447 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                    0x00008000
# 447 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                      , 0 },
{"xor", "x,y", 0xe80e, 0xf81f, (
# 448 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000001
# 448 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   |
# 448 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                   0x00000004
# 448 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                   )|
# 448 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00000008
# 448 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             , 
# 448 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                0x00010000
# 448 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 
# 448 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                     1
# 448 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       , 0, 0 },
{"xori", "x,u", 0xf0006880, 0xf800f8e0, 
# 449 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00000001
# 449 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              , 0, 0, 
# 449 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                         0x00008000
# 449 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                           , 0 },

{"restore", "m", 0x6400, 0xff80, 
# 451 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00000040
# 451 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                      |
# 451 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                       0x00400000
# 451 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                           , (
# 451 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              0x00000100
# 451 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              |
# 451 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              0x00000080
# 451 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              ), 
# 451 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                       6
# 451 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 0, 0 },
{"save", "m", 0x6480, 0xff80, 
# 452 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00400000
# 452 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                     , 
# 452 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00000200
# 452 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                              |(
# 452 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00000100
# 452 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               |
# 452 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               0x00000080
# 452 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                               ), 
# 452 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                       6
# 452 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                          , 0, 0 },
{"sdbbp", "", 0xe801, 0xffff, 
# 453 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00400000
# 453 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                     , 
# 453 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00010000
# 453 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                           , 
# 453 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              6
# 453 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 0, 0 },
{"sdbbp", "6", 0xe801, 0xf81f, 
# 454 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00400000
# 454 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                     , 
# 454 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00010000
# 454 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                           , 
# 454 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              6
# 454 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                 , 0, 0 },
{"seb", "x", 0xe891, 0xf8ff, (
# 455 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00000001
# 455 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                 |
# 455 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00000004
# 455 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                 ), 
# 455 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00010000
# 455 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 
# 455 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               6
# 455 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 0, 0 },
{"seh", "x", 0xe8b1, 0xf8ff, (
# 456 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00000001
# 456 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                 |
# 456 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00000004
# 456 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                 ), 
# 456 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00010000
# 456 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 
# 456 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               6
# 456 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 0, 0 },
{"sew", "x", 0xe8d1, 0xf8ff, (
# 457 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00000001
# 457 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                 |
# 457 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00000004
# 457 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                 ), 
# 457 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00010000
# 457 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 
# 457 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               11
# 457 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 0, 0 },
{"zeb", "x", 0xe811, 0xf8ff, (
# 458 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00000001
# 458 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                 |
# 458 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00000004
# 458 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                 ), 
# 458 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00010000
# 458 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 
# 458 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               6
# 458 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 0, 0 },
{"zeh", "x", 0xe831, 0xf8ff, (
# 459 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00000001
# 459 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                 |
# 459 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00000004
# 459 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                 ), 
# 459 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00010000
# 459 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 
# 459 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               6
# 459 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 0, 0 },
{"zew", "x", 0xe851, 0xf8ff, (
# 460 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00000001
# 460 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                 |
# 460 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00000004
# 460 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                 ), 
# 460 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                          0x00010000
# 460 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            , 
# 460 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                               11
# 460 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 0, 0 },

{"dmt", "", 0xf0266701, 0xffffffff, 
# 462 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000400
# 462 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             , 0, 0, 
# 462 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                        0x00010000
# 462 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                            , 0 },
{"dmt", ".", 0xf0266701, 0xffffffff, 
# 463 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000400
# 463 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             , 0, 0, 
# 463 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                        0x00010000
# 463 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                            , 0 },
{"dmt", "y", 0xf0226701, 0xffffff1f, 
# 464 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000001
# 464 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            |
# 464 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00000400
# 464 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 0, 0, 
# 464 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                            0x00010000
# 464 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                , 0 },
{"dvpe", "", 0xf0266700, 0xffffffff, 
# 465 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000400
# 465 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             , 0, 0, 
# 465 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                        0x00010000
# 465 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                            , 0 },
{"dvpe", ".", 0xf0266700, 0xffffffff, 
# 466 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000400
# 466 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             , 0, 0, 
# 466 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                        0x00010000
# 466 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                            , 0 },
{"dvpe", "y", 0xf0226700, 0xffffff1f, 
# 467 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000001
# 467 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            |
# 467 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00000400
# 467 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 0, 0, 
# 467 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                            0x00010000
# 467 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                , 0 },
{"emt", "", 0xf0276701, 0xffffffff, 
# 468 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000400
# 468 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             , 0, 0, 
# 468 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                        0x00010000
# 468 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                            , 0 },
{"emt", ".", 0xf0276701, 0xffffffff, 
# 469 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000400
# 469 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             , 0, 0, 
# 469 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                        0x00010000
# 469 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                            , 0 },
{"emt", "y", 0xf0236701, 0xffffff1f, 
# 470 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000001
# 470 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            |
# 470 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00000400
# 470 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 0, 0, 
# 470 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                            0x00010000
# 470 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                , 0 },
{"evpe", "", 0xf0276700, 0xffffffff, 
# 471 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000400
# 471 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             , 0, 0, 
# 471 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                        0x00010000
# 471 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                            , 0 },
{"evpe", ".", 0xf0276700, 0xffffffff, 
# 472 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000400
# 472 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                             , 0, 0, 
# 472 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                        0x00010000
# 472 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                            , 0 },
{"evpe", "y", 0xf0236700, 0xffffff1f, 
# 473 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                        0x00000001
# 473 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                            |
# 473 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                             0x00000400
# 473 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  , 0, 0, 
# 473 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                            0x00010000
# 473 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                , 0 },

{"copyw", "x,y,o,n", 0xf020e000, 0xffe0f81c, 
# 475 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              0x00000004
# 475 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  |
# 475 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                   0x00000008
# 475 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       |
# 475 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                        0x00400000
# 475 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                            , 0, 
# 475 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                   0x04000000
# 475 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                        , 0, 0 },
{"ucopyw", "x,y,o,n", 0xf000e000, 0xffe0f81c, 
# 476 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              0x00000004
# 476 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                  |
# 476 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                   0x00000008
# 476 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                       |
# 476 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                        0x00400000
# 476 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                            , 0, 
# 476 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                                   0x04000000
# 476 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                                        , 0, 0 },


{"asmacro", "s,0,1,2,3,4", 0xf000e000, 0xf800f800, 0, 0, 
# 479 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                                           6
# 479 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                              , 0, 0 },


{"extend", "e", 0xf000, 0xf800, 
# 482 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                 0x00400000
# 482 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                     , 
# 482 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                         0x00010000
# 482 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                           , 
# 482 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c" 3 4
                                              1
# 482 "project/radare2/libr/asm/arch/mips/gnu/mips16-opc.c"
                                                , 0, 0 },
};

const int bfd_mips16_num_opcodes =
  ((sizeof mips16_opcodes) / (sizeof (mips16_opcodes[0])));
