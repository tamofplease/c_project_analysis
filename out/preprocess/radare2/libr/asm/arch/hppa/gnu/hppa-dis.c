# 0 "project/radare2/libr/asm/arch/hppa/gnu/hppa-dis.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/hppa/gnu/hppa-dis.c"
# 24 "project/radare2/libr/asm/arch/hppa/gnu/hppa-dis.c"
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/sysdep.h" 1 3 4
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/sysdep.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/ansidecl.h" 1 3 4
# 31 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/sysdep.h" 2 3 4
# 25 "project/radare2/libr/asm/arch/hppa/gnu/hppa-dis.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 1 3 4
# 34 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 3 4
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
# 35 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4

void *memchr(const void *__s, int __c, size_t __n);
int memcmp(const void *__s1, const void *__s2, size_t __n);
void *memcpy(void *__dst, const void *__src, size_t __n);
void *memmove(void *__dst, const void *__src, size_t __len);
void *memset(void *__b, int __c, size_t __len);
char *strcat(char *__s1, const char *__s2);
char *strchr(const char *__s, int __c);
int strcmp(const char *__s1, const char *__s2);
int strcoll(const char *__s1, const char *__s2);
char *strcpy(char *__dst, const char *__src);
size_t strcspn(const char *__s, const char *__charset);
char *strerror(int __errnum) __asm("_" "strerror" );
size_t strlen(const char *__s);
char *strncat(char *__s1, const char *__s2, size_t __n);
int strncmp(const char *__s1, const char *__s2, size_t __n);
char *strncpy(char *__dst, const char *__src, size_t __n);
char *strpbrk(const char *__s, const char *__charset);
char *strrchr(const char *__s, int __c);
size_t strspn(const char *__s, const char *__charset);
char *strstr(const char *__big, const char *__little);
char *strtok(char *__str, const char *__sep);
size_t strxfrm(char *__s1, const char *__s2, size_t __n);

# 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4

char *strtok_r(char *__str, const char *__sep, char **__lasts);

# 115 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4

int strerror_r(int __errnum, char *__strerrbuf, size_t __buflen);
char *strdup(const char *__s1);
void *memccpy(void *__dst, const void *__src, int __c, size_t __n);

# 129 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4

char *stpcpy(char *__dst, const char *__src);
char *stpncpy(char *__dst, const char *__src, size_t __n) ;
char *strndup(const char *__s1, size_t __n) ;
size_t strnlen(const char *__s1, size_t __n) ;
char *strsignal(int __sig);






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rsize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rsize_t.h" 3 4
typedef __darwin_size_t rsize_t;
# 142 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 143 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4


errno_t memset_s(void *__s, rsize_t __smax, int __c, rsize_t __n) ;









void *memmem(const void *__big, size_t __big_len, const void *__little, size_t __little_len) ;
void memset_pattern4(void *__b, const void *__pattern4, size_t __len) ;
void memset_pattern8(void *__b, const void *__pattern8, size_t __len) ;
void memset_pattern16(void *__b, const void *__pattern16, size_t __len) ;

char *strcasestr(const char *__big, const char *__little);
char *strnstr(const char *__big, const char *__little, size_t __len);
size_t strlcat(char *__dst, const char *__source, size_t __size);
size_t strlcpy(char *__dst, const char *__source, size_t __size);
void strmode(int __mode, char *__bp);
char *strsep(char **__stringp, const char *__delim);


void swab(const void * restrict, void * restrict, ssize_t);



int timingsafe_bcmp(const void *__b1, const void *__b2, size_t __len);



int strsignal_r(int __sig, char *__strsignalbuf, size_t __buflen);







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/strings.h" 1 3 4
# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/strings.h" 3 4



int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);





int ffsl(long) ;
int ffsll(long long) ;
int fls(int) ;
int flsl(long) ;
int flsll(long long) ;


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 1 3 4
# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/strings.h" 2 3 4




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_strings.h" 1 3 4
# 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/strings.h" 2 3 4
# 185 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 194 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_string.h" 1 3 4
# 195 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 36 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 2 3 4
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
# 37 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 2 3 4





  typedef int (*fprintf_ftype) (void *, const char*, ...) __attribute__ ((__format__ (__printf__, 2, 3))) __attribute__ ((__nonnull__ (2)));

enum dis_insn_type
{
  dis_noninsn,
  dis_nonbranch,
  dis_branch,
  dis_condbranch,
  dis_jsr,
  dis_condjsr,
  dis_dref,
  dis_dref2
};
# 66 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 3 4
typedef struct disassemble_info
{
  fprintf_ftype fprintf_func;
  void *stream;
  void *application_data;





  enum bfd_flavour flavour;

  enum bfd_architecture arch;

  unsigned long mach;

  enum bfd_endian endian;

  enum bfd_endian endian_code;




  void *insn_sets;




  asection *section;






  asymbol **symbols;

  int num_symbols;



  asymbol **symtab;
  int symtab_pos;
  int symtab_size;




  unsigned long flags;
# 125 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 3 4
  void *private_data;






  int (*read_memory_func)
    (bfd_vma memaddr, bfd_byte *myaddr, unsigned int length,
     struct disassemble_info *dinfo);





  void (*memory_error_func)
    (int status, bfd_vma memaddr, struct disassemble_info *dinfo);


  void (*print_address_func)
    (bfd_vma addr, struct disassemble_info *dinfo);
# 154 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 3 4
  int (* symbol_at_address_func)
    (bfd_vma addr, struct disassemble_info *dinfo);




  bfd_boolean (* symbol_is_valid)
    (asymbol *, struct disassemble_info *dinfo);


  bfd_byte *buffer;
  bfd_vma buffer_vma;
  unsigned int buffer_length;





  int bytes_per_line;






  int bytes_per_chunk;
  enum bfd_endian display_endian;



  unsigned int octets_per_byte;



  unsigned int skip_zeroes;







  unsigned int skip_zeroes_at_end;


  bfd_boolean disassembler_needs_relocs;
# 208 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 3 4
  char insn_info_valid;
  char branch_delay_insns;

  char data_size;
  enum dis_insn_type insn_type;
  bfd_vma target;

  bfd_vma target2;


  char * disassembler_options;







  bfd_vma stop_vma;

} disassemble_info;





typedef struct
{
  const char **name;
  const char **description;
} disasm_options_t;




typedef int (*disassembler_ftype) (bfd_vma, disassemble_info *);

extern int print_insn_aarch64 (bfd_vma, disassemble_info *);
extern int print_insn_alpha (bfd_vma, disassemble_info *);
extern int print_insn_avr (bfd_vma, disassemble_info *);
extern int print_insn_bfin (bfd_vma, disassemble_info *);
extern int print_insn_big_arm (bfd_vma, disassemble_info *);
extern int print_insn_big_mips (bfd_vma, disassemble_info *);
extern int print_insn_big_nios2 (bfd_vma, disassemble_info *);
extern int print_insn_big_powerpc (bfd_vma, disassemble_info *);
extern int print_insn_big_score (bfd_vma, disassemble_info *);
extern int print_insn_cr16 (bfd_vma, disassemble_info *);
extern int print_insn_crx (bfd_vma, disassemble_info *);
extern int print_insn_d10v (bfd_vma, disassemble_info *);
extern int print_insn_d30v (bfd_vma, disassemble_info *);
extern int print_insn_dlx (bfd_vma, disassemble_info *);
extern int print_insn_epiphany (bfd_vma, disassemble_info *);
extern int print_insn_fr30 (bfd_vma, disassemble_info *);
extern int print_insn_frv (bfd_vma, disassemble_info *);
extern int print_insn_ft32 (bfd_vma, disassemble_info *);
extern int print_insn_h8300 (bfd_vma, disassemble_info *);
extern int print_insn_h8300h (bfd_vma, disassemble_info *);
extern int print_insn_h8300s (bfd_vma, disassemble_info *);
extern int print_insn_h8500 (bfd_vma, disassemble_info *);
extern int print_insn_lanai (bfd_vma, disassemble_info *);
extern int print_insn_hppa (bfd_vma, disassemble_info *);
extern int print_insn_i370 (bfd_vma, disassemble_info *);
extern int print_insn_i386 (bfd_vma, disassemble_info *);
extern int print_insn_i386_att (bfd_vma, disassemble_info *);
extern int print_insn_i386_intel (bfd_vma, disassemble_info *);
extern int print_insn_i860 (bfd_vma, disassemble_info *);
extern int print_insn_i960 (bfd_vma, disassemble_info *);
extern int print_insn_ia64 (bfd_vma, disassemble_info *);
extern int print_insn_ip2k (bfd_vma, disassemble_info *);
extern int print_insn_iq2000 (bfd_vma, disassemble_info *);
extern int print_insn_little_arm (bfd_vma, disassemble_info *);
extern int print_insn_little_mips (bfd_vma, disassemble_info *);
extern int print_insn_little_nios2 (bfd_vma, disassemble_info *);
extern int print_insn_little_powerpc (bfd_vma, disassemble_info *);
extern int print_insn_riscv (bfd_vma, disassemble_info *);
extern int print_insn_little_score (bfd_vma, disassemble_info *);
extern int print_insn_lm32 (bfd_vma, disassemble_info *);
extern int print_insn_m32c (bfd_vma, disassemble_info *);
extern int print_insn_m32r (bfd_vma, disassemble_info *);
extern int print_insn_m68hc11 (bfd_vma, disassemble_info *);
extern int print_insn_m68hc12 (bfd_vma, disassemble_info *);
extern int print_insn_m9s12x (bfd_vma, disassemble_info *);
extern int print_insn_m9s12xg (bfd_vma, disassemble_info *);
extern int print_insn_m68k (bfd_vma, disassemble_info *);
extern int print_insn_m88k (bfd_vma, disassemble_info *);
extern int print_insn_mcore (bfd_vma, disassemble_info *);
extern int print_insn_mep (bfd_vma, disassemble_info *);
extern int print_insn_metag (bfd_vma, disassemble_info *);
extern int print_insn_microblaze (bfd_vma, disassemble_info *);
extern int print_insn_mmix (bfd_vma, disassemble_info *);
extern int print_insn_mn10200 (bfd_vma, disassemble_info *);
extern int print_insn_mn10300 (bfd_vma, disassemble_info *);
extern int print_insn_moxie (bfd_vma, disassemble_info *);
extern int print_insn_msp430 (bfd_vma, disassemble_info *);
extern int print_insn_mt (bfd_vma, disassemble_info *);
extern int print_insn_nds32 (bfd_vma, disassemble_info *);
extern int print_insn_ns32k (bfd_vma, disassemble_info *);
extern int print_insn_or1k (bfd_vma, disassemble_info *);
extern int print_insn_pdp11 (bfd_vma, disassemble_info *);
extern int print_insn_pj (bfd_vma, disassemble_info *);
extern int print_insn_pru (bfd_vma, disassemble_info *);
extern int print_insn_rs6000 (bfd_vma, disassemble_info *);
extern int print_insn_s390 (bfd_vma, disassemble_info *);
extern int print_insn_sh (bfd_vma, disassemble_info *);
extern int print_insn_sh64 (bfd_vma, disassemble_info *);
extern int print_insn_sh64x_media (bfd_vma, disassemble_info *);
extern int print_insn_sparc (bfd_vma, disassemble_info *);
extern int print_insn_spu (bfd_vma, disassemble_info *);
extern int print_insn_tic30 (bfd_vma, disassemble_info *);
extern int print_insn_tic4x (bfd_vma, disassemble_info *);
extern int print_insn_tic54x (bfd_vma, disassemble_info *);
extern int print_insn_tic6x (bfd_vma, disassemble_info *);
extern int print_insn_tic80 (bfd_vma, disassemble_info *);
extern int print_insn_tilegx (bfd_vma, disassemble_info *);
extern int print_insn_tilepro (bfd_vma, disassemble_info *);
extern int print_insn_v850 (bfd_vma, disassemble_info *);
extern int print_insn_vax (bfd_vma, disassemble_info *);
extern int print_insn_visium (bfd_vma, disassemble_info *);
extern int print_insn_w65 (bfd_vma, disassemble_info *);
extern int print_insn_xc16x (bfd_vma, disassemble_info *);
extern int print_insn_xgate (bfd_vma, disassemble_info *);
extern int print_insn_xstormy16 (bfd_vma, disassemble_info *);
extern int print_insn_xtensa (bfd_vma, disassemble_info *);
extern int print_insn_z80 (bfd_vma, disassemble_info *);
extern int print_insn_z8001 (bfd_vma, disassemble_info *);
extern int print_insn_z8002 (bfd_vma, disassemble_info *);
extern int print_insn_rx (bfd_vma, disassemble_info *);
extern int print_insn_rl78 (bfd_vma, disassemble_info *);
extern int print_insn_rl78_g10 (bfd_vma, disassemble_info *);
extern int print_insn_rl78_g13 (bfd_vma, disassemble_info *);
extern int print_insn_rl78_g14 (bfd_vma, disassemble_info *);

extern disassembler_ftype arc_get_disassembler (bfd *);
extern disassembler_ftype cris_get_disassembler (bfd *);
extern disassembler_ftype rl78_get_disassembler (bfd *);

extern void print_aarch64_disassembler_options (FILE *);
extern void print_i386_disassembler_options (FILE *);
extern void print_mips_disassembler_options (FILE *);
extern void print_ppc_disassembler_options (FILE *);
extern void print_riscv_disassembler_options (FILE *);
extern void print_arm_disassembler_options (FILE *);
extern void print_arc_disassembler_options (FILE *);
extern void print_s390_disassembler_options (FILE *);
extern bfd_boolean aarch64_symbol_is_valid (asymbol *, struct disassemble_info *);
extern bfd_boolean arm_symbol_is_valid (asymbol *, struct disassemble_info *);
extern void disassemble_init_powerpc (struct disassemble_info *);
extern void disassemble_init_s390 (struct disassemble_info *);
extern const disasm_options_t *disassembler_options_powerpc (void);
extern const disasm_options_t *disassembler_options_arm (void);
extern const disasm_options_t *disassembler_options_s390 (void);


extern disassembler_ftype disassembler (bfd *);



extern void disassemble_init_for_target (struct disassemble_info * dinfo);


extern void disassembler_usage (FILE *);


extern char *remove_whitespace_and_extra_commas (char *);



extern int disassembler_options_cmp (const char *, const char *);


static inline char *
next_disassembler_option (char *options)
{
  char *opt = strchr (options, ',');
  if (opt != ((void *)0))
    opt++;
  return opt;
}
# 399 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 3 4
extern int buffer_read_memory
  (bfd_vma, bfd_byte *, unsigned int, struct disassemble_info *);



extern void perror_memory (int, bfd_vma, struct disassemble_info *);





extern void generic_print_address
  (bfd_vma, struct disassemble_info *);


extern int generic_symbol_at_address
  (bfd_vma, struct disassemble_info *);


extern bfd_boolean generic_symbol_is_valid
  (asymbol *, struct disassemble_info *);



extern void init_disassemble_info (struct disassemble_info *dinfo, void *stream,
       fprintf_ftype fprintf_func);

extern int print_insn_tricore (bfd_vma memaddr, struct disassemble_info *info);
# 26 "project/radare2/libr/asm/arch/hppa/gnu/hppa-dis.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libhppa.h" 1 3 4
# 31 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libhppa.h" 3 4
enum pa_arch {pa10 = 10, pa11 = 11, pa20 = 20, pa20w = 25};



enum hppa_reloc_field_selector_type
  {
    R_HPPA_FSEL = 0x0,
    R_HPPA_LSSEL = 0x1,
    R_HPPA_RSSEL = 0x2,
    R_HPPA_LSEL = 0x3,
    R_HPPA_RSEL = 0x4,
    R_HPPA_LDSEL = 0x5,
    R_HPPA_RDSEL = 0x6,
    R_HPPA_LRSEL = 0x7,
    R_HPPA_RRSEL = 0x8,
    R_HPPA_NSEL = 0x9,
    R_HPPA_NLSEL = 0xa,
    R_HPPA_NLRSEL = 0xb,
    R_HPPA_PSEL = 0xc,
    R_HPPA_LPSEL = 0xd,
    R_HPPA_RPSEL = 0xe,
    R_HPPA_TSEL = 0xf,
    R_HPPA_LTSEL = 0x10,
    R_HPPA_RTSEL = 0x11,
    R_HPPA_LTPSEL = 0x12,
    R_HPPA_RTPSEL = 0x13
  };
# 90 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libhppa.h" 3 4
enum hppa_reloc_field_selector_type_alt
  {
    e_fsel = R_HPPA_FSEL,
    e_lssel = R_HPPA_LSSEL,
    e_rssel = R_HPPA_RSSEL,
    e_lsel = R_HPPA_LSEL,
    e_rsel = R_HPPA_RSEL,
    e_ldsel = R_HPPA_LDSEL,
    e_rdsel = R_HPPA_RDSEL,
    e_lrsel = R_HPPA_LRSEL,
    e_rrsel = R_HPPA_RRSEL,
    e_nsel = R_HPPA_NSEL,
    e_nlsel = R_HPPA_NLSEL,
    e_nlrsel = R_HPPA_NLRSEL,
    e_psel = R_HPPA_PSEL,
    e_lpsel = R_HPPA_LPSEL,
    e_rpsel = R_HPPA_RPSEL,
    e_tsel = R_HPPA_TSEL,
    e_ltsel = R_HPPA_LTSEL,
    e_rtsel = R_HPPA_RTSEL,
    e_ltpsel = R_HPPA_LTPSEL,
    e_rtpsel = R_HPPA_RTPSEL
  };

enum hppa_reloc_expr_type
  {
    R_HPPA_E_ONE = 0,
    R_HPPA_E_TWO = 1,
    R_HPPA_E_PCREL = 2,
    R_HPPA_E_CON = 3,
    R_HPPA_E_PLABEL = 7,
    R_HPPA_E_ABS = 18
  };


enum hppa_reloc_expr_type_alt
  {
    e_one = R_HPPA_E_ONE,
    e_two = R_HPPA_E_TWO,
    e_pcrel = R_HPPA_E_PCREL,
    e_con = R_HPPA_E_CON,
    e_plabel = R_HPPA_E_PLABEL,
    e_abs = R_HPPA_E_ABS
  };
# 159 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libhppa.h" 3 4
static inline int sign_extend (int, int) __attribute__ ((__unused__));
static inline int low_sign_extend (int, int) __attribute__ ((__unused__));
static inline int sign_unext (int, int) __attribute__ ((__unused__));
static inline int low_sign_unext (int, int) __attribute__ ((__unused__));
static inline int re_assemble_3 (int) __attribute__ ((__unused__));
static inline int re_assemble_12 (int) __attribute__ ((__unused__));
static inline int re_assemble_14 (int) __attribute__ ((__unused__));
static inline int re_assemble_16 (int) __attribute__ ((__unused__));
static inline int re_assemble_17 (int) __attribute__ ((__unused__));
static inline int re_assemble_21 (int) __attribute__ ((__unused__));
static inline int re_assemble_22 (int) __attribute__ ((__unused__));
static inline bfd_signed_vma hppa_field_adjust
  (bfd_vma, bfd_signed_vma, enum hppa_reloc_field_selector_type_alt)
  __attribute__ ((__unused__));
static inline int bfd_hppa_insn2fmt (bfd *, int) __attribute__ ((__unused__));
static inline int hppa_rebuild_insn (int, int, int) __attribute__ ((__unused__));






static inline int
sign_extend (int x, int len)
{
  int signbit = (1 << (len - 1));
  int mask = (signbit << 1) - 1;
  return ((x & mask) ^ signbit) - signbit;
}

static inline int
low_sign_extend (int x, int len)
{
  return (x >> 1) - ((x & 1) << (len - 1));
}






static inline int
sign_unext (int x, int len)
{
  int len_ones;

  len_ones = (1 << len) - 1;

  return x & len_ones;
}

static inline int
low_sign_unext (int x, int len)
{
  int temp;
  int sign;

  sign = (x >> (len-1)) & 1;

  temp = sign_unext (x, len-1);

  return (temp << 1) | sign;
}

static inline int
re_assemble_3 (int as3)
{
  return (( (as3 & 4) << (13-2))
   | ((as3 & 3) << (13+1)));
}

static inline int
re_assemble_12 (int as12)
{
  return (( (as12 & 0x800) >> 11)
   | ((as12 & 0x400) >> (10 - 2))
   | ((as12 & 0x3ff) << (1 + 2)));
}

static inline int
re_assemble_14 (int as14)
{
  return (( (as14 & 0x1fff) << 1)
   | ((as14 & 0x2000) >> 13));
}

static inline int
re_assemble_16 (int as16)
{
  int s, t;


  t = (as16 << 1) & 0xffff;
  s = (as16 & 0x8000);
  return (t ^ s ^ (s >> 1)) | (s >> 15);
}

static inline int
re_assemble_17 (int as17)
{
  return (( (as17 & 0x10000) >> 16)
   | ((as17 & 0x0f800) << (16 - 11))
   | ((as17 & 0x00400) >> (10 - 2))
   | ((as17 & 0x003ff) << (1 + 2)));
}

static inline int
re_assemble_21 (int as21)
{
  return (( (as21 & 0x100000) >> 20)
   | ((as21 & 0x0ffe00) >> 8)
   | ((as21 & 0x000180) << 7)
   | ((as21 & 0x00007c) << 14)
   | ((as21 & 0x000003) << 12));
}

static inline int
re_assemble_22 (int as22)
{
  return (( (as22 & 0x200000) >> 21)
   | ((as22 & 0x1f0000) << (21 - 16))
   | ((as22 & 0x00f800) << (16 - 11))
   | ((as22 & 0x000400) >> (10 - 2))
   | ((as22 & 0x0003ff) << (1 + 2)));
}
# 296 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libhppa.h" 3 4
static inline bfd_signed_vma
hppa_field_adjust (bfd_vma sym_val,
     bfd_signed_vma addend,
     enum hppa_reloc_field_selector_type_alt r_field)
{
  bfd_signed_vma value;

  value = sym_val + addend;
  switch (r_field)
    {
    case e_fsel:

      break;

    case e_nsel:





      value = 0;
      break;

    case e_lsel:
    case e_nlsel:

      value = value >> 11;
      break;

    case e_rsel:

      value = value & 0x7ff;
      break;

    case e_lssel:

      value = value + 0x400;
      value = value >> 11;
      break;

    case e_rssel:




      value = ((value & 0x7ff) ^ 0x400) - 0x400;
      break;

    case e_ldsel:



      value = value + 0x800;
      value = value >> 11;
      break;

    case e_rdsel:

      value = value | -0x800;
      break;

    case e_lrsel:
    case e_nlrsel:

      value = sym_val + ((addend + 0x1000) & -0x2000);
      value = value >> 11;
      break;

    case e_rrsel:





      value = (sym_val & 0x7ff) + (((addend & 0x1fff) ^ 0x1000) - 0x1000);
      break;

    default:
      return -1;
    }
  return value;
}




enum hppa_opcode_type
{


  OP_SYSOP = 0x00,
  OP_MEMMNG = 0x01,
  OP_ALU = 0x02,
  OP_NDXMEM = 0x03,
  OP_SPOP = 0x04,
  OP_DIAG = 0x05,
  OP_FMPYADD = 0x06,
  OP_UNDEF07 = 0x07,
  OP_COPRW = 0x09,
  OP_COPRDW = 0x0b,
  OP_COPR = 0x0c,
  OP_FLOAT = 0x0e,
  OP_PRDSPEC = 0x0f,
  OP_UNDEF15 = 0x15,
  OP_UNDEF1d = 0x1d,
  OP_FMPYSUB = 0x26,
  OP_FPFUSED = 0x2e,
  OP_SHEXDP0 = 0x34,
  OP_SHEXDP1 = 0x35,
  OP_SHEXDP2 = 0x36,
  OP_UNDEF37 = 0x37,
  OP_SHEXDP3 = 0x3c,
  OP_SHEXDP4 = 0x3d,
  OP_MULTMED = 0x3e,
  OP_UNDEF3f = 0x3f,

  OP_LDIL = 0x08,
  OP_ADDIL = 0x0a,

  OP_LDO = 0x0d,
  OP_LDB = 0x10,
  OP_LDH = 0x11,
  OP_LDW = 0x12,
  OP_LDWM = 0x13,
  OP_STB = 0x18,
  OP_STH = 0x19,
  OP_STW = 0x1a,
  OP_STWM = 0x1b,

  OP_LDD = 0x14,
  OP_STD = 0x1c,

  OP_FLDW = 0x16,
  OP_LDWL = 0x17,
  OP_FSTW = 0x1e,
  OP_STWL = 0x1f,

  OP_COMBT = 0x20,
  OP_COMIBT = 0x21,
  OP_COMBF = 0x22,
  OP_COMIBF = 0x23,
  OP_CMPBDT = 0x27,
  OP_ADDBT = 0x28,
  OP_ADDIBT = 0x29,
  OP_ADDBF = 0x2a,
  OP_ADDIBF = 0x2b,
  OP_CMPBDF = 0x2f,
  OP_BVB = 0x30,
  OP_BB = 0x31,
  OP_MOVB = 0x32,
  OP_MOVIB = 0x33,
  OP_CMPIBD = 0x3b,

  OP_COMICLR = 0x24,
  OP_SUBI = 0x25,
  OP_ADDIT = 0x2c,
  OP_ADDI = 0x2d,

  OP_BE = 0x38,
  OP_BLE = 0x39,
  OP_BL = 0x3a
};




static inline int
bfd_hppa_insn2fmt (bfd *abfd, int insn)
{
  enum hppa_opcode_type op = (((insn) >> 26) & 0x3f);

  switch (op)
    {
    case OP_COMICLR:
    case OP_SUBI:
    case OP_ADDIT:
    case OP_ADDI:
      return 11;

    case OP_COMBT:
    case OP_COMIBT:
    case OP_COMBF:
    case OP_COMIBF:
    case OP_CMPBDT:
    case OP_ADDBT:
    case OP_ADDIBT:
    case OP_ADDBF:
    case OP_ADDIBF:
    case OP_CMPBDF:
    case OP_BVB:
    case OP_BB:
    case OP_MOVB:
    case OP_MOVIB:
    case OP_CMPIBD:
      return 12;

    case OP_LDO:
    case OP_LDB:
    case OP_LDH:
    case OP_LDW:
    case OP_LDWM:
    case OP_STB:
    case OP_STH:
    case OP_STW:
    case OP_STWM:
      if (abfd->arch_info->mach >= 25)
 return 16;
      return 14;

    case OP_FLDW:
    case OP_LDWL:
    case OP_FSTW:
    case OP_STWL:



      if (abfd->arch_info->mach >= 25)
 return -16;
      return -11;

    case OP_LDD:
    case OP_STD:
      if (abfd->arch_info->mach >= 25)
 return -10;
      return 10;

    case OP_BL:
      if ((insn & 0x8000) != 0)
 return 22;

    case OP_BE:
    case OP_BLE:
      return 17;

    case OP_LDIL:
    case OP_ADDIL:
      return 21;

    default:
      break;
    }
  return 32;
}





