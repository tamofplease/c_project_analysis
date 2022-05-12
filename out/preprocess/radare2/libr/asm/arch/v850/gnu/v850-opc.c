# 0 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
# 21 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/sysdep.h" 1 3 4
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/sysdep.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/ansidecl.h" 1 3 4
# 31 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/sysdep.h" 2 3 4
# 22 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 2
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
# 23 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 2
# 1 "project/radare2/libr/asm/arch/v850/gnu/v850.h" 1
# 31 "project/radare2/libr/asm/arch/v850/gnu/v850.h"

# 31 "project/radare2/libr/asm/arch/v850/gnu/v850.h"
struct v850_opcode
{

  const char *name;



  unsigned long opcode;





  unsigned long mask;




  unsigned char operands[8];


  unsigned int memop;





  unsigned int processors;
};
# 102 "project/radare2/libr/asm/arch/v850/gnu/v850.h"
extern const struct v850_opcode v850_opcodes[];
extern const int v850_num_opcodes;




struct v850_operand
{



  int bits;



  int shift;
# 135 "project/radare2/libr/asm/arch/v850/gnu/v850.h"
  unsigned long (* insert)
    (unsigned long instruction, long op, const char ** errmsg);
# 154 "project/radare2/libr/asm/arch/v850/gnu/v850.h"
  unsigned long (* extract) (unsigned long instruction, int * invalid);


  int flags;

  int default_reloc;
};




extern const struct v850_operand v850_operands[];
# 242 "project/radare2/libr/asm/arch/v850/gnu/v850.h"
extern int v850_msg_is_out_of_range (const char *);
# 24 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 1 3 4
# 36 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/symcat.h" 1 3 4
# 37 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 2 3 4
# 62 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4

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
# 25 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opintl.h" 1 3 4
# 26 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 2
# 53 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"

# 53 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
static const char * not_valid = 
# 53 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                  (
# 53 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                  "displacement value is not in range and is not aligned"
# 53 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                  )
# 53 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                                                                              ;
static const char * out_of_range = 
# 54 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                  (
# 54 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                  "displacement value is out of range"
# 54 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                  )
# 54 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                                                           ;
static const char * not_aligned = 
# 55 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                  (
# 55 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                  "displacement value is not aligned"
# 55 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                  )
# 55 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                                                          ;

static const char * immediate_out_of_range = 
# 57 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                            (
# 57 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                            "immediate value is out of range"
# 57 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                            )
# 57 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                                                                  ;
static const char * branch_out_of_range = 
# 58 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                         (
# 58 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                         "branch value out of range"
# 58 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                         )
# 58 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                                                         ;
static const char * branch_out_of_range_and_odd_offset = 
# 59 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                                        (
# 59 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                                        "branch value not in range and to odd offset"
# 59 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                                        )
# 59 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                                                                                          ;
static const char * branch_to_odd_offset = 
# 60 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                          (
# 60 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                          "branch to odd offset"
# 60 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                          )
# 60 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                                                     ;
static const char * pos_out_of_range = 
# 61 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                      (
# 61 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                      "position value is out of range"
# 61 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                      )
# 61 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                                                           ;
static const char * width_out_of_range = 
# 62 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                        (
# 62 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                        "width value is out of range"
# 62 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                        )
# 62 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                                                          ;
static const char * selid_out_of_range = 
# 63 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                        (
# 63 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                        "SelID is out of range"
# 63 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                        )
# 63 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                                                    ;
static const char * vector8_out_of_range = 
# 64 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                          (
# 64 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                          "vector8 is out of range"
# 64 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                          )
# 64 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                                                        ;
static const char * vector5_out_of_range = 
# 65 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                          (
# 65 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                          "vector5 is out of range"
# 65 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                          )
# 65 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                                                        ;
static const char * imm10_out_of_range = 
# 66 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                        (
# 66 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                        "imm10 is out of range"
# 66 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                        )
# 66 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                                                    ;
static const char * sr_selid_out_of_range = 
# 67 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                           (
# 67 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                           "SR/SelID is out of range"
# 67 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                           )
# 67 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                                                          ;

int
v850_msg_is_out_of_range (const char* msg)
{
  return msg == out_of_range
    || msg == immediate_out_of_range
    || msg == branch_out_of_range;
}

static unsigned long
insert_i5div1 (unsigned long insn, long value, const char ** errmsg)
{
  if (value > 30 || value < 2)
    {
      if (value & 1)
 * errmsg = 
# 83 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           (
# 83 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
           not_valid
# 83 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           )
# 83 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                       ;
      else
 * errmsg = 
# 85 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           (
# 85 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
           out_of_range
# 85 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           )
# 85 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                          ;
    }
  else if (value & 1)
    * errmsg = 
# 88 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              (
# 88 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              not_aligned
# 88 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              )
# 88 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                            ;

  value = (32 - value)/2;

  return (insn | ((value << (2+16)) & 0x3c0000));
}

static unsigned long
extract_i5div1 (unsigned long insn, int * invalid)
{
  unsigned long ret = (insn & 0x003c0000) >> (16+2);
  ret = 32 - (ret * 2);

  if (invalid != 0)
    *invalid = (ret > 30 || ret < 2) ? 1 : 0;
  return ret;
}

static unsigned long
insert_i5div2 (unsigned long insn, long value, const char ** errmsg)
{
  if (value > 30 || value < 4)
    {
      if (value & 1)
 * errmsg = 
# 112 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           (
# 112 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
           not_valid
# 112 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           )
# 112 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                       ;
      else
 * errmsg = 
# 114 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           (
# 114 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
           out_of_range
# 114 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           )
# 114 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                          ;
    }
  else if (value & 1)
    * errmsg = 
# 117 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              (
# 117 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              not_aligned
# 117 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              )
# 117 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                            ;

  value = (32 - value)/2;

  return insn | ((value << (2 + 16)) & 0x3c0000);
}

static unsigned long
extract_i5div2 (unsigned long insn, int * invalid)
{
  unsigned long ret = (insn & 0x003c0000) >> (16+2);
  ret = 32 - (ret * 2);

  if (invalid != 0)
    *invalid = (ret > 30 || ret < 4) ? 1 : 0;
  return ret;
}

static unsigned long
insert_i5div3 (unsigned long insn, long value, const char ** errmsg)
{
  if (value > 32 || value < 2)
    {
      if (value & 1)
 * errmsg = 
# 141 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           (
# 141 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
           not_valid
# 141 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           )
# 141 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                       ;
      else
 * errmsg = 
# 143 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           (
# 143 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
           out_of_range
# 143 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           )
# 143 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                          ;
    }
  else if (value & 1)
    * errmsg = 
# 146 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              (
# 146 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              not_aligned
# 146 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              )
# 146 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                            ;

  value = (32 - value)/2;

  return insn | ((value << (2+16)) & 0x3c0000);
}

static unsigned long
extract_i5div3 (unsigned long insn, int * invalid)
{
  unsigned long ret = (insn & 0x003c0000) >> (16+2);
  ret = 32 - (ret * 2);

  if (invalid != 0)
    *invalid = (ret > 32 || ret < 2) ? 1 : 0;
  return ret;
}

static unsigned long
insert_d5_4 (unsigned long insn, long value, const char ** errmsg)
{
  if (value > 0x1f || value < 0)
    {
      if (value & 1)
 * errmsg = 
# 170 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           (
# 170 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
           not_valid
# 170 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           )
# 170 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                       ;
      else
 * errmsg = 
# 172 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           (
# 172 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
           out_of_range
# 172 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           )
# 172 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                          ;
    }
  else if (value & 1)
    * errmsg = 
# 175 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              (
# 175 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              not_aligned
# 175 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              )
# 175 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                            ;

  value >>= 1;

  return insn | (value & 0x0f);
}

static unsigned long
extract_d5_4 (unsigned long insn, int * invalid)
{
  unsigned long ret = (insn & 0x0f);

  ret <<= 1;

  if (invalid != 0)
    *invalid = 0;
  return ret;
}

static unsigned long
insert_d8_6 (unsigned long insn, long value, const char ** errmsg)
{
  if (value > 0xff || value < 0)
    {
      if ((value % 4) != 0)
 * errmsg = 
# 200 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           (
# 200 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
           not_valid
# 200 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           )
# 200 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                       ;
      else
 * errmsg = 
# 202 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           (
# 202 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
           out_of_range
# 202 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           )
# 202 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                          ;
    }
  else if ((value % 4) != 0)
    * errmsg = 
# 205 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              (
# 205 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              not_aligned
# 205 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              )
# 205 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                            ;

  value >>= 1;

  return insn | (value & 0x7e);
}

static unsigned long
extract_d8_6 (unsigned long insn, int * invalid)
{
  unsigned long ret = (insn & 0x7e);

  ret <<= 1;

  if (invalid != 0)
    *invalid = 0;
  return ret;
}

static unsigned long
insert_d8_7 (unsigned long insn, long value, const char ** errmsg)
{
  if (value > 0xff || value < 0)
    {
      if ((value % 2) != 0)
 * errmsg = 
# 230 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           (
# 230 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
           not_valid
# 230 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           )
# 230 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                       ;
      else
 * errmsg = 
# 232 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           (
# 232 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
           out_of_range
# 232 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           )
# 232 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                          ;
    }
  else if ((value % 2) != 0)
    * errmsg = 
# 235 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              (
# 235 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              not_aligned
# 235 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              )
# 235 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                            ;

  value >>= 1;

  return insn | (value & 0x7f);
}

static unsigned long
extract_d8_7 (unsigned long insn, int * invalid)
{
  unsigned long ret = (insn & 0x7f);

  ret <<= 1;

  if (invalid != 0)
    *invalid = 0;
  return ret;
}

static unsigned long
insert_v8 (unsigned long insn, long value, const char ** errmsg)
{
  if (value > 0xff || value < 0)
    * errmsg = 
# 258 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              (
# 258 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              immediate_out_of_range
# 258 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              )
# 258 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                       ;

  return insn | (value & 0x1f) | ((value & 0xe0) << (27-5));
}

static unsigned long
extract_v8 (unsigned long insn, int * invalid)
{
  unsigned long ret = (insn & 0x1f) | ((insn >> (27-5)) & 0xe0);

  if (invalid != 0)
    *invalid = 0;
  return ret;
}

static unsigned long
insert_d9 (unsigned long insn, long value, const char ** errmsg)
{
  if (value > 0xff || value < -0x100)
    {
      if ((value % 2) != 0)
 * errmsg = branch_out_of_range_and_odd_offset;
      else
 * errmsg = branch_out_of_range;
    }
  else if ((value % 2) != 0)
    * errmsg = branch_to_odd_offset;

  return insn | ((value & 0x1f0) << 7) | ((value & 0x0e) << 3);
}

static unsigned long
extract_d9 (unsigned long insn, int * invalid)
{
  signed long ret = ((insn >> 7) & 0x1f0) | ((insn >> 3) & 0x0e);

  ret = (ret ^ 0x100) - 0x100;

  if (invalid != 0)
    *invalid = 0;
  return ret;
}

