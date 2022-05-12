# 0 "project/goaccess/src/websocket.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/goaccess/src/websocket.c"
# 31 "project/goaccess/src/websocket.c"
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
# 32 "project/goaccess/src/websocket.c" 2
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








# 33 "project/goaccess/src/websocket.c" 2
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
# 34 "project/goaccess/src/websocket.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/arpa/inet.h" 1 3 4
# 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/arpa/inet.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 1 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_addr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_addr_t.h" 3 4
typedef __uint32_t in_addr_t;
# 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_port_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_port_t.h" 3 4
typedef __uint16_t in_port_t;
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 2 3 4






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 1 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
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
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_param.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_param.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_param.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_param.h" 2 3 4
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/net/net_kev.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 2 3 4
# 94 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sa_family_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sa_family_t.h" 3 4
typedef __uint8_t sa_family_t;
# 95 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_socklen_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_socklen_t.h" 3 4
typedef __darwin_socklen_t socklen_t;
# 96 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 2 3 4
# 106 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_iovec_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_iovec_t.h" 3 4
struct iovec {
 void * iov_base;
 size_t iov_len;
};
# 107 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 2 3 4
# 289 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
typedef __uint32_t sae_associd_t;



typedef __uint32_t sae_connid_t;
# 303 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
typedef struct sa_endpoints {
 unsigned int sae_srcif;
 const struct sockaddr *sae_srcaddr;
 socklen_t sae_srcaddrlen;
 const struct sockaddr *sae_dstaddr;
 socklen_t sae_dstaddrlen;
} sa_endpoints_t;





struct linger {
 int l_onoff;
 int l_linger;
};
# 333 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
struct so_np_extensions {
 u_int32_t npx_flags;
 u_int32_t npx_mask;
};
# 408 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
struct sockaddr {
 __uint8_t sa_len;
 sa_family_t sa_family;
 char sa_data[14];
};
# 421 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
struct sockproto {
 __uint16_t sp_family;
 __uint16_t sp_protocol;
};
# 441 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
struct sockaddr_storage {
 __uint8_t ss_len;
 sa_family_t ss_family;
 char __ss_pad1[((sizeof(__int64_t)) - sizeof(__uint8_t) - sizeof(sa_family_t))];
 __int64_t __ss_align;
 char __ss_pad2[(128 - sizeof(__uint8_t) - sizeof(sa_family_t) - ((sizeof(__int64_t)) - sizeof(__uint8_t) - sizeof(sa_family_t)) - (sizeof(__int64_t)))];
};
# 548 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
struct msghdr {
 void *msg_name;
 socklen_t msg_namelen;
 struct iovec *msg_iov;
 int msg_iovlen;
 void *msg_control;
 socklen_t msg_controllen;
 int msg_flags;
};
# 596 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
struct cmsghdr {
 socklen_t cmsg_len;
 int cmsg_level;
 int cmsg_type;

};
# 687 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
struct sf_hdtr {
 struct iovec *headers;
 int hdr_cnt;
 struct iovec *trailers;
 int trl_cnt;
};







int accept(int, struct sockaddr * restrict, socklen_t * restrict)
__asm("_" "accept" );
int bind(int, const struct sockaddr *, socklen_t) __asm("_" "bind" );
int connect(int, const struct sockaddr *, socklen_t) __asm("_" "connect" );
int getpeername(int, struct sockaddr * restrict, socklen_t * restrict)
__asm("_" "getpeername" );
int getsockname(int, struct sockaddr * restrict, socklen_t * restrict)
__asm("_" "getsockname" );
int getsockopt(int, int, int, void * restrict, socklen_t * restrict);
int listen(int, int) __asm("_" "listen" );
ssize_t recv(int, void *, size_t, int) __asm("_" "recv" );
ssize_t recvfrom(int, void *, size_t, int, struct sockaddr * restrict,
    socklen_t * restrict) __asm("_" "recvfrom" );
ssize_t recvmsg(int, struct msghdr *, int) __asm("_" "recvmsg" );
ssize_t send(int, const void *, size_t, int) __asm("_" "send" );
ssize_t sendmsg(int, const struct msghdr *, int) __asm("_" "sendmsg" );
ssize_t sendto(int, const void *, size_t,
    int, const struct sockaddr *, socklen_t) __asm("_" "sendto" );
int setsockopt(int, int, int, const void *, socklen_t);
int shutdown(int, int);
int sockatmark(int) ;
int socket(int, int, int);
int socketpair(int, int, int, int *) __asm("_" "socketpair" );


int sendfile(int, int, off_t, off_t *, struct sf_hdtr *, int);



void pfctlinput(int, struct sockaddr *);


int connectx(int, const sa_endpoints_t *, sae_associd_t, unsigned int,
    const struct iovec *, unsigned int, size_t *, sae_connid_t *);


int disconnectx(int, sae_associd_t, sae_connid_t);


# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 2 3 4
# 301 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 3 4
struct in_addr {
 in_addr_t s_addr;
};
# 375 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 3 4
struct sockaddr_in {
 __uint8_t sin_len;
 sa_family_t sin_family;
 in_port_t sin_port;
 struct in_addr sin_addr;
 char sin_zero[8];
};
# 398 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 3 4
struct ip_opts {
 struct in_addr ip_dst;
 char ip_opts[40];
};
# 507 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 3 4
struct ip_mreq {
 struct in_addr imr_multiaddr;
 struct in_addr imr_interface;
};






struct ip_mreqn {
 struct in_addr imr_multiaddr;
 struct in_addr imr_address;
 int imr_ifindex;
};

#pragma pack(4)



struct ip_mreq_source {
 struct in_addr imr_multiaddr;
 struct in_addr imr_sourceaddr;
 struct in_addr imr_interface;
};





struct group_req {
 uint32_t gr_interface;
 struct sockaddr_storage gr_group;
};

struct group_source_req {
 uint32_t gsr_interface;
 struct sockaddr_storage gsr_group;
 struct sockaddr_storage gsr_source;
};
# 555 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 3 4
struct __msfilterreq {
 uint32_t msfr_ifindex;
 uint32_t msfr_fmode;
 uint32_t msfr_nsrcs;
 uint32_t __msfr_align;
 struct sockaddr_storage msfr_group;
 struct sockaddr_storage *msfr_srcs;
};



#pragma pack()
struct sockaddr;






int setipv4sourcefilter(int, struct in_addr, struct in_addr, uint32_t,
    uint32_t, struct in_addr *) ;
int getipv4sourcefilter(int, struct in_addr, struct in_addr, uint32_t *,
    uint32_t *, struct in_addr *) ;
int setsourcefilter(int, uint32_t, struct sockaddr *, socklen_t,
    uint32_t, uint32_t, struct sockaddr_storage *) ;
int getsourcefilter(int, uint32_t, struct sockaddr *, socklen_t,
    uint32_t *, uint32_t *, struct sockaddr_storage *) ;
# 618 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 3 4
struct in_pktinfo {
 unsigned int ipi_ifindex;
 struct in_addr ipi_spec_dst;
 struct in_addr ipi_addr;
};
# 660 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet6/in6.h" 1 3 4
# 152 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet6/in6.h" 3 4
typedef struct in6_addr {
 union {
  __uint8_t __u6_addr8[16];
  __uint16_t __u6_addr16[8];
  __uint32_t __u6_addr32[4];
 } __u6_addr;
} in6_addr_t;
# 170 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet6/in6.h" 3 4
struct sockaddr_in6 {
 __uint8_t sin6_len;
 sa_family_t sin6_family;
 in_port_t sin6_port;
 __uint32_t sin6_flowinfo;
 struct in6_addr sin6_addr;
 __uint32_t sin6_scope_id;
};
# 214 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet6/in6.h" 3 4
extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;

extern const struct in6_addr in6addr_nodelocal_allnodes;
extern const struct in6_addr in6addr_linklocal_allnodes;
extern const struct in6_addr in6addr_linklocal_allrouters;
extern const struct in6_addr in6addr_linklocal_allv2routers;
# 541 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet6/in6.h" 3 4
struct ipv6_mreq {
 struct in6_addr ipv6mr_multiaddr;
 unsigned int ipv6mr_interface;
};




struct in6_pktinfo {
 struct in6_addr ipi6_addr;
 unsigned int ipi6_ifindex;
};




struct ip6_mtuinfo {
 struct sockaddr_in6 ip6m_addr;
 uint32_t ip6m_mtu;
};
# 639 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet6/in6.h" 3 4

struct cmsghdr;

extern int inet6_option_space(int);
extern int inet6_option_init(void *, struct cmsghdr **, int);
extern int inet6_option_append(struct cmsghdr *, const __uint8_t *, int, int);
extern __uint8_t *inet6_option_alloc(struct cmsghdr *, int, int, int);
extern int inet6_option_next(const struct cmsghdr *, __uint8_t **);
extern int inet6_option_find(const struct cmsghdr *, __uint8_t **, int);

extern size_t inet6_rthdr_space(int, int);
extern struct cmsghdr *inet6_rthdr_init(void *, int);
extern int inet6_rthdr_add(struct cmsghdr *, const struct in6_addr *,
    unsigned int);
extern int inet6_rthdr_lasthop(struct cmsghdr *, unsigned int);



extern int inet6_rthdr_segments(const struct cmsghdr *);
extern struct in6_addr *inet6_rthdr_getaddr(struct cmsghdr *, int);
extern int inet6_rthdr_getflags(const struct cmsghdr *, int);

extern int inet6_opt_init(void *, socklen_t);
extern int inet6_opt_append(void *, socklen_t, int, __uint8_t, socklen_t,
    __uint8_t, void **);
extern int inet6_opt_finish(void *, socklen_t, int);
extern int inet6_opt_set_val(void *, int, void *, socklen_t);

extern int inet6_opt_next(void *, socklen_t, int, __uint8_t *, socklen_t *,
    void **);
extern int inet6_opt_find(void *, socklen_t, int, __uint8_t, socklen_t *,
    void **);
extern int inet6_opt_get_val(void *, int, void *, socklen_t);
extern socklen_t inet6_rth_space(int, int);
extern void *inet6_rth_init(void *, socklen_t, int, int);
extern int inet6_rth_add(void *, const struct in6_addr *);
extern int inet6_rth_reverse(const void *, void *);
extern int inet6_rth_segments(const void *);
extern struct in6_addr *inet6_rth_getaddr(const void *, int);


# 661 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 2 3 4






int bindresvport(int, struct sockaddr_in *);
struct sockaddr;
int bindresvport_sa(int, struct sockaddr *);

# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/arpa/inet.h" 2 3 4



in_addr_t inet_addr(const char *);
char *inet_ntoa(struct in_addr);
const char *inet_ntop(int, const void *, char *, socklen_t);
int inet_pton(int, const char *, void *);


int ascii2addr(int, const char *, void *);
char *addr2ascii(int, const void *, int, char *);
int inet_aton(const char *, struct in_addr *);
in_addr_t inet_lnaof(struct in_addr);
struct in_addr inet_makeaddr(in_addr_t, in_addr_t);
in_addr_t inet_netof(struct in_addr);
in_addr_t inet_network(const char *);
char *inet_net_ntop(int, const void *, int, char *, __darwin_size_t);
int inet_net_pton(int, const char *, void *, __darwin_size_t);
char *inet_neta(in_addr_t, char *, __darwin_size_t);
unsigned int inet_nsap_addr(const char *, unsigned char *, int);
char *inet_nsap_ntoa(int, const unsigned char *, char *);



# 35 "project/goaccess/src/websocket.c" 2
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
# 36 "project/goaccess/src/websocket.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 3 4

extern int * __error(void);


# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 2 3 4
# 37 "project/goaccess/src/websocket.c" 2
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
# 38 "project/goaccess/src/websocket.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netdb.h" 1 3 4
# 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netdb.h" 3 4
extern int h_errno;
# 112 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netdb.h" 3 4
struct hostent {
 char *h_name;
 char **h_aliases;
 int h_addrtype;
 int h_length;
 char **h_addr_list;



};





struct netent {
 char *n_name;
 char **n_aliases;
 int n_addrtype;
 uint32_t n_net;
};

struct servent {
 char *s_name;
 char **s_aliases;
 int s_port;
 char *s_proto;
};

struct protoent {
 char *p_name;
 char **p_aliases;
 int p_proto;
};

struct addrinfo {
 int ai_flags;
 int ai_family;
 int ai_socktype;
 int ai_protocol;
 socklen_t ai_addrlen;
 char *ai_canonname;
 struct sockaddr *ai_addr;
 struct addrinfo *ai_next;
};


struct rpcent {
        char *r_name;
        char **r_aliases;
        int r_number;
};
# 262 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netdb.h" 3 4


void endhostent(void);
void endnetent(void);
void endprotoent(void);
void endservent(void);

void freeaddrinfo(struct addrinfo *);
const char *gai_strerror(int);
int getaddrinfo(const char * restrict, const char * restrict,
       const struct addrinfo * restrict,
       struct addrinfo ** restrict);
struct hostent *gethostbyaddr(const void *, socklen_t, int);
struct hostent *gethostbyname(const char *);
struct hostent *gethostent(void);
int getnameinfo(const struct sockaddr * restrict, socklen_t,
         char * restrict, socklen_t, char * restrict,
         socklen_t, int);
struct netent *getnetbyaddr(uint32_t, int);
struct netent *getnetbyname(const char *);
struct netent *getnetent(void);
struct protoent *getprotobyname(const char *);
struct protoent *getprotobynumber(int);
struct protoent *getprotoent(void);
struct servent *getservbyname(const char *, const char *);
struct servent *getservbyport(int, const char *);
struct servent *getservent(void);
void sethostent(int);

void setnetent(int);
void setprotoent(int);
void setservent(int);


void freehostent(struct hostent *);
struct hostent *gethostbyname2(const char *, int);
struct hostent *getipnodebyaddr(const void *, size_t, int, int *);
struct hostent *getipnodebyname(const char *, int, int, int *);
struct rpcent *getrpcbyname(const char *name);

struct rpcent *getrpcbynumber(int number);



struct rpcent *getrpcent(void);
void setrpcent(int stayopen);
void endrpcent(void);
void herror(const char *);
const char *hstrerror(int);
int innetgr(const char *, const char *, const char *, const char *);
int getnetgrent(char **, char **, char **);
void endnetgrent(void);
void setnetgrent(const char *);



# 39 "project/goaccess/src/websocket.c" 2

# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 1 3 4
# 99 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 41 "project/goaccess/src/websocket.c" 2
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 415 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
} max_align_t;
# 42 "project/goaccess/src/websocket.c" 2

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/un.h" 1 3 4
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/un.h" 3 4
struct sockaddr_un {
 unsigned char sun_len;
 sa_family_t sun_family;
 char sun_path[104];
};
# 44 "project/goaccess/src/websocket.c" 2
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




# 45 "project/goaccess/src/websocket.c" 2
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

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_select.h" 1 3 4
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_select.h" 3 4
int select(int, fd_set * restrict, fd_set * restrict,
    fd_set * restrict, struct timeval * restrict)





__asm("_" "select" "$1050")




;
# 200 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 2 3 4

int setitimer(int, const struct itimerval * restrict,
    struct itimerval * restrict);
int utimes(const char *, const struct timeval *);


# 46 "project/goaccess/src/websocket.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ioctl.h" 1 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ioctl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ttycom.h" 1 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ttycom.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ioccom.h" 1 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ttycom.h" 2 3 4
# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ttycom.h" 3 4
struct winsize {
 unsigned short ws_row;
 unsigned short ws_col;
 unsigned short ws_xpixel;
 unsigned short ws_ypixel;
};
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ioctl.h" 2 3 4






struct ttysize {
 unsigned short ts_lines;
 unsigned short ts_cols;
 unsigned short ts_xxx;
 unsigned short ts_yyy;
};





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/filio.h" 1 3 4
# 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ioctl.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/sockio.h" 1 3 4
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ioctl.h" 2 3 4





int ioctl(int, unsigned long, ...);

# 47 "project/goaccess/src/websocket.c" 2

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


# 49 "project/goaccess/src/websocket.c" 2





# 1 "project/goaccess/src/websocket.h" 1
# 39 "project/goaccess/src/websocket.h"
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
# 40 "project/goaccess/src/websocket.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/poll.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/poll.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/poll.h" 1 3 4
# 96 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/poll.h" 3 4
struct pollfd {
 int fd;
 short events;
 short revents;
};

typedef unsigned int nfds_t;










extern int poll(struct pollfd *, nfds_t, int) __asm("_" "poll" );


# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/poll.h" 2 3 4
# 41 "project/goaccess/src/websocket.h" 2
# 85 "project/goaccess/src/websocket.h"
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/OSByteOrder.h" 1 3 4
# 53 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/OSByteOrder.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/i386/OSByteOrder.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/i386/OSByteOrder.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_os_inline.h" 1 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/i386/OSByteOrder.h" 2 3 4



static inline
uint16_t
OSReadSwapInt16(
 const volatile void * base,
 uintptr_t byteOffset
 )
{
 uint16_t result;

 result = *(volatile uint16_t *)((uintptr_t)base + byteOffset);
 return _OSSwapInt16(result);
}

static inline
uint32_t
OSReadSwapInt32(
 const volatile void * base,
 uintptr_t byteOffset
 )
{
 uint32_t result;

 result = *(volatile uint32_t *)((uintptr_t)base + byteOffset);
 return _OSSwapInt32(result);
}

static inline
uint64_t
OSReadSwapInt64(
 const volatile void * base,
 uintptr_t byteOffset
 )
{
 uint64_t result;

 result = *(volatile uint64_t *)((uintptr_t)base + byteOffset);
 return _OSSwapInt64(result);
}



static inline
void
OSWriteSwapInt16(
 volatile void * base,
 uintptr_t byteOffset,
 uint16_t data
 )
{
 *(volatile uint16_t *)((uintptr_t)base + byteOffset) = _OSSwapInt16(data);
}

static inline
void
OSWriteSwapInt32(
 volatile void * base,
 uintptr_t byteOffset,
 uint32_t data
 )
{
 *(volatile uint32_t *)((uintptr_t)base + byteOffset) = _OSSwapInt32(data);
}

static inline
void
OSWriteSwapInt64(
 volatile void * base,
 uintptr_t byteOffset,
 uint64_t data
 )
{
 *(volatile uint64_t *)((uintptr_t)base + byteOffset) = _OSSwapInt64(data);
}
# 54 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/OSByteOrder.h" 2 3 4
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/OSByteOrder.h" 3 4
enum {
 OSUnknownByteOrder,
 OSLittleEndian,
 OSBigEndian
};

static inline
int32_t
OSHostByteOrder(void)
{

 return OSLittleEndian;





}
# 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/OSByteOrder.h" 3 4
static inline
uint16_t
_OSReadInt16(
 const volatile void * base,
 uintptr_t byteOffset
 )
{
 return *(volatile uint16_t *)((uintptr_t)base + byteOffset);
}

static inline
uint32_t
_OSReadInt32(
 const volatile void * base,
 uintptr_t byteOffset
 )
{
 return *(volatile uint32_t *)((uintptr_t)base + byteOffset);
}

static inline
uint64_t
_OSReadInt64(
 const volatile void * base,
 uintptr_t byteOffset
 )
{
 return *(volatile uint64_t *)((uintptr_t)base + byteOffset);
}



static inline
void
_OSWriteInt16(
 volatile void * base,
 uintptr_t byteOffset,
 uint16_t data
 )
{
 *(volatile uint16_t *)((uintptr_t)base + byteOffset) = data;
}

static inline
void
_OSWriteInt32(
 volatile void * base,
 uintptr_t byteOffset,
 uint32_t data
 )
{
 *(volatile uint32_t *)((uintptr_t)base + byteOffset) = data;
}

static inline
void
_OSWriteInt64(
 volatile void * base,
 uintptr_t byteOffset,
 uint64_t data
 )
{
 *(volatile uint64_t *)((uintptr_t)base + byteOffset) = data;
}
# 86 "project/goaccess/src/websocket.h" 2
# 96 "project/goaccess/src/websocket.h"
# 1 "project/goaccess/src/gslist.h" 1
# 34 "project/goaccess/src/gslist.h"

# 34 "project/goaccess/src/gslist.h"
typedef struct GSLList_ {
  void *data;
  struct GSLList_ *next;
} GSLList;
# 48 "project/goaccess/src/gslist.h"
GSLList *list_create (void *data);
GSLList *list_find (GSLList * node, int (*func) (void *, void *), void *data);
GSLList *list_insert_append (GSLList * node, void *data);
GSLList *list_insert_prepend (GSLList * list, void *data);
GSLList *list_copy (GSLList * node);
int list_count (GSLList * list);
int list_foreach (GSLList * node, int (*func) (void *, void *), void *user_data);
int list_remove_node (GSLList ** list, GSLList * node);
int list_remove_nodes (GSLList * list);
# 97 "project/goaccess/src/websocket.h" 2
# 132 "project/goaccess/src/websocket.h"
typedef enum WSSTATUS {
  WS_OK = 0,
  WS_ERR = (1 << 0),
  WS_CLOSE = (1 << 1),
  WS_READING = (1 << 2),
  WS_SENDING = (1 << 3),
  WS_THROTTLING = (1 << 4),
  WS_TLS_ACCEPTING = (1 << 5),
  WS_TLS_READING = (1 << 6),
  WS_TLS_WRITING = (1 << 7),
  WS_TLS_SHUTTING = (1 << 8),
} WSStatus;

