# 0 "project/radare2/shlr/sdb/src/sdb.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/shlr/sdb/src/sdb.c"


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
# 4 "project/radare2/shlr/sdb/src/sdb.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fcntl.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 1 3 4
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mode_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_pid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 87 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4
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
# 5 "project/radare2/shlr/sdb/src/sdb.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 1 3 4
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 2 3 4



extern int * __error(void);


# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 2 3 4
# 6 "project/radare2/shlr/sdb/src/sdb.c" 2
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
# 7 "project/radare2/shlr/sdb/src/sdb.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 1 3 4
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;






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








# 8 "project/radare2/shlr/sdb/src/sdb.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 1 3 4
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blkcnt_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blkcnt_t.h" 3 4
typedef __darwin_blkcnt_t blkcnt_t;
# 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blksize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blksize_t.h" 3 4
typedef __darwin_blksize_t blksize_t;
# 87 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino_t.h" 3 4
typedef __darwin_ino_t ino_t;
# 89 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino64_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino64_t.h" 3 4
typedef __darwin_ino64_t ino64_t;
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_nlink_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_nlink_t.h" 3 4
typedef __uint16_t nlink_t;
# 96 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_gid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_gid_t.h" 3 4
typedef __darwin_gid_t gid_t;
# 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_time_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4
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




# 9 "project/radare2/shlr/sdb/src/sdb.c" 2
# 1 "project/radare2/shlr/sdb/src/sdb.h" 1
# 13 "project/radare2/shlr/sdb/src/sdb.h"
# 1 "project/radare2/shlr/sdb/src/types.h" 1



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




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_addr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_addr_t.h" 3 4
typedef __uint32_t in_addr_t;
# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_port_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_port_t.h" 3 4
typedef __uint16_t in_port_t;
# 112 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_key_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_key_t.h" 3 4
typedef __int32_t key_t;
# 119 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4






typedef int32_t segsz_t;
typedef int32_t swblk_t;
# 165 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_clock_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_clock_t.h" 3 4
typedef __darwin_clock_t clock_t;
# 166 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4




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
# 5 "project/radare2/shlr/sdb/src/types.h" 2
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdbool.h" 1 3 4
# 6 "project/radare2/shlr/sdb/src/types.h" 2



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 1 3 4
# 227 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 228 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 2 3 4







extern intmax_t
imaxabs(intmax_t j);


typedef struct {
 intmax_t quot;
 intmax_t rem;
} imaxdiv_t;


extern imaxdiv_t
imaxdiv(intmax_t __numer, intmax_t __denom);



extern intmax_t
strtoimax(const char * restrict __nptr,
   char ** restrict __endptr,
   int __base);


extern uintmax_t
strtoumax(const char * restrict __nptr,
   char ** restrict __endptr,
   int __base);



extern intmax_t
wcstoimax(const wchar_t * restrict __nptr,
   wchar_t ** restrict __endptr,
   int __base);


extern uintmax_t
wcstoumax(const wchar_t * restrict __nptr,
   wchar_t ** restrict __endptr,
   int __base);







# 10 "project/radare2/shlr/sdb/src/types.h" 2
# 60 "project/radare2/shlr/sdb/src/types.h"
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


# 61 "project/radare2/shlr/sdb/src/types.h" 2
# 115 "project/radare2/shlr/sdb/src/types.h"
# 1 "project/radare2/shlr/sdb/src/config.h" 1
# 116 "project/radare2/shlr/sdb/src/types.h" 2


# 117 "project/radare2/shlr/sdb/src/types.h"
static inline int seek_set(int fd, off_t pos) {
 return ((fd == -1) || (lseek (fd, (off_t) pos, 
# 118 "project/radare2/shlr/sdb/src/types.h" 3 4
                                               0
# 118 "project/radare2/shlr/sdb/src/types.h"
                                                       ) == -1))? 0:1;
}

static inline void ut32_pack(char s[4], unsigned int u) {
 s[0] = u & 255;
 u >>= 8;
 s[1] = u & 255;
 u >>= 8;
 s[2] = u & 255;
 s[3] = u >> 8;
}

static inline void ut32_pack_big(char s[4], unsigned int u) {
 s[3] = u & 255;
 u >>= 8;
 s[2] = u & 255;
 u >>= 8;
 s[1] = u & 255;
 s[0] = u >> 8;
}

static inline void ut32_unpack(char s[4], unsigned int *u) {
 unsigned int result = 0;
 result = (unsigned char) s[3];
 result <<= 8;
 result += (unsigned char) s[2];
 result <<= 8;
 result += (unsigned char) s[1];
 result <<= 8;
 result += (unsigned char) s[0];
 *u = result;
}
# 14 "project/radare2/shlr/sdb/src/sdb.h" 2
# 1 "project/radare2/shlr/sdb/src/sdbht.h" 1



# 1 "project/radare2/shlr/sdb/src/ht_pp.h" 1
# 11 "project/radare2/shlr/sdb/src/ht_pp.h"
# 1 "project/radare2/shlr/sdb/src/ht_inc.h" 1
# 49 "project/radare2/shlr/sdb/src/ht_inc.h"
# 1 "project/radare2/shlr/sdb/src/ls.h" 1






typedef void (*SdbListFree)(void *ptr);
typedef int (*SdbListComparator)(const void *a, const void *b);

typedef struct ls_iter_t {
 void *data;
 struct ls_iter_t *n, *p;
} SdbListIter;

typedef struct ls_t {
 size_t length;
 SdbListIter *head;
 SdbListIter *tail;
 SdbListFree free;
 SdbListComparator cmp;
 
# 21 "project/radare2/shlr/sdb/src/ls.h" 3 4
_Bool 
# 21 "project/radare2/shlr/sdb/src/ls.h"
     sorted;
} SdbList;
# 46 "project/radare2/shlr/sdb/src/ls.h"
__attribute__ ((visibility ("default"))) SdbList *ls_new(void);
__attribute__ ((visibility ("default"))) SdbList *ls_newf(SdbListFree freefn);
__attribute__ ((visibility ("default"))) SdbListIter *ls_append(SdbList *list, void *data);
__attribute__ ((visibility ("default"))) SdbListIter *ls_prepend(SdbList *list, void *data);

__attribute__ ((visibility ("default"))) 
# 51 "project/radare2/shlr/sdb/src/ls.h" 3 4
       _Bool 
# 51 "project/radare2/shlr/sdb/src/ls.h"
            ls_sort(SdbList *list, SdbListComparator cmp);
__attribute__ ((visibility ("default"))) 
# 52 "project/radare2/shlr/sdb/src/ls.h" 3 4
       _Bool 
# 52 "project/radare2/shlr/sdb/src/ls.h"
            ls_merge_sort(SdbList *list, SdbListComparator cmp);

__attribute__ ((visibility ("default"))) void ls_delete(SdbList *list, SdbListIter *iter);
__attribute__ ((visibility ("default"))) 
# 55 "project/radare2/shlr/sdb/src/ls.h" 3 4
       _Bool 
# 55 "project/radare2/shlr/sdb/src/ls.h"
            ls_delete_data(SdbList *list, void *ptr);
__attribute__ ((visibility ("default"))) void ls_iter_init(SdbListIter *iter, SdbList *list);
__attribute__ ((visibility ("default"))) void ls_destroy(SdbList *list);
__attribute__ ((visibility ("default"))) void ls_free(SdbList *list);
__attribute__ ((visibility ("default"))) SdbListIter *ls_item_new(void *data);
__attribute__ ((visibility ("default"))) void ls_unlink(SdbList *list, void *ptr);
__attribute__ ((visibility ("default"))) void ls_split(SdbList *list, void *ptr);

__attribute__ ((visibility ("default"))) void ls_split_iter(SdbList *list, SdbListIter *iter);
__attribute__ ((visibility ("default"))) void *ls_get_n(SdbList *list, int n);
__attribute__ ((visibility ("default"))) void *ls_get_top(SdbList *list);

__attribute__ ((visibility ("default"))) void *ls_pop(SdbList *list);
__attribute__ ((visibility ("default"))) void ls_reverse(SdbList *list);
__attribute__ ((visibility ("default"))) SdbList *ls_clone(SdbList *list);
__attribute__ ((visibility ("default"))) int ls_join(SdbList *first, SdbList *second);
__attribute__ ((visibility ("default"))) int ls_del_n(SdbList *list, int n);
__attribute__ ((visibility ("default"))) SdbListIter *ls_insert(SdbList *list, int n, void *data);
__attribute__ ((visibility ("default"))) void *ls_pop_head(SdbList *list);
# 50 "project/radare2/shlr/sdb/src/ht_inc.h" 2



typedef struct ht_pp_kv {
 void * key;
 void * value;
 unsigned int key_len;
 unsigned int value_len;
} HtPPKv;

typedef void (*HtPPKvFreeFunc)(HtPPKv *);
typedef void * (*HtPPDupKey)(const void *);
typedef void * (*HtPPDupValue)(const void *);
typedef unsigned int (*HtPPCalcSizeK)(const void *);
typedef unsigned int (*HtPPCalcSizeV)(const void *);
typedef unsigned int (*HtPPHashFunction)(const void *);
typedef int (*HtPPListComparator)(const void *, const void *);
typedef 
# 67 "project/radare2/shlr/sdb/src/ht_inc.h" 3 4
       _Bool 
# 67 "project/radare2/shlr/sdb/src/ht_inc.h"
            (*HtPPForeachCallback)(void *user, const void *, const void *);

typedef struct ht_pp_bucket_t {
 HtPPKv *arr;
 unsigned int count;
} HtPPBucket;


typedef struct ht_pp_options_t {
 HtPPListComparator cmp;
 HtPPHashFunction hashfn;
 HtPPDupKey dupkey;
 HtPPDupValue dupvalue;
 HtPPCalcSizeK calcsizeK;
 HtPPCalcSizeV calcsizeV;
 HtPPKvFreeFunc freefn;
 size_t elem_size;
} HtPPOptions;


typedef struct ht_pp_t {
 unsigned int size;
 unsigned int count;
 HtPPBucket* table;
 unsigned int prime_idx;
 HtPPOptions opt;
} HtPP;


__attribute__ ((visibility ("default"))) HtPP* ht_pp_new_opt(HtPPOptions *opt);

__attribute__ ((visibility ("default"))) void ht_pp_free(HtPP* ht);

__attribute__ ((visibility ("default"))) 
# 100 "project/radare2/shlr/sdb/src/ht_inc.h" 3 4
       _Bool 
# 100 "project/radare2/shlr/sdb/src/ht_inc.h"
            ht_pp_insert(HtPP* ht, const void * key, void * value);

__attribute__ ((visibility ("default"))) 
# 102 "project/radare2/shlr/sdb/src/ht_inc.h" 3 4
       _Bool 
# 102 "project/radare2/shlr/sdb/src/ht_inc.h"
            ht_pp_update(HtPP* ht, const void * key, void * value);

__attribute__ ((visibility ("default"))) 
# 104 "project/radare2/shlr/sdb/src/ht_inc.h" 3 4
       _Bool 
# 104 "project/radare2/shlr/sdb/src/ht_inc.h"
            ht_pp_update_key(HtPP* ht, const void * old_key, const void * new_key);

__attribute__ ((visibility ("default"))) 
# 106 "project/radare2/shlr/sdb/src/ht_inc.h" 3 4
       _Bool 
# 106 "project/radare2/shlr/sdb/src/ht_inc.h"
            ht_pp_delete(HtPP* ht, const void * key);

__attribute__ ((visibility ("default"))) void * ht_pp_find(HtPP* ht, const void * key, 
# 108 "project/radare2/shlr/sdb/src/ht_inc.h" 3 4
                                                                 _Bool
# 108 "project/radare2/shlr/sdb/src/ht_inc.h"
                                                                     * found);




__attribute__ ((visibility ("default"))) void ht_pp_foreach(HtPP *ht, HtPPForeachCallback cb, void *user);

__attribute__ ((visibility ("default"))) HtPPKv* ht_pp_find_kv(HtPP* ht, const void * key, 
# 115 "project/radare2/shlr/sdb/src/ht_inc.h" 3 4
                                                                  _Bool
# 115 "project/radare2/shlr/sdb/src/ht_inc.h"
                                                                      * found);
__attribute__ ((visibility ("default"))) 
# 116 "project/radare2/shlr/sdb/src/ht_inc.h" 3 4
       _Bool 
# 116 "project/radare2/shlr/sdb/src/ht_inc.h"
            ht_pp_insert_kv(HtPP *ht, HtPPKv *kv, 
# 116 "project/radare2/shlr/sdb/src/ht_inc.h" 3 4
                                                         _Bool 
# 116 "project/radare2/shlr/sdb/src/ht_inc.h"
                                                              update);
# 12 "project/radare2/shlr/sdb/src/ht_pp.h" 2

__attribute__ ((visibility ("default"))) HtPP* ht_pp_new0(void);
__attribute__ ((visibility ("default"))) HtPP* ht_pp_new(HtPPDupValue valdup, HtPPKvFreeFunc pair_free, HtPPCalcSizeV valueSize);
__attribute__ ((visibility ("default"))) HtPP* ht_pp_new_size(unsigned int initial_size, HtPPDupValue valdup, HtPPKvFreeFunc pair_free, HtPPCalcSizeV valueSize);
# 5 "project/radare2/shlr/sdb/src/sdbht.h" 2


typedef struct sdb_kv {

 HtPPKv base;
 unsigned int cas;
 unsigned long long expire;
} SdbKv;

static inline char *sdbkv_key(const SdbKv *kv) {
 return (char *)kv->base.key;
}

