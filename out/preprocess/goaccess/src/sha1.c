# 0 "project/goaccess/src/sha1.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/goaccess/src/sha1.c"
# 21 "project/goaccess/src/sha1.c"
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
# 22 "project/goaccess/src/sha1.c" 2
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
# 23 "project/goaccess/src/sha1.c" 2

# 1 "project/goaccess/src/sha1.h" 1



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 1 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/appleapiopts.h" 1 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
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
# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


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

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_dev_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_dev_t.h" 3 4
typedef __darwin_dev_t dev_t;
# 104 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

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
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mode_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 120 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_nlink_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_nlink_t.h" 3 4
typedef __uint16_t nlink_t;
# 121 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_id_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_id_t.h" 3 4
typedef __darwin_id_t id_t;
# 122 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_pid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 123 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


typedef int32_t segsz_t;
typedef int32_t swblk_t;

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uid_t.h" 3 4
typedef __darwin_uid_t uid_t;
# 129 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
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
# 215 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_attr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_attr_t.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;
# 216 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
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
# 5 "project/goaccess/src/sha1.h" 2
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
# 6 "project/goaccess/src/sha1.h" 2




# 9 "project/goaccess/src/sha1.h"
typedef struct {
  uint32_t state[5];
  uint32_t count[2];
  uint8_t buffer[64];
} SHA1_CTX;

extern void SHA1Init (SHA1_CTX * context);
extern void SHA1Update (SHA1_CTX * context, uint8_t * data, uint32_t len);
extern void SHA1Final (uint8_t digest[20], SHA1_CTX * context);
# 25 "project/goaccess/src/sha1.c" 2