static inline int
hppa_rebuild_insn (int insn, int value, int r_format)
{
  switch (r_format)
    {
    case 11:
      return (insn & ~ 0x7ff) | low_sign_unext (value, 11);

    case 12:
      return (insn & ~ 0x1ffd) | re_assemble_12 (value);


    case 10:
      return (insn & ~ 0x3ff1) | re_assemble_14 (value & -8);

    case -11:
      return (insn & ~ 0x3ff9) | re_assemble_14 (value & -4);

    case 14:
      return (insn & ~ 0x3fff) | re_assemble_14 (value);


    case -10:
      return (insn & ~ 0xfff1) | re_assemble_16 (value & -8);

    case -16:
      return (insn & ~ 0xfff9) | re_assemble_16 (value & -4);

    case 16:
      return (insn & ~ 0xffff) | re_assemble_16 (value);


    case 17:
      return (insn & ~ 0x1f1ffd) | re_assemble_17 (value);

    case 21:
      return (insn & ~ 0x1fffff) | re_assemble_21 (value);

    case 22:
      return (insn & ~ 0x3ff1ffd) | re_assemble_22 (value);

    case 32:
      return value;

    default:
      return -1;
    }
  return insn;
}
# 27 "project/radare2/libr/asm/arch/hppa/gnu/hppa-dis.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/hppa.h" 1 3 4
# 40 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/hppa.h" 3 4
struct pa_opcode
{
    const char *name;
    unsigned long int match;
    unsigned long int mask;
    const char *args;
    enum pa_arch arch;
    char flags;
};
# 311 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/hppa.h" 3 4
static const struct pa_opcode pa_opcodes[] =
{



{ "ldi", 0x34000000, 0xffe00000, "l,x", pa20w, 0},
{ "ldi", 0x34000000, 0xffe0c000, "j,x", pa10, 0},

{ "cmpib", 0xec000000, 0xfc000000, "?Qn5,b,w", pa20, 0x1},
{ "cmpib", 0x84000000, 0xf4000000, "?nn5,b,w", pa10, 0x1},
{ "comib", 0x84000000, 0xfc000000, "?nn5,b,w", pa10, 0},


{ "comib", 0x8c000000, 0xfc000000, "?nn5,b,w", pa10, 0},
{ "cmpb", 0x9c000000, 0xdc000000, "?Nnx,b,w", pa20, 0x1},
{ "cmpb", 0x80000000, 0xf4000000, "?nnx,b,w", pa10, 0x1},
{ "comb", 0x80000000, 0xfc000000, "?nnx,b,w", pa10, 0},


{ "comb", 0x88000000, 0xfc000000, "?nnx,b,w", pa10, 0},
{ "addb", 0xa0000000, 0xf4000000, "?Wnx,b,w", pa20w, 0x1},
{ "addb", 0xa0000000, 0xfc000000, "?@nx,b,w", pa10, 0},


{ "addb", 0xa8000000, 0xfc000000, "?@nx,b,w", pa10, 0},
{ "addib", 0xa4000000, 0xf4000000, "?Wn5,b,w", pa20w, 0x1},
{ "addib", 0xa4000000, 0xfc000000, "?@n5,b,w", pa10, 0},


{ "addib", 0xac000000, 0xfc000000, "?@n5,b,w", pa10, 0},
{ "nop", 0x08000240, 0xffffffff, "", pa10, 0},
{ "copy", 0x08000240, 0xffe0ffe0, "x,t", pa10, 0},
{ "mtsar", 0x01601840, 0xffe0ffff, "x", pa10, 0},



{ "ldd", 0x0c0000c0, 0xfc00d3c0, "cxccx(b),t", pa20, 0x1},
{ "ldd", 0x0c0000c0, 0xfc0013c0, "cxccx(s,b),t", pa20, 0x1},
{ "ldd", 0x0c0010e0, 0xfc1ff3e0, "cocc@(b),t", pa20, 0x1},
{ "ldd", 0x0c0010e0, 0xfc1f33e0, "cocc@(s,b),t", pa20, 0x1},
{ "ldd", 0x0c0010c0, 0xfc00d3c0, "cmcc5(b),t", pa20, 0x1},
{ "ldd", 0x0c0010c0, 0xfc0013c0, "cmcc5(s,b),t", pa20, 0x1},
{ "ldd", 0x50000000, 0xfc000002, "cq&(b),x", pa20w, 0x1},
{ "ldd", 0x50000000, 0xfc00c002, "cq#(b),x", pa20, 0x1},
{ "ldd", 0x50000000, 0xfc000002, "cq#(s,b),x", pa20, 0x1},
{ "ldw", 0x0c000080, 0xfc00dfc0, "cXx(b),t", pa10, 0x1},
{ "ldw", 0x0c000080, 0xfc001fc0, "cXx(s,b),t", pa10, 0x1},
{ "ldw", 0x0c000080, 0xfc00d3c0, "cxccx(b),t", pa11, 0x1},
{ "ldw", 0x0c000080, 0xfc0013c0, "cxccx(s,b),t", pa11, 0x1},
{ "ldw", 0x0c0010a0, 0xfc1ff3e0, "cocc@(b),t", pa20, 0x1},
{ "ldw", 0x0c0010a0, 0xfc1f33e0, "cocc@(s,b),t", pa20, 0x1},
{ "ldw", 0x0c001080, 0xfc00dfc0, "cM5(b),t", pa10, 0x1},
{ "ldw", 0x0c001080, 0xfc001fc0, "cM5(s,b),t", pa10, 0x1},
{ "ldw", 0x0c001080, 0xfc00d3c0, "cmcc5(b),t", pa11, 0x1},
{ "ldw", 0x0c001080, 0xfc0013c0, "cmcc5(s,b),t", pa11, 0x1},
{ "ldw", 0x4c000000, 0xfc000000, "ce<(b),x", pa20w, 0x1},
{ "ldw", 0x5c000004, 0xfc000006, "ce>(b),x", pa20w, 0x1},
{ "ldw", 0x48000000, 0xfc000000, "l(b),x", pa20w, 0x1},
{ "ldw", 0x5c000004, 0xfc00c006, "ceK(b),x", pa20, 0x1},
{ "ldw", 0x5c000004, 0xfc000006, "ceK(s,b),x", pa20, 0x1},
{ "ldw", 0x4c000000, 0xfc00c000, "ceJ(b),x", pa10, 0x1},
{ "ldw", 0x4c000000, 0xfc000000, "ceJ(s,b),x", pa10, 0x1},
{ "ldw", 0x48000000, 0xfc00c000, "j(b),x", pa10, 0},
{ "ldw", 0x48000000, 0xfc000000, "j(s,b),x", pa10, 0},
{ "ldh", 0x0c000040, 0xfc00dfc0, "cXx(b),t", pa10, 0x1},
{ "ldh", 0x0c000040, 0xfc001fc0, "cXx(s,b),t", pa10, 0x1},
{ "ldh", 0x0c000040, 0xfc00d3c0, "cxccx(b),t", pa11, 0x1},
{ "ldh", 0x0c000040, 0xfc0013c0, "cxccx(s,b),t", pa11, 0x1},
{ "ldh", 0x0c001060, 0xfc1ff3e0, "cocc@(b),t", pa20, 0x1},
{ "ldh", 0x0c001060, 0xfc1f33e0, "cocc@(s,b),t", pa20, 0x1},
{ "ldh", 0x0c001040, 0xfc00dfc0, "cM5(b),t", pa10, 0x1},
{ "ldh", 0x0c001040, 0xfc001fc0, "cM5(s,b),t", pa10, 0x1},
{ "ldh", 0x0c001040, 0xfc00d3c0, "cmcc5(b),t", pa11, 0x1},
{ "ldh", 0x0c001040, 0xfc0013c0, "cmcc5(s,b),t", pa11, 0x1},
{ "ldh", 0x44000000, 0xfc000000, "l(b),x", pa20w, 0x1},
{ "ldh", 0x44000000, 0xfc00c000, "j(b),x", pa10, 0},
{ "ldh", 0x44000000, 0xfc000000, "j(s,b),x", pa10, 0},
{ "ldb", 0x0c000000, 0xfc00dfc0, "cXx(b),t", pa10, 0x1},
{ "ldb", 0x0c000000, 0xfc001fc0, "cXx(s,b),t", pa10, 0x1},
{ "ldb", 0x0c000000, 0xfc00d3c0, "cxccx(b),t", pa11, 0x1},
{ "ldb", 0x0c000000, 0xfc0013c0, "cxccx(s,b),t", pa11, 0x1},
{ "ldb", 0x0c001020, 0xfc1ff3e0, "cocc@(b),t", pa20, 0x1},
{ "ldb", 0x0c001020, 0xfc1f33e0, "cocc@(s,b),t", pa20, 0x1},
{ "ldb", 0x0c001000, 0xfc00dfc0, "cM5(b),t", pa10, 0x1},
{ "ldb", 0x0c001000, 0xfc001fc0, "cM5(s,b),t", pa10, 0x1},
{ "ldb", 0x0c001000, 0xfc00d3c0, "cmcc5(b),t", pa11, 0x1},
{ "ldb", 0x0c001000, 0xfc0013c0, "cmcc5(s,b),t", pa11, 0x1},
{ "ldb", 0x40000000, 0xfc000000, "l(b),x", pa20w, 0x1},
{ "ldb", 0x40000000, 0xfc00c000, "j(b),x", pa10, 0},
{ "ldb", 0x40000000, 0xfc000000, "j(s,b),x", pa10, 0},
{ "std", 0x0c0012e0, 0xfc00f3ff, "cocCx,@(b)", pa20, 0x1},
{ "std", 0x0c0012e0, 0xfc0033ff, "cocCx,@(s,b)", pa20, 0x1},
{ "std", 0x0c0012c0, 0xfc00d3c0, "cmcCx,V(b)", pa20, 0x1},
{ "std", 0x0c0012c0, 0xfc0013c0, "cmcCx,V(s,b)", pa20, 0x1},
{ "std", 0x70000000, 0xfc000002, "cqx,&(b)", pa20w, 0x1},
{ "std", 0x70000000, 0xfc00c002, "cqx,#(b)", pa20, 0x1},
{ "std", 0x70000000, 0xfc000002, "cqx,#(s,b)", pa20, 0x1},
{ "stw", 0x0c0012a0, 0xfc00f3ff, "cocCx,@(b)", pa20, 0x1},
{ "stw", 0x0c0012a0, 0xfc0033ff, "cocCx,@(s,b)", pa20, 0x1},
{ "stw", 0x0c001280, 0xfc00dfc0, "cMx,V(b)", pa10, 0x1},
{ "stw", 0x0c001280, 0xfc001fc0, "cMx,V(s,b)", pa10, 0x1},
{ "stw", 0x0c001280, 0xfc00d3c0, "cmcCx,V(b)", pa11, 0x1},
{ "stw", 0x0c001280, 0xfc0013c0, "cmcCx,V(s,b)", pa11, 0x1},
{ "stw", 0x6c000000, 0xfc000000, "cex,<(b)", pa20w, 0x1},
{ "stw", 0x7c000004, 0xfc000006, "cex,>(b)", pa20w, 0x1},
{ "stw", 0x68000000, 0xfc000000, "x,l(b)", pa20w, 0x1},
{ "stw", 0x7c000004, 0xfc00c006, "cex,K(b)", pa20, 0x1},
{ "stw", 0x7c000004, 0xfc000006, "cex,K(s,b)", pa20, 0x1},
{ "stw", 0x6c000000, 0xfc00c000, "cex,J(b)", pa10, 0x1},
{ "stw", 0x6c000000, 0xfc000000, "cex,J(s,b)", pa10, 0x1},
{ "stw", 0x68000000, 0xfc00c000, "x,j(b)", pa10, 0},
{ "stw", 0x68000000, 0xfc000000, "x,j(s,b)", pa10, 0},
{ "sth", 0x0c001260, 0xfc00f3ff, "cocCx,@(b)", pa20, 0x1},
{ "sth", 0x0c001260, 0xfc0033ff, "cocCx,@(s,b)", pa20, 0x1},
{ "sth", 0x0c001240, 0xfc00dfc0, "cMx,V(b)", pa10, 0x1},
{ "sth", 0x0c001240, 0xfc001fc0, "cMx,V(s,b)", pa10, 0x1},
{ "sth", 0x0c001240, 0xfc00d3c0, "cmcCx,V(b)", pa11, 0x1},
{ "sth", 0x0c001240, 0xfc0013c0, "cmcCx,V(s,b)", pa11, 0x1},
{ "sth", 0x64000000, 0xfc000000, "x,l(b)", pa20w, 0x1},
{ "sth", 0x64000000, 0xfc00c000, "x,j(b)", pa10, 0},
{ "sth", 0x64000000, 0xfc000000, "x,j(s,b)", pa10, 0},
{ "stb", 0x0c001220, 0xfc00f3ff, "cocCx,@(b)", pa20, 0x1},
{ "stb", 0x0c001220, 0xfc0033ff, "cocCx,@(s,b)", pa20, 0x1},
{ "stb", 0x0c001200, 0xfc00dfc0, "cMx,V(b)", pa10, 0x1},
{ "stb", 0x0c001200, 0xfc001fc0, "cMx,V(s,b)", pa10, 0x1},
{ "stb", 0x0c001200, 0xfc00d3c0, "cmcCx,V(b)", pa11, 0x1},
{ "stb", 0x0c001200, 0xfc0013c0, "cmcCx,V(s,b)", pa11, 0x1},
{ "stb", 0x60000000, 0xfc000000, "x,l(b)", pa20w, 0x1},
{ "stb", 0x60000000, 0xfc00c000, "x,j(b)", pa10, 0},
{ "stb", 0x60000000, 0xfc000000, "x,j(s,b)", pa10, 0},
{ "ldwm", 0x4c000000, 0xfc00c000, "j(b),x", pa10, 0},
{ "ldwm", 0x4c000000, 0xfc000000, "j(s,b),x", pa10, 0},
{ "stwm", 0x6c000000, 0xfc00c000, "x,j(b)", pa10, 0},
{ "stwm", 0x6c000000, 0xfc000000, "x,j(s,b)", pa10, 0},
{ "ldwx", 0x0c000080, 0xfc00dfc0, "cXx(b),t", pa10, 0x1},
{ "ldwx", 0x0c000080, 0xfc001fc0, "cXx(s,b),t", pa10, 0x1},
{ "ldwx", 0x0c000080, 0xfc00d3c0, "cxccx(b),t", pa11, 0x1},
{ "ldwx", 0x0c000080, 0xfc0013c0, "cxccx(s,b),t", pa11, 0x1},
{ "ldwx", 0x0c000080, 0xfc00dfc0, "cXx(b),t", pa10, 0},
{ "ldwx", 0x0c000080, 0xfc001fc0, "cXx(s,b),t", pa10, 0},
{ "ldhx", 0x0c000040, 0xfc00dfc0, "cXx(b),t", pa10, 0x1},
{ "ldhx", 0x0c000040, 0xfc001fc0, "cXx(s,b),t", pa10, 0x1},
{ "ldhx", 0x0c000040, 0xfc00d3c0, "cxccx(b),t", pa11, 0x1},
{ "ldhx", 0x0c000040, 0xfc0013c0, "cxccx(s,b),t", pa11, 0x1},
{ "ldhx", 0x0c000040, 0xfc00dfc0, "cXx(b),t", pa10, 0},
{ "ldhx", 0x0c000040, 0xfc001fc0, "cXx(s,b),t", pa10, 0},
{ "ldbx", 0x0c000000, 0xfc00dfc0, "cXx(b),t", pa10, 0x1},
{ "ldbx", 0x0c000000, 0xfc001fc0, "cXx(s,b),t", pa10, 0x1},
{ "ldbx", 0x0c000000, 0xfc00d3c0, "cxccx(b),t", pa11, 0x1},
{ "ldbx", 0x0c000000, 0xfc0013c0, "cxccx(s,b),t", pa11, 0x1},
{ "ldbx", 0x0c000000, 0xfc00dfc0, "cXx(b),t", pa10, 0},
{ "ldbx", 0x0c000000, 0xfc001fc0, "cXx(s,b),t", pa10, 0},
{ "ldwa", 0x0c000180, 0xfc00dfc0, "cXx(b),t", pa10, 0x1},
{ "ldwa", 0x0c000180, 0xfc00d3c0, "cxccx(b),t", pa11, 0x1},
{ "ldwa", 0x0c0011a0, 0xfc1ff3e0, "cocc@(b),t", pa20, 0x1},
{ "ldwa", 0x0c001180, 0xfc00dfc0, "cM5(b),t", pa10, 0x1},
{ "ldwa", 0x0c001180, 0xfc00d3c0, "cmcc5(b),t", pa11, 0x1},
{ "ldcw", 0x0c0001c0, 0xfc00dfc0, "cXx(b),t", pa10, 0x1},
{ "ldcw", 0x0c0001c0, 0xfc001fc0, "cXx(s,b),t", pa10, 0x1},
{ "ldcw", 0x0c0001c0, 0xfc00d3c0, "cxcdx(b),t", pa11, 0x1},
{ "ldcw", 0x0c0001c0, 0xfc0013c0, "cxcdx(s,b),t", pa11, 0x1},
{ "ldcw", 0x0c0011c0, 0xfc00dfc0, "cM5(b),t", pa10, 0x1},
{ "ldcw", 0x0c0011c0, 0xfc001fc0, "cM5(s,b),t", pa10, 0x1},
{ "ldcw", 0x0c0011c0, 0xfc00d3c0, "cmcd5(b),t", pa11, 0x1},
{ "ldcw", 0x0c0011c0, 0xfc0013c0, "cmcd5(s,b),t", pa11, 0x1},
{ "stwa", 0x0c0013a0, 0xfc00d3ff, "cocCx,@(b)", pa20, 0x1},
{ "stwa", 0x0c001380, 0xfc00dfc0, "cMx,V(b)", pa10, 0x1},
{ "stwa", 0x0c001380, 0xfc00d3c0, "cmcCx,V(b)", pa11, 0x1},
{ "stby", 0x0c001300, 0xfc00dfc0, "cAx,V(b)", pa10, 0x1},
{ "stby", 0x0c001300, 0xfc001fc0, "cAx,V(s,b)", pa10, 0x1},
{ "stby", 0x0c001300, 0xfc00d3c0, "cscCx,V(b)", pa11, 0x1},
{ "stby", 0x0c001300, 0xfc0013c0, "cscCx,V(s,b)", pa11, 0x1},
{ "ldda", 0x0c000100, 0xfc00d3c0, "cxccx(b),t", pa20, 0x1},
{ "ldda", 0x0c001120, 0xfc1ff3e0, "cocc@(b),t", pa20, 0x1},
{ "ldda", 0x0c001100, 0xfc00d3c0, "cmcc5(b),t", pa20, 0x1},
{ "ldcd", 0x0c000140, 0xfc00d3c0, "cxcdx(b),t", pa20, 0x1},
{ "ldcd", 0x0c000140, 0xfc0013c0, "cxcdx(s,b),t", pa20, 0x1},
{ "ldcd", 0x0c001140, 0xfc00d3c0, "cmcd5(b),t", pa20, 0x1},
{ "ldcd", 0x0c001140, 0xfc0013c0, "cmcd5(s,b),t", pa20, 0x1},
{ "stda", 0x0c0013e0, 0xfc00f3ff, "cocCx,@(b)", pa20, 0x1},
{ "stda", 0x0c0013c0, 0xfc00d3c0, "cmcCx,V(b)", pa20, 0x1},
{ "ldwax", 0x0c000180, 0xfc00dfc0, "cXx(b),t", pa10, 0x1},
{ "ldwax", 0x0c000180, 0xfc00d3c0, "cxccx(b),t", pa11, 0x1},
{ "ldwax", 0x0c000180, 0xfc00dfc0, "cXx(b),t", pa10, 0},
{ "ldcwx", 0x0c0001c0, 0xfc00dfc0, "cXx(b),t", pa10, 0x1},
{ "ldcwx", 0x0c0001c0, 0xfc001fc0, "cXx(s,b),t", pa10, 0x1},
{ "ldcwx", 0x0c0001c0, 0xfc00d3c0, "cxcdx(b),t", pa11, 0x1},
{ "ldcwx", 0x0c0001c0, 0xfc0013c0, "cxcdx(s,b),t", pa11, 0x1},
{ "ldcwx", 0x0c0001c0, 0xfc00dfc0, "cXx(b),t", pa10, 0},
{ "ldcwx", 0x0c0001c0, 0xfc001fc0, "cXx(s,b),t", pa10, 0},
{ "ldws", 0x0c001080, 0xfc00dfc0, "cM5(b),t", pa10, 0x1},
{ "ldws", 0x0c001080, 0xfc001fc0, "cM5(s,b),t", pa10, 0x1},
{ "ldws", 0x0c001080, 0xfc00d3c0, "cmcc5(b),t", pa11, 0x1},
{ "ldws", 0x0c001080, 0xfc0013c0, "cmcc5(s,b),t", pa11, 0x1},
{ "ldws", 0x0c001080, 0xfc00dfc0, "cM5(b),t", pa10, 0},
{ "ldws", 0x0c001080, 0xfc001fc0, "cM5(s,b),t", pa10, 0},
{ "ldhs", 0x0c001040, 0xfc00dfc0, "cM5(b),t", pa10, 0x1},
{ "ldhs", 0x0c001040, 0xfc001fc0, "cM5(s,b),t", pa10, 0x1},
{ "ldhs", 0x0c001040, 0xfc00d3c0, "cmcc5(b),t", pa11, 0x1},
{ "ldhs", 0x0c001040, 0xfc0013c0, "cmcc5(s,b),t", pa11, 0x1},
{ "ldhs", 0x0c001040, 0xfc00dfc0, "cM5(b),t", pa10, 0},
{ "ldhs", 0x0c001040, 0xfc001fc0, "cM5(s,b),t", pa10, 0},
{ "ldbs", 0x0c001000, 0xfc00dfc0, "cM5(b),t", pa10, 0x1},
{ "ldbs", 0x0c001000, 0xfc001fc0, "cM5(s,b),t", pa10, 0x1},
{ "ldbs", 0x0c001000, 0xfc00d3c0, "cmcc5(b),t", pa11, 0x1},
{ "ldbs", 0x0c001000, 0xfc0013c0, "cmcc5(s,b),t", pa11, 0x1},
{ "ldbs", 0x0c001000, 0xfc00dfc0, "cM5(b),t", pa10, 0},
{ "ldbs", 0x0c001000, 0xfc001fc0, "cM5(s,b),t", pa10, 0},
{ "ldwas", 0x0c001180, 0xfc00dfc0, "cM5(b),t", pa10, 0x1},
{ "ldwas", 0x0c001180, 0xfc00d3c0, "cmcc5(b),t", pa11, 0x1},
{ "ldwas", 0x0c001180, 0xfc00dfc0, "cM5(b),t", pa10, 0},
{ "ldcws", 0x0c0011c0, 0xfc00dfc0, "cM5(b),t", pa10, 0x1},
{ "ldcws", 0x0c0011c0, 0xfc001fc0, "cM5(s,b),t", pa10, 0x1},
{ "ldcws", 0x0c0011c0, 0xfc00d3c0, "cmcd5(b),t", pa11, 0x1},
{ "ldcws", 0x0c0011c0, 0xfc0013c0, "cmcd5(s,b),t", pa11, 0x1},
{ "ldcws", 0x0c0011c0, 0xfc00dfc0, "cM5(b),t", pa10, 0},
{ "ldcws", 0x0c0011c0, 0xfc001fc0, "cM5(s,b),t", pa10, 0},
{ "stws", 0x0c001280, 0xfc00dfc0, "cMx,V(b)", pa10, 0x1},
{ "stws", 0x0c001280, 0xfc001fc0, "cMx,V(s,b)", pa10, 0x1},
{ "stws", 0x0c001280, 0xfc00d3c0, "cmcCx,V(b)", pa11, 0x1},
{ "stws", 0x0c001280, 0xfc0013c0, "cmcCx,V(s,b)", pa11, 0x1},
{ "stws", 0x0c001280, 0xfc00dfc0, "cMx,V(b)", pa10, 0},
{ "stws", 0x0c001280, 0xfc001fc0, "cMx,V(s,b)", pa10, 0},
{ "sths", 0x0c001240, 0xfc00dfc0, "cMx,V(b)", pa10, 0x1},
{ "sths", 0x0c001240, 0xfc001fc0, "cMx,V(s,b)", pa10, 0x1},
{ "sths", 0x0c001240, 0xfc00d3c0, "cmcCx,V(b)", pa11, 0x1},
{ "sths", 0x0c001240, 0xfc0013c0, "cmcCx,V(s,b)", pa11, 0x1},
{ "sths", 0x0c001240, 0xfc00dfc0, "cMx,V(b)", pa10, 0},
{ "sths", 0x0c001240, 0xfc001fc0, "cMx,V(s,b)", pa10, 0},
{ "stbs", 0x0c001200, 0xfc00dfc0, "cMx,V(b)", pa10, 0x1},
{ "stbs", 0x0c001200, 0xfc001fc0, "cMx,V(s,b)", pa10, 0x1},
{ "stbs", 0x0c001200, 0xfc00d3c0, "cmcCx,V(b)", pa11, 0x1},
{ "stbs", 0x0c001200, 0xfc0013c0, "cmcCx,V(s,b)", pa11, 0x1},
{ "stbs", 0x0c001200, 0xfc00dfc0, "cMx,V(b)", pa10, 0},
{ "stbs", 0x0c001200, 0xfc001fc0, "cMx,V(s,b)", pa10, 0},
{ "stwas", 0x0c001380, 0xfc00dfc0, "cMx,V(b)", pa10, 0x1},
{ "stwas", 0x0c001380, 0xfc00d3c0, "cmcCx,V(b)", pa11, 0x1},
{ "stwas", 0x0c001380, 0xfc00dfc0, "cMx,V(b)", pa10, 0},
{ "stdby", 0x0c001340, 0xfc00d3c0, "cscCx,V(b)", pa20, 0x1},
{ "stdby", 0x0c001340, 0xfc0013c0, "cscCx,V(s,b)", pa20, 0x1},
{ "stbys", 0x0c001300, 0xfc00dfc0, "cAx,V(b)", pa10, 0x1},
{ "stbys", 0x0c001300, 0xfc001fc0, "cAx,V(s,b)", pa10, 0x1},
{ "stbys", 0x0c001300, 0xfc00d3c0, "cscCx,V(b)", pa11, 0x1},
{ "stbys", 0x0c001300, 0xfc0013c0, "cscCx,V(s,b)", pa11, 0x1},
{ "stbys", 0x0c001300, 0xfc00dfc0, "cAx,V(b)", pa10, 0},
{ "stbys", 0x0c001300, 0xfc001fc0, "cAx,V(s,b)", pa10, 0},


{ "ldo", 0x34000000, 0xfc000000, "l(b),x", pa20w, 0},
{ "ldo", 0x34000000, 0xfc00c000, "j(b),x", pa10, 0},
{ "ldil", 0x20000000, 0xfc000000, "k,b", pa10, 0},
{ "addil", 0x28000000, 0xfc000000, "k,b,Z", pa10, 0},
{ "addil", 0x28000000, 0xfc000000, "k,b", pa10, 0},


{ "b", 0xe8008000, 0xfc00e000, "cpnXL", pa20, 0x1},
{ "b", 0xe800a000, 0xfc00e000, "clnXL", pa20, 0x1},
{ "b", 0xe8000000, 0xfc00e000, "clnW,b", pa10, 0x1},
{ "b", 0xe8002000, 0xfc00e000, "cgnW,b", pa10, 0x1},
{ "b", 0xe8000000, 0xffe0e000, "nW", pa10, 0},
{ "bl", 0xe8000000, 0xfc00e000, "nW,b", pa10, 0},
{ "gate", 0xe8002000, 0xfc00e000, "nW,b", pa10, 0},
{ "blr", 0xe8004000, 0xfc00e001, "nx,b", pa10, 0},
{ "bv", 0xe800c000, 0xfc00fffd, "nx(b)", pa10, 0},
{ "bv", 0xe800c000, 0xfc00fffd, "n(b)", pa10, 0},
{ "bve", 0xe800f001, 0xfc1ffffd, "cpn(b)L", pa20, 0x1},
{ "bve", 0xe800f000, 0xfc1ffffd, "cln(b)L", pa20, 0x1},
{ "bve", 0xe800d001, 0xfc1ffffd, "cPn(b)", pa20, 0x1},
{ "bve", 0xe800d000, 0xfc1ffffd, "n(b)", pa20, 0x1},
{ "be", 0xe4000000, 0xfc000000, "clnz(S,b),Y", pa10, 0x1},
{ "be", 0xe4000000, 0xfc000000, "clnz(b),Y", pa10, 0x1},
{ "be", 0xe0000000, 0xfc000000, "nz(S,b)", pa10, 0},
{ "be", 0xe0000000, 0xfc000000, "nz(b)", pa10, 0},
{ "ble", 0xe4000000, 0xfc000000, "nz(S,b)", pa10, 0},
{ "movb", 0xc8000000, 0xfc000000, "?ynx,b,w", pa10, 0},
{ "movib", 0xcc000000, 0xfc000000, "?yn5,b,w", pa10, 0},
{ "combt", 0x80000000, 0xfc000000, "?tnx,b,w", pa10, 0},
{ "combf", 0x88000000, 0xfc000000, "?tnx,b,w", pa10, 0},
{ "comibt", 0x84000000, 0xfc000000, "?tn5,b,w", pa10, 0},
{ "comibf", 0x8c000000, 0xfc000000, "?tn5,b,w", pa10, 0},
{ "addbt", 0xa0000000, 0xfc000000, "?dnx,b,w", pa10, 0},
{ "addbf", 0xa8000000, 0xfc000000, "?dnx,b,w", pa10, 0},
{ "addibt", 0xa4000000, 0xfc000000, "?dn5,b,w", pa10, 0},
{ "addibf", 0xac000000, 0xfc000000, "?dn5,b,w", pa10, 0},
{ "bb", 0xc0006000, 0xffe06000, "?Bnx,!,w", pa20, 0x1},
{ "bb", 0xc0004000, 0xffe06000, "?bnx,!,w", pa10, 0x1},
{ "bb", 0xc4004000, 0xfc004000, "?Bnx,B,w", pa20, 0x1},
{ "bb", 0xc4004000, 0xfc006000, "?bnx,Q,w", pa10, 0x1},
{ "bb", 0xc4004000, 0xfc006000, "?bnx,Q,w", pa10, 0},
{ "bvb", 0xc0004000, 0xffe04000, "?bnx,w", pa10, 0},
{ "clrbts", 0xe8004005, 0xffffffff, "", pa20, 0x1},
{ "popbts", 0xe8004005, 0xfffff007, "$", pa20, 0x1},
{ "pushnom", 0xe8004001, 0xffffffff, "", pa20, 0x1},
{ "pushbts", 0xe8004001, 0xffe0ffff, "x", pa20, 0x1},



{ "cmpclr", 0x080008a0, 0xfc000fe0, "?Sx,b,t", pa20, 0x1},
{ "cmpclr", 0x08000880, 0xfc000fe0, "?sx,b,t", pa10, 0x1},
{ "comclr", 0x08000880, 0xfc000fe0, "?sx,b,t", pa10, 0},
{ "or", 0x08000260, 0xfc000fe0, "?Lx,b,t", pa20, 0x1},
{ "or", 0x08000240, 0xfc000fe0, "?lx,b,t", pa10, 0},
{ "xor", 0x080002a0, 0xfc000fe0, "?Lx,b,t", pa20, 0x1},
{ "xor", 0x08000280, 0xfc000fe0, "?lx,b,t", pa10, 0},
{ "and", 0x08000220, 0xfc000fe0, "?Lx,b,t", pa20, 0x1},
{ "and", 0x08000200, 0xfc000fe0, "?lx,b,t", pa10, 0},
{ "andcm", 0x08000020, 0xfc000fe0, "?Lx,b,t", pa20, 0x1},
{ "andcm", 0x08000000, 0xfc000fe0, "?lx,b,t", pa10, 0},
{ "uxor", 0x080003a0, 0xfc000fe0, "?Ux,b,t", pa20, 0x1},
{ "uxor", 0x08000380, 0xfc000fe0, "?ux,b,t", pa10, 0},
{ "uaddcm", 0x080009a0, 0xfc000fa0, "cT?Ux,b,t", pa20, 0x1},
{ "uaddcm", 0x08000980, 0xfc000fa0, "cT?ux,b,t", pa10, 0x1},
{ "uaddcm", 0x08000980, 0xfc000fe0, "?ux,b,t", pa10, 0},
{ "uaddcmt", 0x080009c0, 0xfc000fe0, "?ux,b,t", pa10, 0},
{ "dcor", 0x08000ba0, 0xfc1f0fa0, "ci?Ub,t", pa20, 0x1},
{ "dcor", 0x08000b80, 0xfc1f0fa0, "ci?ub,t", pa10, 0x1},
{ "dcor", 0x08000b80, 0xfc1f0fe0, "?ub,t", pa10, 0},
{ "idcor", 0x08000bc0, 0xfc1f0fe0, "?ub,t", pa10, 0},
{ "addi", 0xb0000000, 0xfc000000, "ct?ai,b,x", pa10, 0x1},
{ "addi", 0xb4000000, 0xfc000000, "cv?ai,b,x", pa10, 0x1},
{ "addi", 0xb4000000, 0xfc000800, "?ai,b,x", pa10, 0},
{ "addio", 0xb4000800, 0xfc000800, "?ai,b,x", pa10, 0},
{ "addit", 0xb0000000, 0xfc000800, "?ai,b,x", pa10, 0},
{ "addito", 0xb0000800, 0xfc000800, "?ai,b,x", pa10, 0},
{ "add", 0x08000720, 0xfc0007e0, "cY?Ax,b,t", pa20, 0x1},
{ "add", 0x08000700, 0xfc0007e0, "cy?ax,b,t", pa10, 0x1},
{ "add", 0x08000220, 0xfc0003e0, "ca?Ax,b,t", pa20, 0x1},
{ "add", 0x08000200, 0xfc0003e0, "ca?ax,b,t", pa10, 0x1},
{ "add", 0x08000600, 0xfc000fe0, "?ax,b,t", pa10, 0},
{ "addl", 0x08000a00, 0xfc000fe0, "?ax,b,t", pa10, 0},
{ "addo", 0x08000e00, 0xfc000fe0, "?ax,b,t", pa10, 0},
{ "addc", 0x08000700, 0xfc000fe0, "?ax,b,t", pa10, 0},
{ "addco", 0x08000f00, 0xfc000fe0, "?ax,b,t", pa10, 0},
{ "sub", 0x080004e0, 0xfc0007e0, "ct?Sx,b,t", pa20, 0x1},
{ "sub", 0x080004c0, 0xfc0007e0, "ct?sx,b,t", pa10, 0x1},
{ "sub", 0x08000520, 0xfc0007e0, "cB?Sx,b,t", pa20, 0x1},
{ "sub", 0x08000500, 0xfc0007e0, "cb?sx,b,t", pa10, 0x1},
{ "sub", 0x08000420, 0xfc0007e0, "cv?Sx,b,t", pa20, 0x1},
{ "sub", 0x08000400, 0xfc0007e0, "cv?sx,b,t", pa10, 0x1},
{ "sub", 0x08000400, 0xfc000fe0, "?sx,b,t", pa10, 0},
{ "subo", 0x08000c00, 0xfc000fe0, "?sx,b,t", pa10, 0},
{ "subb", 0x08000500, 0xfc000fe0, "?sx,b,t", pa10, 0},
{ "subbo", 0x08000d00, 0xfc000fe0, "?sx,b,t", pa10, 0},
{ "subt", 0x080004c0, 0xfc000fe0, "?sx,b,t", pa10, 0},
{ "subto", 0x08000cc0, 0xfc000fe0, "?sx,b,t", pa10, 0},
{ "ds", 0x08000440, 0xfc000fe0, "?sx,b,t", pa10, 0},
{ "subi", 0x94000000, 0xfc000000, "cv?si,b,x", pa10, 0x1},
{ "subi", 0x94000000, 0xfc000800, "?si,b,x", pa10, 0},
{ "subio", 0x94000800, 0xfc000800, "?si,b,x", pa10, 0},
{ "cmpiclr", 0x90000800, 0xfc000800, "?Si,b,x", pa20, 0x1},
{ "cmpiclr", 0x90000000, 0xfc000800, "?si,b,x", pa10, 0x1},
{ "comiclr", 0x90000000, 0xfc000800, "?si,b,x", pa10, 0},
{ "shladd", 0x08000220, 0xfc000320, "ca?Ax,.,b,t", pa20, 0x1},
{ "shladd", 0x08000200, 0xfc000320, "ca?ax,.,b,t", pa10, 0x1},
{ "sh1add", 0x08000640, 0xfc000fe0, "?ax,b,t", pa10, 0},
{ "sh1addl", 0x08000a40, 0xfc000fe0, "?ax,b,t", pa10, 0},
{ "sh1addo", 0x08000e40, 0xfc000fe0, "?ax,b,t", pa10, 0},
{ "sh2add", 0x08000680, 0xfc000fe0, "?ax,b,t", pa10, 0},
{ "sh2addl", 0x08000a80, 0xfc000fe0, "?ax,b,t", pa10, 0},
{ "sh2addo", 0x08000e80, 0xfc000fe0, "?ax,b,t", pa10, 0},
{ "sh3add", 0x080006c0, 0xfc000fe0, "?ax,b,t", pa10, 0},
{ "sh3addl", 0x08000ac0, 0xfc000fe0, "?ax,b,t", pa10, 0},
{ "sh3addo", 0x08000ec0, 0xfc000fe0, "?ax,b,t", pa10, 0},



{ "hadd", 0x08000300, 0xfc00ff20, "cHx,b,t", pa20, 0x1},
{ "havg", 0x080002c0, 0xfc00ffe0, "x,b,t", pa20, 0x1},
{ "hshl", 0xf8008800, 0xffe0fc20, "x,*,t", pa20, 0x1},
{ "hshladd", 0x08000700, 0xfc00ff20, "x,.,b,t", pa20, 0x1},
{ "hshr", 0xf800c800, 0xfc1ff820, "cSb,*,t", pa20, 0x1},
{ "hshradd", 0x08000500, 0xfc00ff20, "x,.,b,t", pa20, 0x1},
{ "hsub", 0x08000100, 0xfc00ff20, "cHx,b,t", pa20, 0x1},
{ "mixh", 0xf8008400, 0xfc009fe0, "chx,b,t", pa20, 0x1},
{ "mixw", 0xf8008000, 0xfc009fe0, "chx,b,t", pa20, 0x1},
{ "permh", 0xf8000000, 0xfc009020, "c*a,t", pa20, 0x1},




{ "shrpd", 0xd0000200, 0xfc001fe0, "?Xx,b,!,t", pa20, 0x1},
{ "shrpd", 0xd0000400, 0xfc001400, "?Xx,b,~,t", pa20, 0x1},
{ "shrpw", 0xd0000000, 0xfc001fe0, "?xx,b,!,t", pa10, 0x1},
{ "shrpw", 0xd0000800, 0xfc001c00, "?xx,b,p,t", pa10, 0x1},
{ "vshd", 0xd0000000, 0xfc001fe0, "?xx,b,t", pa10, 0},
{ "shd", 0xd0000800, 0xfc001c00, "?xx,b,p,t", pa10, 0},
{ "extrd", 0xd0001200, 0xfc001ae0, "cS?Xb,!,%,x", pa20, 0x1},
{ "extrd", 0xd8000000, 0xfc000000, "cS?Xb,q,|,x", pa20, 0x1},
{ "extrw", 0xd0001000, 0xfc001be0, "cS?xb,!,T,x", pa10, 0x1},
{ "extrw", 0xd0001800, 0xfc001800, "cS?xb,P,T,x", pa10, 0x1},
{ "vextru", 0xd0001000, 0xfc001fe0, "?xb,T,x", pa10, 0},
{ "vextrs", 0xd0001400, 0xfc001fe0, "?xb,T,x", pa10, 0},
{ "extru", 0xd0001800, 0xfc001c00, "?xb,P,T,x", pa10, 0},
{ "extrs", 0xd0001c00, 0xfc001c00, "?xb,P,T,x", pa10, 0},
{ "depd", 0xd4000200, 0xfc001ae0, "cz?Xx,!,%,b", pa20, 0x1},
{ "depd", 0xf0000000, 0xfc000000, "cz?Xx,~,|,b", pa20, 0x1},
{ "depdi", 0xd4001200, 0xfc001ae0, "cz?X5,!,%,b", pa20, 0x1},
{ "depdi", 0xf4000000, 0xfc000000, "cz?X5,~,|,b", pa20, 0x1},
{ "depw", 0xd4000000, 0xfc001be0, "cz?xx,!,T,b", pa10, 0x1},
{ "depw", 0xd4000800, 0xfc001800, "cz?xx,p,T,b", pa10, 0x1},
{ "depwi", 0xd4001000, 0xfc001be0, "cz?x5,!,T,b", pa10, 0x1},
{ "depwi", 0xd4001800, 0xfc001800, "cz?x5,p,T,b", pa10, 0x1},
{ "zvdep", 0xd4000000, 0xfc001fe0, "?xx,T,b", pa10, 0},
{ "vdep", 0xd4000400, 0xfc001fe0, "?xx,T,b", pa10, 0},
{ "zdep", 0xd4000800, 0xfc001c00, "?xx,p,T,b", pa10, 0},
{ "dep", 0xd4000c00, 0xfc001c00, "?xx,p,T,b", pa10, 0},
{ "zvdepi", 0xd4001000, 0xfc001fe0, "?x5,T,b", pa10, 0},
{ "vdepi", 0xd4001400, 0xfc001fe0, "?x5,T,b", pa10, 0},
{ "zdepi", 0xd4001800, 0xfc001c00, "?x5,p,T,b", pa10, 0},
{ "depi", 0xd4001c00, 0xfc001c00, "?x5,p,T,b", pa10, 0},



{ "break", 0x00000000, 0xfc001fe0, "r,A", pa10, 0},
{ "rfi", 0x00000c00, 0xffffff1f, "cr", pa10, 0x1},
{ "rfi", 0x00000c00, 0xffffffff, "", pa10, 0},
{ "rfir", 0x00000ca0, 0xffffffff, "", pa11, 0},
{ "ssm", 0x00000d60, 0xfc00ffe0, "U,t", pa20, 0x1},
{ "ssm", 0x00000d60, 0xffe0ffe0, "R,t", pa10, 0},
{ "rsm", 0x00000e60, 0xfc00ffe0, "U,t", pa20, 0x1},
{ "rsm", 0x00000e60, 0xffe0ffe0, "R,t", pa10, 0},
{ "mtsm", 0x00001860, 0xffe0ffff, "x", pa10, 0},
{ "ldsid", 0x000010a0, 0xfc1fffe0, "(b),t", pa10, 0},
{ "ldsid", 0x000010a0, 0xfc1f3fe0, "(s,b),t", pa10, 0},
{ "mtsp", 0x00001820, 0xffe01fff, "x,S", pa10, 0},
{ "mtctl", 0x00001840, 0xfc00ffff, "x,^", pa10, 0},
{ "mtsarcm", 0x016018C0, 0xffe0ffff, "x", pa20, 0x1},
{ "mfia", 0x000014A0, 0xffffffe0, "t", pa20, 0x1},
{ "mfsp", 0x000004a0, 0xffff1fe0, "S,t", pa10, 0},
{ "mfctl", 0x016048a0, 0xffffffe0, "cW!,t", pa20, 0x1},
{ "mfctl", 0x000008a0, 0xfc1fffe0, "^,t", pa10, 0},
{ "sync", 0x00000400, 0xffffffff, "", pa10, 0},
{ "syncdma", 0x00100400, 0xffffffff, "", pa10, 0},
{ "probe", 0x04001180, 0xfc00ffa0, "cw(b),x,t", pa10, 0x1},
{ "probe", 0x04001180, 0xfc003fa0, "cw(s,b),x,t", pa10, 0x1},
{ "probei", 0x04003180, 0xfc00ffa0, "cw(b),R,t", pa10, 0x1},
{ "probei", 0x04003180, 0xfc003fa0, "cw(s,b),R,t", pa10, 0x1},
{ "prober", 0x04001180, 0xfc00ffe0, "(b),x,t", pa10, 0},
{ "prober", 0x04001180, 0xfc003fe0, "(s,b),x,t", pa10, 0},
{ "proberi", 0x04003180, 0xfc00ffe0, "(b),R,t", pa10, 0},
{ "proberi", 0x04003180, 0xfc003fe0, "(s,b),R,t", pa10, 0},
{ "probew", 0x040011c0, 0xfc00ffe0, "(b),x,t", pa10, 0},
{ "probew", 0x040011c0, 0xfc003fe0, "(s,b),x,t", pa10, 0},
{ "probewi", 0x040031c0, 0xfc00ffe0, "(b),R,t", pa10, 0},
{ "probewi", 0x040031c0, 0xfc003fe0, "(s,b),R,t", pa10, 0},
{ "lpa", 0x04001340, 0xfc00ffc0, "cZx(b),t", pa10, 0},
{ "lpa", 0x04001340, 0xfc003fc0, "cZx(s,b),t", pa10, 0},
{ "lci", 0x04001300, 0xfc00ffe0, "x(b),t", pa11, 0},
{ "lci", 0x04001300, 0xfc003fe0, "x(s,b),t", pa11, 0},
{ "pdtlb", 0x04001600, 0xfc00ffdf, "cLcZx(b)", pa20, 0x1},
{ "pdtlb", 0x04001600, 0xfc003fdf, "cLcZx(s,b)", pa20, 0x1},
{ "pdtlb", 0x04001600, 0xfc1fffdf, "cLcZ@(b)", pa20, 0x1},
{ "pdtlb", 0x04001600, 0xfc1f3fdf, "cLcZ@(s,b)", pa20, 0x1},
{ "pdtlb", 0x04001200, 0xfc00ffdf, "cZx(b)", pa10, 0},
{ "pdtlb", 0x04001200, 0xfc003fdf, "cZx(s,b)", pa10, 0},
{ "pitlb", 0x04000600, 0xfc001fdf, "cLcZx(S,b)", pa20, 0x1},
{ "pitlb", 0x04000600, 0xfc1f1fdf, "cLcZ@(S,b)", pa20, 0x1},
{ "pitlb", 0x04000200, 0xfc001fdf, "cZx(S,b)", pa10, 0},
{ "pdtlbe", 0x04001240, 0xfc00ffdf, "cZx(b)", pa10, 0},
{ "pdtlbe", 0x04001240, 0xfc003fdf, "cZx(s,b)", pa10, 0},
{ "pitlbe", 0x04000240, 0xfc001fdf, "cZx(S,b)", pa10, 0},
{ "idtlba", 0x04001040, 0xfc00ffff, "x,(b)", pa10, 0},
{ "idtlba", 0x04001040, 0xfc003fff, "x,(s,b)", pa10, 0},
{ "iitlba", 0x04000040, 0xfc001fff, "x,(S,b)", pa10, 0},
{ "idtlbp", 0x04001000, 0xfc00ffff, "x,(b)", pa10, 0},
{ "idtlbp", 0x04001000, 0xfc003fff, "x,(s,b)", pa10, 0},
{ "iitlbp", 0x04000000, 0xfc001fff, "x,(S,b)", pa10, 0},
{ "pdc", 0x04001380, 0xfc00ffdf, "cZx(b)", pa10, 0},
{ "pdc", 0x04001380, 0xfc003fdf, "cZx(s,b)", pa10, 0},
{ "fdc", 0x04001280, 0xfc00ffdf, "cZx(b)", pa10, 0x1},
{ "fdc", 0x04001280, 0xfc003fdf, "cZx(s,b)", pa10, 0x1},
{ "fdc", 0x04003280, 0xfc00ffff, "5(b)", pa20, 0x1},
{ "fdc", 0x04003280, 0xfc003fff, "5(s,b)", pa20, 0x1},
{ "fdc", 0x04001280, 0xfc00ffdf, "cZx(b)", pa10, 0},
{ "fdc", 0x04001280, 0xfc003fdf, "cZx(s,b)", pa10, 0},
{ "fic", 0x040013c0, 0xfc00dfdf, "cZx(b)", pa20, 0x1},
{ "fic", 0x04000280, 0xfc001fdf, "cZx(S,b)", pa10, 0},
{ "fdce", 0x040012c0, 0xfc00ffdf, "cZx(b)", pa10, 0},
{ "fdce", 0x040012c0, 0xfc003fdf, "cZx(s,b)", pa10, 0},
{ "fice", 0x040002c0, 0xfc001fdf, "cZx(S,b)", pa10, 0},
{ "diag", 0x14000000, 0xfc000000, "D", pa10, 0},
{ "idtlbt", 0x04001800, 0xfc00ffff, "x,b", pa20, 0x1},
{ "iitlbt", 0x04000800, 0xfc00ffff, "x,b", pa20, 0x1},




{ "mtcpu", 0x14001600, 0xfc00ffff, "x,^", pa10, 0},
{ "mfcpu", 0x14001A00, 0xfc00ffff, "^,x", pa10, 0},
{ "tocen", 0x14403600, 0xffffffff, "", pa10, 0},
{ "tocdis", 0x14401620, 0xffffffff, "", pa10, 0},
{ "shdwgr", 0x14402600, 0xffffffff, "", pa10, 0},
{ "grshdw", 0x14400620, 0xffffffff, "", pa10, 0},



{ "gfw", 0x04001680, 0xfc00ffdf, "cZx(b)", pa11, 0},
{ "gfw", 0x04001680, 0xfc003fdf, "cZx(s,b)", pa11, 0},
{ "gfr", 0x04001a80, 0xfc00ffdf, "cZx(b)", pa11, 0},
{ "gfr", 0x04001a80, 0xfc003fdf, "cZx(s,b)", pa11, 0},



{ "fldw", 0x24000000, 0xfc00df80, "cXx(b),fT", pa10, 0x1},
{ "fldw", 0x24000000, 0xfc001f80, "cXx(s,b),fT", pa10, 0x1},
{ "fldw", 0x24000000, 0xfc00d380, "cxccx(b),fT", pa11, 0x1},
{ "fldw", 0x24000000, 0xfc001380, "cxccx(s,b),fT", pa11, 0x1},
{ "fldw", 0x24001020, 0xfc1ff3a0, "cocc@(b),fT", pa20, 0x1},
{ "fldw", 0x24001020, 0xfc1f33a0, "cocc@(s,b),fT", pa20, 0x1},
{ "fldw", 0x24001000, 0xfc00df80, "cM5(b),fT", pa10, 0x1},
{ "fldw", 0x24001000, 0xfc001f80, "cM5(s,b),fT", pa10, 0x1},
{ "fldw", 0x24001000, 0xfc00d380, "cmcc5(b),fT", pa11, 0x1},
{ "fldw", 0x24001000, 0xfc001380, "cmcc5(s,b),fT", pa11, 0x1},
{ "fldw", 0x5c000000, 0xfc000004, "y(b),fe", pa20w, 0x1},
{ "fldw", 0x58000000, 0xfc000000, "cJy(b),fe", pa20w, 0x1},
{ "fldw", 0x5c000000, 0xfc00c004, "d(b),fe", pa20, 0x1},
{ "fldw", 0x5c000000, 0xfc000004, "d(s,b),fe", pa20, 0x1},
{ "fldw", 0x58000000, 0xfc00c000, "cJd(b),fe", pa20, 0x1},
{ "fldw", 0x58000000, 0xfc000000, "cJd(s,b),fe", pa20, 0x1},
{ "fldd", 0x2c000000, 0xfc00dfc0, "cXx(b),ft", pa10, 0x1},
{ "fldd", 0x2c000000, 0xfc001fc0, "cXx(s,b),ft", pa10, 0x1},
{ "fldd", 0x2c000000, 0xfc00d3c0, "cxccx(b),ft", pa11, 0x1},
{ "fldd", 0x2c000000, 0xfc0013c0, "cxccx(s,b),ft", pa11, 0x1},
{ "fldd", 0x2c001020, 0xfc1ff3e0, "cocc@(b),ft", pa20, 0x1},
{ "fldd", 0x2c001020, 0xfc1f33e0, "cocc@(s,b),ft", pa20, 0x1},
{ "fldd", 0x2c001000, 0xfc00dfc0, "cM5(b),ft", pa10, 0x1},
{ "fldd", 0x2c001000, 0xfc001fc0, "cM5(s,b),ft", pa10, 0x1},
{ "fldd", 0x2c001000, 0xfc00d3c0, "cmcc5(b),ft", pa11, 0x1},
{ "fldd", 0x2c001000, 0xfc0013c0, "cmcc5(s,b),ft", pa11, 0x1},
{ "fldd", 0x50000002, 0xfc000002, "cq&(b),fx", pa20w, 0x1},
{ "fldd", 0x50000002, 0xfc00c002, "cq#(b),fx", pa20, 0x1},
{ "fldd", 0x50000002, 0xfc000002, "cq#(s,b),fx", pa20, 0x1},
{ "fstw", 0x24000200, 0xfc00df80, "cXfT,x(b)", pa10, 0x1},
{ "fstw", 0x24000200, 0xfc001f80, "cXfT,x(s,b)", pa10, 0x1},
{ "fstw", 0x24000200, 0xfc00d380, "cxcCfT,x(b)", pa11, 0x1},
{ "fstw", 0x24000200, 0xfc001380, "cxcCfT,x(s,b)", pa11, 0x1},
{ "fstw", 0x24001220, 0xfc1ff3a0, "cocCfT,@(b)", pa20, 0x1},
{ "fstw", 0x24001220, 0xfc1f33a0, "cocCfT,@(s,b)", pa20, 0x1},
{ "fstw", 0x24001200, 0xfc00df80, "cMfT,5(b)", pa10, 0x1},
{ "fstw", 0x24001200, 0xfc001f80, "cMfT,5(s,b)", pa10, 0x1},
{ "fstw", 0x24001200, 0xfc00df80, "cMfT,5(b)", pa10, 0x1},
{ "fstw", 0x24001200, 0xfc001f80, "cMfT,5(s,b)", pa10, 0x1},
{ "fstw", 0x7c000000, 0xfc000004, "fE,y(b)", pa20w, 0x1},
{ "fstw", 0x78000000, 0xfc000000, "cJfE,y(b)", pa20w, 0x1},
{ "fstw", 0x7c000000, 0xfc00c004, "fE,d(b)", pa20, 0x1},
{ "fstw", 0x7c000000, 0xfc000004, "fE,d(s,b)", pa20, 0x1},
{ "fstw", 0x78000000, 0xfc00c000, "cJfE,d(b)", pa20, 0x1},
{ "fstw", 0x78000000, 0xfc000000, "cJfE,d(s,b)", pa20, 0x1},
{ "fstd", 0x2c000200, 0xfc00dfc0, "cXft,x(b)", pa10, 0x1},
{ "fstd", 0x2c000200, 0xfc001fc0, "cXft,x(s,b)", pa10, 0x1},
{ "fstd", 0x2c000200, 0xfc00d3c0, "cxcCft,x(b)", pa11, 0x1},
{ "fstd", 0x2c000200, 0xfc0013c0, "cxcCft,x(s,b)", pa11, 0x1},
{ "fstd", 0x2c001220, 0xfc1ff3e0, "cocCft,@(b)", pa20, 0x1},
{ "fstd", 0x2c001220, 0xfc1f33e0, "cocCft,@(s,b)", pa20, 0x1},
{ "fstd", 0x2c001200, 0xfc00dfc0, "cMft,5(b)", pa10, 0x1},
{ "fstd", 0x2c001200, 0xfc001fc0, "cMft,5(s,b)", pa10, 0x1},
{ "fstd", 0x2c001200, 0xfc00d3c0, "cmcCft,5(b)", pa11, 0x1},
{ "fstd", 0x2c001200, 0xfc0013c0, "cmcCft,5(s,b)", pa11, 0x1},
{ "fstd", 0x70000002, 0xfc000002, "cqfx,&(b)", pa20w, 0x1},
{ "fstd", 0x70000002, 0xfc00c002, "cqfx,#(b)", pa20, 0x1},
{ "fstd", 0x70000002, 0xfc000002, "cqfx,#(s,b)", pa20, 0x1},
{ "fldwx", 0x24000000, 0xfc00df80, "cXx(b),fT", pa10, 0x1},
{ "fldwx", 0x24000000, 0xfc001f80, "cXx(s,b),fT", pa10, 0x1},
{ "fldwx", 0x24000000, 0xfc00d380, "cxccx(b),fT", pa11, 0x1},
{ "fldwx", 0x24000000, 0xfc001380, "cxccx(s,b),fT", pa11, 0x1},
{ "fldwx", 0x24000000, 0xfc00df80, "cXx(b),fT", pa10, 0},
{ "fldwx", 0x24000000, 0xfc001f80, "cXx(s,b),fT", pa10, 0},
{ "flddx", 0x2c000000, 0xfc00dfc0, "cXx(b),ft", pa10, 0x1},
{ "flddx", 0x2c000000, 0xfc001fc0, "cXx(s,b),ft", pa10, 0x1},
{ "flddx", 0x2c000000, 0xfc00d3c0, "cxccx(b),ft", pa11, 0x1},
{ "flddx", 0x2c000000, 0xfc0013c0, "cxccx(s,b),ft", pa11, 0x1},
{ "flddx", 0x2c000000, 0xfc00dfc0, "cXx(b),ft", pa10, 0},
{ "flddx", 0x2c000000, 0xfc001fc0, "cXx(s,b),ft", pa10, 0},
{ "fstwx", 0x24000200, 0xfc00df80, "cxfT,x(b)", pa10, 0x1},
{ "fstwx", 0x24000200, 0xfc001f80, "cxfT,x(s,b)", pa10, 0x1},
{ "fstwx", 0x24000200, 0xfc00d380, "cxcCfT,x(b)", pa11, 0x1},
{ "fstwx", 0x24000200, 0xfc001380, "cxcCfT,x(s,b)", pa11, 0x1},
{ "fstwx", 0x24000200, 0xfc00df80, "cxfT,x(b)", pa10, 0},
{ "fstwx", 0x24000200, 0xfc001f80, "cxfT,x(s,b)", pa10, 0},
{ "fstdx", 0x2c000200, 0xfc00dfc0, "cxft,x(b)", pa10, 0x1},
{ "fstdx", 0x2c000200, 0xfc001fc0, "cxft,x(s,b)", pa10, 0x1},
{ "fstdx", 0x2c000200, 0xfc00d3c0, "cxcCft,x(b)", pa11, 0x1},
{ "fstdx", 0x2c000200, 0xfc0013c0, "cxcCft,x(s,b)", pa11, 0x1},
{ "fstdx", 0x2c000200, 0xfc00dfc0, "cxft,x(b)", pa10, 0},
{ "fstdx", 0x2c000200, 0xfc001fc0, "cxft,x(s,b)", pa10, 0},
{ "fstqx", 0x3c000200, 0xfc00dfc0, "cXft,x(b)", pa10, 0},
{ "fstqx", 0x3c000200, 0xfc001fc0, "cXft,x(s,b)", pa10, 0},
{ "fldws", 0x24001000, 0xfc00df80, "cm5(b),fT", pa10, 0x1},
{ "fldws", 0x24001000, 0xfc001f80, "cm5(s,b),fT", pa10, 0x1},
{ "fldws", 0x24001000, 0xfc00d380, "cmcc5(b),fT", pa11, 0x1},
{ "fldws", 0x24001000, 0xfc001380, "cmcc5(s,b),fT", pa11, 0x1},
{ "fldws", 0x24001000, 0xfc00df80, "cm5(b),fT", pa10, 0},
{ "fldws", 0x24001000, 0xfc001f80, "cm5(s,b),fT", pa10, 0},
{ "fldds", 0x2c001000, 0xfc00dfc0, "cm5(b),ft", pa10, 0x1},
{ "fldds", 0x2c001000, 0xfc001fc0, "cm5(s,b),ft", pa10, 0x1},
{ "fldds", 0x2c001000, 0xfc00d3c0, "cmcc5(b),ft", pa11, 0x1},
{ "fldds", 0x2c001000, 0xfc0013c0, "cmcc5(s,b),ft", pa11, 0x1},
{ "fldds", 0x2c001000, 0xfc00dfc0, "cm5(b),ft", pa10, 0},
{ "fldds", 0x2c001000, 0xfc001fc0, "cm5(s,b),ft", pa10, 0},
{ "fstws", 0x24001200, 0xfc00df80, "cmfT,5(b)", pa10, 0x1},
{ "fstws", 0x24001200, 0xfc001f80, "cmfT,5(s,b)", pa10, 0x1},
{ "fstws", 0x24001200, 0xfc00d380, "cmcCfT,5(b)", pa11, 0x1},
{ "fstws", 0x24001200, 0xfc001380, "cmcCfT,5(s,b)", pa11, 0x1},
{ "fstws", 0x24001200, 0xfc00df80, "cmfT,5(b)", pa10, 0},
{ "fstws", 0x24001200, 0xfc001f80, "cmfT,5(s,b)", pa10, 0},
{ "fstds", 0x2c001200, 0xfc00dfc0, "cmft,5(b)", pa10, 0x1},
{ "fstds", 0x2c001200, 0xfc001fc0, "cmft,5(s,b)", pa10, 0x1},
{ "fstds", 0x2c001200, 0xfc00d3c0, "cmcCft,5(b)", pa11, 0x1},
{ "fstds", 0x2c001200, 0xfc0013c0, "cmcCft,5(s,b)", pa11, 0x1},
{ "fstds", 0x2c001200, 0xfc00dfc0, "cmft,5(b)", pa10, 0},
{ "fstds", 0x2c001200, 0xfc001fc0, "cmft,5(s,b)", pa10, 0},
{ "fstqs", 0x3c001200, 0xfc00dfc0, "cMft,5(b)", pa10, 0},
{ "fstqs", 0x3c001200, 0xfc001fc0, "cMft,5(s,b)", pa10, 0},
{ "fadd", 0x30000600, 0xfc00e7e0, "Ffa,fb,fT", pa10, 0},
{ "fadd", 0x38000600, 0xfc00e720, "IfA,fB,fT", pa10, 0},
{ "fsub", 0x30002600, 0xfc00e7e0, "Ffa,fb,fT", pa10, 0},
{ "fsub", 0x38002600, 0xfc00e720, "IfA,fB,fT", pa10, 0},
{ "fmpy", 0x30004600, 0xfc00e7e0, "Ffa,fb,fT", pa10, 0},
{ "fmpy", 0x38004600, 0xfc00e720, "IfA,fB,fT", pa10, 0},
{ "fdiv", 0x30006600, 0xfc00e7e0, "Ffa,fb,fT", pa10, 0},
{ "fdiv", 0x38006600, 0xfc00e720, "IfA,fB,fT", pa10, 0},
{ "fsqrt", 0x30008000, 0xfc1fe7e0, "Ffa,fT", pa10, 0},
{ "fsqrt", 0x38008000, 0xfc1fe720, "FfA,fT", pa10, 0},
{ "fabs", 0x30006000, 0xfc1fe7e0, "Ffa,fT", pa10, 0},
{ "fabs", 0x38006000, 0xfc1fe720, "FfA,fT", pa10, 0},
{ "frem", 0x30008600, 0xfc00e7e0, "Ffa,fb,fT", pa10, 0},
{ "frem", 0x38008600, 0xfc00e720, "FfA,fB,fT", pa10, 0},
{ "frnd", 0x3000a000, 0xfc1fe7e0, "Ffa,fT", pa10, 0},
{ "frnd", 0x3800a000, 0xfc1fe720, "FfA,fT", pa10, 0},
{ "fcpy", 0x30004000, 0xfc1fe7e0, "Ffa,fT", pa10, 0},
{ "fcpy", 0x38004000, 0xfc1fe720, "FfA,fT", pa10, 0},
{ "fcnvff", 0x30000200, 0xfc1f87e0, "FGfa,fT", pa10, 0},
{ "fcnvff", 0x38000200, 0xfc1f8720, "FGfA,fT", pa10, 0},
{ "fcnvxf", 0x30008200, 0xfc1f87e0, "FGfa,fT", pa10, 0},
{ "fcnvxf", 0x38008200, 0xfc1f8720, "FGfA,fT", pa10, 0},
{ "fcnvfx", 0x30010200, 0xfc1f87e0, "FGfa,fT", pa10, 0},
{ "fcnvfx", 0x38010200, 0xfc1f8720, "FGfA,fT", pa10, 0},
{ "fcnvfxt", 0x30018200, 0xfc1f87e0, "FGfa,fT", pa10, 0},
{ "fcnvfxt", 0x38018200, 0xfc1f8720, "FGfA,fT", pa10, 0},
{ "fmpyfadd", 0xb8000000, 0xfc000020, "IfA,fB,fC,fT", pa20, 0x1},
{ "fmpynfadd", 0xb8000020, 0xfc000020, "IfA,fB,fC,fT", pa20, 0x1},
{ "fneg", 0x3000c000, 0xfc1fe7e0, "Ffa,fT", pa20, 0x1},
{ "fneg", 0x3800c000, 0xfc1fe720, "IfA,fT", pa20, 0x1},
{ "fnegabs", 0x3000e000, 0xfc1fe7e0, "Ffa,fT", pa20, 0x1},
{ "fnegabs", 0x3800e000, 0xfc1fe720, "IfA,fT", pa20, 0x1},
{ "fcnv", 0x30000200, 0xfc1c0720, "{_fa,fT", pa20, 0x1},
{ "fcnv", 0x38000200, 0xfc1c0720, "FGfA,fT", pa20, 0x1},
{ "fcmp", 0x30000400, 0xfc00e7e0, "F?ffa,fb", pa10, 0x1},
{ "fcmp", 0x38000400, 0xfc00e720, "I?ffA,fB", pa10, 0x1},
{ "fcmp", 0x30000400, 0xfc0007e0, "F?ffa,fb,h", pa20, 0x1},
{ "fcmp", 0x38000400, 0xfc000720, "I?ffA,fB,h", pa20, 0x1},
{ "fcmp", 0x30000400, 0xfc00e7e0, "F?ffa,fb", pa10, 0},
{ "fcmp", 0x38000400, 0xfc00e720, "I?ffA,fB", pa10, 0},
{ "xmpyu", 0x38004700, 0xfc00e720, "fX,fB,fT", pa11, 0},
{ "fmpyadd", 0x18000000, 0xfc000000, "Hfi,fj,fk,fl,fm", pa11, 0},
{ "fmpysub", 0x98000000, 0xfc000000, "Hfi,fj,fk,fl,fm", pa11, 0},
{ "ftest", 0x30002420, 0xffffffff, "", pa10, 0x1},
{ "ftest", 0x30002420, 0xffffffe0, ",=", pa20, 0x1},
{ "ftest", 0x30000420, 0xffff1fff, "m", pa20, 0x1},
{ "fid", 0x30000000, 0xffffffff, "", pa11, 0},



{ "pmdis", 0x30000280, 0xffffffdf, "N", pa20, 0x1},
{ "pmenb", 0x30000680, 0xffffffff, "", pa20, 0x1},



{ "spop0", 0x10000000, 0xfc000600, "v,ON", pa10, 0},
{ "spop1", 0x10000200, 0xfc000600, "v,oNt", pa10, 0},
{ "spop2", 0x10000400, 0xfc000600, "v,1Nb", pa10, 0},
{ "spop3", 0x10000600, 0xfc000600, "v,0Nx,b", pa10, 0},
{ "copr", 0x30000000, 0xfc000000, "u,2N", pa10, 0},
{ "cldw", 0x24000000, 0xfc00de00, "ucXx(b),t", pa10, 0x1},
{ "cldw", 0x24000000, 0xfc001e00, "ucXx(s,b),t", pa10, 0x1},
{ "cldw", 0x24000000, 0xfc00d200, "ucxccx(b),t", pa11, 0x1},
{ "cldw", 0x24000000, 0xfc001200, "ucxccx(s,b),t", pa11, 0x1},
{ "cldw", 0x24001000, 0xfc00d200, "ucocc@(b),t", pa20, 0x1},
{ "cldw", 0x24001000, 0xfc001200, "ucocc@(s,b),t", pa20, 0x1},
{ "cldw", 0x24001000, 0xfc00de00, "ucM5(b),t", pa10, 0x1},
{ "cldw", 0x24001000, 0xfc001e00, "ucM5(s,b),t", pa10, 0x1},
{ "cldw", 0x24001000, 0xfc00d200, "ucmcc5(b),t", pa11, 0x1},
{ "cldw", 0x24001000, 0xfc001200, "ucmcc5(s,b),t", pa11, 0x1},
{ "cldd", 0x2c000000, 0xfc00de00, "ucXx(b),t", pa10, 0x1},
{ "cldd", 0x2c000000, 0xfc001e00, "ucXx(s,b),t", pa10, 0x1},
{ "cldd", 0x2c000000, 0xfc00d200, "ucxccx(b),t", pa11, 0x1},
{ "cldd", 0x2c000000, 0xfc001200, "ucxccx(s,b),t", pa11, 0x1},
{ "cldd", 0x2c001000, 0xfc00d200, "ucocc@(b),t", pa20, 0x1},
{ "cldd", 0x2c001000, 0xfc001200, "ucocc@(s,b),t", pa20, 0x1},
{ "cldd", 0x2c001000, 0xfc00de00, "ucM5(b),t", pa10, 0x1},
{ "cldd", 0x2c001000, 0xfc001e00, "ucM5(s,b),t", pa10, 0x1},
{ "cldd", 0x2c001000, 0xfc00d200, "ucmcc5(b),t", pa11, 0x1},
{ "cldd", 0x2c001000, 0xfc001200, "ucmcc5(s,b),t", pa11, 0x1},
{ "cstw", 0x24000200, 0xfc00de00, "ucXt,x(b)", pa10, 0x1},
{ "cstw", 0x24000200, 0xfc001e00, "ucXt,x(s,b)", pa10, 0x1},
{ "cstw", 0x24000200, 0xfc00d200, "ucxcCt,x(b)", pa11, 0x1},
{ "cstw", 0x24000200, 0xfc001200, "ucxcCt,x(s,b)", pa11, 0x1},
{ "cstw", 0x24001200, 0xfc00d200, "ucocCt,@(b)", pa20, 0x1},
{ "cstw", 0x24001200, 0xfc001200, "ucocCt,@(s,b)", pa20, 0x1},
{ "cstw", 0x24001200, 0xfc00de00, "ucMt,5(b)", pa10, 0x1},
{ "cstw", 0x24001200, 0xfc001e00, "ucMt,5(s,b)", pa10, 0x1},
{ "cstw", 0x24001200, 0xfc00d200, "ucmcCt,5(b)", pa11, 0x1},
{ "cstw", 0x24001200, 0xfc001200, "ucmcCt,5(s,b)", pa11, 0x1},
{ "cstd", 0x2c000200, 0xfc00de00, "ucXt,x(b)", pa10, 0x1},
{ "cstd", 0x2c000200, 0xfc001e00, "ucXt,x(s,b)", pa10, 0x1},
{ "cstd", 0x2c000200, 0xfc00d200, "ucxcCt,x(b)", pa11, 0x1},
{ "cstd", 0x2c000200, 0xfc001200, "ucxcCt,x(s,b)", pa11, 0x1},
{ "cstd", 0x2c001200, 0xfc00d200, "ucocCt,@(b)", pa20, 0x1},
{ "cstd", 0x2c001200, 0xfc001200, "ucocCt,@(s,b)", pa20, 0x1},
{ "cstd", 0x2c001200, 0xfc00de00, "ucMt,5(b)", pa10, 0x1},
{ "cstd", 0x2c001200, 0xfc001e00, "ucMt,5(s,b)", pa10, 0x1},
{ "cstd", 0x2c001200, 0xfc00d200, "ucmcCt,5(b)", pa11, 0x1},
{ "cstd", 0x2c001200, 0xfc001200, "ucmcCt,5(s,b)", pa11, 0x1},
{ "cldwx", 0x24000000, 0xfc00de00, "ucXx(b),t", pa10, 0x1},
{ "cldwx", 0x24000000, 0xfc001e00, "ucXx(s,b),t", pa10, 0x1},
{ "cldwx", 0x24000000, 0xfc00d200, "ucxccx(b),t", pa11, 0x1},
{ "cldwx", 0x24000000, 0xfc001200, "ucxccx(s,b),t", pa11, 0x1},
{ "cldwx", 0x24000000, 0xfc00de00, "ucXx(b),t", pa10, 0},
{ "cldwx", 0x24000000, 0xfc001e00, "ucXx(s,b),t", pa10, 0},
{ "clddx", 0x2c000000, 0xfc00de00, "ucXx(b),t", pa10, 0x1},
{ "clddx", 0x2c000000, 0xfc001e00, "ucXx(s,b),t", pa10, 0x1},
{ "clddx", 0x2c000000, 0xfc00d200, "ucxccx(b),t", pa11, 0x1},
{ "clddx", 0x2c000000, 0xfc001200, "ucxccx(s,b),t", pa11, 0x1},
{ "clddx", 0x2c000000, 0xfc00de00, "ucXx(b),t", pa10, 0},
{ "clddx", 0x2c000000, 0xfc001e00, "ucXx(s,b),t", pa10, 0},
{ "cstwx", 0x24000200, 0xfc00de00, "ucXt,x(b)", pa10, 0x1},
{ "cstwx", 0x24000200, 0xfc001e00, "ucXt,x(s,b)", pa10, 0x1},
{ "cstwx", 0x24000200, 0xfc00d200, "ucxcCt,x(b)", pa11, 0x1},
{ "cstwx", 0x24000200, 0xfc001200, "ucxcCt,x(s,b)", pa11, 0x1},
{ "cstwx", 0x24000200, 0xfc00de00, "ucXt,x(b)", pa10, 0},
{ "cstwx", 0x24000200, 0xfc001e00, "ucXt,x(s,b)", pa10, 0},
{ "cstdx", 0x2c000200, 0xfc00de00, "ucXt,x(b)", pa10, 0x1},
{ "cstdx", 0x2c000200, 0xfc001e00, "ucXt,x(s,b)", pa10, 0x1},
{ "cstdx", 0x2c000200, 0xfc00d200, "ucxcCt,x(b)", pa11, 0x1},
{ "cstdx", 0x2c000200, 0xfc001200, "ucxcCt,x(s,b)", pa11, 0x1},
{ "cstdx", 0x2c000200, 0xfc00de00, "ucXt,x(b)", pa10, 0},
{ "cstdx", 0x2c000200, 0xfc001e00, "ucXt,x(s,b)", pa10, 0},
{ "cldws", 0x24001000, 0xfc00de00, "ucM5(b),t", pa10, 0x1},
{ "cldws", 0x24001000, 0xfc001e00, "ucM5(s,b),t", pa10, 0x1},
{ "cldws", 0x24001000, 0xfc00d200, "ucmcc5(b),t", pa11, 0x1},
{ "cldws", 0x24001000, 0xfc001200, "ucmcc5(s,b),t", pa11, 0x1},
{ "cldws", 0x24001000, 0xfc00de00, "ucM5(b),t", pa10, 0},
{ "cldws", 0x24001000, 0xfc001e00, "ucM5(s,b),t", pa10, 0},
{ "cldds", 0x2c001000, 0xfc00de00, "ucM5(b),t", pa10, 0x1},
{ "cldds", 0x2c001000, 0xfc001e00, "ucM5(s,b),t", pa10, 0x1},
{ "cldds", 0x2c001000, 0xfc00d200, "ucmcc5(b),t", pa11, 0x1},
{ "cldds", 0x2c001000, 0xfc001200, "ucmcc5(s,b),t", pa11, 0x1},
{ "cldds", 0x2c001000, 0xfc00de00, "ucM5(b),t", pa10, 0},
{ "cldds", 0x2c001000, 0xfc001e00, "ucM5(s,b),t", pa10, 0},
{ "cstws", 0x24001200, 0xfc00de00, "ucMt,5(b)", pa10, 0x1},
{ "cstws", 0x24001200, 0xfc001e00, "ucMt,5(s,b)", pa10, 0x1},
{ "cstws", 0x24001200, 0xfc00d200, "ucmcCt,5(b)", pa11, 0x1},
{ "cstws", 0x24001200, 0xfc001200, "ucmcCt,5(s,b)", pa11, 0x1},
{ "cstws", 0x24001200, 0xfc00de00, "ucMt,5(b)", pa10, 0},
{ "cstws", 0x24001200, 0xfc001e00, "ucMt,5(s,b)", pa10, 0},
{ "cstds", 0x2c001200, 0xfc00de00, "ucMt,5(b)", pa10, 0x1},
{ "cstds", 0x2c001200, 0xfc001e00, "ucMt,5(s,b)", pa10, 0x1},
{ "cstds", 0x2c001200, 0xfc00d200, "ucmcCt,5(b)", pa11, 0x1},
{ "cstds", 0x2c001200, 0xfc001200, "ucmcCt,5(s,b)", pa11, 0x1},
{ "cstds", 0x2c001200, 0xfc00de00, "ucMt,5(b)", pa10, 0},
{ "cstds", 0x2c001200, 0xfc001e00, "ucMt,5(s,b)", pa10, 0},


{ "call", 0xe800f000, 0xfc1ffffd, "n(b)", pa20, 0x1},
{ "call", 0xe800a000, 0xffe0e000, "nW", pa10, 0x1},
{ "ret", 0xe840d000, 0xfffffffd, "n", pa20, 0x1},

};
# 28 "project/radare2/libr/asm/arch/hppa/gnu/hppa-dis.c" 2

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 1 3 4







# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str_util.h" 1 3 4
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_userconf.h" 1 3 4



# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_version.h" 1 3 4
# 5 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_userconf.h" 2 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
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
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 1 3 4
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_pid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 90 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_id_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_id_t.h" 3 4
typedef __darwin_id_t id_t;
# 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 2 3 4
# 109 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 1 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/appleapiopts.h" 1 3 4
# 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4
# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/signal.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/signal.h" 1 3 4
# 39 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/signal.h" 3 4
typedef int sig_atomic_t;
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/signal.h" 2 3 4
# 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4
# 146 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_mcontext.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_mcontext.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_mcontext.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_mcontext.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/machine/_structs.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/machine/_structs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 1 3 4
# 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_thread_state
{
    unsigned int __eax;
    unsigned int __ebx;
    unsigned int __ecx;
    unsigned int __edx;
    unsigned int __edi;
    unsigned int __esi;
    unsigned int __ebp;
    unsigned int __esp;
    unsigned int __ss;
    unsigned int __eflags;
    unsigned int __eip;
    unsigned int __cs;
    unsigned int __ds;
    unsigned int __es;
    unsigned int __fs;
    unsigned int __gs;
};
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_control
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
      :2,
    __pc :2,





    __rc :2,






             :1,
      :3;
};
typedef struct __darwin_fp_control __darwin_fp_control_t;
# 150 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_status
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
    __stkflt :1,
    __errsumm :1,
    __c0 :1,
    __c1 :1,
    __c2 :1,
    __tos :3,
    __c3 :1,
    __busy :1;
};
typedef struct __darwin_fp_status __darwin_fp_status_t;
# 194 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_mmst_reg
{
 char __mmst_reg[10];
 char __mmst_rsrv[6];
};
# 213 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_xmm_reg
{
 char __xmm_reg[16];
};
# 229 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_ymm_reg
{
 char __ymm_reg[32];
};
# 245 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_zmm_reg
{
 char __zmm_reg[64];
};
# 259 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_opmask_reg
{
 char __opmask_reg[8];
};
# 281 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_float_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
};