typedef enum WSOPCODE {
  WS_OPCODE_CONTINUATION = 0x00,
  WS_OPCODE_TEXT = 0x01,
  WS_OPCODE_BIN = 0x02,
  WS_OPCODE_END = 0x03,
  WS_OPCODE_CLOSE = 0x08,
  WS_OPCODE_PING = 0x09,
  WS_OPCODE_PONG = 0x0A,
} WSOpcode;

typedef struct WSQueue_ {
  char *queued;
  int qlen;
} WSQueue;

typedef struct WSPacket_ {
  uint32_t type;
  uint32_t size;
  char *data;
  int len;
} WSPacket;


typedef struct WSHeaders_ {
  int reading;
  int buflen;
  char buf[8192 + 1];

  char *agent;
  char *path;
  char *method;
  char *protocol;
  char *host;
  char *origin;
  char *upgrade;
  char *referer;
  char *connection;
  char *ws_protocol;
  char *ws_key;
  char *ws_sock_ver;

  char *ws_accept;
  char *ws_resp;
} WSHeaders;


typedef struct WSFrame_ {

  WSOpcode opcode;
  unsigned char fin;
  unsigned char mask[4];
  uint8_t res;
  int payload_offset;
  int payloadlen;


  int reading;
  int masking;

  char buf[16 + 1];
  int buflen;
} WSFrame;


typedef struct WSMessage_ {
  WSOpcode opcode;
  int fragmented;
  int mask_offset;

  char *payload;
  int payloadsz;
  int buflen;
} WSMessage;


typedef struct WSClient_ {

  int listener;
  char remote_ip[
# 223 "project/goaccess/src/websocket.h" 3 4
                46
# 223 "project/goaccess/src/websocket.h"
                                ];

  WSQueue *sockqueue;
  WSHeaders *headers;
  WSFrame *frame;
  WSMessage *message;
  WSStatus status;

  struct timeval start_proc;
  struct timeval end_proc;





} WSClient;


typedef struct WSPipeIn_ {
  int fd;

  WSPacket *packet;

  char hdr[3 * 4];
  int hlen;
} WSPipeIn;


typedef struct WSPipeOut_ {
  int fd;
  WSQueue *fifoqueue;
  WSStatus status;
} WSPipeOut;


typedef struct WSConfig_ {

  const char *accesslog;
  const char *host;
  const char *origin;
  const char *pipein;
  const char *pipeout;
  const char *port;
  const char *sslcert;
  const char *sslkey;
  const char *unix_socket;
  int echomode;
  int strict;
  int max_frm_size;
  int use_ssl;
} WSConfig;


typedef struct WSServer_ {

  int closing;


  int (*onclose) (WSPipeOut * pipeout, WSClient * client);
  int (*onmessage) (WSPipeOut * pipeout, WSClient * client);
  int (*onopen) (WSPipeOut * pipeout, WSClient * client);


  int self_pipe[2];

  WSPipeIn *pipein;

  WSPipeOut *pipeout;

  GSLList *colist;




} WSServer;

int ws_read_fifo (int fd, char *buf, int *buflen, int pos, int need);
int ws_send_data (WSClient * client, WSOpcode opcode, const char *p, int sz);
int ws_setfifo (const char *pipename);
int ws_validate_string (const char *str, int len);
int ws_write_fifo (WSPipeOut * pipeout, char *buffer, int len);
size_t pack_uint32 (void *buf, uint32_t val);
size_t unpack_uint32 (const void *buf, uint32_t * val);
void set_nonblocking (int listener);
void ws_set_config_accesslog (const char *accesslog);
void ws_set_config_echomode (int echomode);
void ws_set_config_frame_size (int max_frm_size);
void ws_set_config_host (const char *host);
void ws_set_config_unix_socket (const char *unix_socket);
void ws_set_config_origin (const char *origin);
void ws_set_config_pipein (const char *pipein);
void ws_set_config_pipeout (const char *pipeout);
void ws_set_config_port (const char *port);
void ws_set_config_sslcert (const char *sslcert);
void ws_set_config_sslkey (const char *sslkey);
void ws_set_config_strict (int strict);
void ws_start (WSServer * server);
void ws_stop (WSServer * server);
WSServer *ws_init (const char *host, const char *port, void (*initopts) (void));
# 55 "project/goaccess/src/websocket.c" 2

# 1 "project/goaccess/src/base64.h" 1
# 33 "project/goaccess/src/base64.h"
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 34 "project/goaccess/src/base64.h" 2

char *base64_encode (const void *buf, size_t size);
# 57 "project/goaccess/src/websocket.c" 2
# 1 "project/goaccess/src/error.h" 1
# 34 "project/goaccess/src/error.h"
# 1 "project/goaccess/src/commons.h" 1
# 48 "project/goaccess/src/commons.h"
extern struct tm now_tm;
# 85 "project/goaccess/src/commons.h"
typedef enum {
  TYPE_IPINV,
  TYPE_IPV4,
  TYPE_IPV6
} GTypeIP;


typedef enum MODULES {
  VISITORS,
  REQUESTS,
  REQUESTS_STATIC,
  NOT_FOUND,
  HOSTS,
  OS,
  BROWSERS,
  VISIT_TIMES,
  VIRTUAL_HOSTS,
  REFERRERS,
  REFERRING_SITES,
  KEYPHRASES,
  STATUS_CODES,
  REMOTE_USER,
  CACHE_STATUS,



  MIME_TYPE,
  TLS_TYPE,
} GModule;



typedef struct GPercTotals_ {
  uint32_t hits;
  uint32_t visitors;
  uint64_t bw;
} GPercTotals;


typedef struct GMetrics {


  uint8_t id;
  char *data;
  char *method;
  char *protocol;

  float hits_perc;
  float visitors_perc;
  float bw_perc;

  uint64_t hits;
  uint64_t visitors;



  union {
    char *sbw;
    uint64_t nbw;
  } bw;



  union {
    char *sts;
    uint64_t nts;
  } avgts;



  union {
    char *sts;
    uint64_t nts;
  } cumts;



  union {
    char *sts;
    uint64_t nts;
  } maxts;
} GMetrics;


typedef struct GSubItem_ {
  GModule module;
  GMetrics *metrics;
  struct GSubItem_ *prev;
  struct GSubItem_ *next;
} GSubItem;


typedef struct GSubList_ {
  int size;
  struct GSubItem_ *head;
  struct GSubItem_ *tail;
} GSubList;


typedef struct GHolderItem_ {
  GSubList *sub_list;
  GMetrics *metrics;
} GHolderItem;


typedef struct GHolder_ {
  GHolderItem *items;
  GModule module;
  int idx;
  int holder_size;
  uint32_t ht_size;
  int sub_items_size;
} GHolder;


typedef struct GEnum_ {
  const char *str;
  int idx;
} GEnum;


typedef struct GDataMap_ {
  int data;
  int root;
} GDataMap;

typedef struct GAgentItem_ {
  char *agent;
} GAgentItem;

typedef struct GAgents_ {
  int size;
  int idx;
  struct GAgentItem_ *items;
} GAgents;





extern time_t end_proc;
extern time_t timestamp;
extern time_t start_proc;


extern int module_list[17];


GAgents *new_gagents (uint32_t size);
void free_agents_array (GAgents *agents);

char *enum2str (const GEnum map[], int len, int idx);
char *get_module_str (GModule module);
float get_percentage (unsigned long long total, unsigned long long hit);
int get_max_choices (void);
int get_module_enum (const char *str);
int has_timestamp (const char *fmt);
int str2enum (const GEnum map[], int len, const char *str);

int enable_panel (GModule mod);
int get_module_index (int module);
int get_next_module (GModule module);
int get_prev_module (GModule module);
int ignore_panel (GModule mod);
int init_modules (void);
int remove_module(GModule module);
uint32_t get_num_modules (void);
void verify_panels (void);

char *get_log_source_str (int max_len);
intmax_t get_log_sizes (void);

void display_default_config_file (void);
void display_storage (void);
void display_version (void);
# 35 "project/goaccess/src/error.h" 2
# 47 "project/goaccess/src/error.h"
# 1 "project/goaccess/src/settings.h" 1
# 34 "project/goaccess/src/settings.h"
# 1 "project/goaccess/src/commons.h" 1
# 35 "project/goaccess/src/settings.h" 2
# 47 "project/goaccess/src/settings.h"
typedef enum LOGTYPE {
  COMBINED,
  VCOMBINED,
  COMMON,
  VCOMMON,
  W3C,
  CLOUDFRONT,
  CLOUDSTORAGE,
  AWSELB,
  SQUID,
  AWSS3,
  CADDY,
  AWSALB,
} GLogType;


typedef struct GPreConfTime_ {
  const char *fmt24;
  const char *usec;
  const char *sec;
} GPreConfTime;


typedef struct GPreConfDate_ {
  const char *apache;
  const char *w3c;
  const char *usec;
  const char *sec;
} GPreConfDate;


typedef struct GPreConfLog_ {
  const char *combined;
  const char *vcombined;
  const char *common;
  const char *vcommon;
  const char *w3c;
  const char *cloudfront;
  const char *cloudstorage;
  const char *awselb;
  const char *squid;
  const char *awss3;
  const char *caddy;
  const char *awsalb;
} GPreConfLog;



typedef struct GConf_
{

  const char *colors[64];
  const char *enable_panels[17];
  const char *filenames[3072];
  const char *hide_referers[64];
  const char *ignore_ips[1024 + 128];
  const char *ignore_panels[17];
  const char *ignore_referers[64];
  const char *ignore_status[64];
  const char *output_formats[3];
  const char *sort_panels[17];
  const char *static_files[128];


  char *date_format;
  char *date_num_format;
  char *time_format;
  char *spec_date_time_format;
  char *spec_date_time_num_format;
  char *log_format;
  char *iconfigfile;
  char ***user_browsers_hash;

  const char *debug_log;
  const char *geoip_database;
  const char *html_custom_css;
  const char *html_custom_js;
  const char *html_prefs;
  const char *html_report_title;
  const char *invalid_requests_log;
  const char *unknowns_log;
  const char *pidfile;
  const char *browsers_file;
  const char *db_path;


  const char *addr;
  const char *fifo_in;
  const char *fifo_out;
  const char *origin;
  const char *port;
  const char *sslcert;
  const char *sslkey;
  const char *ws_url;
  const char *unix_socket;


  int all_static_files;
  int anonymize_ip;
  int append_method;
  int append_protocol;
  int client_err_to_unique_count;
  int code444_as_404;
  int color_scheme;
  int crawlers_only ;
  int daemonize;
  const char *username;
  int double_decode;
  int enable_html_resolver;
  int geo_db;
  int hl_header;
  int ignore_crawlers;
  int ignore_qstr;
  int ignore_statics;
  int json_pretty_print;
  int list_agents;
  int load_conf_dlg;
  int load_global_config;
  int max_items;
  int mouse_support;
  int no_color;
  int no_strict_status;
  int no_column_names;
  int no_csv_summary;
  int no_html_last_updated;
  int no_ip_validation;
  int no_parsing_spinner;
  int no_progress;
  int no_tab_scroll;
  int output_stdout;
  int persist;
  int process_and_exit;
  int real_os;
  int real_time_html;
  int restore;
  int skip_term_resolver;
  int is_json_log_format;
  uint32_t keep_last;
  uint32_t num_tests;
  uint64_t html_refresh;
  uint64_t log_size;


  int bandwidth;
  int date_spec_hr;
  int has_geocity;
  int has_geocountry;
  int hour_spec_min;
  int read_stdin;
  int serve_usecs;
  int stop_processing;
  int tailing_mode;


  int color_idx;
  int enable_panel_idx;
  int filenames_idx;
  int hide_referer_idx;
  int ignore_ip_idx;
  int ignore_panel_idx;
  int ignore_referer_idx;
  int ignore_status_idx;
  int output_format_idx;
  int sort_panel_idx;
  int static_file_idx;
  int browsers_hash_idx;

  size_t static_file_max_len;

} GConf;


char *get_selected_date_str (size_t idx);
char *get_selected_format_str (size_t idx);
char *get_selected_time_str (size_t idx);
const char *verify_formats (void);
int is_json_log_format (const char *fmt);
int parse_json_string (void *userdata, const char *str, int (*cb) (void *, char *, char *));
size_t get_selected_format_idx (void);
void set_date_format_str (const char *optarg);
void set_log_format_str (const char *optarg);
void set_spec_date_format (void);
void set_time_format_str (const char *optarg);

extern GConf conf;

char *get_config_file_path (void);
int parse_conf_file (int *argc, char ***argv);
void free_cmd_args (void);
void free_formats (void);
void set_default_static_files (void);
# 48 "project/goaccess/src/error.h" 2
# 80 "project/goaccess/src/error.h"
int access_log_open (const char *path);
void access_fprintf (const char *fmt, ...) __attribute__((format (printf, 1, 2)));
void access_log_close (void);
void dbg_fprintf (const char *fmt, ...) __attribute__((format (printf, 1, 2)));
void dbg_log_close (void);
void dbg_log_open (const char *file);
void dbg_printf (const char *fmt, ...) __attribute__((format (printf, 1, 2)));
void invalid_fprintf (const char *fmt, ...) __attribute__((format (printf, 1, 2)));
void unknowns_fprintf (const char *fmt, ...) __attribute__((format (printf, 1, 2)));
void invalid_log_close (void);
void invalid_log_open (const char *path);
void set_signal_data (void *p);
void setup_sigsegv_handler (void);
void sigsegv_handler (int sig);
void unknowns_log_close (void);
void unknowns_log_open (const char *path);
# 58 "project/goaccess/src/websocket.c" 2

# 1 "project/goaccess/src/sha1.h" 1
# 9 "project/goaccess/src/sha1.h"
typedef struct {
  uint32_t state[5];
  uint32_t count[2];
  uint8_t buffer[64];
} SHA1_CTX;

extern void SHA1Init (SHA1_CTX * context);
extern void SHA1Update (SHA1_CTX * context, uint8_t * data, uint32_t len);
extern void SHA1Final (uint8_t digest[20], SHA1_CTX * context);
# 60 "project/goaccess/src/websocket.c" 2
# 1 "project/goaccess/src/xmalloc.h" 1
# 33 "project/goaccess/src/xmalloc.h"
char *xstrdup (const char *s);
void *xcalloc (size_t nmemb, size_t size);
void *xmalloc (size_t size);
void *xrealloc (void *oldptr, size_t size);
# 61 "project/goaccess/src/websocket.c" 2
# 69 "project/goaccess/src/websocket.c"
static const uint8_t utf8d[] = {
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,
  7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
  8,8,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,
  0xa,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x4,0x3,0x3,
  0xb,0x6,0x6,0x6,0x5,0x8,0x8,0x8,0x8,0x8,0x8,0x8,0x8,0x8,0x8,0x8,
  0x0,0x1,0x2,0x3,0x5,0x8,0x7,0x1,0x1,0x1,0x4,0x6,0x1,0x1,0x1,0x1,
  1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,1,1,1,1,1,1,
  1,2,1,1,1,1,1,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,
  1,2,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,3,1,1,1,1,1,1,
  1,3,1,1,1,1,1,3,1,3,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
};


static struct pollfd *fdstate = 
# 87 "project/goaccess/src/websocket.c" 3 4
                               ((void *)0)
# 87 "project/goaccess/src/websocket.c"
                                   ;
static nfds_t nfdstate = 0;
static WSConfig wsconfig = { 0 };

static void handle_read_close (int conn, WSClient * client, WSServer * server);
static void handle_reads (int conn, WSServer * server);
static void handle_writes (int conn, WSServer * server);







static uint32_t
verify_utf8 (uint32_t * state, const char *str, int len) {
  int i;
  uint32_t type;

  for (i = 0; i < len; ++i) {
    type = utf8d[(uint8_t) str[i]];
    *state = utf8d[256 + (*state) * 16 + type];

    if (*state == 1)
      break;
  }

  return *state;
}





static uint32_t
utf8_decode (uint32_t * state, uint32_t * p, uint32_t b) {
  uint32_t type = utf8d[(uint8_t) b];

  *p = (*state != 0) ? (b & 0x3fu) | (*p << 6) : (0xff >> type) & (b);
  *state = utf8d[256 + *state * 16 + type];

  return *state;
}




static char *
sanitize_utf8 (const char *str, int len) {
  char *buf = 
# 136 "project/goaccess/src/websocket.c" 3 4
             ((void *)0)
# 136 "project/goaccess/src/websocket.c"
                 ;
  uint32_t state = 0, prev = 0, cp = 0;
  int i = 0, j = 0, k = 0, l = 0;

  buf = xcalloc (len + 1, sizeof (char));
  for (; i < len; prev = state, ++i) {
    switch (utf8_decode (&state, &cp, (unsigned char) str[i])) {
    case 1:

      if (k) {
        for (l = i - k; l < i; ++l)
          buf[j++] = '?';
      } else {
        buf[j++] = '?';
      }
      state = 0;
      if (prev != 0)
        i--;
      k = 0;
      break;
    case 0:

      if (k)
        for (l = i - k; l < i; ++l)
          buf[j++] = str[l];
      buf[j++] = str[i];
      k = 0;
      break;
    default:

      k++;
      break;
    }
  }

  return buf;
}




static struct pollfd *
get_pollfd (int fd) {
  struct pollfd *pfd, *efd = fdstate + nfdstate;

  for (pfd = fdstate; pfd < efd; pfd++) {
    if (pfd->fd == fd)
      return pfd;
  }

  return 
# 186 "project/goaccess/src/websocket.c" 3 4
        ((void *)0)
# 186 "project/goaccess/src/websocket.c"
            ;
}



static void
set_pollfd (int fd, short flags) {
  struct pollfd *pfd;

  if (fd == -1)
    do { (void) endwin (); fprintf (
# 196 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 196 "project/goaccess/src/websocket.c"
   , "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:16"); fprintf (
# 196 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 196 "project/goaccess/src/websocket.c"
   , "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (
# 196 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 196 "project/goaccess/src/websocket.c"
   , "\nFatal error has occurred"); fprintf (
# 196 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 196 "project/goaccess/src/websocket.c"
   , "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/websocket.c", __FUNCTION__, 196); fprintf (
# 196 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 196 "project/goaccess/src/websocket.c"
   , "Cannot poll an invalid fd"); fprintf (
# 196 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 196 "project/goaccess/src/websocket.c"
   , "\n\n"); do { dbg_fprintf ("Cannot poll an invalid fd"); } while (0); exit(
# 196 "project/goaccess/src/websocket.c" 3 4
   1
# 196 "project/goaccess/src/websocket.c"
   ); } while (0);

  pfd = get_pollfd (fd);
  if (pfd == 
# 199 "project/goaccess/src/websocket.c" 3 4
            ((void *)0)
# 199 "project/goaccess/src/websocket.c"
                ) {
    struct pollfd *newstate = xrealloc (fdstate, sizeof (*pfd) * (nfdstate + 1));

    fdstate = newstate;
    pfd = fdstate + nfdstate++;
    pfd->fd = fd;
  }
  pfd->events = flags;
  pfd->revents = 0;
}


static void
unset_pollfd (int fd) {
  struct pollfd *pfd = get_pollfd (fd), *efd;
  struct pollfd *newstate;

  if (pfd == 
# 216 "project/goaccess/src/websocket.c" 3 4
            ((void *)0)
# 216 "project/goaccess/src/websocket.c"
                )
    return;

  nfdstate--;


  if (nfdstate == 0) {
    free (fdstate);
    fdstate = 
# 224 "project/goaccess/src/websocket.c" 3 4
             ((void *)0)
# 224 "project/goaccess/src/websocket.c"
                 ;
    return;
  }

  efd = fdstate + nfdstate;
  if (pfd != efd)
    
# 230 "project/goaccess/src/websocket.c" 3 4
   __builtin___memmove_chk (
# 230 "project/goaccess/src/websocket.c"
   pfd
# 230 "project/goaccess/src/websocket.c" 3 4
   , 
# 230 "project/goaccess/src/websocket.c"
   pfd + 1, (char *) efd - (char *) pfd
# 230 "project/goaccess/src/websocket.c" 3 4
   , __builtin_object_size (
# 230 "project/goaccess/src/websocket.c"
   pfd
# 230 "project/goaccess/src/websocket.c" 3 4
   , 0))
# 230 "project/goaccess/src/websocket.c"
                                                      ;


  newstate = realloc (fdstate, sizeof (*pfd) * nfdstate);
  if (newstate != 
# 234 "project/goaccess/src/websocket.c" 3 4
                 ((void *)0)
# 234 "project/goaccess/src/websocket.c"
                     )
    fdstate = newstate;
}


static WSServer *
new_wsserver (void) {
  WSServer *server = xcalloc (1, sizeof (WSServer));

  return server;
}


static WSClient *
new_wsclient (void) {
  WSClient *client = xcalloc (1, sizeof (WSClient));
  client->status = WS_OK;

  return client;
}