void SHA1Transform (uint32_t state[5], uint8_t buffer[64]);
# 51 "project/goaccess/src/sha1.c"
void
SHA1Transform (uint32_t state[5], uint8_t buffer[64]) {
  uint32_t a, b, c, d, e;
  typedef union {
    uint8_t c[64];
    uint32_t l[16];
  } CHAR64LONG16;
  CHAR64LONG16 *block;





  block = (CHAR64LONG16 *) (void *) buffer;


  a = state[0];
  b = state[1];
  c = state[2];
  d = state[3];
  e = state[4];

  e+=((b&(c^d))^d)+(block->l[0] = ((((block->l[0]) << (24)) | ((block->l[0]) >> (32 - (24))))&0xFF00FF00) |((((block->l[0]) << (8)) | ((block->l[0]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));;
  d+=((a&(b^c))^c)+(block->l[1] = ((((block->l[1]) << (24)) | ((block->l[1]) >> (32 - (24))))&0xFF00FF00) |((((block->l[1]) << (8)) | ((block->l[1]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));;
  c+=((e&(a^b))^b)+(block->l[2] = ((((block->l[2]) << (24)) | ((block->l[2]) >> (32 - (24))))&0xFF00FF00) |((((block->l[2]) << (8)) | ((block->l[2]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));;
  b+=((d&(e^a))^a)+(block->l[3] = ((((block->l[3]) << (24)) | ((block->l[3]) >> (32 - (24))))&0xFF00FF00) |((((block->l[3]) << (8)) | ((block->l[3]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));;
  a+=((c&(d^e))^e)+(block->l[4] = ((((block->l[4]) << (24)) | ((block->l[4]) >> (32 - (24))))&0xFF00FF00) |((((block->l[4]) << (8)) | ((block->l[4]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));;
  e+=((b&(c^d))^d)+(block->l[5] = ((((block->l[5]) << (24)) | ((block->l[5]) >> (32 - (24))))&0xFF00FF00) |((((block->l[5]) << (8)) | ((block->l[5]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));;
  d+=((a&(b^c))^c)+(block->l[6] = ((((block->l[6]) << (24)) | ((block->l[6]) >> (32 - (24))))&0xFF00FF00) |((((block->l[6]) << (8)) | ((block->l[6]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));;
  c+=((e&(a^b))^b)+(block->l[7] = ((((block->l[7]) << (24)) | ((block->l[7]) >> (32 - (24))))&0xFF00FF00) |((((block->l[7]) << (8)) | ((block->l[7]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));;
  b+=((d&(e^a))^a)+(block->l[8] = ((((block->l[8]) << (24)) | ((block->l[8]) >> (32 - (24))))&0xFF00FF00) |((((block->l[8]) << (8)) | ((block->l[8]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));;
  a+=((c&(d^e))^e)+(block->l[9] = ((((block->l[9]) << (24)) | ((block->l[9]) >> (32 - (24))))&0xFF00FF00) |((((block->l[9]) << (8)) | ((block->l[9]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));;
  e+=((b&(c^d))^d)+(block->l[10] = ((((block->l[10]) << (24)) | ((block->l[10]) >> (32 - (24))))&0xFF00FF00) |((((block->l[10]) << (8)) | ((block->l[10]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));;
  d+=((a&(b^c))^c)+(block->l[11] = ((((block->l[11]) << (24)) | ((block->l[11]) >> (32 - (24))))&0xFF00FF00) |((((block->l[11]) << (8)) | ((block->l[11]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));;
  c+=((e&(a^b))^b)+(block->l[12] = ((((block->l[12]) << (24)) | ((block->l[12]) >> (32 - (24))))&0xFF00FF00) |((((block->l[12]) << (8)) | ((block->l[12]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));;
  b+=((d&(e^a))^a)+(block->l[13] = ((((block->l[13]) << (24)) | ((block->l[13]) >> (32 - (24))))&0xFF00FF00) |((((block->l[13]) << (8)) | ((block->l[13]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));;
  a+=((c&(d^e))^e)+(block->l[14] = ((((block->l[14]) << (24)) | ((block->l[14]) >> (32 - (24))))&0xFF00FF00) |((((block->l[14]) << (8)) | ((block->l[14]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));;
  e+=((b&(c^d))^d)+(block->l[15] = ((((block->l[15]) << (24)) | ((block->l[15]) >> (32 - (24))))&0xFF00FF00) |((((block->l[15]) << (8)) | ((block->l[15]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));;
  d+=((a&(b^c))^c)+(block->l[16&15] = (((block->l[(16 +13)&15]^block->l[(16 +8)&15] ^block->l[(16 +2)&15]^block->l[16&15]) << (1)) | ((block->l[(16 +13)&15]^block->l[(16 +8)&15] ^block->l[(16 +2)&15]^block->l[16&15]) >> (32 - (1)))))+0x5A827999+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));;
  c+=((e&(a^b))^b)+(block->l[17&15] = (((block->l[(17 +13)&15]^block->l[(17 +8)&15] ^block->l[(17 +2)&15]^block->l[17&15]) << (1)) | ((block->l[(17 +13)&15]^block->l[(17 +8)&15] ^block->l[(17 +2)&15]^block->l[17&15]) >> (32 - (1)))))+0x5A827999+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));;
  b+=((d&(e^a))^a)+(block->l[18&15] = (((block->l[(18 +13)&15]^block->l[(18 +8)&15] ^block->l[(18 +2)&15]^block->l[18&15]) << (1)) | ((block->l[(18 +13)&15]^block->l[(18 +8)&15] ^block->l[(18 +2)&15]^block->l[18&15]) >> (32 - (1)))))+0x5A827999+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));;
  a+=((c&(d^e))^e)+(block->l[19&15] = (((block->l[(19 +13)&15]^block->l[(19 +8)&15] ^block->l[(19 +2)&15]^block->l[19&15]) << (1)) | ((block->l[(19 +13)&15]^block->l[(19 +8)&15] ^block->l[(19 +2)&15]^block->l[19&15]) >> (32 - (1)))))+0x5A827999+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));;
  e+=(b^c^d)+(block->l[20&15] = (((block->l[(20 +13)&15]^block->l[(20 +8)&15] ^block->l[(20 +2)&15]^block->l[20&15]) << (1)) | ((block->l[(20 +13)&15]^block->l[(20 +8)&15] ^block->l[(20 +2)&15]^block->l[20&15]) >> (32 - (1)))))+0x6ED9EBA1+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));;
  d+=(a^b^c)+(block->l[21&15] = (((block->l[(21 +13)&15]^block->l[(21 +8)&15] ^block->l[(21 +2)&15]^block->l[21&15]) << (1)) | ((block->l[(21 +13)&15]^block->l[(21 +8)&15] ^block->l[(21 +2)&15]^block->l[21&15]) >> (32 - (1)))))+0x6ED9EBA1+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));;
  c+=(e^a^b)+(block->l[22&15] = (((block->l[(22 +13)&15]^block->l[(22 +8)&15] ^block->l[(22 +2)&15]^block->l[22&15]) << (1)) | ((block->l[(22 +13)&15]^block->l[(22 +8)&15] ^block->l[(22 +2)&15]^block->l[22&15]) >> (32 - (1)))))+0x6ED9EBA1+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));;
  b+=(d^e^a)+(block->l[23&15] = (((block->l[(23 +13)&15]^block->l[(23 +8)&15] ^block->l[(23 +2)&15]^block->l[23&15]) << (1)) | ((block->l[(23 +13)&15]^block->l[(23 +8)&15] ^block->l[(23 +2)&15]^block->l[23&15]) >> (32 - (1)))))+0x6ED9EBA1+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));;
  a+=(c^d^e)+(block->l[24&15] = (((block->l[(24 +13)&15]^block->l[(24 +8)&15] ^block->l[(24 +2)&15]^block->l[24&15]) << (1)) | ((block->l[(24 +13)&15]^block->l[(24 +8)&15] ^block->l[(24 +2)&15]^block->l[24&15]) >> (32 - (1)))))+0x6ED9EBA1+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));;
  e+=(b^c^d)+(block->l[25&15] = (((block->l[(25 +13)&15]^block->l[(25 +8)&15] ^block->l[(25 +2)&15]^block->l[25&15]) << (1)) | ((block->l[(25 +13)&15]^block->l[(25 +8)&15] ^block->l[(25 +2)&15]^block->l[25&15]) >> (32 - (1)))))+0x6ED9EBA1+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));;
  d+=(a^b^c)+(block->l[26&15] = (((block->l[(26 +13)&15]^block->l[(26 +8)&15] ^block->l[(26 +2)&15]^block->l[26&15]) << (1)) | ((block->l[(26 +13)&15]^block->l[(26 +8)&15] ^block->l[(26 +2)&15]^block->l[26&15]) >> (32 - (1)))))+0x6ED9EBA1+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));;
  c+=(e^a^b)+(block->l[27&15] = (((block->l[(27 +13)&15]^block->l[(27 +8)&15] ^block->l[(27 +2)&15]^block->l[27&15]) << (1)) | ((block->l[(27 +13)&15]^block->l[(27 +8)&15] ^block->l[(27 +2)&15]^block->l[27&15]) >> (32 - (1)))))+0x6ED9EBA1+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));;
  b+=(d^e^a)+(block->l[28&15] = (((block->l[(28 +13)&15]^block->l[(28 +8)&15] ^block->l[(28 +2)&15]^block->l[28&15]) << (1)) | ((block->l[(28 +13)&15]^block->l[(28 +8)&15] ^block->l[(28 +2)&15]^block->l[28&15]) >> (32 - (1)))))+0x6ED9EBA1+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));;
  a+=(c^d^e)+(block->l[29&15] = (((block->l[(29 +13)&15]^block->l[(29 +8)&15] ^block->l[(29 +2)&15]^block->l[29&15]) << (1)) | ((block->l[(29 +13)&15]^block->l[(29 +8)&15] ^block->l[(29 +2)&15]^block->l[29&15]) >> (32 - (1)))))+0x6ED9EBA1+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));;
  e+=(b^c^d)+(block->l[30&15] = (((block->l[(30 +13)&15]^block->l[(30 +8)&15] ^block->l[(30 +2)&15]^block->l[30&15]) << (1)) | ((block->l[(30 +13)&15]^block->l[(30 +8)&15] ^block->l[(30 +2)&15]^block->l[30&15]) >> (32 - (1)))))+0x6ED9EBA1+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));;
  d+=(a^b^c)+(block->l[31&15] = (((block->l[(31 +13)&15]^block->l[(31 +8)&15] ^block->l[(31 +2)&15]^block->l[31&15]) << (1)) | ((block->l[(31 +13)&15]^block->l[(31 +8)&15] ^block->l[(31 +2)&15]^block->l[31&15]) >> (32 - (1)))))+0x6ED9EBA1+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));;
  c+=(e^a^b)+(block->l[32&15] = (((block->l[(32 +13)&15]^block->l[(32 +8)&15] ^block->l[(32 +2)&15]^block->l[32&15]) << (1)) | ((block->l[(32 +13)&15]^block->l[(32 +8)&15] ^block->l[(32 +2)&15]^block->l[32&15]) >> (32 - (1)))))+0x6ED9EBA1+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));;
  b+=(d^e^a)+(block->l[33&15] = (((block->l[(33 +13)&15]^block->l[(33 +8)&15] ^block->l[(33 +2)&15]^block->l[33&15]) << (1)) | ((block->l[(33 +13)&15]^block->l[(33 +8)&15] ^block->l[(33 +2)&15]^block->l[33&15]) >> (32 - (1)))))+0x6ED9EBA1+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));;
  a+=(c^d^e)+(block->l[34&15] = (((block->l[(34 +13)&15]^block->l[(34 +8)&15] ^block->l[(34 +2)&15]^block->l[34&15]) << (1)) | ((block->l[(34 +13)&15]^block->l[(34 +8)&15] ^block->l[(34 +2)&15]^block->l[34&15]) >> (32 - (1)))))+0x6ED9EBA1+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));;
  e+=(b^c^d)+(block->l[35&15] = (((block->l[(35 +13)&15]^block->l[(35 +8)&15] ^block->l[(35 +2)&15]^block->l[35&15]) << (1)) | ((block->l[(35 +13)&15]^block->l[(35 +8)&15] ^block->l[(35 +2)&15]^block->l[35&15]) >> (32 - (1)))))+0x6ED9EBA1+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));;
  d+=(a^b^c)+(block->l[36&15] = (((block->l[(36 +13)&15]^block->l[(36 +8)&15] ^block->l[(36 +2)&15]^block->l[36&15]) << (1)) | ((block->l[(36 +13)&15]^block->l[(36 +8)&15] ^block->l[(36 +2)&15]^block->l[36&15]) >> (32 - (1)))))+0x6ED9EBA1+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));;
  c+=(e^a^b)+(block->l[37&15] = (((block->l[(37 +13)&15]^block->l[(37 +8)&15] ^block->l[(37 +2)&15]^block->l[37&15]) << (1)) | ((block->l[(37 +13)&15]^block->l[(37 +8)&15] ^block->l[(37 +2)&15]^block->l[37&15]) >> (32 - (1)))))+0x6ED9EBA1+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));;
  b+=(d^e^a)+(block->l[38&15] = (((block->l[(38 +13)&15]^block->l[(38 +8)&15] ^block->l[(38 +2)&15]^block->l[38&15]) << (1)) | ((block->l[(38 +13)&15]^block->l[(38 +8)&15] ^block->l[(38 +2)&15]^block->l[38&15]) >> (32 - (1)))))+0x6ED9EBA1+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));;
  a+=(c^d^e)+(block->l[39&15] = (((block->l[(39 +13)&15]^block->l[(39 +8)&15] ^block->l[(39 +2)&15]^block->l[39&15]) << (1)) | ((block->l[(39 +13)&15]^block->l[(39 +8)&15] ^block->l[(39 +2)&15]^block->l[39&15]) >> (32 - (1)))))+0x6ED9EBA1+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));;
  e+=(((b|c)&d)|(b&c))+(block->l[40&15] = (((block->l[(40 +13)&15]^block->l[(40 +8)&15] ^block->l[(40 +2)&15]^block->l[40&15]) << (1)) | ((block->l[(40 +13)&15]^block->l[(40 +8)&15] ^block->l[(40 +2)&15]^block->l[40&15]) >> (32 - (1)))))+0x8F1BBCDC+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));;
  d+=(((a|b)&c)|(a&b))+(block->l[41&15] = (((block->l[(41 +13)&15]^block->l[(41 +8)&15] ^block->l[(41 +2)&15]^block->l[41&15]) << (1)) | ((block->l[(41 +13)&15]^block->l[(41 +8)&15] ^block->l[(41 +2)&15]^block->l[41&15]) >> (32 - (1)))))+0x8F1BBCDC+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));;
  c+=(((e|a)&b)|(e&a))+(block->l[42&15] = (((block->l[(42 +13)&15]^block->l[(42 +8)&15] ^block->l[(42 +2)&15]^block->l[42&15]) << (1)) | ((block->l[(42 +13)&15]^block->l[(42 +8)&15] ^block->l[(42 +2)&15]^block->l[42&15]) >> (32 - (1)))))+0x8F1BBCDC+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));;
  b+=(((d|e)&a)|(d&e))+(block->l[43&15] = (((block->l[(43 +13)&15]^block->l[(43 +8)&15] ^block->l[(43 +2)&15]^block->l[43&15]) << (1)) | ((block->l[(43 +13)&15]^block->l[(43 +8)&15] ^block->l[(43 +2)&15]^block->l[43&15]) >> (32 - (1)))))+0x8F1BBCDC+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));;
  a+=(((c|d)&e)|(c&d))+(block->l[44&15] = (((block->l[(44 +13)&15]^block->l[(44 +8)&15] ^block->l[(44 +2)&15]^block->l[44&15]) << (1)) | ((block->l[(44 +13)&15]^block->l[(44 +8)&15] ^block->l[(44 +2)&15]^block->l[44&15]) >> (32 - (1)))))+0x8F1BBCDC+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));;
  e+=(((b|c)&d)|(b&c))+(block->l[45&15] = (((block->l[(45 +13)&15]^block->l[(45 +8)&15] ^block->l[(45 +2)&15]^block->l[45&15]) << (1)) | ((block->l[(45 +13)&15]^block->l[(45 +8)&15] ^block->l[(45 +2)&15]^block->l[45&15]) >> (32 - (1)))))+0x8F1BBCDC+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));;
  d+=(((a|b)&c)|(a&b))+(block->l[46&15] = (((block->l[(46 +13)&15]^block->l[(46 +8)&15] ^block->l[(46 +2)&15]^block->l[46&15]) << (1)) | ((block->l[(46 +13)&15]^block->l[(46 +8)&15] ^block->l[(46 +2)&15]^block->l[46&15]) >> (32 - (1)))))+0x8F1BBCDC+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));;
  c+=(((e|a)&b)|(e&a))+(block->l[47&15] = (((block->l[(47 +13)&15]^block->l[(47 +8)&15] ^block->l[(47 +2)&15]^block->l[47&15]) << (1)) | ((block->l[(47 +13)&15]^block->l[(47 +8)&15] ^block->l[(47 +2)&15]^block->l[47&15]) >> (32 - (1)))))+0x8F1BBCDC+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));;
  b+=(((d|e)&a)|(d&e))+(block->l[48&15] = (((block->l[(48 +13)&15]^block->l[(48 +8)&15] ^block->l[(48 +2)&15]^block->l[48&15]) << (1)) | ((block->l[(48 +13)&15]^block->l[(48 +8)&15] ^block->l[(48 +2)&15]^block->l[48&15]) >> (32 - (1)))))+0x8F1BBCDC+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));;
  a+=(((c|d)&e)|(c&d))+(block->l[49&15] = (((block->l[(49 +13)&15]^block->l[(49 +8)&15] ^block->l[(49 +2)&15]^block->l[49&15]) << (1)) | ((block->l[(49 +13)&15]^block->l[(49 +8)&15] ^block->l[(49 +2)&15]^block->l[49&15]) >> (32 - (1)))))+0x8F1BBCDC+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));;
  e+=(((b|c)&d)|(b&c))+(block->l[50&15] = (((block->l[(50 +13)&15]^block->l[(50 +8)&15] ^block->l[(50 +2)&15]^block->l[50&15]) << (1)) | ((block->l[(50 +13)&15]^block->l[(50 +8)&15] ^block->l[(50 +2)&15]^block->l[50&15]) >> (32 - (1)))))+0x8F1BBCDC+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));;
  d+=(((a|b)&c)|(a&b))+(block->l[51&15] = (((block->l[(51 +13)&15]^block->l[(51 +8)&15] ^block->l[(51 +2)&15]^block->l[51&15]) << (1)) | ((block->l[(51 +13)&15]^block->l[(51 +8)&15] ^block->l[(51 +2)&15]^block->l[51&15]) >> (32 - (1)))))+0x8F1BBCDC+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));;
  c+=(((e|a)&b)|(e&a))+(block->l[52&15] = (((block->l[(52 +13)&15]^block->l[(52 +8)&15] ^block->l[(52 +2)&15]^block->l[52&15]) << (1)) | ((block->l[(52 +13)&15]^block->l[(52 +8)&15] ^block->l[(52 +2)&15]^block->l[52&15]) >> (32 - (1)))))+0x8F1BBCDC+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));;
  b+=(((d|e)&a)|(d&e))+(block->l[53&15] = (((block->l[(53 +13)&15]^block->l[(53 +8)&15] ^block->l[(53 +2)&15]^block->l[53&15]) << (1)) | ((block->l[(53 +13)&15]^block->l[(53 +8)&15] ^block->l[(53 +2)&15]^block->l[53&15]) >> (32 - (1)))))+0x8F1BBCDC+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));;
  a+=(((c|d)&e)|(c&d))+(block->l[54&15] = (((block->l[(54 +13)&15]^block->l[(54 +8)&15] ^block->l[(54 +2)&15]^block->l[54&15]) << (1)) | ((block->l[(54 +13)&15]^block->l[(54 +8)&15] ^block->l[(54 +2)&15]^block->l[54&15]) >> (32 - (1)))))+0x8F1BBCDC+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));;
  e+=(((b|c)&d)|(b&c))+(block->l[55&15] = (((block->l[(55 +13)&15]^block->l[(55 +8)&15] ^block->l[(55 +2)&15]^block->l[55&15]) << (1)) | ((block->l[(55 +13)&15]^block->l[(55 +8)&15] ^block->l[(55 +2)&15]^block->l[55&15]) >> (32 - (1)))))+0x8F1BBCDC+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));;
  d+=(((a|b)&c)|(a&b))+(block->l[56&15] = (((block->l[(56 +13)&15]^block->l[(56 +8)&15] ^block->l[(56 +2)&15]^block->l[56&15]) << (1)) | ((block->l[(56 +13)&15]^block->l[(56 +8)&15] ^block->l[(56 +2)&15]^block->l[56&15]) >> (32 - (1)))))+0x8F1BBCDC+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));;
  c+=(((e|a)&b)|(e&a))+(block->l[57&15] = (((block->l[(57 +13)&15]^block->l[(57 +8)&15] ^block->l[(57 +2)&15]^block->l[57&15]) << (1)) | ((block->l[(57 +13)&15]^block->l[(57 +8)&15] ^block->l[(57 +2)&15]^block->l[57&15]) >> (32 - (1)))))+0x8F1BBCDC+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));;
  b+=(((d|e)&a)|(d&e))+(block->l[58&15] = (((block->l[(58 +13)&15]^block->l[(58 +8)&15] ^block->l[(58 +2)&15]^block->l[58&15]) << (1)) | ((block->l[(58 +13)&15]^block->l[(58 +8)&15] ^block->l[(58 +2)&15]^block->l[58&15]) >> (32 - (1)))))+0x8F1BBCDC+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));;
  a+=(((c|d)&e)|(c&d))+(block->l[59&15] = (((block->l[(59 +13)&15]^block->l[(59 +8)&15] ^block->l[(59 +2)&15]^block->l[59&15]) << (1)) | ((block->l[(59 +13)&15]^block->l[(59 +8)&15] ^block->l[(59 +2)&15]^block->l[59&15]) >> (32 - (1)))))+0x8F1BBCDC+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));;
  e+=(b^c^d)+(block->l[60&15] = (((block->l[(60 +13)&15]^block->l[(60 +8)&15] ^block->l[(60 +2)&15]^block->l[60&15]) << (1)) | ((block->l[(60 +13)&15]^block->l[(60 +8)&15] ^block->l[(60 +2)&15]^block->l[60&15]) >> (32 - (1)))))+0xCA62C1D6+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));;
  d+=(a^b^c)+(block->l[61&15] = (((block->l[(61 +13)&15]^block->l[(61 +8)&15] ^block->l[(61 +2)&15]^block->l[61&15]) << (1)) | ((block->l[(61 +13)&15]^block->l[(61 +8)&15] ^block->l[(61 +2)&15]^block->l[61&15]) >> (32 - (1)))))+0xCA62C1D6+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));;
  c+=(e^a^b)+(block->l[62&15] = (((block->l[(62 +13)&15]^block->l[(62 +8)&15] ^block->l[(62 +2)&15]^block->l[62&15]) << (1)) | ((block->l[(62 +13)&15]^block->l[(62 +8)&15] ^block->l[(62 +2)&15]^block->l[62&15]) >> (32 - (1)))))+0xCA62C1D6+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));;
  b+=(d^e^a)+(block->l[63&15] = (((block->l[(63 +13)&15]^block->l[(63 +8)&15] ^block->l[(63 +2)&15]^block->l[63&15]) << (1)) | ((block->l[(63 +13)&15]^block->l[(63 +8)&15] ^block->l[(63 +2)&15]^block->l[63&15]) >> (32 - (1)))))+0xCA62C1D6+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));;
  a+=(c^d^e)+(block->l[64&15] = (((block->l[(64 +13)&15]^block->l[(64 +8)&15] ^block->l[(64 +2)&15]^block->l[64&15]) << (1)) | ((block->l[(64 +13)&15]^block->l[(64 +8)&15] ^block->l[(64 +2)&15]^block->l[64&15]) >> (32 - (1)))))+0xCA62C1D6+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));;
  e+=(b^c^d)+(block->l[65&15] = (((block->l[(65 +13)&15]^block->l[(65 +8)&15] ^block->l[(65 +2)&15]^block->l[65&15]) << (1)) | ((block->l[(65 +13)&15]^block->l[(65 +8)&15] ^block->l[(65 +2)&15]^block->l[65&15]) >> (32 - (1)))))+0xCA62C1D6+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));;
  d+=(a^b^c)+(block->l[66&15] = (((block->l[(66 +13)&15]^block->l[(66 +8)&15] ^block->l[(66 +2)&15]^block->l[66&15]) << (1)) | ((block->l[(66 +13)&15]^block->l[(66 +8)&15] ^block->l[(66 +2)&15]^block->l[66&15]) >> (32 - (1)))))+0xCA62C1D6+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));;
  c+=(e^a^b)+(block->l[67&15] = (((block->l[(67 +13)&15]^block->l[(67 +8)&15] ^block->l[(67 +2)&15]^block->l[67&15]) << (1)) | ((block->l[(67 +13)&15]^block->l[(67 +8)&15] ^block->l[(67 +2)&15]^block->l[67&15]) >> (32 - (1)))))+0xCA62C1D6+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));;
  b+=(d^e^a)+(block->l[68&15] = (((block->l[(68 +13)&15]^block->l[(68 +8)&15] ^block->l[(68 +2)&15]^block->l[68&15]) << (1)) | ((block->l[(68 +13)&15]^block->l[(68 +8)&15] ^block->l[(68 +2)&15]^block->l[68&15]) >> (32 - (1)))))+0xCA62C1D6+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));;
  a+=(c^d^e)+(block->l[69&15] = (((block->l[(69 +13)&15]^block->l[(69 +8)&15] ^block->l[(69 +2)&15]^block->l[69&15]) << (1)) | ((block->l[(69 +13)&15]^block->l[(69 +8)&15] ^block->l[(69 +2)&15]^block->l[69&15]) >> (32 - (1)))))+0xCA62C1D6+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));;
  e+=(b^c^d)+(block->l[70&15] = (((block->l[(70 +13)&15]^block->l[(70 +8)&15] ^block->l[(70 +2)&15]^block->l[70&15]) << (1)) | ((block->l[(70 +13)&15]^block->l[(70 +8)&15] ^block->l[(70 +2)&15]^block->l[70&15]) >> (32 - (1)))))+0xCA62C1D6+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));;
  d+=(a^b^c)+(block->l[71&15] = (((block->l[(71 +13)&15]^block->l[(71 +8)&15] ^block->l[(71 +2)&15]^block->l[71&15]) << (1)) | ((block->l[(71 +13)&15]^block->l[(71 +8)&15] ^block->l[(71 +2)&15]^block->l[71&15]) >> (32 - (1)))))+0xCA62C1D6+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));;
  c+=(e^a^b)+(block->l[72&15] = (((block->l[(72 +13)&15]^block->l[(72 +8)&15] ^block->l[(72 +2)&15]^block->l[72&15]) << (1)) | ((block->l[(72 +13)&15]^block->l[(72 +8)&15] ^block->l[(72 +2)&15]^block->l[72&15]) >> (32 - (1)))))+0xCA62C1D6+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));;
  b+=(d^e^a)+(block->l[73&15] = (((block->l[(73 +13)&15]^block->l[(73 +8)&15] ^block->l[(73 +2)&15]^block->l[73&15]) << (1)) | ((block->l[(73 +13)&15]^block->l[(73 +8)&15] ^block->l[(73 +2)&15]^block->l[73&15]) >> (32 - (1)))))+0xCA62C1D6+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));;
  a+=(c^d^e)+(block->l[74&15] = (((block->l[(74 +13)&15]^block->l[(74 +8)&15] ^block->l[(74 +2)&15]^block->l[74&15]) << (1)) | ((block->l[(74 +13)&15]^block->l[(74 +8)&15] ^block->l[(74 +2)&15]^block->l[74&15]) >> (32 - (1)))))+0xCA62C1D6+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));;
  e+=(b^c^d)+(block->l[75&15] = (((block->l[(75 +13)&15]^block->l[(75 +8)&15] ^block->l[(75 +2)&15]^block->l[75&15]) << (1)) | ((block->l[(75 +13)&15]^block->l[(75 +8)&15] ^block->l[(75 +2)&15]^block->l[75&15]) >> (32 - (1)))))+0xCA62C1D6+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));;
  d+=(a^b^c)+(block->l[76&15] = (((block->l[(76 +13)&15]^block->l[(76 +8)&15] ^block->l[(76 +2)&15]^block->l[76&15]) << (1)) | ((block->l[(76 +13)&15]^block->l[(76 +8)&15] ^block->l[(76 +2)&15]^block->l[76&15]) >> (32 - (1)))))+0xCA62C1D6+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));;
  c+=(e^a^b)+(block->l[77&15] = (((block->l[(77 +13)&15]^block->l[(77 +8)&15] ^block->l[(77 +2)&15]^block->l[77&15]) << (1)) | ((block->l[(77 +13)&15]^block->l[(77 +8)&15] ^block->l[(77 +2)&15]^block->l[77&15]) >> (32 - (1)))))+0xCA62C1D6+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));;
  b+=(d^e^a)+(block->l[78&15] = (((block->l[(78 +13)&15]^block->l[(78 +8)&15] ^block->l[(78 +2)&15]^block->l[78&15]) << (1)) | ((block->l[(78 +13)&15]^block->l[(78 +8)&15] ^block->l[(78 +2)&15]^block->l[78&15]) >> (32 - (1)))))+0xCA62C1D6+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));;
  a+=(c^d^e)+(block->l[79&15] = (((block->l[(79 +13)&15]^block->l[(79 +8)&15] ^block->l[(79 +2)&15]^block->l[79&15]) << (1)) | ((block->l[(79 +13)&15]^block->l[(79 +8)&15] ^block->l[(79 +2)&15]^block->l[79&15]) >> (32 - (1)))))+0xCA62C1D6+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));;

  state[0] += a;
  state[1] += b;
  state[2] += c;
  state[3] += d;
  state[4] += e;

  a = b = c = d = e = 0;
}