struct __darwin_i386_avx_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
};


struct __darwin_i386_avx512_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
 struct __darwin_opmask_reg __fpu_k0;
 struct __darwin_opmask_reg __fpu_k1;
 struct __darwin_opmask_reg __fpu_k2;
 struct __darwin_opmask_reg __fpu_k3;
 struct __darwin_opmask_reg __fpu_k4;
 struct __darwin_opmask_reg __fpu_k5;
 struct __darwin_opmask_reg __fpu_k6;
 struct __darwin_opmask_reg __fpu_k7;
 struct __darwin_ymm_reg __fpu_zmmh0;
 struct __darwin_ymm_reg __fpu_zmmh1;
 struct __darwin_ymm_reg __fpu_zmmh2;
 struct __darwin_ymm_reg __fpu_zmmh3;
 struct __darwin_ymm_reg __fpu_zmmh4;
 struct __darwin_ymm_reg __fpu_zmmh5;
 struct __darwin_ymm_reg __fpu_zmmh6;
 struct __darwin_ymm_reg __fpu_zmmh7;
};
# 575 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_exception_state
{
 __uint16_t __trapno;
 __uint16_t __cpu;
 __uint32_t __err;
 __uint32_t __faultvaddr;
};
# 595 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state32
{
 unsigned int __dr0;
 unsigned int __dr1;
 unsigned int __dr2;
 unsigned int __dr3;
 unsigned int __dr4;
 unsigned int __dr5;
 unsigned int __dr6;
 unsigned int __dr7;
};


struct __x86_instruction_state
{
        int __insn_stream_valid_bytes;
        int __insn_offset;
 int __out_of_synch;





        __uint8_t __insn_bytes[(2448 - 64 - 4)];

 __uint8_t __insn_cacheline[64];
};


struct __last_branch_record
{
 __uint64_t __from_ip;
 __uint64_t __to_ip;
 __uint32_t __mispredict : 1,
   __tsx_abort : 1,
   __in_tsx : 1,
   __cycle_count: 16,
   __reserved : 13;
};


struct __last_branch_state
{
        int __lbr_count;
 __uint32_t __lbr_supported_tsx : 1,
     __lbr_supported_cycle_count : 1,
     __reserved : 30;

 struct __last_branch_record __lbrs[32];
};
# 702 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __x86_pagein_state
{
 int __pagein_error;
};







struct __darwin_x86_thread_state64
{
 __uint64_t __rax;
 __uint64_t __rbx;
 __uint64_t __rcx;
 __uint64_t __rdx;
 __uint64_t __rdi;
 __uint64_t __rsi;
 __uint64_t __rbp;
 __uint64_t __rsp;
 __uint64_t __r8;
 __uint64_t __r9;
 __uint64_t __r10;
 __uint64_t __r11;
 __uint64_t __r12;
 __uint64_t __r13;
 __uint64_t __r14;
 __uint64_t __r15;
 __uint64_t __rip;
 __uint64_t __rflags;
 __uint64_t __cs;
 __uint64_t __fs;
 __uint64_t __gs;
};
# 771 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_thread_full_state64
{
 struct __darwin_x86_thread_state64 __ss64;
 __uint64_t __ds;
 __uint64_t __es;
 __uint64_t __ss;
 __uint64_t __gsbase;
};
# 794 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_float_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
};


struct __darwin_x86_avx_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
 struct __darwin_xmm_reg __fpu_ymmh8;
 struct __darwin_xmm_reg __fpu_ymmh9;
 struct __darwin_xmm_reg __fpu_ymmh10;
 struct __darwin_xmm_reg __fpu_ymmh11;
 struct __darwin_xmm_reg __fpu_ymmh12;
 struct __darwin_xmm_reg __fpu_ymmh13;
 struct __darwin_xmm_reg __fpu_ymmh14;
 struct __darwin_xmm_reg __fpu_ymmh15;
};


struct __darwin_x86_avx512_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
 struct __darwin_xmm_reg __fpu_ymmh8;
 struct __darwin_xmm_reg __fpu_ymmh9;
 struct __darwin_xmm_reg __fpu_ymmh10;
 struct __darwin_xmm_reg __fpu_ymmh11;
 struct __darwin_xmm_reg __fpu_ymmh12;
 struct __darwin_xmm_reg __fpu_ymmh13;
 struct __darwin_xmm_reg __fpu_ymmh14;
 struct __darwin_xmm_reg __fpu_ymmh15;
 struct __darwin_opmask_reg __fpu_k0;
 struct __darwin_opmask_reg __fpu_k1;
 struct __darwin_opmask_reg __fpu_k2;
 struct __darwin_opmask_reg __fpu_k3;
 struct __darwin_opmask_reg __fpu_k4;
 struct __darwin_opmask_reg __fpu_k5;
 struct __darwin_opmask_reg __fpu_k6;
 struct __darwin_opmask_reg __fpu_k7;
 struct __darwin_ymm_reg __fpu_zmmh0;
 struct __darwin_ymm_reg __fpu_zmmh1;
 struct __darwin_ymm_reg __fpu_zmmh2;
 struct __darwin_ymm_reg __fpu_zmmh3;
 struct __darwin_ymm_reg __fpu_zmmh4;
 struct __darwin_ymm_reg __fpu_zmmh5;
 struct __darwin_ymm_reg __fpu_zmmh6;
 struct __darwin_ymm_reg __fpu_zmmh7;
 struct __darwin_ymm_reg __fpu_zmmh8;
 struct __darwin_ymm_reg __fpu_zmmh9;
 struct __darwin_ymm_reg __fpu_zmmh10;
 struct __darwin_ymm_reg __fpu_zmmh11;
 struct __darwin_ymm_reg __fpu_zmmh12;
 struct __darwin_ymm_reg __fpu_zmmh13;
 struct __darwin_ymm_reg __fpu_zmmh14;
 struct __darwin_ymm_reg __fpu_zmmh15;
 struct __darwin_zmm_reg __fpu_zmm16;
 struct __darwin_zmm_reg __fpu_zmm17;
 struct __darwin_zmm_reg __fpu_zmm18;
 struct __darwin_zmm_reg __fpu_zmm19;
 struct __darwin_zmm_reg __fpu_zmm20;
 struct __darwin_zmm_reg __fpu_zmm21;
 struct __darwin_zmm_reg __fpu_zmm22;
 struct __darwin_zmm_reg __fpu_zmm23;
 struct __darwin_zmm_reg __fpu_zmm24;
 struct __darwin_zmm_reg __fpu_zmm25;
 struct __darwin_zmm_reg __fpu_zmm26;
 struct __darwin_zmm_reg __fpu_zmm27;
 struct __darwin_zmm_reg __fpu_zmm28;
 struct __darwin_zmm_reg __fpu_zmm29;
 struct __darwin_zmm_reg __fpu_zmm30;
 struct __darwin_zmm_reg __fpu_zmm31;
};
# 1252 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_exception_state64
{
    __uint16_t __trapno;
    __uint16_t __cpu;
    __uint32_t __err;
    __uint64_t __faultvaddr;
};
# 1272 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state64
{
 __uint64_t __dr0;
 __uint64_t __dr1;
 __uint64_t __dr2;
 __uint64_t __dr3;
 __uint64_t __dr4;
 __uint64_t __dr5;
 __uint64_t __dr6;
 __uint64_t __dr7;
};
# 1300 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_cpmu_state64
{
 __uint64_t __ctrs[16];
};
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/machine/_structs.h" 2 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_mcontext.h" 2 3 4




struct __darwin_mcontext32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_float_state __fs;
};


struct __darwin_mcontext_avx32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_avx_state __fs;
};



struct __darwin_mcontext_avx512_32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_avx512_state __fs;
};
# 97 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_mcontext.h" 3 4
struct __darwin_mcontext64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_float_state64 __fs;
};


struct __darwin_mcontext64_full
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_full_state64 __ss;
 struct __darwin_x86_float_state64 __fs;
};


