# 0 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
# 23 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/sysdep.h" 1 3 4
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/sysdep.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/ansidecl.h" 1 3 4
# 31 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/sysdep.h" 2 3 4
# 24 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 2
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
# 25 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/nios2.h" 1 3 4
# 26 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/nios2.h" 3 4
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
# 27 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/nios2.h" 2 3 4
# 35 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/nios2.h" 3 4
enum overflow_type
{
  call_target_overflow = 0,
  branch_target_overflow,
  address_offset_overflow,
  signed_immed16_overflow,
  unsigned_immed16_overflow,
  unsigned_immed5_overflow,
  custom_opcode_overflow,
  no_overflow
};
# 78 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/nios2.h" 3 4
struct nios2_opcode
{
  const char *name;
  const char *args;

  const char *args_test;

  unsigned long num_args;

  unsigned long match;
  unsigned long mask;

  unsigned long pinfo;

  enum overflow_type overflow_msg;

};
# 117 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/nios2.h" 3 4
struct nios2_reg
{
  const char *name;
  const int index;
};
# 503 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/nios2.h" 3 4
extern const struct nios2_opcode nios2_builtin_opcodes[];
extern const int bfd_nios2_num_builtin_opcodes;
extern struct nios2_opcode *nios2_opcodes;
extern int bfd_nios2_num_opcodes;


extern const struct nios2_reg nios2_builtin_regs[];
extern struct nios2_reg *nios2_regs;
extern const int nios2_num_builtin_regs;
extern int nios2_num_regs;







extern const struct nios2_opcode *nios2_find_opcode_hash (unsigned long);
# 26 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 2




# 29 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
const struct nios2_reg nios2_builtin_regs[] = {

  {"zero", 0},
  {"at", 1},
  {"r2", 2},
  {"r3", 3},
  {"r4", 4},
  {"r5", 5},
  {"r6", 6},
  {"r7", 7},
  {"r8", 8},
  {"r9", 9},
  {"r10", 10},
  {"r11", 11},
  {"r12", 12},
  {"r13", 13},
  {"r14", 14},
  {"r15", 15},
  {"r16", 16},
  {"r17", 17},
  {"r18", 18},
  {"r19", 19},
  {"r20", 20},
  {"r21", 21},
  {"r22", 22},
  {"r23", 23},
  {"et", 24},
  {"bt", 25},
  {"gp", 26},
  {"sp", 27},
  {"fp", 28},
  {"ea", 29},
  {"ba", 30},
  {"ra", 31},


  {"r0", 0},
  {"r1", 1},
  {"r24", 24},
  {"r25", 25},
  {"r26", 26},
  {"r27", 27},
  {"r28", 28},
  {"r29", 29},
  {"r30", 30},
  {"sstatus", 30},
  {"r31", 31},


  {"status", 0},
  {"estatus", 1},
  {"bstatus", 2},
  {"ienable", 3},
  {"ipending", 4},
  {"cpuid", 5},
  {"ctl6", 6},
  {"exception", 7},
  {"pteaddr", 8},
  {"tlbacc", 9},
  {"tlbmisc", 10},
  {"eccinj", 11},
  {"badaddr", 12},
  {"config", 13},
  {"mpubase", 14},
  {"mpuacc", 15},
  {"ctl16", 16},
  {"ctl17", 17},
  {"ctl18", 18},
  {"ctl19", 19},
  {"ctl20", 20},
  {"ctl21", 21},
  {"ctl22", 22},
  {"ctl23", 23},
  {"ctl24", 24},
  {"ctl25", 25},
  {"ctl26", 26},
  {"ctl27", 27},
  {"ctl28", 28},
  {"ctl29", 29},
  {"ctl30", 30},
  {"ctl31", 31},


  {"ctl0", 0},
  {"ctl1", 1},
  {"ctl2", 2},
  {"ctl3", 3},
  {"ctl4", 4},
  {"ctl5", 5},
  {"ctl7", 7},
  {"ctl8", 8},
  {"ctl9", 9},
  {"ctl10", 10},
  {"ctl11", 11},
  {"ctl12", 12},
  {"ctl13", 13},
  {"ctl14", 14},
  {"ctl15", 15},


  {"c0", 0},
  {"c1", 1},
  {"c2", 2},
  {"c3", 3},
  {"c4", 4},
  {"c5", 5},
  {"c6", 6},
  {"c7", 7},
  {"c8", 8},
  {"c9", 9},
  {"c10", 10},
  {"c11", 11},
  {"c12", 12},
  {"c13", 13},
  {"c14", 14},
  {"c15", 15},
  {"c16", 16},
  {"c17", 17},
  {"c18", 18},
  {"c19", 19},
  {"c20", 20},
  {"c21", 21},
  {"c22", 22},
  {"c23", 23},
  {"c24", 24},
  {"c25", 25},
  {"c26", 26},
  {"c27", 27},
  {"c28", 28},
  {"c29", 29},
  {"c30", 30},
  {"c31", 31},
};