static inline char *sdbkv_value(const SdbKv *kv) {
 return (char *)kv->base.value;
}

static inline unsigned int sdbkv_key_len(const SdbKv *kv) {
 return kv->base.key_len;
}

static inline unsigned int sdbkv_value_len(const SdbKv *kv) {
 return kv->base.value_len;
}

__attribute__ ((visibility ("default"))) SdbKv* sdbkv_new2(const char *k, int kl, const char *v, int vl);
__attribute__ ((visibility ("default"))) SdbKv* sdbkv_new(const char *k, const char *v);
extern __attribute__ ((visibility ("default"))) void sdbkv_free(SdbKv *kv);

extern __attribute__ ((visibility ("default"))) unsigned int sdb_hash(const char *key);

__attribute__ ((visibility ("default"))) HtPP* sdb_ht_new(void);

__attribute__ ((visibility ("default"))) void sdb_ht_free(HtPP* ht);

__attribute__ ((visibility ("default"))) 
# 40 "project/radare2/shlr/sdb/src/sdbht.h" 3 4
       _Bool 
# 40 "project/radare2/shlr/sdb/src/sdbht.h"
            sdb_ht_insert(HtPP* ht, const char* key, const char* value);

__attribute__ ((visibility ("default"))) 
# 42 "project/radare2/shlr/sdb/src/sdbht.h" 3 4
       _Bool 
# 42 "project/radare2/shlr/sdb/src/sdbht.h"
            sdb_ht_insert_kvp(HtPP* ht, SdbKv *kvp, 
# 42 "project/radare2/shlr/sdb/src/sdbht.h" 3 4
                                                    _Bool 
# 42 "project/radare2/shlr/sdb/src/sdbht.h"
                                                         update);

__attribute__ ((visibility ("default"))) 
# 44 "project/radare2/shlr/sdb/src/sdbht.h" 3 4
       _Bool 
# 44 "project/radare2/shlr/sdb/src/sdbht.h"
            sdb_ht_update(HtPP* ht, const char* key, const char* value);

__attribute__ ((visibility ("default"))) 
# 46 "project/radare2/shlr/sdb/src/sdbht.h" 3 4
       _Bool 
# 46 "project/radare2/shlr/sdb/src/sdbht.h"
            sdb_ht_delete(HtPP* ht, const char* key);

__attribute__ ((visibility ("default"))) char* sdb_ht_find(HtPP* ht, const char* key, 
# 48 "project/radare2/shlr/sdb/src/sdbht.h" 3 4
                                                    _Bool
# 48 "project/radare2/shlr/sdb/src/sdbht.h"
                                                        * found);

__attribute__ ((visibility ("default"))) SdbKv* sdb_ht_find_kvp(HtPP* ht, const char* key, 
# 50 "project/radare2/shlr/sdb/src/sdbht.h" 3 4
                                                         _Bool
# 50 "project/radare2/shlr/sdb/src/sdbht.h"
                                                             * found);
# 15 "project/radare2/shlr/sdb/src/sdb.h" 2

# 1 "project/radare2/shlr/sdb/src/dict.h" 1




typedef unsigned long long dicti;

typedef struct {
 dicti k;
 dicti v;
 void *u;







} dictkv;






typedef void (*dict_freecb)(void *);
typedef int (*dictkv_cb)(dictkv *, void *);

typedef struct {
 void **table;
 dict_freecb f;
 unsigned int size;
} dict;

typedef dict SdbMini;

__attribute__ ((visibility ("default"))) dict *dict_new(unsigned int size, dict_freecb f);
__attribute__ ((visibility ("default"))) void dict_free(dict*);
__attribute__ ((visibility ("default"))) 
# 38 "project/radare2/shlr/sdb/src/dict.h" 3 4
       _Bool 
# 38 "project/radare2/shlr/sdb/src/dict.h"
            dict_init(dict *m, unsigned int, dict_freecb f);
__attribute__ ((visibility ("default"))) void dict_fini(dict *m);
__attribute__ ((visibility ("default"))) void dict_stats(dict *m);
__attribute__ ((visibility ("default"))) dicti dict_hash(const char *s);
__attribute__ ((visibility ("default"))) 
# 42 "project/radare2/shlr/sdb/src/dict.h" 3 4
       _Bool 
# 42 "project/radare2/shlr/sdb/src/dict.h"
            dict_set(dict *m, dicti k, dicti v, void *u);
__attribute__ ((visibility ("default"))) dictkv *dict_getr(dict *m, dicti k);
__attribute__ ((visibility ("default"))) dictkv *dict_getr(dict *m, dicti k);
__attribute__ ((visibility ("default"))) dicti dict_get(dict *m, dicti k);
__attribute__ ((visibility ("default"))) dicti dict_get(dict *m, dicti k);
__attribute__ ((visibility ("default"))) void *dict_getu(dict *m, dicti k);
__attribute__ ((visibility ("default"))) 
# 48 "project/radare2/shlr/sdb/src/dict.h" 3 4
       _Bool 
# 48 "project/radare2/shlr/sdb/src/dict.h"
            dict_add(dict *m, dicti k, dicti v, void *u);
__attribute__ ((visibility ("default"))) 
# 49 "project/radare2/shlr/sdb/src/dict.h" 3 4
       _Bool 
# 49 "project/radare2/shlr/sdb/src/dict.h"
            dict_del(dict *m, dicti k);
__attribute__ ((visibility ("default"))) void dict_foreach(dict *m, dictkv_cb cb, void *u);
# 17 "project/radare2/shlr/sdb/src/sdb.h" 2
# 1 "project/radare2/shlr/sdb/src/cdb.h" 1
# 15 "project/radare2/shlr/sdb/src/cdb.h"
struct cdb {
 char *map;
 int fd;
 unsigned int size;
 unsigned int loop;
 unsigned int khash;
 unsigned int kpos;
 unsigned int hpos;
 unsigned int hslots;
 unsigned int dpos;
 unsigned int dlen;
};



# 29 "project/radare2/shlr/sdb/src/cdb.h" 3 4
_Bool 
# 29 "project/radare2/shlr/sdb/src/cdb.h"
    cdb_getkvlen(struct cdb *db, unsigned int *klen, unsigned int *vlen, unsigned int pos);
void cdb_free(struct cdb *);

# 31 "project/radare2/shlr/sdb/src/cdb.h" 3 4
_Bool 
# 31 "project/radare2/shlr/sdb/src/cdb.h"
    cdb_init(struct cdb *, int fd);
void cdb_findstart(struct cdb *);

# 33 "project/radare2/shlr/sdb/src/cdb.h" 3 4
_Bool 
# 33 "project/radare2/shlr/sdb/src/cdb.h"
    cdb_read(struct cdb *, char *, unsigned int, unsigned int);
int cdb_findnext(struct cdb *, unsigned int u, const char *, unsigned int);
# 18 "project/radare2/shlr/sdb/src/sdb.h" 2
# 1 "project/radare2/shlr/sdb/src/cdb_make.h" 1





# 1 "project/radare2/shlr/sdb/src/buffer.h" 1





typedef int (*BufferOp)(int, const char *, int);

typedef struct buffer {
 char *x;
 unsigned int p;
 unsigned int n;
 int fd;
 BufferOp op;
} buffer;





extern void buffer_init(buffer *,BufferOp,int,char *,unsigned int);

extern int buffer_flush(buffer *);
extern int buffer_put(buffer *,const char *,unsigned int);
extern int buffer_putalign(buffer *,const char *,unsigned int);
extern int buffer_putflush(buffer *,const char *,unsigned int);







extern int buffer_get(buffer *,char *,unsigned int);
extern int buffer_bget(buffer *,char *,unsigned int);
extern int buffer_feed(buffer *);

extern char *buffer_peek(buffer *);
extern void buffer_seek(buffer *,unsigned int);
# 49 "project/radare2/shlr/sdb/src/buffer.h"
extern int buffer_copy(buffer *,buffer *);

extern buffer *buffer_0;
extern buffer *buffer_0small;
extern buffer *buffer_1;
extern buffer *buffer_1small;
extern buffer *buffer_2;
# 7 "project/radare2/shlr/sdb/src/cdb_make.h" 2




struct cdb_hp { unsigned int h; unsigned int p; } ;

struct cdb_hplist {
 struct cdb_hp hp[1000];
 struct cdb_hplist *next;
 int num;
};

struct cdb_make {
 char bspace[8192];
 char final[1024];
 unsigned int count[256];
 unsigned int start[256];
 struct cdb_hplist *head;
 struct cdb_hp *split;
 struct cdb_hp *hash;
 unsigned int numentries;
 unsigned int memsize;
 buffer b;
 unsigned int pos;
 int fd;
};

extern int cdb_make_start(struct cdb_make *,int);
extern int cdb_make_addbegin(struct cdb_make *,unsigned int,unsigned int);
extern int cdb_make_addend(struct cdb_make *,unsigned int,unsigned int,unsigned int);
extern int cdb_make_add(struct cdb_make *,const char *,unsigned int,const char *,unsigned int);
extern int cdb_make_finish(struct cdb_make *);
# 19 "project/radare2/shlr/sdb/src/sdb.h" 2
# 1 "project/radare2/shlr/sdb/src/sdb_version.h" 1
# 20 "project/radare2/shlr/sdb/src/sdb.h" 2
# 87 "project/radare2/shlr/sdb/src/sdb.h"
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
typedef struct sdb_gperf_t {
 const char *name;
 const char *(*get)(const char *k);
 unsigned int *(*hash)(const char *k);
 
# 92 "project/radare2/shlr/sdb/src/sdb.h" 3 4
_Bool 
# 92 "project/radare2/shlr/sdb/src/sdb.h"
     (*foreach)(GperfForeachCallback cb, void *user);
} SdbGperf;

typedef struct sdb_t {
 char *dir;
 char *path;
 char *name;
 int fd;
 int refs;
 int lock;
 int journal;
 struct cdb db;
 struct cdb_make m;
 HtPP *ht;
 unsigned int eod;
 unsigned int pos;
 SdbGperf *gp;
 int fdump;
 char *ndump;
 unsigned long long expire;
 unsigned long long last;
 int options;
 int ns_lock;
 SdbList *ns;
 SdbList *hooks;
 SdbKv tmpkv;
 unsigned int depth;
 
# 119 "project/radare2/shlr/sdb/src/sdb.h" 3 4
_Bool 
# 119 "project/radare2/shlr/sdb/src/sdb.h"
     timestamped;
 SdbMini mht;
} Sdb;

typedef struct sdb_ns_t {
 char *name;
 unsigned int hash;
 Sdb *sdb;
} SdbNs;

__attribute__ ((visibility ("default"))) Sdb* sdb_new0(void);
__attribute__ ((visibility ("default"))) Sdb* sdb_new(const char *path, const char *file, int lock);

__attribute__ ((visibility ("default"))) int sdb_open(Sdb *s, const char *file);
__attribute__ ((visibility ("default"))) int sdb_open_gperf(Sdb *s, SdbGperf *g);
__attribute__ ((visibility ("default"))) void sdb_close(Sdb *s);

__attribute__ ((visibility ("default"))) void sdb_config(Sdb *s, int options);
__attribute__ ((visibility ("default"))) 
# 137 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 137 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_free(Sdb* s);
__attribute__ ((visibility ("default"))) void sdb_file(Sdb* s, const char *dir);
__attribute__ ((visibility ("default"))) 
# 139 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 139 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_merge(Sdb* d, Sdb *s);
__attribute__ ((visibility ("default"))) int sdb_count(Sdb* s);
__attribute__ ((visibility ("default"))) void sdb_reset(Sdb* s);
__attribute__ ((visibility ("default"))) void sdb_setup(Sdb* s, int options);
__attribute__ ((visibility ("default"))) void sdb_drain(Sdb*, Sdb*);


__attribute__ ((visibility ("default"))) void sdb_copy(Sdb *src, Sdb *dst);

__attribute__ ((visibility ("default"))) 
# 148 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 148 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_stats(Sdb *s, unsigned int *disk, unsigned int *mem);
__attribute__ ((visibility ("default"))) 
# 149 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 149 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_dump_hasnext (Sdb* s);

typedef 
# 151 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 151 "project/radare2/shlr/sdb/src/sdb.h"
            (*SdbForeachCallback)(void *user, const char *k, const char *v);
__attribute__ ((visibility ("default"))) 
# 152 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 152 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_foreach(Sdb* s, SdbForeachCallback cb, void *user);
__attribute__ ((visibility ("default"))) SdbList *sdb_foreach_list(Sdb* s, 
# 153 "project/radare2/shlr/sdb/src/sdb.h" 3 4
                                         _Bool 
# 153 "project/radare2/shlr/sdb/src/sdb.h"
                                              sorted);
__attribute__ ((visibility ("default"))) SdbList *sdb_foreach_list_filter(Sdb* s, SdbForeachCallback filter, 
# 154 "project/radare2/shlr/sdb/src/sdb.h" 3 4
                                                                           _Bool 
# 154 "project/radare2/shlr/sdb/src/sdb.h"
                                                                                sorted);
__attribute__ ((visibility ("default"))) SdbList *sdb_foreach_match(Sdb* s, const char *expr, 
# 155 "project/radare2/shlr/sdb/src/sdb.h" 3 4
                                                            _Bool 
# 155 "project/radare2/shlr/sdb/src/sdb.h"
                                                                 sorted);

