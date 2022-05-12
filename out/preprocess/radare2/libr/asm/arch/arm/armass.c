# 0 "project/radare2/libr/asm/arch/arm/armass.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/arm/armass.c"


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
# 4 "project/radare2/libr/asm/arch/arm/armass.c" 2
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
# 5 "project/radare2/libr/asm/arch/arm/armass.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ctype.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 1 3 4
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 1 3 4
# 47 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ct_rune_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ct_rune_t.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;
# 48 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rune_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rune_t.h" 3 4
typedef __darwin_rune_t rune_t;
# 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 3 4
typedef __darwin_wchar_t wchar_t;
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
# 6 "project/radare2/libr/asm/arch/arm/armass.c" 2
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
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
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








# 7 "project/radare2/libr/asm/arch/arm/armass.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 1 3 4





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
# 415 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
} max_align_t;
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 1 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 3 4

void __assert_rtn(const char *, const char *, int, const char *) __attribute__((__noreturn__)) __attribute__((__cold__)) ;




# 13 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 244 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 1 3 4
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 3 4
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
# 7 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_regex.h" 1 3 4




# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_list.h" 1 3 4




# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_flist.h" 1 3 4
# 18 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_flist.h" 3 4
__attribute__((visibility("default"))) void **r_flist_resize(void **it, int n);
# 32 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_flist.h" 3 4
static inline void **r_flist_init(void **it, int n) {
 *it = it;
 __builtin___memset_chk (++it, 0, (n+1) * sizeof (void*), __builtin_object_size (++it, 0));
 return it;
}

static inline void **r_flist_new(int n) {
 void **it;
 if (((n + 2) * sizeof(void*)) < sizeof(void*)) return ((void *)0);
 if (!(it = (void **)calloc ((n + 2), sizeof (void*)))) {
  return ((void *)0);
 }
 return r_flist_init (it, n);
}

static inline void **r_flist_prev(void **it) {
 void **p = it--;
 return (it==*it)?p:it;
}

static inline void r_flist_set(void **it, int idx, void *data) {
 while(it!=*it) it--; it++;;
 it[idx] = data;
}

static inline void r_flist_delete(void **it, int idx) {
 while(it!=*it) it--; it++;;
 free (it[idx]);
 for(it += idx; *it; it++) *it = *(it+1);
}





static inline void r_flist_free(void **it) {
 void *pos;
 while(it!=*it) it--; it++;; while (*it!=0 && (pos = *(it++)))
  free (pos);
 while(it!=*it) it--; it++;;
 free (--it);
}

static inline int r_flist_length (void **it) {
 void *pos;
 int len = 0;
 while(it!=*it) it--; it++;; while (*it!=0 && (pos = *(it++)))
  len++;
 return len;
}
# 6 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_list.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdb.h" 1 3 4
# 13 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdb.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/types.h" 1 3 4
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/types.h" 3 4
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







# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/types.h" 2 3 4
# 115 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/types.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/config.h" 1 3 4
# 116 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/types.h" 2 3 4

static inline int seek_set(int fd, off_t pos) {
 return ((fd == -1) || (lseek (fd, (off_t) pos, 0) == -1))? 0:1;
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
# 14 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdb.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdbht.h" 1 3 4



# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_pp.h" 1 3 4
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_pp.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_inc.h" 1 3 4
# 49 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_inc.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ls.h" 1 3 4






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
 _Bool sorted;
} SdbList;
# 46 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ls.h" 3 4
__attribute__ ((visibility ("default"))) SdbList *ls_new(void);
__attribute__ ((visibility ("default"))) SdbList *ls_newf(SdbListFree freefn);
__attribute__ ((visibility ("default"))) SdbListIter *ls_append(SdbList *list, void *data);
__attribute__ ((visibility ("default"))) SdbListIter *ls_prepend(SdbList *list, void *data);

__attribute__ ((visibility ("default"))) _Bool ls_sort(SdbList *list, SdbListComparator cmp);
__attribute__ ((visibility ("default"))) _Bool ls_merge_sort(SdbList *list, SdbListComparator cmp);

__attribute__ ((visibility ("default"))) void ls_delete(SdbList *list, SdbListIter *iter);
__attribute__ ((visibility ("default"))) _Bool ls_delete_data(SdbList *list, void *ptr);
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
# 50 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_inc.h" 2 3 4



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
typedef _Bool (*HtPPForeachCallback)(void *user, const void *, const void *);

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

__attribute__ ((visibility ("default"))) _Bool ht_pp_insert(HtPP* ht, const void * key, void * value);

__attribute__ ((visibility ("default"))) _Bool ht_pp_update(HtPP* ht, const void * key, void * value);

__attribute__ ((visibility ("default"))) _Bool ht_pp_update_key(HtPP* ht, const void * old_key, const void * new_key);

__attribute__ ((visibility ("default"))) _Bool ht_pp_delete(HtPP* ht, const void * key);

__attribute__ ((visibility ("default"))) void * ht_pp_find(HtPP* ht, const void * key, _Bool* found);




__attribute__ ((visibility ("default"))) void ht_pp_foreach(HtPP *ht, HtPPForeachCallback cb, void *user);

__attribute__ ((visibility ("default"))) HtPPKv* ht_pp_find_kv(HtPP* ht, const void * key, _Bool* found);
__attribute__ ((visibility ("default"))) _Bool ht_pp_insert_kv(HtPP *ht, HtPPKv *kv, _Bool update);
# 12 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_pp.h" 2 3 4

__attribute__ ((visibility ("default"))) HtPP* ht_pp_new0(void);
__attribute__ ((visibility ("default"))) HtPP* ht_pp_new(HtPPDupValue valdup, HtPPKvFreeFunc pair_free, HtPPCalcSizeV valueSize);
__attribute__ ((visibility ("default"))) HtPP* ht_pp_new_size(unsigned int initial_size, HtPPDupValue valdup, HtPPKvFreeFunc pair_free, HtPPCalcSizeV valueSize);
# 5 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdbht.h" 2 3 4


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

__attribute__ ((visibility ("default"))) _Bool sdb_ht_insert(HtPP* ht, const char* key, const char* value);

__attribute__ ((visibility ("default"))) _Bool sdb_ht_insert_kvp(HtPP* ht, SdbKv *kvp, _Bool update);

__attribute__ ((visibility ("default"))) _Bool sdb_ht_update(HtPP* ht, const char* key, const char* value);

__attribute__ ((visibility ("default"))) _Bool sdb_ht_delete(HtPP* ht, const char* key);

__attribute__ ((visibility ("default"))) char* sdb_ht_find(HtPP* ht, const char* key, _Bool* found);

__attribute__ ((visibility ("default"))) SdbKv* sdb_ht_find_kvp(HtPP* ht, const char* key, _Bool* found);
# 15 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdb.h" 2 3 4

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/dict.h" 1 3 4




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
__attribute__ ((visibility ("default"))) _Bool dict_init(dict *m, unsigned int, dict_freecb f);
__attribute__ ((visibility ("default"))) void dict_fini(dict *m);
__attribute__ ((visibility ("default"))) void dict_stats(dict *m);
__attribute__ ((visibility ("default"))) dicti dict_hash(const char *s);
__attribute__ ((visibility ("default"))) _Bool dict_set(dict *m, dicti k, dicti v, void *u);
__attribute__ ((visibility ("default"))) dictkv *dict_getr(dict *m, dicti k);
__attribute__ ((visibility ("default"))) dictkv *dict_getr(dict *m, dicti k);
__attribute__ ((visibility ("default"))) dicti dict_get(dict *m, dicti k);
__attribute__ ((visibility ("default"))) dicti dict_get(dict *m, dicti k);
__attribute__ ((visibility ("default"))) void *dict_getu(dict *m, dicti k);
__attribute__ ((visibility ("default"))) _Bool dict_add(dict *m, dicti k, dicti v, void *u);
__attribute__ ((visibility ("default"))) _Bool dict_del(dict *m, dicti k);
__attribute__ ((visibility ("default"))) void dict_foreach(dict *m, dictkv_cb cb, void *u);
# 17 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdb.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/cdb.h" 1 3 4
# 15 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/cdb.h" 3 4
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


_Bool cdb_getkvlen(struct cdb *db, unsigned int *klen, unsigned int *vlen, unsigned int pos);
void cdb_free(struct cdb *);
_Bool cdb_init(struct cdb *, int fd);
void cdb_findstart(struct cdb *);
_Bool cdb_read(struct cdb *, char *, unsigned int, unsigned int);
int cdb_findnext(struct cdb *, unsigned int u, const char *, unsigned int);
# 18 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdb.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/cdb_make.h" 1 3 4





# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/buffer.h" 1 3 4





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
# 49 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/buffer.h" 3 4
extern int buffer_copy(buffer *,buffer *);

extern buffer *buffer_0;
extern buffer *buffer_0small;
extern buffer *buffer_1;
extern buffer *buffer_1small;
extern buffer *buffer_2;
# 7 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/cdb_make.h" 2 3 4




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
# 19 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdb.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdb_version.h" 1 3 4
# 20 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdb.h" 2 3 4
# 87 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdb.h" 3 4
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
typedef struct sdb_gperf_t {
 const char *name;
 const char *(*get)(const char *k);
 unsigned int *(*hash)(const char *k);
 _Bool (*foreach)(GperfForeachCallback cb, void *user);
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
 _Bool timestamped;
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
__attribute__ ((visibility ("default"))) _Bool sdb_free(Sdb* s);
__attribute__ ((visibility ("default"))) void sdb_file(Sdb* s, const char *dir);
__attribute__ ((visibility ("default"))) _Bool sdb_merge(Sdb* d, Sdb *s);
__attribute__ ((visibility ("default"))) int sdb_count(Sdb* s);
__attribute__ ((visibility ("default"))) void sdb_reset(Sdb* s);
__attribute__ ((visibility ("default"))) void sdb_setup(Sdb* s, int options);
__attribute__ ((visibility ("default"))) void sdb_drain(Sdb*, Sdb*);


__attribute__ ((visibility ("default"))) void sdb_copy(Sdb *src, Sdb *dst);

__attribute__ ((visibility ("default"))) _Bool sdb_stats(Sdb *s, unsigned int *disk, unsigned int *mem);
__attribute__ ((visibility ("default"))) _Bool sdb_dump_hasnext (Sdb* s);

typedef _Bool (*SdbForeachCallback)(void *user, const char *k, const char *v);
__attribute__ ((visibility ("default"))) _Bool sdb_foreach(Sdb* s, SdbForeachCallback cb, void *user);
__attribute__ ((visibility ("default"))) SdbList *sdb_foreach_list(Sdb* s, _Bool sorted);
__attribute__ ((visibility ("default"))) SdbList *sdb_foreach_list_filter(Sdb* s, SdbForeachCallback filter, _Bool sorted);
__attribute__ ((visibility ("default"))) SdbList *sdb_foreach_match(Sdb* s, const char *expr, _Bool sorted);

__attribute__ ((visibility ("default"))) int sdb_query(Sdb* s, const char *cmd);
__attribute__ ((visibility ("default"))) int sdb_queryf(Sdb* s, const char *fmt, ...);
__attribute__ ((visibility ("default"))) int sdb_query_lines(Sdb *s, const char *cmd);
__attribute__ ((visibility ("default"))) char *sdb_querys(Sdb* s, char *buf, size_t len, const char *cmd);
__attribute__ ((visibility ("default"))) char *sdb_querysf(Sdb* s, char *buf, size_t buflen, const char *fmt, ...);
__attribute__ ((visibility ("default"))) int sdb_query_file(Sdb *s, const char* file);
__attribute__ ((visibility ("default"))) _Bool sdb_exists(Sdb*, const char *key);
__attribute__ ((visibility ("default"))) _Bool sdb_remove(Sdb*, const char *key, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_unset(Sdb*, const char *key, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_unset_like(Sdb *s, const char *k);
__attribute__ ((visibility ("default"))) char** sdb_like(Sdb *s, const char *k, const char *v, SdbForeachCallback cb);


typedef struct sdb_diff_t {
 const SdbList *path;
 const char *k;
 const char *v;
 _Bool add;
} SdbDiff;


__attribute__ ((visibility ("default"))) int sdb_diff_format(char *str, int size, const SdbDiff *diff);

typedef void (*SdbDiffCallback)(const SdbDiff *diff, void *user);



__attribute__ ((visibility ("default"))) _Bool sdb_diff(Sdb *a, Sdb *b, SdbDiffCallback cb, void *cb_user);


__attribute__ ((visibility ("default"))) char *sdb_get(Sdb*, const char *key, unsigned int *cas);



__attribute__ ((visibility ("default"))) char *sdb_get_len(Sdb*, const char *key, int *vlen, unsigned int *cas);


__attribute__ ((visibility ("default"))) const char *sdb_const_get(Sdb*, const char *key, unsigned int *cas);



__attribute__ ((visibility ("default"))) const char *sdb_const_get_len(Sdb* s, const char *key, int *vlen, unsigned int *cas);
__attribute__ ((visibility ("default"))) int sdb_set(Sdb*, const char *key, const char *data, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_set_owned(Sdb* s, const char *key, char *val, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_concat(Sdb *s, const char *key, const char *value, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_uncat(Sdb *s, const char *key, const char *value, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_add(Sdb* s, const char *key, const char *val, unsigned int cas);
__attribute__ ((visibility ("default"))) _Bool sdb_sync(Sdb*);
__attribute__ ((visibility ("default"))) void sdbkv_free(SdbKv *kv);


__attribute__ ((visibility ("default"))) _Bool sdb_num_exists(Sdb*, const char *key);
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


__attribute__ ((visibility ("default"))) _Bool sdb_disk_create(Sdb* s);
__attribute__ ((visibility ("default"))) _Bool sdb_disk_insert(Sdb* s, const char *key, const char *val);
__attribute__ ((visibility ("default"))) _Bool sdb_disk_finish(Sdb* s);
__attribute__ ((visibility ("default"))) _Bool sdb_disk_unlink(Sdb* s);


__attribute__ ((visibility ("default"))) _Bool sdb_text_save_fd(Sdb *s, int fd, _Bool sort);
__attribute__ ((visibility ("default"))) _Bool sdb_text_save(Sdb *s, const char *file, _Bool sort);
__attribute__ ((visibility ("default"))) _Bool sdb_text_load_buf(Sdb *s, char *buf, size_t sz);
__attribute__ ((visibility ("default"))) _Bool sdb_text_load(Sdb *s, const char *file);
__attribute__ ((visibility ("default"))) _Bool sdb_text_check(Sdb *s, const char *file);


__attribute__ ((visibility ("default"))) void sdb_dump_begin(Sdb* s);
__attribute__ ((visibility ("default"))) SdbKv *sdb_dump_next(Sdb* s);
__attribute__ ((visibility ("default"))) _Bool sdb_dump_dupnext(Sdb* s, char *key, char **value, int *_vlen);


__attribute__ ((visibility ("default"))) _Bool sdb_journal_close(Sdb *s);
__attribute__ ((visibility ("default"))) _Bool sdb_journal_open(Sdb *s);
__attribute__ ((visibility ("default"))) int sdb_journal_load(Sdb *s);
__attribute__ ((visibility ("default"))) _Bool sdb_journal_log(Sdb *s, const char *key, const char *val);
__attribute__ ((visibility ("default"))) _Bool sdb_journal_clear(Sdb *s);
__attribute__ ((visibility ("default"))) _Bool sdb_journal_unlink(Sdb *s);


__attribute__ ((visibility ("default"))) char *sdb_itoa(unsigned long long n, char *s, int base);
__attribute__ ((visibility ("default"))) unsigned long long sdb_atoi(const char *s);
__attribute__ ((visibility ("default"))) const char *sdb_itoca(unsigned long long n);


__attribute__ ((visibility ("default"))) _Bool sdb_lock(const char *s);
__attribute__ ((visibility ("default"))) const char *sdb_lock_file(const char *f);
__attribute__ ((visibility ("default"))) void sdb_unlock(const char *s);
__attribute__ ((visibility ("default"))) _Bool sdb_unlink(Sdb* s);
__attribute__ ((visibility ("default"))) int sdb_lock_wait(const char *s __attribute__((__unused__)));


__attribute__ ((visibility ("default"))) _Bool sdb_expire_set(Sdb* s, const char *key, unsigned long long expire, unsigned int cas);
__attribute__ ((visibility ("default"))) unsigned long long sdb_expire_get(Sdb* s, const char *key, unsigned int *cas);
__attribute__ ((visibility ("default"))) unsigned long long sdb_now(void);
__attribute__ ((visibility ("default"))) unsigned long long sdb_unow(void);
__attribute__ ((visibility ("default"))) unsigned int sdb_hash(const char *key);
__attribute__ ((visibility ("default"))) unsigned int sdb_hash_len(const char *key, unsigned int *len);
__attribute__ ((visibility ("default"))) unsigned char sdb_hash_byte(const char *s);



__attribute__ ((visibility ("default"))) _Bool sdb_isjson(const char *k);
__attribute__ ((visibility ("default"))) char *sdb_json_get_str (const char *json, const char *path);
__attribute__ ((visibility ("default"))) _Bool sdb_json_get_bool(const char *json, const char *path);

__attribute__ ((visibility ("default"))) char *sdb_json_get(Sdb* s, const char *key, const char *p, unsigned int *cas);
__attribute__ ((visibility ("default"))) _Bool sdb_json_set(Sdb* s, const char *k, const char *p, const char *v, unsigned int cas);
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
__attribute__ ((visibility ("default"))) _Bool sdb_ns_unset(Sdb *s, const char *name, Sdb *r);


__attribute__ ((visibility ("default"))) _Bool sdb_array_contains(Sdb* s, const char *key, const char *val, unsigned int *cas);
__attribute__ ((visibility ("default"))) _Bool sdb_array_contains_num(Sdb *s, const char *key, unsigned long long val, unsigned int *cas);
__attribute__ ((visibility ("default"))) int sdb_array_indexof(Sdb *s, const char *key, const char *val, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_array_set(Sdb* s, const char *key, int idx, const char *val, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_array_set_num(Sdb* s, const char *key, int idx, unsigned long long val, unsigned int cas);
__attribute__ ((visibility ("default"))) _Bool sdb_array_append(Sdb *s, const char *key, const char *val, unsigned int cas);
__attribute__ ((visibility ("default"))) _Bool sdb_array_append_num(Sdb *s, const char *key, unsigned long long val, unsigned int cas);
__attribute__ ((visibility ("default"))) _Bool sdb_array_prepend(Sdb *s, const char *key, const char *val, unsigned int cas);
__attribute__ ((visibility ("default"))) _Bool sdb_array_prepend_num(Sdb *s, const char *key, unsigned long long val, unsigned int cas);
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


__attribute__ ((visibility ("default"))) _Bool sdb_array_push(Sdb *s, const char *key, const char *val, unsigned int cas);



__attribute__ ((visibility ("default"))) char *sdb_array_pop(Sdb *s, const char *key, unsigned int *cas);


__attribute__ ((visibility ("default"))) int sdb_array_push_num(Sdb *s, const char *key, unsigned long long num, unsigned int cas);


__attribute__ ((visibility ("default"))) unsigned long long sdb_array_pop_num(Sdb *s, const char *key, unsigned int *cas);

__attribute__ ((visibility ("default"))) char *sdb_array_pop_head(Sdb *s, const char *key, unsigned int *cas);
__attribute__ ((visibility ("default"))) char *sdb_array_pop_tail(Sdb *s, const char *key, unsigned int *cas);

typedef void (*SdbHook)(Sdb *s, void *user, const char *k, const char *v);

__attribute__ ((visibility ("default"))) void sdb_global_hook(SdbHook hook, void *user);
__attribute__ ((visibility ("default"))) _Bool sdb_hook(Sdb* s, SdbHook cb, void* user);
__attribute__ ((visibility ("default"))) _Bool sdb_unhook(Sdb* s, SdbHook h);
__attribute__ ((visibility ("default"))) int sdb_hook_call(Sdb *s, const char *k, const char *v);
__attribute__ ((visibility ("default"))) void sdb_hook_free(Sdb *s);

__attribute__ ((visibility ("default"))) int sdb_isnum(const char *s);
__attribute__ ((visibility ("default"))) _Bool sdb_isempty(Sdb *s);

__attribute__ ((visibility ("default"))) const char *sdb_type(const char *k);
__attribute__ ((visibility ("default"))) _Bool sdb_match(const char *str, const char *glob);
__attribute__ ((visibility ("default"))) int sdb_bool_set(Sdb *db, const char *str, _Bool v, unsigned int cas);
__attribute__ ((visibility ("default"))) _Bool sdb_bool_get(Sdb *db, const char *str, unsigned int *cas);


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
# 7 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_list.h" 2 3 4






typedef void (*RListFree)(void *ptr);

typedef struct r_list_iter_t {
 void *data;
 struct r_list_iter_t *n, *p;
} RListIter;

typedef struct r_list_t {
 RListIter *head;
 RListIter *tail;
 RListFree free;
 int length;
 _Bool sorted;
} RList;

typedef struct r_list_range_t {
 HtPP *h;
 RList *l;
} RListRange;


typedef int (*RListComparator)(const void *a, const void *b);


typedef struct r_oflist_t {
 RList super;
 void** *array;
} ROFList;
# 73 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_list.h" 3 4
__attribute__((visibility("default"))) RList *r_list_new(void);
__attribute__((visibility("default"))) RList *r_list_newf(RListFree f);
__attribute__((visibility("default"))) RListIter *r_list_iter_get_next(RListIter *list);
__attribute__((visibility("default"))) RListIter *r_list_iter_get_prev(RListIter *list);
__attribute__((visibility("default"))) int r_list_set_n(RList *list, int n, void *p);
__attribute__((visibility("default"))) void *r_list_iter_get_data(RListIter *list);
__attribute__((visibility("default"))) RListIter *r_list_append(RList *list, void *data);
__attribute__((visibility("default"))) RListIter *r_list_prepend(RList *list, void *data);
__attribute__((visibility("default"))) RListIter *r_list_insert(RList *list, unsigned int n, void *data);
__attribute__((visibility("default"))) int r_list_length(const RList *list);
__attribute__((visibility("default"))) size_t r_list_iter_length(RListIter *iter);
__attribute__((visibility("default"))) void *r_list_first(const RList *list);
__attribute__((visibility("default"))) void *r_list_last(const RList *list);
__attribute__((visibility("default"))) RListIter *r_list_add_sorted(RList *list, void *data, RListComparator cmp);
__attribute__((visibility("default"))) void r_list_sort(RList *list, RListComparator cmp);
__attribute__((visibility("default"))) void r_list_merge_sort(RList *list, RListComparator cmp);
__attribute__((visibility("default"))) void r_list_insertion_sort(RList *list, RListComparator cmp);
__attribute__((visibility("default"))) RList *r_list_uniq(const RList *list, RListComparator cmp);
__attribute__((visibility("default"))) void r_list_init(RList *list);
__attribute__((visibility("default"))) void r_list_delete(RList *list, RListIter *iter);
__attribute__((visibility("default"))) _Bool r_list_delete_data(RList *list, void *ptr);
__attribute__((visibility("default"))) void r_list_iter_init(RListIter *iter, RList *list);
__attribute__((visibility("default"))) void r_list_purge(RList *list);
__attribute__((visibility("default"))) void r_list_free(RList *list);
__attribute__((visibility("default"))) RListIter *r_list_item_new(void *data);
__attribute__((visibility("default"))) void r_list_split(RList *list, void *ptr);
__attribute__((visibility("default"))) void r_list_split_iter(RList *list, RListIter *iter);
__attribute__((visibility("default"))) int r_list_join(RList *list1, RList *list2);
__attribute__((visibility("default"))) void *r_list_get_n(const RList *list, int n);
__attribute__((visibility("default"))) int r_list_del_n(RList *list, int n);
__attribute__((visibility("default"))) void *r_list_get_top(const RList *list);
__attribute__((visibility("default"))) void *r_list_get_bottom(const RList *list);
__attribute__((visibility("default"))) void r_list_iter_to_top(RList *list, RListIter *iter);
__attribute__((visibility("default"))) void *r_list_pop(RList *list);
__attribute__((visibility("default"))) void *r_list_pop_head(RList *list);
__attribute__((visibility("default"))) void r_list_reverse(RList *list);
__attribute__((visibility("default"))) RList *r_list_clone(const RList *list);
__attribute__((visibility("default"))) char *r_list_to_str(RList *list, char ch);


__attribute__((visibility("default"))) RListIter *r_list_contains(const RList *list, const void *p);
__attribute__((visibility("default"))) RListIter *r_list_find(const RList *list, const void *p, RListComparator cmp);
# 6 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_regex.h" 2 3 4






typedef struct r_regex_t {
 int re_magic;
 size_t re_nsub;
 const char *re_endp;
 struct re_guts *re_g;
 int re_flags;
} RRegex;

typedef struct r_regmatch_t {
 long long rm_so;
 long long rm_eo;
} RRegexMatch;
# 65 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_regex.h" 3 4
__attribute__((visibility("default"))) int r_regex_run(const char *pattern, const char *flags, const char *text);
__attribute__((visibility("default"))) _Bool r_regex_match(const char *pattern, const char *flags, const char *text);

__attribute__((visibility("default"))) int r_regex_flags(const char *flags);


__attribute__((visibility("default"))) RRegex *r_regex_new(const char *pattern, const char *cflags);
__attribute__((visibility("default"))) void r_regex_free(RRegex *);
__attribute__((visibility("default"))) int r_regex_init(RRegex*, const char *pattern, int flags);
__attribute__((visibility("default"))) void r_regex_fini(RRegex *);

__attribute__((visibility("default"))) _Bool r_regex_check(const RRegex *rr, const char *str);
__attribute__((visibility("default"))) int r_regex_exec(const RRegex *preg, const char *string, size_t nmatch, RRegexMatch __pmatch[], int eflags);
__attribute__((visibility("default"))) RList *r_regex_match_list(RRegex *rx, const char *text);
__attribute__((visibility("default"))) char *r_regex_error(RRegex *rx, int errcode);
# 8 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_getopt.h" 1 3 4







# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 1 3 4
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_getopt.h" 2 3 4

typedef struct r_getopt_t {
 int err;
 int ind;
 int opt;
 int reset;
 const char *arg;

 int argc;
 const char **argv;
 const char *ostr;
} RGetopt;

__attribute__((visibility("default"))) void r_getopt_init(RGetopt *go, int argc, const char **argv, const char *ostr);
__attribute__((visibility("default"))) int r_getopt_next(RGetopt *opt);
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_skiplist.h" 1 3 4
# 19 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_skiplist.h" 3 4
typedef struct r_skiplist_node_t {
 void *data;
 struct r_skiplist_node_t **forward;
} RSkipListNode;

typedef struct r_skiplist_t {
 RSkipListNode *head;
 int list_level;
 int size;
 RListFree freefn;
 RListComparator compare;
} RSkipList;

__attribute__((visibility("default"))) RSkipList* r_skiplist_new(RListFree freefn, RListComparator comparefn);
__attribute__((visibility("default"))) void r_skiplist_free(RSkipList *list);
__attribute__((visibility("default"))) void r_skiplist_purge(RSkipList *list);
__attribute__((visibility("default"))) RSkipListNode* r_skiplist_insert(RSkipList* list, void* data);
__attribute__((visibility("default"))) _Bool r_skiplist_insert_autofree(RSkipList* list, void* data);
__attribute__((visibility("default"))) _Bool r_skiplist_delete(RSkipList* list, void* data);
__attribute__((visibility("default"))) _Bool r_skiplist_delete_node(RSkipList *list, RSkipListNode *node);
__attribute__((visibility("default"))) RSkipListNode* r_skiplist_find(RSkipList* list, void* data);
__attribute__((visibility("default"))) RSkipListNode* r_skiplist_find_geq(RSkipList* list, void* data);
__attribute__((visibility("default"))) RSkipListNode* r_skiplist_find_leq(RSkipList* list, void* data);
__attribute__((visibility("default"))) void r_skiplist_join(RSkipList *l1, RSkipList *l2);
__attribute__((visibility("default"))) void *r_skiplist_get_first(RSkipList *list);
__attribute__((visibility("default"))) void *r_skiplist_get_n(RSkipList *list, int n);
__attribute__((visibility("default"))) void* r_skiplist_get_geq(RSkipList* list, void* data);
__attribute__((visibility("default"))) void* r_skiplist_get_leq(RSkipList* list, void* data);
__attribute__((visibility("default"))) _Bool r_skiplist_empty(RSkipList *list);
__attribute__((visibility("default"))) RList *r_skiplist_to_list(RSkipList *list);
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_th.h" 1 3 4







# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 1 3 4
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_th.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_userconf.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_th.h" 2 3 4
# 29 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_th.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/semaphore.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/semaphore.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/semaphore.h" 1 3 4
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/semaphore.h" 3 4
typedef int sem_t;








int sem_close(sem_t *);
int sem_destroy(sem_t *) __attribute__((__deprecated__));
int sem_getvalue(sem_t * restrict, int * restrict) __attribute__((__deprecated__));
int sem_init(sem_t *, int, unsigned int) __attribute__((__deprecated__));
sem_t * sem_open(const char *, int, ...);
int sem_post(sem_t *);
int sem_trywait(sem_t *);
int sem_unlink(const char *);
int sem_wait(sem_t *) __asm("_" "sem_wait" );

# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/semaphore.h" 2 3 4
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_th.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 1 3 4
# 56 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/sched.h" 1 3 4
# 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/sched.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/pthread_impl.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/sched.h" 2 3 4






struct sched_param { int sched_priority; char __opaque[4]; };




extern int sched_yield(void);
extern int sched_get_priority_min(int);
extern int sched_get_priority_max(int);

# 57 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 2 3 4
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/qos.h" 1 3 4
# 130 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/qos.h" 3 4
enum { QOS_CLASS_USER_INTERACTIVE = 0x21, QOS_CLASS_USER_INITIATED = 0x19, QOS_CLASS_DEFAULT = 0x15, QOS_CLASS_UTILITY = 0x11, QOS_CLASS_BACKGROUND = 0x09, QOS_CLASS_UNSPECIFIED = 0x00, }; typedef unsigned int qos_class_t
# 143 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/qos.h" 3 4
 ;
# 159 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/qos.h" 3 4

# 170 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/qos.h" 3 4

qos_class_t
qos_class_self(void);
# 192 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/qos.h" 3 4

qos_class_t
qos_class_main(void);


# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 2 3 4







# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 3 4

int
pthread_attr_set_qos_class_np(pthread_attr_t *__attr,
  qos_class_t __qos_class, int __relative_priority);
# 112 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 3 4

int
pthread_attr_get_qos_class_np(pthread_attr_t * restrict __attr,
  qos_class_t * restrict __qos_class,
  int * restrict __relative_priority);
# 153 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 3 4

int
pthread_set_qos_class_self_np(qos_class_t __qos_class,
  int __relative_priority);
# 184 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 3 4

int
pthread_get_qos_class_np(pthread_t __pthread,
  qos_class_t * restrict __qos_class,
  int * restrict __relative_priority);
# 211 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 3 4
typedef struct pthread_override_s* pthread_override_t;
# 263 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 3 4

pthread_override_t
pthread_override_qos_class_start_np(pthread_t __pthread,
  qos_class_t __qos_class, int __relative_priority);
# 291 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 3 4

int
pthread_override_qos_class_end_np(pthread_override_t __override);


# 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mach_port_t.h" 1 3 4
# 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mach_port_t.h" 3 4
typedef __darwin_mach_port_t mach_port_t;
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 2 3 4
# 105 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 3 4

# 218 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 3 4

int pthread_atfork(void (* )(void), void (* )(void),
  void (* )(void));


int pthread_attr_destroy(pthread_attr_t *);


int pthread_attr_getdetachstate(const pthread_attr_t *, int *);


int pthread_attr_getguardsize(const pthread_attr_t * restrict, size_t * restrict);


int pthread_attr_getinheritsched(const pthread_attr_t * restrict, int * restrict);


int pthread_attr_getschedparam(const pthread_attr_t * restrict,
  struct sched_param * restrict);


int pthread_attr_getschedpolicy(const pthread_attr_t * restrict, int * restrict);


int pthread_attr_getscope(const pthread_attr_t * restrict, int * restrict);


int pthread_attr_getstack(const pthread_attr_t * restrict,
  void * * restrict, size_t * restrict);


int pthread_attr_getstackaddr(const pthread_attr_t * restrict,
  void * * restrict);


int pthread_attr_getstacksize(const pthread_attr_t * restrict, size_t * restrict);


int pthread_attr_init(pthread_attr_t *);


int pthread_attr_setdetachstate(pthread_attr_t *, int);


int pthread_attr_setguardsize(pthread_attr_t *, size_t);


int pthread_attr_setinheritsched(pthread_attr_t *, int);


int pthread_attr_setschedparam(pthread_attr_t * restrict,
  const struct sched_param * restrict);


int pthread_attr_setschedpolicy(pthread_attr_t *, int);


int pthread_attr_setscope(pthread_attr_t *, int);


int pthread_attr_setstack(pthread_attr_t *, void *, size_t);


int pthread_attr_setstackaddr(pthread_attr_t *, void *);


int pthread_attr_setstacksize(pthread_attr_t *, size_t);


int pthread_cancel(pthread_t) __asm("_" "pthread_cancel" );


int pthread_cond_broadcast(pthread_cond_t *);


int pthread_cond_destroy(pthread_cond_t *);


int pthread_cond_init(
  pthread_cond_t * restrict,
  const pthread_condattr_t * restrict)
  __asm("_" "pthread_cond_init" );


int pthread_cond_signal(pthread_cond_t *);


int pthread_cond_timedwait(
  pthread_cond_t * restrict, pthread_mutex_t * restrict,
  const struct timespec * restrict)
  __asm("_" "pthread_cond_timedwait" );


int pthread_cond_wait(pthread_cond_t * restrict,
  pthread_mutex_t * restrict) __asm("_" "pthread_cond_wait" );


int pthread_condattr_destroy(pthread_condattr_t *);


int pthread_condattr_init(pthread_condattr_t *);


int pthread_condattr_getpshared(const pthread_condattr_t * restrict,
  int * restrict);


int pthread_condattr_setpshared(pthread_condattr_t *, int);



int pthread_create(pthread_t * restrict,
  const pthread_attr_t * restrict,
  void * (* )(void * ),
  void * restrict);







int pthread_detach(pthread_t);


int pthread_equal(pthread_t , pthread_t );


void pthread_exit(void * ) __attribute__((__noreturn__));


int pthread_getconcurrency(void);


int pthread_getschedparam(pthread_t , int * restrict,
  struct sched_param * restrict);


void* pthread_getspecific(pthread_key_t);


int pthread_join(pthread_t , void * * )
  __asm("_" "pthread_join" );


int pthread_key_create(pthread_key_t *, void (* )(void *));


int pthread_key_delete(pthread_key_t);


int pthread_mutex_destroy(pthread_mutex_t *);


int pthread_mutex_getprioceiling(const pthread_mutex_t * restrict,
  int * restrict);


int pthread_mutex_init(pthread_mutex_t * restrict,
  const pthread_mutexattr_t * restrict);


int pthread_mutex_lock(pthread_mutex_t *);


int pthread_mutex_setprioceiling(pthread_mutex_t * restrict, int,
  int * restrict);


int pthread_mutex_trylock(pthread_mutex_t *);


int pthread_mutex_unlock(pthread_mutex_t *);


int pthread_mutexattr_destroy(pthread_mutexattr_t *) __asm("_" "pthread_mutexattr_destroy" );


int pthread_mutexattr_getprioceiling(const pthread_mutexattr_t * restrict,
  int * restrict);


int pthread_mutexattr_getprotocol(const pthread_mutexattr_t * restrict,
  int * restrict);


int pthread_mutexattr_getpshared(const pthread_mutexattr_t * restrict,
  int * restrict);


int pthread_mutexattr_gettype(const pthread_mutexattr_t * restrict,
  int * restrict);


int pthread_mutexattr_getpolicy_np(const pthread_mutexattr_t * restrict,
  int * restrict);


int pthread_mutexattr_init(pthread_mutexattr_t *);


int pthread_mutexattr_setprioceiling(pthread_mutexattr_t *, int);


int pthread_mutexattr_setprotocol(pthread_mutexattr_t *, int);


int pthread_mutexattr_setpshared(pthread_mutexattr_t *, int);


int pthread_mutexattr_settype(pthread_mutexattr_t *, int);


int pthread_mutexattr_setpolicy_np(pthread_mutexattr_t *, int);



int pthread_once(pthread_once_t *, void (* )(void));


int pthread_rwlock_destroy(pthread_rwlock_t * ) __asm("_" "pthread_rwlock_destroy" );


int pthread_rwlock_init(pthread_rwlock_t * restrict,
  const pthread_rwlockattr_t * restrict)
  __asm("_" "pthread_rwlock_init" );


int pthread_rwlock_rdlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_rdlock" );


int pthread_rwlock_tryrdlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_tryrdlock" );


int pthread_rwlock_trywrlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_trywrlock" );


int pthread_rwlock_wrlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_wrlock" );


int pthread_rwlock_unlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_unlock" );


int pthread_rwlockattr_destroy(pthread_rwlockattr_t *);


int pthread_rwlockattr_getpshared(const pthread_rwlockattr_t * restrict,
  int * restrict);


int pthread_rwlockattr_init(pthread_rwlockattr_t *);


int pthread_rwlockattr_setpshared(pthread_rwlockattr_t *, int);


pthread_t pthread_self(void);


int pthread_setcancelstate(int , int * )
  __asm("_" "pthread_setcancelstate" );


int pthread_setcanceltype(int , int * )
  __asm("_" "pthread_setcanceltype" );


int pthread_setconcurrency(int);


int pthread_setschedparam(pthread_t, int, const struct sched_param *);


int pthread_setspecific(pthread_key_t , const void * );


void pthread_testcancel(void) __asm("_" "pthread_testcancel" );





int pthread_is_threaded_np(void);


int pthread_threadid_np(pthread_t ,__uint64_t* );



int pthread_getname_np(pthread_t,char*,size_t);


int pthread_setname_np(const char*);



int pthread_main_np(void);



mach_port_t pthread_mach_thread_np(pthread_t);


size_t pthread_get_stacksize_np(pthread_t);


void* pthread_get_stackaddr_np(pthread_t);



int pthread_cond_signal_thread_np(pthread_cond_t *, pthread_t );



int pthread_cond_timedwait_relative_np(pthread_cond_t *, pthread_mutex_t *,
  const struct timespec * );




int pthread_create_suspended_np(
  pthread_t * , const pthread_attr_t * ,
  void * (* )(void * ), void * );






int pthread_kill(pthread_t, int);


 pthread_t pthread_from_mach_thread_np(mach_port_t);


int pthread_sigmask(int, const sigset_t * , sigset_t * )
  __asm("_" "pthread_sigmask" );


void pthread_yield_np(void);



void pthread_jit_write_protect_np(int enabled);



int pthread_jit_write_protect_supported_np(void);
# 582 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 3 4

int
pthread_cpu_number_np(size_t *cpu_number_out);



# 31 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_th.h" 2 3 4
# 66 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_th.h" 3 4
typedef enum { R_TH_FREED = -1, R_TH_STOP = 0, R_TH_REPEAT = 1 } RThreadFunctionRet;






typedef struct r_th_sem_t {
 sem_t * sem;
} RThreadSemaphore;

typedef struct r_th_lock_t {
 pthread_mutex_t lock;
} RThreadLock;

typedef struct r_th_cond_t {
 pthread_cond_t cond;
} RThreadCond;

typedef struct r_th_t {
 pthread_t tid;
 RThreadLock *lock;
 RThreadFunctionRet (*fun)(struct r_th_t *);
 void *user;
 int running;
 int breaked;
 int delay;
 int ready;
} RThread;

typedef struct r_th_pool_t {
 int size;
 RThread **threads;
} RThreadPool;


__attribute__((visibility("default"))) RThread *r_th_new(RThreadFunctionRet (*fun)(struct r_th_t *), void *user, int delay);
__attribute__((visibility("default"))) _Bool r_th_start(RThread *th, int enable);
__attribute__((visibility("default"))) int r_th_wait(RThread *th);
__attribute__((visibility("default"))) int r_th_wait_async(RThread *th);
__attribute__((visibility("default"))) void r_th_break(RThread *th);
__attribute__((visibility("default"))) void *r_th_free(RThread *th);
__attribute__((visibility("default"))) void *r_th_kill_free(RThread *th);
__attribute__((visibility("default"))) _Bool r_th_kill(RThread *th, _Bool force);
__attribute__((visibility("default"))) pthread_t r_th_self(void);
__attribute__((visibility("default"))) _Bool r_th_setname(RThread *th, const char *name);
__attribute__((visibility("default"))) _Bool r_th_getname(RThread *th, char *name, size_t len);
__attribute__((visibility("default"))) _Bool r_th_setaffinity(RThread *th, int cpuid);

__attribute__((visibility("default"))) RThreadSemaphore *r_th_sem_new(unsigned int initial);
__attribute__((visibility("default"))) void r_th_sem_free(RThreadSemaphore *sem);
__attribute__((visibility("default"))) void r_th_sem_post(RThreadSemaphore *sem);
__attribute__((visibility("default"))) void r_th_sem_wait(RThreadSemaphore *sem);

__attribute__((visibility("default"))) RThreadLock *r_th_lock_new(_Bool recursive);
__attribute__((visibility("default"))) int r_th_lock_wait(RThreadLock *th);
__attribute__((visibility("default"))) int r_th_lock_tryenter(RThreadLock *thl);
__attribute__((visibility("default"))) int r_th_lock_enter(RThreadLock *thl);
__attribute__((visibility("default"))) int r_th_lock_leave(RThreadLock *thl);
__attribute__((visibility("default"))) void *r_th_lock_free(RThreadLock *thl);

__attribute__((visibility("default"))) RThreadCond *r_th_cond_new(void);
__attribute__((visibility("default"))) void r_th_cond_signal(RThreadCond *cond);
__attribute__((visibility("default"))) void r_th_cond_signal_all(RThreadCond *cond);
__attribute__((visibility("default"))) void r_th_cond_wait(RThreadCond *cond, RThreadLock *lock);
__attribute__((visibility("default"))) void r_th_cond_free(RThreadCond *cond);
# 13 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/signal.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/signal.h" 3 4
extern const char *const sys_signame[32];
extern const char *const sys_siglist[32];



int raise(int);




void (* bsd_signal(int, void (* )(int)))(int);
int kill(pid_t, int) __asm("_" "kill" );
int killpg(pid_t, int) __asm("_" "killpg" );
int pthread_kill(pthread_t, int);
int pthread_sigmask(int, const sigset_t *, sigset_t *) __asm("_" "pthread_sigmask" );
int sigaction(int, const struct sigaction * restrict,
     struct sigaction * restrict);
int sigaddset(sigset_t *, int);
int sigaltstack(const stack_t * restrict, stack_t * restrict) __asm("_" "sigaltstack" ) ;
int sigdelset(sigset_t *, int);
int sigemptyset(sigset_t *);
int sigfillset(sigset_t *);
int sighold(int);
int sigignore(int);
int siginterrupt(int, int);
int sigismember(const sigset_t *, int);
int sigpause(int) __asm("_" "sigpause" );
int sigpending(sigset_t *);
int sigprocmask(int, const sigset_t * restrict, sigset_t * restrict);
int sigrelse(int);
void (* sigset(int, void (* )(int)))(int);
int sigsuspend(const sigset_t *) __asm("_" "sigsuspend" );
int sigwait(const sigset_t * restrict, int * restrict) __asm("_" "sigwait" );

void psignal(unsigned int, const char *);
int sigblock(int);
int sigsetmask(int);
int sigvec(int, struct sigvec *, struct sigvec *);




extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int
__sigbits(int __signo)
{
    return __signo > 32 ? 0 : (1 << (__signo - 1));
}
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 27 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_event.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_event.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_up.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_up.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_inc.h" 1 3 4
# 53 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_inc.h" 3 4
typedef struct ht_up_kv {
 unsigned long long key;
 void * value;
 unsigned int key_len;
 unsigned int value_len;
} HtUPKv;

typedef void (*HtUPKvFreeFunc)(HtUPKv *);
typedef unsigned long long (*HtUPDupKey)(const unsigned long long);
typedef void * (*HtUPDupValue)(const void *);
typedef unsigned int (*HtUPCalcSizeK)(const unsigned long long);
typedef unsigned int (*HtUPCalcSizeV)(const void *);
typedef unsigned int (*HtUPHashFunction)(const unsigned long long);
typedef int (*HtUPListComparator)(const unsigned long long, const unsigned long long);
typedef _Bool (*HtUPForeachCallback)(void *user, const unsigned long long, const void *);

typedef struct ht_up_bucket_t {
 HtUPKv *arr;
 unsigned int count;
} HtUPBucket;


typedef struct ht_up_options_t {
 HtUPListComparator cmp;
 HtUPHashFunction hashfn;
 HtUPDupKey dupkey;
 HtUPDupValue dupvalue;
 HtUPCalcSizeK calcsizeK;
 HtUPCalcSizeV calcsizeV;
 HtUPKvFreeFunc freefn;
 size_t elem_size;
} HtUPOptions;


typedef struct ht_up_t {
 unsigned int size;
 unsigned int count;
 HtUPBucket* table;
 unsigned int prime_idx;
 HtUPOptions opt;
} HtUP;


__attribute__ ((visibility ("default"))) HtUP* ht_up_new_opt(HtUPOptions *opt);

__attribute__ ((visibility ("default"))) void ht_up_free(HtUP* ht);

__attribute__ ((visibility ("default"))) _Bool ht_up_insert(HtUP* ht, const unsigned long long key, void * value);

__attribute__ ((visibility ("default"))) _Bool ht_up_update(HtUP* ht, const unsigned long long key, void * value);

__attribute__ ((visibility ("default"))) _Bool ht_up_update_key(HtUP* ht, const unsigned long long old_key, const unsigned long long new_key);

__attribute__ ((visibility ("default"))) _Bool ht_up_delete(HtUP* ht, const unsigned long long key);

__attribute__ ((visibility ("default"))) void * ht_up_find(HtUP* ht, const unsigned long long key, _Bool* found);




__attribute__ ((visibility ("default"))) void ht_up_foreach(HtUP *ht, HtUPForeachCallback cb, void *user);

__attribute__ ((visibility ("default"))) HtUPKv* ht_up_find_kv(HtUP* ht, const unsigned long long key, _Bool* found);
__attribute__ ((visibility ("default"))) _Bool ht_up_insert_kv(HtUP *ht, HtUPKv *kv, _Bool update);
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_up.h" 2 3 4


__attribute__ ((visibility ("default"))) HtUP* ht_up_new0(void);
__attribute__ ((visibility ("default"))) HtUP* ht_up_new(HtUPDupValue valdup, HtUPKvFreeFunc pair_free, HtUPCalcSizeV valueSize);
__attribute__ ((visibility ("default"))) HtUP* ht_up_new_size(unsigned int initial_size, HtUPDupValue valdup, HtUPKvFreeFunc pair_free, HtUPCalcSizeV valueSize);
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_event.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_vector.h" 1 3 4




# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_assert.h" 1 3 4







# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_log.h" 1 3 4
# 18 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_log.h" 3 4
typedef enum r_log_level {
 R_LOGLVL_SILLY = 0,
 R_LOGLVL_DEBUG = 1,
 R_LOGLVL_VERBOSE = 2,
 R_LOGLVL_INFO = 3,
 R_LOGLVL_WARN = 4,
 R_LOGLVL_ERROR = 5,
 R_LOGLVL_FATAL = 6,
 R_LOGLVL_NONE = 0xFF
} RLogLevel;







typedef void (*RLogCallback) (const char *output, const char *funcname, const char *filename,
 unsigned int lineno, RLogLevel level, const char *tag, const char *fmtstr, ...) __attribute__ ((format (printf, 7, 8)));
# 63 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_log.h" 3 4
__attribute__((visibility("default"))) void r_log_set_level(RLogLevel level);
__attribute__((visibility("default"))) void r_log_set_file(const char *filename);
__attribute__((visibility("default"))) void r_log_set_srcinfo(_Bool show_info);
__attribute__((visibility("default"))) void r_log_set_colors(_Bool show_colors);
__attribute__((visibility("default"))) void r_log_set_traplevel(RLogLevel level);



__attribute__((visibility("default"))) void r_log_add_callback(RLogCallback cbfunc);
__attribute__((visibility("default"))) void r_log_del_callback(RLogCallback cbfunc);





__attribute__((visibility("default"))) __attribute__ ((weak)) void r_log(const char *funcname, const char *filename,
 unsigned int lineno, RLogLevel level, const char *tag, const char *fmtstr, ...) __attribute__ ((format (printf, 6, 7)));

__attribute__((visibility("default"))) __attribute__ ((weak)) void r_vlog(const char *funcname, const char *filename,
 unsigned int lineno, RLogLevel level, const char *tag, const char *fmtstr, va_list args);
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_assert.h" 2 3 4







__attribute__((visibility("default"))) void r_assert_log(RLogLevel level, const char *fmt, ...) __attribute__ ((format (printf, 2, 3)));
# 6 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_vector.h" 2 3 4
# 40 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_vector.h" 3 4
typedef int (*RPVectorComparator)(const void *a, const void *b);
typedef void (*RVectorFree)(void *e, void *user);
typedef void (*RPVectorFree)(void *e);

typedef struct r_vector_t {
 void *a;
 size_t len;
 size_t capacity;
 size_t elem_size;
 RVectorFree free;
 void *free_user;
} RVector;


typedef struct r_pvector_t { RVector v; } RPVector;




__attribute__((visibility("default"))) void r_vector_init(RVector *vec, size_t elem_size, RVectorFree free, void *free_user);

__attribute__((visibility("default"))) RVector *r_vector_new(size_t elem_size, RVectorFree free, void *free_user);


__attribute__((visibility("default"))) void r_vector_fini(RVector *vec);


__attribute__((visibility("default"))) void r_vector_free(RVector *vec);


__attribute__((visibility("default"))) RVector *r_vector_clone(RVector *vec);

static inline _Bool r_vector_empty(const RVector *vec) {
 do { if (!(vec)) { r_assert_log (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", ((const char*) (__func__)), "vec", 73); return (0); } } while (0);
 return vec->len == 0;
}

__attribute__((visibility("default"))) void r_vector_clear(RVector *vec);


static inline size_t r_vector_len(const RVector *vec) {
 do { if (!(vec)) { r_assert_log (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", ((const char*) (__func__)), "vec", 81); return (0); } } while (0);
 return vec->len;
}


static inline void *r_vector_index_ptr(RVector *vec, size_t index) {
 do { if (!(vec && index < vec->capacity)) { r_assert_log (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", ((const char*) (__func__)), "vec && index < vec->capacity", 87); return (((void *)0)); } } while (0);
 return (char *)vec->a + vec->elem_size * index;
}



__attribute__((visibility("default"))) void r_vector_assign(RVector *vec, void *p, void *elem);



__attribute__((visibility("default"))) void *r_vector_assign_at(RVector *vec, size_t index, void *elem);



__attribute__((visibility("default"))) void r_vector_remove_at(RVector *vec, size_t index, void *into);



__attribute__((visibility("default"))) void *r_vector_insert(RVector *vec, size_t index, void *x);


__attribute__((visibility("default"))) void *r_vector_insert_range(RVector *vec, size_t index, void *first, size_t count);


__attribute__((visibility("default"))) void r_vector_pop(RVector *vec, void *into);


__attribute__((visibility("default"))) void r_vector_pop_front(RVector *vec, void *into);


__attribute__((visibility("default"))) void *r_vector_push(RVector *vec, void *x);


__attribute__((visibility("default"))) void *r_vector_push_front(RVector *vec, void *x);


__attribute__((visibility("default"))) void *r_vector_reserve(RVector *vec, size_t capacity);


__attribute__((visibility("default"))) void *r_vector_shrink(RVector *vec);

__attribute__((visibility("default"))) void *r_vector_flush(RVector *vec);
# 188 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_vector.h" 3 4
__attribute__((visibility("default"))) void r_pvector_init(RPVector *vec, RPVectorFree free);
__attribute__((visibility("default"))) void r_pvector_fini(RPVector *vec);

__attribute__((visibility("default"))) RPVector *r_pvector_new(RPVectorFree free);

__attribute__((visibility("default"))) RPVector *r_pvector_new_with_len(RPVectorFree free, size_t length);


__attribute__((visibility("default"))) void r_pvector_clear(RPVector *vec);


__attribute__((visibility("default"))) void r_pvector_free(RPVector *vec);


static inline size_t r_pvector_len(const RPVector *vec) {
 do { if (!(vec)) { r_assert_log (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", ((const char*) (__func__)), "vec", 203); return (0); } } while (0);
 return vec->v.len;
}

static inline void *r_pvector_at(const RPVector *vec, size_t index) {
 do { if (!(vec && index < vec->v.len)) { r_assert_log (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", ((const char*) (__func__)), "vec && index < vec->v.len", 208); return (((void *)0)); } } while (0);
 return ((void **)vec->v.a)[index];
}

static inline void r_pvector_set(RPVector *vec, size_t index, void *e) {
 do { if (!(vec && index < vec->v.len)) { r_assert_log (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", ((const char*) (__func__)), "vec && index < vec->v.len", 213); return; } } while (0);
 ((void **)vec->v.a)[index] = e;
}

static inline _Bool r_pvector_empty(RPVector *vec) {
 return r_pvector_len (vec) == 0;
}


static inline void **r_pvector_index_ptr(RPVector *vec, size_t index) {
 do { if (!(vec && index < vec->v.capacity)) { r_assert_log (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", ((const char*) (__func__)), "vec && index < vec->v.capacity", 223); return (((void *)0)); } } while (0);
 return ((void **)vec->v.a) + index;
}


static inline void **r_pvector_data(RPVector *vec) {
 do { if (!(vec)) { r_assert_log (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", ((const char*) (__func__)), "vec", 229); return (((void *)0)); } } while (0);
 return (void **)vec->v.a;
}


__attribute__((visibility("default"))) void **r_pvector_contains(RPVector *vec, void *x);


__attribute__((visibility("default"))) void *r_pvector_remove_at(RPVector *vec, size_t index);


__attribute__((visibility("default"))) void r_pvector_remove_data(RPVector *vec, void *x);


static inline void **r_pvector_insert(RPVector *vec, size_t index, void *x) {
 return (void **)r_vector_insert (&vec->v, index, &x);
}


static inline void **r_pvector_insert_range(RPVector *vec, size_t index, void **first, size_t count) {
 return (void **)r_vector_insert_range (&vec->v, index, first, count);
}


__attribute__((visibility("default"))) void *r_pvector_pop(RPVector *vec);


__attribute__((visibility("default"))) void *r_pvector_pop_front(RPVector *vec);


static inline void **r_pvector_push(RPVector *vec, void *x) {
 return (void **)r_vector_push (&vec->v, &x);
}


static inline void **r_pvector_push_front(RPVector *vec, void *x) {
 return (void **)r_vector_push_front (&vec->v, &x);
}


__attribute__((visibility("default"))) void r_pvector_sort(RPVector *vec, RPVectorComparator cmp);


__attribute__((visibility("default"))) int r_pvector_bsearch(RPVector *vec, void *needle, RPVectorComparator cmp);

static inline void **r_pvector_reserve(RPVector *vec, size_t capacity) {
 return (void **)r_vector_reserve (&vec->v, capacity);
}

static inline void **r_pvector_shrink(RPVector *vec) {
 return (void **)r_vector_shrink (&vec->v);
}

static inline void **r_pvector_flush(RPVector *vec) {
 return (void **)r_vector_flush (&vec->v);
}
# 12 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_event.h" 2 3 4

typedef struct r_event_t {
 void *user;
 _Bool incall;
 HtUP *callbacks;
 RVector all_callbacks;
 int next_handle;
} REvent;

typedef struct r_event_callback_handle_t {
 int handle;
 int type;
} REventCallbackHandle;

typedef void (*REventCallback)(REvent *ev, int type, void *user, void *data);

typedef enum {
 R_EVENT_ALL = 0,
 R_EVENT_META_SET,
 R_EVENT_META_DEL,
 R_EVENT_META_CLEAR,
 R_EVENT_CLASS_NEW,
 R_EVENT_CLASS_DEL,
 R_EVENT_CLASS_RENAME,
 R_EVENT_CLASS_ATTR_SET,
 R_EVENT_CLASS_ATTR_DEL,
 R_EVENT_CLASS_ATTR_RENAME,
 R_EVENT_DEBUG_PROCESS_FINISHED,
 R_EVENT_IO_WRITE,
 R_EVENT_MAX,
} REventType;

typedef struct r_event_meta_t {
 int type;
 unsigned long long addr;
 const char *string;
} REventMeta;

typedef struct r_event_class_t {
 const char *name;
} REventClass;

typedef struct r_event_class_rename_t {
 const char *name_old;
 const char *name_new;
} REventClassRename;

typedef struct r_event_class_attr_t {
 const char *class_name;
 int attr_type;
 const char *attr_id;
} REventClassAttr;

typedef struct r_event_class_attr_set_t {
 REventClassAttr attr;
 const char *content;
} REventClassAttrSet;

typedef struct r_event_class_attr_rename_t {
 REventClassAttr attr;
 const char *attr_id_new;
} REventClassAttrRename;

typedef struct r_event_debug_process_finished_t {
 int pid;
} REventDebugProcessFinished;

typedef struct r_event_io_write_t {
 unsigned long long addr;
 const unsigned char *buf;
 int len;
} REventIOWrite;

__attribute__((visibility("default"))) REvent *r_event_new(void *user);
__attribute__((visibility("default"))) void r_event_free(REvent *ev);
__attribute__((visibility("default"))) REventCallbackHandle r_event_hook(REvent *ev, int type, REventCallback cb, void *user);
__attribute__((visibility("default"))) void r_event_unhook(REvent *ev, REventCallbackHandle handle);
__attribute__((visibility("default"))) void r_event_send(REvent *ev, int type, void *data);
# 28 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_assert.h" 1 3 4
# 29 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_itv.h" 1 3 4
# 13 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_itv.h" 3 4
typedef struct r_interval_t {

 unsigned long long addr;
 unsigned long long size;
} RInterval;

typedef RInterval r_itv_t;

static inline RInterval *r_itv_new(unsigned long long addr, unsigned long long size) {
 RInterval *itv = (RInterval*)malloc(sizeof(RInterval));
 if (itv) {
  itv->addr = addr;
  itv->size = size;
 }
 return itv;
}

static inline void r_itv_free(RInterval *itv) {
 free (itv);
}

static inline unsigned long long r_itv_begin(RInterval itv) {
 return itv.addr;
}

static inline unsigned long long r_itv_size(RInterval itv) {
 return itv.size;
}

static inline unsigned long long r_itv_end(RInterval itv) {
 return itv.addr + itv.size;
}


static inline _Bool r_itv_eq(RInterval itv, RInterval itv2) {
 return itv.addr == itv2.addr && itv.size == itv2.size;
}


static inline _Bool r_itv_contain(RInterval itv, unsigned long long addr) {
 const unsigned long long end = itv.addr + itv.size;
 return itv.addr <= addr && (!end || addr < end);
}


static inline _Bool r_itv_include(RInterval itv, RInterval x) {
 const unsigned long long end = itv.addr + itv.size;
 return itv.addr <= x.addr && (!end || (x.addr + x.size && x.addr + x.size <= end));
}


static inline _Bool r_itv_overlap(RInterval itv, RInterval x) {
 const unsigned long long end = itv.addr + itv.size, end1 = x.addr + x.size;
 return (!end1 || itv.addr < end1) && (!end || x.addr < end);
}

static inline _Bool r_itv_overlap2(RInterval itv, unsigned long long addr, unsigned long long size) {
 RInterval rai = {addr, size};
 return r_itv_overlap (itv, rai);
}



static inline RInterval r_itv_intersect(RInterval itv, RInterval x) {
 const unsigned long long addr = (((itv.addr)>(x.addr))?(itv.addr):(x.addr));
 const unsigned long long end = (((itv.addr + itv.size - 1)>(x.addr + x.size - 1))?(x.addr + x.size - 1):(itv.addr + itv.size - 1)) + 1;
 RInterval rai = {addr, end - addr};
 return rai;
}
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_signal.h" 1 3 4
# 13 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_signal.h" 3 4
__attribute__((visibility("default"))) int r_signal_from_string(const char *str);


__attribute__((visibility("default"))) const char* r_signal_to_string(int code);
__attribute__((visibility("default"))) const char *r_signal_to_human(int signum);



__attribute__((visibility("default"))) void r_signal_sigmask(int how, const sigset_t *newmask, sigset_t *oldmask);
# 31 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_alloc.h" 1 3 4





# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 7 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_alloc.h" 2 3 4
# 15 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_alloc.h" 3 4
typedef void *(RMalloc)(size_t);
typedef void *(RCalloc)(size_t, size_t);
typedef void *(RRealloc)(void *, size_t);
typedef void (RFree)(void *);

__attribute__((visibility("default"))) void* r_malloc_aligned(size_t size, size_t alignment);
__attribute__((visibility("default"))) void r_free_aligned(void *p);
# 32 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_rbtree.h" 1 3 4



# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 1 3 4
# 5 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_rbtree.h" 2 3 4

# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 7 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_rbtree.h" 2 3 4
# 19 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_rbtree.h" 3 4
typedef struct r_rb_node_t {
 struct r_rb_node_t *parent;
 struct r_rb_node_t *child[2];
 _Bool red;
} RBNode;

typedef RBNode* RBTree;




typedef int (*RBComparator)(const void *incoming, const RBNode *in_tree, void *user);

typedef void (*RBNodeFree)(RBNode *node, void *user);
typedef void (*RBNodeSum)(RBNode *node);

typedef struct r_rb_iter_t {



 size_t len;




 RBNode *path[62];
} RBIter;



__attribute__((visibility("default"))) _Bool r_rbtree_aug_delete(RBNode **root, void *data, RBComparator cmp, void *cmp_user, RBNodeFree freefn, void *free_user, RBNodeSum sum);
__attribute__((visibility("default"))) _Bool r_rbtree_aug_insert(RBNode **root, void *data, RBNode *node, RBComparator cmp, void *cmp_user, RBNodeSum sum);
__attribute__((visibility("default"))) _Bool r_rbtree_aug_update_sum(RBNode *root, void *data, RBNode *node, RBComparator cmp, void *cmp_user, RBNodeSum sum);

__attribute__((visibility("default"))) _Bool r_rbtree_delete(RBNode **root, void *data, RBComparator cmp, void *cmp_user, RBNodeFree freefn, void *free_user);
__attribute__((visibility("default"))) RBNode *r_rbtree_find(RBNode *root, void *data, RBComparator cmp, void *user);
__attribute__((visibility("default"))) void r_rbtree_free(RBNode *root, RBNodeFree freefn, void *user);
__attribute__((visibility("default"))) void r_rbtree_insert(RBNode **root, void *data, RBNode *node, RBComparator cmp, void *user);

__attribute__((visibility("default"))) RBNode *r_rbtree_lower_bound(RBNode *root, void *data, RBComparator cmp, void *user);

__attribute__((visibility("default"))) RBNode *r_rbtree_upper_bound(RBNode *root, void *data, RBComparator cmp, void *user);


__attribute__((visibility("default"))) RBIter r_rbtree_first(RBNode *root);

__attribute__((visibility("default"))) RBIter r_rbtree_last(RBNode *root);


__attribute__((visibility("default"))) RBIter r_rbtree_lower_bound_forward(RBNode *root, void *data, RBComparator cmp, void *user);

__attribute__((visibility("default"))) RBIter r_rbtree_upper_bound_backward(RBNode *root, void *data, RBComparator cmp, void *user);







__attribute__((visibility("default"))) void r_rbtree_iter_next(RBIter *it);

__attribute__((visibility("default"))) void r_rbtree_iter_prev(RBIter *it);
# 33 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_new_rbtree.h" 1 3 4
# 41 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_new_rbtree.h" 3 4
typedef struct r_crbtree_node {
 struct r_crbtree_node *link[2];
 struct r_crbtree_node *parent;
 unsigned int red;
 void *data;
} RRBNode;

typedef int (*RRBComparator) (void *incoming, void *in, void *user);
typedef void (*RRBFree) (void *data);

typedef struct r_crbtree_t {
 RRBNode *root;
 size_t size;
 RRBFree free;
} RRBTree;

__attribute__((visibility("default"))) RRBTree *r_crbtree_new(RRBFree freefn);
__attribute__((visibility("default"))) void r_crbtree_clear(RRBTree *tree);
__attribute__((visibility("default"))) void r_crbtree_free(RRBTree *tree);
__attribute__((visibility("default"))) RRBNode *r_crbtree_find_node(RRBTree *tree, void *data, RRBComparator cmp, void *user);
__attribute__((visibility("default"))) void *r_crbtree_find(RRBTree *tree, void *data, RRBComparator cmp, void *user);
__attribute__((visibility("default"))) _Bool r_crbtree_insert(RRBTree *tree, void *data, RRBComparator cmp, void *user);
__attribute__((visibility("default"))) void *r_crbtree_take(RRBTree *tree, void *data, RRBComparator cmp, void *user);
__attribute__((visibility("default"))) _Bool r_crbtree_delete(RRBTree *tree, void *data, RRBComparator cmp, void *user);
__attribute__((visibility("default"))) RRBNode *r_crbtree_first_node(RRBTree *tree);
__attribute__((visibility("default"))) RRBNode *r_crbtree_last_node(RRBTree *tree);
__attribute__((visibility("default"))) RRBNode *r_rbnode_next(RRBNode *node);
__attribute__((visibility("default"))) RRBNode *r_rbnode_prev(RRBNode *node);
# 34 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_intervaltree.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_intervaltree.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_rbtree.h" 1 3 4
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_intervaltree.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 1 3 4
# 12 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_intervaltree.h" 2 3 4
# 26 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_intervaltree.h" 3 4
typedef struct r_interval_node_t {
 RBNode node;
 unsigned long long start;
 unsigned long long end;
 unsigned long long max_end;
 void *data;
} RIntervalNode;

typedef void (*RIntervalNodeFree)(void *data);

typedef struct r_interval_tree_t {
 RIntervalNode *root;
 RIntervalNodeFree free;
} RIntervalTree;

__attribute__((visibility("default"))) void r_interval_tree_init(RIntervalTree *tree, RIntervalNodeFree free);
__attribute__((visibility("default"))) void r_interval_tree_fini(RIntervalTree *tree);


__attribute__((visibility("default"))) _Bool r_interval_tree_insert(RIntervalTree *tree, unsigned long long start, unsigned long long end, void *data);





__attribute__((visibility("default"))) _Bool r_interval_tree_delete(RIntervalTree *tree, RIntervalNode *node, _Bool free);





__attribute__((visibility("default"))) _Bool r_interval_tree_resize(RIntervalTree *tree, RIntervalNode *node, unsigned long long new_start, unsigned long long new_end);



__attribute__((visibility("default"))) RBIter r_interval_tree_first_at(RIntervalTree *tree, unsigned long long start);


__attribute__((visibility("default"))) RIntervalNode *r_interval_tree_node_at(RIntervalTree *tree, unsigned long long start);


__attribute__((visibility("default"))) RIntervalNode *r_interval_tree_node_at_data(RIntervalTree *tree, unsigned long long start, void *data);


static inline void *r_interval_tree_at(RIntervalTree *tree, unsigned long long start) {
 RIntervalNode *node = r_interval_tree_node_at (tree, start);
 return node ? node->data : ((void *)0);
}

typedef _Bool (*RIntervalIterCb)(RIntervalNode *node, void *user);


__attribute__((visibility("default"))) _Bool r_interval_tree_all_at(RIntervalTree *tree, unsigned long long start, RIntervalIterCb cb, void *user);



__attribute__((visibility("default"))) _Bool r_interval_tree_all_in(RIntervalTree *tree, unsigned long long value, _Bool end_inclusive, RIntervalIterCb cb, void *user);



__attribute__((visibility("default"))) _Bool r_interval_tree_all_intersect(RIntervalTree *tree, unsigned long long start, unsigned long long end, _Bool end_inclusive, RIntervalIterCb cb, void *user);

typedef RBIter RIntervalTreeIter;

static inline RIntervalNode *r_interval_tree_iter_get(RIntervalTreeIter *it) {
 return (((RIntervalNode *)((char *)(__typeof__(((RIntervalNode *)0)->node) *){(it)->path[(it)->len-1]} - __builtin_offsetof (RIntervalNode, node))));
}
# 35 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_big.h" 1 3 4
# 28 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_big.h" 3 4
typedef struct r_num_big_t {
 unsigned int array[(512 / 4)];
 int sign;
} RNumBig;


__attribute__((visibility("default"))) RNumBig *r_big_new(void);
__attribute__((visibility("default"))) void r_big_free(RNumBig *b);
__attribute__((visibility("default"))) void r_big_init(RNumBig *b);
__attribute__((visibility("default"))) void r_big_fini(RNumBig *b);


__attribute__((visibility("default"))) void r_big_from_int(RNumBig *b, long long v);
__attribute__((visibility("default"))) long long r_big_to_int(RNumBig *b);
__attribute__((visibility("default"))) void r_big_from_hexstr(RNumBig *b, const char *str);
__attribute__((visibility("default"))) char *r_big_to_hexstr(RNumBig *b);
__attribute__((visibility("default"))) void r_big_assign(RNumBig *dst, RNumBig *src);


__attribute__((visibility("default"))) void r_big_add(RNumBig *c, RNumBig *a, RNumBig *b);
__attribute__((visibility("default"))) void r_big_sub(RNumBig *c, RNumBig *a, RNumBig *b);
__attribute__((visibility("default"))) void r_big_mul(RNumBig *c, RNumBig *a, RNumBig *b);
__attribute__((visibility("default"))) void r_big_div(RNumBig *c, RNumBig *a, RNumBig *b);
__attribute__((visibility("default"))) void r_big_mod(RNumBig *c, RNumBig *a, RNumBig *b);
__attribute__((visibility("default"))) void r_big_divmod(RNumBig *c, RNumBig *d, RNumBig *a, RNumBig *b);


__attribute__((visibility("default"))) void r_big_and(RNumBig *c, RNumBig *a, RNumBig *b);
__attribute__((visibility("default"))) void r_big_or(RNumBig *c, RNumBig *a, RNumBig *b);
__attribute__((visibility("default"))) void r_big_xor(RNumBig *c, RNumBig *a, RNumBig *b);
__attribute__((visibility("default"))) void r_big_lshift(RNumBig *c, RNumBig *a, size_t nbits);
__attribute__((visibility("default"))) void r_big_rshift(RNumBig *c, RNumBig *a, size_t nbits);


__attribute__((visibility("default"))) int r_big_cmp(RNumBig *a, RNumBig *b);
__attribute__((visibility("default"))) int r_big_is_zero(RNumBig *a);
__attribute__((visibility("default"))) void r_big_inc(RNumBig *a);
__attribute__((visibility("default"))) void r_big_dec(RNumBig *a);
__attribute__((visibility("default"))) void r_big_powm(RNumBig *c, RNumBig *a, RNumBig *b, RNumBig *m);
__attribute__((visibility("default"))) void r_big_isqrt(RNumBig *c, RNumBig *a);
# 36 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_base64.h" 1 3 4







__attribute__((visibility("default"))) int r_base64_encode(char *bout, const unsigned char *bin, int len);
__attribute__((visibility("default"))) int r_base64_decode(unsigned char *bout, const char *bin, int len);
__attribute__((visibility("default"))) unsigned char *r_base64_decode_dyn(const char *in, int len);
__attribute__((visibility("default"))) char *r_base64_encode_dyn(const char *str, int len);
# 37 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_base91.h" 1 3 4







__attribute__((visibility("default"))) int r_base91_encode(char *bout, const unsigned char *bin, int len);
__attribute__((visibility("default"))) int r_base91_decode(unsigned char *bout, const char *bin, int len);
# 38 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_buf.h" 1 3 4


# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_mem.h" 1 3 4







typedef struct r_mmap_t {
 unsigned char *buf;
 unsigned long long base;
 int len;
 int fd;
 int rw;
 char *filename;




} RMmap;

typedef struct r_mem_pool_t {
 unsigned char **nodes;
 int ncount;
 int npool;

 int nodesize;
 int poolsize;
 int poolcount;
} RMemoryPool;

__attribute__((visibility("default"))) unsigned long long r_mem_get_num(const unsigned char *b, int size);


__attribute__((visibility("default"))) RMemoryPool* r_mem_pool_deinit(RMemoryPool *pool);
__attribute__((visibility("default"))) RMemoryPool *r_mem_pool_new(int nodesize, int poolsize, int poolcount);
__attribute__((visibility("default"))) RMemoryPool *r_mem_pool_free(RMemoryPool *pool);
__attribute__((visibility("default"))) void* r_mem_pool_alloc(RMemoryPool *pool);
__attribute__((visibility("default"))) void *r_mem_dup(const void *s, int l);
__attribute__((visibility("default"))) void *r_mem_alloc(int sz);
__attribute__((visibility("default"))) void r_mem_free(void *);
__attribute__((visibility("default"))) void r_mem_memzero(void *, size_t);
__attribute__((visibility("default"))) void r_mem_reverse(unsigned char *b, int l);
__attribute__((visibility("default"))) _Bool r_mem_protect(void *ptr, int size, const char *prot);
__attribute__((visibility("default"))) int r_mem_set_num(unsigned char *dest, int dest_size, unsigned long long num);
__attribute__((visibility("default"))) int r_mem_eq(unsigned char *a, unsigned char *b, int len);
__attribute__((visibility("default"))) void r_mem_copybits(unsigned char *dst, const unsigned char *src, int bits);
__attribute__((visibility("default"))) void r_mem_copybits_delta(unsigned char *dst, int doff, const unsigned char *src, int soff, int bits);
__attribute__((visibility("default"))) void r_mem_copyloop(unsigned char *dest, const unsigned char *orig, int dsize, int osize);
__attribute__((visibility("default"))) void r_mem_swaporcopy(unsigned char *dest, const unsigned char *src, int len, _Bool big_endian);
__attribute__((visibility("default"))) void r_mem_swapendian(unsigned char *dest, const unsigned char *orig, int size);
__attribute__((visibility("default"))) void r_mem_swap(unsigned char *buf, size_t buf_len);
__attribute__((visibility("default"))) int r_mem_cmp_mask(const unsigned char *dest, const unsigned char *orig, const unsigned char *mask, int len);
__attribute__((visibility("default"))) const unsigned char *r_mem_mem(const unsigned char *haystack, int hlen, const unsigned char *needle, int nlen);
__attribute__((visibility("default"))) const unsigned char *r_mem_mem_aligned(const unsigned char *haystack, int hlen, const unsigned char *needle, int nlen, int align);
__attribute__((visibility("default"))) int r_mem_count(const unsigned char **addr);
__attribute__((visibility("default"))) _Bool r_mem_is_printable (const unsigned char *a, int la);
__attribute__((visibility("default"))) _Bool r_mem_is_zero(const unsigned char *b, int l);
__attribute__((visibility("default"))) void *r_mem_mmap_resize(RMmap *m, unsigned long long newsize);
# 4 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_buf.h" 2 3 4
# 15 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_buf.h" 3 4
typedef struct r_buf_t RBuffer;

typedef _Bool (*RBufferInit)(RBuffer *b, const void *user);
typedef _Bool (*RBufferFini)(RBuffer *b);
typedef long long (*RBufferRead)(RBuffer *b, unsigned char *buf, unsigned long long len);
typedef long long (*RBufferWrite)(RBuffer *b, const unsigned char *buf, unsigned long long len);
typedef unsigned long long (*RBufferGetSize)(RBuffer *b);
typedef _Bool (*RBufferResize)(RBuffer *b, unsigned long long newsize);
typedef long long (*RBufferSeek)(RBuffer *b, long long addr, int whence);
typedef unsigned char *(*RBufferGetWholeBuf)(RBuffer *b, unsigned long long *sz);
typedef void (*RBufferFreeWholeBuf)(RBuffer *b);
typedef RList *(*RBufferNonEmptyList)(RBuffer *b);

typedef struct r_buffer_methods_t {
 RBufferInit init;
 RBufferFini fini;
 RBufferRead read;
 RBufferWrite write;
 RBufferGetSize get_size;
 RBufferResize resize;
 RBufferSeek seek;
 RBufferGetWholeBuf get_whole_buf;
 RBufferFreeWholeBuf free_whole_buf;
 RBufferNonEmptyList nonempty_list;
} RBufferMethods;

struct r_buf_t {
 const RBufferMethods *methods;
 void *priv;
 unsigned char *whole_buf;
 _Bool readonly;
 unsigned char Oxff_priv;
 int refctr;
};


typedef struct r_buf_cache_t {
 unsigned long long from;
 unsigned long long to;
 int size;
 unsigned char *data;
 int written;
} RBufferSparse;


__attribute__((visibility("default"))) RBuffer *r_buf_new(void);
__attribute__((visibility("default"))) RBuffer *r_buf_new_with_io(void *iob, int fd);
__attribute__((visibility("default"))) RBuffer *r_buf_new_with_bytes(const unsigned char* bytes, unsigned long long len);
__attribute__((visibility("default"))) RBuffer *r_buf_new_with_string(const char *msg);
__attribute__((visibility("default"))) RBuffer *r_buf_new_with_pointers(const unsigned char *bytes, unsigned long long len, _Bool steal);
__attribute__((visibility("default"))) RBuffer *r_buf_new_file(const char *file, int perm, int mode);
__attribute__((visibility("default"))) RBuffer *r_buf_new_with_buf(RBuffer *b);
__attribute__((visibility("default"))) RBuffer *r_buf_new_slurp(const char *file);
__attribute__((visibility("default"))) RBuffer *r_buf_new_slice(RBuffer *b, unsigned long long offset, unsigned long long size);
__attribute__((visibility("default"))) RBuffer *r_buf_new_empty(unsigned long long len);
__attribute__((visibility("default"))) RBuffer *r_buf_new_mmap(const char *file, int flags);
__attribute__((visibility("default"))) RBuffer *r_buf_new_sparse(unsigned char Oxff);


__attribute__((visibility("default"))) _Bool r_buf_dump(RBuffer *buf, const char *file);
__attribute__((visibility("default"))) _Bool r_buf_set_bytes(RBuffer *b, const unsigned char *buf, unsigned long long length);
__attribute__((visibility("default"))) long long r_buf_append_string(RBuffer *b, const char *str);
__attribute__((visibility("default"))) _Bool r_buf_append_buf(RBuffer *b, RBuffer *a);
__attribute__((visibility("default"))) _Bool r_buf_append_bytes(RBuffer *b, const unsigned char *buf, unsigned long long length);
__attribute__((visibility("default"))) _Bool r_buf_append_nbytes(RBuffer *b, unsigned long long length);
__attribute__((visibility("default"))) _Bool r_buf_append_ut8(RBuffer *b, unsigned char n);
__attribute__((visibility("default"))) _Bool r_buf_append_ut16(RBuffer *b, unsigned short n);
__attribute__((visibility("default"))) _Bool r_buf_append_buf_slice(RBuffer *b, RBuffer *a, unsigned long long offset, unsigned long long size);
__attribute__((visibility("default"))) _Bool r_buf_append_ut32(RBuffer *b, unsigned int n);
__attribute__((visibility("default"))) _Bool r_buf_append_ut64(RBuffer *b, unsigned long long n);
__attribute__((visibility("default"))) _Bool r_buf_prepend_bytes(RBuffer *b, const unsigned char *buf, unsigned long long length);
__attribute__((visibility("default"))) long long r_buf_insert_bytes(RBuffer *b, unsigned long long addr, const unsigned char *buf, unsigned long long length);
__attribute__((visibility("default"))) char *r_buf_to_string(RBuffer *b);
__attribute__((visibility("default"))) char *r_buf_get_string(RBuffer *b, unsigned long long addr);
__attribute__((visibility("default"))) long long r_buf_read(RBuffer *b, unsigned char *buf, unsigned long long len);
__attribute__((visibility("default"))) unsigned char *r_buf_read_all(RBuffer *b, int *blen);
__attribute__((visibility("default"))) unsigned char r_buf_read8(RBuffer *b);
__attribute__((visibility("default"))) long long r_buf_fread(RBuffer *b, unsigned char *buf, const char *fmt, int n);
__attribute__((visibility("default"))) long long r_buf_read_at(RBuffer *b, unsigned long long addr, unsigned char *buf, unsigned long long len);
__attribute__((visibility("default"))) unsigned char r_buf_read8_at(RBuffer *b, unsigned long long addr);
__attribute__((visibility("default"))) unsigned long long r_buf_tell(RBuffer *b);
__attribute__((visibility("default"))) long long r_buf_seek(RBuffer *b, long long addr, int whence);
__attribute__((visibility("default"))) long long r_buf_fread_at(RBuffer *b, unsigned long long addr, unsigned char *buf, const char *fmt, int n);
__attribute__((visibility("default"))) long long r_buf_write(RBuffer *b, const unsigned char *buf, unsigned long long len);
__attribute__((visibility("default"))) long long r_buf_fwrite(RBuffer *b, const unsigned char *buf, const char *fmt, int n);
__attribute__((visibility("default"))) long long r_buf_write_at(RBuffer *b, unsigned long long addr, const unsigned char *buf, unsigned long long len);
__attribute__((visibility("default"))) long long r_buf_fwrite_at(RBuffer *b, unsigned long long addr, const unsigned char *buf, const char *fmt, int n);



 __attribute__((visibility("default"))) const unsigned char *r_buf_data(RBuffer *b, unsigned long long *size);
__attribute__((visibility("default"))) unsigned long long r_buf_size(RBuffer *b);
__attribute__((visibility("default"))) _Bool r_buf_resize(RBuffer *b, unsigned long long newsize);
__attribute__((visibility("default"))) RBuffer *r_buf_ref(RBuffer *b);
__attribute__((visibility("default"))) void r_buf_free(RBuffer *b);
__attribute__((visibility("default"))) void r_buf_fini(RBuffer *b);
__attribute__((visibility("default"))) RList *r_buf_nonempty_list(RBuffer *b);

static inline unsigned short r_buf_read_be16(RBuffer *b) {
 unsigned char buf[sizeof (unsigned short)];
 int r = (int) r_buf_read (b, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_be16 (buf): 0xFFFFU;
}

static inline unsigned short r_buf_read_be16_at(RBuffer *b, unsigned long long addr) {
 unsigned char buf[sizeof (unsigned short)];
 int r = (int) r_buf_read_at (b, addr, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_be16 (buf): 0xFFFFU;
}

static inline unsigned int r_buf_read_be32(RBuffer *b) {
 unsigned char buf[sizeof (unsigned int)];
 int r = (int) r_buf_read (b, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_be32 (buf): 0xFFFFFFFFU;
}

static inline unsigned int r_buf_read_be32_at(RBuffer *b, unsigned long long addr) {
 unsigned char buf[sizeof (unsigned int)];
 int r = (int) r_buf_read_at (b, addr, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_be32 (buf): 0xFFFFFFFFU;
}

static inline unsigned long long r_buf_read_be64(RBuffer *b) {
 unsigned char buf[sizeof (unsigned long long)];
 int r = (int) r_buf_read (b, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_be64 (buf): 0xFFFFFFFFFFFFFFFFULL;
}

static inline unsigned long long r_buf_read_be64_at(RBuffer *b, unsigned long long addr) {
 unsigned char buf[sizeof (unsigned long long)];
 int r = (int) r_buf_read_at (b, addr, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_be64 (buf): 0xFFFFFFFFFFFFFFFFULL;
}

static inline unsigned short r_buf_read_le16(RBuffer *b) {
 unsigned char buf[sizeof (unsigned short)];
 int r = (int) r_buf_read (b, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_le16 (buf): 0xFFFFU;
}

static inline unsigned short r_buf_read_le16_at(RBuffer *b, unsigned long long addr) {
 unsigned char buf[sizeof (unsigned short)];
 int r = (int) r_buf_read_at (b, addr, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_le16 (buf): 0xFFFFU;
}

static inline unsigned int r_buf_read_le32(RBuffer *b) {
 unsigned char buf[sizeof (unsigned int)];
 int r = (int) r_buf_read (b, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_le32 (buf): 0xFFFFFFFFU;
}

static inline unsigned int r_buf_read_le32_at(RBuffer *b, unsigned long long addr) {
 unsigned char buf[sizeof (unsigned int)];
 int r = (int) r_buf_read_at (b, addr, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_le32 (buf): 0xFFFFFFFFU;
}

static inline unsigned long long r_buf_read_le64(RBuffer *b) {
 unsigned char buf[sizeof (unsigned long long)];
 int r = (int) r_buf_read (b, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_le64 (buf): 0xFFFFFFFFFFFFFFFFULL;
}

static inline unsigned long long r_buf_read_le64_at(RBuffer *b, unsigned long long addr) {
 unsigned char buf[sizeof (unsigned long long)];
 int r = (int) r_buf_read_at (b, addr, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_le64 (buf): 0xFFFFFFFFFFFFFFFFULL;
}

static inline unsigned short r_buf_read_ble16_at(RBuffer *b, unsigned long long addr, _Bool big_endian) {
 unsigned char buf[sizeof (unsigned short)];
 int r = (int) r_buf_read_at (b, addr, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_ble16 (buf, big_endian): 0xFFFFU;
}

static inline unsigned int r_buf_read_ble32_at(RBuffer *b, unsigned long long addr, _Bool big_endian) {
 unsigned char buf[sizeof (unsigned int)];
 int r = (int) r_buf_read_at (b, addr, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_ble32 (buf, big_endian): 0xFFFFFFFFU;
}

static inline unsigned long long r_buf_read_ble64_at(RBuffer *b, unsigned long long addr, _Bool big_endian) {
 unsigned char buf[sizeof (unsigned long long)];
 int r = (int) r_buf_read_at (b, addr, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_ble64 (buf, big_endian): 0xFFFFFFFFFFFFFFFFULL;
}

__attribute__((visibility("default"))) long long r_buf_uleb128(RBuffer *b, unsigned long long *v);
__attribute__((visibility("default"))) long long r_buf_sleb128(RBuffer *b, long long *v);

static inline long long r_buf_uleb128_at(RBuffer *b, unsigned long long addr, unsigned long long *v) {
 r_buf_seek (b, addr, 0);
 return r_buf_uleb128 (b, v);
}
static inline long long r_buf_sleb128_at(RBuffer *b, unsigned long long addr, long long *v) {
 r_buf_seek (b, addr, 0);
 return r_buf_sleb128 (b, v);
}
# 39 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_bitmap.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_bitmap.h" 3 4
typedef struct r_bitmap_t {
 int length;
 unsigned long long *bitmap;
} RBitmap;

__attribute__((visibility("default"))) RBitmap *r_bitmap_new(size_t len);
__attribute__((visibility("default"))) void r_bitmap_set_bytes(RBitmap *b, const unsigned char *buf, int len);
__attribute__((visibility("default"))) void r_bitmap_free(RBitmap *b);
__attribute__((visibility("default"))) void r_bitmap_set(RBitmap *b, size_t bit);
__attribute__((visibility("default"))) void r_bitmap_unset(RBitmap *b, size_t bit);
__attribute__((visibility("default"))) int r_bitmap_test(RBitmap *b, size_t bit);
# 40 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_time.h" 1 3 4
# 20 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_time.h" 3 4
__attribute__((visibility("default"))) unsigned long long r_time_now(void);


__attribute__((visibility("default"))) unsigned long long r_time_now_mono(void);

__attribute__((visibility("default"))) char *r_time_stamp_to_str(unsigned int timeStamp);
__attribute__((visibility("default"))) unsigned int r_time_dos_time_stamp_to_posix(unsigned int timeStamp);
__attribute__((visibility("default"))) _Bool r_time_stamp_is_dos_format(const unsigned int certainPosixTimeStamp, const unsigned int possiblePosixOrDosTimeStamp);
__attribute__((visibility("default"))) const char *r_time_to_string(unsigned long long ts);


__attribute__((visibility("default"))) char *r_asctime_r(const struct tm *tm, char *buf);
__attribute__((visibility("default"))) char *r_ctime_r(const time_t *timer, char *buf);
# 41 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_debruijn.h" 1 3 4
# 19 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_debruijn.h" 3 4
__attribute__((visibility("default"))) char* r_debruijn_pattern(int size, int start, const char* charset);



__attribute__((visibility("default"))) int r_debruijn_offset(unsigned long long value, _Bool is_big_endian);
# 42 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_cache.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_cache.h" 3 4
typedef struct r_cache_t {
 unsigned long long base;
 unsigned char *buf;
 unsigned long long len;
} RCache;

typedef struct r_prof_t {
 struct timeval when;
 double result;
} RProfile;

__attribute__((visibility("default"))) RCache* r_cache_new(void);
__attribute__((visibility("default"))) void r_cache_free(RCache *c);
__attribute__((visibility("default"))) const unsigned char* r_cache_get(RCache *c, unsigned long long addr, int *len);
__attribute__((visibility("default"))) int r_cache_set(RCache *c, unsigned long long addr, const unsigned char *buf, int len);
__attribute__((visibility("default"))) void r_cache_flush(RCache *c);
__attribute__((visibility("default"))) void r_prof_start(RProfile *p);
__attribute__((visibility("default"))) double r_prof_end(RProfile *p);
# 43 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_ctypes.h" 1 3 4







typedef struct r_type_enum {
 const char *name;
 const char *val;
}RTypeEnum;

enum RTypeKind {
 R_TYPE_BASIC = 0,
 R_TYPE_ENUM = 1,
 R_TYPE_STRUCT = 2,
 R_TYPE_UNION = 3,
 R_TYPE_TYPEDEF = 4
};

__attribute__((visibility("default"))) int r_type_set(Sdb *TDB, unsigned long long at, const char *field, unsigned long long val);
__attribute__((visibility("default"))) void r_type_del(Sdb *TDB, const char *name);
__attribute__((visibility("default"))) int r_type_kind(Sdb *TDB, const char *name);
__attribute__((visibility("default"))) char *r_type_enum_member(Sdb *TDB, const char *name, const char *member, unsigned long long val);
__attribute__((visibility("default"))) char *r_type_enum_getbitfield(Sdb *TDB, const char *name, unsigned long long val);
__attribute__((visibility("default"))) RList* r_type_get_enum (Sdb *TDB, const char *name);
__attribute__((visibility("default"))) unsigned long long r_type_get_bitsize (Sdb *TDB, const char *type);
__attribute__((visibility("default"))) RList* r_type_get_by_offset(Sdb *TDB, unsigned long long offset);
__attribute__((visibility("default"))) char *r_type_get_struct_memb(Sdb *TDB, const char *type, int offset);
__attribute__((visibility("default"))) char *r_type_link_at (Sdb *TDB, unsigned long long addr);
__attribute__((visibility("default"))) int r_type_set_link (Sdb *TDB, const char *val, unsigned long long addr);
__attribute__((visibility("default"))) int r_type_unlink(Sdb *TDB, unsigned long long addr);
__attribute__((visibility("default"))) int r_type_link_offset (Sdb *TDB, const char *val, unsigned long long addr);
__attribute__((visibility("default"))) char *r_type_format(Sdb *TDB, const char *t);


__attribute__((visibility("default"))) int r_type_func_exist(Sdb *TDB, const char *func_name);
__attribute__((visibility("default"))) const char *r_type_func_cc(Sdb *TDB, const char *func_name);
__attribute__((visibility("default"))) const char *r_type_func_ret(Sdb *TDB, const char *func_name);
__attribute__((visibility("default"))) int r_type_func_args_count(Sdb *TDB, const char *func_name);
__attribute__((visibility("default"))) char *r_type_func_args_type(Sdb *TDB, const char *func_name, int i);
__attribute__((visibility("default"))) const char *r_type_func_args_name(Sdb *TDB, const char *func_name, int i);
__attribute__((visibility("default"))) char *r_type_func_guess(Sdb *TDB, char *func_name);
# 44 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_file.h" 1 3 4
# 19 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_file.h" 3 4
__attribute__((visibility("default"))) _Bool r_file_is_abspath(const char *file);
__attribute__((visibility("default"))) _Bool r_file_is_c(const char *file);
__attribute__((visibility("default"))) _Bool r_file_is_directory(const char *str);
__attribute__((visibility("default"))) _Bool r_file_is_regular(const char *str);

__attribute__((visibility("default"))) _Bool r_file_truncate(const char *filename, unsigned long long newsize);
__attribute__((visibility("default"))) char *r_file_new(const char *root, ...);
__attribute__((visibility("default"))) unsigned long long r_file_size(const char *str);
__attribute__((visibility("default"))) char *r_file_root(const char *root, const char *path);
__attribute__((visibility("default"))) RMmap *r_file_mmap(const char *file, _Bool rw, unsigned long long base);
__attribute__((visibility("default"))) int r_file_mmap_read(const char *file, unsigned long long addr, unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_file_mmap_write(const char *file, unsigned long long addr, const unsigned char *buf, int len);
__attribute__((visibility("default"))) void r_file_mmap_free(RMmap *m);
__attribute__((visibility("default"))) _Bool r_file_chmod(const char *file, const char *mod, int recursive);
__attribute__((visibility("default"))) char *r_file_temp(const char *prefix);
__attribute__((visibility("default"))) char *r_file_path(const char *bin);
__attribute__((visibility("default"))) char *r_file_binsh(void);
__attribute__((visibility("default"))) const char *r_file_basename(const char *path);
__attribute__((visibility("default"))) char *r_file_dirname(const char *path);
__attribute__((visibility("default"))) char *r_file_abspath_rel(const char *cwd, const char *file);
__attribute__((visibility("default"))) char *r_file_abspath(const char *file);
__attribute__((visibility("default"))) unsigned char *r_inflate(const unsigned char *src, int srcLen, int *srcConsumed, int *dstLen);
__attribute__((visibility("default"))) unsigned char *r_inflate_raw(const unsigned char *src, int srcLen, int *srcConsumed, int *dstLen);
__attribute__((visibility("default"))) unsigned char *r_file_gzslurp(const char *str, int *outlen, int origonfail);
__attribute__((visibility("default"))) char *r_stdin_slurp(int *sz);
__attribute__((visibility("default"))) char *r_file_slurp(const char *str, size_t *usz);
__attribute__((visibility("default"))) char *r_file_slurp_range(const char *str, unsigned long long off, int sz, int *osz);
__attribute__((visibility("default"))) char *r_file_slurp_random_line(const char *file);
__attribute__((visibility("default"))) char *r_file_slurp_random_line_count(const char *file, int *linecount);
__attribute__((visibility("default"))) unsigned char *r_file_slurp_hexpairs(const char *str, int *usz);
__attribute__((visibility("default"))) _Bool r_file_dump(const char *file, const unsigned char *buf, int len, _Bool append);
__attribute__((visibility("default"))) _Bool r_file_touch(const char *file);
__attribute__((visibility("default"))) _Bool r_file_hexdump(const char *file, const unsigned char *buf, int len, int append);
__attribute__((visibility("default"))) _Bool r_file_rm(const char *file);
__attribute__((visibility("default"))) _Bool r_file_exists(const char *str);
__attribute__((visibility("default"))) _Bool r_file_fexists(const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));
__attribute__((visibility("default"))) char *r_file_slurp_line(const char *file, int line, int context);
__attribute__((visibility("default"))) char *r_file_slurp_lines(const char *file, int line, int count);
__attribute__((visibility("default"))) char *r_file_slurp_lines_from_bottom(const char *file, int line);
__attribute__((visibility("default"))) int r_file_mkstemp(const char *prefix, char **oname);
__attribute__((visibility("default"))) char *r_file_tmpdir(void);
__attribute__((visibility("default"))) char *r_file_readlink(const char *path);
__attribute__((visibility("default"))) _Bool r_file_copy(const char *src, const char *dst);
__attribute__((visibility("default"))) _Bool r_file_move(const char *src, const char *dst);
__attribute__((visibility("default"))) RList* r_file_glob(const char *globbed_path, int maxdepth);
__attribute__((visibility("default"))) RMmap *r_file_mmap_arch(RMmap *map, const char *filename, int fd);
__attribute__((visibility("default"))) RList *r_file_lsrf(const char *dir);
__attribute__((visibility("default"))) _Bool r_file_rm_rf(const char *dir);
# 45 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_hex.h" 1 3 4







__attribute__((visibility("default"))) int r_hex_pair2bin(const char *arg);
__attribute__((visibility("default"))) int r_hex_str2bin_until_new(const char *in, unsigned char **out);
__attribute__((visibility("default"))) int r_hex_str2binmask(const char *in, unsigned char *out, unsigned char *mask);
__attribute__((visibility("default"))) int r_hex_str2bin(const char *in, unsigned char *out);
__attribute__((visibility("default"))) int r_hex_bin2str(const unsigned char *in, int len, char *out);
__attribute__((visibility("default"))) char *r_hex_bin2strdup(const unsigned char *in, int len);
__attribute__((visibility("default"))) _Bool r_hex_to_byte(unsigned char *val, unsigned char c);
__attribute__((visibility("default"))) int r_hex_str_is_valid(const char *s);
__attribute__((visibility("default"))) long long r_hex_bin_truncate(unsigned long long in, int n);
__attribute__((visibility("default"))) char *r_hex_from_c(const char *code);
__attribute__((visibility("default"))) char *r_hex_from_py(const char *code);
__attribute__((visibility("default"))) char *r_hex_from_code(const char *code);
__attribute__((visibility("default"))) char *r_hex_no_code(const char *code);
__attribute__((visibility("default"))) char *r_hex_from_py_str(char *out, const char *code);
__attribute__((visibility("default"))) char *r_hex_from_py_array(char *out, const char *code);
__attribute__((visibility("default"))) char *r_hex_from_c_str(char *out, const char **code);
__attribute__((visibility("default"))) char *r_hex_from_c_array(char *out, const char *code);
# 46 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_log.h" 1 3 4
# 47 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_mem.h" 1 3 4
# 48 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_name.h" 1 3 4







__attribute__((visibility("default"))) _Bool r_name_validate_print(const char ch);

__attribute__((visibility("default"))) _Bool r_name_validate_first(const char ch);
__attribute__((visibility("default"))) _Bool r_name_check(const char *s);
__attribute__((visibility("default"))) const char *r_name_filter_ro(const char *a);
__attribute__((visibility("default"))) _Bool r_name_filter_flag(char *s);
__attribute__((visibility("default"))) _Bool r_name_filter_print(char *s);
__attribute__((visibility("default"))) _Bool r_name_filter(char *name, int maxlen);
__attribute__((visibility("default"))) char *r_name_filter2(const char *name);

static inline _Bool r_name_validate_char(const char ch) {
 if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || ((ch) >= '0' && (ch) <= '9')) {
  return 1;
 }
 return (ch == '.' || ch == ':' || ch == '_');
}
# 49 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_num.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_num.h" 3 4
typedef struct {
 double d;
 unsigned long long n;
} RNumCalcValue;

typedef union {
 unsigned short u16;
 unsigned int u32;
 unsigned long long u64;
 short s16;
 int s32;
 long long s64;
 float f32;
 double f64;

} RNumFloat;

typedef enum {
 RNCNAME, RNCNUMBER, RNCEND, RNCINC, RNCDEC,
 RNCLT, RNCGT,
 RNCPLUS='+', RNCMINUS='-', RNCMUL='*', RNCDIV='/', RNCMOD='%',
 RNCNEG='~', RNCAND='&', RNCOR='|', RNCXOR='^',
 RNCPRINT=';', RNCASSIGN='=', RNCLEFTP='(', RNCRIGHTP=')',
 RNCSHL='<', RNCSHR = '>', RNCROL = '#', RNCROR = '$',
} RNumCalcToken;

typedef struct r_num_calc_t {
 RNumCalcToken curr_tok;
 RNumCalcValue number_value;
 char string_value[1024];
 int errors;
 char oc;
 const char *calc_err;
 int calc_i;
 const char *calc_buf;
 int calc_len;
 _Bool under_calc;
} RNumCalc;

typedef struct r_num_t {
 unsigned long long (*callback)(struct r_num_t *userptr, const char *str, int *ok);
 const char *(*cb_from_value)(struct r_num_t *userptr, unsigned long long value, int *ok);

 unsigned long long value;
 double fvalue;
 void *userptr;
 int dbz;
 RNumCalc nc;
} RNum;

typedef unsigned long long (*RNumCallback)(struct r_num_t *self, const char *str, int *ok);
typedef const char *(*RNumCallback2)(struct r_num_t *self, unsigned long long, int *ok);

__attribute__((visibility("default"))) RNum *r_num_new(RNumCallback cb, RNumCallback2 cb2, void *ptr);
__attribute__((visibility("default"))) void r_num_free(RNum *num);
__attribute__((visibility("default"))) char *r_num_units(char *buf, size_t len, unsigned long long number);
__attribute__((visibility("default"))) int r_num_conditional(RNum *num, const char *str);
__attribute__((visibility("default"))) unsigned long long r_num_calc(RNum *num, const char *str, const char **err);
__attribute__((visibility("default"))) const char *r_num_calc_index(RNum *num, const char *p);
__attribute__((visibility("default"))) unsigned long long r_num_chs(int cylinder, int head, int sector, int sectorsize);
__attribute__((visibility("default"))) int r_num_is_valid_input(RNum *num, const char *input_value);
__attribute__((visibility("default"))) unsigned long long r_num_get_input_value(RNum *num, const char *input_value);
__attribute__((visibility("default"))) const char *r_num_get_name(RNum *num, unsigned long long n);
__attribute__((visibility("default"))) char* r_num_as_string(RNum *___, unsigned long long n, _Bool printable_only);
__attribute__((visibility("default"))) unsigned long long r_num_tail(RNum *num, unsigned long long addr, const char *hex);
__attribute__((visibility("default"))) unsigned long long r_num_tail_base(RNum *num, unsigned long long addr, unsigned long long off);
__attribute__((visibility("default"))) _Bool r_num_segaddr(unsigned long long addr, unsigned long long sb, int sg, unsigned int *a, unsigned int *b);
__attribute__((visibility("default"))) void r_num_minmax_swap(unsigned long long *a, unsigned long long *b);
__attribute__((visibility("default"))) void r_num_minmax_swap_i(int *a, int *b);
__attribute__((visibility("default"))) unsigned long long r_num_math(RNum *num, const char *str);
__attribute__((visibility("default"))) unsigned long long r_num_get(RNum *num, const char *str);
__attribute__((visibility("default"))) int r_num_to_bits(char *out, unsigned long long num);
__attribute__((visibility("default"))) int r_num_to_ternary(char *out, unsigned long long num);
__attribute__((visibility("default"))) int r_num_rand(int max);
__attribute__((visibility("default"))) void r_num_irand(void);
__attribute__((visibility("default"))) unsigned long long r_get_input_num_value(RNum *num, const char *input_value);
__attribute__((visibility("default"))) _Bool r_is_valid_input_num_value(RNum *num, const char *input_value);
__attribute__((visibility("default"))) int r_num_between(RNum *num, const char *input_value);
__attribute__((visibility("default"))) _Bool r_num_is_op(const char c);
__attribute__((visibility("default"))) int r_num_str_len(const char *str);
__attribute__((visibility("default"))) int r_num_str_split(char *str);
__attribute__((visibility("default"))) RList *r_num_str_split_list(char *str);
__attribute__((visibility("default"))) void *r_num_dup(unsigned long long n);
__attribute__((visibility("default"))) double r_num_cos(double a);
__attribute__((visibility("default"))) double r_num_sin(double a);
__attribute__((visibility("default"))) size_t r_num_bit_count(unsigned int val);
__attribute__((visibility("default"))) double r_num_get_float(RNum *num, const char *str);

static inline long long r_num_abs(long long num) {
 return num < 0 ? -num : num;
}
# 50 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_table.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_table.h" 3 4
typedef struct {
 const char *name;
 RListComparator cmp;
} RTableColumnType;

typedef struct {
 char *name;
 RTableColumnType *type;
 int align;
 int width;
 int maxWidth;
 _Bool forceUppercase;
 int total;
} RTableColumn;

typedef struct {
 char *name;
 RInterval pitv;
 RInterval vitv;
 int perm;
 char *extra;
} RListInfo;

enum {
 R_TABLE_ALIGN_LEFT,
 R_TABLE_ALIGN_RIGHT,
 R_TABLE_ALIGN_CENTER
};

typedef struct {

 RList *items;
} RTableRow;

typedef struct {
 char *name;
 RList *rows;
 RList *cols;
 int totalCols;
 _Bool showHeader;
 _Bool showFancy;
 _Bool showSQL;
 _Bool showJSON;
 _Bool showCSV;
 _Bool showR2;
 _Bool showSum;
 _Bool adjustedCols;
 void *cons;
} RTable;

typedef void (*RTableSelector)(RTableRow *acc, RTableRow *new_row, int nth);

__attribute__((visibility("default"))) void r_table_row_free(void *_row);
__attribute__((visibility("default"))) void r_table_column_free(void *_col);
__attribute__((visibility("default"))) RTableColumn *r_table_column_clone(RTableColumn *col);
__attribute__((visibility("default"))) RTableColumnType *r_table_type(const char *name);
__attribute__((visibility("default"))) RTable *r_table_new(const char *name);
__attribute__((visibility("default"))) RTable *r_table_clone(const RTable *t);
__attribute__((visibility("default"))) void r_table_free(RTable *t);
__attribute__((visibility("default"))) int r_table_column_nth(RTable *t, const char *name);
__attribute__((visibility("default"))) void r_table_add_column(RTable *t, RTableColumnType *type, const char *name, int maxWidth);
__attribute__((visibility("default"))) void r_table_set_columnsf(RTable *t, const char *fmt, ...);
__attribute__((visibility("default"))) RTableRow *r_table_row_new(RList *items);
__attribute__((visibility("default"))) void r_table_add_row(RTable *t, const char *name, ...);
__attribute__((visibility("default"))) void r_table_add_rowf(RTable *t, const char *fmt, ...);
__attribute__((visibility("default"))) void r_table_add_row_list(RTable *t, RList *items);
__attribute__((visibility("default"))) char *r_table_tofancystring(RTable *t);
__attribute__((visibility("default"))) char *r_table_tosimplestring(RTable *t);
__attribute__((visibility("default"))) char *r_table_tostring(RTable *t);
__attribute__((visibility("default"))) char *r_table_tosql(RTable *t);
__attribute__((visibility("default"))) char *r_table_tocsv(RTable *t);
__attribute__((visibility("default"))) char *r_table_tor2cmds(RTable *t);
__attribute__((visibility("default"))) char *r_table_tojson(RTable *t);
__attribute__((visibility("default"))) const char *r_table_help(void);
__attribute__((visibility("default"))) void r_table_filter(RTable *t, int nth, int op, const char *un);
__attribute__((visibility("default"))) void r_table_sort(RTable *t, int nth, _Bool inc);
__attribute__((visibility("default"))) void r_table_uniq(RTable *t);
__attribute__((visibility("default"))) void r_table_group(RTable *t, int nth, RTableSelector fcn);
__attribute__((visibility("default"))) _Bool r_table_query(RTable *t, const char *q);
__attribute__((visibility("default"))) void r_table_hide_header(RTable *t);
__attribute__((visibility("default"))) _Bool r_table_align(RTable *t, int nth, int align);
__attribute__((visibility("default"))) void r_table_visual_list(RTable *table, RList* list, unsigned long long seek, unsigned long long len, int width, _Bool va);
__attribute__((visibility("default"))) RTable *r_table_push(RTable *t);
__attribute__((visibility("default"))) RTable *r_table_pop(RTable *t);
__attribute__((visibility("default"))) void r_table_fromjson(RTable *t, const char *csv);
__attribute__((visibility("default"))) void r_table_fromcsv(RTable *t, const char *csv);
__attribute__((visibility("default"))) char *r_table_tohtml(RTable *t);
__attribute__((visibility("default"))) void r_table_transpose(RTable *t);
__attribute__((visibility("default"))) void r_table_format(RTable *t, int nth, RTableColumnType *type);
__attribute__((visibility("default"))) unsigned long long r_table_reduce(RTable *t, int nth);
__attribute__((visibility("default"))) void r_table_columns(RTable *t, RList *cols);
# 51 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_graph.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_graph.h" 3 4
typedef struct r_graph_node_t {
 unsigned int idx;
 void *data;
 RList *out_nodes;
 RList *in_nodes;
 RList *all_neighbours;
 RListFree free;
} RGraphNode;

typedef struct r_graph_edge_t {
 RGraphNode *from;
 RGraphNode *to;
 int nth;
} RGraphEdge;

typedef struct r_graph_t {
 unsigned int n_nodes;
 unsigned int n_edges;
 int last_index;
 RList *nodes;
} RGraph;

typedef struct r_graph_visitor_t {
 void (*discover_node)(RGraphNode *n, struct r_graph_visitor_t *vis);
 void (*finish_node)(RGraphNode *n, struct r_graph_visitor_t *vis);
 void (*tree_edge)(const RGraphEdge *e, struct r_graph_visitor_t *vis);
 void (*back_edge)(const RGraphEdge *e, struct r_graph_visitor_t *vis);
 void (*fcross_edge)(const RGraphEdge *e, struct r_graph_visitor_t *vis);
 void *data;
} RGraphVisitor;
typedef void (*RGraphNodeCallback)(RGraphNode *n, RGraphVisitor *vis);
typedef void (*RGraphEdgeCallback)(const RGraphEdge *e, RGraphVisitor *vis);


__attribute__((visibility("default"))) RGraph *r_graph_new(void);

__attribute__((visibility("default"))) void r_graph_free(RGraph* g);

__attribute__((visibility("default"))) RGraphNode *r_graph_get_node(const RGraph *g, unsigned int idx);
__attribute__((visibility("default"))) RListIter *r_graph_node_iter(const RGraph *g, unsigned int idx);
__attribute__((visibility("default"))) void r_graph_reset(RGraph *g);
__attribute__((visibility("default"))) RGraphNode *r_graph_add_node(RGraph *g, void *data);
__attribute__((visibility("default"))) RGraphNode *r_graph_add_nodef(RGraph *g, void *data, RListFree user_free);

__attribute__((visibility("default"))) void r_graph_del_node(RGraph *g, RGraphNode *n);
__attribute__((visibility("default"))) void r_graph_add_edge(RGraph *g, RGraphNode *from, RGraphNode *to);
__attribute__((visibility("default"))) void r_graph_add_edge_at(RGraph *g, RGraphNode *from, RGraphNode *to, int nth);
__attribute__((visibility("default"))) RGraphNode *r_graph_node_split_forward(RGraph *g, RGraphNode *split_me, void *data);
__attribute__((visibility("default"))) void r_graph_del_edge(RGraph *g, RGraphNode *from, RGraphNode *to);
__attribute__((visibility("default"))) const RList *r_graph_get_neighbours(const RGraph *g, const RGraphNode *n);
__attribute__((visibility("default"))) RGraphNode *r_graph_nth_neighbour(const RGraph *g, const RGraphNode *n, int nth);
__attribute__((visibility("default"))) const RList *r_graph_innodes(const RGraph *g, const RGraphNode *n);
__attribute__((visibility("default"))) const RList *r_graph_all_neighbours(const RGraph *g, const RGraphNode *n);
__attribute__((visibility("default"))) const RList *r_graph_get_nodes(const RGraph *g);
__attribute__((visibility("default"))) _Bool r_graph_adjacent(const RGraph *g, const RGraphNode *from, const RGraphNode *to);
__attribute__((visibility("default"))) void r_graph_dfs_node(RGraph *g, RGraphNode *n, RGraphVisitor *vis);
__attribute__((visibility("default"))) void r_graph_dfs_node_reverse(RGraph *g, RGraphNode *n, RGraphVisitor *vis);
__attribute__((visibility("default"))) void r_graph_dfs(RGraph *g, RGraphVisitor *vis);
# 52 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_panels.h" 1 3 4







typedef enum {
 PANEL_LAYOUT_VERTICAL,
 PANEL_LAYOUT_HORIZONTAL,
 PANEL_LAYOUT_NONE
} RPanelLayout;

typedef enum {
 PANEL_TYPE_DEFAULT = 0,
 PANEL_TYPE_MENU = 1
} RPanelType;

typedef enum {
 PANEL_EDGE_NONE = 0,
 PANEL_EDGE_BOTTOM,
 PANEL_EDGE_RIGHT
} RPanelEdge;

typedef void (*RPanelMenuUpdateCallback)(void *user, const char *parent);
typedef void (*RPanelDirectionCallback)(void *user, int direction);
typedef void (*RPanelRotateCallback)(void *user, _Bool rev);
typedef void (*RPanelPrintCallback)(void *user, void *p);

typedef struct r_panel_pos_t {
 int x;
 int y;
 int w;
 int h;
} RPanelPos;

typedef struct r_panel_model_t {
 RPanelDirectionCallback directionCb;
 RPanelRotateCallback rotateCb;
 RPanelPrintCallback print_cb;
 RPanelType type;
 char *cmd;
 char *title;
 unsigned long long baseAddr;
 unsigned long long addr;
 _Bool cache;
 char *cmdStrCache;
 char *readOnly;
 char *funcName;
 char **filter;
 int n_filter;
 int rotate;
} RPanelModel;

typedef struct r_panel_view_t {
 RPanelPos pos;
 RPanelPos prevPos;
 int sx;
 int sy;
 int curpos;
 _Bool refresh;
 int edge;
} RPanelView;

typedef struct r_panel_t {
    RPanelModel *model;
    RPanelView *view;
} RPanel;

typedef void (*RPanelAlmightyCallback)(void *user, RPanel *panel, const RPanelLayout dir, const char *title);
# 53 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_pool.h" 1 3 4
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_pool.h" 3 4
typedef struct r_mem_pool_factory_t {
 int limit;
 RMemoryPool **pools;
} RPoolFactory;

__attribute__((visibility("default"))) RPoolFactory *r_poolfactory_instance(void);
__attribute__((visibility("default"))) void r_poolfactory_init (int limit);
__attribute__((visibility("default"))) RPoolFactory* r_poolfactory_new(int limit);
__attribute__((visibility("default"))) void *r_poolfactory_alloc(RPoolFactory *pf, int nodesize);
__attribute__((visibility("default"))) void r_poolfactory_stats(RPoolFactory *pf);
__attribute__((visibility("default"))) void r_poolfactory_free(RPoolFactory *pf);
# 54 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_diff.h" 1 3 4





# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 1 3 4
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/pj.h" 1 3 4




# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_strbuf.h" 1 3 4







typedef struct {
 char buf[32];
 size_t len;
 char *ptr;
 size_t ptrlen;
 _Bool weakref;
} RStrBuf;


__attribute__((visibility("default"))) RStrBuf *r_strbuf_new(const char *s);
__attribute__((visibility("default"))) const char *r_strbuf_set(RStrBuf *sb, const char *s);
__attribute__((visibility("default"))) _Bool r_strbuf_slice(RStrBuf *sb, int from, int len);
__attribute__((visibility("default"))) _Bool r_strbuf_setbin(RStrBuf *sb, const unsigned char *s, size_t len);
__attribute__((visibility("default"))) unsigned char* r_strbuf_getbin(RStrBuf *sb, int *len);
__attribute__((visibility("default"))) const char *r_strbuf_setf(RStrBuf *sb, const char *fmt, ...) __attribute__ ((format (printf, 2, 3)));
__attribute__((visibility("default"))) const char *r_strbuf_vsetf(RStrBuf *sb, const char *fmt, va_list ap);
__attribute__((visibility("default"))) _Bool r_strbuf_append(RStrBuf *sb, const char *s);
__attribute__((visibility("default"))) _Bool r_strbuf_append_n(RStrBuf *sb, const char *s, size_t l);
__attribute__((visibility("default"))) _Bool r_strbuf_prepend(RStrBuf *sb, const char *s);
__attribute__((visibility("default"))) _Bool r_strbuf_appendf(RStrBuf *sb, const char *fmt, ...) __attribute__ ((format (printf, 2, 3)));
__attribute__((visibility("default"))) _Bool r_strbuf_vappendf(RStrBuf *sb, const char *fmt, va_list ap);
__attribute__((visibility("default"))) char *r_strbuf_get(RStrBuf *sb);
__attribute__((visibility("default"))) char *r_strbuf_drain(RStrBuf *sb);
__attribute__((visibility("default"))) char *r_strbuf_drain_nofree(RStrBuf *sb);
__attribute__((visibility("default"))) int r_strbuf_length(RStrBuf *sb);
__attribute__((visibility("default"))) int r_strbuf_size(RStrBuf *sb);
__attribute__((visibility("default"))) void r_strbuf_free(RStrBuf *sb);
__attribute__((visibility("default"))) void r_strbuf_fini(RStrBuf *sb);
__attribute__((visibility("default"))) void r_strbuf_init(RStrBuf *sb);
__attribute__((visibility("default"))) const char *r_strbuf_initf(RStrBuf *sb, const char *fmt, ...);
__attribute__((visibility("default"))) _Bool r_strbuf_copy(RStrBuf *dst, RStrBuf *src);
__attribute__((visibility("default"))) _Bool r_strbuf_equals(RStrBuf *sa, RStrBuf *sb);
__attribute__((visibility("default"))) _Bool r_strbuf_reserve(RStrBuf *sb, size_t len);
__attribute__((visibility("default"))) _Bool r_strbuf_is_empty(RStrBuf *sb);
__attribute__((visibility("default"))) _Bool r_strbuf_setptr(RStrBuf *sb, char *p, int l);
# 6 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/pj.h" 2 3 4






typedef enum PJEncodingStr {
 PJ_ENCODING_STR_DEFAULT = 0,
 PJ_ENCODING_STR_BASE64,
 PJ_ENCODING_STR_HEX,
 PJ_ENCODING_STR_ARRAY,
 PJ_ENCODING_STR_STRIP
} PJEncodingStr;

typedef enum PJEncodingNum {
 PJ_ENCODING_NUM_DEFAULT = 0,
 PJ_ENCODING_NUM_STR,
 PJ_ENCODING_NUM_HEX
} PJEncodingNum;

typedef struct pj_t {
 RStrBuf sb;
 _Bool is_first;
 _Bool is_key;
 char braces[128];
 int level;
 PJEncodingStr str_encoding;
 PJEncodingNum num_encoding;
} PJ;


__attribute__((visibility("default"))) PJ *pj_new(void);
__attribute__((visibility("default"))) PJ *pj_new_with_encoding(PJEncodingStr str_encoding, PJEncodingNum num_encoding);
__attribute__((visibility("default"))) void pj_free(PJ *j);
__attribute__((visibility("default"))) void pj_reset(PJ *j);
__attribute__((visibility("default"))) char *pj_drain(PJ *j);

__attribute__((visibility("default"))) const char *pj_string(PJ *pj);





__attribute__((visibility("default"))) PJ *pj_end(PJ *j);
__attribute__((visibility("default"))) void pj_raw(PJ *j, const char *k);



__attribute__((visibility("default"))) PJ *pj_o(PJ *j);

__attribute__((visibility("default"))) PJ *pj_a(PJ *j);



__attribute__((visibility("default"))) PJ *pj_k(PJ *j, const char *k);

__attribute__((visibility("default"))) PJ *pj_knull(PJ *j, const char *k);

__attribute__((visibility("default"))) PJ *pj_kn(PJ *j, const char *k, unsigned long long n);

__attribute__((visibility("default"))) PJ *pj_kN(PJ *j, const char *k, long long n);

__attribute__((visibility("default"))) PJ *pj_ks(PJ *j, const char *k, const char *v);


__attribute__((visibility("default"))) PJ *pj_ka(PJ *j, const char *k);

__attribute__((visibility("default"))) PJ *pj_ko(PJ *j, const char *k);


__attribute__((visibility("default"))) PJ *pj_ki(PJ *j, const char *k, int d);
__attribute__((visibility("default"))) PJ *pj_kd(PJ *j, const char *k, double d);
__attribute__((visibility("default"))) PJ *pj_kf(PJ *j, const char *k, float d);
__attribute__((visibility("default"))) PJ *pj_kb(PJ *j, const char *k, _Bool v);


__attribute__((visibility("default"))) PJ *pj_null(PJ *j);


__attribute__((visibility("default"))) PJ *pj_r(PJ *j, const unsigned char *v, size_t v_len);


__attribute__((visibility("default"))) PJ *pj_kr(PJ *j, const char *k, const unsigned char *v, size_t v_len);


__attribute__((visibility("default"))) PJ *pj_s(PJ *j, const char *k);

__attribute__((visibility("default"))) PJ *pj_j(PJ *j, const char *k);

__attribute__((visibility("default"))) PJ *pj_se(PJ *j, const char *k);

__attribute__((visibility("default"))) PJ *pj_ne(PJ *j, unsigned long long n);


__attribute__((visibility("default"))) PJ *pj_n(PJ *j, unsigned long long n);
__attribute__((visibility("default"))) PJ *pj_N(PJ *j, long long n);
__attribute__((visibility("default"))) PJ *pj_i(PJ *j, int d);
__attribute__((visibility("default"))) PJ *pj_d(PJ *j, double d);
__attribute__((visibility("default"))) PJ *pj_f(PJ *j, float d);
__attribute__((visibility("default"))) PJ *pj_b(PJ *j, _Bool v);
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_graph.h" 1 3 4
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_hex.h" 1 3 4
# 12 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_log.h" 1 3 4
# 13 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_num.h" 1 3 4
# 14 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_panels.h" 1 3 4
# 15 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_sandbox.h" 1 3 4
# 29 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_sandbox.h" 3 4
__attribute__((visibility("default"))) DIR* r_sandbox_opendir(const char *path);

__attribute__((visibility("default"))) int r_sandbox_truncate(int fd, unsigned long long length);
__attribute__((visibility("default"))) int r_sandbox_lseek(int fd, unsigned long long addr, int mode);
__attribute__((visibility("default"))) int r_sandbox_close(int fd);
__attribute__((visibility("default"))) int r_sandbox_read(int fd, unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_sandbox_write(int fd, const unsigned char *buf, int len);
__attribute__((visibility("default"))) _Bool r_sandbox_enable(_Bool e);
__attribute__((visibility("default"))) _Bool r_sandbox_disable(_Bool e);
__attribute__((visibility("default"))) int r_sandbox_system(const char *x, int fork);
__attribute__((visibility("default"))) _Bool r_sandbox_creat(const char *path, int mode);
__attribute__((visibility("default"))) int r_sandbox_open(const char *path, int mode, int perm);
__attribute__((visibility("default"))) FILE *r_sandbox_fopen(const char *path, const char *mode);
__attribute__((visibility("default"))) int r_sandbox_chdir(const char *path);
__attribute__((visibility("default"))) _Bool r_sandbox_check_path(const char *path);
__attribute__((visibility("default"))) int r_sandbox_kill(int pid, int sig);
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_signal.h" 1 3 4
# 17 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_stack.h" 1 3 4







typedef void (*RStackFree)(void *ptr);

typedef struct r_stack_t {
 void **elems;
 unsigned int n_elems;
 int top;
 RStackFree free;
} RStack;

__attribute__((visibility("default"))) RStack *r_stack_new(unsigned int n);
__attribute__((visibility("default"))) void r_stack_free(RStack *s);
__attribute__((visibility("default"))) _Bool r_stack_is_empty(RStack *s);
__attribute__((visibility("default"))) RStack *r_stack_newf(unsigned int n, RStackFree f);
__attribute__((visibility("default"))) _Bool r_stack_push(RStack *s, void *el);
__attribute__((visibility("default"))) void *r_stack_pop(RStack *s);
__attribute__((visibility("default"))) size_t r_stack_size(RStack *s);
__attribute__((visibility("default"))) void *r_stack_peek(RStack *s);
# 18 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str.h" 1 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 1 3 4
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mbstate_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mbstate_t.h" 3 4
typedef __darwin_mbstate_t mbstate_t;
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 2 3 4
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_wctype.h" 1 3 4
# 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_wctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/__wctype.h" 1 3 4
# 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/__wctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_wctype_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_wctype_t.h" 3 4
typedef __darwin_wctype_t wctype_t;
# 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/__wctype.h" 2 3 4
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_wctype.h" 2 3 4







extern __inline __attribute__((__gnu_inline__)) int
iswalnum(wint_t _wc)
{
 return (__istype(_wc, 0x00000100L|0x00000400L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswalpha(wint_t _wc)
{
 return (__istype(_wc, 0x00000100L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswcntrl(wint_t _wc)
{
 return (__istype(_wc, 0x00000200L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswctype(wint_t _wc, wctype_t _charclass)
{
 return (__istype(_wc, _charclass));
}

extern __inline __attribute__((__gnu_inline__)) int
iswdigit(wint_t _wc)
{
 return (__isctype(_wc, 0x00000400L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswgraph(wint_t _wc)
{
 return (__istype(_wc, 0x00000800L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswlower(wint_t _wc)
{
 return (__istype(_wc, 0x00001000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswprint(wint_t _wc)
{
 return (__istype(_wc, 0x00040000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswpunct(wint_t _wc)
{
 return (__istype(_wc, 0x00002000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswspace(wint_t _wc)
{
 return (__istype(_wc, 0x00004000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswupper(wint_t _wc)
{
 return (__istype(_wc, 0x00008000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswxdigit(wint_t _wc)
{
 return (__isctype(_wc, 0x00010000L));
}

extern __inline __attribute__((__gnu_inline__)) wint_t
towlower(wint_t _wc)
{
        return (__tolower(_wc));
}

extern __inline __attribute__((__gnu_inline__)) wint_t
towupper(wint_t _wc)
{
        return (__toupper(_wc));
}
# 155 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_wctype.h" 3 4

wctype_t
 wctype(const char *);

# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 2 3 4




wint_t btowc(int);
wint_t fgetwc(FILE *);
wchar_t *fgetws(wchar_t * restrict, int, FILE * restrict);
wint_t fputwc(wchar_t, FILE *);
int fputws(const wchar_t * restrict, FILE * restrict);
int fwide(FILE *, int);
int fwprintf(FILE * restrict, const wchar_t * restrict, ...);
int fwscanf(FILE * restrict, const wchar_t * restrict, ...);
wint_t getwc(FILE *);
wint_t getwchar(void);
size_t mbrlen(const char * restrict, size_t, mbstate_t * restrict);
size_t mbrtowc(wchar_t * restrict, const char * restrict, size_t,
     mbstate_t * restrict);
int mbsinit(const mbstate_t *);
size_t mbsrtowcs(wchar_t * restrict, const char ** restrict, size_t,
     mbstate_t * restrict);
wint_t putwc(wchar_t, FILE *);
wint_t putwchar(wchar_t);
int swprintf(wchar_t * restrict, size_t, const wchar_t * restrict, ...);
int swscanf(const wchar_t * restrict, const wchar_t * restrict, ...);
wint_t ungetwc(wint_t, FILE *);
int vfwprintf(FILE * restrict, const wchar_t * restrict,
     __darwin_va_list);
int vswprintf(wchar_t * restrict, size_t, const wchar_t * restrict,
     __darwin_va_list);
int vwprintf(const wchar_t * restrict, __darwin_va_list);
size_t wcrtomb(char * restrict, wchar_t, mbstate_t * restrict);
wchar_t *wcscat(wchar_t * restrict, const wchar_t * restrict);
wchar_t *wcschr(const wchar_t *, wchar_t);
int wcscmp(const wchar_t *, const wchar_t *);
int wcscoll(const wchar_t *, const wchar_t *);
wchar_t *wcscpy(wchar_t * restrict, const wchar_t * restrict);
size_t wcscspn(const wchar_t *, const wchar_t *);
size_t wcsftime(wchar_t * restrict, size_t, const wchar_t * restrict,
     const struct tm * restrict) __asm("_" "wcsftime" );
size_t wcslen(const wchar_t *);
wchar_t *wcsncat(wchar_t * restrict, const wchar_t * restrict, size_t);
int wcsncmp(const wchar_t *, const wchar_t *, size_t);
wchar_t *wcsncpy(wchar_t * restrict , const wchar_t * restrict, size_t);
wchar_t *wcspbrk(const wchar_t *, const wchar_t *);
wchar_t *wcsrchr(const wchar_t *, wchar_t);
size_t wcsrtombs(char * restrict, const wchar_t ** restrict, size_t,
     mbstate_t * restrict);
size_t wcsspn(const wchar_t *, const wchar_t *);
wchar_t *wcsstr(const wchar_t * restrict, const wchar_t * restrict);
size_t wcsxfrm(wchar_t * restrict, const wchar_t * restrict, size_t);
int wctob(wint_t);
double wcstod(const wchar_t * restrict, wchar_t ** restrict);
wchar_t *wcstok(wchar_t * restrict, const wchar_t * restrict,
     wchar_t ** restrict);
long wcstol(const wchar_t * restrict, wchar_t ** restrict, int);
unsigned long
  wcstoul(const wchar_t * restrict, wchar_t ** restrict, int);
wchar_t *wmemchr(const wchar_t *, wchar_t, size_t);
int wmemcmp(const wchar_t *, const wchar_t *, size_t);
wchar_t *wmemcpy(wchar_t * restrict, const wchar_t * restrict, size_t);
wchar_t *wmemmove(wchar_t *, const wchar_t *, size_t);
wchar_t *wmemset(wchar_t *, wchar_t, size_t);
int wprintf(const wchar_t * restrict, ...);
int wscanf(const wchar_t * restrict, ...);
int wcswidth(const wchar_t *, size_t);
int wcwidth(wchar_t);

# 169 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 3 4

int vfwscanf(FILE * restrict, const wchar_t * restrict,
     __darwin_va_list);
int vswscanf(const wchar_t * restrict, const wchar_t * restrict,
     __darwin_va_list);
int vwscanf(const wchar_t * restrict, __darwin_va_list);
float wcstof(const wchar_t * restrict, wchar_t ** restrict);
long double
 wcstold(const wchar_t * restrict, wchar_t ** restrict);

long long
 wcstoll(const wchar_t * restrict, wchar_t ** restrict, int);
unsigned long long
 wcstoull(const wchar_t * restrict, wchar_t ** restrict, int);


# 194 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 3 4

size_t mbsnrtowcs(wchar_t * restrict, const char ** restrict, size_t,
            size_t, mbstate_t * restrict);
wchar_t *wcpcpy(wchar_t * restrict, const wchar_t * restrict) ;
wchar_t *wcpncpy(wchar_t * restrict, const wchar_t * restrict, size_t) ;
wchar_t *wcsdup(const wchar_t *) ;
int wcscasecmp(const wchar_t *, const wchar_t *) ;
int wcsncasecmp(const wchar_t *, const wchar_t *, size_t n) ;
size_t wcsnlen(const wchar_t *, size_t) ;
size_t wcsnrtombs(char * restrict, const wchar_t ** restrict, size_t,
            size_t, mbstate_t * restrict);
FILE *open_wmemstream(wchar_t ** __bufp, size_t * __sizep) ;









wchar_t *fgetwln(FILE * restrict, size_t *) ;
size_t wcslcat(wchar_t *, const wchar_t *, size_t);
size_t wcslcpy(wchar_t *, const wchar_t *, size_t);

# 5 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str.h" 2 3 4

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str_util.h" 1 3 4
# 7 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str.h" 2 3 4






typedef enum {
 R_STRING_ENC_LATIN1 = 'a',
 R_STRING_ENC_UTF8 = '8',
 R_STRING_ENC_UTF16LE = 'u',
 R_STRING_ENC_UTF32LE = 'U',
 R_STRING_ENC_UTF16BE = 'b',
 R_STRING_ENC_UTF32BE = 'B',
 R_STRING_ENC_GUESS = 'g',
} RStrEnc;

typedef int (*RStrRangeCallback) (void *, int);

typedef struct r_charset_rune_t {
 unsigned char *ch;
 unsigned char *hx;
 struct r_charset_rune_t *left;
 struct r_charset_rune_t *right;
} RCharsetRune;

typedef struct r_charset_t {
 _Bool loaded;
 Sdb *db;
 Sdb *db_char_to_hex;
 RCharsetRune *custom_charset;
 size_t encode_maxkeylen;
 size_t decode_maxkeylen;
} RCharset;





__attribute__((visibility("default"))) RCharset *r_charset_new(void);
__attribute__((visibility("default"))) void r_charset_free(RCharset *charset);
__attribute__((visibility("default"))) RCharsetRune *r_charset_rune_new(const unsigned char *ch, const unsigned char *hx);
__attribute__((visibility("default"))) void r_charset_rune_free(RCharsetRune *rcr);
__attribute__((visibility("default"))) size_t r_charset_encode_str(RCharset *rc, unsigned char *out, size_t out_len, const unsigned char *in, size_t in_len);
__attribute__((visibility("default"))) size_t r_charset_decode_str(RCharset *rc, unsigned char *out, size_t out_len, const unsigned char *in, size_t in_len);
__attribute__((visibility("default"))) _Bool r_charset_open(RCharset *c, const char *cs);
__attribute__((visibility("default"))) _Bool r_charset_use(RCharset *c, const char *cf);
__attribute__((visibility("default"))) RList *r_charset_list(RCharset *c);
__attribute__((visibility("default"))) void r_charset_close(RCharset *c);
__attribute__((visibility("default"))) RCharsetRune * add_rune(RCharsetRune *rcsr, const unsigned char *ch, const unsigned char *hx);
__attribute__((visibility("default"))) RCharsetRune *search_from_hex(RCharsetRune *rcsr, const unsigned char *hx);
__attribute__((visibility("default"))) RCharsetRune *search_from_char(RCharsetRune *rcsr, const unsigned char *ch);


__attribute__((visibility("default"))) char *r_str_repeat(const char *ch, int sz);
__attribute__((visibility("default"))) const char *r_str_pad(const char ch, int len);
__attribute__((visibility("default"))) const char *r_str_rstr(const char *base, const char *p);
__attribute__((visibility("default"))) const char *r_strstr_ansi (const char *a, const char *b);
__attribute__((visibility("default"))) const char *r_str_rchr(const char *base, const char *p, int ch);
__attribute__((visibility("default"))) const char *r_str_closer_chr(const char *b, const char *s);
__attribute__((visibility("default"))) int r_str_bounds(const char *str, int *h);
__attribute__((visibility("default"))) char *r_str_crop(const char *str, unsigned int x, unsigned int y, unsigned int x2, unsigned int y2);
__attribute__((visibility("default"))) char *r_str_scale(const char *r, int w, int h);
__attribute__((visibility("default"))) _Bool r_str_range_in(const char *r, unsigned long long addr);
__attribute__((visibility("default"))) int r_str_size(const char *s, int *rows);
__attribute__((visibility("default"))) size_t r_str_len_utf8(const char *s);
__attribute__((visibility("default"))) size_t r_str_len_utf8_ansi(const char *str);
__attribute__((visibility("default"))) size_t r_str_len_utf8char(const char *s, int left);
__attribute__((visibility("default"))) size_t r_str_utf8_charsize(const char *str);
__attribute__((visibility("default"))) size_t r_str_utf8_charsize_prev(const char *str, int prev_len);
__attribute__((visibility("default"))) size_t r_str_utf8_charsize_last(const char *str);
__attribute__((visibility("default"))) void r_str_filter_zeroline(char *str, int len);
__attribute__((visibility("default"))) size_t r_str_utf8_codepoint(const char *s, size_t left);
__attribute__((visibility("default"))) _Bool r_str_char_fullwidth(const char *s, size_t left);
__attribute__((visibility("default"))) int r_str_write(int fd, const char *b);
__attribute__((visibility("default"))) size_t r_str_ncpy(char *dst, const char *src, size_t n);
__attribute__((visibility("default"))) void r_str_sanitize(char *c);
__attribute__((visibility("default"))) char *r_str_sanitize_sdb_key(const char *s);
__attribute__((visibility("default"))) const char *r_str_casestr(const char *a, const char *b);
__attribute__((visibility("default"))) const char *r_str_firstbut(const char *s, char ch, const char *but);
__attribute__((visibility("default"))) const char *r_str_firstbut_escape(const char *s, char ch, const char *but);
__attribute__((visibility("default"))) const char *r_str_lastbut(const char *s, char ch, const char *but);
__attribute__((visibility("default"))) int r_str_split(char *str, char ch);
__attribute__((visibility("default"))) RList *r_str_split_list(char *str, const char *c, int n);
__attribute__((visibility("default"))) RList *r_str_split_duplist(const char *str, const char *c, _Bool trim);
__attribute__((visibility("default"))) size_t *r_str_split_lines(char *str, size_t *count);
__attribute__((visibility("default"))) char* r_str_replace(char *str, const char *key, const char *val, int g);
__attribute__((visibility("default"))) char *r_str_replace_icase(char *str, const char *key, const char *val, int g, int keep_case);
__attribute__((visibility("default"))) char *r_str_replace_in(char *str, unsigned int sz, const char *key, const char *val, int g);


__attribute__((visibility("default"))) int r_str_bits(char *strout, const unsigned char *buf, int len, const char *bitz);
__attribute__((visibility("default"))) int r_str_bits64(char *strout, unsigned long long in);
__attribute__((visibility("default"))) unsigned long long r_str_bits_from_string(const char *buf, const char *bitz);
__attribute__((visibility("default"))) int r_str_rwx(const char *str);
__attribute__((visibility("default"))) int r_str_replace_ch(char *s, char a, char b, _Bool g);
__attribute__((visibility("default"))) int r_str_replace_char(char *s, int a, int b);
__attribute__((visibility("default"))) int r_str_replace_char_once(char *s, int a, int b);
__attribute__((visibility("default"))) void r_str_remove_char(char *str, char c);
__attribute__((visibility("default"))) const char *r_str_rwx_i(int rwx);
__attribute__((visibility("default"))) int r_str_fmtargs(const char *fmt);
__attribute__((visibility("default"))) char *r_str_arg_escape(const char *arg);
__attribute__((visibility("default"))) int r_str_arg_unescape(char *arg);
__attribute__((visibility("default"))) char **r_str_argv(const char *str, int *_argc);
__attribute__((visibility("default"))) void r_str_argv_free(char **argv);
__attribute__((visibility("default"))) char *r_str_new(const char *str);
__attribute__((visibility("default"))) int r_snprintf (char *string, int len, const char *fmt, ...) __attribute__ ((format (printf, 3, 4)));
__attribute__((visibility("default"))) _Bool r_str_is_ascii(const char *str);
__attribute__((visibility("default"))) char *r_str_nextword(char *s, char ch);
__attribute__((visibility("default"))) _Bool r_str_is_printable(const char *str);
__attribute__((visibility("default"))) _Bool r_str_is_printable_limited(const char *str, int size);
__attribute__((visibility("default"))) _Bool r_str_is_printable_incl_newlines(const char *str);
__attribute__((visibility("default"))) char *r_str_appendlen(char *ptr, const char *string, int slen);
__attribute__((visibility("default"))) char *r_str_newf(const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));
__attribute__((visibility("default"))) char *r_str_newvf(const char *fmt, va_list ap);
__attribute__((visibility("default"))) int r_str_distance(const char *a, const char *b);
__attribute__((visibility("default"))) char *r_str_newlen(const char *str, int len);
__attribute__((visibility("default"))) const char *r_str_sysbits(const int v);
__attribute__((visibility("default"))) char *r_str_trunc_ellipsis(const char *str, int len);
__attribute__((visibility("default"))) const char *r_str_bool(int b);
__attribute__((visibility("default"))) _Bool r_str_is_true(const char *s);
__attribute__((visibility("default"))) _Bool r_str_is_false(const char *s);
__attribute__((visibility("default"))) _Bool r_str_is_bool(const char *val);
__attribute__((visibility("default"))) const char *r_str_ansi_chrn(const char *str, size_t n);
__attribute__((visibility("default"))) size_t r_str_ansi_len(const char *str);
__attribute__((visibility("default"))) size_t r_str_ansi_nlen(const char *str, size_t len);
__attribute__((visibility("default"))) int r_str_ansi_trim(char *str, int str_len, int n);
__attribute__((visibility("default"))) int r_str_ansi_filter(char *str, char **out, int **cposs, int len);
__attribute__((visibility("default"))) char *r_str_ansi_crop(const char *str, unsigned int x, unsigned int y, unsigned int x2, unsigned int y2);
__attribute__((visibility("default"))) int r_str_word_count(const char *string);
__attribute__((visibility("default"))) int r_str_char_count(const char *string, char ch);
__attribute__((visibility("default"))) char *r_str_word_get0set(char *stra, int stralen, int idx, const char *newstr, int *newlen);
__attribute__((visibility("default"))) int r_str_word_set0(char *str);
__attribute__((visibility("default"))) int r_str_word_set0_stack(char *str);
__attribute__((visibility("default"))) const char *r_str_word_get0(const char *str, int idx);
__attribute__((visibility("default"))) char *r_str_word_get_first(const char *string);
__attribute__((visibility("default"))) void r_str_trim(char *str);
__attribute__((visibility("default"))) char *r_str_wrap(const char *str, int w);
__attribute__((visibility("default"))) char *r_str_trim_dup(const char *str);
__attribute__((visibility("default"))) char *r_str_trim_lines(char *str);
__attribute__((visibility("default"))) void r_str_trim_head(char *str);
__attribute__((visibility("default"))) const char *r_str_trim_head_ro(const char *str);
__attribute__((visibility("default"))) const char *r_str_trim_head_wp(const char *str);
__attribute__((visibility("default"))) void r_str_trim_tail(char *str);
__attribute__((visibility("default"))) void r_str_trim_args(char *str);
__attribute__((visibility("default"))) unsigned int r_str_hash(const char *str);
__attribute__((visibility("default"))) unsigned long long r_str_hash64(const char *str);
__attribute__((visibility("default"))) char *r_str_trim_nc(char *str);
__attribute__((visibility("default"))) const char *r_str_nstr(const char *from, const char *to, int size);
__attribute__((visibility("default"))) const char *r_str_lchr(const char *str, char chr);
__attribute__((visibility("default"))) const char *r_sub_str_lchr(const char *str, int start, int end, char chr);
__attribute__((visibility("default"))) const char *r_sub_str_rchr(const char *str, int start, int end, char chr);
__attribute__((visibility("default"))) char *r_str_ichr(char *str, char chr);
__attribute__((visibility("default"))) _Bool r_str_ccmp(const char *dst, const char *orig, int ch);
__attribute__((visibility("default"))) _Bool r_str_cmp_list(const char *list, const char *item, char sep);
__attribute__((visibility("default"))) int r_str_cmp(const char *dst, const char *orig, int len);
__attribute__((visibility("default"))) int r_str_casecmp(const char *dst, const char *orig);
__attribute__((visibility("default"))) int r_str_ncasecmp(const char *dst, const char *orig, size_t n);
__attribute__((visibility("default"))) int r_str_ccpy(char *dst, char *orig, int ch);
__attribute__((visibility("default"))) const char *r_str_get(const char *str);
__attribute__((visibility("default"))) const char *r_str_get_fail(const char *str, const char *failstr);
__attribute__((visibility("default"))) const char *r_str_getf(const char *str);
__attribute__((visibility("default"))) char *r_str_ndup(const char *ptr, int len);
__attribute__((visibility("default"))) char *r_str_dup(char *ptr, const char *string);
__attribute__((visibility("default"))) int r_str_inject(char *begin, char *end, char *str, int maxlen);
__attribute__((visibility("default"))) int r_str_delta(char *p, char a, char b);
__attribute__((visibility("default"))) void r_str_filter(char *str, int len);
__attribute__((visibility("default"))) const char * r_str_tok(const char *str1, const char b, size_t len);
__attribute__((visibility("default"))) wchar_t *r_str_mb_to_wc(const char *buf);
__attribute__((visibility("default"))) char *r_str_wc_to_mb(const wchar_t *buf);
__attribute__((visibility("default"))) wchar_t *r_str_mb_to_wc_l(const char *buf, int len);
__attribute__((visibility("default"))) char *r_str_wc_to_mb_l(const wchar_t *buf, int len);
__attribute__((visibility("default"))) const char *r_str_str_xy(const char *s, const char *word, const char *prev, int *x, int *y);

typedef void(*str_operation)(char *c);

__attribute__((visibility("default"))) int r_str_do_until_token(str_operation op, char *str, const char tok);

__attribute__((visibility("default"))) void r_str_reverse(char *str);
__attribute__((visibility("default"))) int r_str_re_match(const char *str, const char *reg);
__attribute__((visibility("default"))) int r_str_re_replace(const char *str, const char *reg, const char *sub);
__attribute__((visibility("default"))) int r_str_path_unescape(char *path);
__attribute__((visibility("default"))) char *r_str_path_escape(const char *path);
__attribute__((visibility("default"))) int r_str_unescape(char *buf);
__attribute__((visibility("default"))) char *r_str_sanitize_r2(const char *buf);
__attribute__((visibility("default"))) char *r_str_escape_raw(const unsigned char *buf, int sz);
__attribute__((visibility("default"))) char *r_str_escape(const char *buf);
__attribute__((visibility("default"))) char *r_str_escape_sh(const char *buf);
__attribute__((visibility("default"))) char *r_str_escape_sql(const char *buf);
__attribute__((visibility("default"))) char *r_str_escape_dot(const char *buf);
__attribute__((visibility("default"))) char *r_str_escape_latin1(const char *buf, _Bool show_asciidot, _Bool esc_bslash, _Bool colors);
__attribute__((visibility("default"))) char *r_str_escape_utf8(const char *buf, _Bool show_asciidot, _Bool esc_bslash);
__attribute__((visibility("default"))) char *r_str_escape_utf8_keep_printable(const char *buf, _Bool show_asciidot, _Bool esc_bslash);
__attribute__((visibility("default"))) char *r_str_escape_utf16le(const char *buf, int buf_size, _Bool show_asciidot, _Bool esc_bslash);
__attribute__((visibility("default"))) char *r_str_escape_utf32le(const char *buf, int buf_size, _Bool show_asciidot, _Bool esc_bslash);
__attribute__((visibility("default"))) char *r_str_escape_utf16be(const char *buf, int buf_size, _Bool show_asciidot, _Bool esc_bslash);
__attribute__((visibility("default"))) char *r_str_escape_utf32be(const char *buf, int buf_size, _Bool show_asciidot, _Bool esc_bslash);
__attribute__((visibility("default"))) void r_str_byte_escape(const char *p, char **dst, int dot_nl, _Bool default_dot, _Bool esc_bslash);
__attribute__((visibility("default"))) char *r_str_format_msvc_argv(size_t argc, const char **argv);
__attribute__((visibility("default"))) void r_str_uri_decode(char *buf);
__attribute__((visibility("default"))) char *r_str_uri_encode(const char *buf);
__attribute__((visibility("default"))) char *r_str_utf16_decode(const unsigned char *s, int len);
__attribute__((visibility("default"))) int r_str_utf16_to_utf8(unsigned char *dst, int len_dst, const unsigned char *src, int len_src, int little_endian);
__attribute__((visibility("default"))) char *r_str_utf16_encode(const char *s, int len);
__attribute__((visibility("default"))) char *r_str_escape_utf8_for_json(const char *s, int len);
__attribute__((visibility("default"))) char *r_str_escape_utf8_for_json_strip(const char *buf, int buf_size);
__attribute__((visibility("default"))) char *r_str_encoded_json(const char *buf, int buf_size, int encoding);
__attribute__((visibility("default"))) char *r_str_home(const char *str);
__attribute__((visibility("default"))) char *r_str_r2_prefix(const char *str);
__attribute__((visibility("default"))) size_t r_str_nlen(const char *s, int n);
__attribute__((visibility("default"))) size_t r_str_nlen_w(const char *s, int n);
__attribute__((visibility("default"))) size_t r_wstr_clen(const char *s);
__attribute__((visibility("default"))) char *r_str_prepend(char *ptr, const char *string);
__attribute__((visibility("default"))) char *r_str_prefix_all(const char *s, const char *pfx);
__attribute__((visibility("default"))) char *r_str_append(char *ptr, const char *string);
__attribute__((visibility("default"))) char *r_str_append_owned(char *ptr, char *string);
__attribute__((visibility("default"))) char *r_str_appendf(char *ptr, const char *fmt, ...) __attribute__ ((format (printf, 2, 3)));
__attribute__((visibility("default"))) char *r_str_appendch(char *x, char y);
__attribute__((visibility("default"))) void r_str_case(char *str, _Bool up);
__attribute__((visibility("default"))) void r_str_trim_path(char *s);
__attribute__((visibility("default"))) unsigned char r_str_contains_macro(const char *input_value);
__attribute__((visibility("default"))) void r_str_truncate_cmd(char *string);
__attribute__((visibility("default"))) char* r_str_replace_thunked(char *str, char *clean, int *thunk, int clen,
      const char *key, const char *val, int g);
__attribute__((visibility("default"))) _Bool r_str_glob(const char *str, const char *glob);
__attribute__((visibility("default"))) int r_str_binstr2bin(const char *str, unsigned char *out, int outlen);
__attribute__((visibility("default"))) char *r_str_between(const char *str, const char *prefix, const char *suffix);
__attribute__((visibility("default"))) _Bool r_str_startswith(const char *str, const char *needle);
__attribute__((visibility("default"))) _Bool r_str_endswith(const char *str, const char *needle);
__attribute__((visibility("default"))) _Bool r_str_isnumber (const char *str);
__attribute__((visibility("default"))) const char *r_str_last (const char *in, const char *ch);
__attribute__((visibility("default"))) char* r_str_highlight(char *str, const char *word, const char *color, const char *color_reset);
__attribute__((visibility("default"))) char *r_qrcode_gen(const unsigned char *text, int len, _Bool utf8, _Bool inverted);
__attribute__((visibility("default"))) char *r_str_from_ut64(unsigned long long val);
__attribute__((visibility("default"))) void r_str_stripLine(char *str, const char *key);
__attribute__((visibility("default"))) char *r_str_list_join(RList *str, const char *sep);
__attribute__((visibility("default"))) char *r_str_array_join(const char **a, size_t n, const char *sep);

__attribute__((visibility("default"))) const char *r_str_sep(const char *base, const char *sep);
__attribute__((visibility("default"))) const char *r_str_rsep(const char *base, const char *p, const char *sep);
__attribute__((visibility("default"))) char *r_str_donut(int size);
__attribute__((visibility("default"))) char *r_str_version(const char *program);
__attribute__((visibility("default"))) char *r_str_ss(const char* msg, const char *nl, int cs);
# 19 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str_constpool.h" 1 3 4




# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdbht.h" 1 3 4
# 6 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str_constpool.h" 2 3 4
# 18 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str_constpool.h" 3 4
typedef struct r_str_constpool_t {
 HtPP *ht;
} RStrConstPool;

__attribute__((visibility("default"))) _Bool r_str_constpool_init(RStrConstPool *pool);
__attribute__((visibility("default"))) void r_str_constpool_fini(RStrConstPool *pool);
__attribute__((visibility("default"))) const char *r_str_constpool_get(RStrConstPool *pool, const char *str);
# 20 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_sys.h" 1 3 4
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_sys.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 3 4

extern int * __error(void);


# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 2 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_sys.h" 2 3 4
# 24 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_sys.h" 3 4
typedef struct {
 char *sysname;
 char *nodename;
 char *release;
 char *version;
 char *machine;
} RSysInfo;

__attribute__((visibility("default"))) RSysInfo *r_sys_info(void);
__attribute__((visibility("default"))) void r_sys_info_free(RSysInfo *si);

__attribute__((visibility("default"))) int r_sys_sigaction(int *sig, void (*handler) (int));
__attribute__((visibility("default"))) int r_sys_signal(int sig, void (*handler) (int));
__attribute__((visibility("default"))) void r_sys_env_init(void);
__attribute__((visibility("default"))) char **r_sys_get_environ(void);
__attribute__((visibility("default"))) void r_sys_set_environ(char **e);

__attribute__((visibility("default"))) int r_sys_fork(void);

__attribute__((visibility("default"))) void r_sys_exit(int status, _Bool nocleanup);
__attribute__((visibility("default"))) _Bool r_sys_stop(void);
__attribute__((visibility("default"))) char *r_sys_pid_to_path(int pid);
__attribute__((visibility("default"))) int r_sys_run(const unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_sys_run_rop(const unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_sys_getpid(void);
__attribute__((visibility("default"))) int r_sys_crash_handler(const char *cmd);
__attribute__((visibility("default"))) const char *r_sys_arch_str(int arch);
__attribute__((visibility("default"))) int r_sys_arch_id(const char *arch);
__attribute__((visibility("default"))) _Bool r_sys_arch_match(const char *archstr, const char *arch);
__attribute__((visibility("default"))) RList *r_sys_dir(const char *path);
__attribute__((visibility("default"))) void r_sys_perror_str(const char *fun);





__attribute__((visibility("default"))) const char *r_sys_prefix(const char *pfx);
__attribute__((visibility("default"))) _Bool r_sys_mkdir(const char *dir);
__attribute__((visibility("default"))) _Bool r_sys_mkdirp(const char *dir);
__attribute__((visibility("default"))) int r_sys_sleep(int secs);
__attribute__((visibility("default"))) int r_sys_usleep(int usecs);
__attribute__((visibility("default"))) char *r_sys_getenv(const char *key);
__attribute__((visibility("default"))) _Bool r_sys_getenv_asbool(const char *key);
__attribute__((visibility("default"))) int r_sys_setenv(const char *key, const char *value);
__attribute__((visibility("default"))) int r_sys_clearenv(void);
__attribute__((visibility("default"))) char *r_sys_whoami(void);
__attribute__((visibility("default"))) int r_sys_uid(void);
__attribute__((visibility("default"))) char *r_sys_getdir(void);
__attribute__((visibility("default"))) _Bool r_sys_chdir(const char *s);
__attribute__((visibility("default"))) _Bool r_sys_aslr(int val);
__attribute__((visibility("default"))) int r_sys_thp_mode(void);
__attribute__((visibility("default"))) int r_sys_cmd_str_full(const char *cmd, const char *input, int ilen, char **output, int *len, char **sterr);
# 96 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_sys.h" 3 4
__attribute__((visibility("default"))) int r_sys_truncate(const char *file, int sz);
__attribute__((visibility("default"))) int r_sys_cmd(const char *cmd);
__attribute__((visibility("default"))) int r_sys_cmdbg(const char *cmd);
__attribute__((visibility("default"))) int r_sys_cmdf(const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));
__attribute__((visibility("default"))) char *r_sys_cmd_str(const char *cmd, const char *input, int *len);
__attribute__((visibility("default"))) char *r_sys_cmd_strf(const char *cmd, ...) __attribute__ ((format (printf, 1, 2)));

__attribute__((visibility("default"))) void r_sys_backtrace(void);
__attribute__((visibility("default"))) _Bool r_sys_tts(const char *txt, _Bool bg);
# 136 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_sys.h" 3 4
__attribute__((visibility("default"))) char *r_syscmd_ls(const char *input, int w);
__attribute__((visibility("default"))) char *r_syscmd_cat(const char *file);
__attribute__((visibility("default"))) char *r_syscmd_mkdir(const char *dir);
__attribute__((visibility("default"))) _Bool r_syscmd_mv(const char *input);
__attribute__((visibility("default"))) char *r_syscmd_uniq(const char *file);
__attribute__((visibility("default"))) char *r_syscmd_head(const char *file, int count);
__attribute__((visibility("default"))) char *r_syscmd_tail(const char *file, int count);
__attribute__((visibility("default"))) char *r_syscmd_join(const char *file1, const char *file2);
__attribute__((visibility("default"))) char *r_syscmd_sort(const char *file);

__attribute__((visibility("default"))) unsigned char *r_sys_unxz (const unsigned char *data, size_t len, size_t *olen);
__attribute__((visibility("default"))) _Bool r_w32_init(void);
# 21 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_file.h" 1 3 4
# 22 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fcntl.h" 1 3 4
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/termios.h" 1 3 4
# 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/termios.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/termios.h" 1 3 4
# 263 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/termios.h" 3 4
typedef unsigned long tcflag_t;
typedef unsigned char cc_t;
typedef unsigned long speed_t;

struct termios {
 tcflag_t c_iflag;
 tcflag_t c_oflag;
 tcflag_t c_cflag;
 tcflag_t c_lflag;
 cc_t c_cc[20];
 speed_t c_ispeed;
 speed_t c_ospeed;
};
# 330 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/termios.h" 3 4

speed_t cfgetispeed(const struct termios *);
speed_t cfgetospeed(const struct termios *);
int cfsetispeed(struct termios *, speed_t);
int cfsetospeed(struct termios *, speed_t);
int tcgetattr(int, struct termios *);
int tcsetattr(int, int, const struct termios *);
int tcdrain(int) __asm("_" "tcdrain" );
int tcflow(int, int);
int tcflush(int, int);
int tcsendbreak(int, int);


void cfmakeraw(struct termios *);
int cfsetspeed(struct termios *, speed_t);


# 356 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/termios.h" 3 4
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
# 357 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/termios.h" 2 3 4
# 365 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/termios.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ttydefaults.h" 1 3 4
# 366 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/termios.h" 2 3 4
# 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/termios.h" 2 3 4




pid_t tcgetsid(int);

# 33 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ioctl.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ioctl.h" 3 4
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

# 36 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 1 3 4
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
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


# 37 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 66 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 3 4
__attribute__((visibility("default"))) const char *r_cons_version(void);



typedef int (*RConsGetSize)(int *rows);
typedef int (*RConsGetCursor)(int *rows);
typedef _Bool (*RConsIsBreaked)(void);
typedef void (*RConsFlush)(void);
typedef void (*RConsGrepCallback)(const char *grep);

typedef struct r_cons_bind_t {
 RConsGetSize get_size;
 RConsGetCursor get_cursor;
 PrintfCallback cb_printf;
 RConsIsBreaked is_breaked;
 RConsFlush cb_flush;
 RConsGrepCallback cb_grep;
} RConsBind;

typedef struct r_cons_grep_t {
 char strings[10][64];
 int nstrings;
 char *str;
 int counter;
 _Bool charCounter;
 int less;
 _Bool hud;
 _Bool human;
 int json;
 char *json_path;
 int range_line;
 int line;
 int sort;
 int sort_row;
 _Bool sort_invert;
 int f_line;
 int l_line;
 int tokens[64];
 int tokens_used;
 int amp;
 int zoom;
 int zoomy;
 int neg;
 int begin;
 int end;
 _Bool icase;
 _Bool ascart;
} RConsGrep;

enum { ALPHA_RESET = 0x00, ALPHA_FG = 0x01, ALPHA_BG = 0x02, ALPHA_FGBG = 0x03 };
enum { R_CONS_ATTR_BOLD = 1u << 1,
       R_CONS_ATTR_DIM = 1u << 2,
       R_CONS_ATTR_ITALIC = 1u << 3,
       R_CONS_ATTR_UNDERLINE = 1u << 4,
       R_CONS_ATTR_BLINK = 1u << 5
};

typedef struct rcolor_t {

 unsigned char attr;
 unsigned char a;
 unsigned char r;
 unsigned char g;
 unsigned char b;
 unsigned char r2;
 unsigned char g2;
 unsigned char b2;
 signed char id16;
} RColor;

typedef struct r_cons_palette_t {
 RColor b0x00;
 RColor b0x7f;
 RColor b0xff;
 RColor args;
 RColor bin;
 RColor btext;
 RColor call;
 RColor cjmp;
 RColor cmp;
 RColor comment;
 RColor usercomment;
 RColor creg;
 RColor flag;
 RColor fline;
 RColor floc;
 RColor flow;
 RColor flow2;
 RColor fname;
 RColor help;
 RColor input;
 RColor invalid;
 RColor jmp;
 RColor label;
 RColor math;
 RColor mov;
 RColor nop;
 RColor num;
 RColor offset;
 RColor other;
 RColor pop;
 RColor prompt;
 RColor push;
 RColor crypto;
 RColor reg;
 RColor reset;
 RColor ret;
 RColor swi;
 RColor trap;
 RColor ucall;
 RColor ujmp;
 RColor ai_read;
 RColor ai_write;
 RColor ai_exec;
 RColor ai_seq;
 RColor ai_ascii;
 RColor gui_cflow;
 RColor gui_dataoffset;
 RColor gui_background;
 RColor gui_alt_background;
 RColor gui_border;
 RColor wordhl;
 RColor linehl;
 RColor func_var;
 RColor func_var_type;
 RColor func_var_addr;
 RColor widget_bg;
 RColor widget_sel;


 RColor graph_box;
 RColor graph_box2;
 RColor graph_box3;
 RColor graph_box4;
 RColor graph_true;
 RColor graph_false;
 RColor graph_trufae;
 RColor graph_traced;
 RColor graph_current;
        RColor graph_diff_match;
        RColor graph_diff_unmatch;
        RColor graph_diff_unknown;
        RColor graph_diff_new;
} RConsPalette;

typedef struct r_cons_printable_palette_t {
 char *b0x00;
 char *b0x7f;
 char *b0xff;
 char *args;
 char *bin;
 char *btext;
 char *call;
 char *cjmp;
 char *cmp;
 char *comment;
 char *usercomment;
 char *creg;
 char *flag;
 char *fline;
 char *floc;
 char *flow;
 char *flow2;
 char *fname;
 char *help;
 char *input;
 char *invalid;
 char *jmp;
 char *label;
 char *math;
 char *mov;
 char *nop;
 char *num;
 char *offset;
 char *other;
 char *pop;
 char *prompt;
 char *push;
 char *crypto;
 char *reg;
 char *reset;
 char *ret;
 char *swi;
 char *trap;
 char *ucall;
 char *ujmp;
 char *ai_read;
 char *ai_write;
 char *ai_exec;
 char *ai_seq;
 char *ai_ascii;
 char *ai_unmap;
 char *gui_cflow;
 char *gui_dataoffset;
 char *gui_background;
 char *gui_alt_background;
 char *gui_border;
 char *wordhl;
 char *linehl;
 char *func_var;
 char *func_var_type;
 char *func_var_addr;
 char *widget_bg;
 char *widget_sel;


 char *graph_box;
 char *graph_box2;
 char *graph_box3;
 char *graph_box4;
 char *graph_diff_match;
 char *graph_diff_unmatch;
 char *graph_diff_unknown;
 char *graph_diff_new;
 char *graph_true;
 char *graph_false;
 char *graph_trufae;
 char *graph_traced;
 char *graph_current;
 char **rainbow;
 int rainbow_sz;
} RConsPrintablePalette;

typedef void (*RConsEvent)(void *);



typedef struct r_cons_canvas_t {
 int w;
 int h;
 int x;
 int y;
 char **b;
 int *blen;
 int *bsize;
 const char *attr;
 HtUP *attrs;
 RStrConstPool constpool;
 int sx;
 int sy;
 int color;
 int linemode;
} RConsCanvas;
# 374 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 3 4
typedef char *(*RConsEditorCallback)(void *core, const char *file, const char *str);
typedef int (*RConsClickCallback)(void *core, int x, int y);
typedef void (*RConsBreakCallback)(void *core);
typedef void *(*RConsSleepBeginCallback)(void *core);
typedef void (*RConsSleepEndCallback)(void *core, void *user);
typedef void (*RConsQueueTaskOneshot)(void *core, void *task, void *user);
typedef void (*RConsFunctionKey)(void *core, int fkey);

typedef enum { COLOR_MODE_DISABLED = 0, COLOR_MODE_16, COLOR_MODE_256, COLOR_MODE_16M } RConsColorMode;

typedef struct r_cons_context_t {
 RConsGrep grep;
 RStack *cons_stack;
 char *buffer;
 size_t buffer_len;
 size_t buffer_sz;
 RStrBuf *error;
 int errmode;
 _Bool breaked;
 _Bool was_breaked;
 RStack *break_stack;
 RConsEvent event_interrupt;
 void *event_interrupt_data;
 int cmd_depth;
 int cmd_str_depth;
 _Bool noflush;


 RLogCallback log_callback;

 char *lastOutput;
 int lastLength;
 _Bool lastMode;
 _Bool lastEnabled;
 _Bool is_interactive;
 _Bool pageable;

 int color_mode;
 RConsPalette cpal;
 RConsPrintablePalette pal;

 RList *sorted_lines;
 RList *unsorted_lines;
 int sorted_column;
 _Bool demo;
 _Bool is_html;
 _Bool was_html;
 _Bool grep_color;
 _Bool grep_highlight;
 _Bool filter;
 _Bool use_tts;
 _Bool flush;
} RConsContext;



typedef struct {
 int x;
 int y;
} RConsCursorPos;

typedef struct r_cons_t {
 RConsContext *context;
 char *lastline;
 int lines;
 int rows;
 int echo;
 int fps;
 int columns;
 int force_rows;
 int force_columns;
 int fix_rows;
 int fix_columns;
 _Bool break_lines;
 int optimize;

 _Bool show_autocomplete_widget;
 FILE *fdin;
 int fdout;
 const char *teefile;
 int (*user_fgets)(char *buf, int len);
 RConsEvent event_resize;
 void *event_data;
 int mouse_event;

 RConsEditorCallback cb_editor;
 RConsBreakCallback cb_break;
 RConsSleepBeginCallback cb_sleep_begin;
 RConsSleepEndCallback cb_sleep_end;
 RConsClickCallback cb_click;
 RConsQueueTaskOneshot cb_task_oneshot;
 RConsFunctionKey cb_fkey;

 void *user;

 struct termios term_raw, term_buf;






 RNum *num;


 char *pager;
 int blankline;
 char *highlight;
 _Bool enable_highlight;
 int null;
 int mouse;
 int is_wine;
 struct r_line_t *line;
 const char **vline;
 int refcnt;
 _Bool newline;
 int vtmode;
 _Bool use_utf8;
 _Bool use_utf8_curvy;
 _Bool dotted_lines;
 int linesleep;
 int pagesize;
 char *break_word;
 int break_word_len;
 unsigned long long timeout;
 char* (*rgbstr)(char *str, size_t sz, unsigned long long addr);
 _Bool click_set;
 int click_x;
 int click_y;
 _Bool show_vals;

 RConsCursorPos cpos;
} RCons;
# 670 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 3 4
enum {
 PAL_PROMPT = 0,
 PAL_ADDRESS,
 PAL_DEFAULT,
 PAL_CHANGED,
 PAL_JUMP,
 PAL_CALL,
 PAL_PUSH,
 PAL_TRAP,
 PAL_CMP,
 PAL_RET,
 PAL_NOP,
 PAL_METADATA,
 PAL_HEADER,
 PAL_PRINTABLE,
 PAL_LINES0,
 PAL_LINES1,
 PAL_LINES2,
 PAL_00,
 PAL_7F,
 PAL_FF
};


enum {
 LINE_NONE = 0,
 LINE_TRUE,
 LINE_FALSE,
 LINE_UNCJMP,
 LINE_NOSYM_VERT,
 LINE_NOSYM_HORIZ
};

typedef enum {
 INSERT_MODE = 'i',
 CONTROL_MODE = 'c'
} RViMode;





typedef struct r_cons_canvas_line_style_t {
 int color;
 int symbol;
 int dot_style;
 const char *ansicolor;
} RCanvasLineStyle;
# 747 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 3 4
__attribute__((visibility("default"))) void r_cons_image(const unsigned char *buf, int bufsz, int width, int mode);
__attribute__((visibility("default"))) RConsCanvas* r_cons_canvas_new(int w, int h);
__attribute__((visibility("default"))) void r_cons_canvas_free(RConsCanvas *c);
__attribute__((visibility("default"))) void r_cons_canvas_clear(RConsCanvas *c);
__attribute__((visibility("default"))) void r_cons_canvas_print(RConsCanvas *c);
__attribute__((visibility("default"))) void r_cons_canvas_print_region(RConsCanvas *c);
__attribute__((visibility("default"))) char *r_cons_canvas_to_string(RConsCanvas *c);
__attribute__((visibility("default"))) void r_cons_canvas_attr(RConsCanvas *c,const char * attr);
__attribute__((visibility("default"))) void r_cons_canvas_write(RConsCanvas *c, const char *_s);
__attribute__((visibility("default"))) _Bool r_cons_canvas_gotoxy(RConsCanvas *c, int x, int y);
__attribute__((visibility("default"))) void r_cons_canvas_goto_write(RConsCanvas *c,int x,int y, const char * s);
__attribute__((visibility("default"))) void r_cons_canvas_box(RConsCanvas *c, int x, int y, int w, int h, const char *color);
__attribute__((visibility("default"))) void r_cons_canvas_circle(RConsCanvas *c, int x, int y, int w, int h, const char *color);
__attribute__((visibility("default"))) void r_cons_canvas_line(RConsCanvas *c, int x, int y, int x2, int y2, RCanvasLineStyle *style);
__attribute__((visibility("default"))) void r_cons_canvas_line_diagonal(RConsCanvas *c, int x, int y, int x2, int y2, RCanvasLineStyle *style);
__attribute__((visibility("default"))) void r_cons_canvas_line_square(RConsCanvas *c, int x, int y, int x2, int y2, RCanvasLineStyle *style);
__attribute__((visibility("default"))) int r_cons_canvas_resize(RConsCanvas *c, int w, int h);
__attribute__((visibility("default"))) void r_cons_canvas_fill(RConsCanvas *c, int x, int y, int w, int h, char ch);
__attribute__((visibility("default"))) void r_cons_canvas_line_square_defined (RConsCanvas *c, int x, int y, int x2, int y2, RCanvasLineStyle *style, int bendpoint, int isvert);
__attribute__((visibility("default"))) void r_cons_canvas_line_back_edge (RConsCanvas *c, int x, int y, int x2, int y2, RCanvasLineStyle *style, int ybendpoint1, int xbendpoint, int ybendpoint2, int isvert);
__attribute__((visibility("default"))) RCons *r_cons_new(void);
__attribute__((visibility("default"))) RCons *r_cons_singleton(void);
__attribute__((visibility("default"))) RConsContext *r_cons_context(void);
__attribute__((visibility("default"))) RCons *r_cons_free(void);
__attribute__((visibility("default"))) char *r_cons_lastline(int *size);
__attribute__((visibility("default"))) char *r_cons_lastline_utf8_ansi_len(int *len);
__attribute__((visibility("default"))) void r_cons_set_click(int x, int y);
__attribute__((visibility("default"))) _Bool r_cons_get_click(int *x, int *y);

typedef void (*RConsBreak)(void *);
__attribute__((visibility("default"))) _Bool r_cons_is_breaked(void);
__attribute__((visibility("default"))) _Bool r_cons_was_breaked(void);
__attribute__((visibility("default"))) _Bool r_cons_is_interactive(void);
__attribute__((visibility("default"))) _Bool r_cons_default_context_is_interactive(void);
__attribute__((visibility("default"))) void *r_cons_sleep_begin(void);
__attribute__((visibility("default"))) void r_cons_sleep_end(void *user);


__attribute__((visibility("default"))) void r_cons_break_push(RConsBreak cb, void *user);
__attribute__((visibility("default"))) void r_cons_break_pop(void);
__attribute__((visibility("default"))) void r_cons_break_clear(void);
__attribute__((visibility("default"))) void r_cons_breakword(const char *s);
__attribute__((visibility("default"))) void r_cons_break_end(void);
__attribute__((visibility("default"))) void r_cons_break_timeout(int timeout);


__attribute__((visibility("default"))) int r_cons_pipe_open(const char *file, int fdn, int append);
__attribute__((visibility("default"))) void r_cons_pipe_close(int fd);
# 817 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 3 4
enum {
 R_CONS_ERRMODE_NULL,
 R_CONS_ERRMODE_QUIET,
 R_CONS_ERRMODE_ECHO,
 R_CONS_ERRMODE_BUFFER,
 R_CONS_ERRMODE_FLUSH,
};

__attribute__((visibility("default"))) void r_cons_push(void);
__attribute__((visibility("default"))) void r_cons_pop(void);
__attribute__((visibility("default"))) RConsContext *r_cons_context_new( RConsContext *parent);
__attribute__((visibility("default"))) void r_cons_context_free(RConsContext *context);
__attribute__((visibility("default"))) void r_cons_context_load(RConsContext *context);
__attribute__((visibility("default"))) void r_cons_context_reset(void);
__attribute__((visibility("default"))) _Bool r_cons_context_is_main(void);
__attribute__((visibility("default"))) void r_cons_context_break(RConsContext *context);
__attribute__((visibility("default"))) void r_cons_context_break_push(RConsContext *context, RConsBreak cb, void *user, _Bool sig);
__attribute__((visibility("default"))) void r_cons_context_break_pop(RConsContext *context, _Bool sig);


__attribute__((visibility("default"))) char *r_cons_editor(const char *file, const char *str);
__attribute__((visibility("default"))) void r_cons_reset(void);
__attribute__((visibility("default"))) void r_cons_reset_colors(void);
__attribute__((visibility("default"))) char *r_cons_errstr(void);
__attribute__((visibility("default"))) void r_cons_errmode(int mode);
__attribute__((visibility("default"))) void r_cons_errmodes(const char *mode);
__attribute__((visibility("default"))) int r_cons_eprintf(const char *format, ...);
__attribute__((visibility("default"))) void r_cons_eflush(void);
__attribute__((visibility("default"))) void r_cons_print_clear(void);
__attribute__((visibility("default"))) void r_cons_echo(const char *msg);
__attribute__((visibility("default"))) void r_cons_zero(void);
__attribute__((visibility("default"))) void r_cons_highlight(const char *word);
__attribute__((visibility("default"))) void r_cons_clear(void);
__attribute__((visibility("default"))) void r_cons_clear_buffer(void);
__attribute__((visibility("default"))) void r_cons_clear00(void);
__attribute__((visibility("default"))) void r_cons_clear_line(int err);
__attribute__((visibility("default"))) void r_cons_fill_line(void);
__attribute__((visibility("default"))) void r_cons_stdout_open(const char *file, int append);
__attribute__((visibility("default"))) int r_cons_stdout_set_fd(int fd);
__attribute__((visibility("default"))) void r_cons_gotoxy(int x, int y);
__attribute__((visibility("default"))) int r_cons_get_cur_line(void);
__attribute__((visibility("default"))) void r_cons_line(int x, int y, int x2, int y2, int ch);
__attribute__((visibility("default"))) void r_cons_show_cursor(int cursor);
__attribute__((visibility("default"))) char *r_cons_swap_ground(const char *col);
__attribute__((visibility("default"))) _Bool r_cons_drop(int n);
__attribute__((visibility("default"))) void r_cons_chop(void);
__attribute__((visibility("default"))) void r_cons_set_raw(_Bool b);
__attribute__((visibility("default"))) void r_cons_set_interactive(_Bool b);
__attribute__((visibility("default"))) void r_cons_set_last_interactive(void);
__attribute__((visibility("default"))) void r_cons_set_utf8(_Bool b);
__attribute__((visibility("default"))) void r_cons_grep(const char *grep);


__attribute__((visibility("default"))) int r_cons_printf(const char *format, ...) __attribute__ ((format (printf, 1, 2)));
__attribute__((visibility("default"))) void r_cons_printf_list(const char *format, va_list ap);
__attribute__((visibility("default"))) void r_cons_strcat(const char *str);
__attribute__((visibility("default"))) void r_cons_strcat_at(const char *str, int x, char y, int w, int h);

__attribute__((visibility("default"))) void r_cons_println(const char* str);

__attribute__((visibility("default"))) void r_cons_strcat_justify(const char *str, int j, char c);
__attribute__((visibility("default"))) void r_cons_printat(const char *str, int x, char y);
__attribute__((visibility("default"))) int r_cons_write(const char *str, int len);
__attribute__((visibility("default"))) void r_cons_newline(void);
__attribute__((visibility("default"))) void r_cons_filter(void);
__attribute__((visibility("default"))) void r_cons_flush(void);
__attribute__((visibility("default"))) void r_cons_print_fps (int col);
__attribute__((visibility("default"))) void r_cons_last(void);
__attribute__((visibility("default"))) int r_cons_less_str(const char *str, const char *exitkeys);
__attribute__((visibility("default"))) void r_cons_less(void);
__attribute__((visibility("default"))) void r_cons_2048(_Bool color);
__attribute__((visibility("default"))) void r_cons_memset(char ch, int len);
__attribute__((visibility("default"))) void r_cons_visual_flush(void);
__attribute__((visibility("default"))) void r_cons_visual_write(char *buffer);
__attribute__((visibility("default"))) _Bool r_cons_is_utf8(void);
__attribute__((visibility("default"))) _Bool r_cons_is_windows(void);
__attribute__((visibility("default"))) void r_cons_cmd_help(const char * help[], _Bool use_color);
__attribute__((visibility("default"))) void r_cons_log_stub(const char *output, const char *funcname, const char *filename,
 unsigned int lineno, unsigned int level, const char *tag, const char *fmtstr, ...) __attribute__ ((format (printf, 7, 8)));



__attribute__((visibility("default"))) int r_cons_controlz(int ch);
__attribute__((visibility("default"))) int r_cons_readchar(void);
__attribute__((visibility("default"))) _Bool r_cons_readpush(const char *str, int len);
__attribute__((visibility("default"))) void r_cons_readflush(void);
__attribute__((visibility("default"))) void r_cons_switchbuf(_Bool active);
__attribute__((visibility("default"))) int r_cons_readchar_timeout(unsigned int usec);
__attribute__((visibility("default"))) int r_cons_any_key(const char *msg);
__attribute__((visibility("default"))) int r_cons_eof(void);

__attribute__((visibility("default"))) int r_cons_palette_init(const unsigned char *pal);
__attribute__((visibility("default"))) int r_cons_pal_set(const char *key, const char *val);
__attribute__((visibility("default"))) void r_cons_pal_update_event(void);
__attribute__((visibility("default"))) void r_cons_pal_free(RConsContext *ctx);
__attribute__((visibility("default"))) void r_cons_pal_init(RConsContext *ctx);
__attribute__((visibility("default"))) void r_cons_pal_copy(RConsContext *dst, RConsContext *src);
__attribute__((visibility("default"))) char *r_cons_pal_parse(const char *str, RColor *outcol);
__attribute__((visibility("default"))) void r_cons_pal_random(void);
__attribute__((visibility("default"))) RColor r_cons_pal_get(const char *key);
__attribute__((visibility("default"))) RColor r_cons_pal_get_i(int index);
__attribute__((visibility("default"))) const char *r_cons_pal_get_name(int index);
__attribute__((visibility("default"))) int r_cons_pal_len(void);
__attribute__((visibility("default"))) int r_cons_rgb_parse(const char *p, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);
__attribute__((visibility("default"))) char *r_cons_rgb_tostring(unsigned char r, unsigned char g, unsigned char b);
__attribute__((visibility("default"))) void r_cons_pal_list(int rad, const char *arg);
__attribute__((visibility("default"))) void r_cons_pal_show(void);
__attribute__((visibility("default"))) int r_cons_get_size(int *rows);
__attribute__((visibility("default"))) _Bool r_cons_is_tty(void);
__attribute__((visibility("default"))) int r_cons_get_cursor(int *rows);
__attribute__((visibility("default"))) int r_cons_arrow_to_hjkl(int ch);
__attribute__((visibility("default"))) char *r_cons_html_filter(const char *ptr, int *newlen);
__attribute__((visibility("default"))) char *r_cons_rainbow_get(int idx, int last, _Bool bg);
__attribute__((visibility("default"))) void r_cons_rainbow_free(RConsContext *ctx);
__attribute__((visibility("default"))) void r_cons_rainbow_new(RConsContext *ctx, int sz);

__attribute__((visibility("default"))) int r_cons_fgets(char *buf, int len, int argc, const char **argv);
__attribute__((visibility("default"))) char *r_cons_hud(RList *list, const char *prompt);
__attribute__((visibility("default"))) char *r_cons_hud_line(RList *list, const char *prompt);
__attribute__((visibility("default"))) char *r_cons_hud_line_string(const char *s);
__attribute__((visibility("default"))) char *r_cons_hud_path(const char *path, int dir);
__attribute__((visibility("default"))) char *r_cons_hud_string(const char *s);
__attribute__((visibility("default"))) char *r_cons_hud_file(const char *f);

__attribute__((visibility("default"))) const char *r_cons_get_buffer(void);
__attribute__((visibility("default"))) int r_cons_get_buffer_len(void);
__attribute__((visibility("default"))) void r_cons_grep_help(void);
__attribute__((visibility("default"))) void r_cons_grep_parsecmd(char *cmd, const char *quotestr);
__attribute__((visibility("default"))) char * r_cons_grep_strip(char *cmd, const char *quotestr);
__attribute__((visibility("default"))) void r_cons_grep_process(char * grep);
__attribute__((visibility("default"))) int r_cons_grep_line(char *buf, int len);
__attribute__((visibility("default"))) void r_cons_grepbuf(void);

__attribute__((visibility("default"))) void r_cons_rgb(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
__attribute__((visibility("default"))) void r_cons_rgb_fgbg(unsigned char r, unsigned char g, unsigned char b, unsigned char R, unsigned char G, unsigned char B);
__attribute__((visibility("default"))) void r_cons_rgb_init(void);
__attribute__((visibility("default"))) char *r_cons_rgb_str_mode(RConsColorMode mode, char *outstr, size_t sz, RColor *rcolor);
__attribute__((visibility("default"))) char *r_cons_rgb_str(char *outstr, size_t sz, RColor *rcolor);
__attribute__((visibility("default"))) char *r_cons_rgb_str_off(char *outstr, size_t sz, unsigned long long off);
__attribute__((visibility("default"))) void r_cons_color(int fg, int r, int g, int b);

__attribute__((visibility("default"))) RColor r_cons_color_random(unsigned char alpha);
__attribute__((visibility("default"))) void r_cons_invert(int set, int color);
__attribute__((visibility("default"))) _Bool r_cons_yesno(int def, const char *fmt, ...) __attribute__ ((format (printf, 2, 3)));
__attribute__((visibility("default"))) char *r_cons_input(const char *msg);
__attribute__((visibility("default"))) char *r_cons_password(const char *msg);
__attribute__((visibility("default"))) _Bool r_cons_set_cup(_Bool enable);
__attribute__((visibility("default"))) void r_cons_column(int c);
__attribute__((visibility("default"))) int r_cons_get_column(void);
__attribute__((visibility("default"))) char *r_cons_message(const char *msg);
__attribute__((visibility("default"))) void r_cons_set_title(const char *str);
__attribute__((visibility("default"))) _Bool r_cons_enable_mouse(const _Bool enable);
__attribute__((visibility("default"))) void r_cons_enable_highlight(const _Bool enable);
__attribute__((visibility("default"))) void r_cons_bind(RConsBind *bind);
__attribute__((visibility("default"))) const char* r_cons_get_rune(const unsigned char ch);



typedef struct {
 int w;
 int h;
 unsigned char *buf;
 size_t buf_size;
} RConsPixel;

__attribute__((visibility("default"))) RConsPixel *r_cons_pixel_new(int w, int h);
__attribute__((visibility("default"))) void r_cons_pixel_free(RConsPixel *p);
__attribute__((visibility("default"))) void r_cons_pixel_flush(RConsPixel *p, int sx, int sy);
__attribute__((visibility("default"))) char *r_cons_pixel_drain(RConsPixel *p);
__attribute__((visibility("default"))) unsigned char r_cons_pixel_get(RConsPixel *p, int x, int y);
__attribute__((visibility("default"))) void r_cons_pixel_set(RConsPixel *p, int x, int y, unsigned char v);
__attribute__((visibility("default"))) void r_cons_pixel_sets(RConsPixel *p, int x, int y, const char *s);
__attribute__((visibility("default"))) void r_cons_pixel_fill(RConsPixel *p, int _x, int _y, int w, int h, int v);
__attribute__((visibility("default"))) char *r_cons_pixel_tostring(RConsPixel *p);
# 1003 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 3 4
typedef struct r_selection_widget_t {
 const char **options;
 int options_len;
 int selection;
 int w, h;
 int scroll;
 _Bool complete_common;
 _Bool direction;
} RSelWidget;

typedef struct r_line_hist_t {
 char **data;
 char *match;
 int size;
 int index;
 int top;
 int autosave;
 _Bool do_setup_match;
} RLineHistory;

typedef struct r_line_buffer_t {
 char data[4096];
 int index;
 int length;
} RLineBuffer;

typedef struct r_hud_t {
 int current_entry_n;
 int top_entry_n;
 char activate;
 int vi;
} RLineHud;

typedef struct r_line_t RLine;
typedef struct r_line_comp_t RLineCompletion;

typedef enum { R_LINE_PROMPT_DEFAULT, R_LINE_PROMPT_OFFSET, R_LINE_PROMPT_FILE } RLinePromptType;

typedef int (*RLineCompletionCb)(RLineCompletion *completion, RLineBuffer *buf, RLinePromptType prompt_type, void *user);

struct r_line_comp_t {
 _Bool opt;
 size_t args_limit;
 _Bool quit;
 RPVector args;
 RLineCompletionCb run;
 void *run_user;
};

typedef char* (*RLineEditorCb)(void *core, const char *str);
typedef int (*RLineHistoryUpCb)(RLine* line);
typedef int (*RLineHistoryDownCb)(RLine* line);

struct r_line_t {
 RLineCompletion completion;
 RLineBuffer buffer;
 RLineHistory history;
 RSelWidget *sel_widget;

 RLineHistoryUpCb cb_history_up;
 RLineHistoryDownCb cb_history_down;
 RLineEditorCb cb_editor;

 RConsFunctionKey cb_fkey;

 _Bool echo;
 char *prompt;
 RList *kill_ring;
 int kill_ring_ptr;
 char *clipboard;
 _Bool disable;
 void *user;
 _Bool histfilter;
 int (*hist_up)(void *user);
 int (*hist_down)(void *user);
 char *contents;
 _Bool zerosep;
 _Bool enable_vi_mode;
 int vi_mode;
 _Bool prompt_mode;
 RLinePromptType prompt_type;
 int offset_hist_index;
 int file_hist_index;
 RLineHud *hud;
 RList *sdbshell_hist;
 RListIter *sdbshell_hist_iter;
 int vtmode;
};



__attribute__((visibility("default"))) RLine *r_line_new(void);
__attribute__((visibility("default"))) RLine *r_line_singleton(void);
__attribute__((visibility("default"))) void r_line_free(void);
__attribute__((visibility("default"))) char *r_line_get_prompt(void);
__attribute__((visibility("default"))) void r_line_set_prompt(const char *prompt);
__attribute__((visibility("default"))) int r_line_dietline_init(void);
__attribute__((visibility("default"))) void r_line_clipboard_push (const char *str);
__attribute__((visibility("default"))) void r_line_hist_free(void);

typedef int (RLineReadCallback)(void *user, const char *line);
__attribute__((visibility("default"))) const char *r_line_readline(void);
__attribute__((visibility("default"))) const char *r_line_readline_cb(RLineReadCallback cb, void *user);

__attribute__((visibility("default"))) int r_line_hist_load(const char *file);
__attribute__((visibility("default"))) int r_line_hist_add(const char *line);
__attribute__((visibility("default"))) _Bool r_line_hist_save(const char *file);
__attribute__((visibility("default"))) int r_line_hist_label(const char *label, void (*cb)(const char*));
__attribute__((visibility("default"))) void r_line_label_show(void);
__attribute__((visibility("default"))) int r_line_hist_list(void);
__attribute__((visibility("default"))) const char *r_line_hist_get(int n);

__attribute__((visibility("default"))) int r_line_set_hist_callback(RLine *line, RLineHistoryUpCb cb_up, RLineHistoryDownCb cb_down);
__attribute__((visibility("default"))) int r_line_hist_cmd_up(RLine *line);
__attribute__((visibility("default"))) int r_line_hist_cmd_down(RLine *line);

__attribute__((visibility("default"))) void r_line_completion_init(RLineCompletion *completion, size_t args_limit);
__attribute__((visibility("default"))) void r_line_completion_fini(RLineCompletion *completion);
__attribute__((visibility("default"))) void r_line_completion_push(RLineCompletion *completion, const char *str);
__attribute__((visibility("default"))) void r_line_completion_set(RLineCompletion *completion, int argc, const char **argv);
__attribute__((visibility("default"))) void r_line_completion_clear(RLineCompletion *completion);





typedef int (*RPanelsMenuCallback)(void *user);
typedef struct r_panels_menu_item {
 int n_sub, selectedIndex;
 char *name;
 struct r_panels_menu_item **sub;
 RPanelsMenuCallback cb;
 RPanel *p;
} RPanelsMenuItem;

typedef struct r_panels_menu_t {
 RPanelsMenuItem *root;
 RPanelsMenuItem **history;
 int depth;
 int n_refresh;
 RPanel **refreshPanels;
} RPanelsMenu;

typedef enum {
 PANEL_MODE_DEFAULT,
 PANEL_MODE_MENU,
 PANEL_MODE_ZOOM,
 PANEL_MODE_WINDOW,
 PANEL_MODE_HELP
} RPanelsMode;

typedef enum {
 PANEL_FUN_SNOW,
 PANEL_FUN_SAKURA,
 PANEL_FUN_NOFUN
} RPanelsFun;

typedef enum {
 PANEL_LAYOUT_DEFAULT_STATIC = 0,
 PANEL_LAYOUT_DEFAULT_DYNAMIC = 1
} RPanelsLayout;

typedef struct {
 int x;
 int y;
 _Bool stuck;
} RPanelsSnow;

typedef struct {
 RStrBuf *data;
 RPanelPos pos;
 int idx;
 int offset;
} RModal;

typedef struct r_panels_t {
 RConsCanvas *can;
 RPanel **panel;
 int n_panels;
 int columnWidth;
 int curnode;
 int mouse_orig_x;
 int mouse_orig_y;
 _Bool autoUpdate;
 _Bool mouse_on_edge_x;
 _Bool mouse_on_edge_y;
 RPanelsMenu *panels_menu;
 Sdb *db;
 Sdb *rotate_db;
 Sdb *modal_db;
 HtPP *mht;
 RPanelsMode mode;
 RPanelsFun fun;
 RPanelsMode prevMode;
 RPanelsLayout layout;
 RList *snows;
 char *name;
} RPanels;

typedef enum {
 DEFAULT,
 ROTATE,
 DEL,
 QUIT,
} RPanelsRootState;

typedef struct r_panels_root_t {
 int n_panels;
 int cur_panels;
 Sdb *pdc_caches;
 Sdb *cur_pdc_cache;
 RPanels **panels;
 RPanelsRootState root_state;
} RPanelsRoot;
# 7 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_diff.h" 2 3 4





__attribute__((visibility("default"))) const char *r_diff_version(void);
# 21 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_diff.h" 3 4
typedef struct r_diff_op_t {

 unsigned long long a_off;
 const unsigned char *a_buf;
 unsigned int a_len;


 unsigned long long b_off;
 const unsigned char *b_buf;
 unsigned int b_len;
} RDiffOp;



typedef struct r_diff_t {
 unsigned long long off_a;
 unsigned long long off_b;
 int delta;
 void *user;
 _Bool verbose;
 int type;
 char *diff_cmd;
 int (*callback)(struct r_diff_t *diff, void *user, RDiffOp *op);
} RDiff;

typedef enum {
 LEVEND,
 LEVNOP,
 LEVSUB,
 LEVADD,
 LEVDEL
} RLevOp;

typedef struct r_lev_buf {
 void *buf;
 unsigned int len;
} RLevBuf;
typedef _Bool (*RLevMatches)(RLevBuf *a, RLevBuf *b, unsigned int ia, unsigned int ib);

typedef int (*RDiffCallback) (RDiff *diff, void *user, RDiffOp *op);

typedef struct r_diffchar_t {
 const unsigned char *align_a;
 const unsigned char *align_b;
 size_t len_buf;
 size_t start_align;
} RDiffChar;



__attribute__((visibility("default"))) RDiff *r_diff_new(void);
__attribute__((visibility("default"))) RDiff *r_diff_new_from(unsigned long long off_a, unsigned long long off_b);
__attribute__((visibility("default"))) void r_diff_free(RDiff *d);

__attribute__((visibility("default"))) int r_diff_buffers(RDiff *d, const unsigned char *a, unsigned int la, const unsigned char *b, unsigned int lb);
__attribute__((visibility("default"))) int r_diff_buffers_static(RDiff *d, const unsigned char *a, int la, const unsigned char *b, int lb);
__attribute__((visibility("default"))) int r_diff_buffers_radiff(RDiff *d, const unsigned char *a, int la, const unsigned char *b, int lb);
__attribute__((visibility("default"))) int r_diff_buffers_delta(RDiff *diff, const unsigned char *sa, int la, const unsigned char *sb, int lb);
__attribute__((visibility("default"))) int r_diff_buffers(RDiff *d, const unsigned char *a, unsigned int la, const unsigned char *b, unsigned int lb);
__attribute__((visibility("default"))) char *r_diff_buffers_to_string(RDiff *d, const unsigned char *a, int la, const unsigned char *b, int lb);
__attribute__((visibility("default"))) int r_diff_set_callback(RDiff *d, RDiffCallback callback, void *user);
__attribute__((visibility("default"))) _Bool r_diff_buffers_distance(RDiff *d, const unsigned char *a, unsigned int la, const unsigned char *b, unsigned int lb, unsigned int *distance, double *similarity);
__attribute__((visibility("default"))) _Bool r_diff_buffers_distance_myers(RDiff *diff, const unsigned char *a, unsigned int la, const unsigned char *b, unsigned int lb, unsigned int *distance, double *similarity);
__attribute__((visibility("default"))) _Bool r_diff_buffers_distance_levenshtein(RDiff *d, const unsigned char *a, unsigned int la, const unsigned char *b, unsigned int lb, unsigned int *distance, double *similarity);
__attribute__((visibility("default"))) char *r_diff_buffers_unified(RDiff *d, const unsigned char *a, int la, const unsigned char *b, int lb);

__attribute__((visibility("default"))) int r_diff_lines(const char *file1, const char *sa, int la, const char *file2, const char *sb, int lb);
__attribute__((visibility("default"))) int r_diff_set_delta(RDiff *d, int delta);
__attribute__((visibility("default"))) int r_diff_gdiff(const char *file1, const char *file2, int rad, int va);

__attribute__((visibility("default"))) RDiffChar *r_diffchar_new(const unsigned char *a, const unsigned char *b);
__attribute__((visibility("default"))) void r_diffchar_print(RDiffChar *diffchar);
__attribute__((visibility("default"))) void r_diffchar_free(RDiffChar *diffchar);
__attribute__((visibility("default"))) int r_diff_levenshtein_path(RLevBuf *bufa, RLevBuf *bufb, unsigned int maxdst, RLevMatches levdiff, RLevOp **chgs);
# 55 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_punycode.h" 1 3 4







__attribute__((visibility("default"))) char *r_punycode_encode(const unsigned char *src, int srclen, int *dstlen);
__attribute__((visibility("default"))) char *r_punycode_decode(const char *src, int srclen, int *dstlen);
# 56 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_queue.h" 1 3 4







typedef struct r_queue_t {
 void **elems;
 unsigned int capacity;
 unsigned int front;
 int rear;
 unsigned int size;
} RQueue;

__attribute__((visibility("default"))) RQueue *r_queue_new(int n);
__attribute__((visibility("default"))) void r_queue_free(RQueue *q);
__attribute__((visibility("default"))) int r_queue_enqueue(RQueue *q, void *el);
__attribute__((visibility("default"))) void *r_queue_dequeue(RQueue *q);
__attribute__((visibility("default"))) int r_queue_is_empty(RQueue *q);
# 57 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_range.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_range.h" 3 4
typedef struct r_range_item_t {
 unsigned long long fr;
 unsigned long long to;
 unsigned char *data;
 int datalen;
} RRangeItem;

typedef struct r_range_t {
 int count;
 int changed;
 RList *ranges;
} RRange;

__attribute__((visibility("default"))) RRange *r_range_new(void);
__attribute__((visibility("default"))) RRange *r_range_new_from_string(const char *string);
__attribute__((visibility("default"))) RRange *r_range_free(RRange *r);
__attribute__((visibility("default"))) RRangeItem *r_range_item_get(RRange *r, unsigned long long addr);
__attribute__((visibility("default"))) unsigned long long r_range_size(RRange *r);
__attribute__((visibility("default"))) int r_range_add_from_string(RRange *rgs, const char *string);
__attribute__((visibility("default"))) RRangeItem *r_range_add(RRange *rgs, unsigned long long from, unsigned long long to, int rw);
__attribute__((visibility("default"))) int r_range_sub(RRange *rgs, unsigned long long from, unsigned long long to);
__attribute__((visibility("default"))) void r_range_merge(RRange *rgs, RRange *r);
__attribute__((visibility("default"))) int r_range_contains(RRange *rgs, unsigned long long addr);
__attribute__((visibility("default"))) int r_range_sort(RRange *rgs);
__attribute__((visibility("default"))) void r_range_percent(RRange *rgs);
__attribute__((visibility("default"))) int r_range_list(RRange *rgs, int rad);
__attribute__((visibility("default"))) int r_range_get_n(RRange *rgs, int n, unsigned long long *from, unsigned long long *to);
__attribute__((visibility("default"))) RRange *r_range_inverse(RRange *rgs, unsigned long long from, unsigned long long to, int flags);
__attribute__((visibility("default"))) int r_range_overlap(unsigned long long a0, unsigned long long a1, unsigned long long b0, unsigned long long b1, int *d);
# 58 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_sandbox.h" 1 3 4
# 59 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_spaces.h" 1 3 4
# 27 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_spaces.h" 3 4
typedef struct r_space_t {
 char *name;
} RSpace;

typedef enum {
 R_SPACE_EVENT_COUNT = 1,
 R_SPACE_EVENT_RENAME,
 R_SPACE_EVENT_UNSET,
} RSpaceEventType;

typedef struct r_space_event_t {
 union {
  struct {
   const RSpace *space;
  } count;
  struct {
   const RSpace *space;
  } unset;
  struct {
   const RSpace *space;
   const char *oldname;
   const char *newname;
  } rename;
 } data;
 int res;
} RSpaceEvent;

typedef struct r_spaces_t {
 const char *name;
 RSpace *current;
 RRBTree *spaces;
 RList *spacestack;
 REvent *event;
} RSpaces;


__attribute__((visibility("default"))) RSpaces *r_spaces_new(const char *name);

__attribute__((visibility("default"))) _Bool r_spaces_init(RSpaces *sp, const char *name);

__attribute__((visibility("default"))) void r_spaces_fini(RSpaces *sp);

__attribute__((visibility("default"))) void r_spaces_free(RSpaces *sp);

__attribute__((visibility("default"))) void r_spaces_purge(RSpaces *sp);

__attribute__((visibility("default"))) RSpace *r_spaces_get(RSpaces *sp, const char *name);

__attribute__((visibility("default"))) RSpace *r_spaces_add(RSpaces *sp, const char *name);

__attribute__((visibility("default"))) RSpace *r_spaces_set(RSpaces *sp, const char *name);

__attribute__((visibility("default"))) _Bool r_spaces_unset(RSpaces *sp, const char *name);

__attribute__((visibility("default"))) _Bool r_spaces_rename(RSpaces *sp, const char *oname, const char *nname);

__attribute__((visibility("default"))) int r_spaces_count(RSpaces *sp, const char *name);

__attribute__((visibility("default"))) _Bool r_spaces_push(RSpaces *sp, const char *name);

__attribute__((visibility("default"))) _Bool r_spaces_pop(RSpaces *sp);

static inline RSpace *r_spaces_current(RSpaces *sp) {
 return sp->current;
}

static inline const char *r_spaces_current_name(RSpaces *sp) {
 return sp->current? sp->current->name: "*";
}

static inline _Bool r_spaces_is_empty(RSpaces *sp) {
 return !!r_crbtree_first_node (sp->spaces);
}

typedef RRBNode RSpaceIter;
# 61 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_stack.h" 1 3 4
# 62 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str.h" 1 3 4
# 63 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_ascii_table.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_ascii_table.h" 3 4
__attribute__((visibility("default"))) const char *ret_ascii_table(void);
# 64 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_strbuf.h" 1 3 4
# 65 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_strpool.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_strpool.h" 3 4
typedef struct {
 char *str;
 int len;
 int size;
} RStrpool;

__attribute__((visibility("default"))) RStrpool* r_strpool_new(int sz);
__attribute__((visibility("default"))) char *r_strpool_alloc(RStrpool *p, int l);
__attribute__((visibility("default"))) int r_strpool_memcat(RStrpool *p, const char *s, int len);
__attribute__((visibility("default"))) int r_strpool_ansi_chop(RStrpool *p, int n);
__attribute__((visibility("default"))) int r_strpool_append(RStrpool *p, const char *s);
__attribute__((visibility("default"))) void r_strpool_free(RStrpool *p);
__attribute__((visibility("default"))) int r_strpool_fit(RStrpool *p);
__attribute__((visibility("default"))) char *r_strpool_get(RStrpool *p, int index);
__attribute__((visibility("default"))) char *r_strpool_get_i(RStrpool *p, int index);
__attribute__((visibility("default"))) int r_strpool_get_index(RStrpool *p, const char *s);
__attribute__((visibility("default"))) char *r_strpool_next(RStrpool *p, int index);
__attribute__((visibility("default"))) char *r_strpool_slice(RStrpool *p, int index);
__attribute__((visibility("default"))) char *r_strpool_empty(RStrpool *p);
# 66 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str_constpool.h" 1 3 4
# 67 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_sys.h" 1 3 4
# 68 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_tree.h" 1 3 4




# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_queue.h" 1 3 4
# 6 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_tree.h" 2 3 4





struct r_tree_t;

typedef struct r_tree_node_t {
 struct r_tree_node_t *parent;
 struct r_tree_t *tree;
 RList *children;
 unsigned int n_children;
 int depth;
 RListFree free;
 void *data;
} RTreeNode;

typedef struct r_tree_t {
 RTreeNode *root;
} RTree;

typedef struct r_tree_visitor_t {
 void (*pre_visit)(RTreeNode *, struct r_tree_visitor_t *);
 void (*post_visit)(RTreeNode *, struct r_tree_visitor_t *);
 void (*discover_child)(RTreeNode *, struct r_tree_visitor_t *);
 void *data;
} RTreeVisitor;
typedef void (*RTreeNodeVisitCb)(RTreeNode *n, RTreeVisitor *vis);

__attribute__((visibility("default"))) RTree *r_tree_new(void);
__attribute__((visibility("default"))) RTreeNode *r_tree_add_node(RTree *t, RTreeNode *node, void *child_data);
__attribute__((visibility("default"))) void r_tree_reset(RTree *t);
__attribute__((visibility("default"))) void r_tree_free(RTree *t);
__attribute__((visibility("default"))) void r_tree_dfs(RTree *t, RTreeVisitor *vis);
__attribute__((visibility("default"))) void r_tree_bfs(RTree *t, RTreeVisitor *vis);
# 69 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_uleb128.h" 1 3 4
# 12 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_uleb128.h" 3 4
__attribute__((visibility("default"))) const unsigned char *r_uleb128(const unsigned char *data, int datalen, unsigned long long *v, const char **error);
__attribute__((visibility("default"))) const unsigned char *r_uleb128_decode(const unsigned char *data, int *datalen, unsigned long long *v);
__attribute__((visibility("default"))) int r_uleb128_len(const unsigned char *data, int size);
__attribute__((visibility("default"))) unsigned char *r_uleb128_encode(const unsigned long long s, int *len);
__attribute__((visibility("default"))) const unsigned char *r_leb128(const unsigned char *data, int datalen, long long *v);
__attribute__((visibility("default"))) long long r_sleb128(const unsigned char **data, const unsigned char *end);
__attribute__((visibility("default"))) size_t read_u32_leb128(const unsigned char *p, const unsigned char *max, unsigned int *out_val);
__attribute__((visibility("default"))) size_t read_i32_leb128(const unsigned char *p, const unsigned char *max, int *out_val);
__attribute__((visibility("default"))) size_t read_u64_leb128(const unsigned char *p, const unsigned char *max, unsigned long long *out_val);
__attribute__((visibility("default"))) size_t read_i64_leb128(const unsigned char *p, const unsigned char *max, long long *out_val);
# 70 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_utf8.h" 1 3 4




# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str.h" 1 3 4
# 6 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_utf8.h" 2 3 4





typedef struct { unsigned int from, to; const char *name; } RUtfBlock;


typedef unsigned int RRune;
__attribute__((visibility("default"))) int r_utf8_encode(unsigned char *ptr, const RRune ch);
__attribute__((visibility("default"))) int r_utf8_decode(const unsigned char *ptr, int ptrlen, RRune *ch);
__attribute__((visibility("default"))) int r_utf8_encode_str(const RRune *str, unsigned char *dst, const int dst_length);
__attribute__((visibility("default"))) int r_utf8_size(const unsigned char *ptr);
__attribute__((visibility("default"))) int r_utf8_strlen(const unsigned char *str);
__attribute__((visibility("default"))) int r_isprint(const RRune c);
__attribute__((visibility("default"))) char *r_utf16_to_utf8_l(const wchar_t *wc, int len);
__attribute__((visibility("default"))) const char *r_utf_block_name(int idx);
__attribute__((visibility("default"))) wchar_t *r_utf8_to_utf16_l(const char *cstring, int len);
__attribute__((visibility("default"))) int r_utf_block_idx (RRune ch);
__attribute__((visibility("default"))) int *r_utf_block_list (const unsigned char *str, int len, int **freq_list);
__attribute__((visibility("default"))) RStrEnc r_utf_bom_encoding(const unsigned char *ptr, int ptrlen);
# 71 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_utf16.h" 1 3 4
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_utf16.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_utf8.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_utf16.h" 2 3 4

__attribute__((visibility("default"))) int r_utf16_decode(const unsigned char *ptr, int ptrlen, RRune *ch, _Bool bigendian);
__attribute__((visibility("default"))) int r_utf16le_decode(const unsigned char *ptr, int ptrlen, RRune *ch);
__attribute__((visibility("default"))) int r_utf16be_decode(const unsigned char *ptr, int ptrlen, RRune *ch);
__attribute__((visibility("default"))) int r_utf16le_encode(unsigned char *ptr, RRune ch);
# 72 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_utf32.h" 1 3 4
# 12 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_utf32.h" 3 4
__attribute__((visibility("default"))) int r_utf32_decode(const unsigned char *ptr, int ptrlen, RRune *ch, _Bool bigendian);
__attribute__((visibility("default"))) int r_utf32le_decode(const unsigned char *ptr, int ptrlen, RRune *ch);
__attribute__((visibility("default"))) int r_utf32le_decode(const unsigned char *ptr, int ptrlen, RRune *ch);
# 73 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_idpool.h" 1 3 4





# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_pool.h" 1 3 4
# 7 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_idpool.h" 2 3 4







typedef struct r_id_pool_t {
 unsigned int start_id;
 unsigned int last_id;
 unsigned int next_id;
 RQueue *freed_ids;
} RIDPool;

__attribute__((visibility("default"))) RIDPool *r_id_pool_new(unsigned int start_id, unsigned int last_id);
__attribute__((visibility("default"))) _Bool r_id_pool_grab_id(RIDPool *pool, unsigned int *grabber);
__attribute__((visibility("default"))) _Bool r_id_pool_kick_id(RIDPool *pool, unsigned int kick);
__attribute__((visibility("default"))) void r_id_pool_free(RIDPool *pool);

typedef struct r_id_storage_t {
 RIDPool *pool;
 void **data;
 unsigned int top_id;
 unsigned int size;
} RIDStorage;

typedef _Bool (*RIDStorageForeachCb)(void *user, void *data, unsigned int id);
typedef _Bool (*ROIDStorageCompareCb)(void *in, void *incoming, void *user, int *cmp_res);

__attribute__((visibility("default"))) RIDStorage *r_id_storage_new(unsigned int start_id, unsigned int last_id);
__attribute__((visibility("default"))) _Bool r_id_storage_set(RIDStorage *storage, void *data, unsigned int id);
__attribute__((visibility("default"))) _Bool r_id_storage_add(RIDStorage *storage, void *data, unsigned int *id);
__attribute__((visibility("default"))) void *r_id_storage_get(RIDStorage *storage, unsigned int id);
__attribute__((visibility("default"))) _Bool r_id_storage_get_next(RIDStorage *storage, unsigned int *id);
__attribute__((visibility("default"))) _Bool r_id_storage_get_prev(RIDStorage *storage, unsigned int *id);
__attribute__((visibility("default"))) void r_id_storage_delete(RIDStorage *storage, unsigned int id);
__attribute__((visibility("default"))) void *r_id_storage_take(RIDStorage *storage, unsigned int id);
__attribute__((visibility("default"))) _Bool r_id_storage_foreach(RIDStorage *storage, RIDStorageForeachCb cb, void *user);
__attribute__((visibility("default"))) void r_id_storage_free(RIDStorage *storage);
__attribute__((visibility("default"))) RList *r_id_storage_list(RIDStorage *s);
__attribute__((visibility("default"))) _Bool r_id_storage_get_lowest(RIDStorage *storage, unsigned int *id);
__attribute__((visibility("default"))) _Bool r_id_storage_get_highest(RIDStorage *storage, unsigned int *id);

typedef struct r_ordered_id_storage_t {
 unsigned int *permutation;
 unsigned int psize;
 unsigned int ptop;
 RIDStorage *data;
 ROIDStorageCompareCb cmp;
} ROIDStorage;

__attribute__((visibility("default"))) ROIDStorage *r_oids_new(unsigned int start_id, unsigned int last_id);
__attribute__((visibility("default"))) void *r_oids_get(ROIDStorage *storage, unsigned int id);
__attribute__((visibility("default"))) void *r_oids_oget(ROIDStorage *storage, unsigned int od);
__attribute__((visibility("default"))) _Bool r_oids_get_id(ROIDStorage *storage, unsigned int od, unsigned int *id);
__attribute__((visibility("default"))) _Bool r_oids_get_od(ROIDStorage *storage, unsigned int id, unsigned int *od);
__attribute__((visibility("default"))) _Bool r_oids_to_front(ROIDStorage *storage, const unsigned int id);
__attribute__((visibility("default"))) _Bool r_oids_to_rear(ROIDStorage *storage, const unsigned int id);
__attribute__((visibility("default"))) void r_oids_delete(ROIDStorage *storage, unsigned int id);
__attribute__((visibility("default"))) void r_oids_odelete(ROIDStorage *st, unsigned int od);
__attribute__((visibility("default"))) void r_oids_free(ROIDStorage *storage);
__attribute__((visibility("default"))) _Bool r_oids_add(ROIDStorage *storage, void *data, unsigned int *id, unsigned int *od);
__attribute__((visibility("default"))) void *r_oids_take(ROIDStorage *storage, unsigned int id);
__attribute__((visibility("default"))) void *r_oids_otake(ROIDStorage *st, unsigned int od);
__attribute__((visibility("default"))) _Bool r_oids_foreach(ROIDStorage* storage, RIDStorageForeachCb cb, void* user);
__attribute__((visibility("default"))) _Bool r_oids_foreach_prev(ROIDStorage* storage, RIDStorageForeachCb cb, void* user);
__attribute__((visibility("default"))) _Bool r_oids_insert(ROIDStorage *storage, void *data, unsigned int *id, unsigned int *od, void *user);
__attribute__((visibility("default"))) _Bool r_oids_sort(ROIDStorage *storage, void *user);
__attribute__((visibility("default"))) unsigned int r_oids_find (ROIDStorage *storage, void *incoming, void *user);
__attribute__((visibility("default"))) void *r_oids_last(ROIDStorage *storage);
__attribute__((visibility("default"))) void *r_oids_first(ROIDStorage *storage);
# 74 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_asn1.h" 1 3 4
# 61 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_asn1.h" 3 4
typedef struct r_asn1_string_t {
 unsigned int length;
 const char *string;
 _Bool allocated;
} RASN1String;

typedef struct r_asn1_list_t {
 unsigned int length;
 struct r_asn1_object_t **objects;
} ASN1List;

typedef struct r_asn1_bin_t {
 unsigned int length;
 unsigned char *binary;
} RASN1Binary;

typedef struct r_asn1_object_t {
 unsigned char klass;
 unsigned char form;
 unsigned char tag;
 const unsigned char *sector;
 unsigned int length;
 unsigned long long offset;
 ASN1List list;
} RASN1Object;


__attribute__((visibility("default"))) RASN1Object *r_asn1_create_object (const unsigned char *buffer, unsigned int length, const unsigned char *start_pointer);
__attribute__((visibility("default"))) RASN1Binary *r_asn1_create_binary (const unsigned char *buffer, unsigned int length);
__attribute__((visibility("default"))) RASN1String *r_asn1_create_string (const char *string, _Bool allocated, unsigned int length);
__attribute__((visibility("default"))) RASN1String *r_asn1_stringify_bits (const unsigned char *buffer, unsigned int length);
__attribute__((visibility("default"))) RASN1String *r_asn1_stringify_utctime (const unsigned char *buffer, unsigned int length);
__attribute__((visibility("default"))) RASN1String *r_asn1_stringify_time (const unsigned char *buffer, unsigned int length);
__attribute__((visibility("default"))) RASN1String *r_asn1_stringify_integer (const unsigned char *buffer, unsigned int length);
__attribute__((visibility("default"))) RASN1String *r_asn1_stringify_string (const unsigned char *buffer, unsigned int length);
__attribute__((visibility("default"))) RASN1String *r_asn1_stringify_bytes (const unsigned char *buffer, unsigned int length);
__attribute__((visibility("default"))) RASN1String *r_asn1_stringify_boolean (const unsigned char *buffer, unsigned int length);
__attribute__((visibility("default"))) RASN1String *r_asn1_stringify_oid (const unsigned char* buffer, unsigned int length);

__attribute__((visibility("default"))) void r_asn1_free_object (RASN1Object *object);

__attribute__((visibility("default"))) char *r_asn1_to_string (RASN1Object *object, unsigned int depth, RStrBuf *sb);
__attribute__((visibility("default"))) void r_asn1_free_string (RASN1String *string);
__attribute__((visibility("default"))) void r_asn1_free_binary (RASN1Binary *string);
__attribute__((visibility("default"))) void asn1_setformat (int fmt);
# 75 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/pj.h" 1 3 4
# 76 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_x509.h" 1 3 4
# 12 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_x509.h" 3 4
typedef struct r_x509_validity_t {
 RASN1String *notBefore;
 RASN1String *notAfter;
} RX509Validity;

typedef struct r_x509_name_t {
 unsigned int length;
 RASN1String **oids;
 RASN1String **names;
} RX509Name;

typedef struct r_x509_algorithmidentifier_t {
 RASN1String *algorithm;
 RASN1String *parameters;
} RX509AlgorithmIdentifier;
# 44 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_x509.h" 3 4
typedef struct r_x509_authoritykeyidentifier_t {
 RASN1Binary *keyIdentifier;
 RX509Name authorityCertIssuer;
 RASN1Binary *authorityCertSerialNumber;
} RX509AuthorityKeyIdentifier;

typedef struct r_x509_subjectpublickeyinfo_t {
 RX509AlgorithmIdentifier algorithm;

 RASN1Binary *subjectPublicKey;


 RASN1Binary *subjectPublicKeyExponent;
 RASN1Binary *subjectPublicKeyModule;
} RX509SubjectPublicKeyInfo;

typedef struct r_x509_extension_t {
 RASN1String *extnID;
 _Bool critical;
 RASN1Binary *extnValue;
} RX509Extension;

typedef struct r_x509_extensions_t {
 unsigned int length;
 RX509Extension **extensions;
} RX509Extensions;

typedef struct r_x509_tbscertificate_t {
 unsigned int version;
 RASN1String *serialNumber;
 RX509AlgorithmIdentifier signature;
 RX509Name issuer;
 RX509Validity validity;
 RX509Name subject;
 RX509SubjectPublicKeyInfo subjectPublicKeyInfo;
 RASN1Binary *issuerUniqueID;
 RASN1Binary *subjectUniqueID;
 RX509Extensions extensions;
} RX509TBSCertificate;

typedef struct r_x509_certificate_t {
 RX509TBSCertificate tbsCertificate;
 RX509AlgorithmIdentifier algorithmIdentifier;
 RASN1Binary *signature;
} RX509Certificate;




typedef struct r_x509_crlentry {
 RASN1Binary *userCertificate;
 RASN1String *revocationDate;
} RX509CRLEntry;

typedef struct r_x509_certificaterevocationlist {
 RX509AlgorithmIdentifier signature;
 RX509Name issuer;
 RASN1String *lastUpdate;
 RASN1String *nextUpdate;
 unsigned int length;
 RX509CRLEntry **revokedCertificates;
} RX509CertificateRevocationList;

__attribute__((visibility("default"))) RX509CertificateRevocationList* r_x509_parse_crl(RASN1Object *object);


__attribute__((visibility("default"))) char *r_x509_crl_to_string(RX509CertificateRevocationList *crl, const char* pad);
__attribute__((visibility("default"))) void r_x509_crl_json(PJ* pj, RX509CertificateRevocationList *crl);

__attribute__((visibility("default"))) RX509Certificate *r_x509_parse_certificate(RASN1Object *object);
__attribute__((visibility("default"))) RX509Certificate *r_x509_parse_certificate2(const unsigned char *buffer, unsigned int length);
__attribute__((visibility("default"))) void r_x509_free_certificate(RX509Certificate* certificate);
__attribute__((visibility("default"))) char *r_x509_certificate_to_string(RX509Certificate* certificate, const char* pad);
__attribute__((visibility("default"))) void r_x509_certificate_json(PJ* pj, RX509Certificate *certificate);
__attribute__((visibility("default"))) void r_x509_certificate_dump(RX509Certificate* cert, const char* pad, RStrBuf *sb);
# 77 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_pkcs7.h" 1 3 4







typedef struct r_pkcs7_certificaterevocationlists_t {
 unsigned int length;
 RX509CertificateRevocationList **elements;
} RPKCS7CertificateRevocationLists;

typedef struct r_pkcs7_extendedcertificatesandcertificates_t {
 unsigned int length;
 RX509Certificate **elements;
} RPKCS7ExtendedCertificatesAndCertificates;

typedef struct r_pkcs7_digestalgorithmidentifiers_t {
 unsigned int length;
 RX509AlgorithmIdentifier **elements;
} RPKCS7DigestAlgorithmIdentifiers;

typedef struct r_pkcs7_contentinfo_t {
 RASN1String *contentType;
 RASN1Binary *content;
} RPKCS7ContentInfo;

typedef struct r_pkcs7_issuerandserialnumber_t {
 RX509Name issuer;
 RASN1Binary *serialNumber;
} RPKCS7IssuerAndSerialNumber;

typedef struct r_pkcs7_attribute_t {
 RASN1String *oid;
 RASN1Binary *data;
} RPKCS7Attribute;

typedef struct r_pkcs7_attributes_t {
 unsigned int length;
 RPKCS7Attribute **elements;
} RPKCS7Attributes;

typedef struct r_pkcs7_signerinfo_t {
 unsigned int version;
 RPKCS7IssuerAndSerialNumber issuerAndSerialNumber;
 RX509AlgorithmIdentifier digestAlgorithm;
 RPKCS7Attributes authenticatedAttributes;
 RX509AlgorithmIdentifier digestEncryptionAlgorithm;
 RASN1Binary *encryptedDigest;
 RPKCS7Attributes unauthenticatedAttributes;
} RPKCS7SignerInfo;

typedef struct r_pkcs7_signerinfos_t {
 unsigned int length;
 RPKCS7SignerInfo **elements;
} RPKCS7SignerInfos;

typedef struct r_pkcs7_signeddata_t {
 unsigned int version;
 RPKCS7DigestAlgorithmIdentifiers digestAlgorithms;
 RPKCS7ContentInfo contentInfo;
 RPKCS7ExtendedCertificatesAndCertificates certificates;
 RPKCS7CertificateRevocationLists crls;
 RPKCS7SignerInfos signerinfos;
} RPKCS7SignedData;

typedef struct r_pkcs7_container_t {
 RASN1String *contentType;
 RPKCS7SignedData signedData;
} RCMS;

typedef struct {
 RASN1String *type;
 RASN1Binary *data;
} SpcAttributeTypeAndOptionalValue;

typedef struct {
 RX509AlgorithmIdentifier digestAlgorithm;
 RASN1Binary *digest;
} SpcDigestInfo;

typedef struct {
 SpcAttributeTypeAndOptionalValue data;
 SpcDigestInfo messageDigest;
} SpcIndirectDataContent;

__attribute__((visibility("default"))) RCMS *r_pkcs7_parse_cms(const unsigned char *buffer, unsigned int length);
__attribute__((visibility("default"))) void r_pkcs7_free_cms(RCMS* container);
__attribute__((visibility("default"))) char *r_pkcs7_cms_to_string(RCMS* container);
__attribute__((visibility("default"))) PJ *r_pkcs7_cms_json(RCMS* container);
__attribute__((visibility("default"))) SpcIndirectDataContent *r_pkcs7_parse_spcinfo(RCMS *cms);
__attribute__((visibility("default"))) void r_pkcs7_free_spcinfo(SpcIndirectDataContent *spcinfo);
# 78 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_protobuf.h" 1 3 4







__attribute__((visibility("default"))) char *r_protobuf_decode(const unsigned char* buffer, const unsigned long long size, _Bool debug);
# 79 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_w32.h" 1 3 4
# 81 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_axml.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_axml.h" 3 4
__attribute__((visibility("default"))) char *r_axml_decode(const unsigned char* buffer, const unsigned long long size);
# 82 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4






__attribute__((visibility("default"))) const char *r_util_version(void);
# 8 "project/radare2/libr/asm/arch/arm/armass.c" 2
# 1 "project/radare2/libr/asm/arch/arm/armass16_const.h" 1
# 9 "project/radare2/libr/asm/arch/arm/armass.c" 2




# 12 "project/radare2/libr/asm/arch/arm/armass.c"
typedef struct {
 
# 13 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned long long 
# 13 "project/radare2/libr/asm/arch/arm/armass.c"
     off;
 
# 14 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned int 
# 14 "project/radare2/libr/asm/arch/arm/armass.c"
     o;
 char op[128];
 char opstr[128];
 char *a[16];
} ArmOpcode;

typedef struct {
 const char *name;
 int code;
 int type;
} ArmOp;

enum {
 TYPE_MOV = 1,
 TYPE_TST = 2,
 TYPE_SWI = 3,
 TYPE_HLT = 4,
 TYPE_BRA = 5,
 TYPE_BRR = 6,
 TYPE_ARI = 7,
 TYPE_IMM = 8,
 TYPE_MEM = 9,
 TYPE_BKP = 10,
 TYPE_SWP = 11,
 TYPE_MOVW = 12,
 TYPE_MOVT = 13,
 TYPE_UDF = 14,
 TYPE_SHFT = 15,
 TYPE_COPROC = 16,
 TYPE_ENDIAN = 17,
 TYPE_MUL = 18,
 TYPE_CLZ = 19,
 TYPE_REV = 20,
 TYPE_NEG = 21
};

static int strcmpnull(const char *a, const char *b) {
 return (a && b) ? strcmp (a, b) : -1;
}



static ArmOp ops[] = {
 { "adc", 0xa000, TYPE_ARI },
 { "adcs", 0xb000, TYPE_ARI },
 { "adds", 0x9000, TYPE_ARI },
 { "add", 0x8000, TYPE_ARI },
 { "bkpt", 0x2001, TYPE_BKP },
 { "subs", 0x5000, TYPE_ARI },
 { "sub", 0x4000, TYPE_ARI },
 { "sbcs", 0xd000, TYPE_ARI },
 { "sbc", 0xc000, TYPE_ARI },
 { "rsb", 0x6000, TYPE_ARI },
 { "rsbs", 0x7000, TYPE_ARI },
 { "rsc", 0xe000, TYPE_ARI },
 { "rscs", 0xf000, TYPE_ARI },
 { "bic", 0x0000c0e1, TYPE_ARI },

 { "udf", 0xf000f000, TYPE_UDF },

 { "push", 0x2d09, TYPE_IMM },
 { "pop", 0xbd08, TYPE_IMM },

 { "cps", 0xb1, TYPE_IMM },
 { "nop", 0xa0e1, -1 },

 { "ldrex", 0x9f0f9000, TYPE_MEM },
 { "ldr", 0x9000, TYPE_MEM },

 { "strexh", 0x900fe000, TYPE_MEM },
 { "strexb", 0x900fc000, TYPE_MEM },
 { "strex", 0x900f8000, TYPE_MEM },
 { "strbt", 0x0000e0e4, TYPE_MEM },
 { "strb", 0x0000c0e5, TYPE_MEM },
 { "strd", 0xf000c0e1, TYPE_MEM },
 { "strh", 0xb00080e1, TYPE_MEM },
 { "str", 0x8000, TYPE_MEM },

 { "blx", 0x30ff2fe1, TYPE_BRR },
 { "bx", 0x10ff2fe1, TYPE_BRR },

 { "bl", 0xb, TYPE_BRA },






 { "b", 0xa, TYPE_BRA },



 { "movw", 0x3, TYPE_MOVW },
 { "movt", 0x4003, TYPE_MOVT },
 { "mov", 0xa001, TYPE_MOV },
 { "mvn", 0xe000, TYPE_MOV },
 { "svc", 0xf, TYPE_SWI },
 { "hlt", 0x70000001, TYPE_HLT },

 { "mul", 0x900000e0, TYPE_MUL},
 { "smull", 0x9000c0e0, TYPE_MUL},
 { "umull", 0x900080e0, TYPE_MUL},
 { "smlal", 0x9000e0e0, TYPE_MUL},
 { "smlabb", 0x800000e1, TYPE_MUL},
 { "smlabt", 0xc00000e1, TYPE_MUL},
 { "smlatb", 0xa00000e1, TYPE_MUL},
 { "smlatt", 0xe00000e1, TYPE_MUL},
 { "smlawb", 0x800020e1, TYPE_MUL},
 { "smlawt", 0xc00020e1, TYPE_MUL},


 { "ands", 0x1000, TYPE_ARI },
 { "and", 0x0000, TYPE_ARI },
 { "eors", 0x3000, TYPE_ARI },
 { "eor", 0x2000, TYPE_ARI },
 { "orrs", 0x9001, TYPE_ARI },
 { "orr", 0x8001, TYPE_ARI },

 { "cmp", 0x5001, TYPE_TST },
 { "swp", 0xe1, TYPE_SWP },
 { "cmn", 0x0, TYPE_TST },
 { "teq", 0x0, TYPE_TST },
 { "tst", 0xe1, TYPE_TST },

 {"lsr", 0x3000a0e1, TYPE_SHFT},
 {"asr", 0x5000a0e1, TYPE_SHFT},
 {"lsl", 0x1000a0e1, TYPE_SHFT},
 {"ror", 0x7000a0e1, TYPE_SHFT},

 {"rev16", 0xb00fbf06, TYPE_REV},
 {"revsh", 0xb00fff06, TYPE_REV},
 {"rev", 0x300fbf06, TYPE_REV},
 {"rbit", 0x300fff06, TYPE_REV},

 {"mrc", 0x100010ee, TYPE_COPROC},
 {"setend", 0x000001f1, TYPE_ENDIAN},
 { "clz", 0x000f6f01, TYPE_CLZ},
 { "neg", 0x7000, TYPE_NEG },

 { 
# 153 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  ((void *)0) 
# 153 "project/radare2/libr/asm/arch/arm/armass.c"
       }
};

static const 
# 156 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 156 "project/radare2/libr/asm/arch/arm/armass.c"
                 M_BIT = 0x1;
static const 
# 157 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 157 "project/radare2/libr/asm/arch/arm/armass.c"
                 S_BIT = 0x2;
static const 
# 158 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 158 "project/radare2/libr/asm/arch/arm/armass.c"
                 C_BITS = 0x3c;
static const 
# 159 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 159 "project/radare2/libr/asm/arch/arm/armass.c"
                 DOTN_BIT = 0x40;
static const 
# 160 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 160 "project/radare2/libr/asm/arch/arm/armass.c"
                 DOTW_BIT = 0x80;
static const 
# 161 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 161 "project/radare2/libr/asm/arch/arm/armass.c"
                 L_BIT = 0x100;
static const 
# 162 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 162 "project/radare2/libr/asm/arch/arm/armass.c"
                 X_BIT = 0x200;
static const 
# 163 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 163 "project/radare2/libr/asm/arch/arm/armass.c"
                 TWO_BIT = 0x400;
static const 
# 164 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 164 "project/radare2/libr/asm/arch/arm/armass.c"
                 IE_BIT = 0x800;
static const 
# 165 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 165 "project/radare2/libr/asm/arch/arm/armass.c"
                 ID_BIT = 0x1000;
static const 
# 166 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 166 "project/radare2/libr/asm/arch/arm/armass.c"
                 EA_BIT = 0x2000;
static const 
# 167 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 167 "project/radare2/libr/asm/arch/arm/armass.c"
                 FD_BIT = 0x4000;
static const 
# 168 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 168 "project/radare2/libr/asm/arch/arm/armass.c"
                 T_BIT = 0x8000;
static const 
# 169 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 169 "project/radare2/libr/asm/arch/arm/armass.c"
                 B_BIT = 0x10000;
static const 
# 170 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 170 "project/radare2/libr/asm/arch/arm/armass.c"
                 H_BIT = 0x20000;
static const 
# 171 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 171 "project/radare2/libr/asm/arch/arm/armass.c"
                 D_BIT = 0x40000;
static const 
# 172 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 172 "project/radare2/libr/asm/arch/arm/armass.c"
                 W_BIT = 0x80000;
static const 
# 173 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 173 "project/radare2/libr/asm/arch/arm/armass.c"
                 EIGHT_BIT = 0x100000;
static const 
# 174 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 174 "project/radare2/libr/asm/arch/arm/armass.c"
                 SIXTEEN_BIT = 0x200000;
static const 
# 175 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 175 "project/radare2/libr/asm/arch/arm/armass.c"
                 BB_BIT = 0x400000;
static const 
# 176 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 176 "project/radare2/libr/asm/arch/arm/armass.c"
                 BT_BIT = 0x800000;
static const 
# 177 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 177 "project/radare2/libr/asm/arch/arm/armass.c"
                 TB_BIT = 0x1000000;
static const 
# 178 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 178 "project/radare2/libr/asm/arch/arm/armass.c"
                 TT_BIT = 0x2000000;
static const 
# 179 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 179 "project/radare2/libr/asm/arch/arm/armass.c"
                 R_BIT = 0x4000000;
static const 
# 180 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 180 "project/radare2/libr/asm/arch/arm/armass.c"
                 IA_BIT = 0x8000000;
static const 
# 181 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 181 "project/radare2/libr/asm/arch/arm/armass.c"
                 DB_BIT = 0x10000000;
static const 
# 182 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 182 "project/radare2/libr/asm/arch/arm/armass.c"
                 SH_BIT = 0x20000000;
static const 
# 183 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 183 "project/radare2/libr/asm/arch/arm/armass.c"
                 WB_BIT = 0x40000000;
static const 
# 184 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 184 "project/radare2/libr/asm/arch/arm/armass.c"
                 WT_BIT = 0x80000000;
static const 
# 185 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            unsigned long long 
# 185 "project/radare2/libr/asm/arch/arm/armass.c"
                 C_MATCH_BIT = 0x100000000;

static char *parse_hints(char *input) {
 if (!strcmpnull (input, "unst")) {
  return "6";
 }
 if (!strcmpnull (input, "un")) {
  return "7";
 }
 if (!strcmpnull (input, "st")) {
  return "14";
 }
 if (!strcmpnull (input, "sy")) {
  return "15";
 }
 return "-1";
}

static 
# 203 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      signed char 
# 203 "project/radare2/libr/asm/arch/arm/armass.c"
          iflag(char *input) {
 
# 204 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
signed char 
# 204 "project/radare2/libr/asm/arch/arm/armass.c"
    res = 0;
 r_str_case (input, 
# 205 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                   0
# 205 "project/radare2/libr/asm/arch/arm/armass.c"
                        );

 for (; *input; input++) {
  switch (*input) {
  case 'a':
   res |= 0x4;
   break;
  case 'i':
   res |= 0x2;
   break;
  case 'f':
   res |= 0x1;
   break;
  default:
   return -1;
  }
 }
 return res;
}

static 
# 225 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      unsigned long long 
# 225 "project/radare2/libr/asm/arch/arm/armass.c"
           cqcheck(char **input) {
 
# 226 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned long long 
# 226 "project/radare2/libr/asm/arch/arm/armass.c"
     res = 0;
 int i;
 
# 228 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned char 
# 228 "project/radare2/libr/asm/arch/arm/armass.c"
    offset = 0;

 const char *conds[] = {
  "eq", "ne", "cs", "cc", "mi", "pl", "vs", "vc",
  "hi", "ls", "ge", "lt", "gt", "le", "al", "nv", 0
 };
 for (i = 0; conds[i]; i++) {
  if (r_str_startswith (*input, conds[i])) {
   res |= C_MATCH_BIT;
   res |= i << 2;
   *input += 2;
   offset += 2;
   break;
  }
 }
 if (r_str_startswith (*input, ".n")) {
  res |= DOTN_BIT;
  *input += 2;
  offset += 2;
 } else
 if (r_str_startswith (*input, ".w")) {
  res |= DOTW_BIT;
  *input += 2;
  offset += 2;
 }

 if (**input == '\0') {
  return res;
 }
 *input -= offset;
 return 0;
}

static 
# 261 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      unsigned long long 
# 261 "project/radare2/libr/asm/arch/arm/armass.c"
           opmask(char *input, const char *opcode, 
# 261 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                                   unsigned long long 
# 261 "project/radare2/libr/asm/arch/arm/armass.c"
                                                        allowed_mask) {
 
# 262 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned long long 
# 262 "project/radare2/libr/asm/arch/arm/armass.c"
     res = 0;

 r_str_case (input, 
# 264 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                   0
# 264 "project/radare2/libr/asm/arch/arm/armass.c"
                        );
 if (strlen (opcode) > strlen (input)) {
  return 0;
 }
 if (r_str_startswith (input, opcode)) {
  input += strlen (opcode);
  res |= M_BIT;
  res |= cqcheck (&input);

  if ((*input == 's') && (S_BIT & allowed_mask)) {
   res |= S_BIT;
   input++;
  }
  res |= cqcheck (&input);

  if ((r_str_startswith (input, "wb")) && (WB_BIT & allowed_mask)) {
   res |= WB_BIT;
   input += 2;
  }
  if ((r_str_startswith (input, "wt")) && (WT_BIT & allowed_mask)) {
   res |= WT_BIT;
   input += 2;
  }
  res |= cqcheck (&input);
  if ((r_str_startswith (input, "db")) && (DB_BIT & allowed_mask)) {
   res |= DB_BIT;
   input += 2;
  }
  if ((r_str_startswith (input, "ea")) && (EA_BIT & allowed_mask)) {
   res |= EA_BIT;
   input += 2;
  }
  if ((r_str_startswith (input, "ia")) && (IA_BIT & allowed_mask)) {
   res |= IA_BIT;
   input += 2;
  }
  if ((r_str_startswith (input, "fd")) && (FD_BIT & allowed_mask)) {
   res |= FD_BIT;
   input += 2;
  }
  res |= cqcheck (&input);
  if ((*input == 'l') && (L_BIT & allowed_mask)) {
   res |= L_BIT;
   input++;
  }
  res |= cqcheck (&input);
  if ((r_str_startswith (input, "bb")) && (BB_BIT & allowed_mask)) {
   res |= BB_BIT;
   input += 2;
  }
  if ((r_str_startswith (input, "tt")) && (TT_BIT & allowed_mask)) {
   res |= TT_BIT;
   input += 2;
  }
  if ((r_str_startswith (input, "bt")) && (BT_BIT & allowed_mask)) {
   res |= BT_BIT;
   input += 2;
  }
  if ((r_str_startswith (input, "tb")) && (TB_BIT & allowed_mask)) {
   res |= TB_BIT;
   input += 2;
  }
  res |= cqcheck (&input);
  if ((*input == 'w') && (W_BIT & allowed_mask)) {
   res |= W_BIT;
   input++;
  }
  if ((*input == 'b') && (B_BIT & allowed_mask)) {
   res |= B_BIT;
   input++;
  } else
  if ((*input == 'h') && (H_BIT & allowed_mask)) {
   res |= H_BIT;
   input++;
  } else
  if ((*input == 'd') && (D_BIT & allowed_mask)) {
   res |= D_BIT;
   input++;
  }
  if ((*input == 't') && (T_BIT & allowed_mask)) {
   res |= T_BIT;
   input++;
  }
  if ((*input == 's') && (S_BIT & allowed_mask)) {
   res |= S_BIT;
   input++;
  }
  res |= cqcheck (&input);
  if ((*input == 'r') && (R_BIT & allowed_mask)) {
   res |= R_BIT;
   input++;
  }
  res |= cqcheck (&input);
  if ((*input == '2') && (TWO_BIT & allowed_mask)) {
   res |= TWO_BIT;
   input++;
  }
  if ((*input == '8') && (EIGHT_BIT & allowed_mask)) {
   res |= EIGHT_BIT;
   input++;
  }
  if ((r_str_startswith (input, "16")) && (SIXTEEN_BIT & allowed_mask)) {
   res |= SIXTEEN_BIT;
   input += 2;
  }
  res |= cqcheck (&input);
  if ((*input == 'l') && (L_BIT & allowed_mask)) {
   res |= L_BIT;
   input++;
  }
  if ((*input == 'x') && (X_BIT & allowed_mask)) {
   res |= X_BIT;
   input++;
  }
  res |= cqcheck (&input);
  if ((r_str_startswith (input, "id")) && (ID_BIT & allowed_mask)) {
   res |= ID_BIT;
   input += 2;
  }
  if ((r_str_startswith (input, "ie")) && (IE_BIT & allowed_mask)) {
   res |= IE_BIT;
   input += 2;
  }
  res |= cqcheck (&input);
  if ((r_str_startswith (input, "sh")) && (SH_BIT & allowed_mask)) {
   res |= SH_BIT;
   input += 2;
  }
  res |= cqcheck (&input);
  if (!(res & C_MATCH_BIT)) {
   res |= 15 << 2;
  }
  if (*input == 0) {
   return res;
  }
 }
 return 0;
}

static 
# 403 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      unsigned int 
# 403 "project/radare2/libr/asm/arch/arm/armass.c"
           itmask(char *input) {
 
# 404 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned int 
# 404 "project/radare2/libr/asm/arch/arm/armass.c"
     res = 0;
 
# 405 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned int 
# 405 "project/radare2/libr/asm/arch/arm/armass.c"
     i, length;
 r_str_case (input, 
# 406 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                   0
# 406 "project/radare2/libr/asm/arch/arm/armass.c"
                        );
 if (2 > strlen (input)) {
  return 0;
 }
 if (r_str_startswith (input, "it")) {
  input += 2;
  res |= 1;
  if (strlen(input) > 3) {
   return 0;
  }
  res |= (strlen (input) & 0x3) << 4;
  length = strlen (input);
  for (i = 0; i < length; i++, input++ ) {
   if (*input == 'e') {
    res |= 1 << (3 - i);
    continue;
   }
   if (*input == 't') {
    continue;
   }
   return 0;
  }
  return res;
 }
 return 0;
}

static 
# 433 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      _Bool 
# 433 "project/radare2/libr/asm/arch/arm/armass.c"
           err;

static 
# 435 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      unsigned long long 
# 435 "project/radare2/libr/asm/arch/arm/armass.c"
           getnum(const char *str) {
 char *endptr;
 err = 
# 437 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      0
# 437 "project/radare2/libr/asm/arch/arm/armass.c"
           ;
 
# 438 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned long long 
# 438 "project/radare2/libr/asm/arch/arm/armass.c"
     val;

 if (!str) {
  err = 
# 441 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
       1
# 441 "project/radare2/libr/asm/arch/arm/armass.c"
           ;
  return 0;
 }
 while (*str == '$' || *str == '#') {
  str++;
 }
 val = strtoll (str, &endptr, 0);
 if (str != endptr && *endptr == '\0') {
  return val;
 }
 err = 
# 451 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      1
# 451 "project/radare2/libr/asm/arch/arm/armass.c"
          ;
 return 0;
}

static 
# 455 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      unsigned long long 
# 455 "project/radare2/libr/asm/arch/arm/armass.c"
           getnumbang(const char *str) {
 
# 456 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned long long 
# 456 "project/radare2/libr/asm/arch/arm/armass.c"
     res;

 if (!str || !*str || !r_str_endswith (str, "!")) {
  err = 
# 459 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
       1
# 459 "project/radare2/libr/asm/arch/arm/armass.c"
           ;
  return 0;
 }
 char *temp = r_str_ndup (str, strlen (str) - 1);
 if (!temp) {
  return -1;
 }
 err = 
# 466 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      0
# 466 "project/radare2/libr/asm/arch/arm/armass.c"
           ;
 res = getnum (temp);
 free (temp);
 return res;
}

static 
# 472 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      unsigned int 
# 472 "project/radare2/libr/asm/arch/arm/armass.c"
           getimmed8(const char *str) {
 
# 473 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned int 
# 473 "project/radare2/libr/asm/arch/arm/armass.c"
     num = getnum (str);
 if (err) {
  return 0;
 }
 
# 477 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned int 
# 477 "project/radare2/libr/asm/arch/arm/armass.c"
     rotate;
 if (num <= 0xff) {
  return num;
 } else {
  for (rotate = 1; rotate < 16; rotate++) {

   num = ((num << 2) | (num >> 30));
   if (num == (num & 0xff)) {
    return (num | (rotate << 8));
   }
  }
  err = 1;
  return 0;
 }
}

static 
# 493 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      int 
# 493 "project/radare2/libr/asm/arch/arm/armass.c"
           firstsigdigit (
# 493 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                          unsigned int 
# 493 "project/radare2/libr/asm/arch/arm/armass.c"
                               num) {
 
# 494 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
int 
# 494 "project/radare2/libr/asm/arch/arm/armass.c"
     f = -1;
 
# 495 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
int 
# 495 "project/radare2/libr/asm/arch/arm/armass.c"
     b = -1;
 
# 496 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned int 
# 496 "project/radare2/libr/asm/arch/arm/armass.c"
     forwardmask = 0x80000000;
 
# 497 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned int 
# 497 "project/radare2/libr/asm/arch/arm/armass.c"
     backwardmask = 0x1;
 
# 498 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned int 
# 498 "project/radare2/libr/asm/arch/arm/armass.c"
     i;
 for (i = 0; i < 32; i++ ) {
  if ( (forwardmask & num) && (f == -1)) {
   f = i;
  }
  if ( (backwardmask & num) && (b == -1)) {
   b = 32-i;
  }
  forwardmask >>= 1;
  backwardmask <<= 1;
 }

 if ((b-f) < 9) {
  return f;
 }
 return -1;
}

static 
# 516 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      unsigned int 
# 516 "project/radare2/libr/asm/arch/arm/armass.c"
           getthbimmed(
# 516 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                       int 
# 516 "project/radare2/libr/asm/arch/arm/armass.c"
                            number) {
 
# 517 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned int 
# 517 "project/radare2/libr/asm/arch/arm/armass.c"
     res = 0;
 if (number < 0) {
  res |= 1 << 18;
 }
 number >>= 1;
 res |= (( number & 0xff) << 8);
 number >>= 8;
 res |= ( number & 0x07);
 number >>= 3;
 res |= (( number & 0xff) << 24);
 number >>= 8;
 res |= (( number & 0x3) << 16);
 number >>= 2;
 if (number < 0) {
  res |= (( number & 0x1) << 3);
  number >>= 1;
  res |= (( number & 0x1) << 5);
 } else {
  res |= ((!( number & 0x1)) << 3);
  number >>= 1;
  res |= ((!( number & 0x1)) << 5);
 }
 return res;
}

static 
# 542 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      unsigned int 
# 542 "project/radare2/libr/asm/arch/arm/armass.c"
           getthzeroimmed12(
# 542 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                            unsigned int 
# 542 "project/radare2/libr/asm/arch/arm/armass.c"
                                 number) {
 
# 543 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned int 
# 543 "project/radare2/libr/asm/arch/arm/armass.c"
     res = 0;
 res |= (number & 0x800) << 7;
 res |= (number & 0x700) >> 4;
 res |= (number & 0x0ff) << 8;
 return res;
}

static 
# 550 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      unsigned int 
# 550 "project/radare2/libr/asm/arch/arm/armass.c"
           getthzeroimmed16(
# 550 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                            unsigned int 
# 550 "project/radare2/libr/asm/arch/arm/armass.c"
                                 number) {
 
# 551 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned int 
# 551 "project/radare2/libr/asm/arch/arm/armass.c"
     res = 0;
 res |= (number & 0xf000) << 12;
 res |= (number & 0x0800) << 7;
 res |= (number & 0x0700) >> 4;
 res |= (number & 0x00ff) << 8;
 return res;
}

static 
# 559 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      unsigned int 
# 559 "project/radare2/libr/asm/arch/arm/armass.c"
           getthimmed12(const char *str) {
 
# 560 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned long long 
# 560 "project/radare2/libr/asm/arch/arm/armass.c"
     num = getnum (str);
 if (err) {
  return 0;
 }

 
# 565 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
int 
# 565 "project/radare2/libr/asm/arch/arm/armass.c"
     FSD = 0;
 
# 566 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned long long 
# 566 "project/radare2/libr/asm/arch/arm/armass.c"
     result = 0;
 if (num <= 0xff) {
  return num << 8;
 } else if ( ((num & 0xff00ff00) == 0) && ((num & 0x00ff0000) == ((num & 0x000000ff) << 16)) ) {
  result |= (num & 0x000000ff) << 8;
  result |= 0x00000010;
  return result;
 } else if ( ((num & 0x00ff00ff) == 0) && ((num & 0xff000000) == ((num & 0x0000ff00) << 16)) ) {
  result |= num & 0x0000ff00;
  result |= 0x00000020;
  return result;
 } else if ( ((num & 0xff000000) == ((num & 0x00ff0000) << 8)) && ((num & 0xff000000) == ((num & 0x0000ff00) << 16)) && ((num &0xff000000) == ((num & 0x000000ff) << 24)) ) {
  result |= num & 0x0000ff00;
  result |= 0x00000030;
  return result;
 } else {
  FSD = firstsigdigit(num);
  if (FSD != -1) {
   result |= ((num >> (24-FSD)) & 0x0000007f) << 8;
   result |= ((8+FSD) & 0x1) << 15;
   result |= ((8+FSD) & 0xe) << 3;
   result |= ((8+FSD) & 0x10) << 14;
   return result;
  } else {
   err = 
# 590 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
        1
# 590 "project/radare2/libr/asm/arch/arm/armass.c"
            ;
   return 0;
  }
 }
}

static char *getrange(char *s) {
 char *p = 
# 597 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
          ((void *)0)
# 597 "project/radare2/libr/asm/arch/arm/armass.c"
              ;
 while (s && *s) {
  if (*s == ',') {
   p = s+1;
   *p=0;
  }
  if (*s == '[' || *s == ']') {
   
# 604 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  __builtin___memmove_chk (
# 604 "project/radare2/libr/asm/arch/arm/armass.c"
  s
# 604 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  , 
# 604 "project/radare2/libr/asm/arch/arm/armass.c"
  s + 1, strlen (s + 1) + 1
# 604 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  , __builtin_object_size (
# 604 "project/radare2/libr/asm/arch/arm/armass.c"
  s
# 604 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  , 0))
# 604 "project/radare2/libr/asm/arch/arm/armass.c"
                                        ;
  }
  if (*s == '}') {
   *s = 0;
  }
  s++;
 }
 while (p && *p == ' ') {
  p++;
 }
 return p;
}


static int getreg(const char *str) {
 int i;
 char *ep;
 const char *aliases[] = { "sl", "fp", "ip", "sp", "lr", "pc", 
# 621 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                                              ((void *)0) 
# 621 "project/radare2/libr/asm/arch/arm/armass.c"
                                                                   };
 if (!str || !*str) {
  return -1;
 }
 if (*str == 'r') {
  int reg = strtol (str + 1, &ep, 10);
  if ((ep[0] != '\0') || (str[1] == '\0')) {
   return -1;
  }
  if (reg < 16 && reg >= 0) {
   return reg;
  }
 }
 for (i=0; aliases[i]; i++) {
  if (!strcmpnull (str, aliases[i])) {
   return 10 + i;
  }
 }
 return -1;
}


static 
# 643 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      int 
# 643 "project/radare2/libr/asm/arch/arm/armass.c"
           getlistmask(char *input) {
 
# 644 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
int 
# 644 "project/radare2/libr/asm/arch/arm/armass.c"
     tempres, res = 0;
 int i, j, start = 0, end = 0;
 char *temp = 
# 646 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
             ((void *)0)
# 646 "project/radare2/libr/asm/arch/arm/armass.c"
                 ;
 char *otemp = 
# 647 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
              ((void *)0)
# 647 "project/radare2/libr/asm/arch/arm/armass.c"
                  ;
 char *temp2 = malloc (strlen (input) + 1);
 if (!temp2) {
  res = -1;
  goto end;
 }
 temp = (char *)malloc (strlen (input) + 1);
 if (!temp) {
  res = -1;
  goto end;
 }
 otemp = temp;
 while (*input != '\0') {
  for (; *input == ' '; input++) {
   ;
  }
  for (i = 0; input[i] != ',' && input[i] != '\0'; i++) {
   ;
  }
  r_str_ncpy (temp, input, i + 1);

  input += i;
  if (*input != '\0') {
   input++;
  }

  for (i = 0; temp[i] != '-' && temp[i] != '\0'; i++) {
   ;
  }
  if (i == strlen (temp)) {
   tempres = getreg (temp);
   if (tempres == -1 || tempres > 15) {
    res = -1;
    goto end;
   }
   res |= 1 << tempres;
  } else {
   
# 684 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  __builtin___strncpy_chk (
# 684 "project/radare2/libr/asm/arch/arm/armass.c"
  temp2
# 684 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  , 
# 684 "project/radare2/libr/asm/arch/arm/armass.c"
  temp, i
# 684 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  , __builtin_object_size (
# 684 "project/radare2/libr/asm/arch/arm/armass.c"
  temp2
# 684 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  , 2 > 1 ? 1 : 0))
# 684 "project/radare2/libr/asm/arch/arm/armass.c"
                          ;
   temp2[i] = 0;
   temp += i + 1;
   start = getreg (temp2);
   if (start == -1 || start > 15) {
    res = -1;
    goto end;
   }
   end = getreg (temp);
   if (end == -1 || end > 15) {
    res = -1;
    goto end;
   }

   for (j = start; j <= end; j++ ) {
    res |= 1 << j;
   }
  }
 }
end:
 free (otemp);
 free (temp2);
 return res;
}

static 
# 709 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      int 
# 709 "project/radare2/libr/asm/arch/arm/armass.c"
           getregmemstart(const char *input) {
 if ((strlen (input) < 1) || (!(*input == '['))) {
  return -1;
 }
 input++;
 return getreg (input);
}

static 
# 717 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      int 
# 717 "project/radare2/libr/asm/arch/arm/armass.c"
           getregmemstartend(const char *input) {
 
# 718 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
int 
# 718 "project/radare2/libr/asm/arch/arm/armass.c"
     res;
 if (!input || (strlen (input) < 2) || (*input != '[') || !r_str_endswith (input, "]")) {
  return -1;
 }
 input++;
 char *temp = r_str_ndup (input, strlen (input) - 1);
 if (!temp) {
  return -1;
 }
 res = getreg (temp);
 free (temp);
 return res;
}

static 
# 732 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      int 
# 732 "project/radare2/libr/asm/arch/arm/armass.c"
           getregmemend(const char *input) {
 
# 733 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
int 
# 733 "project/radare2/libr/asm/arch/arm/armass.c"
     res;
 if (!input || !*input || !r_str_endswith (input, "]")) {
  return -1;
 }

 char *temp = r_str_ndup (input, strlen (input) - 1);
 if (!temp) {
  return -1;
 }
 res = getreg (temp);
 free (temp);
 return res;
}

static 
# 747 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      int 
# 747 "project/radare2/libr/asm/arch/arm/armass.c"
           getreglist(const char *input) {
 
# 748 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
int 
# 748 "project/radare2/libr/asm/arch/arm/armass.c"
     res;

 if (!input || (strlen (input) < 2) || (*input != '{') || !r_str_endswith (input, "}")) {
  return -1;
 }
 if (*input) {
  input++;
 }
 char *temp = r_str_ndup (input, strlen (input) - 1);
 if (!temp) {
  return -1;
 }
 res = getlistmask (temp);
 free (temp);
 return res;
}

static 
# 765 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      int 
# 765 "project/radare2/libr/asm/arch/arm/armass.c"
           getnummemend (const char *input) {
 
# 766 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
int 
# 766 "project/radare2/libr/asm/arch/arm/armass.c"
     res;
 err = 
# 767 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      0
# 767 "project/radare2/libr/asm/arch/arm/armass.c"
           ;
 if (!input || !*input || !r_str_endswith (input, "]")) {
  err = 
# 769 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
       1
# 769 "project/radare2/libr/asm/arch/arm/armass.c"
           ;
  return -1;
 }
 char *temp = r_str_ndup (input, strlen (input) - 1);
 if (!temp) {
  err = 
# 774 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
       1
# 774 "project/radare2/libr/asm/arch/arm/armass.c"
           ;
  return -1;
 }
 res = getnum (temp);
 free (temp);
 return res;
}

static 
# 782 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      int 
# 782 "project/radare2/libr/asm/arch/arm/armass.c"
           getnummemendbang (const char *input) {
 
# 783 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
int 
# 783 "project/radare2/libr/asm/arch/arm/armass.c"
     res;
 err = 
# 784 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      0
# 784 "project/radare2/libr/asm/arch/arm/armass.c"
           ;
 if (!input || (strlen (input) < 2) || (input[strlen(input) - 2] != ']' || !r_str_endswith (input, "!"))) {
  err = 
# 786 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
       1
# 786 "project/radare2/libr/asm/arch/arm/armass.c"
           ;
  return 0;
 }
 char *temp = r_str_ndup (input, strlen (input) - 2);
 if (!temp) {
  err = 
# 791 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
       1
# 791 "project/radare2/libr/asm/arch/arm/armass.c"
           ;
  return 0;
 }
 res = getnum (temp);
 free (temp);
 return res;
}

static 
# 799 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      int 
# 799 "project/radare2/libr/asm/arch/arm/armass.c"
           getregmembang(const char *input) {
 
# 800 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
int 
# 800 "project/radare2/libr/asm/arch/arm/armass.c"
     res;
 if (!input || !*input || !r_str_endswith (input, "!")) {
  return -1;
 }
 char *temp = r_str_ndup (input, strlen (input) - 1);
 if (!temp) {
  return -1;
 }
 res = getreg (temp);
 free (temp);
 return res;
}

static int getcoproc(const char *str) {
 char *ep;
 if (!str || !*str) {
  return -1;
 }
 if (*str == 'p') {
  int coproc = strtol (str + 1, &ep, 10);
  if ((ep[0] != '\0') || (str[1] == '\0')) {
   return -1;
  }
  if (coproc < 16 && coproc >= 0) {
   return coproc;
  }
 }
 return -1;
}

static int getcoprocreg(const char *str) {
 char *ep;

 if (!str || !*str) {
  return -1;
 }
 if (r_str_startswith (str, "c")) {
  int reg = strtol (str + 1, &ep, 10);
  if ((ep[0] != '\0') || (str[1] == '\0')) {
   return -1;
  }
  if (reg < 16 && reg >= 0) {
   return reg;
  }
 }
 return -1;
}

static 
# 848 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      unsigned char 
# 848 "project/radare2/libr/asm/arch/arm/armass.c"
          interpret_msrbank (char *str, 
# 848 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                        unsigned char 
# 848 "project/radare2/libr/asm/arch/arm/armass.c"
                                            *spsr) {
 const char fields[] = {'c', 'x', 's', 'f', 0};
 int res = 0;
 int i, j;
 if (r_str_startswith (str, "spsr_")) {
  *spsr = 1;
 } else {
  *spsr = 0;
 }

 if (r_str_startswith (str, "apsr_")) {
  if (!(strcmp (str+5, "g"))) {
   return 0x4;
  }
  if (!(strcmp (str+5, "nzcvq"))) {
   return 0x8;
  }
  if (!(strcmp (str+5, "nzcvqg"))) {
   return 0xc;
  }
 }
 if (r_str_startswith (str, "cpsr_") || r_str_startswith (str, "spsr_")) {
  for (i = 0; str[5+i]; i++) {
   for (j = 0; fields[j]; j++) {
    if (str[5+i] == fields[j]) {
     break;
    }
   }
   if (!(fields[j])) {
    return 0;
   }
   res |= 1 << j;
  }
  return res;
 }
 return 0;
}

static 
# 886 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      unsigned int 
# 886 "project/radare2/libr/asm/arch/arm/armass.c"
           thumb_getshift(const char *str) {

 const char *shifts[] = {
  "LSL", "LSR", "ASR", "ROR", 0, "RRX"
 };
 char *type = strdup (str);
 char *arg;
 char *space;
 
# 894 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned int 
# 894 "project/radare2/libr/asm/arch/arm/armass.c"
     res = 0;
 
# 895 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned int 
# 895 "project/radare2/libr/asm/arch/arm/armass.c"
     shift = 
# 895 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
             0
# 895 "project/radare2/libr/asm/arch/arm/armass.c"
                  ;
 err = 
# 896 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      0
# 896 "project/radare2/libr/asm/arch/arm/armass.c"
           ;
 
# 897 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned int 
# 897 "project/radare2/libr/asm/arch/arm/armass.c"
     argn;
 
# 898 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned int 
# 898 "project/radare2/libr/asm/arch/arm/armass.c"
     i;

 r_str_case (type,
# 900 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                 1
# 900 "project/radare2/libr/asm/arch/arm/armass.c"
                     );

 if (!strcmp (type, shifts[5])) {

  res |= 3 << 12;
  free (type);
  return res;
 }

 space = strchr (type, ' ');
 if (!space) {
  free (type);
  err = 
# 912 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
       1
# 912 "project/radare2/libr/asm/arch/arm/armass.c"
           ;
  return 0;
 }
 *space = 0;
 arg = strdup (++space);

 for (i = 0; shifts[i]; i++) {
  if (!strcmp (type, shifts[i])) {
   shift = 
# 920 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
          1
# 920 "project/radare2/libr/asm/arch/arm/armass.c"
              ;
   break;
  }
 }
 if (!shift) {
  err = 
# 925 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
       1
# 925 "project/radare2/libr/asm/arch/arm/armass.c"
           ;
  free (type);
  free (arg);
  return 0;
 }
 res |= i << 12;

 argn = getnum (arg);
 if (err || argn > 32) {
  err = 
# 934 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
       1
# 934 "project/radare2/libr/asm/arch/arm/armass.c"
           ;
  free (type);
  free (arg);
  return 0;
 }
 res |= ( (argn & 0x1c) << 2);
 res |= ( (argn & 0x3) << 14);

 free (type);
 free (arg);
 return res;
}

static 
# 947 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      int 
# 947 "project/radare2/libr/asm/arch/arm/armass.c"
           getshiftmemend(const char *input) {
 
# 948 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
int 
# 948 "project/radare2/libr/asm/arch/arm/armass.c"
     res;
 if (!input || !*input || !r_str_endswith (input, "]")) {
  return -1;
 }

 char *temp = r_str_ndup (input, strlen (input) - 1);
 if (!temp) {
  return -1;
 }
 res = thumb_getshift (temp);
 free (temp);
 return res;
}

void collect_list(char *input[]) {
 if (!input || !input[0]) {
  return;
 }
 char *temp = malloc (500);
 if (!temp) {
  return;
 }
 temp[0] = 0;
 int i;
 int conc = 0;
 int start = 0, end = 0;
 int arrsz;
 for (arrsz = 1; input[arrsz] != 
# 975 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                ((void *)0)
# 975 "project/radare2/libr/asm/arch/arm/armass.c"
                                    ; arrsz++) {
  ;
 }

 for (i = 0; input[i]; i++) {
  if (conc) {
   
# 981 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  __builtin___strcat_chk (
# 981 "project/radare2/libr/asm/arch/arm/armass.c"
  temp
# 981 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  , 
# 981 "project/radare2/libr/asm/arch/arm/armass.c"
  ", "
# 981 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  , __builtin_object_size (
# 981 "project/radare2/libr/asm/arch/arm/armass.c"
  temp
# 981 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  , 2 > 1 ? 1 : 0))
# 981 "project/radare2/libr/asm/arch/arm/armass.c"
                     ;
   
# 982 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  __builtin___strcat_chk (
# 982 "project/radare2/libr/asm/arch/arm/armass.c"
  temp
# 982 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  , 
# 982 "project/radare2/libr/asm/arch/arm/armass.c"
  input[i]
# 982 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  , __builtin_object_size (
# 982 "project/radare2/libr/asm/arch/arm/armass.c"
  temp
# 982 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  , 2 > 1 ? 1 : 0))
# 982 "project/radare2/libr/asm/arch/arm/armass.c"
                         ;
  }
  if (input[i][0] == '{') {
   conc = 1;
   
# 986 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  __builtin___strcat_chk (
# 986 "project/radare2/libr/asm/arch/arm/armass.c"
  temp
# 986 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  , 
# 986 "project/radare2/libr/asm/arch/arm/armass.c"
  input[i]
# 986 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  , __builtin_object_size (
# 986 "project/radare2/libr/asm/arch/arm/armass.c"
  temp
# 986 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  , 2 > 1 ? 1 : 0))
# 986 "project/radare2/libr/asm/arch/arm/armass.c"
                         ;
   start = i;
  }
  if ((conc) & (input[i][strlen (input[i]) - 1] == '}')) {
   conc = 0;
   end = i;
  }
 }
 if (end == 0) {
  free (temp);
  return;
 }
 input[start] = temp;
 for (i = start + 1; i < arrsz; i++) {
  input[i] = input[(end-start) + i];
 }
 input[i] = 
# 1002 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
           ((void *)0)
# 1002 "project/radare2/libr/asm/arch/arm/armass.c"
               ;
}

static 
# 1005 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      unsigned long long 
# 1005 "project/radare2/libr/asm/arch/arm/armass.c"
           thumb_selector(char *args[]) {
 collect_list(args);
 
# 1007 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned long long 
# 1007 "project/radare2/libr/asm/arch/arm/armass.c"
     res = 0;
 
# 1008 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned char 
# 1008 "project/radare2/libr/asm/arch/arm/armass.c"
    i;
 for (i = 0; i < 15; i++) {
  if (args[i] == 
# 1010 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                ((void *)0)
# 1010 "project/radare2/libr/asm/arch/arm/armass.c"
                    ) {
   break;
  }
  if (getreg (args[i]) != -1) {
   res |= 1 << (i*4);
   continue;
  }
  err = 
# 1017 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
       0
# 1017 "project/radare2/libr/asm/arch/arm/armass.c"
            ;
  getnum (args[i]);
  if (!err) {
   res |= 2 << (i*4);
   continue;
  }
  err = 
# 1023 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
       0
# 1023 "project/radare2/libr/asm/arch/arm/armass.c"
            ;
  thumb_getshift (args[i]);
  if (!err) {
   res |= 3 << (i*4);
   continue;
  }
  if (getcoproc (args[i]) != -1) {
   res |= 4 << (i*4);
   continue;
  }
  if (getcoprocreg (args[i]) != -1) {
   res |= 5 << (i*4);
   continue;
  }
  if (getregmemstart (args[i]) != -1) {
   res |= 6 << (i*4);
   continue;
  }
  if (getregmemstartend (args[i]) != -1) {
   res |= 7 << (i*4);
   continue;
  }
  err = 
# 1045 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
       0
# 1045 "project/radare2/libr/asm/arch/arm/armass.c"
            ;
  getnummemend(args[i]);
  if (!err) {
   res |= 8 << (i*4);
   continue;
  }
  err = 
# 1051 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
       0
# 1051 "project/radare2/libr/asm/arch/arm/armass.c"
            ;
  getnummemendbang(args[i]);
  if (!err) {
   res |= 9 << (i*4);
   continue;
  }
  if (getregmembang (args[i]) != -1) {
   res |= 0xa << (i*4);
   continue;
  }
  if (getreglist (args[i]) != -1) {
   res |= 0xb << (i*4);
   continue;
  }
  if (getregmemend (args[i]) != -1) {
   res |= 0xc << (i*4);
   continue;
  }
  if (getshiftmemend (args[i]) != -1) {
   res |= 0xd << (i*4);
   continue;
  }
  err = 
# 1073 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
       0
# 1073 "project/radare2/libr/asm/arch/arm/armass.c"
            ;
  getnumbang(args[i]);
  if (!err) {
   res |= 0xe << (i*4);
   continue;
  }
  res |= 0xf << (i*4);
 }
 err = 
# 1081 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      0
# 1081 "project/radare2/libr/asm/arch/arm/armass.c"
           ;
 return res;
}

static 
# 1085 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      unsigned int 
# 1085 "project/radare2/libr/asm/arch/arm/armass.c"
           getshift(const char *str) {
 char type[128];
 char arg[128];
 char *space;
 
# 1089 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned int 
# 1089 "project/radare2/libr/asm/arch/arm/armass.c"
     i=0, shift=0;
 const char *shifts[] = {
  "LSL", "LSR", "ASR", "ROR",
  0, "RRX"
 };

 
# 1095 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
__builtin___strncpy_chk (
# 1095 "project/radare2/libr/asm/arch/arm/armass.c"
type
# 1095 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
, 
# 1095 "project/radare2/libr/asm/arch/arm/armass.c"
str, sizeof (type) - 1
# 1095 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
, __builtin_object_size (
# 1095 "project/radare2/libr/asm/arch/arm/armass.c"
type
# 1095 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
, 2 > 1 ? 1 : 0))
# 1095 "project/radare2/libr/asm/arch/arm/armass.c"
                                      ;

 if (!r_str_casecmp (type, shifts[5])) {

  shift = 6;
 } else {
  space = strchr (type, ' ');
  if (!space) {
   return 0;
  }
  *space = 0;
  
# 1106 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 __builtin___strncpy_chk (
# 1106 "project/radare2/libr/asm/arch/arm/armass.c"
 arg
# 1106 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 , 
# 1106 "project/radare2/libr/asm/arch/arm/armass.c"
 ++space, sizeof(arg) - 1
# 1106 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 , __builtin_object_size (
# 1106 "project/radare2/libr/asm/arch/arm/armass.c"
 arg
# 1106 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 , 2 > 1 ? 1 : 0))
# 1106 "project/radare2/libr/asm/arch/arm/armass.c"
                                        ;

  for (i = 0; shifts[i]; i++) {
   if (!r_str_casecmp (type, shifts[i])) {
    shift = 1;
    break;
   }
  }
  if (!shift) {
   return 0;
  }
  shift = i * 2;
  if ((i = getreg (arg)) != -1) {
   i <<= 8;

   i |= (1 << 4);
   i |= shift << 4;
   if (shift == 6) {
    i |= (1 << 20);
   }
  } else {
   char *bracket = strchr (arg, ']');
   if (bracket) {
    *bracket = '\0';
   }

   i &= 0x1f;
   if (!i) {
    i = 32;
   }
   i = (i * 8);
   i |= shift;
   i = i << 4;
  }
 }

 return i;
}

static void arm_opcode_parse(ArmOpcode *ao, const char *str) {
 int i;
 
# 1147 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
__builtin___memset_chk (
# 1147 "project/radare2/libr/asm/arch/arm/armass.c"
ao
# 1147 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
, 
# 1147 "project/radare2/libr/asm/arch/arm/armass.c"
0, sizeof (ArmOpcode)
# 1147 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
, __builtin_object_size (
# 1147 "project/radare2/libr/asm/arch/arm/armass.c"
ao
# 1147 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
, 0))
# 1147 "project/radare2/libr/asm/arch/arm/armass.c"
                                  ;
 if (strlen (str) + 1 >= sizeof (ao->op)) {
  return;
 }
 
# 1151 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
__builtin___strncpy_chk (
# 1151 "project/radare2/libr/asm/arch/arm/armass.c"
ao->op
# 1151 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
, 
# 1151 "project/radare2/libr/asm/arch/arm/armass.c"
str, sizeof (ao->op)-1
# 1151 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
, __builtin_object_size (
# 1151 "project/radare2/libr/asm/arch/arm/armass.c"
ao->op
# 1151 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
, 2 > 1 ? 1 : 0))
# 1151 "project/radare2/libr/asm/arch/arm/armass.c"
                                        ;
 
# 1152 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
__builtin___strcpy_chk (
# 1152 "project/radare2/libr/asm/arch/arm/armass.c"
ao->opstr
# 1152 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
, 
# 1152 "project/radare2/libr/asm/arch/arm/armass.c"
ao->op
# 1152 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
, __builtin_object_size (
# 1152 "project/radare2/libr/asm/arch/arm/armass.c"
ao->opstr
# 1152 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
, 2 > 1 ? 1 : 0))
# 1152 "project/radare2/libr/asm/arch/arm/armass.c"
                          ;
 ao->a[0] = strchr (ao->op, ' ');
 for (i=0; i<15; i++) {
  if (ao->a[i]) {
   *ao->a[i] = 0;
   ao->a[i+1] = strchr (++ao->a[i], ',');
  } else {
   break;
  }
 }
 if (ao->a[i]) {
  *ao->a[i] = 0;
  ao->a[i]++;
 }
 for (i=0; i<16; i++) {
  while (ao->a[i] && *ao->a[i] == ' ') {
   ao->a[i]++;
  }
 }
}

static inline int arm_opcode_cond(ArmOpcode *ao, int delta) {
 const char *conds[] = {
  "eq", "ne", "cs", "cc", "mi", "pl", "vs", "vc",
  "hi", "ls", "ge", "lt", "gt", "le", "al", "nv", 0
 };
 int i, cond = 14;
 char *c = ao->op+delta;
 for (i=0; conds[i]; i++) {
  if (!strcmpnull (c, conds[i])) {
   cond = i;
   break;
  }
 }
 ao->o |= cond << 4;
 return cond;
}

static 
# 1190 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      int 
# 1190 "project/radare2/libr/asm/arch/arm/armass.c"
           thumb_getoffset(char *label, 
# 1190 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                        unsigned long long 
# 1190 "project/radare2/libr/asm/arch/arm/armass.c"
                                             cur) {
 
# 1191 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
int 
# 1191 "project/radare2/libr/asm/arch/arm/armass.c"
     res = r_num_math (
# 1191 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                       ((void *)0)
# 1191 "project/radare2/libr/asm/arch/arm/armass.c"
                           , label);
 res -= 4;
 res -= cur;

 return res;
}

static 
# 1198 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      signed char 
# 1198 "project/radare2/libr/asm/arch/arm/armass.c"
          std_16bit_2reg(ArmOpcode *ao, 
# 1198 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                        unsigned long long 
# 1198 "project/radare2/libr/asm/arch/arm/armass.c"
                                             m) {
 
# 1199 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned char 
# 1199 "project/radare2/libr/asm/arch/arm/armass.c"
    rd = getreg (ao->a[0]);
 
# 1200 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned char 
# 1200 "project/radare2/libr/asm/arch/arm/armass.c"
    rn = getreg (ao->a[1]);
 if ( (rd < 8) && (rn < 8) && !(m & DOTW_BIT)) {
  ao->o |= rd << 8;
  ao->o |= rn << 11;
  return 2;
 }
 return 0;
}

static 
# 1209 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      signed char 
# 1209 "project/radare2/libr/asm/arch/arm/armass.c"
          mem_16bit_2reg(ArmOpcode *ao, 
# 1209 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                        unsigned long long 
# 1209 "project/radare2/libr/asm/arch/arm/armass.c"
                                             m) {
 
# 1210 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned char 
# 1210 "project/radare2/libr/asm/arch/arm/armass.c"
    rd = getreg (ao->a[0]);
 
# 1211 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned char 
# 1211 "project/radare2/libr/asm/arch/arm/armass.c"
    rn = getregmemstart (ao->a[1]);
 if ( (rd < 8) && (rn < 8) && !(m & DOTW_BIT)) {
  ao->o |= rd << 8;
  ao->o |= rn << 11;
  return 2;
 }
 return 0;
}

static 
# 1220 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      signed char 
# 1220 "project/radare2/libr/asm/arch/arm/armass.c"
          std_32bit_2reg(ArmOpcode *ao, 
# 1220 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                        unsigned long long 
# 1220 "project/radare2/libr/asm/arch/arm/armass.c"
                                             m, 
# 1220 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                                _Bool 
# 1220 "project/radare2/libr/asm/arch/arm/armass.c"
                                                     shift) {
 
# 1221 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned char 
# 1221 "project/radare2/libr/asm/arch/arm/armass.c"
    rd = getreg (ao->a[0]);
 
# 1222 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned char 
# 1222 "project/radare2/libr/asm/arch/arm/armass.c"
    rn = getreg (ao->a[1]);
 if ((rd > 15) || (rn > 15) || (m & DOTN_BIT)) {
  return -1;
 }
 if (m & S_BIT) {
  ao->o |= 1 << 28;
 }
 if (shift) {
  err = 
# 1230 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
       0
# 1230 "project/radare2/libr/asm/arch/arm/armass.c"
            ;
  
# 1231 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned int 
# 1231 "project/radare2/libr/asm/arch/arm/armass.c"
      shiftnum = thumb_getshift (ao->a[2]);
  if (err) {
   return -1;
  }
  ao->o |= shiftnum;
  ao->o |= rd << 24;
  ao->o |= rn << 8;
 } else {
  ao->o |= rd;
  ao->o |= rn << 24;
 }
 return 4;
}

static 
# 1245 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      signed char 
# 1245 "project/radare2/libr/asm/arch/arm/armass.c"
          mem_32bit_2reg(ArmOpcode *ao, 
# 1245 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                        unsigned long long 
# 1245 "project/radare2/libr/asm/arch/arm/armass.c"
                                             m) {
 
# 1246 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned char 
# 1246 "project/radare2/libr/asm/arch/arm/armass.c"
    rd = getreg (ao->a[0]);
 
# 1247 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned char 
# 1247 "project/radare2/libr/asm/arch/arm/armass.c"
    rn = getregmemstart (ao->a[1]);
 if ((rd > 15) || (rn > 15) || (m & DOTN_BIT)) {
  return -1;
 }
 ao->o |= rd << 4;
 ao->o |= rn << 24;
 return 4;
}

static 
# 1256 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      signed char 
# 1256 "project/radare2/libr/asm/arch/arm/armass.c"
          std_32bit_3reg(ArmOpcode *ao, 
# 1256 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                        unsigned long long 
# 1256 "project/radare2/libr/asm/arch/arm/armass.c"
                                             m, 
# 1256 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                                _Bool 
# 1256 "project/radare2/libr/asm/arch/arm/armass.c"
                                                     shift) {
 
# 1257 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned char 
# 1257 "project/radare2/libr/asm/arch/arm/armass.c"
    rd = getreg (ao->a[0]);
 
# 1258 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned char 
# 1258 "project/radare2/libr/asm/arch/arm/armass.c"
    rn = getreg (ao->a[1]);
 
# 1259 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned char 
# 1259 "project/radare2/libr/asm/arch/arm/armass.c"
    rm = getreg (ao->a[2]);
 if ((rd > 15) || (rn > 15) || (rm > 15) || (m & DOTN_BIT)) {
  return -1;
 }
 ao->o |= rd;
 ao->o |= rn << 24;
 ao->o |= rm << 8;
 if (shift) {
  err = 
# 1267 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
       0
# 1267 "project/radare2/libr/asm/arch/arm/armass.c"
            ;
  
# 1268 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned int 
# 1268 "project/radare2/libr/asm/arch/arm/armass.c"
      shiftnum = thumb_getshift (ao->a[3]);
  if (err) {
   return -1;
  }
  ao->o |= shiftnum;
 }
 if (m & S_BIT) {
  ao->o |= 1 << 28;
 }
 return 4;
}

static void std_opt_2(ArmOpcode *ao) {
 ao->a[2] = ao->a[1];
 ao->a[1] = ao->a[0];
}

static void std_opt_3(ArmOpcode *ao) {
 ao->a[3] = ao->a[2];
 ao->a[2] = ao->a[1];
 ao->a[1] = ao->a[0];
}


static int thumb_assemble(ArmOpcode *ao, 
# 1292 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                        unsigned long long 
# 1292 "project/radare2/libr/asm/arch/arm/armass.c"
                                             off, const char *str) {
 
# 1293 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned long long 
# 1293 "project/radare2/libr/asm/arch/arm/armass.c"
     m;
 ao->o = 
# 1294 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
        0xFFFFFFFFU
# 1294 "project/radare2/libr/asm/arch/arm/armass.c"
                ;
 if (!strcmpnull (ao->op, "udf")) {
  ao->o = 0xde;
  ao->o |= getnum (ao->a[0]) << 8;
  return 2;
 } else
 if ((m = opmask (ao->op, "add", S_BIT | W_BIT))) {
  
# 1301 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 1301 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x21: {
   std_opt_2 (ao);
   }

  case 0x211: {
   
# 1308 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 1308 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 1309 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 1309 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 1310 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 1310 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnum (ao->a[2]);

   if ((reg1 > 15) || (reg2 > 15)) {
    return -1;
   }

   if (reg2 == 13) {
    if ((reg1 < 8) && (num < 1024) && (num % 4 == 0) && (!(m & DOTW_BIT)) && (!(m & W_BIT))) {
     ao->o = 0x00a8;
     ao->o |= reg1;
     ao->o |= (num >> 2) << 8;
     return 2;
    }

    if ((reg1 == 13) && (num < 512) && (num % 4 == 0) && (!(m & DOTW_BIT)) && (!(m & W_BIT))) {
     ao->o = 0x00b0;
     ao->o |= (num >> 2) << 8;
     return 2;
    }

    err = 
# 1330 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
         0
# 1330 "project/radare2/libr/asm/arch/arm/armass.c"
              ;
    
# 1331 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
   unsigned int 
# 1331 "project/radare2/libr/asm/arch/arm/armass.c"
        thnum = getthimmed12 (ao->a[2]);
    if (!err && (!(m & W_BIT))) {
     ao->o = 0x0df10000;
     ao->o |= reg1;
     ao->o |= thnum;
     if (m & S_BIT) {
      ao->o |= 1 << 28;
     }
     return 4;
    }

    if (num > 4095) {
     return -1;
    }

    ao->o = 0x0df20000;
    ao->o |= reg1;
    ao->o |= getthzeroimmed12 (num);
    return 4;
   }

   if (num < 8) {
    ao->o = 0x001c;
    ao->o |= (num & 0x3) << 14;
    ao->o |= (num >> 2);
    if (std_16bit_2reg (ao, m)) {
     return 2;
    }
   }

   if ((reg1 < 8) && (reg1 == reg2) && (num < 256)) {
    ao->o = 0x0030;
    ao->o |= reg1;
    ao->o |= num << 8;
    return 2;
   }

   err = 
# 1368 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
        0
# 1368 "project/radare2/libr/asm/arch/arm/armass.c"
             ;
   
# 1369 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 1369 "project/radare2/libr/asm/arch/arm/armass.c"
       thnum = getthimmed12 (ao->a[2]);
   if (!err && (!(m & W_BIT))) {
    ao->o = 0x00f10000;
    ao->o |= thnum;
    return std_32bit_2reg (ao, m, 
# 1373 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                 0
# 1373 "project/radare2/libr/asm/arch/arm/armass.c"
                                      );
   }

   if (num > 4095) {
    return -1;
   }

   ao->o = 0x00f20000;
   ao->o |= getthzeroimmed12 (num);
   return std_32bit_2reg (ao, m, 
# 1382 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 1382 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->a[3] = "lsl 0";
   }

  case 0x311: {
   if (ao->a[3] == 
# 1394 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                  ((void *)0)
# 1394 "project/radare2/libr/asm/arch/arm/armass.c"
                      ) {
    std_opt_3 (ao);
   }
   }

  case 0x3111: {
   
# 1400 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 1400 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 1401 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 1401 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 1402 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 1402 "project/radare2/libr/asm/arch/arm/armass.c"
      reg3 = getreg (ao->a[2]);
   
# 1403 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 1403 "project/radare2/libr/asm/arch/arm/armass.c"
       shift = thumb_getshift (ao->a[3]);

   if ((reg1 > 15) || (reg2 > 15) || (reg3 > 15)) {
    return -1;
   }

   if (reg2 == 13) {
    if ((reg1 == reg3) && (!(m & DOTW_BIT)) && (shift == 0)) {
     ao->o = 0x6844;
     ao->o |= (reg1 & 0x7) << 8;
     ao->o |= (reg1 >> 3) << 15;
     return 2;
    }

    if ((reg1 == 13) && (!(m & DOTW_BIT)) && (shift == 0)) {
     ao->o = 0x8544;
     ao->o |= reg3 << 11;
     return 2;
    }

    ao->o = 0x0deb0000;
    ao->o |= reg1;
    ao->o |= reg3 << 8;
    ao->o |= shift;
    if (m & S_BIT) {
     ao->o |= 1 << 28;
    }
    return 4;
   }

   if ((reg3 < 8) && (!(m & DOTW_BIT)) && (shift == 0)) {
    ao->o = 0x0018;
    ao->o |= (reg3 >> 2);
    ao->o |= (reg3 & 0x3) << 14;
    if (std_16bit_2reg (ao, m)) {
     return 2;
    }
   }

   if ((reg1 == reg2) && (!(m & DOTW_BIT)) && (shift == 0)) {
    ao->o = 0x0044;
    ao->o |= (reg1 & 0x7) << 8;
    ao->o |= (reg1 >> 3) << 15;
    ao->o |= reg3 << 11;
    return 2;
   }

   ao->o = 0x00eb0000;
   return std_32bit_3reg (ao, m, 
# 1451 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                1
# 1451 "project/radare2/libr/asm/arch/arm/armass.c"
                                    );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "adc", S_BIT))) {
  
# 1459 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 1459 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x21: {
   std_opt_2 (ao);
   }

  case 0x211: {
   ao->o = 0x40f10000;
   ao->o |= getthimmed12 (ao->a[2]);
   return std_32bit_2reg (ao, m, 
# 1468 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 1468 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  case 0x11: {
   ao->o = 0x4041;
   if (std_16bit_2reg (ao, m)) {
    return 2;
   }
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0x40eb0000;
   return std_32bit_3reg (ao, m, 
# 1481 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 1481 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  case 0x311: {
   std_opt_3 (ao);
   }


  case 0x3111: {
   ao->o = 0x40eb0000;
   return std_32bit_3reg(ao, m, 
# 1491 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                               1
# 1491 "project/radare2/libr/asm/arch/arm/armass.c"
                                   );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "adr", 0))) {
  
# 1499 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 1499 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x21: {
   
# 1502 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 1502 "project/radare2/libr/asm/arch/arm/armass.c"
      reg = getreg (ao->a[0]);
   
# 1503 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 1503 "project/radare2/libr/asm/arch/arm/armass.c"
       label = getnum (ao->a[1]);
   if ( !(m & DOTW_BIT) && (reg < 8) && (label < 1024) && (label >= 0) && (label % 4 == 0)) {
    ao->o = 0x00a0;
    ao->o |= reg;
    ao->o |= (label / 4) << 8;
    return 2;
   } else if ((label < 0) && (label > -4096)) {
    if (m & DOTN_BIT) {

     return -1;
    }
    ao->o = 0xaff20000;
    ao->o |= reg;
    ao->o |= getthzeroimmed12 (-label);
    return 4;
   } else if ((label > 0) && (label < 4096)) {
    if (m & DOTN_BIT) {

     return -1;
    }
    ao->o = 0x0ff20000;
    ao->o |= reg;
    ao->o |= getthzeroimmed12 (label);
    return 4;
   }
   return -1;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "and", S_BIT))) {
  
# 1536 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 1536 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   ao->o = 0x0040;
   if (std_16bit_2reg (ao, m)) {
    return 2;
   }
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0x00ea0000;
   return std_32bit_3reg (ao, m, 
# 1548 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 1548 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  case 0x21: {
   std_opt_2 (ao);
   }

  case 0x211: {
   
# 1556 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 1556 "project/radare2/libr/asm/arch/arm/armass.c"
       imm = getthimmed12 (ao->a[2]);
   ao->o = 0x00f00000;
   ao->o |= imm;
   return std_32bit_2reg (ao, m, 
# 1559 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 1559 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  case 0x311: {
   std_opt_3 (ao);
   }

  case 0x3111: {
   ao->o = 0x00ea0000;
   return std_32bit_3reg (ao, m, 
# 1568 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                1
# 1568 "project/radare2/libr/asm/arch/arm/armass.c"
                                    );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "asr", S_BIT))) {
  
# 1576 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 1576 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x211: {
   
# 1579 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 1579 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 1580 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 1580 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 1581 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 1581 "project/radare2/libr/asm/arch/arm/armass.c"
       imm = getnum (ao->a[2]);
   if (((int)imm < 1) && ((int)imm > 32)) {
    return -1;
   }
   ao->o = 0x0010;
   ao->o |= (imm & 0x3) << 14;
   ao->o |= (imm & 0x1c) >> 2;
   if (std_16bit_2reg (ao, m)) {
    return 2;
   }
   ao->o = 0x4fea2000;
   ao->o |= reg1;
   ao->o |= reg2 << 8;
   ao->o |= (imm & 0x3) << 14;
   ao->o |= (imm & 0x1c) << 2;
   if (m & S_BIT) {
    ao->o |= 1 << 28;
   }
   return 4;
   }
   break;
  case 0x11: {
   ao->o = 0x0041;
   if (std_16bit_2reg (ao, m)) {
    return 2;
   }
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0x40fa00f0;
   return std_32bit_3reg (ao, m, 
# 1612 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 1612 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if (( m = opmask (ao->op, "b", 0) )) {
  
# 1620 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 1620 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x2: {
   
# 1623 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 1623 "project/radare2/libr/asm/arch/arm/armass.c"
       offset = thumb_getoffset (ao->a[0], off);
   if (offset % 2 != 0) {
    return -1;
   }

   if ((m & C_BITS) == C_BITS) {
    if ((offset >= -2048) && (offset <= 2046) && (!(m & DOTW_BIT))) {
     ao->o = 0x00e0;
     ao->o |= ((offset/2 & 0xff) << 8);
     ao->o |= ((offset/2 & 0x700) >> 8);
     return 2;
    }
    if ((offset < -16777216) || (offset > 16777214) || (offset % 2 != 0)) {
     return -1;
    }
    ao->o = 0x00f00090;
    ao->o |= getthbimmed(offset);
    return 4;
   } else {
    if ((offset >= -256) && (offset <= 254) && (!(m & DOTW_BIT))) {
     ao->o = 0x00d0;
     ao->o |= (
# 1644 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
              unsigned short
# 1644 "project/radare2/libr/asm/arch/arm/armass.c"
                  ) ((offset/2) << 8);
     ao->o |= ((m & C_BITS) >> 2);
     return 2;
    }
    if ((offset < -1048576) || (offset > 1048574) || (offset % 2 != 0)) {
     return -1;
    }

    ao->o = 0x00f00080;
    ao->o |= (
# 1653 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
             unsigned int
# 1653 "project/radare2/libr/asm/arch/arm/armass.c"
                 )(offset & 0x80000) >> 16;
    ao->o |= (
# 1654 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
             unsigned int
# 1654 "project/radare2/libr/asm/arch/arm/armass.c"
                 )(offset & 0x40000) >> 13;
    ao->o |= (
# 1655 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
             unsigned int
# 1655 "project/radare2/libr/asm/arch/arm/armass.c"
                 )(offset & 0x3f000) << 12;
    ao->o |= (
# 1656 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
             unsigned int
# 1656 "project/radare2/libr/asm/arch/arm/armass.c"
                 )(offset & 0xe00) >> 9;
    ao->o |= (
# 1657 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
             unsigned int
# 1657 "project/radare2/libr/asm/arch/arm/armass.c"
                 )(offset & 0x1fe) << 7;
    if (offset < 0) {
     ao->o |= 1 << 18;
    }
    ao->o |= (((m & C_BITS) & 0xc) << 28);
    ao->o |= (((m & C_BITS) & 0x30) << 12);
    return 4;
   }
   }
   break;
  default:
   return -1;
  }
 } else
 if (( m = opmask (ao->op, "bl", 0) )) {
  
# 1672 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 1672 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x2: {
   
# 1675 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 1675 "project/radare2/libr/asm/arch/arm/armass.c"
       offset = thumb_getoffset (ao->a[0], off);
   ao->o = 0x00f000d0;
   if ((offset > 16777214) || (offset < -16777216) || (offset % 2 != 0)) {
    return -1;
   }
   ao->o |= getthbimmed(offset);
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if (( m = opmask (ao->op, "bx", 0) )) {
  
# 1689 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 1689 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x1: {
   
# 1692 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 1692 "project/radare2/libr/asm/arch/arm/armass.c"
       reg1 = getreg (ao->a[0]);
   ao->o = 0x0047;
   ao->o |= reg1 << 11;
   return 2;
   }
   break;
  default:
   return -1;
  }
 } else
 if (( m = opmask (ao->op, "blx", 0) )) {
  
# 1703 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 1703 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x1: {
   
# 1706 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 1706 "project/radare2/libr/asm/arch/arm/armass.c"
       reg1 = getreg (ao->a[0]);
   ao->o = 0x8047;
   ao->o |= reg1 << 11;
   return 2;
   }
   break;
  case 0x2: {
   
# 1713 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 1713 "project/radare2/libr/asm/arch/arm/armass.c"
       offset = thumb_getoffset (ao->a[0], off);
   ao->o = 0x00f000c0;
   if ((offset > 16777214) || (offset < -16777216) || (offset % 2 != 0)) {
    return -1;
   }
   offset += off & 0x2;
   ao->o |= getthbimmed (offset);
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if (( m = opmask (ao->op, "bfc", 0) )) {
  
# 1728 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 1728 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x221: {
   if (m & DOTN_BIT) {

    return -1;
   }
   
# 1735 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 1735 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 1736 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 1736 "project/radare2/libr/asm/arch/arm/armass.c"
       lsb = getnum (ao->a[1]);
   
# 1737 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 1737 "project/radare2/libr/asm/arch/arm/armass.c"
       width = getnum (ao->a[2]);
   
# 1738 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 1738 "project/radare2/libr/asm/arch/arm/armass.c"
       msb = lsb + width - 1;
   if ((lsb > 31) || (msb > 31)) {
    return -1;
   }
   ao->o = 0x6ff30000;
   ao->o |= reg1;
   ao->o |= ((lsb & 0x1c) << 2);
   ao->o |= ((lsb & 0x3) << 14);
   ao->o |= (msb << 8);
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if (( m = opmask (ao->op, "bfi", 0) )) {
  
# 1755 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 1755 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x2211: {
   
# 1758 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 1758 "project/radare2/libr/asm/arch/arm/armass.c"
       lsb = getnum (ao->a[2]);
   
# 1759 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 1759 "project/radare2/libr/asm/arch/arm/armass.c"
       width = getnum (ao->a[3]);
   
# 1760 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 1760 "project/radare2/libr/asm/arch/arm/armass.c"
       msb = lsb + width - 1;
   if ((lsb > 31) || (msb > 31)) {
    return -1;
   }
   ao->o = 0x60f30000;
   ao->o |= ((lsb & 0x1c) << 2);
   ao->o |= ((lsb & 0x3) << 14);
   ao->o |= (msb << 8);
   return std_32bit_2reg (ao, m, 
# 1768 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 1768 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if (( m = opmask (ao->op, "bic", S_BIT) )) {
  
# 1776 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 1776 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   ao->o = 0x8043;
   if (std_16bit_2reg (ao, m)) {
    return 2;
   }
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0x20ea0000;
   return std_32bit_3reg (ao, m, 
# 1788 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 1788 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  case 0x21: {
   std_opt_2 (ao);
   }

  case 0x211: {
   ao->o = 0x20f00000;
   ao->o |= getthimmed12 (ao->a[2]);
   return std_32bit_2reg (ao, m, 
# 1798 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 1798 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  case 0x311: {
   std_opt_3 (ao);
   }

  case 0x3111: {
   ao->o = 0x20ea0000;
   return std_32bit_3reg (ao, m, 
# 1807 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                1
# 1807 "project/radare2/libr/asm/arch/arm/armass.c"
                                    );
   }
   break;
  default:
   return -1;
  }
 } else
 if (( m = opmask (ao->op, "bkpt", 0) )) {
  
# 1815 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 1815 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x2: {
   
# 1818 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 1818 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnum (ao->a[0]);
   if (num > 255) {
    return -1;
   }
   ao->o = 0x00be;
   ao->o |= num << 8;
   return 2;
   }
   break;
  default:
   return -1;
  }
 } else
 if (( m = opmask (ao->op, "cbnz", 0) )) {
  
# 1832 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 1832 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x21: {
   
# 1835 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 1835 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 1836 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 1836 "project/radare2/libr/asm/arch/arm/armass.c"
       offset = thumb_getoffset (ao->a[1], off);
   if ((reg1 > 7) || (offset > 127) || (offset % 2 != 0)) {
    return -1;
   }
   ao->o = 0x00b9;
   ao->o |= reg1 << 8;
   ao->o |= (offset & 0x3e) << 10;
   ao->o |= (offset & 0x40) >> 5;
   return 2;
   }
   break;
  default:
   return -1;
  }
 } else
 if (( m = opmask (ao->op, "cbz", 0) )) {
  
# 1852 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 1852 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x21: {
   
# 1855 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 1855 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 1856 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 1856 "project/radare2/libr/asm/arch/arm/armass.c"
       offset = thumb_getoffset (ao->a[1], off);
   if ((reg1 > 7) || (offset > 127) || (offset % 2 != 0)) {
    return -1;
   }
   ao->o = 0x00b1;
   ao->o |= reg1 << 8;
   ao->o |= (offset & 0x3e) << 10;
   ao->o |= (offset & 0x40) >> 5;
   return 2;
   }
   break;
  default:
   return -1;
  }
 } else
 if (( m = opmask (ao->op, "cdp", TWO_BIT) )) {
  
# 1872 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 1872 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x55524: {
   ao->a[5] = "0";
   }

  case 0x255524: {
   
# 1879 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 1879 "project/radare2/libr/asm/arch/arm/armass.c"
       coproc = getcoproc (ao->a[0]);
   
# 1880 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 1880 "project/radare2/libr/asm/arch/arm/armass.c"
       opc1 = getnum (ao->a[1]);
   
# 1881 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 1881 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getcoprocreg (ao->a[2]);
   
# 1882 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 1882 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getcoprocreg (ao->a[3]);
   
# 1883 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 1883 "project/radare2/libr/asm/arch/arm/armass.c"
      reg3 = getcoprocreg (ao->a[4]);
   
# 1884 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 1884 "project/radare2/libr/asm/arch/arm/armass.c"
       opc2 = getnum (ao->a[5]);
   if ((coproc > 15) || (opc1 > 15) || (opc2 > 7)) {
    return -1;
   }
   ao->o = 0x00ee0000;
   if (m & TWO_BIT) {
    ao->o |= 1 << 20;
   }
   ao->o |= coproc;
   ao->o |= opc1 << 28;
   ao->o |= reg1 << 4;
   ao->o |= reg2 << 24;
   ao->o |= reg3 << 8;
   ao->o |= opc2 << 13;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if (( m = opmask (ao->op, "clrex", 0) )) {
  
# 1906 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 1906 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x0: {
   ao->o = 0xbff32f8f;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if (( m = opmask (ao->op, "clz", 0) )) {
  
# 1918 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 1918 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   ao->o = 0xb0fa80f0;
   ao->a[2] = ao->a[1];
   return std_32bit_3reg (ao, m, 
# 1923 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 1923 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if (( m = opmask (ao->op, "cmn", 0) )) {
  
# 1931 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 1931 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x21: {
   
# 1934 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 1934 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 1935 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 1935 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getthimmed12 (ao->a[1]);
   ao->o = 0x10f1000f;
   ao->o |= reg1 << 24;
   ao->o |= num;
   return 4;
   }
   break;
  case 0x11: {
   ao->o = 0xc042;
   if (std_16bit_2reg (ao, m)) {
    return 2;
   }
   ao->a[2] = "lsl 0";
   }

  case 0x311: {
   ao->o = 0x10eb000f;
   return std_32bit_2reg (ao, m, 
# 1952 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                1
# 1952 "project/radare2/libr/asm/arch/arm/armass.c"
                                    );
   }
   break;
  default:
   return -1;
  }
 } else
 if (( m = opmask (ao->op, "cmp", 0) )) {
  
# 1960 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 1960 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x21: {
   
# 1963 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 1963 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 1964 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 1964 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnum (ao->a[1]);
   if ((num < 256) && (!(m & DOTW_BIT))) {
    ao->o = 0x0028;
    ao->o |= reg1;
    ao->o |= num << 8;
    return 2;
   }
   num = getthimmed12 (ao->a[1]);
   ao->o = 0xb0f1000f;
   ao->o |= reg1 << 24;
   ao->o |= num;
   return 4;
   }
   break;
  case 0x11: {
   
# 1979 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 1979 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 1980 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 1980 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   ao->o = 0x8042;
   if (std_16bit_2reg (ao, m)) {
    return 2;
   }
   if (!(m & DOTW_BIT)) {
    ao->o = 0x0045;
    ao->o |= ((reg1 & 0x7) << 8);
    ao->o |= ((reg1 & 0x8) << 12);
    ao->o |= reg2 << 11;
    return 2;
   }
   ao->a[2] = "lsl 0";
   }

  case 0x311: {
   
# 1996 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 1996 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 1997 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 1997 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 1998 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 1998 "project/radare2/libr/asm/arch/arm/armass.c"
       shift = thumb_getshift (ao->a[2]);
   ao->o = 0xb0eb000f;
   ao->o |= reg1 << 24;
   ao->o |= reg2 << 8;
   ao->o |= shift;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if (( m = opmask (ao->op, "cps", ID_BIT | IE_BIT) )) {
  
# 2011 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 2011 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0xf: {
   
# 2014 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  signed char 
# 2014 "project/radare2/libr/asm/arch/arm/armass.c"
      aif = iflag(ao->a[0]);
   if (aif == -1) {
    return -1;
   }
   if (!(m & DOTW_BIT)) {
    ao->o = 0x60b6;
    ao->o |= aif << 8;
    if (m & ID_BIT) {
     ao->o |= 1 << 12;
    }
    return 2;
   }
   ao->a[1] = "0";
   }

  case 0x2f: {
   
# 2030 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  signed char 
# 2030 "project/radare2/libr/asm/arch/arm/armass.c"
      aif = iflag(ao->a[0]);
   
# 2031 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2031 "project/radare2/libr/asm/arch/arm/armass.c"
      mode = getnum (ao->a[1]);
   if ((mode > 31) || (aif == -1)) {
    return -1;
   }
   ao->o = 0xaff30085;
   ao->o |= mode << 8;
   ao->o |= aif << 13;
   if (m & ID_BIT) {
    ao->o |= 1 << 1;
   }
   return 4;
   }
   break;
  case 0x2: {
   
# 2045 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2045 "project/radare2/libr/asm/arch/arm/armass.c"
      mode = getnum (ao->a[0]);
   if ((m & ID_BIT) || (m & IE_BIT) || (mode > 31)) {
    return -1;
   }
   ao->o = 0xaff30081;
   ao->o |= mode << 8;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "dbg", 0))) {
  
# 2059 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 2059 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x2: {
   
# 2062 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 2062 "project/radare2/libr/asm/arch/arm/armass.c"
       option = getnum (ao->a[0]);
   if (option > 15) {
    return -1;
   }
   ao->o = 0xaff3f080;
   ao->o |= option << 8;
   return 4;
   }
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "dmb", 0))) {
  
# 2075 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 2075 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x0: {
   ao->o = 0xbff35f8f;
   return 4;
   }
   break;
  case 0xf: {
   r_str_case (ao->a[0], 
# 2083 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                        0
# 2083 "project/radare2/libr/asm/arch/arm/armass.c"
                             );
   if (strcmpnull (ao->a[0], "sy")) {
    return -1;
   }
   ao->a[0] = "15";
   }

  case 0x2: {
   
# 2091 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 2091 "project/radare2/libr/asm/arch/arm/armass.c"
       option = getnum (ao->a[0]);
   if (option != 15) {
    return -1;
   }
   ao->o = 0xbff3508f;
   ao->o |= option << 8;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "dsb", 0))) {
  
# 2105 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 2105 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x0: {
   ao->o = 0xbff34f8f;
   return 4;
   }

  case 0xf: {
   r_str_case (ao->a[0], 
# 2113 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                        0
# 2113 "project/radare2/libr/asm/arch/arm/armass.c"
                             );
   if (!strcmpnull ((ao->a[0] = parse_hints(ao->a[0])), "-1")) {
    return -1;
   }
   }

  case 0x2: {
   
# 2120 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 2120 "project/radare2/libr/asm/arch/arm/armass.c"
       option = getnum (ao->a[0]);
   if ((option != 6) && (option != 7) && (option != 14) && (option != 15)) {
    return -1;
   }
   ao->o = 0xbff3408f;
   ao->o |= option << 8;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "eor", S_BIT))) {
  
# 2134 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 2134 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x21:
   std_opt_2 (ao);

  case 0x211: {
   err = 
# 2140 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
        0
# 2140 "project/radare2/libr/asm/arch/arm/armass.c"
             ;
   
# 2141 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 2141 "project/radare2/libr/asm/arch/arm/armass.c"
       imm = getthimmed12 (ao->a[2]);
   if (err) {
    return -1;
   }
   ao->o = 0x80f00000;
   ao->o |= imm;
   return std_32bit_2reg (ao, m, 
# 2147 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 2147 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  case 0x11: {
   ao->o = 0x4040;
   if (std_16bit_2reg (ao, m)) {
    return 2;
   }
   std_opt_2 (ao);
   }

  case 0x111:
   ao->a[3] = "lsl 0";

  case 0x3111: {
   ao->o = 0x80ea0000;
   return std_32bit_3reg (ao, m, 
# 2163 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                1
# 2163 "project/radare2/libr/asm/arch/arm/armass.c"
                                    );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "isb", 0))) {
  
# 2171 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 2171 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x0: {
   ao->o = 0xbff36f8f;
   return 4;
   }

  case 0xf: {
   r_str_case (ao->a[0], 
# 2179 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                        0
# 2179 "project/radare2/libr/asm/arch/arm/armass.c"
                             );
   if (strcmpnull (ao->a[0], "sy")) {
    return -1;
   }
   ao->a[0] = "15";
   }

  case 0x2: {
   
# 2187 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 2187 "project/radare2/libr/asm/arch/arm/armass.c"
       option = getnum (ao->a[0]);
   if (option != 15) {
    return -1;
   }
   ao->o = 0xbff3608f;
   ao->o |= option << 8;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = itmask (ao->op))) {
  
# 2201 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 2201 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0xf: {
   
# 2204 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned short 
# 2204 "project/radare2/libr/asm/arch/arm/armass.c"
       cond = 0;
   
# 2205 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned short 
# 2205 "project/radare2/libr/asm/arch/arm/armass.c"
       i;

   const char *conds[] = {
    "eq", "ne", "cs", "cc", "mi", "pl", "vs", "vc",
    "hi", "ls", "ge", "lt", "gt", "le", "al", "nv", 0
   };
   r_str_case (ao->a[0], 
# 2211 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                        0
# 2211 "project/radare2/libr/asm/arch/arm/armass.c"
                             );
   for (i = 0; conds[i]; i++) {
    if (!(strcmpnull(ao->a[0], conds[i]))) {
     cond = i;
     break;
    }
   }

   if (i == 16) {
    return -1;
   }
   ao->o = 0x00bf;
   ao->o |= cond << 12;

   
# 2225 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2225 "project/radare2/libr/asm/arch/arm/armass.c"
      nrcs = (m & 0x30) >> 4;
   
# 2226 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2226 "project/radare2/libr/asm/arch/arm/armass.c"
      thiset = 0;

   for (i = 0; i < nrcs; i++) {
    thiset = ((m & (1 << (3 - i))) >> (3 - i));
    ao->o |= ((cond & 0x1) ^ thiset) << (11 - i);
   }
   ao->o |= 1 << (11 - i);
   return 2;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "ldc", TWO_BIT | L_BIT))) {
  
# 2241 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 2241 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x8654: {
   
# 2244 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2244 "project/radare2/libr/asm/arch/arm/armass.c"
      proc = getcoproc (ao->a[0]);
   
# 2245 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2245 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getcoprocreg (ao->a[1]);
   
# 2246 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2246 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getregmemstart (ao->a[2]);
   
# 2247 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 2247 "project/radare2/libr/asm/arch/arm/armass.c"
       imm = getnummemend (ao->a[3]);
   ao->o = 0x10ed0000;
   if (m & L_BIT) {
    ao->o |= 1 << 30;
   }
   if (m & TWO_BIT) {
    ao->o |= 1 << 20;
   }
   if (imm < 0) {
    imm = -imm;
   } else {
    ao->o |= 1 << 31;
   }
   if ((proc > 15) || (reg1 > 15) || (reg2 > 15) || (imm > 1024) || (imm % 4 != 0)) {
    return -1;
   }
   ao->o |= proc;
   ao->o |= reg1 << 4;
   ao->o |= (imm >> 2) << 8;
   ao->o |= reg2 << 24;
   return 4;
   }
   break;
  case 0x754:
   ao->a[3] = "0";

  case 0x2754: {
   
# 2274 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2274 "project/radare2/libr/asm/arch/arm/armass.c"
      proc = getcoproc (ao->a[0]);
   
# 2275 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2275 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getcoprocreg (ao->a[1]);
   
# 2276 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2276 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getregmemstartend (ao->a[2]);
   
# 2277 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 2277 "project/radare2/libr/asm/arch/arm/armass.c"
       imm = getnum (ao->a[3]);
   ao->o = 0x30ec0000;
   if (m & L_BIT) {
    ao->o |= 1 << 30;
   }
   if (m & TWO_BIT) {
    ao->o |= 1 << 20;
   }
   if (imm < 0) {
    imm = -imm;
   } else {
    ao->o |= 1 << 31;
   }
   if ((proc > 15) || (reg1 > 15) || (reg2 > 15) || (imm > 1024) || (imm % 4 != 0)) {
    return -1;
   }
   ao->o |= proc;
   ao->o |= reg1 << 4;
   ao->o |= (imm >> 2) << 8;
   ao->o |= reg2 << 24;
   return 4;
   }
   break;
  case 0x9654: {
   
# 2301 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2301 "project/radare2/libr/asm/arch/arm/armass.c"
      proc = getcoproc (ao->a[0]);
   
# 2302 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2302 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getcoprocreg (ao->a[1]);
   
# 2303 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2303 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getregmemstart (ao->a[2]);
   
# 2304 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 2304 "project/radare2/libr/asm/arch/arm/armass.c"
       imm = getnummemendbang (ao->a[3]);
   ao->o = 0x30ed0000;
   if (m & L_BIT) {
    ao->o |= 1 << 30;
   }
   if (m & TWO_BIT) {
    ao->o |= 1 << 20;
   }
   if (imm < 0) {
    imm = -imm;
   } else {
    ao->o |= 1 << 31;
   }
   if ((proc > 15) || (reg1 > 15) || (reg2 > 15) || (imm > 1024) || (imm % 4 != 0)) {
    return -1;
   }
   ao->o |= proc;
   ao->o |= reg1 << 4;
   ao->o |= (imm >> 2) << 8;
   ao->o |= reg2 << 24;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "ldm", DB_BIT | EA_BIT | IA_BIT | FD_BIT))) {
  
# 2332 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 2332 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0xba: {
   
# 2335 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2335 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getregmembang (ao->a[0]);
   
# 2336 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 2336 "project/radare2/libr/asm/arch/arm/armass.c"
       list = getreglist (ao->a[1]);
   if (!((m & DB_BIT) || (m & EA_BIT)) && !(list & 0xff00) && (reg1 < 8) && !(m & DOTW_BIT)) {
    ao->o = 0x00c8;
    ao->o |= reg1;
    if (list & (1 << reg1)) {
     list ^= 1 << (reg1);
    }
    ao->o |= (list & 0xff) << 8;

    return 2;
   }
   if (list & 0x2000) {
    return -1;
   }
   if ((m & DB_BIT) || (m & EA_BIT)) {
    ao->o = 0x30e90000;
   } else {

    ao->o = 0xb0e80000;
   }

   ao->o |= reg1 << 24;
   ao->o |= (list & 0xff) << 8;
   ao->o |= (list & 0xff00) >> 8;
   return 4;
   }
   break;
  case 0xb1: {
   
# 2364 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2364 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 2365 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 2365 "project/radare2/libr/asm/arch/arm/armass.c"
       list = getreglist (ao->a[1]);
   if (!((m & DB_BIT) || (m & EA_BIT)) && !(list & 0xff00) && (reg1 < 8) && !(m & DOTW_BIT)) {
    ao->o = 0x00c8;
    ao->o |= reg1;
    ao->o |= 1 << (reg1 + 8);
    ao->o |= (list & 0xff) << 8;
    return 2;
   }
   if (list & 0x2000) {
    return -1;
   }

   if ((m & DB_BIT) || (m & EA_BIT)) {
    ao->o = 0x10e90000;
   } else {
    ao->o = 0x90e80000;
   }

   ao->o |= reg1 << 24;
   ao->o |= (list & 0xff) << 8;
   ao->o |= (list & 0xff00) >> 8;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "ldr", B_BIT | H_BIT | D_BIT | T_BIT | S_BIT))) {
  
# 2394 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 2394 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  
# 2395 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned int 
# 2395 "project/radare2/libr/asm/arch/arm/armass.c"
      ldrsel = m & (B_BIT | H_BIT | D_BIT);
  if ((m & S_BIT) && !(m & (B_BIT | H_BIT))) {
   return -1;
  }
  switch (argt) {
  case 0x21:
   ao->a[2] = ao->a[1];
   
# 2402 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  __builtin___strcat_chk (
# 2402 "project/radare2/libr/asm/arch/arm/armass.c"
  ao->a[2]
# 2402 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  , 
# 2402 "project/radare2/libr/asm/arch/arm/armass.c"
  "]"
# 2402 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  , __builtin_object_size (
# 2402 "project/radare2/libr/asm/arch/arm/armass.c"
  ao->a[2]
# 2402 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  , 2 > 1 ? 1 : 0))
# 2402 "project/radare2/libr/asm/arch/arm/armass.c"
                       ;
   ao->a[1] = "[r15";

  case 0x71:
   if (ao->a[2] == 
# 2406 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                  ((void *)0)
# 2406 "project/radare2/libr/asm/arch/arm/armass.c"
                      ) {
    ao->a[1][strlen (ao->a[1]) -1] = '\0';
    ao->a[2] = "0]";
   }

  case 0x861: {
   
# 2412 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2412 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 2413 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2413 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getregmemstart (ao->a[1]);
   
# 2414 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 2414 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnummemend (ao->a[2]);
   if (ldrsel == 0) {
    if (m & T_BIT) {
     if ((num < 0) || (num > 255)) {
      return -1;
     }
     ao->o = 0x50f8000e;
     ao->o |= num << 8;
     return mem_32bit_2reg (ao, m);
    }
    if (reg2 == 15) {
     if ((num > 4095) || (num < -4095)) {
      return -1;
     }
     if ((reg1 < 8) && (num < 1024) && (num % 4 == 0)) {
      ao->o = 0x0048;
      ao->o |= reg1;
      ao->o |= (num >> 2) << 8;
      return 2;
     }
     ao->o = 0x5ff80000;
     if (num < 0) {
      num = -num;
     } else {
      ao->o |= 1 << 31;
     }
     ao->o |= reg1 << 4;
     ao->o |= (num & 0xff) << 8;
     ao->o |= (num & 0x0f00) >> 8;
     return 4;
    }
    if ((reg2 == 13) && (reg1 < 8) && (num >= 0) && (num < 1024) && (num % 4 == 0) && (!(m & DOTW_BIT))) {
     ao->o = 0x0098;
     ao->o |= reg1;
     ao->o |= (num >> 2) << 8;
     return 2;
    }
    if ((num >= 0) && (num < 128) && (num % 4 == 0)) {
     ao->o = 0x0068;
     ao->o |= (num >> 4);
     ao->o |= ((num >> 2) & 0x3) << 14;
     if (mem_16bit_2reg (ao, m)) {
      return 2;
     }
    }
    if ((num > 4095) || (num < -1023)) {
     return -1;
    }
    if (num >= 0) {
     ao->o = 0xd0f80000;
     ao->o |= (num & 0xff) << 8;
     ao->o |= (num & 0xf00) >> 8;
     return mem_32bit_2reg (ao, m);
    }
    ao->o = 0x50f8000c;
    ao->o |= (-num & 0xff) << 8;
    return mem_32bit_2reg (ao, m);
   } else
   if (ldrsel == B_BIT) {
    if (m & T_BIT) {
     if ((num < 0) || (num > 255)) {
      return -1;
     }
     ao->o = 0x10f8000e;
     if (m & S_BIT) {
      ao->o |= 1 << 16;
     }
     ao->o |= num << 8;
     return mem_32bit_2reg (ao, m);
    }
    if (reg2 == 15) {
     if ((num > 4095) || (num < -4095)) {
      return -1;
     }
     ao->o = 0x1ff80000;
     if (m & S_BIT) {
      ao->o |= 1 << 16;
     }
     if (num < 0) {
      num = -num;
     } else {
      ao->o |= 1 << 31;
     }
     ao->o |= reg1 << 4;
     ao->o |= (num & 0xff) << 8;
     ao->o |= (num & 0x0f00) >> 8;
     return 4;
    }
    if ((num >= 0) && (num < 32) && (!(m & S_BIT))) {
     ao->o = 0x0078;
     ao->o |= (num >> 2);
     ao->o |= (num & 0x3) << 14;
     if (mem_16bit_2reg (ao, m)) {
      return 2;
     }
    }
    if ((num > 4095) || (num < -255)) {
     return -1;
    }
    if (num >= 0) {
     ao->o = 0x90f80000;
     if (m & S_BIT) {
      ao->o |= 1 << 16;
     }
     ao->o |= (num & 0xff) << 8;
     ao->o |= (num & 0xf00) >> 8;
     return mem_32bit_2reg (ao, m);
    }
    ao->o = 0x10f8000c;
    if (m & S_BIT) {
     ao->o |= 1 << 16;
    }
    ao->o |= -num << 8;
    return mem_32bit_2reg (ao, m);
   } else
   if (ldrsel == H_BIT) {
    if (m & T_BIT) {
     if ((num < 0) || (num > 255)) {
      return -1;
     }
     ao->o = 0x30f8000e;
     if (m & S_BIT) {
      ao->o |= 1 << 16;
     }
     ao->o |= num << 8;
     return mem_32bit_2reg (ao, m);
    }
    if (reg2 == 15) {
     if ((num > 4095) || (num < -4095)) {
      return -1;
     }
     ao->o = 0x3ff80000;
     if (m & S_BIT) {
      ao->o |= 1 << 16;
     }
     if (num < 0) {
      num = -num;
     } else {
      ao->o |= 1 << 31;
     }
     ao->o |= reg1 << 4;
     ao->o |= (num & 0xff) << 8;
     ao->o |= (num & 0x0f00) >> 8;
     return 4;
    }
    if ((num >= 0) && (num < 64) && (num % 2 == 0) && (!(m & S_BIT))) {
     ao->o = 0x0088;
     ao->o |= (num >> 3);
     ao->o |= ((num >> 1) & 0x3) << 14;
     if (mem_16bit_2reg (ao, m)) {
      return 2;
     }
    }
    if ((num > 4095) || (num < -255)) {
     return -1;
    }
    if (num >= 0) {
     ao->o = 0xb0f80000;
     if (m & S_BIT) {
      ao->o |= 1 << 16;
     }
     ao->o |= (num & 0xff) << 8;
     ao->o |= (num & 0xf00) >> 8;
     return mem_32bit_2reg (ao, m);
    }
    ao->o = 0x30f8000c;
    if (m & S_BIT) {
     ao->o |= 1 << 16;
    }
    ao->o |= -num << 8;
    return mem_32bit_2reg (ao, m);
   } else {
    return -1;
   }
   }
   break;
  case 0x271: {
   
# 2591 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2591 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 2592 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2592 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getregmemstartend (ao->a[1]);
   
# 2593 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 2593 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnum (ao->a[2]);
   if ((num < -255) || (num > 255)) {
    return -1;
   }
   if (ldrsel == 0) {
    ao->o = 0x50f80009;
   } else
   if (ldrsel == B_BIT) {
    ao->o = 0x10f80009;
   } else
   if (ldrsel == H_BIT) {
    ao->o = 0x30f80009;
   } else {
    return -1;
   }
   if (m & S_BIT) {
    ao->o |= 1 << 16;
   }
   if (num < 0) {
    num = -num;
   } else {
    ao->o |= 1 << 1;
   }
   ao->o |= num << 8;
   ao->o |= reg1 << 4;
   ao->o |= reg2 << 24;
   return 4;
   }
   break;
  case 0x961: {
   
# 2623 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 2623 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnummemendbang (ao->a[2]);
   if ((num < -255) || (num > 255)) {
    return -1;
   }
   if (ldrsel == 0) {
    ao->o = 0x50f8000d;
   } else
   if (ldrsel == B_BIT) {
    ao->o = 0x10f8000d;
   } else
   if (ldrsel == H_BIT) {
    ao->o = 0x30f8000d;
   } else {
    return -1;
   }
   if (m & S_BIT) {
    ao->o |= 1 << 16;
   }
   if (num < 0) {
    num = -num;
   } else {
    ao->o |= 1 << 1;
   }
   ao->o |= num << 8;
   return mem_32bit_2reg (ao, m);
   }
   break;
  case 0xc61: {
   
# 2651 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2651 "project/radare2/libr/asm/arch/arm/armass.c"
      reg3 = getregmemend (ao->a[2]);
   if (reg3 < 8) {
    if (ldrsel == 0) {
     ao->o = 0x0058;
    } else
    if (ldrsel == B_BIT) {
     if (m & S_BIT) {
      ao->o = 0x0056;
     } else {
      ao->o = 0x005c;
     }
    } else
    if (ldrsel == H_BIT) {
     if (m & S_BIT) {
      ao->o = 0x005e;
     } else {
      ao->o = 0x005a;
     }
    } else
    {
     return -1;
    }
    ao->o |= (reg3 & 0x3) << 14;
    ao->o |= (reg3 & 0x4) >> 2;
    if (mem_16bit_2reg (ao, m)) {
     return 2;
    }
   }
   ao->a[2][strlen (ao->a[2]) -1] = '\0';
   ao->a[3] = "lsl 0]";
   }

  case 0xd161: {
   
# 2684 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2684 "project/radare2/libr/asm/arch/arm/armass.c"
      reg3 = getreg (ao->a[2]);
   
# 2685 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 2685 "project/radare2/libr/asm/arch/arm/armass.c"
       shift = getshiftmemend (ao->a[3]);

   shift >>= 2;
   if (shift & 0xffffcfff) {
    return -1;
   }

   if (ldrsel == 0) {
    ao->o = 0x50f80000;
   } else
   if (ldrsel == B_BIT) {
    ao->o = 0x10f80000;
   } else
   if (ldrsel == H_BIT) {
    ao->o = 0x30f80000;
   } else
   {
    return -1;
   }
   if (m & S_BIT) {
    ao->o |= 1 << 16;
   }
   ao->o |= reg3 << 8;
   ao->o |= shift;
   return mem_32bit_2reg (ao, m);
   }
   break;
  case 0x711: {
   ao->a[2][strlen (ao->a[2]) -1] = '\0';
   ao->a[3] = "0]";
   }

  case 0x8611: {
   
# 2718 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2718 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 2719 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2719 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 2720 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2720 "project/radare2/libr/asm/arch/arm/armass.c"
      reg3 = getregmemstart (ao->a[2]);
   
# 2721 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 2721 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnummemend (ao->a[3]);

   if ((num > 1020) || (num < -1020) || (num % 4 != 0) || (ldrsel != D_BIT)) {
    return -1;
   }
   ao->o = 0x50e90000;
   if (num < 0) {
    num = -num;
   } else {
    ao->o |= 1 << 31;
   }
   ao->o |= reg1 << 4;
   ao->o |= reg2;
   ao->o |= reg3 << 24;
   ao->o |= (num >> 2) << 8;
   return 4;
   }
   break;
  case 0x2711: {
   
# 2740 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2740 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 2741 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2741 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 2742 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2742 "project/radare2/libr/asm/arch/arm/armass.c"
      reg3 = getregmemstartend (ao->a[2]);
   
# 2743 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 2743 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnum (ao->a[3]);
   if ((num > 1020) || (num < -1020) || (num % 4 != 0) || (ldrsel != D_BIT)) {
    return -1;
   }
   ao->o = 0x70e80000;
   if (num < 0) {
    num = -num;
   } else {
    ao->o |= 1 << 31;
   }
   ao->o |= reg1 << 4;
   ao->o |= reg2;
   ao->o |= reg3 << 24;
   ao->o |= (num >> 2) << 8;
   return 4;
   }
   break;
  case 0x9611: {
   
# 2761 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2761 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 2762 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2762 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 2763 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2763 "project/radare2/libr/asm/arch/arm/armass.c"
      reg3 = getregmemstart (ao->a[2]);
   
# 2764 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 2764 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnummemendbang (ao->a[3]);
   if ((num > 1020) || (num < -1020) || (num % 4 != 0) || (ldrsel != D_BIT)) {
    return -1;
   }
   ao->o = 0x70e90000;
   if (num < 0) {
    num = -num;
   } else {
    ao->o |= 1 << 31;
   }
   ao->o |= reg1 << 4;
   ao->o |= reg2;
   ao->o |= reg3 << 24;
   ao->o |= (num >> 2) << 8;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "ldrex", B_BIT | H_BIT | D_BIT))) {
  
# 2786 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 2786 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  
# 2787 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned int 
# 2787 "project/radare2/libr/asm/arch/arm/armass.c"
      ldrsel = m & (B_BIT | H_BIT | D_BIT);
  switch (argt) {
  case 0x71: {
   
# 2790 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2790 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 2791 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2791 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getregmemstartend (ao->a[1]);

   if (ldrsel == B_BIT) {
    ao->o = 0xd0e84f0f;
    ao->o |= reg1 << 4;
    ao->o |= reg2 << 24;
    return 4;
   } else
   if (ldrsel == H_BIT) {
    ao->o = 0xd0e85f0f;
    ao->o |= reg1 << 4;
    ao->o |= reg2 << 24;
    return 4;
   } else
   if (ldrsel == 0) {
    ao->a[1][strlen (ao->a[1]) - 1] = '\0';
    ao->a[2] = "0]";
   } else {
    return -1;
   }
   }

  case 0x861: {
   
# 2814 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 2814 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnummemend (ao->a[2]);
   if ((ldrsel != 0) || (num < 0) || (num > 1020) || (num % 4 != 0)) {
    return -1;
   }
   ao->o = 0x50e8000f;
   ao->o |= (num >> 2) << 8;
   return mem_32bit_2reg (ao, m);
   }
   break;
  case 0x711: {
   
# 2824 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2824 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 2825 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2825 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 2826 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2826 "project/radare2/libr/asm/arch/arm/armass.c"
      reg3 = getregmemstartend (ao->a[2]);
   if (!(ldrsel & D_BIT)) {
    return -1;
   }
   ao->o = 0xd0e87f00;
   ao->o |= reg1 << 4;
   ao->o |= reg2;
   ao->o |= reg3 << 24;
   return 4;
  }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "lsl", S_BIT))) {
  
# 2842 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 2842 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x211: {
   
# 2845 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2845 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 2846 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2846 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 2847 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 2847 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnum (ao->a[2]);
   if (num > 32) {
    return -1;
   }
   ao->o = 0x0000;
   if (std_16bit_2reg (ao, m)) {
    ao->o |= (num & 0x03) << 14;
    ao->o |= num >> 2;
    return 2;
   }
   ao->o = 0x4fea0000;
   ao->o |= reg1;
   ao->o |= reg2 << 8;
   ao->o |= (num >> 2) << 4;
   ao->o |= (num & 0x3) << 14;
   if (m & S_BIT) {
    ao->o |= 1 << 28;
   }
   return 4;
   }
   break;
  case 0x11: {
   ao->o = 0x8040;
   if (std_16bit_2reg (ao, m)) {
    return 2;
   }
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0x00fa00f0;
   return std_32bit_3reg (ao, m, 
# 2878 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 2878 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "lsr", S_BIT))) {
  
# 2886 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 2886 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x211: {
   
# 2889 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2889 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 2890 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 2890 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 2891 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 2891 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnum (ao->a[2]);
   if (num > 32) {
    return -1;
   }
   ao->o = 0x0008;
   if (std_16bit_2reg (ao, m)) {
    ao->o |= (num & 0x03) << 14;
    ao->o |= num >> 2;
    return 2;
   }
   ao->o = 0x4fea1000;
   ao->o |= reg1;
   ao->o |= reg2 << 8;
   ao->o |= (num >> 2) << 4;
   ao->o |= (num & 0x3) << 14;
   if (m & S_BIT) {
    ao->o |= 1 << 28;
   }
   return 4;
   }
   break;
  case 0x11: {
   ao->o = 0xc040;
   if (std_16bit_2reg (ao, m)) {
    return 2;
   }
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0x20fa00f0;
   return std_32bit_3reg (ao, m, 
# 2922 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 2922 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "mcr", R_BIT | TWO_BIT))) {
  
# 2930 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 2930 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x55124: {
   ao->a[5] = "0";
   }

  case 0x255124: {
   
# 2937 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 2937 "project/radare2/libr/asm/arch/arm/armass.c"
       coproc = getcoproc (ao->a[0]);
   
# 2938 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 2938 "project/radare2/libr/asm/arch/arm/armass.c"
       opc1 = getnum (ao->a[1]);
   
# 2939 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 2939 "project/radare2/libr/asm/arch/arm/armass.c"
       reg1 = getreg (ao->a[2]);
   
# 2940 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 2940 "project/radare2/libr/asm/arch/arm/armass.c"
       coreg1 = getcoprocreg (ao->a[3]);
   
# 2941 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 2941 "project/radare2/libr/asm/arch/arm/armass.c"
       coreg2 = getcoprocreg (ao->a[4]);
   
# 2942 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 2942 "project/radare2/libr/asm/arch/arm/armass.c"
       opc2 = getnum (ao->a[5]);

   if ((coproc > 15) || (opc1 > 7) || (reg1 > 15) || (coreg1 > 15) || (coreg2 > 15) || (opc2 > 7) || (m & R_BIT)) {
    return -1;
   }

   ao->o = 0x00ee1000;
   if (m & TWO_BIT) {
    ao->o |= 1 << 20;
   }
   ao->o |= coproc;
   ao->o |= opc1 << 29;
   ao->o |= reg1 << 4;
   ao->o |= coreg1 << 24;
   ao->o |= coreg2 << 8;
   ao->o |= opc2 << 13;
   return 4;
   }
   break;
  case 0x51124: {
   
# 2962 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 2962 "project/radare2/libr/asm/arch/arm/armass.c"
       coproc = getcoproc (ao->a[0]);
   
# 2963 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 2963 "project/radare2/libr/asm/arch/arm/armass.c"
       opc = getnum (ao->a[1]);
   
# 2964 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 2964 "project/radare2/libr/asm/arch/arm/armass.c"
       reg1 = getreg (ao->a[2]);
   
# 2965 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 2965 "project/radare2/libr/asm/arch/arm/armass.c"
       reg2 = getreg (ao->a[3]);
   
# 2966 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 2966 "project/radare2/libr/asm/arch/arm/armass.c"
       coreg = getcoprocreg (ao->a[4]);

   if ((coproc > 15) || (opc > 15) || (reg1 > 15) || (reg2 > 15) || (coreg > 15) || (!(m & R_BIT))) {
    return -1;
   }

   ao->o = 0x40ec0000;
   if (m & TWO_BIT) {
    ao->o |= 1 << 20;
   }
   ao->o |= coproc;
   ao->o |= opc << 12;
   ao->o |= reg1 << 4;
   ao->o |= reg2 << 24;
   ao->o |= coreg << 8;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "mla", 0))) {
  
# 2989 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 2989 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x1111: {
   
# 2992 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 2992 "project/radare2/libr/asm/arch/arm/armass.c"
       reg4 = getreg (ao->a[3]);
   if (reg4 > 15) {
    return -1;
   }
   ao->o = 0x00fb0000;
   ao->o |= reg4 << 4;

   return std_32bit_3reg (ao, m, 
# 2999 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 2999 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "mls", 0))) {
  
# 3007 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3007 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x1111: {
   
# 3010 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3010 "project/radare2/libr/asm/arch/arm/armass.c"
       reg4 = getreg (ao->a[3]);
   if (reg4 > 15) {
    return -1;
   }
   ao->o = 0x00fb1000;
   ao->o |= reg4 << 4;

   return std_32bit_3reg (ao, m, 
# 3017 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 3017 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "mov", S_BIT | W_BIT | T_BIT))) {
  
# 3025 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3025 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x21: {
   
# 3028 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3028 "project/radare2/libr/asm/arch/arm/armass.c"
       reg1 = getreg (ao->a[0]);
   err = 
# 3029 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
        0
# 3029 "project/radare2/libr/asm/arch/arm/armass.c"
             ;
   
# 3030 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3030 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnum (ao->a[1]);

   if (reg1 > 15) {
    return -1;
   }

   if ((m & W_BIT) || (m & T_BIT)) {
    
# 3037 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
   unsigned int 
# 3037 "project/radare2/libr/asm/arch/arm/armass.c"
        wnum = getnum (ao->a[1]);
    if (wnum > 65535) {
     return -1;
    }
    ao->o = 0x40f20000;
    if (m & T_BIT) {
     ao->o |= 1 << 31;
    }
    ao->o |= reg1;
    ao->o |= getthzeroimmed16 (wnum);
    return 4;
   }

   if (err) {
    return -1;
   }

   if ((num < 256) && (reg1 < 8) && (!(m & DOTW_BIT))) {
    ao->o = 0x0020;
    ao->o |= reg1;
    ao->o |= num << 8;
    return 2;
   }

   ao->o = 0x4ff00000;
   ao->o |= reg1;
   ao->o |= getthimmed12 (ao->a[1]);
   if (m & S_BIT) {
    ao->o |= 1 << 28;
   }
   return 4;
   }
   break;
  case 0x11: {
   
# 3071 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3071 "project/radare2/libr/asm/arch/arm/armass.c"
       reg1 = getreg (ao->a[0]);
   
# 3072 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3072 "project/radare2/libr/asm/arch/arm/armass.c"
       reg2 = getreg (ao->a[1]);

   if ((reg1 > 15) || (reg2 > 15)) {
    return -1;
   }

   if ((!(m & S_BIT)) && (!(m & DOTW_BIT))) {
    ao->o = 0x0046;
    ao->o |= (reg1 & 0x7) << 8;
    ao->o |= (reg1 & 0x8) << 12;
    ao->o |= reg2 << 11;
    return 2;
   }

   if ((reg1 < 8) && (reg2 < 8) && (!(m & DOTW_BIT))) {
    ao->o = 0;
    ao->o |= reg1 << 8;
    ao->o |= reg2 << 11;
    return 2;
   }

   ao->o = 0x4fea0000;
   ao->o |= reg1;
   ao->o |= reg2 << 8;
   if (m & S_BIT) {
    ao->o |= 1 << 28;
   }
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "mrc", TWO_BIT))) {
  
# 3107 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3107 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x55124: {
   ao->a[5] = "0";
   }

  case 0x255124: {
   
# 3114 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3114 "project/radare2/libr/asm/arch/arm/armass.c"
       coproc = getcoproc (ao->a[0]);
   
# 3115 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3115 "project/radare2/libr/asm/arch/arm/armass.c"
       opc1 = getnum (ao->a[1]);
   
# 3116 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3116 "project/radare2/libr/asm/arch/arm/armass.c"
       reg1 = getreg (ao->a[2]);
   
# 3117 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3117 "project/radare2/libr/asm/arch/arm/armass.c"
       coreg1 = getcoprocreg (ao->a[3]);
   
# 3118 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3118 "project/radare2/libr/asm/arch/arm/armass.c"
       coreg2 = getcoprocreg (ao->a[4]);
   
# 3119 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3119 "project/radare2/libr/asm/arch/arm/armass.c"
       opc2 = getnum (ao->a[5]);

   if ((coproc > 15) || (opc1 > 7) || (reg1 > 15) || (coreg1 > 15) || (coreg2 > 15) || (opc2 > 7)) {
    return -1;
   }

   ao->o = 0x10ee1000;
   if (m & TWO_BIT) {
    ao->o |= 1 << 20;
   }
   ao->o |= coproc;
   ao->o |= opc1 << 29;
   ao->o |= reg1 << 4;
   ao->o |= coreg1 << 24;
   ao->o |= coreg2 << 8;
   ao->o |= opc2 << 13;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "mrrc", TWO_BIT))) {
  
# 3143 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3143 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x51124: {
   
# 3146 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3146 "project/radare2/libr/asm/arch/arm/armass.c"
       coproc = getcoproc (ao->a[0]);
   
# 3147 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3147 "project/radare2/libr/asm/arch/arm/armass.c"
       opc = getnum (ao->a[1]);
   
# 3148 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3148 "project/radare2/libr/asm/arch/arm/armass.c"
       reg1 = getreg (ao->a[2]);
   
# 3149 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3149 "project/radare2/libr/asm/arch/arm/armass.c"
       reg2 = getreg (ao->a[3]);
   
# 3150 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3150 "project/radare2/libr/asm/arch/arm/armass.c"
       coreg = getcoprocreg (ao->a[4]);

   if ((coproc > 15) || (opc > 15) || (reg1 > 15) || (reg2 > 15) || (coreg > 15)) {
    return -1;
   }

   ao->o = 0x50ec0000;
   if (m & TWO_BIT) {
    ao->o |= 1 << 20;
   }
   ao->o |= coproc;
   ao->o |= opc << 12;
   ao->o |= reg1 << 4;
   ao->o |= reg2 << 24;
   ao->o |= coreg << 8;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "mrs", 0))) {
  
# 3173 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3173 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0xf1: {
   
# 3176 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3176 "project/radare2/libr/asm/arch/arm/armass.c"
       reg1 = getreg (ao->a[0]);
   r_str_case (ao->a[1], 
# 3177 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                        0
# 3177 "project/radare2/libr/asm/arch/arm/armass.c"
                             );

   if (reg1 > 15) {
    return -1;
   }

   if ((!strcmp(ao->a[1], "cpsr")) || (!strcmp(ao->a[1], "apsr"))) {
    ao->o = 0xeff30080;
    ao->o |= reg1;
    return 4;
   }

   if (!strcmp(ao->a[1], "spsr")) {
    ao->o = 0xfff30080;
    ao->o |= reg1;
    return 4;
   }

   return -1;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "msr", 0))) {
  
# 3203 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3203 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x1f: {
   r_str_case (ao->a[0], 
# 3206 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                        0
# 3206 "project/radare2/libr/asm/arch/arm/armass.c"
                             );
   
# 3207 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 3207 "project/radare2/libr/asm/arch/arm/armass.c"
      spsr = 0;
   
# 3208 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 3208 "project/radare2/libr/asm/arch/arm/armass.c"
      bank = interpret_msrbank (ao->a[0], &spsr);
   
# 3209 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3209 "project/radare2/libr/asm/arch/arm/armass.c"
       reg1 = getreg (ao->a[1]);

   if ((bank == 0) || (reg1 > 15)) {
    return -1;
   }

   ao->o = 0x80f30080;
   ao->o |= reg1 << 24;
   ao->o |= bank;
   if (spsr != 0) {
    ao->o |= 1 << 28;
   }
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "mul", 0))) {
  
# 3229 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3229 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   
# 3236 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 3236 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 3237 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 3237 "project/radare2/libr/asm/arch/arm/armass.c"
      reg3 = getreg (ao->a[2]);

   ao->o = 0x4043;
   if ((reg1 == reg3) && (std_16bit_2reg (ao, m))) {
    return 2;
   }

   ao->o = 0x00fb00f0;
   return std_32bit_3reg (ao, m, 
# 3245 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 3245 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "mvn", S_BIT))) {
  
# 3253 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3253 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x21: {
   
# 3256 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 3256 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   err = 
# 3257 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
        0
# 3257 "project/radare2/libr/asm/arch/arm/armass.c"
             ;
   
# 3258 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3258 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getthimmed12 (ao->a[1]);

   if ((reg1 > 15) || err) {
    return -1;
   }

   ao->o = 0x6ff00000;
   ao->o |= reg1;
   ao->o |= num;
   if (m & S_BIT) {
    ao->o |= 1 << 28;
   }
   return 4;
   }
   break;
  case 0x11: {
   ao->a[2] = "lsl 0";
   }

  case 0x311: {
   
# 3278 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 3278 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 3279 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 3279 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 3280 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3280 "project/radare2/libr/asm/arch/arm/armass.c"
       shift = thumb_getshift (ao->a[2]);

   if ((reg1 > 15) || (reg2 > 15)) {
    return -1;
   }

   ao->o = 0xc043;
   if ((shift == 0) && (std_16bit_2reg (ao, m))) {
    return 2;
   }

   ao->o = 0x6fea0000;
   ao->o |= reg1;
   ao->o |= reg2 << 8;
   ao->o |= shift;
   if (m & S_BIT) {
    ao->o |= 1 << 28;
   }
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "nop", 0))) {
  
# 3306 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3306 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x0: {
   if (m & DOTW_BIT) {
    ao->o = 0xaff30080;
    return 4;
   }
   ao->o = 0x00bf;
   return 2;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "orn", S_BIT))) {
  
# 3322 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3322 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x21: {
   std_opt_2 (ao);
   }

  case 0x211: {
   err = 
# 3329 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
        0
# 3329 "project/radare2/libr/asm/arch/arm/armass.c"
             ;
   
# 3330 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3330 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getthimmed12 (ao->a[2]);

   if (err) {
    return -1;
   }

   ao->o = 0x60f00000;
   ao->o |= num;
   return (std_32bit_2reg (ao, m, 
# 3338 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                 0
# 3338 "project/radare2/libr/asm/arch/arm/armass.c"
                                      ));
   }
   break;
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->a[3] = "lsl 0";
   }

  case 0x311: {
   if (ao->a[3] == 
# 3350 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                  ((void *)0)
# 3350 "project/radare2/libr/asm/arch/arm/armass.c"
                      ) {
    std_opt_3 (ao);
   }
   }

  case 0x3111: {
   ao->o = 0x60ea0000;
   return std_32bit_3reg (ao, m, 
# 3357 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                1
# 3357 "project/radare2/libr/asm/arch/arm/armass.c"
                                    );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "orr", S_BIT))) {
  
# 3365 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3365 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x21: {
   std_opt_2 (ao);
   }

  case 0x211: {
   err = 
# 3372 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
        0
# 3372 "project/radare2/libr/asm/arch/arm/armass.c"
             ;
   
# 3373 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3373 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getthimmed12 (ao->a[2]);

   if (err) {
    return -1;
   }

   ao->o = 0x40f00000;
   ao->o |= num;
   return std_32bit_2reg (ao, m, 
# 3381 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 3381 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  case 0x11: {
   ao->o = 0x0043;
   if (std_16bit_2reg (ao, m)) {
    return 2;
   }
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->a[3] = "lsl 0";
   }

  case 0x311: {
   if (ao->a[3] == 
# 3397 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                  ((void *)0)
# 3397 "project/radare2/libr/asm/arch/arm/armass.c"
                      ) {
    std_opt_3 (ao);
   }
   }

  case 0x3111: {
   ao->o = 0x40ea0000;
   return (std_32bit_3reg (ao, m, 
# 3404 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                 1
# 3404 "project/radare2/libr/asm/arch/arm/armass.c"
                                     ));
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "pkh", BT_BIT | TB_BIT))) {
  
# 3412 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3412 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   if (m & TB_BIT) {
    ao->a[3] = "asr 0";
   } else
   if (m & BT_BIT) {
    ao->a[3] = "lsl 0";
   } else {
    return -1;
   }
   }

  case 0x311: {
   if (ao->a[3] == 
# 3430 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                  ((void *)0)
# 3430 "project/radare2/libr/asm/arch/arm/armass.c"
                      ) {
    std_opt_3 (ao);
   }
   }

  case 0x3111: {
   
# 3436 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3436 "project/radare2/libr/asm/arch/arm/armass.c"
       shift = thumb_getshift (ao->a[3]);

   if (((m & TB_BIT) && ((shift & 0x00003000) != 0x00002000)) || ((m & BT_BIT) && ((shift & 0x00003000) != 0)) || ((m & (TB_BIT | BT_BIT)) == 0)) {
    return -1;
   }

   ao->o = 0xc0ea0000;
   return (std_32bit_3reg (ao, m, 
# 3443 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                 1
# 3443 "project/radare2/libr/asm/arch/arm/armass.c"
                                     ));
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "pld", 0))) {
  
# 3451 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3451 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x86: {
   
# 3454 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 3454 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getregmemstart (ao->a[0]);
   
# 3455 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 3455 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnummemend (ao->a[1]);

   if (reg1 == 15) {
    if ((num < -4095) || (num > 4095)) {
     return -1;
    }
    ao->o = 0x1ff800f0;
    if (num > 0) {
     ao->o |= 1 << 31;
    } else {
     num = -num;
    }
    ao->o |= (num & 0x0ff) << 8;
    ao->o |= (num & 0xf00) >> 8;
    return 4;
   }

   if ((reg1 > 15) || (num < -255) || (num > 4095)) {
    return -1;
   }

   if (num > 0) {
    ao->o = 0x90f800f0;
    ao->o |= (num & 0x0ff) << 8;
    ao->o |= (num & 0xf00) >> 8;
    ao->o |= reg1 << 24;
    return 4;
   }
   num = -num;
   ao->o = 0x10f800fc;
   ao->o |= num << 8;
   ao->o |= reg1 << 24;
   return 4;
   }
   break;
  case 0xc6: {
   ao->a[1][strlen (ao->a[1]) - 1] = '\0';
   ao->a[2] = "lsl 0]";
   }

  case 0xd16: {
   
# 3496 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 3496 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getregmemstart (ao->a[0]);
   
# 3497 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 3497 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 3498 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3498 "project/radare2/libr/asm/arch/arm/armass.c"
       shift = getshiftmemend (ao->a[2]) >> 2;

   if ((reg1 > 15) || (reg2 > 15) || ((shift & 0xffffcfff) != 0)) {
    return -1;
   }

   ao->o = 0x10f800f0;
   ao->o |= reg1 << 24;
   ao->o |= reg2 << 8;
   ao->o |= shift;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "pli", 0))) {
  
# 3516 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3516 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x86: {
   
# 3519 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 3519 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getregmemstart (ao->a[0]);
   
# 3520 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 3520 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnummemend (ao->a[1]);

   if (reg1 == 15) {
    if ((num < -4095) || (num > 4095)) {
     return -1;
    }
    ao->o = 0x1ff900f0;
    if (num > 0) {
     ao->o |= 1 << 31;
    } else {
     num = -num;
    }
    ao->o |= (num & 0x0ff) << 8;
    ao->o |= (num & 0xf00) >> 8;
    return 4;
   }

   if ((reg1 > 15) || (num < -255) || (num > 4095)) {
    return -1;
   }

   if (num > 0) {
    ao->o = 0x90f900f0;
    ao->o |= (num & 0x0ff) << 8;
    ao->o |= (num & 0xf00) >> 8;
    ao->o |= reg1 << 24;
    return 4;
   }
   num = -num;
   ao->o = 0x10f900fc;
   ao->o |= num << 8;
   ao->o |= reg1 << 24;
   return 4;
   }
   break;
  case 0xc6: {
   ao->a[1][strlen (ao->a[1]) -1] = '\0';
   ao->a[2] = "lsl 0]";
   }

  case 0xd16: {
   
# 3561 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 3561 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getregmemstart (ao->a[0]);
   
# 3562 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 3562 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 3563 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3563 "project/radare2/libr/asm/arch/arm/armass.c"
       shift = getshiftmemend (ao->a[2]) >> 2;

   if ((reg1 > 15) || (reg2 > 15) || ((shift & 0xffffcfff) != 0)) {
    return -1;
   }

   ao->o = 0x10f900f0;
   ao->o |= reg1 << 24;
   ao->o |= reg2 << 8;
   ao->o |= shift;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "pop", 0))) {
  
# 3581 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3581 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0xb: {
   
# 3584 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 3584 "project/radare2/libr/asm/arch/arm/armass.c"
       list = getreglist (ao->a[0]);
   if ((list <= 0) || ((list & (1 << 13)) != 0)) {
    return -1;
   }
   if ((!(m & DOTW_BIT)) && ((list & 0x00007f00) == 0)) {
    ao->o = 0x00bc;
    ao->o |= (list & 0x8000) >> 15;
    ao->o |= (list & 0xff) << 8;
    return 2;
   }
   ao->o = 0xbde80000;
   ao->o |= (list & 0xff00) >> 8;
   ao->o |= (list & 0xff) << 8;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "push", 0))) {
  
# 3605 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3605 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0xb: {
   
# 3608 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 3608 "project/radare2/libr/asm/arch/arm/armass.c"
       list = getreglist (ao->a[0]);
   if ((list <= 0) || ((list & 0x0000a000) != 0)) {
    return -1;
   }
   if ((!(m & DOTW_BIT)) && ((list & 0x00001f00) == 0)) {
    ao->o = 0x00b4;
    ao->o |= (list & 0x4000) >> 14;
    ao->o |= (list & 0xff) << 8;
    return 2;
   }
   ao->o = 0x2de90000;
   ao->o |= (list & 0xff00) >> 8;
   ao->o |= (list & 0xff) << 8;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "qadd", EIGHT_BIT | SIXTEEN_BIT))) {
  
# 3629 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3629 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   if (m & SIXTEEN_BIT) {
    ao->o = 0x90fa10f0;
   } else
   if (m & EIGHT_BIT) {
    ao->o = 0x80fa10f0;
   } else {
    ao->o = 0x80fa80f0;
   }

   return std_32bit_3reg (ao, m, 
# 3645 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 3645 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "qasx", 0))) {
  
# 3653 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3653 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0xa0fa10f0;
   return std_32bit_3reg (ao, m, 
# 3661 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 3661 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "qdadd", 0))) {
  
# 3669 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3669 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0x80fa90f0;
   return std_32bit_3reg (ao, m, 
# 3677 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 3677 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "qdsub", 0))) {
  
# 3685 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3685 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0x80fab0f0;
   return std_32bit_3reg (ao, m, 
# 3693 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 3693 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "qsax", 0))) {
  
# 3701 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3701 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0xe0fa10f0;
   return std_32bit_3reg (ao, m, 
# 3709 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 3709 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "qsub", EIGHT_BIT | SIXTEEN_BIT))) {
  
# 3717 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3717 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   if (m & SIXTEEN_BIT) {
    ao->o = 0xd0fa10f0;
   } else
   if (m & EIGHT_BIT) {
    ao->o = 0xc0fa10f0;
   } else {
    ao->o = 0x80faa0f0;
   }
   return std_32bit_3reg (ao, m, 
# 3732 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 3732 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "rbit", 0))) {
  
# 3740 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3740 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   ao->a[2] = ao->a[1];
   ao->o = 0x90faa0f0;
   return std_32bit_3reg (ao, m, 
# 3745 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 3745 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "rev", SIXTEEN_BIT | SH_BIT))) {
  
# 3753 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3753 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   if (m & SIXTEEN_BIT) {
    ao->o = 0x40ba;
   } else
   if (m & SH_BIT) {
    ao->o = 0xc0ba;
   } else {
    ao->o = 0x00ba;
   }

   if (std_16bit_2reg (ao, m)) {
    return 2;
   }

   if (m & SIXTEEN_BIT) {
    ao->o = 0x90fa90f0;
   } else
   if (m & SH_BIT) {
    ao->o = 0x90fab0f0;
   } else {
    ao->o = 0x90fa80f0;
   }
   ao->a[2] = ao->a[1];
   return std_32bit_3reg (ao, m, 
# 3778 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 3778 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "rfe", IA_BIT | FD_BIT | DB_BIT | EA_BIT))) {
  
# 3786 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3786 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  
# 3787 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned int 
# 3787 "project/radare2/libr/asm/arch/arm/armass.c"
      wb = 0;
  switch (argt) {
  case 0xa: {
   ao->a[0][strlen (ao->a[0]) - 1] = '\0';
   wb = 0x20000000;
   }

  case 0x1: {
   
# 3795 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 3795 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);

   if (reg1 > 15) {
    return -1;
   }

   if ((m & DB_BIT) || (m & EA_BIT)) {
    ao->o = 0x10e800c0;
   } else {
    ao->o = 0x90e900c0;
   }

   ao->o |= reg1 << 24;
   ao->o |= wb;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "ror", S_BIT))) {
  
# 3817 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3817 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x211: {
   
# 3820 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 3820 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 3821 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 3821 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 3822 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3822 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnum (ao->a[2]);

   if ((reg1 > 15) || (reg2 > 15) || (num > 31) || (num < 1)) {
    return -1;
   }

   ao->o = 0x4fea3000;
   ao->o |= reg1;
   ao->o |= reg2 << 8;
   ao->o |= (num & 0x3) << 14;
   ao->o |= (num & 0x1c) << 2;
   if (m & S_BIT) {
    ao->o |= 1 << 28;
   }
   return 4;
   }
   break;
  case 0x11: {
   ao->o = 0xc041;
   if (std_16bit_2reg (ao, m)) {
    return 2;
   }
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0x60fa00f0;
   return (std_32bit_3reg (ao, m, 
# 3849 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                 0
# 3849 "project/radare2/libr/asm/arch/arm/armass.c"
                                      ));
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "rrx", S_BIT))) {
  
# 3857 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3857 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   
# 3860 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 3860 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 3861 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 3861 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);

   if ((reg1 > 15) || (reg2 > 15)) {
    return -1;
   }

   ao->o = 0x4fea3000;
   ao->o |= reg1;
   ao->o |= reg2 << 8;
   if (m & S_BIT) {
    ao->o |= 1 << 28;
   }
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "rsb", S_BIT))) {
  
# 3881 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3881 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x21: {
   std_opt_2 (ao);
   }

  case 0x211: {
   err = 
# 3888 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
        0
# 3888 "project/radare2/libr/asm/arch/arm/armass.c"
             ;
   
# 3889 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 3889 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getthimmed12 (ao->a[2]);

   if (err) {
    return -1;
   }

   ao->o = 0x4042;
   if ((num == 0) && std_16bit_2reg (ao, m)) {
    return 2;
   }

   ao->o = 0xc0f10000;
   ao->o |= num;
   return (std_32bit_2reg (ao, m, 
# 3902 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                 0
# 3902 "project/radare2/libr/asm/arch/arm/armass.c"
                                      ));
   }
   break;
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->a[3] = "lsl 0";
   }

  case 0x311: {
   if (ao->a[3] == 
# 3914 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                  ((void *)0)
# 3914 "project/radare2/libr/asm/arch/arm/armass.c"
                      ) {
    std_opt_3 (ao);
   }
   }

  case 0x3111: {
   ao->o = 0xc0eb0000;
   return (std_32bit_3reg (ao, m, 
# 3921 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                 1
# 3921 "project/radare2/libr/asm/arch/arm/armass.c"
                                     ));
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "sadd", EIGHT_BIT | SIXTEEN_BIT))) {
  
# 3929 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3929 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   if (m & SIXTEEN_BIT) {
    ao->o = 0x90fa00f0;
   } else
   if (m & EIGHT_BIT) {
    ao->o = 0x80fa00f0;
   } else {
    return -1;
   }
   return std_32bit_3reg (ao, m, 
# 3944 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 3944 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "sasx", 0))) {
  
# 3952 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3952 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0xa0fa00f0;
   return std_32bit_3reg (ao, m, 
# 3960 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 3960 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "sbc", S_BIT))) {
  
# 3968 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 3968 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   ao->o = 0x8041;
   if (std_16bit_2reg (ao, m)) {
    return 2;
   }
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->a[3] = "lsl 0";
   }

  case 0x311: {
   if (ao->a[3] == 
# 3983 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                  ((void *)0)
# 3983 "project/radare2/libr/asm/arch/arm/armass.c"
                      ) {
    std_opt_3 (ao);
   }
   }

  case 0x3111: {
   ao->o = 0x60eb0000;
   return std_32bit_3reg (ao, m, 
# 3990 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                1
# 3990 "project/radare2/libr/asm/arch/arm/armass.c"
                                    );
   }
   break;
  case 0x21: {
   std_opt_2 (ao);
   }

  case 0x211: {
   ao->o = 0x60f10000;
   err = 
# 3999 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
        0
# 3999 "project/radare2/libr/asm/arch/arm/armass.c"
             ;
   
# 4000 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 4000 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getthimmed12 (ao->a[2]);

   if (err) {
    return -1;
   }
   ao->o |= num;

   return std_32bit_2reg (ao, m, 
# 4007 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 4007 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if (( m = opmask (ao->op, "sbfx", 0) )) {
  
# 4015 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4015 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x2211: {
   
# 4018 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 4018 "project/radare2/libr/asm/arch/arm/armass.c"
       lsb = getnum (ao->a[2]);
   
# 4019 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 4019 "project/radare2/libr/asm/arch/arm/armass.c"
       width = getnum (ao->a[3]);
   
# 4020 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 4020 "project/radare2/libr/asm/arch/arm/armass.c"
       msb = lsb + width - 1;
   if ((lsb > 31) || (msb > 31)) {
    return -1;
   }
   ao->o = 0x40f30000;
   ao->o |= ((lsb & 0x1c) << 2);
   ao->o |= ((lsb & 0x3) << 14);
   ao->o |= ((width - 1) << 8);
   return std_32bit_2reg (ao, m, 
# 4028 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 4028 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "sdiv", 0))) {
  
# 4036 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4036 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0x90fbf0f0;
   return std_32bit_3reg (ao, m, 
# 4044 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 4044 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "sel", 0))) {
  
# 4052 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4052 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0xa0fa80f0;
   return std_32bit_3reg (ao, m, 
# 4060 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 4060 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "setend", 0))) {
  
# 4068 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4068 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0xf: {
   r_str_case (ao->a[0], 
# 4071 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                        0
# 4071 "project/radare2/libr/asm/arch/arm/armass.c"
                             );
   ao->o = 0x50b6;
   if (!(strcmpnull (ao->a[0], "be"))) {
    ao->o |= 1 << 11;
    return 2;
   } else
   if (!(strcmpnull (ao->a[0], "le"))) {
    return 2;
   } else {
    return -1;
   }
   break;
   }
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "sev", 0))) {
  
# 4089 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4089 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x0:
   if (m & DOTW_BIT) {
    ao->o = 0xaff30480;
    return 4;
   } else {
    ao->o = 0x40bf;
    return 2;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "shadd", EIGHT_BIT | SIXTEEN_BIT ))) {
  
# 4105 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4105 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   if (m & SIXTEEN_BIT) {
    ao->o = 0x90fa20f0;
   } else
   if (m & EIGHT_BIT) {
    ao->o = 0x80fa20f0;
   } else {
    return -1;
   }
   return std_32bit_3reg (ao, m, 
# 4120 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 4120 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "shasx", 0))) {
  
# 4128 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4128 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0xa0fa20f0;
   return std_32bit_3reg (ao, m, 
# 4136 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 4136 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "shsax", 0))) {
  
# 4144 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4144 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0xe0fa20f0;
   return std_32bit_3reg (ao, m, 
# 4152 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 4152 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "shsub", EIGHT_BIT | SIXTEEN_BIT))) {
  
# 4160 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4160 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   if (m & SIXTEEN_BIT) {
    ao->o = 0xd0fa20f0;
   } else
   if (m & EIGHT_BIT) {
    ao->o = 0xc0fa20f0;
   } else {
    return -1;
   }
   return std_32bit_3reg (ao, m, 
# 4175 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 4175 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "smc", 0))) {
  
# 4183 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4183 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x2: {
   err = 
# 4186 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
        0
# 4186 "project/radare2/libr/asm/arch/arm/armass.c"
             ;
   
# 4187 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 4187 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnum (ao->a[0]);

   if (err || (num > 15)) {
    return -1;
   }

   ao->o = 0xf0f70080;
   ao->o |= num << 24;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "smla", BB_BIT | BT_BIT | TB_BIT | TT_BIT | WB_BIT | WT_BIT | L_BIT | D_BIT | X_BIT))) {
  
# 4203 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4203 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x1111: {
   
# 4206 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4206 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 4207 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4207 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 4208 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4208 "project/radare2/libr/asm/arch/arm/armass.c"
      reg3 = getreg (ao->a[2]);
   
# 4209 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4209 "project/radare2/libr/asm/arch/arm/armass.c"
      reg4 = getreg (ao->a[3]);

   if ((reg1 > 15) || (reg2 > 15) || (reg3 > 15) || (reg4 > 15) || (m & DOTN_BIT)) {
    return -1;
   }
   if (m & L_BIT) {
    if (m & BB_BIT) {
     ao->o = 0xc0fb8000;
    } else
    if (m & BT_BIT) {
     ao->o = 0xc0fb9000;
    } else
    if (m & TB_BIT) {
     ao->o = 0xc0fba000;
    } else
    if (m & TT_BIT) {
     ao->o = 0xc0fbb000;
    } else
    if (m & D_BIT) {
     ao->o = 0xc0fbc000;
     if (m & X_BIT) {
      ao->o |= 1 << 12;
     }
    } else {
     ao->o = 0xc0fb0000;
    }
    ao->o |= reg1 << 4;
    ao->o |= reg2;
    ao->o |= reg3 << 24;
    ao->o |= reg4 << 8;
    return 4;
   }
   if (m & BB_BIT) {
    ao->o = 0x10fb0000;
    ao->o |= reg4 << 4;
    return std_32bit_3reg (ao, m, 
# 4244 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                 0
# 4244 "project/radare2/libr/asm/arch/arm/armass.c"
                                      );
   }
   if (m & BT_BIT) {
    ao->o = 0x10fb1000;
    ao->o |= reg4 << 4;
    return std_32bit_3reg (ao, m, 
# 4249 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                 0
# 4249 "project/radare2/libr/asm/arch/arm/armass.c"
                                      );
   }
   if (m & TB_BIT) {
    ao->o = 0x10fb2000;
    ao->o |= reg4 << 4;
    return std_32bit_3reg (ao, m, 
# 4254 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                 0
# 4254 "project/radare2/libr/asm/arch/arm/armass.c"
                                      );
   }
   if (m & TT_BIT) {
    ao->o = 0x10fb3000;
    ao->o |= reg4 << 4;
    return std_32bit_3reg (ao, m, 
# 4259 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                 0
# 4259 "project/radare2/libr/asm/arch/arm/armass.c"
                                      );
   }
   if (m & D_BIT) {
    ao->o = 0x20fb0000;
    if (m & X_BIT) {
     ao->o |= 1 << 12;
    }
    ao->o |= reg4 << 4;
    return std_32bit_3reg (ao, m, 
# 4267 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                 0
# 4267 "project/radare2/libr/asm/arch/arm/armass.c"
                                      );
   }
   if (m & WB_BIT) {
    ao->o = 0x30fb0000;
    ao->o |= reg4 << 4;
    return std_32bit_3reg (ao, m, 
# 4272 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                 0
# 4272 "project/radare2/libr/asm/arch/arm/armass.c"
                                      );
   }
   if (m & WT_BIT) {
    ao->o = 0x30fb1000;
    ao->o |= reg4 << 4;
    return std_32bit_3reg (ao, m, 
# 4277 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                 0
# 4277 "project/radare2/libr/asm/arch/arm/armass.c"
                                      );
   }
   return -1;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "smlsd", X_BIT))) {
  
# 4287 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4287 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x1111: {
   
# 4290 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4290 "project/radare2/libr/asm/arch/arm/armass.c"
      reg4 = getreg (ao->a[3]);

   if (reg4 > 15) {
    return -1;
   }
   ao->o = 0x40fb0000;
   if (m & X_BIT) {
    ao->o |= 1 << 12;
   }
   ao->o |= reg4 << 4;
   return std_32bit_3reg (ao, m, 
# 4300 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 4300 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "smlsld", X_BIT))) {
  
# 4308 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4308 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x1111: {
   
# 4311 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4311 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 4312 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4312 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 4313 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4313 "project/radare2/libr/asm/arch/arm/armass.c"
      reg3 = getreg (ao->a[2]);
   
# 4314 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4314 "project/radare2/libr/asm/arch/arm/armass.c"
      reg4 = getreg (ao->a[3]);

   if ((reg1 > 15) || (reg2 > 15) || (reg3 > 15) || (reg4 > 15) || (m & DOTN_BIT)) {
    return -1;
   }
   ao->o = 0xd0fbc000;

   if (m & X_BIT) {
    ao->o |= 1 << 12;
   }

   ao->o |= reg1 << 4;
   ao->o |= reg2;
   ao->o |= reg3 << 24;
   ao->o |= reg4 << 8;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "smmla", R_BIT))) {
  
# 4337 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4337 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x1111: {
   
# 4340 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4340 "project/radare2/libr/asm/arch/arm/armass.c"
      reg4 = getreg (ao->a[3]);

   if (reg4 > 15) {
    return -1;
   }
   ao->o = 0x50fb0000;
   if (m & R_BIT) {
    ao->o |= 1 << 12;
   }
   ao->o |= reg4 << 4;
   return std_32bit_3reg (ao, m, 
# 4350 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 4350 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "smmls", R_BIT))) {
  
# 4358 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4358 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x1111: {
   
# 4361 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4361 "project/radare2/libr/asm/arch/arm/armass.c"
      reg4 = getreg (ao->a[3]);

   if (reg4 > 15) {
    return -1;
   }
   ao->o = 0x60fb0000;
   if (m & R_BIT) {
    ao->o |= 1 << 12;
   }
   ao->o |= reg4 << 4;
   return std_32bit_3reg (ao, m, 
# 4371 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 4371 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "smmul", R_BIT))) {
  
# 4379 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4379 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0x50fb00f0;
   if (m & R_BIT) {
    ao->o |= 1 << 12;
   }
   return std_32bit_3reg (ao, m, 
# 4390 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 4390 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "smuad", X_BIT))) {
  
# 4398 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4398 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0x20fb00f0;
   if (m & X_BIT) {
    ao->o |= 1 << 12;
   }
   return std_32bit_3reg (ao, m, 
# 4409 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 4409 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "smul", BB_BIT | BT_BIT | TB_BIT | TT_BIT | WB_BIT | WT_BIT | L_BIT))) {
  
# 4417 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4417 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   if (m & BB_BIT) {
    ao->o = 0x10fb00f0;
   } else
   if (m & BT_BIT) {
    ao->o = 0x10fb10f0;
   } else
   if (m & TB_BIT) {
    ao->o = 0x10fb20f0;
   } else
   if (m & TT_BIT) {
    ao->o = 0x10fb30f0;
   } else
   if (m & WB_BIT) {
    ao->o = 0x30fb00f0;
   } else
   if (m & WT_BIT) {
    ao->o = 0x30fb10f0;
   } else {
    return -1;
   }
   return std_32bit_3reg (ao, m, 
# 4444 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 4444 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  case 0x1111: {
   
# 4448 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4448 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 4449 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4449 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 4450 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4450 "project/radare2/libr/asm/arch/arm/armass.c"
      reg3 = getreg (ao->a[2]);
   
# 4451 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4451 "project/radare2/libr/asm/arch/arm/armass.c"
      reg4 = getreg (ao->a[3]);

   if ((reg1 > 15) || (reg2 > 15) || (reg3 > 15) || (reg4 > 15) || (m & DOTN_BIT) || (!(m & L_BIT))) {
    return -1;
   }

   ao->o = 0x80fb0000;
   ao->o |= reg1 << 4;
   ao->o |= reg2;
   ao->o |= reg3 << 24;
   ao->o |= reg4 << 8;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "smusd", X_BIT))) {
  
# 4470 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4470 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0x40fb00f0;
   if (m & X_BIT) {
    ao->o |= 1 << 12;
   }
   return std_32bit_3reg (ao, m, 
# 4481 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 4481 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "srs", DB_BIT | FD_BIT | IA_BIT | EA_BIT))) {
  
# 4489 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned int 
# 4489 "project/radare2/libr/asm/arch/arm/armass.c"
      w = 0;
  
# 4490 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4490 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0xe: {
   ao->a[0][strlen (ao->a[0]) - 1] = '\0';
   w = 1;
   }

  case 0x2: {
   
# 4498 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 4498 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnum (ao->a[0]);
   if (num > 31) {
    return -1;
   }
   if ((m & DB_BIT) || (m & FD_BIT)) {
    ao->o = 0x0de800c0;
   } else {
    ao->o = 0x8de900c0;
   }
   ao->o |= num << 8;
   ao->o |= w << 29;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "ssat", SIXTEEN_BIT))) {
  
# 4517 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4517 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x121: {
   ao->a[3] = "lsl 0";
   }

  case 0x3121: {
   
# 4524 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4524 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 4525 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 4525 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnum (ao->a[1]) - 1;
   
# 4526 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4526 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[2]);
   
# 4527 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 4527 "project/radare2/libr/asm/arch/arm/armass.c"
       shift = thumb_getshift (ao->a[3]);

   if (err || (reg1 > 15) || (reg2 > 15) || (num > 31) || (shift & 0x00001000) || ((m & SIXTEEN_BIT) && shift)) {
    return -1;
   }

   if (shift & 0x00002000) {
    shift |= 0x20000000;
    shift &= 0xffffdfff;
   }

   if (m & SIXTEEN_BIT) {
    ao->o = 0x20f30000;
   } else {
    ao->o = 0x00f30000;
   }

   ao->o |= reg1;
   ao->o |= reg2 << 24;
   ao->o |= num << 8;
   ao->o |= shift;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "ssax", 0))) {
  
# 4556 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4556 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0xe0fa00f0;
   return std_32bit_3reg (ao, m, 
# 4564 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 4564 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "ssub", EIGHT_BIT | SIXTEEN_BIT))) {
  
# 4572 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4572 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   if (m & EIGHT_BIT) {
    ao->o = 0xc0fa00f0;
   } else
   if (m & SIXTEEN_BIT) {
    ao->o = 0xd0fa00f0;
   } else {
    return -1;
   }
   return std_32bit_3reg (ao, m, 
# 4587 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 4587 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else if ((m = opmask (ao->op, "stc", L_BIT | TWO_BIT))) {
  
# 4594 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4594 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x754: {
   ao->a[2][strlen (ao->a[2]) - 1] = '\0';
   ao->a[3] = "0]";
   }

  case 0x8654: {
   
# 4602 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4602 "project/radare2/libr/asm/arch/arm/armass.c"
      coproc = getcoproc (ao->a[0]);
   
# 4603 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4603 "project/radare2/libr/asm/arch/arm/armass.c"
      coreg = getcoprocreg (ao->a[1]);
   
# 4604 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4604 "project/radare2/libr/asm/arch/arm/armass.c"
      reg = getregmemstart (ao->a[2]);
   
# 4605 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 4605 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnummemend (ao->a[3]);

   if ((coproc > 15) || (coreg > 15) || (reg > 15) || (num > 4092) || (num < -4092) || (num % 4 != 0)) {
    return -1;
   }

   ao->o = 0x00ed0000;
   if (m & L_BIT) {
    ao->o |= 1 << 30;
   }
   if (m & TWO_BIT) {
    ao->o |= 1 << 20;
   }
   if (num < 0) {
    num = -num;
   } else {
    ao->o |= 1 << 31;
   }
   ao->o |= coproc;
   ao->o |= coreg << 4;
   ao->o |= reg << 24;
   ao->o |= (num >> 2) << 8;
   return 4;
   }
   break;
  case 0x2754: {
   
# 4631 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4631 "project/radare2/libr/asm/arch/arm/armass.c"
      coproc = getcoproc (ao->a[0]);
   
# 4632 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4632 "project/radare2/libr/asm/arch/arm/armass.c"
      coreg = getcoprocreg (ao->a[1]);
   
# 4633 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4633 "project/radare2/libr/asm/arch/arm/armass.c"
      reg = getregmemstartend (ao->a[2]);
   
# 4634 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 4634 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnum (ao->a[3]);

   if ((coproc > 15) || (coreg > 15) || (reg > 15) || (num > 4092) || (num < -4092) || (num % 4 != 0)) {
    return -1;
   }

   ao->o = 0x20ec0000;
   if (m & L_BIT) {
    ao->o |= 1 << 30;
   }
   if (m & TWO_BIT) {
    ao->o |= 1 << 20;
   }
   if (num < 0) {
    num = -num;
   } else {
    ao->o |= 1 << 31;
   }
   ao->o |= coproc;
   ao->o |= coreg << 4;
   ao->o |= reg << 24;
   ao->o |= (num >> 2) << 8;
   return 4;
   }
   break;
  case 0x9654: {
   
# 4660 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4660 "project/radare2/libr/asm/arch/arm/armass.c"
      coproc = getcoproc (ao->a[0]);
   
# 4661 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4661 "project/radare2/libr/asm/arch/arm/armass.c"
      coreg = getcoprocreg (ao->a[1]);
   
# 4662 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4662 "project/radare2/libr/asm/arch/arm/armass.c"
      reg = getregmemstart (ao->a[2]);
   
# 4663 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 4663 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnummemendbang (ao->a[3]);

   if ((coproc > 15) || (coreg > 15) || (reg > 15) || (num > 4092) || (num < -4092) || (num % 4 != 0)) {
    return -1;
   }

   ao->o = 0x20ed0000;
   if (m & L_BIT) {
    ao->o |= 1 << 30;
   }
   if (m & TWO_BIT) {
    ao->o |= 1 << 20;
   }
   if (num < 0) {
    num = -num;
   } else {
    ao->o |= 1 << 31;
   }
   ao->o |= coproc;
   ao->o |= coreg << 4;
   ao->o |= reg << 24;
   ao->o |= (num >> 2) << 8;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else if ((m = opmask (ao->op, "stm", FD_BIT | DB_BIT | IA_BIT | EA_BIT))) {
  
# 4692 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4692 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  
# 4693 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 _Bool 
# 4693 "project/radare2/libr/asm/arch/arm/armass.c"
      wb = 
# 4693 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
           0
# 4693 "project/radare2/libr/asm/arch/arm/armass.c"
                ;
  switch (argt) {
  case 0xba: {
   wb = 
# 4696 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
       1
# 4696 "project/radare2/libr/asm/arch/arm/armass.c"
           ;
   ao->a[0][strlen (ao->a[0]) - 1] = '\0';
   }

  case 0xb1: {
   
# 4701 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4701 "project/radare2/libr/asm/arch/arm/armass.c"
      reg = getreg (ao->a[0]);
   
# 4702 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 4702 "project/radare2/libr/asm/arch/arm/armass.c"
       list = getreglist (ao->a[1]);
   if ((list <= 0) || ((list & 0x0000a000) != 0)) {
    return -1;
   }

   if ((!(m & DOTW_BIT)) && ((list & 0x0000ff00) == 0) && (!(m & (FD_BIT | DB_BIT))) && wb) {
    ao->o = 0x00c0;
    ao->o |= (list & 0x000000ff) << 8;
    ao->o |= reg;
    return 2;
   }

   if ((m & (FD_BIT | DB_BIT | IA_BIT | EA_BIT)) == 0) {
    return -1;
   }

   if (m & (FD_BIT | DB_BIT)) {
    ao->o = 0x00e90000;
   } else {
    ao->o = 0x80e80000;
   }

   if (wb) {
    ao->o |= 1 << 29;
   }

   ao->o |= reg << 24;
   ao->o |= (list & 0x000000ff) << 8;
   ao->o |= (list & 0x0000ff00) >> 8;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else if ((m = opmask (ao->op, "str", B_BIT | T_BIT | D_BIT | H_BIT))) {
  
# 4738 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 4738 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  
# 4739 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned int 
# 4739 "project/radare2/libr/asm/arch/arm/armass.c"
      strsel = m & (B_BIT | H_BIT | D_BIT);
  switch (argt) {
  case 0x71:
   if (ao->a[2] == 
# 4742 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                  ((void *)0)
# 4742 "project/radare2/libr/asm/arch/arm/armass.c"
                      ) {
    ao->a[1][strlen (ao->a[1]) -1] = '\0';
    ao->a[2] = "0]";
   }

  case 0x861: {
   
# 4748 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4748 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 4749 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4749 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getregmemstart (ao->a[1]);
   
# 4750 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 4750 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnummemend (ao->a[2]);
   if (m & T_BIT) {
    if ((num < 0) || (num > 255)) {
     return -1;
    }
    if (strsel == 0) {
     ao->o = 0x40f8000e;
    } else
    if (strsel == H_BIT) {
     ao->o = 0x20f8000e;
    } else
    if (strsel == B_BIT) {
     ao->o = 0x00f8000e;
    } else {
     return -1;
    }
    ao->o |= num << 8;
    return mem_32bit_2reg (ao, m);
   }

   if ((strsel == 0) && (reg2 == 13) && (num >= 0) && (num < 1024) && ((num % 4) == 0) && (reg1 < 8) & (!(m & DOTW_BIT))) {
    ao->o = 0x0090;
    ao->o |= reg1;
    ao->o |= (num >> 2) << 8;
    return 2;
   }

   
# 4777 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  _Bool 
# 4777 "project/radare2/libr/asm/arch/arm/armass.c"
       t1form = 
# 4777 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                0
# 4777 "project/radare2/libr/asm/arch/arm/armass.c"
                     ;
   if ((strsel == 0) && (num < 128) && (num >= 0) && (num % 4 == 0)) {
    ao->o = 0x0060;
    ao->o |= (num >> 4);
    ao->o |= ((num >> 2) & 0x3) << 14;
    t1form = 
# 4782 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            1
# 4782 "project/radare2/libr/asm/arch/arm/armass.c"
                ;
   }
   if ((strsel == B_BIT) && (num < 32) && (num >= 0)) {
    ao->o = 0x0070;
    ao->o |= (num >> 2);
    ao->o |= (num & 0x3) << 14;
    t1form = 
# 4788 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            1
# 4788 "project/radare2/libr/asm/arch/arm/armass.c"
                ;
   }
   if ((strsel == H_BIT) && (num < 64) && (num >= 0) && (num % 2 == 0)) {
    ao->o = 0x0080;
    ao->o |= (num >> 3);
    ao->o |= ((num >> 1) & 0x3) << 14;
    t1form = 
# 4794 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
            1
# 4794 "project/radare2/libr/asm/arch/arm/armass.c"
                ;
   }
   if (t1form) {
    if (mem_16bit_2reg (ao, m)) {
     return 2;
    }
   }

   if ((num > 4095) || (num < -255)) {
    return -1;
   }
   if (num >= 0) {
    if (strsel == 0) {
     ao->o = 0xc0f80000;
    } else
    if (strsel == B_BIT) {
     ao->o = 0x80f80000;
    } else
    if (strsel == H_BIT) {
     ao->o = 0xa0f80000;
    } else {
     return -1;
    }
    ao->o |= (num >> 8);
    ao->o |= (num & 0x000000ff) << 8;
    return mem_32bit_2reg (ao, m);
   }
   if (strsel == 0) {
    ao->o = 0x40f8000c;
   } else
   if (strsel == B_BIT) {
    ao->o = 0x00f8000c;
   } else
   if (strsel == H_BIT) {
    ao->o = 0x20f8000c;
   } else {
    return -1;
   }
   ao->o |= -num << 8;
   return mem_32bit_2reg (ao, m);
   }
   break;
  case 0x271: {
   
# 4837 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4837 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 4838 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4838 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getregmemstartend (ao->a[1]);
   
# 4839 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 4839 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnum (ao->a[2]);

   if ((num > 255) || (num < -255)) {
    return -1;
   }

   if (strsel == 0) {
    ao->o = 0x40f80009;
   } else
   if (strsel == B_BIT) {
    ao->o = 0x00f80009;
   } else
   if (strsel == H_BIT) {
    ao->o = 0x20f80009;
   } else {
    return -1;
   }

   if (num < 0) {
    num = -num;
   } else {
    ao->o |= 1 << 1;
   }
   ao->o |= num << 8;
   ao->o |= reg1 << 4;
   ao->o |= reg2 << 24;
   return 4;
   }
   break;
  case 0x961: {
   
# 4869 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 4869 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnummemendbang (ao->a[2]);

   if ((num > 255) || (num < -255)) {
    return -1;
   }

   if (strsel == 0) {
    ao->o = 0x40f8000d;
   } else
   if (strsel == B_BIT) {
    ao->o = 0x00f8000d;
   } else
   if (strsel == H_BIT) {
    ao->o = 0x20f8000d;
   } else {
    return -1;
   }

   if (num < 0) {
    num = -num;
   } else {
    ao->o |= 1 << 1;
   }
   ao->o |= num << 8;
   return mem_32bit_2reg (ao, m);
   }
   break;
  case 0xc61: {
   
# 4897 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4897 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 4898 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4898 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getregmemstart (ao->a[1]);
   
# 4899 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4899 "project/radare2/libr/asm/arch/arm/armass.c"
      reg3 = getregmemend (ao->a[2]);
   if ((reg1 < 8) && (reg2 < 8) && (reg3 < 8) && (!(m & DOTW_BIT))) {
    if (strsel == 0) {
     ao->o = 0x0050;
    } else
    if (strsel == B_BIT) {
     ao->o = 0x0054;
    } else
    if (strsel == H_BIT) {
     ao->o = 0x0052;
    } else {
     return -1;
    }
    ao->o |= reg1 << 8;
    ao->o |= reg2 << 11;
    ao->o |= (reg3 & 0x3) << 14;
    ao->o |= (reg3 >> 2);
    return 2;
   }
   ao->a[2][strlen (ao->a[2]) - 1] = '\0';
   ao->a[3] = "lsl 0]";
   }

  case 0xd161: {
   
# 4923 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4923 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 4924 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4924 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getregmemstart (ao->a[1]);
   
# 4925 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4925 "project/radare2/libr/asm/arch/arm/armass.c"
      reg3 = getreg (ao->a[2]);
   
# 4926 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 4926 "project/radare2/libr/asm/arch/arm/armass.c"
       shift = getshiftmemend (ao->a[3]) >> 2;

   if (((shift & 0xffffcfff) != 0) || (reg1 > 15) || (reg2 > 15) || (reg3 > 15)) {
    return -1;
   }

   if (strsel == 0) {
    ao->o = 0x40f80000;
   } else
   if (strsel == B_BIT) {
    ao->o = 0x00f80000;
   } else
   if (strsel == H_BIT) {
    ao->o = 0x20f80000;
   } else {
    return -1;
   }

   ao->o |= reg1 << 4;
   ao->o |= reg2 << 24;
   ao->o |= reg3 << 8;
   ao->o |= shift;
   return 4;
   }
   break;
  case 0x711: {
   ao->a[2][strlen (ao->a[2]) - 1] = '\0';
   ao->a[3] = "0]";
   }

  case 0x8611: {
   
# 4957 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4957 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 4958 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4958 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 4959 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4959 "project/radare2/libr/asm/arch/arm/armass.c"
      reg3 = getregmemstart (ao->a[2]);
   
# 4960 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 4960 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnummemend (ao->a[3]);

   if ((reg1 > 15) || (reg2 > 15) || (reg3 > 15) || (strsel != D_BIT) || (num > 1023) || (num < -1023) || ((num % 4) != 0)) {
    return -1;
   }

   ao->o = 0x40e90000;

   if (num < 0) {
    num = -num;
   } else {
    ao->o |= 1 << 31;
   }
   ao->o |= reg1 << 4;
   ao->o |= reg2;
   ao->o |= reg3 << 24;
   ao->o |= (num >> 2) << 8;
   return 4;
   }
   break;
  case 0x9611: {
   
# 4981 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4981 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 4982 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4982 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 4983 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 4983 "project/radare2/libr/asm/arch/arm/armass.c"
      reg3 = getregmemstart (ao->a[2]);
   
# 4984 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 4984 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnummemendbang (ao->a[3]);

   if ((reg1 > 15) || (reg2 > 15) || (reg3 > 15) || (strsel != D_BIT) || (num > 1023) || (num < -1023) || ((num % 4) != 0)) {
    return -1;
   }

   ao->o = 0x60e90000;

   if (num < 0) {
    num = -num;
   } else {
    ao->o |= 1 << 31;
   }
   ao->o |= reg1 << 4;
   ao->o |= reg2;
   ao->o |= reg3 << 24;
   ao->o |= (num >> 2) << 8;
   return 4;
   }
   break;
  case 0x2711: {
   
# 5005 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5005 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 5006 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5006 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 5007 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5007 "project/radare2/libr/asm/arch/arm/armass.c"
      reg3 = getregmemstartend (ao->a[2]);
   
# 5008 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 5008 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnum (ao->a[3]);

   if ((reg1 > 15) || (reg2 > 15) || (reg3 > 15) || (strsel != D_BIT) || (num > 1023) || (num < -1023) || ((num % 4) != 0)) {
    return -1;
   }

   ao->o = 0x60e80000;

   if (num < 0) {
    num = -num;
   } else {
    ao->o |= 1 << 31;
   }
   ao->o |= reg1 << 4;
   ao->o |= reg2;
   ao->o |= reg3 << 24;
   ao->o |= (num >> 2) << 8;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "strex", B_BIT | D_BIT | H_BIT))) {
  
# 5033 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5033 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  
# 5034 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned int 
# 5034 "project/radare2/libr/asm/arch/arm/armass.c"
      strsel = m & (B_BIT | H_BIT | D_BIT);
  switch (argt) {
  case 0x711: {
   
# 5037 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5037 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 5038 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5038 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 5039 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5039 "project/radare2/libr/asm/arch/arm/armass.c"
      reg3 = getregmemstartend (ao->a[2]);

   if ((strsel == D_BIT) || (reg1 > 15) || (reg2 > 15) || (reg3 > 15)) {
    return -1;
   }
   if (strsel == B_BIT) {
    ao->o = 0xc0e8400f;
    ao->o |= reg1 << 8;
    ao->o |= reg2 << 4;
    ao->o |= reg3 << 24;
    return 4;
   } else
   if (strsel == H_BIT) {
    ao->o = 0xc0e8500f;
    ao->o |= reg1 << 8;
    ao->o |= reg2 << 4;
    ao->o |= reg3 << 24;
    return 4;
   }

   ao->a[2][strlen (ao->a[2]) - 1] = '\0';
   ao->a[3] = "0]";
   }

  case 0x8611: {
   
# 5064 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5064 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 5065 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5065 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 5066 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5066 "project/radare2/libr/asm/arch/arm/armass.c"
      reg3 = getregmemstart (ao->a[2]);
   
# 5067 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  int 
# 5067 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnummemend (ao->a[3]);

   if ((strsel != 0) || (reg1 > 15) || (reg2 > 15) || (reg3 > 15) || (num < 0) || (num > 1023) || ((num % 4) !=0)) {
    return -1;
   }

   ao->o = 0x40e80000;
   ao->o |= reg1;
   ao->o |= reg2 << 4;
   ao->o |= reg3 << 24;
   ao->o |= (num >> 2) << 8;
   return 4;
   }
   break;
  case 0x7111: {
   
# 5082 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5082 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 5083 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5083 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 5084 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5084 "project/radare2/libr/asm/arch/arm/armass.c"
      reg3 = getreg (ao->a[2]);
   
# 5085 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5085 "project/radare2/libr/asm/arch/arm/armass.c"
      reg4 = getregmemstartend (ao->a[3]);

   if ((strsel != D_BIT) || (reg1 > 15) || (reg2 > 15) || (reg3 > 15) || (reg4 > 15)) {
    return -1;
   }

   ao->o = 0xc0e87000;
   ao->o |= reg1 << 8;
   ao->o |= reg2 << 4;
   ao->o |= reg3;
   ao->o |= reg4 << 24;
   return 4;
   }
   break;
  }
 } else
 if ((m = opmask (ao->op, "sub", S_BIT | W_BIT))) {
  
# 5102 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5102 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x21: {
   std_opt_2 (ao);
   }

  case 0x211: {
   
# 5109 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5109 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 5110 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5110 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 5111 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 5111 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnum (ao->a[2]);

   if ((reg1 > 15) || (reg2 > 15)) {
    return -1;
   }

   if ((reg1 == 15) && (reg2 == 14) && (num < 256)) {
    ao->o = 0xdef3008f;
    ao->o |= num << 8;
    return 4;
   }
   if (reg2 == 13) {
    if ((reg1 == 13) && (!(m & DOTW_BIT)) && (!(m & W_BIT)) && (num <= 4096) && (num % 4 == 0)) {
     ao->o = 0x80b0;
     ao->o |= (num >> 2) << 8;
     return 2;
    }
    err = 
# 5128 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
         0
# 5128 "project/radare2/libr/asm/arch/arm/armass.c"
              ;
    
# 5129 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
   unsigned int 
# 5129 "project/radare2/libr/asm/arch/arm/armass.c"
        thnum = getthimmed12 (ao->a[2]);

    if (!err && (!(m & W_BIT))) {
     ao->o = 0xadf10000;
     ao->o |= thnum;
     ao->o |= reg1;
     if (m & S_BIT) {
      ao->o |= 1 << 28;
     }
     return 4;
    }

    if (num > 4096) {
     return -1;
    }

    ao->o = 0xadf20000;
    ao->o |= getthzeroimmed12 (num);
    ao->o |= reg1;
    return 4;
   }

   if ((reg1 < 8) && (reg2 < 8) && (!(m & DOTW_BIT)) && (!(m & W_BIT)) && (num < 8)) {
    ao->o = 0x001e;
    ao->o |= reg1 << 8;
    ao->o |= reg2 << 11;
    ao->o |= (num & 0x3) << 14;
    ao->o |= (num >> 2);
    return 2;
   }

   if ((reg1 < 8) && (reg1 == reg2) && (!(m & DOTW_BIT)) && (!(m & W_BIT)) && (num < 256)) {
    ao->o = 0x0038;
    ao->o |= reg1;
    ao->o |= num << 8;
    return 2;
   }

   err = 
# 5167 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
        0
# 5167 "project/radare2/libr/asm/arch/arm/armass.c"
             ;
   
# 5168 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 5168 "project/radare2/libr/asm/arch/arm/armass.c"
       thnum = getthimmed12 (ao->a[2]);

   if (!err && (!(m & W_BIT))) {
    ao->o = 0xa0f10000;
    ao->o |= thnum;
    return std_32bit_2reg (ao, m, 
# 5173 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                 0
# 5173 "project/radare2/libr/asm/arch/arm/armass.c"
                                      );
   }

   if (num > 4096) {
    return -1;
   }

   ao->o = 0xa0f20000;
   ao->o |= reg1;
   ao->o |= reg2 << 24;
   ao->o |= getthzeroimmed12 (num);
   return 4;
   }
   break;
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->a[3] = "lsl 0";
   }

  case 0x311:
   if (ao->a[3] == 
# 5196 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                  ((void *)0)
# 5196 "project/radare2/libr/asm/arch/arm/armass.c"
                      ) {
    std_opt_3 (ao);
   }

  case 0x3111: {
   
# 5201 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5201 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 5202 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5202 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 5203 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5203 "project/radare2/libr/asm/arch/arm/armass.c"
      reg3 = getreg (ao->a[2]);
   
# 5204 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 5204 "project/radare2/libr/asm/arch/arm/armass.c"
       shift = thumb_getshift (ao->a[3]);

   if (reg2 == 13) {
    ao->o = 0xadeb0000;
    ao->o |= reg1;
    ao->o |= reg3 << 8;
    ao->o |= shift;
    if (m & S_BIT) {
     ao->o |= 1 << 28;
    }
    return 4;
   }

   if ((shift == 0) && (reg1 < 8) && (reg2 < 8) && (reg3 < 8) && (!(m & DOTW_BIT))) {
    ao->o = 0x001a;
    ao->o |= reg1 << 8;
    ao->o |= reg2 << 11;
    ao->o |= (reg3 & 0x3) << 14;
    ao->o |= (reg3 >> 2);
    return 2;
   }

   ao->o = 0xa0eb0000;
   return std_32bit_3reg (ao, m, 
# 5227 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                1
# 5227 "project/radare2/libr/asm/arch/arm/armass.c"
                                    );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "svc", 0))) {
  
# 5235 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5235 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x2: {
   
# 5238 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 5238 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnum (ao->a[0]);
   if (num > 255) {
    return -1;
   }
   ao->o = 0x00df;
   ao->o |= num << 8;
   return 2;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "sxta", B_BIT | H_BIT | SIXTEEN_BIT))) {
  
# 5252 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5252 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->a[3] = "lsl 0";
   }

  case 0x311: {
   if (ao->a[3] == 
# 5263 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                  ((void *)0)
# 5263 "project/radare2/libr/asm/arch/arm/armass.c"
                      ) {
    std_opt_3 (ao);
   }
   }

  case 0x3111: {
   
# 5269 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 5269 "project/radare2/libr/asm/arch/arm/armass.c"
       shift = thumb_getshift (ao->a[3]);

   if ((shift != 0) && ((shift & 0x0000f010) != 0x00003000)) {
    return -1;
   }

   
# 5275 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned long long 
# 5275 "project/radare2/libr/asm/arch/arm/armass.c"
       sufsel = m & (B_BIT | H_BIT | SIXTEEN_BIT);

   if (sufsel == B_BIT) {
    ao->o = 0x40fa80f0;
   } else
   if (sufsel == (B_BIT | SIXTEEN_BIT)) {
    ao->o = 0x20fa80f0;
   } else
   if (sufsel == H_BIT) {
    ao->o = 0x00fa80f0;
   } else {
    return -1;
   }

   ao->o |= (shift & 0x00000060) << 7;
   return std_32bit_3reg (ao, m, 
# 5290 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 5290 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  }
 } else
 if ((m = opmask (ao->op, "sxt", B_BIT | H_BIT | SIXTEEN_BIT))) {
  
# 5296 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5296 "project/radare2/libr/asm/arch/arm/armass.c"
      sufsel = m & (B_BIT | H_BIT | SIXTEEN_BIT);
  
# 5297 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5297 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   ao->a[2] = "lsl 0";
   }

  case 0x311: {
   
# 5304 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5304 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 5305 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5305 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 5306 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 5306 "project/radare2/libr/asm/arch/arm/armass.c"
       shift = thumb_getshift (ao->a[2]);

   if ((reg1 > 15) && (reg2 > 15) && (shift != 0) && ((shift & 0x0000f010) != 0x00003000)) {
    return -1;
   }

   if (sufsel == B_BIT) {
    ao->o = 0x40b2;
    if ((shift == 0) && std_16bit_2reg (ao, m)) {
     return 2;
    }
    ao->o = 0x4ffa80f0;
   } else
   if (sufsel == (B_BIT | SIXTEEN_BIT)) {
    ao->o = 0x2ffa80f0;
   } else
   if (sufsel == H_BIT) {
    ao->o = 0x00b2;
    if ((shift == 0) && std_16bit_2reg (ao, m)) {
     return 2;
    }
    ao->o = 0x0ffa80f0;
   } else {
    return -1;
   }

   ao->o |= (shift & 0x00000060) << 7;
   ao->o |= reg1;
   ao->o |= reg2 << 8;
   return 4;
   }
   break;
  }
 } else
 if ((m = opmask (ao->op, "tb", B_BIT | H_BIT))) {
  
# 5341 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5341 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  
# 5342 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5342 "project/radare2/libr/asm/arch/arm/armass.c"
      sufsel = m & (B_BIT | H_BIT);
  switch (argt) {
  case 0xc6: {
   
# 5345 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5345 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getregmemstart (ao->a[0]);
   
# 5346 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5346 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getregmemend (ao->a[1]);

   if ((reg1 > 15) || (reg2 > 15)) {
    return -1;
   }

   if (sufsel == B_BIT) {
    ao->o = 0xd0e800f0;
    ao->o |= reg1 << 24;
    ao->o |= reg2 << 8;
    return 4;
   }
   ao->a[1][strlen (ao->a[1]) - 1] = '\0';
   ao->a[2] = "lsl 1]";
   }

  case 0xd16: {
   
# 5363 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5363 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getregmemstart (ao->a[0]);
   
# 5364 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5364 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 5365 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 5365 "project/radare2/libr/asm/arch/arm/armass.c"
       shift = getshiftmemend (ao->a[2]);

   if ((reg1 > 15) || (reg2 > 15) || (shift != 0x00004000) || (sufsel != H_BIT)) {
    return -1;
   }

   ao->o = 0xd0e810f0;
   ao->o |= reg1 << 24;
   ao->o |= reg2 << 8;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "teq", 0))) {
  
# 5382 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5382 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x21: {
   
# 5385 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5385 "project/radare2/libr/asm/arch/arm/armass.c"
      reg = getreg (ao->a[0]);
   err = 
# 5386 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
        0
# 5386 "project/radare2/libr/asm/arch/arm/armass.c"
             ;
   
# 5387 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 5387 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getthimmed12 (ao->a[1]);

   if (err || (reg > 15)) {
    return -1;
   }

   ao->o = 0x90f0000f;
   ao->o |= reg << 24;
   ao->o |= num;
   return 4;
   }
   break;
  case 0x11: {
   ao->a[2] = "lsl 0";
   }

  case 0x311: {
   ao->o = 0x90ea000f;
   return std_32bit_2reg (ao, m, 
# 5405 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                1
# 5405 "project/radare2/libr/asm/arch/arm/armass.c"
                                    );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "tst", 0))) {
  
# 5413 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5413 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x21: {
   
# 5416 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5416 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   err = 
# 5417 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
        0
# 5417 "project/radare2/libr/asm/arch/arm/armass.c"
             ;
   
# 5418 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 5418 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getthimmed12 (ao->a[1]);

   if (err || (reg1 > 15)) {
    return -1;
   }

   ao->o = 0x10f0000f;
   ao->o |= reg1 << 24;
   ao->o |= num;
   return 4;
   }
   break;
  case 0x11: {
   ao->o = 0x0042;

   if (std_16bit_2reg (ao, m)) {
    return 2;
   }

   ao->a[2] = "lsl 0";
   }

  case 0x311: {
   ao->o = 0x10ea000f;
   return std_32bit_2reg (ao, m, 
# 5442 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                1
# 5442 "project/radare2/libr/asm/arch/arm/armass.c"
                                    );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "uadd", EIGHT_BIT | SIXTEEN_BIT))) {
  
# 5450 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5450 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   if (m & EIGHT_BIT) {
    ao->o = 0x80fa40f0;
   } else
   if (m & SIXTEEN_BIT) {
    ao->o = 0x90fa40f0;
   } else {
    return -1;
   }

   return std_32bit_3reg (ao, m, 
# 5466 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 5466 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "uasx", 0))) {
  
# 5474 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5474 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0xa0fa40f0;
   return std_32bit_3reg (ao, m, 
# 5482 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 5482 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "ubfx", 0))) {
  
# 5490 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5490 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x2211: {
   
# 5493 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5493 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 5494 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5494 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 5495 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 5495 "project/radare2/libr/asm/arch/arm/armass.c"
       lsb = getnum (ao->a[2]);
   
# 5496 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 5496 "project/radare2/libr/asm/arch/arm/armass.c"
       widthm1 = getnum (ao->a[3]) - 1;

   if ((reg1 > 15) || (reg2 > 15) || (lsb > 31) || ((31 - lsb) <= widthm1)) {
    return -1;
   }

   ao->o = 0xc0f30000;
   ao->o |= reg1;
   ao->o |= reg2 << 24;
   ao->o |= (lsb & 0x1c) << 2;
   ao->o |= (lsb & 0x3) << 14;
   ao->o |= widthm1 << 8;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "udiv", 0))) {
  
# 5516 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5516 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0xb0fbf0f0;
   return std_32bit_3reg (ao, m, 
# 5524 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 5524 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "uhadd", EIGHT_BIT | SIXTEEN_BIT))) {
  
# 5532 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5532 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  
# 5533 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5533 "project/radare2/libr/asm/arch/arm/armass.c"
      sufsel = m & (EIGHT_BIT | SIXTEEN_BIT);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   if (sufsel == EIGHT_BIT) {
    ao->o = 0x80fa60f0;
   } else
   if (sufsel == SIXTEEN_BIT) {
    ao->o = 0x90fa60f0;
   } else {
    return -1;
   }

   return std_32bit_3reg (ao, m, 
# 5549 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 5549 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "uhasx", 0))) {
  
# 5557 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5557 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0xa0fa60f0;

   return std_32bit_3reg (ao, m, 
# 5566 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 5566 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );

   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "uhsax", 0))) {
  
# 5575 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5575 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0xe0fa60f0;

   return std_32bit_3reg (ao, m, 
# 5584 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 5584 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "uhsub", EIGHT_BIT | SIXTEEN_BIT))) {
  
# 5592 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5592 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  
# 5593 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5593 "project/radare2/libr/asm/arch/arm/armass.c"
      sufsel = m & (EIGHT_BIT | SIXTEEN_BIT);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   if (sufsel == EIGHT_BIT) {
    ao->o = 0xc0fa60f0;
   } else
   if (sufsel == SIXTEEN_BIT) {
    ao->o = 0xd0fa60f0;
   } else {
    return -1;
   }

   return std_32bit_3reg (ao, m, 
# 5609 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 5609 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "umaal", 0))) {
  
# 5617 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5617 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x1111: {
   
# 5620 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5620 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 5621 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5621 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 5622 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5622 "project/radare2/libr/asm/arch/arm/armass.c"
      reg3 = getreg (ao->a[2]);
   
# 5623 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5623 "project/radare2/libr/asm/arch/arm/armass.c"
      reg4 = getreg (ao->a[3]);

   if ((reg1 > 15) || (reg2 > 15) || (reg3 > 15) || (reg4 > 15)) {
    return -1;
   }

   ao->o = 0xe0fb6000;
   ao->o |= reg1 << 4;
   ao->o |= reg2;
   ao->o |= reg3 << 24;
   ao->o |= reg4 << 8;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "umlal", 0))) {
  
# 5642 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5642 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x1111: {
   
# 5645 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5645 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 5646 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5646 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 5647 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5647 "project/radare2/libr/asm/arch/arm/armass.c"
      reg3 = getreg (ao->a[2]);
   
# 5648 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5648 "project/radare2/libr/asm/arch/arm/armass.c"
      reg4 = getreg (ao->a[3]);

   if ((reg1 > 15) || (reg2 > 15) || (reg3 > 15) || (reg4 > 15)) {
    return -1;
   }

   ao->o = 0xe0fb0000;
   ao->o |= reg1 << 4;
   ao->o |= reg2;
   ao->o |= reg3 << 24;
   ao->o |= reg4 << 8;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "umull", 0))) {
  
# 5667 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5667 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x1111: {
   
# 5670 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5670 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 5671 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5671 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 5672 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5672 "project/radare2/libr/asm/arch/arm/armass.c"
      reg3 = getreg (ao->a[2]);
   
# 5673 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5673 "project/radare2/libr/asm/arch/arm/armass.c"
      reg4 = getreg (ao->a[3]);

   if ((reg1 > 15) || (reg2 > 15) || (reg3 > 15) || (reg4 > 15)) {
    return -1;
   }

   ao->o = 0xa0fb0000;
   ao->o |= reg1 << 4;
   ao->o |= reg2;
   ao->o |= reg3 << 24;
   ao->o |= reg4 << 8;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "uqadd", EIGHT_BIT | SIXTEEN_BIT))) {
  
# 5692 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5692 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  
# 5693 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5693 "project/radare2/libr/asm/arch/arm/armass.c"
      sufsel = m & (EIGHT_BIT | SIXTEEN_BIT);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   if (sufsel == EIGHT_BIT) {
    ao->o = 0x80fa50f0;
   } else
   if (sufsel == SIXTEEN_BIT) {
    ao->o = 0x90fa50f0;
   } else {
    return -1;
   }

   return std_32bit_3reg (ao, m, 
# 5709 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 5709 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "uqasx", 0))) {
  
# 5717 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5717 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0xa0fa50f0;

   return std_32bit_3reg (ao, m, 
# 5726 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 5726 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "uqsax", 0))) {
  
# 5734 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5734 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0xe0fa50f0;

   return std_32bit_3reg (ao, m, 
# 5743 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 5743 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "uqsub", EIGHT_BIT | SIXTEEN_BIT))) {
  
# 5751 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5751 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  
# 5752 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5752 "project/radare2/libr/asm/arch/arm/armass.c"
      sufsel = m & (EIGHT_BIT | SIXTEEN_BIT);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   if (sufsel == EIGHT_BIT) {
    ao->o = 0xc0fa50f0;
   } else
   if (sufsel == SIXTEEN_BIT) {
    ao->o = 0xd0fa50f0;
   } else {
    return -1;
   }

   return std_32bit_3reg (ao, m, 
# 5768 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 5768 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "usad8", 0))) {
  
# 5776 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5776 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0x70fb00f0;

   return std_32bit_3reg (ao, m, 
# 5785 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 5785 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "usada8", 0))) {
  
# 5793 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5793 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x1111: {
   
# 5796 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5796 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 5797 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5797 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 5798 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5798 "project/radare2/libr/asm/arch/arm/armass.c"
      reg3 = getreg (ao->a[2]);
   
# 5799 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5799 "project/radare2/libr/asm/arch/arm/armass.c"
      reg4 = getreg (ao->a[3]);

   if ((reg1 > 15) || (reg2 > 15) || (reg3 > 15) || (reg4 > 15)) {
    return -1;
   }

   ao->o = 0x70fb0000;
   ao->o |= reg1;
   ao->o |= reg2 << 24;
   ao->o |= reg3 << 8;
   ao->o |= reg4 << 4;
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "usat", SIXTEEN_BIT))) {
  
# 5818 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5818 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x121: {
   if (m & SIXTEEN_BIT) {
    
# 5822 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
   unsigned char 
# 5822 "project/radare2/libr/asm/arch/arm/armass.c"
       reg1 = getreg (ao->a[0]);
    
# 5823 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
   unsigned int 
# 5823 "project/radare2/libr/asm/arch/arm/armass.c"
        num = getnum (ao->a[1]);
    
# 5824 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
   unsigned char 
# 5824 "project/radare2/libr/asm/arch/arm/armass.c"
       reg2 = getreg (ao->a[2]);

    if ((reg1 > 15) || (num > 15) || (reg2 > 15)) {
     return -1;
    }

    ao->o = 0xa0f30000;
    ao->o |= reg1;
    ao->o |= reg2 << 24;
    ao->o |= num << 8;
    return 4;
   }

   ao->a[3] = "lsl 0";
   }

  case 0x3121: {
   
# 5841 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5841 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 5842 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 5842 "project/radare2/libr/asm/arch/arm/armass.c"
       num = getnum (ao->a[1]);
   
# 5843 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5843 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[2]);
   
# 5844 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 5844 "project/radare2/libr/asm/arch/arm/armass.c"
       shift = thumb_getshift (ao->a[3]);

   if ((reg1 > 15) || (num > 31) || (reg2 > 15) || (m & SIXTEEN_BIT) || ((shift & 0x00001000) != 0)) {
    return -1;
   }

   ao->o = 0x80f30000;
   ao->o |= reg1;
   ao->o |= (num & 0xf) << 8;
   ao->o |= (num >> 4 ) << 12;
   ao->o |= reg2 << 24;
   ao->o |= (shift & 0x00002000) << 16;
   ao->o |= (shift & 0x0000c070);
   return 4;
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "usax", 0))) {
  
# 5865 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5865 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->o = 0xe0fa40f0;

   return std_32bit_3reg (ao, m, 
# 5874 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 5874 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "usub", EIGHT_BIT | SIXTEEN_BIT))) {
  
# 5882 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5882 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  
# 5883 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5883 "project/radare2/libr/asm/arch/arm/armass.c"
      sufsel = m & (EIGHT_BIT | SIXTEEN_BIT);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   if (sufsel == EIGHT_BIT) {
    ao->o = 0xc0fa40f0;
   } else
   if (sufsel == SIXTEEN_BIT) {
    ao->o = 0xd0fa40f0;
   } else {
    return -1;
   }

   return std_32bit_3reg (ao, m, 
# 5899 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                0
# 5899 "project/radare2/libr/asm/arch/arm/armass.c"
                                     );
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "uxta", B_BIT | H_BIT | SIXTEEN_BIT))) {
  
# 5907 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5907 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  
# 5908 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5908 "project/radare2/libr/asm/arch/arm/armass.c"
      sufsel = m & (B_BIT | H_BIT | SIXTEEN_BIT);
  switch (argt) {
  case 0x11: {
   std_opt_2 (ao);
   }

  case 0x111: {
   ao->a[3] = "lsl 0";
   }

  case 0x311: {
   if (ao->a[3] == 
# 5919 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                  ((void *)0)
# 5919 "project/radare2/libr/asm/arch/arm/armass.c"
                      ) {
    std_opt_3 (ao);
   }
   }

  case 0x3111: {
   
# 5925 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 5925 "project/radare2/libr/asm/arch/arm/armass.c"
       shift = thumb_getshift (ao->a[3]);

   if (shift && ((shift & 0x0000f010) != 0x00003000)) {
    return -1;
   }

   if (sufsel == B_BIT) {
    ao->o = 0x50fa80f0;
   } else
   if (sufsel == (B_BIT | SIXTEEN_BIT)) {
    ao->o = 0x30fa80f0;
   } else
   if (sufsel == H_BIT) {
    ao->o = 0x10fa80f0;
   } else {
    return -1;
   }

   ao->o |= (shift & 0x00000060) << 7;
   return (std_32bit_3reg (ao, m, 
# 5944 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                 0
# 5944 "project/radare2/libr/asm/arch/arm/armass.c"
                                      ));
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "uxt", B_BIT | H_BIT | SIXTEEN_BIT))) {
  
# 5952 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5952 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  
# 5953 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 5953 "project/radare2/libr/asm/arch/arm/armass.c"
      sufsel = m & (B_BIT | H_BIT | SIXTEEN_BIT);
  switch (argt) {
  case 0x11: {
   if ((sufsel == B_BIT) || (sufsel == H_BIT)) {
    if (sufsel == B_BIT) {
     ao->o = 0xc0b2;
    } else {
     ao->o = 0x80b2;
    }
    if (std_16bit_2reg (ao, m)) {
     return 2;
    }
   }
   ao->a[2] = "lsl 0";
   }

  case 0x311: {
   
# 5970 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5970 "project/radare2/libr/asm/arch/arm/armass.c"
      reg1 = getreg (ao->a[0]);
   
# 5971 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned char 
# 5971 "project/radare2/libr/asm/arch/arm/armass.c"
      reg2 = getreg (ao->a[1]);
   
# 5972 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
  unsigned int 
# 5972 "project/radare2/libr/asm/arch/arm/armass.c"
       shift = thumb_getshift (ao->a[2]);

   if ((reg1 > 15) || (reg2 > 15) || (shift && ((shift & 0x0000f010) != 0x00003000))) {
    return -1;
   }

   if (sufsel == B_BIT) {
    ao->o = 0x5ffa80f0;
   } else
   if (sufsel == (B_BIT | SIXTEEN_BIT)) {
    ao->o = 0x3ffa80f0;
   } else
   if (sufsel == H_BIT) {
    ao->o = 0x1ffa80f0;
   } else {
    return -1;
   }

   ao->o |= (shift & 0x00000060) << 7;
   ao->o |= reg1;
   ao->o |= reg2 << 8;
   return 4;
   }
   break;
  default:
   return -1;

  }
 } else
 if ((m = opmask (ao->op, "wfe", 0))) {
  
# 6002 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 6002 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x0: {
   if (m & DOTW_BIT) {
    ao->o = 0xaff30280;
    return 4;
   } else {
    ao->o = 0x20bf;
    return 2;
   }
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "wfi", 0))) {
  
# 6019 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 6019 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x0: {
   if (m & DOTW_BIT) {
    ao->o = 0xaff30380;
    return 4;
   } else {
    ao->o = 0x30bf;
    return 2;
   }
   }
   break;
  default:
   return -1;
  }
 } else
 if ((m = opmask (ao->op, "yield", 0))) {
  
# 6036 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
 unsigned long long 
# 6036 "project/radare2/libr/asm/arch/arm/armass.c"
      argt = thumb_selector (ao->a);
  switch (argt) {
  case 0x0: {
   if (m & DOTW_BIT) {
    ao->o = 0xaff30180;
    return 4;
   } else {
    ao->o = 0x10bf;
    return 2;
   }
   }
   break;
  default:
   return -1;
  }
 }
 return 0;
}

static int findyz(int x, int *y, int *z) {
 int i, j;
 for (i = 0;i < 0xff; i++) {
  for (j = 0;j < 0xf;j++) {
   int v = i << j;
   if (v > x) {
    continue;
   }
   if (v == x) {
    *y = i;
    *z = 16 - (j / 2);
    return 1;
   }
  }
 }
 return 0;
}

static int arm_assemble(ArmOpcode *ao, 
# 6073 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                      unsigned long long 
# 6073 "project/radare2/libr/asm/arch/arm/armass.c"
                                           off, const char *str) {
 int i, j, ret, reg, a, b;
 int coproc, opc;
 
# 6076 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
_Bool 
# 6076 "project/radare2/libr/asm/arch/arm/armass.c"
     rex = 
# 6076 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
           0
# 6076 "project/radare2/libr/asm/arch/arm/armass.c"
                ;
 int shift, low, high;
 for (i = 0; ops[i].name; i++) {
  if (!strncmp (ao->op, ops[i].name, strlen (ops[i].name))) {
   ao->o = ops[i].code;
   arm_opcode_cond (ao, strlen(ops[i].name));
   if (ao->a[0] || ops[i].type == TYPE_BKP) {
    switch (ops[i].type) {
    case TYPE_MEM:
     if (!strncmp (ops[i].name, "strex", 5)) {
      rex = 1;
     }
     if (!strcmp (ops[i].name, "str") || !strcmp (ops[i].name, "ldr")) {
      if (!ao->a[2]) {
       ao->a[2] = "0";
      }
     }
     getrange (ao->a[0]);
     getrange (ao->a[1]);
     getrange (ao->a[2]);
     if (ao->a[0] && ao->a[1]) {
      char rn[8];
      
# 6098 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
     __builtin___strncpy_chk (
# 6098 "project/radare2/libr/asm/arch/arm/armass.c"
     rn
# 6098 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
     , 
# 6098 "project/radare2/libr/asm/arch/arm/armass.c"
     ao->a[1], 7
# 6098 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
     , __builtin_object_size (
# 6098 "project/radare2/libr/asm/arch/arm/armass.c"
     rn
# 6098 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
     , 2 > 1 ? 1 : 0))
# 6098 "project/radare2/libr/asm/arch/arm/armass.c"
                              ;
      int r0 = getreg (ao->a[0]);
      int r1 = getreg (ao->a[1]);
      if ((r0 < 0 || r0 > 15) || (r1 > 15 || r1 < 0)) {
       return 0;
      }
      ao->o |= r0 << 20;
      if (!strcmp (ops[i].name, "strd")) {
       r1 = getreg (ao->a[2]);
       if (r1 == -1) {
        break;
       }
       ao->o |= r1 << 8;
       if (ao->a[3]) {
        char *bracket = strchr (ao->a[3], ']');
        if (bracket) {
         *bracket = '\0';
        }
        int num = getnum (ao->a[3]);
        ao->o |= (num & 0x0f) << 24;
        ao->o |= ((num >> 4) & 0x0f) << 16;
       }
       break;
      }
      if (!strcmp (ops[i].name, "strh")) {
       ao->o |= r1 << 8;
       if (ao->a[2]) {
        reg = getreg (ao->a[2]);
        if (reg != -1) {
         ao->o |= reg << 24;
        } else {
         ao->o |= 1 << 14;
         ao->o |= getnum (ao->a[2]) << 24;
        }
       } else {
        ao->o |= 1 << 14;
       }
       break;
      }
      if (rex) {
       ao->o |= r1 << 24;
      } else {
       ao->o |= r1 << 8;
      }
     } else {
      return 0;
     }

     ret = getreg (ao->a[2]);
     if (ret != -1) {
      if (rex) {
       ao->o |= 1;
       ao->o |= (ret & 0x0f) << 8;
      } else {
       ao->o |= (strstr (str, "],")) ? 6 : 7;
       ao->o |= (ret & 0x0f) << 24;
      }
      if (ao->a[3]) {
       shift = getshift (ao->a[3]);
       low = shift & 0xFF;
       high = shift & 0xFF00;
       ao->o |= low << 24;
       ao->o |= high << 8;
      }
     } else {
      int num = getnum (ao->a[2]) & 0xfff;
      if (err) {
       break;
      }
      if (rex) {
       ao->o |= 1;
      } else {
       ao->o |= (strstr (str, "],")) ? 4 : 5;
      }
      ao->o |= 1;
      ao->o |= (num & 0xff) << 24;
      ao->o |= ((num >> 8) & 0xf) << 16;
     }

     break;
    case TYPE_IMM:
     if (*ao->a[0]++ == '{') {
      for (j = 0; j < 16; j++) {
       if (ao->a[j] && *ao->a[j]) {
        getrange (ao->a[j]);
        reg = getreg (ao->a[j]);
        if (reg != -1) {
         if (reg < 8) {
          ao->o |= 1 << (24 + reg);
         } else {
          ao->o |= 1 << (8 + reg);
         }
        }
       }
      }
     } else {
      ao->o |= getnum (ao->a[0]) << 24;
     }
     break;
    case TYPE_BRA:
     if ((ret = getreg (ao->a[0])) == -1) {

      ret = (getnum (ao->a[0]) - (int)ao->off - 8) / 4;
      if (ret >= 0x00800000 || ret < (int)0xff800000) {
       
# 6202 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      fprintf(__stderrp,
# 6202 "project/radare2/libr/asm/arch/arm/armass.c"
      "Branch into out of range\n"
# 6202 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
      )
# 6202 "project/radare2/libr/asm/arch/arm/armass.c"
                                            ;
       return 0;
      }
      ao->o |= ((ret >> 16) & 0xff) << 8;
      ao->o |= ((ret >> 8) & 0xff) << 16;
      ao->o |= ((ret)&0xff) << 24;
     } else {
      
# 6209 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
     fprintf(__stderrp,
# 6209 "project/radare2/libr/asm/arch/arm/armass.c"
     "This branch does not accept reg as arg\n"
# 6209 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
     )
# 6209 "project/radare2/libr/asm/arch/arm/armass.c"
                                                         ;
      return 0;
     }
     break;
    case TYPE_BKP:
     ao->o |= 0x70 << 24;
     if (ao->a[0]) {
      int n = getnum (ao->a[0]);
      ao->o |= ((n & 0xf) << 24);
      ao->o |= (((n >> 4) & 0xff) << 16);
     }
     break;
    case TYPE_BRR:
     if ((ret = getreg (ao->a[0])) == -1) {
      
# 6223 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
     unsigned int 
# 6223 "project/radare2/libr/asm/arch/arm/armass.c"
          dst = getnum (ao->a[0]);
      dst -= (ao->off + 8);
      if (dst & 0x2) {
       ao->o = 0xfb;
      } else {
       ao->o = 0xfa;
      }
      dst /= 4;
      ao->o |= ((dst >> 16) & 0xff) << 8;
      ao->o |= ((dst >> 8) & 0xff) << 16;
      ao->o |= ((dst)&0xff) << 24;
      return 4;
     } else {
      ao->o |= (getreg (ao->a[0]) << 24);
     }
     break;
    case TYPE_HLT: {
     
# 6240 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
    unsigned int 
# 6240 "project/radare2/libr/asm/arch/arm/armass.c"
         o = 0, n = getnum (ao->a[0]);
     o |= ((n >> 12) & 0xf) << 8;
     o |= ((n >> 8) & 0xf) << 20;
     o |= ((n >> 4) & 0xf) << 16;
     o |= ((n) & 0xf) << 24;
     ao->o |=o;
    }
    break;
   case TYPE_SWI:
    ao->o |= (getnum (ao->a[0]) & 0xff) << 24;
    ao->o |= ((getnum (ao->a[0]) >> 8) & 0xff) << 16;
    ao->o |= ((getnum (ao->a[0]) >> 16) & 0xff) << 8;
    break;
   case TYPE_UDF:
    {


     
# 6257 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
    unsigned int 
# 6257 "project/radare2/libr/asm/arch/arm/armass.c"
         n = getnum (ao->a[0]);
     ao->o |= 0xe7;
     ao->o |= (n & 0xf) << 24;
     ao->o |= ((n >> 4) & 0xff) << 16;
     ao->o |= ((n >> 12) & 0xf) << 8;
    }
    break;
   case TYPE_ARI:
    if (!ao->a[2]) {
     ao->a[2] = ao->a[1];
     ao->a[1] = ao->a[0];
    }
    reg = getreg (ao->a[0]);
    if (reg == -1) {
     return 0;
    }
    ao->o |= reg << 20;

    reg = getreg (ao->a[1]);
    if (reg == -1) {
     return 0;
    }
    ao->o |= reg << 8;
    reg = getreg (ao->a[2]);
    if (reg == -1) {
     int imm = getnum(ao->a[2]);
     if (imm && !(imm & (imm - 1)) && imm > 255) {
      int r;
      for (r = 0; r != 32; r += 2) {
       if (!(imm & ~0xff)) {
        ao->o |= (r << 15) | (imm << 24) | 2;
        break;
       }
       imm = (imm << 2) | (imm >> 30);
      }
     } else {
      ao->o |= (imm << 24) | 2;
     }
    } else {
     ao->o |= reg << 24;
    }
    if (ao->a[3]) {
     ao->o |= getshift(ao->a[3]);
    }
    break;
   case TYPE_SWP:
    {
    int a1 = getreg (ao->a[1]);
    if (a1) {
     ao->o = 0xe1;
     ao->o |= (getreg (ao->a[0]) << 4) << 16;
     ao->o |= (0x90 + a1) << 24;
     if (ao->a[2]) {
      ao->o |= (getreg (ao->a[2] + 1)) << 8;
     } else {
      return 0;
     }
    }
    if (0xff == ((ao->o >> 16) & 0xff)) {
     return 0;
    }
    }
    break;
   case TYPE_MOV:
    if (!strcmpnull (ao->op, "movs")) {
     ao->o = 0xb0e1;
    }
    ao->o |= getreg (ao->a[0]) << 20;
    ret = getreg (ao->a[1]);
    if (ret != -1) {
     ao->o |= ret << 24;
    } else {
     int immed = getimmed8 (ao->a[1]);
     if (err) {
      return 0;
     }
     ao->o |= 0xa003 | (immed & 0xff) << 24 | (immed >> 8) << 16;
    }
    break;
   case TYPE_MOVW:
    reg = getreg (ao->a[0]);
    if (reg == -1) {
     return 0;
    }
    ao->o |= getreg (ao->a[0]) << 20;
    ret = getnum (ao->a[1]);

    ao->o |= 0x3 | ret << 24;
    ao->o |= (ret & 0xf000) >> 4;
    ao->o |= (ret & 0xf00) << 8;
    break;
   case TYPE_MOVT:
    ao->o |= getreg (ao->a[0]) << 20;
    ret = getnum (ao->a[1]);

    ao->o |= 0x4003 | ret << 24;
    ao->o |= (ret & 0xf000) >> 4;
    ao->o |= (ret & 0xf00) << 8;
    break;
   case TYPE_MUL:
    if (!strcmpnull (ao->op, "mul")) {
     ret = getreg (ao->a[0]);
     a = getreg (ao->a[1]);
     b = getreg (ao->a[2]);
     if (b == -1) {
      b = a;
      a = ret;
     }
     if (ret == -1 || a == -1) {
      return 0;
     }
     ao->o |= ret << 8;
     ao->o |= a << 24;
     ao->o |= b << 16;
    } else {
     low = getreg (ao->a[0]);
     high = getreg (ao->a[1]);
     a = getreg (ao->a[2]);
     b = getreg (ao->a[3]);
     if (low == -1 || high == -1 || a == -1 || b == -1) {
      return 0;
     }
     if (!strcmpnull (ao->op, "smlal")) {
      ao->o |= low << 20;
      ao->o |= high << 8;
      ao->o |= a << 24;
      ao->o |= b << 16;
     } else if (!strncmp (ao->op, "smla", 4)) {
      if (low > 14 || high > 14 || a > 14) {
       return 0;
      }
      ao->o |= low << 8;
      ao->o |= high << 24;
      ao->o |= a << 16;
      ao->o |= b << 20;
      break;
     } else {
      ao->o |= low << 20;
      ao->o |= high << 8;
      ao->o |= a << 24;
      ao->o |= b << 16;
     }
    }
    break;
   case TYPE_TST:
    a = getreg (ao->a[0]);
    b = getreg (ao->a[1]);
    if (b == -1) {
     int y, z;
     b = getnum (ao->a[1]);
     if (b >= 0 && b <= 0xff) {
      ao->o = 0x50e3;

      ao->o |= (a << 8);
      ao->o |= ((b & 0xff) << 24);
     } else
     if (findyz (b, &y, &z)) {
      ao->o = 0x50e3;
      ao->o |= (y << 24);
      ao->o |= (z << 16);
     } else {
      
# 6418 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
     fprintf(__stderrp,
# 6418 "project/radare2/libr/asm/arch/arm/armass.c"
     "Parameter %d out0x3000a0e1 of range (0-255)\n", (int)b
# 6418 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
     )
# 6418 "project/radare2/libr/asm/arch/arm/armass.c"
                                                                      ;
      return 0;
     }
    } else {
     ao->o |= (a << 8);
     ao->o |= (b << 24);
     if (ao->a[2]) {
      ao->o |= getshift (ao->a[2]);
     }
    }
    if (ao->a[2]) {
     int n = getnum (ao->a[2]);
     if (n & 1) {
      
# 6431 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
     fprintf(__stderrp,
# 6431 "project/radare2/libr/asm/arch/arm/armass.c"
     "Invalid multiplier\n"
# 6431 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
     )
# 6431 "project/radare2/libr/asm/arch/arm/armass.c"
                                     ;
      return 0;
     }
     ao->o |= (n >> 1) << 16;
    }
    break;
   case TYPE_SHFT:
    reg = getreg (ao->a[2]);
    if (reg == -1 || reg > 14) {
     return 0;
    }
    ao->o |= reg << 16;

    reg = getreg (ao->a[0]);
    if (reg == -1 || reg > 14) {
     return 0;
    }
    ao->o |= reg << 20;

    reg = getreg (ao->a[1]);
    if (reg == -1 || reg > 14) {
     return 0;
    }
    ao->o |= reg << 24;
    break;
   case TYPE_REV:
    reg = getreg (ao->a[0]);
    if (reg == -1 || reg > 14) {
     return 0;
    }
    ao->o |= reg << 20;

    reg = getreg (ao->a[1]);
    if (reg == -1 || reg > 14) {
     return 0;
    }
    ao->o |= reg << 24;

    break;
   case TYPE_ENDIAN:
    if (!strcmp (ao->a[0], "le")) {
     ao->o |= 0;
    } else if (!strcmp (ao->a[0], "be")) {
     ao->o |= 0x20000;
    } else {
     return 0;
    }
    break;
   case TYPE_COPROC:

    if (ao->a[0]) {
     coproc = getnum (ao->a[0] + 1);
     if (coproc == -1 || coproc > 9) {
      return 0;
     }
     ao->o |= coproc << 16;
    }

    opc = getnum (ao->a[1]);
    if (opc == -1 || opc > 7) {
     return 0;
    }
    ao->o |= opc << 13;

    reg = getreg (ao->a[2]);
    if (reg == -1 || reg > 14) {
     return 0;
    }
    ao->o |= reg << 20;


    const char *a3 = ao->a[3];
    if (a3) {
     coproc = getnum (a3 + 1);
     if (coproc == -1 || coproc > 15) {
      return 0;
     }
     ao->o |= coproc << 8;
    }

    const char *a4 = ao->a[4];
    if (a4) {
     coproc = getnum (ao->a[4] + 1);
     if (coproc == -1 || coproc > 15) {
      return 0;
     }
     ao->o |= coproc << 24;
    }

    coproc = getnum (ao->a[5]);
    if (coproc > -1) {
     if (coproc > 7) {
      return 0;
     }

     ao->o |= coproc << 29;
    }

    break;
   case TYPE_CLZ:
    ao->o |= 1 << 28;

    reg = getreg (ao->a[0]);
    if (reg == -1 || reg > 14) {
     return 0;
    }
    ao->o |= reg << 20;

    reg = getreg (ao->a[1]);
    if (reg == -1 || reg > 14) {
     return 0;
    }
    ao->o |= reg << 24;

    break;
   case TYPE_NEG:
    if (!ao->a[0] || !ao->a[1]) {
     return 0;
    }
    ao->a[2] = "0";
    int len = strlen (ao->a[1]) + 1;
    
# 6552 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
   __builtin___memmove_chk (
# 6552 "project/radare2/libr/asm/arch/arm/armass.c"
   ao->a[0] + 1
# 6552 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
   , 
# 6552 "project/radare2/libr/asm/arch/arm/armass.c"
   ao->a[0], ao->a[1] - ao->a[0] + len
# 6552 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
   , __builtin_object_size (
# 6552 "project/radare2/libr/asm/arch/arm/armass.c"
   ao->a[0] + 1
# 6552 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
   , 0))
# 6552 "project/radare2/libr/asm/arch/arm/armass.c"
                                                              ;
    ao->a[0]++;
    ao->a[1]++;
    
# 6555 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
   __builtin___strncpy_chk (
# 6555 "project/radare2/libr/asm/arch/arm/armass.c"
   ao->op
# 6555 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
   , 
# 6555 "project/radare2/libr/asm/arch/arm/armass.c"
   "rsbs", 5
# 6555 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
   , __builtin_object_size (
# 6555 "project/radare2/libr/asm/arch/arm/armass.c"
   ao->op
# 6555 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
   , 2 > 1 ? 1 : 0))
# 6555 "project/radare2/libr/asm/arch/arm/armass.c"
                              ;
    arm_assemble (ao, off, str);
    break;
   }
   }
   return 1;
  }
 }
 return 0;
}

typedef int (*AssembleFunction)(ArmOpcode *, 
# 6566 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                            unsigned long long
# 6566 "project/radare2/libr/asm/arch/arm/armass.c"
                                                , const char *);
static AssembleFunction assemble[2] = { &arm_assemble, &thumb_assemble };


# 6569 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
unsigned int 
# 6569 "project/radare2/libr/asm/arch/arm/armass.c"
    armass_assemble(const char *str, 
# 6569 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                                     unsigned long long 
# 6569 "project/radare2/libr/asm/arch/arm/armass.c"
                                          off, int thumb) {
 int i, j;
 char buf[128];
 ArmOpcode aop = {.off = off};
 for (i = j = 0; i < sizeof (buf) - 1 && str[j]; i++, j++) {
  if (str[j] == '#') {
   i--; continue;
  }
  buf[i] = tolower ((const 
# 6577 "project/radare2/libr/asm/arch/arm/armass.c" 3 4
                          unsigned char
# 6577 "project/radare2/libr/asm/arch/arm/armass.c"
                             )str[j]);
 }
 buf[i] = 0;
 arm_opcode_parse (&aop, buf);
 aop.off = off;
 if (thumb < 0 || thumb > 1) {
  return -1;
 }
 if (assemble[thumb] (&aop, off, buf) <= 0) {

  return -1;
 }
 return aop.o;
}
