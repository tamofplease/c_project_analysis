# 0 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
# 23 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/sysdep.h" 1 3 4
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/sysdep.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/ansidecl.h" 1 3 4
# 31 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/sysdep.h" 2 3 4
# 24 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 2
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
# 25 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/alpha.h" 1 3 4
# 28 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/alpha.h" 3 4
struct alpha_opcode
{

  const char *name;



  unsigned opcode;





  unsigned mask;




  unsigned flags;




  unsigned char operands[4];
};




extern const struct alpha_opcode alpha_opcodes[];
extern const unsigned alpha_num_opcodes;
# 82 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/alpha.h" 3 4
struct alpha_operand
{

  unsigned int bits : 5;


  unsigned int shift : 5;


  signed int default_reloc : 16;


  unsigned int flags : 16;
# 112 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/alpha.h" 3 4
  unsigned (*insert) (unsigned instruction, int op, const char **errmsg);
# 131 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/alpha.h" 3 4
  int (*extract) (unsigned instruction, int *invalid);
};




extern const struct alpha_operand alpha_operands[];
extern const unsigned alpha_num_operands;
# 26 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 2
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
# 27 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opintl.h" 1 3 4
# 28 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 2
# 61 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"

# 61 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
static unsigned
insert_rba (unsigned insn,
     int value 
# 63 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
              __attribute__ ((__unused__))
# 63 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                              ,
     const char **errmsg 
# 64 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                        __attribute__ ((__unused__))
# 64 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        )
{
  return insn | (((insn >> 21) & 0x1f) << 16);
}

static int
extract_rba (unsigned insn, int *invalid)
{
  if (invalid != (int *) 
# 72 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                        ((void *)0)
      
# 73 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
     && ((insn >> 21) & 0x1f) != ((insn >> 16) & 0x1f))
    *invalid = 1;
  return 0;
}



static unsigned
insert_rca (unsigned insn,
     int value 
# 82 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
              __attribute__ ((__unused__))
# 82 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                              ,
     const char **errmsg 
# 83 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                        __attribute__ ((__unused__))
# 83 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        )
{
  return insn | ((insn >> 21) & 0x1f);
}

static int
extract_rca (unsigned insn, int *invalid)
{
  if (invalid != (int *) 
# 91 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                        ((void *)0)
      
# 92 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
     && ((insn >> 21) & 0x1f) != (insn & 0x1f))
    *invalid = 1;
  return 0;
}



static unsigned
insert_za (unsigned insn,
    int value 
# 101 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
             __attribute__ ((__unused__))
# 101 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                             ,
    const char **errmsg 
# 102 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                       __attribute__ ((__unused__))
# 102 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       )
{
  return insn | (31 << 21);
}

static int
extract_za (unsigned insn, int *invalid)
{
  if (invalid != (int *) 
# 110 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                        ((void *)0) 
# 110 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                             && ((insn >> 21) & 0x1f) != 31)
    *invalid = 1;
  return 0;
}

static unsigned
insert_zb (unsigned insn,
    int value 
# 117 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
             __attribute__ ((__unused__))
# 117 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                             ,
    const char **errmsg 
# 118 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                       __attribute__ ((__unused__))
# 118 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       )
{
  return insn | (31 << 16);
}

static int
extract_zb (unsigned insn, int *invalid)
{
  if (invalid != (int *) 
# 126 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                        ((void *)0) 
# 126 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                             && ((insn >> 16) & 0x1f) != 31)
    *invalid = 1;
  return 0;
}

static unsigned
insert_zc (unsigned insn,
    int value 
# 133 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
             __attribute__ ((__unused__))
# 133 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                             ,
    const char **errmsg 
# 134 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                       __attribute__ ((__unused__))
# 134 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       )
{
  return insn | 31;
}

static int
extract_zc (unsigned insn, int *invalid)
{
  if (invalid != (int *) 
# 142 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                        ((void *)0) 
# 142 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                             && (insn & 0x1f) != 31)
    *invalid = 1;
  return 0;
}




static unsigned
insert_bdisp (unsigned insn, int value, const char **errmsg)
{
  if (errmsg != (const char **)
# 153 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              ((void *)0) 
# 153 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   && (value & 3))
    *errmsg = 
# 154 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
             (
# 154 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
             "branch operand unaligned"
# 154 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
             )
# 154 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          ;
  return insn | ((value / 4) & 0x1FFFFF);
}

static int
extract_bdisp (unsigned insn, int *invalid 
# 159 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                          __attribute__ ((__unused__))
# 159 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                                          )
{
  return 4 * (((insn & 0x1FFFFF) ^ 0x100000) - 0x100000);
}



static unsigned
insert_jhint (unsigned insn, int value, const char **errmsg)
{
  if (errmsg != (const char **)
# 169 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              ((void *)0) 
# 169 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   && (value & 3))
    *errmsg = 
# 170 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
             (
# 170 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
             "jump hint unaligned"
# 170 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
             )
# 170 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     ;
  return insn | ((value / 4) & 0x3FFF);
}

static int
extract_jhint (unsigned insn, int *invalid 
# 175 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                          __attribute__ ((__unused__))
# 175 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                                          )
{
  return 4 * (((insn & 0x3FFF) ^ 0x2000) - 0x2000);
}



static unsigned
insert_ev6hwjhint (unsigned insn, int value, const char **errmsg)
{
  if (errmsg != (const char **)
# 185 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              ((void *)0) 
# 185 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   && (value & 3))
    *errmsg = 
# 186 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
             (
# 186 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
             "jump hint unaligned"
# 186 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
             )
# 186 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     ;
  return insn | ((value / 4) & 0x1FFF);
}

static int
extract_ev6hwjhint (unsigned insn, int *invalid 
# 191 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                               __attribute__ ((__unused__))
# 191 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                                               )
{
  return 4 * (((insn & 0x1FFF) ^ 0x1000) - 0x1000);
}



const struct alpha_operand alpha_operands[] =
{



  { 0, 0, 0, 0, 0, 0 },



  { 5, 21, 0, 
# 207 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
             010
# 207 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                           , 0, 0 },

  { 5, 16, 0, 
# 209 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
             010
# 209 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                           , 0, 0 },

  { 5, 0, 0, 
# 211 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
            010
# 211 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                          , 0, 0 },



  { 5, 21, 0, 
# 215 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
             020
# 215 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                            , 0, 0 },

  { 5, 16, 0, 
# 217 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
             020
# 217 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                            , 0, 0 },

  { 5, 0, 0, 
# 219 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
            020
# 219 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                           , 0, 0 },



  { 5, 21, 0, 
# 223 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
             01
# 223 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                             , insert_za, extract_za },

  { 5, 16, 0, 
# 225 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
             01
# 225 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                             , insert_zb, extract_zb },

  { 5, 0, 0, 
# 227 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
            01
# 227 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                            , insert_zc, extract_zc },



  { 5, 16, 0, 
# 231 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
             010
# 231 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                           |
# 231 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            02
# 231 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                              , 0, 0 },



  { 5, 16, 0,
    
# 236 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
   010
# 236 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                 |
# 236 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                  02
# 236 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    |
# 236 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     04
# 236 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                                      , 0, 0 },



  { 5, 16, 0, 
# 240 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
             01
# 240 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                             , insert_rba, extract_rba },



  { 5, 0, 0, 
# 244 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
            01
# 244 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                            , insert_rca, extract_rca },



  { 5, 0, 0,
    
# 249 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
   010
# 249 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                 |
# 249 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                  02000
# 249 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                           , 0, 0 },



  { 5, 0, 0,
    
# 254 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
   010
# 254 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                 |
# 254 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                  04000
# 254 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                            , 0, 0 },



  { 5, 0, 0,
    
# 259 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
   020
# 259 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                  |
# 259 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                   02000
# 259 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                            , 0, 0 },



  { 5, 0, 0,
    
# 264 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
   020
# 264 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                  |
# 264 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                   04000
# 264 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                             , 0, 0 },



  { 8, 13, -((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 
# 268 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                0200
# 268 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , 0, 0 },




  { 16, 0, -(((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 
# 273 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                  0100
# 273 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , 0, 0 },



  { 21, 0, BFD_RELOC_23_PCREL_S2,
    
# 278 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
   040
# 278 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                       , insert_bdisp, extract_bdisp },



  { 26, 0, -(((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 
# 282 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                  0200
# 282 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                      , 0, 0 },



  { 14, 0, BFD_RELOC_ALPHA_HINT,
    
# 287 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
   040
# 287 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                       |
# 287 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                        01000
# 287 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                                |
# 287 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                                 0400
# 287 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                                                       ,
    insert_jhint, extract_jhint },



  { 14, 0, -(((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1),
    
# 293 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
   0200
# 293 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                       |
# 293 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                        01000
# 293 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                                , 0, 0 },




  { 12, 0, -((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 
# 298 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0100
# 298 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , 0, 0 },



  { 5, 0, -(((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 
# 302 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0200
# 302 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , 0, 0 },




  { 8, 0, -((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 
# 307 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                         0200
# 307 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                             , 0, 0 },



  { 10, 0, -(((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 
# 311 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0100
# 311 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , 0, 0 },



  { 16, 0, -((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 
# 315 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                       0200
# 315 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                           , 0, 0 },




  { 16, 0, -(((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 
# 320 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                       0200
# 320 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                           , 0, 0 },



  { 8, 0, -((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)+ 1),
    
# 325 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
   040
# 325 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                       |
# 325 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                        01000
# 325 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                                |
# 325 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                                 0400
# 325 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                                                       ,
    insert_ev6hwjhint, extract_ev6hwjhint }
};

const unsigned alpha_num_operands = sizeof(alpha_operands)/sizeof(*alpha_operands);
# 469 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
const struct alpha_opcode alpha_opcodes[] =
{
  { "halt", ((((0x00) & 0x3Fu) << 26) | ((0x0000) & 0x3FFFFFF)), 0xFFFFFFFF, 
# 471 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 471 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { 0 } },
  { "draina", ((((0x00) & 0x3Fu) << 26) | ((0x0002) & 0x3FFFFFF)), 0xFFFFFFFF, 
# 472 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0001
# 472 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { 0 } },
  { "bpt", ((((0x00) & 0x3Fu) << 26) | ((0x0080) & 0x3FFFFFF)), 0xFFFFFFFF, 
# 473 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 473 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { 0 } },
  { "bugchk", ((((0x00) & 0x3Fu) << 26) | ((0x0081) & 0x3FFFFFF)), 0xFFFFFFFF, 
# 474 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0001
# 474 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { 0 } },
  { "callsys", ((((0x00) & 0x3Fu) << 26) | ((0x0083) & 0x3FFFFFF)), 0xFFFFFFFF, 
# 475 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                  0x0001
# 475 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                      , { 0 } },
  { "chmk", ((((0x00) & 0x3Fu) << 26) | ((0x0083) & 0x3FFFFFF)), 0xFFFFFFFF, 
# 476 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 476 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { 0 } },
  { "imb", ((((0x00) & 0x3Fu) << 26) | ((0x0086) & 0x3FFFFFF)), 0xFFFFFFFF, 
# 477 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 477 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { 0 } },
  { "rduniq", ((((0x00) & 0x3Fu) << 26) | ((0x009e) & 0x3FFFFFF)), 0xFFFFFFFF, 
# 478 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0001
# 478 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { 0 } },
  { "wruniq", ((((0x00) & 0x3Fu) << 26) | ((0x009f) & 0x3FFFFFF)), 0xFFFFFFFF, 
# 479 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0001
# 479 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { 0 } },
  { "gentrap", ((((0x00) & 0x3Fu) << 26) | ((0x00aa) & 0x3FFFFFF)), 0xFFFFFFFF, 
# 480 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                  0x0001
# 480 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                      , { 0 } },
  { "call_pal", (((0x00) & 0x3Fu) << 26), 0xFC000000, 
# 481 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                           0x0001
# 481 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                               , { (((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "pal", (((0x00) & 0x3Fu) << 26), 0xFC000000, 
# 482 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0x0001
# 482 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                          , { (((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },

  { "lda", (((0x08) & 0x3Fu) << 26), 0xFC000000, 
# 484 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0x0001
# 484 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                          , { (0 + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "lda", (((0x08) & 0x3Fu) << 26), 0xFC000000, 
# 485 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0x0001
# 485 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                          , { (0 + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "ldah", (((0x09) & 0x3Fu) << 26), 0xFC000000, 
# 486 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                       0x0001
# 486 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                           , { (0 + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "ldah", (((0x09) & 0x3Fu) << 26), 0xFC000000, 
# 487 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                       0x0001
# 487 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                           , { (0 + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "ldbu", (((0x0A) & 0x3Fu) << 26), 0xFC000000, 
# 488 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                       0x0100
# 488 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                          , { (0 + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "unop", (((0x0B) & 0x3Fu) << 26) | (30 << 16),
   0xFC000000, 
# 490 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
            0x0001
# 490 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "ldq_u", (((0x0B) & 0x3Fu) << 26), 0xFC000000, 
# 491 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                        0x0001
# 491 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                            , { (0 + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "ldwu", (((0x0C) & 0x3Fu) << 26), 0xFC000000, 
# 492 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                       0x0100
# 492 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                          , { (0 + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "stw", (((0x0D) & 0x3Fu) << 26), 0xFC000000, 
# 493 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0x0100
# 493 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                         , { (0 + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "stb", (((0x0E) & 0x3Fu) << 26), 0xFC000000, 
# 494 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0x0100
# 494 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                         , { (0 + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "stq_u", (((0x0F) & 0x3Fu) << 26), 0xFC000000, 
# 495 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                        0x0001
# 495 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                            , { (0 + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },

  { "sextl", ((((0x10) & 0x3Fu) << 26) | (((0x00) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 497 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 497 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sextl", ((((((0x10)) & 0x3Fu) << 26) | ((((0x00)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 498 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 498 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((0 + 1) + 1) + 1) } },
  { "addl", ((((0x10) & 0x3Fu) << 26) | (((0x00) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 499 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 499 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addl", ((((((0x10)) & 0x3Fu) << 26) | ((((0x00)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 500 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 500 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "s4addl", ((((0x10) & 0x3Fu) << 26) | (((0x02) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 501 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 501 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "s4addl", ((((((0x10)) & 0x3Fu) << 26) | ((((0x02)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 502 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 502 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "negl", ((((0x10) & 0x3Fu) << 26) | (((0x09) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 503 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 503 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "negl", ((((((0x10)) & 0x3Fu) << 26) | ((((0x09)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 504 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 504 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((0 + 1) + 1) + 1) } },
  { "subl", ((((0x10) & 0x3Fu) << 26) | (((0x09) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 505 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 505 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subl", ((((((0x10)) & 0x3Fu) << 26) | ((((0x09)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 506 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 506 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "s4subl", ((((0x10) & 0x3Fu) << 26) | (((0x0B) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 507 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 507 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "s4subl", ((((((0x10)) & 0x3Fu) << 26) | ((((0x0B)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 508 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 508 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmpbge", ((((0x10) & 0x3Fu) << 26) | (((0x0F) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 509 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 509 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmpbge", ((((((0x10)) & 0x3Fu) << 26) | ((((0x0F)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 510 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 510 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "s8addl", ((((0x10) & 0x3Fu) << 26) | (((0x12) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 511 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 511 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "s8addl", ((((((0x10)) & 0x3Fu) << 26) | ((((0x12)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 512 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 512 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "s8subl", ((((0x10) & 0x3Fu) << 26) | (((0x1B) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 513 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 513 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "s8subl", ((((((0x10)) & 0x3Fu) << 26) | ((((0x1B)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 514 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 514 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmpult", ((((0x10) & 0x3Fu) << 26) | (((0x1D) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 515 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 515 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmpult", ((((((0x10)) & 0x3Fu) << 26) | ((((0x1D)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 516 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 516 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addq", ((((0x10) & 0x3Fu) << 26) | (((0x20) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 517 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 517 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addq", ((((((0x10)) & 0x3Fu) << 26) | ((((0x20)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 518 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 518 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "s4addq", ((((0x10) & 0x3Fu) << 26) | (((0x22) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 519 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 519 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "s4addq", ((((((0x10)) & 0x3Fu) << 26) | ((((0x22)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 520 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 520 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "negq", ((((0x10) & 0x3Fu) << 26) | (((0x29) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 521 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 521 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "negq", ((((((0x10)) & 0x3Fu) << 26) | ((((0x29)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 522 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 522 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((0 + 1) + 1) + 1) } },
  { "subq", ((((0x10) & 0x3Fu) << 26) | (((0x29) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 523 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 523 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subq", ((((((0x10)) & 0x3Fu) << 26) | ((((0x29)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 524 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 524 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "s4subq", ((((0x10) & 0x3Fu) << 26) | (((0x2B) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 525 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 525 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "s4subq", ((((((0x10)) & 0x3Fu) << 26) | ((((0x2B)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 526 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 526 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmpeq", ((((0x10) & 0x3Fu) << 26) | (((0x2D) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 527 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 527 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmpeq", ((((((0x10)) & 0x3Fu) << 26) | ((((0x2D)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 528 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 528 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "s8addq", ((((0x10) & 0x3Fu) << 26) | (((0x32) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 529 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 529 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "s8addq", ((((((0x10)) & 0x3Fu) << 26) | ((((0x32)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 530 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 530 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "s8subq", ((((0x10) & 0x3Fu) << 26) | (((0x3B) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 531 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 531 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "s8subq", ((((((0x10)) & 0x3Fu) << 26) | ((((0x3B)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 532 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 532 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmpule", ((((0x10) & 0x3Fu) << 26) | (((0x3D) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 533 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 533 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmpule", ((((((0x10)) & 0x3Fu) << 26) | ((((0x3D)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 534 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 534 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addl/v", ((((0x10) & 0x3Fu) << 26) | (((0x40) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 535 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 535 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addl/v", ((((((0x10)) & 0x3Fu) << 26) | ((((0x40)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 536 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 536 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "negl/v", ((((0x10) & 0x3Fu) << 26) | (((0x49) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 537 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 537 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "negl/v", ((((((0x10)) & 0x3Fu) << 26) | ((((0x49)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 538 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 538 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((0 + 1) + 1) + 1) } },
  { "subl/v", ((((0x10) & 0x3Fu) << 26) | (((0x49) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 539 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 539 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subl/v", ((((((0x10)) & 0x3Fu) << 26) | ((((0x49)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 540 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 540 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmplt", ((((0x10) & 0x3Fu) << 26) | (((0x4D) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 541 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 541 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmplt", ((((((0x10)) & 0x3Fu) << 26) | ((((0x4D)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 542 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 542 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addq/v", ((((0x10) & 0x3Fu) << 26) | (((0x60) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 543 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 543 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addq/v", ((((((0x10)) & 0x3Fu) << 26) | ((((0x60)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 544 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 544 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "negq/v", ((((0x10) & 0x3Fu) << 26) | (((0x69) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 545 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 545 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "negq/v", ((((((0x10)) & 0x3Fu) << 26) | ((((0x69)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 546 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 546 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((0 + 1) + 1) + 1) } },
  { "subq/v", ((((0x10) & 0x3Fu) << 26) | (((0x69) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 547 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 547 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subq/v", ((((((0x10)) & 0x3Fu) << 26) | ((((0x69)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 548 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 548 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmple", ((((0x10) & 0x3Fu) << 26) | (((0x6D) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 549 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 549 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmple", ((((((0x10)) & 0x3Fu) << 26) | ((((0x6D)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 550 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 550 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },

  { "and", ((((0x11) & 0x3Fu) << 26) | (((0x00) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 552 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                           0x0001
# 552 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                               , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "and", ((((((0x11)) & 0x3Fu) << 26) | ((((0x00)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 553 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 553 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "andnot", ((((0x11) & 0x3Fu) << 26) | (((0x08) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 554 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 554 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "andnot", ((((((0x11)) & 0x3Fu) << 26) | ((((0x08)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 555 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 555 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "bic", ((((0x11) & 0x3Fu) << 26) | (((0x08) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 556 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                           0x0001
# 556 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                               , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "bic", ((((((0x11)) & 0x3Fu) << 26) | ((((0x08)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 557 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 557 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmovlbs", ((((0x11) & 0x3Fu) << 26) | (((0x14) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 558 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 558 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmovlbs", ((((((0x11)) & 0x3Fu) << 26) | ((((0x14)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 559 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 559 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmovlbc", ((((0x11) & 0x3Fu) << 26) | (((0x16) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 560 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 560 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmovlbc", ((((((0x11)) & 0x3Fu) << 26) | ((((0x16)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 561 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 561 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "nop", ((((0x11) & 0x3Fu) << 26) | (((0x20) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 562 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                           0x0001
# 562 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                               , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "clr", ((((0x11) & 0x3Fu) << 26) | (((0x20) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 563 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                           0x0001
# 563 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                               , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((0 + 1) + 1) + 1) } },
  { "mov", ((((0x11) & 0x3Fu) << 26) | (((0x20) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 564 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                           0x0001
# 564 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                               , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((0 + 1) + 1), (((0 + 1) + 1) + 1) } },
  { "mov", ((((0x11) & 0x3Fu) << 26) | (((0x20) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 565 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                           0x0001
# 565 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                               , { (0 + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((0 + 1) + 1) + 1) } },
  { "mov", ((((((0x11)) & 0x3Fu) << 26) | ((((0x20)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 566 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 566 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((0 + 1) + 1) + 1) } },
  { "or", ((((0x11) & 0x3Fu) << 26) | (((0x20) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 567 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                          0x0001
# 567 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                              , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "or", ((((((0x11)) & 0x3Fu) << 26) | ((((0x20)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 568 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                           0x0001
# 568 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                               , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "bis", ((((0x11) & 0x3Fu) << 26) | (((0x20) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 569 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                           0x0001
# 569 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                               , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "bis", ((((((0x11)) & 0x3Fu) << 26) | ((((0x20)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 570 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 570 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmoveq", ((((0x11) & 0x3Fu) << 26) | (((0x24) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 571 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 571 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmoveq", ((((((0x11)) & 0x3Fu) << 26) | ((((0x24)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 572 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 572 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmovne", ((((0x11) & 0x3Fu) << 26) | (((0x26) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 573 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 573 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmovne", ((((((0x11)) & 0x3Fu) << 26) | ((((0x26)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 574 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 574 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "not", ((((0x11) & 0x3Fu) << 26) | (((0x28) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 575 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                           0x0001
# 575 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                               , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "not", ((((((0x11)) & 0x3Fu) << 26) | ((((0x28)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 576 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 576 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((0 + 1) + 1) + 1) } },
  { "ornot", ((((0x11) & 0x3Fu) << 26) | (((0x28) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 577 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 577 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "ornot", ((((((0x11)) & 0x3Fu) << 26) | ((((0x28)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 578 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 578 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "xor", ((((0x11) & 0x3Fu) << 26) | (((0x40) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 579 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                           0x0001
# 579 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                               , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "xor", ((((((0x11)) & 0x3Fu) << 26) | ((((0x40)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 580 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 580 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmovlt", ((((0x11) & 0x3Fu) << 26) | (((0x44) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 581 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 581 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmovlt", ((((((0x11)) & 0x3Fu) << 26) | ((((0x44)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 582 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 582 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmovge", ((((0x11) & 0x3Fu) << 26) | (((0x46) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 583 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 583 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmovge", ((((((0x11)) & 0x3Fu) << 26) | ((((0x46)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 584 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 584 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "eqv", ((((0x11) & 0x3Fu) << 26) | (((0x48) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 585 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                           0x0001
# 585 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                               , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "eqv", ((((((0x11)) & 0x3Fu) << 26) | ((((0x48)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 586 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 586 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "xornot", ((((0x11) & 0x3Fu) << 26) | (((0x48) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 587 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 587 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "xornot", ((((((0x11)) & 0x3Fu) << 26) | ((((0x48)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 588 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 588 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "amask", ((((0x11) & 0x3Fu) << 26) | (((0x61) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 589 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 589 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "amask", ((((((0x11)) & 0x3Fu) << 26) | ((((0x61)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 590 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 590 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((0 + 1) + 1) + 1) } },
  { "cmovle", ((((0x11) & 0x3Fu) << 26) | (((0x64) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 591 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 591 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmovle", ((((((0x11)) & 0x3Fu) << 26) | ((((0x64)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 592 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 592 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmovgt", ((((0x11) & 0x3Fu) << 26) | (((0x66) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 593 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 593 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmovgt", ((((((0x11)) & 0x3Fu) << 26) | ((((0x66)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 594 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 594 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "implver", ((((((0x11)) & 0x3Fu) << 26) | ((((0x6C)) & 0x7F) << 5)) | 0x1000)|(31<<21)|(1<<13),
       0xFFFFFFE0, 
# 596 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                  0x0001
# 596 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                      , { (((0 + 1) + 1) + 1) } },

  { "mskbl", ((((0x12) & 0x3Fu) << 26) | (((0x02) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 598 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 598 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mskbl", ((((((0x12)) & 0x3Fu) << 26) | ((((0x02)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 599 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 599 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "extbl", ((((0x12) & 0x3Fu) << 26) | (((0x06) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 600 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 600 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "extbl", ((((((0x12)) & 0x3Fu) << 26) | ((((0x06)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 601 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 601 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "insbl", ((((0x12) & 0x3Fu) << 26) | (((0x0B) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 602 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 602 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "insbl", ((((((0x12)) & 0x3Fu) << 26) | ((((0x0B)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 603 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 603 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mskwl", ((((0x12) & 0x3Fu) << 26) | (((0x12) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 604 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 604 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mskwl", ((((((0x12)) & 0x3Fu) << 26) | ((((0x12)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 605 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 605 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "extwl", ((((0x12) & 0x3Fu) << 26) | (((0x16) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 606 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 606 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "extwl", ((((((0x12)) & 0x3Fu) << 26) | ((((0x16)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 607 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 607 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "inswl", ((((0x12) & 0x3Fu) << 26) | (((0x1B) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 608 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 608 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "inswl", ((((((0x12)) & 0x3Fu) << 26) | ((((0x1B)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 609 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 609 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mskll", ((((0x12) & 0x3Fu) << 26) | (((0x22) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 610 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 610 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mskll", ((((((0x12)) & 0x3Fu) << 26) | ((((0x22)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 611 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 611 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "extll", ((((0x12) & 0x3Fu) << 26) | (((0x26) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 612 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 612 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "extll", ((((((0x12)) & 0x3Fu) << 26) | ((((0x26)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 613 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 613 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "insll", ((((0x12) & 0x3Fu) << 26) | (((0x2B) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 614 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 614 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "insll", ((((((0x12)) & 0x3Fu) << 26) | ((((0x2B)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 615 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 615 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "zap", ((((0x12) & 0x3Fu) << 26) | (((0x30) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 616 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                           0x0001
# 616 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                               , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "zap", ((((((0x12)) & 0x3Fu) << 26) | ((((0x30)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 617 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 617 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "zapnot", ((((0x12) & 0x3Fu) << 26) | (((0x31) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 618 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 618 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "zapnot", ((((((0x12)) & 0x3Fu) << 26) | ((((0x31)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 619 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 619 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mskql", ((((0x12) & 0x3Fu) << 26) | (((0x32) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 620 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 620 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mskql", ((((((0x12)) & 0x3Fu) << 26) | ((((0x32)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 621 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 621 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "srl", ((((0x12) & 0x3Fu) << 26) | (((0x34) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 622 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                           0x0001
# 622 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                               , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "srl", ((((((0x12)) & 0x3Fu) << 26) | ((((0x34)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 623 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 623 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "extql", ((((0x12) & 0x3Fu) << 26) | (((0x36) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 624 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 624 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "extql", ((((((0x12)) & 0x3Fu) << 26) | ((((0x36)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 625 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 625 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sll", ((((0x12) & 0x3Fu) << 26) | (((0x39) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 626 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                           0x0001
# 626 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                               , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sll", ((((((0x12)) & 0x3Fu) << 26) | ((((0x39)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 627 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 627 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "insql", ((((0x12) & 0x3Fu) << 26) | (((0x3B) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 628 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 628 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "insql", ((((((0x12)) & 0x3Fu) << 26) | ((((0x3B)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 629 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 629 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sra", ((((0x12) & 0x3Fu) << 26) | (((0x3C) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 630 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                           0x0001
# 630 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                               , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sra", ((((((0x12)) & 0x3Fu) << 26) | ((((0x3C)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 631 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 631 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mskwh", ((((0x12) & 0x3Fu) << 26) | (((0x52) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 632 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 632 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mskwh", ((((((0x12)) & 0x3Fu) << 26) | ((((0x52)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 633 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 633 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "inswh", ((((0x12) & 0x3Fu) << 26) | (((0x57) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 634 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 634 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "inswh", ((((((0x12)) & 0x3Fu) << 26) | ((((0x57)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 635 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 635 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "extwh", ((((0x12) & 0x3Fu) << 26) | (((0x5A) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 636 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 636 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "extwh", ((((((0x12)) & 0x3Fu) << 26) | ((((0x5A)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 637 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 637 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "msklh", ((((0x12) & 0x3Fu) << 26) | (((0x62) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 638 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 638 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "msklh", ((((((0x12)) & 0x3Fu) << 26) | ((((0x62)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 639 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 639 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "inslh", ((((0x12) & 0x3Fu) << 26) | (((0x67) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 640 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 640 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "inslh", ((((((0x12)) & 0x3Fu) << 26) | ((((0x67)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 641 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 641 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "extlh", ((((0x12) & 0x3Fu) << 26) | (((0x6A) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 642 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 642 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "extlh", ((((((0x12)) & 0x3Fu) << 26) | ((((0x6A)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 643 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 643 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mskqh", ((((0x12) & 0x3Fu) << 26) | (((0x72) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 644 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 644 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mskqh", ((((((0x12)) & 0x3Fu) << 26) | ((((0x72)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 645 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 645 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "insqh", ((((0x12) & 0x3Fu) << 26) | (((0x77) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 646 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 646 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "insqh", ((((((0x12)) & 0x3Fu) << 26) | ((((0x77)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 647 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 647 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "extqh", ((((0x12) & 0x3Fu) << 26) | (((0x7A) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 648 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 648 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "extqh", ((((((0x12)) & 0x3Fu) << 26) | ((((0x7A)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 649 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 649 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },

  { "mull", ((((0x13) & 0x3Fu) << 26) | (((0x00) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 651 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 651 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mull", ((((((0x13)) & 0x3Fu) << 26) | ((((0x00)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 652 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 652 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mulq", ((((0x13) & 0x3Fu) << 26) | (((0x20) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 653 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 653 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mulq", ((((((0x13)) & 0x3Fu) << 26) | ((((0x20)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 654 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 654 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "umulh", ((((0x13) & 0x3Fu) << 26) | (((0x30) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 655 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 655 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "umulh", ((((((0x13)) & 0x3Fu) << 26) | ((((0x30)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 656 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 656 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mull/v", ((((0x13) & 0x3Fu) << 26) | (((0x40) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 657 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 657 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mull/v", ((((((0x13)) & 0x3Fu) << 26) | ((((0x40)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 658 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 658 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mulq/v", ((((0x13) & 0x3Fu) << 26) | (((0x60) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 659 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 659 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mulq/v", ((((((0x13)) & 0x3Fu) << 26) | ((((0x60)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 660 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 660 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },

  { "itofs", ((((0x14) & 0x3Fu) << 26) | (((0x004) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 662 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0200
# 662 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (0 + 1), ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtf/c", ((((0x14) & 0x3Fu) << 26) | (((0x00A) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 663 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0200
# 663 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrts/c", ((((0x14) & 0x3Fu) << 26) | (((0x00B) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 664 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0200
# 664 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "itoff", ((((0x14) & 0x3Fu) << 26) | (((0x014) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 665 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0200
# 665 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (0 + 1), ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "itoft", ((((0x14) & 0x3Fu) << 26) | (((0x024) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 666 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0200
# 666 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (0 + 1), ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtg/c", ((((0x14) & 0x3Fu) << 26) | (((0x02A) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 667 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0200
# 667 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtt/c", ((((0x14) & 0x3Fu) << 26) | (((0x02B) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 668 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0200
# 668 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrts/m", ((((0x14) & 0x3Fu) << 26) | (((0x04B) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 669 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0200
# 669 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtt/m", ((((0x14) & 0x3Fu) << 26) | (((0x06B) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 670 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0200
# 670 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtf", ((((0x14) & 0x3Fu) << 26) | (((0x08A) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 671 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0200
# 671 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrts", ((((0x14) & 0x3Fu) << 26) | (((0x08B) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 672 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0200
# 672 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtg", ((((0x14) & 0x3Fu) << 26) | (((0x0AA) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 673 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0200
# 673 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtt", ((((0x14) & 0x3Fu) << 26) | (((0x0AB) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 674 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0200
# 674 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrts/d", ((((0x14) & 0x3Fu) << 26) | (((0x0CB) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 675 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0200
# 675 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtt/d", ((((0x14) & 0x3Fu) << 26) | (((0x0EB) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 676 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0200
# 676 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtf/uc", ((((0x14) & 0x3Fu) << 26) | (((0x10A) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 677 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0200
# 677 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrts/uc", ((((0x14) & 0x3Fu) << 26) | (((0x10B) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 678 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0200
# 678 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtg/uc", ((((0x14) & 0x3Fu) << 26) | (((0x12A) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 679 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0200
# 679 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtt/uc", ((((0x14) & 0x3Fu) << 26) | (((0x12B) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 680 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0200
# 680 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrts/um", ((((0x14) & 0x3Fu) << 26) | (((0x14B) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 681 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0200
# 681 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtt/um", ((((0x14) & 0x3Fu) << 26) | (((0x16B) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 682 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0200
# 682 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtf/u", ((((0x14) & 0x3Fu) << 26) | (((0x18A) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 683 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0200
# 683 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrts/u", ((((0x14) & 0x3Fu) << 26) | (((0x18B) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 684 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0200
# 684 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtg/u", ((((0x14) & 0x3Fu) << 26) | (((0x1AA) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 685 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0200
# 685 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtt/u", ((((0x14) & 0x3Fu) << 26) | (((0x1AB) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 686 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0200
# 686 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrts/ud", ((((0x14) & 0x3Fu) << 26) | (((0x1CB) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 687 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0200
# 687 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtt/ud", ((((0x14) & 0x3Fu) << 26) | (((0x1EB) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 688 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0200
# 688 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtf/sc", ((((0x14) & 0x3Fu) << 26) | (((0x40A) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 689 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0200
# 689 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtg/sc", ((((0x14) & 0x3Fu) << 26) | (((0x42A) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 690 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0200
# 690 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtf/s", ((((0x14) & 0x3Fu) << 26) | (((0x48A) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 691 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0200
# 691 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtg/s", ((((0x14) & 0x3Fu) << 26) | (((0x4AA) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 692 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0200
# 692 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtf/suc", ((((0x14) & 0x3Fu) << 26) | (((0x50A) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 693 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0200
# 693 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrts/suc", ((((0x14) & 0x3Fu) << 26) | (((0x50B) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 694 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0200
# 694 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtg/suc", ((((0x14) & 0x3Fu) << 26) | (((0x52A) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 695 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0200
# 695 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtt/suc", ((((0x14) & 0x3Fu) << 26) | (((0x52B) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 696 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0200
# 696 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrts/sum", ((((0x14) & 0x3Fu) << 26) | (((0x54B) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 697 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0200
# 697 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtt/sum", ((((0x14) & 0x3Fu) << 26) | (((0x56B) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 698 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0200
# 698 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtf/su", ((((0x14) & 0x3Fu) << 26) | (((0x58A) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 699 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0200
# 699 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrts/su", ((((0x14) & 0x3Fu) << 26) | (((0x58B) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 700 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0200
# 700 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtg/su", ((((0x14) & 0x3Fu) << 26) | (((0x5AA) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 701 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0200
# 701 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtt/su", ((((0x14) & 0x3Fu) << 26) | (((0x5AB) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 702 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0200
# 702 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrts/sud", ((((0x14) & 0x3Fu) << 26) | (((0x5CB) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 703 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0200
# 703 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtt/sud", ((((0x14) & 0x3Fu) << 26) | (((0x5EB) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 704 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0200
# 704 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrts/suic", ((((0x14) & 0x3Fu) << 26) | (((0x70B) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 705 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0200
# 705 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtt/suic", ((((0x14) & 0x3Fu) << 26) | (((0x72B) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 706 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0200
# 706 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrts/suim", ((((0x14) & 0x3Fu) << 26) | (((0x74B) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 707 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0200
# 707 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtt/suim", ((((0x14) & 0x3Fu) << 26) | (((0x76B) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 708 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0200
# 708 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrts/sui", ((((0x14) & 0x3Fu) << 26) | (((0x78B) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 709 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0200
# 709 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtt/sui", ((((0x14) & 0x3Fu) << 26) | (((0x7AB) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 710 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0200
# 710 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrts/suid", ((((0x14) & 0x3Fu) << 26) | (((0x7CB) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 711 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0200
# 711 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sqrtt/suid", ((((0x14) & 0x3Fu) << 26) | (((0x7EB) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 712 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0200
# 712 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },

  { "addf/c", ((((0x15) & 0x3Fu) << 26) | (((0x000) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 714 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 714 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subf/c", ((((0x15) & 0x3Fu) << 26) | (((0x001) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 715 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 715 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mulf/c", ((((0x15) & 0x3Fu) << 26) | (((0x002) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 716 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 716 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divf/c", ((((0x15) & 0x3Fu) << 26) | (((0x003) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 717 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 717 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtdg/c", ((((0x15) & 0x3Fu) << 26) | (((0x01E) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 718 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 718 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addg/c", ((((0x15) & 0x3Fu) << 26) | (((0x020) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 719 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 719 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subg/c", ((((0x15) & 0x3Fu) << 26) | (((0x021) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 720 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 720 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mulg/c", ((((0x15) & 0x3Fu) << 26) | (((0x022) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 721 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 721 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divg/c", ((((0x15) & 0x3Fu) << 26) | (((0x023) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 722 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 722 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtgf/c", ((((0x15) & 0x3Fu) << 26) | (((0x02C) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 723 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 723 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtgd/c", ((((0x15) & 0x3Fu) << 26) | (((0x02D) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 724 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 724 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtgq/c", ((((0x15) & 0x3Fu) << 26) | (((0x02F) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 725 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 725 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtqf/c", ((((0x15) & 0x3Fu) << 26) | (((0x03C) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 726 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 726 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtqg/c", ((((0x15) & 0x3Fu) << 26) | (((0x03E) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 727 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 727 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addf", ((((0x15) & 0x3Fu) << 26) | (((0x080) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 728 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 728 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "negf", ((((0x15) & 0x3Fu) << 26) | (((0x081) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 729 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 729 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subf", ((((0x15) & 0x3Fu) << 26) | (((0x081) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 730 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 730 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mulf", ((((0x15) & 0x3Fu) << 26) | (((0x082) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 731 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 731 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divf", ((((0x15) & 0x3Fu) << 26) | (((0x083) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 732 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 732 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtdg", ((((0x15) & 0x3Fu) << 26) | (((0x09E) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 733 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 733 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addg", ((((0x15) & 0x3Fu) << 26) | (((0x0A0) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 734 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 734 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "negg", ((((0x15) & 0x3Fu) << 26) | (((0x0A1) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 735 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 735 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subg", ((((0x15) & 0x3Fu) << 26) | (((0x0A1) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 736 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 736 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mulg", ((((0x15) & 0x3Fu) << 26) | (((0x0A2) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 737 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 737 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divg", ((((0x15) & 0x3Fu) << 26) | (((0x0A3) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 738 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 738 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmpgeq", ((((0x15) & 0x3Fu) << 26) | (((0x0A5) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 739 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 739 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmpglt", ((((0x15) & 0x3Fu) << 26) | (((0x0A6) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 740 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 740 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmpgle", ((((0x15) & 0x3Fu) << 26) | (((0x0A7) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 741 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 741 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtgf", ((((0x15) & 0x3Fu) << 26) | (((0x0AC) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 742 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 742 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtgd", ((((0x15) & 0x3Fu) << 26) | (((0x0AD) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 743 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 743 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtgq", ((((0x15) & 0x3Fu) << 26) | (((0x0AF) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 744 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 744 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtqf", ((((0x15) & 0x3Fu) << 26) | (((0x0BC) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 745 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 745 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtqg", ((((0x15) & 0x3Fu) << 26) | (((0x0BE) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 746 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 746 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addf/uc", ((((0x15) & 0x3Fu) << 26) | (((0x100) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 747 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 747 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subf/uc", ((((0x15) & 0x3Fu) << 26) | (((0x101) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 748 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 748 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mulf/uc", ((((0x15) & 0x3Fu) << 26) | (((0x102) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 749 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 749 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divf/uc", ((((0x15) & 0x3Fu) << 26) | (((0x103) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 750 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 750 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtdg/uc", ((((0x15) & 0x3Fu) << 26) | (((0x11E) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 751 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 751 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addg/uc", ((((0x15) & 0x3Fu) << 26) | (((0x120) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 752 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 752 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subg/uc", ((((0x15) & 0x3Fu) << 26) | (((0x121) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 753 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 753 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mulg/uc", ((((0x15) & 0x3Fu) << 26) | (((0x122) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 754 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 754 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divg/uc", ((((0x15) & 0x3Fu) << 26) | (((0x123) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 755 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 755 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtgf/uc", ((((0x15) & 0x3Fu) << 26) | (((0x12C) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 756 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 756 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtgd/uc", ((((0x15) & 0x3Fu) << 26) | (((0x12D) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 757 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 757 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtgq/vc", ((((0x15) & 0x3Fu) << 26) | (((0x12F) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 758 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 758 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addf/u", ((((0x15) & 0x3Fu) << 26) | (((0x180) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 759 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 759 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subf/u", ((((0x15) & 0x3Fu) << 26) | (((0x181) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 760 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 760 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mulf/u", ((((0x15) & 0x3Fu) << 26) | (((0x182) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 761 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 761 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divf/u", ((((0x15) & 0x3Fu) << 26) | (((0x183) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 762 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 762 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtdg/u", ((((0x15) & 0x3Fu) << 26) | (((0x19E) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 763 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 763 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addg/u", ((((0x15) & 0x3Fu) << 26) | (((0x1A0) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 764 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 764 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subg/u", ((((0x15) & 0x3Fu) << 26) | (((0x1A1) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 765 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 765 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mulg/u", ((((0x15) & 0x3Fu) << 26) | (((0x1A2) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 766 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 766 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divg/u", ((((0x15) & 0x3Fu) << 26) | (((0x1A3) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 767 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 767 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtgf/u", ((((0x15) & 0x3Fu) << 26) | (((0x1AC) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 768 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 768 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtgd/u", ((((0x15) & 0x3Fu) << 26) | (((0x1AD) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 769 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 769 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtgq/v", ((((0x15) & 0x3Fu) << 26) | (((0x1AF) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 770 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 770 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addf/sc", ((((0x15) & 0x3Fu) << 26) | (((0x400) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 771 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 771 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subf/sc", ((((0x15) & 0x3Fu) << 26) | (((0x401) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 772 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 772 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mulf/sc", ((((0x15) & 0x3Fu) << 26) | (((0x402) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 773 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 773 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divf/sc", ((((0x15) & 0x3Fu) << 26) | (((0x403) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 774 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 774 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtdg/sc", ((((0x15) & 0x3Fu) << 26) | (((0x41E) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 775 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 775 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addg/sc", ((((0x15) & 0x3Fu) << 26) | (((0x420) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 776 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 776 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subg/sc", ((((0x15) & 0x3Fu) << 26) | (((0x421) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 777 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 777 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mulg/sc", ((((0x15) & 0x3Fu) << 26) | (((0x422) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 778 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 778 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divg/sc", ((((0x15) & 0x3Fu) << 26) | (((0x423) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 779 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 779 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtgf/sc", ((((0x15) & 0x3Fu) << 26) | (((0x42C) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 780 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 780 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtgd/sc", ((((0x15) & 0x3Fu) << 26) | (((0x42D) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 781 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 781 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtgq/sc", ((((0x15) & 0x3Fu) << 26) | (((0x42F) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 782 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 782 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addf/s", ((((0x15) & 0x3Fu) << 26) | (((0x480) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 783 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 783 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "negf/s", ((((0x15) & 0x3Fu) << 26) | (((0x481) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 784 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 784 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subf/s", ((((0x15) & 0x3Fu) << 26) | (((0x481) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 785 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 785 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mulf/s", ((((0x15) & 0x3Fu) << 26) | (((0x482) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 786 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 786 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divf/s", ((((0x15) & 0x3Fu) << 26) | (((0x483) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 787 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 787 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtdg/s", ((((0x15) & 0x3Fu) << 26) | (((0x49E) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 788 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 788 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addg/s", ((((0x15) & 0x3Fu) << 26) | (((0x4A0) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 789 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 789 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "negg/s", ((((0x15) & 0x3Fu) << 26) | (((0x4A1) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 790 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 790 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subg/s", ((((0x15) & 0x3Fu) << 26) | (((0x4A1) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 791 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 791 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mulg/s", ((((0x15) & 0x3Fu) << 26) | (((0x4A2) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 792 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 792 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divg/s", ((((0x15) & 0x3Fu) << 26) | (((0x4A3) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 793 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 793 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmpgeq/s", ((((0x15) & 0x3Fu) << 26) | (((0x4A5) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 794 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 794 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmpglt/s", ((((0x15) & 0x3Fu) << 26) | (((0x4A6) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 795 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 795 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmpgle/s", ((((0x15) & 0x3Fu) << 26) | (((0x4A7) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 796 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 796 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtgf/s", ((((0x15) & 0x3Fu) << 26) | (((0x4AC) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 797 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 797 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtgd/s", ((((0x15) & 0x3Fu) << 26) | (((0x4AD) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 798 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 798 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtgq/s", ((((0x15) & 0x3Fu) << 26) | (((0x4AF) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 799 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 799 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addf/suc", ((((0x15) & 0x3Fu) << 26) | (((0x500) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 800 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 800 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subf/suc", ((((0x15) & 0x3Fu) << 26) | (((0x501) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 801 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 801 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mulf/suc", ((((0x15) & 0x3Fu) << 26) | (((0x502) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 802 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 802 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divf/suc", ((((0x15) & 0x3Fu) << 26) | (((0x503) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 803 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 803 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtdg/suc", ((((0x15) & 0x3Fu) << 26) | (((0x51E) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 804 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 804 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addg/suc", ((((0x15) & 0x3Fu) << 26) | (((0x520) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 805 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 805 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subg/suc", ((((0x15) & 0x3Fu) << 26) | (((0x521) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 806 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 806 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mulg/suc", ((((0x15) & 0x3Fu) << 26) | (((0x522) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 807 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 807 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divg/suc", ((((0x15) & 0x3Fu) << 26) | (((0x523) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 808 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 808 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtgf/suc", ((((0x15) & 0x3Fu) << 26) | (((0x52C) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 809 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 809 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtgd/suc", ((((0x15) & 0x3Fu) << 26) | (((0x52D) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 810 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 810 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtgq/svc", ((((0x15) & 0x3Fu) << 26) | (((0x52F) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 811 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 811 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addf/su", ((((0x15) & 0x3Fu) << 26) | (((0x580) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 812 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 812 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subf/su", ((((0x15) & 0x3Fu) << 26) | (((0x581) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 813 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 813 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mulf/su", ((((0x15) & 0x3Fu) << 26) | (((0x582) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 814 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 814 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divf/su", ((((0x15) & 0x3Fu) << 26) | (((0x583) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 815 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 815 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtdg/su", ((((0x15) & 0x3Fu) << 26) | (((0x59E) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 816 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 816 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addg/su", ((((0x15) & 0x3Fu) << 26) | (((0x5A0) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 817 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 817 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subg/su", ((((0x15) & 0x3Fu) << 26) | (((0x5A1) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 818 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 818 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mulg/su", ((((0x15) & 0x3Fu) << 26) | (((0x5A2) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 819 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 819 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divg/su", ((((0x15) & 0x3Fu) << 26) | (((0x5A3) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 820 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 820 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtgf/su", ((((0x15) & 0x3Fu) << 26) | (((0x5AC) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 821 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 821 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtgd/su", ((((0x15) & 0x3Fu) << 26) | (((0x5AD) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 822 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 822 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtgq/sv", ((((0x15) & 0x3Fu) << 26) | (((0x5AF) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 823 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 823 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },

  { "adds/c", ((((0x16) & 0x3Fu) << 26) | (((0x000) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 825 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 825 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subs/c", ((((0x16) & 0x3Fu) << 26) | (((0x001) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 826 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 826 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "muls/c", ((((0x16) & 0x3Fu) << 26) | (((0x002) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 827 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 827 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divs/c", ((((0x16) & 0x3Fu) << 26) | (((0x003) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 828 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 828 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addt/c", ((((0x16) & 0x3Fu) << 26) | (((0x020) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 829 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 829 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subt/c", ((((0x16) & 0x3Fu) << 26) | (((0x021) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 830 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 830 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mult/c", ((((0x16) & 0x3Fu) << 26) | (((0x022) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 831 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 831 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divt/c", ((((0x16) & 0x3Fu) << 26) | (((0x023) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 832 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 832 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtts/c", ((((0x16) & 0x3Fu) << 26) | (((0x02C) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 833 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 833 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvttq/c", ((((0x16) & 0x3Fu) << 26) | (((0x02F) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 834 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 834 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtqs/c", ((((0x16) & 0x3Fu) << 26) | (((0x03C) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 835 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 835 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtqt/c", ((((0x16) & 0x3Fu) << 26) | (((0x03E) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 836 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 836 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "adds/m", ((((0x16) & 0x3Fu) << 26) | (((0x040) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 837 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 837 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subs/m", ((((0x16) & 0x3Fu) << 26) | (((0x041) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 838 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 838 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "muls/m", ((((0x16) & 0x3Fu) << 26) | (((0x042) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 839 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 839 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divs/m", ((((0x16) & 0x3Fu) << 26) | (((0x043) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 840 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 840 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addt/m", ((((0x16) & 0x3Fu) << 26) | (((0x060) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 841 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 841 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subt/m", ((((0x16) & 0x3Fu) << 26) | (((0x061) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 842 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 842 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mult/m", ((((0x16) & 0x3Fu) << 26) | (((0x062) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 843 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 843 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divt/m", ((((0x16) & 0x3Fu) << 26) | (((0x063) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 844 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 844 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtts/m", ((((0x16) & 0x3Fu) << 26) | (((0x06C) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 845 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 845 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvttq/m", ((((0x16) & 0x3Fu) << 26) | (((0x06F) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 846 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 846 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtqs/m", ((((0x16) & 0x3Fu) << 26) | (((0x07C) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 847 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 847 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtqt/m", ((((0x16) & 0x3Fu) << 26) | (((0x07E) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 848 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 848 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "adds", ((((0x16) & 0x3Fu) << 26) | (((0x080) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 849 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 849 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "negs", ((((0x16) & 0x3Fu) << 26) | (((0x081) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 850 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 850 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subs", ((((0x16) & 0x3Fu) << 26) | (((0x081) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 851 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 851 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "muls", ((((0x16) & 0x3Fu) << 26) | (((0x082) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 852 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 852 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divs", ((((0x16) & 0x3Fu) << 26) | (((0x083) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 853 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 853 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addt", ((((0x16) & 0x3Fu) << 26) | (((0x0A0) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 854 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 854 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "negt", ((((0x16) & 0x3Fu) << 26) | (((0x0A1) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 855 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 855 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subt", ((((0x16) & 0x3Fu) << 26) | (((0x0A1) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 856 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 856 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mult", ((((0x16) & 0x3Fu) << 26) | (((0x0A2) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 857 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 857 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divt", ((((0x16) & 0x3Fu) << 26) | (((0x0A3) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 858 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 858 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmptun", ((((0x16) & 0x3Fu) << 26) | (((0x0A4) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 859 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 859 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmpteq", ((((0x16) & 0x3Fu) << 26) | (((0x0A5) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 860 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 860 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmptlt", ((((0x16) & 0x3Fu) << 26) | (((0x0A6) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 861 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 861 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmptle", ((((0x16) & 0x3Fu) << 26) | (((0x0A7) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 862 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 862 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtts", ((((0x16) & 0x3Fu) << 26) | (((0x0AC) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 863 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 863 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvttq", ((((0x16) & 0x3Fu) << 26) | (((0x0AF) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 864 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 864 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtqs", ((((0x16) & 0x3Fu) << 26) | (((0x0BC) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 865 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 865 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtqt", ((((0x16) & 0x3Fu) << 26) | (((0x0BE) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 866 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 866 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "adds/d", ((((0x16) & 0x3Fu) << 26) | (((0x0C0) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 867 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 867 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subs/d", ((((0x16) & 0x3Fu) << 26) | (((0x0C1) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 868 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 868 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "muls/d", ((((0x16) & 0x3Fu) << 26) | (((0x0C2) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 869 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 869 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divs/d", ((((0x16) & 0x3Fu) << 26) | (((0x0C3) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 870 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 870 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addt/d", ((((0x16) & 0x3Fu) << 26) | (((0x0E0) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 871 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 871 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subt/d", ((((0x16) & 0x3Fu) << 26) | (((0x0E1) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 872 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 872 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mult/d", ((((0x16) & 0x3Fu) << 26) | (((0x0E2) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 873 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 873 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divt/d", ((((0x16) & 0x3Fu) << 26) | (((0x0E3) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 874 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 874 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtts/d", ((((0x16) & 0x3Fu) << 26) | (((0x0EC) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 875 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 875 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvttq/d", ((((0x16) & 0x3Fu) << 26) | (((0x0EF) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 876 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 876 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtqs/d", ((((0x16) & 0x3Fu) << 26) | (((0x0FC) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 877 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 877 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtqt/d", ((((0x16) & 0x3Fu) << 26) | (((0x0FE) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 878 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 878 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "adds/uc", ((((0x16) & 0x3Fu) << 26) | (((0x100) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 879 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 879 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subs/uc", ((((0x16) & 0x3Fu) << 26) | (((0x101) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 880 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 880 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "muls/uc", ((((0x16) & 0x3Fu) << 26) | (((0x102) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 881 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 881 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divs/uc", ((((0x16) & 0x3Fu) << 26) | (((0x103) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 882 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 882 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addt/uc", ((((0x16) & 0x3Fu) << 26) | (((0x120) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 883 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 883 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subt/uc", ((((0x16) & 0x3Fu) << 26) | (((0x121) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 884 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 884 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mult/uc", ((((0x16) & 0x3Fu) << 26) | (((0x122) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 885 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 885 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divt/uc", ((((0x16) & 0x3Fu) << 26) | (((0x123) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 886 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 886 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtts/uc", ((((0x16) & 0x3Fu) << 26) | (((0x12C) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 887 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 887 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvttq/vc", ((((0x16) & 0x3Fu) << 26) | (((0x12F) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 888 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 888 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "adds/um", ((((0x16) & 0x3Fu) << 26) | (((0x140) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 889 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 889 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subs/um", ((((0x16) & 0x3Fu) << 26) | (((0x141) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 890 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 890 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "muls/um", ((((0x16) & 0x3Fu) << 26) | (((0x142) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 891 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 891 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divs/um", ((((0x16) & 0x3Fu) << 26) | (((0x143) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 892 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 892 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addt/um", ((((0x16) & 0x3Fu) << 26) | (((0x160) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 893 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 893 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subt/um", ((((0x16) & 0x3Fu) << 26) | (((0x161) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 894 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 894 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mult/um", ((((0x16) & 0x3Fu) << 26) | (((0x162) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 895 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 895 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divt/um", ((((0x16) & 0x3Fu) << 26) | (((0x163) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 896 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 896 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtts/um", ((((0x16) & 0x3Fu) << 26) | (((0x16C) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 897 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 897 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvttq/vm", ((((0x16) & 0x3Fu) << 26) | (((0x16F) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 898 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 898 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "adds/u", ((((0x16) & 0x3Fu) << 26) | (((0x180) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 899 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 899 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subs/u", ((((0x16) & 0x3Fu) << 26) | (((0x181) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 900 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 900 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "muls/u", ((((0x16) & 0x3Fu) << 26) | (((0x182) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 901 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 901 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divs/u", ((((0x16) & 0x3Fu) << 26) | (((0x183) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 902 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 902 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addt/u", ((((0x16) & 0x3Fu) << 26) | (((0x1A0) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 903 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 903 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subt/u", ((((0x16) & 0x3Fu) << 26) | (((0x1A1) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 904 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 904 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mult/u", ((((0x16) & 0x3Fu) << 26) | (((0x1A2) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 905 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 905 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divt/u", ((((0x16) & 0x3Fu) << 26) | (((0x1A3) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 906 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 906 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtts/u", ((((0x16) & 0x3Fu) << 26) | (((0x1AC) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 907 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 907 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvttq/v", ((((0x16) & 0x3Fu) << 26) | (((0x1AF) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 908 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 908 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "adds/ud", ((((0x16) & 0x3Fu) << 26) | (((0x1C0) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 909 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 909 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subs/ud", ((((0x16) & 0x3Fu) << 26) | (((0x1C1) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 910 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 910 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "muls/ud", ((((0x16) & 0x3Fu) << 26) | (((0x1C2) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 911 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 911 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divs/ud", ((((0x16) & 0x3Fu) << 26) | (((0x1C3) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 912 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 912 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addt/ud", ((((0x16) & 0x3Fu) << 26) | (((0x1E0) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 913 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 913 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subt/ud", ((((0x16) & 0x3Fu) << 26) | (((0x1E1) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 914 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 914 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mult/ud", ((((0x16) & 0x3Fu) << 26) | (((0x1E2) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 915 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 915 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divt/ud", ((((0x16) & 0x3Fu) << 26) | (((0x1E3) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 916 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 916 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtts/ud", ((((0x16) & 0x3Fu) << 26) | (((0x1EC) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 917 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 917 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvttq/vd", ((((0x16) & 0x3Fu) << 26) | (((0x1EF) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 918 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 918 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtst", ((((0x16) & 0x3Fu) << 26) | (((0x2AC) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 919 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 919 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "adds/suc", ((((0x16) & 0x3Fu) << 26) | (((0x500) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 920 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 920 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subs/suc", ((((0x16) & 0x3Fu) << 26) | (((0x501) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 921 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 921 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "muls/suc", ((((0x16) & 0x3Fu) << 26) | (((0x502) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 922 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 922 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divs/suc", ((((0x16) & 0x3Fu) << 26) | (((0x503) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 923 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 923 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addt/suc", ((((0x16) & 0x3Fu) << 26) | (((0x520) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 924 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 924 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subt/suc", ((((0x16) & 0x3Fu) << 26) | (((0x521) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 925 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 925 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mult/suc", ((((0x16) & 0x3Fu) << 26) | (((0x522) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 926 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 926 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divt/suc", ((((0x16) & 0x3Fu) << 26) | (((0x523) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 927 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 927 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtts/suc", ((((0x16) & 0x3Fu) << 26) | (((0x52C) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 928 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 928 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvttq/svc", ((((0x16) & 0x3Fu) << 26) | (((0x52F) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 929 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 929 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "adds/sum", ((((0x16) & 0x3Fu) << 26) | (((0x540) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 930 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 930 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subs/sum", ((((0x16) & 0x3Fu) << 26) | (((0x541) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 931 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 931 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "muls/sum", ((((0x16) & 0x3Fu) << 26) | (((0x542) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 932 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 932 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divs/sum", ((((0x16) & 0x3Fu) << 26) | (((0x543) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 933 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 933 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addt/sum", ((((0x16) & 0x3Fu) << 26) | (((0x560) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 934 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 934 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subt/sum", ((((0x16) & 0x3Fu) << 26) | (((0x561) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 935 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 935 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mult/sum", ((((0x16) & 0x3Fu) << 26) | (((0x562) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 936 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 936 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divt/sum", ((((0x16) & 0x3Fu) << 26) | (((0x563) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 937 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 937 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtts/sum", ((((0x16) & 0x3Fu) << 26) | (((0x56C) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 938 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 938 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvttq/svm", ((((0x16) & 0x3Fu) << 26) | (((0x56F) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 939 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 939 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "adds/su", ((((0x16) & 0x3Fu) << 26) | (((0x580) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 940 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 940 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "negs/su", ((((0x16) & 0x3Fu) << 26) | (((0x581) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 941 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 941 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subs/su", ((((0x16) & 0x3Fu) << 26) | (((0x581) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 942 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 942 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "muls/su", ((((0x16) & 0x3Fu) << 26) | (((0x582) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 943 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 943 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divs/su", ((((0x16) & 0x3Fu) << 26) | (((0x583) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 944 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 944 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addt/su", ((((0x16) & 0x3Fu) << 26) | (((0x5A0) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 945 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 945 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "negt/su", ((((0x16) & 0x3Fu) << 26) | (((0x5A1) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 946 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 946 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subt/su", ((((0x16) & 0x3Fu) << 26) | (((0x5A1) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 947 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 947 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mult/su", ((((0x16) & 0x3Fu) << 26) | (((0x5A2) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 948 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 948 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divt/su", ((((0x16) & 0x3Fu) << 26) | (((0x5A3) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 949 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 949 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmptun/su", ((((0x16) & 0x3Fu) << 26) | (((0x5A4) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 950 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 950 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmpteq/su", ((((0x16) & 0x3Fu) << 26) | (((0x5A5) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 951 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 951 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmptlt/su", ((((0x16) & 0x3Fu) << 26) | (((0x5A6) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 952 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 952 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cmptle/su", ((((0x16) & 0x3Fu) << 26) | (((0x5A7) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 953 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 953 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtts/su", ((((0x16) & 0x3Fu) << 26) | (((0x5AC) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 954 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 954 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvttq/sv", ((((0x16) & 0x3Fu) << 26) | (((0x5AF) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 955 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 955 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "adds/sud", ((((0x16) & 0x3Fu) << 26) | (((0x5C0) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 956 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 956 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subs/sud", ((((0x16) & 0x3Fu) << 26) | (((0x5C1) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 957 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 957 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "muls/sud", ((((0x16) & 0x3Fu) << 26) | (((0x5C2) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 958 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 958 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divs/sud", ((((0x16) & 0x3Fu) << 26) | (((0x5C3) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 959 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 959 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addt/sud", ((((0x16) & 0x3Fu) << 26) | (((0x5E0) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 960 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 960 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subt/sud", ((((0x16) & 0x3Fu) << 26) | (((0x5E1) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 961 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 961 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mult/sud", ((((0x16) & 0x3Fu) << 26) | (((0x5E2) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 962 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 962 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divt/sud", ((((0x16) & 0x3Fu) << 26) | (((0x5E3) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 963 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 963 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtts/sud", ((((0x16) & 0x3Fu) << 26) | (((0x5EC) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 964 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 964 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvttq/svd", ((((0x16) & 0x3Fu) << 26) | (((0x5EF) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 965 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 965 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtst/s", ((((0x16) & 0x3Fu) << 26) | (((0x6AC) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 966 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 966 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "adds/suic", ((((0x16) & 0x3Fu) << 26) | (((0x700) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 967 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 967 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subs/suic", ((((0x16) & 0x3Fu) << 26) | (((0x701) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 968 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 968 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "muls/suic", ((((0x16) & 0x3Fu) << 26) | (((0x702) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 969 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 969 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divs/suic", ((((0x16) & 0x3Fu) << 26) | (((0x703) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 970 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 970 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addt/suic", ((((0x16) & 0x3Fu) << 26) | (((0x720) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 971 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 971 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subt/suic", ((((0x16) & 0x3Fu) << 26) | (((0x721) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 972 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 972 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mult/suic", ((((0x16) & 0x3Fu) << 26) | (((0x722) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 973 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 973 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divt/suic", ((((0x16) & 0x3Fu) << 26) | (((0x723) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 974 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 974 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtts/suic", ((((0x16) & 0x3Fu) << 26) | (((0x72C) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 975 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0001
# 975 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvttq/svic", ((((0x16) & 0x3Fu) << 26) | (((0x72F) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 976 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0001
# 976 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtqs/suic", ((((0x16) & 0x3Fu) << 26) | (((0x73C) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 977 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0001
# 977 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtqt/suic", ((((0x16) & 0x3Fu) << 26) | (((0x73E) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 978 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0001
# 978 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "adds/suim", ((((0x16) & 0x3Fu) << 26) | (((0x740) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 979 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 979 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subs/suim", ((((0x16) & 0x3Fu) << 26) | (((0x741) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 980 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 980 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "muls/suim", ((((0x16) & 0x3Fu) << 26) | (((0x742) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 981 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 981 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divs/suim", ((((0x16) & 0x3Fu) << 26) | (((0x743) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 982 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 982 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addt/suim", ((((0x16) & 0x3Fu) << 26) | (((0x760) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 983 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 983 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subt/suim", ((((0x16) & 0x3Fu) << 26) | (((0x761) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 984 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 984 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mult/suim", ((((0x16) & 0x3Fu) << 26) | (((0x762) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 985 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 985 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divt/suim", ((((0x16) & 0x3Fu) << 26) | (((0x763) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 986 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 986 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtts/suim", ((((0x16) & 0x3Fu) << 26) | (((0x76C) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 987 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0001
# 987 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvttq/svim", ((((0x16) & 0x3Fu) << 26) | (((0x76F) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 988 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0001
# 988 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtqs/suim", ((((0x16) & 0x3Fu) << 26) | (((0x77C) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 989 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0001
# 989 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtqt/suim", ((((0x16) & 0x3Fu) << 26) | (((0x77E) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 990 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0001
# 990 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "adds/sui", ((((0x16) & 0x3Fu) << 26) | (((0x780) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 991 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 991 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "negs/sui", ((((0x16) & 0x3Fu) << 26) | (((0x781) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 992 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 992 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subs/sui", ((((0x16) & 0x3Fu) << 26) | (((0x781) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 993 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 993 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "muls/sui", ((((0x16) & 0x3Fu) << 26) | (((0x782) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 994 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 994 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divs/sui", ((((0x16) & 0x3Fu) << 26) | (((0x783) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 995 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 995 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addt/sui", ((((0x16) & 0x3Fu) << 26) | (((0x7A0) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 996 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 996 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "negt/sui", ((((0x16) & 0x3Fu) << 26) | (((0x7A1) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 997 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 997 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subt/sui", ((((0x16) & 0x3Fu) << 26) | (((0x7A1) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 998 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 998 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mult/sui", ((((0x16) & 0x3Fu) << 26) | (((0x7A2) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 999 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 999 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divt/sui", ((((0x16) & 0x3Fu) << 26) | (((0x7A3) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1000 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 1000 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtts/sui", ((((0x16) & 0x3Fu) << 26) | (((0x7AC) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1001 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 1001 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvttq/svi", ((((0x16) & 0x3Fu) << 26) | (((0x7AF) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1002 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 1002 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtqs/sui", ((((0x16) & 0x3Fu) << 26) | (((0x7BC) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1003 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 1003 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtqt/sui", ((((0x16) & 0x3Fu) << 26) | (((0x7BE) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1004 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 1004 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "adds/suid", ((((0x16) & 0x3Fu) << 26) | (((0x7C0) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1005 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 1005 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subs/suid", ((((0x16) & 0x3Fu) << 26) | (((0x7C1) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1006 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 1006 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "muls/suid", ((((0x16) & 0x3Fu) << 26) | (((0x7C2) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1007 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 1007 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divs/suid", ((((0x16) & 0x3Fu) << 26) | (((0x7C3) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1008 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 1008 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "addt/suid", ((((0x16) & 0x3Fu) << 26) | (((0x7E0) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1009 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 1009 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "subt/suid", ((((0x16) & 0x3Fu) << 26) | (((0x7E1) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1010 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 1010 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mult/suid", ((((0x16) & 0x3Fu) << 26) | (((0x7E2) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1011 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 1011 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "divt/suid", ((((0x16) & 0x3Fu) << 26) | (((0x7E3) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1012 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 1012 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtts/suid", ((((0x16) & 0x3Fu) << 26) | (((0x7EC) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1013 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0001
# 1013 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvttq/svid", ((((0x16) & 0x3Fu) << 26) | (((0x7EF) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1014 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0001
# 1014 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtqs/suid", ((((0x16) & 0x3Fu) << 26) | (((0x7FC) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1015 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0001
# 1015 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtqt/suid", ((((0x16) & 0x3Fu) << 26) | (((0x7FE) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1016 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0001
# 1016 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },

  { "cvtlq", ((((0x17) & 0x3Fu) << 26) | (((0x010) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1018 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 1018 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "fnop", ((((0x17) & 0x3Fu) << 26) | (((0x020) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1019 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 1019 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "fclr", ((((0x17) & 0x3Fu) << 26) | (((0x020) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1020 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 1020 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "fabs", ((((0x17) & 0x3Fu) << 26) | (((0x020) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1021 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 1021 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "fmov", ((((0x17) & 0x3Fu) << 26) | (((0x020) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1022 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 1022 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { ((((0 + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cpys", ((((0x17) & 0x3Fu) << 26) | (((0x020) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1023 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 1023 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "fneg", ((((0x17) & 0x3Fu) << 26) | (((0x021) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1024 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 1024 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { ((((0 + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((0 + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cpysn", ((((0x17) & 0x3Fu) << 26) | (((0x021) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1025 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 1025 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cpyse", ((((0x17) & 0x3Fu) << 26) | (((0x022) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1026 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 1026 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mt_fpcr", ((((0x17) & 0x3Fu) << 26) | (((0x024) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1027 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 1027 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "mf_fpcr", ((((0x17) & 0x3Fu) << 26) | (((0x025) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1028 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 1028 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "fcmoveq", ((((0x17) & 0x3Fu) << 26) | (((0x02A) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1029 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 1029 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "fcmovne", ((((0x17) & 0x3Fu) << 26) | (((0x02B) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1030 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 1030 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "fcmovlt", ((((0x17) & 0x3Fu) << 26) | (((0x02C) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1031 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 1031 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "fcmovge", ((((0x17) & 0x3Fu) << 26) | (((0x02D) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1032 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 1032 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "fcmovle", ((((0x17) & 0x3Fu) << 26) | (((0x02E) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1033 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 1033 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "fcmovgt", ((((0x17) & 0x3Fu) << 26) | (((0x02F) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1034 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 1034 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { ((((0 + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtql", ((((0x17) & 0x3Fu) << 26) | (((0x030) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1035 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 1035 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtql/v", ((((0x17) & 0x3Fu) << 26) | (((0x130) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1036 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 1036 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cvtql/sv", ((((0x17) & 0x3Fu) << 26) | (((0x530) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1037 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 1037 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((0 + 1) + 1) + 1) + 1) + 1), ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },

  { "trapb", ((((0x18) & 0x3Fu) << 26) | ((0x0000) & 0xFFFF)), (0xFC000000 | 0xFFFF), 
# 1039 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 1039 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { 0 } },
  { "draint", ((((0x18) & 0x3Fu) << 26) | ((0x0000) & 0xFFFF)), (0xFC000000 | 0xFFFF), 
# 1040 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 1040 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { 0 } },
  { "excb", ((((0x18) & 0x3Fu) << 26) | ((0x0400) & 0xFFFF)), (0xFC000000 | 0xFFFF), 
# 1041 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 1041 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { 0 } },
  { "mb", ((((0x18) & 0x3Fu) << 26) | ((0x4000) & 0xFFFF)), (0xFC000000 | 0xFFFF), 
# 1042 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 1042 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { 0 } },
  { "wmb", ((((0x18) & 0x3Fu) << 26) | ((0x4400) & 0xFFFF)), (0xFC000000 | 0xFFFF), 
# 1043 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 1043 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { 0 } },
  { "fetch", ((((0x18) & 0x3Fu) << 26) | ((0x8000) & 0xFFFF)), (0xFC000000 | 0xFFFF), 
# 1044 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0001
# 1044 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "fetch_m", ((((0x18) & 0x3Fu) << 26) | ((0xA000) & 0xFFFF)), (0xFC000000 | 0xFFFF), 
# 1045 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0001
# 1045 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "rpcc", ((((0x18) & 0x3Fu) << 26) | ((0xC000) & 0xFFFF)), (0xFC000000 | 0xFFFF), 
# 1046 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 1046 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "rpcc", ((((0x18) & 0x3Fu) << 26) | ((0xC000) & 0xFFFF)), (0xFC000000 | 0xFFFF), 
# 1047 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 1047 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1) } },
  { "rc", ((((0x18) & 0x3Fu) << 26) | ((0xE000) & 0xFFFF)), (0xFC000000 | 0xFFFF), 
# 1048 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 1048 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (0 + 1) } },
  { "ecb", ((((0x18) & 0x3Fu) << 26) | ((0xE800) & 0xFFFF)), (0xFC000000 | 0xFFFF), 
# 1049 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0001
# 1049 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "rs", ((((0x18) & 0x3Fu) << 26) | ((0xF000) & 0xFFFF)), (0xFC000000 | 0xFFFF), 
# 1050 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                            0x0001
# 1050 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (0 + 1) } },
  { "wh64", ((((0x18) & 0x3Fu) << 26) | ((0xF800) & 0xFFFF)), (0xFC000000 | 0xFFFF), 
# 1051 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0001
# 1051 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "wh64en", ((((0x18) & 0x3Fu) << 26) | ((0xFC00) & 0xFFFF)), (0xFC000000 | 0xFFFF), 
# 1052 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0001
# 1052 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },

  { "hw_mfpr", ((((0x19) & 0x3Fu) << 26) | (((0x00) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1054 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0002
# 1054 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_mfpr", (((0x19) & 0x3Fu) << 26), 0xFC000000, 
# 1055 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                  0x0004
# 1055 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (0 + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_mfpr", (((0x19) & 0x3Fu) << 26), 0xFC000000, 
# 1056 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                  0x0008
# 1056 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (0 + 1), ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_mfpr/i", ((((0x19) & 0x3Fu) << 26) | (((0x01) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1057 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0002
# 1057 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_mfpr/a", ((((0x19) & 0x3Fu) << 26) | (((0x02) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1058 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0002
# 1058 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_mfpr/ai", ((((0x19) & 0x3Fu) << 26) | (((0x03) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1059 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0002
# 1059 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (0 + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_mfpr/p", ((((0x19) & 0x3Fu) << 26) | (((0x04) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1060 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0002
# 1060 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_mfpr/pi", ((((0x19) & 0x3Fu) << 26) | (((0x05) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1061 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0002
# 1061 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (0 + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_mfpr/pa", ((((0x19) & 0x3Fu) << 26) | (((0x06) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1062 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0002
# 1062 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (0 + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_mfpr/pai", ((((0x19) & 0x3Fu) << 26) | (((0x07) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1063 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                  0x0002
# 1063 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (0 + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "pal19", (((0x19) & 0x3Fu) << 26), 0xFC000000, 
# 1064 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                        0x0001
# 1064 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                            , { (((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },

  { "jmp", ((((0x1A) & 0x3Fu) << 26) | (((0) & 3) << 14)), (0xFC000000 | 0xC000) | 0x3FFF,
   
# 1067 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
  0x0001
# 1067 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
      , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "jmp", ((((0x1A) & 0x3Fu) << 26) | (((0) & 3) << 14)), (0xFC000000 | 0xC000), 
# 1068 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                        0x0001
# 1068 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                            , { (0 + 1), (((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "jsr", ((((0x1A) & 0x3Fu) << 26) | (((1) & 3) << 14)), (0xFC000000 | 0xC000), 
# 1069 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                        0x0001
# 1069 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                            , { (0 + 1), (((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "ret", ((((0x1A) & 0x3Fu) << 26) | (((2) & 3) << 14)) | (31 << 21) | (26 << 16) | 1,
   0xFFFFFFFF, 
# 1071 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
              0x0001
# 1071 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                  , { 0 } },
  { "ret", ((((0x1A) & 0x3Fu) << 26) | (((2) & 3) << 14)), (0xFC000000 | 0xC000), 
# 1072 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                        0x0001
# 1072 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                            , { (0 + 1), (((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "jcr", ((((0x1A) & 0x3Fu) << 26) | (((3) & 3) << 14)), (0xFC000000 | 0xC000), 
# 1073 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                        0x0001
# 1073 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                            , { (0 + 1), (((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "jsr_coroutine", ((((0x1A) & 0x3Fu) << 26) | (((3) & 3) << 14)), (0xFC000000 | 0xC000), 
# 1074 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0001
# 1074 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (0 + 1), (((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },

  { "hw_ldl", ((((0x1B) & 0x3Fu) << 26) | (((0x0) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1076 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                  0x0002
# 1076 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl", ((((0x1B) & 0x3Fu) << 26) | (((0x00) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1077 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                   0x0004
# 1077 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                      , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl", ((((0x1B) & 0x3Fu) << 26) | (((0x8) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1078 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                  0x0008
# 1078 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (0 + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/a", ((((0x1B) & 0x3Fu) << 26) | (((0x4) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1079 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1079 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/a", ((((0x1B) & 0x3Fu) << 26) | (((0x10) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1080 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1080 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/a", ((((0x1B) & 0x3Fu) << 26) | (((0xC) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1081 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0008
# 1081 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/al", ((((0x1B) & 0x3Fu) << 26) | (((0x11) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1082 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1082 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/ar", ((((0x1B) & 0x3Fu) << 26) | (((0x6) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1083 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1083 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/av", ((((0x1B) & 0x3Fu) << 26) | (((0x12) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1084 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1084 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/avl", ((((0x1B) & 0x3Fu) << 26) | (((0x13) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1085 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1085 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/aw", ((((0x1B) & 0x3Fu) << 26) | (((0x18) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1086 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1086 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/awl", ((((0x1B) & 0x3Fu) << 26) | (((0x19) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1087 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1087 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/awv", ((((0x1B) & 0x3Fu) << 26) | (((0x1a) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1088 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1088 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/awvl", ((((0x1B) & 0x3Fu) << 26) | (((0x1b) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1089 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1089 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/l", ((((0x1B) & 0x3Fu) << 26) | (((0x01) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1090 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1090 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/p", ((((0x1B) & 0x3Fu) << 26) | (((0x8) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1091 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1091 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/p", ((((0x1B) & 0x3Fu) << 26) | (((0x20) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1092 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1092 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/p", ((((0x1B) & 0x3Fu) << 26) | (((0x0) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1093 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0008
# 1093 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/pa", ((((0x1B) & 0x3Fu) << 26) | (((0xC) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1094 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1094 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/pa", ((((0x1B) & 0x3Fu) << 26) | (((0x30) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1095 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1095 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/pal", ((((0x1B) & 0x3Fu) << 26) | (((0x31) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1096 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1096 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/par", ((((0x1B) & 0x3Fu) << 26) | (((0xE) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1097 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0002
# 1097 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/pav", ((((0x1B) & 0x3Fu) << 26) | (((0x32) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1098 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1098 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/pavl", ((((0x1B) & 0x3Fu) << 26) | (((0x33) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1099 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1099 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/paw", ((((0x1B) & 0x3Fu) << 26) | (((0x38) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1100 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1100 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/pawl", ((((0x1B) & 0x3Fu) << 26) | (((0x39) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1101 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1101 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/pawv", ((((0x1B) & 0x3Fu) << 26) | (((0x3a) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1102 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1102 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/pawvl", ((((0x1B) & 0x3Fu) << 26) | (((0x3b) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1103 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                        0x0004
# 1103 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                           , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/pl", ((((0x1B) & 0x3Fu) << 26) | (((0x21) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1104 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1104 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/pr", ((((0x1B) & 0x3Fu) << 26) | (((0xA) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1105 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1105 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/pv", ((((0x1B) & 0x3Fu) << 26) | (((0x22) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1106 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1106 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/pvl", ((((0x1B) & 0x3Fu) << 26) | (((0x23) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1107 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1107 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/pw", ((((0x1B) & 0x3Fu) << 26) | (((0x28) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1108 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1108 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/pwl", ((((0x1B) & 0x3Fu) << 26) | (((0x29) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1109 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1109 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/pwv", ((((0x1B) & 0x3Fu) << 26) | (((0x2a) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1110 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1110 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/pwvl", ((((0x1B) & 0x3Fu) << 26) | (((0x2b) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1111 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1111 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/r", ((((0x1B) & 0x3Fu) << 26) | (((0x2) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1112 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1112 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/v", ((((0x1B) & 0x3Fu) << 26) | (((0x02) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1113 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1113 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/v", ((((0x1B) & 0x3Fu) << 26) | (((0x4) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1114 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0008
# 1114 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/vl", ((((0x1B) & 0x3Fu) << 26) | (((0x03) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1115 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1115 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/w", ((((0x1B) & 0x3Fu) << 26) | (((0x08) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1116 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1116 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/w", ((((0x1B) & 0x3Fu) << 26) | (((0xA) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1117 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0008
# 1117 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/wa", ((((0x1B) & 0x3Fu) << 26) | (((0xE) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1118 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0008
# 1118 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/wl", ((((0x1B) & 0x3Fu) << 26) | (((0x09) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1119 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1119 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/wv", ((((0x1B) & 0x3Fu) << 26) | (((0x0a) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1120 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1120 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl/wvl", ((((0x1B) & 0x3Fu) << 26) | (((0x0b) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1121 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1121 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl_l", ((((0x1B) & 0x3Fu) << 26) | (((0x01) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1122 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1122 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl_l/a", ((((0x1B) & 0x3Fu) << 26) | (((0x11) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1123 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1123 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl_l/av", ((((0x1B) & 0x3Fu) << 26) | (((0x13) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1124 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1124 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl_l/aw", ((((0x1B) & 0x3Fu) << 26) | (((0x19) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1125 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1125 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl_l/awv", ((((0x1B) & 0x3Fu) << 26) | (((0x1b) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1126 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                        0x0004
# 1126 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                           , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl_l/p", ((((0x1B) & 0x3Fu) << 26) | (((0x21) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1127 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1127 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl_l/p", ((((0x1B) & 0x3Fu) << 26) | (((0x2) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1128 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0008
# 1128 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl_l/pa", ((((0x1B) & 0x3Fu) << 26) | (((0x31) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1129 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1129 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl_l/pav", ((((0x1B) & 0x3Fu) << 26) | (((0x33) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1130 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                        0x0004
# 1130 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                           , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl_l/paw", ((((0x1B) & 0x3Fu) << 26) | (((0x39) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1131 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                        0x0004
# 1131 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                           , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl_l/pawv", ((((0x1B) & 0x3Fu) << 26) | (((0x3b) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1132 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                         0x0004
# 1132 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                            , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl_l/pv", ((((0x1B) & 0x3Fu) << 26) | (((0x23) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1133 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1133 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl_l/pw", ((((0x1B) & 0x3Fu) << 26) | (((0x29) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1134 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1134 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl_l/pwv", ((((0x1B) & 0x3Fu) << 26) | (((0x2b) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1135 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                        0x0004
# 1135 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                           , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl_l/v", ((((0x1B) & 0x3Fu) << 26) | (((0x03) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1136 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1136 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl_l/w", ((((0x1B) & 0x3Fu) << 26) | (((0x09) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1137 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1137 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldl_l/wv", ((((0x1B) & 0x3Fu) << 26) | (((0x0b) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1138 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1138 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq", ((((0x1B) & 0x3Fu) << 26) | (((0x1) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1139 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                  0x0002
# 1139 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq", ((((0x1B) & 0x3Fu) << 26) | (((0x04) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1140 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                   0x0004
# 1140 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                      , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq", ((((0x1B) & 0x3Fu) << 26) | (((0x9) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1141 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                  0x0008
# 1141 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (0 + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/a", ((((0x1B) & 0x3Fu) << 26) | (((0x5) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1142 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1142 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/a", ((((0x1B) & 0x3Fu) << 26) | (((0x14) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1143 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1143 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/a", ((((0x1B) & 0x3Fu) << 26) | (((0xD) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1144 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0008
# 1144 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/al", ((((0x1B) & 0x3Fu) << 26) | (((0x15) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1145 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1145 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/ar", ((((0x1B) & 0x3Fu) << 26) | (((0x7) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1146 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1146 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/av", ((((0x1B) & 0x3Fu) << 26) | (((0x16) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1147 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1147 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/avl", ((((0x1B) & 0x3Fu) << 26) | (((0x17) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1148 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1148 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/aw", ((((0x1B) & 0x3Fu) << 26) | (((0x1c) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1149 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1149 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/awl", ((((0x1B) & 0x3Fu) << 26) | (((0x1d) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1150 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1150 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/awv", ((((0x1B) & 0x3Fu) << 26) | (((0x1e) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1151 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1151 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/awvl", ((((0x1B) & 0x3Fu) << 26) | (((0x1f) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1152 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1152 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/l", ((((0x1B) & 0x3Fu) << 26) | (((0x05) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1153 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1153 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/p", ((((0x1B) & 0x3Fu) << 26) | (((0x9) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1154 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1154 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/p", ((((0x1B) & 0x3Fu) << 26) | (((0x24) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1155 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1155 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/p", ((((0x1B) & 0x3Fu) << 26) | (((0x1) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1156 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0008
# 1156 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/pa", ((((0x1B) & 0x3Fu) << 26) | (((0xD) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1157 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1157 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/pa", ((((0x1B) & 0x3Fu) << 26) | (((0x34) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1158 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1158 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/pal", ((((0x1B) & 0x3Fu) << 26) | (((0x35) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1159 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1159 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/par", ((((0x1B) & 0x3Fu) << 26) | (((0xF) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1160 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0002
# 1160 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/pav", ((((0x1B) & 0x3Fu) << 26) | (((0x36) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1161 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1161 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/pavl", ((((0x1B) & 0x3Fu) << 26) | (((0x37) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1162 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1162 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/paw", ((((0x1B) & 0x3Fu) << 26) | (((0x3c) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1163 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1163 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/pawl", ((((0x1B) & 0x3Fu) << 26) | (((0x3d) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1164 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1164 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/pawv", ((((0x1B) & 0x3Fu) << 26) | (((0x3e) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1165 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1165 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/pawvl", ((((0x1B) & 0x3Fu) << 26) | (((0x3f) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1166 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                        0x0004
# 1166 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                           , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/pl", ((((0x1B) & 0x3Fu) << 26) | (((0x25) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1167 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1167 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/pr", ((((0x1B) & 0x3Fu) << 26) | (((0xB) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1168 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1168 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/pv", ((((0x1B) & 0x3Fu) << 26) | (((0x26) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1169 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1169 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/pvl", ((((0x1B) & 0x3Fu) << 26) | (((0x27) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1170 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1170 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/pw", ((((0x1B) & 0x3Fu) << 26) | (((0x2c) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1171 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1171 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/pwl", ((((0x1B) & 0x3Fu) << 26) | (((0x2d) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1172 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1172 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/pwv", ((((0x1B) & 0x3Fu) << 26) | (((0x2e) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1173 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1173 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/pwvl", ((((0x1B) & 0x3Fu) << 26) | (((0x2f) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1174 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1174 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/r", ((((0x1B) & 0x3Fu) << 26) | (((0x3) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1175 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1175 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/v", ((((0x1B) & 0x3Fu) << 26) | (((0x06) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1176 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1176 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/v", ((((0x1B) & 0x3Fu) << 26) | (((0x5) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1177 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0008
# 1177 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/vl", ((((0x1B) & 0x3Fu) << 26) | (((0x07) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1178 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1178 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/w", ((((0x1B) & 0x3Fu) << 26) | (((0x0c) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1179 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1179 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/w", ((((0x1B) & 0x3Fu) << 26) | (((0xB) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1180 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0008
# 1180 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/wa", ((((0x1B) & 0x3Fu) << 26) | (((0xF) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1181 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0008
# 1181 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/wl", ((((0x1B) & 0x3Fu) << 26) | (((0x0d) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1182 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1182 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/wv", ((((0x1B) & 0x3Fu) << 26) | (((0x0e) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1183 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1183 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq/wvl", ((((0x1B) & 0x3Fu) << 26) | (((0x0f) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1184 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1184 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq_l", ((((0x1B) & 0x3Fu) << 26) | (((0x05) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1185 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1185 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq_l/a", ((((0x1B) & 0x3Fu) << 26) | (((0x15) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1186 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1186 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq_l/av", ((((0x1B) & 0x3Fu) << 26) | (((0x17) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1187 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1187 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq_l/aw", ((((0x1B) & 0x3Fu) << 26) | (((0x1d) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1188 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1188 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq_l/awv", ((((0x1B) & 0x3Fu) << 26) | (((0x1f) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1189 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                        0x0004
# 1189 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                           , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq_l/p", ((((0x1B) & 0x3Fu) << 26) | (((0x25) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1190 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1190 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq_l/p", ((((0x1B) & 0x3Fu) << 26) | (((0x3) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1191 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0008
# 1191 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq_l/pa", ((((0x1B) & 0x3Fu) << 26) | (((0x35) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1192 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1192 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq_l/pav", ((((0x1B) & 0x3Fu) << 26) | (((0x37) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1193 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                        0x0004
# 1193 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                           , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq_l/paw", ((((0x1B) & 0x3Fu) << 26) | (((0x3d) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1194 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                        0x0004
# 1194 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                           , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq_l/pawv", ((((0x1B) & 0x3Fu) << 26) | (((0x3f) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1195 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                         0x0004
# 1195 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                            , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq_l/pv", ((((0x1B) & 0x3Fu) << 26) | (((0x27) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1196 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1196 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq_l/pw", ((((0x1B) & 0x3Fu) << 26) | (((0x2d) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1197 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1197 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq_l/pwv", ((((0x1B) & 0x3Fu) << 26) | (((0x2f) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1198 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                        0x0004
# 1198 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                           , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq_l/v", ((((0x1B) & 0x3Fu) << 26) | (((0x07) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1199 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1199 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq_l/w", ((((0x1B) & 0x3Fu) << 26) | (((0x0d) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1200 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1200 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ldq_l/wv", ((((0x1B) & 0x3Fu) << 26) | (((0x0f) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1201 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1201 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld", ((((0x1B) & 0x3Fu) << 26) | (((0x0) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1202 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0002
# 1202 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld", ((((0x1B) & 0x3Fu) << 26) | (((0x00) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1203 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                  0x0004
# 1203 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/a", ((((0x1B) & 0x3Fu) << 26) | (((0x4) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1204 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                   0x0002
# 1204 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                      , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/a", ((((0x1B) & 0x3Fu) << 26) | (((0x10) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1205 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0004
# 1205 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/al", ((((0x1B) & 0x3Fu) << 26) | (((0x11) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1206 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1206 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/aq", ((((0x1B) & 0x3Fu) << 26) | (((0x5) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1207 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1207 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/aq", ((((0x1B) & 0x3Fu) << 26) | (((0x14) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1208 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1208 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/aql", ((((0x1B) & 0x3Fu) << 26) | (((0x15) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1209 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1209 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/aqv", ((((0x1B) & 0x3Fu) << 26) | (((0x16) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1210 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1210 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/aqvl", ((((0x1B) & 0x3Fu) << 26) | (((0x17) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1211 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1211 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/ar", ((((0x1B) & 0x3Fu) << 26) | (((0x6) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1212 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1212 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/arq", ((((0x1B) & 0x3Fu) << 26) | (((0x7) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1213 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1213 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/av", ((((0x1B) & 0x3Fu) << 26) | (((0x12) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1214 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1214 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/avl", ((((0x1B) & 0x3Fu) << 26) | (((0x13) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1215 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1215 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/aw", ((((0x1B) & 0x3Fu) << 26) | (((0x18) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1216 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1216 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/awl", ((((0x1B) & 0x3Fu) << 26) | (((0x19) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1217 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1217 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/awq", ((((0x1B) & 0x3Fu) << 26) | (((0x1c) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1218 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1218 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/awql", ((((0x1B) & 0x3Fu) << 26) | (((0x1d) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1219 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1219 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/awqv", ((((0x1B) & 0x3Fu) << 26) | (((0x1e) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1220 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1220 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/awqvl", ((((0x1B) & 0x3Fu) << 26) | (((0x1f) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1221 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1221 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/awv", ((((0x1B) & 0x3Fu) << 26) | (((0x1a) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1222 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1222 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/awvl", ((((0x1B) & 0x3Fu) << 26) | (((0x1b) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1223 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1223 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/l", ((((0x1B) & 0x3Fu) << 26) | (((0x01) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1224 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0004
# 1224 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/p", ((((0x1B) & 0x3Fu) << 26) | (((0x8) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1225 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                   0x0002
# 1225 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                      , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/p", ((((0x1B) & 0x3Fu) << 26) | (((0x20) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1226 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0004
# 1226 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pa", ((((0x1B) & 0x3Fu) << 26) | (((0xC) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1227 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1227 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pa", ((((0x1B) & 0x3Fu) << 26) | (((0x30) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1228 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1228 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pal", ((((0x1B) & 0x3Fu) << 26) | (((0x31) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1229 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1229 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/paq", ((((0x1B) & 0x3Fu) << 26) | (((0xD) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1230 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1230 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/paq", ((((0x1B) & 0x3Fu) << 26) | (((0x34) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1231 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1231 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/paql", ((((0x1B) & 0x3Fu) << 26) | (((0x35) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1232 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1232 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/paqv", ((((0x1B) & 0x3Fu) << 26) | (((0x36) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1233 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1233 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/paqvl", ((((0x1B) & 0x3Fu) << 26) | (((0x37) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1234 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1234 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/par", ((((0x1B) & 0x3Fu) << 26) | (((0xE) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1235 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1235 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/parq", ((((0x1B) & 0x3Fu) << 26) | (((0xF) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1236 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0002
# 1236 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pav", ((((0x1B) & 0x3Fu) << 26) | (((0x32) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1237 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1237 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pavl", ((((0x1B) & 0x3Fu) << 26) | (((0x33) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1238 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1238 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/paw", ((((0x1B) & 0x3Fu) << 26) | (((0x38) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1239 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1239 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pawl", ((((0x1B) & 0x3Fu) << 26) | (((0x39) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1240 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1240 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pawq", ((((0x1B) & 0x3Fu) << 26) | (((0x3c) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1241 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1241 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pawql", ((((0x1B) & 0x3Fu) << 26) | (((0x3d) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1242 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1242 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pawqv", ((((0x1B) & 0x3Fu) << 26) | (((0x3e) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1243 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1243 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pawqvl", ((((0x1B) & 0x3Fu) << 26) | (((0x3f) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1244 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                        0x0004
# 1244 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                           , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pawv", ((((0x1B) & 0x3Fu) << 26) | (((0x3a) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1245 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1245 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pawvl", ((((0x1B) & 0x3Fu) << 26) | (((0x3b) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1246 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1246 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pl", ((((0x1B) & 0x3Fu) << 26) | (((0x21) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1247 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1247 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pq", ((((0x1B) & 0x3Fu) << 26) | (((0x9) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1248 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1248 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pq", ((((0x1B) & 0x3Fu) << 26) | (((0x24) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1249 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1249 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pql", ((((0x1B) & 0x3Fu) << 26) | (((0x25) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1250 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1250 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pqv", ((((0x1B) & 0x3Fu) << 26) | (((0x26) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1251 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1251 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pqvl", ((((0x1B) & 0x3Fu) << 26) | (((0x27) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1252 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1252 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pr", ((((0x1B) & 0x3Fu) << 26) | (((0xA) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1253 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1253 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/prq", ((((0x1B) & 0x3Fu) << 26) | (((0xB) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1254 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1254 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pv", ((((0x1B) & 0x3Fu) << 26) | (((0x22) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1255 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1255 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pvl", ((((0x1B) & 0x3Fu) << 26) | (((0x23) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1256 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1256 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pw", ((((0x1B) & 0x3Fu) << 26) | (((0x28) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1257 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1257 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pwl", ((((0x1B) & 0x3Fu) << 26) | (((0x29) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1258 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1258 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pwq", ((((0x1B) & 0x3Fu) << 26) | (((0x2c) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1259 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1259 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pwql", ((((0x1B) & 0x3Fu) << 26) | (((0x2d) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1260 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1260 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pwqv", ((((0x1B) & 0x3Fu) << 26) | (((0x2e) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1261 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1261 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pwqvl", ((((0x1B) & 0x3Fu) << 26) | (((0x2f) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1262 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1262 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pwv", ((((0x1B) & 0x3Fu) << 26) | (((0x2a) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1263 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1263 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/pwvl", ((((0x1B) & 0x3Fu) << 26) | (((0x2b) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1264 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1264 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/q", ((((0x1B) & 0x3Fu) << 26) | (((0x1) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1265 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                   0x0002
# 1265 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                      , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/q", ((((0x1B) & 0x3Fu) << 26) | (((0x04) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1266 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0004
# 1266 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/ql", ((((0x1B) & 0x3Fu) << 26) | (((0x05) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1267 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1267 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/qv", ((((0x1B) & 0x3Fu) << 26) | (((0x06) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1268 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1268 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/qvl", ((((0x1B) & 0x3Fu) << 26) | (((0x07) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1269 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1269 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/r", ((((0x1B) & 0x3Fu) << 26) | (((0x2) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1270 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                   0x0002
# 1270 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                      , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/rq", ((((0x1B) & 0x3Fu) << 26) | (((0x3) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1271 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1271 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/v", ((((0x1B) & 0x3Fu) << 26) | (((0x02) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1272 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0004
# 1272 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/vl", ((((0x1B) & 0x3Fu) << 26) | (((0x03) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1273 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1273 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/w", ((((0x1B) & 0x3Fu) << 26) | (((0x08) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1274 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0004
# 1274 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/wl", ((((0x1B) & 0x3Fu) << 26) | (((0x09) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1275 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1275 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/wq", ((((0x1B) & 0x3Fu) << 26) | (((0x0c) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1276 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1276 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/wql", ((((0x1B) & 0x3Fu) << 26) | (((0x0d) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1277 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1277 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/wqv", ((((0x1B) & 0x3Fu) << 26) | (((0x0e) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1278 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1278 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/wqvl", ((((0x1B) & 0x3Fu) << 26) | (((0x0f) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1279 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1279 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/wv", ((((0x1B) & 0x3Fu) << 26) | (((0x0a) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1280 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1280 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_ld/wvl", ((((0x1B) & 0x3Fu) << 26) | (((0x0b) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1281 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1281 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "pal1b", (((0x1B) & 0x3Fu) << 26), 0xFC000000, 
# 1282 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                        0x0001
# 1282 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                            , { (((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },

  { "sextb", ((((0x1C) & 0x3Fu) << 26) | (((0x00) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1284 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0100
# 1284 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sextw", ((((0x1C) & 0x3Fu) << 26) | (((0x01) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1285 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0100
# 1285 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "ctpop", ((((0x1C) & 0x3Fu) << 26) | (((0x30) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1286 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                              0x0200
# 1286 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                 , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "perr", ((((0x1C) & 0x3Fu) << 26) | (((0x31) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1287 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0400
# 1287 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "ctlz", ((((0x1C) & 0x3Fu) << 26) | (((0x32) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1288 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0200
# 1288 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "cttz", ((((0x1C) & 0x3Fu) << 26) | (((0x33) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1289 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0200
# 1289 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "unpkbw", ((((0x1C) & 0x3Fu) << 26) | (((0x34) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1290 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0400
# 1290 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "unpkbl", ((((0x1C) & 0x3Fu) << 26) | (((0x35) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1291 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0400
# 1291 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "pkwb", ((((0x1C) & 0x3Fu) << 26) | (((0x36) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1292 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0400
# 1292 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "pklb", ((((0x1C) & 0x3Fu) << 26) | (((0x37) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1293 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0400
# 1293 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "minsb8", ((((0x1C) & 0x3Fu) << 26) | (((0x38) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1294 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0400
# 1294 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "minsb8", ((((((0x1C)) & 0x3Fu) << 26) | ((((0x38)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 1295 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0400
# 1295 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "minsw4", ((((0x1C) & 0x3Fu) << 26) | (((0x39) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1296 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0400
# 1296 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "minsw4", ((((((0x1C)) & 0x3Fu) << 26) | ((((0x39)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 1297 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0400
# 1297 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "minub8", ((((0x1C) & 0x3Fu) << 26) | (((0x3A) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1298 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0400
# 1298 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "minub8", ((((((0x1C)) & 0x3Fu) << 26) | ((((0x3A)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 1299 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0400
# 1299 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "minuw4", ((((0x1C) & 0x3Fu) << 26) | (((0x3B) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1300 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0400
# 1300 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "minuw4", ((((((0x1C)) & 0x3Fu) << 26) | ((((0x3B)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 1301 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0400
# 1301 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "maxub8", ((((0x1C) & 0x3Fu) << 26) | (((0x3C) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1302 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0400
# 1302 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "maxub8", ((((((0x1C)) & 0x3Fu) << 26) | ((((0x3C)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 1303 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0400
# 1303 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "maxuw4", ((((0x1C) & 0x3Fu) << 26) | (((0x3D) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1304 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0400
# 1304 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "maxuw4", ((((((0x1C)) & 0x3Fu) << 26) | ((((0x3D)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 1305 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0400
# 1305 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "maxsb8", ((((0x1C) & 0x3Fu) << 26) | (((0x3E) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1306 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0400
# 1306 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "maxsb8", ((((((0x1C)) & 0x3Fu) << 26) | ((((0x3E)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 1307 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0400
# 1307 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "maxsw4", ((((0x1C) & 0x3Fu) << 26) | (((0x3F) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1308 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0400
# 1308 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((0 + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "maxsw4", ((((((0x1C)) & 0x3Fu) << 26) | ((((0x3F)) & 0x7F) << 5)) | 0x1000), (0xFC000000 | 0x1FE0), 
# 1309 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                0x0400
# 1309 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                   , { (0 + 1), ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "ftoit", ((((0x1C) & 0x3Fu) << 26) | (((0x70) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1310 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0200
# 1310 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { ((((0 + 1) + 1) + 1) + 1), ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((0 + 1) + 1) + 1) } },
  { "ftois", ((((0x1C) & 0x3Fu) << 26) | (((0x78) & 0x7FF) << 5)), (0xFC000000 | 0xFFE0), 
# 1311 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                             0x0200
# 1311 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                , { ((((0 + 1) + 1) + 1) + 1), ((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((0 + 1) + 1) + 1) } },

  { "hw_mtpr", ((((0x1D) & 0x3Fu) << 26) | (((0x00) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1313 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                               0x0002
# 1313 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                  , { (0 + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_mtpr", (((0x1D) & 0x3Fu) << 26), 0xFC000000, 
# 1314 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                  0x0004
# 1314 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (0 + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_mtpr", (((0x1D) & 0x3Fu) << 26), 0xFC000000, 
# 1315 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                  0x0008
# 1315 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((0 + 1) + 1), (((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_mtpr/i", ((((0x1D) & 0x3Fu) << 26) | (((0x01) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1316 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0002
# 1316 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (0 + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_mtpr/a", ((((0x1D) & 0x3Fu) << 26) | (((0x02) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1317 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0002
# 1317 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (0 + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_mtpr/ai", ((((0x1D) & 0x3Fu) << 26) | (((0x03) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1318 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0002
# 1318 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (0 + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_mtpr/p", ((((0x1D) & 0x3Fu) << 26) | (((0x04) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1319 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0002
# 1319 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (0 + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_mtpr/pi", ((((0x1D) & 0x3Fu) << 26) | (((0x05) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1320 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0002
# 1320 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (0 + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_mtpr/pa", ((((0x1D) & 0x3Fu) << 26) | (((0x06) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1321 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0002
# 1321 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (0 + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_mtpr/pai", ((((0x1D) & 0x3Fu) << 26) | (((0x07) & 0x7F) << 5)), (0xFC000000 | 0x1FE0), 
# 1322 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                  0x0002
# 1322 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (0 + 1), ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "pal1d", (((0x1D) & 0x3Fu) << 26), 0xFC000000, 
# 1323 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                        0x0001
# 1323 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                            , { (((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },

  { "hw_rei", ((((0x1E) & 0x3Fu) << 26) | ((0x3FF8000) & 0x3FFFFFF)), 0xFFFFFFFF, 
# 1325 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1325 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       |
# 1325 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                        0x0004
# 1325 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                           , { 0 } },
  { "hw_rei_stall", ((((0x1E) & 0x3Fu) << 26) | ((0x3FFC000) & 0x3FFFFFF)), 0xFFFFFFFF, 
# 1326 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                         0x0004
# 1326 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                            , { 0 } },
  { "hw_jmp", ((((0x1E) & 0x3Fu) << 26) | (((0x0) & 7) << 13)), (0xFC000000 | 0xE000), 
# 1327 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                   0x0008
# 1327 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                      , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)+ 1) } },
  { "hw_jsr", ((((0x1E) & 0x3Fu) << 26) | (((0x2) & 7) << 13)), (0xFC000000 | 0xE000), 
# 1328 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                   0x0008
# 1328 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                      , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)+ 1) } },
  { "hw_ret", ((((0x1E) & 0x3Fu) << 26) | (((0x4) & 7) << 13)), (0xFC000000 | 0xE000), 
# 1329 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                   0x0008
# 1329 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                      , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_jcr", ((((0x1E) & 0x3Fu) << 26) | (((0x6) & 7) << 13)), (0xFC000000 | 0xE000), 
# 1330 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                   0x0008
# 1330 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                      , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_coroutine", ((((0x1E) & 0x3Fu) << 26) | (((0x6) & 7) << 13)), (0xFC000000 | 0xE000), 
# 1331 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0008
# 1331 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_jmp/stall", ((((0x1E) & 0x3Fu) << 26) | (((0x1) & 7) << 13)), (0xFC000000 | 0xE000), 
# 1332 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0008
# 1332 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)+ 1) } },
  { "hw_jsr/stall", ((((0x1E) & 0x3Fu) << 26) | (((0x3) & 7) << 13)), (0xFC000000 | 0xE000), 
# 1333 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                        0x0008
# 1333 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                           , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)+ 1) } },
  { "hw_ret/stall", ((((0x1E) & 0x3Fu) << 26) | (((0x5) & 7) << 13)), (0xFC000000 | 0xE000), 
# 1334 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0008
# 1334 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_jcr/stall", ((((0x1E) & 0x3Fu) << 26) | (((0x7) & 7) << 13)), (0xFC000000 | 0xE000), 
# 1335 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                        0x0008
# 1335 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                           , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_coroutine/stall", ((((0x1E) & 0x3Fu) << 26) | (((0x7) & 7) << 13)), (0xFC000000 | 0xE000), 
# 1336 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                             0x0008
# 1336 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                                , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "pal1e", (((0x1E) & 0x3Fu) << 26), 0xFC000000, 
# 1337 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                        0x0001
# 1337 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                            , { (((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },

  { "hw_stl", ((((0x1F) & 0x3Fu) << 26) | (((0x0) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1339 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                  0x0002
# 1339 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl", ((((0x1F) & 0x3Fu) << 26) | (((0x00) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1340 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                   0x0004
# 1340 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                      , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl", ((((0x1F) & 0x3Fu) << 26) | (((0x4) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1341 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                  0x0008
# 1341 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (0 + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl/a", ((((0x1F) & 0x3Fu) << 26) | (((0x4) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1342 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1342 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl/a", ((((0x1F) & 0x3Fu) << 26) | (((0x10) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1343 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1343 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl/a", ((((0x1F) & 0x3Fu) << 26) | (((0xC) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1344 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0008
# 1344 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl/ac", ((((0x1F) & 0x3Fu) << 26) | (((0x11) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1345 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1345 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl/ar", ((((0x1F) & 0x3Fu) << 26) | (((0x6) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1346 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1346 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl/av", ((((0x1F) & 0x3Fu) << 26) | (((0x12) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1347 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1347 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl/avc", ((((0x1F) & 0x3Fu) << 26) | (((0x13) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1348 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1348 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl/c", ((((0x1F) & 0x3Fu) << 26) | (((0x01) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1349 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1349 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl/p", ((((0x1F) & 0x3Fu) << 26) | (((0x8) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1350 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1350 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl/p", ((((0x1F) & 0x3Fu) << 26) | (((0x20) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1351 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1351 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl/p", ((((0x1F) & 0x3Fu) << 26) | (((0x0) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1352 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0008
# 1352 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl/pa", ((((0x1F) & 0x3Fu) << 26) | (((0xC) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1353 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1353 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl/pa", ((((0x1F) & 0x3Fu) << 26) | (((0x30) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1354 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1354 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl/pac", ((((0x1F) & 0x3Fu) << 26) | (((0x31) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1355 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1355 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl/pav", ((((0x1F) & 0x3Fu) << 26) | (((0x32) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1356 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1356 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl/pavc", ((((0x1F) & 0x3Fu) << 26) | (((0x33) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1357 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1357 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl/pc", ((((0x1F) & 0x3Fu) << 26) | (((0x21) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1358 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1358 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl/pr", ((((0x1F) & 0x3Fu) << 26) | (((0xA) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1359 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1359 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl/pv", ((((0x1F) & 0x3Fu) << 26) | (((0x22) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1360 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1360 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl/pvc", ((((0x1F) & 0x3Fu) << 26) | (((0x23) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1361 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1361 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl/r", ((((0x1F) & 0x3Fu) << 26) | (((0x2) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1362 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1362 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl/v", ((((0x1F) & 0x3Fu) << 26) | (((0x02) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1363 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1363 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl/vc", ((((0x1F) & 0x3Fu) << 26) | (((0x03) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1364 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1364 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl_c", ((((0x1F) & 0x3Fu) << 26) | (((0x01) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1365 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1365 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl_c/a", ((((0x1F) & 0x3Fu) << 26) | (((0x11) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1366 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1366 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl_c/av", ((((0x1F) & 0x3Fu) << 26) | (((0x13) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1367 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1367 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl_c/p", ((((0x1F) & 0x3Fu) << 26) | (((0x21) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1368 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1368 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl_c/p", ((((0x1F) & 0x3Fu) << 26) | (((0x2) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1369 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0008
# 1369 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl_c/pa", ((((0x1F) & 0x3Fu) << 26) | (((0x31) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1370 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1370 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl_c/pav", ((((0x1F) & 0x3Fu) << 26) | (((0x33) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1371 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                        0x0004
# 1371 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                           , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl_c/pv", ((((0x1F) & 0x3Fu) << 26) | (((0x23) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1372 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1372 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stl_c/v", ((((0x1F) & 0x3Fu) << 26) | (((0x03) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1373 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1373 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq", ((((0x1F) & 0x3Fu) << 26) | (((0x1) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1374 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                  0x0002
# 1374 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq", ((((0x1F) & 0x3Fu) << 26) | (((0x04) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1375 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                   0x0004
# 1375 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                      , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq", ((((0x1F) & 0x3Fu) << 26) | (((0x5) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1376 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                  0x0008
# 1376 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (0 + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq/a", ((((0x1F) & 0x3Fu) << 26) | (((0x5) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1377 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1377 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq/a", ((((0x1F) & 0x3Fu) << 26) | (((0x14) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1378 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1378 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq/a", ((((0x1F) & 0x3Fu) << 26) | (((0xD) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1379 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0008
# 1379 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq/ac", ((((0x1F) & 0x3Fu) << 26) | (((0x15) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1380 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1380 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq/ar", ((((0x1F) & 0x3Fu) << 26) | (((0x7) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1381 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1381 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq/av", ((((0x1F) & 0x3Fu) << 26) | (((0x16) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1382 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1382 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq/avc", ((((0x1F) & 0x3Fu) << 26) | (((0x17) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1383 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1383 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq/c", ((((0x1F) & 0x3Fu) << 26) | (((0x05) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1384 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1384 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq/p", ((((0x1F) & 0x3Fu) << 26) | (((0x9) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1385 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1385 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq/p", ((((0x1F) & 0x3Fu) << 26) | (((0x24) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1386 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1386 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq/p", ((((0x1F) & 0x3Fu) << 26) | (((0x1) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1387 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0008
# 1387 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq/pa", ((((0x1F) & 0x3Fu) << 26) | (((0xD) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1388 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1388 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq/pa", ((((0x1F) & 0x3Fu) << 26) | (((0x34) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1389 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1389 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq/pac", ((((0x1F) & 0x3Fu) << 26) | (((0x35) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1390 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1390 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq/par", ((((0x1F) & 0x3Fu) << 26) | (((0xE) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1391 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0002
# 1391 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq/par", ((((0x1F) & 0x3Fu) << 26) | (((0xF) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1392 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0002
# 1392 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq/pav", ((((0x1F) & 0x3Fu) << 26) | (((0x36) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1393 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1393 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq/pavc", ((((0x1F) & 0x3Fu) << 26) | (((0x37) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1394 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1394 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq/pc", ((((0x1F) & 0x3Fu) << 26) | (((0x25) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1395 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1395 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq/pr", ((((0x1F) & 0x3Fu) << 26) | (((0xB) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1396 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1396 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq/pv", ((((0x1F) & 0x3Fu) << 26) | (((0x26) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1397 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1397 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq/pvc", ((((0x1F) & 0x3Fu) << 26) | (((0x27) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1398 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1398 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq/r", ((((0x1F) & 0x3Fu) << 26) | (((0x3) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1399 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1399 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq/v", ((((0x1F) & 0x3Fu) << 26) | (((0x06) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1400 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1400 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq/vc", ((((0x1F) & 0x3Fu) << 26) | (((0x07) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1401 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1401 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq_c", ((((0x1F) & 0x3Fu) << 26) | (((0x05) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1402 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1402 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq_c/a", ((((0x1F) & 0x3Fu) << 26) | (((0x15) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1403 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1403 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq_c/av", ((((0x1F) & 0x3Fu) << 26) | (((0x17) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1404 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1404 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq_c/p", ((((0x1F) & 0x3Fu) << 26) | (((0x25) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1405 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1405 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq_c/p", ((((0x1F) & 0x3Fu) << 26) | (((0x3) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1406 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0008
# 1406 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq_c/pa", ((((0x1F) & 0x3Fu) << 26) | (((0x35) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1407 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1407 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq_c/pav", ((((0x1F) & 0x3Fu) << 26) | (((0x37) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1408 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                        0x0004
# 1408 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                           , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq_c/pv", ((((0x1F) & 0x3Fu) << 26) | (((0x27) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1409 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1409 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_stq_c/v", ((((0x1F) & 0x3Fu) << 26) | (((0x07) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1410 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1410 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st", ((((0x1F) & 0x3Fu) << 26) | (((0x0) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1411 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                 0x0002
# 1411 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                    , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st", ((((0x1F) & 0x3Fu) << 26) | (((0x00) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1412 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                  0x0004
# 1412 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                     , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/a", ((((0x1F) & 0x3Fu) << 26) | (((0x4) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1413 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                   0x0002
# 1413 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                      , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/a", ((((0x1F) & 0x3Fu) << 26) | (((0x10) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1414 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0004
# 1414 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/ac", ((((0x1F) & 0x3Fu) << 26) | (((0x11) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1415 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1415 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/aq", ((((0x1F) & 0x3Fu) << 26) | (((0x5) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1416 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1416 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/aq", ((((0x1F) & 0x3Fu) << 26) | (((0x14) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1417 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1417 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/aqc", ((((0x1F) & 0x3Fu) << 26) | (((0x15) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1418 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1418 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/aqv", ((((0x1F) & 0x3Fu) << 26) | (((0x16) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1419 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1419 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/aqvc", ((((0x1F) & 0x3Fu) << 26) | (((0x17) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1420 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1420 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/ar", ((((0x1F) & 0x3Fu) << 26) | (((0x6) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1421 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1421 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/arq", ((((0x1F) & 0x3Fu) << 26) | (((0x7) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1422 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1422 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/av", ((((0x1F) & 0x3Fu) << 26) | (((0x12) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1423 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1423 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/avc", ((((0x1F) & 0x3Fu) << 26) | (((0x13) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1424 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1424 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/c", ((((0x1F) & 0x3Fu) << 26) | (((0x01) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1425 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0004
# 1425 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/p", ((((0x1F) & 0x3Fu) << 26) | (((0x8) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1426 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                   0x0002
# 1426 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                      , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/p", ((((0x1F) & 0x3Fu) << 26) | (((0x20) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1427 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0004
# 1427 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/pa", ((((0x1F) & 0x3Fu) << 26) | (((0xC) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1428 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1428 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/pa", ((((0x1F) & 0x3Fu) << 26) | (((0x30) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1429 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1429 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/pac", ((((0x1F) & 0x3Fu) << 26) | (((0x31) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1430 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1430 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/paq", ((((0x1F) & 0x3Fu) << 26) | (((0xD) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1431 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1431 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/paq", ((((0x1F) & 0x3Fu) << 26) | (((0x34) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1432 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1432 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/paqc", ((((0x1F) & 0x3Fu) << 26) | (((0x35) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1433 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1433 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/paqv", ((((0x1F) & 0x3Fu) << 26) | (((0x36) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1434 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1434 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/paqvc", ((((0x1F) & 0x3Fu) << 26) | (((0x37) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1435 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                       0x0004
# 1435 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                          , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/par", ((((0x1F) & 0x3Fu) << 26) | (((0xE) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1436 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1436 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/parq", ((((0x1F) & 0x3Fu) << 26) | (((0xF) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1437 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0002
# 1437 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/pav", ((((0x1F) & 0x3Fu) << 26) | (((0x32) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1438 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1438 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/pavc", ((((0x1F) & 0x3Fu) << 26) | (((0x33) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1439 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1439 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/pc", ((((0x1F) & 0x3Fu) << 26) | (((0x21) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1440 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1440 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/pq", ((((0x1F) & 0x3Fu) << 26) | (((0x9) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1441 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1441 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/pq", ((((0x1F) & 0x3Fu) << 26) | (((0x24) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1442 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1442 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/pqc", ((((0x1F) & 0x3Fu) << 26) | (((0x25) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1443 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1443 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/pqv", ((((0x1F) & 0x3Fu) << 26) | (((0x26) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1444 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1444 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/pqvc", ((((0x1F) & 0x3Fu) << 26) | (((0x27) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1445 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                      0x0004
# 1445 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                         , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/pr", ((((0x1F) & 0x3Fu) << 26) | (((0xA) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1446 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1446 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/prq", ((((0x1F) & 0x3Fu) << 26) | (((0xB) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1447 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0002
# 1447 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/pv", ((((0x1F) & 0x3Fu) << 26) | (((0x22) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1448 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1448 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/pvc", ((((0x1F) & 0x3Fu) << 26) | (((0x23) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1449 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1449 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/q", ((((0x1F) & 0x3Fu) << 26) | (((0x1) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1450 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                   0x0002
# 1450 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                      , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/q", ((((0x1F) & 0x3Fu) << 26) | (((0x04) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1451 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0004
# 1451 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/qc", ((((0x1F) & 0x3Fu) << 26) | (((0x05) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1452 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1452 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/qv", ((((0x1F) & 0x3Fu) << 26) | (((0x06) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1453 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1453 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/qvc", ((((0x1F) & 0x3Fu) << 26) | (((0x07) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1454 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1454 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/r", ((((0x1F) & 0x3Fu) << 26) | (((0x2) & 0xF) << 12)), (0xFC000000 | 0xF000), 
# 1455 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                   0x0002
# 1455 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                      , { (0 + 1), ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/v", ((((0x1F) & 0x3Fu) << 26) | (((0x02) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1456 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                    0x0004
# 1456 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                       , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "hw_st/vc", ((((0x1F) & 0x3Fu) << 26) | (((0x03) & 0x3F) << 10)), (0xFC000000 | 0xF800), 
# 1457 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                                     0x0004
# 1457 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                                        , { (0 + 1), (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "pal1f", (((0x1F) & 0x3Fu) << 26), 0xFC000000, 
# 1458 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                        0x0001
# 1458 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                            , { (((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },

  { "ldf", (((0x20) & 0x3Fu) << 26), 0xFC000000, 
# 1460 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0x0001
# 1460 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                          , { ((((0 + 1) + 1) + 1) + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "ldg", (((0x21) & 0x3Fu) << 26), 0xFC000000, 
# 1461 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0x0001
# 1461 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                          , { ((((0 + 1) + 1) + 1) + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "lds", (((0x22) & 0x3Fu) << 26), 0xFC000000, 
# 1462 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0x0001
# 1462 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                          , { ((((0 + 1) + 1) + 1) + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "ldt", (((0x23) & 0x3Fu) << 26), 0xFC000000, 
# 1463 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0x0001
# 1463 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                          , { ((((0 + 1) + 1) + 1) + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "stf", (((0x24) & 0x3Fu) << 26), 0xFC000000, 
# 1464 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0x0001
# 1464 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                          , { ((((0 + 1) + 1) + 1) + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "stg", (((0x25) & 0x3Fu) << 26), 0xFC000000, 
# 1465 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0x0001
# 1465 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                          , { ((((0 + 1) + 1) + 1) + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "sts", (((0x26) & 0x3Fu) << 26), 0xFC000000, 
# 1466 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0x0001
# 1466 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                          , { ((((0 + 1) + 1) + 1) + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "stt", (((0x27) & 0x3Fu) << 26), 0xFC000000, 
# 1467 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0x0001
# 1467 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                          , { ((((0 + 1) + 1) + 1) + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },

  { "ldl", (((0x28) & 0x3Fu) << 26), 0xFC000000, 
# 1469 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0x0001
# 1469 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                          , { (0 + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "ldq", (((0x29) & 0x3Fu) << 26), 0xFC000000, 
# 1470 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0x0001
# 1470 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                          , { (0 + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "ldl_l", (((0x2A) & 0x3Fu) << 26), 0xFC000000, 
# 1471 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                        0x0001
# 1471 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                            , { (0 + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "ldq_l", (((0x2B) & 0x3Fu) << 26), 0xFC000000, 
# 1472 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                        0x0001
# 1472 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                            , { (0 + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "stl", (((0x2C) & 0x3Fu) << 26), 0xFC000000, 
# 1473 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0x0001
# 1473 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                          , { (0 + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "stq", (((0x2D) & 0x3Fu) << 26), 0xFC000000, 
# 1474 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0x0001
# 1474 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                          , { (0 + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "stl_c", (((0x2E) & 0x3Fu) << 26), 0xFC000000, 
# 1475 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                        0x0001
# 1475 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                            , { (0 + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "stq_c", (((0x2F) & 0x3Fu) << 26), 0xFC000000, 
# 1476 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                        0x0001
# 1476 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                            , { (0 + 1), (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },

  { "br", (((0x30) & 0x3Fu) << 26), 0xFC000000, 
# 1478 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                     0x0001
# 1478 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                         , { (((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1), ((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "br", (((0x30) & 0x3Fu) << 26), 0xFC000000, 
# 1479 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                     0x0001
# 1479 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                         , { (0 + 1), ((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "fbeq", (((0x31) & 0x3Fu) << 26), 0xFC000000, 
# 1480 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                       0x0001
# 1480 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                           , { ((((0 + 1) + 1) + 1) + 1), ((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "fblt", (((0x32) & 0x3Fu) << 26), 0xFC000000, 
# 1481 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                       0x0001
# 1481 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                           , { ((((0 + 1) + 1) + 1) + 1), ((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "fble", (((0x33) & 0x3Fu) << 26), 0xFC000000, 
# 1482 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                       0x0001
# 1482 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                           , { ((((0 + 1) + 1) + 1) + 1), ((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "bsr", (((0x34) & 0x3Fu) << 26), 0xFC000000, 
# 1483 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0x0001
# 1483 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                          , { (0 + 1), ((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "fbne", (((0x35) & 0x3Fu) << 26), 0xFC000000, 
# 1484 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                       0x0001
# 1484 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                           , { ((((0 + 1) + 1) + 1) + 1), ((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "fbge", (((0x36) & 0x3Fu) << 26), 0xFC000000, 
# 1485 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                       0x0001
# 1485 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                           , { ((((0 + 1) + 1) + 1) + 1), ((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "fbgt", (((0x37) & 0x3Fu) << 26), 0xFC000000, 
# 1486 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                       0x0001
# 1486 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                           , { ((((0 + 1) + 1) + 1) + 1), ((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "blbc", (((0x38) & 0x3Fu) << 26), 0xFC000000, 
# 1487 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                       0x0001
# 1487 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                           , { (0 + 1), ((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "beq", (((0x39) & 0x3Fu) << 26), 0xFC000000, 
# 1488 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0x0001
# 1488 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                          , { (0 + 1), ((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "blt", (((0x3A) & 0x3Fu) << 26), 0xFC000000, 
# 1489 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0x0001
# 1489 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                          , { (0 + 1), ((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "ble", (((0x3B) & 0x3Fu) << 26), 0xFC000000, 
# 1490 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0x0001
# 1490 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                          , { (0 + 1), ((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "blbs", (((0x3C) & 0x3Fu) << 26), 0xFC000000, 
# 1491 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                       0x0001
# 1491 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                           , { (0 + 1), ((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "bne", (((0x3D) & 0x3Fu) << 26), 0xFC000000, 
# 1492 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0x0001
# 1492 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                          , { (0 + 1), ((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "bge", (((0x3E) & 0x3Fu) << 26), 0xFC000000, 
# 1493 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0x0001
# 1493 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                          , { (0 + 1), ((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
  { "bgt", (((0x3F) & 0x3Fu) << 26), 0xFC000000, 
# 1494 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c" 3 4
                      0x0001
# 1494 "project/radare2/libr/asm/arch/alpha/gnu/alpha-opc.c"
                          , { (0 + 1), ((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) } },
};

const unsigned alpha_num_opcodes = sizeof(alpha_opcodes)/sizeof(*alpha_opcodes);