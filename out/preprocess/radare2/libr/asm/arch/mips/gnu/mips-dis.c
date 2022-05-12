# 0 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
# 28 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
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
# 29 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 2
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
# 30 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 2
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
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 3 4
typedef __darwin_wchar_t wchar_t;
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








# 31 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/ansidecl.h" 1 3 4
# 32 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/sysdep.h" 1 3 4
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/sysdep.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/ansidecl.h" 1 3 4
# 31 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/sysdep.h" 2 3 4
# 33 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 1 3 4
# 36 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 3 4
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
# 34 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 1 3 4
# 45 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef long int ptrdiff_t;
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





extern void *malloc (size_t) __attribute__ ((__malloc__));





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
# 35 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/mips.h" 1 3 4
# 35 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/mips.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/reloc-macros.h" 1 3 4
# 36 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/mips.h" 2 3 4



enum elf_mips_reloc_type {
  R_MIPS_NONE = 0,
  R_MIPS_16 = 1,
  R_MIPS_32 = 2,
  R_MIPS_REL32 = 3,
  R_MIPS_26 = 4,
  R_MIPS_HI16 = 5,
  R_MIPS_LO16 = 6,
  R_MIPS_GPREL16 = 7,
  R_MIPS_LITERAL = 8,
  R_MIPS_GOT16 = 9,
  R_MIPS_PC16 = 10,
  R_MIPS_CALL16 = 11,
  R_MIPS_GPREL32 = 12,


  R_MIPS_UNUSED1 = 13,
  R_MIPS_UNUSED2 = 14,
  R_MIPS_UNUSED3 = 15,
  R_MIPS_SHIFT5 = 16,
  R_MIPS_SHIFT6 = 17,
  R_MIPS_64 = 18,
  R_MIPS_GOT_DISP = 19,
  R_MIPS_GOT_PAGE = 20,
  R_MIPS_GOT_OFST = 21,
  R_MIPS_GOT_HI16 = 22,
  R_MIPS_GOT_LO16 = 23,
  R_MIPS_SUB = 24,
  R_MIPS_INSERT_A = 25,
  R_MIPS_INSERT_B = 26,
  R_MIPS_DELETE = 27,
  R_MIPS_HIGHER = 28,
  R_MIPS_HIGHEST = 29,
  R_MIPS_CALL_HI16 = 30,
  R_MIPS_CALL_LO16 = 31,
  R_MIPS_SCN_DISP = 32,
  R_MIPS_REL16 = 33,
  R_MIPS_ADD_IMMEDIATE = 34,
  R_MIPS_PJUMP = 35,
  R_MIPS_RELGOT = 36,
  R_MIPS_JALR = 37,

  R_MIPS_TLS_DTPMOD32 = 38,
  R_MIPS_TLS_DTPREL32 = 39,
  R_MIPS_TLS_DTPMOD64 = 40,
  R_MIPS_TLS_DTPREL64 = 41,
  R_MIPS_TLS_GD = 42,
  R_MIPS_TLS_LDM = 43,
  R_MIPS_TLS_DTPREL_HI16 = 44,
  R_MIPS_TLS_DTPREL_LO16 = 45,
  R_MIPS_TLS_GOTTPREL = 46,
  R_MIPS_TLS_TPREL32 = 47,
  R_MIPS_TLS_TPREL64 = 48,
  R_MIPS_TLS_TPREL_HI16 = 49,
  R_MIPS_TLS_TPREL_LO16 = 50,
  R_MIPS_GLOB_DAT = 51,

  R_MIPS_PC21_S2 = 60,
  R_MIPS_PC26_S2 = 61,
  R_MIPS_PC18_S3 = 62,
  R_MIPS_PC19_S2 = 63,
  R_MIPS_PCHI16 = 64,
  R_MIPS_PCLO16 = 65,
  R_MIPS_max = 66,

  R_MIPS16_min = 100,
  R_MIPS16_26 = 100,
  R_MIPS16_GPREL = 101,
  R_MIPS16_GOT16 = 102,
  R_MIPS16_CALL16 = 103,
  R_MIPS16_HI16 = 104,
  R_MIPS16_LO16 = 105,
  R_MIPS16_TLS_GD = 106,
  R_MIPS16_TLS_LDM = 107,
  R_MIPS16_TLS_DTPREL_HI16 = 108,
  R_MIPS16_TLS_DTPREL_LO16 = 109,
  R_MIPS16_TLS_GOTTPREL = 110,
  R_MIPS16_TLS_TPREL_HI16 = 111,
  R_MIPS16_TLS_TPREL_LO16 = 112,
  R_MIPS16_PC16_S1 = 113,
  R_MIPS16_max = 114,

  R_MIPS_COPY = 126,
  R_MIPS_JUMP_SLOT = 127,


  R_MICROMIPS_min = 130,
  R_MICROMIPS_26_S1 = 133,
  R_MICROMIPS_HI16 = 134,
  R_MICROMIPS_LO16 = 135,
  R_MICROMIPS_GPREL16 = 136,

  R_MICROMIPS_LITERAL = 137,
  R_MICROMIPS_GOT16 = 138,

  R_MICROMIPS_PC7_S1 = 139,
  R_MICROMIPS_PC10_S1 = 140,
  R_MICROMIPS_PC16_S1 = 141,
  R_MICROMIPS_CALL16 = 142,

  R_MICROMIPS_GOT_DISP = 145,
  R_MICROMIPS_GOT_PAGE = 146,
  R_MICROMIPS_GOT_OFST = 147,
  R_MICROMIPS_GOT_HI16 = 148,
  R_MICROMIPS_GOT_LO16 = 149,
  R_MICROMIPS_SUB = 150,
  R_MICROMIPS_HIGHER = 151,
  R_MICROMIPS_HIGHEST = 152,
  R_MICROMIPS_CALL_HI16 = 153,
  R_MICROMIPS_CALL_LO16 = 154,
  R_MICROMIPS_SCN_DISP = 155,
  R_MICROMIPS_JALR = 156,
  R_MICROMIPS_HI0_LO16 = 157,

  R_MICROMIPS_TLS_GD = 162,
  R_MICROMIPS_TLS_LDM = 163,
  R_MICROMIPS_TLS_DTPREL_HI16 = 164,
  R_MICROMIPS_TLS_DTPREL_LO16 = 165,
  R_MICROMIPS_TLS_GOTTPREL = 166,
  R_MICROMIPS_TLS_TPREL_HI16 = 169,
  R_MICROMIPS_TLS_TPREL_LO16 = 170,

  R_MICROMIPS_GPREL7_S2 = 172,
  R_MICROMIPS_PC23_S2 = 173,
  R_MICROMIPS_max = 174,




  R_MIPS_PC32 = 248,
  R_MIPS_EH = 249,

  R_MIPS_GNU_REL16_S2 = 250,

  R_MIPS_GNU_VTINHERIT = 253,
  R_MIPS_GNU_VTENTRY = 254,
R_MIPS_maxext };
# 463 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/mips.h" 3 4
typedef struct
{

  unsigned long l_name;

  unsigned long l_time_stamp;

  unsigned long l_checksum;

  unsigned long l_version;

  unsigned long l_flags;
} Elf32_Lib;


typedef struct
{
  unsigned char l_name[4];
  unsigned char l_time_stamp[4];
  unsigned char l_checksum[4];
  unsigned char l_version[4];
  unsigned char l_flags[4];
} Elf32_External_Lib;
# 511 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/mips.h" 3 4
typedef unsigned long Elf32_Conflict;
typedef unsigned char Elf32_External_Conflict[4];

typedef unsigned long Elf64_Conflict;
typedef unsigned char Elf64_External_Conflict[8];
# 525 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/mips.h" 3 4
typedef union
{
  struct
    {

      unsigned long gt_current_g_value;

      unsigned long gt_unused;
    } gt_header;
  struct
    {

      unsigned long gt_g_value;

      unsigned long gt_bytes;
    } gt_entry;
} Elf32_gptab;



typedef union
{
  struct
    {
      unsigned char gt_current_g_value[4];
      unsigned char gt_unused[4];
    } gt_header;
  struct
    {
      unsigned char gt_g_value[4];
      unsigned char gt_bytes[4];
    } gt_entry;
} Elf32_External_gptab;



typedef struct
{

  uint32_t ri_gprmask;

  uint32_t ri_cprmask[4];

  uint32_t ri_gp_value;
} Elf32_RegInfo;


typedef struct
{
  unsigned char ri_gprmask[4];
  unsigned char ri_cprmask[4][4];
  unsigned char ri_gp_value[4];
} Elf32_External_RegInfo;


extern void bfd_mips_elf32_swap_reginfo_in
  (bfd *, const Elf32_External_RegInfo *, Elf32_RegInfo *);
extern void bfd_mips_elf32_swap_reginfo_out
  (bfd *, const Elf32_RegInfo *, Elf32_External_RegInfo *);
# 900 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/mips.h" 3 4
typedef struct
{

  unsigned char r_offset[8];

  unsigned char r_sym[4];

  unsigned char r_ssym[1];

  unsigned char r_type3[1];

  unsigned char r_type2[1];

  unsigned char r_type[1];
} Elf64_Mips_External_Rel;

typedef struct
{

  bfd_vma r_offset;

  unsigned long r_sym;

  unsigned char r_ssym;

  unsigned char r_type3;

  unsigned char r_type2;

  unsigned char r_type;
} Elf64_Mips_Internal_Rel;



typedef struct
{

  unsigned char r_offset[8];

  unsigned char r_sym[4];

  unsigned char r_ssym[1];

  unsigned char r_type3[1];

  unsigned char r_type2[1];

  unsigned char r_type[1];

  unsigned char r_addend[8];
} Elf64_Mips_External_Rela;

typedef struct
{

  bfd_vma r_offset;

  unsigned long r_sym;

  unsigned char r_ssym;

  unsigned char r_type3;

  unsigned char r_type2;

  unsigned char r_type;

  bfd_signed_vma r_addend;
} Elf64_Mips_Internal_Rela;
# 993 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/mips.h" 3 4
typedef struct
{

  unsigned char kind[1];

  unsigned char size[1];

  unsigned char section[2];

  unsigned char info[4];
} Elf_External_Options;

typedef struct
{

  unsigned char kind;

  unsigned char size;

  uint16_t section;

  uint32_t info;
} Elf_Internal_Options;


extern void bfd_mips_elf_swap_options_in
  (bfd *, const Elf_External_Options *, Elf_Internal_Options *);
extern void bfd_mips_elf_swap_options_out
  (bfd *, const Elf_Internal_Options *, Elf_External_Options *);
# 1063 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/mips.h" 3 4
typedef struct
{

  unsigned char ri_gprmask[4];

  unsigned char ri_pad[4];

  unsigned char ri_cprmask[4][4];

  unsigned char ri_gp_value[8];
} Elf64_External_RegInfo;

typedef struct
{

  uint32_t ri_gprmask;

  uint32_t ri_pad;

  uint32_t ri_cprmask[4];

  uint64_t ri_gp_value;
} Elf64_Internal_RegInfo;



typedef struct
{

  unsigned char version[2];

  unsigned char isa_level[1];

  unsigned char isa_rev[1];

  unsigned char gpr_size[1];

  unsigned char cpr1_size[1];

  unsigned char cpr2_size[1];

  unsigned char fp_abi[1];

  unsigned char isa_ext[4];

  unsigned char ases[4];

  unsigned char flags1[4];
  unsigned char flags2[4];
} Elf_External_ABIFlags_v0;

typedef struct elf_internal_abiflags_v0
{

  unsigned short version;

  unsigned char isa_level;

  unsigned char isa_rev;

  unsigned char gpr_size;

  unsigned char cpr1_size;

  unsigned char cpr2_size;

  unsigned char fp_abi;

  unsigned long isa_ext;

  unsigned long ases;

  unsigned long flags1;
  unsigned long flags2;
} Elf_Internal_ABIFlags_v0;

typedef struct
{


  unsigned char ms_hash_value[4];







  unsigned char ms_info[4];
} Elf32_External_Msym;

typedef struct
{


  unsigned long ms_hash_value;







  unsigned long ms_info;
} Elf32_Internal_Msym;






extern void bfd_mips_elf64_swap_reginfo_in
  (bfd *, const Elf64_External_RegInfo *, Elf64_Internal_RegInfo *);
extern void bfd_mips_elf64_swap_reginfo_out
  (bfd *, const Elf64_Internal_RegInfo *, Elf64_External_RegInfo *);


extern void bfd_mips_elf_swap_abiflags_v0_in
  (bfd *, const Elf_External_ABIFlags_v0 *, Elf_Internal_ABIFlags_v0 *);
extern void bfd_mips_elf_swap_abiflags_v0_out
  (bfd *, const Elf_Internal_ABIFlags_v0 *, Elf_External_ABIFlags_v0 *);
# 1281 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/mips.h" 3 4
extern unsigned int bfd_mips_isa_ext (bfd *);



enum
{



  Tag_GNU_MIPS_ABI_FP = 4,


  Tag_GNU_MIPS_ABI_MSA = 8,
};


enum
{



  Val_GNU_MIPS_ABI_FP_ANY = 0,


  Val_GNU_MIPS_ABI_FP_DOUBLE = 1,


  Val_GNU_MIPS_ABI_FP_SINGLE = 2,


  Val_GNU_MIPS_ABI_FP_SOFT = 3,


  Val_GNU_MIPS_ABI_FP_OLD_64 = 4,


  Val_GNU_MIPS_ABI_FP_XX = 5,


  Val_GNU_MIPS_ABI_FP_64 = 6,


  Val_GNU_MIPS_ABI_FP_64A = 7,



  Val_GNU_MIPS_ABI_FP_NAN2008 = 8,




  Val_GNU_MIPS_ABI_MSA_ANY = 0,


  Val_GNU_MIPS_ABI_MSA_128 = 1,
};
# 36 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opintl.h" 1 3 4
# 37 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 2






# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/mips.h" 1 3 4
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/mips.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 1 3 4
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
# 44 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 2


# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 1 3 4
# 26 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/common.h" 1 3 4
# 27 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/internal.h" 1 3 4
# 44 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/internal.h" 3 4
typedef struct elf_internal_ehdr {
  unsigned char e_ident[16];
  bfd_vma e_entry;
  bfd_size_type e_phoff;
  bfd_size_type e_shoff;
  unsigned long e_version;
  unsigned long e_flags;
  unsigned short e_type;
  unsigned short e_machine;
  unsigned int e_ehsize;
  unsigned int e_phentsize;
  unsigned int e_phnum;
  unsigned int e_shentsize;
  unsigned int e_shnum;
  unsigned int e_shstrndx;
} Elf_Internal_Ehdr;



struct elf_internal_phdr {
  unsigned long p_type;
  unsigned long p_flags;
  bfd_vma p_offset;
  bfd_vma p_vaddr;
  bfd_vma p_paddr;
  bfd_vma p_filesz;
  bfd_vma p_memsz;
  bfd_vma p_align;
};

typedef struct elf_internal_phdr Elf_Internal_Phdr;



typedef struct elf_internal_shdr {
  unsigned int sh_name;
  unsigned int sh_type;
  bfd_vma sh_flags;
  bfd_vma sh_addr;
  bfd_size_type sh_size;
  bfd_size_type sh_entsize;
  unsigned long sh_link;
  unsigned long sh_info;
  file_ptr sh_offset;
  unsigned int sh_addralign;


  asection * bfd_section;
  unsigned char *contents;
} Elf_Internal_Shdr;



struct elf_internal_sym {
  bfd_vma st_value;
  bfd_vma st_size;
  unsigned long st_name;
  unsigned char st_info;
  unsigned char st_other;
  unsigned int st_shndx;
};

typedef struct elf_internal_sym Elf_Internal_Sym;



typedef struct elf_internal_note {
  unsigned long namesz;
  unsigned long descsz;
  unsigned long type;
  char * namedata;
  char * descdata;
  bfd_vma descpos;
} Elf_Internal_Note;



typedef struct elf_internal_rela {
  bfd_vma r_offset;
  bfd_vma r_info;
  bfd_vma r_addend;
} Elf_Internal_Rela;



typedef struct elf_internal_dyn {

  bfd_vma d_tag;
  union {

    bfd_vma d_val;
    bfd_vma d_ptr;
  } d_un;
} Elf_Internal_Dyn;



typedef struct elf_internal_verdef {
  unsigned short vd_version;
  unsigned short vd_flags;
  unsigned short vd_ndx;
  unsigned short vd_cnt;
  unsigned long vd_hash;
  unsigned long vd_aux;
  unsigned long vd_next;



  bfd *vd_bfd;
  const char *vd_nodename;
  struct elf_internal_verdef *vd_nextdef;
  struct elf_internal_verdaux *vd_auxptr;
  unsigned int vd_exp_refno;
} Elf_Internal_Verdef;



typedef struct elf_internal_verdaux {
  unsigned long vda_name;
  unsigned long vda_next;



  const char *vda_nodename;
  struct elf_internal_verdaux *vda_nextptr;
} Elf_Internal_Verdaux;



typedef struct elf_internal_verneed {
  unsigned short vn_version;
  unsigned short vn_cnt;
  unsigned long vn_file;
  unsigned long vn_aux;
  unsigned long vn_next;



  bfd *vn_bfd;
  const char *vn_filename;
  struct elf_internal_vernaux *vn_auxptr;
  struct elf_internal_verneed *vn_nextref;
} Elf_Internal_Verneed;



typedef struct elf_internal_vernaux {
  unsigned long vna_hash;
  unsigned short vna_flags;
  unsigned short vna_other;
  unsigned long vna_name;
  unsigned long vna_next;



  const char *vna_nodename;
  struct elf_internal_vernaux *vna_nextptr;
} Elf_Internal_Vernaux;




typedef struct elf_internal_versym {
  unsigned short vs_vers;
} Elf_Internal_Versym;


typedef struct
{
  unsigned short int si_boundto;
  unsigned short int si_flags;
} Elf_Internal_Syminfo;


typedef struct
{
  bfd_vma a_type;
  bfd_vma a_val;
} Elf_Internal_Auxv;





struct elf_segment_map
{

  struct elf_segment_map *next;

  unsigned long p_type;

  unsigned long p_flags;

  bfd_vma p_paddr;

  bfd_vma p_vaddr_offset;

  bfd_vma p_align;


  unsigned int p_flags_valid : 1;


  unsigned int p_paddr_valid : 1;


  unsigned int p_align_valid : 1;

  unsigned int includes_filehdr : 1;

  unsigned int includes_phdrs : 1;

  unsigned int count;

  asection *sections[1];
};
# 28 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/external.h" 1 3 4
# 40 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/external.h" 3 4
typedef struct {
  unsigned char e_ident[16];
  unsigned char e_type[2];
  unsigned char e_machine[2];
  unsigned char e_version[4];
  unsigned char e_entry[4];
  unsigned char e_phoff[4];
  unsigned char e_shoff[4];
  unsigned char e_flags[4];
  unsigned char e_ehsize[2];
  unsigned char e_phentsize[2];
  unsigned char e_phnum[2];
  unsigned char e_shentsize[2];
  unsigned char e_shnum[2];
  unsigned char e_shstrndx[2];
} Elf32_External_Ehdr;

typedef struct {
  unsigned char e_ident[16];
  unsigned char e_type[2];
  unsigned char e_machine[2];
  unsigned char e_version[4];
  unsigned char e_entry[8];
  unsigned char e_phoff[8];
  unsigned char e_shoff[8];
  unsigned char e_flags[4];
  unsigned char e_ehsize[2];
  unsigned char e_phentsize[2];
  unsigned char e_phnum[2];
  unsigned char e_shentsize[2];
  unsigned char e_shnum[2];
  unsigned char e_shstrndx[2];
} Elf64_External_Ehdr;



typedef struct {
  unsigned char p_type[4];
  unsigned char p_offset[4];
  unsigned char p_vaddr[4];
  unsigned char p_paddr[4];
  unsigned char p_filesz[4];
  unsigned char p_memsz[4];
  unsigned char p_flags[4];
  unsigned char p_align[4];
} Elf32_External_Phdr;

typedef struct {
  unsigned char p_type[4];
  unsigned char p_flags[4];
  unsigned char p_offset[8];
  unsigned char p_vaddr[8];
  unsigned char p_paddr[8];
  unsigned char p_filesz[8];
  unsigned char p_memsz[8];
  unsigned char p_align[8];
} Elf64_External_Phdr;



typedef struct {
  unsigned char sh_name[4];
  unsigned char sh_type[4];
  unsigned char sh_flags[4];
  unsigned char sh_addr[4];
  unsigned char sh_offset[4];
  unsigned char sh_size[4];
  unsigned char sh_link[4];
  unsigned char sh_info[4];
  unsigned char sh_addralign[4];
  unsigned char sh_entsize[4];
} Elf32_External_Shdr;

typedef struct {
  unsigned char sh_name[4];
  unsigned char sh_type[4];
  unsigned char sh_flags[8];
  unsigned char sh_addr[8];
  unsigned char sh_offset[8];
  unsigned char sh_size[8];
  unsigned char sh_link[4];
  unsigned char sh_info[4];
  unsigned char sh_addralign[8];
  unsigned char sh_entsize[8];
} Elf64_External_Shdr;



typedef struct {
  unsigned char st_name[4];
  unsigned char st_value[4];
  unsigned char st_size[4];
  unsigned char st_info[1];
  unsigned char st_other[1];
  unsigned char st_shndx[2];
} Elf32_External_Sym;

typedef struct {
  unsigned char st_name[4];
  unsigned char st_info[1];
  unsigned char st_other[1];
  unsigned char st_shndx[2];
  unsigned char st_value[8];
  unsigned char st_size[8];
} Elf64_External_Sym;

typedef struct {
  unsigned char est_shndx[4];
} Elf_External_Sym_Shndx;



typedef struct {
  unsigned char namesz[4];
  unsigned char descsz[4];
  unsigned char type[4];
  char name[1];
} Elf_External_Note;


typedef struct {
  unsigned char r_offset[4];
  unsigned char r_info[4];
} Elf32_External_Rel;

typedef struct {
  unsigned char r_offset[4];
  unsigned char r_info[4];
  unsigned char r_addend[4];
} Elf32_External_Rela;

typedef struct {
  unsigned char r_offset[8];
  unsigned char r_info[8];
} Elf64_External_Rel;

typedef struct {
  unsigned char r_offset[8];
  unsigned char r_info[8];
  unsigned char r_addend[8];
} Elf64_External_Rela;



typedef struct {
  unsigned char d_tag[4];
  union {
    unsigned char d_val[4];
    unsigned char d_ptr[4];
  } d_un;
} Elf32_External_Dyn;

typedef struct {
  unsigned char d_tag[8];
  union {
    unsigned char d_val[8];
    unsigned char d_ptr[8];
  } d_un;
} Elf64_External_Dyn;







typedef struct {
  unsigned char vd_version[2];
  unsigned char vd_flags[2];
  unsigned char vd_ndx[2];
  unsigned char vd_cnt[2];
  unsigned char vd_hash[4];
  unsigned char vd_aux[4];
  unsigned char vd_next[4];
} Elf_External_Verdef;



typedef struct {
  unsigned char vda_name[4];
  unsigned char vda_next[4];
} Elf_External_Verdaux;



typedef struct {
  unsigned char vn_version[2];
  unsigned char vn_cnt[2];
  unsigned char vn_file[4];
  unsigned char vn_aux[4];
  unsigned char vn_next[4];
} Elf_External_Verneed;