struct __darwin_mcontext_avx64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_avx_state64 __fs;
};


struct __darwin_mcontext_avx64_full
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_full_state64 __ss;
 struct __darwin_x86_avx_state64 __fs;
};



struct __darwin_mcontext_avx512_64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_avx512_state64 __fs;
};


struct __darwin_mcontext_avx512_64_full
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_full_state64 __ss;
 struct __darwin_x86_avx512_state64 __fs;
};
# 204 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_mcontext.h" 3 4
typedef struct __darwin_mcontext64 *mcontext_t;
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_mcontext.h" 2 3 4
# 147 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_attr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_attr_t.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;
# 149 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sigaltstack.h" 1 3 4
# 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sigaltstack.h" 3 4
struct __darwin_sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
# 151 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ucontext.h" 1 3 4
# 39 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ucontext.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_mcontext.h" 1 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ucontext.h" 2 3 4



struct __darwin_ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 struct __darwin_sigaltstack uc_stack;
 struct __darwin_ucontext *uc_link;
 __darwin_size_t uc_mcsize;
 struct __darwin_mcontext64 *uc_mcontext;



};


typedef struct __darwin_ucontext ucontext_t;
# 152 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sigset_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sigset_t.h" 3 4
typedef __darwin_sigset_t sigset_t;
# 155 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uid_t.h" 3 4
typedef __darwin_uid_t uid_t;
# 157 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4

union sigval {

 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify;
 int sigev_signo;
 union sigval sigev_value;
 void (*sigev_notify_function)(union sigval);
 pthread_attr_t *sigev_notify_attributes;
};


typedef struct __siginfo {
 int si_signo;
 int si_errno;
 int si_code;
 pid_t si_pid;
 uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 unsigned long __pad[7];
} siginfo_t;
# 269 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
     void *);
};


struct __sigaction {
 union __sigaction_u __sigaction_u;
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask;
 int sa_flags;
};




struct sigaction {
 union __sigaction_u __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 331 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4
typedef void (*sig_t)(int);
# 348 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 367 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
# 389 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4

    void(*signal(int, void (*)(int)))(int);

# 110 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 1 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdint.h" 1 3 4
# 9 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdint.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 1 3 4
# 32 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint8_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint8_t.h" 3 4
typedef unsigned char uint8_t;
# 33 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint16_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint16_t.h" 3 4
typedef unsigned short uint16_t;
# 34 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint32_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint32_t.h" 3 4
typedef unsigned int uint32_t;
# 35 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint64_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint64_t.h" 3 4
typedef unsigned long long uint64_t;
# 36 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;
# 67 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_intmax_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_intmax_t.h" 3 4
typedef long int intmax_t;
# 68 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uintmax_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uintmax_t.h" 3 4
typedef long unsigned int uintmax_t;
# 69 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 10 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdint.h" 2 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 2 3 4







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timeval.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 2 3 4
# 89 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
typedef __uint64_t rlim_t;
# 152 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
# 163 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;


};
# 199 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
typedef void *rusage_info_t;

struct rusage_info_v0 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
};

struct rusage_info_v1 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
};

struct rusage_info_v2 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
};

struct rusage_info_v3 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
};

struct rusage_info_v4 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
 uint64_t ri_logical_writes;
 uint64_t ri_lifetime_max_phys_footprint;
 uint64_t ri_instructions;
 uint64_t ri_cycles;
 uint64_t ri_billed_energy;
 uint64_t ri_serviced_energy;
 uint64_t ri_interval_max_phys_footprint;
 uint64_t ri_runnable_time;
};

struct rusage_info_v5 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
 uint64_t ri_logical_writes;
 uint64_t ri_lifetime_max_phys_footprint;
 uint64_t ri_instructions;
 uint64_t ri_cycles;
 uint64_t ri_billed_energy;
 uint64_t ri_serviced_energy;
 uint64_t ri_interval_max_phys_footprint;
 uint64_t ri_runnable_time;
 uint64_t ri_flags;
};

typedef struct rusage_info_v5 rusage_info_current;
# 411 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
# 446 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
struct proc_rlimit_control_wakeupmon {
 uint32_t wm_flags;
 int32_t wm_rate;
};
# 506 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4

int getpriority(int, id_t);

int getiopolicy_np(int, int) ;

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit" );
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) ;

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit" );

# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 2 3 4
# 186 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/endian.h" 1 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/endian.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/endian.h" 1 3 4
# 99 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/endian.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_endian.h" 1 3 4
# 130 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_endian.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/_OSByteOrder.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/i386/_OSByteOrder.h" 1 3 4
# 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static inline
__uint16_t
_OSSwapInt16(
 __uint16_t _data
 )
{
 return (__uint16_t)((_data << 8) | (_data >> 8));
}

static inline
__uint32_t
_OSSwapInt32(
 __uint32_t _data
 )
{



 __asm__ ("bswap   %0" : "+r" (_data));
 return _data;

}
# 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static inline
__uint64_t
_OSSwapInt64(
 __uint64_t _data
 )
{
 __asm__ ("bswap   %0" : "+r" (_data));
 return _data;
}
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/_OSByteOrder.h" 2 3 4
# 131 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_endian.h" 2 3 4
# 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/endian.h" 2 3 4
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/endian.h" 2 3 4
# 187 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 2 3 4







union wait {
 int w_status;



 struct {

  unsigned int w_Termsig:7,
      w_Coredump:1,
      w_Retcode:8,
      w_Filler:16;







 } w_T;





 struct {

  unsigned int w_Stopval:8,
      w_Stopsig:8,
      w_Filler:16;






 } w_S;
};
# 247 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4

pid_t wait(int *) __asm("_" "wait" );
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid" );

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid" );


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);


# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/alloca.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/alloca.h" 3 4

void *alloca(size_t);

# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ct_rune_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ct_rune_t.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rune_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rune_t.h" 3 4
typedef __darwin_rune_t rune_t;
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4

typedef struct {
 int quot;
 int rem;
} div_t;

typedef struct {
 long quot;
 long rem;
} ldiv_t;


typedef struct {
 long long quot;
 long long rem;
} lldiv_t;
# 118 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;
# 128 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/malloc/_malloc.h" 1 3 4
# 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/malloc/_malloc.h" 3 4


void *malloc(size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1)));
void *calloc(size_t __count, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1,2)));
void free(void *);
void *realloc(void *__ptr, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));

void *valloc(size_t) __attribute__((alloc_size(1)));




void *aligned_alloc(size_t __alignment, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2))) ;

int posix_memalign(void **__memptr, size_t __alignment, size_t __size) ;


# 129 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4


void abort(void) __attribute__((__cold__)) __attribute__((__noreturn__));
int abs(int) __attribute__((__const__));
int atexit(void (* )(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void *__key, const void *__base, size_t __nel,
     size_t __width, int (* __compar)(const void *, const void *));

div_t div(int, int) __attribute__((__const__));
void exit(int) __attribute__((__noreturn__));

char *getenv(const char *);
long labs(long) __attribute__((__const__));
ldiv_t ldiv(long, long) __attribute__((__const__));

long long
  llabs(long long);
lldiv_t lldiv(long long, long long);


int mblen(const char *__s, size_t __n);
size_t mbstowcs(wchar_t * restrict , const char * restrict, size_t);
int mbtowc(wchar_t * restrict, const char * restrict, size_t);

void qsort(void *__base, size_t __nel, size_t __width,
     int (* __compar)(const void *, const void *));
int rand(void) ;

void srand(unsigned) ;
double strtod(const char *, char **) __asm("_" "strtod" );
float strtof(const char *, char **) __asm("_" "strtof" );
long strtol(const char *__str, char **__endptr, int __base);
long double
  strtold(const char *, char **);

long long
  strtoll(const char *__str, char **__endptr, int __base);

unsigned long
  strtoul(const char *__str, char **__endptr, int __base);

unsigned long long
  strtoull(const char *__str, char **__endptr, int __base);
# 187 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4



int system(const char *) __asm("_" "system" );



size_t wcstombs(char * restrict, const wchar_t * restrict, size_t);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((__noreturn__));
long a64l(const char *);
double drand48(void);
char *ecvt(double, int, int *restrict, int *restrict);
double erand48(unsigned short[3]);
char *fcvt(double, int, int *restrict, int *restrict);
char *gcvt(double, int, char *);
int getsubopt(char **, char * const *, char **);
int grantpt(int);

char *initstate(unsigned, char *, size_t);



long jrand48(unsigned short[3]) ;
char *l64a(long);
void lcong48(unsigned short[7]);
long lrand48(void) ;
char *mktemp(char *);
int mkstemp(char *);
long mrand48(void) ;
long nrand48(unsigned short[3]) ;
int posix_openpt(int);
char *ptsname(int);


int ptsname_r(int fildes, char *buffer, size_t buflen) ;


int putenv(char *) __asm("_" "putenv" );
long random(void) ;
int rand_r(unsigned *) ;

char *realpath(const char * restrict, char * restrict) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char * __name, const char * __value, int __overwrite) __asm("_" "setenv" );

void setkey(const char *) __asm("_" "setkey" );



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv" );







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_dev_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_dev_t.h" 3 4
typedef __darwin_dev_t dev_t;
# 261 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mode_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 262 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4


uint32_t arc4random(void);
void arc4random_addrandom(unsigned char * , int )
   
   
   
    ;
void arc4random_buf(void * __buf, size_t __nbytes) ;
void arc4random_stir(void);
uint32_t
  arc4random_uniform(uint32_t __upper_bound) ;







char *cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char **, char **, const char *);
int cgetfirst(char **, char **);
int cgetmatch(const char *, const char *);
int cgetnext(char **, char **);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char **);
int cgetustr(char *, const char *, char **);

int daemon(int, int) __asm("_" "daemon" "$1050") ;
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);
void setprogname(const char *);
# 309 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
int heapsort(void *__base, size_t __nel, size_t __width,
     int (* __compar)(const void *, const void *));





int mergesort(void *__base, size_t __nel, size_t __width,
     int (* __compar)(const void *, const void *));





void psort(void *__base, size_t __nel, size_t __width,
     int (* __compar)(const void *, const void *))
     ;





void psort_r(void *__base, size_t __nel, size_t __width, void *,
     int (* __compar)(void *, const void *, const void *))
     ;





void qsort_r(void *__base, size_t __nel, size_t __width, void *,
     int (* __compar)(void *, const void *, const void *));
int radixsort(const unsigned char **__base, int __nel, const unsigned char *__table,
     unsigned __endbyte);
int rpmatch(const char *)
 ;
int sradixsort(const unsigned char **__base, int __nel, const unsigned char *__table,
     unsigned __endbyte);
void sranddev(void);
void srandomdev(void);
void *reallocf(void *__ptr, size_t __size) __attribute__((alloc_size(2)));
long long
 strtonum(const char *__numstr, long long __minval, long long __maxval, const char **__errstrp)
 ;

long long
  strtoq(const char *__str, char **__endptr, int __base);
unsigned long long
  strtouq(const char *__str, char **__endptr, int __base);

extern char *suboptarg;








# 12 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 1 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 3 4

void __assert_rtn(const char *, const char *, int, const char *) __attribute__((__noreturn__)) __attribute__((__cold__)) ;




# 13 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 244 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 1 3 4







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ctype.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 1 3 4
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 1 3 4
# 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wint_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wint_t.h" 3 4
typedef __darwin_wint_t wint_t;
# 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 2 3 4
# 60 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 3 4
typedef struct {
 __darwin_rune_t __min;
 __darwin_rune_t __max;
 __darwin_rune_t __map;
 __uint32_t *__types;
} _RuneEntry;

typedef struct {
 int __nranges;
 _RuneEntry *__ranges;
} _RuneRange;

typedef struct {
 char __name[14];
 __uint32_t __mask;
} _RuneCharClass;

typedef struct {
 char __magic[8];
 char __encoding[32];

 __darwin_rune_t (*__sgetrune)(const char *, __darwin_size_t, char const **);
 int (*__sputrune)(__darwin_rune_t, char *, __darwin_size_t, char **);
 __darwin_rune_t __invalid_rune;

 __uint32_t __runetype[(1 <<8 )];
 __darwin_rune_t __maplower[(1 <<8 )];
 __darwin_rune_t __mapupper[(1 <<8 )];






 _RuneRange __runetype_ext;
 _RuneRange __maplower_ext;
 _RuneRange __mapupper_ext;

 void *__variable;
 int __variable_len;




 int __ncharclasses;
 _RuneCharClass *__charclasses;
} _RuneLocale;




extern _RuneLocale _DefaultRuneLocale;
extern _RuneLocale *_CurrentRuneLocale;

# 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 2 3 4
# 128 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 3 4

unsigned long ___runetype(__darwin_ct_rune_t);
__darwin_ct_rune_t ___tolower(__darwin_ct_rune_t);
__darwin_ct_rune_t ___toupper(__darwin_ct_rune_t);


extern __inline __attribute__((__gnu_inline__)) int
isascii(int _c)
{
 return ((_c & ~0x7F) == 0);
}
# 147 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 3 4

int __maskrune(__darwin_ct_rune_t, unsigned long);



extern __inline __attribute__((__gnu_inline__)) int
__istype(__darwin_ct_rune_t _c, unsigned long _f)
{



 return (isascii(_c) ? !!(_DefaultRuneLocale.__runetype[_c] & _f)
  : !!__maskrune(_c, _f));

}

extern __inline __attribute__((__gnu_inline__)) __darwin_ct_rune_t
__isctype(__darwin_ct_rune_t _c, unsigned long _f)
{



 return (_c < 0 || _c >= (1 <<8 )) ? 0 :
  !!(_DefaultRuneLocale.__runetype[_c] & _f);

}
# 187 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 3 4

__darwin_ct_rune_t __toupper(__darwin_ct_rune_t);
__darwin_ct_rune_t __tolower(__darwin_ct_rune_t);



extern __inline __attribute__((__gnu_inline__)) int
__wcwidth(__darwin_ct_rune_t _c)
{
 unsigned int _x;

 if (_c == 0)
  return (0);
 _x = (unsigned int)__maskrune(_c, 0xe0000000L|0x00040000L);
 if ((_x & 0xe0000000L) != 0)
  return ((_x & 0xe0000000L) >> 30);
 return ((_x & 0x00040000L) != 0 ? 1 : -1);
}






extern __inline __attribute__((__gnu_inline__)) int
isalnum(int _c)
{
 return (__istype(_c, 0x00000100L|0x00000400L));
}

extern __inline __attribute__((__gnu_inline__)) int
isalpha(int _c)
{
 return (__istype(_c, 0x00000100L));
}