static WSHeaders *
new_wsheader (void) {
  WSHeaders *headers = xcalloc (1, sizeof (WSHeaders));
  
# 259 "project/goaccess/src/websocket.c" 3 4
 __builtin___memset_chk (
# 259 "project/goaccess/src/websocket.c"
 headers->buf
# 259 "project/goaccess/src/websocket.c" 3 4
 , 
# 259 "project/goaccess/src/websocket.c"
 0, sizeof (headers->buf)
# 259 "project/goaccess/src/websocket.c" 3 4
 , __builtin_object_size (
# 259 "project/goaccess/src/websocket.c"
 headers->buf
# 259 "project/goaccess/src/websocket.c" 3 4
 , 0))
# 259 "project/goaccess/src/websocket.c"
                                                ;
  headers->reading = 1;

  return headers;
}


static WSFrame *
new_wsframe (void) {
  WSFrame *frame = xcalloc (1, sizeof (WSFrame));
  
# 269 "project/goaccess/src/websocket.c" 3 4
 __builtin___memset_chk (
# 269 "project/goaccess/src/websocket.c"
 frame->buf
# 269 "project/goaccess/src/websocket.c" 3 4
 , 
# 269 "project/goaccess/src/websocket.c"
 0, sizeof (frame->buf)
# 269 "project/goaccess/src/websocket.c" 3 4
 , __builtin_object_size (
# 269 "project/goaccess/src/websocket.c"
 frame->buf
# 269 "project/goaccess/src/websocket.c" 3 4
 , 0))
# 269 "project/goaccess/src/websocket.c"
                                            ;
  frame->reading = 1;

  return frame;
}


static WSMessage *
new_wsmessage (void) {
  WSMessage *msg = xcalloc (1, sizeof (WSMessage));

  return msg;
}


static WSPipeOut *
new_wspipeout (void) {
  WSPipeOut *pipeout = xcalloc (1, sizeof (WSPipeOut));
  pipeout->fd = -1;

  return pipeout;
}


static WSPipeIn *
new_wspipein (void) {
  WSPipeIn *pipein = xcalloc (1, sizeof (WSPipeIn));
  pipein->fd = -1;

  return pipein;
}






static char *
escape_http_request (const char *src) {
  char *dest, *q;
  const unsigned char *p;

  if (src == 
# 311 "project/goaccess/src/websocket.c" 3 4
            ((void *)0) 
# 311 "project/goaccess/src/websocket.c"
                 || *src == '\0')
    return 
# 312 "project/goaccess/src/websocket.c" 3 4
          ((void *)0)
# 312 "project/goaccess/src/websocket.c"
              ;

  p = (const unsigned char *) src;
  q = dest = xmalloc (strlen (src) * 4 + 1);

  while (*p) {
    switch (*p) {
    case '\\':
      *q++ = '\\';
      *q++ = '\\';
      break;
    case '\n':
      *q++ = '\\';
      *q++ = 'n';
      break;
    case '\r':
      *q++ = '\\';
      *q++ = 'r';
      break;
    case '\t':
      *q++ = '\\';
      *q++ = 't';
      break;
    case '"':
      *q++ = '\\';
      *q++ = '"';
      break;
    default:
      if ((*p < ' ') || (*p >= 0177)) {

      } else {
        *q++ = *p;
      }
      break;
    }
    p++;
  }
  *q = 0;
  return dest;
}





static char *
strtoupper (char *str) {
  char *p = str;
  if (str == 
# 360 "project/goaccess/src/websocket.c" 3 4
            ((void *)0) 
# 360 "project/goaccess/src/websocket.c"
                 || *str == '\0')
    return str;

  while (*p != '\0') {
    *p = toupper ((int) *p);
    p++;
  }

  return str;
}




static size_t
chop_nchars (char *str, size_t n, size_t len) {
  if (n == 0 || str == 0)
    return 0;

  if (n > len)
    n = len;
  
# 381 "project/goaccess/src/websocket.c" 3 4
 __builtin___memmove_chk (
# 381 "project/goaccess/src/websocket.c"
 str
# 381 "project/goaccess/src/websocket.c" 3 4
 , 
# 381 "project/goaccess/src/websocket.c"
 str + n, len - n
# 381 "project/goaccess/src/websocket.c" 3 4
 , __builtin_object_size (
# 381 "project/goaccess/src/websocket.c"
 str
# 381 "project/goaccess/src/websocket.c" 3 4
 , 0))
# 381 "project/goaccess/src/websocket.c"
                                ;

  return (len - n);
}




static int
ws_find_client_sock_in_list (void *data, void *needle) {
  WSClient *client = data;

  return client->listener == (*(int *) needle);
}




static GSLList *
ws_get_list_node_from_list (int listener, GSLList ** colist) {
  GSLList *match = 
# 401 "project/goaccess/src/websocket.c" 3 4
                  ((void *)0)
# 401 "project/goaccess/src/websocket.c"
                      ;


  if (!(match = list_find (*colist, ws_find_client_sock_in_list, &listener)))
    return 
# 405 "project/goaccess/src/websocket.c" 3 4
          ((void *)0)
# 405 "project/goaccess/src/websocket.c"
              ;
  return match;
}




static WSClient *
ws_get_client_from_list (int listener, GSLList ** colist) {
  GSLList *match = 
# 414 "project/goaccess/src/websocket.c" 3 4
                  ((void *)0)
# 414 "project/goaccess/src/websocket.c"
                      ;


  if (!(match = list_find (*colist, ws_find_client_sock_in_list, &listener)))
    return 
# 418 "project/goaccess/src/websocket.c" 3 4
          ((void *)0)
# 418 "project/goaccess/src/websocket.c"
              ;
  return (WSClient *) match->data;
}


static void
ws_free_frame (WSClient * client) {
  if (client->frame)
    free (client->frame);
  client->frame = 
# 427 "project/goaccess/src/websocket.c" 3 4
                 ((void *)0)
# 427 "project/goaccess/src/websocket.c"
                     ;
}


static void
ws_free_message (WSClient * client) {
  if (client->message && client->message->payload)
    free (client->message->payload);
  if (client->message)
    free (client->message);
  client->message = 
# 437 "project/goaccess/src/websocket.c" 3 4
                   ((void *)0)
# 437 "project/goaccess/src/websocket.c"
                       ;
}


static void
ws_free_header_fields (WSHeaders * headers) {
  if (headers->connection)
    free (headers->connection);
  if (headers->host)
    free (headers->host);
  if (headers->agent)
    free (headers->agent);
  if (headers->method)
    free (headers->method);
  if (headers->origin)
    free (headers->origin);
  if (headers->path)
    free (headers->path);
  if (headers->protocol)
    free (headers->protocol);
  if (headers->upgrade)
    free (headers->upgrade);
  if (headers->ws_accept)
    free (headers->ws_accept);
  if (headers->ws_key)
    free (headers->ws_key);
  if (headers->ws_protocol)
    free (headers->ws_protocol);
  if (headers->ws_resp)
    free (headers->ws_resp);
  if (headers->ws_sock_ver)
    free (headers->ws_sock_ver);
  if (headers->referer)
    free (headers->referer);
}


static void
ws_close (int listener) {
  unset_pollfd (listener);
  close (listener);
}


static void
ws_clear_queue (WSClient * client) {
  WSQueue **queue = &client->sockqueue;
  if (!(*queue))
    return;

  if ((*queue)->queued)
    free ((*queue)->queued);
  (*queue)->queued = 
# 489 "project/goaccess/src/websocket.c" 3 4
                    ((void *)0)
# 489 "project/goaccess/src/websocket.c"
                        ;
  (*queue)->qlen = 0;

  free ((*queue));
  (*queue) = 
# 493 "project/goaccess/src/websocket.c" 3 4
            ((void *)0)
# 493 "project/goaccess/src/websocket.c"
                ;


  client->status &= ~WS_THROTTLING;

  if ((client->status & WS_CLOSE) && (client->status & WS_SENDING))
    client->status = WS_CLOSE;
}


static void
ws_clear_handshake_headers (WSHeaders * headers) {
  ws_free_header_fields (headers);
  free (headers);
}


static void
ws_remove_client_from_list (WSClient * client, WSServer * server) {
  GSLList *node = 
# 512 "project/goaccess/src/websocket.c" 3 4
                 ((void *)0)
# 512 "project/goaccess/src/websocket.c"
                     ;

  if (!(node = ws_get_list_node_from_list (client->listener, &server->colist)))
    return;

  if (client->headers)
    ws_clear_handshake_headers (client->headers);
  list_remove_node (&server->colist, node);
}
# 556 "project/goaccess/src/websocket.c"
static int
ws_remove_dangling_clients (void *value, void *user_data) {
  WSClient *client = value;
  (void) (user_data);

  if (client == 
# 561 "project/goaccess/src/websocket.c" 3 4
               ((void *)0)
# 561 "project/goaccess/src/websocket.c"
                   )
    return 1;

  if (client->headers)
    ws_clear_handshake_headers (client->headers);
  if (client->sockqueue)
    ws_clear_queue (client);





  return 0;
}


static void
ws_clear_fifo_packet (WSPacket * packet) {
  if (!packet)
    return;

  if (packet->data)
    free (packet->data);
  free (packet);
}


static void
ws_clear_pipein (WSPipeIn * pipein) {
  WSPacket **packet = &pipein->packet;
  if (!pipein)
    return;

  if (pipein->fd != -1)
    ws_close (pipein->fd);

  ws_clear_fifo_packet (*packet);
  free (pipein);

  if (wsconfig.pipein && access (wsconfig.pipein, 
# 600 "project/goaccess/src/websocket.c" 3 4
                                                 0
# 600 "project/goaccess/src/websocket.c"
                                                     ) != -1)
    unlink (wsconfig.pipein);
}


static void
ws_clear_pipeout (WSPipeOut * pipeout) {
  if (!pipeout)
    return;

  if (pipeout->fd != -1)
    ws_close (pipeout->fd);

  free (pipeout);

  if (wsconfig.pipeout && access (wsconfig.pipeout, 
# 615 "project/goaccess/src/websocket.c" 3 4
                                                   0
# 615 "project/goaccess/src/websocket.c"
                                                       ) != -1)
    unlink (wsconfig.pipeout);
}


void
ws_stop (WSServer * server) {
  WSPipeIn **pipein = &server->pipein;
  WSPipeOut **pipeout = &server->pipeout;

  ws_clear_pipein (*pipein);
  ws_clear_pipeout (*pipeout);


  if (wsconfig.accesslog)
    access_log_close ();


  if (list_count (server->colist) > 0)
    list_foreach (server->colist, ws_remove_dangling_clients, 
# 634 "project/goaccess/src/websocket.c" 3 4
                                                             ((void *)0)
# 634 "project/goaccess/src/websocket.c"
                                                                 );

  if (server->colist)
    list_remove_nodes (server->colist);





  free (server);
  free (fdstate);
  fdstate = 
# 645 "project/goaccess/src/websocket.c" 3 4
           ((void *)0)
# 645 "project/goaccess/src/websocket.c"
               ;
}





static int
ws_set_status (WSClient * client, WSStatus status, int bytes) {
  client->status = status;
  return bytes;
}



static void
ws_append_str (char **dest, const char *src) {
  size_t curlen = strlen (*dest);
  size_t srclen = strlen (src);
  size_t newlen = curlen + srclen;

  char *str = xrealloc (*dest, newlen + 1);
  
# 667 "project/goaccess/src/websocket.c" 3 4
 __builtin___memcpy_chk (
# 667 "project/goaccess/src/websocket.c"
 str + curlen
# 667 "project/goaccess/src/websocket.c" 3 4
 , 
# 667 "project/goaccess/src/websocket.c"
 src, srclen + 1
# 667 "project/goaccess/src/websocket.c" 3 4
 , __builtin_object_size (
# 667 "project/goaccess/src/websocket.c"
 str + curlen
# 667 "project/goaccess/src/websocket.c" 3 4
 , 0))
# 667 "project/goaccess/src/websocket.c"
                                       ;
  *dest = str;
}
# 992 "project/goaccess/src/websocket.c"
static void *
ws_get_raddr (struct sockaddr *sa) {
  if (sa->sa_family == 
# 994 "project/goaccess/src/websocket.c" 3 4
                      2
# 994 "project/goaccess/src/websocket.c"
                             )
    return &(((struct sockaddr_in *) (void *) sa)->sin_addr);

  return &(((struct sockaddr_in6 *) (void *) sa)->sin6_addr);
}


void
set_nonblocking (int sock) {
  if (fcntl (sock, 
# 1003 "project/goaccess/src/websocket.c" 3 4
                  4
# 1003 "project/goaccess/src/websocket.c"
                         , fcntl (sock, 
# 1003 "project/goaccess/src/websocket.c" 3 4
                                        3
# 1003 "project/goaccess/src/websocket.c"
                                               , 0) | 
# 1003 "project/goaccess/src/websocket.c" 3 4
                                                      0x00000004
# 1003 "project/goaccess/src/websocket.c"
                                                                ) == -1)
    do { (void) endwin (); fprintf (
# 1004 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 1004 "project/goaccess/src/websocket.c"
   , "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:16"); fprintf (
# 1004 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 1004 "project/goaccess/src/websocket.c"
   , "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (
# 1004 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 1004 "project/goaccess/src/websocket.c"
   , "\nFatal error has occurred"); fprintf (
# 1004 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 1004 "project/goaccess/src/websocket.c"
   , "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/websocket.c", __FUNCTION__, 1004); fprintf (
# 1004 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 1004 "project/goaccess/src/websocket.c"
   , "Unable to set socket as non-blocking: %s.", strerror (
# 1004 "project/goaccess/src/websocket.c" 3 4
   (*__error())
# 1004 "project/goaccess/src/websocket.c"
   )); fprintf (
# 1004 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 1004 "project/goaccess/src/websocket.c"
   , "\n\n"); do { dbg_fprintf ("Unable to set socket as non-blocking: %s.", strerror (
# 1004 "project/goaccess/src/websocket.c" 3 4
   (*__error())
# 1004 "project/goaccess/src/websocket.c"
   )); } while (0); exit(
# 1004 "project/goaccess/src/websocket.c" 3 4
   1
# 1004 "project/goaccess/src/websocket.c"
   ); } while (0);
}





static int
accept_client (int listener, GSLList ** colist) {
  WSClient *client;
  struct sockaddr_storage raddr;
  int newfd;
  const void *src = 
# 1016 "project/goaccess/src/websocket.c" 3 4
                   ((void *)0)
# 1016 "project/goaccess/src/websocket.c"
                       ;
  socklen_t alen;

  alen = sizeof (raddr);
  if ((newfd = accept (listener, (struct sockaddr *) &raddr, &alen)) == -1)
    do { (void) endwin (); fprintf (
# 1021 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 1021 "project/goaccess/src/websocket.c"
   , "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:16"); fprintf (
# 1021 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 1021 "project/goaccess/src/websocket.c"
   , "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (
# 1021 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 1021 "project/goaccess/src/websocket.c"
   , "\nFatal error has occurred"); fprintf (
# 1021 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 1021 "project/goaccess/src/websocket.c"
   , "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/websocket.c", __FUNCTION__, 1021); fprintf (
# 1021 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 1021 "project/goaccess/src/websocket.c"
   , "Unable to set accept: %s.", strerror (
# 1021 "project/goaccess/src/websocket.c" 3 4
   (*__error())
# 1021 "project/goaccess/src/websocket.c"
   )); fprintf (
# 1021 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 1021 "project/goaccess/src/websocket.c"
   , "\n\n"); do { dbg_fprintf ("Unable to set accept: %s.", strerror (
# 1021 "project/goaccess/src/websocket.c" 3 4
   (*__error())
# 1021 "project/goaccess/src/websocket.c"
   )); } while (0); exit(
# 1021 "project/goaccess/src/websocket.c" 3 4
   1
# 1021 "project/goaccess/src/websocket.c"
   ); } while (0);

  if (newfd == -1) {
    do { if (0) dbg_printf ("Unable to accept: %s.", strerror (
# 1024 "project/goaccess/src/websocket.c" 3 4
   (*__error())
# 1024 "project/goaccess/src/websocket.c"
   )); } while (0);
    return newfd;
  }
  src = ws_get_raddr ((struct sockaddr *) &raddr);


  client = new_wsclient ();
  client->listener = newfd;
  inet_ntop (raddr.ss_family, src, client->remote_ip, 
# 1032 "project/goaccess/src/websocket.c" 3 4
                                                     46
# 1032 "project/goaccess/src/websocket.c"
                                                                     );


  if (*colist == 
# 1035 "project/goaccess/src/websocket.c" 3 4
                ((void *)0)
# 1035 "project/goaccess/src/websocket.c"
                    )
    *colist = list_create (client);
  else
    *colist = list_insert_prepend (*colist, client);


  set_nonblocking (client->listener);


  set_pollfd (client->listener, 
# 1044 "project/goaccess/src/websocket.c" 3 4
                               0x0001
# 1044 "project/goaccess/src/websocket.c"
                                     );

  return newfd;
}





static const char *
ws_get_method (const char *token) {
  const char *lookfor = 
# 1055 "project/goaccess/src/websocket.c" 3 4
                       ((void *)0)
# 1055 "project/goaccess/src/websocket.c"
                           ;

  if ((lookfor = "GET", !memcmp (token, "GET ", 4)) ||
      (lookfor = "get", !memcmp (token, "get ", 4)))
    return lookfor;
  return 
# 1060 "project/goaccess/src/websocket.c" 3 4
        ((void *)0)
# 1060 "project/goaccess/src/websocket.c"
            ;
}






static char *
ws_parse_request (char *line, char **method, char **protocol) {
  const char *meth;
  char *req = 
# 1071 "project/goaccess/src/websocket.c" 3 4
             ((void *)0)
# 1071 "project/goaccess/src/websocket.c"
                 , *request = 
# 1071 "project/goaccess/src/websocket.c" 3 4
                              ((void *)0)
# 1071 "project/goaccess/src/websocket.c"
                                  , *proto = 
# 1071 "project/goaccess/src/websocket.c" 3 4
                                             ((void *)0)
# 1071 "project/goaccess/src/websocket.c"
                                                 ;
  ptrdiff_t rlen;

  if ((meth = ws_get_method (line)) == 
# 1074 "project/goaccess/src/websocket.c" 3 4
                                      ((void *)0)
# 1074 "project/goaccess/src/websocket.c"
                                          ) {
    return 
# 1075 "project/goaccess/src/websocket.c" 3 4
          ((void *)0)
# 1075 "project/goaccess/src/websocket.c"
              ;
  } else {
    req = line + strlen (meth);
    if ((proto = strstr (line, " HTTP/1.0")) == 
# 1078 "project/goaccess/src/websocket.c" 3 4
                                               ((void *)0) 
# 1078 "project/goaccess/src/websocket.c"
                                                    &&
        (proto = strstr (line, " HTTP/1.1")) == 
# 1079 "project/goaccess/src/websocket.c" 3 4
                                               ((void *)0)
# 1079 "project/goaccess/src/websocket.c"
                                                   )
      return 
# 1080 "project/goaccess/src/websocket.c" 3 4
            ((void *)0)
# 1080 "project/goaccess/src/websocket.c"
                ;

    req++;
    if ((rlen = proto - req) <= 0)
      return 
# 1084 "project/goaccess/src/websocket.c" 3 4
            ((void *)0)
# 1084 "project/goaccess/src/websocket.c"
                ;

    request = xmalloc (rlen + 1);
    
# 1087 "project/goaccess/src/websocket.c" 3 4
   __builtin___strncpy_chk (
# 1087 "project/goaccess/src/websocket.c"
   request
# 1087 "project/goaccess/src/websocket.c" 3 4
   , 
# 1087 "project/goaccess/src/websocket.c"
   req, rlen
# 1087 "project/goaccess/src/websocket.c" 3 4
   , __builtin_object_size (
# 1087 "project/goaccess/src/websocket.c"
   request
# 1087 "project/goaccess/src/websocket.c" 3 4
   , 2 > 1 ? 1 : 0))
# 1087 "project/goaccess/src/websocket.c"
                               ;
    request[rlen] = 0;

    (*method) = strtoupper (xstrdup (meth));
    (*protocol) = strtoupper (xstrdup (++proto));
  }

  return request;
}



static void
ws_set_header_key_value (WSHeaders * headers, char *key, char *value) {
  if (strcasecmp ("Host", key) == 0)
    headers->host = xstrdup (value);
  else if (strcasecmp ("Origin", key) == 0)
    headers->origin = xstrdup (value);
  else if (strcasecmp ("Upgrade", key) == 0)
    headers->upgrade = xstrdup (value);
  else if (strcasecmp ("Connection", key) == 0)
    headers->connection = xstrdup (value);
  else if (strcasecmp ("Sec-WebSocket-Protocol", key) == 0)
    headers->ws_protocol = xstrdup (value);
  else if (strcasecmp ("Sec-WebSocket-Key", key) == 0)
    headers->ws_key = xstrdup (value);
  else if (strcasecmp ("Sec-WebSocket-Version", key) == 0)
    headers->ws_sock_ver = xstrdup (value);
  else if (strcasecmp ("User-Agent", key) == 0)
    headers->agent = xstrdup (value);
  else if (strcasecmp ("Referer", key) == 0)
    headers->referer = xstrdup (value);
}