static unsigned long
insert_u16_loop (unsigned long insn, long value, const char ** errmsg)
{


  if (value < 0 || value > 0xffff)
    {
      if ((value % 2) != 0)
 * errmsg = branch_out_of_range_and_odd_offset;
      else
 * errmsg = branch_out_of_range;
    }
  else if ((value % 2) != 0)
    * errmsg = branch_to_odd_offset;

  return insn | ((value & 0xfffe) << 16);
}

static unsigned long
extract_u16_loop (unsigned long insn, int * invalid)
{
  long ret = (insn >> 16) & 0xfffe;

  if (invalid != 0)
    *invalid = 0;
  return ret;
}

static unsigned long
insert_d16_15 (unsigned long insn, long value, const char ** errmsg)
{
  if (value > 0x7fff || value < -0x8000)
    {
      if ((value % 2) != 0)
 * errmsg = 
# 335 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           (
# 335 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
           not_valid
# 335 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           )
# 335 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                       ;
      else
 * errmsg = 
# 337 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           (
# 337 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
           out_of_range
# 337 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           )
# 337 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                          ;
    }
  else if ((value % 2) != 0)
    * errmsg = 
# 340 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              (
# 340 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              not_aligned
# 340 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              )
# 340 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                            ;

  return insn | ((value & 0xfffe) << 16);
}

static unsigned long
extract_d16_15 (unsigned long insn, int * invalid)
{
  signed long ret = (insn >> 16) & 0xfffe;

  ret = (ret ^ 0x8000) - 0x8000;

  if (invalid != 0)
    *invalid = 0;
  return ret;
}

static unsigned long
insert_d16_16 (unsigned long insn, signed long value, const char ** errmsg)
{
  if (value > 0x7fff || value < -0x8000)
    * errmsg = 
# 361 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              (
# 361 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              out_of_range
# 361 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              )
# 361 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                             ;

  return insn | ((value & 0xfffe) << 16) | ((value & 1) << 5);
}

static unsigned long
extract_d16_16 (unsigned long insn, int * invalid)
{
  signed long ret = ((insn >> 16) & 0xfffe) | ((insn >> 5) & 1);

  ret = (ret ^ 0x8000) - 0x8000;

  if (invalid != 0)
    *invalid = 0;
  return ret;
}

static unsigned long
insert_d17_16 (unsigned long insn, long value, const char ** errmsg)
{
  if (value > 0xffff || value < -0x10000)
    * errmsg = 
# 382 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              (
# 382 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              out_of_range
# 382 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              )
# 382 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                             ;

  return insn | ((value & 0xfffe) << 16) | ((value & 0x10000) >> (16 - 4));
}

static unsigned long
extract_d17_16 (unsigned long insn, int * invalid)
{
  signed long ret = ((insn >> 16) & 0xfffe) | ((insn << (16 - 4)) & 0x10000);

  ret = (ret ^ 0x10000) - 0x10000;

  if (invalid != 0)
    *invalid = 0;
  return (unsigned long)ret;
}

static unsigned long
insert_d22 (unsigned long insn, long value, const char ** errmsg)
{
  if (value > 0x1fffff || value < -0x200000)
    {
      if ((value % 2) != 0)
 * errmsg = branch_out_of_range_and_odd_offset;
      else
 * errmsg = branch_out_of_range;
    }
  else if ((value % 2) != 0)
    * errmsg = branch_to_odd_offset;

  return insn | ((value & 0xfffe) << 16) | ((value & 0x3f0000) >> 16);
}

static unsigned long
extract_d22 (unsigned long insn, int * invalid)
{
  signed long ret = ((insn >> 16) & 0xfffe) | ((insn << 16) & 0x3f0000);

  ret = (ret ^ 0x200000) - 0x200000;

  if (invalid != 0)
    *invalid = 0;
  return (unsigned long) ret;
}

static unsigned long
insert_d23 (unsigned long insn, long value, const char ** errmsg)
{
  if (value > 0x3fffff || value < -0x400000)
    * errmsg = out_of_range;

  return insn | ((value & 0x7f) << 4) | ((value & 0x7fff80) << (16-7));
}

static unsigned long
insert_d23_align1 (unsigned long insn, long value, const char ** errmsg)
{
  if (value > 0x3fffff || value < -0x400000)
    {
      if (value & 0x1)
 * errmsg = 
# 442 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           (
# 442 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
           not_valid
# 442 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           )
# 442 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                       ;
      else
 * errmsg = 
# 444 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           (
# 444 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
           out_of_range
# 444 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           )
# 444 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                          ;
    }
  else if (value & 0x1)
    * errmsg = 
# 447 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              (
# 447 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              not_aligned
# 447 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              )
# 447 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                            ;

  return insn | ((value & 0x7e) << 4) | ((value & 0x7fff80) << (16 - 7));
}

static unsigned long
extract_d23 (unsigned long insn, int * invalid)
{
  signed long ret = ((insn >> 4) & 0x7f) | ((insn >> (16-7)) & 0x7fff80);

  ret = (ret ^ 0x400000) - 0x400000;

  if (invalid != 0)
    *invalid = 0;
  return (unsigned long) ret;
}

static unsigned long
insert_i9 (unsigned long insn, signed long value, const char ** errmsg)
{
  if (value > 0xff || value < -0x100)
    * errmsg = 
# 468 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              (
# 468 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              immediate_out_of_range
# 468 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              )
# 468 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                       ;

  return insn | ((value & 0x1e0) << 13) | (value & 0x1f);
}

static unsigned long
extract_i9 (unsigned long insn, int * invalid)
{
  signed long ret = ((insn >> 13) & 0x1e0) | (insn & 0x1f);

  ret = (ret ^ 0x100) - 0x100;

  if (invalid != 0)
    *invalid = 0;
  return ret;
}

static unsigned long
insert_u9 (unsigned long insn, long v, const char ** errmsg)
{
  unsigned long value = (unsigned long) v;

  if (value > 0x1ff)
    * errmsg = 
# 491 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              (
# 491 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              immediate_out_of_range
# 491 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              )
# 491 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                       ;

  return insn | ((value & 0x1e0) << 13) | (value & 0x1f);
}

static unsigned long
extract_u9 (unsigned long insn, int * invalid)
{
  unsigned long ret = ((insn >> 13) & 0x1e0) | (insn & 0x1f);

  if (invalid != 0)
    *invalid = 0;
  return ret;
}

static unsigned long
insert_spe (unsigned long insn, long v, const char ** errmsg)
{
  unsigned long value = (unsigned long) v;

  if (value != 3)
    * errmsg = 
# 512 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              (
# 512 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              "invalid register for stack adjustment"
# 512 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              )
# 512 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                                        ;

  return insn & ~0x180000;
}