extern __inline __attribute__((__gnu_inline__)) int
isblank(int _c)
{
 return (__istype(_c, 0x00020000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iscntrl(int _c)
{
 return (__istype(_c, 0x00000200L));
}


extern __inline __attribute__((__gnu_inline__)) int
isdigit(int _c)
{
 return (__isctype(_c, 0x00000400L));
}

extern __inline __attribute__((__gnu_inline__)) int
isgraph(int _c)
{
 return (__istype(_c, 0x00000800L));
}

extern __inline __attribute__((__gnu_inline__)) int
islower(int _c)
{
 return (__istype(_c, 0x00001000L));
}

extern __inline __attribute__((__gnu_inline__)) int
isprint(int _c)
{
 return (__istype(_c, 0x00040000L));
}

extern __inline __attribute__((__gnu_inline__)) int
ispunct(int _c)
{
 return (__istype(_c, 0x00002000L));
}

extern __inline __attribute__((__gnu_inline__)) int
isspace(int _c)
{
 return (__istype(_c, 0x00004000L));
}

extern __inline __attribute__((__gnu_inline__)) int
isupper(int _c)
{
 return (__istype(_c, 0x00008000L));
}


extern __inline __attribute__((__gnu_inline__)) int
isxdigit(int _c)
{
 return (__isctype(_c, 0x00010000L));
}

extern __inline __attribute__((__gnu_inline__)) int
toascii(int _c)
{
 return (_c & 0x7F);
}

extern __inline __attribute__((__gnu_inline__)) int
tolower(int _c)
{
        return (__tolower(_c));
}

extern __inline __attribute__((__gnu_inline__)) int
toupper(int _c)
{
        return (__toupper(_c));
}


extern __inline __attribute__((__gnu_inline__)) int
digittoint(int _c)
{
 return (__maskrune(_c, 0x0F));
}

extern __inline __attribute__((__gnu_inline__)) int
ishexnumber(int _c)
{
 return (__istype(_c, 0x00010000L));
}

extern __inline __attribute__((__gnu_inline__)) int
isideogram(int _c)
{
 return (__istype(_c, 0x00080000L));
}

extern __inline __attribute__((__gnu_inline__)) int
isnumber(int _c)
{
 return (__istype(_c, 0x00000400L));
}

extern __inline __attribute__((__gnu_inline__)) int
isphonogram(int _c)
{
 return (__istype(_c, 0x00200000L));
}

extern __inline __attribute__((__gnu_inline__)) int
isrune(int _c)
{
 return (__istype(_c, 0xFFFFFFF0L));
}

extern __inline __attribute__((__gnu_inline__)) int
isspecial(int _c)
{
 return (__istype(_c, 0x00100000L));
}
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ctype.h" 2 3 4
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 1 3 4
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_char.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_char.h" 3 4
typedef unsigned char u_char;
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_short.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_short.h" 3 4
typedef unsigned short u_short;
# 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int.h" 3 4
typedef unsigned int u_int;
# 87 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

typedef unsigned long u_long;


typedef unsigned short ushort;
typedef unsigned int uint;


typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t * qaddr_t;

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_caddr_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_caddr_t.h" 3 4
typedef char * caddr_t;
# 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

typedef int32_t daddr_t;



typedef u_int32_t fixpt_t;

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blkcnt_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blkcnt_t.h" 3 4
typedef __darwin_blkcnt_t blkcnt_t;
# 108 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blksize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blksize_t.h" 3 4
typedef __darwin_blksize_t blksize_t;
# 109 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_gid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_gid_t.h" 3 4
typedef __darwin_gid_t gid_t;
# 110 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_addr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_addr_t.h" 3 4
typedef __uint32_t in_addr_t;
# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_port_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_port_t.h" 3 4
typedef __uint16_t in_port_t;
# 112 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino_t.h" 3 4
typedef __darwin_ino_t ino_t;
# 113 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino64_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino64_t.h" 3 4
typedef __darwin_ino64_t ino64_t;
# 116 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_key_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_key_t.h" 3 4
typedef __int32_t key_t;
# 119 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_nlink_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_nlink_t.h" 3 4
typedef __uint16_t nlink_t;
# 121 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4




typedef int32_t segsz_t;
typedef int32_t swblk_t;
# 165 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_clock_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_clock_t.h" 3 4
typedef __darwin_clock_t clock_t;
# 166 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_time_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 169 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_useconds_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_useconds_t.h" 3 4
typedef __darwin_useconds_t useconds_t;
# 171 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_suseconds_t.h" 3 4
typedef __darwin_suseconds_t suseconds_t;
# 172 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 184 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_def.h" 1 3 4
# 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_def.h" 3 4

typedef struct fd_set {
 __int32_t fds_bits[((((1024) % ((sizeof(__int32_t) * 8))) == 0) ? ((1024) / ((sizeof(__int32_t) * 8))) : (((1024) / ((sizeof(__int32_t) * 8))) + 1))];
} fd_set;

int __darwin_check_fd_set_overflow(int, const void *, int) ;


extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int
__darwin_check_fd_set(int _a, const void *_b)
{




 if ((uintptr_t)&__darwin_check_fd_set_overflow != (uintptr_t) 0) {



  return __darwin_check_fd_set_overflow(_a, _b, 0);

 } else {
  return 1;
 }



}


extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int
__darwin_fd_isset(int _fd, const struct fd_set *_p)
{
 if (__darwin_check_fd_set(_fd, (const void *) _p)) {
  return _p->fds_bits[(unsigned long)_fd / (sizeof(__int32_t) * 8)] & ((__int32_t)(((unsigned long)1) << ((unsigned long)_fd % (sizeof(__int32_t) * 8))));
 }

 return 0;
}

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void
__darwin_fd_set(int _fd, struct fd_set *const _p)
{
 if (__darwin_check_fd_set(_fd, (const void *) _p)) {
  (_p->fds_bits[(unsigned long)_fd / (sizeof(__int32_t) * 8)] |= ((__int32_t)(((unsigned long)1) << ((unsigned long)_fd % (sizeof(__int32_t) * 8)))));
 }
}

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void
__darwin_fd_clr(int _fd, struct fd_set *const _p)
{
 if (__darwin_check_fd_set(_fd, (const void *) _p)) {
  (_p->fds_bits[(unsigned long)_fd / (sizeof(__int32_t) * 8)] &= ~((__int32_t)(((unsigned long)1) << ((unsigned long)_fd % (sizeof(__int32_t) * 8)))));
 }
}
# 185 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4




typedef __int32_t fd_mask;







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_setsize.h" 1 3 4
# 198 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_set.h" 1 3 4
# 199 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_clr.h" 1 3 4
# 200 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_zero.h" 1 3 4
# 201 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_isset.h" 1 3 4
# 202 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_copy.h" 1 3 4
# 205 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 216 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_cond_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_cond_t.h" 3 4
typedef __darwin_pthread_cond_t pthread_cond_t;
# 217 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_condattr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_condattr_t.h" 3 4
typedef __darwin_pthread_condattr_t pthread_condattr_t;
# 218 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_mutex_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_mutex_t.h" 3 4
typedef __darwin_pthread_mutex_t pthread_mutex_t;
# 219 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_mutexattr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_mutexattr_t.h" 3 4
typedef __darwin_pthread_mutexattr_t pthread_mutexattr_t;
# 220 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_once_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_once_t.h" 3 4
typedef __darwin_pthread_once_t pthread_once_t;
# 221 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_rwlock_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_rwlock_t.h" 3 4
typedef __darwin_pthread_rwlock_t pthread_rwlock_t;
# 222 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_rwlockattr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_rwlockattr_t.h" 3 4
typedef __darwin_pthread_rwlockattr_t pthread_rwlockattr_t;
# 223 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_t.h" 3 4
typedef __darwin_pthread_t pthread_t;
# 224 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_key_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_key_t.h" 3 4
typedef __darwin_pthread_key_t pthread_key_t;
# 228 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsblkcnt_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsblkcnt_t.h" 3 4
typedef __darwin_fsblkcnt_t fsblkcnt_t;
# 233 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsfilcnt_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsfilcnt_t.h" 3 4
typedef __darwin_fsfilcnt_t fsfilcnt_t;
# 234 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 1 3 4
# 34 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 1 3 4
# 203 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 1 3 4
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/limits.h" 1 3 4





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/limits.h" 1 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/limits.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_limits.h" 1 3 4
# 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/limits.h" 2 3 4
# 7 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/limits.h" 2 3 4
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/syslimits.h" 1 3 4
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 2 3 4
# 204 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 2 3 4
# 8 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 2 3 4
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 2 3 4
# 29 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 3 4
typedef __attribute__((aligned(1))) unsigned short uut16;
typedef __attribute__((aligned(1))) unsigned int uut32;
typedef __attribute__((aligned(1))) unsigned long long uut64;
typedef __attribute__((aligned(1))) short ust16;
typedef __attribute__((aligned(1))) int ust32;
typedef __attribute__((aligned(1))) long long ust64;

typedef union {
 unsigned char v8;
 unsigned short v16;
 unsigned int v32;
 unsigned long long v64;
} utAny;

typedef struct _ut80 {
 unsigned long long Low;
 unsigned short High;
} ut80;
typedef struct _ut96 {
 unsigned long long Low;
 unsigned int High;
} ut96;
typedef struct _ut128 {
 unsigned long long Low;
 long long High;
} ut128;
typedef struct _ut256 {
 ut128 Low;
 ut128 High;
} ut256;
typedef struct _utX {
 ut80 v80;
 ut96 v96;
 ut128 v128;
 ut256 v256;
} utX;

# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdbool.h" 1 3 4
# 67 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 2 3 4
# 142 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_overflow.h" 1 3 4
# 64 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_overflow.h" 3 4
static inline _Bool ST8_DIV_OVFCHK(unsigned char a, unsigned char b) { return (!b || (a == 0x80U && b == 0xFFU)); }
static inline _Bool ST16_DIV_OVFCHK(unsigned short a, unsigned short b) { return (!b || (a == 0x8000U && b == 0xFFFFU)); }
static inline _Bool ST32_DIV_OVFCHK(unsigned int a, unsigned int b) { return (!b || (a == 0x80000000U && b == 0xFFFFFFFFU)); }
static inline _Bool ST64_DIV_OVFCHK(unsigned long long a, unsigned long long b) { return (!b || (a == 0x8000000000000000ULL && b == 0xFFFFFFFFFFFFFFFFULL)); }
static inline _Bool UT8_DIV_OVFCHK(unsigned char a, unsigned char b) { (void)(a); return !b; }
static inline _Bool UT16_DIV_OVFCHK(unsigned short a, unsigned short b) { (void)(a); return !b; }
static inline _Bool UT32_DIV_OVFCHK(unsigned int a, unsigned int b) { (void)(a); return !b; }
static inline _Bool UT64_DIV_OVFCHK(unsigned long long a, unsigned long long b) { (void)(a); return !b; }


static inline _Bool ST8_MUL_OVFCHK(signed char a, signed char b) { if (a > 0) { if (b > 0) { return a > 0x7F / b; } return b < (-0x7F - 1) / a; } if (b > 0) { return a < (-0x7F - 1) / b; } return a && b < 0x7F / a; }
static inline _Bool ST16_MUL_OVFCHK(short a, short b) { if (a > 0) { if (b > 0) { return a > 0x7FFF / b; } return b < (-0x7FFF -1) / a; } if (b > 0) { return a < (-0x7FFF -1) / b; } return a && b < 0x7FFF / a; }
static inline _Bool ST32_MUL_OVFCHK(int a, int b) { if (a > 0) { if (b > 0) { return a > 0x7FFFFFFF / b; } return b < (-0x7FFFFFFF -1) / a; } if (b > 0) { return a < (-0x7FFFFFFF -1) / b; } return a && b < 0x7FFFFFFF / a; }
static inline _Bool ST64_MUL_OVFCHK(long long a, long long b) { if (a > 0) { if (b > 0) { return a > ((long long)0x7FFFFFFFFFFFFFFFULL) / b; } return b < ((long long)(-((long long)0x7FFFFFFFFFFFFFFFULL)-1)) / a; } if (b > 0) { return a < ((long long)(-((long long)0x7FFFFFFFFFFFFFFFULL)-1)) / b; } return a && b < ((long long)0x7FFFFFFFFFFFFFFFULL) / a; }
static inline _Bool SZT_MUL_OVFCHK(size_t a, size_t b) { return (a > 0 && b > 0 && a > 0xFFFFFFFFFFFFFFFFULL / b); }
static inline _Bool UT8_MUL_OVFCHK(unsigned char a, unsigned char b) { return (a > 0 && b > 0 && a > 0xFFU / b); }
static inline _Bool UT16_MUL_OVFCHK(unsigned short a, unsigned short b) { return (a > 0 && b > 0 && a > 0xFFFFU / b); }
static inline _Bool UT32_MUL_OVFCHK(unsigned int a, unsigned int b) { return (a > 0 && b > 0 && a > 0xFFFFFFFFU / b); }
static inline _Bool UT64_MUL_OVFCHK(unsigned long long a, unsigned long long b) { return (a > 0 && b > 0 && a > 0xFFFFFFFFFFFFFFFFULL / b); }
# 143 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 2 3 4
# 245 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 254 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 1 3 4
# 99 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 255 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fcntl.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 1 3 4
# 116 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_o_sync.h" 1 3 4
# 117 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4
# 143 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_o_dsync.h" 1 3 4
# 144 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4
# 325 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_seek_set.h" 1 3 4
# 326 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_s_ifmt.h" 1 3 4
# 332 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4
# 350 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
struct flock {
 off_t l_start;
 off_t l_len;
 pid_t l_pid;
 short l_type;
 short l_whence;
};

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timespec.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timespec.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 359 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4






struct flocktimeout {
 struct flock fl;
 struct timespec timeout;
};
# 378 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
struct radvisory {
 off_t ra_offset;
 int ra_count;
};
# 391 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
typedef struct fsignatures {
 off_t fs_file_start;
 void *fs_blob_start;
 size_t fs_blob_size;



 size_t fs_fsignatures_size;
 char fs_cdhash[20];
 int fs_hash_type;
} fsignatures_t;

typedef struct fsupplement {
 off_t fs_file_start;
 off_t fs_blob_start;
 size_t fs_blob_size;
 int fs_orig_fd;
} fsupplement_t;
# 422 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
typedef struct fchecklv {
 off_t lv_file_start;
 size_t lv_error_message_size;
 void *lv_error_message;
} fchecklv_t;
# 436 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
typedef struct fgetsigsinfo {
 off_t fg_file_start;
 int fg_info_request;
 int fg_sig_is_platform;
} fgetsigsinfo_t;
# 451 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
typedef struct fstore {
 unsigned int fst_flags;
 int fst_posmode;
 off_t fst_offset;
 off_t fst_length;
 off_t fst_bytesalloc;
} fstore_t;


typedef struct fpunchhole {
 unsigned int fp_flags;
 unsigned int reserved;
 off_t fp_offset;
 off_t fp_length;
} fpunchhole_t;


typedef struct ftrimactivefile {
 off_t fta_offset;
 off_t fta_length;
} ftrimactivefile_t;


typedef struct fspecread {
 unsigned int fsr_flags;
 unsigned int reserved;
 off_t fsr_offset;
 off_t fsr_length;
} fspecread_t;



typedef struct fbootstraptransfer {
 off_t fbt_offset;
 size_t fbt_length;
 void *fbt_buffer;
} fbootstraptransfer_t;
# 511 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
#pragma pack(4)

struct log2phys {
 unsigned int l2p_flags;
 off_t l2p_contigbytes;


 off_t l2p_devoffset;


};

#pragma pack()
# 534 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_filesec_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_filesec_t.h" 3 4
struct _filesec;
typedef struct _filesec *filesec_t;
# 535 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4

typedef enum {
 FILESEC_OWNER = 1,
 FILESEC_GROUP = 2,
 FILESEC_UUID = 3,
 FILESEC_MODE = 4,
 FILESEC_ACL = 5,
 FILESEC_GRPUUID = 6,


 FILESEC_ACL_RAW = 100,
 FILESEC_ACL_ALLOCSIZE = 101
} filesec_property_t;






int open(const char *, int, ...) __asm("_" "open" );

int openat(int, const char *, int, ...) __asm("_" "openat" ) ;

int creat(const char *, mode_t) __asm("_" "creat" );
int fcntl(int, int, ...) __asm("_" "fcntl" );


int openx_np(const char *, int, filesec_t);




int open_dprotected_np( const char *, int, int, int, ...);
int flock(int, int);
filesec_t filesec_init(void);
filesec_t filesec_dup(filesec_t);
void filesec_free(filesec_t);
int filesec_get_property(filesec_t, filesec_property_t, void *);
int filesec_query_property(filesec_t, filesec_property_t, int *);
int filesec_set_property(filesec_t, filesec_property_t, const void *);
int filesec_unset_property(filesec_t, filesec_property_t) ;




# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fcntl.h" 2 3 4
# 256 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_endian.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_endian.h" 3 4
static inline unsigned char r_read_ble8(const void *src) {
 if (!src) {
  return 0xFFU;
 }
 return *(const unsigned char *)src;
}

static inline unsigned char r_read_at_ble8(const void *src, size_t offset) {
 return r_read_ble8 (((const unsigned char*)src) + offset);
}

static inline void r_write_ble8(void *dest, unsigned char val) {
 *(unsigned char *)dest = val;
}

static inline void r_write_at_ble8(void *dest, unsigned char val, size_t offset) {
 unsigned char *d = (unsigned char*)dest + offset;
 r_write_ble8 (d, val);
}



static inline unsigned char r_read_be8(const void *src) {
 return r_read_ble8 (src);
}

static inline unsigned char r_read_at_be8(const void *src, size_t offset) {
 return r_read_at_ble8 (src, offset);
}

static inline void r_write_be8(void *dest, unsigned char val) {
 r_write_ble8 (dest, val);
}

static inline void r_write_at_be8(void *dest, unsigned char val, size_t offset) {
 r_write_at_ble8 (dest, val, offset);
}

static inline unsigned short r_read_be16(const void *src) {
 const unsigned char *s = (const unsigned char*)src;
 return (((unsigned short)s[0]) << 8) | (((unsigned short)s[1]) << 0);
}

static inline unsigned short r_read_at_be16(const void *src, size_t offset) {
 const unsigned char *s = (const unsigned char*)src + offset;
 return r_read_be16 (s);
}

static inline void r_write_be16(void *dest, unsigned short val) {
 r_write_be8 (dest, val >> 8);
 r_write_at_be8 (dest, (unsigned char)val, sizeof (unsigned char));
}

static inline void r_write_at_be16(void *dest, unsigned short val, size_t offset) {
 unsigned char *d = (unsigned char*)dest + offset;
 r_write_be16 (d, val);
}

static inline unsigned int r_read_be32(const void *src) {
 const unsigned char *s = (const unsigned char*)src;
 return (((unsigned int)s[0]) << 24) | (((unsigned int)s[1]) << 16) |
  (((unsigned int)s[2]) << 8) | (((unsigned int)s[3]) << 0);
}

static inline unsigned int r_read_at_be32(const void *src, size_t offset) {
 const unsigned char *s = (const unsigned char*)src + offset;
 return r_read_be32 (s);
}

static inline void r_write_be32(void *dest, unsigned int val) {
 r_write_be16 (dest, val >> 16);
 r_write_at_be16 (dest, val, sizeof (unsigned short));
}

static inline void r_write_be24(void *_dest, unsigned int val) {
 unsigned char *dest = (unsigned char*)_dest;
 r_write_be8 (dest++, val >> 16);
 r_write_be8 (dest++, val >> 8);
 r_write_be8 (dest, val);
}

static inline void r_write_at_be32(void *dest, unsigned int val, size_t offset) {
 unsigned char *d = (unsigned char*)dest + offset;
 r_write_be32 (d, val);
}

static inline unsigned long long r_read_be64(const void *src) {
 unsigned long long val = ((unsigned long long)(r_read_be32 (src))) << 32;
 val |= r_read_at_be32 (src, sizeof (unsigned int));
 return val;
}

static inline unsigned long long r_read_at_be64(const void *src, size_t offset) {
 const unsigned char *s = (const unsigned char*)src + offset;
 return r_read_be64 (s);
}

static inline void r_write_be64(void *dest, unsigned long long val) {
 r_write_be32 (dest, val >> 32);
 r_write_at_be32 (dest, (unsigned int)val, sizeof (unsigned int));
}

static inline void r_write_at_be64(void *dest, unsigned long long val, size_t offset) {
 unsigned char *d = (unsigned char*)dest + offset;
 r_write_be64 (d, val);
}



static inline unsigned char r_read_le8(const void *src) {
 if (!src) {
  return 0xFFU;
 }
 return r_read_ble8 (src);
}

static inline unsigned char r_read_at_le8(const void *src, size_t offset) {
 return r_read_at_ble8 (src, offset);
}

static inline void r_write_le8(void *dest, unsigned char val) {
 r_write_ble8 (dest, val);
}

static inline void r_write_at_le8(void *dest, unsigned char val, size_t offset) {
 r_write_at_ble8 (dest, val, offset);
}

static inline unsigned short r_read_le16(const void *src) {
 if (!src) {
  return 0xFFFFU;
 }
 const unsigned char *s = (const unsigned char*)src;
 return (((unsigned short)s[1]) << 8) | (((unsigned short)s[0]) << 0);
}

static inline unsigned short r_read_at_le16(const void *src, size_t offset) {
 if (!src) {
  return 0xFFFFU;
 }
 const unsigned char *s = (const unsigned char*)src + offset;
 return r_read_le16 (s);
}

static inline void r_write_le16(void *dest, unsigned short val) {
 r_write_le8 (dest, (unsigned char)val);
 r_write_at_le8 (dest, val >> 8, sizeof (unsigned char));
}

static inline void r_write_at_le16(void *dest, unsigned short val, size_t offset) {
 unsigned char *d = (unsigned char *)dest + offset;
 r_write_le16 (d, val);
}

static inline void r_write_le24(void *_dest, unsigned int val) {
 unsigned char* dest = (unsigned char*)_dest;
 r_write_le8 (dest++, val);
 r_write_le8 (dest++, val >> 8);
 r_write_le8 (dest, val >> 16);
}

static inline unsigned int r_read_le32(const void *src) {
 if (!src) {
  return 0xFFFFFFFFU;
 }
 const unsigned char *s = (const unsigned char*)src;
 return (((unsigned int)s[3]) << 24) | (((unsigned int)s[2]) << 16) |
  (((unsigned int)s[1]) << 8) | (((unsigned int)s[0]) << 0);
}

static inline unsigned int r_read_at_le32(const void *src, size_t offset) {
 if (!src) {
  return 0xFFFFFFFFU;
 }
 const unsigned char *s = (const unsigned char*)src + offset;
 return r_read_le32 (s);
}

static inline void r_write_le32(void *dest, unsigned int val) {
 r_write_le16 (dest, val);
 r_write_at_le16 (dest, val >> 16, sizeof (unsigned short));
}

static inline void r_write_at_le32(void *dest, unsigned int val, size_t offset) {
 unsigned char *d = ((unsigned char*)dest) + offset;
 r_write_le32 (d, val);
}

static inline unsigned long long r_read_le64(const void *src) {
 unsigned long long val = ((unsigned long long)(r_read_at_le32 (src, sizeof (unsigned int)))) << 32;
 val |= r_read_le32 (src);
 return val;
}

static inline unsigned long long r_read_at_le64(const void *src, size_t offset) {
 const unsigned char *s = ((const unsigned char*)src) + offset;
 return r_read_le64 (s);
}

static inline void r_write_le64(void *dest, unsigned long long val) {
 r_write_le32 (dest, (unsigned int)val);
 r_write_at_le32 (dest, val >> 32, sizeof (unsigned int));
}

static inline void r_write_at_le64(void *dest, unsigned long long val, size_t offset) {
 unsigned char *d = (unsigned char*)dest + offset;
 r_write_le64 (d, val);
}



static inline unsigned char r_read_me8(const void *src) {
 return src ? r_read_ble8 (src): 0xFFU;
}

static inline unsigned char r_read_at_me8(const void *src, size_t offset) {
 return r_read_at_ble8 (src, offset);
}

static inline void r_write_me8(void *dest, unsigned char val) {
 r_write_ble8 (dest, val);
}

static inline void r_write_at_me8(void *dest, unsigned char val, size_t offset) {
 r_write_at_ble8 (dest, val, offset);
}

static inline unsigned short r_read_me16(const void *src) {
 if (!src) {
  return 0xFFFFU;
 }
 const unsigned char *s = (const unsigned char*)src;
 return (((unsigned short)s[0]) << 8) | (((unsigned short)s[1]) << 0);
}

static inline unsigned short r_read_at_me16(const void *src, size_t offset) {
 if (!src) {
  return 0xFFFFU;
 }
 const unsigned char *s = (const unsigned char*)src + offset;
 return r_read_me16 (s);
}

static inline void r_write_me16(void *dest, unsigned short val) {
 r_write_me8 (dest, val >> 8);
 r_write_at_me8 (dest, (unsigned char)val, sizeof (unsigned char));
}

static inline void r_write_at_me16(void *dest, unsigned short val, size_t offset) {
 unsigned char *d = (unsigned char *)dest + offset;
 r_write_me16 (d, val);
}

static inline unsigned int r_read_me32(const void *src) {
 if (!src) {
  return 0xFFFFFFFFU;
 }
 const unsigned char *s = (const unsigned char*)src;
 return (((unsigned int)s[2]) << 24) | (((unsigned int)s[1]) << 16) |
  (((unsigned int)s[0]) << 8) | (((unsigned int)s[1]) << 0);
}

static inline unsigned int r_read_at_me32(const void *src, size_t offset) {
 if (!src) {
  return 0xFFFFFFFFU;
 }
 const unsigned char *s = (const unsigned char*)src + offset;
 return r_read_me32 (s);
}

static inline void r_write_me32(void *dest, unsigned int val) {
 r_write_me16 (dest, val);
 r_write_at_me16 (dest, val >> 16, sizeof (unsigned short));
}

static inline void r_write_at_me32(void *dest, unsigned int val, size_t offset) {
 unsigned char *d = ((unsigned char*)dest) + offset;
 r_write_me32 (d, val);
}

static inline unsigned long long r_read_me64(const void *src) {
 unsigned long long val = ((unsigned long long)(r_read_at_me32 (src, sizeof (unsigned int)))) << 32;
 val |= r_read_me32 (src);
 return val;
}

static inline unsigned long long r_read_at_me64(const void *src, size_t offset) {
 const unsigned char *s = ((const unsigned char*)src) + offset;
 return r_read_me64 (s);
}

static inline void r_write_me64(void *dest, unsigned long long val) {
 r_write_me32 (dest, (unsigned int)val);
 r_write_at_me32 (dest, val >> 32, sizeof (unsigned int));
}

static inline void r_write_at_me64(void *dest, unsigned long long val, size_t offset) {
 unsigned char *d = (unsigned char*)dest + offset;
 r_write_me64 (d, val);
}



static inline unsigned short r_read_ble16(const void *src, _Bool big_endian) {
 return big_endian? r_read_be16 (src): r_read_le16 (src);
}

static inline unsigned int r_read_ble32(const void *src, _Bool big_endian) {
 return big_endian? r_read_be32 (src): r_read_le32 (src);
}

static inline unsigned long long r_read_ble64(const void *src, _Bool big_endian) {
 return big_endian? r_read_be64 (src): r_read_le64 (src);
}

static inline unsigned short r_read_at_ble16(const void *src, size_t offset, _Bool big_endian) {
 return big_endian ? r_read_at_be16 (src, offset) : r_read_at_le16 (src, offset);
}

static inline unsigned int r_read_at_ble32(const void *src, size_t offset, _Bool big_endian) {
 return big_endian ? r_read_at_be32 (src, offset) : r_read_at_le32 (src, offset);
}

static inline unsigned long long r_read_at_ble64(const void *src, size_t offset, _Bool big_endian) {
 return big_endian ? r_read_at_be64 (src, offset) : r_read_at_le64 (src, offset);
}

static inline unsigned long long r_read_ble(const void *src, _Bool big_endian, int size) {
 switch (size) {
 case 8:
  return (unsigned long long) ((const unsigned char*)src)[0];
 case 16:
  return r_read_ble16 (src, big_endian);
 case 32:
  return r_read_ble32 (src, big_endian);
 case 64:
  return r_read_ble64 (src, big_endian);
 default:
  return 0xFFFFFFFFFFFFFFFFULL;
 }
}

static inline void r_write_ble16(void *dest, unsigned short val, _Bool big_endian) {
 big_endian? r_write_be16 (dest, val): r_write_le16 (dest, val);
}

static inline void r_write_ble24(void *dest, unsigned int val, _Bool big_endian) {
 big_endian? r_write_be24 (dest, val): r_write_le24 (dest, val);
}

static inline void r_write_ble32(void *dest, unsigned int val, _Bool big_endian) {
 big_endian? r_write_be32 (dest, val): r_write_le32 (dest, val);
}

static inline void r_write_ble64(void *dest, unsigned long long val, _Bool big_endian) {
 big_endian? r_write_be64 (dest, val): r_write_le64 (dest, val);
}

static inline void r_write_ble(void *dst, unsigned long long val, _Bool big_endian, int size) {
 switch (size) {
 case 8:
  ((unsigned char*)dst)[0] = (unsigned char) val;
  break;
 case 16:
  r_write_ble16 (dst, (unsigned short) val, big_endian);
  break;
 case 24:
  r_write_ble24 (dst, (unsigned int) val, big_endian);
  break;
 case 32:
  r_write_ble32 (dst, (unsigned int) val, big_endian);
  break;
 case 64:
  r_write_ble64 (dst, val, big_endian);
  break;
 default:
  break;
 }
}
# 400 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_endian.h" 3 4
static inline unsigned short r_swap_ut16(unsigned short val) {
 return (val << 8) | (val >> 8 );
}

static inline short r_swap_st16(short val) {
 val = ((val << 8) & 0xFF00FF00 ) | ((val >> 8) & 0xFF00FF );
 return (val << 16) | (val >> 16);
}

static inline unsigned int r_swap_ut32(unsigned int val) {
 val = ((val << 8) & 0xFF00FF00 ) | ((val >> 8) & 0xFF00FF );
 return (val << 16) | (val >> 16);
}

static inline int r_swap_st32(int val) {
 val = ((val << 8) & 0xFF00FF00) | ((val >> 8) & 0xFF00FF );
 return (val << 16) | ((val >> 16) & 0xFFFF);
}

static inline unsigned long long r_swap_ut64(unsigned long long val) {
 val = ((val << 8) & 0xFF00FF00FF00FF00ULL ) | ((val >> 8) & 0x00FF00FF00FF00FFULL );
 val = ((val << 16) & 0xFFFF0000FFFF0000ULL ) | ((val >> 16) & 0x0000FFFF0000FFFFULL );
 return (val << 32) | (val >> 32);
}

static inline long long r_swap_st64(long long val) {
 val = ((val << 8) & 0xFF00FF00FF00FF00ULL ) | ((val >> 8) & 0x00FF00FF00FF00FFULL );
 val = ((val << 16) & 0xFFFF0000FFFF0000ULL ) | ((val >> 16) & 0x0000FFFF0000FFFFULL );
 return (val << 32) | ((val >> 32) & 0xFFFFFFFFULL);
}


static inline int UT64_ADD(unsigned long long *r, unsigned long long a, unsigned long long b) {
 if (0xFFFFFFFFFFFFFFFFULL - a < b) {
  return 0;
 }
 if (r) {
  *r = a + b;
 }
 return 1;
}

static inline int UT64_MUL(unsigned long long *r, unsigned long long a, unsigned long long b) {
 if (a && 0xFFFFFFFFFFFFFFFFULL / a < b) {
  return 0;
 }
 if (r) {
  *r = a * b;
 }
 return 1;
}

static inline int UT64_SUB(unsigned long long *r, unsigned long long a, unsigned long long b) {
 if (b > a) {
  return 0;
 }
 if (r) {
  *r = a - b;
 }
 return 1;
}

static inline int UT32_ADD(unsigned int *r, unsigned int a, unsigned int b) {
 if (0xFFFFFFFFU - a < b) {
  return 0;
 }
 if (r) {
  *r = a + b;
 }
 return 1;
}

static inline int UT32_MUL(unsigned int *r, unsigned int a, unsigned int b) {
 if (a && 0xFFFFFFFFU / a < b) {
  return 0;
 }
 if (r) {
  *r = a * b;
 }
 return 1;
}

static inline int UT32_SUB(unsigned int *r, unsigned int a, unsigned int b) {
 if (b > a) {
  return 0;
 }
 if (r) {
  *r = a - b;
 }
 return 1;
}

static inline int UT16_ADD(unsigned short *r, unsigned short a, unsigned short b) {
 if (0xFFFFU - a < b) {
  return 0;
 }
 if (r) {
  *r = a + b;
 }
 return 1;
}

static inline int UT16_MUL(unsigned short *r, unsigned short a, unsigned short b) {
 if (a && 0xFFFFU / a < b) {
  return 0;
 }
 if (r) {
  *r = a * b;
 }
 return 1;
}

static inline int UT16_SUB(unsigned short *r, unsigned short a, unsigned short b) {
 if (b > a) {
  return 0;
 }
 if (r) {
  *r = a - b;
 }
 return 1;
}

static inline int UT8_ADD(unsigned char *r, unsigned char a, unsigned char b) {
 if (0xFFU - a < b) {
  return 0;
 }
 if (r) {
  *r = a + b;
 }
 return 1;
}

static inline int UT8_MUL(unsigned char *r, unsigned char a, unsigned char b) {
 if (a && 0xFFU / a < b) {
  return 0;
 }
 if (r) {
  *r = a * b;
 }
 return 1;
}

static inline int UT8_SUB(unsigned char *r, unsigned char a, unsigned char b) {
 if (b > a) {
  return 0;
 }
 if (r) {
  *r = a - b;
 }
 return 1;
}
# 257 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 289 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
typedef int (*PrintfCallback)(const char *str, ...) __attribute__ ((format (printf, 1, 2)));
# 340 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
static inline void *r_new_copy(int size, void *data) {
 void *a = malloc(size);
 if (a) {
  __builtin___memcpy_chk (a, data, size, __builtin_object_size (a, 0));
 }
 return a;
}
# 391 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 1 3 4
# 110 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4
struct ostat {
 __uint16_t st_dev;
 ino_t st_ino;
 mode_t st_mode;
 nlink_t st_nlink;
 __uint16_t st_uid;
 __uint16_t st_gid;
 __uint16_t st_rdev;
 __int32_t st_size;
 struct timespec st_atimespec;
 struct timespec st_mtimespec;
 struct timespec st_ctimespec;
 __int32_t st_blksize;
 __int32_t st_blocks;
 __uint32_t st_flags;
 __uint32_t st_gen;
};
# 182 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4
struct stat { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec; off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; };
# 221 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4
struct stat64 { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec; off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; };
# 378 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4


int chmod(const char *, mode_t) __asm("_" "chmod" );
int fchmod(int, mode_t) __asm("_" "fchmod" );
int fstat(int, struct stat *) __asm("_" "fstat" "$INODE64");
int lstat(const char *, struct stat *) __asm("_" "lstat" "$INODE64");
int mkdir(const char *, mode_t);
int mkfifo(const char *, mode_t);
int stat(const char *, struct stat *) __asm("_" "stat" "$INODE64");
int mknod(const char *, mode_t, dev_t);
mode_t umask(mode_t);


int fchmodat(int, const char *, mode_t, int) ;
int fstatat(int, const char *, struct stat *, int) __asm("_" "fstatat" "$INODE64") ;
int mkdirat(int, const char *, mode_t) ;




int futimens(int __fd, const struct timespec __times[2]) ;
int utimensat(int __fd, const char *__path, const struct timespec __times[2],
    int __flag) ;






int chflags(const char *, __uint32_t);
int chmodx_np(const char *, filesec_t);
int fchflags(int, __uint32_t);
int fchmodx_np(int, filesec_t);
int fstatx_np(int, struct stat *, filesec_t) __asm("_" "fstatx_np" "$INODE64");
int lchflags(const char *, __uint32_t) ;
int lchmod(const char *, mode_t) ;
int lstatx_np(const char *, struct stat *, filesec_t) __asm("_" "lstatx_np" "$INODE64");
int mkdirx_np(const char *, filesec_t);
int mkfifox_np(const char *, filesec_t);
int statx_np(const char *, struct stat *, filesec_t) __asm("_" "statx_np" "$INODE64");
int umaskx_np(filesec_t) ;



int fstatx64_np(int, struct stat64 *, filesec_t) ;
int lstatx64_np(const char *, struct stat64 *, filesec_t) ;
int statx64_np(const char *, struct stat64 *, filesec_t) ;
int fstat64(int, struct stat64 *) ;
int lstat64(const char *, struct stat64 *) ;
int stat64(const char *, struct stat64 *) ;




# 392 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fcntl.h" 1 3 4
# 393 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dirent.h" 1 3 4
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dirent.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/dirent.h" 1 3 4
# 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/dirent.h" 3 4
#pragma pack(4)
# 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/dirent.h" 3 4
#pragma pack()
# 112 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/dirent.h" 3 4
struct dirent { __uint64_t d_ino; __uint64_t d_seekoff; __uint16_t d_reclen; __uint16_t d_namlen; __uint8_t d_type; char d_name[1024]; };
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dirent.h" 2 3 4




struct _telldir;


typedef struct {
 int __dd_fd;
 long __dd_loc;
 long __dd_size;
 char *__dd_buf;
 int __dd_len;
 long __dd_seek;
 __attribute__((__unused__)) long __padding;
 int __dd_flags;
 __darwin_pthread_mutex_t __dd_lock;
 struct _telldir *__dd_td;
} DIR;
# 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dirent.h" 3 4


int closedir(DIR *) __asm("_" "closedir" );

DIR *opendir(const char *) __asm("_" "opendir" "$INODE64" );

struct dirent *readdir(DIR *) __asm("_" "readdir" "$INODE64");
int readdir_r(DIR *, struct dirent *, struct dirent **) __asm("_" "readdir_r" "$INODE64");

void rewinddir(DIR *) __asm("_" "rewinddir" "$INODE64" );

void seekdir(DIR *, long) __asm("_" "seekdir" "$INODE64" );

long telldir(DIR *) __asm("_" "telldir" "$INODE64" );












DIR *fdopendir(int) __asm("_" "fdopendir" "$INODE64" );

int alphasort(const struct dirent **, const struct dirent **) __asm("_" "alphasort" "$INODE64");
# 146 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dirent.h" 3 4
int dirfd(DIR *dirp) ;


int scandir(const char *, struct dirent ***,
    int (*)(const struct dirent *), int (*)(const struct dirent **, const struct dirent **)) __asm("_" "scandir" "$INODE64");
# 164 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dirent.h" 3 4







int getdirentries(int, char *, int, long *)






      __asm("_getdirentries_is_not_available_when_64_bit_inodes_are_in_effect")



;

DIR *__opendir2(const char *, int) __asm("_" "__opendir2" "$INODE64" );


# 394 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 1 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 1 3 4
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_posix_vdisable.h" 1 3 4
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 2 3 4
# 122 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_seek_set.h" 1 3 4
# 123 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 2 3 4
# 132 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 3 4
struct accessx_descriptor {
 unsigned int ad_name_offset;
 int ad_flags;
 int ad_pad[2];
};
# 185 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 3 4


int getattrlistbulk(int, void *, void *, size_t, uint64_t) ;
int getattrlistat(int, const char *, void *, void *, size_t, unsigned long) ;
int setattrlistat(int, const char *, void *, void *, size_t, uint32_t) ;


# 205 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 3 4


int faccessat(int, const char *, int, int) ;
int fchownat(int, const char *, uid_t, gid_t, int) ;
int linkat(int, const char *, int, const char *, int) ;
ssize_t readlinkat(int, const char *, char *, size_t) ;
int symlinkat(const char *, int, const char *) ;
int unlinkat(int, const char *, int) ;


# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 2 3 4
# 429 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4

void _exit(int) __attribute__((__noreturn__));
int access(const char *, int);
unsigned int
  alarm(unsigned int);
int chdir(const char *);
int chown(const char *, uid_t, gid_t);

int close(int) __asm("_" "close" );

int dup(int);
int dup2(int, int);
int execl(const char * __path, const char * __arg0, ...) ;
int execle(const char * __path, const char * __arg0, ...) ;
int execlp(const char * __file, const char * __arg0, ...) ;
int execv(const char * __path, char * const * __argv) ;
int execve(const char * __file, char * const * __argv, char * const * __envp) ;
int execvp(const char * __file, char * const * __argv) ;
pid_t fork(void) ;
long fpathconf(int, int);
char *getcwd(char *, size_t);
gid_t getegid(void);
uid_t geteuid(void);
gid_t getgid(void);



int getgroups(int, gid_t []);

char *getlogin(void);
pid_t getpgrp(void);
pid_t getpid(void);
pid_t getppid(void);
uid_t getuid(void);
int isatty(int);
int link(const char *, const char *);
off_t lseek(int, off_t, int);
long pathconf(const char *, int);

int pause(void) __asm("_" "pause" );

int pipe(int [2]);

ssize_t read(int, void *, size_t) __asm("_" "read" );

int rmdir(const char *);
int setgid(gid_t);
int setpgid(pid_t, pid_t);
pid_t setsid(void);
int setuid(uid_t);

unsigned int
  sleep(unsigned int) __asm("_" "sleep" );

long sysconf(int);
pid_t tcgetpgrp(int);
int tcsetpgrp(int, pid_t);
char *ttyname(int);


int ttyname_r(int, char *, size_t) __asm("_" "ttyname_r" );




int unlink(const char *);

ssize_t write(int __fd, const void * __buf, size_t __nbyte) __asm("_" "write" );

# 506 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4

size_t confstr(int, char *, size_t) __asm("_" "confstr" );

int getopt(int, char * const [], const char *) __asm("_" "getopt" );

extern char *optarg;
extern int optind, opterr, optopt;

# 532 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4






__attribute__((__deprecated__))

void *brk(const void *);
int chroot(const char *) ;


char *crypt(const char *, const char *);

void encrypt(char *, int) __asm("_" "encrypt" );



int fchdir(int);
long gethostid(void);
pid_t getpgid(pid_t);
pid_t getsid(pid_t);



int getdtablesize(void) ;
int getpagesize(void) __attribute__((__const__)) ;
char *getpass(const char *) ;




char *getwd(char *) ;


int lchown(const char *, uid_t, gid_t) __asm("_" "lchown" );

int lockf(int, int, off_t) __asm("_" "lockf" );

int nice(int) __asm("_" "nice" );

ssize_t pread(int __fd, void * __buf, size_t __nbyte, off_t __offset) __asm("_" "pread" );

ssize_t pwrite(int __fd, const void * __buf, size_t __nbyte, off_t __offset) __asm("_" "pwrite" );






__attribute__((__deprecated__))

void *sbrk(int);



pid_t setpgrp(void) __asm("_" "setpgrp" );




int setregid(gid_t, gid_t) __asm("_" "setregid" );

int setreuid(uid_t, uid_t) __asm("_" "setreuid" );

void swab(const void * restrict, void * restrict, ssize_t);
void sync(void);
int truncate(const char *, off_t);
useconds_t ualarm(useconds_t, useconds_t);
int usleep(useconds_t) __asm("_" "usleep" );
pid_t vfork(void) ;


int fsync(int) __asm("_" "fsync" );

int ftruncate(int, off_t);
int getlogin_r(char *, size_t);

# 620 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4

int fchown(int, uid_t, gid_t);
int gethostname(char *, size_t);
ssize_t readlink(const char * restrict, char * restrict, size_t);
int setegid(gid_t);
int seteuid(uid_t);
int symlink(const char *, const char *);








# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 1 3 4
# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 3 4



int pselect(int, fd_set * restrict, fd_set * restrict,
    fd_set * restrict, const struct timespec * restrict,
    const sigset_t * restrict)




__asm("_" "pselect" "$1050")




;


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_select.h" 1 3 4
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_select.h" 3 4
int select(int, fd_set * restrict, fd_set * restrict,
    fd_set * restrict, struct timeval * restrict)





__asm("_" "select" "$1050")




;
# 130 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4


# 636 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uuid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uuid_t.h" 3 4
typedef __darwin_uuid_t uuid_t;
# 640 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 2 3 4


void _Exit(int) __attribute__((__noreturn__));
int accessx_np(const struct accessx_descriptor *, size_t, int *, uid_t);
int acct(const char *);
int add_profil(char *, size_t, unsigned long, unsigned int) ;
void endusershell(void);
int execvP(const char * __file, const char * __searchpath, char * const * __argv) ;
char *fflagstostr(unsigned long);
int getdomainname(char *, int);
int getgrouplist(const char *, int, int *, int *);




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/gethostuuid.h" 1 3 4
# 39 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/gethostuuid.h" 3 4
int gethostuuid(uuid_t, const struct timespec *) ;
# 656 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 2 3 4




mode_t getmode(const void *, mode_t);
int getpeereid(int, uid_t *, gid_t *);
int getsgroups_np(int *, uuid_t);
char *getusershell(void);
int getwgroups_np(int *, uuid_t);
int initgroups(const char *, int);
int issetugid(void);
char *mkdtemp(char *);
int mknod(const char *, mode_t, dev_t);
int mkpath_np(const char *path, mode_t omode) ;
int mkpathat_np(int dfd, const char *path, mode_t omode)
 
  ;
int mkstemp(char *);
int mkstemps(char *, int);
char *mktemp(char *);
int mkostemp(char *path, int oflags)
 
  ;
int mkostemps(char *path, int slen, int oflags)
 
  ;

int mkstemp_dprotected_np(char *path, int dpclass, int dpflags)
 
  ;
char *mkdtempat_np(int dfd, char *path)
 
  ;
int mkstempsat_np(int dfd, char *path, int slen)
 
  ;
int mkostempsat_np(int dfd, char *path, int slen, int oflags)
 
  ;
int nfssvc(int, void *);
int profil(char *, size_t, unsigned long, unsigned int);

__attribute__((__deprecated__("Use of per-thread security contexts is error-prone and discouraged.")))
int pthread_setugid_np(uid_t, gid_t);
int pthread_getugid_np( uid_t *, gid_t *);

int reboot(int);
int revoke(const char *);

__attribute__((__deprecated__)) int rcmd(char **, int, const char *, const char *, const char *, int *);
__attribute__((__deprecated__)) int rcmd_af(char **, int, const char *, const char *, const char *, int *,
  int);
__attribute__((__deprecated__)) int rresvport(int *);
__attribute__((__deprecated__)) int rresvport_af(int *, int);
__attribute__((__deprecated__)) int iruserok(unsigned long, int, const char *, const char *);
__attribute__((__deprecated__)) int iruserok_sa(const void *, int, int, const char *, const char *);
__attribute__((__deprecated__)) int ruserok(const char *, int, const char *, const char *);

int setdomainname(const char *, int);
int setgroups(int, const gid_t *);
void sethostid(long);
int sethostname(const char *, int);

void setkey(const char *) __asm("_" "setkey" );



int setlogin(const char *);
void *setmode(const char *) __asm("_" "setmode" );
int setrgid(gid_t);
int setruid(uid_t);
int setsgroups_np(int, const uuid_t);
void setusershell(void);
int setwgroups_np(int, const uuid_t);
int strtofflags(char **, unsigned long *, unsigned long *);
int swapon(const char *);
int ttyslot(void);
int undelete(const char *);
int unwhiteout(const char *);
void *valloc(size_t);






int syscall(int, ...);

extern char *suboptarg;
int getsubopt(char **, char * const *, char **);



int fgetattrlist(int,void*,void*,size_t,unsigned int) ;
int fsetattrlist(int,void*,void*,size_t,unsigned int) ;
int getattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "getattrlist" );
int setattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "setattrlist" );
int exchangedata(const char*,const char*,unsigned int) ;
int getdirentriesattr(int,void*,void*,size_t,unsigned int*,unsigned int*,unsigned int*,unsigned int) ;
# 769 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4
struct fssearchblock;
struct searchstate;

int searchfs(const char *, struct fssearchblock *, unsigned long *, unsigned int, unsigned int, struct searchstate *) ;
int fsctl(const char *,unsigned long,void*,unsigned int);
int ffsctl(int,unsigned long,void*,unsigned int) ;




int fsync_volume_np(int, int) ;
int sync_volume_np(const char *, int) ;

extern int optreset;


# 395 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 1 3 4
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timeval64.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timeval64.h" 3 4
struct timeval64 {
 __int64_t tv_sec;
 __int64_t tv_usec;
};
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 2 3 4
# 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 3 4
struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
# 129 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 3 4
struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 172 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 3 4
struct clockinfo {
 int hz;
 int tick;
 int tickadj;
 int stathz;
 int profhz;
};





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 1 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 3 4
struct tm {
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
 long tm_gmtoff;
 char *tm_zone;
};
# 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 3 4
extern char *tzname[];


extern int getdate_err;

extern long timezone __asm("_" "timezone" );

extern int daylight;


char *asctime(const struct tm *);
clock_t clock(void) __asm("_" "clock" );
char *ctime(const time_t *);
double difftime(time_t, time_t);
struct tm *getdate(const char *);
struct tm *gmtime(const time_t *);
struct tm *localtime(const time_t *);
time_t mktime(struct tm *) __asm("_" "mktime" );
size_t strftime(char * restrict, size_t, const char * restrict, const struct tm * restrict) __asm("_" "strftime" );
char *strptime(const char * restrict, const char * restrict, struct tm * restrict) __asm("_" "strptime" );
time_t time(time_t *);


void tzset(void);



char *asctime_r(const struct tm * restrict, char * restrict);
char *ctime_r(const time_t *, char *);
struct tm *gmtime_r(const time_t * restrict, struct tm * restrict);
struct tm *localtime_r(const time_t * restrict, struct tm * restrict);


time_t posix2time(time_t);



void tzsetwall(void);
time_t time2posix(time_t);
time_t timelocal(struct tm * const);
time_t timegm(struct tm * const);



int nanosleep(const struct timespec *__rqtp, struct timespec *__rmtp) __asm("_" "nanosleep" );
# 153 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 3 4
typedef enum {
_CLOCK_REALTIME = 0,

_CLOCK_MONOTONIC = 6,


_CLOCK_MONOTONIC_RAW = 4,

_CLOCK_MONOTONIC_RAW_APPROX = 5,

_CLOCK_UPTIME_RAW = 8,

_CLOCK_UPTIME_RAW_APPROX = 9,


_CLOCK_PROCESS_CPUTIME_ID = 12,

_CLOCK_THREAD_CPUTIME_ID = 16

} clockid_t;


int clock_getres(clockid_t __clock_id, struct timespec *__res);


int clock_gettime(clockid_t __clock_id, struct timespec *__tp);



__uint64_t clock_gettime_nsec_np(clockid_t __clock_id);




int clock_settime(clockid_t __clock_id, const struct timespec *__tp);
# 198 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 3 4

int timespec_get(struct timespec *ts, int base);



# 185 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 2 3 4





int adjtime(const struct timeval *, struct timeval *);
int futimes(int, const struct timeval *);
int lutimes(const char *, const struct timeval *) ;
int settimeofday(const struct timeval *, const struct timezone *);


int getitimer(int, struct itimerval *);
int gettimeofday(struct timeval * restrict, void * restrict);



int setitimer(int, const struct itimerval * restrict,
    struct itimerval * restrict);
int utimes(const char *, const struct timeval *);


# 396 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 570 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
typedef enum {
 R_SYS_ARCH_NONE = 0,
 R_SYS_ARCH_X86,
 R_SYS_ARCH_ARM,
 R_SYS_ARCH_PPC,
 R_SYS_ARCH_M68K,
 R_SYS_ARCH_JAVA,
 R_SYS_ARCH_MIPS,
 R_SYS_ARCH_SPARC,
 R_SYS_ARCH_XAP,
 R_SYS_ARCH_MSIL,
 R_SYS_ARCH_OBJD,
 R_SYS_ARCH_BF,
 R_SYS_ARCH_SH,
 R_SYS_ARCH_AVR,
 R_SYS_ARCH_DALVIK,
 R_SYS_ARCH_Z80,
 R_SYS_ARCH_ARC,
 R_SYS_ARCH_I8080,
 R_SYS_ARCH_RAR,
 R_SYS_ARCH_8051,
 R_SYS_ARCH_TMS320,
 R_SYS_ARCH_EBC,
 R_SYS_ARCH_H8300,
 R_SYS_ARCH_CR16,
 R_SYS_ARCH_V850,
 R_SYS_ARCH_S390,
 R_SYS_ARCH_XCORE,
 R_SYS_ARCH_PROPELLER,
 R_SYS_ARCH_MSP430,
 R_SYS_ARCH_CRIS,
 R_SYS_ARCH_HPPA,
 R_SYS_ARCH_V810,
 R_SYS_ARCH_LM32,
 R_SYS_ARCH_RISCV
} RSysArch;
# 654 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
static inline void r_run_call1(void *fcn, void *arg1) {
 ((void (*)(void *))(fcn))(arg1);
}

static inline void r_run_call2(void *fcn, void *arg1, void *arg2) {
 ((void (*)(void *, void *))(fcn))(arg1, arg2);
}

static inline void r_run_call3(void *fcn, void *arg1, void *arg2, void *arg3) {
 ((void (*)(void *, void *, void *))(fcn))(arg1, arg2, arg3);
}

static inline void r_run_call4(void *fcn, void *arg1, void *arg2, void *arg3, void *arg4) {
 ((void (*)(void *, void *, void *, void *))(fcn))(arg1, arg2, arg3, arg4);
}

static inline void r_run_call5(void *fcn, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5) {
 ((void (*)(void *, void *, void *, void *, void *))(fcn))(arg1, arg2, arg3, arg4, arg5);
}

static inline void r_run_call6(void *fcn, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5,
 void *arg6) {
 ((void (*)(void *, void *, void *, void *, void *, void *))(fcn))
  (arg1, arg2, arg3, arg4, arg5, arg6);
}

static inline void r_run_call7(void *fcn, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5,
 void *arg6, void *arg7) {
 ((void (*)(void *, void *, void *, void *, void *, void *, void *))(fcn))
  (arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

static inline void r_run_call8(void *fcn, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5,
 void *arg6, void *arg7, void *arg8) {
 ((void (*)(void *, void *, void *, void *, void *, void *, void *, void *))(fcn))
  (arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

static inline void r_run_call9(void *fcn, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5,
 void *arg6, void *arg7, void *arg8, void *arg9) {
 ((void (*)(void *, void *, void *, void *, void *, void *, void *, void *, void *))(fcn))
  (arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

static inline void r_run_call10(void *fcn, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5,
 void *arg6, void *arg7, void *arg8, void *arg9, void *arg10) {
 ((void (*)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *))(fcn))
  (arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}
# 713 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
typedef int RRef;
# 30 "project/radare2/libr/asm/arch/hppa/gnu/hppa-dis.c" 2




# 33 "project/radare2/libr/asm/arch/hppa/gnu/hppa-dis.c"
static const char *const reg_names[] =
{
  "flags", "r1", "rp", "r3", "r4", "r5", "r6", "r7", "r8", "r9",
  "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19",
  "r20", "r21", "r22", "r23", "r24", "r25", "r26", "dp", "ret0", "ret1",
  "sp", "r31"
};



static const char *const fp_reg_names[] =
{
  "fpsr", "fpe2", "fpe4", "fpe6",
  "fr4", "fr5", "fr6", "fr7", "fr8",
  "fr9", "fr10", "fr11", "fr12", "fr13", "fr14", "fr15",
  "fr16", "fr17", "fr18", "fr19", "fr20", "fr21", "fr22", "fr23",
  "fr24", "fr25", "fr26", "fr27", "fr28", "fr29", "fr30", "fr31"
};

typedef unsigned int CORE_ADDR;
# 74 "project/radare2/libr/asm/arch/hppa/gnu/hppa-dis.c"
static const char *const control_reg[] =
{
  "rctr", "cr1", "cr2", "cr3", "cr4", "cr5", "cr6", "cr7",
  "pidr1", "pidr2", "ccr", "sar", "pidr3", "pidr4",
  "iva", "eiem", "itmr", "pcsq", "pcoq", "iir", "isr",
  "ior", "ipsw", "eirr", "tr0", "tr1", "tr2", "tr3",
  "tr4", "tr5", "tr6", "tr7"
};

static const char *const compare_cond_names[] =
{
  "", ",=", ",<", ",<=", ",<<", ",<<=", ",sv", ",od",
  ",tr", ",<>", ",>=", ",>", ",>>=", ",>>", ",nsv", ",ev"
};
static const char *const compare_cond_64_names[] =
{
  ",*", ",*=", ",*<", ",*<=", ",*<<", ",*<<=", ",*sv", ",*od",
  ",*tr", ",*<>", ",*>=", ",*>", ",*>>=", ",*>>", ",*nsv", ",*ev"
};
static const char *const cmpib_cond_64_names[] =
{
  ",*<<", ",*=", ",*<", ",*<=", ",*>>=", ",*<>", ",*>=", ",*>"
};
static const char *const add_cond_names[] =
{
  "", ",=", ",<", ",<=", ",nuv", ",znv", ",sv", ",od",
  ",tr", ",<>", ",>=", ",>", ",uv", ",vnz", ",nsv", ",ev"
};
static const char *const add_cond_64_names[] =
{
  ",*", ",*=", ",*<", ",*<=", ",*nuv", ",*znv", ",*sv", ",*od",
  ",*tr", ",*<>", ",*>=", ",*>", ",*uv", ",*vnz", ",*nsv", ",*ev"
};
static const char *const wide_add_cond_names[] =
{
  "", ",=", ",<", ",<=", ",nuv", ",*=", ",*<", ",*<=",
  ",tr", ",<>", ",>=", ",>", ",uv", ",*<>", ",*>=", ",*>"
};
static const char *const logical_cond_names[] =
{
  "", ",=", ",<", ",<=", 0, 0, 0, ",od",
  ",tr", ",<>", ",>=", ",>", 0, 0, 0, ",ev"};
static const char *const logical_cond_64_names[] =
{
  ",*", ",*=", ",*<", ",*<=", 0, 0, 0, ",*od",
  ",*tr", ",*<>", ",*>=", ",*>", 0, 0, 0, ",*ev"};
static const char *const unit_cond_names[] =
{
  "", ",swz", ",sbz", ",shz", ",sdc", ",swc", ",sbc", ",shc",
  ",tr", ",nwz", ",nbz", ",nhz", ",ndc", ",nwc", ",nbc", ",nhc"
};
static const char *const unit_cond_64_names[] =
{
  ",*", ",*swz", ",*sbz", ",*shz", ",*sdc", ",*swc", ",*sbc", ",*shc",
  ",*tr", ",*nwz", ",*nbz", ",*nhz", ",*ndc", ",*nwc", ",*nbc", ",*nhc"
};
static const char *const shift_cond_names[] =
{
  "", ",=", ",<", ",od", ",tr", ",<>", ",>=", ",ev"
};
static const char *const shift_cond_64_names[] =
{
  ",*", ",*=", ",*<", ",*od", ",*tr", ",*<>", ",*>=", ",*ev"
};
static const char *const bb_cond_64_names[] =
{
  ",*<", ",*>="
};
static const char *const index_compl_names[] = {"", ",m", ",s", ",sm"};
static const char *const short_ldst_compl_names[] = {"", ",ma", "", ",mb"};
static const char *const short_bytes_compl_names[] =
{
  "", ",b,m", ",e", ",e,m"
};
static const char *const float_format_names[] = {",sgl", ",dbl", "", ",quad"};
static const char *const fcnv_fixed_names[] = {",w", ",dw", "", ",qw"};
static const char *const fcnv_ufixed_names[] = {",uw", ",udw", "", ",uqw"};
static const char *const float_comp_names[] =
{
  ",false?", ",false", ",?", ",!<=>", ",=", ",=t", ",?=", ",!<>",
  ",!?>=", ",<", ",?<", ",!>=", ",!?>", ",<=", ",?<=", ",!>",
  ",!?<=", ",>", ",?>", ",!<=", ",!?<", ",>=", ",?>=", ",!<",
  ",!?=", ",<>", ",!=", ",!=t", ",!?", ",<=>", ",true?", ",true"
};
static const char *const signed_unsigned_names[] = {",u", ",s"};
static const char *const mix_half_names[] = {",l", ",r"};
static const char *const saturation_names[] = {",us", ",ss", 0, ""};
static const char *const read_write_names[] = {",r", ",w"};
static const char *const add_compl_names[] = { 0, "", ",l", ",tsv" };
# 177 "project/radare2/libr/asm/arch/hppa/gnu/hppa-dis.c"
static void
fput_reg (unsigned reg, disassemble_info *info)
{
  (*info->fprintf_func) (info->stream, "%s", reg ? reg_names[reg] : "r0");
}

static void
fput_fp_reg (unsigned reg, disassemble_info *info)
{
  (*info->fprintf_func) (info->stream, "%s", reg ? fp_reg_names[reg] : "fr0");
}

static void
fput_fp_reg_r (unsigned reg, disassemble_info *info)
{

  if (reg < 4) {
   (*info->fprintf_func) (info->stream, "fpe%d", reg * 2 + 1);
  } else {
   (*info->fprintf_func) (info->stream, "%sR", fp_reg_names[reg]);
  }
}

static void
fput_creg (unsigned reg, disassemble_info *info)
{
  (*info->fprintf_func) (info->stream, "%s", control_reg[reg]);
}



static void
fput_const (unsigned num, disassemble_info *info)
{
 if ((int)num < 0) {
  (*info->fprintf_func) (info->stream, "-%x", -(int)num);
 } else {
  (*info->fprintf_func) (info->stream, "%x", num);
 }
}





static int
extract_3 (unsigned word)
{
  return ((word) >> (31 - (18)) & ((1 << ((18) - (18) + 1)) - 1)) << 2 | ((word) >> (31 - (17)) & ((1 << ((17) - (16) + 1)) - 1));
}

static int
extract_5_load (unsigned word)
{
  return low_sign_extend (word >> 16 & 0x1f, 5);
}



static int
extract_5_store (unsigned word)
{
  return low_sign_extend (word & 0x1f, 5);
}



static unsigned
extract_5r_store (unsigned word)
{
  return (word & 0x1f);
}



static unsigned
extract_5R_store (unsigned word)
{
  return (word >> 16 & 0x1f);
}



static unsigned
extract_10U_store (unsigned word)
{
  return (word >> 16 & 0x3ff);
}



static unsigned
extract_5Q_store (unsigned word)
{
  return (word >> 21 & 0x1f);
}



static int
extract_11 (unsigned word)
{
  return low_sign_extend (word & 0x7ff, 11);
}



static int
extract_14 (unsigned word)
{
  return low_sign_extend (word & 0x3fff, 14);
}



static int
extract_16 (unsigned word)
{
  int m15, m0, m1;

  m0 = ((word) >> (31 - (16)) & ((1 << ((16) - (16) + 1)) - 1));
  m1 = ((word) >> (31 - (17)) & ((1 << ((17) - (17) + 1)) - 1));
  m15 = ((word) >> (31 - (31)) & ((1 << ((31) - (31) + 1)) - 1));
  word = (word >> 1) & 0x1fff;
  word = word | (m15 << 15) | ((m15 ^ m0) << 14) | ((m15 ^ m1) << 13);
  return sign_extend (word, 16);
}



static int
extract_21 (unsigned word)
{
  int val;

  word &= 0x1fffff;
  word <<= 11;
  val = ((word) >> (31 - (20)) & ((1 << ((20) - (20) + 1)) - 1));
  val <<= 11;
  val |= ((word) >> (31 - (19)) & ((1 << ((19) - (9) + 1)) - 1));
  val <<= 2;
  val |= ((word) >> (31 - (6)) & ((1 << ((6) - (5) + 1)) - 1));
  val <<= 5;
  val |= ((word) >> (31 - (4)) & ((1 << ((4) - (0) + 1)) - 1));
  val <<= 2;
  val |= ((word) >> (31 - (8)) & ((1 << ((8) - (7) + 1)) - 1));
  return sign_extend (val, 21) << 11;
}



static int
extract_12 (unsigned word)
{
  return sign_extend (((word) >> (31 - (28)) & ((1 << ((28) - (19) + 1)) - 1))
        | ((word) >> (31 - (29)) & ((1 << ((29) - (29) + 1)) - 1)) << 10
        | (word & 0x1) << 11, 12) << 2;
}




static int
extract_17 (unsigned word)
{
  return sign_extend (((word) >> (31 - (28)) & ((1 << ((28) - (19) + 1)) - 1))
        | ((word) >> (31 - (29)) & ((1 << ((29) - (29) + 1)) - 1)) << 10
        | ((word) >> (31 - (15)) & ((1 << ((15) - (11) + 1)) - 1)) << 11
        | (word & 0x1) << 16, 17) << 2;
}

static int
extract_22 (unsigned word)
{
  return sign_extend (((word) >> (31 - (28)) & ((1 << ((28) - (19) + 1)) - 1))
        | ((word) >> (31 - (29)) & ((1 << ((29) - (29) + 1)) - 1)) << 10
        | ((word) >> (31 - (15)) & ((1 << ((15) - (11) + 1)) - 1)) << 11
        | ((word) >> (31 - (10)) & ((1 << ((10) - (6) + 1)) - 1)) << 16
        | (word & 0x1) << 21, 22) << 2;
}



int
print_insn_hppa (bfd_vma memaddr, disassemble_info *info)
{
  bfd_byte buffer[4];
  unsigned int insn, i;

  {
    int status =
      (*info->read_memory_func) (memaddr, buffer, sizeof (buffer), info);
    if (status != 0)
      {
 (*info->memory_error_func) (status, memaddr, info);
 return -1;
      }
  }

  insn = bfd_getb32 (buffer);

  for (i = 0; i < 
# 378 "project/radare2/libr/asm/arch/hppa/gnu/hppa-dis.c" 3 4
                 ((sizeof pa_opcodes)/(sizeof pa_opcodes[0]))
# 378 "project/radare2/libr/asm/arch/hppa/gnu/hppa-dis.c"
                           ; ++i)
    {
      const struct pa_opcode *opcode = &pa_opcodes[i];

      if ((insn & opcode->mask) == opcode->match)
 {
   const char *s;




   (*info->fprintf_func) (info->stream, "%s", opcode->name);

   if (!strchr ("cfCY?-+nHNZFIuv{", opcode->args[0])) {
    (*info->fprintf_func) (info->stream, " ");
   }
   for (s = opcode->args; *s != '\0'; ++s)
     {
       switch (*s)
  {
  case 'x':
    fput_reg (((insn) >> (31 - (15)) & ((1 << ((15) - (11) + 1)) - 1)), info);
    break;
  case 'a':
  case 'b':
    fput_reg (((insn) >> (31 - (10)) & ((1 << ((10) - (6) + 1)) - 1)), info);
    break;
  case '^':
    fput_creg (((insn) >> (31 - (10)) & ((1 << ((10) - (6) + 1)) - 1)), info);
    break;
  case 't':
    fput_reg (((insn) >> (31 - (31)) & ((1 << ((31) - (27) + 1)) - 1)), info);
    break;


  case 'f':
    switch (*++s)
      {
      case 't':
        fput_fp_reg (((insn) >> (31 - (31)) & ((1 << ((31) - (27) + 1)) - 1)), info);
        break;
      case 'T':
       if (((insn) >> (31 - (25)) & ((1 << ((25) - (25) + 1)) - 1))) {
        fput_fp_reg_r (((insn) >> (31 - (31)) & ((1 << ((31) - (27) + 1)) - 1)), info);
       } else {
        fput_fp_reg (((insn) >> (31 - (31)) & ((1 << ((31) - (27) + 1)) - 1)), info);
       }
       break;
      case 'a':
       if (((insn) >> (31 - (25)) & ((1 << ((25) - (25) + 1)) - 1))) {
        fput_fp_reg_r (((insn) >> (31 - (10)) & ((1 << ((10) - (6) + 1)) - 1)), info);
       } else {
        fput_fp_reg (((insn) >> (31 - (10)) & ((1 << ((10) - (6) + 1)) - 1)), info);
       }
       break;





      case 'X':
        (*info->fprintf_func) (info->stream, "%s", " ");


      case 'A':
       if (((insn) >> (31 - (24)) & ((1 << ((24) - (24) + 1)) - 1))) {
        fput_fp_reg_r (((insn) >> (31 - (10)) & ((1 << ((10) - (6) + 1)) - 1)), info);
       } else {
        fput_fp_reg (((insn) >> (31 - (10)) & ((1 << ((10) - (6) + 1)) - 1)), info);
       }
       break;
      case 'b':
       if (((insn) >> (31 - (25)) & ((1 << ((25) - (25) + 1)) - 1))) {
        fput_fp_reg_r (((insn) >> (31 - (15)) & ((1 << ((15) - (11) + 1)) - 1)), info);
       } else {
        fput_fp_reg (((insn) >> (31 - (15)) & ((1 << ((15) - (11) + 1)) - 1)), info);
       }
       break;
      case 'B':
       if (((insn) >> (31 - (19)) & ((1 << ((19) - (19) + 1)) - 1))) {
        fput_fp_reg_r (((insn) >> (31 - (15)) & ((1 << ((15) - (11) + 1)) - 1)), info);
       } else {
        fput_fp_reg (((insn) >> (31 - (15)) & ((1 << ((15) - (11) + 1)) - 1)), info);
       }
       break;
      case 'C':
        {
   int reg = ((insn) >> (31 - (22)) & ((1 << ((22) - (21) + 1)) - 1));
   reg |= ((insn) >> (31 - (18)) & ((1 << ((18) - (16) + 1)) - 1)) << 2;
   if (((insn) >> (31 - (23)) & ((1 << ((23) - (23) + 1)) - 1)) != 0) {
    fput_fp_reg_r (reg, info);
   } else {
    fput_fp_reg (reg, info);
   }
   break;
        }
      case 'i':
        {
   int reg = ((insn) >> (31 - (10)) & ((1 << ((10) - (6) + 1)) - 1));

   reg |= (((insn) >> (31 - (26)) & ((1 << ((26) - (26) + 1)) - 1)) << 4);
   fput_fp_reg (reg, info);
   break;
        }
      case 'j':
        {
   int reg = ((insn) >> (31 - (15)) & ((1 << ((15) - (11) + 1)) - 1));

   reg |= (((insn) >> (31 - (26)) & ((1 << ((26) - (26) + 1)) - 1)) << 4);
   fput_fp_reg (reg, info);
   break;
        }
      case 'k':
        {
   int reg = ((insn) >> (31 - (31)) & ((1 << ((31) - (27) + 1)) - 1));

   reg |= (((insn) >> (31 - (26)) & ((1 << ((26) - (26) + 1)) - 1)) << 4);
   fput_fp_reg (reg, info);
   break;
        }
      case 'l':
        {
   int reg = ((insn) >> (31 - (25)) & ((1 << ((25) - (21) + 1)) - 1));

   reg |= (((insn) >> (31 - (26)) & ((1 << ((26) - (26) + 1)) - 1)) << 4);
   fput_fp_reg (reg, info);
   break;
        }
      case 'm':
        {
   int reg = ((insn) >> (31 - (20)) & ((1 << ((20) - (16) + 1)) - 1));

   reg |= (((insn) >> (31 - (26)) & ((1 << ((26) - (26) + 1)) - 1)) << 4);
   fput_fp_reg (reg, info);
   break;
        }





      case 'E':
        (*info->fprintf_func) (info->stream, "%s", " ");


      case 'e':
       if (((insn) >> (31 - (30)) & ((1 << ((30) - (30) + 1)) - 1))) {
        fput_fp_reg_r (((insn) >> (31 - (15)) & ((1 << ((15) - (11) + 1)) - 1)), info);
       } else {
        fput_fp_reg (((insn) >> (31 - (15)) & ((1 << ((15) - (11) + 1)) - 1)), info);
       }
       break;
      case 'x':
        fput_fp_reg (((insn) >> (31 - (15)) & ((1 << ((15) - (11) + 1)) - 1)), info);
        break;
      }
    break;

  case '5':
    fput_const (extract_5_load (insn), info);
    break;
  case 's':
    {
      int space = ((insn) >> (31 - (17)) & ((1 << ((17) - (16) + 1)) - 1));

      if (space != 0) {
       (*info->fprintf_func) (info->stream, "sr%d", space);
      }
    }
    break;

  case 'S':
    (*info->fprintf_func) (info->stream, "sr%d",
      extract_3 (insn));
    break;


  case 'c':
    switch (*++s)
      {
      case 'x':
        (*info->fprintf_func)
   (info->stream, "%s",
    index_compl_names[(((insn) >> (31 - (26)) & ((1 << ((26) - (26) + 1)) - 1)) | ((insn) >> (31 - (18)) & ((1 << ((18) - (18) + 1)) - 1)) << 1)]);
        break;
      case 'X':
        (*info->fprintf_func)
   (info->stream, "%s ",
    index_compl_names[(((insn) >> (31 - (26)) & ((1 << ((26) - (26) + 1)) - 1)) | ((insn) >> (31 - (18)) & ((1 << ((18) - (18) + 1)) - 1)) << 1)]);
        break;
      case 'm':
        (*info->fprintf_func)
   (info->stream, "%s",
    short_ldst_compl_names[(((insn) >> (31 - (26)) & ((1 << ((26) - (26) + 1)) - 1)) | ((insn) >> (31 - (18)) & ((1 << ((18) - (18) + 1)) - 1)) << 1)]);
        break;
      case 'M':
        (*info->fprintf_func)
   (info->stream, "%s ",
    short_ldst_compl_names[(((insn) >> (31 - (26)) & ((1 << ((26) - (26) + 1)) - 1)) | ((insn) >> (31 - (18)) & ((1 << ((18) - (18) + 1)) - 1)) << 1)]);
        break;
      case 'A':
        (*info->fprintf_func)
   (info->stream, "%s ",
    short_bytes_compl_names[(((insn) >> (31 - (26)) & ((1 << ((26) - (26) + 1)) - 1)) | ((insn) >> (31 - (18)) & ((1 << ((18) - (18) + 1)) - 1)) << 1)]);
        break;
      case 's':
        (*info->fprintf_func)
   (info->stream, "%s",
    short_bytes_compl_names[(((insn) >> (31 - (26)) & ((1 << ((26) - (26) + 1)) - 1)) | ((insn) >> (31 - (18)) & ((1 << ((18) - (18) + 1)) - 1)) << 1)]);
        break;
      case 'c':
      case 'C':
        switch (((insn) >> (31 - (21)) & ((1 << ((21) - (20) + 1)) - 1)))
   {
   case 1:
     (*info->fprintf_func) (info->stream, ",bc ");
     break;
   case 2:
     (*info->fprintf_func) (info->stream, ",sl ");
     break;
   default:
     (*info->fprintf_func) (info->stream, " ");
   }
        break;
      case 'd':
        switch (((insn) >> (31 - (21)) & ((1 << ((21) - (20) + 1)) - 1)))
   {
   case 1:
     (*info->fprintf_func) (info->stream, ",co ");
     break;
   default:
     (*info->fprintf_func) (info->stream, " ");
   }
        break;
      case 'o':
        (*info->fprintf_func) (info->stream, ",o");
        break;
      case 'g':
        (*info->fprintf_func) (info->stream, ",gate");
        break;
      case 'p':
        (*info->fprintf_func) (info->stream, ",l,push");
        break;
      case 'P':
        (*info->fprintf_func) (info->stream, ",pop");
        break;
      case 'l':
      case 'L':
        (*info->fprintf_func) (info->stream, ",l");
        break;
      case 'w':
        (*info->fprintf_func)
   (info->stream, "%s ",
    read_write_names[((insn) >> (31 - (25)) & ((1 << ((25) - (25) + 1)) - 1))]);
        break;
      case 'W':
        (*info->fprintf_func) (info->stream, ",w ");
        break;
      case 'r':
       if (((insn) >> (31 - (26)) & ((1 << ((26) - (23) + 1)) - 1)) == 5) {
        (*info->fprintf_func) (info->stream, ",r");
       }
       break;
      case 'Z':
       if (((insn) >> (31 - (26)) & ((1 << ((26) - (26) + 1)) - 1))) {
        (*info->fprintf_func) (info->stream, ",m ");
       } else {
        (*info->fprintf_func) (info->stream, " ");
       }
       break;
      case 'i':
       if (((insn) >> (31 - (25)) & ((1 << ((25) - (25) + 1)) - 1))) {
        (*info->fprintf_func) (info->stream, ",i");
       }
       break;
      case 'z':
       if (!((insn) >> (31 - (21)) & ((1 << ((21) - (21) + 1)) - 1))) {
        (*info->fprintf_func) (info->stream, ",z");
       }
       break;
      case 'a':
        (*info->fprintf_func)
   (info->stream, "%s",
    add_compl_names[((insn) >> (31 - (21)) & ((1 << ((21) - (20) + 1)) - 1))]);
        break;
      case 'Y':
        (*info->fprintf_func)
   (info->stream, ",dc%s",
    add_compl_names[((insn) >> (31 - (21)) & ((1 << ((21) - (20) + 1)) - 1))]);
        break;
      case 'y':
        (*info->fprintf_func)
   (info->stream, ",c%s",
    add_compl_names[((insn) >> (31 - (21)) & ((1 << ((21) - (20) + 1)) - 1))]);
        break;
      case 'v':
       if (((insn) >> (31 - (20)) & ((1 << ((20) - (20) + 1)) - 1))) {
        (*info->fprintf_func) (info->stream, ",tsv");
       }
       break;
      case 't':
        (*info->fprintf_func) (info->stream, ",tc");
        if (((insn) >> (31 - (20)) & ((1 << ((20) - (20) + 1)) - 1))) {
         (*info->fprintf_func) (info->stream, ",tsv");
        }
        break;
      case 'B':
        (*info->fprintf_func) (info->stream, ",db");
        if (((insn) >> (31 - (20)) & ((1 << ((20) - (20) + 1)) - 1))) {
         (*info->fprintf_func) (info->stream, ",tsv");
        }
        break;
      case 'b':
        (*info->fprintf_func) (info->stream, ",b");
        if (((insn) >> (31 - (20)) & ((1 << ((20) - (20) + 1)) - 1))) {
         (*info->fprintf_func) (info->stream, ",tsv");
        }
        break;
      case 'T':
       if (((insn) >> (31 - (25)) & ((1 << ((25) - (25) + 1)) - 1))) {
        (*info->fprintf_func) (info->stream, ",tc");
       }
       break;
      case 'S':

        if (*(s + 1) == '?') {
         (*info->fprintf_func) (info->stream, "%s",
          signed_unsigned_names[((insn) >> (31 - (21)) & ((1 << ((21) - (21) + 1)) - 1))]);
        } else {
         (*info->fprintf_func) (info->stream, "%s ",
          signed_unsigned_names[((insn) >> (31 - (21)) & ((1 << ((21) - (21) + 1)) - 1))]);
        }
        break;
      case 'h':
        (*info->fprintf_func)
   (info->stream, "%s",
    mix_half_names[((insn) >> (31 - (17)) & ((1 << ((17) - (17) + 1)) - 1))]);
        break;
      case 'H':
        (*info->fprintf_func)
   (info->stream, "%s ",
    saturation_names[((insn) >> (31 - (25)) & ((1 << ((25) - (24) + 1)) - 1))]);
        break;
      case '*':
        (*info->fprintf_func)
   (info->stream, ",%d%d%d%d ",
    ((insn) >> (31 - (18)) & ((1 << ((18) - (17) + 1)) - 1)), ((insn) >> (31 - (21)) & ((1 << ((21) - (20) + 1)) - 1)),
    ((insn) >> (31 - (23)) & ((1 << ((23) - (22) + 1)) - 1)), ((insn) >> (31 - (25)) & ((1 << ((25) - (24) + 1)) - 1)));
        break;

      case 'q':
        {
   int m, a;

   m = ((insn) >> (31 - (28)) & ((1 << ((28) - (28) + 1)) - 1));
   a = ((insn) >> (31 - (29)) & ((1 << ((29) - (29) + 1)) - 1));

   if (m && !a) {
    (*info->fprintf_func) (info->stream, "%s", ",ma ");
   } else if (m && a) {
    (*info->fprintf_func) (info->stream, "%s", ",mb ");
   } else {
    (*info->fprintf_func) (info->stream, "%s", " ");
   }
   break;
        }

      case 'J':
        {
   int opc = ((insn) >> (31 - (5)) & ((1 << ((5) - (0) + 1)) - 1));

   if (opc == 0x16 || opc == 0x1e)
     {
    if (((insn) >> (31 - (29)) & ((1 << ((29) - (29) + 1)) - 1)) == 0) {
     (*info->fprintf_func) (info->stream, "%s", ",ma ");
    } else {
     (*info->fprintf_func) (info->stream, "%s", ",mb ");
    }
   } else {
    (*info->fprintf_func) (info->stream, "%s", " ");
   }
   break;
        }

      case 'e':
        {
   int opc = ((insn) >> (31 - (5)) & ((1 << ((5) - (0) + 1)) - 1));

   if (opc == 0x13 || opc == 0x1b)
     {
    if (((insn) >> (31 - (18)) & ((1 << ((18) - (18) + 1)) - 1)) == 1) {
     (*info->fprintf_func) (info->stream, "%s", ",mb ");
    } else {
     (*info->fprintf_func) (info->stream, "%s", ",ma ");
    }
     }
   else if (opc == 0x17 || opc == 0x1f)
     {
      if (((insn) >> (31 - (31)) & ((1 << ((31) - (31) + 1)) - 1)) == 1) {
       (*info->fprintf_func) (info->stream, "%s", ",ma ");
      } else {
       (*info->fprintf_func) (info->stream, "%s", ",mb ");
      }
     } else {
      (*info->fprintf_func) (info->stream, "%s", " ");
     }

     break;
        }
      }
    break;


  case '?':
    {
      s++;
      switch (*s)
        {
        case 'f':
   (*info->fprintf_func)
     (info->stream, "%s ",
      float_comp_names[((insn) >> (31 - (31)) & ((1 << ((31) - (27) + 1)) - 1))]);
   break;





        case 't':
   (*info->fprintf_func) (info->stream, "%s", compare_cond_names[((insn) >> (31 - (18)) & ((1 << ((18) - (16) + 1)) - 1))])
                                                         ;
   break;
        case 'n':
   (*info->fprintf_func) (info->stream, "%s", compare_cond_names[((insn) >> (31 - (18)) & ((1 << ((18) - (16) + 1)) - 1)) + ((insn) >> (31 - (4)) & ((1 << ((4) - (4) + 1)) - 1)) * 8])


           ;
   break;
        case 'N':
   (*info->fprintf_func) (info->stream, "%s", compare_cond_64_names[((insn) >> (31 - (18)) & ((1 << ((18) - (16) + 1)) - 1)) + ((insn) >> (31 - (2)) & ((1 << ((2) - (2) + 1)) - 1)) * 8])


           ;
   break;
        case 'Q':
   (*info->fprintf_func) (info->stream, "%s", cmpib_cond_64_names[((insn) >> (31 - (18)) & ((1 << ((18) - (16) + 1)) - 1))])

           ;
   break;
        case '@':
   (*info->fprintf_func) (info->stream, "%s", add_cond_names[((insn) >> (31 - (18)) & ((1 << ((18) - (16) + 1)) - 1)) + ((insn) >> (31 - (4)) & ((1 << ((4) - (4) + 1)) - 1)) * 8])


           ;
   break;
        case 's':
   (*info->fprintf_func)
     (info->stream, "%s ",
      compare_cond_names[((((insn)) >> (31 - (18)) & ((1 << ((18) - (16) + 1)) - 1)) + ((((insn)) >> (31 - (19)) & ((1 << ((19) - (19) + 1)) - 1)) ? 8 : 0))]);
   break;
        case 'S':
   (*info->fprintf_func)
     (info->stream, "%s ",
      compare_cond_64_names[((((insn)) >> (31 - (18)) & ((1 << ((18) - (16) + 1)) - 1)) + ((((insn)) >> (31 - (19)) & ((1 << ((19) - (19) + 1)) - 1)) ? 8 : 0))]);
   break;
        case 'a':
   (*info->fprintf_func)
     (info->stream, "%s ",
      add_cond_names[((((insn)) >> (31 - (18)) & ((1 << ((18) - (16) + 1)) - 1)) + ((((insn)) >> (31 - (19)) & ((1 << ((19) - (19) + 1)) - 1)) ? 8 : 0))]);
   break;
        case 'A':
   (*info->fprintf_func)
     (info->stream, "%s ",
      add_cond_64_names[((((insn)) >> (31 - (18)) & ((1 << ((18) - (16) + 1)) - 1)) + ((((insn)) >> (31 - (19)) & ((1 << ((19) - (19) + 1)) - 1)) ? 8 : 0))]);
   break;
        case 'd':
   (*info->fprintf_func)
     (info->stream, "%s",
      add_cond_names[((insn) >> (31 - (18)) & ((1 << ((18) - (16) + 1)) - 1))]);
   break;

        case 'W':
   (*info->fprintf_func)
     (info->stream, "%s",
      wide_add_cond_names[((insn) >> (31 - (18)) & ((1 << ((18) - (16) + 1)) - 1)) +
            ((insn) >> (31 - (4)) & ((1 << ((4) - (4) + 1)) - 1)) * 8]);
   break;

        case 'l':
   (*info->fprintf_func)
     (info->stream, "%s ",
      logical_cond_names[((((insn)) >> (31 - (18)) & ((1 << ((18) - (16) + 1)) - 1)) + ((((insn)) >> (31 - (19)) & ((1 << ((19) - (19) + 1)) - 1)) ? 8 : 0))]);
   break;
        case 'L':
   (*info->fprintf_func)
     (info->stream, "%s ",
      logical_cond_64_names[((((insn)) >> (31 - (18)) & ((1 << ((18) - (16) + 1)) - 1)) + ((((insn)) >> (31 - (19)) & ((1 << ((19) - (19) + 1)) - 1)) ? 8 : 0))]);
   break;
        case 'u':
   (*info->fprintf_func)
     (info->stream, "%s ",
      unit_cond_names[((((insn)) >> (31 - (18)) & ((1 << ((18) - (16) + 1)) - 1)) + ((((insn)) >> (31 - (19)) & ((1 << ((19) - (19) + 1)) - 1)) ? 8 : 0))]);
   break;
        case 'U':
   (*info->fprintf_func)
     (info->stream, "%s ",
      unit_cond_64_names[((((insn)) >> (31 - (18)) & ((1 << ((18) - (16) + 1)) - 1)) + ((((insn)) >> (31 - (19)) & ((1 << ((19) - (19) + 1)) - 1)) ? 8 : 0))]);
   break;
        case 'y':
        case 'x':
        case 'b':
   (*info->fprintf_func)
     (info->stream, "%s",
      shift_cond_names[((insn) >> (31 - (18)) & ((1 << ((18) - (16) + 1)) - 1))]);



   if (s[1] != 'n') {
    (*info->fprintf_func) (info->stream, " ");
   }
   break;
        case 'X':
   (*info->fprintf_func)
     (info->stream, "%s ",
      shift_cond_64_names[((insn) >> (31 - (18)) & ((1 << ((18) - (16) + 1)) - 1))]);
   break;
        case 'B':
   (*info->fprintf_func)
     (info->stream, "%s",
      bb_cond_64_names[((insn) >> (31 - (16)) & ((1 << ((16) - (16) + 1)) - 1))]);



   if (s[1] != 'n') {
    (*info->fprintf_func) (info->stream, " ");
   }
   break;
        }
      break;
    }

  case 'V':
    fput_const (extract_5_store (insn), info);
    break;
  case 'r':
    fput_const (extract_5r_store (insn), info);
    break;
  case 'R':
    fput_const (extract_5R_store (insn), info);
    break;
  case 'U':
    fput_const (extract_10U_store (insn), info);
    break;
  case 'B':
  case 'Q':
    fput_const (extract_5Q_store (insn), info);
    break;
  case 'i':
    fput_const (extract_11 (insn), info);
    break;
  case 'j':
    fput_const (extract_14 (insn), info);
    break;
  case 'k':
    (*info->fprintf_func) (info->stream, "%s", "L%");
    fput_const (extract_21 (insn), info);
    break;
  case '<':
  case 'l':

    fput_const (extract_16 (insn), info);
    break;
  case 'n':
   if (insn & 0x2) {
    (*info->fprintf_func) (info->stream, ",n ");
   } else {
    (*info->fprintf_func) (info->stream, " ");
   }
   break;
  case 'N':
   if ((insn & 0x20) && s[1]) {
    (*info->fprintf_func) (info->stream, ",n ");
   } else if (insn & 0x20) {
    (*info->fprintf_func) (info->stream, ",n");
   } else if (s[1]) {
    (*info->fprintf_func) (info->stream, " ");
   }
   break;
  case 'w':
    (*info->print_address_func)
      (memaddr + 8 + extract_12 (insn), info);
    break;
  case 'W':

    (*info->print_address_func)
      ((memaddr + 8 + extract_17 (insn)), info);
    break;
  case 'z':



    fput_const (extract_17 (insn), info);
    break;

  case 'Z':

    (*info->fprintf_func) (info->stream, "%s", "r1");
    break;

  case 'Y':

    (*info->fprintf_func) (info->stream, "%s", "sr0,r31");
    break;

  case '@':
    (*info->fprintf_func) (info->stream, "0");
    break;

  case '.':
    (*info->fprintf_func) (info->stream, "%d",
      ((insn) >> (31 - (25)) & ((1 << ((25) - (24) + 1)) - 1)));
    break;
  case '*':
    (*info->fprintf_func) (info->stream, "%d",
      ((insn) >> (31 - (25)) & ((1 << ((25) - (22) + 1)) - 1)));
    break;
  case '!':
    (*info->fprintf_func) (info->stream, "%s", "sar");
    break;
  case 'p':
    (*info->fprintf_func) (info->stream, "%d",
      31 - ((insn) >> (31 - (26)) & ((1 << ((26) - (22) + 1)) - 1)));
    break;
  case '~':
    {
      int num;
      num = ((insn) >> (31 - (20)) & ((1 << ((20) - (20) + 1)) - 1)) << 5;
      num |= ((insn) >> (31 - (26)) & ((1 << ((26) - (22) + 1)) - 1));
      (*info->fprintf_func) (info->stream, "%d", 63 - num);
      break;
    }
  case 'P':
    (*info->fprintf_func) (info->stream, "%d",
      ((insn) >> (31 - (26)) & ((1 << ((26) - (22) + 1)) - 1)));
    break;
  case 'q':
    {
      int num;
      num = ((insn) >> (31 - (20)) & ((1 << ((20) - (20) + 1)) - 1)) << 5;
      num |= ((insn) >> (31 - (26)) & ((1 << ((26) - (22) + 1)) - 1));
      (*info->fprintf_func) (info->stream, "%d", num);
      break;
    }
  case 'T':
    (*info->fprintf_func) (info->stream, "%d",
      32 - ((insn) >> (31 - (31)) & ((1 << ((31) - (27) + 1)) - 1)));
    break;
  case '%':
    {
      int num;
      num = (((insn) >> (31 - (23)) & ((1 << ((23) - (23) + 1)) - 1)) + 1) * 32;
      num -= ((insn) >> (31 - (31)) & ((1 << ((31) - (27) + 1)) - 1));
      (*info->fprintf_func) (info->stream, "%d", num);
      break;
    }
  case '|':
    {
      int num;
      num = (((insn) >> (31 - (19)) & ((1 << ((19) - (19) + 1)) - 1)) + 1) * 32;
      num -= ((insn) >> (31 - (31)) & ((1 << ((31) - (27) + 1)) - 1));
      (*info->fprintf_func) (info->stream, "%d", num);
      break;
    }
  case '$':
    fput_const (((insn) >> (31 - (28)) & ((1 << ((28) - (20) + 1)) - 1)), info);
    break;
  case 'A':
    fput_const (((insn) >> (31 - (18)) & ((1 << ((18) - (6) + 1)) - 1)), info);
    break;
  case 'D':
    fput_const (((insn) >> (31 - (31)) & ((1 << ((31) - (6) + 1)) - 1)), info);
    break;
  case 'v':
    (*info->fprintf_func) (info->stream, ",%d",
      ((insn) >> (31 - (25)) & ((1 << ((25) - (23) + 1)) - 1)));
    break;
  case 'O':
    fput_const ((((insn) >> (31 - (20)) & ((1 << ((20) - (6) + 1)) - 1)) << 5 |
          ((insn) >> (31 - (31)) & ((1 << ((31) - (27) + 1)) - 1))), info);
    break;
  case 'o':
    fput_const (((insn) >> (31 - (20)) & ((1 << ((20) - (6) + 1)) - 1)), info);
    break;
  case '2':
    fput_const ((((insn) >> (31 - (22)) & ((1 << ((22) - (6) + 1)) - 1)) << 5 |
          ((insn) >> (31 - (31)) & ((1 << ((31) - (27) + 1)) - 1))), info);
    break;
  case '1':
    fput_const ((((insn) >> (31 - (20)) & ((1 << ((20) - (11) + 1)) - 1)) << 5 |
          ((insn) >> (31 - (31)) & ((1 << ((31) - (27) + 1)) - 1))), info);
    break;
  case '0':
    fput_const ((((insn) >> (31 - (20)) & ((1 << ((20) - (16) + 1)) - 1)) << 5 |
          ((insn) >> (31 - (31)) & ((1 << ((31) - (27) + 1)) - 1))), info);
    break;
  case 'u':
    (*info->fprintf_func) (info->stream, ",%d",
      ((insn) >> (31 - (25)) & ((1 << ((25) - (23) + 1)) - 1)));
    break;
  case 'F':


    if (s[1] == 'G' || s[1] == '?') {
     (*info->fprintf_func) (info->stream, "%s", float_format_names[((insn) >> (31 - (20)) & ((1 << ((20) - (19) + 1)) - 1))]);
    } else {
     (*info->fprintf_func) (info->stream, "%s ",
      float_format_names[((insn) >> (31 - (20)) & ((1 << ((20) - (19) + 1)) - 1))]);
    }
    break;
  case 'G':
    (*info->fprintf_func)
      (info->stream, "%s ",
       float_format_names[((insn) >> (31 - (18)) & ((1 << ((18) - (17) + 1)) - 1))]);
    break;
  case 'H':
   if (((insn) >> (31 - (26)) & ((1 << ((26) - (26) + 1)) - 1)) == 1) {
    (*info->fprintf_func) (info->stream, "%s ",
     float_format_names[0]);
   } else {
    (*info->fprintf_func) (info->stream, "%s ",
     float_format_names[1]);
   }
   break;
  case 'I':


    if (s[1] == '?') {
     (*info->fprintf_func) (info->stream, "%s", float_format_names[((insn) >> (31 - (20)) & ((1 << ((20) - (20) + 1)) - 1))]);
    } else {
     (*info->fprintf_func) (info->stream, "%s ",
      float_format_names[((insn) >> (31 - (20)) & ((1 << ((20) - (20) + 1)) - 1))]);
    }
    break;

  case 'J':
    fput_const (extract_14 (insn), info);
    break;

  case '#':
    {
      int sign = ((insn) >> (31 - (31)) & ((1 << ((31) - (31) + 1)) - 1));
      int imm10 = ((insn) >> (31 - (27)) & ((1 << ((27) - (18) + 1)) - 1));
      int disp;

      if (sign) {
       disp = (
# 1133 "project/radare2/libr/asm/arch/hppa/gnu/hppa-dis.c" 3 4
              0xFFFFFFFFFFFFFFFFULL 
# 1133 "project/radare2/libr/asm/arch/hppa/gnu/hppa-dis.c"
                       << 10) | imm10;
      } else {
       disp = imm10;
      }

      disp <<= 3;
      fput_const (disp, info);
      break;
    }
  case 'K':
  case 'd':
    {
      int sign = ((insn) >> (31 - (31)) & ((1 << ((31) - (31) + 1)) - 1));
      int imm11 = ((insn) >> (31 - (28)) & ((1 << ((28) - (18) + 1)) - 1));
      int disp;

      if (sign) {
       disp = (
# 1150 "project/radare2/libr/asm/arch/hppa/gnu/hppa-dis.c" 3 4
              0xFFFFFFFFFFFFFFFFULL 
# 1150 "project/radare2/libr/asm/arch/hppa/gnu/hppa-dis.c"
                       << 11) | imm11;
      } else {
       disp = imm11;
      }

      disp <<= 2;
      fput_const (disp, info);
      break;
    }

  case '>':
  case 'y':
    {

      int disp = extract_16 (insn);
      disp &= ~3;
      fput_const (disp, info);
      break;
    }

  case '&':
    {

      int disp = extract_16 (insn);
      disp &= ~7;
      fput_const (disp, info);
      break;
    }

  case '_':
    break;

  case '{':
    {
      int sub = ((insn) >> (31 - (16)) & ((1 << ((16) - (14) + 1)) - 1));
      int df = ((insn) >> (31 - (18)) & ((1 << ((18) - (17) + 1)) - 1));
      int sf = ((insn) >> (31 - (20)) & ((1 << ((20) - (19) + 1)) - 1));
      const char * const * source = float_format_names;
      const char * const * dest = float_format_names;
      char *t = "";

      if (sub == 4)
        {
   (*info->fprintf_func) (info->stream, "%s", ",UND ");
   break;
        }
        if ((sub & 3) == 3) {
         t = ",t";
        }
        if ((sub & 3) == 1) {
         source = sub & 4 ? fcnv_ufixed_names : fcnv_fixed_names;
        }
        if (sub & 2) {
         dest = sub & 4 ? fcnv_ufixed_names : fcnv_fixed_names;
        }

        (*info->fprintf_func) (info->stream, "%s%s%s ",
         t, source[sf], dest[df]);
        break;
    }

  case 'm':
    {
      int y = ((insn) >> (31 - (18)) & ((1 << ((18) - (16) + 1)) - 1));

      if (y != 1) {
       fput_const ((y ^ 1) - 1, info);
      }
    }
    break;

  case 'h':
    {
      int cbit;

      cbit = ((insn) >> (31 - (18)) & ((1 << ((18) - (16) + 1)) - 1));

      if (cbit > 0) {
       (*info->fprintf_func) (info->stream, ",%d", cbit - 1);
      }
      break;
    }

  case '=':
    {
      int cond = ((insn) >> (31 - (31)) & ((1 << ((31) - (27) + 1)) - 1));

      switch (cond)
        {
        case 0: (*info->fprintf_func) (info->stream, "%s", " "); break;
        case 1: (*info->fprintf_func) (info->stream, "%s", "acc "); break;
        case 2: (*info->fprintf_func) (info->stream, "%s", "rej "); break;
        case 5: (*info->fprintf_func) (info->stream, "%s", "acc8 "); break;
        case 6: (*info->fprintf_func) (info->stream, "%s", "rej8 "); break;
        case 9: (*info->fprintf_func) (info->stream, "%s", "acc6 "); break;
        case 13: (*info->fprintf_func) (info->stream, "%s", "acc4 "); break;
        case 17: (*info->fprintf_func) (info->stream, "%s", "acc2 "); break;
        default: break;
        }
      break;
    }

  case 'X':
    (*info->print_address_func)
      (memaddr + 8 + extract_22 (insn), info);
    break;
  case 'L':
    (*info->fprintf_func) (info->stream, "%s", ",rp");
    break;
  default:
    (*info->fprintf_func) (info->stream, "%c", *s);
    break;
  }
     }
   return sizeof (insn);
 }
    }
  (*info->fprintf_func) (info->stream, "#%8x", insn);
  return sizeof (insn);
}