static int
ws_verify_req_headers (WSHeaders * headers) {
  if (!headers->host)
    return 1;
  if (!headers->method)
    return 1;
  if (!headers->protocol)
    return 1;
  if (!headers->path)
    return 1;
  if (wsconfig.origin && !headers->origin)
    return 1;
  if (wsconfig.origin && strcasecmp (wsconfig.origin, headers->origin) != 0)
    return 1;
  if (!headers->connection)
    return 1;
  if (!headers->ws_key)
    return 1;
  if (!headers->ws_sock_ver)
    return 1;
  return 0;
}





static int
ws_set_header_fields (char *line, WSHeaders * headers) {
  char *path = 
# 1155 "project/goaccess/src/websocket.c" 3 4
              ((void *)0)
# 1155 "project/goaccess/src/websocket.c"
                  , *method = 
# 1155 "project/goaccess/src/websocket.c" 3 4
                              ((void *)0)
# 1155 "project/goaccess/src/websocket.c"
                                  , *proto = 
# 1155 "project/goaccess/src/websocket.c" 3 4
                                             ((void *)0)
# 1155 "project/goaccess/src/websocket.c"
                                                 , *p, *value;

  if (line[0] == '\n' || line[0] == '\r')
    return 1;

  if ((strstr (line, "GET ")) || (strstr (line, "get "))) {
    if ((path = ws_parse_request (line, &method, &proto)) == 
# 1161 "project/goaccess/src/websocket.c" 3 4
                                                            ((void *)0)
# 1161 "project/goaccess/src/websocket.c"
                                                                )
      return 1;
    headers->path = path;
    headers->method = method;
    headers->protocol = proto;

    return 0;
  }

  if ((p = strchr (line, ':')) == 
# 1170 "project/goaccess/src/websocket.c" 3 4
                                 ((void *)0)
# 1170 "project/goaccess/src/websocket.c"
                                     )
    return 1;

  value = p + 1;
  while (p != line && isspace ((unsigned char) *(p - 1)))
    p--;

  if (p == line)
    return 1;

  *p = '\0';
  if (strpbrk (line, " \t") != 
# 1181 "project/goaccess/src/websocket.c" 3 4
                              ((void *)0)
# 1181 "project/goaccess/src/websocket.c"
                                  ) {
    *p = ' ';
    return 1;
  }
  while (isspace ((unsigned char) *value))
    value++;

  ws_set_header_key_value (headers, line, value);

  return 0;
}






static int
parse_headers (WSHeaders * headers) {
  char *tmp = 
# 1200 "project/goaccess/src/websocket.c" 3 4
             ((void *)0)
# 1200 "project/goaccess/src/websocket.c"
                 ;
  const char *buffer = headers->buf;
  const char *line = buffer, *next = 
# 1202 "project/goaccess/src/websocket.c" 3 4
                                    ((void *)0)
# 1202 "project/goaccess/src/websocket.c"
                                        ;
  int len = 0;

  while (line) {
    if ((next = strstr (line, "\r\n")) != 
# 1206 "project/goaccess/src/websocket.c" 3 4
                                         ((void *)0)
# 1206 "project/goaccess/src/websocket.c"
                                             )
      len = (next - line);
    else
      len = strlen (line);

    if (len <= 0)
      return 1;

    tmp = xmalloc (len + 1);
    
# 1215 "project/goaccess/src/websocket.c" 3 4
   __builtin___memcpy_chk (
# 1215 "project/goaccess/src/websocket.c"
   tmp
# 1215 "project/goaccess/src/websocket.c" 3 4
   , 
# 1215 "project/goaccess/src/websocket.c"
   line, len
# 1215 "project/goaccess/src/websocket.c" 3 4
   , __builtin_object_size (
# 1215 "project/goaccess/src/websocket.c"
   tmp
# 1215 "project/goaccess/src/websocket.c" 3 4
   , 0))
# 1215 "project/goaccess/src/websocket.c"
                          ;
    tmp[len] = '\0';

    if (ws_set_header_fields (tmp, headers) == 1) {
      free (tmp);
      return 1;
    }

    free (tmp);
    line = next ? (next + 2) : 
# 1224 "project/goaccess/src/websocket.c" 3 4
                              ((void *)0)
# 1224 "project/goaccess/src/websocket.c"
                                  ;

    if (next && strcmp (next, "\r\n\r\n") == 0)
      break;
  }

  return 0;
}


static void
ws_queue_sockbuf (WSClient * client, const char *buffer, int len, int bytes) {
  WSQueue *queue = xcalloc (1, sizeof (WSQueue));

  if (bytes < 1)
    bytes = 0;

  queue->queued = xcalloc (len - bytes, sizeof (char));
  
# 1242 "project/goaccess/src/websocket.c" 3 4
 __builtin___memcpy_chk (
# 1242 "project/goaccess/src/websocket.c"
 queue->queued
# 1242 "project/goaccess/src/websocket.c" 3 4
 , 
# 1242 "project/goaccess/src/websocket.c"
 buffer + bytes, len - bytes
# 1242 "project/goaccess/src/websocket.c" 3 4
 , __builtin_object_size (
# 1242 "project/goaccess/src/websocket.c"
 queue->queued
# 1242 "project/goaccess/src/websocket.c" 3 4
 , 0))
# 1242 "project/goaccess/src/websocket.c"
                                                    ;
  queue->qlen = len - bytes;
  client->sockqueue = queue;

  client->status |= WS_SENDING;
  set_pollfd (client->listener, 
# 1247 "project/goaccess/src/websocket.c" 3 4
                               0x0001 
# 1247 "project/goaccess/src/websocket.c"
                                      | 
# 1247 "project/goaccess/src/websocket.c" 3 4
                                        0x0004
# 1247 "project/goaccess/src/websocket.c"
                                               );
}






static int
read_plain_socket (WSClient * client, char *buffer, int size) {
  int bytes = 0;

  bytes = recv (client->listener, buffer, size, 0);

  if (bytes == -1 && (
# 1261 "project/goaccess/src/websocket.c" 3 4
                     (*__error()) 
# 1261 "project/goaccess/src/websocket.c"
                           == 
# 1261 "project/goaccess/src/websocket.c" 3 4
                              35 
# 1261 "project/goaccess/src/websocket.c"
                                     || 
# 1261 "project/goaccess/src/websocket.c" 3 4
                                        (*__error()) 
# 1261 "project/goaccess/src/websocket.c"
                                              == 
# 1261 "project/goaccess/src/websocket.c" 3 4
                                                 35
# 1261 "project/goaccess/src/websocket.c"
                                                            ))
    return ws_set_status (client, WS_READING, bytes);
  else if (bytes == -1 || bytes == 0)
    return ws_set_status (client, WS_ERR | WS_CLOSE, bytes);

  return bytes;
}






static int
read_socket (WSClient * client, char *buffer, int size) {






  return read_plain_socket (client, buffer, size);

}

static int
send_plain_buffer (WSClient * client, const char *buffer, int len) {
  return send (client->listener, buffer, len, 0);
}

static int
send_buffer (WSClient * client, const char *buffer, int len) {






  return send_plain_buffer (client, buffer, len);

}





static int
ws_respond_data (WSClient * client, const char *buffer, int len) {
  int bytes = 0;

  bytes = send_buffer (client, buffer, len);
  if (bytes == -1 && 
# 1312 "project/goaccess/src/websocket.c" 3 4
                    (*__error()) 
# 1312 "project/goaccess/src/websocket.c"
                          == 
# 1312 "project/goaccess/src/websocket.c" 3 4
                             32
# 1312 "project/goaccess/src/websocket.c"
                                  )
    return ws_set_status (client, WS_ERR | WS_CLOSE, bytes);


  if (bytes < len || (bytes == -1 && (
# 1316 "project/goaccess/src/websocket.c" 3 4
                                     (*__error()) 
# 1316 "project/goaccess/src/websocket.c"
                                           == 
# 1316 "project/goaccess/src/websocket.c" 3 4
                                              35 
# 1316 "project/goaccess/src/websocket.c"
                                                     || 
# 1316 "project/goaccess/src/websocket.c" 3 4
                                                        (*__error()) 
# 1316 "project/goaccess/src/websocket.c"
                                                              == 
# 1316 "project/goaccess/src/websocket.c" 3 4
                                                                 35
# 1316 "project/goaccess/src/websocket.c"
                                                                            )))
    ws_queue_sockbuf (client, buffer, len, bytes);

  return bytes;
}





static int
ws_respond_cache (WSClient * client) {
  WSQueue *queue = client->sockqueue;
  int bytes = 0;

  bytes = send_buffer (client, queue->queued, queue->qlen);
  if (bytes == -1 && 
# 1332 "project/goaccess/src/websocket.c" 3 4
                    (*__error()) 
# 1332 "project/goaccess/src/websocket.c"
                          == 
# 1332 "project/goaccess/src/websocket.c" 3 4
                             32
# 1332 "project/goaccess/src/websocket.c"
                                  )
    return ws_set_status (client, WS_ERR | WS_CLOSE, bytes);

  if (bytes == -1 && (
# 1335 "project/goaccess/src/websocket.c" 3 4
                     (*__error()) 
# 1335 "project/goaccess/src/websocket.c"
                           == 
# 1335 "project/goaccess/src/websocket.c" 3 4
                              35 
# 1335 "project/goaccess/src/websocket.c"
                                     || 
# 1335 "project/goaccess/src/websocket.c" 3 4
                                        (*__error()) 
# 1335 "project/goaccess/src/websocket.c"
                                              == 
# 1335 "project/goaccess/src/websocket.c" 3 4
                                                 35
# 1335 "project/goaccess/src/websocket.c"
                                                            ))
    return bytes;

  if (chop_nchars (queue->queued, bytes, queue->qlen) == 0)
    ws_clear_queue (client);
  else
    queue->qlen -= bytes;

  return bytes;
}





static int
ws_realloc_send_buf (WSClient * client, const char *buf, int len) {
  WSQueue *queue = client->sockqueue;
  char *tmp = 
# 1353 "project/goaccess/src/websocket.c" 3 4
             ((void *)0)
# 1353 "project/goaccess/src/websocket.c"
                 ;
  int newlen = 0;

  newlen = queue->qlen + len;
  tmp = realloc (queue->queued, newlen);
  if (tmp == 
# 1358 "project/goaccess/src/websocket.c" 3 4
            ((void *)0) 
# 1358 "project/goaccess/src/websocket.c"
                 && newlen > 0) {
    ws_clear_queue (client);
    return ws_set_status (client, WS_ERR | WS_CLOSE, 1);
  }
  queue->queued = tmp;
  
# 1363 "project/goaccess/src/websocket.c" 3 4
 __builtin___memcpy_chk (
# 1363 "project/goaccess/src/websocket.c"
 queue->queued + queue->qlen
# 1363 "project/goaccess/src/websocket.c" 3 4
 , 
# 1363 "project/goaccess/src/websocket.c"
 buf, len
# 1363 "project/goaccess/src/websocket.c" 3 4
 , __builtin_object_size (
# 1363 "project/goaccess/src/websocket.c"
 queue->queued + queue->qlen
# 1363 "project/goaccess/src/websocket.c" 3 4
 , 0))
# 1363 "project/goaccess/src/websocket.c"
                                               ;
  queue->qlen += len;



  if (queue->qlen >= 2097152)
    client->status |= WS_THROTTLING;

  return 0;
}





static int
ws_respond (WSClient * client, const char *buffer, int len) {
  int bytes = 0;


  if (client->sockqueue == 
# 1383 "project/goaccess/src/websocket.c" 3 4
                          ((void *)0)
# 1383 "project/goaccess/src/websocket.c"
                              )
    bytes = ws_respond_data (client, buffer, len);


  else if (client->sockqueue != 
# 1387 "project/goaccess/src/websocket.c" 3 4
                               ((void *)0) 
# 1387 "project/goaccess/src/websocket.c"
                                    && buffer != 
# 1387 "project/goaccess/src/websocket.c" 3 4
                                                 ((void *)0) 
# 1387 "project/goaccess/src/websocket.c"
                                                      && !(client->status & WS_THROTTLING)) {
    if (ws_realloc_send_buf (client, buffer, len) == 1)
      return bytes;
  }

  else {
    bytes = ws_respond_cache (client);
  }

  return bytes;
}





static int
ws_send_frame (WSClient * client, WSOpcode opcode, const char *p, int sz) {
  unsigned char buf[32] = { 0 };
  char *frm = 
# 1406 "project/goaccess/src/websocket.c" 3 4
             ((void *)0)
# 1406 "project/goaccess/src/websocket.c"
                 ;
  uint64_t payloadlen = 0, u64;
  int hsize = 2;

  if (sz < 126) {
    payloadlen = sz;
  } else if (sz < (1 << 16)) {
    payloadlen = 126;
    hsize += 2;
  } else {
    payloadlen = 127;
    hsize += 8;
  }

  buf[0] = 0x80 | ((uint8_t) opcode);
  switch (payloadlen) {
  case 126:
    buf[1] = 126;
    buf[2] = (sz & 0xff00) >> 8;
    buf[3] = (sz & 0x00ff) >> 0;
    break;
  case 127:
    buf[1] = 127;
    u64 = 
# 1429 "project/goaccess/src/websocket.c" 3 4
         (__builtin_constant_p(
# 1429 "project/goaccess/src/websocket.c"
         sz
# 1429 "project/goaccess/src/websocket.c" 3 4
         ) ? ((__uint64_t)((((__uint64_t)(
# 1429 "project/goaccess/src/websocket.c"
         sz
# 1429 "project/goaccess/src/websocket.c" 3 4
         ) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)(
# 1429 "project/goaccess/src/websocket.c"
         sz
# 1429 "project/goaccess/src/websocket.c" 3 4
         ) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)(
# 1429 "project/goaccess/src/websocket.c"
         sz
# 1429 "project/goaccess/src/websocket.c" 3 4
         ) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)(
# 1429 "project/goaccess/src/websocket.c"
         sz
# 1429 "project/goaccess/src/websocket.c" 3 4
         ) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)(
# 1429 "project/goaccess/src/websocket.c"
         sz
# 1429 "project/goaccess/src/websocket.c" 3 4
         ) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)(
# 1429 "project/goaccess/src/websocket.c"
         sz
# 1429 "project/goaccess/src/websocket.c" 3 4
         ) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)(
# 1429 "project/goaccess/src/websocket.c"
         sz
# 1429 "project/goaccess/src/websocket.c" 3 4
         ) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)(
# 1429 "project/goaccess/src/websocket.c"
         sz
# 1429 "project/goaccess/src/websocket.c" 3 4
         ) & 0x00000000000000ffULL) << 56))) : _OSSwapInt64(
# 1429 "project/goaccess/src/websocket.c"
         sz
# 1429 "project/goaccess/src/websocket.c" 3 4
         ))
# 1429 "project/goaccess/src/websocket.c"
                     ;
    
# 1430 "project/goaccess/src/websocket.c" 3 4
   __builtin___memcpy_chk (
# 1430 "project/goaccess/src/websocket.c"
   buf + 2
# 1430 "project/goaccess/src/websocket.c" 3 4
   , 
# 1430 "project/goaccess/src/websocket.c"
   &u64, sizeof (uint64_t)
# 1430 "project/goaccess/src/websocket.c" 3 4
   , __builtin_object_size (
# 1430 "project/goaccess/src/websocket.c"
   buf + 2
# 1430 "project/goaccess/src/websocket.c" 3 4
   , 0))
# 1430 "project/goaccess/src/websocket.c"
                                            ;
    break;
  default:
    buf[1] = (sz & 0xff);
  }
  frm = xcalloc (hsize + sz, sizeof (unsigned char));
  
# 1436 "project/goaccess/src/websocket.c" 3 4
 __builtin___memcpy_chk (
# 1436 "project/goaccess/src/websocket.c"
 frm
# 1436 "project/goaccess/src/websocket.c" 3 4
 , 
# 1436 "project/goaccess/src/websocket.c"
 buf, hsize
# 1436 "project/goaccess/src/websocket.c" 3 4
 , __builtin_object_size (
# 1436 "project/goaccess/src/websocket.c"
 frm
# 1436 "project/goaccess/src/websocket.c" 3 4
 , 0))
# 1436 "project/goaccess/src/websocket.c"
                         ;
  if (p != 
# 1437 "project/goaccess/src/websocket.c" 3 4
          ((void *)0) 
# 1437 "project/goaccess/src/websocket.c"
               && sz > 0)
    
# 1438 "project/goaccess/src/websocket.c" 3 4
   __builtin___memcpy_chk (
# 1438 "project/goaccess/src/websocket.c"
   frm + hsize
# 1438 "project/goaccess/src/websocket.c" 3 4
   , 
# 1438 "project/goaccess/src/websocket.c"
   p, sz
# 1438 "project/goaccess/src/websocket.c" 3 4
   , __builtin_object_size (
# 1438 "project/goaccess/src/websocket.c"
   frm + hsize
# 1438 "project/goaccess/src/websocket.c" 3 4
   , 0))
# 1438 "project/goaccess/src/websocket.c"
                              ;

  ws_respond (client, frm, hsize + sz);
  free (frm);

  return 0;
}




static int
ws_error (WSClient * client, unsigned short code, const char *err) {
  unsigned int len;
  unsigned short code_be;
  char buf[128] = { 0 };

  len = 2;
  code_be = 
# 1456 "project/goaccess/src/websocket.c" 3 4
           ((__uint16_t)(__builtin_constant_p(
# 1456 "project/goaccess/src/websocket.c"
           code
# 1456 "project/goaccess/src/websocket.c" 3 4
           ) ? ((__uint16_t)((((__uint16_t)(
# 1456 "project/goaccess/src/websocket.c"
           code
# 1456 "project/goaccess/src/websocket.c" 3 4
           ) & 0xff00U) >> 8) | (((__uint16_t)(
# 1456 "project/goaccess/src/websocket.c"
           code
# 1456 "project/goaccess/src/websocket.c" 3 4
           ) & 0x00ffU) << 8))) : _OSSwapInt16(
# 1456 "project/goaccess/src/websocket.c"
           code
# 1456 "project/goaccess/src/websocket.c" 3 4
           )))
# 1456 "project/goaccess/src/websocket.c"
                         ;
  
# 1457 "project/goaccess/src/websocket.c" 3 4
 __builtin___memcpy_chk (
# 1457 "project/goaccess/src/websocket.c"
 buf
# 1457 "project/goaccess/src/websocket.c" 3 4
 , 
# 1457 "project/goaccess/src/websocket.c"
 &code_be, 2
# 1457 "project/goaccess/src/websocket.c" 3 4
 , __builtin_object_size (
# 1457 "project/goaccess/src/websocket.c"
 buf
# 1457 "project/goaccess/src/websocket.c" 3 4
 , 0))
# 1457 "project/goaccess/src/websocket.c"
                          ;
  if (err)
    len += 
# 1459 "project/goaccess/src/websocket.c" 3 4
          __builtin___snprintf_chk (
# 1459 "project/goaccess/src/websocket.c"
          buf + 2
# 1459 "project/goaccess/src/websocket.c" 3 4
          , 
# 1459 "project/goaccess/src/websocket.c"
          sizeof buf - 4
# 1459 "project/goaccess/src/websocket.c" 3 4
          , 0, __builtin_object_size (
# 1459 "project/goaccess/src/websocket.c"
          buf + 2
# 1459 "project/goaccess/src/websocket.c" 3 4
          , 2 > 1 ? 1 : 0), 
# 1459 "project/goaccess/src/websocket.c"
          "%s", err
# 1459 "project/goaccess/src/websocket.c" 3 4
          )
# 1459 "project/goaccess/src/websocket.c"
                                                       ;

  return ws_send_frame (client, WS_OPCODE_CLOSE, buf, len);
}




static void
access_log (WSClient * client, int status_code) {
  WSHeaders *hdrs = client->headers;
  char buf[64] = { 0 };
  uint32_t elapsed = 0;
  struct timeval tv;
  struct tm time;
  char *req = 
# 1474 "project/goaccess/src/websocket.c" 3 4
             ((void *)0)
# 1474 "project/goaccess/src/websocket.c"
                 , *ref = 
# 1474 "project/goaccess/src/websocket.c" 3 4
                          ((void *)0)
# 1474 "project/goaccess/src/websocket.c"
                              , *ua = 
# 1474 "project/goaccess/src/websocket.c" 3 4
                                      ((void *)0)
# 1474 "project/goaccess/src/websocket.c"
                                          ;

  gettimeofday (&tv, 
# 1476 "project/goaccess/src/websocket.c" 3 4
                    ((void *)0)
# 1476 "project/goaccess/src/websocket.c"
                        );
  strftime (buf, sizeof (buf) - 1, "[%d/%b/%Y:%H:%M:%S %z]", localtime_r (&tv.tv_sec, &time));

  elapsed = (client->end_proc.tv_sec - client->start_proc.tv_sec) * 1000.0;
  elapsed += (client->end_proc.tv_usec - client->start_proc.tv_usec) / 1000.0;

  req = escape_http_request (hdrs->path);
  ref = escape_http_request (hdrs->referer);
  ua = escape_http_request (hdrs->agent);

  do { access_fprintf ("%s ", client->remote_ip); } while (0);
  do { access_fprintf ("- - "); } while (0);
  do { access_fprintf ("%s ", buf); } while (0);
  do { access_fprintf ("\"%s ", hdrs->method); } while (0);
  do { access_fprintf ("%s ", req ? req : "-"); } while (0);
  do { access_fprintf ("%s\" ", hdrs->protocol); } while (0);
  do { access_fprintf ("%d ", status_code); } while (0);
  do { access_fprintf ("%d ", hdrs->buflen); } while (0);
  do { access_fprintf ("\"%s\" ", ref ? ref : "-"); } while (0);
  do { access_fprintf ("\"%s\" ", ua ? ua : "-"); } while (0);
  do { access_fprintf ("%u\n", elapsed); } while (0);

  if (req)
    free (req);
  if (ref)
    free (ref);
  if (ua)
    free (ua);
}