static unsigned long
extract_spe (unsigned long insn 
# 518 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                               __attribute__ ((__unused__))
# 518 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                               , int * invalid)
{
  if (invalid != 0)
    *invalid = 0;

  return 3;
}

static unsigned long
insert_r4 (unsigned long insn, long v, const char ** errmsg)
{
  unsigned long value = (unsigned long) v;

  if (value >= 32)
    * errmsg = 
# 532 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              (
# 532 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              "invalid register name"
# 532 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              )
# 532 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                        ;

  return insn | ((value & 0x01) << 23) | ((value & 0x1e) << 16);
}

static unsigned long
extract_r4 (unsigned long insn, int * invalid)
{
  unsigned long r4;
  unsigned long insn2;

  insn2 = insn >> 16;
  r4 = (((insn2 & 0x0080) >> 7) | (insn2 & 0x001e));

  if (invalid != 0)
    *invalid = 0;

  return r4;
}

static unsigned long G_pos;

static unsigned long
insert_POS (unsigned long insn, long pos, const char ** errmsg)
{
  if (pos > 0x1f || pos < 0)
    * errmsg = 
# 558 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              (
# 558 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              pos_out_of_range
# 558 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              )
# 558 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                 ;

  G_pos = (unsigned long) pos;

  return insn;
}

static unsigned long
extract_POS_U (unsigned long insn, int * invalid)
{
  unsigned long pos,lsb;
  unsigned long insn2;
  insn2 = insn >> 16;

  lsb = ((insn2 & 0x0800) >> 8)
      | ((insn2 & 0x000e) >> 1);
  lsb += 16;
  pos = lsb;

  if (invalid != 0)
    *invalid = 0;

  return pos;
}

static unsigned long
extract_POS_L (unsigned long insn, int * invalid)
{
  unsigned long pos,lsb;
  unsigned long insn2;
  insn2 = insn >> 16;

  lsb = ((insn2 & 0x0800) >> 8)
      | ((insn2 & 0x000e) >> 1);
  pos = lsb;

  if (invalid != 0)
    *invalid = 0;

  return pos;
}

static unsigned long
insert_WIDTH (unsigned long insn, long width, const char ** errmsg)
{
  unsigned long msb, lsb, opc, ret;
  unsigned long msb_expand, lsb_expand;

  msb = (unsigned long)width + G_pos - 1;
  lsb = G_pos;
  opc = 0;
  G_pos = 0;

  if (width > 0x20 || width < 0)
    * errmsg = 
# 612 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              (
# 612 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              width_out_of_range
# 612 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              )
# 612 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                   ;

  if ((msb >= 16) && (lsb >= 16))
    opc = 0x0090;
  else if ((msb >= 16) && (lsb < 16))
    opc = 0x00b0;
  else if ((msb < 16) && (lsb < 16))
    opc = 0x00d0;
  else
    * errmsg = 
# 621 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              (
# 621 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              width_out_of_range
# 621 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              )
# 621 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                   ;

  msb &= 0x0f;
  msb_expand = msb << 12;
  lsb &= 0x0f;
  lsb_expand = ((lsb & 0x8) << 8)|((lsb & 0x7) << 1);

  ret = (insn & 0x0000ffff) | ((opc | msb_expand | lsb_expand) << 16);

  return ret;
}

static unsigned long
extract_WIDTH_U (unsigned long insn, int * invalid)
{
  unsigned long width, msb, lsb;
  unsigned long insn2;
  insn2 = insn >> 16;

  msb = ((insn2 & 0xf000) >> 12);
  msb += 16;
  lsb = ((insn2 & 0x0800) >> 8)
      | ((insn2 & 0x000e) >> 1);
  lsb += 16;

  if (invalid != 0)
    *invalid = 0;

  width = msb - lsb + 1;

  return width;
}

static unsigned long
extract_WIDTH_M (unsigned long insn, int * invalid)
{
  unsigned long width, msb, lsb;
  unsigned long insn2;
  insn2 = insn >> 16;

  msb = ((insn2 & 0xf000) >> 12) ;
  msb += 16;
  lsb = ((insn2 & 0x0800) >> 8)
      | ((insn2 & 0x000e) >> 1);

  if (invalid != 0)
    *invalid = 0;

  width = msb - lsb + 1;

  return width;
}

static unsigned long
extract_WIDTH_L (unsigned long insn, int * invalid)
{
  unsigned long width, msb, lsb;
  unsigned long insn2;
  insn2 = insn >> 16;

  msb = ((insn2 & 0xf000) >> 12) ;
  lsb = ((insn2 & 0x0800) >> 8)
      | ((insn2 & 0x000e) >> 1);

  if (invalid != 0)
    *invalid = 0;

  width = msb - lsb + 1;

  return width;
}

static unsigned long
insert_SELID (unsigned long insn, long selid, const char ** errmsg)
{
  if ((unsigned long) selid > 0x1f)
    * errmsg = 
# 697 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              (
# 697 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              selid_out_of_range
# 697 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              )
# 697 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                   ;

  return insn | ((selid & 0x1fUL) << 27);
}

static unsigned long
extract_SELID (unsigned long insn, int * invalid)
{
  unsigned long selid;
  unsigned long insn2;

  insn2 = insn >> 16;

  selid = ((insn2 & 0xf800) >> 11);

  if (invalid != 0)
    *invalid = 0;

  return selid;
}

static unsigned long
insert_VECTOR8 (unsigned long insn, long vector8, const char ** errmsg)
{
  unsigned long ret;
  unsigned long VVV,vvvvv;

  if (vector8 > 0xff || vector8 < 0)
    * errmsg = 
# 725 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              (
# 725 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              vector8_out_of_range
# 725 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              )
# 725 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                     ;

  VVV = (vector8 & 0xe0) >> 5;
  vvvvv = (vector8 & 0x1f);

  ret = (insn | (VVV << 27) | vvvvv);

  return ret;
}

static unsigned long
extract_VECTOR8 (unsigned long insn, int * invalid)
{
  unsigned long vector8;
  unsigned long VVV,vvvvv;
  unsigned long insn2;

  insn2 = insn >> 16;
  VVV = ((insn2 & 0x3800) >> 11);
  vvvvv = (insn & 0x001f);
  vector8 = VVV << 5 | vvvvv;

  if (invalid != 0)
    *invalid = 0;

  return vector8;
}

static unsigned long
insert_VECTOR5 (unsigned long insn, long vector5, const char ** errmsg)
{
  unsigned long ret;
  unsigned long vvvvv;

  if (vector5 > 0x1f || vector5 < 0)
    * errmsg = 
# 760 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              (
# 760 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              vector5_out_of_range
# 760 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              )
# 760 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                     ;

  vvvvv = (vector5 & 0x1f);

  ret = (insn | vvvvv);

  return ret;
}

static unsigned long
extract_VECTOR5 (unsigned long insn, int * invalid)
{
  unsigned long vector5;

  vector5 = (insn & 0x001f);

  if (invalid != 0)
    *invalid = 0;

  return vector5;
}

static unsigned long
insert_CACHEOP (unsigned long insn, long cacheop, const char ** errmsg 
# 783 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                                                      __attribute__ ((__unused__))
# 783 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                                                                      )
{
  unsigned long ret;
  unsigned long pp,PPPPP;

  pp = (cacheop & 0x60) >> 5;
  PPPPP = (cacheop & 0x1f);

  ret = insn | (pp << 11) | (PPPPP << 27);

  return ret;
}

static unsigned long
extract_CACHEOP (unsigned long insn, int * invalid)
{
  unsigned long ret;
  unsigned long pp,PPPPP;
  unsigned long insn2;

  insn2 = insn >> 16;

  PPPPP = ((insn2 & 0xf800) >> 11);
  pp = ((insn & 0x1800) >> 11);

  ret = (pp << 5) | PPPPP;

  if (invalid != 0)
    *invalid = 0;

  return ret;
}

static unsigned long
insert_PREFOP (unsigned long insn, long prefop, const char ** errmsg 
# 817 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                                                                    __attribute__ ((__unused__))
# 817 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                                                                    )
{
  unsigned long ret;
  unsigned long PPPPP;

  PPPPP = (prefop & 0x1f);

  ret = insn | (PPPPP << 27);

  return ret;
}

static unsigned long
extract_PREFOP (unsigned long insn, int * invalid)
{
  unsigned long ret;
  unsigned long PPPPP;
  unsigned long insn2;

  insn2 = insn >> 16;

  PPPPP = (insn2 & 0xf800) >> 11;

  ret = PPPPP;

  if (invalid != 0)
    *invalid = 0;

  return ret;
}

static unsigned long
insert_IMM10U (unsigned long insn, long value, const char ** errmsg)
{
  unsigned long imm10, ret;
  unsigned long iiiii,IIIII;

  if (value > 0x3ff || value < 0)
    * errmsg = 
# 855 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              (
# 855 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              imm10_out_of_range
# 855 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              )
# 855 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                   ;

  imm10 = ((unsigned long) value) & 0x3ff;
  IIIII = (imm10 >> 5) & 0x1f;
  iiiii = imm10 & 0x1f;

  ret = insn | IIIII << 27 | iiiii;

  return ret;
}

static unsigned long
extract_IMM10U (unsigned long insn, int * invalid)
{
  unsigned long ret;
  unsigned long iiiii,IIIII;
  unsigned long insn2;
  insn2 = insn >> 16;

  IIIII = ((insn2 & 0xf800) >> 11);
  iiiii = (insn & 0x001f);

  ret = (IIIII << 5) | iiiii;

  if (invalid != 0)
    *invalid = 0;

  return ret;
}

static unsigned long
insert_SRSEL1 (unsigned long insn, long value, const char ** errmsg)
{
  unsigned long imm10, ret;
  unsigned long sr,selid;

  if (value > 0x3ff || value < 0)
    * errmsg = 
# 892 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              (
# 892 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              sr_selid_out_of_range
# 892 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              )
# 892 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                      ;

  imm10 = (unsigned long) value;
  selid = (imm10 & 0x3e0) >> 5;
  sr = imm10 & 0x1f;

  ret = insn | selid << 27 | sr;

  return ret;
}

static unsigned long
extract_SRSEL1 (unsigned long insn, int * invalid)
{
  unsigned long ret;
  unsigned long sr, selid;
  unsigned long insn2;

  insn2 = insn >> 16;

  selid = ((insn2 & 0xf800) >> 11);
  sr = (insn & 0x001f);

  ret = (selid << 5) | sr;

  if (invalid != 0)
    *invalid = 0;

  return ret;
}

static unsigned long
insert_SRSEL2 (unsigned long insn, long value, const char ** errmsg)
{
  unsigned long imm10, ret;
  unsigned long sr, selid;

  if (value > 0x3ff || value < 0)
    * errmsg = 
# 930 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              (
# 930 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              sr_selid_out_of_range
# 930 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
              )
# 930 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                                      ;

  imm10 = (unsigned long) value;
  selid = (imm10 & 0x3e0) >> 5;
  sr = imm10 & 0x1f;

  ret = insn | selid << 27 | sr << 11;

  return ret;
}

static unsigned long
extract_SRSEL2 (unsigned long insn, int * invalid)
{
  unsigned long ret;
  unsigned long sr, selid;
  unsigned long insn2;

  insn2 = insn >> 16;

  selid = ((insn2 & 0xf800) >> 11);
  sr = ((insn & 0xf800) >> 11);

  ret = (selid << 5) | sr;

  if (invalid != 0)
    *invalid = 0;

  return ret;
}




const struct v850_operand v850_operands[] =
{

  { 0, 0, 
# 967 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
         ((void *)0)
# 967 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
             , 
# 967 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
               ((void *)0)
# 967 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                   , 0, BFD_RELOC_NONE },



  { 5, 0, 
# 971 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
         ((void *)0)
# 971 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
             , 
# 971 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
               ((void *)0)
# 971 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                   , 0x01, BFD_RELOC_NONE },



  { 5, 0, 
# 975 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
         ((void *)0)
# 975 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
             , 
# 975 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
               ((void *)0)
# 975 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                   , 0x01 | 0x20000, BFD_RELOC_NONE },



  { 4, 1, 
# 979 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
         ((void *)0)
# 979 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
             , 
# 979 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
               ((void *)0)
# 979 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                   , 0x01 | 0x8000, BFD_RELOC_NONE },



  { 5, 0, 
# 983 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
         ((void *)0)
# 983 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
             , 
# 983 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
               ((void *)0)
# 983 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                   , 0x01 | 0x100000, BFD_RELOC_NONE },



  { 5, 0, 
# 987 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
         ((void *)0)
# 987 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
             , 
# 987 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
               ((void *)0)
# 987 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                   , 0x01 | 0x200000, BFD_RELOC_NONE },



  { 5, 11, 
# 991 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
          ((void *)0)
# 991 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              , 
# 991 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                ((void *)0)
# 991 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                    , 0x01, BFD_RELOC_NONE },



  { 5, 11, 
# 995 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
          ((void *)0)
# 995 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              , 
# 995 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                ((void *)0)
# 995 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                    , 0x01 | 0x20000, BFD_RELOC_NONE },



  { 4, 12, 
# 999 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
          ((void *)0)
# 999 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              , 
# 999 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                ((void *)0)
# 999 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                    , 0x01 | 0x8000, BFD_RELOC_NONE },



  { 5, 16, 
# 1003 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
          ((void *)0)
# 1003 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              , 
# 1003 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                ((void *)0)
# 1003 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                    , 0x01 | 0x20000, BFD_RELOC_NONE },



  { 5, 27, 
# 1007 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
          ((void *)0)
# 1007 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              , 
# 1007 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                ((void *)0)
# 1007 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                    , 0x01, BFD_RELOC_NONE },



  { 5, 27, 
# 1011 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
          ((void *)0)
# 1011 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              , 
# 1011 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                ((void *)0)
# 1011 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                    , 0x01 | 0x20000, BFD_RELOC_NONE },



  { 4, 28, 
# 1015 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
          ((void *)0)
# 1015 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              , 
# 1015 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                ((void *)0)
# 1015 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                    , 0x01 | 0x8000, BFD_RELOC_NONE },



  { 4, 28, 
# 1019 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
          ((void *)0)
# 1019 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              , 
# 1019 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                ((void *)0)
# 1019 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                    , 0x01 | 0x8000 | 0x20000, BFD_RELOC_NONE },



  { 5, 0, insert_r4, extract_r4, 0x01, BFD_RELOC_NONE },



  { 4, 17, 
# 1027 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
          ((void *)0)
# 1027 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              , 
# 1027 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                ((void *)0)
# 1027 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                    , 0x01 | 0x8000, BFD_RELOC_NONE },



  { 2, 0, insert_spe, extract_spe, 0x01, BFD_RELOC_NONE },



  { 0, 0, 
# 1035 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
         ((void *)0)
# 1035 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
             , 
# 1035 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
               ((void *)0)
# 1035 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                   , 0x02, BFD_RELOC_NONE },



  { -1, 0xffe00001, 
# 1039 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                   ((void *)0)
# 1039 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                       , 
# 1039 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                         ((void *)0)
# 1039 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                             , 0x08, BFD_RELOC_NONE },



  { 5, 0, 
# 1043 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
         ((void *)0)
# 1043 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
             , 
# 1043 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
               ((void *)0)
# 1043 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                   , 0x04, BFD_RELOC_NONE },


  { 0, 0, insert_SRSEL1, extract_SRSEL1, 0x04, BFD_RELOC_NONE },



  { 5, 11, 
# 1050 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
          ((void *)0)
# 1050 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              , 
# 1050 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                ((void *)0)
# 1050 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                    , 0x04, BFD_RELOC_NONE },


  { 0, 0, insert_SRSEL2, extract_SRSEL2, 0x04, BFD_RELOC_NONE },



  { 3, 17, 
# 1057 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
          ((void *)0)
# 1057 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              , 
# 1057 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                ((void *)0)
# 1057 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                    , 0, BFD_RELOC_NONE },



  { 4, 0, 
# 1061 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
         ((void *)0)
# 1061 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
             , 
# 1061 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
               ((void *)0)
# 1061 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                   , 0x10, BFD_RELOC_NONE },



  { 4, 17, 
# 1065 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
          ((void *)0)
# 1065 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              , 
# 1065 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                ((void *)0)
# 1065 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                    , 0x10|0x80000, BFD_RELOC_NONE },



  { 4, 17, 
# 1069 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
          ((void *)0)
# 1069 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              , 
# 1069 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                ((void *)0)
# 1069 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                    , 0x10, BFD_RELOC_NONE },



  { 4, 27, 
# 1073 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
          ((void *)0)
# 1073 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              , 
# 1073 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                ((void *)0)
# 1073 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                    , 0x20, BFD_RELOC_NONE },



  { 1, 3, 
# 1077 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
         ((void *)0)
# 1077 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
             , 
# 1077 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
               ((void *)0)
# 1077 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                   , 0, BFD_RELOC_NONE },



  { 1, 0, 
# 1081 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
         ((void *)0)
# 1081 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
             , 
# 1081 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
               ((void *)0)
# 1081 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                   , 0, BFD_RELOC_NONE },



  { 2, 17, 
# 1085 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
          ((void *)0)
# 1085 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              , 
# 1085 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                ((void *)0)
# 1085 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                    , 0, BFD_RELOC_NONE },



  { 2, 0, 
# 1089 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
         ((void *)0)
# 1089 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
             , 
# 1089 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
               ((void *)0)
# 1089 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                   , 0, BFD_RELOC_NONE },



  { 2, 2, 
# 1093 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
         ((void *)0)
# 1093 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
             , 
# 1093 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
               ((void *)0)
# 1093 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                   , 0, BFD_RELOC_NONE },



  { 3, 11, 
# 1097 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
          ((void *)0)
# 1097 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              , 
# 1097 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                ((void *)0)
# 1097 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                    , 0, BFD_RELOC_NONE },



  { 3, 17, 
# 1101 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
          ((void *)0)
# 1101 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              , 
# 1101 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                ((void *)0)
# 1101 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                    , 0, BFD_RELOC_NONE },



  { 3, 0, 
# 1105 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
         ((void *)0)
# 1105 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
             , 
# 1105 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
               ((void *)0)
# 1105 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                   , 0, BFD_RELOC_NONE },



  { 4, 0, 
# 1109 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
         ((void *)0)
# 1109 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
             , 
# 1109 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
               ((void *)0)
# 1109 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                   , 0, BFD_RELOC_NONE },



  { 4, 11, 
# 1113 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
          ((void *)0)
# 1113 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              , 
# 1113 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                ((void *)0)
# 1113 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                    , 0x40000, BFD_RELOC_NONE },



  { 4, 0, 
# 1117 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
         ((void *)0)
# 1117 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
             , 
# 1117 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
               ((void *)0)
# 1117 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                   , 0x2000, BFD_RELOC_V850_TDA_4_4_OFFSET },



  { 5, 0, 
# 1121 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
         ((void *)0)
# 1121 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
             , 
# 1121 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
               ((void *)0)
# 1121 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                   , 0x1000, BFD_RELOC_NONE },



  { 5, 0, insert_i5div1, extract_i5div1, 0, BFD_RELOC_NONE },


  { 5, 0, insert_i5div2, extract_i5div2, 0, BFD_RELOC_NONE },


  { 5, 0, insert_i5div3, extract_i5div3, 0, BFD_RELOC_NONE },



  { 5, 0, 
# 1135 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
         ((void *)0)
# 1135 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
             , 
# 1135 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
               ((void *)0)
# 1135 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                   , 0, BFD_RELOC_NONE },



  { 5, 1, 
# 1139 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
         ((void *)0)
# 1139 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
             , 
# 1139 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
               ((void *)0)
# 1139 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                   , 0, BFD_RELOC_NONE },



  { 5, 0, insert_d5_4, extract_d5_4, 0x2000, BFD_RELOC_V850_TDA_4_5_OFFSET },



  { 6, 0, 
# 1147 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
         ((void *)0)
# 1147 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
             , 
# 1147 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
               ((void *)0)
# 1147 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                   , 0, BFD_RELOC_V850_CALLT_6_7_OFFSET },



  { 7, 0, 
# 1151 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
         ((void *)0)
# 1151 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
             , 
# 1151 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
               ((void *)0)
# 1151 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                   , 0x2000, BFD_RELOC_V850_TDA_7_7_OFFSET },



  { 8, 0, insert_d8_7, extract_d8_7, 0x2000, BFD_RELOC_V850_TDA_7_8_OFFSET },



  { 8, 0, insert_d8_6, extract_d8_6, 0x2000, BFD_RELOC_V850_TDA_6_8_OFFSET },



  { 8, 0, insert_v8, extract_v8, 0, BFD_RELOC_NONE },



  { 9, 0, insert_i9, extract_i9, 0x1000, BFD_RELOC_NONE },



  { 9, 0, insert_u9, extract_u9, 0, BFD_RELOC_NONE },



  { 9, 0, insert_d9, extract_d9, 0x1000 | 0x2000 | 0x4000, BFD_RELOC_V850_9_PCREL },



  { 9, 0, insert_d9, extract_d9, 0x800 | 0x1000 | 0x2000 | 0x4000, BFD_RELOC_V850_9_PCREL },



  { 16, 16, 
# 1183 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           ((void *)0)
# 1183 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
               , 
# 1183 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                 ((void *)0)
# 1183 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                     , 0x1000, BFD_RELOC_16 },



  { 16, 32, 
# 1187 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           ((void *)0)
# 1187 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
               , 
# 1187 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                 ((void *)0)
# 1187 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                     , 0x80 | 0x1000, BFD_RELOC_LO16 },



  { 16, 16, 
# 1191 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           ((void *)0)
# 1191 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
               , 
# 1191 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                 ((void *)0)
# 1191 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                     , 0x100, BFD_RELOC_HI16 },



  { 16, 16, 
# 1195 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           ((void *)0)
# 1195 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
               , 
# 1195 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                 ((void *)0)
# 1195 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                     , 0, BFD_RELOC_16 },



  { 16, 16, 
# 1199 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           ((void *)0)
# 1199 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
               , 
# 1199 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                 ((void *)0)
# 1199 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                     , 0x1000 | 0x2000, BFD_RELOC_16 },



  { 16, 0, insert_d16_16, extract_d16_16, 0x1000 | 0x2000, BFD_RELOC_V850_16_SPLIT_OFFSET },



  { 16, 0, insert_d16_15, extract_d16_15, 0x1000 | 0x2000 , BFD_RELOC_V850_16_S1 },



  { 16, 0, insert_u16_loop, extract_u16_loop, 0x800 | 0x2000 | 0x4000 | 0x1000000, BFD_RELOC_V850_16_PCREL },



  { 17, 0, insert_d17_16, extract_d17_16, 0x1000 | 0x2000 | 0x4000, BFD_RELOC_V850_17_PCREL },





  { 22, 0, insert_d22, extract_d22, 0x1000 | 0x2000 | 0x4000, BFD_RELOC_V850_22_PCREL },


  { 23, 0, insert_d23, extract_d23, 0x200 | 0x1000 | 0x2000, BFD_RELOC_V850_23 },


  { 23, 0, insert_d23_align1, extract_d23, 0x200 | 0x1000 | 0x2000, BFD_RELOC_V850_23 },



  { 32, 32, 
# 1231 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           ((void *)0)
# 1231 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
               , 
# 1231 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                 ((void *)0)
# 1231 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                     , 0x400, BFD_RELOC_32 },


  { 32, 32, 
# 1234 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           ((void *)0)
# 1234 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
               , 
# 1234 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                 ((void *)0)
# 1234 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                     , 0x400 | 0x1000 | 0x2000, BFD_RELOC_V850_32_ABS },


  { 32, 32, 
# 1237 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
           ((void *)0)
# 1237 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
               , 
# 1237 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                 ((void *)0)
# 1237 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                     , 0x400 | 0x1000 | 0x2000 | 0x4000, BFD_RELOC_V850_32_PCREL },


  { 0, 0, insert_POS, extract_POS_U, 0, BFD_RELOC_NONE },


  { 0, 0, insert_POS, extract_POS_L, 0, BFD_RELOC_NONE },


  { 0, 0, insert_POS, extract_POS_L, 0, BFD_RELOC_NONE },


  { 0, 0, insert_WIDTH, extract_WIDTH_U, 0, BFD_RELOC_NONE },


  { 0, 0, insert_WIDTH, extract_WIDTH_M, 0, BFD_RELOC_NONE },


  { 0, 0, insert_WIDTH, extract_WIDTH_L, 0, BFD_RELOC_NONE },


  { 5, 27, insert_SELID, extract_SELID, 0, BFD_RELOC_NONE },


  { 5, 11, 
# 1261 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
          ((void *)0)
# 1261 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              , 
# 1261 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                ((void *)0)
# 1261 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                    , 0, BFD_RELOC_NONE },


  { 4, 0, 
# 1264 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
         ((void *)0)
# 1264 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
             , 
# 1264 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
               ((void *)0)
# 1264 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                   , 0, BFD_RELOC_NONE },


  { 0, 0, insert_VECTOR8, extract_VECTOR8, 0, BFD_RELOC_NONE },


  { 0, 0, insert_VECTOR5, extract_VECTOR5, 0, BFD_RELOC_NONE },


  { 5, 0, 
# 1273 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
         ((void *)0)
# 1273 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
             , 
# 1273 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
               ((void *)0)
# 1273 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                   , 0x40, BFD_RELOC_NONE },


  { 5, 11, 
# 1276 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
          ((void *)0)
# 1276 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
              , 
# 1276 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c" 3 4
                ((void *)0)
# 1276 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
                    , 0x40, BFD_RELOC_NONE },


  { 0, 0, insert_CACHEOP, extract_CACHEOP, 0x400000, BFD_RELOC_NONE },


  { 0, 0, insert_PREFOP, extract_PREFOP, 0x800000, BFD_RELOC_NONE },


  { 0, 0, insert_IMM10U, extract_IMM10U, 0, BFD_RELOC_NONE },
};
# 1338 "project/radare2/libr/asm/arch/v850/gnu/v850-opc.c"
const struct v850_opcode v850_opcodes[] =
{

{ "add", ((0x0e & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "add", ((0x12 & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "addi", ((0x30 & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "adf", ((unsigned int) (0x07e0) | ((unsigned int) (0x03a0) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07e1) << 16)), {(((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },

{ "and", ((0x0a & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "andi", ((0x36 & 0x3f) << 5), ((0x3f & 0x3f) << 5), {((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },


{ "bge", ((0x58 << 4) | (0xe & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "bgt", ((0x58 << 4) | (0xf & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "ble", ((0x58 << 4) | (0x7 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "blt", ((0x58 << 4) | (0x6 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "bh", ((0x58 << 4) | (0xb & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "bl", ((0x58 << 4) | (0x1 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "bnh", ((0x58 << 4) | (0x3 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "bnl", ((0x58 << 4) | (0x9 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "be", ((0x58 << 4) | (0x2 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "bne", ((0x58 << 4) | (0xa & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "bc", ((0x58 << 4) | (0x1 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "bf", ((0x58 << 4) | (0xa & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "bn", ((0x58 << 4) | (0x4 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "bnc", ((0x58 << 4) | (0x9 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "bnv", ((0x58 << 4) | (0x8 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "bnz", ((0x58 << 4) | (0xa & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "bp", ((0x58 << 4) | (0xc & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "br", ((0x58 << 4) | (0x5 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "bsa", ((0x58 << 4) | (0xd & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "bt", ((0x58 << 4) | (0x2 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "bv", ((0x58 << 4) | (0x0 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "bz", ((0x58 << 4) | (0x2 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },


{ "bge", ((unsigned int) (0x07ee) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "bgt", ((unsigned int) (0x07ef) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "ble", ((unsigned int) (0x07e7) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "blt", ((unsigned int) (0x07e6) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "bh", ((unsigned int) (0x07eb) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "bl", ((unsigned int) (0x07e1) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "bnh", ((unsigned int) (0x07e3) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "bnl", ((unsigned int) (0x07e9) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "be", ((unsigned int) (0x07e2) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "bne", ((unsigned int) (0x07ea) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "bc", ((unsigned int) (0x07e1) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "bf", ((unsigned int) (0x07ea) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "bn", ((unsigned int) (0x07e4) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "bnc", ((unsigned int) (0x07e9) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "bnv", ((unsigned int) (0x07e8) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "bnz", ((unsigned int) (0x07ea) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "bp", ((unsigned int) (0x07ec) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "br", ((unsigned int) (0x07e5) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "bsa", ((unsigned int) (0x07ed) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "bt", ((unsigned int) (0x07e2) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "bv", ((unsigned int) (0x07e0) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "bz", ((unsigned int) (0x07e2) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },



{ "bge17", ((unsigned int) (0x07ee) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },
{ "bgt17", ((unsigned int) (0x07ef) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },
{ "ble17", ((unsigned int) (0x07e7) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },
{ "blt17", ((unsigned int) (0x07e6) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },

{ "bh17", ((unsigned int) (0x07eb) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },
{ "bl17", ((unsigned int) (0x07e1) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },
{ "bnh17", ((unsigned int) (0x07e3) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },
{ "bnl17", ((unsigned int) (0x07e9) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },

{ "be17", ((unsigned int) (0x07e2) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },
{ "bne17", ((unsigned int) (0x07ea) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },

{ "bc17", ((unsigned int) (0x07e1) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },
{ "bf17", ((unsigned int) (0x07ea) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },
{ "bn17", ((unsigned int) (0x07e4) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },
{ "bnc17", ((unsigned int) (0x07e9) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },
{ "bnv17", ((unsigned int) (0x07e8) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },
{ "bnz17", ((unsigned int) (0x07ea) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },
{ "bp17", ((unsigned int) (0x07ec) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },
{ "br17", ((unsigned int) (0x07e5) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },
{ "bsa17", ((unsigned int) (0x07ed) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },
{ "bt17", ((unsigned int) (0x07e2) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },
{ "bv17", ((unsigned int) (0x07e0) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },
{ "bz17", ((unsigned int) (0x07e2) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffef) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },

{ "bsh", ((unsigned int) (0x07e0) | ((unsigned int) (0x0342) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "bsw", ((unsigned int) (0x07e0) | ((unsigned int) (0x0340) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },


{ "bins", ((unsigned int) (0x07e0) | ((unsigned int) (0x0090) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07f1) << 16)), {(0 + 1), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "bins", ((unsigned int) (0x07e0) | ((unsigned int) (0x00b0) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07f1) << 16)), {(0 + 1), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "bins", ((unsigned int) (0x07e0) | ((unsigned int) (0x00d0) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07f1) << 16)), {(0 + 1), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "binsu",((unsigned int) (0x07e0) | ((unsigned int) (0x0090) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07f1) << 16)), {(0 + 1), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },
{ "binsm",((unsigned int) (0x07e0) | ((unsigned int) (0x00b0) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07f1) << 16)), {(0 + 1), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },
{ "binsl",((unsigned int) (0x07e0) | ((unsigned int) (0x00d0) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07f1) << 16)), {(0 + 1), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },

{ "cache", ((unsigned int) (0xe7e0) | ((unsigned int) (0x0160) << 16)), ((unsigned int) (0xe7e0) | ((unsigned int) (0x07ff) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 2, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "callt", ((unsigned int) (0x0200)), ((unsigned int) (0xffc0)), {((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "caxi", ((unsigned int) (0x07e0) | ((unsigned int) (0x00ee) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 1, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },

{ "clr1", ((unsigned int) (0x87c0) | ((unsigned int) (0x0000) << 16)), ((unsigned int) (0xc7e0) | ((unsigned int) (0x0000) << 16)), {(((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 3, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "clr1", ((unsigned int) (0x07e0) | ((unsigned int) (0x00e4) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0xffff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 3, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "cmov", ((unsigned int) (0x07e0) | ((unsigned int) (0x0320) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07e1) << 16)), {((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },
{ "cmov", ((unsigned int) (0x07e0) | ((unsigned int) (0x0300) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07e1) << 16)), {((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "cmp", ((0x0f & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "cmp", ((0x13 & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "ctret", ((unsigned int) (0x07e0) | ((unsigned int) (0x0144) << 16)), ((unsigned int) (0xffff) | ((unsigned int) (0xffff) << 16)), {0}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "dbcp", ((unsigned int) (0xe840)), ((unsigned int) (0xffff)), {0}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "dbhvtrap", ((unsigned int) (0xe040)), ((unsigned int) (0xffff)), {0}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "dbpush", ((unsigned int) (0x5fe0) | ((unsigned int) (0x0160) << 16)), ((unsigned int) (0xffe0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "dbret", ((unsigned int) (0x07e0) | ((unsigned int) (0x0146) << 16)), ((unsigned int) (0xffff) | ((unsigned int) (0xffff) << 16)), {0}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "dbtag", ((unsigned int) (0xcfe0) | ((unsigned int) (0x0160) << 16)), ((unsigned int) (0xffe0) | ((unsigned int) (0x07ff) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "dbtrap", ((unsigned int) (0xf840)), ((unsigned int) (0xffff)), {0}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "di", ((unsigned int) (0x07e0) | ((unsigned int) (0x0160) << 16)), ((unsigned int) (0xffff) | ((unsigned int) (0xffff) << 16)), {0}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "dispose", ((unsigned int) (0x0640) | ((unsigned int) (0x0000) << 16)), ((unsigned int) (0xffc0) | ((unsigned int) (0x0000) << 16)), {((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)},3, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },
{ "dispose", ((unsigned int) (0x0640) | ((unsigned int) (0x0000) << 16)), ((unsigned int) (0xffc0) | ((unsigned int) (0x001f) << 16)), {((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "div", ((unsigned int) (0x07e0) | ((unsigned int) (0x02c0) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "divh", ((unsigned int) (0x07e0) | ((unsigned int) (0x0280) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },
{ "divh", ((0x02 & 0x3f) << 5), ((0x3f & 0x3f) << 5), {((0 + 1) + 1), (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "divhn", ((unsigned int) (0x07e0) | ((unsigned int) (0x0280) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07c3) << 16)), {((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) | (1 << ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)))) },

{ "divhu", ((unsigned int) (0x07e0) | ((unsigned int) (0x0282) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "divhun", ((unsigned int) (0x07e0) | ((unsigned int) (0x0282) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07c3) << 16)), {((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) | (1 << ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)))) },
{ "divn", ((unsigned int) (0x07e0) | ((unsigned int) (0x02c0) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07c3) << 16)), {(((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) | (1 << ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)))) },

{ "divq", ((unsigned int) (0x07e0) | ((unsigned int) (0x02fc) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },

{ "divqu", ((unsigned int) (0x07e0) | ((unsigned int) (0x02fe) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },

{ "divu", ((unsigned int) (0x07e0) | ((unsigned int) (0x02c2) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "divun", ((unsigned int) (0x07e0) | ((unsigned int) (0x02c2) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07c3) << 16)), {(((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) | (1 << ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)))) },

{ "dst", ((unsigned int) (0x07e0) | ((unsigned int) (0x0134) << 16)), ((unsigned int) (0xfffff) | ((unsigned int) (0xffff) << 16)), {0}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "ei", ((unsigned int) (0x87e0) | ((unsigned int) (0x0160) << 16)), ((unsigned int) (0xffff) | ((unsigned int) (0xffff) << 16)), {0}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "eiret", ((unsigned int) (0x07e0) | ((unsigned int) (0x0148) << 16)), ((unsigned int) (0xffff) | ((unsigned int) (0xffff) << 16)), {0}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },

{ "est", ((unsigned int) (0x07e0) | ((unsigned int) (0x0132) << 16)), ((unsigned int) (0xfffff) | ((unsigned int) (0xffff) << 16)), {0}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "feret", ((unsigned int) (0x07e0) | ((unsigned int) (0x014a) << 16)), ((unsigned int) (0xffff) | ((unsigned int) (0xffff) << 16)), {0}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },

{ "fetrap", ((unsigned int) (0x0040)), ((unsigned int) (0x87ff)), {(((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },

{ "halt", ((unsigned int) (0x07e0) | ((unsigned int) (0x0120) << 16)), ((unsigned int) (0xffff) | ((unsigned int) (0xffff) << 16)), {0}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "hsh", ((unsigned int) (0x07e0) | ((unsigned int) (0x0346) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },

{ "hsw", ((unsigned int) (0x07e0) | ((unsigned int) (0x0344) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "hvcall", ((unsigned int) (0xd7e0) | ((unsigned int) (0x4160) << 16)), ((unsigned int) (0xffe0) | ((unsigned int) (0x41ff) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "hvtrap", ((unsigned int) (0x07e0) | ((unsigned int) (0x0110) << 16)), ((unsigned int) (0xffe0) | ((unsigned int) (0xffff) << 16)), {((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "jarl", ((unsigned int) (0xc7e0) | ((unsigned int) (0x0160) << 16)), ((unsigned int) (0xffe0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), (((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 1, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))},
{ "jarl", ((unsigned int) (0x0780) | ((unsigned int) (0x0000) << 16)), ((unsigned int) (0x07c0) | ((unsigned int) (0x0001) << 16)), {((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))))))},
{ "jarl", ((unsigned int) (0x02e0)), ((unsigned int) (0xffe0)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((0 + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },

{ "jarlr", ((unsigned int) (0xc7e0) | ((unsigned int) (0x0160) << 16)), ((unsigned int) (0xffe0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), (((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 1, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1)))},

{ "jarl22", ((unsigned int) (0x0780) | ((unsigned int) (0x0000) << 16)), ((unsigned int) (0x07c0) | ((unsigned int) (0x0001) << 16)), {((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1)))},

{ "jarl32", ((unsigned int) (0x02e0)), ((unsigned int) (0xffe0)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((0 + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },
{ "jarlw", ((unsigned int) (0x02e0)), ((unsigned int) (0xffe0)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((0 + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },

{ "jmp", ((unsigned int) (0x06e0) | ((unsigned int) (0x0000) << 16)), ((unsigned int) (0xffe0) | ((unsigned int) (0x0001) << 16)), {((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 2, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "jmp", ((unsigned int) (0x06e0)), ((unsigned int) (0xffe0)), {((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 2, (1 << ((((0 + 1) + 1) + 1))) | (1 << (((((0 + 1) + 1) + 1) + 1))) },
{ "jmp", ((unsigned int) (0x0060)), ((unsigned int) (0xffe0)), {(0 + 1)}, 1, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "jmp22", ((unsigned int) (0x0060)), ((unsigned int) (0xffe0)), {(0 + 1)}, 1, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },

{ "jmp32", ((unsigned int) (0x06e0)), ((unsigned int) (0xffe0)), {((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 2, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },
{ "jmpw", ((unsigned int) (0x06e0)), ((unsigned int) (0xffe0)), {((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 2, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },

{ "jr", ((unsigned int) (0x0780) | ((unsigned int) (0x0000) << 16)), ((unsigned int) (0xffc0) | ((unsigned int) (0x0001) << 16)), {((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "jr", ((unsigned int) (0x02e0)), ((unsigned int) (0xffff)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },

{ "jr22", ((unsigned int) (0x0780) | ((unsigned int) (0x0000) << 16)), ((unsigned int) (0xffc0) | ((unsigned int) (0x0001) << 16)), {((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },

{ "jr32", ((unsigned int) (0x02e0)), ((unsigned int) (0xffff)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },


{ "jgt", ((0x58 << 4) | (0xf & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "jge", ((0x58 << 4) | (0xe & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "jlt", ((0x58 << 4) | (0x6 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "jle", ((0x58 << 4) | (0x7 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "jh", ((0x58 << 4) | (0xb & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "jnh", ((0x58 << 4) | (0x3 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "jl", ((0x58 << 4) | (0x1 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "jnl", ((0x58 << 4) | (0x9 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "je", ((0x58 << 4) | (0x2 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "jne", ((0x58 << 4) | (0xa & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "jv", ((0x58 << 4) | (0x0 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "jnv", ((0x58 << 4) | (0x8 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "jn", ((0x58 << 4) | (0x4 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "jp", ((0x58 << 4) | (0xc & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "jc", ((0x58 << 4) | (0x1 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "jnc", ((0x58 << 4) | (0x9 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "jz", ((0x58 << 4) | (0x2 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "jnz", ((0x58 << 4) | (0xa & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "jbr", ((0x58 << 4) | (0x5 & 0x0f)), ((0x78 << 4) | 0x0f), {((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },


{ "ldacc", ((unsigned int) (0x07e0) | ((unsigned int) (0x0bc4) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0xffff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) | (1 << ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)))) },

{ "ld.b", ((unsigned int) (0x0700) | ((unsigned int) (0x0000) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x0000) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 2, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "ld.b", ((unsigned int) (0x0780) | ((unsigned int) (0x0005) << 16)), ((unsigned int) (0xffe0) | ((unsigned int) (0x000f) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 2, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },
{ "ld.b23", ((unsigned int) (0x0780) | ((unsigned int) (0x0005) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x000f) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 2, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },

{ "ld.bu", ((unsigned int) (0x0780) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0x07c0) | ((unsigned int) (0x0001) << 16)), {((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 2, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },
{ "ld.bu", ((unsigned int) (0x07a0) | ((unsigned int) (0x0005) << 16)), ((unsigned int) (0xffe0) | ((unsigned int) (0x000f) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 2, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },
{ "ld.bu23", ((unsigned int) (0x07a0) | ((unsigned int) (0x0005) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x000f) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 2, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },

{ "ld.dw", ((unsigned int) (0x07a0) | ((unsigned int) (0x0009) << 16)), ((unsigned int) (0xffe0) | ((unsigned int) (0x001f) << 16)), {((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 2, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "ld.dw23", ((unsigned int) (0x07a0) | ((unsigned int) (0x0009) << 16)), ((unsigned int) (0xffe0) | ((unsigned int) (0x001f) << 16)), {((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 2, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },

{ "ld.h", ((unsigned int) (0x0720) | ((unsigned int) (0x0000) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 2, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "ld.h", ((unsigned int) (0x0780) | ((unsigned int) (0x0007) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x000f) << 16)), {((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 2, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },
{ "ld.h23", ((unsigned int) (0x0780) | ((unsigned int) (0x0007) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x000f) << 16)), {((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 2, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },

{ "ld.hu", ((unsigned int) (0x07e0) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 2, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },
{ "ld.hu", ((unsigned int) (0x07a0) | ((unsigned int) (0x0007) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x000f) << 16)), {((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 2, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },
{ "ld.hu23", ((unsigned int) (0x07a0) | ((unsigned int) (0x0007) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x000f) << 16)), {((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 2, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },

{ "ld.w", ((unsigned int) (0x0720) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x0001) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 2, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "ld.w", ((unsigned int) (0x0780) | ((unsigned int) (0x0009) << 16)), ((unsigned int) (0xffe0) | ((unsigned int) (0x001f) << 16)), {((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 2, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },
{ "ld.w23", ((unsigned int) (0x0780) | ((unsigned int) (0x0009) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x001f) << 16)), {((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 2, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },

{ "ldl.w", ((unsigned int) (0x07e0) | ((unsigned int) (0x0378) << 16)), ((unsigned int) (0xffe0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 1, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "ldsr", ((unsigned int) (0x07e0) | ((unsigned int) (0x0020) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "ldsr", ((unsigned int) (0x07e0) | ((unsigned int) (0x0020) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "ldsr", ((unsigned int) (0x07e0) | ((unsigned int) (0x0020) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), (((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },

{ "ldtc.gr", ((unsigned int) (0x07e0) | ((unsigned int) (0x0032) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0xffff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "ldtc.sr", ((unsigned int) (0x07e0) | ((unsigned int) (0x0030) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "ldtc.sr", ((unsigned int) (0x07e0) | ((unsigned int) (0x0030) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "ldtc.vr", ((unsigned int) (0x07e0) | ((unsigned int) (0x0832) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0xffff) << 16)), {(0 + 1), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "ldtc.pc", ((unsigned int) (0x07e0) | ((unsigned int) (0xf832) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0xffff) << 16)), {(0 + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "ldvc.sr", ((unsigned int) (0x07e0) | ((unsigned int) (0x0034) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "ldvc.sr", ((unsigned int) (0x07e0) | ((unsigned int) (0x0034) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "loop", ((unsigned int) (0x06e0) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffe0) | ((unsigned int) (0x0001) << 16)), {(0 + 1), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "macacc", ((unsigned int) (0x07e0) | ((unsigned int) (0x0bc0) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0xffff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) | (1 << ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)))) },

{ "mac", ((unsigned int) (0x07e0) | ((unsigned int) (0x03c0) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x0fe1) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },

{ "macu", ((unsigned int) (0x07e0) | ((unsigned int) (0x03e0) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x0fe1) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },

{ "macuacc", ((unsigned int) (0x07e0) | ((unsigned int) (0x0bc2) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0xffff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) | (1 << ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)))) },

{ "mov", ((0x00 & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(0 + 1), (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "mov", ((0x10 & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "mov", ((unsigned int) (0x0620)), ((unsigned int) (0xffe0)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "movl", ((unsigned int) (0x0620)), ((unsigned int) (0xffe0)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },

{ "movea", ((0x31 & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "movhi", ((0x32 & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "mul", ((unsigned int) (0x07e0) | ((unsigned int) (0x0220) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },
{ "mul", ((unsigned int) (0x07e0) | ((unsigned int) (0x0240) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07c3) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "mulh", ((0x17 & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "mulh", ((0x07 & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(0 + 1), (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "mulhi", ((0x37 & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "mulu", ((unsigned int) (0x07e0) | ((unsigned int) (0x0222) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },
{ "mulu", ((unsigned int) (0x07e0) | ((unsigned int) (0x0242) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07c3) << 16)), {((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "nop", ((unsigned int) (0x00)), ((unsigned int) (0xffff)), {0}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "not", ((0x01 & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "not1", ((unsigned int) (0x47c0) | ((unsigned int) (0x0000) << 16)), ((unsigned int) (0xc7e0) | ((unsigned int) (0x0000) << 16)), {(((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 3, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "not1", ((unsigned int) (0x07e0) | ((unsigned int) (0x00e2) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0xffff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 3, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "or", ((0x08 & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "ori", ((0x34 & 0x3f) << 5), ((0x3f & 0x3f) << 5), {((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "popsp", ((unsigned int) (0x67e0) | ((unsigned int) (0x0160) << 16)), ((unsigned int) (0xffe0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "pref", ((unsigned int) (0xdfe0) | ((unsigned int) (0x0160) << 16)), ((unsigned int) (0xffe0) | ((unsigned int) (0x07ff) << 16)), {((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 2, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "prepare", ((unsigned int) (0x0780) | ((unsigned int) (0x0003) << 16)), ((unsigned int) (0xffc0) | ((unsigned int) (0x001f) << 16)), {((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },
{ "prepare", ((unsigned int) (0x0780) | ((unsigned int) (0x000b) << 16)), ((unsigned int) (0xffc0) | ((unsigned int) (0x001f) << 16)), {((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)},0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },
{ "prepare", ((unsigned int) (0x0780) | ((unsigned int) (0x0013) << 16)), ((unsigned int) (0xffc0) | ((unsigned int) (0x001f) << 16)), {((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)},0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },
{ "prepare", ((unsigned int) (0x0780) | ((unsigned int) (0x001b) << 16)), ((unsigned int) (0xffc0) | ((unsigned int) (0x001f) << 16)), {((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },
{ "prepare", ((unsigned int) (0x0780) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0xffc0) | ((unsigned int) (0x001f) << 16)), {((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "pushsp", ((unsigned int) (0x47e0) | ((unsigned int) (0x0160) << 16)), ((unsigned int) (0xffe0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "rotl", ((unsigned int) (0x07e0) | ((unsigned int) (0x00c6) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "rotl", ((unsigned int) (0x07e0) | ((unsigned int) (0x00c4) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "reti", ((unsigned int) (0x07e0) | ((unsigned int) (0x0140) << 16)), ((unsigned int) (0xffff) | ((unsigned int) (0xffff) << 16)), {0}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "sar", ((unsigned int) (0x07e0) | ((unsigned int) (0x00a2) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },
{ "sar", ((0x15 & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "sar", ((unsigned int) (0x07e0) | ((unsigned int) (0x00a0) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0xffff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "sasf", ((unsigned int) (0x07e0) | ((unsigned int) (0x0200) << 16)), ((unsigned int) (0x07f0) | ((unsigned int) (0xffff) << 16)), {((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "satadd", ((unsigned int) (0x07e0) | ((unsigned int) (0x03ba) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },
{ "satadd", ((0x11 & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "satadd", ((0x06 & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(0 + 1), (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "satsub", ((unsigned int) (0x07e0) | ((unsigned int) (0x039a) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },
{ "satsub", ((0x05 & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(0 + 1), (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "satsubi", ((0x33 & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "satsubr", ((0x04 & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(0 + 1), (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "sbf", ((unsigned int) (0x07e0) | ((unsigned int) (0x0380) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07e1) << 16)), {(((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },

{ "sch0l", ((unsigned int) (0x07e0) | ((unsigned int) (0x0364) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },

{ "sch0r", ((unsigned int) (0x07e0) | ((unsigned int) (0x0360) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },

{ "sch1l", ((unsigned int) (0x07e0) | ((unsigned int) (0x0366) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },

{ "sch1r", ((unsigned int) (0x07e0) | ((unsigned int) (0x0362) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },

{ "sdivhn", ((unsigned int) (0x07e0) | ((unsigned int) (0x0180) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07c3) << 16)), {((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) | (1 << ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)))) },
{ "sdivhun", ((unsigned int) (0x07e0) | ((unsigned int) (0x0182) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07c3) << 16)), {((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) | (1 << ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)))) },
{ "sdivn", ((unsigned int) (0x07e0) | ((unsigned int) (0x01c0) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07c3) << 16)), {((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) | (1 << ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)))) },
{ "sdivun", ((unsigned int) (0x07e0) | ((unsigned int) (0x01c2) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07c3) << 16)), {((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) | (1 << ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)))) },

{ "set1", ((unsigned int) (0x07c0) | ((unsigned int) (0x0000) << 16)), ((unsigned int) (0xc7e0) | ((unsigned int) (0x0000) << 16)), {(((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 3, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "set1", ((unsigned int) (0x07e0) | ((unsigned int) (0x00e0) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0xffff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 3, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "setf", ((unsigned int) (0x07e0) | ((unsigned int) (0x0000) << 16)), ((unsigned int) (0x07f0) | ((unsigned int) (0xffff) << 16)), {((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "shl", ((unsigned int) (0x07e0) | ((unsigned int) (0x00c2) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },
{ "shl", ((0x16 & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "shl", ((unsigned int) (0x07e0) | ((unsigned int) (0x00c0) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0xffff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "shr", ((unsigned int) (0x07e0) | ((unsigned int) (0x0082) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },
{ "shr", ((0x14 & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "shr", ((unsigned int) (0x07e0) | ((unsigned int) (0x0080) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0xffff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "sld.b", ((unsigned int) (0x0300)), ((unsigned int) (0x0780)), {(((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 2, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "sld.bu", ((unsigned int) (0x0060)), ((unsigned int) (0x07f0)), {((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 2, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "sld.h", ((unsigned int) (0x0400)), ((unsigned int) (0x0780)), {((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1),(((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 2, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "sld.hu", ((unsigned int) (0x0070)), ((unsigned int) (0x07f0)), {(((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1),(((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 2, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "sld.w", ((unsigned int) (0x0500)), ((unsigned int) (0x0781)), {(((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1),(((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 2, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "snooze", ((unsigned int) (0x0fe0) | ((unsigned int) (0x0120) << 16)), ((unsigned int) (0xffff) | ((unsigned int) (0xffff) << 16)), {0}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "sst.b", ((unsigned int) (0x0380)), ((unsigned int) (0x0780)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 3, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "sst.h", ((unsigned int) (0x0480)), ((unsigned int) (0x0780)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1),(((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 3, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "sst.w", ((unsigned int) (0x0501)), ((unsigned int) (0x0781)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1),(((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 3, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "stacch", ((unsigned int) (0x07e0) | ((unsigned int) (0x0bca) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0xffff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) | (1 << ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)))) },
{ "staccl", ((unsigned int) (0x07e0) | ((unsigned int) (0x0bc8) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0xffff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) | (1 << ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)))) },

{ "st.b", ((unsigned int) (0x0740) | ((unsigned int) (0x0000) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x0000) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 3, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "st.b", ((unsigned int) (0x0780) | ((unsigned int) (0x000d) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x000f) << 16)), {((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 3, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },
{ "st.b23", ((unsigned int) (0x0780) | ((unsigned int) (0x000d) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x000f) << 16)), {((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 3, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },

{ "st.dw", ((unsigned int) (0x07a0) | ((unsigned int) (0x000f) << 16)), ((unsigned int) (0xffe0) | ((unsigned int) (0x001f) << 16)), {((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 3, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "st.dw23", ((unsigned int) (0x07a0) | ((unsigned int) (0x000f) << 16)), ((unsigned int) (0xffe0) | ((unsigned int) (0x001f) << 16)), {((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 3, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },

{ "st.h", ((unsigned int) (0x0760) | ((unsigned int) (0x0000) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x0001) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 3, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "st.h", ((unsigned int) (0x07a0) | ((unsigned int) (0x000d) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x000f) << 16)), {((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 3, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },
{ "st.h23", ((unsigned int) (0x07a0) | ((unsigned int) (0x000d) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x000f) << 16)), {((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 3, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },

{ "st.w", ((unsigned int) (0x0760) | ((unsigned int) (0x0001) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x0001) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 3, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "st.w", ((unsigned int) (0x0780) | ((unsigned int) (0x000f) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x000f) << 16)), {((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 3, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },
{ "st.w23", ((unsigned int) (0x0780) | ((unsigned int) (0x000f) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x000f) << 16)), {((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 3, ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },

{ "stc.w", ((unsigned int) (0x07e0) | ((unsigned int) (0x037a) << 16)), ((unsigned int) (0xffe0) | ((unsigned int) (0x07ff) << 16)), {((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 2, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "stsr", ((unsigned int) (0x07e0) | ((unsigned int) (0x0040) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "stsr", ((unsigned int) (0x07e0) | ((unsigned int) (0x0040) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "stsr", ((unsigned int) (0x07e0) | ((unsigned int) (0x0040) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))) },

{ "sttc.gr", ((unsigned int) (0x07e0) | ((unsigned int) (0x0052) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0xffff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "sttc.sr", ((unsigned int) (0x07e0) | ((unsigned int) (0x0050) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "sttc.sr", ((unsigned int) (0x07e0) | ((unsigned int) (0x0050) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "sttc.vr", ((unsigned int) (0x07e0) | ((unsigned int) (0x0852) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0xffff) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "sttc.pc", ((unsigned int) (0x07e0) | ((unsigned int) (0xf852) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0xffff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "stvc.sr", ((unsigned int) (0x07e0) | ((unsigned int) (0x0054) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "stvc.sr", ((unsigned int) (0x07e0) | ((unsigned int) (0x0054) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "sub", ((0x0d & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "subr", ((0x0c & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "switch", ((unsigned int) (0x0040)), ((unsigned int) (0xffe0)), {((0 + 1) + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "sxb", ((unsigned int) (0x00a0)), ((unsigned int) (0xffe0)), {(0 + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "sxh", ((unsigned int) (0x00e0)), ((unsigned int) (0xffe0)), {(0 + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "tlbai", ((unsigned int) (0x87e0) | ((unsigned int) (0x8960) << 16)), ((unsigned int) (0xffff) | ((unsigned int) (0xffff) << 16)), {0}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "tlbr", ((unsigned int) (0x87e0) | ((unsigned int) (0xe960) << 16)), ((unsigned int) (0xffff) | ((unsigned int) (0xffff) << 16)), {0}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "tlbs", ((unsigned int) (0x87e0) | ((unsigned int) (0xc160) << 16)), ((unsigned int) (0xffff) | ((unsigned int) (0xffff) << 16)), {0}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "tlbvi", ((unsigned int) (0x87e0) | ((unsigned int) (0x8160) << 16)), ((unsigned int) (0xffff) | ((unsigned int) (0xffff) << 16)), {0}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "tlbw", ((unsigned int) (0x87e0) | ((unsigned int) (0xe160) << 16)), ((unsigned int) (0xffff) | ((unsigned int) (0xffff) << 16)), {0}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "trap", ((unsigned int) (0x07e0) | ((unsigned int) (0x0100) << 16)), ((unsigned int) (0xffe0) | ((unsigned int) (0xffff) << 16)), {(((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "tst", ((0x0b & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "tst1", ((unsigned int) (0xc7c0) | ((unsigned int) (0x0000) << 16)), ((unsigned int) (0xc7e0) | ((unsigned int) (0x0000) << 16)), {(((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 3, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },
{ "tst1", ((unsigned int) (0x07e0) | ((unsigned int) (0x00e6) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0xffff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 3, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "xor", ((0x09 & 0x3f) << 5), ((0x3f & 0x3f) << 5), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "xori", ((0x35 & 0x3f) << 5), ((0x3f & 0x3f) << 5), {((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "zxb", ((unsigned int) (0x0080)), ((unsigned int) (0xffe0)), {(0 + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },

{ "zxh", ((unsigned int) (0x00c0)), ((unsigned int) (0xffe0)), {(0 + 1)}, 0, (((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) & (~ (1 << (0)))) },


{ "absf.d", ((unsigned int) (0x07e0) | ((unsigned int) (0x0458) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x0fff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "absf.s", ((unsigned int) (0x07e0) | ((unsigned int) (0x0448) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "addf.d", ((unsigned int) (0x07e0) | ((unsigned int) (0x0470) << 16)), ((unsigned int) (0x0fe1) | ((unsigned int) (0x0fff) << 16)), {(((0 + 1) + 1) + 1), ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "addf.s", ((unsigned int) (0x07e0) | ((unsigned int) (0x0460) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "ceilf.dl", ((unsigned int) (0x07e2) | ((unsigned int) (0x0454) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x0fff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "ceilf.dul", ((unsigned int) (0x07f2) | ((unsigned int) (0x0454) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x0fff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "ceilf.duw", ((unsigned int) (0x07f2) | ((unsigned int) (0x0450) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x07ff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "ceilf.dw", ((unsigned int) (0x07e2) | ((unsigned int) (0x0450) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x07ff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "ceilf.sl", ((unsigned int) (0x07e2) | ((unsigned int) (0x0444) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x0fff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "ceilf.sul", ((unsigned int) (0x07f2) | ((unsigned int) (0x0444) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x0fff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "ceilf.suw", ((unsigned int) (0x07f2) | ((unsigned int) (0x0440) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "ceilf.sw", ((unsigned int) (0x07e2) | ((unsigned int) (0x0440) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "cmovf.d", ((unsigned int) (0x07e0) | ((unsigned int) (0x0410) << 16)), ((unsigned int) (0x0fe1) | ((unsigned int) (0x0ff1) << 16)), {(((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((0 + 1) + 1) + 1), ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },

{ "cmovf.d", ((unsigned int) (0x07e0) | ((unsigned int) (0x0410) << 16)), ((unsigned int) (0x0fe1) | ((unsigned int) (0x0fff) << 16)), {(((0 + 1) + 1) + 1), ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "cmovf.s", ((unsigned int) (0x07e0) | ((unsigned int) (0x0400) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07f1) << 16)), {(((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },

{ "cmovf.s", ((unsigned int) (0x07e0) | ((unsigned int) (0x0400) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "cmpf.d", ((unsigned int) (0x07e0) | ((unsigned int) (0x0430) << 16)), ((unsigned int) (0x0fe1) | ((unsigned int) (0x87f1) << 16)), {(((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((0 + 1) + 1) + 1), (((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "cmpf.d", ((unsigned int) (0x07e0) | ((unsigned int) (0x0430) << 16)), ((unsigned int) (0x0fe1) | ((unsigned int) (0x87ff) << 16)), {(((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((0 + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "cmpf.s", ((unsigned int) (0x07e0) | ((unsigned int) (0x0420) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x87f1) << 16)), {(((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1), (((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "cmpf.s", ((unsigned int) (0x07e0) | ((unsigned int) (0x0420) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x87ff) << 16)), {(((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), (0 + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "cvtf.dl", ((unsigned int) (0x07e4) | ((unsigned int) (0x0454) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x0fff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "cvtf.ds", ((unsigned int) (0x07e3) | ((unsigned int) (0x0452) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x07ff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "cvtf.dul", ((unsigned int) (0x07f4) | ((unsigned int) (0x0454) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x0fff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "cvtf.duw", ((unsigned int) (0x07f4) | ((unsigned int) (0x0450) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x07ff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "cvtf.dw", ((unsigned int) (0x07e4) | ((unsigned int) (0x0450) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x07ff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "cvtf.hs", ((unsigned int) (0x07e2) | ((unsigned int) (0x0442) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "cvtf.ld", ((unsigned int) (0x07e1) | ((unsigned int) (0x0452) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x0fff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "cvtf.ls", ((unsigned int) (0x07e1) | ((unsigned int) (0x0442) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x07ff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "cvtf.sd", ((unsigned int) (0x07e2) | ((unsigned int) (0x0452) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x0fff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "cvtf.sl", ((unsigned int) (0x07e4) | ((unsigned int) (0x0444) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x0fff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "cvtf.sh", ((unsigned int) (0x07e3) | ((unsigned int) (0x0442) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "cvtf.sul", ((unsigned int) (0x07f4) | ((unsigned int) (0x0444) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x0fff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "cvtf.suw", ((unsigned int) (0x07f4) | ((unsigned int) (0x0440) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "cvtf.sw", ((unsigned int) (0x07e4) | ((unsigned int) (0x0440) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "cvtf.uld", ((unsigned int) (0x07f1) | ((unsigned int) (0x0452) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x0fff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "cvtf.uls", ((unsigned int) (0x07f1) | ((unsigned int) (0x0442) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x07ff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "cvtf.uwd", ((unsigned int) (0x07f0) | ((unsigned int) (0x0452) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x0fff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "cvtf.uws", ((unsigned int) (0x07f0) | ((unsigned int) (0x0442) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "cvtf.wd", ((unsigned int) (0x07e0) | ((unsigned int) (0x0452) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x0fff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "cvtf.ws", ((unsigned int) (0x07e0) | ((unsigned int) (0x0442) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "divf.d", ((unsigned int) (0x07e0) | ((unsigned int) (0x047e) << 16)), ((unsigned int) (0x0fe1) | ((unsigned int) (0x0fff) << 16)), {(((0 + 1) + 1) + 1), ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "divf.s", ((unsigned int) (0x07e0) | ((unsigned int) (0x046e) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {((0 + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "floorf.dl", ((unsigned int) (0x07e3) | ((unsigned int) (0x0454) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x0fff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "floorf.dul", ((unsigned int) (0x07f3) | ((unsigned int) (0x0454) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x0fff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "floorf.duw", ((unsigned int) (0x07f3) | ((unsigned int) (0x0450) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x07ff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "floorf.dw", ((unsigned int) (0x07e3) | ((unsigned int) (0x0450) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x07ff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "floorf.sl", ((unsigned int) (0x07e3) | ((unsigned int) (0x0444) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x0fff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "floorf.sul", ((unsigned int) (0x07f3) | ((unsigned int) (0x0444) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x0fff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "floorf.suw", ((unsigned int) (0x07f3) | ((unsigned int) (0x0440) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "floorf.sw", ((unsigned int) (0x07e3) | ((unsigned int) (0x0440) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "maddf.s", ((unsigned int) (0x07e0) | ((unsigned int) (0x0500) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x0761) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (1 << (((((0 + 1) + 1) + 1) + 1))) },
{ "fmaf.s", ((unsigned int) (0x07e0) | ((unsigned int) (0x04e0) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "maxf.d", ((unsigned int) (0x07e0) | ((unsigned int) (0x0478) << 16)), ((unsigned int) (0x0fe1) | ((unsigned int) (0x0fff) << 16)), {(((0 + 1) + 1) + 1), ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "maxf.s", ((unsigned int) (0x07e0) | ((unsigned int) (0x0468) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "minf.d", ((unsigned int) (0x07e0) | ((unsigned int) (0x047a) << 16)), ((unsigned int) (0x0fe1) | ((unsigned int) (0x0fff) << 16)), {(((0 + 1) + 1) + 1), ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "minf.s", ((unsigned int) (0x07e0) | ((unsigned int) (0x046a) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "msubf.s", ((unsigned int) (0x07e0) | ((unsigned int) (0x0520) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x0761) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (1 << (((((0 + 1) + 1) + 1) + 1))) },
{ "fmsf.s", ((unsigned int) (0x07e0) | ((unsigned int) (0x04e2) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "mulf.d", ((unsigned int) (0x07e0) | ((unsigned int) (0x0474) << 16)), ((unsigned int) (0x0fe1) | ((unsigned int) (0x0fff) << 16)), {(((0 + 1) + 1) + 1), ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "mulf.s", ((unsigned int) (0x07e0) | ((unsigned int) (0x0464) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "negf.d", ((unsigned int) (0x07e1) | ((unsigned int) (0x0458) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x0fff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "negf.s", ((unsigned int) (0x07e1) | ((unsigned int) (0x0448) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "nmaddf.s", ((unsigned int) (0x07e0) | ((unsigned int) (0x0540) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x0761) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (1 << (((((0 + 1) + 1) + 1) + 1))) },
{ "fnmaf.s", ((unsigned int) (0x07e0) | ((unsigned int) (0x04e4) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "nmsubf.s", ((unsigned int) (0x07e0) | ((unsigned int) (0x0560) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x0761) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, (1 << (((((0 + 1) + 1) + 1) + 1))) },
{ "fnmsf.s", ((unsigned int) (0x07e0) | ((unsigned int) (0x04e6) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },
{ "recipf.d", ((unsigned int) (0x07e1) | ((unsigned int) (0x045e) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x0fff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "recipf.s", ((unsigned int) (0x07e1) | ((unsigned int) (0x044e) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },

{ "roundf.dl", ((unsigned int) (0x07e0) | ((unsigned int) (0x0454) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x0fff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) | (1 << ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)))) },
{ "roundf.dul", ((unsigned int) (0x07f0) | ((unsigned int) (0x0454) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x0fff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) | (1 << ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)))) },
{ "roundf.duw", ((unsigned int) (0x07f0) | ((unsigned int) (0x0450) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x07ff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) | (1 << ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)))) },
{ "roundf.dw", ((unsigned int) (0x07e0) | ((unsigned int) (0x0450) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x07ff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) | (1 << ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)))) },
{ "roundf.sl", ((unsigned int) (0x07e0) | ((unsigned int) (0x0444) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x0fff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) | (1 << ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)))) },
{ "roundf.sul", ((unsigned int) (0x07f0) | ((unsigned int) (0x0444) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x0fff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) | (1 << ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)))) },
{ "roundf.suw", ((unsigned int) (0x07f0) | ((unsigned int) (0x0440) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) | (1 << ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)))) },
{ "roundf.sw", ((unsigned int) (0x07e0) | ((unsigned int) (0x0440) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) | (1 << ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)))) },

{ "rsqrtf.d", ((unsigned int) (0x07e2) | ((unsigned int) (0x045e) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x0fff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "rsqrtf.s", ((unsigned int) (0x07e2) | ((unsigned int) (0x044e) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "sqrtf.d", ((unsigned int) (0x07e0) | ((unsigned int) (0x045e) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x0fff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "sqrtf.s", ((unsigned int) (0x07e0) | ((unsigned int) (0x044e) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "subf.d", ((unsigned int) (0x07e0) | ((unsigned int) (0x0472) << 16)), ((unsigned int) (0x0fe1) | ((unsigned int) (0x0fff) << 16)), {(((0 + 1) + 1) + 1), ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "subf.s", ((unsigned int) (0x07e0) | ((unsigned int) (0x0462) << 16)), ((unsigned int) (0x07e0) | ((unsigned int) (0x07ff) << 16)), {(0 + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "trfsr", ((unsigned int) (0x07e0) | ((unsigned int) (0x0400) << 16)), ((unsigned int) (0xffff) | ((unsigned int) (0xfff1) << 16)), {(((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "trfsr", ((unsigned int) (0x07e0) | ((unsigned int) (0x0400) << 16)), ((unsigned int) (0xffff) | ((unsigned int) (0xffff) << 16)), {0}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "trncf.dl", ((unsigned int) (0x07e1) | ((unsigned int) (0x0454) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x0fff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "trncf.dul", ((unsigned int) (0x07f1) | ((unsigned int) (0x0454) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x0fff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "trncf.duw", ((unsigned int) (0x07f1) | ((unsigned int) (0x0450) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x07ff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "trncf.dw", ((unsigned int) (0x07e1) | ((unsigned int) (0x0450) << 16)), ((unsigned int) (0x0fff) | ((unsigned int) (0x07ff) << 16)), {((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "trncf.sl", ((unsigned int) (0x07e1) | ((unsigned int) (0x0444) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x0fff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "trncf.sul", ((unsigned int) (0x07f1) | ((unsigned int) (0x0444) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "trncf.suw", ((unsigned int) (0x07f1) | ((unsigned int) (0x0440) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "trncf.sw", ((unsigned int) (0x07e1) | ((unsigned int) (0x0440) << 16)), ((unsigned int) (0x07ff) | ((unsigned int) (0x07ff) << 16)), {((((((0 + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },


{ "breakpoint", ((unsigned int) (0x0001)), ((unsigned int) (0xffff)), {0}, 0, ((1 << (0)) | ((1 << ((0 + 1))) | (1 << (((0 + 1) + 1))) | ((1 << ((((0 + 1) + 1) + 1))) | ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))))))) },

{ "synci", ((unsigned int) (0x001c)), ((unsigned int) (0xffff)), {0}, 0, ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1)))) },

{ "synce", ((unsigned int) (0x001d)), ((unsigned int) (0xffff)), {0}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "syncm", ((unsigned int) (0x001e)), ((unsigned int) (0xffff)), {0}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "syncp", ((unsigned int) (0x001f)), ((unsigned int) (0xffff)), {0}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "syscall", ((unsigned int) (0xd7e0) | ((unsigned int) (0x0160) << 16)), ((unsigned int) (0xffe0) | ((unsigned int) (0xc7ff) << 16)), {((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },

{ "sync", ((unsigned int) (0x001f)), ((unsigned int) (0xffff)), {0}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) | (1 << (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1)) + 1))) },
{ "rmtrap", ((unsigned int) (0xf040)), ((unsigned int) (0xffff)), {0}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "rie", ((unsigned int) (0x0040)), ((unsigned int) (0xffff)), {0}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },
{ "rie", ((unsigned int) (0x07f0) | ((unsigned int) (0x0000) << 16)), ((unsigned int) (0x07f0) | ((unsigned int) (0xffff) << 16)), {(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1),((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)}, 0, ((1 << (((((0 + 1) + 1) + 1) + 1))) | ((1 << ((((((0 + 1) + 1) + 1) + 1) + 1))))) },

{ 0, 0, 0, {0}, 0, 0 },
} ;

const int v850_num_opcodes =
  sizeof (v850_opcodes) / sizeof (v850_opcodes[0]);
