# 0 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
# 27 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/sysdep.h" 1 3 4
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/sysdep.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/ansidecl.h" 1 3 4
# 31 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/sysdep.h" 2 3 4
# 28 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 2
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
# 29 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 2
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
# 30 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/ansidecl.h" 1 3 4
# 31 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 2
# 1 "project/radare2/libr/asm/arch/arc/gnu/arc.h" 1
# 62 "project/radare2/libr/asm/arch/arc/gnu/arc.h"

# 62 "project/radare2/libr/asm/arch/arc/gnu/arc.h"
typedef unsigned int arc_insn;

struct arc_opcode {
  const char *syntax;
  unsigned long mask, value;
  int flags;
# 173 "project/radare2/libr/asm/arch/arc/gnu/arc.h"
  struct arc_opcode *next_asm;
  struct arc_opcode *next_dis;
# 186 "project/radare2/libr/asm/arch/arc/gnu/arc.h"
  unsigned long mask2,value2;
};

struct arc_operand_value {
  char *name;
  short value;
  unsigned char type;
  unsigned char flags;







};

struct arc_ext_operand_value {
  struct arc_ext_operand_value *next;
  struct arc_operand_value operand;
};



extern struct arc_ext_operand_value *arc_ext_operands;

struct arc_operand {

  unsigned char fmt;


  unsigned char bits;



  unsigned char shift;


  int flags;
# 364 "project/radare2/libr/asm/arch/arc/gnu/arc.h"
  arc_insn (*insert) (arc_insn insn, long *extend, const struct arc_operand *operand,
        int mods, const struct arc_operand_value *reg,
        long value, const char **errmsg);
# 392 "project/radare2/libr/asm/arch/arc/gnu/arc.h"
  long (*extract) (arc_insn *insn,
     const struct arc_operand *operand, int mods,
     const struct arc_operand_value **opval, int *invalid);
};
# 432 "project/radare2/libr/asm/arch/arc/gnu/arc.h"
extern const struct arc_operand *arc_operands;
extern int arc_operand_count;

extern const struct arc_operand_value *arc_suffixes;
extern int arc_suffixes_count;

extern const struct arc_operand_value *arc_reg_names;
extern int arc_reg_names_count;

extern unsigned char *arc_operand_map;



extern int arc_cond_p;

extern int arc_mach_a4;
extern unsigned long arc_ld_ext_mask;
extern int arc_user_mode_only;


int arc_get_opcode_mach (int, int);

void arc_opcode_init_tables (int);
void arc_opcode_init_insert (void);
void arc_opcode_init_extract (void);
const struct arc_opcode *arc_opcode_lookup_asm (const char *);
const struct arc_opcode *arc_opcode_lookup_dis (unsigned int);
int arc_opcode_limm_p (long *);
const struct arc_operand_value *arc_opcode_lookup_suffix (const struct arc_operand *type, int value);
int arc_opcode_supported (const struct arc_opcode *);
int arc_opval_supported (const struct arc_operand_value *);
int arc_insn_not_jl (arc_insn);

extern char *arc_aux_reg_name (int);
extern struct arc_operand_value *get_ext_suffix (char *,char);

extern int ac_branch_or_jump_insn (arc_insn, int);
extern int ac_lpcc_insn (arc_insn);
extern int ac_constant_operand (const struct arc_operand *);
extern int ac_register_operand (const struct arc_operand *);
extern int ac_symbol_operand (const struct arc_operand *);
extern int ARC700_register_simd_operand (char);
extern int arc_operand_type (int);
extern int ac_add_reg_sdasym_insn (arc_insn);
extern int ac_get_load_sdasym_insn_type (arc_insn, int);
extern int ac_get_store_sdasym_insn_type (arc_insn, int);
extern int arc_limm_fixup_adjust (arc_insn);
extern int arc_test_wb (void);
# 32 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opintl.h" 1 3 4
# 33 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 2






enum operand {OP_NONE,OP_REG,OP_SHIMM,OP_LIMM};
# 53 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
int arc_get_noshortcut_flag (void);
# 64 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
static arc_insn insert_u8 (arc_insn, long *, const struct arc_operand *, int, const struct arc_operand_value *, long, const char **);
static arc_insn insert_u16 (arc_insn, long *, const struct arc_operand *, int, const struct arc_operand_value *, long, const char **);
static arc_insn insert_uu16 (arc_insn, long *, const struct arc_operand *, int, const struct arc_operand_value *, long, const char **);
static arc_insn insert_ul16 (arc_insn, long *, const struct arc_operand *, int, const struct arc_operand_value *, long, const char **);
static arc_insn insert_null (arc_insn, long *, const struct arc_operand *, int, const struct arc_operand_value *, long, const char **);
static arc_insn insert_s12 (arc_insn, long *, const struct arc_operand *, int, const struct arc_operand_value *, long, const char **);
static arc_insn insert_s15 (arc_insn, long *, const struct arc_operand *, int, const struct arc_operand_value *, long, const char **);
static arc_insn insert_reg (arc_insn, long *, const struct arc_operand *, int, const struct arc_operand_value *, long, const char **);
static arc_insn insert_shimmfinish (arc_insn, long *, const struct arc_operand *, int, const struct arc_operand_value *, long, const char **);
static arc_insn insert_limmfinish (arc_insn, long *, const struct arc_operand *, int, const struct arc_operand_value *, long, const char **);
static arc_insn insert_offset (arc_insn, long *, const struct arc_operand *, int, const struct arc_operand_value *, long, const char **);
static arc_insn insert_base (arc_insn, long *, const struct arc_operand *, int, const struct arc_operand_value *, long, const char **);
static arc_insn insert_st_syntax (arc_insn, long *, const struct arc_operand *, int, const struct arc_operand_value *, long, const char **);
static arc_insn insert_ld_syntax (arc_insn, long *, const struct arc_operand *, int, const struct arc_operand_value *, long, const char **);
static arc_insn insert_ex_syntax (arc_insn, long *, const struct arc_operand *, int, const struct arc_operand_value *, long, const char **);
static arc_insn insert_addr_wb (arc_insn, long *, const struct arc_operand *, int, const struct arc_operand_value *, long, const char **);
static arc_insn insert_flag (arc_insn, long *, const struct arc_operand *, int, const struct arc_operand_value *, long, const char **);
static arc_insn insert_nullify (arc_insn, long *, const struct arc_operand *, int, const struct arc_operand_value *, long, const char **);
static arc_insn insert_flagfinish (arc_insn, long *, const struct arc_operand *, int, const struct arc_operand_value *, long, const char **);
static arc_insn insert_cond (arc_insn, long *, const struct arc_operand *, int, const struct arc_operand_value *, long, const char **);
static arc_insn insert_forcelimm (arc_insn, long *, const struct arc_operand *, int, const struct arc_operand_value *, long, const char **);
static arc_insn insert_reladdr (arc_insn, long *, const struct arc_operand *, int, const struct arc_operand_value *, long, const char **);
static arc_insn insert_absaddr (arc_insn, long *, const struct arc_operand *, int, const struct arc_operand_value *, long, const char **);
static arc_insn insert_jumpflags (arc_insn, long *, const struct arc_operand *, int, const struct arc_operand_value *, long, const char **);
static arc_insn insert_unopmacro (arc_insn, long *, const struct arc_operand *, int, const struct arc_operand_value *, long, const char **);

static long extract_reg (arc_insn *, const struct arc_operand *, int, const struct arc_operand_value **, int *);
static long extract_ld_offset (arc_insn *, const struct arc_operand *, int, const struct arc_operand_value **, int *);
static long extract_ld_syntax (arc_insn *, const struct arc_operand *, int, const struct arc_operand_value **, int *);
static long extract_st_offset (arc_insn *, const struct arc_operand *, int, const struct arc_operand_value **, int *);
static long extract_st_syntax (arc_insn *, const struct arc_operand *, int, const struct arc_operand_value **, int *);
static long extract_flag (arc_insn *, const struct arc_operand *, int, const struct arc_operand_value **, int *);
static long extract_cond (arc_insn *, const struct arc_operand *, int, const struct arc_operand_value **, int *);
static long extract_reladdr (arc_insn *, const struct arc_operand *, int, const struct arc_operand_value **, int *);
static long extract_jumpflags (arc_insn *, const struct arc_operand *, int, const struct arc_operand_value **, int *);
static long extract_unopmacro (arc_insn *, const struct arc_operand *, int, const struct arc_operand_value **, int *);







static int flag_p;


static int flagshimm_handled_p;


static int addrwb_p;


static int nullify_p;


static int nullify;


static int jumpflags_p;


static int shimm_p;



static int shimm;



static int limm_p;



static long limm;





static int cpu_type;




static unsigned char arc_operand_map_a4[256];
static unsigned char arc_operand_map_ac[256];




static enum operand ls_operand[3];
# 207 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
static const struct arc_operand arc_operands_a4[] =
{


  { 0, 0, 0, 0, 0, 0 },



  { 'a', 6, 21, 0x20 | 0x800, insert_reg, extract_reg },



  { 'b', 6, 15, 0x20 | 0x800, insert_reg, extract_reg },



  { 'c', 6, 9, 0x20 | 0x800, insert_reg, extract_reg },



  { 'S', 9, 0, 0x20 + 0x100, insert_shimmfinish, 0 },



  { 'L', 32, 32, 8 + 0x10 + 0x100, insert_limmfinish, 0 },



  { 'o', 9, 0, 0x10 | 0x20 | 0x10000, insert_offset, extract_st_offset },



  { 'O', 9, 0,0x10 | 0x20 | 0x8000, insert_offset, extract_ld_offset },



  { 's', 6, 15, 0x10 | 0x20, insert_base, extract_reg},



  { '0', 9, 0, 0x100, insert_st_syntax, extract_st_syntax },



  { '1', 9, 0, 0x100, insert_ld_syntax, extract_ld_syntax },



  { '2', 9, 0, 0x100 | 0x800, insert_st_syntax, extract_st_syntax },



  { '3', 9, 0, 0x100 | 0x800, insert_ld_syntax, extract_ld_syntax },



  { 'f', 1, 8, 1, insert_flag, extract_flag },



  { 'F', 1, 8, 0x100, insert_flagfinish, 0 },



  { 'G', 1, 8, 0x100, insert_flag, 0 },



  { 'n', 2, 5, 1 , insert_nullify, 0 },



  { 'q', 5, 0, 1, insert_cond, extract_cond },



  { 'Q', 0, 0, 0x100, insert_forcelimm, 0 },



  { 'B', 20, 7, 2 + (0x20 | 0x800), insert_reladdr, extract_reladdr },




  { 'J', 24, 32, (0x800 | 4) + 0x10 + 0x100, insert_absaddr, 0 },



  { 'j', 6, 26, 0x200 | 0x800, insert_jumpflags, extract_jumpflags },



  { 'z', 2, 1, 1, 0, 0 },



  { 'Z', 2, 10, 1, 0, 0 },



  { 'y', 2, 22, 1, 0, 0 },



  { 'x', 1, 0, 1, 0, 0 },



  { 'X', 1, 9, 1, 0, 0 },



  { 'w', 1, 3, 1, insert_addr_wb, 0},



  { 'W', 1, 12, 1, insert_addr_wb, 0},



  { 'v', 1, 24, 1, insert_addr_wb, 0},



  { 'e', 1, 5, 1, 0, 0 },



  { 'E', 1, 14, 1, 0, 0 },



  { 'D', 1, 26, 1, 0, 0 },



  { 'U', 6, 9, 0x100, insert_unopmacro, extract_unopmacro },



  { '.', 1, 0, 0x1000, 0, 0 },





  { 'r', 6, 0, 0x2000, 0, 0 },



  { 'A', 9, 0, 0x4000, 0, 0 },


  { 0, 0, 0, 0, 0, 0 }
};
# 489 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
static const struct arc_operand arc_operands_ac[] =
{


  { 0, 0, 0, 0, 0, 0 },



  { 'A', 6, 0, 0x20 | 0x800, insert_reg, extract_reg },



  { 'B', 6, 24, 0x20 | 0x800, insert_reg, extract_reg },



  { '#', 6, 24, 0x20 | 0x800, insert_reg, extract_reg },



  { 'C', 6, 6, 0x20 | 0x800, insert_reg, extract_reg },



  { 'u', 6, 6, 0x20000, 0, 0 },



  { 'K', 12, 6, 0x20, 0, 0 },



  { 'L', 32, 32, 8 | 0x10, insert_reg, 0 },



  { 'Q', 0, 0, 0x100, insert_forcelimm, 0 },



  { 'q', 5, 0, 1, insert_cond, extract_cond },



  { 'f', 1, 15, 1, insert_flag, extract_flag },



  { 'F', 1, 15, 0x100, insert_flagfinish, 0 },



  { 'n', 1, 5, 1, insert_nullify, 0 },



  { 'N', 1, 16, 1, insert_nullify, 0 },



  { 'z', 2, 1, 1, 0, 0 },



  { 't', 2, 7, 1, 0, 0 },



  { 'T', 2, 17, 1, 0, 0 },



  { 'x', 1, 6, 1, 0, 0 },



  { 'X', 1, 16, 1, 0, 0 },



  { 'w', 2, 3, 1, insert_addr_wb, 0 },



  { 'p', 2, 9, 1, insert_addr_wb, 0 },



  { 'P', 2, 22, 1, insert_addr_wb, 0 },



  { '&', 2, 22, 1, insert_addr_wb, 0 },



  { 'D', 1, 5, 1, 0, 0 },



  { 'v', 1, 11, 1, 0, 0 },



  { 'V', 1, 15, 1, 0, 0 },



  { 'g', 6, 24, 0x10 |0x20, insert_base, extract_reg },



  { 'o', 9, 16, 0x10 | 0x20 | 0x8000, insert_offset, extract_ld_offset },




  { 'd', 8, 17, 2 | 0x20 | 0x40000 | 0x800, insert_reladdr, extract_reladdr },




  { 'h', 19, 18, 2 | 0x20 | 0x80000 | 0x800, insert_reladdr, extract_reladdr },




  { 'H', 23, 18, 2 | 0x20 | 0x80000 | 0x800, insert_reladdr, extract_reladdr },




  { 'i', 20, 17, 2 | 0x20 | 0x40000 | 0x800, insert_reladdr, extract_reladdr },




  { 'I', 24, 17, 2 | 0x20 | 0x40000 | 0x800, insert_reladdr, extract_reladdr },




  { 'y', 6, 6, 2 | 0x40000 | 0x800, insert_reladdr, extract_reladdr },




  { 'Y', 12, 6, 2 | 0x20 | 0x40000 | 0x800, insert_reladdr, extract_reladdr },



  { '0', 9, 0, 0x100, insert_st_syntax, extract_st_syntax },



  { '1', 9, 0, 0x100, insert_ld_syntax, extract_ld_syntax },



  { '2', 9, 0, 0x100 | 0x800, insert_st_syntax, extract_st_syntax },



  { '3', 9, 0, 0x100 | 0x800, insert_ld_syntax, extract_ld_syntax },



  { '^', 9, 0, 0x100 | 0x800, insert_ex_syntax, 0 },



  { '7', 0, 0, 0, 0, 0 },



  { '8', 0, 0, 0, 0, 0 },



  { '.', 1, 0, 0x1000, 0, 0 },



  { 'r', 6, 0, 0x2000, 0, 0 },



  { 'G', 9, 0, 0x4000, 0, 0 },





  { 'a', 3, 0, 0x20 | 0x800, insert_reg, extract_reg },



  { 'b', 3, 8, 0x20 | 0x800, insert_reg, extract_reg },



  { 'c', 3, 5, 0x20 | 0x800, insert_reg, extract_reg },



  { 'U', 6, 5, 0x20 | 0x800, insert_reg, extract_reg },



  { 'e', 3, 0, 0x20000, 0, 0 },



  { 'E', 5, 0, 0x20000, 0, 0 },



  { 'j', 7, 0, 0x20000, 0, 0 },



  { 'J', 8, 0, 0x20000, 0, 0 },



  { 'k', 5, 0, 0x20000 | 0x8000 | 0x40000 , insert_offset, extract_ld_offset },




  { 'l', 5, 0, 0x20000 | 0x80000, 0, 0 },



  { 'm', 8, 0, 0x20000 | 0x8000 | 0x80000 , insert_offset, extract_ld_offset },




  { 's', 6, 0, 2 | 0x20 | 0x40000 | 0x800, insert_reladdr, extract_reladdr },




  { 'S', 7, 0, 2 | 0x20 | 0x40000 | 0x800, insert_reladdr, extract_reladdr },




  { 'Z', 9, 0, 2 | 0x20 | 0x40000 | 0x800, insert_reladdr, extract_reladdr },




  { 'W', 11, 0, 2 | 0x20 | 0x80000 | 0x800, insert_reladdr, extract_reladdr },



  { 'M', 9, 0, 0x10 | 0x20 | 0x8000, insert_offset, extract_ld_offset },



  { 'O', 9, 0, 0x10 | 0x20 | 0x8000 | 0x40000 , insert_offset, extract_ld_offset },



  { 'R', 9, 0, 0x10 | 0x20 | 0x8000 | 0x80000 , insert_offset, extract_ld_offset },



  { '4', 0, 0, 0, 0, 0 },



  { '5', 0, 0, 0, 0, 0 },



  { '6', 0, 0, 0, 0, 0 },



  { '9', 0, 0, 0, 0, 0 },



  { '!', 0, 0, 0, 0, 0 },



  { '@', 6 ,5, 0x20000, 0 , 0},





  { '*', 6, 0 , 0x20 | 0x800, insert_reg, 0},



  { '(', 6, 24 , 0x20 | 0x800, insert_reg, 0},



  { ')', 6, 6 , 0x20 | 0x800, insert_reg, 0},



  { '?', 8, 6 , 0x20000 , insert_u8, 0},



  { '{', 6 , 24, 0x20 | 0x800, insert_reg, 0},



  { '}', 6 , 6 , 0x20 | 0x800, insert_reg, 0},



  { '<', 6 , 24, 0x20 | 0x800, insert_reg, 0},



  { '>', 6 , 6 , 0x20 | 0x800, insert_reg, 0},



  { '[', 0, 0, 0x100000, 0, 0 },



  { ']', 0, 15, 1,0,0},


  { '\07', 6, 0, 0x20000, 0, 0 },


  { '\13', 6, 0, 0x20|0x800, insert_reg, 0 },

  { '\14', 6, 6, 0x20|0x800, insert_s12, 0 },

  { '\15', 6, 0, 0x20|0x800, insert_reg, 0 },

  { '\16', 6, 24, 0x20|0x800, insert_reg, 0 },

  { '\17', 6, 6, 0x20|0x800, insert_reg, 0 },

  { '\20', 6, 6, 0x20|0x800, insert_u16, 0 },

  { '\21', 6, 6, 0x20|0x800, insert_uu16, 0 },

  { '\22', 6, 6, 0x20|0x800, insert_ul16, 0 },

  { '\23', 6, 6, 0x20|0x800, insert_null, 0 },

  { '\24', 6, 6, 0x20|0x800, insert_s15, 0 },

  { '\25', 6, 6, 0x20|0x800, 0, 0 },

  { 0, 0, 0, 0, 0, 0 }
};







int arc_cond_p;







int arc_mach_a4 = 1;
# 876 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
unsigned long arc_ld_ext_mask = 1 << (62 - 32);

int arc_user_mode_only = 0;

struct arc_ext_operand_value *arc_ext_operands;
# 889 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
unsigned char *arc_operand_map = arc_operand_map_a4;



const struct arc_operand *arc_operands = arc_operands_a4;
# 903 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
static arc_insn
insert_u8 (arc_insn insn, long * insn2 
# 904 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                       __attribute__ ((__unused__))
# 904 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                       ,
            const struct arc_operand *operand,
            int mods 
# 906 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                    __attribute__ ((__unused__))
# 906 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                    ,
            const struct arc_operand_value *reg 
# 907 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                               __attribute__ ((__unused__))
# 907 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                               ,
            long value 
# 908 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                      __attribute__ ((__unused__))
# 908 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                      ,
            const char **errmsg 
# 909 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                               __attribute__ ((__unused__))
           
# 910 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
          )
{

  long msb2;
  long lsb6;

  msb2 = value >> 6;
  msb2 = msb2 << 15;

  lsb6 = value & 0x3f ;

  insn |= msb2;
  insn |= (lsb6 << operand->shift);
  return insn;
}
# 936 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
static arc_insn
insert_s12 (arc_insn insn, long *ex,
            const struct arc_operand *operand 
# 938 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                             __attribute__ ((__unused__))
# 938 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                             ,
            int mods 
# 939 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                    __attribute__ ((__unused__))
# 939 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                    ,
            const struct arc_operand_value *reg 
# 940 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                               __attribute__ ((__unused__))
# 940 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                               ,
            long value 
# 941 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                      __attribute__ ((__unused__))
# 941 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                      ,
            const char **errmsg 
# 942 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                               __attribute__ ((__unused__))
           
# 943 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
          )
{

  long msb6;
  long lsb6;

  msb6 = (value >> 6) & 0x3ff;
  lsb6 = (value & 0x3f) << 6 ;

  insn |= lsb6;
  if (ex) {
   *ex |= msb6;
  }
  return insn;
}
# 969 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
static arc_insn
insert_u16 (arc_insn insn, long *ex,
            const struct arc_operand *operand 
# 971 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                             __attribute__ ((__unused__))
# 971 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                             ,
            int mods 
# 972 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                    __attribute__ ((__unused__))
# 972 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                    ,
            const struct arc_operand_value *reg 
# 973 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                               __attribute__ ((__unused__))
# 973 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                               ,
            long value 
# 974 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                      __attribute__ ((__unused__))
# 974 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                      ,
            const char **errmsg 
# 975 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                               __attribute__ ((__unused__))
           
# 976 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
          )
{

  long msb6;
  long lsb6;

  msb6 = (value >> 6) & 0x3ff;
  lsb6 = (value & 0x3f) << 6 ;

  insn |= lsb6;
  if (ex) {
   *ex |= msb6;
  }
  return insn;
}
# 1002 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
static arc_insn
insert_uu16 (arc_insn insn, long *ex,
            const struct arc_operand *operand 
# 1004 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                             __attribute__ ((__unused__))
# 1004 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                             ,
            int mods 
# 1005 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                    __attribute__ ((__unused__))
# 1005 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                    ,
            const struct arc_operand_value *reg 
# 1006 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                               __attribute__ ((__unused__))
# 1006 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                               ,
            long value 
# 1007 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                      __attribute__ ((__unused__))
# 1007 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                      ,
            const char **errmsg 
# 1008 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                               __attribute__ ((__unused__))
           
# 1009 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
          )
{

  long msb8;

  msb8 = (value & 0xff) << 2;
  if (ex) {
   *ex |= msb8;
  }
  return insn;
}
# 1032 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
static arc_insn
insert_ul16 (arc_insn insn, long *ex,
            const struct arc_operand *operand 
# 1034 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                             __attribute__ ((__unused__))
# 1034 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                             ,
            int mods 
# 1035 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                    __attribute__ ((__unused__))
# 1035 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                    ,
            const struct arc_operand_value *reg 
# 1036 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                               __attribute__ ((__unused__))
# 1036 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                               ,
            long value 
# 1037 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                      __attribute__ ((__unused__))
# 1037 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                      ,
            const char **errmsg 
# 1038 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                               __attribute__ ((__unused__))
           
# 1039 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
          )
{

  long msb2;
  long lsb6;

  msb2 = (value >> 6) & 0x3;
  lsb6 = (value & 0x3f) << 6 ;

  insn |= lsb6;
  if (ex) {
   *ex |= msb2;
  }
  return insn;
}
# 1063 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
static arc_insn
insert_s15 (arc_insn insn, long *ex,
            const struct arc_operand *operand 
# 1065 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                             __attribute__ ((__unused__))
# 1065 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                             ,
            int mods 
# 1066 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                    __attribute__ ((__unused__))
# 1066 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                    ,
            const struct arc_operand_value *reg 
# 1067 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                               __attribute__ ((__unused__))
# 1067 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                               ,
            long value 
# 1068 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                      __attribute__ ((__unused__))
# 1068 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                      ,
            const char **errmsg 
# 1069 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                               __attribute__ ((__unused__))
           
# 1070 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
          )
{

 if (ex) {
  *ex |= (value & 0x7fff);
 }
 return insn;
}
# 1089 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
static arc_insn
insert_null (arc_insn insn, long *ex 
# 1090 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                     __attribute__ ((__unused__))
# 1090 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                     ,
            const struct arc_operand *operand 
# 1091 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                             __attribute__ ((__unused__))
# 1091 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                             ,
            int mods 
# 1092 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                    __attribute__ ((__unused__))
# 1092 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                    ,
            const struct arc_operand_value *reg 
# 1093 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                               __attribute__ ((__unused__))
# 1093 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                               ,
            long value 
# 1094 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                      __attribute__ ((__unused__))
# 1094 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                      ,
            const char **errmsg 
# 1095 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                               __attribute__ ((__unused__))
           
# 1096 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
          )
{
  return insn;
}