__attribute__ ((visibility ("default"))) int sdb_query(Sdb* s, const char *cmd);
__attribute__ ((visibility ("default"))) int sdb_queryf(Sdb* s, const char *fmt, ...);
__attribute__ ((visibility ("default"))) int sdb_query_lines(Sdb *s, const char *cmd);
__attribute__ ((visibility ("default"))) char *sdb_querys(Sdb* s, char *buf, size_t len, const char *cmd);
__attribute__ ((visibility ("default"))) char *sdb_querysf(Sdb* s, char *buf, size_t buflen, const char *fmt, ...);
__attribute__ ((visibility ("default"))) int sdb_query_file(Sdb *s, const char* file);
__attribute__ ((visibility ("default"))) 
# 163 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 163 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_exists(Sdb*, const char *key);
__attribute__ ((visibility ("default"))) 
# 164 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 164 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_remove(Sdb*, const char *key, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_unset(Sdb*, const char *key, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_unset_like(Sdb *s, const char *k);
__attribute__ ((visibility ("default"))) char** sdb_like(Sdb *s, const char *k, const char *v, SdbForeachCallback cb);


typedef struct sdb_diff_t {
 const SdbList *path;
 const char *k;
 const char *v;
 
# 174 "project/radare2/shlr/sdb/src/sdb.h" 3 4
_Bool 
# 174 "project/radare2/shlr/sdb/src/sdb.h"
     add;
} SdbDiff;


__attribute__ ((visibility ("default"))) int sdb_diff_format(char *str, int size, const SdbDiff *diff);

typedef void (*SdbDiffCallback)(const SdbDiff *diff, void *user);



__attribute__ ((visibility ("default"))) 
# 184 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 184 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_diff(Sdb *a, Sdb *b, SdbDiffCallback cb, void *cb_user);


__attribute__ ((visibility ("default"))) char *sdb_get(Sdb*, const char *key, unsigned int *cas);



__attribute__ ((visibility ("default"))) char *sdb_get_len(Sdb*, const char *key, int *vlen, unsigned int *cas);


__attribute__ ((visibility ("default"))) const char *sdb_const_get(Sdb*, const char *key, unsigned int *cas);