static int
http_error (WSClient * client, const char *buffer) {

  gettimeofday (&client->end_proc, 
# 1512 "project/goaccess/src/websocket.c" 3 4
                                  ((void *)0)
# 1512 "project/goaccess/src/websocket.c"
                                      );
  if (wsconfig.accesslog)
    access_log (client, 400);

  return ws_respond (client, buffer, strlen (buffer));
}


static void
ws_sha1_digest (char *s, int len, unsigned char *digest) {
  SHA1_CTX sha;

  SHA1Init (&sha);
  SHA1Update (&sha, (uint8_t *) s, len);
  SHA1Final (digest, &sha);
}


static void
ws_set_handshake_headers (WSHeaders * headers) {
  size_t klen = strlen (headers->ws_key);
  size_t mlen = strlen ("258EAFA5-E914-47DA-95CA-C5AB0DC85B11");
  size_t len = klen + mlen;
  char *s = xmalloc (klen + mlen + 1);
  uint8_t digest[20];

  
# 1538 "project/goaccess/src/websocket.c" 3 4
 __builtin___memset_chk (
# 1538 "project/goaccess/src/websocket.c"
 digest
# 1538 "project/goaccess/src/websocket.c" 3 4
 , 
# 1538 "project/goaccess/src/websocket.c"
 0, sizeof *digest
# 1538 "project/goaccess/src/websocket.c" 3 4
 , __builtin_object_size (
# 1538 "project/goaccess/src/websocket.c"
 digest
# 1538 "project/goaccess/src/websocket.c" 3 4
 , 0))
# 1538 "project/goaccess/src/websocket.c"
                                   ;

  
# 1540 "project/goaccess/src/websocket.c" 3 4
 __builtin___memcpy_chk (
# 1540 "project/goaccess/src/websocket.c"
 s
# 1540 "project/goaccess/src/websocket.c" 3 4
 , 
# 1540 "project/goaccess/src/websocket.c"
 headers->ws_key, klen
# 1540 "project/goaccess/src/websocket.c" 3 4
 , __builtin_object_size (
# 1540 "project/goaccess/src/websocket.c"
 s
# 1540 "project/goaccess/src/websocket.c" 3 4
 , 0))
# 1540 "project/goaccess/src/websocket.c"
                                  ;
  
# 1541 "project/goaccess/src/websocket.c" 3 4
 __builtin___memcpy_chk (
# 1541 "project/goaccess/src/websocket.c"
 s + klen
# 1541 "project/goaccess/src/websocket.c" 3 4
 , 
# 1541 "project/goaccess/src/websocket.c"
 "258EAFA5-E914-47DA-95CA-C5AB0DC85B11", mlen + 1
# 1541 "project/goaccess/src/websocket.c" 3 4
 , __builtin_object_size (
# 1541 "project/goaccess/src/websocket.c"
 s + klen
# 1541 "project/goaccess/src/websocket.c" 3 4
 , 0))
# 1541 "project/goaccess/src/websocket.c"
                                          ;

  ws_sha1_digest (s, len, digest);


  headers->ws_accept = base64_encode ((unsigned char *) digest, sizeof (digest));
  headers->ws_resp = xstrdup ("HTTP/1.1 101 Switching Protocols");

  if (!headers->upgrade)
    headers->upgrade = xstrdup ("websocket");
  if (!headers->connection)
    headers->connection = xstrdup ("Upgrade");

  free (s);
}




static int
ws_send_handshake_headers (WSClient * client, WSHeaders * headers) {
  int bytes = 0;
  char *str = xstrdup ("");

  ws_append_str (&str, headers->ws_resp);
  ws_append_str (&str, "\r\n");

  ws_append_str (&str, "Upgrade: ");
  ws_append_str (&str, headers->upgrade);
  ws_append_str (&str, "\r\n");

  ws_append_str (&str, "Connection: ");
  ws_append_str (&str, headers->connection);
  ws_append_str (&str, "\r\n");

  ws_append_str (&str, "Sec-WebSocket-Accept: ");
  ws_append_str (&str, headers->ws_accept);
  ws_append_str (&str, "\r\n" "\r\n");

  bytes = ws_respond (client, str, strlen (str));
  free (str);

  return bytes;
}





static int
ws_get_handshake (WSClient * client, WSServer * server) {
  int bytes = 0, readh = 0;
  char *buf = 
# 1593 "project/goaccess/src/websocket.c" 3 4
             ((void *)0)
# 1593 "project/goaccess/src/websocket.c"
                 ;

  if (client->headers == 
# 1595 "project/goaccess/src/websocket.c" 3 4
                        ((void *)0)
# 1595 "project/goaccess/src/websocket.c"
                            )
    client->headers = new_wsheader ();

  buf = client->headers->buf;
  readh = client->headers->buflen;

  if ((bytes = read_socket (client, buf + readh, 8192 - readh)) < 1) {
    if (client->status & WS_CLOSE)
      http_error (client, "HTTP/1.1 400 Invalid Request\r\n\r\n");
    return bytes;
  }
  client->headers->buflen += bytes;

  buf[client->headers->buflen] = '\0';


  if (strstr (buf, "\r\n\r\n") == 
# 1611 "project/goaccess/src/websocket.c" 3 4
                                 ((void *)0)
# 1611 "project/goaccess/src/websocket.c"
                                     ) {
    if (strlen (buf) < 8192)
      return ws_set_status (client, WS_READING, bytes);

    http_error (client, "HTTP/1.1 400 Invalid Request\r\n\r\n");
    return ws_set_status (client, WS_CLOSE, bytes);
  }


  if (parse_headers (client->headers) != 0) {
    http_error (client, "HTTP/1.1 400 Invalid Request\r\n\r\n");
    return ws_set_status (client, WS_CLOSE, bytes);
  }


  if (ws_verify_req_headers (client->headers) != 0) {
    http_error (client, "HTTP/1.1 400 Invalid Request\r\n\r\n");
    return ws_set_status (client, WS_CLOSE, bytes);
  }

  ws_set_handshake_headers (client->headers);


  ws_send_handshake_headers (client, client->headers);


  if (server->onopen && wsconfig.strict && !wsconfig.echomode)
    server->onopen (server->pipeout, client);
  client->headers->reading = 0;


  gettimeofday (&client->end_proc, 
# 1642 "project/goaccess/src/websocket.c" 3 4
                                  ((void *)0)
# 1642 "project/goaccess/src/websocket.c"
                                      );
  if (wsconfig.accesslog)
    access_log (client, 101);
  do { if (0) dbg_printf ("Active: %d\n", list_count (server->colist)); } while (0);

  return ws_set_status (client, WS_OK, bytes);
}




int
ws_send_data (WSClient * client, WSOpcode opcode, const char *p, int sz) {
  char *buf = 
# 1655 "project/goaccess/src/websocket.c" 3 4
             ((void *)0)
# 1655 "project/goaccess/src/websocket.c"
                 ;

  buf = sanitize_utf8 (p, sz);
  ws_send_frame (client, opcode, buf, sz);
  free (buf);

  return 0;
}




static int
ws_read_header (WSClient * client, WSFrame * frm, int pos, int need) {
  char *buf = frm->buf;
  int bytes = 0;


  if ((bytes = read_socket (client, buf + pos, need)) < 1) {
    if (client->status & WS_CLOSE)
      ws_error (client, 1011, "Unable to read header");
    return bytes;
  }
  frm->buflen += bytes;
  frm->buf[frm->buflen] = '\0';

  return bytes;
}




static int
ws_read_payload (WSClient * client, WSMessage * msg, int pos, int need) {
  char *buf = msg->payload;
  int bytes = 0;


  if ((bytes = read_socket (client, buf + pos, need)) < 1) {
    if (client->status & WS_CLOSE)
      ws_error (client, 1011, "Unable to read payload");
    return bytes;
  }
  msg->buflen += bytes;
  msg->payloadsz += bytes;

  return bytes;
}




static int
ws_set_front_header_fields (WSClient * client) {
  WSFrame **frm = &client->frame;
  char *buf = (*frm)->buf;

  (*frm)->fin = (((*(buf)) >> 7) & 0x01);
  (*frm)->masking = (((*(buf + 1)) >> 7) & 0x01);
  (*frm)->opcode = ((*(buf)) & 0x0F);
  (*frm)->res = (((*(buf)) >> 6) & 0x01) || (((*(buf)) >> 5) & 0x01) || (((*(buf)) >> 4) & 0x01);


  if (!(*frm)->masking || (*frm)->res)
    return ws_set_status (client, WS_ERR | WS_CLOSE, 1);

  return 0;
}


static void
ws_unmask_payload (char *buf, int len, int offset, unsigned char mask[]) {
  int i, j = 0;


  for (i = offset; i < len; ++i, ++j) {
    buf[i] ^= mask[j % 4];
  }
}


static int
ws_handle_close (WSClient * client) {
  client->status = WS_ERR | WS_CLOSE;
  return ws_send_frame (client, WS_OPCODE_CLOSE, 
# 1739 "project/goaccess/src/websocket.c" 3 4
                                                ((void *)0)
# 1739 "project/goaccess/src/websocket.c"
                                                    , 0);
}




static int
ws_handle_err (WSClient * client, unsigned short code, WSStatus status, const char *m) {
  client->status = status;
  return ws_error (client, code, m);
}


static void
ws_handle_pong (WSClient * client) {
  WSFrame **frm = &client->frame;

  if (!(*frm)->fin) {
    ws_handle_err (client, 1002, WS_ERR | WS_CLOSE, 
# 1757 "project/goaccess/src/websocket.c" 3 4
                                                                 ((void *)0)
# 1757 "project/goaccess/src/websocket.c"
                                                                     );
    return;
  }
  ws_free_message (client);
}



static void
ws_handle_ping (WSClient * client) {
  WSFrame **frm = &client->frame;
  WSMessage **msg = &client->message;
  char *buf = 
# 1769 "project/goaccess/src/websocket.c" 3 4
             ((void *)0)
# 1769 "project/goaccess/src/websocket.c"
                 , *tmp = 
# 1769 "project/goaccess/src/websocket.c" 3 4
                          ((void *)0)
# 1769 "project/goaccess/src/websocket.c"
                              ;
  int pos = 0, len = (*frm)->payloadlen, newlen = 0;



  if (!(*frm)->fin) {
    ws_handle_err (client, 1002, WS_ERR | WS_CLOSE, 
# 1775 "project/goaccess/src/websocket.c" 3 4
                                                                 ((void *)0)
# 1775 "project/goaccess/src/websocket.c"
                                                                     );
    return;
  }



  if ((*frm)->payloadlen > 125) {
    ws_handle_err (client, 1002, WS_ERR | WS_CLOSE, 
# 1782 "project/goaccess/src/websocket.c" 3 4
                                                                 ((void *)0)
# 1782 "project/goaccess/src/websocket.c"
                                                                     );
    return;
  }


  if (len == 0) {
    ws_send_frame (client, WS_OPCODE_PONG, 
# 1788 "project/goaccess/src/websocket.c" 3 4
                                          ((void *)0)
# 1788 "project/goaccess/src/websocket.c"
                                              , 0);
    return;
  }


  pos = (*msg)->payloadsz - len;
  buf = xcalloc (len, sizeof (char));
  
# 1795 "project/goaccess/src/websocket.c" 3 4
 __builtin___memcpy_chk (
# 1795 "project/goaccess/src/websocket.c"
 buf
# 1795 "project/goaccess/src/websocket.c" 3 4
 , 
# 1795 "project/goaccess/src/websocket.c"
 (*msg)->payload + pos, len
# 1795 "project/goaccess/src/websocket.c" 3 4
 , __builtin_object_size (
# 1795 "project/goaccess/src/websocket.c"
 buf
# 1795 "project/goaccess/src/websocket.c" 3 4
 , 0))
# 1795 "project/goaccess/src/websocket.c"
                                         ;


  ws_unmask_payload (buf, len, 0, (*frm)->mask);


  newlen = (*msg)->payloadsz - len;
  tmp = realloc ((*msg)->payload, newlen);
  if (tmp == 
# 1803 "project/goaccess/src/websocket.c" 3 4
            ((void *)0) 
# 1803 "project/goaccess/src/websocket.c"
                 && newlen > 0) {
    free ((*msg)->payload);
    free (buf);

    (*msg)->payload = 
# 1807 "project/goaccess/src/websocket.c" 3 4
                     ((void *)0)
# 1807 "project/goaccess/src/websocket.c"
                         ;
    client->status = WS_ERR | WS_CLOSE;
    return;
  }

  (*msg)->payload = tmp;
  (*msg)->payloadsz -= len;

  ws_send_frame (client, WS_OPCODE_PONG, buf, len);

  (*msg)->buflen = 0;

  if (!(*msg)->fragmented) {
    ws_free_message (client);
  }
  free (buf);
}





int
ws_validate_string (const char *str, int len) {
  uint32_t state = 0;

  if (verify_utf8 (&state, str, len) == 1) {
    do { if (0) dbg_printf ("Invalid UTF8 data!\n"); } while (0);
    return 1;
  }
  if (state != 0) {
    do { if (0) dbg_printf ("Invalid UTF8 data!\n"); } while (0);
    return 1;
  }

  return 0;
}


static void
ws_handle_text_bin (WSClient * client, WSServer * server) {
  WSFrame **frm = &client->frame;
  WSMessage **msg = &client->message;
  int offset = (*msg)->mask_offset;


  if ((*msg)->fragmented && (*frm)->opcode != WS_OPCODE_CONTINUATION) {
    client->status = WS_ERR | WS_CLOSE;
    return;
  }



  ws_unmask_payload ((*msg)->payload, (*msg)->payloadsz, offset, (*frm)->mask);

  (*msg)->buflen = 0;

  (*msg)->fragmented = 1;

  if (!(*frm)->fin)
    return;


  if ((*msg)->opcode == WS_OPCODE_TEXT) {
    if (ws_validate_string ((*msg)->payload, (*msg)->payloadsz) != 0) {
      ws_handle_err (client, 1007, WS_ERR | WS_CLOSE, 
# 1872 "project/goaccess/src/websocket.c" 3 4
                                                                      ((void *)0)
# 1872 "project/goaccess/src/websocket.c"
                                                                          );
      return;
    }
  }

  if ((*msg)->opcode != WS_OPCODE_CONTINUATION && server->onmessage) {

    if (wsconfig.echomode)
      ws_send_data (client, (*msg)->opcode, (*msg)->payload, (*msg)->payloadsz);

    else if (!wsconfig.strict)
      ws_write_fifo (server->pipeout, (*msg)->payload, (*msg)->payloadsz);
    else
      server->onmessage (server->pipeout, client);
  }
  ws_free_message (client);
}


static void
ws_manage_payload_opcode (WSClient * client, WSServer * server) {
  WSFrame **frm = &client->frame;
  WSMessage **msg = &client->message;

  switch ((*frm)->opcode) {
  case WS_OPCODE_CONTINUATION:
    do { if (0) dbg_printf ("CONTINUATION\n"); } while (0);

    if (!(*msg)->fragmented) {
      client->status = WS_ERR | WS_CLOSE;
      break;
    }
    ws_handle_text_bin (client, server);
    break;
  case WS_OPCODE_TEXT:
  case WS_OPCODE_BIN:
    do { if (0) dbg_printf ("TEXT\n"); } while (0);
    client->message->opcode = (*frm)->opcode;
    ws_handle_text_bin (client, server);
    break;
  case WS_OPCODE_PONG:
    do { if (0) dbg_printf ("PONG\n"); } while (0);
    ws_handle_pong (client);
    break;
  case WS_OPCODE_PING:
    do { if (0) dbg_printf ("PING\n"); } while (0);
    ws_handle_ping (client);
    break;
  default:
    do { if (0) dbg_printf ("CLOSE\n"); } while (0);
    ws_handle_close (client);
  }
}


static void
ws_set_extended_header_size (const char *buf, int *extended) {
  uint64_t payloadlen = 0;

  payloadlen = ((*(buf + 1)) & 0x7F);
  switch (payloadlen) {
  case 126:
    *extended = 2;
    break;
  case 127:
    *extended = 8;
    break;
  }
}


static void
ws_set_payloadlen (WSFrame * frm, const char *buf) {
  uint64_t payloadlen = 0, len64;
  uint16_t len16;


  payloadlen = ((*(buf + 1)) & 0x7F);
  switch (payloadlen) {
  case 126:
    
# 1952 "project/goaccess/src/websocket.c" 3 4
   __builtin___memcpy_chk (
# 1952 "project/goaccess/src/websocket.c"
   &len16
# 1952 "project/goaccess/src/websocket.c" 3 4
   , 
# 1952 "project/goaccess/src/websocket.c"
   (buf + 2), sizeof (uint16_t)
# 1952 "project/goaccess/src/websocket.c" 3 4
   , __builtin_object_size (
# 1952 "project/goaccess/src/websocket.c"
   &len16
# 1952 "project/goaccess/src/websocket.c" 3 4
   , 0))
# 1952 "project/goaccess/src/websocket.c"
                                                ;
    frm->payloadlen = 
# 1953 "project/goaccess/src/websocket.c" 3 4
                     ((__uint16_t)(__builtin_constant_p(
# 1953 "project/goaccess/src/websocket.c"
                     len16
# 1953 "project/goaccess/src/websocket.c" 3 4
                     ) ? ((__uint16_t)((((__uint16_t)(
# 1953 "project/goaccess/src/websocket.c"
                     len16
# 1953 "project/goaccess/src/websocket.c" 3 4
                     ) & 0xff00U) >> 8) | (((__uint16_t)(
# 1953 "project/goaccess/src/websocket.c"
                     len16
# 1953 "project/goaccess/src/websocket.c" 3 4
                     ) & 0x00ffU) << 8))) : _OSSwapInt16(
# 1953 "project/goaccess/src/websocket.c"
                     len16
# 1953 "project/goaccess/src/websocket.c" 3 4
                     )))
# 1953 "project/goaccess/src/websocket.c"
                                  ;
    break;
  case 127:
    
# 1956 "project/goaccess/src/websocket.c" 3 4
   __builtin___memcpy_chk (
# 1956 "project/goaccess/src/websocket.c"
   &len64
# 1956 "project/goaccess/src/websocket.c" 3 4
   , 
# 1956 "project/goaccess/src/websocket.c"
   (buf + 2), sizeof (uint64_t)
# 1956 "project/goaccess/src/websocket.c" 3 4
   , __builtin_object_size (
# 1956 "project/goaccess/src/websocket.c"
   &len64
# 1956 "project/goaccess/src/websocket.c" 3 4
   , 0))
# 1956 "project/goaccess/src/websocket.c"
                                                ;
    frm->payloadlen = 
# 1957 "project/goaccess/src/websocket.c" 3 4
                     (__builtin_constant_p(
# 1957 "project/goaccess/src/websocket.c"
                     len64
# 1957 "project/goaccess/src/websocket.c" 3 4
                     ) ? ((__uint64_t)((((__uint64_t)(
# 1957 "project/goaccess/src/websocket.c"
                     len64
# 1957 "project/goaccess/src/websocket.c" 3 4
                     ) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)(
# 1957 "project/goaccess/src/websocket.c"
                     len64
# 1957 "project/goaccess/src/websocket.c" 3 4
                     ) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)(
# 1957 "project/goaccess/src/websocket.c"
                     len64
# 1957 "project/goaccess/src/websocket.c" 3 4
                     ) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)(
# 1957 "project/goaccess/src/websocket.c"
                     len64
# 1957 "project/goaccess/src/websocket.c" 3 4
                     ) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)(
# 1957 "project/goaccess/src/websocket.c"
                     len64
# 1957 "project/goaccess/src/websocket.c" 3 4
                     ) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)(
# 1957 "project/goaccess/src/websocket.c"
                     len64
# 1957 "project/goaccess/src/websocket.c" 3 4
                     ) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)(
# 1957 "project/goaccess/src/websocket.c"
                     len64
# 1957 "project/goaccess/src/websocket.c" 3 4
                     ) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)(
# 1957 "project/goaccess/src/websocket.c"
                     len64
# 1957 "project/goaccess/src/websocket.c" 3 4
                     ) & 0x00000000000000ffULL) << 56))) : _OSSwapInt64(
# 1957 "project/goaccess/src/websocket.c"
                     len64
# 1957 "project/goaccess/src/websocket.c" 3 4
                     ))