void
SHA1Init (SHA1_CTX * context) {

  context->state[0] = 0x67452301;
  context->state[1] = 0xEFCDAB89;
  context->state[2] = 0x98BADCFE;
  context->state[3] = 0x10325476;
  context->state[4] = 0xC3D2E1F0;
  context->count[0] = context->count[1] = 0;
}




void
SHA1Update (SHA1_CTX * context, uint8_t * data, unsigned int len) {
  unsigned int i, j;

  j = (context->count[0] >> 3) & 63;
  if ((context->count[0] += len << 3) < (len << 3))
    context->count[1]++;
  context->count[1] += (len >> 29);
  if ((j + len) > 63) {
    
# 189 "project/goaccess/src/sha1.c" 3 4
   __builtin___memcpy_chk (
# 189 "project/goaccess/src/sha1.c"
   &context->buffer[j]
# 189 "project/goaccess/src/sha1.c" 3 4
   , 
# 189 "project/goaccess/src/sha1.c"
   data, (i = 64 - j)
# 189 "project/goaccess/src/sha1.c" 3 4
   , __builtin_object_size (
# 189 "project/goaccess/src/sha1.c"
   &context->buffer[j]
# 189 "project/goaccess/src/sha1.c" 3 4
   , 0))
# 189 "project/goaccess/src/sha1.c"
                                                   ;
    SHA1Transform (context->state, context->buffer);
    for (; i + 63 < len; i += 64) {
      SHA1Transform (context->state, &data[i]);
    }
    j = 0;
  } else
    i = 0;
  
# 197 "project/goaccess/src/sha1.c" 3 4
 __builtin___memcpy_chk (
# 197 "project/goaccess/src/sha1.c"
 &context->buffer[j]
# 197 "project/goaccess/src/sha1.c" 3 4
 , 
# 197 "project/goaccess/src/sha1.c"
 &data[i], len - i
# 197 "project/goaccess/src/sha1.c" 3 4
 , __builtin_object_size (
# 197 "project/goaccess/src/sha1.c"
 &context->buffer[j]
# 197 "project/goaccess/src/sha1.c" 3 4
 , 0))
# 197 "project/goaccess/src/sha1.c"
                                                ;
}