typedef struct {
  unsigned char vna_hash[4];
  unsigned char vna_flags[2];
  unsigned char vna_other[2];
  unsigned char vna_name[4];
  unsigned char vna_next[4];
} Elf_External_Vernaux;




typedef struct {
  unsigned char vs_vers[2];
} __attribute__ ((packed)) Elf_External_Versym;


typedef struct
{
  unsigned char si_boundto[2];
  unsigned char si_flags[2];
} Elf_External_Syminfo;



typedef struct
{
  unsigned char a_type[4];
  unsigned char a_val[4];
} Elf32_External_Auxv;

typedef struct
{
  unsigned char a_type[8];
  unsigned char a_val[8];
} Elf64_External_Auxv;
# 29 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 1 3 4
# 28 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 3 4
enum bfd_link_strip
{
  strip_none,
  strip_debugger,
  strip_some,
  strip_all
};



enum bfd_link_discard
{
  discard_sec_merge,

  discard_none,
  discard_l,
  discard_all
};




enum bfd_link_hash_table_type
  {
    bfd_link_generic_hash_table,
    bfd_link_elf_hash_table
  };




enum bfd_link_hash_type
{
  bfd_link_hash_new,
  bfd_link_hash_undefined,
  bfd_link_hash_undefweak,
  bfd_link_hash_defined,
  bfd_link_hash_defweak,
  bfd_link_hash_common,
  bfd_link_hash_indirect,
  bfd_link_hash_warning
};

enum bfd_link_common_skip_ar_aymbols
{
  bfd_link_common_skip_none,
  bfd_link_common_skip_text,
  bfd_link_common_skip_data,
  bfd_link_common_skip_all
};




struct bfd_link_hash_entry
{

  struct bfd_hash_entry root;


  enum bfd_link_hash_type type;


  union
    {


      struct
 {
# 116 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 3 4
   struct bfd_link_hash_entry *next;
   bfd *abfd;
   bfd *weak;
 } undef;

      struct
 {
   struct bfd_link_hash_entry *next;
   asection *section;
   bfd_vma value;
 } def;

      struct
 {
   struct bfd_link_hash_entry *next;
   struct bfd_link_hash_entry *link;
   const char *warning;
 } i;

      struct
 {
   struct bfd_link_hash_entry *next;
# 147 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 3 4
   struct bfd_link_hash_common_entry
     {
       unsigned int alignment_power;
       asection *section;
     } *p;
   bfd_size_type size;
 } c;
    } u;
};




struct bfd_link_hash_table
{

  struct bfd_hash_table table;




  const bfd_target *creator;


  struct bfd_link_hash_entry *undefs;

  struct bfd_link_hash_entry *undefs_tail;

  enum bfd_link_hash_table_type type;
};




extern struct bfd_link_hash_entry *bfd_link_hash_lookup
  (struct bfd_link_hash_table *, const char *, bfd_boolean create,
   bfd_boolean copy, bfd_boolean follow);





extern struct bfd_link_hash_entry *bfd_wrapped_link_hash_lookup
  (bfd *, struct bfd_link_info *, const char *, bfd_boolean,
   bfd_boolean, bfd_boolean);


extern void bfd_link_hash_traverse
  (struct bfd_link_hash_table *,
    bfd_boolean (*) (struct bfd_link_hash_entry *, void *),
    void *);


extern void bfd_link_add_undef
  (struct bfd_link_hash_table *, struct bfd_link_hash_entry *);


extern void bfd_link_repair_undef_list
  (struct bfd_link_hash_table *table);

struct bfd_sym_chain
{
  struct bfd_sym_chain *next;
  const char *name;
};



enum report_method
{



  RM_NOT_YET_SET = 0,
  RM_IGNORE,
  RM_GENERATE_WARNING,
  RM_GENERATE_ERROR
};




struct bfd_link_info
{

  unsigned int relocatable: 1;



  unsigned int emitrelocations: 1;




  unsigned int task_link: 1;


  unsigned int shared: 1;


  unsigned int symbolic: 1;



  unsigned int export_dynamic: 1;


  unsigned int static_link: 1;





  unsigned int traditional_format: 1;



  unsigned int optimize: 1;


  unsigned int allow_multiple_definition: 1;


  unsigned int allow_undefined_version: 1;



  unsigned int create_default_symver: 1;



  unsigned int default_imported_symver: 1;



  unsigned int keep_memory: 1;



  unsigned int notice_all: 1;



  unsigned int nocopyreloc: 1;


  unsigned int new_dtags: 1;



  unsigned int combreloc: 1;



  unsigned int eh_frame_hdr: 1;


  unsigned int strip_discarded: 1;


  unsigned int pie: 1;


  unsigned int executable : 1;



  unsigned int execstack: 1;



  unsigned int noexecstack: 1;


  unsigned int relro: 1;



  unsigned int execheap: 1;



  unsigned int noexecheap: 1;


  unsigned int warn_shared_textrel: 1;


  unsigned int gc_sections: 1;






  enum report_method unresolved_syms_in_objects;



  enum report_method unresolved_syms_in_shared_libs;


  enum bfd_link_strip strip;


  enum bfd_link_discard discard;



  enum bfd_link_common_skip_ar_aymbols common_skip_ar_aymbols;




  char wrap_char;


  const struct bfd_link_callbacks *callbacks;


  struct bfd_link_hash_table *hash;



  struct bfd_hash_table *keep_hash;




  struct bfd_hash_table *notice_hash;



  struct bfd_hash_table *wrap_hash;



  bfd *input_bfds;






  asection *create_object_symbols_section;



  struct bfd_sym_chain *gc_sym_list;


  void *base_file;



  const char *init_function;



  const char *fini_function;





  int relax_pass;




  int pei386_auto_import;




  int pei386_runtime_pseudo_reloc;


  unsigned int spare_dynamic_tags;


  bfd_vma flags;


  bfd_vma flags_1;


  bfd_vma relro_start, relro_end;
};
# 444 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 3 4
struct bfd_link_callbacks
{




  bfd_boolean (*add_archive_element)
    (struct bfd_link_info *, bfd *abfd, const char *name);






  bfd_boolean (*multiple_definition)
    (struct bfd_link_info *, const char *name,
     bfd *obfd, asection *osec, bfd_vma oval,
     bfd *nbfd, asection *nsec, bfd_vma nval);
# 473 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 3 4
  bfd_boolean (*multiple_common)
    (struct bfd_link_info *, const char *name,
     bfd *obfd, enum bfd_link_hash_type otype, bfd_vma osize,
     bfd *nbfd, enum bfd_link_hash_type ntype, bfd_vma nsize);






  bfd_boolean (*add_to_set)
    (struct bfd_link_info *, struct bfd_link_hash_entry *entry,
     bfd_reloc_code_real_type reloc, bfd *abfd, asection *sec, bfd_vma value);






  bfd_boolean (*constructor)
    (struct bfd_link_info *, bfd_boolean constructor, const char *name,
     bfd *abfd, asection *sec, bfd_vma value);







  bfd_boolean (*warning)
    (struct bfd_link_info *, const char *warning, const char *symbol,
     bfd *abfd, asection *section, bfd_vma address);





  bfd_boolean (*undefined_symbol)
    (struct bfd_link_info *, const char *name, bfd *abfd,
     asection *section, bfd_vma address, bfd_boolean fatal);
# 521 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 3 4
  bfd_boolean (*reloc_overflow)
    (struct bfd_link_info *, struct bfd_link_hash_entry *entry,
     const char *name, const char *reloc_name, bfd_vma addend,
     bfd *abfd, asection *section, bfd_vma address);






  bfd_boolean (*reloc_dangerous)
    (struct bfd_link_info *, const char *message,
     bfd *abfd, asection *section, bfd_vma address);






  bfd_boolean (*unattached_reloc)
    (struct bfd_link_info *, const char *name,
     bfd *abfd, asection *section, bfd_vma address);




  bfd_boolean (*notice)
    (struct bfd_link_info *, const char *name,
     bfd *abfd, asection *section, bfd_vma address);

  void (*einfo)
    (const char *fmt, ...);
};






enum bfd_link_order_type
{
  bfd_undefined_link_order,
  bfd_indirect_link_order,
  bfd_data_link_order,
  bfd_section_reloc_link_order,
  bfd_symbol_reloc_link_order
};




struct bfd_link_order
{

  struct bfd_link_order *next;

  enum bfd_link_order_type type;

  bfd_vma offset;

  bfd_size_type size;

  union
    {
      struct
 {






   asection *section;
 } indirect;
      struct
 {




   unsigned int size;

   bfd_byte *contents;
 } data;
      struct
 {



   struct bfd_link_order_reloc *p;
 } reloc;
    } u;
};
# 627 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 3 4
struct bfd_link_order_reloc
{

  bfd_reloc_code_real_type reloc;

  union
    {



      asection *section;


      const char *name;
    } u;






  bfd_vma addend;
};


extern struct bfd_link_order *bfd_new_link_order (bfd *, asection *);
# 661 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 3 4
struct bfd_elf_version_expr
{

  struct bfd_elf_version_expr *next;

  const char *pattern;

  const char *symbol;

  unsigned int symver : 1;

  unsigned int script : 1;




  unsigned int mask : 3;
};

struct bfd_elf_version_expr_head
{

  struct bfd_elf_version_expr *list;

  void *htab;

  struct bfd_elf_version_expr *remaining;

  unsigned int mask;
};



struct bfd_elf_version_deps
{

  struct bfd_elf_version_deps *next;

  struct bfd_elf_version_tree *version_needed;
};



struct bfd_elf_version_tree
{

  struct bfd_elf_version_tree *next;

  const char *name;

  unsigned int vernum;

  struct bfd_elf_version_expr_head globals;

  struct bfd_elf_version_expr_head locals;

  struct bfd_elf_version_deps *deps;

  unsigned int name_indx;

  int used;

  struct bfd_elf_version_expr *(*match)
    (struct bfd_elf_version_expr_head *head,
     struct bfd_elf_version_expr *prev, const char *sym);
};
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 2 3 4
# 58 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
typedef struct
{

  asymbol symbol;

  Elf_Internal_Sym internal_elf_sym;

  union
    {
      unsigned int hppa_arg_reloc;
      void *mips_extr;
      void *any;
    }
  tc_data;




  unsigned short version;

} elf_symbol_type;

struct elf_strtab_hash;
struct got_entry;
struct plt_entry;



struct elf_link_hash_entry
{
  struct bfd_link_hash_entry root;



  long indx;
# 106 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  long dynindx;
# 117 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  union gotplt_union
    {
      bfd_signed_vma refcount;
      bfd_vma offset;
      struct got_entry *glist;
      struct plt_entry *plist;
    } got;


  union gotplt_union plt;


  bfd_size_type size;


  unsigned int type : 8;


  unsigned int other : 8;


  unsigned int ref_regular : 1;

  unsigned int def_regular : 1;

  unsigned int ref_dynamic : 1;

  unsigned int def_dynamic : 1;

  unsigned int ref_regular_nonweak : 1;

  unsigned int dynamic_adjusted : 1;

  unsigned int needs_copy : 1;

  unsigned int needs_plt : 1;

  unsigned int non_elf : 1;

  unsigned int hidden : 1;

  unsigned int forced_local : 1;

  unsigned int dynamic : 1;

  unsigned int mark : 1;


  unsigned int non_got_ref : 1;



  unsigned int dynamic_def : 1;

  unsigned int dynamic_weak : 1;


  unsigned int pointer_equality_needed : 1;


  unsigned long dynstr_index;

  union
  {



    struct elf_link_hash_entry *weakdef;




    unsigned long elf_hash_value;
  } u;


  union
  {



    Elf_Internal_Verdef *verdef;



    struct bfd_elf_version_tree *vertree;
  } verinfo;

  struct
  {




    size_t size;
    bfd_boolean *used;


    struct elf_link_hash_entry *parent;
  } *vtable;
};
# 241 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
struct elf_link_local_dynamic_entry
{
  struct elf_link_local_dynamic_entry *next;


  bfd *input_bfd;


  long input_indx;


  long dynindx;


  Elf_Internal_Sym isym;
};

struct elf_link_loaded_list
{
  struct elf_link_loaded_list *next;
  bfd *abfd;
};


struct eh_cie_fde
{

  struct eh_cie_fde *cie_inf;
  unsigned int size;
  unsigned int offset;
  unsigned int new_offset;
  unsigned char fde_encoding;
  unsigned char lsda_encoding;
  unsigned char lsda_offset;
  unsigned int cie : 1;
  unsigned int removed : 1;
  unsigned int add_augmentation_size : 1;
  unsigned int add_fde_encoding : 1;
  unsigned int make_relative : 1;
  unsigned int make_lsda_relative : 1;
  unsigned int need_lsda_relative : 1;
  unsigned int per_encoding_relative : 1;
  unsigned int *set_loc;
};

struct eh_frame_sec_info
{
  unsigned int count;
  struct eh_cie_fde entry[1];
};

struct eh_frame_array_ent
{
  bfd_vma initial_loc;
  bfd_vma fde;
};

struct htab;

struct eh_frame_hdr_info
{
  struct htab *cies;
  asection *hdr_sec;
  unsigned int fde_count, array_count;
  struct eh_frame_array_ent *array;



  bfd_boolean table;
  bfd_boolean offsets_adjusted;
};



struct elf_link_hash_table
{
  struct bfd_link_hash_table root;



  bfd_boolean dynamic_sections_created;



  bfd_boolean is_relocatable_executable;




  bfd *dynobj;





  union gotplt_union init_got_refcount;
  union gotplt_union init_plt_refcount;



  union gotplt_union init_got_offset;
  union gotplt_union init_plt_offset;



  bfd_size_type dynsymcount;



  struct elf_strtab_hash *dynstr;



  bfd_size_type bucketcount;



  struct bfd_link_needed_list *needed;




  asection *text_index_section;
  asection *data_index_section;


  struct elf_link_hash_entry *hgot;


  struct elf_link_hash_entry *hplt;


  void *merge_info;


  struct stab_info stab_info;


  struct eh_frame_hdr_info eh_info;


  struct elf_link_local_dynamic_entry *dynlocal;



  struct bfd_link_needed_list *runpath;


  asection *tls_sec;
  bfd_size_type tls_size;


  struct elf_link_loaded_list *loaded;
};
# 422 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
struct sym_sec_cache
{
  bfd *abfd;
  unsigned long indx[32];
  unsigned int shndx[32];
};



struct elf_size_info {
  unsigned char sizeof_ehdr, sizeof_phdr, sizeof_shdr;
  unsigned char sizeof_rel, sizeof_rela, sizeof_sym, sizeof_dyn, sizeof_note;


  unsigned char sizeof_hash_entry;



  unsigned char int_rels_per_ext_rel;




  unsigned char arch_size, log_file_align;
  unsigned char elfclass, ev_current;
  int (*write_out_phdrs)
    (bfd *, const Elf_Internal_Phdr *, unsigned int);
  bfd_boolean
    (*write_shdrs_and_ehdr) (bfd *);
  bfd_boolean (*checksum_contents)
    (bfd * , void (*) (const void *, size_t, void *), void *);
  void (*write_relocs)
    (bfd *, asection *, void *);
  bfd_boolean (*swap_symbol_in)
    (bfd *, const void *, const void *, Elf_Internal_Sym *);
  void (*swap_symbol_out)
    (bfd *, const Elf_Internal_Sym *, void *, void *);
  bfd_boolean (*slurp_reloc_table)
    (bfd *, asection *, asymbol **, bfd_boolean);
  long (*slurp_symbol_table)
    (bfd *, asymbol **, bfd_boolean);
  void (*swap_dyn_in)
    (bfd *, const void *, Elf_Internal_Dyn *);
  void (*swap_dyn_out)
    (bfd *, const Elf_Internal_Dyn *, void *);




  void (*swap_reloc_in)
    (bfd *, const bfd_byte *, Elf_Internal_Rela *);


  void (*swap_reloc_out)
    (bfd *, const Elf_Internal_Rela *, bfd_byte *);




  void (*swap_reloca_in)
    (bfd *, const bfd_byte *, Elf_Internal_Rela *);


  void (*swap_reloca_out)
    (bfd *, const Elf_Internal_Rela *, bfd_byte *);
};







enum elf_reloc_type_class {
  reloc_class_normal,
  reloc_class_relative,
  reloc_class_plt,
  reloc_class_copy
};

struct elf_reloc_cookie
{
  Elf_Internal_Rela *rels, *rel, *relend;
  Elf_Internal_Sym *locsyms;
  bfd *abfd;
  size_t locsymcount;
  size_t extsymoff;
  struct elf_link_hash_entry **sym_hashes;
  int r_sym_shift;
  bfd_boolean bad_symtab;
};



typedef enum {
  ict_none,
  ict_irix5,
  ict_irix6
} irix_compat_t;


struct bfd_elf_special_section
{
  const char *prefix;
  int prefix_length;






  int suffix_length;
  int type;
  int attr;
};

enum action_discarded
  {
    COMPLAIN = 1,
    PRETEND = 2
  };

typedef asection * (*elf_gc_mark_hook_fn)
  (asection *, struct bfd_link_info *, Elf_Internal_Rela *,
   struct elf_link_hash_entry *, Elf_Internal_Sym *);

struct elf_backend_data
{

  enum bfd_architecture arch;


  int elf_machine_code;


  int elf_osabi;


  bfd_vma maxpagesize;




  bfd_vma minpagesize;


  bfd_vma commonpagesize;


  flagword dynamic_sec_flags;



  void (*elf_info_to_howto)
    (bfd *, arelent *, Elf_Internal_Rela *);



  void (*elf_info_to_howto_rel)
    (bfd *, arelent *, Elf_Internal_Rela *);






  bfd_boolean (*elf_backend_sym_is_global)
    (bfd *, asymbol *);
# 600 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  bfd_boolean (*elf_backend_object_p)
    (bfd *);




  void (*elf_backend_symbol_processing)
    (bfd *, asymbol *);



  bfd_boolean (*elf_backend_symbol_table_processing)
    (bfd *, elf_symbol_type *, unsigned int);



  int (*elf_backend_get_symbol_type)
    (Elf_Internal_Sym *, int);



  struct elf_link_hash_entry * (*elf_backend_archive_symbol_lookup)
    (bfd *, struct bfd_link_info *, const char *);



  bfd_boolean (*elf_backend_name_local_section_symbols)
    (bfd *);





  bfd_boolean (*elf_backend_section_processing)
    (bfd *, Elf_Internal_Shdr *);



  bfd_boolean (*elf_backend_section_from_shdr)
    (bfd *, Elf_Internal_Shdr *, const char *, int);



  bfd_boolean (*elf_backend_section_flags)
    (flagword *, const Elf_Internal_Shdr *);



  const struct bfd_elf_special_section * (*get_sec_type_attr)
    (bfd *, asection *);



  bfd_boolean (*elf_backend_section_from_phdr)
    (bfd *, Elf_Internal_Phdr *, int, const char *);




  bfd_boolean (*elf_backend_fake_sections)
    (bfd *, Elf_Internal_Shdr *, asection *);





  bfd_boolean (*elf_backend_section_from_bfd_section)
    (bfd *, asection *, int *retval);
# 677 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  bfd_boolean (*elf_add_symbol_hook)
    (bfd *abfd, struct bfd_link_info *info, Elf_Internal_Sym *,
     const char **name, flagword *flags, asection **sec, bfd_vma *value);



  bfd_boolean (*elf_backend_link_output_symbol_hook)
    (struct bfd_link_info *info, const char *, Elf_Internal_Sym *,
     asection *, struct elf_link_hash_entry *);
# 695 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  bfd_boolean (*elf_backend_create_dynamic_sections)
    (bfd *abfd, struct bfd_link_info *info);



  bfd_boolean (*elf_backend_omit_section_dynsym)
    (bfd *output_bfd, struct bfd_link_info *info, asection *osec);
# 713 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  bfd_boolean (*check_relocs)
    (bfd *abfd, struct bfd_link_info *info, asection *o,
     const Elf_Internal_Rela *relocs);





  bfd_boolean (*check_directives)
    (bfd *abfd, struct bfd_link_info *info);





  bfd_boolean (*as_needed_cleanup)
    (bfd *abfd, struct bfd_link_info *info);
# 743 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  bfd_boolean (*elf_backend_adjust_dynamic_symbol)
    (struct bfd_link_info *info, struct elf_link_hash_entry *h);





  bfd_boolean (*elf_backend_always_size_sections)
    (bfd *output_bfd, struct bfd_link_info *info);
# 763 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  bfd_boolean (*elf_backend_size_dynamic_sections)
    (bfd *output_bfd, struct bfd_link_info *info);



  void (*elf_backend_init_index_section)
    (bfd *output_bfd, struct bfd_link_info *info);
# 802 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  int (*elf_backend_relocate_section)
    (bfd *output_bfd, struct bfd_link_info *info, bfd *input_bfd,
     asection *input_section, bfd_byte *contents, Elf_Internal_Rela *relocs,
     Elf_Internal_Sym *local_syms, asection **local_sections);
# 814 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  bfd_boolean (*elf_backend_finish_dynamic_symbol)
    (bfd *output_bfd, struct bfd_link_info *info,
     struct elf_link_hash_entry *h, Elf_Internal_Sym *sym);





  bfd_boolean (*elf_backend_finish_dynamic_sections)
    (bfd *output_bfd, struct bfd_link_info *info);



  void (*elf_backend_begin_write_processing)
    (bfd *, struct bfd_link_info *);




  void (*elf_backend_final_write_processing)
    (bfd *, bfd_boolean linker);




  int (*elf_backend_additional_program_headers)
    (bfd *, struct bfd_link_info *);



  bfd_boolean (*elf_backend_modify_segment_map)
    (bfd *, struct bfd_link_info *);



  bfd_boolean (*elf_backend_modify_program_headers)
    (bfd *, struct bfd_link_info *);



  bfd_boolean (*gc_mark_dynamic_ref)
    (struct elf_link_hash_entry *h, void *inf);



  elf_gc_mark_hook_fn gc_mark_hook;



  bfd_boolean (*gc_mark_extra_sections)
    (struct bfd_link_info *info, elf_gc_mark_hook_fn gc_mark_hook);




  bfd_boolean (*gc_sweep_hook)
    (bfd *abfd, struct bfd_link_info *info, asection *o,
     const Elf_Internal_Rela *relocs);




  void (*elf_backend_post_process_headers)
    (bfd *, struct bfd_link_info *);




  const char *(*elf_backend_print_symbol_all)
    (bfd *, void *, asymbol *);





  bfd_boolean (*elf_backend_output_arch_local_syms)
    (bfd *, struct bfd_link_info *, void *,
     bfd_boolean (*) (void *, const char *, Elf_Internal_Sym *, asection *,
        struct elf_link_hash_entry *));




  bfd_boolean (*elf_backend_output_arch_syms)
    (bfd *, struct bfd_link_info *, void *,
     bfd_boolean (*) (void *, const char *, Elf_Internal_Sym *, asection *,
        struct elf_link_hash_entry *));






  void (*elf_backend_copy_indirect_symbol)
    (struct bfd_link_info *, struct elf_link_hash_entry *,
     struct elf_link_hash_entry *);



  void (*elf_backend_hide_symbol)
    (struct bfd_link_info *, struct elf_link_hash_entry *, bfd_boolean);



  bfd_boolean (*elf_backend_fixup_symbol)
    (struct bfd_link_info *, struct elf_link_hash_entry *);


  void (*elf_backend_merge_symbol_attribute)
    (struct elf_link_hash_entry *, const Elf_Internal_Sym *, bfd_boolean,
     bfd_boolean);