# 1957 "project/goaccess/src/websocket.c"
                                    ;
    break;
  default:
    frm->payloadlen = payloadlen;
  }
}


static void
ws_set_masking_key (WSFrame * frm, const char *buf) {
  uint64_t payloadlen = 0;


  payloadlen = ((*(buf + 1)) & 0x7F);
  switch (payloadlen) {
  case 126:
    
# 1973 "project/goaccess/src/websocket.c" 3 4
   __builtin___memcpy_chk (
# 1973 "project/goaccess/src/websocket.c"
   &frm->mask
# 1973 "project/goaccess/src/websocket.c" 3 4
   , 
# 1973 "project/goaccess/src/websocket.c"
   buf + 4, sizeof (frm->mask)
# 1973 "project/goaccess/src/websocket.c" 3 4
   , __builtin_object_size (
# 1973 "project/goaccess/src/websocket.c"
   &frm->mask
# 1973 "project/goaccess/src/websocket.c" 3 4
   , 0))
# 1973 "project/goaccess/src/websocket.c"
                                                   ;
    break;
  case 127:
    
# 1976 "project/goaccess/src/websocket.c" 3 4
   __builtin___memcpy_chk (
# 1976 "project/goaccess/src/websocket.c"
   &frm->mask
# 1976 "project/goaccess/src/websocket.c" 3 4
   , 
# 1976 "project/goaccess/src/websocket.c"
   buf + 10, sizeof (frm->mask)
# 1976 "project/goaccess/src/websocket.c" 3 4
   , __builtin_object_size (
# 1976 "project/goaccess/src/websocket.c"
   &frm->mask
# 1976 "project/goaccess/src/websocket.c" 3 4
   , 0))
# 1976 "project/goaccess/src/websocket.c"
                                                    ;
    break;
  default:
    
# 1979 "project/goaccess/src/websocket.c" 3 4
   __builtin___memcpy_chk (
# 1979 "project/goaccess/src/websocket.c"
   &frm->mask
# 1979 "project/goaccess/src/websocket.c" 3 4
   , 
# 1979 "project/goaccess/src/websocket.c"
   buf + 2, sizeof (frm->mask)
# 1979 "project/goaccess/src/websocket.c" 3 4
   , __builtin_object_size (
# 1979 "project/goaccess/src/websocket.c"
   &frm->mask
# 1979 "project/goaccess/src/websocket.c" 3 4
   , 0))
# 1979 "project/goaccess/src/websocket.c"
                                                   ;
  }
}







static int
ws_get_frm_header (WSClient * client) {
  WSFrame **frm = 
# 1991 "project/goaccess/src/websocket.c" 3 4
                 ((void *)0)
# 1991 "project/goaccess/src/websocket.c"
                     ;
  int bytes = 0, readh = 0, need = 0, offset = 0, extended = 0;

  if (client->frame == 
# 1994 "project/goaccess/src/websocket.c" 3 4
                      ((void *)0)
# 1994 "project/goaccess/src/websocket.c"
                          )
    client->frame = new_wsframe ();

  frm = &client->frame;


  readh = (*frm)->buflen;
  need = 2 - readh;
  if (need > 0) {
    if ((bytes = ws_read_header (client, (*frm), readh, need)) < 1)
      return bytes;
    if (bytes != need)
      return ws_set_status (client, WS_READING, bytes);
  }
  offset += 2;

  if (ws_set_front_header_fields (client) != 0)
    return bytes;

  ws_set_extended_header_size ((*frm)->buf, &extended);

  readh = (*frm)->buflen;
  need = (extended + offset) - readh;
  if (need > 0) {
    if ((bytes = ws_read_header (client, (*frm), readh, need)) < 1)
      return bytes;
    if (bytes != need)
      return ws_set_status (client, WS_READING, bytes);
  }
  offset += extended;


  readh = (*frm)->buflen;
  need = (4 + offset) - readh;
  if (need > 0) {
    if ((bytes = ws_read_header (client, (*frm), readh, need)) < 1)
      return bytes;
    if (bytes != need)
      return ws_set_status (client, WS_READING, bytes);
  }
  offset += 4;

  ws_set_payloadlen ((*frm), (*frm)->buf);
  ws_set_masking_key ((*frm), (*frm)->buf);

  if ((*frm)->payloadlen > wsconfig.max_frm_size) {
    ws_error (client, 1009, "Frame is too big");
    return ws_set_status (client, WS_ERR | WS_CLOSE, bytes);
  }

  (*frm)->buflen = 0;
  (*frm)->reading = 0;
  (*frm)->payload_offset = offset;

  return ws_set_status (client, WS_OK, bytes);
}





static int
ws_realloc_frm_payload (WSFrame * frm, WSMessage * msg) {
  char *tmp = 
# 2057 "project/goaccess/src/websocket.c" 3 4
             ((void *)0)
# 2057 "project/goaccess/src/websocket.c"
                 ;
  uint64_t newlen = 0;

  newlen = msg->payloadsz + frm->payloadlen;
  tmp = realloc (msg->payload, newlen);
  if (tmp == 
# 2062 "project/goaccess/src/websocket.c" 3 4
            ((void *)0) 
# 2062 "project/goaccess/src/websocket.c"
                 && newlen > 0) {
    free (msg->payload);
    msg->payload = 
# 2064 "project/goaccess/src/websocket.c" 3 4
                  ((void *)0)
# 2064 "project/goaccess/src/websocket.c"
                      ;
    return 1;
  }
  msg->payload = tmp;

  return 0;
}







static int
ws_get_frm_payload (WSClient * client, WSServer * server) {
  WSFrame **frm = 
# 2080 "project/goaccess/src/websocket.c" 3 4
                 ((void *)0)
# 2080 "project/goaccess/src/websocket.c"
                     ;
  WSMessage **msg = 
# 2081 "project/goaccess/src/websocket.c" 3 4
                   ((void *)0)
# 2081 "project/goaccess/src/websocket.c"
                       ;
  int bytes = 0, readh = 0, need = 0;

  if (client->message == 
# 2084 "project/goaccess/src/websocket.c" 3 4
                        ((void *)0)
# 2084 "project/goaccess/src/websocket.c"
                            )
    client->message = new_wsmessage ();

  frm = &client->frame;
  msg = &client->message;


  if ((*msg)->payload == 
# 2091 "project/goaccess/src/websocket.c" 3 4
                        ((void *)0) 
# 2091 "project/goaccess/src/websocket.c"
                             && (*frm)->payloadlen)
    (*msg)->payload = xcalloc ((*frm)->payloadlen, sizeof (char));

  else if ((*msg)->buflen == 0 && (*frm)->payloadlen) {
    if (ws_realloc_frm_payload ((*frm), (*msg)) == 1)
      return ws_set_status (client, WS_ERR | WS_CLOSE, 0);
  }

  readh = (*msg)->buflen;
  need = (*frm)->payloadlen - readh;
  if (need > 0) {
    if ((bytes = ws_read_payload (client, (*msg), (*msg)->payloadsz, need)) < 0)
      return bytes;
    if (bytes != need)
      return ws_set_status (client, WS_READING, bytes);
  }

  (*msg)->mask_offset = (*msg)->payloadsz - (*msg)->buflen;

  ws_manage_payload_opcode (client, server);
  ws_free_frame (client);

  return bytes;
}




static int
ws_get_message (WSClient * client, WSServer * server) {
  int bytes = 0;
  if ((client->frame == 
# 2122 "project/goaccess/src/websocket.c" 3 4
                       ((void *)0)
# 2122 "project/goaccess/src/websocket.c"
                           ) || (client->frame->reading))
    if ((bytes = ws_get_frm_header (client)) < 1 || client->frame->reading)
      return bytes;
  return ws_get_frm_payload (client, server);
}




static int
read_client_data (WSClient * client, WSServer * server) {
  int bytes = 0;


  if ((!(client->headers) || (client->headers->reading)))
    bytes = ws_get_handshake (client, server);

  else
    bytes = ws_get_message (client, server);

  return bytes;
}


static void
handle_tcp_close (int conn, WSClient * client, WSServer * server) {





  shutdown (conn, 
# 2153 "project/goaccess/src/websocket.c" 3 4
                 2
# 2153 "project/goaccess/src/websocket.c"
                          );

  if (server->onclose && wsconfig.strict && !wsconfig.echomode)
    (*server->onclose) (server->pipeout, client);


  gettimeofday (&client->end_proc, 
# 2159 "project/goaccess/src/websocket.c" 3 4
                                  ((void *)0)
# 2159 "project/goaccess/src/websocket.c"
                                      );
  if (wsconfig.accesslog)
    access_log (client, 200);


  if (client->status & WS_ERR) {
    ws_clear_queue (client);
    ws_free_frame (client);
    ws_free_message (client);
  }

  server->closing = 0;
  ws_close (conn);
# 2180 "project/goaccess/src/websocket.c"
  ws_remove_client_from_list (client, server);
  do { if (0) dbg_printf ("Active: %d\n", list_count (server->colist)); } while (0);
}


static void
handle_read_close (int conn, WSClient * client, WSServer * server) {
  if (client->status & WS_SENDING) {
    server->closing = 1;
    set_pollfd (client->listener, 
# 2189 "project/goaccess/src/websocket.c" 3 4
                                 0x0004
# 2189 "project/goaccess/src/websocket.c"
                                        );
    return;
  }
  handle_tcp_close (conn, client, server);
}


static void
handle_accept (int listener, WSServer * server) {
  WSClient *client = 
# 2198 "project/goaccess/src/websocket.c" 3 4
                    ((void *)0)
# 2198 "project/goaccess/src/websocket.c"
                        ;
  int newfd;

  newfd = accept_client (listener, &server->colist);
  if (newfd == -1)
    return;

  if (!(client = ws_get_client_from_list (newfd, &server->colist)))
    return;







  do { if (0) dbg_printf ("Accepted: %d %s\n", newfd, client->remote_ip); } while (0);
}


static void
handle_reads (int conn, WSServer * server) {
  WSClient *client = 
# 2220 "project/goaccess/src/websocket.c" 3 4
                    ((void *)0)
# 2220 "project/goaccess/src/websocket.c"
                        ;

  if (!(client = ws_get_client_from_list (conn, &server->colist)))
    return;







  client->start_proc = client->end_proc = (struct timeval) {0};

  gettimeofday (&client->start_proc, 
# 2233 "project/goaccess/src/websocket.c" 3 4
                                    ((void *)0)
# 2233 "project/goaccess/src/websocket.c"
                                        );
  read_client_data (client, server);

  if ((client->status & WS_CLOSE)) {
    handle_read_close (conn, client, server);
  }
}


static void
handle_write_close (int conn, WSClient * client, WSServer * server) {
  handle_tcp_close (conn, client, server);
}


static void
handle_writes (int conn, WSServer * server) {
  WSClient *client = 
# 2250 "project/goaccess/src/websocket.c" 3 4
                    ((void *)0)
# 2250 "project/goaccess/src/websocket.c"
                        ;

  if (!(client = ws_get_client_from_list (conn, &server->colist)))
    return;






  ws_respond (client, 
# 2260 "project/goaccess/src/websocket.c" 3 4
                     ((void *)0)
# 2260 "project/goaccess/src/websocket.c"
                         , 0);

  if (client->sockqueue == 
# 2262 "project/goaccess/src/websocket.c" 3 4
                          ((void *)0)
# 2262 "project/goaccess/src/websocket.c"
                              ) {
    client->status &= ~WS_SENDING;
    set_pollfd (client->listener, server->closing ? 0 : 
# 2264 "project/goaccess/src/websocket.c" 3 4
                                                       0x0001
# 2264 "project/goaccess/src/websocket.c"
                                                             );
  }




  if ((client->status & WS_CLOSE) && !(client->status & WS_SENDING))
    handle_write_close (conn, client, server);
}





int
ws_setfifo (const char *pipename) {
  struct stat fistat;
  const char *f = pipename;

  if (access (f, 
# 2283 "project/goaccess/src/websocket.c" 3 4
                0
# 2283 "project/goaccess/src/websocket.c"
                    ) == 0)
    return 0;

  if (mkfifo (f, 
# 2286 "project/goaccess/src/websocket.c" 3 4
                0000400 
# 2286 "project/goaccess/src/websocket.c"
                        | 
# 2286 "project/goaccess/src/websocket.c" 3 4
                          0000200 
# 2286 "project/goaccess/src/websocket.c"
                                  | 
# 2286 "project/goaccess/src/websocket.c" 3 4
                                    0000040 
# 2286 "project/goaccess/src/websocket.c"
                                            | 
# 2286 "project/goaccess/src/websocket.c" 3 4
                                              0000020 
# 2286 "project/goaccess/src/websocket.c"
                                                      | 
# 2286 "project/goaccess/src/websocket.c" 3 4
                                                        0000004 
# 2286 "project/goaccess/src/websocket.c"
                                                                | 
# 2286 "project/goaccess/src/websocket.c" 3 4
                                                                  0000002
# 2286 "project/goaccess/src/websocket.c"
                                                                         ) < 0)
    do { (void) endwin (); fprintf (
# 2287 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2287 "project/goaccess/src/websocket.c"
   , "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:16"); fprintf (
# 2287 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2287 "project/goaccess/src/websocket.c"
   , "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (
# 2287 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2287 "project/goaccess/src/websocket.c"
   , "\nFatal error has occurred"); fprintf (
# 2287 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2287 "project/goaccess/src/websocket.c"
   , "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/websocket.c", __FUNCTION__, 2287); fprintf (
# 2287 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2287 "project/goaccess/src/websocket.c"
   , "Unable to set fifo: %s.", strerror (
# 2287 "project/goaccess/src/websocket.c" 3 4
   (*__error())
# 2287 "project/goaccess/src/websocket.c"
   )); fprintf (
# 2287 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2287 "project/goaccess/src/websocket.c"
   , "\n\n"); do { dbg_fprintf ("Unable to set fifo: %s.", strerror (
# 2287 "project/goaccess/src/websocket.c" 3 4
   (*__error())
# 2287 "project/goaccess/src/websocket.c"
   )); } while (0); exit(
# 2287 "project/goaccess/src/websocket.c" 3 4
   1
# 2287 "project/goaccess/src/websocket.c"
   ); } while (0);
  if (stat (f, &fistat) < 0)
    do { (void) endwin (); fprintf (
# 2289 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2289 "project/goaccess/src/websocket.c"
   , "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:16"); fprintf (
# 2289 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2289 "project/goaccess/src/websocket.c"
   , "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (
# 2289 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2289 "project/goaccess/src/websocket.c"
   , "\nFatal error has occurred"); fprintf (
# 2289 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2289 "project/goaccess/src/websocket.c"
   , "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/websocket.c", __FUNCTION__, 2289); fprintf (
# 2289 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2289 "project/goaccess/src/websocket.c"
   , "Unable to stat fifo: %s.", strerror (
# 2289 "project/goaccess/src/websocket.c" 3 4
   (*__error())
# 2289 "project/goaccess/src/websocket.c"
   )); fprintf (
# 2289 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2289 "project/goaccess/src/websocket.c"
   , "\n\n"); do { dbg_fprintf ("Unable to stat fifo: %s.", strerror (
# 2289 "project/goaccess/src/websocket.c" 3 4
   (*__error())
# 2289 "project/goaccess/src/websocket.c"
   )); } while (0); exit(
# 2289 "project/goaccess/src/websocket.c" 3 4
   1
# 2289 "project/goaccess/src/websocket.c"
   ); } while (0);
  if (!
# 2290 "project/goaccess/src/websocket.c" 3 4
      (((
# 2290 "project/goaccess/src/websocket.c"
      fistat.st_mode
# 2290 "project/goaccess/src/websocket.c" 3 4
      ) & 0170000) == 0010000)
# 2290 "project/goaccess/src/websocket.c"
                               )
    do { (void) endwin (); fprintf (
# 2291 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2291 "project/goaccess/src/websocket.c"
   , "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:16"); fprintf (
# 2291 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2291 "project/goaccess/src/websocket.c"
   , "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (
# 2291 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2291 "project/goaccess/src/websocket.c"
   , "\nFatal error has occurred"); fprintf (
# 2291 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2291 "project/goaccess/src/websocket.c"
   , "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/websocket.c", __FUNCTION__, 2291); fprintf (
# 2291 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2291 "project/goaccess/src/websocket.c"
   , "pipe is not a fifo: %s.", strerror (
# 2291 "project/goaccess/src/websocket.c" 3 4
   (*__error())
# 2291 "project/goaccess/src/websocket.c"
   )); fprintf (
# 2291 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2291 "project/goaccess/src/websocket.c"
   , "\n\n"); do { dbg_fprintf ("pipe is not a fifo: %s.", strerror (
# 2291 "project/goaccess/src/websocket.c" 3 4
   (*__error())
# 2291 "project/goaccess/src/websocket.c"
   )); } while (0); exit(
# 2291 "project/goaccess/src/websocket.c" 3 4
   1
# 2291 "project/goaccess/src/websocket.c"
   ); } while (0);

  return 0;
}


static void
ws_openfifo_in (WSPipeIn * pipein) {
  ws_setfifo (wsconfig.pipein);

  if ((pipein->fd = open (wsconfig.pipein, 
# 2301 "project/goaccess/src/websocket.c" 3 4
                                          0x0002 
# 2301 "project/goaccess/src/websocket.c"
                                                 | 
# 2301 "project/goaccess/src/websocket.c" 3 4
                                                   0x00000004
# 2301 "project/goaccess/src/websocket.c"
                                                             )) < 0)
    do { (void) endwin (); fprintf (
# 2302 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2302 "project/goaccess/src/websocket.c"
   , "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:16"); fprintf (
# 2302 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2302 "project/goaccess/src/websocket.c"
   , "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (
# 2302 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2302 "project/goaccess/src/websocket.c"
   , "\nFatal error has occurred"); fprintf (
# 2302 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2302 "project/goaccess/src/websocket.c"
   , "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/websocket.c", __FUNCTION__, 2302); fprintf (
# 2302 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2302 "project/goaccess/src/websocket.c"
   , "Unable to open fifo in: %s.", strerror (
# 2302 "project/goaccess/src/websocket.c" 3 4
   (*__error())
# 2302 "project/goaccess/src/websocket.c"
   )); fprintf (
# 2302 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2302 "project/goaccess/src/websocket.c"
   , "\n\n"); do { dbg_fprintf ("Unable to open fifo in: %s.", strerror (
# 2302 "project/goaccess/src/websocket.c" 3 4
   (*__error())
# 2302 "project/goaccess/src/websocket.c"
   )); } while (0); exit(
# 2302 "project/goaccess/src/websocket.c" 3 4
   1
# 2302 "project/goaccess/src/websocket.c"
   ); } while (0);
}



static int
ws_openfifo_out (WSPipeOut * pipeout) {
  int status = 0;

  ws_setfifo (wsconfig.pipeout);
  status = open (wsconfig.pipeout, 
# 2312 "project/goaccess/src/websocket.c" 3 4
                                  0x0001 
# 2312 "project/goaccess/src/websocket.c"
                                           | 
# 2312 "project/goaccess/src/websocket.c" 3 4
                                             0x00000004
# 2312 "project/goaccess/src/websocket.c"
                                                       );

  if (status == -1 && 
# 2314 "project/goaccess/src/websocket.c" 3 4
                     (*__error()) 
# 2314 "project/goaccess/src/websocket.c"
                           == 
# 2314 "project/goaccess/src/websocket.c" 3 4
                              6
# 2314 "project/goaccess/src/websocket.c"
                                   )
    do { if (0) dbg_printf ("Unable to open fifo out: %s.\n", strerror (
# 2315 "project/goaccess/src/websocket.c" 3 4
   (*__error())
# 2315 "project/goaccess/src/websocket.c"
   )); } while (0);
  else if (status < 0)
    do { (void) endwin (); fprintf (
# 2317 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2317 "project/goaccess/src/websocket.c"
   , "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:16"); fprintf (
# 2317 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2317 "project/goaccess/src/websocket.c"
   , "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (
# 2317 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2317 "project/goaccess/src/websocket.c"
   , "\nFatal error has occurred"); fprintf (
# 2317 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2317 "project/goaccess/src/websocket.c"
   , "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/websocket.c", __FUNCTION__, 2317); fprintf (
# 2317 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2317 "project/goaccess/src/websocket.c"
   , "Unable to open fifo out: %s.", strerror (
# 2317 "project/goaccess/src/websocket.c" 3 4
   (*__error())
# 2317 "project/goaccess/src/websocket.c"
   )); fprintf (
# 2317 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2317 "project/goaccess/src/websocket.c"
   , "\n\n"); do { dbg_fprintf ("Unable to open fifo out: %s.", strerror (
# 2317 "project/goaccess/src/websocket.c" 3 4
   (*__error())
# 2317 "project/goaccess/src/websocket.c"
   )); } while (0); exit(
# 2317 "project/goaccess/src/websocket.c" 3 4
   1
# 2317 "project/goaccess/src/websocket.c"
   ); } while (0);
  pipeout->fd = status;

  return status;
}