const int nios2_num_builtin_regs = ((sizeof nios2_builtin_regs) / (sizeof (nios2_builtin_regs[0])));



struct nios2_reg *nios2_regs = (struct nios2_reg *) nios2_builtin_regs;
int nios2_num_regs = ((sizeof nios2_builtin_regs) / (sizeof (nios2_builtin_regs[0])));




const struct nios2_opcode nios2_builtin_opcodes[] =
{


  {"add", "d,s,t", "d,s,t,E", 3,
   
# 180 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((49 << 11) | 58)
# 180 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 180 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 11) 
# 180 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             | 
# 180 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                               (0x3f << 0)
# 180 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                          , 0, no_overflow},
  {"addi", "t,s,i", "t,s,i,E", 3,
   
# 182 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  4
# 182 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 182 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 (0x3f << 0)
# 182 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                            , 
# 182 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                              0x00000080
# 182 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                             , signed_immed16_overflow},
  {"subi", "t,s,i", "t,s,i,E", 3,
   
# 184 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  4
# 184 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 184 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 (0x3f << 0)
# 184 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                            , 
# 184 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                              0x80000000
# 184 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                              , signed_immed16_overflow},
  {"and", "d,s,t", "d,s,t,E", 3,
   
# 186 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((14 << 11) | 58)
# 186 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 186 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 11) 
# 186 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             | 
# 186 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                               (0x3f << 0)
# 186 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                          , 0, no_overflow},
  {"andhi", "t,s,u", "t,s,u,E", 3,
   
# 188 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  44
# 188 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                , 
# 188 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                  (0x3f << 0)
# 188 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             , 0, unsigned_immed16_overflow},
  {"andi", "t,s,u", "t,s,u,E", 3,
   
# 190 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  12
# 190 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 190 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 (0x3f << 0)
# 190 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                            , 
# 190 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                              0x00000100
# 190 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                             , unsigned_immed16_overflow},
  {"beq", "s,t,o", "s,t,o,E", 3,
   
# 192 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  38
# 192 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 192 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 0)
# 192 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                           , 
# 192 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                             0x00000020
# 192 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                               , branch_target_overflow},
  {"bge", "s,t,o", "s,t,o,E", 3,
   
# 194 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  14
# 194 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 194 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 0)
# 194 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                           , 
# 194 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                             0x00000020
# 194 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                               , branch_target_overflow},
  {"bgeu", "s,t,o", "s,t,o,E", 3,
   
# 196 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  46
# 196 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 196 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 (0x3f << 0)
# 196 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                            , 
# 196 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                              0x00000020
# 196 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                                , branch_target_overflow},
  {"bgt", "s,t,o", "s,t,o,E", 3,
   
# 198 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  22
# 198 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 198 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 0)
# 198 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                           , 
# 198 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                             0x80000000
# 198 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                             |
# 198 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                              0x00000020
# 198 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                                                ,
   branch_target_overflow},
  {"bgtu", "s,t,o", "s,t,o,E", 3,
   
# 201 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  54
# 201 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 201 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 (0x3f << 0)
# 201 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                            , 
# 201 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                              0x80000000
# 201 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                              |
# 201 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                               0x00000020
# 201 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                                                 ,
   branch_target_overflow},
  {"ble", "s,t,o", "s,t,o,E", 3,
   
# 204 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  14
# 204 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 204 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 0)
# 204 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                           , 
# 204 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                             0x80000000
# 204 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                             |
# 204 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                              0x00000020
# 204 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                                                ,
   branch_target_overflow},
  {"bleu", "s,t,o", "s,t,o,E", 3,
   
# 207 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  46
# 207 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 207 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 (0x3f << 0)
# 207 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                            , 
# 207 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                              0x80000000
# 207 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                              |
# 207 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                               0x00000020
# 207 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                                                 ,
   branch_target_overflow},
  {"blt", "s,t,o", "s,t,o,E", 3,
   
# 210 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  22
# 210 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 210 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 0)
# 210 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                           , 
# 210 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                             0x00000020
# 210 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                               , branch_target_overflow},
  {"bltu", "s,t,o", "s,t,o,E", 3,
   
# 212 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  54
# 212 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 212 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 (0x3f << 0)
# 212 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                            , 
# 212 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                              0x00000020
# 212 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                                , branch_target_overflow},
  {"bne", "s,t,o", "s,t,o,E", 3,
   
# 214 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  30
# 214 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 214 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 0)
# 214 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                           , 
# 214 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                             0x00000020
# 214 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                               , branch_target_overflow},
  {"br", "o", "o,E", 1,
   
# 216 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  6
# 216 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
             , 
# 216 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
               (0x3f << 0)
# 216 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                          , 
# 216 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                            0x00000010
# 216 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                              , branch_target_overflow},
  {"break", "b", "b,E", 1,
   
# 218 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((0x1e << 17) | ((52 << 11) | 58))
# 218 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                , 
# 218 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                  (((0x1f << 27) | (0x1f << 22) | (0x1f << 17) | (0x3f << 11) | (0x3f << 0)) & 0xfffff03f)
# 218 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                               , 0, no_overflow},
  {"bret", "", "E", 0,
   
# 220 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  (0xf0000000 | ((9 << 11) | 58))
# 220 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 220 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 0xffffffff
# 220 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                        , 0, no_overflow},
  {"flushd", "i(s)", "i(s)E", 2,
   
# 222 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  59
# 222 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                 , 
# 222 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                   (0x3f << 0)
# 222 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                              , 0, signed_immed16_overflow},
  {"flushda", "i(s)", "i(s)E", 2,
   
# 224 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  27
# 224 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                  , 
# 224 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                    (0x3f << 0)
# 224 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                               , 0, signed_immed16_overflow},
  {"flushi", "s", "s,E", 1,
   
# 226 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((12 << 11) | 58)
# 226 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                 , 
# 226 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                   (((0x1f << 22) | (0x1f << 17) | (0x3f << 11) | (0x3f << 0)))
# 226 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                 , 0, no_overflow},
  {"flushp", "", "E", 0,
   
# 228 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((4 << 11) | 58)
# 228 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                 , 
# 228 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                   0xffffffff
# 228 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                          , 0, no_overflow},
  {"initd", "i(s)", "i(s)E", 2,
   
# 230 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  51
# 230 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                , 
# 230 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                  (0x3f << 0)
# 230 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             , 0, signed_immed16_overflow},
  {"initda", "i(s)", "i(s)E", 2,
   
# 232 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  19
# 232 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                 , 
# 232 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                   (0x3f << 0)
# 232 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                              , 0, signed_immed16_overflow},
  {"initi", "s", "s,E", 1,
   
# 234 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((41 << 11) | 58)
# 234 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                , 
# 234 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                  (((0x1f << 22) | (0x1f << 17) | (0x3f << 11) | (0x3f << 0)))
# 234 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                               , 0, no_overflow},
  {"call", "m", "m,E", 1,
   
# 236 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  0
# 236 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 236 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 (0x3f << 0)
# 236 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                            , 
# 236 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                              0x00000040
# 236 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                             , call_target_overflow},
  {"callr", "s", "s,E", 1,
   
# 238 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((0x1f << 17) | ((29 << 11) | 58))
# 238 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                , 
# 238 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                  (((0x1f << 22) | (0x1f << 17) | (0x3f << 11) | (0x3f << 0)))
# 238 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                               , 0, no_overflow},
  {"cmpeq", "d,s,t", "d,s,t,E", 3,
   
# 240 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((32 << 11) | 58)
# 240 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                , 
# 240 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                  (0x3f << 11) 
# 240 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                               | 
# 240 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                 (0x3f << 0)
# 240 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                            , 0, no_overflow},
  {"cmpeqi", "t,s,i", "t,s,i,E", 3,
   
# 242 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  32
# 242 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                 , 
# 242 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                   (0x3f << 0)
# 242 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                              , 0, signed_immed16_overflow},
  {"cmpge", "d,s,t", "d,s,t,E", 3,
   
# 244 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((8 << 11) | 58)
# 244 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                , 
# 244 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                  (0x3f << 11) 
# 244 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                               | 
# 244 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                 (0x3f << 0)
# 244 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                            , 0, no_overflow},
  {"cmpgei", "t,s,i", "t,s,i,E", 3,
   
# 246 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  8
# 246 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                 , 
# 246 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                   (0x3f << 0)
# 246 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                              , 0, signed_immed16_overflow},
  {"cmpgeu", "d,s,t", "d,s,t,E", 3,
   
# 248 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((40 << 11) | 58)
# 248 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                 , 
# 248 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                   (0x3f << 11) 
# 248 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                | 
# 248 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                  (0x3f << 0)
# 248 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                             , 0, no_overflow},
  {"cmpgeui", "t,s,u", "t,s,u,E", 3,
   
# 250 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  40
# 250 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                  , 
# 250 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                    (0x3f << 0)
# 250 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                               , 0, unsigned_immed16_overflow},
  {"cmpgt", "d,s,t", "d,s,t,E", 3,
   
# 252 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((16 << 11) | 58)
# 252 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                , 
# 252 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                  (0x3f << 11) 
# 252 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                               | 
# 252 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                 (0x3f << 0)
# 252 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                            , 
# 252 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                              0x80000000
# 252 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                                              , no_overflow},
  {"cmpgti", "t,s,i", "t,s,i,E", 3,
   
# 254 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  8
# 254 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                 , 
# 254 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                   (0x3f << 0)
# 254 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                              , 
# 254 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                0x80000000
# 254 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                                , signed_immed16_overflow},
  {"cmpgtu", "d,s,t", "d,s,t,E", 3,
   
# 256 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((48 << 11) | 58)
# 256 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                 , 
# 256 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                   (0x3f << 11) 
# 256 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                | 
# 256 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                  (0x3f << 0)
# 256 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                             , 
# 256 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                               0x80000000
# 256 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                                               , no_overflow},
  {"cmpgtui", "t,s,u", "t,s,u,E", 3,
   
# 258 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  40
# 258 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                  , 
# 258 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                    (0x3f << 0)
# 258 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                               , 
# 258 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                 0x80000000
# 258 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                                 , unsigned_immed16_overflow},
  {"cmple", "d,s,t", "d,s,t,E", 3,
   
# 260 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((8 << 11) | 58)
# 260 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                , 
# 260 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                  (0x3f << 11) 
# 260 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                               | 
# 260 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                 (0x3f << 0)
# 260 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                            , 
# 260 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                              0x80000000
# 260 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                                              , no_overflow},
  {"cmplei", "t,s,i", "t,s,i,E", 3,
   
# 262 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  16
# 262 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                 , 
# 262 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                   (0x3f << 0)
# 262 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                              , 
# 262 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                0x80000000
# 262 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                                , signed_immed16_overflow},
  {"cmpleu", "d,s,t", "d,s,t,E", 3,
   
# 264 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((40 << 11) | 58)
# 264 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                 , 
# 264 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                   (0x3f << 11) 
# 264 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                | 
# 264 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                  (0x3f << 0)
# 264 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                             , 
# 264 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                               0x80000000
# 264 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                                               , no_overflow},
  {"cmpleui", "t,s,u", "t,s,u,E", 3,
   
# 266 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  48
# 266 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                  , 
# 266 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                    (0x3f << 0)
# 266 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                               , 
# 266 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                 0x80000000
# 266 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                                 , unsigned_immed16_overflow},
  {"cmplt", "d,s,t", "d,s,t,E", 3,
   
# 268 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((16 << 11) | 58)
# 268 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                , 
# 268 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                  (0x3f << 11) 
# 268 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                               | 
# 268 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                 (0x3f << 0)
# 268 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                            , 0, no_overflow},
  {"cmplti", "t,s,i", "t,s,i,E", 3,
   
# 270 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  16
# 270 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                 , 
# 270 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                   (0x3f << 0)
# 270 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                              , 0, signed_immed16_overflow},
  {"cmpltu", "d,s,t", "d,s,t,E", 3,
   
# 272 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((48 << 11) | 58)
# 272 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                 , 
# 272 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                   (0x3f << 11) 
# 272 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                | 
# 272 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                  (0x3f << 0)
# 272 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                             , 0, no_overflow},
  {"cmpltui", "t,s,u", "t,s,u,E", 3,
   
# 274 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  48
# 274 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                  , 
# 274 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                    (0x3f << 0)
# 274 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                               , 0, unsigned_immed16_overflow},
  {"cmpne", "d,s,t", "d,s,t,E", 3,
   
# 276 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((24 << 11) | 58)
# 276 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                , 
# 276 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                  (0x3f << 11) 
# 276 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                               | 
# 276 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                 (0x3f << 0)
# 276 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                            , 0, no_overflow},
  {"cmpnei", "t,s,i", "t,s,i,E", 3,
   
# 278 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  24
# 278 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                 , 
# 278 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                   (0x3f << 0)
# 278 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                              , 0, signed_immed16_overflow},
  {"div", "d,s,t", "d,s,t,E", 3,
   
# 280 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((37 << 11) | 58)
# 280 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 280 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 11) 
# 280 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             | 
# 280 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                               (0x3f << 0)
# 280 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                          , 0, no_overflow},
  {"divu", "d,s,t", "d,s,t,E", 3,
   
# 282 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((36 << 11) | 58)
# 282 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 282 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 (0x3f << 11) 
# 282 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                              | 
# 282 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                (0x3f << 0)
# 282 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                           , 0, no_overflow},
  {"jmp", "s", "s,E", 1,
   
# 284 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((13 << 11) | 58)
# 284 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 284 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (((0x1f << 22) | (0x1f << 17) | (0x3f << 11) | (0x3f << 0)))
# 284 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                           , 0, no_overflow},
  {"jmpi", "m", "m,E", 1,
   
# 286 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  1
# 286 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 286 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 (0x3f << 0)
# 286 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                            , 0, no_overflow},
  {"ldb", "t,i(s)", "t,i(s)E", 3,
   
# 288 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  7
# 288 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 288 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 0)
# 288 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                           , 0, address_offset_overflow},
  {"ldbio", "t,i(s)", "t,i(s)E", 3,
   
# 290 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  39
# 290 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                , 
# 290 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                  (0x3f << 0)
# 290 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             , 0, address_offset_overflow},
  {"ldbu", "t,i(s)", "t,i(s)E", 3,
   
# 292 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  3
# 292 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 292 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 (0x3f << 0)
# 292 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                            , 0, address_offset_overflow},
  {"ldbuio", "t,i(s)", "t,i(s)E", 3,
   
# 294 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  35
# 294 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                 , 
# 294 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                   (0x3f << 0)
# 294 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                              , 0, address_offset_overflow},
  {"ldh", "t,i(s)", "t,i(s)E", 3,
   
# 296 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  15
# 296 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 296 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 0)
# 296 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                           , 0, address_offset_overflow},
  {"ldhio", "t,i(s)", "t,i(s)E", 3,
   
# 298 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  47
# 298 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                , 
# 298 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                  (0x3f << 0)
# 298 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             , 0, address_offset_overflow},
  {"ldhu", "t,i(s)", "t,i(s)E", 3,
   
# 300 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  11
# 300 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 300 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 (0x3f << 0)
# 300 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                            , 0, address_offset_overflow},
  {"ldhuio", "t,i(s)", "t,i(s)E", 3,
   
# 302 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  43
# 302 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                 , 
# 302 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                   (0x3f << 0)
# 302 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                              , 0, address_offset_overflow},
  {"ldl", "t,i(s)", "t,i(s)E", 3,
   
# 304 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  31
# 304 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 304 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 0)
# 304 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                           , 0, address_offset_overflow},
  {"ldw", "t,i(s)", "t,i(s)E", 3,
   
# 306 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  23
# 306 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 306 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 0)
# 306 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                           , 0, address_offset_overflow},
  {"ldwio", "t,i(s)", "t,i(s)E", 3,
   
# 308 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  55
# 308 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                , 
# 308 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                  (0x3f << 0)
# 308 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             , 0, address_offset_overflow},
  {"mov", "d,s", "d,s,E", 2,
   
# 310 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((49 << 11) | 58)
# 310 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 310 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x1f << 22)
# 310 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                           |
# 310 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                            (0x3f << 11)
# 310 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                        |
# 310 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                         (0x3f << 0)
# 310 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                                    , 
# 310 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                                      0x80000001
# 310 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                                                          ,
   no_overflow},
  {"movhi", "t,u", "t,u,E", 2,
   
# 313 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  52
# 313 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 313 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 (0x1f << 27)
# 313 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                            |
# 313 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                             (0x3f << 0)
# 313 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                        , 
# 313 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                          0x80000002
# 313 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                                               ,
   unsigned_immed16_overflow},
  {"movui", "t,u", "t,u,E", 2,
   
# 316 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  20
# 316 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 316 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x1f << 27)
# 316 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                           |
# 316 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                            (0x3f << 0)
# 316 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                       , 
# 316 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                         0x80000002
# 316 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                                              ,
   unsigned_immed16_overflow},
  {"movi", "t,i", "t,i,E", 2,
   
# 319 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  4
# 319 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 319 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 (0x1f << 27)
# 319 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                            |
# 319 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                             (0x3f << 0)
# 319 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                        , 
# 319 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                          0x80000002
# 319 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                                               ,
   signed_immed16_overflow},

  {"movia", "t,o", "t,o,E", 2,
   
# 323 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  52
# 323 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 323 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 (0x3f << 0)
# 323 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                            , 
# 323 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                              0x80000004
# 323 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                                    , no_overflow},
  {"mul", "d,s,t", "d,s,t,E", 3,
   
# 325 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((39 << 11) | 58)
# 325 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 325 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 11) 
# 325 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             | 
# 325 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                               (0x3f << 0)
# 325 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                          , 0, no_overflow},
  {"muli", "t,s,i", "t,s,i,E", 3,
   
# 327 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  36
# 327 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 327 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 (0x3f << 0)
# 327 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                            , 0, signed_immed16_overflow},
  {"mulxss", "d,s,t", "d,s,t,E", 3,
   
# 329 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((31 << 11) | 58)
# 329 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                 , 
# 329 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                   (0x3f << 11) 
# 329 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                | 
# 329 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                  (0x3f << 0)
# 329 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                             , 0, no_overflow},
  {"mulxsu", "d,s,t", "d,s,t,E", 3,
   
# 331 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((23 << 11) | 58)
# 331 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                 , 
# 331 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                   (0x3f << 11) 
# 331 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                | 
# 331 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                  (0x3f << 0)
# 331 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                             , 0, no_overflow},
  {"mulxuu", "d,s,t", "d,s,t,E", 3,
   
# 333 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((7 << 11) | 58)
# 333 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                 , 
# 333 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                   (0x3f << 11) 
# 333 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                | 
# 333 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                  (0x3f << 0)
# 333 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                             , 0, no_overflow},
  {"nextpc", "d", "d,E", 1,
   
# 335 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((28 << 11) | 58)
# 335 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                 , 
# 335 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                   (((0x1f << 27) | (0x1f << 22) | (0x3f << 11) | (0x3f << 0)))
# 335 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                 , 0, no_overflow},
  {"nop", "", "E", 0,
   
# 337 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((49 << 11) | 58)
# 337 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 337 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                0xffffffff
# 337 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                       , 
# 337 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                         0x80000001
# 337 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                             , no_overflow},
  {"nor", "d,s,t", "d,s,t,E", 3,
   
# 339 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((6 << 11) | 58)
# 339 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 339 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 11) 
# 339 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             | 
# 339 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                               (0x3f << 0)
# 339 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                          , 0, no_overflow},
  {"or", "d,s,t", "d,s,t,E", 3,
   
# 341 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((22 << 11) | 58)
# 341 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
             , 
# 341 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
               (0x3f << 11) 
# 341 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                            | 
# 341 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                              (0x3f << 0)
# 341 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                         , 0, no_overflow},
  {"orhi", "t,s,u", "t,s,u,E", 3,
   
# 343 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  52
# 343 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 343 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 (0x3f << 0)
# 343 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                            , 0, unsigned_immed16_overflow},
  {"ori", "t,s,u", "t,s,u,E", 3,
   
# 345 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  20
# 345 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 345 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 0)
# 345 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                           , 
# 345 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                             0x00000200
# 345 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                           , unsigned_immed16_overflow},
  {"rdctl", "d,c", "d,c,E", 2,
   
# 347 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((38 << 11) | 58)
# 347 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                , 
# 347 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                  (((0x1f << 27) | (0x1f << 22) | (0x3f << 11) | (0x3f << 0)))
# 347 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                               , 0, no_overflow},
  {"rdprs", "t,s,i", "t,s,i,E", 3,
   
# 349 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  56
# 349 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                , 
# 349 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                  (0x3f << 0)
# 349 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             , 0, unsigned_immed16_overflow},
  {"ret", "", "E", 0,
   
# 351 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  (0xf8000000 | ((5 << 11) | 58))
# 351 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 351 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                0xffffffff
# 351 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                       , 0, no_overflow},
  {"rol", "d,s,t", "d,s,t,E", 3,
   
# 353 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((3 << 11) | 58)
# 353 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 353 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 11) 
# 353 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             | 
# 353 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                               (0x3f << 0)
# 353 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                          , 0, no_overflow},
  {"roli", "d,s,j", "d,s,j,E", 3,
   
# 355 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((2 << 11) | 58)
# 355 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 355 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 (((0x1f << 22) | (0x3f << 11) | (0x3f << 0)))
# 355 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             , 0, unsigned_immed5_overflow},
  {"ror", "d,s,t", "d,s,t,E", 3,
   
# 357 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((11 << 11) | 58)
# 357 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 357 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 11) 
# 357 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             | 
# 357 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                               (0x3f << 0)
# 357 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                          , 0, no_overflow},
  {"sll", "d,s,t", "d,s,t,E", 3,
   
# 359 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((19 << 11) | 58)
# 359 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 359 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 11) 
# 359 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             | 
# 359 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                               (0x3f << 0)
# 359 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                          , 0, no_overflow},
  {"slli", "d,s,j", "d,s,j,E", 3,
   
# 361 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((18 << 11) | 58)
# 361 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 361 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 (((0x1f << 22) | (0x3f << 11) | (0x3f << 0)))
# 361 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             , 0, unsigned_immed5_overflow},
  {"sra", "d,s,t", "d,s,t,E", 3,
   
# 363 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((59 << 11) | 58)
# 363 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 363 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 11) 
# 363 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             | 
# 363 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                               (0x3f << 0)
# 363 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                          , 0, no_overflow},
  {"srai", "d,s,j", "d,s,j,E", 3,
   
# 365 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((58 << 11) | 58)
# 365 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 365 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 (((0x1f << 22) | (0x3f << 11) | (0x3f << 0)))
# 365 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             , 0, unsigned_immed5_overflow},
  {"srl", "d,s,t", "d,s,t,E", 3,
   
# 367 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((27 << 11) | 58)
# 367 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 367 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 11) 
# 367 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             | 
# 367 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                               (0x3f << 0)
# 367 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                          , 0, no_overflow},
  {"srli", "d,s,j", "d,s,j,E", 3,
   
# 369 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((26 << 11) | 58)
# 369 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 369 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 (((0x1f << 22) | (0x3f << 11) | (0x3f << 0)))
# 369 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             , 0, unsigned_immed5_overflow},
  {"stb", "t,i(s)", "t,i(s)E", 3,
   
# 371 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  5
# 371 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 371 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 0)
# 371 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                           , 0, address_offset_overflow},
  {"stbio", "t,i(s)", "t,i(s)E", 3,
   
# 373 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  37
# 373 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                , 
# 373 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                  (0x3f << 0)
# 373 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             , 0, address_offset_overflow},
  {"stc", "t,i(s)", "t,i(s)E", 3,
   
# 375 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  29
# 375 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 375 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 0)
# 375 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                           , 0, address_offset_overflow},
  {"sth", "t,i(s)", "t,i(s)E", 3,
   
# 377 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  13
# 377 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 377 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 0)
# 377 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                           , 0, address_offset_overflow},
  {"sthio", "t,i(s)", "t,i(s)E", 3,
   
# 379 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  45
# 379 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                , 
# 379 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                  (0x3f << 0)
# 379 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             , 0, address_offset_overflow},
  {"stw", "t,i(s)", "t,i(s)E", 3,
   
# 381 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  21
# 381 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 381 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 0)
# 381 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                           , 0, address_offset_overflow},
  {"stwio", "t,i(s)", "t,i(s)E", 3,
   
# 383 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  53
# 383 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                , 
# 383 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                  (0x3f << 0)
# 383 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             , 0, address_offset_overflow},
  {"sub", "d,s,t", "d,s,t,E", 3,
   
# 385 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((57 << 11) | 58)
# 385 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 385 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 11) 
# 385 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             | 
# 385 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                               (0x3f << 0)
# 385 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                          , 0, no_overflow},
  {"sync", "", "E", 0,
   
# 387 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((54 << 11) | 58)
# 387 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 387 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 (((0x1f << 22) | (0x1f << 17) | (0x3f << 11) | (0x3f << 0)))
# 387 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             , 0, no_overflow},
  {"trap", "b", "b,E", 1,
   
# 389 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((0x1d << 17) | ((45 << 11) | 58))
# 389 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 389 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 (((0x1f << 27) | (0x1f << 22) | (0x1f << 17) | (0x3f << 11) | (0x3f << 0)) & 0xfffff83f)
# 389 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             , 0, no_overflow},
  {"eret", "", "E", 0,
   
# 391 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  (0xef800000 | ((1 << 11) | 58))
# 391 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 391 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 0xffffffff
# 391 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                        , 0, no_overflow},
  {"custom", "l,d,s,t", "l,d,s,t,E", 4,
   
# 393 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  50
# 393 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                 , 
# 393 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                   (0x3f << 0)
# 393 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                              , 0, custom_opcode_overflow},
  {"wrctl", "c,s", "c,s,E", 2,
   
# 395 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((46 << 11) | 58)
# 395 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                , 
# 395 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                  (((0x1f << 22) | (0x1f << 17) | (0x3f << 11) | (0x3f << 0)))
# 395 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                               , 0, no_overflow},
  {"wrprs", "d,s", "d,s,E", 2,
   
# 397 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((20 << 11) | 58)
# 397 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                , 
# 397 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                  (0x1f << 22)
# 397 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             |
# 397 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                              (0x3f << 11)
# 397 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                          |
# 397 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                                           (0x3f << 0)
# 397 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                                      , 0, no_overflow},
  {"xor", "d,s,t", "d,s,t,E", 3,
   
# 399 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  ((30 << 11) | 58)
# 399 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
              , 
# 399 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                (0x3f << 11) 
# 399 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             | 
# 399 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                               (0x3f << 0)
# 399 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                          , 0, no_overflow},
  {"xorhi", "t,s,u", "t,s,u,E", 3,
   
# 401 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  60
# 401 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                , 
# 401 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                  (0x3f << 0)
# 401 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                             , 0, unsigned_immed16_overflow},
  {"xori", "t,s,u", "t,s,u,E", 3,
   
# 403 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
  28
# 403 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
               , 
# 403 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                 (0x3f << 0)
# 403 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                            , 
# 403 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c" 3 4
                              0x00000400
# 403 "project/radare2/libr/asm/arch/nios/gnu/nios2-opc.c"
                                             , unsigned_immed16_overflow}
};



const int bfd_nios2_num_builtin_opcodes = ((sizeof nios2_builtin_opcodes) / (sizeof (nios2_builtin_opcodes[0])));



struct nios2_opcode *nios2_opcodes =
  (struct nios2_opcode *) nios2_builtin_opcodes;
int bfd_nios2_num_opcodes = ((sizeof nios2_builtin_opcodes) / (sizeof (nios2_builtin_opcodes[0])));