  bfd_boolean (*elf_backend_ignore_undef_symbol)
    (struct elf_link_hash_entry *);



  bfd_boolean (*elf_backend_emit_relocs)
    (bfd *, asection *, Elf_Internal_Shdr *, Elf_Internal_Rela *,
     struct elf_link_hash_entry **);



  unsigned int (*elf_backend_count_relocs)
    (asection *, Elf_Internal_Rela *);



  bfd_boolean (*elf_backend_grok_prstatus)
    (bfd *, Elf_Internal_Note *);



  bfd_boolean (*elf_backend_grok_psinfo)
    (bfd *, Elf_Internal_Note *);


  char *(*elf_backend_write_core_note)
    (bfd *abfd, char *buf, int *bufsiz, int note_type, ...);


  void (* elf_backend_sprintf_vma)
    (bfd *, char *, bfd_vma);
  void (* elf_backend_fprintf_vma)
    (bfd *, void *, bfd_vma);


  enum elf_reloc_type_class (*elf_backend_reloc_type_class)
    (const Elf_Internal_Rela *);



  bfd_boolean (*elf_backend_discard_info)
    (bfd *, struct elf_reloc_cookie *, struct bfd_link_info *);



  bfd_boolean (*elf_backend_ignore_discarded_relocs)
    (asection *);



  unsigned int (*action_discarded)
    (asection *);




  unsigned int (*elf_backend_eh_frame_address_size)
    (bfd *, asection *);




  bfd_boolean (*elf_backend_can_make_relative_eh_frame)
     (bfd *, struct bfd_link_info *, asection *);
  bfd_boolean (*elf_backend_can_make_lsda_relative_eh_frame)
     (bfd *, struct bfd_link_info *, asection *);





  bfd_byte (*elf_backend_encode_eh_address)
     (bfd *abfd, struct bfd_link_info *info,
      asection *osec, bfd_vma offset,
      asection *loc_sec, bfd_vma loc_offset,
      bfd_vma *encoded);



  bfd_boolean (*elf_backend_write_section)
    (bfd *, struct bfd_link_info *, asection *, bfd_byte *);



  irix_compat_t (*elf_backend_mips_irix_compat)
    (bfd *);

  reloc_howto_type *(*elf_backend_mips_rtype_to_howto)
    (unsigned int, bfd_boolean);



  const struct ecoff_debug_swap *elf_backend_ecoff_debug_swap;



  bfd *(*elf_backend_bfd_from_remote_memory)
     (bfd *templ, bfd_vma ehdr_vma, bfd_vma *loadbasep,
      int (*target_read_memory) (bfd_vma vma, bfd_byte *myaddr, int len));



  bfd_vma (*plt_sym_val) (bfd_vma, const asection *, const arelent *);


  bfd_boolean (*common_definition) (Elf_Internal_Sym *);


  unsigned int (*common_section_index) (asection *);


  asection *(*common_section) (asection *);


  bfd_boolean (*merge_symbol) (struct bfd_link_info *,
          struct elf_link_hash_entry **,
          struct elf_link_hash_entry *,
          Elf_Internal_Sym *, asection **,
          bfd_vma *, unsigned int *,
          bfd_boolean *, bfd_boolean *,
          bfd_boolean *, bfd_boolean *,
          bfd_boolean *, bfd_boolean *,
          bfd_boolean *, bfd_boolean *,
          bfd *, asection **,
          bfd_boolean *, bfd_boolean *,
          bfd_boolean *, bfd_boolean *,
          bfd *, asection **);


  bfd_boolean (*elf_hash_symbol) (struct elf_link_hash_entry *);


  bfd_boolean (*is_function_type) (unsigned int type);


  bfd_error_plugin_type link_order_error_handler;


  const char *relplt_name;


  int elf_machine_alt1;
  int elf_machine_alt2;

  const struct elf_size_info *s;


  const struct bfd_elf_special_section *special_sections;



  bfd_vma got_header_size;


  const char *obj_attrs_vendor;


  const char *obj_attrs_section;



  int (*obj_attrs_arg_type) (int);


  unsigned int obj_attrs_section_type;





  unsigned collect : 1;





  unsigned type_change_ok : 1;




  unsigned may_use_rel_p : 1;




  unsigned may_use_rela_p : 1;






  unsigned default_use_rela_p : 1;




  unsigned rela_normal : 1;



  unsigned sign_extend_vma : 1;

  unsigned want_got_plt : 1;
  unsigned plt_readonly : 1;
  unsigned want_plt_sym : 1;
  unsigned plt_not_loaded : 1;
  unsigned plt_alignment : 4;
  unsigned can_gc_sections : 1;
  unsigned can_refcount : 1;
  unsigned want_got_sym : 1;
  unsigned want_dynbss : 1;




  unsigned want_p_paddr_set_to_zero : 1;





  unsigned default_execstack : 1;
};




struct bfd_elf_section_data
{

  Elf_Internal_Shdr this_hdr;



  Elf_Internal_Shdr rel_hdr;



  Elf_Internal_Shdr *rel_hdr2;


  unsigned int rel_count;


  unsigned int rel_count2;


  int this_idx;



  int rel_idx;



  int rel_idx2;





  int dynindx;


  asection *linked_to;



  struct elf_link_hash_entry **rel_hashes;




  Elf_Internal_Rela *relocs;



  void *local_dynrel;


  asection *sreloc;

  union {

    const char *name;


    struct bfd_symbol *id;
  } group;



  asection *sec_group;



  asection *next_in_group;


  void *sec_info;
};
# 1250 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
struct elf_info_failed
{
  bfd_boolean failed;
  struct bfd_link_info *info;
  struct bfd_elf_version_tree *verdefs;
};




struct elf_assign_sym_version_info
{

  bfd *output_bfd;

  struct bfd_link_info *info;

  struct bfd_elf_version_tree *verdefs;

  bfd_boolean failed;
};




struct elf_find_verdep_info
{

  bfd *output_bfd;

  struct bfd_link_info *info;

  unsigned int vers;

  bfd_boolean failed;
};
# 1294 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
typedef struct obj_attribute
{
  int type;
  unsigned int i;
  char *s;
} obj_attribute;

typedef struct obj_attribute_list
{
  struct obj_attribute_list *next;
  int tag;
  obj_attribute attr;
} obj_attribute_list;
# 1318 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
enum
{
  Tag_NULL = 0,
  Tag_File = 1,
  Tag_Section = 2,
  Tag_Symbol = 3,
  Tag_compatibility = 32
};




struct elf_obj_tdata
{
  Elf_Internal_Ehdr elf_header[1];
  Elf_Internal_Shdr **elf_sect_ptr;
  Elf_Internal_Phdr *phdr;
  struct elf_segment_map *segment_map;
  struct elf_strtab_hash *strtab_ptr;
  int num_locals;
  int num_globals;
  unsigned int num_elf_sections;
  int num_section_syms;
  asymbol **section_syms;
  Elf_Internal_Shdr symtab_hdr;
  Elf_Internal_Shdr shstrtab_hdr;
  Elf_Internal_Shdr strtab_hdr;
  Elf_Internal_Shdr dynsymtab_hdr;
  Elf_Internal_Shdr dynstrtab_hdr;
  Elf_Internal_Shdr dynversym_hdr;
  Elf_Internal_Shdr dynverref_hdr;
  Elf_Internal_Shdr dynverdef_hdr;
  Elf_Internal_Shdr symtab_shndx_hdr;
  unsigned int symtab_section, shstrtab_section;
  unsigned int strtab_section, dynsymtab_section;
  unsigned int symtab_shndx_section;
  unsigned int dynversym_section, dynverdef_section, dynverref_section;
  file_ptr next_file_pos;
  bfd_vma gp;
  unsigned int gp_size;


  int core_signal;
  int core_pid;
  int core_lwpid;
  char* core_program;
  char* core_command;




  struct elf_link_hash_entry **sym_hashes;




  union
    {
      bfd_signed_vma *refcounts;
      bfd_vma *offsets;
      struct got_entry **ents;
    } local_got;
# 1389 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  const char *dt_name;


  bfd_size_type program_header_size;


  void *line_info;





  struct mips_elf_find_line *find_line_info;


  struct dwarf1_debug *dwarf1_find_line_info;


  void *dwarf2_find_line_info;




  asection **local_stubs;
  asection **local_call_stubs;



  asection *eh_frame_hdr;

  Elf_Internal_Shdr **group_sect_ptr;
  int num_group;


  unsigned int cverdefs;


  unsigned int cverrefs;


  unsigned int stack_flags;


  bfd_boolean relro;


  Elf_Internal_Verdef *verdef;


  Elf_Internal_Verneed *verref;



  asymbol *elf_data_symbol;
  asymbol *elf_text_symbol;
  asection *elf_data_section;
  asection *elf_text_section;




  enum dynamic_lib_link_class dyn_lib_class;



  bfd_boolean linker;






  bfd_boolean bad_symtab;


  bfd_boolean flags_init;


  void *symbuf;

  obj_attribute known_obj_attributes[2][32];
  obj_attribute_list *other_obj_attributes[2];


  bfd_boolean (*after_write_object_contents) (bfd *);
  void *after_write_object_contents_info;
};
# 1511 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
extern void _bfd_elf_swap_verdef_in
  (bfd *, const Elf_External_Verdef *, Elf_Internal_Verdef *);
extern void _bfd_elf_swap_verdef_out
  (bfd *, const Elf_Internal_Verdef *, Elf_External_Verdef *);
extern void _bfd_elf_swap_verdaux_in
  (bfd *, const Elf_External_Verdaux *, Elf_Internal_Verdaux *);
extern void _bfd_elf_swap_verdaux_out
  (bfd *, const Elf_Internal_Verdaux *, Elf_External_Verdaux *);
extern void _bfd_elf_swap_verneed_in
  (bfd *, const Elf_External_Verneed *, Elf_Internal_Verneed *);
extern void _bfd_elf_swap_verneed_out
  (bfd *, const Elf_Internal_Verneed *, Elf_External_Verneed *);
extern void _bfd_elf_swap_vernaux_in
  (bfd *, const Elf_External_Vernaux *, Elf_Internal_Vernaux *);
extern void _bfd_elf_swap_vernaux_out
  (bfd *, const Elf_Internal_Vernaux *, Elf_External_Vernaux *);
extern void _bfd_elf_swap_versym_in
  (bfd *, const Elf_External_Versym *, Elf_Internal_Versym *);
extern void _bfd_elf_swap_versym_out
  (bfd *, const Elf_Internal_Versym *, Elf_External_Versym *);

extern int _bfd_elf_section_from_bfd_section
  (bfd *, asection *);
extern char *bfd_elf_string_from_elf_section
  (bfd *, unsigned, unsigned);
extern char *bfd_elf_get_str_section
  (bfd *, unsigned);
extern Elf_Internal_Sym *bfd_elf_get_elf_syms
  (bfd *, Elf_Internal_Shdr *, size_t, size_t, Elf_Internal_Sym *, void *,
   Elf_External_Sym_Shndx *);
extern const char *bfd_elf_sym_name
  (bfd *, Elf_Internal_Shdr *, Elf_Internal_Sym *, asection *);

extern bfd_boolean _bfd_elf_copy_private_bfd_data
  (bfd *, bfd *);
extern bfd_boolean _bfd_elf_print_private_bfd_data
  (bfd *, void *);
extern void bfd_elf_print_symbol
  (bfd *, void *, asymbol *, bfd_print_symbol_type);

extern void _bfd_elf_sprintf_vma
  (bfd *, char *, bfd_vma);
extern void _bfd_elf_fprintf_vma
  (bfd *, void *, bfd_vma);

extern unsigned int _bfd_elf_eh_frame_address_size
  (bfd *, asection *);
extern bfd_byte _bfd_elf_encode_eh_address
  (bfd *abfd, struct bfd_link_info *info, asection *osec, bfd_vma offset,
   asection *loc_sec, bfd_vma loc_offset, bfd_vma *encoded);
extern bfd_boolean _bfd_elf_can_make_relative
  (bfd *input_bfd, struct bfd_link_info *info, asection *eh_frame_section);

extern enum elf_reloc_type_class _bfd_elf_reloc_type_class
  (const Elf_Internal_Rela *);
extern bfd_vma _bfd_elf_rela_local_sym
  (bfd *, Elf_Internal_Sym *, asection **, Elf_Internal_Rela *);
extern bfd_vma _bfd_elf_rel_local_sym
  (bfd *, Elf_Internal_Sym *, asection **, bfd_vma);
extern bfd_vma _bfd_elf_section_offset
  (bfd *, struct bfd_link_info *, asection *, bfd_vma);

extern unsigned long bfd_elf_hash
  (const char *);
extern unsigned long bfd_elf_gnu_hash
  (const char *);

extern bfd_reloc_status_type bfd_elf_generic_reloc
  (bfd *, arelent *, asymbol *, void *, asection *, bfd *, char **);
extern bfd_boolean bfd_elf_mkobject
  (bfd *);
extern bfd_boolean bfd_elf_mkcorefile
  (bfd *);
extern Elf_Internal_Shdr *bfd_elf_find_section
  (bfd *, char *);
extern bfd_boolean _bfd_elf_make_section_from_shdr
  (bfd *, Elf_Internal_Shdr *, const char *, int);
extern bfd_boolean _bfd_elf_make_section_from_phdr
  (bfd *, Elf_Internal_Phdr *, int, const char *);
extern struct bfd_hash_entry *_bfd_elf_link_hash_newfunc
  (struct bfd_hash_entry *, struct bfd_hash_table *, const char *);
extern struct bfd_link_hash_table *_bfd_elf_link_hash_table_create
  (bfd *);
extern void _bfd_elf_link_hash_copy_indirect
  (struct bfd_link_info *, struct elf_link_hash_entry *,
   struct elf_link_hash_entry *);
extern void _bfd_elf_link_hash_hide_symbol
  (struct bfd_link_info *, struct elf_link_hash_entry *, bfd_boolean);
extern bfd_boolean _bfd_elf_link_hash_fixup_symbol
  (struct bfd_link_info *, struct elf_link_hash_entry *);
extern bfd_boolean _bfd_elf_link_hash_table_init
  (struct elf_link_hash_table *, bfd *,
   struct bfd_hash_entry *(*)
     (struct bfd_hash_entry *, struct bfd_hash_table *, const char *),
   unsigned int);
extern bfd_boolean _bfd_elf_slurp_version_tables
  (bfd *, bfd_boolean);
extern bfd_boolean _bfd_elf_merge_sections
  (bfd *, struct bfd_link_info *);
extern bfd_boolean _bfd_elf_match_sections_by_type
  (bfd *, const asection *, bfd *, const asection *);
extern bfd_boolean bfd_elf_is_group_section
  (bfd *, const struct bfd_section *);
extern void _bfd_elf_section_already_linked
  (bfd *, struct bfd_section *, struct bfd_link_info *);
extern void bfd_elf_set_group_contents
  (bfd *, asection *, void *);
extern asection *_bfd_elf_check_kept_section
  (asection *, struct bfd_link_info *);
extern void _bfd_elf_link_just_syms
  (asection *, struct bfd_link_info *);
extern bfd_boolean _bfd_elf_copy_private_header_data
  (bfd *, bfd *);
extern bfd_boolean _bfd_elf_copy_private_symbol_data
  (bfd *, asymbol *, bfd *, asymbol *);


extern bfd_boolean _bfd_elf_init_private_section_data
  (bfd *, asection *, bfd *, asection *, struct bfd_link_info *);
extern bfd_boolean _bfd_elf_copy_private_section_data
  (bfd *, asection *, bfd *, asection *);
extern bfd_boolean _bfd_elf_write_object_contents
  (bfd *);
extern bfd_boolean _bfd_elf_write_corefile_contents
  (bfd *);
extern bfd_boolean _bfd_elf_set_section_contents
  (bfd *, sec_ptr, const void *, file_ptr, bfd_size_type);
extern long _bfd_elf_get_symtab_upper_bound
  (bfd *);
extern long _bfd_elf_canonicalize_symtab
  (bfd *, asymbol **);
extern long _bfd_elf_get_dynamic_symtab_upper_bound
  (bfd *);
extern long _bfd_elf_canonicalize_dynamic_symtab
  (bfd *, asymbol **);
extern long _bfd_elf_get_synthetic_symtab
  (bfd *, long, asymbol **, long, asymbol **, asymbol **);
extern long _bfd_elf_get_reloc_upper_bound
  (bfd *, sec_ptr);
extern long _bfd_elf_canonicalize_reloc
  (bfd *, sec_ptr, arelent **, asymbol **);
extern long _bfd_elf_get_dynamic_reloc_upper_bound
  (bfd *);
extern long _bfd_elf_canonicalize_dynamic_reloc
  (bfd *, arelent **, asymbol **);
extern asymbol *_bfd_elf_make_empty_symbol
  (bfd *);
extern void _bfd_elf_get_symbol_info
  (bfd *, asymbol *, symbol_info *);
extern bfd_boolean _bfd_elf_is_local_label_name
  (bfd *, const char *);
extern alent *_bfd_elf_get_lineno
  (bfd *, asymbol *);
extern bfd_boolean _bfd_elf_set_arch_mach
  (bfd *, enum bfd_architecture, unsigned long);
extern bfd_boolean _bfd_elf_find_nearest_line
  (bfd *, asection *, asymbol **, bfd_vma, const char **, const char **,
   unsigned int *);
extern bfd_boolean _bfd_elf_find_line
  (bfd *, asymbol **, asymbol *, const char **, unsigned int *);

extern bfd_boolean _bfd_elf_find_inliner_info
  (bfd *, const char **, const char **, unsigned int *);


extern int _bfd_elf_sizeof_headers
  (bfd *, struct bfd_link_info *);
extern bfd_boolean _bfd_elf_new_section_hook
  (bfd *, asection *);
extern bfd_boolean _bfd_elf_init_reloc_shdr
  (bfd *, Elf_Internal_Shdr *, asection *, bfd_boolean);
extern const struct bfd_elf_special_section *_bfd_elf_get_special_section
  (const char *, const struct bfd_elf_special_section *, unsigned int);
extern const struct bfd_elf_special_section *_bfd_elf_get_sec_type_attr
  (bfd *, asection *);


extern void _bfd_elf_no_info_to_howto
  (bfd *, arelent *, Elf_Internal_Rela *);

extern bfd_boolean bfd_section_from_shdr
  (bfd *, unsigned int shindex);
extern bfd_boolean bfd_section_from_phdr
  (bfd *, Elf_Internal_Phdr *, int);

extern int _bfd_elf_symbol_from_bfd_symbol
  (bfd *, asymbol **);

extern asection *bfd_section_from_r_symndx
  (bfd *, struct sym_sec_cache *, asection *, unsigned long);
extern asection *bfd_section_from_elf_index
  (bfd *, unsigned int);
extern struct bfd_strtab_hash *_bfd_elf_stringtab_init
  (void);

extern struct elf_strtab_hash * _bfd_elf_strtab_init
  (void);
extern void _bfd_elf_strtab_free
  (struct elf_strtab_hash *);
extern bfd_size_type _bfd_elf_strtab_add
  (struct elf_strtab_hash *, const char *, bfd_boolean);
extern void _bfd_elf_strtab_addref
  (struct elf_strtab_hash *, bfd_size_type);
extern void _bfd_elf_strtab_delref
  (struct elf_strtab_hash *, bfd_size_type);
extern void _bfd_elf_strtab_clear_all_refs
  (struct elf_strtab_hash *);
extern bfd_size_type _bfd_elf_strtab_size
  (struct elf_strtab_hash *);
extern bfd_size_type _bfd_elf_strtab_offset
  (struct elf_strtab_hash *, bfd_size_type);
extern bfd_boolean _bfd_elf_strtab_emit
  (bfd *, struct elf_strtab_hash *);
extern void _bfd_elf_strtab_finalize
  (struct elf_strtab_hash *);

extern bfd_boolean _bfd_elf_discard_section_eh_frame
  (bfd *, struct bfd_link_info *, asection *,
   bfd_boolean (*) (bfd_vma, void *), struct elf_reloc_cookie *);
extern bfd_boolean _bfd_elf_discard_section_eh_frame_hdr
  (bfd *, struct bfd_link_info *);
extern bfd_vma _bfd_elf_eh_frame_section_offset
  (bfd *, struct bfd_link_info *, asection *, bfd_vma);
extern bfd_boolean _bfd_elf_write_section_eh_frame
  (bfd *, struct bfd_link_info *, asection *, bfd_byte *);
extern bfd_boolean _bfd_elf_write_section_eh_frame_hdr
  (bfd *, struct bfd_link_info *);
extern bfd_boolean _bfd_elf_maybe_strip_eh_frame_hdr
  (struct bfd_link_info *);

extern bfd_boolean _bfd_elf_merge_symbol
  (bfd *, struct bfd_link_info *, const char *, Elf_Internal_Sym *,
   asection **, bfd_vma *, unsigned int *,
   struct elf_link_hash_entry **, bfd_boolean *,
   bfd_boolean *, bfd_boolean *, bfd_boolean *);

extern bfd_boolean _bfd_elf_hash_symbol (struct elf_link_hash_entry *);

extern bfd_boolean _bfd_elf_add_default_symbol
  (bfd *, struct bfd_link_info *, struct elf_link_hash_entry *,
   const char *, Elf_Internal_Sym *, asection **, bfd_vma *,
   bfd_boolean *, bfd_boolean);

extern bfd_boolean _bfd_elf_export_symbol
  (struct elf_link_hash_entry *, void *);

extern bfd_boolean _bfd_elf_link_find_version_dependencies
  (struct elf_link_hash_entry *, void *);

extern bfd_boolean _bfd_elf_link_assign_sym_version
  (struct elf_link_hash_entry *, void *);

extern long _bfd_elf_link_lookup_local_dynindx
  (struct bfd_link_info *, bfd *, long);
extern bfd_boolean _bfd_elf_compute_section_file_positions
  (bfd *, struct bfd_link_info *);
extern void _bfd_elf_assign_file_positions_for_relocs
  (bfd *);
extern file_ptr _bfd_elf_assign_file_position_for_section
  (Elf_Internal_Shdr *, file_ptr, bfd_boolean);

extern bfd_boolean _bfd_elf_validate_reloc
  (bfd *, arelent *);

extern bfd_boolean _bfd_elf_link_create_dynamic_sections
  (bfd *, struct bfd_link_info *);
extern bfd_boolean _bfd_elf_link_omit_section_dynsym
  (bfd *, struct bfd_link_info *, asection *);
extern bfd_boolean _bfd_elf_create_dynamic_sections
  (bfd *, struct bfd_link_info *);
extern bfd_boolean _bfd_elf_create_got_section
  (bfd *, struct bfd_link_info *);
extern struct elf_link_hash_entry *_bfd_elf_define_linkage_sym
  (bfd *, struct bfd_link_info *, asection *, const char *);
extern void _bfd_elf_init_1_index_section
  (bfd *, struct bfd_link_info *);
extern void _bfd_elf_init_2_index_sections
  (bfd *, struct bfd_link_info *);

extern bfd_boolean _bfd_elfcore_make_pseudosection
  (bfd *, char *, size_t, ufile_ptr);
extern char *_bfd_elfcore_strndup
  (bfd *, char *, size_t);

extern Elf_Internal_Rela *_bfd_elf_link_read_relocs
  (bfd *, asection *, void *, Elf_Internal_Rela *, bfd_boolean);

extern bfd_boolean _bfd_elf_link_size_reloc_section
  (bfd *, Elf_Internal_Shdr *, asection *);