static arc_insn
insert_reg (arc_insn insn,long *ex 
# 1107 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                  __attribute__ ((__unused__))
# 1107 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                  ,
     const struct arc_operand *operand,
     int mods,
     const struct arc_operand_value *reg,
     long value,
     const char **errmsg)
{
  static char buf[100];
  enum operand op_type = OP_NONE;
  if (!reg)
    {





      if (arc_mach_a4 && ((long) (value) >= -256 && (long) (value) <= 255)

   && !arc_cond_p


   && (!shimm_p || shimm == value))
 {
   int marker;

   op_type = OP_SHIMM;


   if ('a' != operand->fmt)
     {
       shimm_p = 1;
       shimm = value;
       flagshimm_handled_p = 1;
       marker = flag_p ? 61 : 63;
     }
   else
     {

       marker = 63;
     }
   insn |= marker << operand->shift;

 }
      else if ((mods & 0x100000) && !ac_add_reg_sdasym_insn (insn))
 {


   if (addrwb_p == 0)
     {

       if ((insn & 0xf8000000) == 0x10000000)
  {

    if ((((insn >> 7) & 3) == 0) ||
     (((insn >> 7) & 3) == 2)) {

     addrwb_p = 0x600;
    }
  }

       else if ((insn & 0xf8000001) == 0x18000000)
  {

    if ((((insn >> 1) & 3) == 0) ||
     (((insn >> 1) & 3) == 2)) {

     addrwb_p = 0x18;
    }
  }
     }
 }

      else if (!limm_p || limm == value)
 {
     if ('a' != operand->fmt)
       {
  op_type = OP_LIMM;
  limm_p = 1;
  limm = value;
  if (arc_mach_a4) {
   insn |= 62 << operand->shift;
  }

       }
     else
       {
        if (arc_mach_a4) {
         insn |= 63 << operand->shift;
        }

       }
 }
      else{
 *errmsg = 
# 1200 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
          (
# 1200 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
          "unable to fit different valued constants into instruction"
# 1200 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
          )
# 1200 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                                        ;
          }
    }
  else
    {


      if ((reg->type == ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)) || (reg->type == ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)))
 {
       if (!(mods & 0x4000)) {
        *errmsg = 
# 1210 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                 (
# 1210 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                 "auxiliary register not allowed here"
# 1210 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                 )
# 1210 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                          ;
       } else if (arc_mach_a4) {
        if ((insn & (((unsigned) (-1) & 31) << 27)) == (((unsigned) (2) & 31) << 27))
        {
         if (reg->flags & 0x01) {
          *errmsg = 
# 1215 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                   (
# 1215 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                   "attempt to set readonly register"
# 1215 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                   )
# 1215 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                         ;
         }
        } else {
         if (reg->flags & 0x02) {
          *errmsg = 
# 1219 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                   (
# 1219 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                   "attempt to read writeonly register"
# 1219 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                   )
# 1219 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                           ;
         }
        }
        insn |= 63 << operand->shift;
        insn |= reg->value << arc_operands[reg->type].shift;
     }
   else
     {
# 1235 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
       insn |= (((reg->value & 0x3f) << 6) | ((reg->value & 0xffffffc0) >> 6));
     }
 }
      else
 {

          if (('a' == operand->fmt) || (arc_mach_a4 && ((insn & (((unsigned) (-1) & 31) << 27)) < (((unsigned) (2) & 31) << 27))) ||
              (!arc_mach_a4 && (('A' == operand->fmt)||('#' == operand->fmt))))
            {
    if (reg->flags & 0x01) {
     *errmsg = 
# 1245 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
              (
# 1245 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
              "attempt to set readonly register"
# 1245 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
              )
# 1245 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                    ;
    }
     }
          if ('a' != operand->fmt || (!arc_mach_a4 && ('A' != operand->fmt)))
            {
    if (reg->flags & 0x02) {
     *errmsg = 
# 1251 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
              (
# 1251 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
              "attempt to read writeonly register"
# 1251 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
              )
# 1251 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                      ;
    }
     }

   if (arc_mach_a4 && ((unsigned int) reg->value > 60))
     {
       
# 1257 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
      __builtin___sprintf_chk (
# 1257 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
      buf
# 1257 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
      , 0, __builtin_object_size (
# 1257 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
      buf
# 1257 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
      , 2 > 1 ? 1 : 0), (
# 1257 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
      "invalid register number `%d'"
# 1257 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
      )
# 1257 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
      , reg->value
# 1257 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
      )
# 1257 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                                  ;
       *errmsg = buf;
     }
   if (!arc_mach_a4 && ((unsigned int) reg->value > 63))
     {
       
# 1262 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
      __builtin___sprintf_chk (
# 1262 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
      buf
# 1262 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
      , 0, __builtin_object_size (
# 1262 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
      buf
# 1262 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
      , 2 > 1 ? 1 : 0), (
# 1262 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
      "invalid register number `%d'"
# 1262 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
      )
# 1262 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
      , reg->value
# 1262 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
      )
# 1262 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                                  ;
       *errmsg = buf;
     }
          if (!arc_mach_a4 && ( ('B' == operand->fmt) || ('#' == operand->fmt)
      || ('g' == operand->fmt) || ('(' == operand->fmt)
      || ('{' == operand->fmt) || ('<' == operand->fmt)))
     {
       insn |= (reg->value & 0x7) << operand->shift;
       insn |= (reg->value >> 3) << 12;
     }
          else if (!arc_mach_a4 && ('U' == operand->fmt))
            {
       insn |= (reg->value & 0x7) << operand->shift;
       insn |= reg->value >> 3;
# 1284 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
       if ((insn & 0xFF) == 0xFF) {
        *errmsg = 
# 1285 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                 (
# 1285 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                 "attempt to set readonly register"
# 1285 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                 )
# 1285 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                       ;
       }
     } else {
      insn |= reg->value << operand->shift;
     }
     op_type = OP_REG;
 }
    }

  if (arc_mach_a4)
    {
      switch (operand->fmt)
        {
 case 'a':
   ls_operand[0] = op_type;
   break;
 case 's':
   ls_operand[1] = op_type;
   break;
 case 'c':
  if ((insn & (((unsigned) (-1) & 31) << 27)) == (((unsigned) (2) & 31) << 27)) {
   ls_operand[0] = op_type;
  } else {
   ls_operand[2] = op_type;
  }
  break;
 case 'o': case 'O':
   ls_operand[2] = op_type;
   break;
 }
    }
  else
    {
      switch (operand->fmt)
        {
        case 'a':
        case 'A':
        case '#':
        case '*':
          ls_operand[0] = op_type;
          break;
        case 'C':
        case ')':
        case '}':
        case '>':
  if ((insn & (((unsigned) (-1) & 31) << 27)) == (((unsigned) (3) & 31) << 27)) {
   ls_operand[0] = op_type;
  } else {
   ls_operand[2] = op_type;
  }
  break;
        }
    }
  return insn;
}