static void
ws_fifo (WSServer * server) {
  ws_openfifo_in (server->pipein);
  set_pollfd (server->pipein->fd, 
# 2328 "project/goaccess/src/websocket.c" 3 4
                                 0x0001
# 2328 "project/goaccess/src/websocket.c"
                                       );
  ws_openfifo_out (server->pipeout);
  set_pollfd (server->pipeout->fd, 
# 2330 "project/goaccess/src/websocket.c" 3 4
                                  0x0004
# 2330 "project/goaccess/src/websocket.c"
                                         );
}


static void
clear_fifo_queue (WSPipeOut * pipeout) {
  WSQueue **queue = &pipeout->fifoqueue;
  if (!(*queue))
    return;

  if ((*queue)->queued)
    free ((*queue)->queued);
  (*queue)->queued = 
# 2342 "project/goaccess/src/websocket.c" 3 4
                    ((void *)0)
# 2342 "project/goaccess/src/websocket.c"
                        ;
  (*queue)->qlen = 0;

  free ((*queue));
  (*queue) = 
# 2346 "project/goaccess/src/websocket.c" 3 4
            ((void *)0)
# 2346 "project/goaccess/src/websocket.c"
                ;
}







static int
ws_realloc_fifobuf (WSPipeOut * pipeout, const char *buf, int len) {
  WSQueue *queue = pipeout->fifoqueue;
  char *tmp = 
# 2358 "project/goaccess/src/websocket.c" 3 4
             ((void *)0)
# 2358 "project/goaccess/src/websocket.c"
                 ;
  int newlen = 0;

  newlen = queue->qlen + len;
  tmp = realloc (queue->queued, newlen);
  if (tmp == 
# 2363 "project/goaccess/src/websocket.c" 3 4
            ((void *)0) 
# 2363 "project/goaccess/src/websocket.c"
                 && newlen > 0) {
    ws_close (pipeout->fd);
    clear_fifo_queue (pipeout);
    ws_openfifo_out (pipeout);
    return 1;
  }

  queue->queued = tmp;
  
# 2371 "project/goaccess/src/websocket.c" 3 4
 __builtin___memcpy_chk (
# 2371 "project/goaccess/src/websocket.c"
 queue->queued + queue->qlen
# 2371 "project/goaccess/src/websocket.c" 3 4
 , 
# 2371 "project/goaccess/src/websocket.c"
 buf, len
# 2371 "project/goaccess/src/websocket.c" 3 4
 , __builtin_object_size (
# 2371 "project/goaccess/src/websocket.c"
 queue->queued + queue->qlen
# 2371 "project/goaccess/src/websocket.c" 3 4
 , 0))
# 2371 "project/goaccess/src/websocket.c"
                                               ;
  queue->qlen += len;

  return 0;
}



static void
ws_queue_fifobuf (WSPipeOut * pipeout, const char *buffer, int len, int bytes) {
  WSQueue **queue = &pipeout->fifoqueue;

  if (bytes < 1)
    bytes = 0;

  (*queue) = xcalloc (1, sizeof (WSQueue));
  (*queue)->queued = xcalloc (len - bytes, sizeof (char));
  
# 2388 "project/goaccess/src/websocket.c" 3 4
 __builtin___memcpy_chk (
# 2388 "project/goaccess/src/websocket.c"
 (*queue)->queued
# 2388 "project/goaccess/src/websocket.c" 3 4
 , 
# 2388 "project/goaccess/src/websocket.c"
 buffer + bytes, len - bytes
# 2388 "project/goaccess/src/websocket.c" 3 4
 , __builtin_object_size (
# 2388 "project/goaccess/src/websocket.c"
 (*queue)->queued
# 2388 "project/goaccess/src/websocket.c" 3 4
 , 0))
# 2388 "project/goaccess/src/websocket.c"
                                                       ;
  (*queue)->qlen = len - bytes;

  pipeout->status |= WS_SENDING;
  set_pollfd (pipeout->fd, 
# 2392 "project/goaccess/src/websocket.c" 3 4
                          0x0004
# 2392 "project/goaccess/src/websocket.c"
                                 );
}





static int
ws_write_fifo_data (WSPipeOut * pipeout, char *buffer, int len) {
  int bytes = 0;

  bytes = write (pipeout->fd, buffer, len);




  if (bytes == -1 && 
# 2408 "project/goaccess/src/websocket.c" 3 4
                    (*__error()) 
# 2408 "project/goaccess/src/websocket.c"
                          == 
# 2408 "project/goaccess/src/websocket.c" 3 4
                             32
# 2408 "project/goaccess/src/websocket.c"
                                  ) {
    ws_close (pipeout->fd);
    ws_openfifo_out (pipeout);
    return bytes;
  }
  if (bytes < len || (bytes == -1 && (
# 2413 "project/goaccess/src/websocket.c" 3 4
                                     (*__error()) 
# 2413 "project/goaccess/src/websocket.c"
                                           == 
# 2413 "project/goaccess/src/websocket.c" 3 4
                                              35 
# 2413 "project/goaccess/src/websocket.c"
                                                     || 
# 2413 "project/goaccess/src/websocket.c" 3 4
                                                        (*__error()) 
# 2413 "project/goaccess/src/websocket.c"
                                                              == 
# 2413 "project/goaccess/src/websocket.c" 3 4
                                                                 35
# 2413 "project/goaccess/src/websocket.c"
                                                                            )))
    ws_queue_fifobuf (pipeout, buffer, len, bytes);

  return bytes;
}






static int
ws_write_fifo_cache (WSPipeOut * pipeout) {
  WSQueue *queue = pipeout->fifoqueue;
  int bytes = 0;

  bytes = write (pipeout->fd, queue->queued, queue->qlen);




  if (bytes == -1 && 
# 2434 "project/goaccess/src/websocket.c" 3 4
                    (*__error()) 
# 2434 "project/goaccess/src/websocket.c"
                          == 
# 2434 "project/goaccess/src/websocket.c" 3 4
                             32
# 2434 "project/goaccess/src/websocket.c"
                                  ) {
    ws_close (pipeout->fd);
    ws_openfifo_out (pipeout);
    return bytes;
  }

  if (chop_nchars (queue->queued, bytes, queue->qlen) == 0)
    clear_fifo_queue (pipeout);
  else
    queue->qlen -= bytes;

  return bytes;
}





int
ws_write_fifo (WSPipeOut * pipeout, char *buffer, int len) {
  int bytes = 0;

  if (pipeout->fd == -1 && ws_openfifo_out (pipeout) == -1)
    return bytes;


  if (pipeout->fifoqueue == 
# 2460 "project/goaccess/src/websocket.c" 3 4
                           ((void *)0)
# 2460 "project/goaccess/src/websocket.c"
                               )
    bytes = ws_write_fifo_data (pipeout, buffer, len);

  else if (pipeout->fifoqueue != 
# 2463 "project/goaccess/src/websocket.c" 3 4
                                ((void *)0) 
# 2463 "project/goaccess/src/websocket.c"
                                     && buffer != 
# 2463 "project/goaccess/src/websocket.c" 3 4
                                                  ((void *)0)
# 2463 "project/goaccess/src/websocket.c"
                                                      ) {
    if (ws_realloc_fifobuf (pipeout, buffer, len) == 1)
      return bytes;
  }

  else {
    bytes = ws_write_fifo_cache (pipeout);
  }

  if (pipeout->fifoqueue == 
# 2472 "project/goaccess/src/websocket.c" 3 4
                           ((void *)0)
# 2472 "project/goaccess/src/websocket.c"
                               ) {
    pipeout->status &= ~WS_SENDING;
    set_pollfd (pipeout->fd, 0);
  }

  return bytes;
}


static void
clear_fifo_packet (WSPipeIn * pipein) {
  
# 2483 "project/goaccess/src/websocket.c" 3 4
 __builtin___memset_chk (
# 2483 "project/goaccess/src/websocket.c"
 pipein->hdr
# 2483 "project/goaccess/src/websocket.c" 3 4
 , 
# 2483 "project/goaccess/src/websocket.c"
 0, sizeof (pipein->hdr)
# 2483 "project/goaccess/src/websocket.c" 3 4
 , __builtin_object_size (
# 2483 "project/goaccess/src/websocket.c"
 pipein->hdr
# 2483 "project/goaccess/src/websocket.c" 3 4
 , 0))
# 2483 "project/goaccess/src/websocket.c"
                                              ;
  pipein->hlen = 0;

  if (pipein->packet == 
# 2486 "project/goaccess/src/websocket.c" 3 4
                       ((void *)0)
# 2486 "project/goaccess/src/websocket.c"
                           )
    return;

  if (pipein->packet->data)
    free (pipein->packet->data);
  free (pipein->packet);
  pipein->packet = 
# 2492 "project/goaccess/src/websocket.c" 3 4
                  ((void *)0)
# 2492 "project/goaccess/src/websocket.c"
                      ;
}


static int
ws_broadcast_fifo (void *value, void *user_data) {
  WSClient *client = value;
  WSPacket *packet = user_data;

  if (client == 
# 2501 "project/goaccess/src/websocket.c" 3 4
               ((void *)0) 
# 2501 "project/goaccess/src/websocket.c"
                    || user_data == 
# 2501 "project/goaccess/src/websocket.c" 3 4
                                    ((void *)0)
# 2501 "project/goaccess/src/websocket.c"
                                        )
    return 1;

  if (client->headers == 
# 2504 "project/goaccess/src/websocket.c" 3 4
                        ((void *)0) 
# 2504 "project/goaccess/src/websocket.c"
                             || client->headers->ws_accept == 
# 2504 "project/goaccess/src/websocket.c" 3 4
                                                              ((void *)0)
# 2504 "project/goaccess/src/websocket.c"
                                                                  )
    return 1;

  ws_send_data (client, packet->type, packet->data, packet->size);

  return 0;
}



static void
ws_send_strict_fifo_to_client (WSServer * server, int listener, WSPacket * pa) {
  WSClient *client = 
# 2516 "project/goaccess/src/websocket.c" 3 4
                    ((void *)0)
# 2516 "project/goaccess/src/websocket.c"
                        ;

  if (!(client = ws_get_client_from_list (listener, &server->colist)))
    return;

  if (client->headers == 
# 2521 "project/goaccess/src/websocket.c" 3 4
                        ((void *)0) 
# 2521 "project/goaccess/src/websocket.c"
                             || client->headers->ws_accept == 
# 2521 "project/goaccess/src/websocket.c" 3 4
                                                              ((void *)0)
# 2521 "project/goaccess/src/websocket.c"
                                                                  )
    return;
  ws_send_data (client, pa->type, pa->data, pa->len);
}





int
ws_read_fifo (int fd, char *buf, int *buflen, int pos, int need) {
  int bytes = 0;

  bytes = read (fd, buf + pos, need);
  if (bytes == -1 && (
# 2535 "project/goaccess/src/websocket.c" 3 4
                     (*__error()) 
# 2535 "project/goaccess/src/websocket.c"
                           == 
# 2535 "project/goaccess/src/websocket.c" 3 4
                              35 
# 2535 "project/goaccess/src/websocket.c"
                                     || 
# 2535 "project/goaccess/src/websocket.c" 3 4
                                        (*__error()) 
# 2535 "project/goaccess/src/websocket.c"
                                              == 
# 2535 "project/goaccess/src/websocket.c" 3 4
                                                 35
# 2535 "project/goaccess/src/websocket.c"
                                                            ))
    return bytes;
  else if (bytes == -1)
    return bytes;
  *buflen += bytes;

  return bytes;
}




size_t
pack_uint32 (void *buf, uint32_t val) {
  uint32_t v32 = 
# 2549 "project/goaccess/src/websocket.c" 3 4
                (__builtin_constant_p(
# 2549 "project/goaccess/src/websocket.c"
                val
# 2549 "project/goaccess/src/websocket.c" 3 4
                ) ? ((__uint32_t)((((__uint32_t)(
# 2549 "project/goaccess/src/websocket.c"
                val
# 2549 "project/goaccess/src/websocket.c" 3 4
                ) & 0xff000000U) >> 24) | (((__uint32_t)(
# 2549 "project/goaccess/src/websocket.c"
                val
# 2549 "project/goaccess/src/websocket.c" 3 4
                ) & 0x00ff0000U) >> 8) | (((__uint32_t)(
# 2549 "project/goaccess/src/websocket.c"
                val
# 2549 "project/goaccess/src/websocket.c" 3 4
                ) & 0x0000ff00U) << 8) | (((__uint32_t)(
# 2549 "project/goaccess/src/websocket.c"
                val
# 2549 "project/goaccess/src/websocket.c" 3 4
                ) & 0x000000ffU) << 24))) : _OSSwapInt32(
# 2549 "project/goaccess/src/websocket.c"
                val
# 2549 "project/goaccess/src/websocket.c" 3 4
                ))
# 2549 "project/goaccess/src/websocket.c"
                           ;
  
# 2550 "project/goaccess/src/websocket.c" 3 4
 __builtin___memcpy_chk (
# 2550 "project/goaccess/src/websocket.c"
 buf
# 2550 "project/goaccess/src/websocket.c" 3 4
 , 
# 2550 "project/goaccess/src/websocket.c"
 &v32, sizeof (uint32_t)
# 2550 "project/goaccess/src/websocket.c" 3 4
 , __builtin_object_size (
# 2550 "project/goaccess/src/websocket.c"
 buf
# 2550 "project/goaccess/src/websocket.c" 3 4
 , 0))
# 2550 "project/goaccess/src/websocket.c"
                                      ;

  return sizeof (uint32_t);
}




size_t
unpack_uint32 (const void *buf, uint32_t * val) {
  uint32_t v32 = 0;
  
# 2561 "project/goaccess/src/websocket.c" 3 4
 __builtin___memcpy_chk (
# 2561 "project/goaccess/src/websocket.c"
 &v32
# 2561 "project/goaccess/src/websocket.c" 3 4
 , 
# 2561 "project/goaccess/src/websocket.c"
 buf, sizeof (uint32_t)
# 2561 "project/goaccess/src/websocket.c" 3 4
 , __builtin_object_size (
# 2561 "project/goaccess/src/websocket.c"
 &v32
# 2561 "project/goaccess/src/websocket.c" 3 4
 , 0))
# 2561 "project/goaccess/src/websocket.c"
                                      ;
  *val = 
# 2562 "project/goaccess/src/websocket.c" 3 4
        (__builtin_constant_p(
# 2562 "project/goaccess/src/websocket.c"
        v32
# 2562 "project/goaccess/src/websocket.c" 3 4
        ) ? ((__uint32_t)((((__uint32_t)(
# 2562 "project/goaccess/src/websocket.c"
        v32
# 2562 "project/goaccess/src/websocket.c" 3 4
        ) & 0xff000000U) >> 24) | (((__uint32_t)(
# 2562 "project/goaccess/src/websocket.c"
        v32
# 2562 "project/goaccess/src/websocket.c" 3 4
        ) & 0x00ff0000U) >> 8) | (((__uint32_t)(
# 2562 "project/goaccess/src/websocket.c"
        v32
# 2562 "project/goaccess/src/websocket.c" 3 4
        ) & 0x0000ff00U) << 8) | (((__uint32_t)(
# 2562 "project/goaccess/src/websocket.c"
        v32
# 2562 "project/goaccess/src/websocket.c" 3 4
        ) & 0x000000ffU) << 24))) : _OSSwapInt32(
# 2562 "project/goaccess/src/websocket.c"
        v32
# 2562 "project/goaccess/src/websocket.c" 3 4
        ))
# 2562 "project/goaccess/src/websocket.c"
                   ;

  return sizeof (uint32_t);
}





static int
validate_fifo_packet (uint32_t type, int size) {
  if (type != WS_OPCODE_TEXT && type != WS_OPCODE_BIN) {
    do { if (0) dbg_printf ("Invalid fifo packet type\n"); } while (0);
    return 1;
  }

  if (size > wsconfig.max_frm_size) {
    do { if (0) dbg_printf ("Invalid fifo packet size\n"); } while (0);
    return 1;
  }

  return 0;
}



static void
handle_strict_fifo (WSServer * server) {
  WSPipeIn *pi = server->pipein;
  WSPacket **pa = &pi->packet;
  int bytes = 0, readh = 0, need = 0;

  char *ptr = 
# 2594 "project/goaccess/src/websocket.c" 3 4
             ((void *)0)
# 2594 "project/goaccess/src/websocket.c"
                 ;
  uint32_t listener = 0, type = 0, size = 0;

  readh = pi->hlen;
  need = 3 * 4 - readh;
  if (need > 0) {
    if ((bytes = ws_read_fifo (pi->fd, pi->hdr, &pi->hlen, readh, need)) < 0)
      return;
    if (bytes != need)
      return;
  }


  ptr = pi->hdr;
  ptr += unpack_uint32 (ptr, &listener);
  ptr += unpack_uint32 (ptr, &type);
  ptr += unpack_uint32 (ptr, &size);

  if (validate_fifo_packet (type, size) == 1) {
    ws_close (pi->fd);
    clear_fifo_packet (pi);
    ws_openfifo_in (pi);
    return;
  }

  if ((*pa) == 
# 2619 "project/goaccess/src/websocket.c" 3 4
              ((void *)0)
# 2619 "project/goaccess/src/websocket.c"
                  ) {
    (*pa) = xcalloc (1, sizeof (WSPacket));
    (*pa)->type = type;
    (*pa)->size = size;
    (*pa)->data = xcalloc (size, sizeof (char));
  }

  readh = (*pa)->len;
  need = (*pa)->size - readh;
  if (need > 0) {
    if ((bytes = ws_read_fifo (pi->fd, (*pa)->data, &(*pa)->len, readh, need)) < 0)
      return;
    if (bytes != need)
      return;
  }


  if (list_count (server->colist) == 0) {
    clear_fifo_packet (pi);
    return;
  }



  if (listener != 0)
    ws_send_strict_fifo_to_client (server, listener, *pa);
  else
    list_foreach (server->colist, ws_broadcast_fifo, *pa);
  clear_fifo_packet (pi);
}



static void
handle_fixed_fifo (WSServer * server) {
  WSPipeIn *pi = server->pipein;
  WSPacket **pa = &pi->packet;

  int bytes = 0;
  char buf[
# 2658 "project/goaccess/src/websocket.c" 3 4
          512
# 2658 "project/goaccess/src/websocket.c"
                  ] = { 0 };

  if ((bytes = read (pi->fd, buf, 
# 2660 "project/goaccess/src/websocket.c" 3 4
                                 512 
# 2660 "project/goaccess/src/websocket.c"
                                          - 1)) < 0)
    return;

  buf[bytes] = '\0';
  if (ws_validate_string (buf, bytes) != 0)
    return;

  (*pa) = xcalloc (1, sizeof (WSPacket));
  (*pa)->type = WS_OPCODE_TEXT;
  (*pa)->size = bytes;
  (*pa)->data = xstrdup (buf);


  if (list_count (server->colist) == 0) {
    clear_fifo_packet (pi);
    return;
  }


  list_foreach (server->colist, ws_broadcast_fifo, *pa);
  clear_fifo_packet (pi);
}


static void
handle_fifo (WSServer * server) {
  if (wsconfig.strict)
    handle_strict_fifo (server);
  else
    handle_fixed_fifo (server);
}