void
SHA1Final (uint8_t digest[20], SHA1_CTX * context) {
  uint32_t i, j;
  uint8_t finalcount[8];

  for (i = 0; i < 8; i++) {
    finalcount[i] = (uint8_t) ((context->count[(i >= 4 ? 0 : 1)]
                                >> ((3 - (i & 3)) * 8)) & 255);
  }
  SHA1Update (context, (uint8_t *) "\200", 1);
  while ((context->count[0] & 504) != 448) {
    SHA1Update (context, (uint8_t *) "\0", 1);
  }
  SHA1Update (context, finalcount, 8);
  for (i = 0; i < 20; i++) {
    digest[i] = (uint8_t)
      ((context->state[i >> 2] >> ((3 - (i & 3)) * 8)) & 255);
  }

  i = j = 0;
  
# 223 "project/goaccess/src/sha1.c" 3 4
 __builtin___memset_chk (
# 223 "project/goaccess/src/sha1.c"
 context->buffer
# 223 "project/goaccess/src/sha1.c" 3 4
 , 
# 223 "project/goaccess/src/sha1.c"
 0, 64
# 223 "project/goaccess/src/sha1.c" 3 4
 , __builtin_object_size (
# 223 "project/goaccess/src/sha1.c"
 context->buffer
# 223 "project/goaccess/src/sha1.c" 3 4
 , 0))
# 223 "project/goaccess/src/sha1.c"
                                ;
  
# 224 "project/goaccess/src/sha1.c" 3 4
 __builtin___memset_chk (
# 224 "project/goaccess/src/sha1.c"
 context->state
# 224 "project/goaccess/src/sha1.c" 3 4
 , 
# 224 "project/goaccess/src/sha1.c"
 0, 20
# 224 "project/goaccess/src/sha1.c" 3 4
 , __builtin_object_size (
# 224 "project/goaccess/src/sha1.c"
 context->state
# 224 "project/goaccess/src/sha1.c" 3 4
 , 0))
# 224 "project/goaccess/src/sha1.c"
                               ;
  
# 225 "project/goaccess/src/sha1.c" 3 4
 __builtin___memset_chk (
# 225 "project/goaccess/src/sha1.c"
 context->count
# 225 "project/goaccess/src/sha1.c" 3 4
 , 
# 225 "project/goaccess/src/sha1.c"
 0, 8
# 225 "project/goaccess/src/sha1.c" 3 4
 , __builtin_object_size (
# 225 "project/goaccess/src/sha1.c"
 context->count
# 225 "project/goaccess/src/sha1.c" 3 4
 , 0))
# 225 "project/goaccess/src/sha1.c"
                              ;
  
# 226 "project/goaccess/src/sha1.c" 3 4
 __builtin___memset_chk (
# 226 "project/goaccess/src/sha1.c"
 &finalcount
# 226 "project/goaccess/src/sha1.c" 3 4
 , 
# 226 "project/goaccess/src/sha1.c"
 0, 8
# 226 "project/goaccess/src/sha1.c" 3 4
 , __builtin_object_size (
# 226 "project/goaccess/src/sha1.c"
 &finalcount
# 226 "project/goaccess/src/sha1.c" 3 4
 , 0))
# 226 "project/goaccess/src/sha1.c"
                           ;



}