__attribute__ ((visibility ("default"))) const char *sdb_const_get_len(Sdb* s, const char *key, int *vlen, unsigned int *cas);
__attribute__ ((visibility ("default"))) int sdb_set(Sdb*, const char *key, const char *data, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_set_owned(Sdb* s, const char *key, char *val, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_concat(Sdb *s, const char *key, const char *value, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_uncat(Sdb *s, const char *key, const char *value, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_add(Sdb* s, const char *key, const char *val, unsigned int cas);
__attribute__ ((visibility ("default"))) 
# 204 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 204 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_sync(Sdb*);
__attribute__ ((visibility ("default"))) void sdbkv_free(SdbKv *kv);


__attribute__ ((visibility ("default"))) 
# 208 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 208 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_num_exists(Sdb*, const char *key);
__attribute__ ((visibility ("default"))) int sdb_num_base(const char *s);
__attribute__ ((visibility ("default"))) unsigned long long sdb_num_get(Sdb* s, const char *key, unsigned int *cas);
__attribute__ ((visibility ("default"))) int sdb_num_set(Sdb* s, const char *key, unsigned long long v, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_num_add(Sdb *s, const char *key, unsigned long long v, unsigned int cas);
__attribute__ ((visibility ("default"))) unsigned long long sdb_num_inc(Sdb* s, const char *key, unsigned long long n, unsigned int cas);
__attribute__ ((visibility ("default"))) unsigned long long sdb_num_dec(Sdb* s, const char *key, unsigned long long n, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_num_min(Sdb* s, const char *key, unsigned long long v, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_num_max(Sdb* s, const char *key, unsigned long long v, unsigned int cas);


__attribute__ ((visibility ("default"))) int sdb_ptr_set(Sdb *db, const char *key, void *p, unsigned int cas);
__attribute__ ((visibility ("default"))) void* sdb_ptr_get(Sdb *db, const char *key, unsigned int *cas);


__attribute__ ((visibility ("default"))) 
# 223 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 223 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_disk_create(Sdb* s);
__attribute__ ((visibility ("default"))) 
# 224 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 224 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_disk_insert(Sdb* s, const char *key, const char *val);
__attribute__ ((visibility ("default"))) 
# 225 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 225 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_disk_finish(Sdb* s);
__attribute__ ((visibility ("default"))) 
# 226 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 226 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_disk_unlink(Sdb* s);


__attribute__ ((visibility ("default"))) 
# 229 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 229 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_text_save_fd(Sdb *s, int fd, 
# 229 "project/radare2/shlr/sdb/src/sdb.h" 3 4
                                             _Bool 
# 229 "project/radare2/shlr/sdb/src/sdb.h"
                                                  sort);
__attribute__ ((visibility ("default"))) 
# 230 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 230 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_text_save(Sdb *s, const char *file, 
# 230 "project/radare2/shlr/sdb/src/sdb.h" 3 4
                                                    _Bool 
# 230 "project/radare2/shlr/sdb/src/sdb.h"
                                                         sort);
__attribute__ ((visibility ("default"))) 
# 231 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 231 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_text_load_buf(Sdb *s, char *buf, size_t sz);
__attribute__ ((visibility ("default"))) 
# 232 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 232 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_text_load(Sdb *s, const char *file);
__attribute__ ((visibility ("default"))) 
# 233 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 233 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_text_check(Sdb *s, const char *file);


__attribute__ ((visibility ("default"))) void sdb_dump_begin(Sdb* s);
__attribute__ ((visibility ("default"))) SdbKv *sdb_dump_next(Sdb* s);
__attribute__ ((visibility ("default"))) 
# 238 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 238 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_dump_dupnext(Sdb* s, char *key, char **value, int *_vlen);


__attribute__ ((visibility ("default"))) 
# 241 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 241 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_journal_close(Sdb *s);
__attribute__ ((visibility ("default"))) 
# 242 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 242 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_journal_open(Sdb *s);
__attribute__ ((visibility ("default"))) int sdb_journal_load(Sdb *s);
__attribute__ ((visibility ("default"))) 
# 244 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 244 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_journal_log(Sdb *s, const char *key, const char *val);
__attribute__ ((visibility ("default"))) 
# 245 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 245 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_journal_clear(Sdb *s);
__attribute__ ((visibility ("default"))) 
# 246 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 246 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_journal_unlink(Sdb *s);


__attribute__ ((visibility ("default"))) char *sdb_itoa(unsigned long long n, char *s, int base);
__attribute__ ((visibility ("default"))) unsigned long long sdb_atoi(const char *s);
__attribute__ ((visibility ("default"))) const char *sdb_itoca(unsigned long long n);


__attribute__ ((visibility ("default"))) 
# 254 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 254 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_lock(const char *s);
__attribute__ ((visibility ("default"))) const char *sdb_lock_file(const char *f);
__attribute__ ((visibility ("default"))) void sdb_unlock(const char *s);
__attribute__ ((visibility ("default"))) 
# 257 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 257 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_unlink(Sdb* s);
__attribute__ ((visibility ("default"))) int sdb_lock_wait(const char *s __attribute__((__unused__)));


__attribute__ ((visibility ("default"))) 
# 261 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 261 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_expire_set(Sdb* s, const char *key, unsigned long long expire, unsigned int cas);
__attribute__ ((visibility ("default"))) unsigned long long sdb_expire_get(Sdb* s, const char *key, unsigned int *cas);
__attribute__ ((visibility ("default"))) unsigned long long sdb_now(void);
__attribute__ ((visibility ("default"))) unsigned long long sdb_unow(void);
__attribute__ ((visibility ("default"))) unsigned int sdb_hash(const char *key);
__attribute__ ((visibility ("default"))) unsigned int sdb_hash_len(const char *key, unsigned int *len);
__attribute__ ((visibility ("default"))) unsigned char sdb_hash_byte(const char *s);



__attribute__ ((visibility ("default"))) 
# 271 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 271 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_isjson(const char *k);
__attribute__ ((visibility ("default"))) char *sdb_json_get_str (const char *json, const char *path);
__attribute__ ((visibility ("default"))) 
# 273 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 273 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_json_get_bool(const char *json, const char *path);

__attribute__ ((visibility ("default"))) char *sdb_json_get(Sdb* s, const char *key, const char *p, unsigned int *cas);
__attribute__ ((visibility ("default"))) 
# 276 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 276 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_json_set(Sdb* s, const char *k, const char *p, const char *v, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_json_num_get(Sdb* s, const char *k, const char *p, unsigned int *cas);
__attribute__ ((visibility ("default"))) int sdb_json_num_set(Sdb* s, const char *k, const char *p, int v, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_json_num_dec(Sdb* s, const char *k, const char *p, int n, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_json_num_inc(Sdb* s, const char *k, const char *p, int n, unsigned int cas);

__attribute__ ((visibility ("default"))) char *sdb_json_indent(const char *s, const char *tab);
__attribute__ ((visibility ("default"))) char *sdb_json_unindent(const char *s);

typedef struct {
 char *buf;
 size_t blen;
 size_t len;
} SdbJsonString;

__attribute__ ((visibility ("default"))) const char *sdb_json_format(SdbJsonString* s, const char *fmt, ...);



__attribute__ ((visibility ("default"))) Sdb* sdb_ns(Sdb *s, const char *name, int create);
__attribute__ ((visibility ("default"))) Sdb *sdb_ns_path(Sdb *s, const char *path, int create);
__attribute__ ((visibility ("default"))) void sdb_ns_init(Sdb* s);
__attribute__ ((visibility ("default"))) void sdb_ns_free(Sdb* s);
__attribute__ ((visibility ("default"))) void sdb_ns_lock(Sdb *s, int lock, int depth);
__attribute__ ((visibility ("default"))) void sdb_ns_sync(Sdb* s);
__attribute__ ((visibility ("default"))) int sdb_ns_set(Sdb *s, const char *name, Sdb *r);
__attribute__ ((visibility ("default"))) 
# 302 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 302 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_ns_unset(Sdb *s, const char *name, Sdb *r);


__attribute__ ((visibility ("default"))) 
# 305 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 305 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_array_contains(Sdb* s, const char *key, const char *val, unsigned int *cas);
__attribute__ ((visibility ("default"))) 
# 306 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 306 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_array_contains_num(Sdb *s, const char *key, unsigned long long val, unsigned int *cas);
__attribute__ ((visibility ("default"))) int sdb_array_indexof(Sdb *s, const char *key, const char *val, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_array_set(Sdb* s, const char *key, int idx, const char *val, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_array_set_num(Sdb* s, const char *key, int idx, unsigned long long val, unsigned int cas);
__attribute__ ((visibility ("default"))) 
# 310 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 310 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_array_append(Sdb *s, const char *key, const char *val, unsigned int cas);
__attribute__ ((visibility ("default"))) 
# 311 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 311 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_array_append_num(Sdb *s, const char *key, unsigned long long val, unsigned int cas);
__attribute__ ((visibility ("default"))) 
# 312 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 312 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_array_prepend(Sdb *s, const char *key, const char *val, unsigned int cas);
__attribute__ ((visibility ("default"))) 
# 313 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 313 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_array_prepend_num(Sdb *s, const char *key, unsigned long long val, unsigned int cas);
__attribute__ ((visibility ("default"))) char *sdb_array_get(Sdb* s, const char *key, int idx, unsigned int *cas);
__attribute__ ((visibility ("default"))) unsigned long long sdb_array_get_num(Sdb* s, const char *key, int idx, unsigned int *cas);
__attribute__ ((visibility ("default"))) int sdb_array_get_idx(Sdb *s, const char *key, const char *val, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_array_insert(Sdb* s, const char *key, int idx, const char *val, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_array_insert_num(Sdb* s, const char *key, int idx, unsigned long long val, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_array_unset(Sdb* s, const char *key, int n, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_array_delete(Sdb* s, const char *key, int n, unsigned int cas);
__attribute__ ((visibility ("default"))) void sdb_array_sort(Sdb* s, const char *key, unsigned int cas);
__attribute__ ((visibility ("default"))) void sdb_array_sort_num(Sdb* s, const char *key, unsigned int cas);



__attribute__ ((visibility ("default"))) int sdb_array_add(Sdb* s, const char *key, const char *val, unsigned int cas);


__attribute__ ((visibility ("default"))) int sdb_array_add_num(Sdb* s, const char *key, unsigned long long val, unsigned int cas);


__attribute__ ((visibility ("default"))) int sdb_array_add_sorted(Sdb *s, const char *key, const char *val, unsigned int cas);


__attribute__ ((visibility ("default"))) int sdb_array_add_sorted_num(Sdb *s, const char *key, unsigned long long val, unsigned int cas);


__attribute__ ((visibility ("default"))) int sdb_array_remove(Sdb *s, const char *key, const char *val, unsigned int cas);


__attribute__ ((visibility ("default"))) int sdb_array_remove_num(Sdb* s, const char *key, unsigned long long val, unsigned int cas);


__attribute__ ((visibility ("default"))) char *sdb_anext(char *str, char **next);
__attribute__ ((visibility ("default"))) const char *sdb_const_anext(const char *str);
__attribute__ ((visibility ("default"))) int sdb_alen(const char *str);
__attribute__ ((visibility ("default"))) int sdb_alen_ignore_empty(const char *str);
__attribute__ ((visibility ("default"))) int sdb_array_size(Sdb* s, const char *key);
__attribute__ ((visibility ("default"))) int sdb_array_length(Sdb* s, const char *key);

int sdb_array_list(Sdb* s, const char *key);


__attribute__ ((visibility ("default"))) 
# 354 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 354 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_array_push(Sdb *s, const char *key, const char *val, unsigned int cas);



__attribute__ ((visibility ("default"))) char *sdb_array_pop(Sdb *s, const char *key, unsigned int *cas);


__attribute__ ((visibility ("default"))) int sdb_array_push_num(Sdb *s, const char *key, unsigned long long num, unsigned int cas);


__attribute__ ((visibility ("default"))) unsigned long long sdb_array_pop_num(Sdb *s, const char *key, unsigned int *cas);

__attribute__ ((visibility ("default"))) char *sdb_array_pop_head(Sdb *s, const char *key, unsigned int *cas);
__attribute__ ((visibility ("default"))) char *sdb_array_pop_tail(Sdb *s, const char *key, unsigned int *cas);

typedef void (*SdbHook)(Sdb *s, void *user, const char *k, const char *v);

__attribute__ ((visibility ("default"))) void sdb_global_hook(SdbHook hook, void *user);
__attribute__ ((visibility ("default"))) 
# 372 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 372 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_hook(Sdb* s, SdbHook cb, void* user);
__attribute__ ((visibility ("default"))) 
# 373 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 373 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_unhook(Sdb* s, SdbHook h);
__attribute__ ((visibility ("default"))) int sdb_hook_call(Sdb *s, const char *k, const char *v);
__attribute__ ((visibility ("default"))) void sdb_hook_free(Sdb *s);

__attribute__ ((visibility ("default"))) int sdb_isnum(const char *s);
__attribute__ ((visibility ("default"))) 
# 378 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 378 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_isempty(Sdb *s);

__attribute__ ((visibility ("default"))) const char *sdb_type(const char *k);
__attribute__ ((visibility ("default"))) 
# 381 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 381 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_match(const char *str, const char *glob);
__attribute__ ((visibility ("default"))) int sdb_bool_set(Sdb *db, const char *str, 
# 382 "project/radare2/shlr/sdb/src/sdb.h" 3 4
                                                  _Bool 
# 382 "project/radare2/shlr/sdb/src/sdb.h"
                                                       v, unsigned int cas);
__attribute__ ((visibility ("default"))) 
# 383 "project/radare2/shlr/sdb/src/sdb.h" 3 4
       _Bool 
# 383 "project/radare2/shlr/sdb/src/sdb.h"
            sdb_bool_get(Sdb *db, const char *str, unsigned int *cas);


__attribute__ ((visibility ("default"))) unsigned char *sdb_decode(const char *in, int *len);
__attribute__ ((visibility ("default"))) char *sdb_encode(const unsigned char *bin, int len);
__attribute__ ((visibility ("default"))) void sdb_encode_raw(char *bout, const unsigned char *bin, int len);
__attribute__ ((visibility ("default"))) int sdb_decode_raw(unsigned char *bout, const char *bin, int len);


__attribute__ ((visibility ("default"))) char *sdb_fmt(const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));
__attribute__ ((visibility ("default"))) int sdb_fmt_init(void *p, const char *fmt);
__attribute__ ((visibility ("default"))) void sdb_fmt_free(void *p, const char *fmt);
__attribute__ ((visibility ("default"))) int sdb_fmt_tobin(const char *_str, const char *fmt, void *stru);
__attribute__ ((visibility ("default"))) char *sdb_fmt_tostr(void *stru, const char *fmt);
__attribute__ ((visibility ("default"))) char** sdb_fmt_array(const char *list);
__attribute__ ((visibility ("default"))) unsigned long long* sdb_fmt_array_num(const char *list);


__attribute__ ((visibility ("default"))) char *sdb_array_compact(char *p);
__attribute__ ((visibility ("default"))) char *sdb_aslice(char *out, int from, int to);
# 10 "project/radare2/shlr/sdb/src/sdb.c" 2
# 21 "project/radare2/shlr/sdb/src/sdb.c"
static inline SdbKv *next_kv(HtPP *ht, SdbKv *kv) {
 return (SdbKv *)((char *)kv + ht->opt.elem_size);
}
# 34 "project/radare2/shlr/sdb/src/sdb.c"
static inline int nextcas(void) {
 static unsigned int cas = 1;
 if (!cas) {
  cas++;
 }
 return cas++;
}

static SdbHook global_hook = 
# 42 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                            ((void *)0)
# 42 "project/radare2/shlr/sdb/src/sdb.c"
                                ;
static void* global_user = 
# 43 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                          ((void *)0)
# 43 "project/radare2/shlr/sdb/src/sdb.c"
                              ;

__attribute__ ((visibility ("default"))) void sdb_global_hook(SdbHook hook, void *user) {
 global_hook = hook;
 global_user = user;
}


__attribute__ ((visibility ("default"))) Sdb* sdb_new0(void) {
 return sdb_new (
# 52 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                ((void *)0)
# 52 "project/radare2/shlr/sdb/src/sdb.c"
                    , 
# 52 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                      ((void *)0)
# 52 "project/radare2/shlr/sdb/src/sdb.c"
                          , 0);
}

__attribute__ ((visibility ("default"))) Sdb* sdb_new(const char *path, const char *name, int lock) {
 Sdb* s = (Sdb*)calloc(1, sizeof(Sdb));
 if (!s) {
  return 
# 58 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        ((void *)0)
# 58 "project/radare2/shlr/sdb/src/sdb.c"
            ;
 }
 s->db.fd = -1;
 s->fd = -1;
 s->refs = 1;
 s->ht = sdb_ht_new ();
 if (path && !*path) {
  path = 
# 65 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        ((void *)0)
# 65 "project/radare2/shlr/sdb/src/sdb.c"
            ;
 }
 if (name && *name && strcmp (name, "-")) {
  if (path && *path) {
   size_t plen = strlen (path);
   size_t nlen = strlen (name);
   s->dir = malloc (plen + nlen + 2);
   if (!s->dir) {
    free (s);
    return 
# 74 "project/radare2/shlr/sdb/src/sdb.c" 3 4
          ((void *)0)
# 74 "project/radare2/shlr/sdb/src/sdb.c"
              ;
   }
   
# 76 "project/radare2/shlr/sdb/src/sdb.c" 3 4
  __builtin___memcpy_chk (
# 76 "project/radare2/shlr/sdb/src/sdb.c"
  s->dir
# 76 "project/radare2/shlr/sdb/src/sdb.c" 3 4
  , 
# 76 "project/radare2/shlr/sdb/src/sdb.c"
  path, plen
# 76 "project/radare2/shlr/sdb/src/sdb.c" 3 4
  , __builtin_object_size (
# 76 "project/radare2/shlr/sdb/src/sdb.c"
  s->dir
# 76 "project/radare2/shlr/sdb/src/sdb.c" 3 4
  , 0))
# 76 "project/radare2/shlr/sdb/src/sdb.c"
                             ;
   s->dir[plen] = '/';
   
# 78 "project/radare2/shlr/sdb/src/sdb.c" 3 4
  __builtin___memcpy_chk (
# 78 "project/radare2/shlr/sdb/src/sdb.c"
  s->dir + plen + 1
# 78 "project/radare2/shlr/sdb/src/sdb.c" 3 4
  , 
# 78 "project/radare2/shlr/sdb/src/sdb.c"
  name, nlen + 1
# 78 "project/radare2/shlr/sdb/src/sdb.c" 3 4
  , __builtin_object_size (
# 78 "project/radare2/shlr/sdb/src/sdb.c"
  s->dir + plen + 1
# 78 "project/radare2/shlr/sdb/src/sdb.c" 3 4
  , 0))
# 78 "project/radare2/shlr/sdb/src/sdb.c"
                                            ;
   s->path = strdup (path);
  } else {
   s->dir = strdup (name);
  }
  switch (lock) {
  case 1:
   if (!sdb_lock (sdb_lock_file (s->dir))) {
    goto fail;
   }
   break;
  case 2:
   if (!sdb_lock_wait (sdb_lock_file (s->dir))) {
    goto fail;
   }
   break;
  }
  if (sdb_open (s, s->dir) == -1) {
   s->last = s->timestamped? sdb_now (): 0LL;

  }
  s->name = strdup (name);
 } else {
  s->last = s->timestamped? sdb_now (): 0LL;
  s->fd = -1;
 }
 s->journal = -1;
 s->fdump = -1;
 s->depth = 0;
 s->ndump = 
# 107 "project/radare2/shlr/sdb/src/sdb.c" 3 4
           ((void *)0)
# 107 "project/radare2/shlr/sdb/src/sdb.c"
               ;
 s->ns = ls_new ();
 if (!s->ns) {
  goto fail;
 }
 s->ns->free = 
# 112 "project/radare2/shlr/sdb/src/sdb.c" 3 4
              ((void *)0)
# 112 "project/radare2/shlr/sdb/src/sdb.c"
                  ;
 if (!s->ns) {
  goto fail;
 }
 s->lock = lock;

 if (global_hook) {
  sdb_hook (s, global_hook, global_user);
 }
 cdb_init (&s->db, s->fd);
 return s;
fail:
 if (s->fd != -1) {
  close (s->fd);
  s->fd = -1;
 }
 free (s->dir);
 free (s->name);
 free (s->path);
 free (s);
 return 
# 132 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       ((void *)0)
# 132 "project/radare2/shlr/sdb/src/sdb.c"
           ;
}


__attribute__ ((visibility ("default"))) void sdb_file(Sdb* s, const char *dir) {
 if (s->lock) {
  sdb_unlock (sdb_lock_file (s->dir));
 }
 free (s->dir);
 s->dir = (dir && *dir)? strdup (dir): 
# 141 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                                      ((void *)0)
# 141 "project/radare2/shlr/sdb/src/sdb.c"
                                          ;
 if (s->lock) {
  sdb_lock (sdb_lock_file (s->dir));
 }
}

static 
# 147 "project/radare2/shlr/sdb/src/sdb.c" 3 4
      _Bool 
# 147 "project/radare2/shlr/sdb/src/sdb.c"
           sdb_merge_cb(void *user, const char *k, const char *v) {
 sdb_set (user, k, v, 0);
 return 
# 149 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       1
# 149 "project/radare2/shlr/sdb/src/sdb.c"
           ;
}

__attribute__ ((visibility ("default"))) 
# 152 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       _Bool 
# 152 "project/radare2/shlr/sdb/src/sdb.c"
            sdb_merge(Sdb* d, Sdb *s) {
 return sdb_foreach (s, sdb_merge_cb, d);
}

__attribute__ ((visibility ("default"))) 
# 156 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       _Bool 
# 156 "project/radare2/shlr/sdb/src/sdb.c"
            sdb_isempty(Sdb *s) {
 if (s) {
  if (s->db.fd != -1) {
   sdb_dump_begin (s);
   while (sdb_dump_hasnext (s)) {
    return 
# 161 "project/radare2/shlr/sdb/src/sdb.c" 3 4
          0
# 161 "project/radare2/shlr/sdb/src/sdb.c"
               ;
   }
  }
  if (s->ht && s->ht->count > 0) {
   return 
# 165 "project/radare2/shlr/sdb/src/sdb.c" 3 4
         0
# 165 "project/radare2/shlr/sdb/src/sdb.c"
              ;
  }
 }
 return 
# 168 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       1
# 168 "project/radare2/shlr/sdb/src/sdb.c"
           ;
}

__attribute__ ((visibility ("default"))) int sdb_count(Sdb *s) {
 int count = 0;
 if (s) {
  if (s->db.fd != -1) {
   sdb_dump_begin (s);
   while (sdb_dump_hasnext (s)) {
    count++;
   }
  }
  if (s->ht) {
   count += s->ht->count;
  }
 }
 return count;
}

static void sdb_fini(Sdb* s, 
# 187 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                            _Bool 
# 187 "project/radare2/shlr/sdb/src/sdb.c"
                                 donull) {
 if (!s) {
  return;
 }
 sdb_hook_free (s);
 cdb_free (&s->db);
 if (s->lock) {
  sdb_unlock (sdb_lock_file (s->dir));
 }
 sdb_ns_free (s);
 s->refs = 0;
 free (s->name);
 free (s->path);
 ls_free (s->ns);
 sdb_ht_free (s->ht);
 sdb_journal_close (s);
 if (s->fd != -1) {
  close (s->fd);
  s->fd = -1;
 }
 free (s->ndump);
 free (s->dir);
 free (sdbkv_value (&s->tmpkv));
 s->tmpkv.base.value_len = 0;
 if (donull) {
  
# 212 "project/radare2/shlr/sdb/src/sdb.c" 3 4
 __builtin___memset_chk (
# 212 "project/radare2/shlr/sdb/src/sdb.c"
 s
# 212 "project/radare2/shlr/sdb/src/sdb.c" 3 4
 , 
# 212 "project/radare2/shlr/sdb/src/sdb.c"
 0, sizeof (Sdb)
# 212 "project/radare2/shlr/sdb/src/sdb.c" 3 4
 , __builtin_object_size (
# 212 "project/radare2/shlr/sdb/src/sdb.c"
 s
# 212 "project/radare2/shlr/sdb/src/sdb.c" 3 4
 , 0))
# 212 "project/radare2/shlr/sdb/src/sdb.c"
                            ;
 }
}

__attribute__ ((visibility ("default"))) 
# 216 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       _Bool 
# 216 "project/radare2/shlr/sdb/src/sdb.c"
            sdb_free(Sdb* s) {
 if (s && s->ht && s->refs) {
  s->refs--;
  if (s->refs < 1) {
   s->refs = 0;
   sdb_fini (s, 
# 221 "project/radare2/shlr/sdb/src/sdb.c" 3 4
               0
# 221 "project/radare2/shlr/sdb/src/sdb.c"
                    );
   s->ht = 
# 222 "project/radare2/shlr/sdb/src/sdb.c" 3 4
          ((void *)0)
# 222 "project/radare2/shlr/sdb/src/sdb.c"
              ;
   free (s);
   return 
# 224 "project/radare2/shlr/sdb/src/sdb.c" 3 4
         1
# 224 "project/radare2/shlr/sdb/src/sdb.c"
             ;
  }
 }
 return 
# 227 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       0
# 227 "project/radare2/shlr/sdb/src/sdb.c"
            ;
}

__attribute__ ((visibility ("default"))) const char *sdb_const_get_len(Sdb* s, const char *key, int *vlen, unsigned int *cas) {
 unsigned int pos, len;
 unsigned long long now = 0LL;
 
# 233 "project/radare2/shlr/sdb/src/sdb.c" 3 4
_Bool 
# 233 "project/radare2/shlr/sdb/src/sdb.c"
     found;

 if (cas) {
  *cas = 0;
 }
 if (vlen) {
  *vlen = 0;
 }
 if (!s || !key) {
  return 
# 242 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        ((void *)0)
# 242 "project/radare2/shlr/sdb/src/sdb.c"
            ;
 }

 size_t keylen = strlen (key);


 if (s->ht) {
  SdbKv *kv = (SdbKv*) sdb_ht_find_kvp (s->ht, key, &found);
  if (found) {
   if (!sdbkv_value (kv) || !*sdbkv_value (kv)) {
    return 
# 252 "project/radare2/shlr/sdb/src/sdb.c" 3 4
          ((void *)0)
# 252 "project/radare2/shlr/sdb/src/sdb.c"
              ;
   }
   if (s->timestamped && kv->expire) {
    if (!now) {
     now = sdb_now ();
    }
    if (now > kv->expire) {
     sdb_unset (s, key, 0);
     return 
# 260 "project/radare2/shlr/sdb/src/sdb.c" 3 4
           ((void *)0)
# 260 "project/radare2/shlr/sdb/src/sdb.c"
               ;
    }
   }
   if (cas) {
    *cas = kv->cas;
   }
   if (vlen) {
    *vlen = sdbkv_value_len (kv);
   }
   return sdbkv_value (kv);
  }
 }

 if (s->gp && s->gp->get) {
  return s->gp->get (key);
 }

 if (s->fd == -1) {
  return 
# 278 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        ((void *)0)
# 278 "project/radare2/shlr/sdb/src/sdb.c"
            ;
 }
 (void) cdb_findstart (&s->db);
 if (!s->ht || cdb_findnext (&s->db, s->ht->opt.hashfn (key), key, keylen) < 1) {
  return 
# 282 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        ((void *)0)
# 282 "project/radare2/shlr/sdb/src/sdb.c"
            ;
 }
 len = ((&s->db)->dlen);
 if (len < 1 || len >= 0xffffff) {
  return 
# 286 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        ((void *)0)
# 286 "project/radare2/shlr/sdb/src/sdb.c"
            ;
 }
 if (vlen) {
  *vlen = len;
 }
 pos = ((&s->db)->dpos);
 return s->db.map + pos;
}

__attribute__ ((visibility ("default"))) const char *sdb_const_get(Sdb* s, const char *key, unsigned int *cas) {
 return sdb_const_get_len (s, key, 
# 296 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                                  ((void *)0)
# 296 "project/radare2/shlr/sdb/src/sdb.c"
                                      , cas);
}



__attribute__ ((visibility ("default"))) char *sdb_get_len(Sdb* s, const char *key, int *vlen, unsigned int *cas) {
 const char *value = sdb_const_get_len (s, key, vlen, cas);
 return value ? strdup (value) : 
# 303 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                                ((void *)0)
# 303 "project/radare2/shlr/sdb/src/sdb.c"
                                    ;
}

__attribute__ ((visibility ("default"))) char *sdb_get(Sdb* s, const char *key, unsigned int *cas) {
 return sdb_get_len (s, key, 
# 307 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                            ((void *)0)
# 307 "project/radare2/shlr/sdb/src/sdb.c"
                                , cas);
}

__attribute__ ((visibility ("default"))) int sdb_unset(Sdb* s, const char *key, unsigned int cas) {
 return key? sdb_set (s, key, "", cas): 0;
}


__attribute__ ((visibility ("default"))) 
# 315 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       _Bool 
# 315 "project/radare2/shlr/sdb/src/sdb.c"
            sdb_remove(Sdb *s, const char *key, unsigned int cas) {
 return sdb_ht_delete (s->ht, key);
}


__attribute__ ((visibility ("default"))) int sdb_uncat(Sdb *s, const char *key, const char *value, unsigned int cas) {


 int vlen = 0, valen;
 char *p, *v = sdb_get_len (s, key, &vlen, 
# 324 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                                          ((void *)0)
# 324 "project/radare2/shlr/sdb/src/sdb.c"
                                              );
 int mod = 0;
 if (!v || !key || !value) {
  free (v);
  return 0;
 }
 valen = strlen (value);
 if (valen > 0) {
  while ((p = strstr (v, value))) {
   
# 333 "project/radare2/shlr/sdb/src/sdb.c" 3 4
  __builtin___memmove_chk (
# 333 "project/radare2/shlr/sdb/src/sdb.c"
  p
# 333 "project/radare2/shlr/sdb/src/sdb.c" 3 4
  , 
# 333 "project/radare2/shlr/sdb/src/sdb.c"
  p + valen, strlen (p + valen) + 1
# 333 "project/radare2/shlr/sdb/src/sdb.c" 3 4
  , __builtin_object_size (
# 333 "project/radare2/shlr/sdb/src/sdb.c"
  p
# 333 "project/radare2/shlr/sdb/src/sdb.c" 3 4
  , 0))
# 333 "project/radare2/shlr/sdb/src/sdb.c"
                                                ;
   mod = 1;
  }
 }
 if (mod) {
  sdb_set_owned (s, key, v, 0);
 } else {
  free (v);
 }
 return 0;
}

__attribute__ ((visibility ("default"))) int sdb_concat(Sdb *s, const char *key, const char *value, unsigned int cas) {
 int kl, vl;
 const char *p;
 char *o;
 if (!s || !key || !*key || !value || !*value) {
  return 0;
 }
 p = sdb_const_get_len (s, key, &kl, 0);
 if (!p) {
  return sdb_set (s, key, value, cas);
 }
 vl = strlen (value);
 o = malloc (kl + vl + 1);
 if (o) {
  
# 359 "project/radare2/shlr/sdb/src/sdb.c" 3 4
 __builtin___memcpy_chk (
# 359 "project/radare2/shlr/sdb/src/sdb.c"
 o
# 359 "project/radare2/shlr/sdb/src/sdb.c" 3 4
 , 
# 359 "project/radare2/shlr/sdb/src/sdb.c"
 p, kl
# 359 "project/radare2/shlr/sdb/src/sdb.c" 3 4
 , __builtin_object_size (
# 359 "project/radare2/shlr/sdb/src/sdb.c"
 o
# 359 "project/radare2/shlr/sdb/src/sdb.c" 3 4
 , 0))
# 359 "project/radare2/shlr/sdb/src/sdb.c"
                  ;
  
# 360 "project/radare2/shlr/sdb/src/sdb.c" 3 4
 __builtin___memcpy_chk (
# 360 "project/radare2/shlr/sdb/src/sdb.c"
 o + kl
# 360 "project/radare2/shlr/sdb/src/sdb.c" 3 4
 , 
# 360 "project/radare2/shlr/sdb/src/sdb.c"
 value, vl + 1
# 360 "project/radare2/shlr/sdb/src/sdb.c" 3 4
 , __builtin_object_size (
# 360 "project/radare2/shlr/sdb/src/sdb.c"
 o + kl
# 360 "project/radare2/shlr/sdb/src/sdb.c" 3 4
 , 0))
# 360 "project/radare2/shlr/sdb/src/sdb.c"
                               ;
  return sdb_set_owned (s, key, o, cas);
 }
 return 0;
}


__attribute__ ((visibility ("default"))) int sdb_add(Sdb* s, const char *key, const char *val, unsigned int cas) {
 if (sdb_exists (s, key)) {
  return 0;
 }
 return sdb_set (s, key, val, cas);
}

__attribute__ ((visibility ("default"))) 
# 374 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       _Bool 
# 374 "project/radare2/shlr/sdb/src/sdb.c"
            sdb_exists(Sdb* s, const char *key) {
 unsigned int pos;
 char ch;
 
# 377 "project/radare2/shlr/sdb/src/sdb.c" 3 4
_Bool 
# 377 "project/radare2/shlr/sdb/src/sdb.c"
     found;
 size_t klen = strlen (key) + 1;
 if (!s) {
  return 
# 380 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        0
# 380 "project/radare2/shlr/sdb/src/sdb.c"
             ;
 }
 SdbKv *kv = (SdbKv*)sdb_ht_find_kvp (s->ht, key, &found);
 if (found && kv) {
  char *v = sdbkv_value (kv);
  return v && *v;
 }
 if (s->fd == -1) {
  return 
# 388 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        0
# 388 "project/radare2/shlr/sdb/src/sdb.c"
             ;
 }
 (void)cdb_findstart (&s->db);
 if (cdb_findnext (&s->db, sdb_hash (key), key, klen)) {
  pos = ((&s->db)->dpos);
  cdb_read (&s->db, &ch, 1, pos);
  return ch != 0;
 }
 return 
# 396 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       0
# 396 "project/radare2/shlr/sdb/src/sdb.c"
            ;
}

__attribute__ ((visibility ("default"))) int sdb_open_gperf(Sdb *s, SdbGperf *gp) {
 if (!s || !gp) {
  return -1;
 }
 s->gp = gp;
 return 0;
}

static int sdb_open_text(Sdb *s, const char *file) {
 if (!sdb_text_load (s, file)) {
  return -1;
 }
 return s->fd;
}

__attribute__ ((visibility ("default"))) int sdb_open(Sdb *s, const char *file) {
        struct stat st;
 if (!s) {
  return -1;
 }
 if (file) {
  if (sdb_text_check (s, file)) {
   return sdb_open_text (s, file);
  }
  if (s->fd != -1) {
   close (s->fd);
   s->fd = -1;
  }
  s->fd = open (file, 
# 427 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                     0x0000 
# 427 "project/radare2/shlr/sdb/src/sdb.c"
                              | 0);
  if (file != s->dir) {
   free (s->dir);
   s->dir = strdup (file);
   s->path = 
# 431 "project/radare2/shlr/sdb/src/sdb.c" 3 4
            ((void *)0)
# 431 "project/radare2/shlr/sdb/src/sdb.c"
                ;
  }
 }
 s->last = 0LL;
 if (s->fd != -1 && fstat (s->fd, &st) != -1) {
  if ((
# 436 "project/radare2/shlr/sdb/src/sdb.c" 3 4
      0100000 
# 436 "project/radare2/shlr/sdb/src/sdb.c"
              & st.st_mode) != 
# 436 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                               0100000
# 436 "project/radare2/shlr/sdb/src/sdb.c"
                                      ) {
   fprintf(
# 437 "project/radare2/shlr/sdb/src/sdb.c" 3 4
  __stderrp
# 437 "project/radare2/shlr/sdb/src/sdb.c"
  ,"Database must be a file\n");
   close (s->fd);
   s->fd = -1;
   return -1;
  }
  s->last = st.
# 442 "project/radare2/shlr/sdb/src/sdb.c" 3 4
              st_mtimespec.tv_sec
# 442 "project/radare2/shlr/sdb/src/sdb.c"
                      ;
 }
 if (s->fd != -1) {
  cdb_init (&s->db, s->fd);
 }
 return s->fd;
}

__attribute__ ((visibility ("default"))) void sdb_close(Sdb *s) {
 if (s) {
  if (s->fd != -1) {
   if (s->db.fd != -1 && s->db.fd == s->fd) {

    s->db.fd = -1;
   }
   close (s->fd);
   s->fd = -1;
  }
  if (s->dir) {
   free (s->dir);
   s->dir = 
# 462 "project/radare2/shlr/sdb/src/sdb.c" 3 4
           ((void *)0)
# 462 "project/radare2/shlr/sdb/src/sdb.c"
               ;
  }
  s->gp = 
# 464 "project/radare2/shlr/sdb/src/sdb.c" 3 4
         ((void *)0)
# 464 "project/radare2/shlr/sdb/src/sdb.c"
             ;
 }
}

__attribute__ ((visibility ("default"))) void sdb_reset(Sdb* s) {
 if (!s) {
  return;
 }


 sdb_close (s);

 sdb_ht_free (s->ht);
 s->ht = sdb_ht_new ();
}

static char lastChar(const char *str) {
 int len = strlen (str);
 return str[(len > 0)? len - 1: 0];
}

static 
# 485 "project/radare2/shlr/sdb/src/sdb.c" 3 4
      _Bool 
# 485 "project/radare2/shlr/sdb/src/sdb.c"
           match(const char *str, const char *expr) {
 
# 486 "project/radare2/shlr/sdb/src/sdb.c" 3 4
_Bool 
# 486 "project/radare2/shlr/sdb/src/sdb.c"
     startsWith = *expr == '^';
 
# 487 "project/radare2/shlr/sdb/src/sdb.c" 3 4
_Bool 
# 487 "project/radare2/shlr/sdb/src/sdb.c"
     endsWith = lastChar (expr) == '$';
 if (startsWith && endsWith) {
  return strlen (str) == strlen (expr) - 2 &&
   !strncmp (str, expr + 1, strlen (expr) - 2);
 }
 if (startsWith) {
  return !strncmp (str, expr + 1, strlen (expr) - 1);
 }
 if (endsWith) {
  int alen = strlen (str);
  int blen = strlen (expr) - 1;
  if (alen <= blen) {
   return 
# 499 "project/radare2/shlr/sdb/src/sdb.c" 3 4
         0
# 499 "project/radare2/shlr/sdb/src/sdb.c"
              ;
  }
  const char *a = str + strlen (str) - blen;
  return (!strncmp (a, expr, blen));
 }
 return strstr (str, expr);
}

__attribute__ ((visibility ("default"))) 
# 507 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       _Bool 
# 507 "project/radare2/shlr/sdb/src/sdb.c"
            sdbkv_match(SdbKv *kv, const char *expr) {



 const char *eq = strchr (expr, '=');
 if (eq) {
  char *e = strdup (expr);
  char *ep = e + (eq - expr);
  *ep++ = 0;
  
# 516 "project/radare2/shlr/sdb/src/sdb.c" 3 4
 _Bool 
# 516 "project/radare2/shlr/sdb/src/sdb.c"
      res = !*e || match (sdbkv_key (kv), e);
  
# 517 "project/radare2/shlr/sdb/src/sdb.c" 3 4
 _Bool 
# 517 "project/radare2/shlr/sdb/src/sdb.c"
      res2 = !*ep || match (sdbkv_value (kv), ep);
  free (e);
  return res && res2;
 }
 return match (sdbkv_key (kv), expr);
}

__attribute__ ((visibility ("default"))) SdbKv* sdbkv_new(const char *k, const char *v) {
 return sdbkv_new2 (k, strlen (k), v, strlen (v));
}

__attribute__ ((visibility ("default"))) SdbKv* sdbkv_new2(const char *k, int kl, const char *v, int vl) {
 SdbKv *kv;
 if (v) {
  if (vl >= 0xffffff) {
   return 
# 532 "project/radare2/shlr/sdb/src/sdb.c" 3 4
         ((void *)0)
# 532 "project/radare2/shlr/sdb/src/sdb.c"
             ;
  }
 } else {
  vl = 0;
 }
 if (kl >= 0xff) {
  return 
# 538 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        ((void *)0)
# 538 "project/radare2/shlr/sdb/src/sdb.c"
            ;
 }
 kv = (SdbKv*)calloc(1, sizeof(SdbKv));
 kv->base.key_len = kl;
 kv->base.key = malloc (kv->base.key_len + 1);
 if (!kv->base.key) {
  free (kv);
  return 
# 545 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        ((void *)0)
# 545 "project/radare2/shlr/sdb/src/sdb.c"
            ;
 }
 
# 547 "project/radare2/shlr/sdb/src/sdb.c" 3 4
__builtin___memcpy_chk (
# 547 "project/radare2/shlr/sdb/src/sdb.c"
kv->base.key
# 547 "project/radare2/shlr/sdb/src/sdb.c" 3 4
, 
# 547 "project/radare2/shlr/sdb/src/sdb.c"
k, kv->base.key_len + 1
# 547 "project/radare2/shlr/sdb/src/sdb.c" 3 4
, __builtin_object_size (
# 547 "project/radare2/shlr/sdb/src/sdb.c"
kv->base.key
# 547 "project/radare2/shlr/sdb/src/sdb.c" 3 4
, 0))
# 547 "project/radare2/shlr/sdb/src/sdb.c"
                                              ;
 kv->base.value_len = vl;
 if (vl) {
  kv->base.value = malloc (vl + 1);
  if (!kv->base.value) {
   free (kv->base.key);
   free (kv);
   return 
# 554 "project/radare2/shlr/sdb/src/sdb.c" 3 4
         ((void *)0)
# 554 "project/radare2/shlr/sdb/src/sdb.c"
             ;
  }
  
# 556 "project/radare2/shlr/sdb/src/sdb.c" 3 4
 __builtin___memcpy_chk (
# 556 "project/radare2/shlr/sdb/src/sdb.c"
 kv->base.value
# 556 "project/radare2/shlr/sdb/src/sdb.c" 3 4
 , 
# 556 "project/radare2/shlr/sdb/src/sdb.c"
 v, vl + 1
# 556 "project/radare2/shlr/sdb/src/sdb.c" 3 4
 , __builtin_object_size (
# 556 "project/radare2/shlr/sdb/src/sdb.c"
 kv->base.value
# 556 "project/radare2/shlr/sdb/src/sdb.c" 3 4
 , 0))
# 556 "project/radare2/shlr/sdb/src/sdb.c"
                                   ;
 } else {
  kv->base.value = 
# 558 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                  ((void *)0)
# 558 "project/radare2/shlr/sdb/src/sdb.c"
                      ;
  kv->base.value_len = 0;
 }
 kv->cas = nextcas ();
 kv->expire = 0LL;
 return kv;
}

__attribute__ ((visibility ("default"))) void sdbkv_free(SdbKv *kv) {
 if (kv) {
  free (sdbkv_key (kv));
  free (sdbkv_value (kv));
  { free (kv); kv = 
# 570 "project/radare2/shlr/sdb/src/sdb.c" 3 4
 ((void *)0)
# 570 "project/radare2/shlr/sdb/src/sdb.c"
 ; };
 }
}

static unsigned int sdb_set_internal(Sdb* s, const char *key, char *val, 
# 574 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                                                                _Bool 
# 574 "project/radare2/shlr/sdb/src/sdb.c"
                                                                     owned, unsigned int cas) {
 unsigned int vlen, klen;
 SdbKv *kv;
 
# 577 "project/radare2/shlr/sdb/src/sdb.c" 3 4
_Bool 
# 577 "project/radare2/shlr/sdb/src/sdb.c"
     found;
 if (!s || !key) {
  return 0;
 }
 if (!val) {
  if (owned) {
   val = strdup ("");
  } else {
   val = "";
  }
 }

 klen = strlen (key);
 vlen = strlen (val);
 if (klen >= 0xff || vlen >= 0xffffff) {
  if (owned) {
   free (val);
  }
  return 0;
 }
 if (s->journal != -1) {
  sdb_journal_log (s, key, val);
 }
 cdb_findstart (&s->db);
 kv = sdb_ht_find_kvp (s->ht, key, &found);
 if (found && sdbkv_value (kv)) {
  if (cdb_findnext (&s->db, sdb_hash (key), key, klen)) {
   if (cas && kv->cas != cas) {
    if (owned) {
     free (val);
    }
    return 0;
   }
   if (vlen == sdbkv_value_len (kv) && !strcmp (sdbkv_value (kv), val)) {
    sdb_hook_call (s, key, val);
    return kv->cas;
   }
   kv->cas = cas = nextcas ();
   if (owned) {
    kv->base.value_len = vlen;
    free (kv->base.value);
    kv->base.value = val;
   } else {
    if ((unsigned int)vlen > kv->base.value_len) {
     free (kv->base.value);
     kv->base.value = malloc (vlen + 1);
    }
    
# 624 "project/radare2/shlr/sdb/src/sdb.c" 3 4
   __builtin___memcpy_chk (
# 624 "project/radare2/shlr/sdb/src/sdb.c"
   kv->base.value
# 624 "project/radare2/shlr/sdb/src/sdb.c" 3 4
   , 
# 624 "project/radare2/shlr/sdb/src/sdb.c"
   val, vlen + 1
# 624 "project/radare2/shlr/sdb/src/sdb.c" 3 4
   , __builtin_object_size (
# 624 "project/radare2/shlr/sdb/src/sdb.c"
   kv->base.value
# 624 "project/radare2/shlr/sdb/src/sdb.c" 3 4
   , 0))
# 624 "project/radare2/shlr/sdb/src/sdb.c"
                                         ;
    kv->base.value_len = vlen;
   }
  } else {
   sdb_ht_delete (s->ht, key);
  }
  sdb_hook_call (s, key, val);
  return cas;
 }


 if (owned) {
  kv = sdbkv_new2 (key, klen, 
# 636 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                             ((void *)0)
# 636 "project/radare2/shlr/sdb/src/sdb.c"
                                 , 0);
  if (kv) {
   kv->base.value = val;
   kv->base.value_len = vlen;
  }
 } else {
  kv = sdbkv_new2 (key, klen, val, vlen);
 }
 if (kv) {
  unsigned int cas = kv->cas = nextcas ();
  sdb_ht_insert_kvp (s->ht, kv, 
# 646 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                               1 
# 646 "project/radare2/shlr/sdb/src/sdb.c"
                                              );
  free (kv);
  sdb_hook_call (s, key, val);
  return cas;
 }

 return 0;
}

__attribute__ ((visibility ("default"))) int sdb_set_owned(Sdb* s, const char *key, char *val, unsigned int cas) {
 return sdb_set_internal (s, key, val, 
# 656 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                                      1
# 656 "project/radare2/shlr/sdb/src/sdb.c"
                                          , cas);
}

__attribute__ ((visibility ("default"))) int sdb_set(Sdb* s, const char *key, const char *val, unsigned int cas) {
 return sdb_set_internal (s, key, (char *)val, 
# 660 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                                              0
# 660 "project/radare2/shlr/sdb/src/sdb.c"
                                                   , cas);
}

static 
# 663 "project/radare2/shlr/sdb/src/sdb.c" 3 4
      _Bool 
# 663 "project/radare2/shlr/sdb/src/sdb.c"
           sdb_foreach_list_cb(void *user, const char *k, const char *v) {
 SdbList *list = (SdbList *)user;
 SdbKv *kv = (SdbKv*)calloc(1, sizeof(SdbKv));

 kv->base.key = strdup (k);
 kv->base.value = strdup (v);
 ls_append (list, kv);
 return 1;
}

static int __cmp_asc(const void *a, const void *b) {
 const SdbKv *ka = a, *kb = b;
 return strcmp (sdbkv_key (ka), sdbkv_key (kb));
}

__attribute__ ((visibility ("default"))) SdbList *sdb_foreach_list(Sdb* s, 
# 678 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                                         _Bool 
# 678 "project/radare2/shlr/sdb/src/sdb.c"
                                              sorted) {
 SdbList *list = ls_newf ((SdbListFree)sdbkv_free);
 sdb_foreach (s, sdb_foreach_list_cb, list);
 if (sorted) {
  ls_sort (list, __cmp_asc);
 }
 return list;
}

struct foreach_list_filter_t {
 SdbForeachCallback filter;
 SdbList *list;
};

static 
# 692 "project/radare2/shlr/sdb/src/sdb.c" 3 4
      _Bool 
# 692 "project/radare2/shlr/sdb/src/sdb.c"
           sdb_foreach_list_filter_cb(void *user, const char *k, const char *v) {
 struct foreach_list_filter_t *u = (struct foreach_list_filter_t *)user;
 SdbList *list = u->list;
 SdbKv *kv = 
# 695 "project/radare2/shlr/sdb/src/sdb.c" 3 4
            ((void *)0)
# 695 "project/radare2/shlr/sdb/src/sdb.c"
                ;

 if (!u->filter || u->filter (
# 697 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                             ((void *)0)
# 697 "project/radare2/shlr/sdb/src/sdb.c"
                                 , k, v)) {
  kv = (SdbKv*)calloc(1, sizeof(SdbKv));
  if (!kv) {
   goto err;
  }
  kv->base.key = strdup (k);
  kv->base.value = strdup (v);
  if (!kv->base.key || !kv->base.value) {
   goto err;
  }
  ls_append (list, kv);
 }
 return 
# 709 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       1
# 709 "project/radare2/shlr/sdb/src/sdb.c"
           ;
 err:
 sdbkv_free (kv);
 return 
# 712 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       0
# 712 "project/radare2/shlr/sdb/src/sdb.c"
            ;
}

__attribute__ ((visibility ("default"))) SdbList *sdb_foreach_list_filter(Sdb* s, SdbForeachCallback filter, 
# 715 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                                                                           _Bool 
# 715 "project/radare2/shlr/sdb/src/sdb.c"
                                                                                sorted) {
 struct foreach_list_filter_t u;
 SdbList *list = ls_newf ((SdbListFree)sdbkv_free);

 if (!list) {
  return 
# 720 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        ((void *)0)
# 720 "project/radare2/shlr/sdb/src/sdb.c"
            ;
 }
 u.filter = filter;
 u.list = list;
 sdb_foreach (s, sdb_foreach_list_filter_cb, &u);
 if (sorted) {
  ls_sort (list, __cmp_asc);
 }
 return list;
}

typedef struct {
 const char *expr;
 SdbList *list;
 
# 734 "project/radare2/shlr/sdb/src/sdb.c" 3 4
_Bool 
# 734 "project/radare2/shlr/sdb/src/sdb.c"
     single;
} _match_sdb_user;

static 
# 737 "project/radare2/shlr/sdb/src/sdb.c" 3 4
      _Bool 
# 737 "project/radare2/shlr/sdb/src/sdb.c"
           sdb_foreach_match_cb(void *user, const char *k, const char *v) {
 _match_sdb_user *o = (_match_sdb_user*)user;
 SdbKv tkv = { .base.key = (char*)k, .base.value = (char*)v };
 if (sdbkv_match (&tkv, o->expr)) {
  SdbKv *kv = (SdbKv*)calloc(1, sizeof(SdbKv));
  kv->base.key = strdup (k);
  kv->base.value = strdup (v);
  ls_append (o->list, kv);
  if (o->single) {
   return 
# 746 "project/radare2/shlr/sdb/src/sdb.c" 3 4
         0
# 746 "project/radare2/shlr/sdb/src/sdb.c"
              ;
  }
 }
 return 
# 749 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       1
# 749 "project/radare2/shlr/sdb/src/sdb.c"
           ;
}

__attribute__ ((visibility ("default"))) SdbList *sdb_foreach_match(Sdb* s, const char *expr, 
# 752 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                                                            _Bool 
# 752 "project/radare2/shlr/sdb/src/sdb.c"
                                                                 single) {
 SdbList *list = ls_newf ((SdbListFree)sdbkv_free);
 _match_sdb_user o = { expr, list, single };
 sdb_foreach (s, sdb_foreach_match_cb, &o);
 return list;
}

static int getbytes(Sdb *s, char *b, int len) {
 if (!cdb_read (&s->db, b, len, s->pos)) {
  return -1;
 }
 s->pos += len;
 return len;
}

static 
# 767 "project/radare2/shlr/sdb/src/sdb.c" 3 4
      _Bool 
# 767 "project/radare2/shlr/sdb/src/sdb.c"
           sdb_foreach_end(Sdb *s, 
# 767 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                                   _Bool 
# 767 "project/radare2/shlr/sdb/src/sdb.c"
                                        result) {
 s->depth--;
 return result;
}

static 
# 772 "project/radare2/shlr/sdb/src/sdb.c" 3 4
      _Bool 
# 772 "project/radare2/shlr/sdb/src/sdb.c"
           sdb_foreach_cdb(Sdb *s, SdbForeachCallback cb, SdbForeachCallback cb2, void *user) {
 char *v = 
# 773 "project/radare2/shlr/sdb/src/sdb.c" 3 4
          ((void *)0)
# 773 "project/radare2/shlr/sdb/src/sdb.c"
              ;
 char k[0xff] = {0};
 
# 775 "project/radare2/shlr/sdb/src/sdb.c" 3 4
_Bool 
# 775 "project/radare2/shlr/sdb/src/sdb.c"
     found;
 sdb_dump_begin (s);
 while (sdb_dump_dupnext (s, k, &v, 
# 777 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                                   ((void *)0)
# 777 "project/radare2/shlr/sdb/src/sdb.c"
                                       )) {
  SdbKv *kv = sdb_ht_find_kvp (s->ht, k, &found);
  if (found) {
   free (v);
   if (kv && sdbkv_key (kv) && sdbkv_value (kv)) {
    if (!cb (user, sdbkv_key (kv), sdbkv_value (kv))) {
     return 
# 783 "project/radare2/shlr/sdb/src/sdb.c" 3 4
           0
# 783 "project/radare2/shlr/sdb/src/sdb.c"
                ;
    }
    if (cb2 && !cb2 (user, k, sdbkv_value (kv))) {
     return 
# 786 "project/radare2/shlr/sdb/src/sdb.c" 3 4
           0
# 786 "project/radare2/shlr/sdb/src/sdb.c"
                ;
    }
   }
  } else {
   if (!cb (user, k, v)) {
    free (v);
    return 
# 792 "project/radare2/shlr/sdb/src/sdb.c" 3 4
          0
# 792 "project/radare2/shlr/sdb/src/sdb.c"
               ;
   }
   free (v);
  }
 }
 return 
# 797 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       1
# 797 "project/radare2/shlr/sdb/src/sdb.c"
           ;
}

__attribute__ ((visibility ("default"))) 
# 800 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       _Bool 
# 800 "project/radare2/shlr/sdb/src/sdb.c"
            sdb_foreach(Sdb* s, SdbForeachCallback cb, void *user) {
 if (!s) {
  return 
# 802 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        0
# 802 "project/radare2/shlr/sdb/src/sdb.c"
             ;
 }
 if (s->gp) {
  return s->gp->foreach ((GperfForeachCallback)cb, user);
 }
 s->depth++;
 
# 808 "project/radare2/shlr/sdb/src/sdb.c" 3 4
_Bool 
# 808 "project/radare2/shlr/sdb/src/sdb.c"
     result = sdb_foreach_cdb (s, cb, 
# 808 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                                      ((void *)0)
# 808 "project/radare2/shlr/sdb/src/sdb.c"
                                          , user);
 if (!result) {
  return sdb_foreach_end (s, 
# 810 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                            0
# 810 "project/radare2/shlr/sdb/src/sdb.c"
                                 );
 }

 unsigned int i;
 for (i = 0; i < s->ht->size; ++i) {
  HtPPBucket *bt = &s->ht->table[i];
  SdbKv *kv;
  unsigned int j, count;

  if ((bt)->arr) for ((j) = 0, (kv) = (SdbKv *)(bt)->arr, (count) = (s->ht)->count; (j) < (bt)->count; (j) = (count) == (s->ht)->count? j + 1: j, (kv) = (count) == (s->ht)->count? next_kv (s->ht, kv): kv, (count) = (s->ht)->count) {
   if (kv && sdbkv_value (kv) && *sdbkv_value (kv)) {
    if (!cb (user, sdbkv_key (kv), sdbkv_value (kv))) {
     return sdb_foreach_end (s, 
# 822 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                               0
# 822 "project/radare2/shlr/sdb/src/sdb.c"
                                    );
    }
   }
  }
 }
 return sdb_foreach_end (s, 
# 827 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                           1
# 827 "project/radare2/shlr/sdb/src/sdb.c"
                               );
}

static 
# 830 "project/radare2/shlr/sdb/src/sdb.c" 3 4
      _Bool 
# 830 "project/radare2/shlr/sdb/src/sdb.c"
           _insert_into_disk(void *user, const char *key, const char *value) {
 Sdb *s = (Sdb *)user;
 if (s) {
  sdb_disk_insert (s, key, value);
  return 
# 834 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        1
# 834 "project/radare2/shlr/sdb/src/sdb.c"
            ;
 }
 return 
# 836 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       0
# 836 "project/radare2/shlr/sdb/src/sdb.c"
            ;
}

static 
# 839 "project/radare2/shlr/sdb/src/sdb.c" 3 4
      _Bool 
# 839 "project/radare2/shlr/sdb/src/sdb.c"
           _remove_afer_insert(void *user, const char *k, const char *v) {
 Sdb *s = (Sdb *)user;
 if (s) {
  sdb_ht_delete (s->ht, k);
  return 
# 843 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        1
# 843 "project/radare2/shlr/sdb/src/sdb.c"
            ;
 }
 return 
# 845 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       0
# 845 "project/radare2/shlr/sdb/src/sdb.c"
            ;
}

__attribute__ ((visibility ("default"))) 
# 848 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       _Bool 
# 848 "project/radare2/shlr/sdb/src/sdb.c"
            sdb_sync(Sdb* s) {
 
# 849 "project/radare2/shlr/sdb/src/sdb.c" 3 4
_Bool 
# 849 "project/radare2/shlr/sdb/src/sdb.c"
     result;
 unsigned int i;

 if (!s || !sdb_disk_create (s)) {
  return 
# 853 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        0
# 853 "project/radare2/shlr/sdb/src/sdb.c"
             ;
 }
 result = sdb_foreach_cdb (s, _insert_into_disk, _remove_afer_insert, s);
 if (!result) {
  return 
# 857 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        0
# 857 "project/radare2/shlr/sdb/src/sdb.c"
             ;
 }


 for (i = 0; i < s->ht->size; ++i) {
  HtPPBucket *bt = &s->ht->table[i];
  SdbKv *kv;
  unsigned int j, count;

  if ((bt)->arr) for ((j) = 0, (kv) = (SdbKv *)(bt)->arr, (count) = (s->ht)->count; (j) < (bt)->count; (j) = (count) == (s->ht)->count? j + 1: j, (kv) = (count) == (s->ht)->count? next_kv (s->ht, kv): kv, (count) = (s->ht)->count) {
   if (sdbkv_key (kv) && sdbkv_value (kv) && *sdbkv_value (kv) && !kv->expire) {
    if (sdb_disk_insert (s, sdbkv_key (kv), sdbkv_value (kv))) {
     sdb_remove (s, sdbkv_key (kv), 0);
    }
   }
  }
 }
 sdb_disk_finish (s);
 sdb_journal_clear (s);

 return 
# 877 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       1
# 877 "project/radare2/shlr/sdb/src/sdb.c"
           ;
}

__attribute__ ((visibility ("default"))) void sdb_dump_begin(Sdb* s) {
 if (s->fd != -1) {
  s->pos = sizeof (((struct cdb_make *)0)->final);
  seek_set (s->fd, s->pos);
 } else {
  s->pos = 0;
 }
}

__attribute__ ((visibility ("default"))) SdbKv *sdb_dump_next(Sdb* s) {
 char *v = 
# 890 "project/radare2/shlr/sdb/src/sdb.c" 3 4
          ((void *)0)
# 890 "project/radare2/shlr/sdb/src/sdb.c"
              ;
 char k[0xff] = {0};
 int vl = 0;

 if (!sdb_dump_dupnext (s, k, &v, &vl)) {
  return 
# 895 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        ((void *)0)
# 895 "project/radare2/shlr/sdb/src/sdb.c"
            ;
 }
 vl--;
 
# 898 "project/radare2/shlr/sdb/src/sdb.c" 3 4
__builtin___snprintf_chk (
# 898 "project/radare2/shlr/sdb/src/sdb.c"
sdbkv_key (&s->tmpkv)
# 898 "project/radare2/shlr/sdb/src/sdb.c" 3 4
, 
# 898 "project/radare2/shlr/sdb/src/sdb.c"
0xff
# 898 "project/radare2/shlr/sdb/src/sdb.c" 3 4
, 0, __builtin_object_size (
# 898 "project/radare2/shlr/sdb/src/sdb.c"
sdbkv_key (&s->tmpkv)
# 898 "project/radare2/shlr/sdb/src/sdb.c" 3 4
, 2 > 1 ? 1 : 0), 
# 898 "project/radare2/shlr/sdb/src/sdb.c"
"%s", k
# 898 "project/radare2/shlr/sdb/src/sdb.c" 3 4
)
# 898 "project/radare2/shlr/sdb/src/sdb.c"
                                                  ;
 free (sdbkv_value (&s->tmpkv));
 s->tmpkv.base.value = v;
 s->tmpkv.base.value_len = vl;
 return &s->tmpkv;
}

__attribute__ ((visibility ("default"))) 
# 905 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       _Bool 
# 905 "project/radare2/shlr/sdb/src/sdb.c"
            sdb_dump_hasnext(Sdb* s) {
 unsigned int k, v;
 if (!cdb_getkvlen (&s->db, &k, &v, s->pos)) {
  return 
# 908 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        0
# 908 "project/radare2/shlr/sdb/src/sdb.c"
             ;
 }
 if (k < 1 || v < 1) {
  return 
# 911 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        0
# 911 "project/radare2/shlr/sdb/src/sdb.c"
             ;
 }
 s->pos += k + v + 4;
 return 
# 914 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       1
# 914 "project/radare2/shlr/sdb/src/sdb.c"
           ;
}

__attribute__ ((visibility ("default"))) 
# 917 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       _Bool 
# 917 "project/radare2/shlr/sdb/src/sdb.c"
            sdb_stats(Sdb *s, unsigned int *disk, unsigned int *mem) {
 if (!s) {
  return 
# 919 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        0
# 919 "project/radare2/shlr/sdb/src/sdb.c"
             ;
 }
 if (disk) {
  unsigned int count = 0;
  if (s->fd != -1) {
   sdb_dump_begin (s);
   while (sdb_dump_hasnext (s)) {
    count ++;
   }
  }
  *disk = count;
 }
 if (mem) {
  *mem = s->ht->count;
 }
 return disk || mem;
}


__attribute__ ((visibility ("default"))) 
# 938 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       _Bool 
# 938 "project/radare2/shlr/sdb/src/sdb.c"
            sdb_dump_dupnext(Sdb* s, char *key, char **value, int *_vlen) {
 unsigned int vlen = 0, klen = 0;
 if (value) {
  *value = 
# 941 "project/radare2/shlr/sdb/src/sdb.c" 3 4
          ((void *)0)
# 941 "project/radare2/shlr/sdb/src/sdb.c"
              ;
 }
 if (_vlen) {
  *_vlen = 0;
 }
 if (!cdb_getkvlen (&s->db, &klen, &vlen, s->pos)) {
  return 
# 947 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        0
# 947 "project/radare2/shlr/sdb/src/sdb.c"
             ;
 }
 s->pos += 4;
 if (klen < 1 || vlen < 1) {
  return 
# 951 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        0
# 951 "project/radare2/shlr/sdb/src/sdb.c"
             ;
 }
 if (_vlen) {
  *_vlen = vlen;
 }
 if (key) {
  key[0] = 0;
  if (klen > 1 && klen < 0xff) {
   if (getbytes (s, key, klen) == -1) {
    return 0;
   }
   key[klen] = 0;
  }
 }
 if (value) {
  *value = 0;
  if (vlen < 0xffffff) {
   *value = malloc (vlen + 10);
   if (!*value) {
    return 
# 970 "project/radare2/shlr/sdb/src/sdb.c" 3 4
          0
# 970 "project/radare2/shlr/sdb/src/sdb.c"
               ;
   }
   if (getbytes (s, *value, vlen) == -1) {
    free (*value);
    *value = 
# 974 "project/radare2/shlr/sdb/src/sdb.c" 3 4
            ((void *)0)
# 974 "project/radare2/shlr/sdb/src/sdb.c"
                ;
    return 
# 975 "project/radare2/shlr/sdb/src/sdb.c" 3 4
          0
# 975 "project/radare2/shlr/sdb/src/sdb.c"
               ;
   }
   (*value)[vlen] = 0;
  }
 }
 return 
# 980 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       1
# 980 "project/radare2/shlr/sdb/src/sdb.c"
           ;
}

static inline unsigned long long parse_expire(unsigned long long e) {
 const unsigned long long month = 30 * 24 * 60 * 60;
 if (e > 0 && e < month) {
  e += sdb_now ();
 }
 return e;
}

__attribute__ ((visibility ("default"))) 
# 991 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       _Bool 
# 991 "project/radare2/shlr/sdb/src/sdb.c"
            sdb_expire_set(Sdb* s, const char *key, unsigned long long expire, unsigned int cas) {
 char *buf;
 unsigned int pos, len;
 SdbKv *kv;
 
# 995 "project/radare2/shlr/sdb/src/sdb.c" 3 4
_Bool 
# 995 "project/radare2/shlr/sdb/src/sdb.c"
     found;
 s->timestamped = 
# 996 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                 1
# 996 "project/radare2/shlr/sdb/src/sdb.c"
                     ;
 if (!key) {
  s->expire = parse_expire (expire);
  return 
# 999 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        1
# 999 "project/radare2/shlr/sdb/src/sdb.c"
            ;
 }
 kv = (SdbKv*)sdb_ht_find_kvp (s->ht, key, &found);
 if (found && kv) {
  if (*sdbkv_value (kv)) {
   if (!cas || cas == kv->cas) {
    kv->expire = parse_expire (expire);
    return 
# 1006 "project/radare2/shlr/sdb/src/sdb.c" 3 4
          1
# 1006 "project/radare2/shlr/sdb/src/sdb.c"
              ;
   }
  }
  return 
# 1009 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        0
# 1009 "project/radare2/shlr/sdb/src/sdb.c"
             ;
 }
 if (s->fd == -1) {
  return 
# 1012 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        0
# 1012 "project/radare2/shlr/sdb/src/sdb.c"
             ;
 }
 (void) cdb_findstart (&s->db);
 if (!cdb_findnext (&s->db, sdb_hash (key), key, strlen (key) + 1)) {
  return 
# 1016 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        0
# 1016 "project/radare2/shlr/sdb/src/sdb.c"
             ;
 }
 pos = ((&s->db)->dpos);
 len = ((&s->db)->dlen);
 if (len < 1 || len >= 
# 1020 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                      2147483647
# 1020 "project/radare2/shlr/sdb/src/sdb.c"
                               ) {
  return 
# 1021 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        0
# 1021 "project/radare2/shlr/sdb/src/sdb.c"
             ;
 }
 if (!(buf = calloc (1, len + 1))) {
  return 
# 1024 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        0
# 1024 "project/radare2/shlr/sdb/src/sdb.c"
             ;
 }
 cdb_read (&s->db, buf, len, pos);
 buf[len] = 0;
 sdb_set_owned (s, key, buf, cas);
 return sdb_expire_set (s, key, expire, cas);
}

__attribute__ ((visibility ("default"))) unsigned long long sdb_expire_get(Sdb* s, const char *key, unsigned int *cas) {
 
# 1033 "project/radare2/shlr/sdb/src/sdb.c" 3 4
_Bool 
# 1033 "project/radare2/shlr/sdb/src/sdb.c"
     found = 
# 1033 "project/radare2/shlr/sdb/src/sdb.c" 3 4
             0
# 1033 "project/radare2/shlr/sdb/src/sdb.c"
                  ;
 SdbKv *kv = (SdbKv*)sdb_ht_find_kvp (s->ht, key, &found);
 if (found && kv && *sdbkv_value (kv)) {
  if (cas) {
   *cas = kv->cas;
  }
  return kv->expire;
 }
 return 0LL;
}

__attribute__ ((visibility ("default"))) 
# 1044 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       _Bool 
# 1044 "project/radare2/shlr/sdb/src/sdb.c"
            sdb_hook(Sdb* s, SdbHook cb, void* user) {
 int i = 0;
 SdbHook hook;
 SdbListIter *iter;
 if (s->hooks) {
  if ((s->hooks)) for (iter = (s->hooks)->head; iter && (hook = iter->data); iter = iter->n) {
   if (!(i % 2) && (hook == cb)) {
    return 
# 1051 "project/radare2/shlr/sdb/src/sdb.c" 3 4
          0
# 1051 "project/radare2/shlr/sdb/src/sdb.c"
               ;
   }
   i++;
  }
 } else {
  s->hooks = ls_new ();
  s->hooks->free = 
# 1057 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                  ((void *)0)
# 1057 "project/radare2/shlr/sdb/src/sdb.c"
                      ;
 }
 ls_append (s->hooks, (void*)cb);
 ls_append (s->hooks, user);
 return 
# 1061 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       1
# 1061 "project/radare2/shlr/sdb/src/sdb.c"
           ;
}

__attribute__ ((visibility ("default"))) 
# 1064 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       _Bool 
# 1064 "project/radare2/shlr/sdb/src/sdb.c"
            sdb_unhook(Sdb* s, SdbHook h) {
 int i = 0;
 SdbHook hook;
 SdbListIter *iter, *iter2;
 if ((s->hooks)) for (iter = (s->hooks)->head; iter && (hook = iter->data); iter = iter->n) {
  if (!(i % 2) && (hook == h)) {
   iter2 = iter->n;
   ls_delete (s->hooks, iter);
   ls_delete (s->hooks, iter2);
   return 
# 1073 "project/radare2/shlr/sdb/src/sdb.c" 3 4
         1
# 1073 "project/radare2/shlr/sdb/src/sdb.c"
             ;
  }
  i++;
 }
 return 
# 1077 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       0
# 1077 "project/radare2/shlr/sdb/src/sdb.c"
            ;
}

__attribute__ ((visibility ("default"))) int sdb_hook_call(Sdb *s, const char *k, const char *v) {
 SdbListIter *iter;
 SdbHook hook;
 int i = 0;
 if (s->timestamped && s->last) {
  s->last = sdb_now ();
 }
 if ((s->hooks)) for (iter = (s->hooks)->head; iter && (hook = iter->data); iter = iter->n) {
  if (!(i % 2) && k && iter->n) {
   void *u = iter->n->data;
   hook (s, u, k, v);
  }
  i++;
 }
 return i >> 1;
}

__attribute__ ((visibility ("default"))) void sdb_hook_free(Sdb *s) {
 ls_free (s->hooks);
 s->hooks = 
# 1099 "project/radare2/shlr/sdb/src/sdb.c" 3 4
           ((void *)0)
# 1099 "project/radare2/shlr/sdb/src/sdb.c"
               ;
}

__attribute__ ((visibility ("default"))) void sdb_config(Sdb *s, int options) {
 s->options = options;
 if (options & (1 << 0)) {

 }
 if (options & (1 << 3)) {

  sdb_journal_open (s);

  sdb_journal_load (s);
  sdb_journal_clear (s);
 } else {
  sdb_journal_close (s);
 }
 if (options & (1 << 1)) {

  s->last = 0LL;
 }
 if (options & (1 << 2)) {

 }
}

__attribute__ ((visibility ("default"))) 
# 1125 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       _Bool 
# 1125 "project/radare2/shlr/sdb/src/sdb.c"
            sdb_unlink(Sdb* s) {
 sdb_fini (s, 
# 1126 "project/radare2/shlr/sdb/src/sdb.c" 3 4
             1
# 1126 "project/radare2/shlr/sdb/src/sdb.c"
                 );
 return sdb_disk_unlink (s);
}

__attribute__ ((visibility ("default"))) void sdb_drain(Sdb *s, Sdb *f) {
 if (s && f) {
  f->refs = s->refs;
  sdb_fini (s, 
# 1133 "project/radare2/shlr/sdb/src/sdb.c" 3 4
              1
# 1133 "project/radare2/shlr/sdb/src/sdb.c"
                  );
  *s = *f;
  free (f);
 }
}

static 
# 1139 "project/radare2/shlr/sdb/src/sdb.c" 3 4
      _Bool 
# 1139 "project/radare2/shlr/sdb/src/sdb.c"
           copy_foreach_cb(void *user, const char *k, const char *v) {
 Sdb *dst = user;
 sdb_set (dst, k, v, 0);
 return 
# 1142 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       1
# 1142 "project/radare2/shlr/sdb/src/sdb.c"
           ;
}

__attribute__ ((visibility ("default"))) void sdb_copy(Sdb *src, Sdb *dst) {
 sdb_foreach (src, copy_foreach_cb, dst);
 SdbListIter *it;
 SdbNs *ns;
 if ((src->ns)) for (it = (src->ns)->head; it && (ns = it->data); it = it->n) {
  sdb_copy (ns->sdb, sdb_ns (dst, ns->name, 
# 1150 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                                           1
# 1150 "project/radare2/shlr/sdb/src/sdb.c"
                                               ));
 }
}

typedef struct {
 Sdb *sdb;
 const char *key;
} UnsetCallbackData;

static 
# 1159 "project/radare2/shlr/sdb/src/sdb.c" 3 4
      _Bool 
# 1159 "project/radare2/shlr/sdb/src/sdb.c"
           unset_cb(void *user, const char *k, const char *v) {
 UnsetCallbackData *ucd = user;
 if (sdb_match (k, ucd->key)) {
  sdb_unset (ucd->sdb, k, 0);
 }
 return 
# 1164 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       1
# 1164 "project/radare2/shlr/sdb/src/sdb.c"
           ;
}

__attribute__ ((visibility ("default"))) int sdb_unset_like(Sdb *s, const char *k) {
 UnsetCallbackData ucd = { s, k };
 return sdb_foreach (s, unset_cb, &ucd);
}

typedef struct {
 Sdb *sdb;
 const char *key;
 const char *val;
 SdbForeachCallback cb;
 const char **array;
 int array_index;
 int array_size;
} LikeCallbackData;

static 
# 1182 "project/radare2/shlr/sdb/src/sdb.c" 3 4
      _Bool 
# 1182 "project/radare2/shlr/sdb/src/sdb.c"
           like_cb(void *user, const char *k, const char *v) {
 LikeCallbackData *lcd = user;
 if (!user) {
  return 
# 1185 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        0
# 1185 "project/radare2/shlr/sdb/src/sdb.c"
             ;
 }
 if (k && lcd->key && !sdb_match (k, lcd->key)) {
  return 
# 1188 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        1
# 1188 "project/radare2/shlr/sdb/src/sdb.c"
            ;
 }
 if (v && lcd->val && !sdb_match (v, lcd->val)) {
  return 
# 1191 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        1
# 1191 "project/radare2/shlr/sdb/src/sdb.c"
            ;
 }
 if (lcd->array) {
  int idx = lcd->array_index;
  int newsize = lcd->array_size + sizeof (char*) * 2;
  const char **newarray = (const char **)realloc ((void*)lcd->array, newsize);
  if (!newarray) {
   return 
# 1198 "project/radare2/shlr/sdb/src/sdb.c" 3 4
         0
# 1198 "project/radare2/shlr/sdb/src/sdb.c"
              ;
  }
  lcd->array = newarray;
  lcd->array_size = newsize;

  lcd->array[idx] = k;
  lcd->array[idx + 1] = v;
  lcd->array[idx + 2] = 
# 1205 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                       ((void *)0)
# 1205 "project/radare2/shlr/sdb/src/sdb.c"
                           ;
  lcd->array[idx + 3] = 
# 1206 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                       ((void *)0)
# 1206 "project/radare2/shlr/sdb/src/sdb.c"
                           ;
  lcd->array_index = idx+2;
 } else {
  if (lcd->cb) {
   lcd->cb (lcd->sdb, k, v);
  }
 }
 return 
# 1213 "project/radare2/shlr/sdb/src/sdb.c" 3 4
       1
# 1213 "project/radare2/shlr/sdb/src/sdb.c"
           ;
}

__attribute__ ((visibility ("default"))) char** sdb_like(Sdb *s, const char *k, const char *v, SdbForeachCallback cb) {
 LikeCallbackData lcd = { s, k, v, cb, 
# 1217 "project/radare2/shlr/sdb/src/sdb.c" 3 4
                                      ((void *)0)
# 1217 "project/radare2/shlr/sdb/src/sdb.c"
                                          , 0, 0 };
 if (cb) {
  sdb_foreach (s, like_cb, &lcd);
  return 
# 1220 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        ((void *)0)
# 1220 "project/radare2/shlr/sdb/src/sdb.c"
            ;
 }
 if (k && !*k) {
  lcd.key = 
# 1223 "project/radare2/shlr/sdb/src/sdb.c" 3 4
           ((void *)0)
# 1223 "project/radare2/shlr/sdb/src/sdb.c"
               ;
 }
 if (v && !*v) {
  lcd.val = 
# 1226 "project/radare2/shlr/sdb/src/sdb.c" 3 4
           ((void *)0)
# 1226 "project/radare2/shlr/sdb/src/sdb.c"
               ;
 }
 lcd.array_size = sizeof (char*) * 2;
 lcd.array = calloc (lcd.array_size, 1);
 if (!lcd.array) {
  return 
# 1231 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        ((void *)0)
# 1231 "project/radare2/shlr/sdb/src/sdb.c"
            ;
 }
 lcd.array_index = 0;
 sdb_foreach (s, like_cb, &lcd);
 if (lcd.array_index == 0) {
  free ((void*)lcd.array);
  return 
# 1237 "project/radare2/shlr/sdb/src/sdb.c" 3 4
        ((void *)0)
# 1237 "project/radare2/shlr/sdb/src/sdb.c"
            ;
 }
 return (char**)lcd.array;
}