static void
ws_socket (int *listener) {
  if (wsconfig.unix_socket) {
    struct sockaddr_un servaddr;


    if ((*listener = socket (
# 2700 "project/goaccess/src/websocket.c" 3 4
                            1
# 2700 "project/goaccess/src/websocket.c"
                                   , 
# 2700 "project/goaccess/src/websocket.c" 3 4
                                     1
# 2700 "project/goaccess/src/websocket.c"
                                                , 0)) == -1)
      do { (void) endwin (); fprintf (
# 2701 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2701 "project/goaccess/src/websocket.c"
     , "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:16"); fprintf (
# 2701 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2701 "project/goaccess/src/websocket.c"
     , "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (
# 2701 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2701 "project/goaccess/src/websocket.c"
     , "\nFatal error has occurred"); fprintf (
# 2701 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2701 "project/goaccess/src/websocket.c"
     , "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/websocket.c", __FUNCTION__, 2701); fprintf (
# 2701 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2701 "project/goaccess/src/websocket.c"
     , "Unable to open socket: %s.", strerror (
# 2701 "project/goaccess/src/websocket.c" 3 4
     (*__error())
# 2701 "project/goaccess/src/websocket.c"
     )); fprintf (
# 2701 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2701 "project/goaccess/src/websocket.c"
     , "\n\n"); do { dbg_fprintf ("Unable to open socket: %s.", strerror (
# 2701 "project/goaccess/src/websocket.c" 3 4
     (*__error())
# 2701 "project/goaccess/src/websocket.c"
     )); } while (0); exit(
# 2701 "project/goaccess/src/websocket.c" 3 4
     1
# 2701 "project/goaccess/src/websocket.c"
     ); } while (0);

    
# 2703 "project/goaccess/src/websocket.c" 3 4
   __builtin___memset_chk (
# 2703 "project/goaccess/src/websocket.c"
   &servaddr
# 2703 "project/goaccess/src/websocket.c" 3 4
   , 
# 2703 "project/goaccess/src/websocket.c"
   0, sizeof (servaddr)
# 2703 "project/goaccess/src/websocket.c" 3 4
   , __builtin_object_size (
# 2703 "project/goaccess/src/websocket.c"
   &servaddr
# 2703 "project/goaccess/src/websocket.c" 3 4
   , 0))
# 2703 "project/goaccess/src/websocket.c"
                                           ;
    servaddr.sun_family = 
# 2704 "project/goaccess/src/websocket.c" 3 4
                         1
# 2704 "project/goaccess/src/websocket.c"
                                ;
    
# 2705 "project/goaccess/src/websocket.c" 3 4
   __builtin___strncpy_chk (
# 2705 "project/goaccess/src/websocket.c"
   servaddr.sun_path
# 2705 "project/goaccess/src/websocket.c" 3 4
   , 
# 2705 "project/goaccess/src/websocket.c"
   wsconfig.unix_socket, sizeof (servaddr.sun_path) - 1
# 2705 "project/goaccess/src/websocket.c" 3 4
   , __builtin_object_size (
# 2705 "project/goaccess/src/websocket.c"
   servaddr.sun_path
# 2705 "project/goaccess/src/websocket.c" 3 4
   , 2 > 1 ? 1 : 0))
# 2705 "project/goaccess/src/websocket.c"
                                                                                    ;


    if (bind (*listener, (struct sockaddr *) &servaddr, sizeof (servaddr)) != 0)
      do { (void) endwin (); fprintf (
# 2709 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2709 "project/goaccess/src/websocket.c"
     , "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:16"); fprintf (
# 2709 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2709 "project/goaccess/src/websocket.c"
     , "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (
# 2709 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2709 "project/goaccess/src/websocket.c"
     , "\nFatal error has occurred"); fprintf (
# 2709 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2709 "project/goaccess/src/websocket.c"
     , "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/websocket.c", __FUNCTION__, 2709); fprintf (
# 2709 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2709 "project/goaccess/src/websocket.c"
     , "Unable to set bind: %s.", strerror (
# 2709 "project/goaccess/src/websocket.c" 3 4
     (*__error())
# 2709 "project/goaccess/src/websocket.c"
     )); fprintf (
# 2709 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2709 "project/goaccess/src/websocket.c"
     , "\n\n"); do { dbg_fprintf ("Unable to set bind: %s.", strerror (
# 2709 "project/goaccess/src/websocket.c" 3 4
     (*__error())
# 2709 "project/goaccess/src/websocket.c"
     )); } while (0); exit(
# 2709 "project/goaccess/src/websocket.c" 3 4
     1
# 2709 "project/goaccess/src/websocket.c"
     ); } while (0);
  } else {
    int ov = 1;
    struct addrinfo hints, *ai;


    
# 2715 "project/goaccess/src/websocket.c" 3 4
   __builtin___memset_chk (
# 2715 "project/goaccess/src/websocket.c"
   &hints
# 2715 "project/goaccess/src/websocket.c" 3 4
   , 
# 2715 "project/goaccess/src/websocket.c"
   0, sizeof hints
# 2715 "project/goaccess/src/websocket.c" 3 4
   , __builtin_object_size (
# 2715 "project/goaccess/src/websocket.c"
   &hints
# 2715 "project/goaccess/src/websocket.c" 3 4
   , 0))
# 2715 "project/goaccess/src/websocket.c"
                                   ;
    hints.ai_family = 
# 2716 "project/goaccess/src/websocket.c" 3 4
                     0
# 2716 "project/goaccess/src/websocket.c"
                              ;
    hints.ai_socktype = 
# 2717 "project/goaccess/src/websocket.c" 3 4
                       1
# 2717 "project/goaccess/src/websocket.c"
                                  ;

    if (getaddrinfo (wsconfig.host, wsconfig.port, &hints, &ai) != 0)
      do { (void) endwin (); fprintf (
# 2720 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2720 "project/goaccess/src/websocket.c"
     , "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:16"); fprintf (
# 2720 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2720 "project/goaccess/src/websocket.c"
     , "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (
# 2720 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2720 "project/goaccess/src/websocket.c"
     , "\nFatal error has occurred"); fprintf (
# 2720 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2720 "project/goaccess/src/websocket.c"
     , "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/websocket.c", __FUNCTION__, 2720); fprintf (
# 2720 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2720 "project/goaccess/src/websocket.c"
     , "Unable to set server: %s.", gai_strerror (
# 2720 "project/goaccess/src/websocket.c" 3 4
     (*__error())
# 2720 "project/goaccess/src/websocket.c"
     )); fprintf (
# 2720 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2720 "project/goaccess/src/websocket.c"
     , "\n\n"); do { dbg_fprintf ("Unable to set server: %s.", gai_strerror (
# 2720 "project/goaccess/src/websocket.c" 3 4
     (*__error())
# 2720 "project/goaccess/src/websocket.c"
     )); } while (0); exit(
# 2720 "project/goaccess/src/websocket.c" 3 4
     1
# 2720 "project/goaccess/src/websocket.c"
     ); } while (0);


    if ((*listener = socket (ai->ai_family, ai->ai_socktype, ai->ai_protocol)) == -1)
      do { (void) endwin (); fprintf (
# 2724 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2724 "project/goaccess/src/websocket.c"
     , "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:16"); fprintf (
# 2724 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2724 "project/goaccess/src/websocket.c"
     , "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (
# 2724 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2724 "project/goaccess/src/websocket.c"
     , "\nFatal error has occurred"); fprintf (
# 2724 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2724 "project/goaccess/src/websocket.c"
     , "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/websocket.c", __FUNCTION__, 2724); fprintf (
# 2724 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2724 "project/goaccess/src/websocket.c"
     , "Unable to open socket: %s.", strerror (
# 2724 "project/goaccess/src/websocket.c" 3 4
     (*__error())
# 2724 "project/goaccess/src/websocket.c"
     )); fprintf (
# 2724 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2724 "project/goaccess/src/websocket.c"
     , "\n\n"); do { dbg_fprintf ("Unable to open socket: %s.", strerror (
# 2724 "project/goaccess/src/websocket.c" 3 4
     (*__error())
# 2724 "project/goaccess/src/websocket.c"
     )); } while (0); exit(
# 2724 "project/goaccess/src/websocket.c" 3 4
     1
# 2724 "project/goaccess/src/websocket.c"
     ); } while (0);


    if (setsockopt (*listener, 
# 2727 "project/goaccess/src/websocket.c" 3 4
                              0xffff
# 2727 "project/goaccess/src/websocket.c"
                                        , 
# 2727 "project/goaccess/src/websocket.c" 3 4
                                          0x0004
# 2727 "project/goaccess/src/websocket.c"
                                                      , &ov, sizeof (ov)) == -1)
      do { (void) endwin (); fprintf (
# 2728 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2728 "project/goaccess/src/websocket.c"
     , "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:16"); fprintf (
# 2728 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2728 "project/goaccess/src/websocket.c"
     , "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (
# 2728 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2728 "project/goaccess/src/websocket.c"
     , "\nFatal error has occurred"); fprintf (
# 2728 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2728 "project/goaccess/src/websocket.c"
     , "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/websocket.c", __FUNCTION__, 2728); fprintf (
# 2728 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2728 "project/goaccess/src/websocket.c"
     , "Unable to set setsockopt: %s.", strerror (
# 2728 "project/goaccess/src/websocket.c" 3 4
     (*__error())
# 2728 "project/goaccess/src/websocket.c"
     )); fprintf (
# 2728 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2728 "project/goaccess/src/websocket.c"
     , "\n\n"); do { dbg_fprintf ("Unable to set setsockopt: %s.", strerror (
# 2728 "project/goaccess/src/websocket.c" 3 4
     (*__error())
# 2728 "project/goaccess/src/websocket.c"
     )); } while (0); exit(
# 2728 "project/goaccess/src/websocket.c" 3 4
     1
# 2728 "project/goaccess/src/websocket.c"
     ); } while (0);


    if (bind (*listener, ai->ai_addr, ai->ai_addrlen) != 0)
      do { (void) endwin (); fprintf (
# 2732 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2732 "project/goaccess/src/websocket.c"
     , "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:16"); fprintf (
# 2732 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2732 "project/goaccess/src/websocket.c"
     , "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (
# 2732 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2732 "project/goaccess/src/websocket.c"
     , "\nFatal error has occurred"); fprintf (
# 2732 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2732 "project/goaccess/src/websocket.c"
     , "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/websocket.c", __FUNCTION__, 2732); fprintf (
# 2732 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2732 "project/goaccess/src/websocket.c"
     , "Unable to set bind: %s.", strerror (
# 2732 "project/goaccess/src/websocket.c" 3 4
     (*__error())
# 2732 "project/goaccess/src/websocket.c"
     )); fprintf (
# 2732 "project/goaccess/src/websocket.c" 3 4
     __stderrp
# 2732 "project/goaccess/src/websocket.c"
     , "\n\n"); do { dbg_fprintf ("Unable to set bind: %s.", strerror (
# 2732 "project/goaccess/src/websocket.c" 3 4
     (*__error())
# 2732 "project/goaccess/src/websocket.c"
     )); } while (0); exit(
# 2732 "project/goaccess/src/websocket.c" 3 4
     1
# 2732 "project/goaccess/src/websocket.c"
     ); } while (0);
    freeaddrinfo (ai);
  }


  if (listen (*listener, 
# 2737 "project/goaccess/src/websocket.c" 3 4
                        128
# 2737 "project/goaccess/src/websocket.c"
                                 ) == -1)
    do { (void) endwin (); fprintf (
# 2738 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2738 "project/goaccess/src/websocket.c"
   , "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:16"); fprintf (
# 2738 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2738 "project/goaccess/src/websocket.c"
   , "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (
# 2738 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2738 "project/goaccess/src/websocket.c"
   , "\nFatal error has occurred"); fprintf (
# 2738 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2738 "project/goaccess/src/websocket.c"
   , "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/websocket.c", __FUNCTION__, 2738); fprintf (
# 2738 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2738 "project/goaccess/src/websocket.c"
   , "Unable to listen: %s.", strerror (
# 2738 "project/goaccess/src/websocket.c" 3 4
   (*__error())
# 2738 "project/goaccess/src/websocket.c"
   )); fprintf (
# 2738 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2738 "project/goaccess/src/websocket.c"
   , "\n\n"); do { dbg_fprintf ("Unable to listen: %s.", strerror (
# 2738 "project/goaccess/src/websocket.c" 3 4
   (*__error())
# 2738 "project/goaccess/src/websocket.c"
   )); } while (0); exit(
# 2738 "project/goaccess/src/websocket.c" 3 4
   1
# 2738 "project/goaccess/src/websocket.c"
   ); } while (0);
}



void
ws_start (WSServer * server) {
  int listener = -1;
  struct pollfd *cfdstate = 
# 2746 "project/goaccess/src/websocket.c" 3 4
                           ((void *)0)
# 2746 "project/goaccess/src/websocket.c"
                               , *pfd, *efd;
  nfds_t ncfdstate = 0;
  bool run = true;

  if (server->self_pipe[0] != -1)
    set_pollfd (server->self_pipe[0], 
# 2751 "project/goaccess/src/websocket.c" 3 4
                                     0x0001
# 2751 "project/goaccess/src/websocket.c"
                                           );
# 2764 "project/goaccess/src/websocket.c"
  ws_socket (&listener);
  set_pollfd (listener, 
# 2765 "project/goaccess/src/websocket.c" 3 4
                       0x0001
# 2765 "project/goaccess/src/websocket.c"
                             );

  while (run) {


    if (ncfdstate != nfdstate) {
      free (cfdstate);
      cfdstate = xmalloc (nfdstate * sizeof (*cfdstate));
      ncfdstate = nfdstate;
    }
    
# 2775 "project/goaccess/src/websocket.c" 3 4
   __builtin___memcpy_chk (
# 2775 "project/goaccess/src/websocket.c"
   cfdstate
# 2775 "project/goaccess/src/websocket.c" 3 4
   , 
# 2775 "project/goaccess/src/websocket.c"
   fdstate, ncfdstate * sizeof (*cfdstate)
# 2775 "project/goaccess/src/websocket.c" 3 4
   , __builtin_object_size (
# 2775 "project/goaccess/src/websocket.c"
   cfdstate
# 2775 "project/goaccess/src/websocket.c" 3 4
   , 0))
# 2775 "project/goaccess/src/websocket.c"
                                                             ;


    if (poll (cfdstate, nfdstate, -1) == -1) {
      switch (
# 2779 "project/goaccess/src/websocket.c" 3 4
             (*__error())
# 2779 "project/goaccess/src/websocket.c"
                  ) {
      case 
# 2780 "project/goaccess/src/websocket.c" 3 4
          4
# 2780 "project/goaccess/src/websocket.c"
               :
        do { if (0) dbg_printf ("A signal was caught on poll(2)\n"); } while (0);
        break;
      default:
        do { (void) endwin (); fprintf (
# 2784 "project/goaccess/src/websocket.c" 3 4
       __stderrp
# 2784 "project/goaccess/src/websocket.c"
       , "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:16"); fprintf (
# 2784 "project/goaccess/src/websocket.c" 3 4
       __stderrp
# 2784 "project/goaccess/src/websocket.c"
       , "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (
# 2784 "project/goaccess/src/websocket.c" 3 4
       __stderrp
# 2784 "project/goaccess/src/websocket.c"
       , "\nFatal error has occurred"); fprintf (
# 2784 "project/goaccess/src/websocket.c" 3 4
       __stderrp
# 2784 "project/goaccess/src/websocket.c"
       , "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/websocket.c", __FUNCTION__, 2784); fprintf (
# 2784 "project/goaccess/src/websocket.c" 3 4
       __stderrp
# 2784 "project/goaccess/src/websocket.c"
       , "Unable to poll: %s.", strerror (
# 2784 "project/goaccess/src/websocket.c" 3 4
       (*__error())
# 2784 "project/goaccess/src/websocket.c"
       )); fprintf (
# 2784 "project/goaccess/src/websocket.c" 3 4
       __stderrp
# 2784 "project/goaccess/src/websocket.c"
       , "\n\n"); do { dbg_fprintf ("Unable to poll: %s.", strerror (
# 2784 "project/goaccess/src/websocket.c" 3 4
       (*__error())
# 2784 "project/goaccess/src/websocket.c"
       )); } while (0); exit(
# 2784 "project/goaccess/src/websocket.c" 3 4
       1
# 2784 "project/goaccess/src/websocket.c"
       ); } while (0);
      }
    }


    efd = cfdstate + nfdstate;
    for (pfd = cfdstate; pfd < efd; pfd++) {

      if (pfd->fd == server->self_pipe[0]) {
        if (pfd->revents & 
# 2793 "project/goaccess/src/websocket.c" 3 4
                          0x0001
# 2793 "project/goaccess/src/websocket.c"
                                ) {
          do { if (0) dbg_printf ("Handled self-pipe to close event loop.\n"); } while (0);
          run = false;
          break;
        }
      } else if (pfd->fd == server->pipein->fd) {

        if (pfd->revents & 
# 2800 "project/goaccess/src/websocket.c" 3 4
                          0x0001
# 2800 "project/goaccess/src/websocket.c"
                                )
          handle_fifo (server);
      } else if (pfd->fd == server->pipeout->fd) {

        if (pfd->revents & 
# 2804 "project/goaccess/src/websocket.c" 3 4
                          0x0004
# 2804 "project/goaccess/src/websocket.c"
                                 )
          ws_write_fifo (server->pipeout, 
# 2805 "project/goaccess/src/websocket.c" 3 4
                                         ((void *)0)
# 2805 "project/goaccess/src/websocket.c"
                                             , 0);
      } else if (pfd->fd == listener) {

        if (pfd->revents & 
# 2808 "project/goaccess/src/websocket.c" 3 4
                          0x0001
# 2808 "project/goaccess/src/websocket.c"
                                )
          handle_accept (listener, server);
      } else {

        if (pfd->revents & 
# 2812 "project/goaccess/src/websocket.c" 3 4
                          0x0001
# 2812 "project/goaccess/src/websocket.c"
                                ) {
          if (server->closing) {
            struct pollfd *ffd = get_pollfd (pfd->fd);
            if (ffd != 
# 2815 "project/goaccess/src/websocket.c" 3 4
                      ((void *)0)
# 2815 "project/goaccess/src/websocket.c"
                          )
              ffd->events &= ~
# 2816 "project/goaccess/src/websocket.c" 3 4
                             0x0001
# 2816 "project/goaccess/src/websocket.c"
                                   ;
          } else
            handle_reads (pfd->fd, server);
        }

        if (pfd->revents & 
# 2821 "project/goaccess/src/websocket.c" 3 4
                          0x0004
# 2821 "project/goaccess/src/websocket.c"
                                 )
          handle_writes (pfd->fd, server);
      }
    }
  }

  free (cfdstate);
  ws_close (listener);
  if (server->self_pipe[0] != -1)
    unset_pollfd (server->self_pipe[0]);

  if (wsconfig.unix_socket) {
    unlink (wsconfig.unix_socket);
  }
}



void
ws_set_config_origin (const char *origin) {
  wsconfig.origin = origin;
}


void
ws_set_config_frame_size (int max_frm_size) {
  wsconfig.max_frm_size = max_frm_size;
}


void
ws_set_config_pipein (const char *pipein) {
  wsconfig.pipein = pipein;
}


void
ws_set_config_pipeout (const char *pipeout) {
  wsconfig.pipeout = pipeout;
}


void
ws_set_config_accesslog (const char *accesslog) {
  wsconfig.accesslog = accesslog;

  if (access_log_open (wsconfig.accesslog) == 1)
    do { (void) endwin (); fprintf (
# 2868 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2868 "project/goaccess/src/websocket.c"
   , "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:16"); fprintf (
# 2868 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2868 "project/goaccess/src/websocket.c"
   , "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (
# 2868 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2868 "project/goaccess/src/websocket.c"
   , "\nFatal error has occurred"); fprintf (
# 2868 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2868 "project/goaccess/src/websocket.c"
   , "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/websocket.c", __FUNCTION__, 2868); fprintf (
# 2868 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2868 "project/goaccess/src/websocket.c"
   , "Unable to open access log: %s.", strerror (
# 2868 "project/goaccess/src/websocket.c" 3 4
   (*__error())
# 2868 "project/goaccess/src/websocket.c"
   )); fprintf (
# 2868 "project/goaccess/src/websocket.c" 3 4
   __stderrp
# 2868 "project/goaccess/src/websocket.c"
   , "\n\n"); do { dbg_fprintf ("Unable to open access log: %s.", strerror (
# 2868 "project/goaccess/src/websocket.c" 3 4
   (*__error())
# 2868 "project/goaccess/src/websocket.c"
   )); } while (0); exit(
# 2868 "project/goaccess/src/websocket.c" 3 4
   1
# 2868 "project/goaccess/src/websocket.c"
   ); } while (0);
}


void
ws_set_config_strict (int strict) {
  wsconfig.strict = strict;
}


void
ws_set_config_echomode (int echomode) {
  wsconfig.echomode = echomode;
}


void
ws_set_config_host (const char *host) {
  wsconfig.host = host;
}


void
ws_set_config_unix_socket (const char *unix_socket) {
  wsconfig.unix_socket = unix_socket;
}


void
ws_set_config_port (const char *port) {
  wsconfig.port = port;
}


void
ws_set_config_sslcert (const char *sslcert) {
  wsconfig.sslcert = sslcert;
}


void
ws_set_config_sslkey (const char *sslkey) {
  wsconfig.sslkey = sslkey;
}


WSServer *
ws_init (const char *host, const char *port, void (*initopts) (void)) {
  WSServer *server = new_wsserver ();
  server->pipein = new_wspipein ();
  server->pipeout = new_wspipeout ();
  server->self_pipe[0] = server->self_pipe[1] = -1;

  wsconfig.accesslog = 
# 2921 "project/goaccess/src/websocket.c" 3 4
                      ((void *)0)
# 2921 "project/goaccess/src/websocket.c"
                          ;
  wsconfig.host = host;
  wsconfig.unix_socket = 
# 2923 "project/goaccess/src/websocket.c" 3 4
                        ((void *)0)
# 2923 "project/goaccess/src/websocket.c"
                            ;
  wsconfig.max_frm_size = 1048576;
  wsconfig.origin = 
# 2925 "project/goaccess/src/websocket.c" 3 4
                   ((void *)0)
# 2925 "project/goaccess/src/websocket.c"
                       ;
  wsconfig.pipein = 
# 2926 "project/goaccess/src/websocket.c" 3 4
                   ((void *)0)
# 2926 "project/goaccess/src/websocket.c"
                       ;
  wsconfig.pipeout = 
# 2927 "project/goaccess/src/websocket.c" 3 4
                    ((void *)0)
# 2927 "project/goaccess/src/websocket.c"
                        ;
  wsconfig.sslcert = 
# 2928 "project/goaccess/src/websocket.c" 3 4
                    ((void *)0)
# 2928 "project/goaccess/src/websocket.c"
                        ;
  wsconfig.sslkey = 
# 2929 "project/goaccess/src/websocket.c" 3 4
                   ((void *)0)
# 2929 "project/goaccess/src/websocket.c"
                       ;
  wsconfig.port = port;
  wsconfig.strict = 0;
  wsconfig.use_ssl = 0;

  initopts ();
  ws_fifo (server);

  return server;
}