static arc_insn
insert_flag (arc_insn insn, long *ex 
# 1344 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                    __attribute__ ((__unused__))
# 1344 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                    ,
      const struct arc_operand *operand 
# 1345 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                       __attribute__ ((__unused__))
# 1345 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                       ,
      int mods 
# 1346 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
              __attribute__ ((__unused__))
# 1346 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                              ,
      const struct arc_operand_value *reg 
# 1347 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                         __attribute__ ((__unused__))
# 1347 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                         ,
      long value 
# 1348 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                __attribute__ ((__unused__))
# 1348 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                ,
      const char **errmsg 
# 1349 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                         __attribute__ ((__unused__))
# 1349 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                         )
{



  flag_p = 1;
  return insn;
}



static arc_insn
insert_nullify (arc_insn insn,long *ex 
# 1361 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                      __attribute__ ((__unused__))
# 1361 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                      ,
  const struct arc_operand *operand,
  int mods 
# 1363 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
          __attribute__ ((__unused__))
# 1363 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                          ,
  const struct arc_operand_value *reg 
# 1364 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                     __attribute__ ((__unused__))
# 1364 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                     ,
  long value,
  const char **errmsg 
# 1366 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                     __attribute__ ((__unused__))
# 1366 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                     )
{
  nullify_p = 1;
  insn |= (value & ((1 << operand->bits) - 1)) << operand->shift;
  nullify = value;
  return insn;
}





static arc_insn
insert_flagfinish (arc_insn insn,long *ex 
# 1379 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                         __attribute__ ((__unused__))
# 1379 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                         ,
     const struct arc_operand *operand,
     int mods 
# 1381 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
             __attribute__ ((__unused__))
# 1381 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                             ,
     const struct arc_operand_value *reg 
# 1382 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                        __attribute__ ((__unused__))
# 1382 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                        ,
     long value 
# 1383 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
               __attribute__ ((__unused__))
# 1383 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                               ,
     const char **errmsg 
# 1384 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                        __attribute__ ((__unused__))
# 1384 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                        )
{
  if (flag_p && !flagshimm_handled_p)
    {

      flagshimm_handled_p = 1;
      insn |= (1 << operand->shift);
    }
  return insn;
}



static arc_insn
insert_cond (arc_insn insn,long *ex 
# 1398 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                   __attribute__ ((__unused__))
# 1398 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                   ,
      const struct arc_operand *operand,
      int mods 
# 1400 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
              __attribute__ ((__unused__))
# 1400 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                              ,
      const struct arc_operand_value *reg 
# 1401 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                         __attribute__ ((__unused__))
# 1401 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                         ,
      long value,
      const char **errmsg 
# 1403 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                         __attribute__ ((__unused__))
# 1403 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                         )
{
  arc_cond_p = 1;

  insn |= (value & ((1 << operand->bits) - 1)) << operand->shift;
  return insn;
}







static arc_insn
insert_forcelimm (arc_insn insn,long *ex 
# 1418 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                        __attribute__ ((__unused__))
# 1418 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                        ,
    const struct arc_operand *operand 
# 1419 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                     __attribute__ ((__unused__))
# 1419 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                     ,
    int mods 
# 1420 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
            __attribute__ ((__unused__))
# 1420 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                            ,
    const struct arc_operand_value *reg 
# 1421 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                       __attribute__ ((__unused__))
# 1421 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                       ,
    long value 
# 1422 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
              __attribute__ ((__unused__))
# 1422 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                              ,
    const char **errmsg 
# 1423 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                       __attribute__ ((__unused__))
# 1423 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                       )
{
  arc_cond_p = 1;
  return insn;
}

static arc_insn
insert_addr_wb (arc_insn insn,long *ex 
# 1430 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                      __attribute__ ((__unused__))
# 1430 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                      ,
  const struct arc_operand *operand,
  int mods 
# 1432 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
          __attribute__ ((__unused__))
# 1432 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                          ,
  const struct arc_operand_value *reg 
# 1433 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                     __attribute__ ((__unused__))
# 1433 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                     ,
  long value 
# 1434 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
            __attribute__ ((__unused__))
# 1434 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                            ,
  const char **errmsg 
# 1435 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                     __attribute__ ((__unused__))
# 1435 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                     )
{




    if (!arc_mach_a4 && (('p' == operand->fmt) || ('P' == operand->fmt) || ('w' == operand->fmt) || ('&' == operand->fmt))) {
     addrwb_p = value << operand->shift;
    } else {
     addrwb_p = 1 << operand->shift;
    }
    return insn;
}

static arc_insn
insert_base (arc_insn insn,long *ex 
# 1450 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                   __attribute__ ((__unused__))
# 1450 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                   ,
      const struct arc_operand *operand,
      int mods,
      const struct arc_operand_value *reg,
      long value,
      const char **errmsg)
{
  if (reg != 
# 1457 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
            ((void *)0)
# 1457 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                )
    {
      arc_insn myinsn;
      if (!arc_mach_a4 && ('g' == operand->fmt)) {
       insn |= insert_reg (0, ex, operand, mods, reg, value, errmsg);
      } else {
       myinsn = (insert_reg (0, ex, operand, mods, reg, value, errmsg) >> operand->shift);
       insn |= (((unsigned) (myinsn) & 63) << 15);
 }
      ls_operand[1] = OP_REG;
    }
  else if (arc_mach_a4 && ((long) (value) >= -256 && (long) (value) <= 255) && !arc_cond_p)
    {
      if (shimm_p && value != shimm)
 {

   limm_p = 1;
   limm = shimm;
   insn &= ~(((unsigned) (-1) & 63) << 9);
   insn |= (((unsigned) (62) & 63) << 9);
   ls_operand[0] = OP_LIMM;
 }
      insn |= 63 << operand->shift;
      shimm_p = 1;
      shimm = value;
      ls_operand[1] = OP_SHIMM;
      ls_operand[2] = OP_SHIMM;
    }
  else if (arc_mach_a4)
    {
      if (limm_p && value != limm)
 {
   *errmsg = 
# 1489 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
            (
# 1489 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
            "too many long constants"
# 1489 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
            )
# 1489 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                        ;
   return insn;
 }
      limm_p = 1;
      limm = value;
      insn |= (((unsigned) (62) & 63) << 15);
      ls_operand[1] = OP_LIMM;
    }

  return insn;
}




static arc_insn
insert_offset (arc_insn insn,long *ex 
# 1505 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                     __attribute__ ((__unused__))
# 1505 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                     ,
        const struct arc_operand *operand,
        int mods,
        const struct arc_operand_value *reg,
        long value,
        const char **errmsg)
{
  long minval, maxval;

  if (reg != 
# 1514 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
            ((void *)0)
# 1514 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                )
    {
      if (arc_mach_a4)
        {
   arc_insn myinsn
     = (insert_reg (0, ex, operand, mods, reg, value, errmsg)
        >> operand->shift);


   if (operand->flags & 0x8000) {

    if ((insn & (((unsigned) (-1) & 31) << 27)) != (((unsigned) (1) & 31) << 27)) {
     insn |= (((unsigned) (myinsn) & 63) << 9);
    }
   }
      } else {
       insn |= insert_reg (0, ex, operand, mods, reg, value, errmsg);
      }
      ls_operand[2] = OP_REG;
    }
  else
    {
      int bits;

      if (operand->flags & 0x40000) {
       bits = operand->bits + 1;
      } else if (operand->flags & 0x80000) {
       bits = operand->bits + 2;
      } else {
       bits = operand->bits;
      }



      if (operand->flags & 0x20)
 {
   minval = -(1 << (bits - 1));
   maxval = (1 << (bits - 1)) - 1;
 }
      else
 {
   minval = 0;
   maxval = (1 << bits) - 1;
 }
      if (arc_mach_a4 && ((arc_cond_p && !limm_p) || value < minval || value > maxval))
 {
       if (limm_p && value != limm) {
        *errmsg = 
# 1561 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                 (
# 1561 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                 "too many long constants"
# 1561 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                 )
# 1561 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                              ;
       } else {
        limm_p = 1;
        limm = value;
        if (operand->flags & 0x10000) {
         insn |= (((unsigned) (62) & 63) << 15);
        }
        if (operand->flags & 0x8000) {
         insn |= (((unsigned) (62) & 63) << 9);
        }
        ls_operand[2] = OP_LIMM;
     }
 }
      else
 {
  if ((value < minval || value > maxval)) {
   *errmsg = 
# 1577 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
            (
# 1577 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
            "need too many limms"
# 1577 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
            )
# 1577 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                     ;
  } else if (arc_mach_a4 && shimm_p && value != shimm) {


   if ((insn & (((unsigned) (-1) & 31) << 27)) == (((unsigned) (1) & 31) << 27)) {
    *errmsg = 
# 1582 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
             (
# 1582 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
             "to many shimms in load"
# 1582 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
             )
# 1582 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                         ;
    goto out;
   }
   if (limm_p && operand->flags & 0x8000) {
    *errmsg = 
# 1586 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
             (
# 1586 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
             "too many long constants"
# 1586 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
             )
# 1586 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                          ;
    goto out;
   }

   limm_p = 1;
   limm = shimm;
   if (ls_operand[0] == OP_SHIMM && operand->flags & 0x10000) {
    insn &= ~(((unsigned) (-1) & 63) << 9);
    insn |= (((unsigned) (62) & 63) << 9);
    ls_operand[0] = OP_LIMM;
   }
   if (ls_operand[1] == OP_SHIMM && operand->flags & 0x10000) {
    insn &= ~(((unsigned) (-1) & 63) << 15);
    insn |= (((unsigned) (62) & 63) << 15);
    ls_operand[1] = OP_LIMM;
   }
     }
   if (!arc_mach_a4)
     {
       switch (operand->fmt)
  {
  case 'o':
    insn |= ((value & 0xff) << operand->shift);
    insn |= (((value & 0x100) >> 8) << 15);
    break;
  case 'k':
    insn |= ((value >> 1) & 0x1f) << operand->shift;
    break;
  case 'm':
    insn |= ((value >> 2) & 0xff) << operand->shift;
    break;
  case 'M':
    insn |= (value & 0x1ff) << operand->shift;
    break;
  case 'O':
    insn |= ((value >> 1) & 0x1ff) << operand->shift;
    break;
  case 'R':
    insn |= ((value >> 2) & 0x1ff) << operand->shift;
    break;
  }
     }
   shimm = value;
   shimm_p = 1;
   ls_operand[2] = OP_SHIMM;
 }
    }
 out:
  return insn;
}



static long
extract_st_syntax (arc_insn *insn,
     const struct arc_operand *operand 
# 1641 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                      __attribute__ ((__unused__))
# 1641 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                      ,
     int mods 
# 1642 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
             __attribute__ ((__unused__))
# 1642 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                             ,
     const struct arc_operand_value **opval 
# 1643 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                           __attribute__ ((__unused__))
# 1643 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                           ,
     int *invalid)
{





 if (!((((ls_operand[0] == (OP_REG) && ls_operand[1] == (OP_REG) && ls_operand[2] == (OP_NONE))) && (insn[0] & 511) == 0) || ((ls_operand[0] == (OP_REG) && ls_operand[1] == (OP_LIMM) && ls_operand[2] == (OP_NONE))) || (((ls_operand[0] == (OP_SHIMM) && ls_operand[1] == (OP_REG) && ls_operand[2] == (OP_NONE))) && (insn[0] & 511) == 0) || (((ls_operand[0] == (OP_SHIMM) && ls_operand[1] == (OP_SHIMM) && ls_operand[2] == (OP_NONE))) && (insn[0] & 511) == 0) || ((ls_operand[0] == (OP_SHIMM) && ls_operand[1] == (OP_LIMM) && ls_operand[2] == (OP_NONE))) || ((ls_operand[0] == (OP_SHIMM) && ls_operand[1] == (OP_LIMM) && ls_operand[2] == (OP_SHIMM))) || ((ls_operand[0] == (OP_SHIMM) && ls_operand[1] == (OP_SHIMM) && ls_operand[2] == (OP_SHIMM))) || (((ls_operand[0] == (OP_LIMM) && ls_operand[1] == (OP_REG) && ls_operand[2] == (OP_NONE))) && (insn[0] & 511) == 0) || ((ls_operand[0] == (OP_REG) && ls_operand[1] == (OP_REG) && ls_operand[2] == (OP_SHIMM))) || ((ls_operand[0] == (OP_REG) && ls_operand[1] == (OP_SHIMM) && ls_operand[2] == (OP_SHIMM))) || ((ls_operand[0] == (OP_SHIMM) && ls_operand[1] == (OP_REG) && ls_operand[2] == (OP_SHIMM))) || ((ls_operand[0] == (OP_LIMM) && ls_operand[1] == (OP_SHIMM) && ls_operand[2] == (OP_SHIMM))) || ((ls_operand[0] == (OP_LIMM) && ls_operand[1] == (OP_SHIMM) && ls_operand[2] == (OP_NONE))) || ((ls_operand[0] == (OP_LIMM) && ls_operand[1] == (OP_REG) && ls_operand[2] == (OP_SHIMM))))) {
  *invalid = 1;
 }
 return 0;
}

int
arc_limm_fixup_adjust (arc_insn insn)
{
  int retval = 0;



  if ((insn & ((((unsigned) (-1) & 31) << 27) | (((unsigned) (-1) & 63) << 9) | (((unsigned) (-1) & 63) << 15))) ==
      ((((unsigned) (2) & 31) << 27) | (((unsigned) (63) & 63) << 9) | (((unsigned) (62) & 63) << 15)))
    {
      retval = insn & 0x1ff;
      if (retval & 0x100) {
       retval |= ~0x1ff;
      }
    }
  return -retval;
}



static arc_insn
insert_st_syntax (arc_insn insn,long *ex 
# 1678 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                        __attribute__ ((__unused__))
# 1678 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                        ,
    const struct arc_operand *operand 
# 1679 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                     __attribute__ ((__unused__))
# 1679 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                     ,
    int mods 
# 1680 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
            __attribute__ ((__unused__))
# 1680 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                            ,
    const struct arc_operand_value *reg 
# 1681 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                       __attribute__ ((__unused__))
# 1681 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                       ,
    long value 
# 1682 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
              __attribute__ ((__unused__))
# 1682 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                              ,
    const char **errmsg)
{

  if (!arc_mach_a4)
    {


      if (addrwb_p)
        {
       if (ls_operand[1] != OP_REG) {
        *errmsg = 
# 1693 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                 (
# 1693 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                 "address writeback not allowed"
# 1693 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                 )
# 1693 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                    ;
       }
       insn |= addrwb_p;
        }
      return insn;
    }


  if (((ls_operand[0] == (OP_SHIMM) && ls_operand[1] == (OP_REG) && ls_operand[2] == (OP_NONE))) && shimm != 0)
    {


      limm_p = 1;
      limm = shimm;
      shimm_p = 0;
      shimm = 0;
      insn= insn & ~((((unsigned) (-1) & 63) << 9) | 511);
      insn |= 62 << 9;
      ls_operand[0] = OP_LIMM;
    }

  if (((ls_operand[0] == (OP_REG) && ls_operand[1] == (OP_SHIMM) && ls_operand[2] == (OP_NONE)))
      || ((ls_operand[0] == (OP_LIMM) && ls_operand[1] == (OP_SHIMM) && ls_operand[2] == (OP_NONE))))
    {

      if (shimm & 0x1)
 {
       if (limm_p) {
        *errmsg = 
# 1721 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                 (
# 1721 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                 "impossible store"
# 1721 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                 )
# 1721 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                       ;
       }
       limm_p = 1;
       limm = shimm;
       shimm = 0;
       shimm_p = 0;
       insn = insn & ~((((unsigned) (-1) & 63) << 15) | 511);
       insn |= (((unsigned) (62) & 63) << 15);
       ls_operand[1] = OP_LIMM;
 }
      else
 {
   shimm >>= 1;
   insn = insn & ~511;
   insn |= shimm;
   ls_operand[2] = OP_SHIMM;
 }
    }
    if (((ls_operand[0] == (OP_SHIMM) && ls_operand[1] == (OP_LIMM) && ls_operand[2] == (OP_NONE)))) {
     limm += arc_limm_fixup_adjust (insn);
    }
    if (((ls_operand[0] == (OP_LIMM) && ls_operand[1] == (OP_SHIMM) && ls_operand[2] == (OP_SHIMM))) && (shimm * 2 == limm)) {
     insn &= ~(((unsigned) (-1) & 63) << 9);
     limm_p = 0;
     limm = 0;
     insn |= (((unsigned) (63) & 63) << 9);
     ls_operand[0] = OP_SHIMM;
    }
    if (!(((ls_operand[0] == (OP_REG) && ls_operand[1] == (OP_REG) && ls_operand[2] == (OP_NONE))) || ((ls_operand[0] == (OP_REG) && ls_operand[1] == (OP_LIMM) && ls_operand[2] == (OP_NONE))) || ((ls_operand[0] == (OP_REG) && ls_operand[1] == (OP_REG) && ls_operand[2] == (OP_SHIMM))) || ((ls_operand[0] == (OP_REG) && ls_operand[1] == (OP_SHIMM) && ls_operand[2] == (OP_SHIMM))) || (((ls_operand[0] == (OP_SHIMM) && ls_operand[1] == (OP_SHIMM) && ls_operand[2] == (OP_NONE))) && (shimm == 0)) || ((ls_operand[0] == (OP_SHIMM) && ls_operand[1] == (OP_LIMM) && ls_operand[2] == (OP_NONE))) || ((ls_operand[0] == (OP_SHIMM) && ls_operand[1] == (OP_REG) && ls_operand[2] == (OP_NONE))) || ((ls_operand[0] == (OP_SHIMM) && ls_operand[1] == (OP_REG) && ls_operand[2] == (OP_SHIMM))) || ((ls_operand[0] == (OP_SHIMM) && ls_operand[1] == (OP_SHIMM) && ls_operand[2] == (OP_SHIMM))) || ((ls_operand[0] == (OP_LIMM) && ls_operand[1] == (OP_SHIMM) && ls_operand[2] == (OP_SHIMM))) || ((ls_operand[0] == (OP_LIMM) && ls_operand[1] == (OP_REG) && ls_operand[2] == (OP_NONE))) || ((ls_operand[0] == (OP_LIMM) && ls_operand[1] == (OP_REG) && ls_operand[2] == (OP_SHIMM))))) {
     *errmsg = 
# 1750 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
              (
# 1750 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
              "st operand error"
# 1750 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
              )
# 1750 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                    ;
    }
    if (addrwb_p) {
     if (ls_operand[1] != OP_REG) {
      *errmsg = 
# 1754 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
               (
# 1754 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
               "address writeback not allowed"
# 1754 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
               )
# 1754 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                  ;
     }
     insn |= addrwb_p;
    }
    if (((ls_operand[0] == (OP_SHIMM) && ls_operand[1] == (OP_REG) && ls_operand[2] == (OP_NONE))) && shimm) {
     *errmsg = 
# 1759 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
              (
# 1759 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
              "store value must be zero"
# 1759 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
              )
# 1759 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                            ;
    }
    return insn;
}



static arc_insn
insert_ld_syntax (arc_insn insn,long *ex 
# 1767 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                        __attribute__ ((__unused__))
# 1767 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                        ,
    const struct arc_operand *operand 
# 1768 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                     __attribute__ ((__unused__))
# 1768 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                     ,
    int mods 
# 1769 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
            __attribute__ ((__unused__))
# 1769 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                            ,
    const struct arc_operand_value *reg 
# 1770 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                       __attribute__ ((__unused__))
# 1770 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                       ,
    long value 
# 1771 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
              __attribute__ ((__unused__))
# 1771 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                              ,
    const char **errmsg)
{






  int test = insn & (((unsigned) (-1) & 31) << 27);


  if (!arc_mach_a4)
    {




      unsigned char ac_reg_num = ((unsigned)((insn)&(((1<<(6))-1)<<(0)))>>(0));

      if (addrwb_p)
 {
       if (ls_operand[1] != OP_REG

        && addrwb_p != 0xc00000) {
        *errmsg = 
# 1796 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                 (
# 1796 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                 "address writeback not allowed"
# 1796 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                 )
# 1796 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                    ;
       }
       insn |= addrwb_p;
 }




      if (0x20 <= ac_reg_num && ac_reg_num <= 0x3F)
 {
       if (!((arc_ld_ext_mask >> (ac_reg_num - 32)) & 1)) {
        *errmsg = 
# 1807 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                 (
# 1807 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                 "ld operand error: Instruction Error exception"
# 1807 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                 )
# 1807 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                                    ;
       }
 }


      if (cpu_type == 8 && arc_user_mode_only)

 {
   if (ac_reg_num == 29 || ac_reg_num == 30)
     {
       *errmsg = 
# 1817 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                (
# 1817 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                "ld operand error: Privilege Violation exception"
# 1817 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                )
# 1817 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                                    ;
     }
 }

      return insn;
    }


  if (!(test == (((unsigned) (1) & 31) << 27)))
    {
   if ((ls_operand[0] == OP_SHIMM || ls_operand[1] == OP_SHIMM || ls_operand[2] == OP_SHIMM)) {
    *errmsg = 
# 1828 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
             (
# 1828 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
             "invalid load/shimm insn"
# 1828 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
             )
# 1828 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                          ;
   }
    }
    if (!(( (ls_operand[0] == (OP_REG) && ls_operand[1] == (OP_REG) && ls_operand[2] == (OP_NONE))) || ( (ls_operand[0] == (OP_REG) && ls_operand[1] == (OP_REG) && ls_operand[2] == (OP_REG))) || ( (ls_operand[0] == (OP_REG) && ls_operand[1] == (OP_REG) && ls_operand[2] == (OP_SHIMM))) || (( (ls_operand[0] == (OP_REG) && ls_operand[1] == (OP_LIMM) && ls_operand[2] == (OP_REG))) && !(test == (((unsigned) (1) & 31) << 27))) || (( (ls_operand[0] == (OP_REG) && ls_operand[1] == (OP_REG) && ls_operand[2] == (OP_LIMM))) && !(test == (((unsigned) (1) & 31) << 27))) || ( (ls_operand[0] == (OP_REG) && ls_operand[1] == (OP_SHIMM) && ls_operand[2] == (OP_SHIMM))) || (( (ls_operand[0] == (OP_REG) && ls_operand[1] == (OP_LIMM) && ls_operand[2] == (OP_NONE))) && (test == (((unsigned) (1) & 31) << 27))))) {
     *errmsg = 
# 1832 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
              (
# 1832 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
              "ld operand error"
# 1832 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
              )
# 1832 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                    ;
    }
    if (addrwb_p) {
     if (ls_operand[1] != OP_REG) {
      *errmsg = 
# 1836 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
               (
# 1836 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
               "address writeback not allowed"
# 1836 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
               )
# 1836 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                  ;
     }
     insn |= addrwb_p;
    }
  return insn;
}



static long
extract_ld_syntax (arc_insn *insn,
     const struct arc_operand *operand 
# 1847 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                      __attribute__ ((__unused__))
# 1847 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                      ,
     int mods 
# 1848 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
             __attribute__ ((__unused__))
# 1848 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                             ,
     const struct arc_operand_value **opval 
# 1849 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                           __attribute__ ((__unused__))
# 1849 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                           ,
     int *invalid)
{
  int test = insn[0] & (((unsigned) (-1) & 31) << 27);

  if (!(test == (((unsigned) (1) & 31) << 27)))
    {
   if ((ls_operand[0] == OP_SHIMM || ls_operand[1] == OP_SHIMM || ls_operand[2] == OP_SHIMM)) {
    *invalid = 1;
   }
    }
    if (!((( (ls_operand[0] == (OP_REG) && ls_operand[1] == (OP_REG) && ls_operand[2] == (OP_NONE))) && test == (((unsigned) (1) & 31) << 27)) || ( (ls_operand[0] == (OP_REG) && ls_operand[1] == (OP_REG) && ls_operand[2] == (OP_REG))) || ( (ls_operand[0] == (OP_REG) && ls_operand[1] == (OP_REG) && ls_operand[2] == (OP_SHIMM))) || (( (ls_operand[0] == (OP_REG) && ls_operand[1] == (OP_REG) && ls_operand[2] == (OP_LIMM))) && test != (((unsigned) (1) & 31) << 27)) || (( (ls_operand[0] == (OP_REG) && ls_operand[1] == (OP_LIMM) && ls_operand[2] == (OP_REG))) && test != (((unsigned) (1) & 31) << 27)) || (( (ls_operand[0] == (OP_REG) && ls_operand[1] == (OP_SHIMM) && ls_operand[2] == (OP_NONE))) && shimm == 0) || ( (ls_operand[0] == (OP_REG) && ls_operand[1] == (OP_SHIMM) && ls_operand[2] == (OP_SHIMM))) || (( (ls_operand[0] == (OP_REG) && ls_operand[1] == (OP_LIMM) && ls_operand[2] == (OP_NONE))) && test == (((unsigned) (1) & 31) << 27)))) {
     *invalid = 1;
    }
    return 0;
}

static arc_insn
insert_ex_syntax (arc_insn insn,long *ex 
# 1867 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                        __attribute__ ((__unused__))
# 1867 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                        ,
    const struct arc_operand *operand 
# 1868 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                     __attribute__ ((__unused__))
# 1868 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                     ,
    int mods 
# 1869 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
            __attribute__ ((__unused__))
# 1869 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                            ,
    const struct arc_operand_value *reg 
# 1870 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                       __attribute__ ((__unused__))
# 1870 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                       ,
    long value 
# 1871 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
              __attribute__ ((__unused__))
# 1871 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                              ,
    const char **errmsg)
{

  if (cpu_type == 8)

    {
      unsigned ac_reg_hi = ((unsigned)((insn)&(((1<<(3))-1)<<(12)))>>(12));
      unsigned ac_reg_lo = ((unsigned)((insn)&(((1<<(3))-1)<<(24)))>>(24));
      unsigned ac_reg_num = (ac_reg_hi << 3) | ac_reg_lo;

      if (arc_user_mode_only && (ac_reg_num == 29 || ac_reg_num == 30)) {
       *errmsg = 
# 1883 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                (
# 1883 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                "ex operand error: Privilege Violation exception"
# 1883 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                )
# 1883 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                                     ;
      }
      if (0x20 <= ac_reg_num && ac_reg_num <= 0x3F && !((arc_ld_ext_mask >> (ac_reg_num - 32)) & 1)) {
       *errmsg = 
# 1886 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                (
# 1886 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                "ld operand error: Instruction Error exception"
# 1886 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                )
# 1886 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                                   ;
      }
    }
  return insn;
}





static arc_insn
insert_shimmfinish (arc_insn insn,long *ex 
# 1897 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                          __attribute__ ((__unused__))
# 1897 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                          ,
      const struct arc_operand *operand,
      int mods 
# 1899 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
              __attribute__ ((__unused__))
# 1899 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                              ,
      const struct arc_operand_value *reg 
# 1900 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                         __attribute__ ((__unused__))
# 1900 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                         ,
      long value 
# 1901 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                __attribute__ ((__unused__))
# 1901 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                ,
      const char **errmsg 
# 1902 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                         __attribute__ ((__unused__))
# 1902 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                         )
{
 if (shimm_p) {
  insn |= (shimm & ((1 << operand->bits) - 1)) << operand->shift;
 }
 return insn;
}
# 1922 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
static arc_insn
insert_limmfinish (arc_insn insn,long *ex 
# 1923 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                         __attribute__ ((__unused__))
# 1923 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                         ,
     const struct arc_operand *operand 
# 1924 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                      __attribute__ ((__unused__))
# 1924 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                      ,
     int mods 
# 1925 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
             __attribute__ ((__unused__))
# 1925 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                             ,
     const struct arc_operand_value *reg 
# 1926 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                        __attribute__ ((__unused__))
# 1926 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                        ,
     long value 
# 1927 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
               __attribute__ ((__unused__))
# 1927 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                               ,
     const char **errmsg 
# 1928 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                        __attribute__ ((__unused__))
# 1928 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                        )
{
  return insn;
}

static arc_insn
insert_jumpflags (arc_insn insn,long *ex 
# 1934 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                        __attribute__ ((__unused__))
# 1934 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                        ,
    const struct arc_operand *operand,
    int mods 
# 1936 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
            __attribute__ ((__unused__))
# 1936 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                            ,
    const struct arc_operand_value *reg 
# 1937 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                       __attribute__ ((__unused__))
# 1937 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                       ,
    long value,
    const char **errmsg)
{
 if (!flag_p) {
  *errmsg = 
# 1942 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
           (
# 1942 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
           "jump flags, but no .f seen"
# 1942 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
           )
# 1942 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                           ;

 } else if (!limm_p) {
  *errmsg = 
# 1945 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
           (
# 1945 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
           "jump flags, but no limm addr"
# 1945 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
           )
# 1945 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                             ;

 } else if (limm & 0xfc000000) {
  *errmsg = 
# 1948 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
           (
# 1948 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
           "flag bits of jump address limm lost"
# 1948 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
           )
# 1948 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                    ;

 } else if (limm & 0x03000000) {
  *errmsg = 
# 1951 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
           (
# 1951 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
           "attempt to set HR bits"
# 1951 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
           )
# 1951 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                       ;

 } else if ((value & ((1 << operand->bits) - 1)) != value) {
  *errmsg = 
# 1954 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
           (
# 1954 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
           "bad jump flags value"
# 1954 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
           )
# 1954 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                     ;
 }

 jumpflags_p = 1;
 limm = ((limm & ((1 << operand->shift) - 1)) | ((value & ((1 << operand->bits) - 1)) << operand->shift));
 return insn;
}



static arc_insn
insert_unopmacro (arc_insn insn,long *ex 
# 1965 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                        __attribute__ ((__unused__))
# 1965 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                        ,
    const struct arc_operand *operand,
    int mods 
# 1967 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
            __attribute__ ((__unused__))
# 1967 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                            ,
    const struct arc_operand_value *reg 
# 1968 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                       __attribute__ ((__unused__))
# 1968 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                       ,
    long value 
# 1969 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
              __attribute__ ((__unused__))
# 1969 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                              ,
    const char **errmsg 
# 1970 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                       __attribute__ ((__unused__))
# 1970 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                       )
{
  insn |= ((insn >> 15) & 63) << operand->shift;
  return insn;
}



static arc_insn
insert_reladdr (arc_insn insn,long *ex 
# 1979 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                      __attribute__ ((__unused__))
# 1979 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                      ,
  const struct arc_operand *operand,
  int mods 
# 1981 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
          __attribute__ ((__unused__))
# 1981 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                          ,
  const struct arc_operand_value *reg 
# 1982 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                     __attribute__ ((__unused__))
# 1982 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                     ,
  long value,
  const char **errmsg)
{
  if (!arc_mach_a4 && ('h' == operand->fmt))
    {
   if (value & 3) {
    *errmsg = 
# 1989 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
             (
# 1989 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
             "branch address not on 4 byte boundary"
# 1989 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
             )
# 1989 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                        ;
   }

   value = value >> 2;

   insn |= (value & 0x1ff) << operand->shift;

   insn |= ((value >> 9) & 0x3ff) << 6;
    }
  else if (!arc_mach_a4 && ('H' == operand->fmt))
    {
     if (value & 3) {
      *errmsg = 
# 2001 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
               (
# 2001 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
               "branch address not on 4 byte boundary"
# 2001 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
               )
# 2001 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                          ;
     }

     value = value >> 2;

     insn |= (value & 0x1ff) << operand->shift;

     insn |= ((value >> 9) & 0x3ff) << 6;

     insn |= (value >> 19) & 0xf;
    }
  else if (!arc_mach_a4 && ('i' == operand->fmt))
    {
     if (value & 1) {
      *errmsg = 
# 2015 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
               (
# 2015 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
               "branch address not on 2 byte boundary"
# 2015 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
               )
# 2015 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                          ;
     }

     value = value >> 1;

     insn |= (value & 0x3ff) << operand->shift;

     insn |= ((value >> 10) & 0x3ff) << 6;
    }
  else if (!arc_mach_a4 && ('I' == operand->fmt))
    {
     if (value & 1) {
      *errmsg = 
# 2027 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
               (
# 2027 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
               "branch address not on 2 byte boundary"
# 2027 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
               )
# 2027 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                          ;
     }

     value = value >> 1;

     insn |= (value & 0x3ff) << operand->shift;

     insn |= ((value >> 10) & 0x3ff) << 6;

     insn |= (value >> 20) & 0xf;
    }
  else if (!arc_mach_a4 && ('d' == operand->fmt))
    {

      insn |= ((value >> 1) & 0x7f) << operand->shift;

      insn |= (((value >> 1) & 0x80) >> 7) << 15;
    }
  else if (!arc_mach_a4 && ('y' == operand->fmt))
    {

      insn |= ((value >> 1) & 0x3f) << operand->shift;
    }
  else if (!arc_mach_a4 && ('Y' == operand->fmt))
    {

      insn |= ((value >> 1) & 0x3f) << operand->shift;

      insn |= ((value >> 1) & 0xfc0) >> 6;
    }
  else if (!arc_mach_a4 && (('s' == operand->fmt) || ('S' == operand->fmt)
   || ('Z' == operand->fmt)))
    {
     if (value & 1) {
      *errmsg = 
# 2061 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
               (
# 2061 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
               "branch address not on 2 byte boundary"
# 2061 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
               )
# 2061 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                          ;
     }
     insn |= ((value >> 1) & ((1 << operand->bits) - 1)) << operand->shift;
    }
  else if (!arc_mach_a4 && ('W' == operand->fmt))
    {
     if (value & 3) {
      *errmsg = 
# 2068 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
               (
# 2068 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
               "branch address not on 4 byte boundary"
# 2068 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
               )
# 2068 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                          ;
     }
     insn |= ((value >> 2) & ((1 << operand->bits) - 1)) << operand->shift;
    }
  else
    {


      if (value & 3) {
       *errmsg = 
# 2077 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                (
# 2077 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                "branch address not on 4 byte boundary"
# 2077 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                )
# 2077 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                           ;
      }
      insn |= ((value >> 2) & ((1 << operand->bits) - 1)) << operand->shift;
    }
  return insn;
}
# 2098 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
static arc_insn
insert_absaddr (arc_insn insn,long *ex 
# 2099 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                      __attribute__ ((__unused__))
# 2099 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                      ,
  const struct arc_operand *operand 
# 2100 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                   __attribute__ ((__unused__))
# 2100 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                   ,
  int mods 
# 2101 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
          __attribute__ ((__unused__))
# 2101 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                          ,
  const struct arc_operand_value *reg 
# 2102 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                     __attribute__ ((__unused__))
# 2102 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                     ,
  long value 
# 2103 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
            __attribute__ ((__unused__))
# 2103 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                            ,
  const char **errmsg)
{
  if (limm_p)
    {

      if (insn & (((unsigned) (-1) & (1)) << (9)))
 {
       if (!nullify_p) {
        insn |= 0x02 << 5;
       } else if (nullify != 0x02) {
        *errmsg = 
# 2114 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                 (
# 2114 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                 "must specify .jd or no nullify suffix"
# 2114 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                 )
# 2114 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                            ;
       }
 }
    }
  return insn;
}
# 2130 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
void
arc_opcode_init_extract (void)
{
  arc_opcode_init_insert ();
}

static const struct arc_operand_value *
lookup_register (int type, long regno)
{
  const struct arc_operand_value *r,*end;
  struct arc_ext_operand_value *ext_oper = arc_ext_operands;

  while (ext_oper)
    {
   if (ext_oper->operand.type == type && ext_oper->operand.value == regno) {
    return (&ext_oper->operand);
   }
   ext_oper = ext_oper->next;
    }

    if (type == (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) || type == (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)) {
     return &arc_reg_names[regno];
    }


    for (r = arc_reg_names, end = arc_reg_names + arc_reg_names_count;
     r < end; ++r) {
     if (type == r->type && regno == r->value) {
      return r;
     }
    }
    return 0;
}
# 2171 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
static long
extract_reg (arc_insn *insn,
      const struct arc_operand *operand,
      int mods,
      const struct arc_operand_value **opval,
      int *invalid 
# 2176 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                  __attribute__ ((__unused__))
# 2176 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                  )
{
  int regno;
  long value;
  enum operand op_type;


  regno = (*insn >> operand->shift) & ((1 << operand->bits) - 1);


  if (regno == 63)
    {
      op_type = OP_SHIMM;


      if ('a' != operand->fmt)
 {
   value = *insn & 511;
   if ((operand->flags & 0x20) && (value & 256)) {
    value -= 512;
   }
   if (!flagshimm_handled_p) {
    flag_p = 0;
   }
   flagshimm_handled_p = 1;
      } else {
       value = 0;
      }
    }
  else if (regno == 61)
    {
      op_type = OP_SHIMM;


      if ('a' != operand->fmt)
 {
   value = *insn & 511;
   if ((operand->flags & 0x20) && (value & 256)) {
    value -= 512;
   }
      } else {
       value = 0;
      }

      flag_p = 1;
      flagshimm_handled_p = 1;
    }
  else if (regno == 62)
    {
      op_type = OP_LIMM;
      value = insn[1];
      limm_p = 1;


      if (0x07 == ((*insn & (((unsigned) (-1) & 31) << 27)) >> 27)) {
       value = (value & 0xffffff);
      }
    }



  else
    {
      const struct arc_operand_value *reg = lookup_register ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), regno);

      op_type = OP_REG;

      if (!reg) {
       return 0;
      }
      if (opval != 
# 2246 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                  ((void *)0)
# 2246 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                      ) {
       *opval = reg;
      }
      value = regno;
    }


  if ((mods & 0x4000)
      && ((regno) >= 61))
    {
      const struct arc_operand_value *reg = lookup_register (((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), value);



      if (reg != 
# 2260 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                ((void *)0) 
# 2260 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                     && opval != 
# 2260 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                 ((void *)0)
# 2260 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                     ) {
       *opval = reg;
      }
    }

  switch (operand->fmt)
    {
    case 'a':
      ls_operand[0] = op_type;
      break;
    case 's':
      ls_operand[1] = op_type;
      break;
    case 'c':
     if ((insn[0] & (((unsigned) (-1) & 31) << 27)) == (((unsigned) (2) & 31) << 27)) {
      ls_operand[0] = op_type;
     } else {
      ls_operand[2] = op_type;
     }
     break;
    case 'o': case 'O':
      ls_operand[2] = op_type;
      break;
    }

  return value;
}




static long
extract_flag (arc_insn *insn,
       const struct arc_operand *operand,
       int mods 
# 2294 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
               __attribute__ ((__unused__))
# 2294 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                               ,
       const struct arc_operand_value **opval,
       int *invalid 
# 2296 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                   __attribute__ ((__unused__))
# 2296 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                   )
{
  int f;
  const struct arc_operand_value *val;

  if (flagshimm_handled_p) {
   f = flag_p != 0;
  } else {
   f = (*insn & (1 << operand->shift)) != 0;
  }


  if (f == 0) {
   return 0;
  }
  flag_p = 1;
  val = arc_opcode_lookup_suffix (operand, 1);
  if (opval != 
# 2313 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
              ((void *)0) 
# 2313 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                   && val != 
# 2313 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                             ((void *)0)
# 2313 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                 ) {
   *opval = val;
  }
  return val?val->value:0;
}






static long
extract_cond (arc_insn *insn,
       const struct arc_operand *operand,
       int mods 
# 2327 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
               __attribute__ ((__unused__))
# 2327 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                               ,
       const struct arc_operand_value **opval,
       int *invalid 
# 2329 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                   __attribute__ ((__unused__))
# 2329 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                   )
{
  long cond;
  const struct arc_operand_value *val;

  if (flagshimm_handled_p) {
   return 0;
  }

  cond = (*insn >> operand->shift) & ((1 << operand->bits) - 1);
  val = arc_opcode_lookup_suffix (operand, cond);



  if (opval != 
# 2343 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
              ((void *)0) 
# 2343 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                   && val != 
# 2343 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                             ((void *)0)
# 2343 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                 ) {
   *opval = val;
  }
  return cond;
}




static long
extract_reladdr (arc_insn *insn,
   const struct arc_operand *operand,
   int mods 
# 2355 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
           __attribute__ ((__unused__))
# 2355 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                           ,
   const struct arc_operand_value **opval 
# 2356 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                         __attribute__ ((__unused__))
# 2356 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                         ,
   int *invalid 
# 2357 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
               __attribute__ ((__unused__))
# 2357 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                               )
{
  long addr;

  addr = (*insn >> operand->shift) & ((1 << operand->bits) - 1);
  if ((operand->flags & 0x20) && (addr & (1 << (operand->bits - 1)))) {
   addr -= 1 << operand->bits;
  }

  return addr << 2;
}



static long
extract_jumpflags (arc_insn *insn,
     const struct arc_operand *operand,
     int mods 
# 2374 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
             __attribute__ ((__unused__))
# 2374 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                             ,
     const struct arc_operand_value **opval 
# 2375 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                           __attribute__ ((__unused__))
# 2375 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                           ,
     int *invalid)
{
 if (!flag_p || !limm_p) {
  *invalid = 1;
 }
 return ((flag_p && limm_p)
   ? (insn[1] >> operand->shift) & ((1 << operand->bits) - 1)
   : 0);
}



static long
extract_st_offset (arc_insn *insn,
     const struct arc_operand *operand,
     int mods 
# 2391 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
             __attribute__ ((__unused__))
# 2391 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                             ,
     const struct arc_operand_value **opval 
# 2392 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                           __attribute__ ((__unused__))
# 2392 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                           ,
     int *invalid)
{
  int value = 0;

  if (ls_operand[0] != OP_SHIMM || ls_operand[1] != OP_LIMM)
    {
      value = insn[0] & 511;
      if ((operand->flags & 0x20) && (value & 256)) {
       value -= 512;
      }
      if (value) {
       ls_operand[2] = OP_SHIMM;
      }
  } else {
   *invalid = 1;
  }

  return value;
}



static long
extract_ld_offset (arc_insn *insn,
     const struct arc_operand *operand,
     int mods,
     const struct arc_operand_value **opval,
     int *invalid)
{
  int test = insn[0] & (((unsigned) (-1) & 31) << 27);
  int value = 0;

  if (test)
    {
      value = insn[0] & 511;
      if ((operand->flags & 0x20) && (value & 256)) {
       value -= 512;
      }
      if (value) {
       ls_operand[2] = OP_SHIMM;
      }

      return value;
    }

  return extract_reg (insn, &arc_operands[arc_operand_map['c']],
        mods, opval, invalid);
}





static long
extract_unopmacro (arc_insn *insn,
     const struct arc_operand *operand 
# 2448 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                      __attribute__ ((__unused__))
# 2448 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                      ,
     int mods 
# 2449 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
             __attribute__ ((__unused__))
# 2449 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                             ,
     const struct arc_operand_value **opval 
# 2450 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                           __attribute__ ((__unused__))
# 2450 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                           ,
     int *invalid)
{



  if (((*insn >> 15) & 63) != ((*insn >> 9) & 63)) {
   if (invalid != 
# 2457 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                 ((void *)0)
# 2457 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                     ) {
    *invalid = 1;
   }
  }

  return 0;
}
# 2487 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
static struct arc_opcode arc_opcodes[] = {





  { "mov%.q%.f %a,%b%F%S%L%U", (((unsigned) (-1) & 31) << 27), (((unsigned) (12) & 31) << 27), 1, 0, 0 ,0,0},

  { "asl%.q%.f %a,%b%F%S%L%U", (((unsigned) (-1) & 31) << 27), (((unsigned) (8) & 31) << 27), 1, 0, 0 ,0,0},

  { "lsl%.q%.f %a,%b%F%S%L%U", (((unsigned) (-1) & 31) << 27), (((unsigned) (8) & 31) << 27), 1, 0, 0 ,0,0},

  { "nop", 0xffffffff, 0x7fffffff, 1, 0, 0 ,0,0},

  { "rlc%.q%.f %a,%b%F%S%L%U", (((unsigned) (-1) & 31) << 27), (((unsigned) (9) & 31) << 27), 1, 0, 0 ,0,0},


  { "adc%.q%.f %a,%b,%c%F%S%L", (((unsigned) (-1) & 31) << 27), (((unsigned) (9) & 31) << 27), 1, 0, 0 ,0,0},
  { "add%.q%.f %a,%b,%c%F%S%L", (((unsigned) (-1) & 31) << 27), (((unsigned) (8) & 31) << 27), 1, 0, 0 ,0,0},
  { "and%.q%.f %a,%b,%c%F%S%L", (((unsigned) (-1) & 31) << 27), (((unsigned) (12) & 31) << 27), 1, 0, 0 ,0,0},
  { "asr%.q%.f %a,%b%F%S%L", (((unsigned) (-1) & 31) << 27)|(((unsigned) (-1) & 63) << 9), (((unsigned) (3) & 31) << 27)|(((unsigned) (1) & 63) << 9), 1, 0, 0 ,0,0},
  { "bic%.q%.f %a,%b,%c%F%S%L", (((unsigned) (-1) & 31) << 27), (((unsigned) (14) & 31) << 27), 1, 0, 0 ,0,0},
  { "b%q%.n %B", (((unsigned) (-1) & 31) << 27), (((unsigned) (4) & 31) << 27), 1 | ((((32 << 1) - 1) + 1)), 0, 0 ,0,0},
  { "bl%q%.n %B", (((unsigned) (-1) & 31) << 27), (((unsigned) (5) & 31) << 27), 1 | ((((32 << 1) - 1) + 1)), 0, 0 ,0,0},
  { "b%.q%.n %B", (((unsigned) (-1) & 31) << 27), (((unsigned) (4) & 31) << 27), 1 | ((((32 << 1) - 1) + 1)), 0, 0 ,0,0},
  { "bl.%q%.n %B", (((unsigned) (-1) & 31) << 27), (((unsigned) (5) & 31) << 27), 1 | ((((32 << 1) - 1) + 1)), 0, 0 ,0,0},
  { "brk", 0x1ffffe00, 0x1ffffe00, 1, 0, 0 ,0,0},
  { "extb%.q%.f %a,%b%F%S%L", (((unsigned) (-1) & 31) << 27)|(((unsigned) (-1) & 63) << 9), (((unsigned) (3) & 31) << 27)|(((unsigned) (7) & 63) << 9), 1, 0, 0 ,0,0},
  { "extw%.q%.f %a,%b%F%S%L", (((unsigned) (-1) & 31) << 27)|(((unsigned) (-1) & 63) << 9), (((unsigned) (3) & 31) << 27)|(((unsigned) (8) & 63) << 9), 1, 0, 0 ,0,0},
  { "flag%.q %b%G%S%L", (((unsigned) (-1) & 31) << 27)|(((unsigned) (-1) & 63) << 21)|(((unsigned) (-1) & 63) << 9), (((unsigned) (3) & 31) << 27)|(((unsigned) (61) & 63) << 21)|(((unsigned) (0) & 63) << 9), 1, 0, 0 ,0,0},



  { "j%q%Q%.n%.f %b%F%J,%j", (((unsigned) (-1) & 31) << 27)|(((unsigned) (-1) & 63) << 21)|(((unsigned) (-1) & 63) << 9)|(((unsigned) (-1) & (1)) << (7)), (((unsigned) (7) & 31) << 27)|(((unsigned) (0) & 63) << 21)|(((unsigned) (0) & 63) << 9)|(((unsigned) (0) & (1)) << (7)), 1 | ((((32 << 1) - 1) + 1)), 0, 0 ,0,0},
  { "j%q%Q%.n%.f %b%F%J,%j", (((unsigned) (-1) & 31) << 27)|(((unsigned) (-1) & 63) << 21)|(((unsigned) (-1) & 63) << 9)|(((unsigned) (-1) & (1)) << (7)), (((unsigned) (7) & 31) << 27)|(((unsigned) (0) & 63) << 21)|(((unsigned) (0) & 63) << 9)|(((unsigned) (0) & (1)) << (7)), 1 | ((((32 << 1) - 1) + 1)), 0, 0 ,0,0},
  { "j%.q%Q%.n%.f %b%F%J", (((unsigned) (-1) & 31) << 27)|(((unsigned) (-1) & 63) << 21)|(((unsigned) (-1) & 63) << 9)|(((unsigned) (-1) & (1)) << (7)), (((unsigned) (7) & 31) << 27)|(((unsigned) (0) & 63) << 21)|(((unsigned) (0) & 63) << 9)|(((unsigned) (0) & (1)) << (7)), 1 | ((((32 << 1) - 1) + 1)), 0, 0 ,0,0},

  { "jl%q%Q%.n%.f %b%F%J,%j", (((unsigned) (-1) & 31) << 27)|(((unsigned) (-1) & 63) << 21)|(((unsigned) (-1) & 63) << 9)|(((unsigned) (-1) & (1)) << (7))|(((unsigned) (-1) & (1)) << (9)), (((unsigned) (7) & 31) << 27)|(((unsigned) (0) & 63) << 21)|(((unsigned) (0) & 63) << 9)|(((unsigned) (0) & (1)) << (7))|(((unsigned) (1) & (1)) << (9)), 1 | ((((32 << 1) - 1) + 1)), 0, 0 ,0,0},
  { "jl%.q%Q%.n%.f %b%F%J,%j", (((unsigned) (-1) & 31) << 27)|(((unsigned) (-1) & 63) << 21)|(((unsigned) (-1) & 63) << 9)|(((unsigned) (-1) & (1)) << (7))|(((unsigned) (-1) & (1)) << (9)), (((unsigned) (7) & 31) << 27)|(((unsigned) (0) & 63) << 21)|(((unsigned) (0) & 63) << 9)|(((unsigned) (0) & (1)) << (7))|(((unsigned) (1) & (1)) << (9)), 1 | ((((32 << 1) - 1) + 1)), 0, 0 ,0,0},
  { "jl%q%Q%.n%.f %b%F%J", (((unsigned) (-1) & 31) << 27)|(((unsigned) (-1) & 63) << 21)|(((unsigned) (-1) & 63) << 9)|(((unsigned) (-1) & (1)) << (7))|(((unsigned) (-1) & (1)) << (9)), (((unsigned) (7) & 31) << 27)|(((unsigned) (0) & 63) << 21)|(((unsigned) (0) & 63) << 9)|(((unsigned) (0) & (1)) << (7))|(((unsigned) (1) & (1)) << (9)), 1 | ((((32 << 1) - 1) + 1)), 0, 0 ,0,0},
  { "jl%.q%Q%.n%.f %b%F%J", (((unsigned) (-1) & 31) << 27)|(((unsigned) (-1) & 63) << 21)|(((unsigned) (-1) & 63) << 9)|(((unsigned) (-1) & (1)) << (7))|(((unsigned) (-1) & (1)) << (9)), (((unsigned) (7) & 31) << 27)|(((unsigned) (0) & 63) << 21)|(((unsigned) (0) & 63) << 9)|(((unsigned) (0) & (1)) << (7))|(((unsigned) (1) & (1)) << (9)), 1 | ((((32 << 1) - 1) + 1)), 0, 0 ,0,0},


  { "ld%Z%.X%.W%.E %a,[%s]%S%L%1", (((unsigned) (-1) & 31) << 27)|(((unsigned) (-1) & (1)) << (13))|(((unsigned) (-1) & (511)) << (0)), (((unsigned) (1) & 31) << 27)|(((unsigned) (0) & (1)) << (13))|(((unsigned) (0) & (511)) << (0)), 1, 0, 0 ,0,0},
  { "ld%z%.x%.w%.e %a,[%s]%S%L%1", (((unsigned) (-1) & 31) << 27)|(((unsigned) (-1) & (1)) << (4))|(((unsigned) (-1) & (7)) << (6)), (((unsigned) (0) & 31) << 27)|(((unsigned) (0) & (1)) << (4))|(((unsigned) (0) & (7)) << (6)), 1, 0, 0 ,0,0},
  { "ld%z%.x%.w%.e %a,[%s,%O]%S%L%1", (((unsigned) (-1) & 31) << 27)|(((unsigned) (-1) & (1)) << (4))|(((unsigned) (-1) & (7)) << (6)), (((unsigned) (0) & 31) << 27)|(((unsigned) (0) & (1)) << (4))|(((unsigned) (0) & (7)) << (6)), 1, 0, 0 ,0,0},
  { "ld%Z%.X%.W%.E %a,[%s,%O]%S%L%3", (((unsigned) (-1) & 31) << 27)|(((unsigned) (-1) & (1)) << (13)), (((unsigned) (1) & 31) << 27)|(((unsigned) (0) & (1)) << (13)), 1, 0, 0 ,0,0},
  { "lp%q%.n %B", (((unsigned) (-1) & 31) << 27), (((unsigned) (6) & 31) << 27), 1, 0, 0 ,0,0},
  { "lp%.q%.n %B", (((unsigned) (-1) & 31) << 27), (((unsigned) (6) & 31) << 27), 1, 0, 0 ,0,0},
  { "lr %a,[%Ab]%S%L", (((unsigned) (-1) & 31) << 27)|(((unsigned) (-1) & 63) << 9), (((unsigned) (1) & 31) << 27)|(((unsigned) (0x10) & 63) << 9), 1, 0, 0 ,0,0},
  { "lsr%.q%.f %a,%b%F%S%L", (((unsigned) (-1) & 31) << 27)|(((unsigned) (-1) & 63) << 9), (((unsigned) (3) & 31) << 27)|(((unsigned) (2) & 63) << 9), 1, 0, 0 ,0,0},
  { "or%.q%.f %a,%b,%c%F%S%L", (((unsigned) (-1) & 31) << 27), (((unsigned) (13) & 31) << 27), 1, 0, 0 ,0,0},
  { "ror%.q%.f %a,%b%F%S%L", (((unsigned) (-1) & 31) << 27)|(((unsigned) (-1) & 63) << 9), (((unsigned) (3) & 31) << 27)|(((unsigned) (3) & 63) << 9), 1, 0, 0 ,0,0},
  { "rrc%.q%.f %a,%b%F%S%L", (((unsigned) (-1) & 31) << 27)|(((unsigned) (-1) & 63) << 9), (((unsigned) (3) & 31) << 27)|(((unsigned) (4) & 63) << 9), 1, 0, 0 ,0,0},
  { "sbc%.q%.f %a,%b,%c%F%S%L", (((unsigned) (-1) & 31) << 27), (((unsigned) (11) & 31) << 27), 1, 0, 0 ,0,0},
  { "sexb%.q%.f %a,%b%F%S%L", (((unsigned) (-1) & 31) << 27)|(((unsigned) (-1) & 63) << 9), (((unsigned) (3) & 31) << 27)|(((unsigned) (5) & 63) << 9), 1, 0, 0 ,0,0},
  { "sexw%.q%.f %a,%b%F%S%L", (((unsigned) (-1) & 31) << 27)|(((unsigned) (-1) & 63) << 9), (((unsigned) (3) & 31) << 27)|(((unsigned) (6) & 63) << 9), 1, 0, 0 ,0,0},
  { "sleep", 0x1ffffe01, 0x1ffffe01, 1, 0, 0 ,0,0},
  { "sr %c,[%Ab]%S%L", (((unsigned) (-1) & 31) << 27)|(((unsigned) (-1) & 63) << 21), (((unsigned) (2) & 31) << 27)|(((unsigned) (0x10) & 63) << 21), 1, 0, 0 ,0,0},

  { "st%y%.v%.D %c,[%s]%L%S%0", (((unsigned) (-1) & 31) << 27)|(((unsigned) (-1) & (1)) << (25))|(((unsigned) (-1) & (1)) << (21)), (((unsigned) (2) & 31) << 27)|(((unsigned) (0) & (1)) << (25))|(((unsigned) (0) & (1)) << (21)), 1, 0, 0 ,0,0},
  { "st%y%.v%.D %c,[%s,%o]%S%L%2", (((unsigned) (-1) & 31) << 27)|(((unsigned) (-1) & (1)) << (25))|(((unsigned) (-1) & (1)) << (21)), (((unsigned) (2) & 31) << 27)|(((unsigned) (0) & (1)) << (25))|(((unsigned) (0) & (1)) << (21)), 1, 0, 0 ,0,0},
  { "sub%.q%.f %a,%b,%c%F%S%L", (((unsigned) (-1) & 31) << 27), (((unsigned) (10) & 31) << 27), 1, 0, 0 ,0,0},
  { "swi", 0x1ffffe02, 0x1ffffe02, 1, 0, 0 ,0,0},
  { "xor%.q%.f %a,%b,%c%F%S%L", (((unsigned) (-1) & 31) << 27), (((unsigned) (15) & 31) << 27), 1, 0, 0 ,0,0},



  { "abs%.f %#,%C%F", 0xf8ff003f, 0x202f0009, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "abs%.f %#,%u%F", 0xf8ff003f, 0x206f0009, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "abs%.f%Q %#,%L%F", 0xf8ff0fff, 0x202f0f89, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "abs%.f 0,%C%F", 0xffff703f, 0x262f7009, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "abs%.f 0,%u%F", 0xf8ff003f, 0x266f7009, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "abs%.f%Q 0,%L%F", 0xffff7fff, 0x262f7f89, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "adc%.f %A,%B,%C%F", 0xf8ff0000, 0x20010000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "adc%.f %A,%B,%u%F", 0xf8ff0000, 0x20410000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "adc%.f %#,%B,%K%F", 0xf8ff0000, 0x20810000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "adc%.f %#,%K,%B%F", 0xf8ff0000, 0x20810000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "adc%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x20010f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "adc%.f%Q %A,%L,%C%F", 0xffff7000, 0x26017000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "adc%.f%Q %A,%L,%u%F", 0xffff7000, 0x26417000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "adc%.f%Q %A,%L,%L%F", 0xffff7fc0, 0x26017f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "adc%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x20c10000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "adc%.q%.f %#,%B,%u%F", 0xf8ff00f0, 0x20c10020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "adc%.q%.f %#,%C,%B%F", 0xf8ff0020, 0x20c10000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "adc%.q%.f %#,%u,%B%F", 0xf8ff00f0, 0x20c10020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "adc%.q%.f%Q %#,%B,%L%F", 0xf8ff0ff0, 0x20c10f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "adc%.q%.f%Q %#,%L,%B%F", 0xf8ff0ff0, 0x20c10f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "adc%.f 0,%B,%C%F", 0xf8ff00ff, 0x2001003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "adc%.f 0,%B,%u%F", 0xf8ff003f, 0x2041003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "adc%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x20010fbe, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "adc%.f%Q 0,%L,%C%F", 0xffff703f, 0x2601703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "adc%.f%Q 0,%L,%u%F", 0xffff703f, 0x2641703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "adc%.f%Q 0,%L,%K%F", 0xffff7000, 0x26817000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "adc%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x26c17000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "adc%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x26c17020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "adc%.q%.f%Q 0,%L,%L%F", 0xffff7fff, 0x26c17f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add%.f %A,%B,%C%F", 0xf8ff0000, 0x20000000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add%.f %A,%B,%u%F", 0xf8ff0000, 0x20400000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add%.f %#,%B,%K%F", 0xf8ff0000, 0x20800000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add%.f%Q %A,%B,%[L%F", 0xf8ff0fc0, 0x20000f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x20000f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add%.f%Q %A,%L,%C%F", 0xffff7000, 0x26007000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add%.f%Q %A,%L,%u%F", 0xffff7000, 0x26407000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add%.f%Q %A,%L,%L%F", 0xffff7fc0, 0x26007f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x20c00000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add%.q%.f %#,%B,%u%F", 0xf8ff00f0, 0x20c00020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add%.q%.f %#,%C,%B%F", 0xf8ff0020, 0x20c00000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add%.q%.f %#,%u,%B%F", 0xf8ff00f0, 0x20c00020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add%.q%.f%Q %#,%B,%L%F", 0xf8ff0fe0, 0x20c00f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add%.q%.f%Q %#,%L,%B%F", 0xf8ff0fe0, 0x20c00f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add%.f 0,%B,%C%F", 0xf8ff003f, 0x2000003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add%.f 0,%B,%u%F", 0xf8ff003f, 0x2040003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x20000fbe, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add%.f%Q 0,%L,%C%F", 0xffff703f, 0x2600703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add%.f%Q 0,%L,%u%F", 0xffff703f, 0x2640703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add%.f%Q 0,%L,%K%F", 0xffff7000, 0x26807000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x26c07000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x26c07020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add%.q%.f%Q 0,%L,%L%F", 0xffff7fff, 0x26c07f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add1%.f %A,%B,%C%F", 0xf8ff0000, 0x20140000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add1%.f %A,%B,%u%F", 0xf8ff0000, 0x20540000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add1%.f %#,%B,%K%F", 0xf8ff0000, 0x20940000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add1%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x20140f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add1%.f%Q %A,%L,%C%F", 0xffff7000, 0x26147000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add1%.f%Q %A,%L,%u%F", 0xffff7000, 0x26547000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add1%.f%Q %A,%L,%L%F", 0xffff7fc0, 0x26147f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add1%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x20d40000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add1%.q%.f %#,%B,%u%F", 0xf8ff00f0, 0x20d40020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add1%.q%.f%Q %#,%B,%L%F", 0xf8ff0ff0, 0x20d40f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add1%.f 0,%B,%C%F", 0xf8ff003f, 0x2014003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add1%.f 0,%B,%u%F", 0xf8ff003f, 0x2054003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add1%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x20140fbe, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add1%.f%Q 0,%L,%C%F", 0xffff703f, 0x2614703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add1%.f%Q 0,%L,%u%F", 0xffff703f, 0x2654703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add1%.f%Q 0,%L,%K%F", 0xffff7000, 0x26947000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add1%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x26d47000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add1%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x26d47020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add1%.q%.f%Q 0,%L,%L%F", 0xffff7fff, 0x26d47f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add2%.f %A,%B,%C%F", 0xf8ff0000, 0x20150000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add2%.f %A,%B,%u%F", 0xf8ff0000, 0x20550000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add2%.f %#,%B,%K%F", 0xf8ff0000, 0x20950000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add2%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x20150f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add2%.f%Q %A,%L,%C%F", 0xffff7000, 0x26157000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add2%.f%Q %A,%L,%u%F", 0xffff7000, 0x26557000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add2%.f%Q %A,%L,%L%F", 0xffff7fc0, 0x26157f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add2%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x20d50000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add2%.q%.f %#,%B,%u%F", 0xf8ff00f0, 0x20d50020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add2%.q%.f%Q %#,%B,%L%F", 0xf8ff0ff0, 0x20d50f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add2%.f 0,%B,%C%F", 0xf8ff003f, 0x2015003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add2%.f 0,%B,%u%F", 0xf8ff003f, 0x2055003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add2%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x20150fbe, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add2%.f%Q 0,%L,%C%F", 0xffff703f, 0x2615703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add2%.f%Q 0,%L,%u%F", 0xffff703f, 0x2655703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add2%.f%Q 0,%L,%K%F", 0xffff7000, 0x26957000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add2%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x26d57000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add2%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x26d57020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add2%.q%.f%Q 0,%L,%L%F", 0xffff7fff, 0x26d57f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add3%.f %A,%B,%C%F", 0xf8ff0000, 0x20160000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add3%.f %A,%B,%u%F", 0xf8ff0000, 0x20560000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add3%.f %#,%B,%K%F", 0xf8ff0000, 0x20960000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add3%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x20160f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add3%.f%Q %A,%L,%C%F", 0xffff7000, 0x26167000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add3%.f%Q %A,%L,%u%F", 0xffff7000, 0x26567000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add3%.f%Q %A,%L,%L%F", 0xffff7fc0, 0x26167f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add3%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x20d60000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add3%.q%.f %#,%B,%u%F", 0xf8ff00f0, 0x20d60020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add3%.q%.f%Q %#,%B,%L%F", 0xf8ff0ff0, 0x20d60f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add3%.f 0,%B,%C%F", 0xf8ff003f, 0x2016003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add3%.f 0,%B,%u%F", 0xf8ff003f, 0x2056003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add3%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x20160fbe, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add3%.f%Q 0,%L,%C%F", 0xffff703f, 0x2616703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add3%.f%Q 0,%L,%u%F", 0xffff7000, 0x26967000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add3%.f%Q 0,%L,%K%F", 0xffff7000, 0x26967000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add3%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x26d67000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add3%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x26d67020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "add3%.q%.f%Q 0,%L,%L%F", 0xffff7fff, 0x26d67f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "and%.f %A,%B,%C%F", 0xf8ff0000, 0x20040000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "and%.f %A,%B,%u%F", 0xf8ff0000, 0x20440000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "and%.f %#,%B,%K%F", 0xf8ff0000, 0x20840000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "and%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x20040f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "and%.f%Q %A,%L,%C%F", 0xffff7000, 0x26047000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "and%.f%Q %A,%L,%u%F", 0xffff7000, 0x26447000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "and%.f%Q %A,%L,%L%F", 0xffff7fc0, 0x26047f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "and%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x20c40000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "and%.q%.f %#,%C,%B%F", 0xf8ff0020, 0x20c40000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "and%.q%.f %#,%B,%u%F", 0xf8ff00f0, 0x20c40020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "and%.q%.f %#,%u,%B%F", 0xf8ff00f0, 0x20c40020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "and%.q%.f%Q %#,%B,%L%F", 0xf8ff0fe0, 0x20c40f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "and%.q%.f%Q %#,%L,%B%F", 0xf8ff0fe0, 0x20c40f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "and%.f 0,%B,%C%F", 0xf8ff003f, 0x2004003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "and%.f 0,%B,%u%F", 0xf8ff003f, 0x2044003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "and%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x20040fbe, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "and%.f%Q 0,%L,%C%F", 0xffff703f, 0x2604703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "and%.f%Q 0,%L,%u%F", 0xffff703f, 0x2644703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "and%.f%Q 0,%L,%K%F", 0xffff7000, 0x26847000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "and%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x26c47000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "and%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x26c47020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "and%.q%.f%Q 0,%L,%L%F", 0xffff7fff, 0x26c47f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "asl%.f %A,%B,%C%F", 0xf8ff0000, 0x28000000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asl%.f %A,%B,%u%F", 0xf8ff0000, 0x28400000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asl%.f %#,%B,%K%F", 0xf8ff0000, 0x28800000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asl%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x28000f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asl%.f%Q %A,%L,%C%F", 0xffff7000, 0x2e007000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asl%.f%Q %A,%L,%u%F", 0xffff7000, 0x2e407000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asl%.f%Q %A,%L,%L%F", 0xffff7fc0, 0x2e007f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asl%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x28c00000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asl%.q%.f %#,%B,%u%F", 0xf8ff0020, 0x28c00020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asl%.q%.f%Q %#,%B,%L%F", 0xf8ff0fe0, 0x28c00f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asl%.f 0,%B,%C%F", 0xf8ff003f, 0x2800003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asl%.f 0,%B,%u%F", 0xf8ff003f, 0x2840003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asl%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x28000fbe, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asl%.f%Q 0,%L,%C%F", 0xffff703f, 0x2e00703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asl%.f%Q 0,%L,%u%F", 0xffff703f, 0x2e40703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asl%.f%Q 0,%L,%K%F", 0xffff7000, 0x2e807000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asl%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x2ec07000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asl%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x2ec07020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asl%.q%.f%Q 0,%L,%L%F", 0xffff7fe0, 0x2ec07f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asl%.f %#,%C%F", 0xf8ff003f, 0x202f0000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asl%.f %#,%u%F", 0xf8ff003f, 0x206f0000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asl%.f%Q %#,%L%F", 0xf8ff0fff, 0x202f0f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asl%.f 0,%C%F", 0xffff703f, 0x262f7000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asl%.f 0,%u%F", 0xffff703f, 0x266f7000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asl%.f%Q 0,%L%F", 0xffff7fff, 0x262f7f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "asr%.f %A,%B,%C%F", 0xf8ff0000, 0x28020000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asr%.f %A,%B,%u%F", 0xf8ff0000, 0x28420000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asr%.f %#,%B,%K%F", 0xf8ff0000, 0x28820000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asr%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x28020f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asr%.f%Q %A,%L,%C%F", 0xffff7000, 0x2e027000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asr%.f%Q %A,%L,%u%F", 0xffff7000, 0x2e427000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asr%.f%Q %A,%L,%L%F", 0xffff7fc0, 0x2e027f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asr%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x28c20000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asr%.q%.f %#,%B,%u%F", 0xf8ff0020, 0x28c20020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asr%.q%.f%Q %#,%B,%L%F", 0xf8ff0fe0, 0x28c20f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asr%.f 0,%B,%C%F", 0xf8ff003f, 0x2802003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asr%.f 0,%B,%u%F", 0xf8ff003f, 0x2842003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asr%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x28020fbe, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asr%.f%Q 0,%L,%C%F", 0xffff703f, 0x2e02703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asr%.f%Q 0,%L,%u%F", 0xffff703f, 0x2e42703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asr%.f%Q 0,%L,%K%F", 0xffff7000, 0x2e827000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asr%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x2ec27000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asr%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x2ec27020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asr%.q%.f%Q 0,%L,%L%F", 0xffff7fe0, 0x2ec27f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asr%.f %#,%C%F", 0xf8ff003f, 0x202f0001, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asr%.f %#,%u%F", 0xf8ff003f, 0x206f0001, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asr%.f%Q %#,%L%F", 0xf8ff0fff, 0x202f0f81, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asr%.f 0,%C%F", 0xffff703f, 0x262f7001, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asr%.f 0,%u%F", 0xffff703f, 0x266f7001, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "asr%.f%Q 0,%L%F", 0xffff7fff, 0x262f7f81, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bbit0%.n %B,%C,%d", 0xf801001f, 0x0801000e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bbit0%.n %B,%u,%d", 0xf801001f, 0x0801001e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bbit0%Q %B,%L,%d", 0xf8010fff, 0x08010f8e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bbit0%Q %L,%C,%d", 0xff01703f, 0x0e01700e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bbit1%.n %B,%C,%d", 0xf801001f, 0x0801000f, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bbit1%.n %B,%u,%d", 0xf801001f, 0x0801001f, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bbit1%Q %B,%L,%d", 0xf8010fff, 0x08010f8f, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bbit1%Q %L,%C,%d", 0xff01703f, 0x0e01700f, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "b%.n %I", 0xf8010010, 0x00010000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "b%q%.n %i", 0xf8010000, 0x00000000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "b%.q%.n %i", 0xf8010000, 0x00000000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bclr%.f %A,%B,%C%F", 0xf8ff0000, 0x20100000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bclr%.f %A,%B,%u%F", 0xf8ff0000, 0x20500000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bclr%.f %#,%B,%K%F", 0xf8ff0000, 0x20900000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bclr%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x20100f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bclr%.f%Q %A,%L,%C%F", 0xffff7000, 0x26107000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bclr%.f%Q %A,%L,%u%F", 0xffff7000, 0x26507000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bclr%.f%Q %A,%L,%L%F", 0xffff7fc0, 0x26107f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bclr%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x20d00000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bclr%.q%.f %#,%B,%u%F", 0xf8ff0020, 0x20d00020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bclr%.q%.f%Q %#,%B,%L%F", 0xf8ff0fe0, 0x20d00f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bclr%.f 0,%B,%C%F", 0xf8ff003f, 0x2010003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bclr%.f 0,%B,%u%F", 0xf8ff003f, 0x2050003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bclr%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x20100fbe, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bclr%.f%Q 0,%L,%C%F", 0xffff703f, 0x2610703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bclr%.f%Q 0,%L,%u%F", 0xffff703f, 0x2650703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bclr%.f%Q 0,%L,%K%F", 0xffff7000, 0x26907000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bclr%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x26d07000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bclr%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x26d07020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bclr%.q%.f%Q 0,%L,%L%F", 0xffff7fe0, 0x26d07f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bic%.f %A,%B,%C%F", 0xf8ff0000, 0x20060000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bic%.f %A,%B,%u%F", 0xf8ff0000, 0x20460000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bic%.f %#,%B,%K%F", 0xf8ff0000, 0x20860000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bic%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x20060f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bic%.f%Q %A,%L,%C%F", 0xffff7000, 0x26067000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bic%.f%Q %A,%L,%u%F", 0xffff7000, 0x26467000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bic%.f%Q %A,%L,%K%F", 0xffff7000, 0x26067000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bic%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x20c60000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bic%.q%.f %#,%B,%u%F", 0xf8ff0020, 0x20c60020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bic%.q%.f%Q %#,%B,%L%F", 0xf8ff0fe0, 0x20c60f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bic%.f 0,%B,%C%F", 0xf8ff003f, 0x2006003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bic%.f 0,%B,%u%F", 0xf8ff003f, 0x2046003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bic%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x20060fbe, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bic%.f%Q 0,%L,%C%F", 0xffff703f, 0x2606703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bic%.f%Q 0,%L,%u%F", 0xffff703f, 0x2646703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bic%.f%Q 0,%L,%K%F", 0xffff7000, 0x26867000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bic%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x26c67000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bic%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x26c67020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bic%.q%.f%Q 0,%L,%L%F", 0xffff7fe0, 0x26c67f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bl%.n %H", 0xf8030030, 0x08020000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bl%q%.n %h", 0xf803003f, 0x08000000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bl%.q%.n %h", 0xf803003f, 0x08000000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bmsk%.f %A,%B,%C%F", 0xf8ff0000, 0x20130000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bmsk%.f %A,%B,%u%F", 0xf8ff0000, 0x20530000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bmsk%.f %#,%B,%K%F", 0xf8ff0000, 0x20930000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bmsk%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x20130f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bmsk%.f%Q %A,%L,%C%F", 0xffff7000, 0x26137000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bmsk%.f%Q %A,%L,%u%F", 0xffff7000, 0x26537000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bmsk%.f%Q %A,%L,%L%F", 0xffff7fc0, 0x26137f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bmsk%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x20d30000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bmsk%.q%.f %#,%B,%u%F", 0xf8ff0020, 0x20d30020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bmsk%.q%.f%Q %#,%B,%L%F", 0xf8ff0fe0, 0x20d30f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bmsk%.f 0,%B,%C%F", 0xf8ff003f, 0x2013003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bmsk%.f 0,%B,%u%F", 0xf8ff003f, 0x2053003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bmsk%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x20130fbe, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bmsk%.f%Q 0,%L,%C%F", 0xffff703f, 0x2613703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bmsk%.f%Q 0,%L,%u%F", 0xffff703f, 0x2653703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bmsk%.f%Q 0,%L,%K%F", 0xffff7000, 0x26937000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bmsk%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x26d37000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bmsk%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x26d37020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bmsk%.q%.f%Q 0,%L,%L%F", 0xffff7fe0, 0x26d37f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "breq%.n %B,%C,%d", 0xf801003f, 0x08010000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "breq%.n %B,%u,%d", 0xf801003f, 0x08010010, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "breq%Q %B,%L,%d", 0xf8010fff, 0x08010f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "breq%Q %L,%C,%d", 0xff01703f, 0x0e017000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brne%.n %B,%C,%d", 0xf801003f, 0x08010001, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brne%.n %B,%u,%d", 0xf801003f, 0x08010011, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brne%Q %B,%L,%d", 0xf8010fff, 0x08010f81, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brne%Q %L,%C,%d", 0xff01703f, 0x0e017001, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "brgt%.n %C,%B,%d", 0xf801003f, 0x08010002, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brgt%.n %B,%u,%d", 0xf801003f, 0x08010013, (2 | 4 | 16 | 8)|0x100000, 0, 0 ,0,0},
  { "brgt%Q %L,%B,%d", 0xf8010fff, 0x08010f82, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brgt%Q %C,%L,%d", 0xff01703f, 0x0e017002, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "brle%.n %C,%B,%d", 0xf801003f, 0x08010003, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brle%.n %B,%u,%d", 0xf801003f, 0x08010012, (2 | 4 | 16 | 8)|0x100000, 0, 0 ,0,0},
  { "brle%Q %L,%B,%d", 0xf8010fff, 0x08010f83, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brle%Q %C,%L,%d", 0xff01703f, 0x0e017003, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "brhi%.n %C,%B,%d", 0xf801003f, 0x08010004, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brhi%.n %B,%u,%d", 0xf801003f, 0x08010015, (2 | 4 | 16 | 8)|0x100000, 0, 0 ,0,0},
  { "brhi%Q %L,%B,%d", 0xf8010fff, 0x08010f84, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brhi%Q %C,%L,%d", 0xff01703f, 0x0e017004, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "brls%.n %C,%B,%d", 0xf801003f, 0x08010005, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brls%.n %B,%u,%d", 0xf801003f, 0x08010014, (2 | 4 | 16 | 8)|0x100000, 0, 0 ,0,0},
  { "brls%Q %L,%B,%d", 0xf8010fff, 0x08010f85, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brls%Q %C,%L,%d", 0xff01703f, 0x0e017005, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "brcc%.n %B,%C,%d", 0xff01003f, 0x08010005, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brcc%.n %B,%u,%d", 0xff01003f, 0x08010015, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brcc%Q %B,%L,%d", 0xf8010fff, 0x08010f85, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brcc%Q %L,%C,%d", 0xf801003f, 0x0e017005, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "brcs%.n %B,%C,%d", 0xff01003f, 0x08010004, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brcs%.n %B,%u,%d", 0xff01003f, 0x08010014, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brcs%Q %B,%L,%d", 0xf8010fff, 0x08010f84, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brcs%Q %L,%C,%d", 0xf801003f, 0x0e017004, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "brlt%.n %B,%C,%d", 0xf801003f, 0x08010002, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brlt%.n %B,%u,%d", 0xf801003f, 0x08010012, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brlt%Q %B,%L,%d", 0xf8010fff, 0x08010f82, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brlt%Q %L,%C,%d", 0xff01703f, 0x0e017002, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brk", 0xffffffff, 0x256F003F, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brge%.n %B,%C,%d", 0xf801003f, 0x08010003, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brge%.n %B,%u,%d", 0xf801003f, 0x08010013, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brge%Q %B,%L,%d", 0xf8010fff, 0x08010f83, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brge%Q %L,%C,%d", 0xff01703f, 0x0e017003, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brlo%.n %B,%C,%d", 0xf801003f, 0x08010004, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brlo%.n %B,%u,%d", 0xf801003f, 0x08010014, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brlo%Q %B,%L,%d", 0xf8010fff, 0x08010f84, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brlo%Q %L,%C,%d", 0xff01703f, 0x0e017004, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brhs%.n %B,%C,%d", 0xf801003f, 0x08010005, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brhs%.n %B,%u,%d", 0xf801003f, 0x08010015, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brhs%Q %B,%L,%d", 0xf8010fff, 0x08010f85, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "brhs%Q %L,%C,%d", 0xff01703f, 0x0e017005, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bset%.f %A,%B,%C%F", 0xf8ff0000, 0x200f0000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bset%.f %A,%B,%u%F", 0xf8ff0000, 0x204f0000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bset%.f %#,%B,%K%F", 0xf8ff0000, 0x208f0000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bset%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x200f0f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bset%.f%Q %A,%L,%C%F", 0xffff7000, 0x260f7000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bset%.f%Q %A,%L,%u%F", 0xffff7000, 0x264f7000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bset%.f%Q %A,%L,%L%F", 0xffff7fc0, 0x260f7f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bset%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x20cf0000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bset%.q%.f %#,%B,%u%F", 0xf8ff0020, 0x20cf0020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bset%.q%.f%Q %#,%B,%L%F", 0xf8ff0fe0, 0x20cf0f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bset%.f 0,%B,%C%F", 0xf8ff003f, 0x200f003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bset%.f 0,%B,%u%F", 0xf8ff003f, 0x204f003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bset%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x200f0fbe, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bset%.f%Q 0,%L,%C%F", 0xffff703f, 0x260f703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bset%.f%Q 0,%L,%u%F", 0xffff703f, 0x264f703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bset%.f%Q 0,%L,%K%F", 0xffff7000, 0x268f7000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bset%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x26cf7000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bset%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x26cf7020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bset%.q%.f%Q 0,%L,%L%F", 0xffff7fe0, 0x26cf7f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "btst %B,%C", 0xf8ff803f, 0x20118000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "btst %B,%u", 0xf8ff803f, 0x20518000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "btst %B,%K", 0xf8ff8000, 0x20918000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "btst%Q %B,%L", 0xf8ff8000, 0x20118f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "btst%Q %L,%C", 0xfffff03f, 0x2611f000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "btst%Q %L,%u", 0xfffff03f, 0x2651f000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "btst%Q %L,%L", 0xffffffff, 0x2611ff80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "btst%.q %B,%C", 0xf8ff8020, 0x20d18000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "btst%.q %B,%u", 0xf8ff8020, 0x20d18020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "btst%.q%Q %B,%L", 0xf8ff8fe0, 0x20d18f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "btst%.q%Q %L,%C", 0xfffff020, 0x26d1f000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "btst%.q%Q %L,%u", 0xfffff020, 0x26d1f020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "btst%.q%Q %L,%L", 0xffffffe0, 0x26d1ff80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bxor%.f %A,%B,%C%F", 0xf8ff0000, 0x20120000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bxor%.f %A,%B,%u%F", 0xf8ff0000, 0x20520000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bxor%.f %#,%B,%K%F", 0xf8ff0000, 0x20920000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bxor%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x20120f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bxor%.f%Q %A,%L,%C%F", 0xffff7000, 0x26127000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bxor%.f%Q %A,%L,%u%F", 0xffff7000, 0x26527000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bxor%.f%Q %A,%L,%L%F", 0xffff7fc0, 0x26127f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bxor%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x20d20000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bxor%.q%.f %#,%C,%B%F", 0xf8ff0020, 0x20d20000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bxor%.q%.f %#,%B,%u%F", 0xf8ff0020, 0x20d20020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bxor%.q%.f %#,%u,%B%F", 0xf8ff0020, 0x20d20020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bxor%.q%.f%Q %#,%B,%L%F", 0xf8ff0fe0, 0x20d20f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bxor%.q%.f%Q %#,%L,%B%F", 0xf8ff0fe0, 0x20d20f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bxor%.f 0,%B,%C%F", 0xf8ff003f, 0x2012003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bxor%.f 0,%B,%u%F", 0xf8ff003f, 0x2052003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bxor%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x20120fbe, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bxor%.f%Q 0,%L,%C%F", 0xffff703f, 0x2612703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bxor%.f%Q 0,%L,%u%F", 0xffff703f, 0x2652703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bxor%.f%Q 0,%L,%K%F", 0xffff7000, 0x26927000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bxor%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x26d27000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bxor%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x26d27020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "bxor%.q%.f%Q 0,%L,%L%F", 0xffff7fe0, 0x26d27f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp %B,%C", 0xf8ff803f, 0x200c8000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp%.f %B,%C", 0xf8ff803f, 0x200c8000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp %B,%u", 0xf8ff803f, 0x204c8000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp%.f %B,%u", 0xf8ff803f, 0x204c8000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp %B,%K", 0xf8ff8000, 0x208c8000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp%.f %B,%K", 0xf8ff8000, 0x208c8000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp%Q %B,%L", 0xf8ff8000, 0x200c8f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp%.f%Q %B,%L", 0xf8ff8000, 0x200c8f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp%Q %L,%C", 0xfffff03f, 0x260cf000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp%.f%Q %L,%C", 0xfffff03f, 0x260cf000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp%Q %L,%u", 0xfffff03f, 0x264cf000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp%.f%Q %L,%u", 0xfffff03f, 0x264cf000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp%Q %L,%L", 0xffffffff, 0x260cff80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp%.f%Q %L,%L", 0xffffffff, 0x260cff80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp%.q %B,%C", 0xf8ff8020, 0x20cc8000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp%.q%.f %B,%C", 0xf8ff8020, 0x20cc8000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp%.q %B,%u", 0xf8ff8020, 0x20cc8020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp%.q%.f %B,%u", 0xf8ff8020, 0x20cc8020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp%.q%Q %B,%L", 0xf8ff8fe0, 0x20cc8f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp%.q%.f%Q %B,%L", 0xf8ff8fe0, 0x20cc8f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp%.q%Q %L,%C", 0xfffff020, 0x26ccf000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp%.q%.f%Q %L,%C", 0xfffff020, 0x26ccf000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp%.q%Q %L,%u", 0xfffff020, 0x26ccf020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp%.q%.f%Q %L,%u", 0xfffff020, 0x26ccf020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp%.q%Q %L,%L", 0xffffffe0, 0x26ccff80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "cmp%.q%.f%Q %L,%L", 0xffffffe0, 0x26ccff80, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "ex%.V %#,[%C]%^",0xf8ff003f,0x202f000C,8,0,0,0,0},
  { "ex%.V %#,[%u]%^",0xf8ff003f,0x206f000C,8,0,0,0,0},
  { "ex%.V %#,[%L]%^",0xf8ff0fff,0x202f0f8c,8,0,0,0,0},

  { "extb%.f %#,%C%F", 0xf8ff003f, 0x202f0007, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "extb%.f %#,%u%F", 0xf8ff003f, 0x206f0007, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "extb%.f%Q %#,%L%F", 0xf8ff0fff, 0x202f0f87, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "extb%.f 0,%C%F", 0xffff703f, 0x262f7007, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "extb%.f 0,%u%F", 0xffff703f, 0x266f7007, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "extb%.f%Q 0,%L%F", 0xffff7fff, 0x262f7f87, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "extw%.f %#,%C%F", 0xf8ff003f, 0x202f0008, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "extw%.f %#,%u%F", 0xf8ff003f, 0x206f0008, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "extw%.f%Q %#,%L%F", 0xf8ff0fff, 0x202f0f88, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "extw%.f 0,%C%F", 0xffff703f, 0x262f7008, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "extw%.f 0,%u%F", 0xffff703f, 0x266f7008, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "extw%.f%Q 0,%L%F", 0xffff7fff, 0x262f7f88, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "flag %u", 0xfffff020, 0x20690000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "flag %C", 0xfffff020, 0x20290000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "flag%.q%Q %C", 0xfffff020, 0x20e90000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "flag%.q%Q %u", 0xfffff020, 0x20e90020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "flag %K", 0xfffff000, 0x20a90000, (2 | 4 | 16 | 8), 0, 0, 0, 0 },
  { "flag %L", 0xffffffff, 0x20290f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "flag%.q%Q %L", 0xffffffe0, 0x20e90f80, (2 | 4 | 16 | 8), 0, 0, 0, 0 },

  { "j%.N [%C]", 0xfffef03f, 0x20200000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "j%.N %u", 0xfffef03f, 0x20600000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "j%.N %K", 0xfffef000, 0x20a00000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "j%Q %L", 0xffffffff, 0x20200f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "j%.f [%7]", 0xffffffff, 0x20208740, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "j%.f [%8]", 0xffffffff, 0x20208780, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "j%q%.N [%C]", 0xfffef020, 0x20e00000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "j%q%.N %u", 0xfffef020, 0x20e00020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "j%q%Q %L", 0xffffffe0, 0x20e00f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "j%q%.f [%7]", 0xffffffe0, 0x20e08740, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "j%q%.f [%8]", 0xffffffe0, 0x20e08780, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "j%.q%.N [%C]", 0xfffef020, 0x20e00000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "j%.q%.N %u", 0xfffef020, 0x20e00020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "j%.q%Q %L", 0xffffffe0, 0x20e00f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "j%.q%.f [%7]", 0xffffffe0, 0x20e08740, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "j%.q%.f [%8]", 0xffffffe0, 0x20e08780, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "jl%.N [%C]", 0xfffef03f, 0x20220000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "jl%.N %u", 0xfffef03f, 0x20620000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "jl%.N %K", 0xfffef000, 0x20a20000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "jl%Q %L", 0xffffffff, 0x20220f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "jl%q%.N [%C]", 0xfffef020, 0x20e20000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "jl%q%.N %u", 0xfffef020, 0x20e20020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "jl%q%Q %L", 0xffffffe0, 0x20e20f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "jl%.q%.N [%C]", 0xfffef020, 0x20e20000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "jl%.q%.N %u", 0xfffef020, 0x20e20020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "jl%.q%Q %L", 0xffffffe0, 0x20e20f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},






  { "ld%.p 0,[%g,%o]%3", 0xf80009ff, 0x1000003e, 8, 0, 0 ,0,0},
  { "prefetch%.p [%g,%o]%3",0xf80009ff, 0x1000003e, 8, 0, 0 ,0,0},
  { "pf%.p [%g,%o]%3",0xf80009ff, 0x1000003e, 8, 0, 0 ,0,0},

  { "ld 0,[%L]%3", 0xff0079ff, 0x1600703e, 8, 0, 0 ,0,0},
  { "prefetch [%L]%3", 0xff0079ff, 0x1600703e, 8, 0, 0 ,0,0},
  { "pf [%L]%3", 0xff0079ff, 0x1600703e, 8, 0, 0 ,0,0},


  { "ld%.P 0,[%g,%C]%1", 0xf83f803f, 0x2030003e, 8, 0, 0 ,0,0},
  { "prefetch%.p [%g,%C]%1", 0xf83f803f, 0x2030003e, 8, 0, 0 ,0,0},
  { "pf%.P [%g,%C]%1", 0xf83f803f, 0x2030003e, 8, 0, 0 ,0,0},


  { "ld%.P 0,[%g,%L]%1", 0xf83f8fff, 0x20300fbe, 8, 0, 0 ,0,0},
  { "prefetch%.p [%g,%L]%1", 0xf83f8fff, 0x20300fbe, 8, 0, 0 ,0,0},
  { "pf%.P [%g,%L]%1", 0xf83f8fff, 0x20300fbe, 8, 0, 0 ,0,0},

  { "ld 0,[%L,%C]%1", 0xff3ff03f, 0x2630703e, 8, 0, 0 ,0,0},
  { "prefetch [%L,%C]%1", 0xff3ff03f, 0x2630703e, 8, 0, 0 ,0,0},
  { "pf [%L,%C]%1", 0xff3ff03f, 0x2630703e, 8, 0, 0 ,0,0},


  { "ld%T%.X%.P%.V %A,[%g,%C]%1", 0xf8380000, 0x20300000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ld%T%.P%.X%.V %A,[%g,%C]%1", 0xf8380000, 0x20300000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ld%t%.x%.p%.v %A,[%g]%1", 0xf8ff8000, 0x10000000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ld%t%.p%.x%.v %A,[%g]%1", 0xf8ff8000, 0x10000000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ld%t%.x%.p%.v %A,[%g,%o]%1", 0xf8000000, 0x10000000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ld%t%.p%.x%.v %A,[%g,%o]%1", 0xf8000000, 0x10000000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ld%t%.x%.P%.v %A,[%g,%[L]%1", 0xf8000000, 0x10000000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ld%t%.P%.x%.v %A,[%g,%[L]%1", 0xf8000000, 0x10000000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ld%T%.X%.P%.V%Q %A,[%g,%L]%1", 0xf8380fc0, 0x20300f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ld%T%.P%.X%.V%Q %A,[%g,%L]%1", 0xf8380fc0, 0x20300f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ld%T%.X%.&%.V%Q %A,[%L,%C]%1", 0xfff87000, 0x26307000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ld%T%.&%.X%.V%Q %A,[%L,%C]%1", 0xfff87000, 0x26307000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ld%t%.x%.v%Q %A,[%L,%o]%1", 0xfff87000, 0x16007000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ld%t%.v%.x%Q %A,[%L,%o]%1", 0xfff87000, 0x16007000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ld%T%.X%.V%Q %A,[%L,%L]%1", 0xfff87fc0, 0x26307f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ld%T%.V%.X%Q %A,[%L,%L]%1", 0xfff87fc0, 0x26307f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ld%t%.x%.v%Q %A,[%L]%3", 0xfffff600, 0x16007000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ld%t%.v%.x%Q %A,[%L]%3", 0xfffff600, 0x16007000, (2 | 4 | 16 | 8), 0, 0 ,0,0},



  { "lp %Y", 0xfffff000, 0x20a80000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lp%q %y", 0xfffff020, 0x20e80020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lp%.q %y", 0xfffff020, 0x20e80020, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "lr %#,[%C]", 0xf8ff803f, 0x202a0000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lr %#,[%GC]", 0xf8ff8000, 0x20aa0000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lr %#,[%K]", 0xf8ff8000, 0x20aa0000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lr%Q %#,[%L]", 0xf8ff8fff, 0x202a0f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "lsl%.f %A,%B,%C%F", 0xf8ff0000, 0x28000000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsl%.f %A,%B,%u%F", 0xf8ff0000, 0x28400000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsl%.f %#,%B,%K%F", 0xf8ff0000, 0x28800000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsl%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x28000f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsl%.f%Q %A,%L,%C%F", 0xffff7000, 0x2e007000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsl%.f%Q %A,%L,%u%F", 0xffff7000, 0x2e407000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsl%.f%Q %A,%L,%L%F", 0xffff7fc0, 0x2e007f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsl%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x28c00000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsl%.q%.f %#,%B,%u%F", 0xf8ff0020, 0x28c00020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsl%.q%.f%Q %#,%B,%L%F", 0xf8ff0fe0, 0x28c00f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsl%.f 0,%B,%C%F", 0xf8ff003f, 0x2800003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsl%.f 0,%B,%u%F", 0xf8ff003f, 0x2840003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsl%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x28000fbe, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsl%.f%Q 0,%L,%C%F", 0xffff703f, 0x2e00703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsl%.f%Q 0,%L,%K%F", 0xffff003f, 0x2e807000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsl%.f%Q 0,%L,%u%F", 0xffff703f, 0x2e40703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsl%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x2ec07000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsl%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x2ec07020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsl%.q%.f%Q 0,%L,%u%F", 0xffff7fe0, 0x2ec07f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsl%.f %#,%C%F", 0xf8ff003f, 0x202f0000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsl%.f %#,%u%F", 0xf8ff003f, 0x206f0000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsl%.f%Q %#,%L%F", 0xf8ff0fff, 0x202f0f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsl%.f 0,%C%F", 0xffff703f, 0x262f7000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsl%.f 0,%u%F", 0xffff703f, 0x266f7000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsl%.f%Q 0,%L%F", 0xffff7fff, 0x262f7f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "lsr%.f %A,%B,%C%F", 0xf8ff0000, 0x28010000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsr%.f %A,%B,%u%F", 0xf8ff0000, 0x28410000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsr%.f %#,%B,%K%F", 0xf8ff0000, 0x28810000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsr%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x28010f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsr%.f%Q %A,%L,%C%F", 0xffff7000, 0x2e017000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsr%.f%Q %A,%L,%u%F", 0xffff7000, 0x2e417000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsr%.f%Q %A,%L,%L%F", 0xffff7fc0, 0x2e017f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsr%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x28c10000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsr%.q%.f %#,%B,%u%F", 0xf8ff0020, 0x28c10020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsr%.q%.f%Q %#,%B,%L%F", 0xf8ff0fe0, 0x28c10f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsr%.f 0,%B,%C%F", 0xf8ff003f, 0x2801003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsr%.f 0,%B,%u%F", 0xf8ff003f, 0x2841003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsr%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x28010fbe, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsr%.f%Q 0,%L,%C%F", 0xffff703f, 0x2e01703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsr%.f%Q 0,%L,%u%F", 0xffff703f, 0x2e41703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsr%.f%Q 0,%L,%K%F", 0xffff003f, 0x2e817000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsr%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x2ec17000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsr%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x2ec17020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsr%.q%.f%Q 0,%L,%L%F", 0xffff7fe0, 0x2ec17f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsr%.f %#,%C%F", 0xf8ff003f, 0x202f0002, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsr%.f %#,%u%F", 0xf8ff003f, 0x206f0002, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsr%.f%Q %#,%L%F", 0xf8ff0fff, 0x202f0f82, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsr%.f 0,%C%F", 0xffff703f, 0x262f7002, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsr%.f 0,%u%F", 0xffff703f, 0x266f7002, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "lsr%.f%Q 0,%L%F", 0xffff7fff, 0x262f7f82, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "max%.f %A,%B,%C%F", 0xf8ff0000, 0x20080000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "max%.f %A,%B,%u%F", 0xf8ff0000, 0x20480000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "max%.f %#,%B,%K%F", 0xf8ff0000, 0x20880000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "max%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x20080f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "max%.f%Q %A,%L,%C%F", 0xffff7000, 0x26087000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "max%.f%Q %A,%L,%u%F", 0xffff7000, 0x26487000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "max%.f%Q %A,%L,%L%F", 0xffff7fc0, 0x26087f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "max%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x20c80000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "max%.q%.f %#,%B,%u%F", 0xf8ff0020, 0x20c80020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "max%.q%.f%Q %#,%B,%L%F", 0xf8ff0fe0, 0x20c80f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "max%.f 0,%B,%C%F", 0xf8ff003f, 0x2008003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "max%.f 0,%B,%u%F", 0xf8ff003f, 0x2048003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "max%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x20080fbe, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "max%.f%Q 0,%L,%C%F", 0xffff703f, 0x2608703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "max%.f%Q 0,%L,%u%F", 0xffff703f, 0x2648703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "max%.f%Q 0,%L,%K%F", 0xffff7fff, 0x26887000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "max%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x26c87000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "max%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x26c87020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "max%.q%.f%Q 0,%L,%K%F", 0xffff7fe0, 0x26c87f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "min%.f %A,%B,%C%F", 0xf8ff0000, 0x20090000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "min%.f %A,%B,%u%F", 0xf8ff0000, 0x20490000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "min%.f %#,%B,%K%F", 0xf8ff0000, 0x20890000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "min%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x20090f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "min%.f%Q %A,%L,%C%F", 0xffff7000, 0x26097000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "min%.f%Q %A,%L,%u%F", 0xffff7000, 0x26497000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "min%.f%Q %A,%L,%L%F", 0xffff7fc0, 0x26097f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "min%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x20c90000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "min%.q%.f %#,%B,%u%F", 0xf8ff0020, 0x20c90020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "min%.q%.f%Q %#,%B,%L%F", 0xf8ff0fe0, 0x20c90f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "min%.f 0,%B,%C%F", 0xf8ff003f, 0x2009003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "min%.f 0,%B,%u%F", 0xf8ff003f, 0x2049003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "min%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x20090fbe, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "min%.f%Q 0,%L,%C%F", 0xffff703f, 0x2609703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "min%.f%Q 0,%L,%u%F", 0xffff703f, 0x2649703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "min%.f%Q 0,%L,%K%F", 0xffff003f, 0x26897000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "min%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x26c97000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "min%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x26c97020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "min%.q%.f%Q 0,%L,%K%F", 0xffff7fe0, 0x26c97f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "mov%.f %#,%C%F", 0xf8ff003f, 0x200A0000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "mov%.f %#,%u%F", 0xf8ff003f, 0x204a0000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "mov%.f %#,%K%F", 0xf8ff0000, 0x208a0000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "mov%.f%Q %#,%L%F", 0xf8ff0fff, 0x200a0f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "mov%.q%.f %#,%C%F", 0xf8ff0020, 0x20ca0000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "mov%.q%.f %#,%u%F", 0xf8ff0020, 0x20ca0020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "mov%.q%.f%Q %#,%L%F", 0xf8ff0fe0, 0x20ca0f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "mov%.f 0,%C%F", 0xffff703f, 0x260a7000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "mov%.f 0,%u%F", 0xffff703f, 0x264a7000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "mov%.f 0,%K%F", 0xffff7000, 0x268a7000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "mov%.f%Q 0,%L%F", 0xffff7fff, 0x260a7f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "mov%.q%.f 0,%C%F", 0xffff7020, 0x26ca7000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "mov%.q%.f 0,%u%F", 0xffff7020, 0x26ca7020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "mov%.q%.f%Q 0,%L%F", 0xffff7fe0, 0x26ca7f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "neg%.f %A,%B%F", 0xf8ff0000, 0x204e0000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "neg%.q%.f %#,%B%F", 0xf8ff0020, 0x20ce0020, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "norm%.f %#,%C%F", 0xf8ff003f, 0x282f0001, 8, 0, 0 ,0,0},
  { "norm%.f %#,%u%F", 0xf8ff003f, 0x286f0001, 8, 0, 0 ,0,0},
  { "norm%.f%Q %#,%L%F", 0xf8ff0fff, 0x282f0f81, 8, 0, 0 ,0,0},
  { "norm%.f 0,%C%F", 0xffff703f, 0x2e2f7001, 8, 0, 0 ,0,0},
  { "norm%.f 0,%u%F", 0xffff703f, 0x2e6f7001, 8, 0, 0 ,0,0},
  { "norm%.f%Q 0,%L%F", 0xffff7fff, 0x2e2f7f81, 8, 0, 0 ,0,0},
  { "normw%.f %#,%C%F", 0xf8ff003f, 0x282f0008, 8, 0, 0 ,0,0},
  { "normw%.f %#,%u%F", 0xf8ff003f, 0x286f0008, 8, 0, 0 ,0,0},
  { "normw%.f%Q %#,%L%F", 0xf8ff0fff, 0x282f0f88, 8, 0, 0 ,0,0},
  { "normw%.f 0,%C%F", 0xffff703f, 0x2e2f7008, 8, 0, 0 ,0,0},
  { "normw%.f 0,%u%F", 0xffff703f, 0x2e6f7008, 8, 0, 0 ,0,0},
  { "normw%.f%Q 0,%L%F", 0xffff7fff, 0x2e2f7f88, 8, 0, 0 ,0,0},
  { "not%.f %#,%C%F", 0xf8ff003f, 0x202f000a, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "not%.f %#,%u%F", 0xf8ff003f, 0x206f000a, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "not%.f%Q %#,%L%F", 0xf8ff0fff, 0x202f0f8a, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "not%.f 0,%C%F", 0xffff703f, 0x262f700a, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "not%.f 0,%u%F", 0xffff703f, 0x266f700a, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "not%.f%Q 0,%L%F", 0xffff7fff, 0x262f7f8a, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "or%.f %A,%B,%C%F", 0xf8ff0000, 0x20050000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "or%.f %A,%B,%u%F", 0xf8ff0000, 0x20450000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "or%.f %#,%B,%K%F", 0xf8ff0000, 0x20850000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "or%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x20050f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "or%.f%Q %A,%L,%C%F", 0xffff7000, 0x26057000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "or%.f%Q %A,%L,%u%F", 0xffff7000, 0x26457000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "or%.f%Q %A,%L,%L%F", 0xffff7fc0, 0x26057f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "or%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x20c50000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "or%.q%.f %#,%C,%B%F", 0xf8ff0020, 0x20c50000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "or%.q%.f %#,%B,%u%F", 0xf8ff0020, 0x20c50020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "or%.q%.f %#,%u,%B%F", 0xf8ff0020, 0x20c50020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "or%.q%.f%Q %#,%B,%L%F", 0xf8ff0fe0, 0x20c50f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "or%.q%.f%Q %#,%L,%B%F", 0xf8ff0fe0, 0x20c50f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "or%.f 0,%B,%C%F", 0xf8ff003f, 0x2005003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "or%.f 0,%B,%u%F", 0xf8ff003f, 0x2045003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "or%.f%Q 0,%B,%L%F", 0xf8ff8fff, 0x20050fbe, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "or%.f%Q 0,%L,%C%F", 0xffff703f, 0x2605703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "or%.f%Q 0,%L,%u%F", 0xffff703f, 0x2645703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "or%.f%Q 0,%L,%K%F", 0xffff7fff, 0x26857000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "or%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x26c57000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "or%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x26c57020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "or%.q%.f%Q 0,%L,%L%F", 0xffff7fff, 0x26c57f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rcmp %B,%C", 0xf8ff803f, 0x200d8000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rcmp %B,%u", 0xf8ff803f, 0x204d8000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rcmp %B,%K", 0xf8ff8000, 0x208d8000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rcmp%Q %B,%L", 0xf8ff8000, 0x200d8f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rcmp%Q %L,%C", 0xfffff03f, 0x260df000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rcmp%Q %L,%u", 0xfffff03f, 0x264df000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rcmp%Q %L,%K", 0xfffff000, 0x268df000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rcmp%.q %B,%C", 0xf8ff8020, 0x20cd8000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rcmp%.q %B,%u", 0xf8ff8020, 0x20cd8020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rcmp%.q%.f %B,%C", 0xf8ff8020, 0x20cd8000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rcmp%.q%.f %B,%u", 0xf8ff8020, 0x20cd8020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rcmp%.q%Q %B,%L", 0xf8ff8fe0, 0x20cd8f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rcmp%.q%Q %L,%C", 0xfffff020, 0x26cdf000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rcmp%.q%Q %L,%u", 0xfffff020, 0x26cdf020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rcmp%.q%Q %L,%L", 0xffffffff, 0x26cdff80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rcmp%.q%.f%Q %B,%L", 0xf8ff8fe0, 0x20cd8f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rcmp%.q%.f%Q %L,%C", 0xfffff020, 0x26cdf000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rcmp%.q%.f%Q %L,%u", 0xfffff020, 0x26cdf020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rcmp%.q%.f%Q %L,%L", 0xffffffff, 0x268df780, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "rlc%.f %#,%C%F", 0xf8ff003f, 0x202f000b, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rlc%.f %#,%u%F", 0xf8ff003f, 0x206f000b, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rlc%.f%Q %#,%L%F", 0xf8ff0fff, 0x202f0f8b, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rlc%.f 0,%C%F", 0xffff703f, 0x262f700b, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rlc%.f 0,%u%F", 0xffff703f, 0x266f700b, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rlc%.f%Q 0,%L%F", 0xffff7fff, 0x262f7f8b, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ror%.f %A,%B,%C%F", 0xf8ff0000, 0x28030000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ror%.f %A,%B,%u%F", 0xf8ff0000, 0x28430000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ror%.f %#,%B,%K%F", 0xf8ff0000, 0x28830000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ror%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x28030f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ror%.f%Q %A,%L,%C%F", 0xffff7000, 0x2e037000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ror%.f%Q %A,%L,%u%F", 0xffff7000, 0x2e437000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ror%.f%Q %A,%L,%L%F", 0xffff7fc0, 0x2e037f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ror%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x28c30000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ror%.q%.f %#,%B,%u%F", 0xf8ff0020, 0x28c30020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ror%.q%.f%Q %#,%B,%L%F", 0xf8ff0fe0, 0x28c30f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ror%.f 0,%B,%C%F", 0xf8ff003f, 0x2803003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ror%.f 0,%B,%u%F", 0xf8ff003f, 0x2843003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ror%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x28030fbe, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ror%.f%Q 0,%L,%C%F", 0xffff703f, 0x2e03703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ror%.f%Q 0,%L,%u%F", 0xffff703f, 0x2e43703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ror%.f%Q 0,%L,%K%F", 0xffff0000, 0x2e837000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ror%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x2ec37000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ror%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x2ec37020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ror%.q%.f%Q 0,%L,%L%F", 0xffff7fff, 0x2ec37f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ror%.f %#,%C%F", 0xf8ff003f, 0x202f0003, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ror%.f %#,%u%F", 0xf8ff003f, 0x206f0003, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ror%.f%Q %#,%L%F", 0xf8ff0fff, 0x202f0f83, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ror%.f 0,%C%F", 0xffff703f, 0x262f7003, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ror%.f 0,%u%F", 0xffff703f, 0x266f7003, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ror%.f%Q 0,%L%F", 0xffff7fff, 0x262f7f83, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rrc%.f %#,%C%F", 0xf8ff003f, 0x202f0004, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rrc%.f %#,%u%F", 0xf8ff003f, 0x206f0004, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rrc%.f%Q %#,%L%F", 0xf8ff0fff, 0x202f0f84, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rrc%.f 0,%C%F", 0xffff703f, 0x262f7004, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rrc%.f 0,%u%F", 0xffff703f, 0x266f7004, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rrc%.f%Q 0,%L%F", 0xffff7fff, 0x262f7f84, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rsub%.f %A,%B,%C%F", 0xf8ff0000, 0x200e0000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rsub%.f %A,%B,%u%F", 0xf8ff0000, 0x204e0000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rsub%.f %#,%B,%K%F", 0xf8ff0000, 0x208e0000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rsub%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x200e0f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rsub%.f%Q %A,%L,%C%F", 0xffff7000, 0x260e7000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rsub%.f%Q %A,%L,%u%F", 0xffff7000, 0x264e7000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rsub%.f%Q %A,%L,%L%F", 0xffff7000, 0x260e7f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rsub%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x20ce0000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rsub%.q%.f %#,%B,%u%F", 0xf8ff0020, 0x20ce0020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rsub%.q%.f%Q %#,%B,%L%F", 0xf8ff0fe0, 0x20ce0f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "rsub%.q%.f %#,%C,%B%F", 0xf8ff0020, 0x20c20000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rsub%.q%.f %#,%u,%B%F", 0xf8ff0020, 0x20c20020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rsub%.q%.f%Q %#,%L,%B%F", 0xf8ff0fe0, 0x20c20f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rsub%.f 0,%B,%C%F", 0xf8ff003f, 0x200e003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rsub%.f 0,%B,%u%F", 0xf8ff003f, 0x204e003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rsub%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x200e0fbe, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rsub%.f%Q 0,%L,%C%F", 0xffff703f, 0x260e703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rsub%.f%Q 0,%L,%u%F", 0xffff703f, 0x264e703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rsub%.f%Q 0,%L,%K%F", 0xffff7000, 0x268e7000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rsub%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x26ce7000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rsub%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x26ce7020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "rsub%.q%.f%Q 0,%L,%L%F", 0xffff7fff, 0x26ce7f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "rtie",0xffffffff,0x242F003F,8,0,0,0,0},

  { "sbc%.f %A,%B,%C%F", 0xf8ff0000, 0x20030000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sbc%.f %A,%B,%u%F", 0xf8ff0000, 0x20430000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sbc%.f %#,%B,%K%F", 0xf8ff0000, 0x20830000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sbc%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x20030f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sbc%.f%Q %A,%L,%C%F", 0xffff7000, 0x26037000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sbc%.f%Q %A,%L,%u%F", 0xffff7000, 0x26437000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sbc%.f%Q %A,%L,%L%F", 0xffff7fc0, 0x26837f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sbc%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x20c30000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sbc%.q%.f %#,%B,%u%F", 0xf8ff0020, 0x20c30020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sbc%.q%.f%Q %#,%B,%L%F", 0xf8ff0fe0, 0x20c30f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sbc%.f 0,%B,%C%F", 0xf8ff003f, 0x2003003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sbc%.f 0,%B,%u%F", 0xf8ff003f, 0x2043003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sbc%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x20030fbe, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sbc%.f%Q 0,%L,%C%F", 0xffff703f, 0x2603703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sbc%.f%Q 0,%L,%u%F", 0xffff703f, 0x2643703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sbc%.f%Q 0,%L,%K%F", 0xffff7000, 0x26837000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sbc%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x26c37000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sbc%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x26c37020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sbc%.q%.f%Q 0,%L,%L%F", 0xffff7fff, 0x26c37f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sexb%.f %#,%C%F", 0xf8ff003f, 0x202f0005, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sexb%.f %#,%u%F", 0xf8ff003f, 0x206f0005, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sexb%.f%Q %#,%L%F", 0xf8ff0fff, 0x202f0f85, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sexb%.f 0,%C%F", 0xffff703f, 0x262f7005, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sexb%.f 0,%u%F", 0xffff703f, 0x266f7005, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sexb%.f%Q 0,%L%F", 0xffff7fff, 0x262f7f85, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sexw%.f %#,%C%F", 0xf8ff003f, 0x202f0006, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sexw%.f %#,%u%F", 0xf8ff003f, 0x206f0006, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sexw%.f%Q %#,%L%F", 0xf8ff0fff, 0x202f0f86, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sexw%.f 0,%C%F", 0xffff703f, 0x262f7006, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sexw%.f 0,%u%F", 0xffff703f, 0x266f7006, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sexw%.f%Q 0,%L%F", 0xffff7fff, 0x262f7f86, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "sleep %u", 0xfffff03f, 0x216f003f, 8, 0, 0,0,0},
  { "sleep %C", 0xfffff03f, 0x212f003f, 2 | 4 | 16, 0, 0 ,0,0},
  { "sleep %u", 0xfffff03f, 0x216f003f, 2 | 4 | 16, 0, 0 ,0,0},
  { "sleep %L", 0xffffffff, 0x212f0fbf, 2 | 4 | 16, 0, 0 ,0,0},
  { "sleep", 0xffffffff, 0x216f003f, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "sr %B,[%C]", 0xf8ff803f, 0x202b0000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sr %B,[%u]", 0xf8ff8000, 0x206b0000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sr %B,[%K]", 0xf8ff8000, 0x20ab0000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sr %B,[%GC]", 0xf8ff8000, 0x20ab0000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sr%Q %B,[%L]", 0xf8ff8fff, 0x202b0f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sr%Q %L,[%C]", 0xfffff03f, 0x262b7000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sr%Q %L,[%u]", 0xfffff000, 0x266b7000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sr%Q %L,[%K]", 0xfffff000, 0x26ab7000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sr%Q %L,[%GC]", 0xfffff000, 0x26ab7000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "st%z%.w%.D %C,[%g]%0", 0xf8ff8001, 0x18000000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "st%z%.w%.D %C,[%g,%[L]%0", 0xf8000001, 0x18000000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "st%z%.w%.D %C,[%g,%o]%0", 0xf8000001, 0x18000000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "st%z%.D%Q %C,[%L,%o]%0", 0xff007001, 0x1e007000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "st%z%.D%Q %C,[%L]%0", 0xfffff001, 0x1e007000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "st%z%.w%.D%Q %L,[%g]%0", 0xf8ff8fc1, 0x18000f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "st%z%.w%.D%Q %L,[%g,%o]%0", 0xf8000fc1, 0x18000f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "st%z%.D%Q %L,[%L,%o]%0", 0xff007fc1, 0x1e007f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "st%z%.D%Q %L,[%L]%0", 0xff007fc1, 0x1e007f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub%.f %A,%B,%C%F", 0xf8ff0000, 0x20020000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub%.f %A,%B,%u%F", 0xf8ff0000, 0x20420000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub%.f %#,%B,%K%F", 0xf8ff0000, 0x20820000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x20020f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub%.f%Q %A,%L,%C%F", 0xffff7000, 0x26027000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub%.f%Q %A,%L,%u%F", 0xffff7000, 0x26427000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub%.f%Q %A,%L,%L%F", 0xffff7000, 0x26027f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x20c20000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub%.q%.f %#,%B,%u%F", 0xf8ff0020, 0x20c20020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub%.q%.f%Q %#,%B,%L%F", 0xf8ff0fe0, 0x20c20f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "sub%.q%.f %#,%C,%B%F", 0xf8ff0020, 0x20ce0000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub%.q%.f %#,%u,%B%F", 0xf8ff0020, 0x20ce0020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub%.q%.f%Q %#,%L,%B%F", 0xf8ff0fe0, 0x20ce0f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub%.f 0,%B,%C%F", 0xf8ff003f, 0x2002003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub%.f 0,%B,%u%F", 0xf8ff003f, 0x2042003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x20020fbe, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub%.f%Q 0,%L,%C%F", 0xffff703f, 0x2602703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub%.f%Q 0,%L,%u%F", 0xffff703f, 0x2642703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub%.f%Q 0,%L,%K%F", 0xffff7fff, 0x26827000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x26c27000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x26c27020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub%.q%.f%Q 0,%L,%L%F", 0xffff7fff, 0x26c27f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "sub1%.f %A,%B,%C%F", 0xf8ff0000, 0x20170000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub1%.f %A,%B,%u%F", 0xf8ff0000, 0x20570000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub1%.f %#,%B,%K%F", 0xf8ff0000, 0x20970000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub1%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x20170f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub1%.f%Q %A,%L,%C%F", 0xffff7000, 0x26177000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub1%.f%Q %A,%L,%u%F", 0xffff7000, 0x26577000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
   { "sub1%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x20d70000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub1%.q%.f %#,%B,%u%F", 0xf8ff0020, 0x20d70020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub1%.q%.f%Q %#,%B,%L%F", 0xf8ff0fe0, 0x20d70f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub1%.f 0,%B,%C%F", 0xf8ff003f, 0x2017003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub1%.f 0,%B,%u%F", 0xf8ff003f, 0x2057003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub1%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x20170fbe, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub1%.f%Q 0,%L,%C%F", 0xffff703f, 0x2617703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub1%.f%Q 0,%L,%u%F", 0xffff703f, 0x2657703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub1%.f%Q 0,%L,%K%F", 0xffff7fff, 0x26977000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub1%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x26d77000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub1%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x26d77020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub1%.q%.f%Q 0,%L,%L%F", 0xffff7fff, 0x26d77f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub2%.f %A,%B,%C%F", 0xf8ff0000, 0x20180000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub2%.f %A,%B,%u%F", 0xf8ff0000, 0x20580000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub2%.f %#,%B,%K%F", 0xf8ff0000, 0x20980000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub2%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x20180f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub2%.f%Q %A,%L,%C%F", 0xffff7000, 0x26187000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub2%.f%Q %A,%L,%u%F", 0xffff7000, 0x26587000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub2%.f%Q %A,%L,%L%F", 0xffff7000, 0x26180000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub2%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x20d80000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub2%.q%.f %#,%B,%u%F", 0xf8ff0020, 0x20d80020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub2%.q%.f%Q %#,%B,%L%F", 0xf8ff0fe0, 0x20d80f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub2%.f 0,%B,%C%F", 0xf8ff003f, 0x2018003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub2%.f 0,%B,%u%F", 0xf8ff003f, 0x2058003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub2%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x20180fbe, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub2%.f%Q 0,%L,%C%F", 0xffff703f, 0x2618703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub2%.f%Q 0,%L,%u%F", 0xffff703f, 0x2658703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub2%.f%Q 0,%L,%K%F", 0xffff7000, 0x26987000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub2%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x26d87000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub2%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x26d87020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub2%.q%.f%Q 0,%L,%L%F", 0xffff7fff, 0x26d87f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub3%.f %A,%B,%C%F", 0xf8ff0000, 0x20190000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub3%.f %A,%B,%u%F", 0xf8ff0000, 0x20590000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub3%.f %#,%B,%K%F", 0xf8ff0000, 0x20990000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub3%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x20190f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub3%.f%Q %A,%L,%C%F", 0xffff7000, 0x26197000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub3%.f%Q %A,%L,%u%F", 0xffff7000, 0x26597000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub3%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x20d90000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub3%.q%.f %#,%B,%u%F", 0xf8ff0020, 0x20d90020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub3%.q%.f%Q %#,%B,%L%F", 0xf8ff0fe0, 0x20d90f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub3%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x20190fbe, (2 | 4 | 16 | 8), 0, 0 ,0 ,0},
  { "sub3%.f%Q 0,%L,%C%F", 0xffff703f, 0x2619703e, (2 | 4 | 16 | 8), 0, 0 ,0 ,0},
  { "sub3%.f%Q 0,%L,%u%F", 0xffff703f, 0x2659703e, (2 | 4 | 16 | 8), 0, 0 ,0 ,0},
  { "sub3%.f%Q 0,%L,%K%F", 0xffff7000, 0x26997000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub3%.f 0,%B,%C%F", 0xf8ff003f, 0x2019003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub3%.f 0,%B,%u%F", 0xf8ff703f, 0x2957703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub3%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x26d97000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub3%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x26d97020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "sub3%.q%.f%Q 0,%L,%L%F", 0xffff7fff, 0x26d97f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "swap%.f %#,%C%F", 0xf8ff003f, 0x282f0000, 8, 0, 0 ,0,0},
  { "swap%.f %#,%u%F", 0xf8ff003f, 0x286f0000, 8, 0, 0 ,0,0},
  { "swap%.f%Q %#,%L%F", 0xf8ff0fff, 0x282f0f80, 8, 0, 0 ,0,0},
  { "swap%.f 0,%C%F", 0xffff703f, 0x2e2f7000, 8, 0, 0 ,0,0},
  { "swap%.f 0,%u%F", 0xffff703f, 0x2e6f7000, 8, 0, 0 ,0,0},
  { "swap%.f%Q 0,%L%F", 0xffff7fff, 0x2e2f7f80, 8, 0, 0 ,0,0},
  { "swi", 0xffffffff, 0x226f003f, (2 | 4 | 16), 0, 0 ,0,0},


  { "sync", 0xffffffff, 0x236f003f,8,0,0,0,0},
  { "trap0", 0xffffffff, 0x226f003f, 8, 0, 0 ,0,0},

  { "tst %B,%C%F", 0xf8ff803f, 0x200b8000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "tst.f %B,%C%F", 0xf8ff803f, 0x200b8000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "tst %B,%u%F", 0xf8ff803f, 0x204b8000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "tst.f %B,%u%F", 0xf8ff803f, 0x204b8000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "tst %B,%K%F", 0xf8ff8000, 0x208b8000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "tst.f %B,%K%F", 0xf8ff8000, 0x208b8000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "tst %B,%L%F", 0xf8ff8fff, 0x200b8f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "tst.f %B,%L%F", 0xf8ff8fff, 0x200b8f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "tst%Q %L,%C", 0xfffff03f, 0x260bf000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "tst.f%Q %L,%C", 0xfffff03f, 0x260bf000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "tst%Q %L,%u", 0xfffff03f, 0x264bf000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "tst.f%Q %L,%u", 0xfffff03f, 0x264bf000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "tst%Q %L,%L", 0xffffffff, 0x260bff80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "tst.f%Q %L,%L", 0xffffffff, 0x260bff80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "tst%.q %B,%C", 0xf8ff8020, 0x20cb8000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "tst%.q.f %B,%C", 0xf8ff8020, 0x20cb8000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "tst%.q %B,%u", 0xf8ff8020, 0x20cb8020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "tst%.q.f %B,%u", 0xf8ff8020, 0x20cb8020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "tst%.q%Q %B,%L", 0xf8ff8fe0, 0x20cb8f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "tst%.q.f%Q %B,%L", 0xf8ff8fe0, 0x20cb8f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "tst%.q%Q %L,%C", 0xfffff020, 0x26cbf000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "tst%.q.f%Q %L,%C", 0xfffff020, 0x26cbf000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "tst%.q%Q %L,%u", 0xfffff020, 0x26cbf020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "tst%.q.f%Q %L,%u", 0xfffff020, 0x26cbf020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "tst%.q%Q %L,%L", 0xffffffe0, 0x26cbff80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "tst%.q.f%Q %L,%L", 0xffffffe0, 0x26cbff80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "xor%.f %A,%B,%C%F", 0xf8ff0000, 0x20070000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "xor%.f %A,%B,%u%F", 0xf8ff0000, 0x20470000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "xor%.f %#,%B,%K%F", 0xf8ff0000, 0x20870000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "xor%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x20070f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "xor%.f%Q %A,%L,%C%F", 0xffff7000, 0x26077000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "xor%.f%Q %A,%L,%u%F", 0xffff7000, 0x26477000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "xor%.f%Q %A,%L,%L%F", 0xffff7fc0, 0x26077f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "xor%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x20c70000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "xor%.q%.f %#,%C,%B%F", 0xf8ff0020, 0x20c70000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "xor%.q%.f %#,%B,%u%F", 0xf8ff0020, 0x20c70020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "xor%.q%.f %#,%u,%B%F", 0xf8ff0020, 0x20c70020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "xor%.q%.f%Q %#,%B,%L%F", 0xf8ff0fe0, 0x20c70f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "xor%.q%.f%Q %#,%L,%B%F", 0xf8ff0fe0, 0x20c70f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "xor%.f 0,%B,%C%F", 0xf8ff003f, 0x2007003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "xor%.f 0,%B,%u%F", 0xf8ff003f, 0x2047003e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "xor%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x20070fbe, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "xor%.f%Q 0,%L,%C%F", 0xffff703f, 0x2607703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "xor%.f%Q 0,%L,%u%F", 0xffff703f, 0x2647703e, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "xor%.f%Q 0,%L,%K%F", 0xffff7000, 0x26877000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "xor%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x26c77000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "xor%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x26c77020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "xor%.q%.f%Q 0,%L,%L%F", 0xffff7fff, 0x26c77f80, (2 | 4 | 16 | 8), 0, 0 ,0,0},




  { "abs_s %b,%c", 0xf81f, 0x7811, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "add_s %a,%b,%c", 0xf818, 0x6018, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "add_s %b,%b,%U", 0xf818, 0x7000, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "add_s %c,%b,%e", 0xf818, 0x6800, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "add_s %b,%b,%j", 0xf880, 0xe000, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "add_s%Q %b,%b,%L", 0xf8ff, 0x70c7, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "add_s %b,%6,%l", 0xf8e0, 0xc080, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "add_s %6,%6,%l", 0xffe0, 0xc0a0, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "add_s %4,%5,%R", 0xfe00, 0xce00, (2 | 4 | 16 | 8), 0, 0 ,0,0},



  { "add1_s %b,%b,%c", 0xf81f, 0x7814, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "add2_s %b,%b,%c", 0xf81f, 0x7815, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "add3_s %b,%b,%c", 0xf81f, 0x7816, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "and_s %b,%b,%c", 0xf81f, 0x7804, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "asl_s %b,%b,%c", 0xf81f, 0x7818, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "asl_s %c,%b,%e", 0xf818, 0x6810, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "asl_s %b,%b,%E", 0xf8e0, 0xb800, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "asl_s %b,%c", 0xf81f, 0x781b, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "asr_s %b,%b,%c", 0xf81f, 0x781a, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "asr_s %c,%b,%e", 0xf818, 0x6818, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "asr_s %b,%b,%E", 0xf8e0, 0xb840, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "asr_s %b,%c", 0xf81f, 0x781c, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "b_s %Z", 0xfe00, 0xf000, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "beq_s %Z", 0xfe00, 0xf200, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "bne_s %Z", 0xfe00, 0xf400, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "bgt_s %s", 0xffc0, 0xf600, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "bge_s %s", 0xffc0, 0xf640, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "blt_s %s", 0xffc0, 0xf680, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "ble_s %s", 0xffc0, 0xf6c0, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "bhi_s %s", 0xffc0, 0xf700, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "bhs_s %s", 0xffc0, 0xf740, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "blo_s %s", 0xffc0, 0xf780, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "bls_s %s", 0xffc0, 0xf7c0, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "bclr_s %b,%b,%E", 0xf8e0, 0xb8a0, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "bic_s %b,%b,%c", 0xf81f, 0x7806, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "bl_s %W", 0xf800, 0xf800, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "bmsk_s %b,%b,%E", 0xf8e0, 0xb8c0, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "breq_s %b,0,%S", 0xf880, 0xe800, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "brne_s %b,0,%S", 0xf880, 0xe880, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "brk_s", 0xffff, 0x7fff, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "bset_s %b,%b,%E", 0xf8e0, 0xb880, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "btst_s %b,%E", 0xf8e0, 0xb8e0, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "cmp_s %b,%U", 0xf818, 0x7010, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "cmp_s %b,%j", 0xf880, 0xe080, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "cmp_s%Q %b,%L", 0xf8ff, 0x70d7, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "extb_s %b,%c", 0xf81f, 0x780f, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "extw_s %b,%c", 0xf81f, 0x7810, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "j_s [%b]", 0xf8ff, 0x7800, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "j_s.nd [%b]", 0xf8ff, 0x7800, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "j_s.d [%b]", 0xf8ff, 0x7820, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "j_s [%9]", 0xffff, 0x7ee0, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "j_s.nd [%9]", 0xffff, 0x7ee0, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "j_s.d [%9]", 0xffff, 0x7fe0, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "jeq_s [%9]", 0xffff, 0x7ce0, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "jne_s [%9]", 0xffff, 0x7de0, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "jl_s [%b]", 0xf8ff, 0x7840, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "jl_s.nd [%b]", 0xf8ff, 0x7840, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "jl_s.d [%b]", 0xf8ff, 0x7860, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "ld_s %a,[%b,%c]", 0xf818, 0x6000, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "ldb_s %a,[%b,%c]", 0xf818, 0x6008, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "ldw_s %a,[%b,%c]", 0xf818, 0x6010, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "ld_s %c,[%b,%l]", 0xf800, 0x8000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ld_s %c,[%b]", 0xf800, 0x8000, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "ldb_s %c,[%b,%E]", 0xf800, 0x8800, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ldb_s %c,[%b]", 0xf800, 0x8800, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "ldw_s %c,[%b,%k]", 0xf800, 0x9000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ldw_s %c,[%b]", 0xf800, 0x9000, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "ldw_s.x %c,[%b,%k]", 0xf800, 0x9800, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ldw_s.x %c,[%b]", 0xf800, 0x9800, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "ld_s %b,[%6,%l]", 0xf8e0, 0xc000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ld_s %b,[%6]", 0xf8e0, 0xc000, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "ldb_s %b,[%6,%l]", 0xf8e0, 0xc020, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ldb_s %b,[%6]", 0xf8e0, 0xc020, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "ld_s %4,[%5,%[L]", 0xfe00, 0xc800, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ld_s %4,[%5,%R]", 0xfe00, 0xc800, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ld_s %4,[%5]", 0xfe00, 0xc800, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "ldb_s %4,[%5,%[L]", 0xfe00, 0xca00, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ldb_s %4,[%5,%M]", 0xfe00, 0xca00, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ldb_s %4,[%5]", 0xfe00, 0xca00, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "ldw_s %4,[%5,%[L]", 0xfe00, 0xcc00, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ldw_s %4,[%5,%O]", 0xfe00, 0xcc00, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ldw_s %4,[%5]", 0xfe00, 0xcc00, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "ld_s %b,[%!,%m]", 0xf800, 0xd000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "ld_s %b,[%!]", 0xf800, 0xd000, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "lsl_s %b,%b,%c", 0xf81f, 0x7818, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "lsl_s %c,%b,%e", 0xf818, 0x6810, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "lsl_s %b,%b,%E", 0xf8e0, 0xb800, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "lsl_s %b,%c", 0xf81f, 0x781b, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "lsr_s %b,%b,%c", 0xf81f, 0x7819, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "lsr_s %b,%b,%E", 0xf8e0, 0xb820, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "lsr_s %b,%c", 0xf81f, 0x781d, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "mov_s %b,%U", 0xf818, 0x7008, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "mov_s %b,%J", 0xf800, 0xd800, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "mov_s%Q %b,%L", 0xf8ff, 0x70cf, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "mov_s %U,%b", 0xf818, 0x7018, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "mov_s 0,%b", 0xf8ff, 0x70df, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "mul64_s 0,%b,%c", 0xf81f, 0x780c, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "neg_s %b,%c", 0xf81f, 0x7813, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "not_s %b,%c", 0xf81f, 0x7812, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "nop_s", 0xffff, 0x78e0, (2 | 4 | 16 | 8), 0, 0 ,0,0},



  { "unimp_s", 0xffff, 0x79e0, 8, 0, 0 ,0,0},


  { "or_s %b,%b,%c", 0xf81f, 0x7805, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "pop_s %b", 0xf8ff, 0xc0c1, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "pop_s %9", 0xffff, 0xc0d1, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "push_s %b", 0xf8ff, 0xc0e1, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "push_s %9", 0xffff, 0xc0f1, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "sexb_s %b,%c", 0xf81f, 0x780d, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "sexw_s %b,%c", 0xf81f, 0x780e, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "st_s %b,[%6,%l]", 0xf8e0, 0xc040, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "st_s %b,[%6]", 0xf8e0, 0xc040, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "stb_s %b,[%6,%l]", 0xf8e0, 0xc060, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "stb_s %b,[%6]", 0xf8e0, 0xc060, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "st_s %c,[%b,%l]", 0xf800, 0xa000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "st_s %c,[%b]", 0xf800, 0xa000, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "stb_s %c,[%b,%E]", 0xf800, 0xa800, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "stb_s %c,[%b]", 0xf800, 0xa800, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "stw_s %c,[%b,%k]", 0xf800, 0xb000, (2 | 4 | 16 | 8), 0, 0 ,0,0},
  { "stw_s %c,[%b]", 0xf800, 0xb000, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "sub_s %b,%b,%c", 0xf81f, 0x7802, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "sub_s %c,%b,%e", 0xf818, 0x6808, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "sub_s %b,%b,%E", 0xf8e0, 0xb860, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "sub_s %6,%6,%l", 0xffe0, 0xc1a0, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "sub_s.ne %b,%b,%b", 0xf8ff, 0x78c0, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "trap_s %@", 0xffff, 0x781E, 8, 0, 0 ,0,0},


  { "tst_s %b,%c", 0xf81f, 0x780b, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "xor_s %b,%b,%c", 0xf81f, 0x7807, (2 | 4 | 16 | 8), 0, 0 ,0,0},

  { "nop", 0xffffffff, 0x264a7000, (2 | 4 | 16 | 8), 0, 0 ,0,0},


  { "mpyw%.f %A,%B,%C%F", 0xf8ff0000, 0x201e0000, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyw%.f %A,%B,%u%F", 0xf8ff0000, 0x205e0000, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyw%.f %#,%B,%K%F", 0xf8ff0000, 0x209e0000, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyw%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x201e0f80, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyw%.f%Q %A,%L,%C%F", 0xffff7000, 0x261e7000, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyw%.f%Q %A,%L,%u%F", 0xffff7000, 0x265e7000, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyw%.f%Q %A,%L,%L%F", 0xffff7fc0, 0x261e7f80, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyw%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x20de0000, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyw%.q%.f %#,%C,%B%F", 0xf8ff0020, 0x20de0000, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyw%.q%.f %#,%B,%u%F", 0xf8ff00f0, 0x20de0020, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyw%.q%.f %#,%u,%B%F", 0xf8ff00f0, 0x20de0020, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyw%.q%.f%Q %#,%B,%L%F", 0xf8ff0fe0, 0x20de0f80, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyw%.q%.f%Q %#,%L,%B%F", 0xf8ff0fe0, 0x20de0f80, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyw%.f 0,%B,%C%F", 0xf8ff003f, 0x201e003e, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyw%.f 0,%B,%u%F", 0xf8ff003f, 0x205e003e, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyw%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x201e0fbe, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyw%.f%Q 0,%L,%C%F", 0xffff703f, 0x261e703e, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyw%.f%Q 0,%L,%u%F", 0xffff703f, 0x265e703e, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyw%.f%Q 0,%L,%K%F", 0xffff7000, 0x269e7000, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyw%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x26de7000, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyw%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x26de7020, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyw%.q%.f%Q 0,%L,%L%F", 0xffff7fff, 0x26de7f80, (2 | 4 | 16 | 8), 0, 0 ,0, 0},

  { "mpyuw%.f %A,%B,%C%F", 0xf8ff0000, 0x201f0000, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyuw%.f %A,%B,%u%F", 0xf8ff0000, 0x205f0000, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyuw%.f %#,%B,%K%F", 0xf8ff0000, 0x209f0000, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyuw%.f%Q %A,%B,%L%F", 0xf8ff0fc0, 0x201f0f80, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyuw%.f%Q %A,%L,%C%F", 0xffff7000, 0x261f7000, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyuw%.f%Q %A,%L,%u%F", 0xffff7000, 0x265f7000, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyuw%.f%Q %A,%L,%L%F", 0xffff7fc0, 0x261f7f80, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyuw%.q%.f %#,%B,%C%F", 0xf8ff0020, 0x20df0000, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyuw%.q%.f %#,%C,%B%F", 0xf8ff0020, 0x20df0000, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyuw%.q%.f %#,%B,%u%F", 0xf8ff00f0, 0x20df0020, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyuw%.q%.f %#,%u,%B%F", 0xf8ff00f0, 0x20df0020, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyuw%.q%.f%Q %#,%B,%L%F",0xf8ff0fe0, 0x20df0f80, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyuw%.q%.f%Q %#,%L,%B%F",0xf8ff0fe0, 0x20df0f80, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyuw%.f 0,%B,%C%F", 0xf8ff003f, 0x201f003e, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyuw%.f 0,%B,%u%F", 0xf8ff003f, 0x205f003e, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyuw%.f%Q 0,%B,%L%F", 0xf8ff0fff, 0x201f0fbe, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyuw%.f%Q 0,%L,%C%F", 0xffff703f, 0x261f703e, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyuw%.f%Q 0,%L,%u%F", 0xffff703f, 0x265f703e, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyuw%.f%Q 0,%L,%K%F", 0xffff7000, 0x269f7000, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyuw%.q%.f%Q 0,%L,%C%F", 0xffff7020, 0x26df7000, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyuw%.q%.f%Q 0,%L,%u%F", 0xffff7020, 0x26df7020, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
  { "mpyuw%.q%.f%Q 0,%L,%L%F", 0xffff7fff, 0x26df7f80, (2 | 4 | 16 | 8), 0, 0 ,0, 0},
};




static const struct arc_operand_value arc_reg_names_a4[] =
{



  { "r0", 0, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r1", 1, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r2", 2, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r3", 3, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r4", 4, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r5", 5, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r6", 6, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r7", 7, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r8", 8, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r9", 9, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r10", 10, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r11", 11, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r12", 12, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r13", 13, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r14", 14, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r15", 15, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r16", 16, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r17", 17, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r18", 18, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r19", 19, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r20", 20, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r21", 21, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r22", 22, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r23", 23, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r24", 24, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r25", 25, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r26", 26, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r27", 27, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r28", 28, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r29", 29, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r30", 30, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r31", 31, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r60", 60, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "fp", 27, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "sp", 28, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "ilink1", 29, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "ilink2", 30, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "blink", 31, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "lp_count", 60, (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },


  { "status", 0x00, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },
  { "semaphore", 0x01, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "lp_start", 0x02, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "lp_end", 0x03, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "identity", 0x04, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },
  { "debug", 0x05, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },

  { "ivic", 0x10, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x02 },
  { "ch_mode_ctl", 0x11, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "lockline", 0x13, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "code_ram", 0x14, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "tag_addr_mask", 0x15, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "tag_data_mask", 0x16, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "line_length_mask", 0x17, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "local_ram", 0x18, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "unlockline", 0x19, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "sram_seq", 0x20, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "timer", 0x21, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "tcontrol", 0x22, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "hint", 0x23, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x02 },
  { "pcport", 0x24, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x02 },
  { "sp1_ctrl", 0x30, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "sp1_val", 0x31, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "sp2_ctrl", 0x32, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "sp2_val", 0x33, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "sp3_ctrl", 0x34, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "sp3_val", 0x35, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "burst_size", 0x38, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "scratch_a", 0x39, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "load_a", 0x3A, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "store_a", 0x3B, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "bm_status", 0x3C, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },
  { "xtp_newval", 0x40, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "macmode", 0x41, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "lsp_newval", 0x42, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "status32", 0xa, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },
  { "status32_l1", 0xb, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "status32_l2", 0xc, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "int_vector_base",0x25, ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }
};



static const struct arc_operand_value arc_reg_names_a500600[] =
{



  { "r0", 0, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r1", 1, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r2", 2, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r3", 3, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r4", 4, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r5", 5, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r6", 6, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r7", 7, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r8", 8, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r9", 9, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r10", 10, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r11", 11, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r12", 12, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r13", 13, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r14", 14, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r15", 15, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r16", 16, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r17", 17, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r18", 18, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r19", 19, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r20", 20, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r21", 21, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r22", 22, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r23", 23, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r24", 24, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r25", 25, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r26", 26, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r27", 27, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r28", 28, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r29", 29, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r30", 30, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r31", 31, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "gp", 26, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "fp", 27, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "sp", 28, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "ilink1", 29, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "ilink2", 30, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "blink", 31, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "lp_count", 60, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r60", 60, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "pcl", 63, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },
  { "r63", 63, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },



  { "r0", 0, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x8 }, { "r1", 1, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x8 },
  { "r2", 2, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x8 }, { "r3", 3, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x8 },
  { "r12", 4, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x8 }, { "r13", 5, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x8 },
  { "r14", 6, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x8 }, { "r15", 7, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x8 },


  { "status", 0x00, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },
  { "semaphore", 0x01, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "lp_start", 0x02, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "lp_end", 0x03, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "identity", 0x04, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },
  { "debug", 0x05, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },
  { "pc", 0x06, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },
  { "status32", 0xa, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },
  { "status32_l1", 0xb, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "status32_l2", 0xc, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "int_vector_base",0x25, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },

  { "multiply_build", 0x7b, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },
  { "swap_build", 0x7c, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },
  { "norm_build", 0x7d, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },
  { "barrel_build", 0x7f, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },
};



static const struct arc_operand_value arc_reg_names_a700[] =
{



  { "r0", 0, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r1", 1, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r2", 2, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r3", 3, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r4", 4, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r5", 5, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r6", 6, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r7", 7, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r8", 8, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r9", 9, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r10", 10, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r11", 11, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r12", 12, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r13", 13, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r14", 14, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r15", 15, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r16", 16, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r17", 17, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r18", 18, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r19", 19, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r20", 20, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r21", 21, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r22", 22, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r23", 23, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r24", 24, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r25", 25, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r26", 26, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r27", 27, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r28", 28, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r29", 29, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r30", 30, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "r31", 31, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "gp", 26, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "fp", 27, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "sp", 28, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "ilink1", 29, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "ilink2", 30, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "blink", 31, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "lp_count", 60, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }, { "r60", 60, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "pcl", 63, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },
  { "r63", 63, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },



  { "r0", 0, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x8 }, { "r1", 1, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x8 },
  { "r2", 2, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x8 }, { "r3", 3, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x8 },
  { "r12", 4, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x8 }, { "r13", 5, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x8 },
  { "r14", 6, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x8 }, { "r15", 7, (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x8 },



  { "status", 0x00, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },
  { "semaphore", 0x01, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "lp_start", 0x02, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "lp_end", 0x03, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "identity", 0x04, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },
  { "debug", 0x05, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },
  { "pc", 0x06, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },
  { "status32", 0xa, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },
  { "status32_l1", 0xb, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "status32_l2", 0xc, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "int_vector_base",0x25, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "aux_irq_lv12" , 0x43, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },



  { "dc_startr", 0x4d, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "dc_endr", 0x4e, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },

  { "tsch", 0x58, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },

  { "multiply_build", 0x7b, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },
  { "swap_build", 0x7c, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },
  { "norm_build", 0x7d, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },
  { "barrel_build", 0x7f, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 },
  { "aux_irq_lev", 0x200,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1),0 },
  { "aux_irq_hint",0x201,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },

  { "eret", 0x400, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "erbta", 0x401, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0},
  { "erstatus", 0x402,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0},
  { "ecr" , 0x403, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 } ,
  { "efa" , 0x404, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 } ,

  { "icause1", 0x40A, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 } ,

  { "icause2", 0x40B, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01 } ,

  { "auxienable",0x40C, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 } ,
  { "auxitrigger",0x40D, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0} ,
  { "xpu" , 0x410, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 } ,
  { "xpk" , 0x411, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 } ,
  { "bta_l1" , 0x413, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0} ,
  { "bta_l2" ,0x414, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 } ,

  { "aux_irq_edge_cancel",0x415,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x02 } ,

  { "aux_irq_pending" , 0x416,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},



  { "dccm_base_build_bcr", 0x61, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},
  { "DCCM_BASE_BUILD_BCR", 0x61, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},

  { "crc_build_bcr", 0x62, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},
  { "CRC_BUILD_BCR", 0x62, ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},

  { "bta_link_build", 0x63,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},
  { "BTA_LINK_BUILD", 0x63,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},

  { "DVBF_BUILD",0x64,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},
  { "dvbf_build",0x64,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},

  { "tel_instr_build",0x65,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},
  { "TEL_INSTR_BUILD",0x65,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},

  { "memsubsys",0x67,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},
  { "MEMSUBSYS",0x67,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},

  {"vecbase_ac_build",0x68,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},
  {"VECBASE_AC_BUILD",0x68,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},

  { "p_base_addr",0x69,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},
  { "P_BASE_ADDR",0x69,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},

  {"mmu_build",0x6F,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},
  {"MMU_BUILD",0x6F,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},

  { "arcangel_build",0x70,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},
  { "ARCANGEL_BUILD",0x70,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},

  {"dcache_build",0x72,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},
  {"DCACHE_BUILD",0x72,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},

  {"madi_build",0x73,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},
  {"MADI_BUILD",0x73,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},

  {"dccm_build",0x74,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},
  {"DCCM_BUILD",0x74,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},

  {"timer_build",0x75,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},
  {"TIMER_BUILD",0x75,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},

  {"ap_build",0x76,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},
  {"AP_BUILD",0x76,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},

  {"icache_build",0x77,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},
  {"ICACHE_BUILD",0x77,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},



  {"iccm_build",0x78,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},
  {"ICCM_BUILD",0x78,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},

  {"dspram_build",0x79,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},
  {"DSPRAM_BUILD",0x79,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},

  {"mac_build",0x7A,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},
  {"MAC_BUILD",0x7A,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},

  {"multiply_build",0x7B,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},
  {"MULTIPLY_BUILD",0x7B,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},


  {"swap_build",0x7C,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},
  {"SWAP_BUILD",0x7C,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},

  {"norm_build",0x7D,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},
  {"NORM_BUILD",0x7D,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},

  {"minmax_build",0x7E,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},
  {"MINMAX_BUILD",0x7E,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},

  {"barrel_build",0x7F,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01},
  {"BARREL_BUILD",0x7F,((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0x01}

};



const struct arc_operand_value *arc_reg_names = arc_reg_names_a4;
int arc_reg_names_count;






static const struct arc_operand_value arc_suffixes_a4[] =
{

  { "", 0, -1, 0 },
  { "al", 0, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "ra", 0, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "eq", 1, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "z", 1, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "ne", 2, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "nz", 2, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "p", 3, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "pl", 3, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "n", 4, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "mi", 4, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "c", 5, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "cs", 5, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "lo", 5, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "nc", 6, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "cc", 6, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "hs", 6, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "v", 7, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "vs", 7, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "nv", 8, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "vc", 8, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "gt", 9, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "ge", 10, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "lt", 11, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "le", 12, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "hi", 13, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "ls", 14, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "pnz", 15, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "f", 1, (((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "nd", 0, ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "d", 1, ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "jd", 2, ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },


  { "b", 1, ((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "b", 1, (((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "b", 1, ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },


  { "w", 2, ((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "w", 2, (((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "w", 2, ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "x", 1, (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "x", 1, ((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "a", 1, (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "a", 1, ((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "a", 1, (((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "cc16", 16, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "16", 16, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "cc17", 17, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "17", 17, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "cc18", 18, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "18", 18, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "cc19", 19, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "19", 19, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "cc20", 20, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "20", 20, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "cc21", 21, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "21", 21, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "cc22", 22, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "22", 22, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "cc23", 23, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "23", 23, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "cc24", 24, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "24", 24, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "cc25", 25, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "25", 25, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "cc26", 26, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "26", 26, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "cc27", 27, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "27", 27, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "cc28", 28, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "28", 28, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "cc29", 29, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "29", 29, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "cc30", 30, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "30", 30, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "cc31", 31, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "31", 31, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "di", 1, ((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "di", 1, (((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "di", 1, ((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
};





static const struct arc_operand_value arc_suffixes_ac[] =
{

  { "", 0, -1, 0 },
  { "al", 0, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "ra", 0, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "eq", 1, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "z", 1, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "ne", 2, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "nz", 2, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "p", 3, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "pl", 3, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "n", 4, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "mi", 4, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "c", 5, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "cs", 5, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "lo", 5, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "nc", 6, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "cc", 6, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "hs", 6, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "v", 7, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "vs", 7, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "nv", 8, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "vc", 8, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "gt", 9, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "ge", 10, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "lt", 11, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "le", 12, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "hi", 13, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "ls", 14, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "pnz", 15, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "ss" , 16, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "sc" , 17, (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "f", 1, ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "nd", 0, ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "nd", 0, (((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "d", 1, ((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "d", 1, (((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "b", 1, ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "b", 1, (((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "b", 1, ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "w", 2, ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "w", 2, (((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "w", 2, ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "x", 1, (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "x", 1, ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "a", 1, (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "a", 1, ((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "a", 1, (((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "aw", 1, (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "aw", 1, ((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "aw", 1, (((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "ab", 2, (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "ab", 2, ((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "ab", 2, (((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "as", 3, (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "as", 3, ((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "as", 3, (((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "as", 3, ((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "di", 1, (((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "di", 1, ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 },
  { "di", 1, (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1), 0 }
};


const struct arc_operand_value *arc_suffixes = arc_suffixes_a4;
int arc_suffixes_count;



static struct arc_opcode *opcode_map[26 + 1];


static struct arc_opcode *icode_map[32];
# 4281 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
int
arc_get_opcode_mach (int bfd_mach, int big_p)
{
  static int mach_type_map[] =
    {
      1,
      2,
      4,
      8,
      16
    };

  return mach_type_map[bfd_mach] | (big_p ? 32 : 0);
}
# 4303 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
void
arc_opcode_init_tables (int flags)
{
  static int init_p = 0;




  if (init_p && cpu_type != flags) {
   init_p = 0;
  }

  cpu_type = flags;






  if (!init_p)
    {
      int i;

      if (arc_mach_a4)
        {

          
# 4329 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
         __builtin___memset_chk (
# 4329 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
         arc_operand_map_a4
# 4329 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
         , 
# 4329 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
         0, sizeof (arc_operand_map_a4)
# 4329 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
         , __builtin_object_size (
# 4329 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
         arc_operand_map_a4
# 4329 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
         , 0))
# 4329 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                                    ;

   for (i = 0; i < (int)(sizeof (arc_operands_a4) / sizeof ((arc_operands_a4)[0])); i++) {
    arc_operand_map_a4[arc_operands_a4[i].fmt] = i;
   }


          arc_operands = arc_operands_a4;
          arc_operand_map = arc_operand_map_a4;
          arc_reg_names = arc_reg_names_a4;
          arc_reg_names_count = (sizeof (arc_reg_names_a4) / sizeof ((arc_reg_names_a4)[0]));
          arc_suffixes = arc_suffixes_a4;
          arc_suffixes_count = (sizeof (arc_suffixes_a4) / sizeof ((arc_suffixes_a4)[0]));
        }
      else
        {

          
# 4346 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
         __builtin___memset_chk (
# 4346 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
         arc_operand_map_ac
# 4346 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
         , 
# 4346 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
         0, sizeof (arc_operand_map_ac)
# 4346 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
         , __builtin_object_size (
# 4346 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
         arc_operand_map_ac
# 4346 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
         , 0))
# 4346 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                                    ;

   for (i = 0; i < (int)(sizeof (arc_operands_ac) / sizeof ((arc_operands_ac)[0])); i++) {
    arc_operand_map_ac[arc_operands_ac[i].fmt] = i;
   }


          arc_operands = arc_operands_ac;
          arc_operand_map = arc_operand_map_ac;






   if (((flags) & (32 - 1)) == 8)
     {
       arc_reg_names = arc_reg_names_a700;
       arc_reg_names_count = (sizeof (arc_reg_names_a700) / sizeof ((arc_reg_names_a700)[0]));
     }
   else
     {
       arc_reg_names = arc_reg_names_a500600;
       arc_reg_names_count = (sizeof (arc_reg_names_a500600) / sizeof ((arc_reg_names_a500600)[0]));
     }
          arc_suffixes = arc_suffixes_ac;
          arc_suffixes_count = (sizeof (arc_suffixes_ac) / sizeof ((arc_suffixes_ac)[0]));
        }

      
# 4375 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
     __builtin___memset_chk (
# 4375 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
     opcode_map
# 4375 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
     , 
# 4375 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
     0, sizeof (opcode_map)
# 4375 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
     , __builtin_object_size (
# 4375 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
     opcode_map
# 4375 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
     , 0))
# 4375 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                ;
      
# 4376 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
     __builtin___memset_chk (
# 4376 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
     icode_map
# 4376 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
     , 
# 4376 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
     0, sizeof (icode_map)
# 4376 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
     , __builtin_object_size (
# 4376 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
     icode_map
# 4376 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
     , 0))
# 4376 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                               ;


      for (i = (sizeof (arc_opcodes) / sizeof ((arc_opcodes)[0])) - 1; i >= 0; --i)
 {
   int opcode_hash = ((arc_opcodes[i].syntax)[0] >= 'a' && (arc_opcodes[i].syntax)[0] <= 'z' ? (arc_opcodes[i].syntax)[0] - 'a' : 26);
   int icode_hash = ((unsigned int) (arc_opcodes[i].value) >> 27);

   arc_opcodes[i].next_asm = opcode_map[opcode_hash];
   opcode_map[opcode_hash] = &arc_opcodes[i];

   arc_opcodes[i].next_dis = icode_map[icode_hash];
   icode_map[icode_hash] = &arc_opcodes[i];
 }

      init_p = 1;
    }
}





int
arc_opcode_supported (const struct arc_opcode *opcode)
{
 if (((opcode->flags) & (32 - 1)) == 0) {
  return 1;
 }
 if (((opcode->flags) & (32 - 1)) & ((cpu_type) & (32 - 1))) {
  return 1;
 }
 return 0;
}





int
arc_opval_supported (const struct arc_operand_value *opval 
# 4416 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                                                          __attribute__ ((__unused__))
# 4416 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                                                          )
{







  return(1);
}




const struct arc_opcode *
arc_opcode_lookup_asm (const char *insn)
{
  return opcode_map[((insn)[0] >= 'a' && (insn)[0] <= 'z' ? (insn)[0] - 'a' : 26)];
}




const struct arc_opcode *
arc_opcode_lookup_dis (unsigned int insn)
{
  return icode_map[((unsigned int) (insn) >> 27)];
}


int
arc_test_wb (void)
{
  return addrwb_p;
}




void
arc_opcode_init_insert (void)
{
  int i;

  for (i = 0; i < 3; i++) {
   ls_operand[i] = OP_NONE;
  }

  flag_p = 0;
  flagshimm_handled_p = 0;
  arc_cond_p = 0;
  addrwb_p = 0;
  shimm_p = 0;
  limm_p = 0;
  jumpflags_p = 0;
  nullify_p = 0;
  nullify = 0;
}





int
arc_opcode_limm_p (long *limmp)
{
 if (limmp) {
  *limmp = limm;
 }
 return limm_p;
}





const struct arc_operand_value *
arc_opcode_lookup_suffix (const struct arc_operand *type, int value)
{
  const struct arc_operand_value *v,*end;
  struct arc_ext_operand_value *ext_oper = arc_ext_operands;
  while (ext_oper)
    {
   if (type == &arc_operands[ext_oper->operand.type] && value == ext_oper->operand.value) {
    return (&ext_oper->operand);
   }
   ext_oper = ext_oper->next;
    }


    for (v = arc_suffixes, end = arc_suffixes + arc_suffixes_count; v < end; ++v) {
     if (type == &arc_operands[v->type] && value == v->value) {
      return v;
     }
    }
    return 0;
}




int arc_insn_is_j(arc_insn);
int ac_lpcc_insn(arc_insn insn);
int ac_add_reg_sdasym_insn(arc_insn);
int ac_get_load_sdasym_insn_type(arc_insn, int);
int ac_get_store_sdasym_insn_type(arc_insn, int);
int arc_insn_not_jl(arc_insn insn);
int arc_insn_is_j(arc_insn insn);
int a4_brk_insn(arc_insn insn);
int ac_brk_s_insn(arc_insn insn);
int ac_branch_or_jump_insn(arc_insn insn, int compact_insn_16);
int ARC700_rtie_insn(arc_insn insn);


int
arc_insn_is_j (arc_insn insn)
{
  return (insn & ((((unsigned) (-1) & 31) << 27))) == (((unsigned) (0x7) & 31) << 27);
}


int
arc_insn_not_jl (arc_insn insn)
{
  return ((insn & ((((unsigned) (-1) & 31) << 27)|(((unsigned) (-1) & 63) << 21)|(((unsigned) (-1) & 63) << 9)|(((unsigned) (-1) & (1)) << (7))|(((unsigned) (-1) & (1)) << (9))))
   != ((((unsigned) (0x7) & 31) << 27) | (((unsigned) (-1) & (1)) << (9))));
}




int
a4_brk_insn(arc_insn insn)

{
  return insn == 0x1ffffe00;
}




int
ac_brk_s_insn(arc_insn insn)
{
  return insn == 0x7fff;
}





int
ac_branch_or_jump_insn(arc_insn insn, int compact_insn_16)
{

  return ((!compact_insn_16 && ((insn & (((unsigned) (-1) & 31) << 27)) == (((unsigned) (0x4) & 31) << 27)) &&
          (((insn >> 18) & 0xf) == 0x8)) ||
   (compact_insn_16 && ((insn & (((unsigned) (-1) & 31) << 27)) == (((unsigned) (0xf) & 31) << 27))) ||
   (!compact_insn_16 && ((insn & (((unsigned) (-1) & 31) << 27)) == (((unsigned) (0x1) & 31) << 27))) ||
   (compact_insn_16 && ((insn & (((unsigned) (-1) & 31) << 27)) == (((unsigned) (0x1f) & 31) << 27))) ||
   (!compact_insn_16 && ((insn & (((unsigned) (-1) & 31) << 27)) == (((unsigned) (0x0) & 31) << 27))) ||
   (compact_insn_16 && ((insn & (((unsigned) (-1) & 31) << 27)) == (((unsigned) (0x1e) & 31) << 27))));
}





int
ac_lpcc_insn(arc_insn insn)
{
    return ( ((insn & 0xfffff000) == 0x20a80000) ||
      ((insn & 0xfffff020) == 0x20a80020));
}



int
ac_add_reg_sdasym_insn (arc_insn insn)
{
  return ((insn & 0xf8ff0fc0) == 0x20000f80);
}



int
ARC700_rtie_insn (arc_insn insn)
{
  return insn == 0x242f003f;
}
# 4624 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
int
ac_get_load_sdasym_insn_type (arc_insn insn, int compact_insn_16)
{
  int load_type = -1;


  if (compact_insn_16)
    {
      switch (insn & 0xfe00)
 {

 case 0xc800:
   load_type = 10;
   break;


 case 0xca00:
   load_type = 11;
   break;


 case 0xcc00:
   load_type = 12;
   break;
 }
    }
  else
    {

      switch (insn & 0xf8000180)
 {

 case 0x10000000:
  if (((insn >> 9) & 3) == 3) {
   load_type = 0;
  } else {
   load_type = 1;
  }
  break;


 case 0x10000100:
  if (((insn >> 9) & 3) == 3) {
   load_type = 2;
  } else {
   load_type = 1;
  }
  break;


 case 0x10000080:
   load_type = 1;
   break;

 }
    }

  return load_type;
}
# 4696 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
int
ac_get_store_sdasym_insn_type (arc_insn insn,
          int compact_insn_16 
# 4698 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
                             __attribute__ ((__unused__))
# 4698 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
                                             )
{
  int store_type = -1;


  switch (insn & 0xf8000007)
    {

    case 0x18000000:
     if (((insn >> 3) & 3) == 3) {
      store_type = 0;
     } else {
      store_type = 1;
     }
     break;


    case 0x18000004:
     if (((insn >> 3) & 3) == 3) {
      store_type = 2;
     } else {
      store_type = 1;
     }
     break;


    case 0x18000002:
      store_type = 1;
      break;

    }

  return store_type;
}




int
ac_constant_operand (const struct arc_operand *op)
{
  switch (op->fmt)
    {
    case '@':

      case 'u':
      case 'K':
      case 'L':
      case 'o':
      case 'e':
      case 'E':
      case 'j':
      case 'J':
      case 'k':
      case 'l':
      case 'm':
      case 'M':
      case 'O':
      case 'R':

      case '?':
      case '\14':
      case '\20':
      case '\21':
      case '\22':
      case '\23':
      case '\24':
      case '\25':

        return 1;
    }
    return 0;
}




int
ARC700_register_simd_operand (char fmt)
{
  switch (fmt)
    {
    case '*':
    case '(':
    case ')':
      return 1;
    case '<':
    case '>':
      return 2;
    case '\13':
    case '{':
    case '}':
      return 3;
    case '\15':
    case '\16':
    case '\17':
      return 4;
    }
  return 0;
}




int
ac_register_operand (const struct arc_operand *op)
{
  switch (op->fmt)
    {
      case 'a':
      case 'b':
      case 'c':
      case 'A':
      case 'B':
      case '#':
      case 'C':
      case 'U':
      case 'g':
      case 'G':
      case 'r':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
      case '!':
        return 1;
    }
    return 0;
}



int
ac_symbol_operand (const struct arc_operand *op)
{
  switch (op->fmt)
    {
      case 'L':
      case 'd':
      case 'h':
      case 'H':
      case 'i':
      case 'I':
      case 'y':
      case 'Y':
      case 's':
      case 'S':
      case 'Z':
      case 'W':
        return 1;
    }
  return 0;
}


int
arc_operand_type (int opertype)
{
  switch (opertype)
    {
    case 0:
      return (arc_mach_a4 ? (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) : (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1));
    case 1:
      return (arc_mach_a4 ? (((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) : (((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1));
    case 2:
      return (arc_mach_a4 ? ((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) : ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1));
    default:
      return 0;
    }
}


struct arc_operand_value *
get_ext_suffix (char *s, char field)
{
  struct arc_ext_operand_value *suffix = arc_ext_operands;
  char ctype = 0;

  switch(field){
  case 'e' :
      ctype = arc_mach_a4 ? ((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) : 0;
      break;
  case 'f' :
      ctype = arc_mach_a4 ? (((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) : ((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
      break;
  case 'j' :
      ctype = arc_mach_a4 ? (((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) : 0;
      break;
  case 'p' :
      ctype = arc_mach_a4 ? 0 : ((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
      break;
  case 'q' :
      ctype = arc_mach_a4 ? (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) : (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
      break;
  case 't' :
      ctype = arc_mach_a4 ? 0 : (((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
      break;
  case 'v' :
      ctype = arc_mach_a4 ? (((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) : ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
      break;
  case 'w' :
      ctype = arc_mach_a4 ? (((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) : (((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
      break;
  case 'x' :
      ctype = arc_mach_a4 ? (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) : (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
      break;
  case 'y' :
      ctype = arc_mach_a4 ? ((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) : 0;
      break;
  case 'z' :
      ctype = arc_mach_a4 ? ((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) : ((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
      break;
  case 'D' :
      ctype = arc_mach_a4 ? ((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) : (((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
      break;
  case 'E' :
      ctype = arc_mach_a4 ? (((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) : 0;
      break;
  case 'P' :
      ctype = arc_mach_a4 ? 0 : (((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
      break;
  case 'T' :
      ctype = arc_mach_a4 ? 0 : ((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
      break;
  case 'V' :
      ctype = arc_mach_a4 ? 0 : (((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
      break;
  case 'W' :
      ctype = arc_mach_a4 ? ((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) : 0;
      break;
  case 'X' :
      ctype = arc_mach_a4 ? ((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) : ((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
      break;
  case 'Z' :
      ctype = arc_mach_a4 ? (((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) : 0;
      break;
  case '&' :
      ctype = arc_mach_a4 ? 0 : ((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
      break;
  default :
      ctype = arc_mach_a4 ? (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) : (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
      break;
      }
      if (ctype == 0) {
       ctype = arc_mach_a4 ? (((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) : (((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
      }
      while (suffix) {
       if ((suffix->operand.type == ctype) && !strcmp (s, suffix->operand.name)) {
        return (&suffix->operand);
       }
       suffix = suffix->next;
  }

  return 
# 4953 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
        ((void *)0)
# 4953 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
            ;
}


int
arc_get_noshortcut_flag (void)
{
  return 0x04;
}


char *
arc_aux_reg_name (int regVal)
{
  int i;

  for (i= arc_reg_names_count ; i > 0 ; i--)
    {
   if ((arc_reg_names[i].type == ((((((((((((((((((((((((((((((((((((((((((((0 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)) && (arc_reg_names[i].value == regVal)) {
    return arc_reg_names[i].name;
   }
    }

  return 
# 4976 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c" 3 4
        ((void *)0)
# 4976 "project/radare2/libr/asm/arch/arc/gnu/arc-opc.c"
            ;
}