extern bfd_boolean _bfd_elf_link_output_relocs
  (bfd *, asection *, Elf_Internal_Shdr *, Elf_Internal_Rela *,
   struct elf_link_hash_entry **);

extern bfd_boolean _bfd_elf_fix_symbol_flags
  (struct elf_link_hash_entry *, struct elf_info_failed *);

extern bfd_boolean _bfd_elf_adjust_dynamic_symbol
  (struct elf_link_hash_entry *, void *);

extern bfd_boolean _bfd_elf_adjust_dynamic_copy
  (struct elf_link_hash_entry *, asection *);

extern bfd_boolean _bfd_elf_link_sec_merge_syms
  (struct elf_link_hash_entry *, void *);

extern bfd_boolean _bfd_elf_dynamic_symbol_p
  (struct elf_link_hash_entry *, struct bfd_link_info *, bfd_boolean);

extern bfd_boolean _bfd_elf_symbol_refs_local_p
  (struct elf_link_hash_entry *, struct bfd_link_info *, bfd_boolean);

extern bfd_boolean bfd_elf_match_symbols_in_sections
  (asection *, asection *, struct bfd_link_info *);

extern void bfd_elf_perform_complex_relocation
  (bfd * output_bfd __attribute__ ((__unused__)),
   struct bfd_link_info * info,
   bfd * input_bfd,
   asection * input_section,
   bfd_byte * contents,
   Elf_Internal_Rela * rel,
   Elf_Internal_Sym * local_syms,
   asection ** local_sections);

extern bfd_boolean _bfd_elf_setup_sections
  (bfd *);

extern void _bfd_elf_set_osabi (bfd * , struct bfd_link_info *);

extern const bfd_target *bfd_elf32_object_p
  (bfd *);
extern const bfd_target *bfd_elf32_core_file_p
  (bfd *);
extern char *bfd_elf32_core_file_failing_command
  (bfd *);
extern int bfd_elf32_core_file_failing_signal
  (bfd *);
extern bfd_boolean bfd_elf32_core_file_matches_executable_p
  (bfd *, bfd *);

extern bfd_boolean bfd_elf32_swap_symbol_in
  (bfd *, const void *, const void *, Elf_Internal_Sym *);
extern void bfd_elf32_swap_symbol_out
  (bfd *, const Elf_Internal_Sym *, void *, void *);
extern void bfd_elf32_swap_reloc_in
  (bfd *, const bfd_byte *, Elf_Internal_Rela *);
extern void bfd_elf32_swap_reloc_out
  (bfd *, const Elf_Internal_Rela *, bfd_byte *);
extern void bfd_elf32_swap_reloca_in
  (bfd *, const bfd_byte *, Elf_Internal_Rela *);
extern void bfd_elf32_swap_reloca_out
  (bfd *, const Elf_Internal_Rela *, bfd_byte *);
extern void bfd_elf32_swap_phdr_in
  (bfd *, const Elf32_External_Phdr *, Elf_Internal_Phdr *);
extern void bfd_elf32_swap_phdr_out
  (bfd *, const Elf_Internal_Phdr *, Elf32_External_Phdr *);
extern void bfd_elf32_swap_dyn_in
  (bfd *, const void *, Elf_Internal_Dyn *);
extern void bfd_elf32_swap_dyn_out
  (bfd *, const Elf_Internal_Dyn *, void *);
extern long bfd_elf32_slurp_symbol_table
  (bfd *, asymbol **, bfd_boolean);
extern bfd_boolean bfd_elf32_write_shdrs_and_ehdr
  (bfd *);
extern int bfd_elf32_write_out_phdrs
  (bfd *, const Elf_Internal_Phdr *, unsigned int);
extern bfd_boolean bfd_elf32_checksum_contents
  (bfd * , void (*) (const void *, size_t, void *), void *);
extern void bfd_elf32_write_relocs
  (bfd *, asection *, void *);
extern bfd_boolean bfd_elf32_slurp_reloc_table
  (bfd *, asection *, asymbol **, bfd_boolean);

extern const bfd_target *bfd_elf64_object_p
  (bfd *);
extern const bfd_target *bfd_elf64_core_file_p
  (bfd *);
extern char *bfd_elf64_core_file_failing_command
  (bfd *);
extern int bfd_elf64_core_file_failing_signal
  (bfd *);
extern bfd_boolean bfd_elf64_core_file_matches_executable_p
  (bfd *, bfd *);

extern bfd_boolean bfd_elf64_swap_symbol_in
  (bfd *, const void *, const void *, Elf_Internal_Sym *);
extern void bfd_elf64_swap_symbol_out
  (bfd *, const Elf_Internal_Sym *, void *, void *);
extern void bfd_elf64_swap_reloc_in
  (bfd *, const bfd_byte *, Elf_Internal_Rela *);
extern void bfd_elf64_swap_reloc_out
  (bfd *, const Elf_Internal_Rela *, bfd_byte *);
extern void bfd_elf64_swap_reloca_in
  (bfd *, const bfd_byte *, Elf_Internal_Rela *);
extern void bfd_elf64_swap_reloca_out
  (bfd *, const Elf_Internal_Rela *, bfd_byte *);
extern void bfd_elf64_swap_phdr_in
  (bfd *, const Elf64_External_Phdr *, Elf_Internal_Phdr *);
extern void bfd_elf64_swap_phdr_out
  (bfd *, const Elf_Internal_Phdr *, Elf64_External_Phdr *);
extern void bfd_elf64_swap_dyn_in
  (bfd *, const void *, Elf_Internal_Dyn *);
extern void bfd_elf64_swap_dyn_out
  (bfd *, const Elf_Internal_Dyn *, void *);
extern long bfd_elf64_slurp_symbol_table
  (bfd *, asymbol **, bfd_boolean);
extern bfd_boolean bfd_elf64_write_shdrs_and_ehdr
  (bfd *);
extern int bfd_elf64_write_out_phdrs
  (bfd *, const Elf_Internal_Phdr *, unsigned int);
extern bfd_boolean bfd_elf64_checksum_contents
  (bfd * , void (*) (const void *, size_t, void *), void *);
extern void bfd_elf64_write_relocs
  (bfd *, asection *, void *);
extern bfd_boolean bfd_elf64_slurp_reloc_table
  (bfd *, asection *, asymbol **, bfd_boolean);

extern struct elf_link_hash_entry *_bfd_elf_archive_symbol_lookup
  (bfd *, struct bfd_link_info *, const char *);
extern bfd_boolean bfd_elf_link_add_symbols
  (bfd *, struct bfd_link_info *);
extern bfd_boolean _bfd_elf_add_dynamic_entry
  (struct bfd_link_info *, bfd_vma, bfd_vma);

extern bfd_boolean bfd_elf_link_record_dynamic_symbol
  (struct bfd_link_info *, struct elf_link_hash_entry *);

extern int bfd_elf_link_record_local_dynamic_symbol
  (struct bfd_link_info *, bfd *, long);

extern void bfd_elf_link_mark_dynamic_symbol
  (struct bfd_link_info *, struct elf_link_hash_entry *,
   Elf_Internal_Sym *);

extern bfd_boolean _bfd_elf_close_and_cleanup
  (bfd *);

extern bfd_boolean _bfd_elf_common_definition
  (Elf_Internal_Sym *);

extern unsigned int _bfd_elf_common_section_index
  (asection *);

extern asection *_bfd_elf_common_section
  (asection *);

extern void _bfd_dwarf2_cleanup_debug_info
  (bfd *);

extern bfd_reloc_status_type _bfd_elf_rel_vtable_reloc_fn
  (bfd *, arelent *, struct bfd_symbol *, void *,
   asection *, bfd *, char **);

extern bfd_boolean bfd_elf_final_link
  (bfd *, struct bfd_link_info *);

extern bfd_boolean bfd_elf_gc_mark_dynamic_ref_symbol
  (struct elf_link_hash_entry *h, void *inf);

extern bfd_boolean bfd_elf_gc_sections
  (bfd *, struct bfd_link_info *);

extern bfd_boolean bfd_elf_gc_record_vtinherit
  (bfd *, asection *, struct elf_link_hash_entry *, bfd_vma);

extern bfd_boolean bfd_elf_gc_record_vtentry
  (bfd *, asection *, struct elf_link_hash_entry *, bfd_vma);

extern asection *_bfd_elf_gc_mark_hook
  (asection *, struct bfd_link_info *, Elf_Internal_Rela *,
   struct elf_link_hash_entry *, Elf_Internal_Sym *);

extern bfd_boolean _bfd_elf_gc_mark
  (struct bfd_link_info *, asection *,
   asection * (*) (asection *, struct bfd_link_info *, Elf_Internal_Rela *,
     struct elf_link_hash_entry *, Elf_Internal_Sym *));

extern bfd_boolean bfd_elf_gc_common_finalize_got_offsets
  (bfd *, struct bfd_link_info *);

extern bfd_boolean bfd_elf_gc_common_final_link
  (bfd *, struct bfd_link_info *);

extern bfd_boolean bfd_elf_reloc_symbol_deleted_p
  (bfd_vma, void *);

extern struct elf_segment_map * _bfd_elf_make_dynamic_segment
  (bfd *, asection *);

extern bfd_boolean _bfd_elf_map_sections_to_segments
  (bfd *, struct bfd_link_info *);

extern bfd_boolean _bfd_elf_is_function_type (unsigned int);


extern char *elfcore_write_note
  (bfd *, char *, int *, const char *, int, const void *, int);
extern char *elfcore_write_prpsinfo
  (bfd *, char *, int *, const char *, const char *);
extern char *elfcore_write_prstatus
  (bfd *, char *, int *, long, int, const void *);
extern char * elfcore_write_pstatus
  (bfd *, char *, int *, long, int, const void *);
extern char *elfcore_write_prfpreg
  (bfd *, char *, int *, const void *, int);
extern char *elfcore_write_prxfpreg
  (bfd *, char *, int *, const void *, int);
extern char *elfcore_write_lwpstatus
  (bfd *, char *, int *, long, int, const void *);

extern bfd *_bfd_elf32_bfd_from_remote_memory
  (bfd *templ, bfd_vma ehdr_vma, bfd_vma *loadbasep,
   int (*target_read_memory) (bfd_vma, bfd_byte *, int));
extern bfd *_bfd_elf64_bfd_from_remote_memory
  (bfd *templ, bfd_vma ehdr_vma, bfd_vma *loadbasep,
   int (*target_read_memory) (bfd_vma, bfd_byte *, int));

extern bfd_vma bfd_elf_obj_attr_size (bfd *);
extern void bfd_elf_set_obj_attr_contents (bfd *, bfd_byte *, bfd_vma);
extern int bfd_elf_get_obj_attr_int (bfd *, int, int);
extern void bfd_elf_add_obj_attr_int (bfd *, int, int, unsigned int);


extern void bfd_elf_add_obj_attr_string (bfd *, int, int, const char *);


extern void bfd_elf_add_obj_attr_compat (bfd *, int, unsigned int,
      const char *);



extern char *_bfd_elf_attr_strdup (bfd *, const char *);
extern void _bfd_elf_copy_obj_attributes (bfd *, bfd *);
extern int _bfd_elf_obj_attrs_arg_type (bfd *, int, int);
extern void _bfd_elf_parse_attributes (bfd *, Elf_Internal_Shdr *);
extern bfd_boolean _bfd_elf_merge_object_attributes (bfd *, bfd *);


extern asection _bfd_elf_large_com_section;



extern bfd_boolean _sh_elf_set_mach_from_flags
  (bfd *);
# 47 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 2
# 55 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"

# 55 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
struct mips_cp0sel_name
{
  unsigned int cp0reg;
  unsigned int sel;
  const char * const name;
};

static const char * const mips_gpr_names_numeric[32] =
{
  "$0", "$1", "$2", "$3", "$4", "$5", "$6", "$7",
  "$8", "$9", "$10", "$11", "$12", "$13", "$14", "$15",
  "$16", "$17", "$18", "$19", "$20", "$21", "$22", "$23",
  "$24", "$25", "$26", "$27", "$28", "$29", "$30", "$31"
};

static const char * const mips_gpr_names_oldabi[32] =
{
  "zero", "at", "v0", "v1", "a0", "a1", "a2", "a3",
  "t0", "t1", "t2", "t3", "t4", "t5", "t6", "t7",
  "s0", "s1", "s2", "s3", "s4", "s5", "s6", "s7",
  "t8", "t9", "k0", "k1", "gp", "sp", "s8", "ra"
};

static const char * const mips_gpr_names_newabi[32] =
{
  "zero", "at", "v0", "v1", "a0", "a1", "a2", "a3",
  "a4", "a5", "a6", "a7", "t0", "t1", "t2", "t3",
  "s0", "s1", "s2", "s3", "s4", "s5", "s6", "s7",
  "t8", "t9", "k0", "k1", "gp", "sp", "s8", "ra"
};

static const char * const mips_fpr_names_numeric[32] =
{
  "$f0", "$f1", "$f2", "$f3", "$f4", "$f5", "$f6", "$f7",
  "$f8", "$f9", "$f10", "$f11", "$f12", "$f13", "$f14", "$f15",
  "$f16", "$f17", "$f18", "$f19", "$f20", "$f21", "$f22", "$f23",
  "$f24", "$f25", "$f26", "$f27", "$f28", "$f29", "$f30", "$f31"
};

static const char * const mips_fpr_names_32[32] =
{
  "fv0", "fv0f", "fv1", "fv1f", "ft0", "ft0f", "ft1", "ft1f",
  "ft2", "ft2f", "ft3", "ft3f", "fa0", "fa0f", "fa1", "fa1f",
  "ft4", "ft4f", "ft5", "ft5f", "fs0", "fs0f", "fs1", "fs1f",
  "fs2", "fs2f", "fs3", "fs3f", "fs4", "fs4f", "fs5", "fs5f"
};

static const char * const mips_fpr_names_n32[32] =
{
  "fv0", "ft14", "fv1", "ft15", "ft0", "ft1", "ft2", "ft3",
  "ft4", "ft5", "ft6", "ft7", "fa0", "fa1", "fa2", "fa3",
  "fa4", "fa5", "fa6", "fa7", "fs0", "ft8", "fs1", "ft9",
  "fs2", "ft10", "fs3", "ft11", "fs4", "ft12", "fs5", "ft13"
};

static const char * const mips_fpr_names_64[32] =
{
  "fv0", "ft12", "fv1", "ft13", "ft0", "ft1", "ft2", "ft3",
  "ft4", "ft5", "ft6", "ft7", "fa0", "fa1", "fa2", "fa3",
  "fa4", "fa5", "fa6", "fa7", "ft8", "ft9", "ft10", "ft11",
  "fs0", "fs1", "fs2", "fs3", "fs4", "fs5", "fs6", "fs7"
};

static const char * const mips_cp0_names_numeric[32] =
{
  "$0", "$1", "$2", "$3", "$4", "$5", "$6", "$7",
  "$8", "$9", "$10", "$11", "$12", "$13", "$14", "$15",
  "$16", "$17", "$18", "$19", "$20", "$21", "$22", "$23",
  "$24", "$25", "$26", "$27", "$28", "$29", "$30", "$31"
};

static const char * const mips_cp1_names_numeric[32] =
{
  "$0", "$1", "$2", "$3", "$4", "$5", "$6", "$7",
  "$8", "$9", "$10", "$11", "$12", "$13", "$14", "$15",
  "$16", "$17", "$18", "$19", "$20", "$21", "$22", "$23",
  "$24", "$25", "$26", "$27", "$28", "$29", "$30", "$31"
};

static const char * const mips_cp0_names_r3000[32] =
{
  "c0_index", "c0_random", "c0_entrylo", "$3",
  "c0_context", "$5", "$6", "$7",
  "c0_badvaddr", "$9", "c0_entryhi", "$11",
  "c0_sr", "c0_cause", "c0_epc", "c0_prid",
  "$16", "$17", "$18", "$19",
  "$20", "$21", "$22", "$23",
  "$24", "$25", "$26", "$27",
  "$28", "$29", "$30", "$31",
};

static const char * const mips_cp0_names_r4000[32] =
{
  "c0_index", "c0_random", "c0_entrylo0", "c0_entrylo1",
  "c0_context", "c0_pagemask", "c0_wired", "$7",
  "c0_badvaddr", "c0_count", "c0_entryhi", "c0_compare",
  "c0_sr", "c0_cause", "c0_epc", "c0_prid",
  "c0_config", "c0_lladdr", "c0_watchlo", "c0_watchhi",
  "c0_xcontext", "$21", "$22", "$23",
  "$24", "$25", "c0_ecc", "c0_cacheerr",
  "c0_taglo", "c0_taghi", "c0_errorepc", "$31",
};

static const char * const mips_cp0_names_r5900[32] =
{
  "c0_index", "c0_random", "c0_entrylo0", "c0_entrylo1",
  "c0_context", "c0_pagemask", "c0_wired", "$7",
  "c0_badvaddr", "c0_count", "c0_entryhi", "c0_compare",
  "c0_sr", "c0_cause", "c0_epc", "c0_prid",
  "c0_config", "$17", "$18", "$19",
  "$20", "$21", "$22", "c0_badpaddr",
  "c0_depc", "c0_perfcnt", "$26", "$27",
  "c0_taglo", "c0_taghi", "c0_errorepc", "$31"
};

static const char * const mips_cp0_names_mips3264[32] =
{
  "c0_index", "c0_random", "c0_entrylo0", "c0_entrylo1",
  "c0_context", "c0_pagemask", "c0_wired", "$7",
  "c0_badvaddr", "c0_count", "c0_entryhi", "c0_compare",
  "c0_status", "c0_cause", "c0_epc", "c0_prid",
  "c0_config", "c0_lladdr", "c0_watchlo", "c0_watchhi",
  "c0_xcontext", "$21", "$22", "c0_debug",
  "c0_depc", "c0_perfcnt", "c0_errctl", "c0_cacheerr",
  "c0_taglo", "c0_taghi", "c0_errorepc", "c0_desave",
};

static const char * const mips_cp1_names_mips3264[32] =
{
  "c1_fir", "c1_ufr", "$2", "$3",
  "c1_unfr", "$5", "$6", "$7",
  "$8", "$9", "$10", "$11",
  "$12", "$13", "$14", "$15",
  "$16", "$17", "$18", "$19",
  "$20", "$21", "$22", "$23",
  "$24", "c1_fccr", "c1_fexr", "$27",
  "c1_fenr", "$29", "$30", "c1_fcsr"
};

static const struct mips_cp0sel_name mips_cp0sel_names_mips3264[] =
{
  { 16, 1, "c0_config1" },
  { 16, 2, "c0_config2" },
  { 16, 3, "c0_config3" },
  { 18, 1, "c0_watchlo,1" },
  { 18, 2, "c0_watchlo,2" },
  { 18, 3, "c0_watchlo,3" },
  { 18, 4, "c0_watchlo,4" },
  { 18, 5, "c0_watchlo,5" },
  { 18, 6, "c0_watchlo,6" },
  { 18, 7, "c0_watchlo,7" },
  { 19, 1, "c0_watchhi,1" },
  { 19, 2, "c0_watchhi,2" },
  { 19, 3, "c0_watchhi,3" },
  { 19, 4, "c0_watchhi,4" },
  { 19, 5, "c0_watchhi,5" },
  { 19, 6, "c0_watchhi,6" },
  { 19, 7, "c0_watchhi,7" },
  { 25, 1, "c0_perfcnt,1" },
  { 25, 2, "c0_perfcnt,2" },
  { 25, 3, "c0_perfcnt,3" },
  { 25, 4, "c0_perfcnt,4" },
  { 25, 5, "c0_perfcnt,5" },
  { 25, 6, "c0_perfcnt,6" },
  { 25, 7, "c0_perfcnt,7" },
  { 27, 1, "c0_cacheerr,1" },
  { 27, 2, "c0_cacheerr,2" },
  { 27, 3, "c0_cacheerr,3" },
  { 28, 1, "c0_datalo" },
  { 29, 1, "c0_datahi" }
};

static const char * const mips_cp0_names_mips3264r2[32] =
{
  "c0_index", "c0_random", "c0_entrylo0", "c0_entrylo1",
  "c0_context", "c0_pagemask", "c0_wired", "c0_hwrena",
  "c0_badvaddr", "c0_count", "c0_entryhi", "c0_compare",
  "c0_status", "c0_cause", "c0_epc", "c0_prid",
  "c0_config", "c0_lladdr", "c0_watchlo", "c0_watchhi",
  "c0_xcontext", "$21", "$22", "c0_debug",
  "c0_depc", "c0_perfcnt", "c0_errctl", "c0_cacheerr",
  "c0_taglo", "c0_taghi", "c0_errorepc", "c0_desave",
};

static const struct mips_cp0sel_name mips_cp0sel_names_mips3264r2[] =
{
  { 4, 1, "c0_contextconfig" },
  { 0, 1, "c0_mvpcontrol" },
  { 0, 2, "c0_mvpconf0" },
  { 0, 3, "c0_mvpconf1" },
  { 1, 1, "c0_vpecontrol" },
  { 1, 2, "c0_vpeconf0" },
  { 1, 3, "c0_vpeconf1" },
  { 1, 4, "c0_yqmask" },
  { 1, 5, "c0_vpeschedule" },
  { 1, 6, "c0_vpeschefback" },
  { 2, 1, "c0_tcstatus" },
  { 2, 2, "c0_tcbind" },
  { 2, 3, "c0_tcrestart" },
  { 2, 4, "c0_tchalt" },
  { 2, 5, "c0_tccontext" },
  { 2, 6, "c0_tcschedule" },
  { 2, 7, "c0_tcschefback" },
  { 5, 1, "c0_pagegrain" },
  { 6, 1, "c0_srsconf0" },
  { 6, 2, "c0_srsconf1" },
  { 6, 3, "c0_srsconf2" },
  { 6, 4, "c0_srsconf3" },
  { 6, 5, "c0_srsconf4" },
  { 12, 1, "c0_intctl" },
  { 12, 2, "c0_srsctl" },
  { 12, 3, "c0_srsmap" },
  { 15, 1, "c0_ebase" },
  { 16, 1, "c0_config1" },
  { 16, 2, "c0_config2" },
  { 16, 3, "c0_config3" },
  { 18, 1, "c0_watchlo,1" },
  { 18, 2, "c0_watchlo,2" },
  { 18, 3, "c0_watchlo,3" },
  { 18, 4, "c0_watchlo,4" },
  { 18, 5, "c0_watchlo,5" },
  { 18, 6, "c0_watchlo,6" },
  { 18, 7, "c0_watchlo,7" },
  { 19, 1, "c0_watchhi,1" },
  { 19, 2, "c0_watchhi,2" },
  { 19, 3, "c0_watchhi,3" },
  { 19, 4, "c0_watchhi,4" },
  { 19, 5, "c0_watchhi,5" },
  { 19, 6, "c0_watchhi,6" },
  { 19, 7, "c0_watchhi,7" },
  { 23, 1, "c0_tracecontrol" },
  { 23, 2, "c0_tracecontrol2" },
  { 23, 3, "c0_usertracedata" },
  { 23, 4, "c0_tracebpc" },
  { 25, 1, "c0_perfcnt,1" },
  { 25, 2, "c0_perfcnt,2" },
  { 25, 3, "c0_perfcnt,3" },
  { 25, 4, "c0_perfcnt,4" },
  { 25, 5, "c0_perfcnt,5" },
  { 25, 6, "c0_perfcnt,6" },
  { 25, 7, "c0_perfcnt,7" },
  { 27, 1, "c0_cacheerr,1" },
  { 27, 2, "c0_cacheerr,2" },
  { 27, 3, "c0_cacheerr,3" },
  { 28, 1, "c0_datalo" },
  { 28, 2, "c0_taglo1" },
  { 28, 3, "c0_datalo1" },
  { 28, 4, "c0_taglo2" },
  { 28, 5, "c0_datalo2" },
  { 28, 6, "c0_taglo3" },
  { 28, 7, "c0_datalo3" },
  { 29, 1, "c0_datahi" },
  { 29, 2, "c0_taghi1" },
  { 29, 3, "c0_datahi1" },
  { 29, 4, "c0_taghi2" },
  { 29, 5, "c0_datahi2" },
  { 29, 6, "c0_taghi3" },
  { 29, 7, "c0_datahi3" },
};


static const char * const mips_cp0_names_sb1[32] =
{
  "c0_index", "c0_random", "c0_entrylo0", "c0_entrylo1",
  "c0_context", "c0_pagemask", "c0_wired", "$7",
  "c0_badvaddr", "c0_count", "c0_entryhi", "c0_compare",
  "c0_status", "c0_cause", "c0_epc", "c0_prid",
  "c0_config", "c0_lladdr", "c0_watchlo", "c0_watchhi",
  "c0_xcontext", "$21", "$22", "c0_debug",
  "c0_depc", "c0_perfcnt", "c0_errctl", "c0_cacheerr_i",
  "c0_taglo_i", "c0_taghi_i", "c0_errorepc", "c0_desave",
};

static const struct mips_cp0sel_name mips_cp0sel_names_sb1[] =
{
  { 16, 1, "c0_config1" },
  { 18, 1, "c0_watchlo,1" },
  { 19, 1, "c0_watchhi,1" },
  { 22, 0, "c0_perftrace" },
  { 23, 3, "c0_edebug" },
  { 25, 1, "c0_perfcnt,1" },
  { 25, 2, "c0_perfcnt,2" },
  { 25, 3, "c0_perfcnt,3" },
  { 25, 4, "c0_perfcnt,4" },
  { 25, 5, "c0_perfcnt,5" },
  { 25, 6, "c0_perfcnt,6" },
  { 25, 7, "c0_perfcnt,7" },
  { 26, 1, "c0_buserr_pa" },
  { 27, 1, "c0_cacheerr_d" },
  { 27, 3, "c0_cacheerr_d_pa" },
  { 28, 1, "c0_datalo_i" },
  { 28, 2, "c0_taglo_d" },
  { 28, 3, "c0_datalo_d" },
  { 29, 1, "c0_datahi_i" },
  { 29, 2, "c0_taghi_d" },
  { 29, 3, "c0_datahi_d" },
};


static const char * const mips_cp0_names_xlr[32] = {
  "c0_index", "c0_random", "c0_entrylo0", "c0_entrylo1",
  "c0_context", "c0_pagemask", "c0_wired", "$7",
  "c0_badvaddr", "c0_count", "c0_entryhi", "c0_compare",
  "c0_status", "c0_cause", "c0_epc", "c0_prid",
  "c0_config", "c0_lladdr", "c0_watchlo", "c0_watchhi",
  "c0_xcontext", "$21", "$22", "c0_debug",
  "c0_depc", "c0_perfcnt", "c0_errctl", "c0_cacheerr_i",
  "c0_taglo_i", "c0_taghi_i", "c0_errorepc", "c0_desave",
};



static const struct mips_cp0sel_name mips_cp0sel_names_xlr[] = {
  { 9, 6, "c0_extintreq" },
  { 9, 7, "c0_extintmask" },
  { 15, 1, "c0_ebase" },
  { 16, 1, "c0_config1" },
  { 16, 2, "c0_config2" },
  { 16, 3, "c0_config3" },
  { 16, 7, "c0_procid2" },
  { 18, 1, "c0_watchlo,1" },
  { 18, 2, "c0_watchlo,2" },
  { 18, 3, "c0_watchlo,3" },
  { 18, 4, "c0_watchlo,4" },
  { 18, 5, "c0_watchlo,5" },
  { 18, 6, "c0_watchlo,6" },
  { 18, 7, "c0_watchlo,7" },
  { 19, 1, "c0_watchhi,1" },
  { 19, 2, "c0_watchhi,2" },
  { 19, 3, "c0_watchhi,3" },
  { 19, 4, "c0_watchhi,4" },
  { 19, 5, "c0_watchhi,5" },
  { 19, 6, "c0_watchhi,6" },
  { 19, 7, "c0_watchhi,7" },
  { 25, 1, "c0_perfcnt,1" },
  { 25, 2, "c0_perfcnt,2" },
  { 25, 3, "c0_perfcnt,3" },
  { 25, 4, "c0_perfcnt,4" },
  { 25, 5, "c0_perfcnt,5" },
  { 25, 6, "c0_perfcnt,6" },
  { 25, 7, "c0_perfcnt,7" },
  { 27, 1, "c0_cacheerr,1" },
  { 27, 2, "c0_cacheerr,2" },
  { 27, 3, "c0_cacheerr,3" },
  { 28, 1, "c0_datalo" },
  { 29, 1, "c0_datahi" }
};

static const char * const mips_hwr_names_numeric[32] =
{
  "$0", "$1", "$2", "$3", "$4", "$5", "$6", "$7",
  "$8", "$9", "$10", "$11", "$12", "$13", "$14", "$15",
  "$16", "$17", "$18", "$19", "$20", "$21", "$22", "$23",
  "$24", "$25", "$26", "$27", "$28", "$29", "$30", "$31"
};

static const char * const mips_hwr_names_mips3264r2[32] =
{
  "hwr_cpunum", "hwr_synci_step", "hwr_cc", "hwr_ccres",
  "$4", "$5", "$6", "$7",
  "$8", "$9", "$10", "$11", "$12", "$13", "$14", "$15",
  "$16", "$17", "$18", "$19", "$20", "$21", "$22", "$23",
  "$24", "$25", "$26", "$27", "$28", "$29", "$30", "$31"
};

static const char * const msa_control_names[32] =
{
  "msa_ir", "msa_csr", "msa_access", "msa_save",
  "msa_modify", "msa_request", "msa_map", "msa_unmap",
  "$8", "$9", "$10", "$11", "$12", "$13", "$14", "$15",
  "$16", "$17", "$18", "$19", "$20", "$21", "$22", "$23",
  "$24", "$25", "$26", "$27", "$28", "$29", "$30", "$31"
};

struct mips_abi_choice
{
  const char * name;
  const char * const *gpr_names;
  const char * const *fpr_names;
};


struct mips_abi_choice mips_abi_choices[] =
{
  { "numeric", mips_gpr_names_numeric, mips_fpr_names_numeric },

  { "o32", mips_gpr_names_oldabi, mips_fpr_names_32 },
  { "n32", mips_gpr_names_newabi, mips_fpr_names_n32 },

  { "n64", mips_gpr_names_newabi, mips_fpr_names_64 },
};

struct mips_arch_choice
{
  const char *name;
  int bfd_mach_valid;
  unsigned long bfd_mach;
  int processor;
  int isa;
  int ase;
  const char * const *cp0_names;
  const struct mips_cp0sel_name *cp0sel_names;
  unsigned int cp0sel_names_len;
  const char * const *cp1_names;
  const char * const *hwr_names;
};

const struct mips_arch_choice mips_arch_choices[] =
{
  { "numeric", 0, 0, 0, 0, 0,
    mips_cp0_names_numeric, 
# 465 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ((void *)0)
# 465 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },

  { "r3000", 1, 
# 468 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
               3000
# 468 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                , 
# 468 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                  3000
# 468 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                           , 
# 468 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                             1
# 468 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                      , 0,
    mips_cp0_names_r3000, 
# 469 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                         ((void *)0)
# 469 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                             , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },
  { "r3900", 1, 
# 471 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
               3900
# 471 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                , 
# 471 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                  3900
# 471 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                           , 
# 471 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                             1
# 471 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                      , 0,
    mips_cp0_names_numeric, 
# 472 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ((void *)0)
# 472 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },
  { "r4000", 1, 
# 474 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
               4000
# 474 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                , 
# 474 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                  4000
# 474 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                           , 
# 474 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                             3
# 474 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                      , 0,
    mips_cp0_names_r4000, 
# 475 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                         ((void *)0)
# 475 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                             , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },
  { "r4010", 1, 
# 477 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
               4010
# 477 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                , 
# 477 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                  4010
# 477 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                           , 
# 477 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                             2
# 477 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                      , 0,
    mips_cp0_names_numeric, 
# 478 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ((void *)0)
# 478 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },
  { "vr4100", 1, 
# 480 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                4100
# 480 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 , 
# 480 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                   4100
# 480 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                             , 
# 480 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                               3
# 480 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                        , 0,
    mips_cp0_names_numeric, 
# 481 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ((void *)0)
# 481 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },
  { "vr4111", 1, 
# 483 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                4111
# 483 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 , 
# 483 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                   4111
# 483 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                            , 
# 483 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                              3
# 483 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                       , 0,
    mips_cp0_names_numeric, 
# 484 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ((void *)0)
# 484 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },
  { "vr4120", 1, 
# 486 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                4120
# 486 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 , 
# 486 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                   4120
# 486 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                             , 
# 486 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                               3
# 486 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                        , 0,
    mips_cp0_names_numeric, 
# 487 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ((void *)0)
# 487 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },
  { "r4300", 1, 
# 489 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
               4300
# 489 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                , 
# 489 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                  4300
# 489 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                           , 
# 489 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                             3
# 489 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                      , 0,
    mips_cp0_names_numeric, 
# 490 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ((void *)0)
# 490 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },
  { "r4400", 1, 
# 492 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
               4400
# 492 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                , 
# 492 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                  4400
# 492 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                           , 
# 492 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                             3
# 492 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                      , 0,
    mips_cp0_names_r4000, 
# 493 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                         ((void *)0)
# 493 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                             , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },
  { "r4600", 1, 
# 495 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
               4600
# 495 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                , 
# 495 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                  4600
# 495 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                           , 
# 495 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                             3
# 495 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                      , 0,
    mips_cp0_names_numeric, 
# 496 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ((void *)0)
# 496 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },
  { "r4650", 1, 
# 498 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
               4650
# 498 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                , 
# 498 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                  4650
# 498 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                           , 
# 498 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                             3
# 498 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                      , 0,
    mips_cp0_names_numeric, 
# 499 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ((void *)0)
# 499 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },
  { "r5000", 1, 
# 501 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
               5000
# 501 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                , 
# 501 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                  5000
# 501 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                           , 
# 501 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                             4
# 501 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                      , 0,
    mips_cp0_names_numeric, 
# 502 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ((void *)0)
# 502 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },
  { "vr5400", 1, 
# 504 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                5400
# 504 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 , 
# 504 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                   5400
# 504 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                             , 
# 504 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                               4
# 504 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                        , 0,
    mips_cp0_names_numeric, 
# 505 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ((void *)0)
# 505 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },
  { "vr5500", 1, 
# 507 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                5500
# 507 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 , 
# 507 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                   5500
# 507 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                             , 
# 507 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                               4
# 507 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                        , 0,
    mips_cp0_names_numeric, 
# 508 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ((void *)0)
# 508 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },
  { "r5900", 1, 
# 510 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
               5900
# 510 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                , 
# 510 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                  5900
# 510 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                           , 
# 510 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                             3
# 510 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                      , 0,
    mips_cp0_names_r5900, 
# 511 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                         ((void *)0)
# 511 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                             , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },
  { "r6000", 1, 
# 513 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
               6000
# 513 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                , 
# 513 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                  6000
# 513 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                           , 
# 513 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                             2
# 513 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                      , 0,
    mips_cp0_names_numeric, 
# 514 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ((void *)0)
# 514 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },
  { "rm7000", 1, 
# 516 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                7000
# 516 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 , 
# 516 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                   7000
# 516 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                             , 
# 516 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                               4
# 516 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                        , 0,
    mips_cp0_names_numeric, 
# 517 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ((void *)0)
# 517 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },
  { "rm9000", 1, 
# 519 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                7000
# 519 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 , 
# 519 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                   7000
# 519 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                             , 
# 519 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                               4
# 519 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                        , 0,
    mips_cp0_names_numeric, 
# 520 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ((void *)0)
# 520 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },
  { "r8000", 1, 
# 522 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
               8000
# 522 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                , 
# 522 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                  8000
# 522 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                           , 
# 522 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                             4
# 522 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                      , 0,
    mips_cp0_names_numeric, 
# 523 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ((void *)0)
# 523 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },
  { "r10000", 1, 
# 525 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                10000
# 525 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                  , 
# 525 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                    10000
# 525 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                              , 
# 525 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                4
# 525 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                         , 0,
    mips_cp0_names_numeric, 
# 526 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ((void *)0)
# 526 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },
  { "r12000", 1, 
# 528 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                12000
# 528 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                  , 
# 528 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                    12000
# 528 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                              , 
# 528 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                4
# 528 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                         , 0,
    mips_cp0_names_numeric, 
# 529 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ((void *)0)
# 529 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },
  { "r14000", 1, 
# 531 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                14000
# 531 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                  , 
# 531 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                    14000
# 531 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                              , 
# 531 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                4
# 531 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                         , 0,
    mips_cp0_names_numeric, 
# 532 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ((void *)0)
# 532 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },
  { "r16000", 1, 
# 534 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                16000
# 534 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                  , 
# 534 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                    16000
# 534 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                              , 
# 534 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                4
# 534 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                         , 0,
    mips_cp0_names_numeric, 
# 535 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ((void *)0)
# 535 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },
  { "mips5", 1, 
# 537 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
               5
# 537 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                             , 
# 537 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                               5
# 537 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                        , 
# 537 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                          5
# 537 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                   , 0,
    mips_cp0_names_numeric, 
# 538 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ((void *)0)
# 538 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },






  { "mips32", 1, 
# 546 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                32
# 546 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                  , 
# 546 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                    32
# 546 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                              ,
    
# 547 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   6
# 547 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
             , 
# 547 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                0x00000100
# 547 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                             ,
    mips_cp0_names_mips3264,
    mips_cp0sel_names_mips3264, 
# 549 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                               (sizeof (
# 549 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               mips_cp0sel_names_mips3264
# 549 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                               ) / sizeof ((
# 549 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               mips_cp0sel_names_mips3264
# 549 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                               )[0]))
# 549 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                      ,
    mips_cp1_names_mips3264, mips_hwr_names_numeric },

  { "mips32r2", 1, 
# 552 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  33
# 552 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                      , 
# 552 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                        33
# 552 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                    ,
    
# 553 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   7
# 553 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
               ,
    (
# 554 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
    0x00000100 
# 554 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                  | 
# 554 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                    0x00000001 
# 554 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                            | 
# 554 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                              0x00000004 
# 554 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                        | 
# 554 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                          0x00000008 
# 554 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                  | 
# 554 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                    0x00000040
     
# 555 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
    | 
# 555 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
      0x00000080 
# 555 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
             | 
# 555 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
               0x00000010 
# 555 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                       | 
# 555 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                         0x00000200 
# 555 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                  | 
# 555 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                    0x00000800 
# 555 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                            | 
# 555 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                              0x00002000
# 555 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                     ),
    mips_cp0_names_mips3264r2,
    mips_cp0sel_names_mips3264r2, 
# 557 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 (sizeof (
# 557 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 mips_cp0sel_names_mips3264r2
# 557 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 ) / sizeof ((
# 557 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 mips_cp0sel_names_mips3264r2
# 557 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 )[0]))
# 557 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                          ,
    mips_cp1_names_mips3264, mips_hwr_names_mips3264r2 },

  { "mips32r3", 1, 
# 560 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  34
# 560 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                      , 
# 560 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                        34
# 560 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                    ,
    
# 561 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   8
# 561 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
               ,
    (
# 562 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
    0x00000100 
# 562 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                  | 
# 562 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                    0x00000001 
# 562 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                            | 
# 562 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                              0x00000004 
# 562 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                        | 
# 562 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                          0x00000008 
# 562 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                  | 
# 562 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                    0x00000040
     
# 563 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
    | 
# 563 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
      0x00000080 
# 563 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
             | 
# 563 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
               0x00000010 
# 563 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                       | 
# 563 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                         0x00000200 
# 563 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                  | 
# 563 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                    0x00000800 
# 563 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                            | 
# 563 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                              0x00002000
# 563 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                     ),
    mips_cp0_names_mips3264r2,
    mips_cp0sel_names_mips3264r2, 
# 565 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 (sizeof (
# 565 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 mips_cp0sel_names_mips3264r2
# 565 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 ) / sizeof ((
# 565 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 mips_cp0sel_names_mips3264r2
# 565 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 )[0]))
# 565 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                          ,
    mips_cp1_names_mips3264, mips_hwr_names_mips3264r2 },

  { "mips32r5", 1, 
# 568 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  36
# 568 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                      , 
# 568 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                        36
# 568 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                    ,
    
# 569 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   9
# 569 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
               ,
    (
# 570 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
    0x00000100 
# 570 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                  | 
# 570 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                    0x00000001 
# 570 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                            | 
# 570 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                              0x00000004 
# 570 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                        | 
# 570 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                          0x00000008 
# 570 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                  | 
# 570 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                    0x00000040
     
# 571 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
    | 
# 571 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
      0x00000080 
# 571 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
             | 
# 571 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
               0x00000010 
# 571 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                       | 
# 571 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                         0x00000200 
# 571 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                  | 
# 571 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                    0x00000800 
# 571 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                            | 
# 571 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                              0x00002000
# 571 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                     ),
    mips_cp0_names_mips3264r2,
    mips_cp0sel_names_mips3264r2, 
# 573 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 (sizeof (
# 573 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 mips_cp0sel_names_mips3264r2
# 573 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 ) / sizeof ((
# 573 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 mips_cp0sel_names_mips3264r2
# 573 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 )[0]))
# 573 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                          ,
    mips_cp1_names_mips3264, mips_hwr_names_mips3264r2 },

  { "mips32r6", 1, 
# 576 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  37
# 576 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                      , 
# 576 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                        37
# 576 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                    ,
    
# 577 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   10
# 577 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
               ,
    (
# 578 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
    0x00000008 
# 578 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
            | 
# 578 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
              0x00000800 
# 578 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                      | 
# 578 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                        0x00000200 
# 578 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 | 
# 578 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                   0x00002000 
# 578 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                           | 
# 578 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                             0x00000010 
# 578 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                     | 
# 578 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                       0x00000080 
# 578 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                              | 
# 578 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                                0x00000001
     
# 579 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
    | 
# 579 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
      0x00000004 
# 579 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                | 
# 579 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  0x00004000 
# 579 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                            | 
# 579 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                              0x00040000 
# 579 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                      | 
# 579 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                        0x00100000
# 579 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                ),
    mips_cp0_names_mips3264r2,
    mips_cp0sel_names_mips3264r2, 
# 581 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 (sizeof (
# 581 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 mips_cp0sel_names_mips3264r2
# 581 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 ) / sizeof ((
# 581 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 mips_cp0sel_names_mips3264r2
# 581 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 )[0]))
# 581 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                          ,
    mips_cp1_names_mips3264, mips_hwr_names_mips3264r2 },


  { "mips64", 1, 
# 585 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                64
# 585 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                  , 
# 585 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                    64
# 585 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                              ,
    
# 586 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   11
# 586 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
             , 
# 586 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                0x00000040 
# 586 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                           | 
# 586 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                             0x00000020
# 586 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                     ,
    mips_cp0_names_mips3264,
    mips_cp0sel_names_mips3264, 
# 588 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                               (sizeof (
# 588 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               mips_cp0sel_names_mips3264
# 588 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                               ) / sizeof ((
# 588 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               mips_cp0sel_names_mips3264
# 588 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                               )[0]))
# 588 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                      ,
    mips_cp1_names_mips3264, mips_hwr_names_numeric },

  { "mips64r2", 1, 
# 591 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  65
# 591 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                      , 
# 591 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                        65
# 591 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                    ,
    
# 592 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   12
# 592 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
               ,
    (
# 593 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
    0x00000040 
# 593 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
               | 
# 593 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                 0x00000001 
# 593 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                         | 
# 593 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           0x00000004 
# 593 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                     | 
# 593 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                       0x00000002 
# 593 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                 | 
# 593 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                   0x00000008 
# 593 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                           | 
# 593 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                             0x00000080
     
# 594 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
    | 
# 594 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
      0x00000010 
# 594 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
              | 
# 594 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                0x00000200 
# 594 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                         | 
# 594 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           0x00000400 
# 594 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                      | 
# 594 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                        0x00000800 
# 594 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                | 
# 594 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                  0x00001000 
# 594 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                            | 
# 594 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                              0x00002000
# 594 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                     ),
    mips_cp0_names_mips3264r2,
    mips_cp0sel_names_mips3264r2, 
# 596 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 (sizeof (
# 596 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 mips_cp0sel_names_mips3264r2
# 596 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 ) / sizeof ((
# 596 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 mips_cp0sel_names_mips3264r2
# 596 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 )[0]))
# 596 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                          ,
    mips_cp1_names_mips3264, mips_hwr_names_mips3264r2 },

  { "mips64r3", 1, 
# 599 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  66
# 599 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                      , 
# 599 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                        66
# 599 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                    ,
    
# 600 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   13
# 600 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
               ,
    (
# 601 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
    0x00000040 
# 601 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
               | 
# 601 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                 0x00000001 
# 601 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                         | 
# 601 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           0x00000004 
# 601 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                     | 
# 601 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                       0x00000002 
# 601 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                 | 
# 601 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                   0x00000008 
# 601 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                           | 
# 601 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                             0x00000080
     
# 602 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
    | 
# 602 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
      0x00000010 
# 602 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
              | 
# 602 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                0x00000200 
# 602 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                         | 
# 602 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           0x00000400 
# 602 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                      | 
# 602 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                        0x00000800 
# 602 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                | 
# 602 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                  0x00001000 
# 602 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                            | 
# 602 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                              0x00002000
# 602 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                     ),
    mips_cp0_names_mips3264r2,
    mips_cp0sel_names_mips3264r2, 
# 604 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 (sizeof (
# 604 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 mips_cp0sel_names_mips3264r2
# 604 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 ) / sizeof ((
# 604 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 mips_cp0sel_names_mips3264r2
# 604 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 )[0]))
# 604 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                          ,
    mips_cp1_names_mips3264, mips_hwr_names_mips3264r2 },

  { "mips64r5", 1, 
# 607 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  68
# 607 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                      , 
# 607 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                        68
# 607 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                    ,
    
# 608 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   14
# 608 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
               ,
    (
# 609 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
    0x00000040 
# 609 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
               | 
# 609 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                 0x00000001 
# 609 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                         | 
# 609 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           0x00000004 
# 609 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                     | 
# 609 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                       0x00000002 
# 609 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                 | 
# 609 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                   0x00000008 
# 609 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                           | 
# 609 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                             0x00000080
     
# 610 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
    | 
# 610 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
      0x00000010 
# 610 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
              | 
# 610 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                0x00000200 
# 610 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                         | 
# 610 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           0x00000400 
# 610 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                      | 
# 610 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                        0x00000800 
# 610 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                | 
# 610 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                  0x00001000 
# 610 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                            | 
# 610 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                              0x00002000
# 610 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                     ),
    mips_cp0_names_mips3264r2,
    mips_cp0sel_names_mips3264r2, 
# 612 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 (sizeof (
# 612 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 mips_cp0sel_names_mips3264r2
# 612 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 ) / sizeof ((
# 612 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 mips_cp0sel_names_mips3264r2
# 612 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 )[0]))
# 612 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                          ,
    mips_cp1_names_mips3264, mips_hwr_names_mips3264r2 },

  { "mips64r6", 1, 
# 615 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  69
# 615 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                      , 
# 615 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                        69
# 615 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                    ,
    
# 616 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   15
# 616 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
               ,
    (
# 617 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
    0x00000008 
# 617 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
            | 
# 617 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
              0x00000800 
# 617 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                      | 
# 617 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                        0x00001000 
# 617 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                  | 
# 617 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                    0x00002000 
# 617 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                            | 
# 617 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                              0x00000200 
# 617 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                       | 
# 617 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                         0x00000400
     
# 618 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
    | 
# 618 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
      0x00000010 
# 618 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
              | 
# 618 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                0x00000080 
# 618 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                       | 
# 618 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                         0x00000001 
# 618 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 | 
# 618 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                   0x00000004 
# 618 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                             | 
# 618 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                               0x00004000 
# 618 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                         | 
# 618 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                           0x00040000
     
# 619 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
    | 
# 619 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
      0x00080000 
# 619 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                | 
# 619 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  0x00100000
# 619 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                          ),
    mips_cp0_names_mips3264r2,
    mips_cp0sel_names_mips3264r2, 
# 621 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 (sizeof (
# 621 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 mips_cp0sel_names_mips3264r2
# 621 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 ) / sizeof ((
# 621 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 mips_cp0sel_names_mips3264r2
# 621 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 )[0]))
# 621 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                          ,
    mips_cp1_names_mips3264, mips_hwr_names_mips3264r2 },

  { "interaptiv-mr2", 1, 
# 624 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                        736550
# 624 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                    , 
# 624 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                      736550
# 624 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                        ,
    
# 625 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   8
# 625 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
               ,
    
# 626 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   0x00000080 
# 626 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
          | 
# 626 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
            0x00000008 
# 626 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                    | 
# 626 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                      0x00000001 
# 626 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                              | 
# 626 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                0x00000004 
# 626 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                          | 
# 626 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                            0x00008000 
# 626 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                         | 
# 626 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                           0x00010000
# 626 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                          ,
    mips_cp0_names_mips3264r2,
    mips_cp0sel_names_mips3264r2, 
# 628 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 (sizeof (
# 628 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 mips_cp0sel_names_mips3264r2
# 628 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 ) / sizeof ((
# 628 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 mips_cp0sel_names_mips3264r2
# 628 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 )[0]))
# 628 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                          ,
    mips_cp1_names_mips3264, mips_hwr_names_mips3264r2 },

  { "sb1", 1, 
# 631 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
             12310201
# 631 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                              , 
# 631 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                12310201
# 631 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                       ,
    
# 632 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   11 
# 632 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
              | 
# 632 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                0x00200000
# 632 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                        , 
# 632 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           0x00000040
# 632 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                     ,
    mips_cp0_names_sb1,
    mips_cp0sel_names_sb1, 
# 634 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                          (sizeof (
# 634 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                          mips_cp0sel_names_sb1
# 634 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                          ) / sizeof ((
# 634 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                          mips_cp0sel_names_sb1
# 634 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                          )[0]))
# 634 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                            ,
    mips_cp1_names_mips3264, mips_hwr_names_numeric },

  { "loongson2e", 1, 
# 637 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                      3001
# 637 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                               , 
# 637 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                 3001
# 637 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                ,
    
# 638 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   3 
# 638 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
             | 
# 638 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
               0x40000000
# 638 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 0, mips_cp0_names_numeric,
    
# 639 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   ((void *)0)
# 639 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
       , 0, mips_cp1_names_numeric, mips_hwr_names_numeric },

  { "loongson2f", 1, 
# 641 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                      3002
# 641 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                               , 
# 641 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                 3002
# 641 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                ,
    
# 642 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   3 
# 642 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
             | 
# 642 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
               0x80000000
# 642 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 
# 642 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 0x00200000
# 642 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                 , mips_cp0_names_numeric,
    
# 643 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   ((void *)0)
# 643 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
       , 0, mips_cp1_names_numeric, mips_hwr_names_numeric },


  { "loongson3a", 1, 
# 646 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                      3003
# 646 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                         , 
# 646 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                           3003
# 646 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                    ,
    
# 647 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   12
# 647 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
               , 
# 647 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                 0x00200000 
# 647 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                  | 
# 647 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                    0x00400000 
# 647 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                     | 
# 647 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                       0x00800000
# 647 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                       ,
    mips_cp0_names_numeric, 
# 648 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ((void *)0)
# 648 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 0, mips_cp1_names_mips3264,
    mips_hwr_names_numeric },

  { "gs464", 1, 
# 651 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                 3003
# 651 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                    , 
# 651 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                      3003
# 651 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                               ,
    
# 652 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   12
# 652 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
               , 
# 652 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                 0x00200000 
# 652 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                  | 
# 652 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                    0x00400000 
# 652 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                     | 
# 652 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                       0x00800000
# 652 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                       ,
    mips_cp0_names_numeric, 
# 653 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ((void *)0)
# 653 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 0, mips_cp1_names_mips3264,
    mips_hwr_names_numeric },

  { "gs464e", 1, 
# 656 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  3004
# 656 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                      , 
# 656 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                        3004
# 656 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                  ,
    
# 657 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   12
# 657 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
               , 
# 657 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                 0x00200000 
# 657 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                  | 
# 657 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                    0x00400000 
# 657 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                     | 
# 657 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                       0x00800000
    
# 658 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
   | 
# 658 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     0x01000000
# 658 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                      , mips_cp0_names_numeric, 
# 658 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                ((void *)0)
# 658 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                    , 0, mips_cp1_names_mips3264,
    mips_hwr_names_numeric },

  { "gs264e", 1, 
# 661 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  3005
# 661 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                      , 
# 661 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                        3005
# 661 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                  ,
    
# 662 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   12
# 662 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
               , 
# 662 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                 0x00200000 
# 662 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                  | 
# 662 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                    0x00400000 
# 662 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                     | 
# 662 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                       0x00800000
    
# 663 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
   | 
# 663 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     0x01000000 
# 663 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                       | 
# 663 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                         0x00000800 
# 663 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 | 
# 663 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                   0x00001000
# 663 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                            , mips_cp0_names_numeric, 
# 663 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                                      ((void *)0)
# 663 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                          ,
    0, mips_cp1_names_mips3264, mips_hwr_names_numeric },

  { "octeon", 1, 
# 666 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  6501
# 666 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                      , 
# 666 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                        6501
# 666 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                  ,
    
# 667 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   12 
# 667 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                | 
# 667 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  0x00000800
# 667 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                             , 0, mips_cp0_names_numeric, 
# 667 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                          ((void *)0)
# 667 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                              , 0,
    mips_cp1_names_mips3264, mips_hwr_names_numeric },

  { "octeon+", 1, 
# 670 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                   6601
# 670 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                        , 
# 670 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                          6601
# 670 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                     ,
    
# 671 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   12 
# 671 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                | 
# 671 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  0x00000200
# 671 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                              , 0, mips_cp0_names_numeric,
    
# 672 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   ((void *)0)
# 672 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
       , 0, mips_cp1_names_mips3264, mips_hwr_names_numeric },

  { "octeon2", 1, 
# 674 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                   6502
# 674 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                        , 
# 674 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                          6502
# 674 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                     ,
    
# 675 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   12 
# 675 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                | 
# 675 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  0x00000100
# 675 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                              , 0, mips_cp0_names_numeric,
    
# 676 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   ((void *)0)
# 676 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
       , 0, mips_cp1_names_mips3264, mips_hwr_names_numeric },

  { "octeon3", 1, 
# 678 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                   6503
# 678 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                        , 
# 678 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                          6503
# 678 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                     ,
    
# 679 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   14 
# 679 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                | 
# 679 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  0x00000040
# 679 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                              , 
# 679 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                0x00000200 
# 679 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                         | 
# 679 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                           0x00000400
# 679 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                     ,
    mips_cp0_names_numeric,
    
# 681 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   ((void *)0)
# 681 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
       , 0, mips_cp1_names_mips3264, mips_hwr_names_numeric },

  { "xlr", 1, 
# 683 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
             887682
# 683 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                              , 
# 683 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                887682
# 683 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                       ,
    
# 684 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   11 
# 684 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
              | 
# 684 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                0x00000020
# 684 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                        , 0,
    mips_cp0_names_xlr,
    mips_cp0sel_names_xlr, 
# 686 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                          (sizeof (
# 686 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                          mips_cp0sel_names_xlr
# 686 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                          ) / sizeof ((
# 686 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                          mips_cp0sel_names_xlr
# 686 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                          )[0]))
# 686 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                            ,
    mips_cp1_names_mips3264, mips_hwr_names_numeric },



  { "xlp", 1, 
# 691 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
             887682
# 691 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                              , 
# 691 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                887682
# 691 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                       ,
    
# 692 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   12 
# 692 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                | 
# 692 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  0x00000020
# 692 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                          , 0,
    mips_cp0_names_xlr,
    mips_cp0sel_names_xlr, 
# 694 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                          (sizeof (
# 694 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                          mips_cp0sel_names_xlr
# 694 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                          ) / sizeof ((
# 694 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                          mips_cp0sel_names_xlr
# 694 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                          )[0]))
# 694 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                            ,
    mips_cp1_names_mips3264, mips_hwr_names_numeric },



  { "", 1, 
# 699 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
           16
# 699 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                          , 
# 699 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                            16
# 699 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                      , 
# 699 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                        11
# 699 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                  ,
    
# 700 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   0x00008000 
# 700 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                | 
# 700 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  0x00010000
# 700 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 ,
    mips_cp0_names_numeric, 
# 701 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ((void *)0)
# 701 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               , 0, mips_cp1_names_numeric,
    mips_hwr_names_numeric },
};




static int mips_processor;
static int mips_isa;
static int mips_ase;
static int micromips_ase;
static const char * const *mips_gpr_names;
static const char * const *mips_fpr_names;
static const char * const *mips_cp0_names;
static const struct mips_cp0sel_name *mips_cp0sel_names;
static int mips_cp0sel_names_len;
static const char * const *mips_cp1_names;
static const char * const *mips_hwr_names;


static int no_aliases;

static const struct mips_abi_choice *
choose_abi_by_name (const char *name, unsigned int namelen)
{
  const struct mips_abi_choice *c;
  unsigned int i;

  for (i = 0, c = 
# 729 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                 ((void *)0)
# 729 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                     ; i < 
# 729 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           (sizeof (
# 729 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                           mips_abi_choices
# 729 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ) / sizeof ((
# 729 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                           mips_abi_choices
# 729 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           )[0])) 
# 729 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                         && c == 
# 729 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                                 ((void *)0)
# 729 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                     ; i++)
    if (strncmp (mips_abi_choices[i].name, name, namelen) == 0
 && strlen (mips_abi_choices[i].name) == namelen)
      c = &mips_abi_choices[i];

  return c;
}


static const struct mips_arch_choice *
choose_arch_by_name (const char *name, unsigned int namelen)
{
  const struct mips_arch_choice *c = 
# 741 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                    ((void *)0)
# 741 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                        ;
  unsigned int i;

  for (i = 0, c = 
# 744 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                 ((void *)0)
# 744 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                     ; i < 
# 744 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           (sizeof (
# 744 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                           mips_arch_choices
# 744 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ) / sizeof ((
# 744 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                           mips_arch_choices
# 744 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           )[0])) 
# 744 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                          && c == 
# 744 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                                  ((void *)0)
# 744 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                      ; i++)
    if (strncmp (mips_arch_choices[i].name, name, namelen) == 0
 && strlen (mips_arch_choices[i].name) == namelen)
      c = &mips_arch_choices[i];

  return c;
}

static const struct mips_arch_choice *
choose_arch_by_number (unsigned long mach)
{
  static unsigned long hint_bfd_mach;
  static const struct mips_arch_choice *hint_arch_choice;
  const struct mips_arch_choice *c;
  unsigned int i;



  if (hint_bfd_mach == mach
      && hint_arch_choice != 
# 763 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                            ((void *)0)
      
# 764 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     && hint_arch_choice->bfd_mach == hint_bfd_mach)
    return hint_arch_choice;

  for (i = 0, c = 
# 767 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                 ((void *)0)
# 767 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                     ; i < 
# 767 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           (sizeof (
# 767 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                           mips_arch_choices
# 767 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           ) / sizeof ((
# 767 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                           mips_arch_choices
# 767 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           )[0])) 
# 767 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                          && c == 
# 767 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                                  ((void *)0)
# 767 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                      ; i++)
    {
      if (mips_arch_choices[i].bfd_mach_valid
   && mips_arch_choices[i].bfd_mach == mach)
 {
   c = &mips_arch_choices[i];
   hint_bfd_mach = mach;
   hint_arch_choice = c;
 }
    }
  return c;
}



static int
is_newabi (Elf_Internal_Ehdr *header)
{

  if (header->e_ident[
# 786 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                     4
# 786 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                             ] == 
# 786 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                  2
# 786 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                            )
    return 1;


  if ((header->e_flags & 
# 790 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                        0x00000020
# 790 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                    ) != 0)
    return 1;

  return 0;
}



static int
is_micromips (Elf_Internal_Ehdr *header)
{
  if ((header->e_flags & 
# 801 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                        0x02000000
# 801 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                  ) != 0)
    return 1;

  return 0;
}



static unsigned long
mips_convert_abiflags_ases (unsigned long afl_ases)
{
  unsigned long opcode_ases = 0;

  if (afl_ases & 
# 814 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                0x00000001
# 814 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                           )
    opcode_ases |= 
# 815 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  0x00000001
# 815 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                         ;
  if (afl_ases & 
# 816 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                0x00000002
# 816 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                             )
    opcode_ases |= 
# 817 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  0x00000004
# 817 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                           ;
  if (afl_ases & 
# 818 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                0x00000004
# 818 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                           )
    opcode_ases |= 
# 819 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  0x00000008
# 819 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                         ;
  if (afl_ases & 
# 820 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                0x00000008
# 820 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                           )
    opcode_ases |= 
# 821 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  0x00000010
# 821 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                         ;
  if (afl_ases & 
# 822 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                0x00000010
# 822 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                            )
    opcode_ases |= 
# 823 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  0x00000020
# 823 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                          ;
  if (afl_ases & 
# 824 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                0x00000020
# 824 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                              )
    opcode_ases |= 
# 825 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  0x00000040
# 825 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                            ;
  if (afl_ases & 
# 826 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                0x00000040
# 826 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                          )
    opcode_ases |= 
# 827 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  0x00000080
# 827 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                        ;
  if (afl_ases & 
# 828 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                0x00000080
# 828 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 )
    opcode_ases |= 
# 829 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  0x00000100
# 829 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               ;
  if (afl_ases & 
# 830 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                0x00000100
# 830 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                            )
    opcode_ases |= 
# 831 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  0x00000200
# 831 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                          ;
  if (afl_ases & 
# 832 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                0x00000200
# 832 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                           )
    opcode_ases |= 
# 833 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  0x00000800
# 833 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                         ;
  if (afl_ases & 
# 834 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                0x00001000
# 834 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                           )
    opcode_ases |= 
# 835 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  0x00002000
# 835 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                         ;
  if (afl_ases & 
# 836 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                0x00002000
# 836 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                             )
    opcode_ases |= 
# 837 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  0x00004000
# 837 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                           ;
  if (afl_ases & 
# 838 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                0x00004000
# 838 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                )
    opcode_ases |= 
# 839 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  0x00008000
# 839 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                              ;
  return opcode_ases;
}



static unsigned long
mips_calculate_combination_ases (int opcode_isa, unsigned long opcode_ases)
{
  unsigned long combination_ases = 0;

  if ((opcode_ases & (
# 850 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                     0x00002000 
# 850 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                             | 
# 850 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                               0x00000200
# 850 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                       )) == (
# 850 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                              0x00002000 
# 850 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                      | 
# 850 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                        0x00000200
# 850 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                ))
    combination_ases |= 
# 851 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                       0x00020000
# 851 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                   ;
  if ((opcode_ases & (
# 852 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                     0x00008000 
# 852 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                  | 
# 852 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                    0x00000080
# 852 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                          )) == (
# 852 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                 0x00008000 
# 852 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                              | 
# 852 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                                0x00000080
# 852 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                      ))
    combination_ases |= 
# 853 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                       0x00010000
# 853 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                      ;
  if ((opcode_ases & 
# 854 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                    0x00000008
# 854 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                           )
      && ((opcode_isa & 
# 855 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                       0x0000001ful
# 855 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                    ) == 
# 855 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                         15
   
# 856 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
  || (opcode_isa & 
# 856 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                   0x0000001ful
# 856 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                ) == 
# 856 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                     10
# 856 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                 ))
    combination_ases |= 
# 857 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                       0x02000000
# 857 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 ;
  return combination_ases;
}

static void
set_default_mips_dis_options (struct disassemble_info *info)
{
  const struct mips_arch_choice *chosen_arch;






  mips_isa = 
# 871 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
            3
# 871 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                     ;
  mips_processor = 
# 872 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  3002
# 872 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 ;
  micromips_ase = 0;
  mips_ase = 0;
  mips_gpr_names = mips_gpr_names_oldabi;
  mips_fpr_names = mips_fpr_names_numeric;
  mips_cp0_names = mips_cp0_names_numeric;
  mips_cp0sel_names = 
# 878 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                     ((void *)0)
# 878 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                         ;
  mips_cp0sel_names_len = 0;
  mips_cp1_names = mips_cp1_names_numeric;
  mips_hwr_names = mips_hwr_names_numeric;
  no_aliases = 0;
# 892 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
  chosen_arch = choose_arch_by_number (info->mach);
  if (chosen_arch != 
# 893 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                    ((void *)0)
# 893 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                        )
    {
      mips_processor = chosen_arch->processor;
      mips_isa = chosen_arch->isa;
      mips_ase = chosen_arch->ase;
      mips_cp0_names = chosen_arch->cp0_names;
      mips_cp0sel_names = chosen_arch->cp0sel_names;
      mips_cp0sel_names_len = chosen_arch->cp0sel_names_len;
      mips_cp1_names = chosen_arch->cp1_names;
      mips_hwr_names = chosen_arch->hwr_names;
    }


  if (info->flavour == bfd_target_elf_flavour && info->section != 
# 906 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                                                 ((void *)0)
# 906 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                     )
    {
      struct bfd *abfd = info->section->owner;
      Elf_Internal_Ehdr *header = 
# 909 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 (((
# 909 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 abfd
# 909 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 ) -> tdata.elf_obj_data) -> elf_header)
# 909 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                     ;
      Elf_Internal_ABIFlags_v0 *abiflags = 
# 910 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                          ((void *)0)
# 910 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                              ;
# 921 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
      if (is_newabi (header))
 mips_gpr_names = mips_gpr_names_newabi;

      micromips_ase = is_micromips (header);

      if (abiflags)
 mips_ase |= mips_convert_abiflags_ases (abiflags->ases);
      else if (header->e_flags & 
# 928 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                0x08000000
# 928 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                     )
 mips_ase |= 
# 929 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
            0x00000020
# 929 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                    ;
    }

  mips_ase |= mips_calculate_combination_ases (mips_isa, mips_ase);
}




static bfd_boolean
parse_mips_ase_option (const char *option)
{
  if (
# 941 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     (strncmp ((
# 941 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     option
# 941 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ), (
# 941 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     "msa"
# 941 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ), sizeof (
# 941 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     "msa"
# 941 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ) - 1) == 0)
# 941 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 )
    {
      mips_ase |= 
# 943 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                 0x00000800
# 943 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                        ;
      if ((mips_isa & 
# 944 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                     0x0000001ful
# 944 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                  ) == 
# 944 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                       12
    
# 945 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
   || (mips_isa & 
# 945 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  0x0000001ful
# 945 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               ) == 
# 945 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                    13
    
# 946 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
   || (mips_isa & 
# 946 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  0x0000001ful
# 946 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               ) == 
# 946 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                    14
    
# 947 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
   || (mips_isa & 
# 947 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                  0x0000001ful
# 947 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               ) == 
# 947 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                    15
# 947 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                )
   mips_ase |= 
# 948 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
              0x00001000
# 948 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                       ;
      return 
# 949 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
            1
# 949 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                ;
    }

  if (
# 952 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     (strncmp ((
# 952 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     option
# 952 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ), (
# 952 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     "virt"
# 952 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ), sizeof (
# 952 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     "virt"
# 952 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ) - 1) == 0)
# 952 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                  )
    {
      mips_ase |= 
# 954 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                 0x00000200
# 954 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                         ;
      if (mips_isa & 
# 955 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                    12
   
# 956 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
  || mips_isa & 
# 956 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                13
   
# 957 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
  || mips_isa & 
# 957 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                14
   
# 958 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
  || mips_isa & 
# 958 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                15
# 958 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                            )
 mips_ase |= 
# 959 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
            0x00000400
# 959 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                      ;
      return 
# 960 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
            1
# 960 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                ;
    }

  if (
# 963 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     (strncmp ((
# 963 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     option
# 963 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ), (
# 963 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     "xpa"
# 963 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ), sizeof (
# 963 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     "xpa"
# 963 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ) - 1) == 0)
# 963 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 )
    {
      mips_ase |= 
# 965 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                 0x00002000
# 965 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                        ;
      return 
# 966 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
            1
# 966 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                ;
    }

  if (
# 969 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     (strncmp ((
# 969 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     option
# 969 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ), (
# 969 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     "ginv"
# 969 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ), sizeof (
# 969 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     "ginv"
# 969 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ) - 1) == 0)
# 969 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                  )
    {
      mips_ase |= 
# 971 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                 0x00100000
# 971 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                         ;
      return 
# 972 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
            1
# 972 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                ;
    }

  if (
# 975 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     (strncmp ((
# 975 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     option
# 975 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ), (
# 975 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     "loongson-mmi"
# 975 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ), sizeof (
# 975 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     "loongson-mmi"
# 975 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ) - 1) == 0)
# 975 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                          )
    {
      mips_ase |= 
# 977 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                 0x00200000
# 977 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 ;
      return 
# 978 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
            1
# 978 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                ;
    }

  if (
# 981 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     (strncmp ((
# 981 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     option
# 981 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ), (
# 981 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     "loongson-cam"
# 981 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ), sizeof (
# 981 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     "loongson-cam"
# 981 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ) - 1) == 0)
# 981 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                          )
    {
      mips_ase |= 
# 983 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                 0x00400000
# 983 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 ;
      return 
# 984 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
            1
# 984 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                ;
    }


  if (
# 988 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     (strncmp ((
# 988 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     option
# 988 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ), (
# 988 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     "loongson-ext2"
# 988 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ), sizeof (
# 988 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     "loongson-ext2"
# 988 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ) - 1) == 0)
# 988 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                           )
    {
      mips_ase |= 
# 990 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                 0x01000000
# 990 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                  ;
      return 
# 991 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
            1
# 991 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                ;
    }

  if (
# 994 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     (strncmp ((
# 994 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     option
# 994 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ), (
# 994 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     "loongson-ext"
# 994 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ), sizeof (
# 994 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     "loongson-ext"
# 994 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ) - 1) == 0)
# 994 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                          )
    {
      mips_ase |= 
# 996 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                 0x00800000
# 996 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 ;
      return 
# 997 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
            1
# 997 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                ;
    }

  return 
# 1000 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
        0
# 1000 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
             ;
}

static void
parse_mips_dis_option (const char *option, unsigned int len)
{
  unsigned int i, optionlen, vallen;
  const char *val;
  const struct mips_abi_choice *chosen_abi;
  const struct mips_arch_choice *chosen_arch;


  if (
# 1012 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     (strncmp ((
# 1012 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     option
# 1012 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ), (
# 1012 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     "no-aliases"
# 1012 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ), sizeof (
# 1012 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
     "no-aliases"
# 1012 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
     ) - 1) == 0)
# 1012 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                        )
    {
      no_aliases = 1;
      return;
    }

  if (parse_mips_ase_option (option))
    {
      mips_ase |= mips_calculate_combination_ases (mips_isa, mips_ase);
      return;
    }


  for (i = 0; i < len; i++)
    if (option[i] == '=')
      break;

  if (i == 0)
    return;
  if (i == len)
    return;
  if (i == (len - 1))
    return;

  optionlen = i;
  val = option + (optionlen + 1);
  vallen = len - (optionlen + 1);


  if (strlen ("abi") == optionlen && !strncmp ("abi", option, optionlen)) {
   chosen_abi = choose_abi_by_name (val, vallen);
   if (chosen_abi) {
    mips_gpr_names = chosen_abi->gpr_names;
    mips_fpr_names = chosen_abi->fpr_names;
   }
   return;
  }

  if (strncmp ("gpr-names", option, optionlen) == 0
      && strlen ("gpr-names") == optionlen)
    {
      chosen_abi = choose_abi_by_name (val, vallen);
      if (chosen_abi != 
# 1054 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                       ((void *)0)
# 1054 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                           )
 mips_gpr_names = chosen_abi->gpr_names;
      return;
    }

  if (strncmp ("fpr-names", option, optionlen) == 0
      && strlen ("fpr-names") == optionlen)
    {
      chosen_abi = choose_abi_by_name (val, vallen);
      if (chosen_abi != 
# 1063 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                       ((void *)0)
# 1063 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                           )
 mips_fpr_names = chosen_abi->fpr_names;
      return;
    }

  if (strncmp ("cp0-names", option, optionlen) == 0
      && strlen ("cp0-names") == optionlen)
    {
      chosen_arch = choose_arch_by_name (val, vallen);
      if (chosen_arch != 
# 1072 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                        ((void *)0)
# 1072 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                            )
 {
   mips_cp0_names = chosen_arch->cp0_names;
   mips_cp0sel_names = chosen_arch->cp0sel_names;
   mips_cp0sel_names_len = chosen_arch->cp0sel_names_len;
 }
      return;
    }

  if (strncmp ("cp1-names", option, optionlen) == 0
      && strlen ("cp1-names") == optionlen)
    {
      chosen_arch = choose_arch_by_name (val, vallen);
      if (chosen_arch != 
# 1085 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                        ((void *)0)
# 1085 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                            )
 mips_cp1_names = chosen_arch->cp1_names;
      return;
    }

  if (strncmp ("hwr-names", option, optionlen) == 0
      && strlen ("hwr-names") == optionlen)
    {
      chosen_arch = choose_arch_by_name (val, vallen);
      if (chosen_arch != 
# 1094 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                        ((void *)0)
# 1094 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                            )
 mips_hwr_names = chosen_arch->hwr_names;
      return;
    }

  if (strncmp ("reg-names", option, optionlen) == 0
      && strlen ("reg-names") == optionlen)
    {




      chosen_abi = choose_abi_by_name (val, vallen);
      if (chosen_abi != 
# 1107 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                       ((void *)0)
# 1107 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                           )
 {
   mips_gpr_names = chosen_abi->gpr_names;
   mips_fpr_names = chosen_abi->fpr_names;
 }
      chosen_arch = choose_arch_by_name (val, vallen);
      if (chosen_arch != 
# 1113 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                        ((void *)0)
# 1113 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                            )
 {
   mips_cp0_names = chosen_arch->cp0_names;
   mips_cp0sel_names = chosen_arch->cp0sel_names;
   mips_cp0sel_names_len = chosen_arch->cp0sel_names_len;
   mips_cp1_names = chosen_arch->cp1_names;
   mips_hwr_names = chosen_arch->hwr_names;
 }
      return;
    }


}

static void
parse_mips_dis_options (const char *options)
{
  const char *option_end;

  if (options == 
# 1132 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                ((void *)0)
# 1132 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                    )
    return;

  while (*options != '\0')
    {

      if (*options == ',')
 {
   options++;
   continue;
 }


      option_end = options + 1;
      while (*option_end != ',' && *option_end != '\0')
 option_end++;

      parse_mips_dis_option (options, option_end - options);



      options = option_end;
    }
}

static const struct mips_cp0sel_name *
lookup_mips_cp0sel_name (const struct mips_cp0sel_name *names,
    unsigned int len,
    unsigned int cp0reg,
    unsigned int sel)
{
  unsigned int i;

  for (i = 0; i < len; i++)
    if (names[i].cp0reg == cp0reg && names[i].sel == sel)
      return &names[i];
  return 
# 1168 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
        ((void *)0)
# 1168 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
            ;
}





static void
print_reg (struct disassemble_info *info, const struct mips_opcode *opcode,
    enum mips_reg_operand_type type, int regno)
{
  switch (type)
    {
    case OP_REG_GP:
      info->fprintf_func (info->stream, "%s", mips_gpr_names[regno]);
      break;

    case OP_REG_FP:
      info->fprintf_func (info->stream, "%s", mips_fpr_names[regno]);
      break;

    case OP_REG_CCC:
      if (opcode->pinfo & (
# 1190 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                          0x02000000 
# 1190 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                               | 
# 1190 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 0x01000000
# 1190 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                     ))
 info->fprintf_func (info->stream, "$fcc%d", regno);
      else
 info->fprintf_func (info->stream, "$cc%d", regno);
      break;

    case OP_REG_VEC:
      if (opcode->membership & 
# 1197 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                              0x01000000
# 1197 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                       )
 info->fprintf_func (info->stream, "$f%d", regno);
      else
 info->fprintf_func (info->stream, "$v%d", regno);
      break;

    case OP_REG_ACC:
      info->fprintf_func (info->stream, "$ac%d", regno);
      break;

    case OP_REG_COPRO:
      if (opcode->name[strlen (opcode->name) - 1] == '0')
 info->fprintf_func (info->stream, "%s", mips_cp0_names[regno]);
      else if (opcode->name[strlen (opcode->name) - 1] == '1')
 info->fprintf_func (info->stream, "%s", mips_cp1_names[regno]);
      else
 info->fprintf_func (info->stream, "$%d", regno);
      break;

    case OP_REG_HW:
      info->fprintf_func (info->stream, "%s", mips_hwr_names[regno]);
      break;

    case OP_REG_VF:
      info->fprintf_func (info->stream, "$vf%d", regno);
      break;

    case OP_REG_VI:
      info->fprintf_func (info->stream, "$vi%d", regno);
      break;

    case OP_REG_R5900_I:
      info->fprintf_func (info->stream, "$I");
      break;

    case OP_REG_R5900_Q:
      info->fprintf_func (info->stream, "$Q");
      break;

    case OP_REG_R5900_R:
      info->fprintf_func (info->stream, "$R");
      break;

    case OP_REG_R5900_ACC:
      info->fprintf_func (info->stream, "$ACC");
      break;

    case OP_REG_MSA:
      info->fprintf_func (info->stream, "$w%d", regno);
      break;

    case OP_REG_MSA_CTRL:
      info->fprintf_func (info->stream, "%s", msa_control_names[regno]);
      break;

    }
}



struct mips_print_arg_state {


  unsigned int last_int;



  enum mips_reg_operand_type last_reg_type;
  unsigned int last_regno;
  unsigned int dest_regno;
  unsigned int seen_dest;
};



static inline void
init_print_arg_state (struct mips_print_arg_state *state)
{
  
# 1275 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
 __builtin___memset_chk (
# 1275 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
 state
# 1275 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
 , 
# 1275 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
 0, sizeof (*state)
# 1275 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
 , __builtin_object_size (
# 1275 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
 state
# 1275 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
 , 0))
# 1275 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                   ;
}




static void
print_vu0_channel (struct disassemble_info *info,
     const struct mips_operand *operand, unsigned int uval)
{
  if (operand->size == 4)
    info->fprintf_func (info->stream, "%s%s%s%s",
   uval & 8 ? "x" : "",
   uval & 4 ? "y" : "",
   uval & 2 ? "z" : "",
   uval & 1 ? "w" : "");
  else if (operand->size == 2)
    info->fprintf_func (info->stream, "%c", "xyzw"[uval]);
  else
    abort ();
}



static void
mips_seen_register (struct mips_print_arg_state *state,
      unsigned int regno,
      enum mips_reg_operand_type reg_type)
{
  state->last_reg_type = reg_type;
  state->last_regno = regno;

  if (!state->seen_dest)
    {
      state->seen_dest = 1;
      state->dest_regno = regno;
    }
}






static void
mips_print_save_restore (struct disassemble_info *info, unsigned int amask,
    unsigned int nsreg, unsigned int ra,
    unsigned int s0, unsigned int s1,
    unsigned int frame_size)
{
  const fprintf_ftype infprintf = info->fprintf_func;
  unsigned int nargs, nstatics, smask, i, j;
  void *is = info->stream;
  const char *sep;

  if (amask == 
# 1330 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
              0xe
# 1330 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                )
    {
      nargs = 4;
      nstatics = 0;
    }
  else if (amask == 
# 1335 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                   0xb
# 1335 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                        )
    {
      nargs = 0;
      nstatics = 4;
    }
  else
    {
      nargs = amask >> 2;
      nstatics = amask & 3;
    }

  sep = "";
  if (nargs > 0)
    {
      infprintf (is, "%s", mips_gpr_names[4]);
      if (nargs > 1)
 infprintf (is, "-%s", mips_gpr_names[4 + nargs - 1]);
      sep = ",";
    }

  infprintf (is, "%s%d", sep, frame_size);

  if (ra)
    infprintf (is, ",%s", mips_gpr_names[31]);

  smask = 0;
  if (s0)
    smask |= 1 << 0;
  if (s1)
    smask |= 1 << 1;
  if (nsreg > 0)
    smask |= ((1 << nsreg) - 1) << 2;

  for (i = 0; i < 9; i++)
    if (smask & (1 << i))
      {
 infprintf (is, ",%s", mips_gpr_names[i == 8 ? 30 : (16 + i)]);

 for (j = i; smask & (2 << j); j++)
   continue;
 if (j > i)
   infprintf (is, "-%s", mips_gpr_names[j == 8 ? 30 : (16 + j)]);
 i = j + 1;
      }

  if (nstatics == 1)
    infprintf (is, ",%s", mips_gpr_names[7]);
  else if (nstatics > 0)
    infprintf (is, ",%s-%s",
        mips_gpr_names[7 - nstatics + 1],
        mips_gpr_names[7]);
}






static void
print_insn_arg (struct disassemble_info *info,
  struct mips_print_arg_state *state,
  const struct mips_opcode *opcode,
  const struct mips_operand *operand,
  bfd_vma base_pc,
  unsigned int uval)
{
  const fprintf_ftype infprintf = info->fprintf_func;
  void *is = info->stream;

  switch (operand->type)
    {
    case OP_INT:
      {
 const struct mips_int_operand *int_op;

 int_op = (const struct mips_int_operand *) operand;
 uval = mips_decode_int_operand (int_op, uval);
 state->last_int = uval;
 if (int_op->print_hex)
   infprintf (is, "0x%x", uval);
 else
   infprintf (is, "%d", uval);
      }
      break;

    case OP_MAPPED_INT:
      {
 const struct mips_mapped_int_operand *mint_op;

 mint_op = (const struct mips_mapped_int_operand *) operand;
 uval = mint_op->int_map[uval];
 state->last_int = uval;
 if (mint_op->print_hex)
   infprintf (is, "0x%x", uval);
 else
   infprintf (is, "%d", uval);
      }
      break;

    case OP_MSB:
      {
 const struct mips_msb_operand *msb_op;

 msb_op = (const struct mips_msb_operand *) operand;
 uval += msb_op->bias;
 if (msb_op->add_lsb)
   uval -= state->last_int;
 infprintf (is, "0x%x", uval);
      }
      break;

    case OP_REG:
    case OP_OPTIONAL_REG:
      {
 const struct mips_reg_operand *reg_op;

 reg_op = (const struct mips_reg_operand *) operand;
 uval = mips_decode_reg_operand (reg_op, uval);
 print_reg (info, opcode, reg_op->reg_type, uval);

 mips_seen_register (state, uval, reg_op->reg_type);
      }
      break;

    case OP_REG_PAIR:
      {
 const struct mips_reg_pair_operand *pair_op;

 pair_op = (const struct mips_reg_pair_operand *) operand;
 print_reg (info, opcode, pair_op->reg_type,
     pair_op->reg1_map[uval]);
 infprintf (is, ",");
 print_reg (info, opcode, pair_op->reg_type,
     pair_op->reg2_map[uval]);
      }
      break;

    case OP_PCREL:
      {
 const struct mips_pcrel_operand *pcrel_op;

 pcrel_op = (const struct mips_pcrel_operand *) operand;
 info->target = mips_decode_pcrel_operand (pcrel_op, base_pc, uval);



 if (pcrel_op->include_isa_bit
     && info->flavour != bfd_target_unknown_flavour)
   info->target &= -2;

 (*info->print_address_func) (info->target, info);
      }
      break;

    case OP_PERF_REG:
      infprintf (is, "%d", uval);
      break;

    case OP_ADDIUSP_INT:
      {
 int sval;

 sval = mips_signed_operand (operand, uval) * 4;
 if (sval >= -8 && sval < 8)
   sval ^= 0x400;
 infprintf (is, "%d", sval);
 break;
      }

    case OP_CLO_CLZ_DEST:
      {
 unsigned int reg1, reg2;

 reg1 = uval & 31;
 reg2 = uval >> 5;

 if (reg1 == reg2 || reg2 == 0)
   infprintf (is, "%s", mips_gpr_names[reg1]);
 else if (reg1 == 0)
   infprintf (is, "%s", mips_gpr_names[reg2]);
 else

   infprintf (is, "%s or %s", mips_gpr_names[reg1],
       mips_gpr_names[reg2]);
      }
      break;

    case OP_SAME_RS_RT:
    case OP_CHECK_PREV:
    case OP_NON_ZERO_REG:
      {
 print_reg (info, opcode, OP_REG_GP, uval & 31);
 mips_seen_register (state, uval, OP_REG_GP);
      }
      break;

    case OP_LWM_SWM_LIST:
      if (operand->size == 2)
 {
   if (uval == 0)
     infprintf (is, "%s,%s",
         mips_gpr_names[16],
         mips_gpr_names[31]);
   else
     infprintf (is, "%s-%s,%s",
         mips_gpr_names[16],
         mips_gpr_names[16 + uval],
         mips_gpr_names[31]);
 }
      else
 {
   int s_reg_encode;

   s_reg_encode = uval & 0xf;
   if (s_reg_encode != 0)
     {
       if (s_reg_encode == 1)
  infprintf (is, "%s", mips_gpr_names[16]);
       else if (s_reg_encode < 9)
  infprintf (is, "%s-%s",
      mips_gpr_names[16],
      mips_gpr_names[15 + s_reg_encode]);
       else if (s_reg_encode == 9)
  infprintf (is, "%s-%s,%s",
      mips_gpr_names[16],
      mips_gpr_names[23],
      mips_gpr_names[30]);
       else
  infprintf (is, "UNKNOWN");
     }

   if (uval & 0x10)
     {
       if (s_reg_encode == 0)
  infprintf (is, "%s", mips_gpr_names[31]);
       else
  infprintf (is, ",%s", mips_gpr_names[31]);
     }
 }
      break;

    case OP_ENTRY_EXIT_LIST:
      {
 const char *sep;
 unsigned int amask, smask;

 sep = "";
 amask = (uval >> 3) & 7;
 if (amask > 0 && amask < 5)
   {
     infprintf (is, "%s", mips_gpr_names[4]);
     if (amask > 1)
       infprintf (is, "-%s", mips_gpr_names[amask + 3]);
     sep = ",";
   }

 smask = (uval >> 1) & 3;
 if (smask == 3)
   {
     infprintf (is, "%s??", sep);
     sep = ",";
   }
 else if (smask > 0)
   {
     infprintf (is, "%s%s", sep, mips_gpr_names[16]);
     if (smask > 1)
       infprintf (is, "-%s", mips_gpr_names[smask + 15]);
     sep = ",";
   }

 if (uval & 1)
   {
     infprintf (is, "%s%s", sep, mips_gpr_names[31]);
     sep = ",";
   }

 if (amask == 5 || amask == 6)
   {
     infprintf (is, "%s%s", sep, mips_fpr_names[0]);
     if (amask == 6)
       infprintf (is, "-%s", mips_fpr_names[1]);
   }
      }
      break;

    case OP_SAVE_RESTORE_LIST:

      abort ();

    case OP_MDMX_IMM_REG:
      {
 unsigned int vsel;

 vsel = uval >> 5;
 uval &= 31;
 if ((vsel & 0x10) == 0)
   {
     int fmt;

     vsel &= 0x0f;
     for (fmt = 0; fmt < 3; fmt++, vsel >>= 1)
       if ((vsel & 1) == 0)
  break;
     print_reg (info, opcode, OP_REG_VEC, uval);
     infprintf (is, "[%d]", vsel >> 1);
   }
 else if ((vsel & 0x08) == 0)
   print_reg (info, opcode, OP_REG_VEC, uval);
 else
   infprintf (is, "0x%x", uval);
      }
      break;

    case OP_REPEAT_PREV_REG:
      print_reg (info, opcode, state->last_reg_type, state->last_regno);
      break;

    case OP_REPEAT_DEST_REG:
      print_reg (info, opcode, state->last_reg_type, state->dest_regno);
      break;

    case OP_PC:
      infprintf (is, "$pc");
      break;

    case OP_REG28:
      print_reg (info, opcode, OP_REG_GP, 28);
      break;

    case OP_VU0_SUFFIX:
    case OP_VU0_MATCH_SUFFIX:
      print_vu0_channel (info, operand, uval);
      break;

    case OP_IMM_INDEX:
      infprintf (is, "[%d]", uval);
      break;

    case OP_REG_INDEX:
      infprintf (is, "[");
      print_reg (info, opcode, OP_REG_GP, uval);
      infprintf (is, "]");
      break;
    }
}




static bfd_boolean
validate_insn_args (const struct mips_opcode *opcode,
      const struct mips_operand *(*decode_operand) (const char *),
      unsigned int insn)
{
  struct mips_print_arg_state state;
  const struct mips_operand *operand;
  const char *s;
  unsigned int uval;

  init_print_arg_state (&state);
  for (s = opcode->args; *s; ++s)
    {
      switch (*s)
 {
 case ',':
 case '(':
 case ')':
   break;

 case '#':
   ++s;
   break;

 default:
   operand = decode_operand (s);

   if (operand)
     {
       uval = mips_extract_operand (operand, insn);
       switch (operand->type)
  {
  case OP_REG:
  case OP_OPTIONAL_REG:
    {
      const struct mips_reg_operand *reg_op;

      reg_op = (const struct mips_reg_operand *) operand;
      uval = mips_decode_reg_operand (reg_op, uval);
      mips_seen_register (&state, uval, reg_op->reg_type);
    }
  break;

  case OP_SAME_RS_RT:
    {
      unsigned int reg1, reg2;

      reg1 = uval & 31;
      reg2 = uval >> 5;

      if (reg1 != reg2 || reg1 == 0)
        return 
# 1735 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
              0
# 1735 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                   ;
    }
  break;

  case OP_CHECK_PREV:
    {
      const struct mips_check_prev_operand *prev_op;

      prev_op = (const struct mips_check_prev_operand *) operand;

      if (!prev_op->zero_ok && uval == 0)
        return 
# 1746 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
              0
# 1746 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                   ;

      if (((prev_op->less_than_ok && uval < state.last_regno)
   || (prev_op->greater_than_ok && uval > state.last_regno)
   || (prev_op->equal_ok && uval == state.last_regno)))
        break;

      return 
# 1753 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
            0
# 1753 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                 ;
    }

  case OP_NON_ZERO_REG:
    {
      if (uval == 0)
        return 
# 1759 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
              0
# 1759 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                   ;
    }
  break;

  case OP_INT:
  case OP_MAPPED_INT:
  case OP_MSB:
  case OP_REG_PAIR:
  case OP_PCREL:
  case OP_PERF_REG:
  case OP_ADDIUSP_INT:
  case OP_CLO_CLZ_DEST:
  case OP_LWM_SWM_LIST:
  case OP_ENTRY_EXIT_LIST:
  case OP_MDMX_IMM_REG:
  case OP_REPEAT_PREV_REG:
  case OP_REPEAT_DEST_REG:
  case OP_PC:
  case OP_REG28:
  case OP_VU0_SUFFIX:
  case OP_VU0_MATCH_SUFFIX:
  case OP_IMM_INDEX:
  case OP_REG_INDEX:
  case OP_SAVE_RESTORE_LIST:
    break;
  }
     }
   if (*s == 'm' || *s == '+' || *s == '-')
     ++s;
 }
    }
  return 
# 1790 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
        1
# 1790 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
            ;
}






static void
print_insn_args (struct disassemble_info *info,
   const struct mips_opcode *opcode,
   const struct mips_operand *(*decode_operand) (const char *),
   unsigned int insn, bfd_vma insn_pc, unsigned int length)
{
  const fprintf_ftype infprintf = info->fprintf_func;
  void *is = info->stream;
  struct mips_print_arg_state state;
  const struct mips_operand *operand;
  const char *s;

  init_print_arg_state (&state);
  for (s = opcode->args; *s; ++s)
    {
      switch (*s)
 {
 case ',':
    infprintf(is, "%c ", *s);
    break;
 case '(':
 case ')':
   infprintf (is, "%c", *s);
   break;

 case '#':
   ++s;
   infprintf (is, "%c%c", *s, *s);
   break;

 default:
   operand = decode_operand (s);
   if (!operand)
     {

       infprintf (is,
    
# 1834 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   (
# 1834 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
   "# internal error, undefined operand in `%s %s'"
# 1834 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
   )
# 1834 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                      ,
    opcode->name, opcode->args);
       return;
     }

   if (operand->type == OP_SAVE_RESTORE_LIST)
     {

       unsigned int amask = (insn >> 15) & 0xf;
       unsigned int nsreg = (insn >> 23) & 0x7;
       unsigned int ra = insn & 0x1000;
       unsigned int s0 = insn & 0x800;
       unsigned int s1 = insn & 0x400;
       unsigned int frame_size = (((insn >> 15) & 0xf0)
      | ((insn >> 6) & 0x0f)) * 8;
       mips_print_save_restore (info, amask, nsreg, ra, s0, s1,
           frame_size);
     }
   else if (operand->type == OP_REG
     && s[1] == ','
     && s[2] == 'H'
     && opcode->name[strlen (opcode->name) - 1] == '0')
     {

       const struct mips_cp0sel_name *n;
       unsigned int reg, sel;

       reg = mips_extract_operand (operand, insn);
       s += 2;
       operand = decode_operand (s);
       sel = mips_extract_operand (operand, insn);






       n = lookup_mips_cp0sel_name (mips_cp0sel_names,
        mips_cp0sel_names_len,
        reg, sel);
       if (n != 
# 1874 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
               ((void *)0)
# 1874 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                   )
  infprintf (is, "%s", n->name);
       else
  infprintf (is, "$%d,%d", reg, sel);
     }
   else
     {
       bfd_vma base_pc = insn_pc;




       if (operand->type == OP_PCREL)
  {
    const struct mips_pcrel_operand *pcrel_op;

    pcrel_op = (const struct mips_pcrel_operand *) operand;


    if (pcrel_op->include_isa_bit)
      base_pc += length;
  }

       print_insn_arg (info, &state, opcode, operand, base_pc,
         mips_extract_operand (operand, insn));
     }
   if (*s == 'm' || *s == '+' || *s == '-')
     ++s;
   break;
 }
    }
}






static int
print_insn_mips (bfd_vma memaddr,
   int word,
   struct disassemble_info *info)
{


  static const struct mips_opcode *mips_hash[
# 1919 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                            0x3f 
# 1919 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                       + 1];
  const fprintf_ftype infprintf = info->fprintf_func;
  const struct mips_opcode *op;
  static bfd_boolean init = 0;
  void *is = info->stream;


  if (! init)
    {
      unsigned int i;

      for (i = 0; i <= 
# 1930 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                      0x3f
# 1930 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                ; i++)
 {
   for (op = mips_opcodes; op < &mips_opcodes[
# 1932 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                             bfd_mips_num_opcodes
# 1932 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                       ]; op++)
     {
       if (op->pinfo == 
# 1934 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                       0xffffffff
    
# 1935 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
   || (no_aliases && (op->pinfo2 & 
# 1935 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                   0x00000001
# 1935 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                              )))
  continue;
       if (i == (((op->match) >> 
# 1937 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
               26
# 1937 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
               ) & 
# 1937 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
               0x3f
# 1937 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
               ))
  {
    mips_hash[i] = op;
    break;
  }
     }
 }

      init = 1;
    }

  info->bytes_per_chunk = 4;
  info->display_endian = info->endian;
  info->insn_info_valid = 1;
  info->branch_delay_insns = 0;
  info->data_size = 0;
  info->insn_type = dis_nonbranch;
  info->target = 0;
  info->target2 = 0;

  op = mips_hash[(((word) >> 
# 1957 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                26
# 1957 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                ) & 
# 1957 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                0x3f
# 1957 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                )];
  if (op != 
# 1958 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
           ((void *)0)
# 1958 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
               )
    {
      for (; op < &mips_opcodes[
# 1960 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                               bfd_mips_num_opcodes
# 1960 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                         ]; op++)
 {
   if (op->pinfo != 
# 1962 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                   0xffffffff
       
# 1963 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
      && !(no_aliases && (op->pinfo2 & 
# 1963 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                       0x00000001
# 1963 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                  ))
       && (word & op->mask) == op->match)
     {

       if (!opcode_is_member (op, mips_isa, mips_ase, mips_processor)
   && (strcmp (op->name, "jalx")
       || (mips_isa & 
# 1969 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                     0x0000001ful
# 1969 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                  ) == 
# 1969 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                       10
       
# 1970 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
      || (mips_isa & 
# 1970 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                     0x0000001ful
# 1970 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                  ) == 
# 1970 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                       15
# 1970 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                   ))
  continue;


       if ((op->pinfo & 
# 1974 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                       0x00002000
# 1974 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                               ) != 0)
         {
    if ((op->pinfo & (
# 1976 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                     0x00000040 
# 1976 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                       | 
# 1976 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                         0x00000001
# 1976 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                     )) != 0)
      info->insn_type = dis_jsr;
    else
      info->insn_type = dis_branch;
    info->branch_delay_insns = 1;
  }
       else if ((op->pinfo & (
# 1982 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                             0x00004000
         
# 1983 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
        | 
# 1983 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
          0x00008000
# 1983 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                 )) != 0)
  {
    if ((op->pinfo & 
# 1985 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                    0x00000040
# 1985 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                     ) != 0)
      info->insn_type = dis_condjsr;
    else
      info->insn_type = dis_condbranch;
    info->branch_delay_insns = 1;
  }
       else if ((op->pinfo & (
# 1991 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                             0x00800000
         
# 1992 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
        | 
# 1992 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
          0x00000800
# 1992 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                          )) != 0)
  info->insn_type = dis_dref;

       if (!validate_insn_args (op, decode_mips_operand, word))
  continue;

       infprintf (is, "%s", op->name);
       if (op->pinfo2 & 
# 1999 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                       0x00004000
# 1999 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                               )
  {
    unsigned int uval;

    infprintf (is, ".");
    uval = mips_extract_operand (&mips_vu0_channel_mask, word);
    print_vu0_channel (info, &mips_vu0_channel_mask, uval);
  }

       if (op->args[0])
  {


      infprintf (is, " ");
    print_insn_args (info, op, decode_mips_operand, word,
       memaddr, 4);
  }

       return 4;
     }
 }
    }



  info->insn_type = dis_noninsn;
  infprintf (is, "0x%x", word);
  return 4;
}



static void
print_mips16_insn_arg (struct disassemble_info *info,
         struct mips_print_arg_state *state,
         const struct mips_opcode *opcode,
         char type, bfd_vma memaddr,
         unsigned insn, bfd_boolean use_extend,
         unsigned extend, bfd_boolean is_offset)
{
  const fprintf_ftype infprintf = info->fprintf_func;
  void *is = info->stream;
  const struct mips_operand *operand, *ext_operand;
  unsigned short ext_size;
  unsigned int uval;
  bfd_vma baseaddr;

  if (!use_extend)
    extend = 0;

  switch (type)
    {
    case ',':
    case '(':
    case ')':
      infprintf (is, "%c", type);
      break;

    default:
      operand = decode_mips16_operand (type, 
# 2058 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                            0
# 2058 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                 );
      if (!operand)
 {

   infprintf (is, 
# 2062 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                 (
# 2062 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                 "# internal error, undefined operand in `%s %s'"
# 2062 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                 )
# 2062 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                                    ,
       opcode->name, opcode->args);
   return;
 }

      if (operand->type == OP_SAVE_RESTORE_LIST)
 {


   unsigned int amask = extend & 0xf;
   unsigned int nsreg = (extend >> 8) & 0x7;
   unsigned int ra = insn & 0x40;
   unsigned int s0 = insn & 0x20;
   unsigned int s1 = insn & 0x10;
   unsigned int frame_size = ((extend & 0xf0) | (insn & 0x0f)) * 8;
   if (frame_size == 0 && !use_extend)
     frame_size = 128;
   mips_print_save_restore (info, amask, nsreg, ra, s0, s1, frame_size);
   break;
 }

      if (is_offset && operand->type == OP_INT)
 {
   const struct mips_int_operand *int_op;

   int_op = (const struct mips_int_operand *) operand;
   info->insn_type = dis_dref;
   info->data_size = 1 << int_op->shift;
 }

      ext_size = 0;
      if (use_extend)
 {
   ext_operand = decode_mips16_operand (type, 
# 2095 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                             1
# 2095 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                 );
   if (ext_operand != operand
       || (operand->type == OP_INT && operand->lsb == 0
    && mips_opcode_32bit_p (opcode)))
     {
       ext_size = ext_operand->size;
       operand = ext_operand;
     }
 }
      if (operand->size == 26)
 uval = ((extend & 0x1f) << 21) | ((extend & 0x3e0) << 11) | insn;
      else if (ext_size == 16 || ext_size == 9)
 uval = ((extend & 0x1f) << 11) | (extend & 0x7e0) | (insn & 0x1f);
      else if (ext_size == 15)
 uval = ((extend & 0xf) << 11) | (extend & 0x7f0) | (insn & 0xf);
      else if (ext_size == 6)
 uval = ((extend >> 6) & 0x1f) | (extend & 0x20);
      else
 uval = mips_extract_operand (operand, (extend << 16) | insn);
      if (ext_size == 9)
 uval &= (1U << ext_size) - 1;

      baseaddr = memaddr + 2;
      if (operand->type == OP_PCREL)
 {
   const struct mips_pcrel_operand *pcrel_op;

   pcrel_op = (const struct mips_pcrel_operand *) operand;
   if (!pcrel_op->include_isa_bit && use_extend)
     baseaddr = memaddr - 2;
   else if (!pcrel_op->include_isa_bit)
     {
       bfd_byte buffer[2];
# 2136 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
       if (info->read_memory_func (memaddr - 4, buffer, 2, info) == 0
    && (((info->endian == BFD_ENDIAN_BIG
   ? bfd_getb16 (buffer)
   : bfd_getl16 (buffer))
         & 0xf800) == 0x1800))
  baseaddr = memaddr - 4;
       else if (info->read_memory_func (memaddr - 2, buffer, 2,
            info) == 0
         && (((info->endian == BFD_ENDIAN_BIG
        ? bfd_getb16 (buffer)
        : bfd_getl16 (buffer))
       & 0xf89f) == 0xe800)
         && (((info->endian == BFD_ENDIAN_BIG
        ? bfd_getb16 (buffer)
        : bfd_getl16 (buffer))
       & 0x0060) != 0x0060))
  baseaddr = memaddr - 2;
       else
  baseaddr = memaddr;
     }
 }

      print_insn_arg (info, state, opcode, operand, baseaddr + 1, uval);
      break;
    }
}
# 2171 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
static bfd_boolean
is_mips16_plt_tail (struct disassemble_info *info, bfd_vma addr)
{
  if (info->symbols
      && info->symbols[0]
      && (info->symbols[0]->flags & (1 << 21))
      && addr == 
# 2177 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                (((
# 2177 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                info->symbols[0]
# 2177 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                )->section->vma) + (
# 2177 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                info->symbols[0]
# 2177 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                )->value) 
# 2177 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                     + 12)
    return 
# 2178 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
          1
# 2178 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
              ;

  return 
# 2180 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
        0
# 2180 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
             ;
}



enum match_kind
{
  MATCH_NONE,
  MATCH_FULL,
  MATCH_SHORT
};



static int
print_insn_mips16 (bfd_vma memaddr, struct disassemble_info *info)
{
  const fprintf_ftype infprintf = info->fprintf_func;
  int status;
  bfd_byte buffer[4];
  const struct mips_opcode *op, *opend;
  struct mips_print_arg_state state;
  void *is = info->stream;
  bfd_boolean have_second;
  bfd_boolean extend_only;
  unsigned int second;
  unsigned int first;
  unsigned int full;

  info->bytes_per_chunk = 2;
  info->display_endian = info->endian;
  info->insn_info_valid = 1;
  info->branch_delay_insns = 0;
  info->data_size = 0;
  info->target = 0;
  info->target2 = 0;




  if (is_mips16_plt_tail (info, memaddr))
    {
      info->insn_type = dis_noninsn;
      status = (*info->read_memory_func) (memaddr, buffer, 4, info);
      if (status == 0)
 {
   unsigned int gotslot;

   if (info->endian == BFD_ENDIAN_BIG)
     gotslot = bfd_getb32 (buffer);
   else
     gotslot = bfd_getl32 (buffer);
   infprintf (is, ".word\t0x%x", gotslot);

   return 4;
 }
    }
  else
    {
      info->insn_type = dis_nonbranch;
      status = (*info->read_memory_func) (memaddr, buffer, 2, info);
    }
  if (status != 0)
    {
      (*info->memory_error_func) (status, memaddr, info);
      return -1;
    }

  extend_only = 
# 2248 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
               0
# 2248 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                    ;

  if (info->endian == BFD_ENDIAN_BIG)
    first = bfd_getb16 (buffer);
  else
    first = bfd_getl16 (buffer);

  status = (*info->read_memory_func) (memaddr + 2, buffer, 2, info);
  if (status == 0)
    {
      have_second = 
# 2258 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                   1
# 2258 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                       ;
      if (info->endian == BFD_ENDIAN_BIG)
 second = bfd_getb16 (buffer);
      else
 second = bfd_getl16 (buffer);
      full = (first << 16) | second;
    }
  else
    {
      have_second = 
# 2267 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                   0
# 2267 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                        ;
      second = 0;
      full = first;
    }



  opend = mips16_opcodes + bfd_mips16_num_opcodes;
  for (op = mips16_opcodes; op < opend; op++)
    {
      enum match_kind match;

      if (!opcode_is_member (op, mips_isa, mips_ase, mips_processor))
 continue;

      if (op->pinfo == 
# 2282 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                      0xffffffff
   
# 2283 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
  || (no_aliases && (op->pinfo2 & 
# 2283 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                  0x00000001
# 2283 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                             )))
 match = MATCH_NONE;
      else if (mips_opcode_32bit_p (op))
 {
   if (have_second
       && (full & op->mask) == op->match)
     match = MATCH_FULL;
   else
     match = MATCH_NONE;
 }
      else if ((first & op->mask) == op->match)
 {
   match = MATCH_SHORT;
   second = 0;
   full = first;
 }
      else if ((first & 0xf800) == 0xf000
        && have_second
        && !extend_only
        && (second & op->mask) == op->match)
 {
   if (op->pinfo2 & 
# 2304 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                   0x00010000
# 2304 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                   )
     {
       match = MATCH_NONE;
       extend_only = 
# 2307 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                    1
# 2307 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                        ;
     }
   else
     match = MATCH_FULL;
 }
      else
 match = MATCH_NONE;

      if (match != MATCH_NONE)
 {
   const char *s;

   infprintf (is, "%s", op->name);
   if (op->args[0] != '\0')

      infprintf (is, " ");

   init_print_arg_state (&state);
   for (s = op->args; *s != '\0'; s++)
     {
       if (*s == ','
    && s[1] == 'w'
    && (((full) >> 
# 2329 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
      8
# 2329 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
      ) & 
# 2329 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
      0x7
# 2329 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
      ) == (((full) >> 
# 2329 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           5
# 2329 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                           ) & 
# 2329 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           0x7
# 2329 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                           ))
  {

    ++s;
    continue;
  }
       if (*s == ','
    && s[1] == 'v'
    && (((full) >> 
# 2337 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
      2
# 2337 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
      ) & 
# 2337 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
      0x7
# 2337 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
      ) == (((full) >> 
# 2337 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           8
# 2337 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                           ) & 
# 2337 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                           0x7
# 2337 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                           ))
  {

    ++s;
    continue;
  }
       if (s[0] == 'N'
    && s[1] == ','
    && s[2] == 'O'
    && op->name[strlen (op->name) - 1] == '0')
  {

    const struct mips_cp0sel_name *n;
    const struct mips_operand *operand;
    unsigned int reg, sel;

    operand = decode_mips16_operand (*s, 
# 2353 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                        1
# 2353 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                            );
    reg = mips_extract_operand (operand, (first << 16) | second);
    s += 2;
    operand = decode_mips16_operand (*s, 
# 2356 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                        1
# 2356 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                            );
    sel = mips_extract_operand (operand, (first << 16) | second);






    n = lookup_mips_cp0sel_name (mips_cp0sel_names,
            mips_cp0sel_names_len,
            reg, sel);
    if (n != 
# 2367 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
            ((void *)0)
# 2367 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                )
      infprintf (is, "%s", n->name);
    else
      infprintf (is, "$%d,%d", reg, sel);
  }
       else
  switch (match)
    {
      case MATCH_FULL:
        print_mips16_insn_arg (info, &state, op, *s, memaddr + 2,
          second, 
# 2377 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                 1
# 2377 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                     , first, s[1] == '(');
        break;
      case MATCH_SHORT:
        print_mips16_insn_arg (info, &state, op, *s, memaddr,
          first, 
# 2381 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                0
# 2381 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                     , 0, s[1] == '(');
        break;
      case MATCH_NONE:
        break;
    }
     }


   if ((op->pinfo & 
# 2389 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                   0x00002000
# 2389 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                           ) != 0)
     info->branch_delay_insns = 1;
   if ((op->pinfo & 
# 2391 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                   0x00002000
# 2391 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                           ) != 0
       || (op->pinfo2 & 
# 2392 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                       0x00000800
# 2392 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                          ) != 0)
     {
       if ((op->pinfo & 
# 2394 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                       0x00000040
# 2394 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                        ) != 0)
  info->insn_type = dis_jsr;
       else
  info->insn_type = dis_branch;
     }
   else if ((op->pinfo2 & 
# 2399 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                         0x00001000
# 2399 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                          ) != 0)
     info->insn_type = dis_condbranch;

   return match == MATCH_FULL ? 4 : 2;
 }
    }


  infprintf (is, "0x%x", first);
  info->insn_type = dis_noninsn;

  return 2;
}



static int
print_insn_micromips (bfd_vma memaddr, struct disassemble_info *info)
{
  const fprintf_ftype infprintf = info->fprintf_func;
  const struct mips_opcode *op, *opend;
  void *is = info->stream;
  bfd_byte buffer[2];
  unsigned int higher;
  unsigned int length;
  int status;
  unsigned int insn;

  info->bytes_per_chunk = 2;
  info->display_endian = info->endian;
  info->insn_info_valid = 1;
  info->branch_delay_insns = 0;
  info->data_size = 0;
  info->insn_type = dis_nonbranch;
  info->target = 0;
  info->target2 = 0;

  status = (*info->read_memory_func) (memaddr, buffer, 2, info);
  if (status != 0)
    {
      (*info->memory_error_func) (status, memaddr, info);
      return -1;
    }

  length = 2;

  if (info->endian == BFD_ENDIAN_BIG)
    insn = bfd_getb16 (buffer);
  else
    insn = bfd_getl16 (buffer);

  if ((insn & 0x1c00) == 0x0000 || (insn & 0x1000) == 0x1000)
    {

      higher = insn;

      status = (*info->read_memory_func) (memaddr + 2, buffer, 2, info);
      if (status != 0)
 {
   infprintf (is, "micromips 0x%x", higher);
   (*info->memory_error_func) (status, memaddr + 2, info);
   return -1;
 }

      if (info->endian == BFD_ENDIAN_BIG)
 insn = bfd_getb16 (buffer);
      else
 insn = bfd_getl16 (buffer);

      insn = insn | (higher << 16);

      length += 2;
    }



  opend = micromips_opcodes + bfd_micromips_num_opcodes;
  for (op = micromips_opcodes; op < opend; op++)
    {
      if (op->pinfo != 
# 2478 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                      0xffffffff
   
# 2479 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
  && !(no_aliases && (op->pinfo2 & 
# 2479 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                   0x00000001
# 2479 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                              ))
   && (insn & op->mask) == op->match
   && ((length == 2 && (op->mask & 0xffff0000) == 0)
       || (length == 4 && (op->mask & 0xffff0000) != 0)))
 {
   if (!validate_insn_args (op, decode_micromips_operand, insn))
     continue;

   infprintf (is, "%s", op->name);

   if (op->args[0])
     {

        infprintf (is, " ");
       print_insn_args (info, op, decode_micromips_operand, insn,
          memaddr + 1, length);
     }


   if ((op->pinfo
        & (
# 2499 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
          0x00002000 
# 2499 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                   | 
# 2499 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                     0x00004000
# 2499 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                           )) != 0)
     info->branch_delay_insns = 1;
   if (((op->pinfo & 
# 2501 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                    0x00002000
# 2501 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                            )
        | (op->pinfo2 & 
# 2502 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                       0x00000800
# 2502 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                          )) != 0)
     {
       if ((op->pinfo & (
# 2504 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                        0x00000040 
# 2504 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                          | 
# 2504 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                            0x00000001
# 2504 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                        )) != 0)
  info->insn_type = dis_jsr;
       else
  info->insn_type = dis_branch;
     }
   else if (((op->pinfo & 
# 2509 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                         0x00004000
# 2509 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                               )
      | (op->pinfo2 & 
# 2510 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                     0x00001000
# 2510 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                      )) != 0)
     {
       if ((op->pinfo & 
# 2512 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                       0x00000040
# 2512 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                        ) != 0)
  info->insn_type = dis_condjsr;
       else
  info->insn_type = dis_condbranch;
     }
   else if ((op->pinfo
      & (
# 2518 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
        0x00800000 
# 2518 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                          | 
# 2518 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                            0x00000800
# 2518 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                            )) != 0)
     info->insn_type = dis_dref;

   return length;
 }
    }

  infprintf (is, "0x%x", insn);
  info->insn_type = dis_noninsn;

  return length;
}
# 2539 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
static bfd_boolean
is_compressed_mode_p (struct disassemble_info *info, bfd_boolean micromips_p)
{
  int i;
  int l;

  for (i = info->symtab_pos, l = i + info->num_symbols; i < l; i++)
    if (((info->symtab[i])->flags & (1 << 21)) != 0
 && ((!micromips_p
      && 
# 2548 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
        (((
# 2548 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
        (*info->symbols)->udata.i
# 2548 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
        ) & 0xf0) == 0xf0)
# 2548 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                    )
     || (micromips_p
  && 
# 2550 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
    (((
# 2550 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
    (*info->symbols)->udata.i
# 2550 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
    ) & (3 << 6)) == (2 << 6))
# 2550 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                   )))
      return 1;
    else if (
# 2552 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
            (((
# 2552 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
            info->symtab[i]
# 2552 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
            )->the_bfd)->xvec->flavour) 
# 2552 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                  == bfd_target_elf_flavour
       && info->symtab[i]->section == info->section)
      {
 elf_symbol_type *symbol = (elf_symbol_type *) info->symtab[i];
 if ((!micromips_p
      && 
# 2557 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
        (((
# 2557 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
        symbol->internal_elf_sym.st_other
# 2557 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
        ) & 0xf0) == 0xf0)
# 2557 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                            )
     || (micromips_p
  && 
# 2559 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
    (((
# 2559 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
    symbol->internal_elf_sym.st_other
# 2559 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
    ) & (3 << 6)) == (2 << 6))
# 2559 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                                           ))
   return 1;
      }

  return 0;
}







static int
_print_insn_mips (bfd_vma memaddr,
    struct disassemble_info *info,
    enum bfd_endian endianness)
{
  bfd_byte buffer[4];
  int status;

  set_default_mips_dis_options (info);
  parse_mips_dis_options (info->disassembler_options);

  if (info->mach == 
# 2583 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                   16
# 2583 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                  )
    return print_insn_mips16 (memaddr, info);
  if (info->mach == 
# 2585 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                   96
# 2585 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                          )
    return print_insn_micromips (memaddr, info);




  if (memaddr & 0x01)
    {
      if (micromips_ase)
 return print_insn_micromips (memaddr, info);
      else
 return print_insn_mips16 (memaddr, info);
    }



  if (is_compressed_mode_p (info, 
# 2601 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 1
# 2601 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                     ))
    return print_insn_micromips (memaddr, info);
  if (is_compressed_mode_p (info, 
# 2603 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c" 3 4
                                 0
# 2603 "project/radare2/libr/asm/arch/mips/gnu/mips-dis.c"
                                      ))
    return print_insn_mips16 (memaddr, info);


  status = (*info->read_memory_func) (memaddr, buffer, 4, info);
  if (status == 0)
    {
      int insn;

      if (endianness == BFD_ENDIAN_BIG)
 insn = bfd_getb32 (buffer);
      else
 insn = bfd_getl32 (buffer);

      return print_insn_mips (memaddr, insn, info);
    }
  else
    {
      (*info->memory_error_func) (status, memaddr, info);
      return -1;
    }
}

int
print_insn_big_mips (bfd_vma memaddr, struct disassemble_info *info)
{
  return _print_insn_mips (memaddr, info, BFD_ENDIAN_BIG);
}

int
print_insn_little_mips (bfd_vma memaddr, struct disassemble_info *info)
{
  return _print_insn_mips (memaddr, info, BFD_ENDIAN_LITTLE);
}
