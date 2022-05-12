# 0 "project/radare2/shlr/spp/spp.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/shlr/spp/spp.c"


# 1 "project/radare2/shlr/spp/spp.h" 1



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
# 5 "project/radare2/shlr/spp/spp.h" 2
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








# 6 "project/radare2/shlr/spp/spp.h" 2
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
# 7 "project/radare2/shlr/spp/spp.h" 2
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 1 3 4
# 99 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 8 "project/radare2/shlr/spp/spp.h" 2
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdbool.h" 1 3 4
# 9 "project/radare2/shlr/spp/spp.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 3 4

extern int * __error(void);


# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 2 3 4
# 10 "project/radare2/shlr/spp/spp.h" 2
# 86 "project/radare2/shlr/spp/spp.h"

# 86 "project/radare2/shlr/spp/spp.h"
typedef struct s_strbuf_t {
 int len;
 char *ptr;
 int ptrlen;
 char buf[64];
} SStrBuf;


typedef struct {
 SStrBuf *cout;
 FILE *fout;
 int size;
} Output;

typedef struct SppState {
 int lineno;
 int echo[128];
 int ifl;
} SppState;

typedef struct SppBuf {
    char *lbuf;
    int lbuf_s;
    int lbuf_n;
} SppBuf;







typedef struct Tag {
 const char *name;
 int (*callback) (SppState *state, Output *out, char *buf);
} SppTag;

typedef struct Arg {
 const char *flag;
 const char *desc;
 int has_arg;
 int (*callback) (char *arg);
} SppArg;

typedef struct Proc {
 const char *name;
 struct Tag **tags;
 struct Arg **args;
 int (*eof) (SppState *state, Output *out, char *buf);
 int (*fputs) (Output *out, char *buf);
 char *tag_pre;
 char *tag_post;
 char *token;
 char *multiline;
 int chop;
 int tag_begin;
 int default_echo;
 SppState state;
 SppBuf buf;
} SppProc;

typedef struct spp_t {
 SppProc *proc;
 Output *out;
} Spp;

__attribute__((visibility("default"))) int spp_file(const char *file, Output *out);
__attribute__((visibility("default"))) int spp_run(char *buf, Output *out);
__attribute__((visibility("default"))) void spp_eval(char *buf, Output *out);
__attribute__((visibility("default"))) void spp_proc_eval(SppProc *p, char *buf, Output *out);
__attribute__((visibility("default"))) void spp_io(FILE *in, Output *out);
__attribute__((visibility("default"))) void spp_proc_list(void);
__attribute__((visibility("default"))) void spp_proc_list_kw(void);
__attribute__((visibility("default"))) void spp_proc_set(SppProc *p, const char *arg, int fail);

__attribute__((visibility("default"))) Spp *spp_new(SppProc *proc);
__attribute__((visibility("default"))) char *spp_parse(Spp *s, const char *input);
__attribute__((visibility("default"))) void spp_free(Spp *s);
# 4 "project/radare2/shlr/spp/spp.c" 2
# 1 "project/radare2/shlr/spp/r_api.h" 1
# 14 "project/radare2/shlr/spp/r_api.h"
SStrBuf *r_strbuf_new(const char *s);

# 15 "project/radare2/shlr/spp/r_api.h" 3 4
_Bool 
# 15 "project/radare2/shlr/spp/r_api.h"
    r_strbuf_set(SStrBuf *sb, const char *s);

# 16 "project/radare2/shlr/spp/r_api.h" 3 4
_Bool 
# 16 "project/radare2/shlr/spp/r_api.h"
    r_strbuf_append(SStrBuf *sb, const char *s);
char *r_strbuf_get(SStrBuf *sb);
char *r_strbuf_drain(SStrBuf *sb);
void r_strbuf_free(SStrBuf *sb);
void r_strbuf_fini(SStrBuf *sb);
void r_strbuf_init(SStrBuf *sb);
int r_sys_setenv(const char *key, const char *value);
char *r_sys_getenv(const char *key);
int r_sys_getpid(void);





__attribute__((visibility("default"))) void out_printf(Output *out, char *str, ...) __attribute__ ((format (printf, 2, 3)));
# 5 "project/radare2/shlr/spp/spp.c" 2
# 1 "project/radare2/shlr/spp/config.h" 1
# 16 "project/radare2/shlr/spp/config.h"
# 1 "project/radare2/shlr/spp/p/sh.h" 1
# 10 "project/radare2/shlr/spp/p/sh.h"
static int sh_default (SppState *state, Output *out, char *buf) {
# 28 "project/radare2/shlr/spp/p/sh.h"
 int r = system (buf);
 if (
# 29 "project/radare2/shlr/spp/p/sh.h" 3 4
    (*__error())
# 29 "project/radare2/shlr/spp/p/sh.h"
         ) {
  printf ("system '%s' (%d) failed: %s\n", buf, r, strerror (
# 30 "project/radare2/shlr/spp/p/sh.h" 3 4
                                                            (*__error())
# 30 "project/radare2/shlr/spp/p/sh.h"
                                                                 ));
 }

 return 0;
}

static int sh_pipe_enabled = 0;
static char *sh_pipe_cmd = 
# 37 "project/radare2/shlr/spp/p/sh.h" 3 4
                          ((void *)0)
# 37 "project/radare2/shlr/spp/p/sh.h"
                              ;

static int sh_pipe (SppState *state, Output *out, char *buf) {
 sh_pipe_enabled = 1;
 free (sh_pipe_cmd);
 sh_pipe_cmd = strdup (buf);
 return 0;
}

static int sh_endpipe (SppState *state, Output *out, char *buf) {
 sh_pipe_enabled = 0;
 free (sh_pipe_cmd);
 sh_pipe_cmd = 
# 49 "project/radare2/shlr/spp/p/sh.h" 3 4
              ((void *)0)
# 49 "project/radare2/shlr/spp/p/sh.h"
                  ;
 return 0;
}

static int sh_fputs (Output *out, char *buf) {
 if (sh_pipe_enabled) {
  char str[1024];
  
# 56 "project/radare2/shlr/spp/p/sh.h" 3 4
 __builtin___sprintf_chk (
# 56 "project/radare2/shlr/spp/p/sh.h"
 str
# 56 "project/radare2/shlr/spp/p/sh.h" 3 4
 , 0, __builtin_object_size (
# 56 "project/radare2/shlr/spp/p/sh.h"
 str
# 56 "project/radare2/shlr/spp/p/sh.h" 3 4
 , 2 > 1 ? 1 : 0), 
# 56 "project/radare2/shlr/spp/p/sh.h"
 "echo '%s' | %s", buf, sh_pipe_cmd
# 56 "project/radare2/shlr/spp/p/sh.h" 3 4
 )
# 56 "project/radare2/shlr/spp/p/sh.h"
                                                  ;

  int r = system (str);
  if (
# 59 "project/radare2/shlr/spp/p/sh.h" 3 4
     (*__error())
# 59 "project/radare2/shlr/spp/p/sh.h"
          ) {
   printf ("system '%s' (%d) failed: %s\n", str, r, strerror (
# 60 "project/radare2/shlr/spp/p/sh.h" 3 4
                                                             (*__error())
# 60 "project/radare2/shlr/spp/p/sh.h"
                                                                  ));
  }

 } else {
  out_printf (out, "%s", buf);
 }
 return 0;
}

static struct Tag sh_tags[] = {
 { "pipe", sh_pipe },
 { "endpipe", sh_endpipe },
 { 
# 72 "project/radare2/shlr/spp/p/sh.h" 3 4
  ((void *)0)
# 72 "project/radare2/shlr/spp/p/sh.h"
      , sh_default },
 { 
# 73 "project/radare2/shlr/spp/p/sh.h" 3 4
  ((void *)0) 
# 73 "project/radare2/shlr/spp/p/sh.h"
       }
};

static struct Arg sh_args[] = {
 { 
# 77 "project/radare2/shlr/spp/p/sh.h" 3 4
  ((void *)0) 
# 77 "project/radare2/shlr/spp/p/sh.h"
       }
};

__attribute__ ((visibility ("hidden"))) struct Proc sh_proc = {
 .name = "sh",
 .tags = (struct Tag **)sh_tags,
 .args = (struct Arg **)sh_args,
 .eof = 
# 84 "project/radare2/shlr/spp/p/sh.h" 3 4
       ((void *)0)
# 84 "project/radare2/shlr/spp/p/sh.h"
           ,
 .token = 
# 85 "project/radare2/shlr/spp/p/sh.h" 3 4
         ((void *)0)
# 85 "project/radare2/shlr/spp/p/sh.h"
             ,
 .tag_pre = "{{",
 .tag_post = "}}",
 .fputs = sh_fputs,
 .multiline = "\\\n",
 .default_echo = 1,
 .chop = 0,
 .tag_begin = 0,
};
# 17 "project/radare2/shlr/spp/config.h" 2


# 1 "project/radare2/shlr/spp/p/spp.h" 1






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


# 202 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_gid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_gid_t.h" 3 4
typedef __darwin_gid_t gid_t;
# 203 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 2 3 4




int faccessat(int, const char *, int, int) ;
int fchownat(int, const char *, uid_t, gid_t, int) ;
int linkat(int, const char *, int, const char *, int) ;
ssize_t readlinkat(int, const char *, char *, size_t) ;
int symlinkat(const char *, int, const char *) ;
int unlinkat(int, const char *, int) ;


# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 2 3 4
# 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_useconds_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_useconds_t.h" 3 4
typedef __darwin_useconds_t useconds_t;
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 2 3 4
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
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 3 4
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
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timespec.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timespec.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_time_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_suseconds_t.h" 3 4
typedef __darwin_suseconds_t suseconds_t;
# 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_setsize.h" 1 3 4
# 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_set.h" 1 3 4
# 102 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_clr.h" 1 3 4
# 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_isset.h" 1 3 4
# 104 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_zero.h" 1 3 4
# 105 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_copy.h" 1 3 4
# 108 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4






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


# 8 "project/radare2/shlr/spp/p/spp.h" 2
# 23 "project/radare2/shlr/spp/p/spp.h"

# 23 "project/radare2/shlr/spp/p/spp.h"
static char *spp_var_get(char *var) {
 return r_sys_getenv (var);
}

static int spp_var_set(const char *var, const char *val) {
 return r_sys_setenv (var, val);
}



static char *cmd_to_str(const char *cmd) {
 char *out = (char *)calloc (4096, 1);
 char *tout;
 int ret = 0, len = 0, outlen = 4096;
 FILE *fd = popen (cmd, "r");
 while (fd) {
  len += ret;
  ret = fread (out + len, 1, 1023, fd);
  if (ret < 1) {
   pclose (fd);
   fd = 
# 43 "project/radare2/shlr/spp/p/spp.h" 3 4
       ((void *)0)
# 43 "project/radare2/shlr/spp/p/spp.h"
           ;
  }
  if (ret + 1024 > outlen) {
   outlen += 4096;
   tout = realloc (out, outlen);
   if (!tout) {
    if (fd) {
     pclose (fd);
     fd = 
# 51 "project/radare2/shlr/spp/p/spp.h" 3 4
         ((void *)0)
# 51 "project/radare2/shlr/spp/p/spp.h"
             ;
    }
    fprintf (
# 53 "project/radare2/shlr/spp/p/spp.h" 3 4
            __stderrp
# 53 "project/radare2/shlr/spp/p/spp.h"
                  , "Out of memory.\n");
    break;
   }
   out = tout;
  }
 }
 out[len] = '\0';
 return out;
}


static int spp_set (SppState *state, Output *out, char *buf) {
 char *eq, *val = "";
 if (!state->echo[state->ifl]) {
  return 0;
 }
 for (eq=buf; eq[0]; eq++) {
  switch (eq[0]) {
  case '-':
  case '.':
   eq[0] = '_';
   break;
  }
 }
 eq = strchr (buf, ' ');
 if (eq) {
  *eq = '\0';
  val = eq + 1;
 }
 if (spp_var_set (buf, val) == -1) {
  fprintf (
# 83 "project/radare2/shlr/spp/p/spp.h" 3 4
          __stderrp
# 83 "project/radare2/shlr/spp/p/spp.h"
                , "Invalid variable name '%s' at line %d\n", buf, state->lineno);
 }
 return 0;
}

static int spp_get (SppState *state, Output *out, char *buf) {
 char *var;
 if (!state->echo[state->ifl]) {
  return 0;
 }
 var = spp_var_get (buf);
 if (var) {
  out_printf (out, "%s", var);
 }
 return 0;
}

static int spp_getrandom (SppState *state, Output *out, char *buf) {
 int max;
 if (!state->echo[state->ifl]) {
  return 0;
 }




 srandom (r_sys_getpid ());

 max = atoi (buf);
 if (max > 0) {
  max = (int)(rand () % max);
 }
 out_printf (out, "%d", max);
 return 0;
}

static int spp_add (SppState *state, Output *out, char *buf) {
 char res[32];
 char *var, *eq = strchr (buf, ' ');
 int ret = 0;
 if (!state->echo[state->ifl]) {
  return 0;
 }
 if (eq) {
  *eq = '\0';
  var = spp_var_get (buf);
  if (var) {
   ret = atoi (var);
  }
  ret += atoi (eq + 1);
  
# 133 "project/radare2/shlr/spp/p/spp.h" 3 4
 __builtin___snprintf_chk (
# 133 "project/radare2/shlr/spp/p/spp.h"
 res
# 133 "project/radare2/shlr/spp/p/spp.h" 3 4
 , 
# 133 "project/radare2/shlr/spp/p/spp.h"
 sizeof (res)
# 133 "project/radare2/shlr/spp/p/spp.h" 3 4
 , 0, __builtin_object_size (
# 133 "project/radare2/shlr/spp/p/spp.h"
 res
# 133 "project/radare2/shlr/spp/p/spp.h" 3 4
 , 2 > 1 ? 1 : 0), 
# 133 "project/radare2/shlr/spp/p/spp.h"
 "%d", ret
# 133 "project/radare2/shlr/spp/p/spp.h" 3 4
 )
# 133 "project/radare2/shlr/spp/p/spp.h"
                                        ;
  r_sys_setenv (buf, res);
 } else {

 }
 return 0;
}

static int spp_sub (SppState *state, Output *out, char *buf) {
 char *eq = strchr(buf, ' ');
 char *var;
 int ret = 0;
 if (!state->echo[state->ifl]) {
  return 0;
 }
 if (eq) {
  *eq = '\0';
  var = spp_var_get (buf);
  ret = var? atoi (var): 0;
  ret -= atoi (eq + 1);
  r_sys_setenv (buf, eq + 1);
 } else {

 }
 return ret;
}

static int spp_trace (SppState *state, Output *out, char *buf) {
 if (state->echo[state->ifl]) {
  fprintf (
# 162 "project/radare2/shlr/spp/p/spp.h" 3 4
          __stderrp
# 162 "project/radare2/shlr/spp/p/spp.h"
                , "%.1000s\n", buf);
 }
 return 0;
}


static int spp_echo (SppState *state, Output *out, char *buf) {
 if (state->echo[state->ifl]) {
  out_printf (out, "%s", buf);
 }

 return 0;
}

static int spp_error (SppState *state, Output *out, char *buf) {
 if (!state->echo[state->ifl]) {
  return 0;
 }
 fprintf (
# 180 "project/radare2/shlr/spp/p/spp.h" 3 4
         __stderrp
# 180 "project/radare2/shlr/spp/p/spp.h"
               , "ERROR: %s (line=%d)\n", buf, state->lineno);
 return -1;
}

static int spp_warning (SppState *state, Output *out, char *buf) {
 if (!state->echo[state->ifl]) {
  return 0;
 }
 fprintf (
# 188 "project/radare2/shlr/spp/p/spp.h" 3 4
         __stderrp
# 188 "project/radare2/shlr/spp/p/spp.h"
               , "WARNING: %s (line=%d)\n", buf, state->lineno);
 return 0;
}

static int spp_system (SppState *state, Output *out, char *buf) {
 if (!state->echo[state->ifl]) {
  return 0;
 }

 char *str = cmd_to_str (buf);
 out_printf (out, "%s", str);
 free (str);

 return 0;
}

static int spp_include (SppState *state, Output *out, char *buf) {
 char *incdir;
 if (!state->echo[state->ifl]) {
  return 0;
 }
 incdir = getenv("SPP_INCDIR");
 if (incdir) {
  char *b = strdup (incdir);
  char *p = realloc (b, strlen (b) + strlen (buf) + 3);
  if (p) {
   b = p;
   
# 215 "project/radare2/shlr/spp/p/spp.h" 3 4
  __builtin___strcat_chk (
# 215 "project/radare2/shlr/spp/p/spp.h"
  b
# 215 "project/radare2/shlr/spp/p/spp.h" 3 4
  , 
# 215 "project/radare2/shlr/spp/p/spp.h"
  "/"
# 215 "project/radare2/shlr/spp/p/spp.h" 3 4
  , __builtin_object_size (
# 215 "project/radare2/shlr/spp/p/spp.h"
  b
# 215 "project/radare2/shlr/spp/p/spp.h" 3 4
  , 2 > 1 ? 1 : 0))
# 215 "project/radare2/shlr/spp/p/spp.h"
                 ;
   
# 216 "project/radare2/shlr/spp/p/spp.h" 3 4
  __builtin___strcat_chk (
# 216 "project/radare2/shlr/spp/p/spp.h"
  b
# 216 "project/radare2/shlr/spp/p/spp.h" 3 4
  , 
# 216 "project/radare2/shlr/spp/p/spp.h"
  buf
# 216 "project/radare2/shlr/spp/p/spp.h" 3 4
  , __builtin_object_size (
# 216 "project/radare2/shlr/spp/p/spp.h"
  b
# 216 "project/radare2/shlr/spp/p/spp.h" 3 4
  , 2 > 1 ? 1 : 0))
# 216 "project/radare2/shlr/spp/p/spp.h"
                 ;
   spp_file (b, out);
  }
  free (b);
 } else {
  spp_file(buf, out);
 }
 return 0;
}

static int spp_if (SppState *state, Output *out, char *buf) {
 char *var = spp_var_get(buf);
 state->echo[state->ifl + 1] = (var && *var != '0' && *var != '\0') ? 1 : 0;
 return 1;
}


static int spp_ifeq (SppState *state, Output *out, char *buf) {
 char *value = buf;
 char *eq = strchr(buf, ' ');
 if (eq) {
  *eq = '\0';
  value = spp_var_get(value);
  if (value && !strcmp(value, eq+1)) {
   state->echo[state->ifl + 1] = 1;
  } else state->echo[state->ifl + 1] = 0;

 } else {
  value = spp_var_get(buf);
  if (!value || *value=='\0')
   state->echo[state->ifl + 1] = 1;
  else state->echo[state->ifl + 1] = 0;

 }
 return 1;
}

static int spp_hex (SppState *state, Output *out, char *buf) {
 int i;
 for(i = 0; buf[i]; i++) {
  if (buf[i] >= '0' && buf[i] <= '9') {
   int b;
   unsigned int ch;
   b = buf[i + 2];
   buf[i + 2] = '\0';
   sscanf(buf + i, "%02x", &ch);
   out_printf (out, "%c", ch);
   buf[i + 2] = b;
   buf = buf + 2;
  }
 }
 return 0;
}

static int spp_grepline (SppState *state, Output *out, char *buf) {
 FILE *fd;
 char b[1024];
 char *ptr;
 int line;

 if (!state->echo[state->ifl]) return 1;
 ptr = strchr(buf, ' ');
 if (ptr) {
  *ptr= '\0';
  fd = fopen (buf, "r");
  line = atoi (ptr+1);
  if (fd) {
   while (!feof (fd) && line--) {
    if (!fgets (b, 1023, fd)) {
     break;
    }
   }
   fclose (fd);
   out_printf (out, "%s", b);
  } else {
   fprintf(
# 291 "project/radare2/shlr/spp/p/spp.h" 3 4
          __stderrp
# 291 "project/radare2/shlr/spp/p/spp.h"
                , "Unable to open '%s'\n", buf);
  }
 }
 return 0;
}

static int spp_else (SppState *state, Output *out, char *buf) {
 state->echo[state->ifl] = state->echo[state->ifl] ? 0 : 1;
 return 0;
}

static int spp_ifnot (SppState *state, Output *out, char *buf) {
 spp_if (state, out, buf);
 spp_else (state, out, buf);
 return 1;
}

static int spp_ifin (SppState *state, Output *out, char *buf) {
 char *var, *ptr;
 if (!state->echo[state->ifl]) {
  return 1;
 }
 ptr = strchr (buf, ' ');
 state->echo[state->ifl + 1] = 0;
 if (ptr) {
  *ptr='\0';
  var = getenv(buf);
  if (strstr (ptr + 1, var)) {
   state->echo[state->ifl + 1] = 1;
  }
 }
 return 1;
}

static int spp_endif (SppState *state, Output *out, char *buf) {
 return -1;
}

static int spp_default (SppState *state, Output *out, char *buf) {
 if (!state->echo[state->ifl]) {
  return 0;
 }
 if (buf[-1] != ';') {
  fprintf (
# 334 "project/radare2/shlr/spp/p/spp.h" 3 4
          __stderrp
# 334 "project/radare2/shlr/spp/p/spp.h"
                , "WARNING: invalid command: '%s' at line %d\n", buf, state->lineno);
 }
 return 0;
}


static FILE *spp_pipe_fd = 
# 340 "project/radare2/shlr/spp/p/spp.h" 3 4
                          ((void *)0)
# 340 "project/radare2/shlr/spp/p/spp.h"
                              ;


static int spp_pipe (SppState *state, Output *out, char *buf) {

 spp_pipe_fd = popen (buf, "w");

 return 0;
}

static char *spp_switch_str = 
# 350 "project/radare2/shlr/spp/p/spp.h" 3 4
                             ((void *)0)
# 350 "project/radare2/shlr/spp/p/spp.h"
                                 ;

static int spp_switch (SppState *state, Output *out, char *buf) {
 char *var = spp_var_get (buf);
 if (var) {
  spp_switch_str = strdup (var);
 } else {
  spp_switch_str = strdup ("");
 }
 return 1;
}

static int spp_case (SppState *state, Output *out, char *buf) {
 state->echo[state->ifl] = strcmp (buf, spp_switch_str)?0:1;
 return 0;
}

static int spp_endswitch (SppState *state, Output *out, char *buf) {
 free (spp_switch_str);
 spp_switch_str = 
# 369 "project/radare2/shlr/spp/p/spp.h" 3 4
                 ((void *)0)
# 369 "project/radare2/shlr/spp/p/spp.h"
                     ;
 return -1;
}

static int spp_endpipe (SppState *state, Output *out, char *buf) {


 int ret = 0, len = 0;
 int outlen = 4096;
 char *str = (char *)malloc (4096);
 char *tstr;
 do {
  len += ret;
  ret = fread (str + len, 1, 1023, spp_pipe_fd);
  if (ret + 1024 > outlen) {
   outlen += 4096;
   tstr = realloc (str, outlen);
   if (!tstr) {
    fprintf (
# 387 "project/radare2/shlr/spp/p/spp.h" 3 4
            __stderrp
# 387 "project/radare2/shlr/spp/p/spp.h"
                  , "Out of memory.\n");
    break;
   }
   str = tstr;
  }
 } while (ret > 0);
 str[len] = '\0';
 out_printf (out, "%s", str);
 if (spp_pipe_fd) {
  pclose (spp_pipe_fd);
 }
 spp_pipe_fd = 
# 398 "project/radare2/shlr/spp/p/spp.h" 3 4
              ((void *)0)
# 398 "project/radare2/shlr/spp/p/spp.h"
                  ;
 free (str);

 return 0;
}

static int spp_fputs (Output *out, char *buf) {

 if (spp_pipe_fd) {
  fprintf (spp_pipe_fd, "%s", buf);
 } else

 {
  out_printf (out, "%s", buf);
 }
 return 0;
}

static struct Tag spp_tags[] = {
 { "get", spp_get },
 { "hex", spp_hex },
 { "getrandom", spp_getrandom },
 { "grepline", spp_grepline },
 { "set", spp_set },
 { "add", spp_add },
 { "sub", spp_sub },
 { "switch", spp_switch },
 { "case", spp_case },
 { "endswitch", spp_endswitch },
 { "echo", spp_echo },
 { "error", spp_error },
 { "warning", spp_warning },
 { "trace", spp_trace },
 { "ifin", spp_ifin },
 { "ifnot", spp_ifnot },
 { "ifeq", spp_ifeq },
 { "if", spp_if },
 { "else", spp_else },
 { "endif", spp_endif },
 { "pipe", spp_pipe },
 { "endpipe", spp_endpipe },
 { "include", spp_include },
 { "system", spp_system },
 { 
# 441 "project/radare2/shlr/spp/p/spp.h" 3 4
  ((void *)0)
# 441 "project/radare2/shlr/spp/p/spp.h"
      , spp_default },
 { 
# 442 "project/radare2/shlr/spp/p/spp.h" 3 4
  ((void *)0) 
# 442 "project/radare2/shlr/spp/p/spp.h"
       }
};

static int spp_arg_i (char *arg) {
 r_sys_setenv ("SPP_INCDIR", arg);
 return 0;
}

static int spp_arg_d (char *arg) {

 char *eq = strchr (arg, '=');
 if (eq) {
  *eq = '\0';
  spp_var_set (arg, eq+1);
 } else {
  spp_var_set (arg, "");
 }
 return 0;
}

static struct Arg spp_args[] = {
 { "-I", "add include directory", 1, spp_arg_i },
 { "-D", "define value of variable", 1, spp_arg_d },
 { 
# 465 "project/radare2/shlr/spp/p/spp.h" 3 4
  ((void *)0) 
# 465 "project/radare2/shlr/spp/p/spp.h"
       }
};

__attribute__ ((visibility ("hidden"))) struct Proc spp_proc = {
 .name = "spp",
 .tags = (struct Tag **)spp_tags,
 .args = (struct Arg **)spp_args,
 .token = " ",
 .eof = 
# 473 "project/radare2/shlr/spp/p/spp.h" 3 4
       ((void *)0)
# 473 "project/radare2/shlr/spp/p/spp.h"
           ,
 .tag_pre = "<{",
 .tag_post = "}>",
 .chop = 1,
 .fputs = spp_fputs,
 .multiline = 
# 478 "project/radare2/shlr/spp/p/spp.h" 3 4
             ((void *)0)
# 478 "project/radare2/shlr/spp/p/spp.h"
                 ,
 .default_echo = 1,
 .tag_begin = 0,
};
# 20 "project/radare2/shlr/spp/config.h" 2
# 1 "project/radare2/shlr/spp/p/acr.h" 1


static char *pkgname = 
# 3 "project/radare2/shlr/spp/p/acr.h" 3 4
                      ((void *)0)
# 3 "project/radare2/shlr/spp/p/acr.h"
                          ;
static char *version = 
# 4 "project/radare2/shlr/spp/p/acr.h" 3 4
                      ((void *)0)
# 4 "project/radare2/shlr/spp/p/acr.h"
                          ;
static char **slurp_ptr = 
# 5 "project/radare2/shlr/spp/p/acr.h" 3 4
                         ((void *)0)
# 5 "project/radare2/shlr/spp/p/acr.h"
                             ;

static int slurp_args(char *buf) {
 if (slurp_ptr) {
  *slurp_ptr = strdup (buf);
  slurp_ptr = 
# 10 "project/radare2/shlr/spp/p/acr.h" 3 4
             ((void *)0)
# 10 "project/radare2/shlr/spp/p/acr.h"
                 ;
  return 1;
 }
 return 0;
}

static int acr_default (SppState *state, Output *out, char *buf) {

 if (slurp_args (buf)) {
  return 0;
 }
 if (!strcmp (buf, "PKGNAME")) {
  slurp_ptr = &pkgname;
 } else if (!strcmp (buf, "VERSION")) {
  slurp_ptr = &version;
 }
 return 0;
}

static int acr_eof (SppState *state, Output *out, char *buf) {
 printf ("Report:\n pkgname: %s\n version: %s\n", pkgname, version);
 return 0;
}

__attribute__ ((visibility ("hidden"))) struct Tag acr_tags[] = {
 { 
# 35 "project/radare2/shlr/spp/p/acr.h" 3 4
  ((void *)0)
# 35 "project/radare2/shlr/spp/p/acr.h"
      , acr_default },
 { 
# 36 "project/radare2/shlr/spp/p/acr.h" 3 4
  ((void *)0) 
# 36 "project/radare2/shlr/spp/p/acr.h"
       }
};

__attribute__ ((visibility ("hidden"))) struct Arg acr_args[] = {
 { 
# 40 "project/radare2/shlr/spp/p/acr.h" 3 4
  ((void *)0) 
# 40 "project/radare2/shlr/spp/p/acr.h"
       }
};

__attribute__ ((visibility ("hidden"))) struct Proc acr_proc = {
 .name = "acr",
 .tags = (struct Tag **)acr_tags,
 .args = (struct Arg **)acr_args,
 .token = " ",
 .eof = &acr_eof,
 .tag_pre = 
# 49 "project/radare2/shlr/spp/p/acr.h" 3 4
           ((void *)0)
# 49 "project/radare2/shlr/spp/p/acr.h"
               ,
 .tag_post = 
# 50 "project/radare2/shlr/spp/p/acr.h" 3 4
            ((void *)0)
# 50 "project/radare2/shlr/spp/p/acr.h"
                ,
 .multiline = 
# 51 "project/radare2/shlr/spp/p/acr.h" 3 4
             ((void *)0)
# 51 "project/radare2/shlr/spp/p/acr.h"
                 ,
 .default_echo = 1,
 .chop = 0,
 .tag_begin = 0,
};
# 21 "project/radare2/shlr/spp/config.h" 2
# 1 "project/radare2/shlr/spp/p/pod.h" 1


static int pod_default (SppState *state, Output *out, char *buf) {
 out_printf (out, "DEFAULT: (%s)\n", buf);
 return 0;
}

static int pod_cut (SppState *state, Output *out, char *buf) {
 out_printf (out, "\n");
 state->echo[state->ifl] = 0;
 return 0;
}

static int pod_head1 (SppState *state, Output *out, char *buf) {
 state->echo[state->ifl] = 1;
 out_printf (out, "\n");
 if (!buf) {
  return 0;
 }
 out_printf (out, "%s\n", buf);
 int i, len = strlen (buf);
 for (i = 0; i < len; i++) {
  out_printf (out, "%c", '=');
 }
 out_printf (out, "\n");
 return 0;
}

static struct Tag pod_tags[] = {
 { "head1", pod_head1 },
 { "cut", pod_cut },
 { 
# 32 "project/radare2/shlr/spp/p/pod.h" 3 4
  ((void *)0)
# 32 "project/radare2/shlr/spp/p/pod.h"
      , pod_default },
 { 
# 33 "project/radare2/shlr/spp/p/pod.h" 3 4
  ((void *)0) 
# 33 "project/radare2/shlr/spp/p/pod.h"
       }
};

static struct Arg pod_args[] = {
 { 
# 37 "project/radare2/shlr/spp/p/pod.h" 3 4
  ((void *)0) 
# 37 "project/radare2/shlr/spp/p/pod.h"
       }
};

__attribute__ ((visibility ("hidden"))) struct Proc pod_proc = {
 .name = "pod",
 .tags = (struct Tag **)pod_tags,
 .args = (struct Arg **)pod_args,
 .token = " ",
 .eof = 
# 45 "project/radare2/shlr/spp/p/pod.h" 3 4
       ((void *)0)
# 45 "project/radare2/shlr/spp/p/pod.h"
           ,
 .tag_pre = "=",
 .tag_post = "\n",
 .multiline = 
# 48 "project/radare2/shlr/spp/p/pod.h" 3 4
             ((void *)0)
# 48 "project/radare2/shlr/spp/p/pod.h"
                 ,
 .default_echo = 0,
 .chop = 0,
 .tag_begin = 1,
};
# 22 "project/radare2/shlr/spp/config.h" 2
# 1 "project/radare2/shlr/spp/p/cpp.h" 1


static int cpp_default (SppState *state, Output *out, char *buf) {
 out_printf (out, "DEFAULT: (%s)\n", buf);
 return 0;
}

static int cpp_error (SppState *state, Output *out, char *buf) {
 out_printf (out, "\n");
 if (state->echo[state->ifl] && buf) {
  out_printf (out, "ERROR: %s (line=%d)\n", buf, state->lineno);
  return -1;
 }
 return 0;
}

static int cpp_warning (SppState *state, Output *out, char *buf) {
 out_printf (out,"\n");
 if (state->echo[state->ifl] && buf != 
# 19 "project/radare2/shlr/spp/p/cpp.h" 3 4
                                      ((void *)0)
# 19 "project/radare2/shlr/spp/p/cpp.h"
                                          ) {
  out_printf (out, "WARNING: line %d: %s\n", state->lineno, buf);
 }
 return 0;
}

static int cpp_if (SppState *state, Output *out, char *buf) {
 char *var = getenv (buf + ((*buf == '!') ? 1 : 0));
 if (var && *var == '1') {
  state->echo[state->ifl + 1] = 1;
 } else {
  state->echo[state->ifl + 1] = 0;
 }
 if (*buf == '!') {
  state->echo[state->ifl + 1] = !!!state->echo[state->ifl + 1];
 }
 return 1;
}

static int cpp_ifdef (SppState *state, Output *out, char *buf) {
 char *var = getenv (buf);
 state->echo[state->ifl + 1] = var? 1: 0;
 return 1;
}

static int cpp_else (SppState *state, Output *out, char *buf) {
 state->echo[state->ifl] = state->echo[state->ifl]? 0: 1;
 return 0;
}

static int cpp_ifndef (SppState *state, Output *out, char *buf) {
 cpp_ifdef (state, out, buf);
 cpp_else (state, out, buf);
 return 1;
}

static struct cpp_macro_t {
 char *name;
 char *args;
 char *body;
} cpp_macros[10];

static int cpp_macros_n = 0;

static void cpp_macro_add(char *name, char *args, char *body) {
 char *ptr;
 cpp_macros[cpp_macros_n].args = strdup(args);
 cpp_macros[cpp_macros_n].body = strdup(body);
 ptr = strchr (name, '(');
 if (ptr) {
  ptr[1] = '\0';
 }
 cpp_macros[cpp_macros_n].name = strdup(name);
 cpp_macros_n++;
}

static int cpp_fputs (Output *out, char *buf) {
 int i;
 for (i = 0; i < cpp_macros_n; i++) {
  if (strstr(buf, cpp_macros[i].name)) {
   fprintf (
# 79 "project/radare2/shlr/spp/p/cpp.h" 3 4
           __stderrp
# 79 "project/radare2/shlr/spp/p/cpp.h"
                 , "MACRO (%s) HIT\n",
    cpp_macros[i].name);
  }
 }
 out_printf (out, "%s", buf);
 return 0;
}

static int cpp_define (SppState *state, Output *out, char *buf) {
 char *eq = strchr (buf, ' ');
 if (eq) {
  char *ptr = eq + 1;
  char *macro = strchr(buf, '(');
  *eq = '\0';
  if (macro) {

   ptr = strchr (macro + 1, ')');
   if (!ptr) {
    fprintf(
# 97 "project/radare2/shlr/spp/p/cpp.h" 3 4
           __stderrp
# 97 "project/radare2/shlr/spp/p/cpp.h"
                 , "Invalid syntax\n");
    return 1;
   }
   ptr = ptr + 1;
   fprintf(
# 101 "project/radare2/shlr/spp/p/cpp.h" 3 4
          __stderrp
# 101 "project/radare2/shlr/spp/p/cpp.h"
                , "REGISTER MACRO:\n");
   fprintf(
# 102 "project/radare2/shlr/spp/p/cpp.h" 3 4
          __stderrp
# 102 "project/radare2/shlr/spp/p/cpp.h"
                , "  name: %s\n", buf);
   fprintf(
# 103 "project/radare2/shlr/spp/p/cpp.h" 3 4
          __stderrp
# 103 "project/radare2/shlr/spp/p/cpp.h"
                , "  args: %s\n", macro);
   fprintf(
# 104 "project/radare2/shlr/spp/p/cpp.h" 3 4
          __stderrp
# 104 "project/radare2/shlr/spp/p/cpp.h"
                , "  body: %s\n", ptr+1);
   cpp_macro_add(buf,macro,ptr+1);

  }
  r_sys_setenv (buf, ptr);
 } else r_sys_setenv (buf, "");
 return 0;
}

static int cpp_endif (SppState *state, Output *out, char *buf) {
 return -1;
}

static int cpp_include (SppState *state, Output *out, char *buf) {
 if (state->echo[state->ifl]) {
  spp_file (buf, out);
 }
 return 0;
}

__attribute__ ((visibility ("hidden"))) struct Tag cpp_tags[] = {
 { "ifdef", cpp_ifdef },
 { "ifndef", cpp_ifndef },
 { "endif", cpp_endif },
 { "if", cpp_if },
 { "else", cpp_else },
 { "include", cpp_include },
 { "define", cpp_define },
 { "error", cpp_error },
 { "warning", cpp_warning },
 { 
# 134 "project/radare2/shlr/spp/p/cpp.h" 3 4
  ((void *)0)
# 134 "project/radare2/shlr/spp/p/cpp.h"
      , cpp_default },
 { 
# 135 "project/radare2/shlr/spp/p/cpp.h" 3 4
  ((void *)0) 
# 135 "project/radare2/shlr/spp/p/cpp.h"
       }
};



static int cpp_arg_i (char *arg) {
 printf("INCLUDEDIR(%s)\n", arg);
 return 0;
}

static int cpp_arg_d (char *arg) {

 char *eq = strchr (arg, '=');
 if (eq) {
  *eq = '\0';
  r_sys_setenv (arg, eq + 1);
 } else {
  r_sys_setenv (arg, "");
 }
 return 0;
}

static struct Arg cpp_args[] = {
 { "-I", "add include directory", 1, cpp_arg_i },
 { "-D", "define value of variable", 1, cpp_arg_d },
 { 
# 160 "project/radare2/shlr/spp/p/cpp.h" 3 4
  ((void *)0) 
# 160 "project/radare2/shlr/spp/p/cpp.h"
       }
};

__attribute__ ((visibility ("hidden"))) struct Proc cpp_proc = {
 .name = "cpp",
 .tags = (struct Tag **)cpp_tags,
 .args = (struct Arg **)cpp_args,
 .token = " ",
 .eof = 
# 168 "project/radare2/shlr/spp/p/cpp.h" 3 4
       ((void *)0)
# 168 "project/radare2/shlr/spp/p/cpp.h"
           ,
 .tag_pre = "#",
 .tag_post = "\n",
 .multiline = "\\\n",
 .default_echo = 1,
 .fputs = cpp_fputs,
 .chop = 0,
 .tag_begin = 1,
};
# 23 "project/radare2/shlr/spp/config.h" 2

struct Proc *procs[] = {
 &spp_proc,
 &cpp_proc,
 &pod_proc,
 &acr_proc,

 &sh_proc,

 
# 32 "project/radare2/shlr/spp/config.h" 3 4
((void *)0)

# 33 "project/radare2/shlr/spp/config.h"
};

struct Tag *tags = (struct Tag *)&spp_tags; struct Arg *args = (struct Arg *)&spp_args; struct Proc *proc = &spp_proc;
# 6 "project/radare2/shlr/spp/spp.c" 2


# 1 "project/radare2/shlr/spp/r_api.c" 1
# 11 "project/radare2/shlr/spp/r_api.c"
SStrBuf *r_strbuf_new(const char *str) {
 SStrBuf *s = (SStrBuf*)calloc(1,sizeof(SStrBuf));
 if (str) r_strbuf_set (s, str);
 return s;
}

void r_strbuf_init(SStrBuf *sb) {
 
# 18 "project/radare2/shlr/spp/r_api.c" 3 4
__builtin___memset_chk (
# 18 "project/radare2/shlr/spp/r_api.c"
sb
# 18 "project/radare2/shlr/spp/r_api.c" 3 4
, 
# 18 "project/radare2/shlr/spp/r_api.c"
0, sizeof (SStrBuf)
# 18 "project/radare2/shlr/spp/r_api.c" 3 4
, __builtin_object_size (
# 18 "project/radare2/shlr/spp/r_api.c"
sb
# 18 "project/radare2/shlr/spp/r_api.c" 3 4
, 0))
# 18 "project/radare2/shlr/spp/r_api.c"
                                ;
}


# 21 "project/radare2/shlr/spp/r_api.c" 3 4
_Bool 
# 21 "project/radare2/shlr/spp/r_api.c"
    r_strbuf_set(SStrBuf *sb, const char *s) {
 int l;
 if (!sb) return 
# 23 "project/radare2/shlr/spp/r_api.c" 3 4
                0
# 23 "project/radare2/shlr/spp/r_api.c"
                     ;
 if (!s) {
  r_strbuf_init (sb);
  return 
# 26 "project/radare2/shlr/spp/r_api.c" 3 4
        1
# 26 "project/radare2/shlr/spp/r_api.c"
            ;
 }
 l = strlen (s);
 if (l >= sizeof (sb->buf)) {
  char *ptr = sb->ptr;
  if (!ptr || l+1 > sb->ptrlen) {
   ptr = malloc (l + 1);
   if (!ptr) return 
# 33 "project/radare2/shlr/spp/r_api.c" 3 4
                   0
# 33 "project/radare2/shlr/spp/r_api.c"
                        ;
   sb->ptrlen = l + 1;
   sb->ptr = ptr;
  }
  
# 37 "project/radare2/shlr/spp/r_api.c" 3 4
 __builtin___memcpy_chk (
# 37 "project/radare2/shlr/spp/r_api.c"
 ptr
# 37 "project/radare2/shlr/spp/r_api.c" 3 4
 , 
# 37 "project/radare2/shlr/spp/r_api.c"
 s, l+1
# 37 "project/radare2/shlr/spp/r_api.c" 3 4
 , __builtin_object_size (
# 37 "project/radare2/shlr/spp/r_api.c"
 ptr
# 37 "project/radare2/shlr/spp/r_api.c" 3 4
 , 0))
# 37 "project/radare2/shlr/spp/r_api.c"
                     ;
 } else {
  sb->ptr = 
# 39 "project/radare2/shlr/spp/r_api.c" 3 4
           ((void *)0)
# 39 "project/radare2/shlr/spp/r_api.c"
               ;
  
# 40 "project/radare2/shlr/spp/r_api.c" 3 4
 __builtin___memcpy_chk (
# 40 "project/radare2/shlr/spp/r_api.c"
 sb->buf
# 40 "project/radare2/shlr/spp/r_api.c" 3 4
 , 
# 40 "project/radare2/shlr/spp/r_api.c"
 s, l+1
# 40 "project/radare2/shlr/spp/r_api.c" 3 4
 , __builtin_object_size (
# 40 "project/radare2/shlr/spp/r_api.c"
 sb->buf
# 40 "project/radare2/shlr/spp/r_api.c" 3 4
 , 0))
# 40 "project/radare2/shlr/spp/r_api.c"
                         ;
 }
 sb->len = l;
 return 
# 43 "project/radare2/shlr/spp/r_api.c" 3 4
       1
# 43 "project/radare2/shlr/spp/r_api.c"
           ;
}


# 46 "project/radare2/shlr/spp/r_api.c" 3 4
_Bool 
# 46 "project/radare2/shlr/spp/r_api.c"
    r_strbuf_append(SStrBuf *sb, const char *s) {
 int l = strlen (s);
 if (l < 1) {
  return 
# 49 "project/radare2/shlr/spp/r_api.c" 3 4
        0
# 49 "project/radare2/shlr/spp/r_api.c"
             ;
 }
 if ((sb->len + l + 1) < sizeof (sb->buf)) {
  
# 52 "project/radare2/shlr/spp/r_api.c" 3 4
 __builtin___memcpy_chk (
# 52 "project/radare2/shlr/spp/r_api.c"
 sb->buf + sb->len
# 52 "project/radare2/shlr/spp/r_api.c" 3 4
 , 
# 52 "project/radare2/shlr/spp/r_api.c"
 s, l + 1
# 52 "project/radare2/shlr/spp/r_api.c" 3 4
 , __builtin_object_size (
# 52 "project/radare2/shlr/spp/r_api.c"
 sb->buf + sb->len
# 52 "project/radare2/shlr/spp/r_api.c" 3 4
 , 0))
# 52 "project/radare2/shlr/spp/r_api.c"
                                     ;
  { free(sb->ptr); sb->ptr = 
# 53 "project/radare2/shlr/spp/r_api.c" 3 4
 ((void *)0)
# 53 "project/radare2/shlr/spp/r_api.c"
 ; };
 } else {
  int newlen = sb->len + l + 128;
  char *p = sb->ptr;
  
# 57 "project/radare2/shlr/spp/r_api.c" 3 4
 _Bool 
# 57 "project/radare2/shlr/spp/r_api.c"
      allocated = 
# 57 "project/radare2/shlr/spp/r_api.c" 3 4
                  1
# 57 "project/radare2/shlr/spp/r_api.c"
                      ;
  if (!sb->ptr) {
   p = malloc (newlen);
   if (p && sb->len > 0) {
    
# 61 "project/radare2/shlr/spp/r_api.c" 3 4
   __builtin___memcpy_chk (
# 61 "project/radare2/shlr/spp/r_api.c"
   p
# 61 "project/radare2/shlr/spp/r_api.c" 3 4
   , 
# 61 "project/radare2/shlr/spp/r_api.c"
   sb->buf, sb->len
# 61 "project/radare2/shlr/spp/r_api.c" 3 4
   , __builtin_object_size (
# 61 "project/radare2/shlr/spp/r_api.c"
   p
# 61 "project/radare2/shlr/spp/r_api.c" 3 4
   , 0))
# 61 "project/radare2/shlr/spp/r_api.c"
                               ;
   }
  } else if (sb->len + l + 1 > sb->ptrlen) {
   p = realloc (sb->ptr, newlen);
  } else {
   allocated = 
# 66 "project/radare2/shlr/spp/r_api.c" 3 4
              0
# 66 "project/radare2/shlr/spp/r_api.c"
                   ;
  }
  if (allocated) {
   if (!p) return 
# 69 "project/radare2/shlr/spp/r_api.c" 3 4
                 0
# 69 "project/radare2/shlr/spp/r_api.c"
                      ;
   sb->ptr = p;
   sb->ptrlen = newlen;
  }
  
# 73 "project/radare2/shlr/spp/r_api.c" 3 4
 __builtin___memcpy_chk (
# 73 "project/radare2/shlr/spp/r_api.c"
 p + sb->len
# 73 "project/radare2/shlr/spp/r_api.c" 3 4
 , 
# 73 "project/radare2/shlr/spp/r_api.c"
 s, l + 1
# 73 "project/radare2/shlr/spp/r_api.c" 3 4
 , __builtin_object_size (
# 73 "project/radare2/shlr/spp/r_api.c"
 p + sb->len
# 73 "project/radare2/shlr/spp/r_api.c" 3 4
 , 0))
# 73 "project/radare2/shlr/spp/r_api.c"
                               ;
 }
 sb->len += l;
 return 
# 76 "project/radare2/shlr/spp/r_api.c" 3 4
       1
# 76 "project/radare2/shlr/spp/r_api.c"
           ;
}

char *r_strbuf_get(SStrBuf *sb) {
 return sb? (sb->ptr? sb->ptr: sb->buf) : 
# 80 "project/radare2/shlr/spp/r_api.c" 3 4
                                         ((void *)0)
# 80 "project/radare2/shlr/spp/r_api.c"
                                             ;
}

char *r_strbuf_drain(SStrBuf *sb) {
 char *res = sb->ptr? sb->ptr: strdup (sb->buf);
 sb->ptr = 
# 85 "project/radare2/shlr/spp/r_api.c" 3 4
          ((void *)0)
# 85 "project/radare2/shlr/spp/r_api.c"
              ;
 r_strbuf_fini (sb);
 free (sb);
 return res;
}

void r_strbuf_free(SStrBuf *sb) {
 r_strbuf_fini (sb);
 free (sb);
}

void r_strbuf_fini(SStrBuf *sb) {
 if (sb && sb->ptr)
  { free(sb->ptr); sb->ptr = 
# 98 "project/radare2/shlr/spp/r_api.c" 3 4
 ((void *)0)
# 98 "project/radare2/shlr/spp/r_api.c"
 ; };
}


int r_sys_setenv(const char *key, const char *value) {
 if (!key) {
  return 0;
 }

 if (!value) {
  unsetenv (key);
  return 0;
 }
 return setenv (key, value, 1);







}

char *r_sys_getenv(const char *key) {
# 155 "project/radare2/shlr/spp/r_api.c"
 char *b;
 if (!key) {
  return 
# 157 "project/radare2/shlr/spp/r_api.c" 3 4
        ((void *)0)
# 157 "project/radare2/shlr/spp/r_api.c"
            ;
 }
 b = getenv (key);
 return b? strdup (b): 
# 160 "project/radare2/shlr/spp/r_api.c" 3 4
                      ((void *)0)
# 160 "project/radare2/shlr/spp/r_api.c"
                          ;

}

int r_sys_getpid() {

 return getpid();






}
# 9 "project/radare2/shlr/spp/spp.c" 2


__attribute__((visibility("default"))) int spp_run(char *buf, Output *out) {
 size_t i;
 int ret = 0;
 char *tok;

 if (0) fprintf (
# 16 "project/radare2/shlr/spp/spp.c" 3 4
           __stderrp
# 16 "project/radare2/shlr/spp/spp.c"
                 , "SPP_RUN(%s)\n", buf);
 if (proc->chop) {
  for (; ((*buf==' ')||(*buf=='\t')||(*buf=='\r')||(*buf=='\n')); buf++);
  int buflen = strlen (buf);
  for (tok = buf + (buflen? buflen - 1: 0); ((*tok==' ')||(*tok=='\t')||(*tok=='\r')||(*tok=='\n')); tok--) {
   *tok = '\0';
  }
 }

 if (proc->token) {
  tok = strstr (buf, proc->token);
  if (tok) {
   *tok = '\0';
   tok = tok + 1;
  } else {
   tok = buf;
  }
 } else {
  tok = buf;
 }
 for (i = 0; tags[i].callback; i++) {
  if (0) fprintf (
# 37 "project/radare2/shlr/spp/spp.c" 3 4
            __stderrp
# 37 "project/radare2/shlr/spp/spp.c"
                  , "NAME=(%s)\n", tok);
  if ((!tags[i].name) || (!strcmp (buf, tags[i].name))) {
   if (out->fout) {
    fflush (out->fout);
   }
   ret = tags[i].callback (&proc->state, out, tok);
   proc->state.ifl += ret;
   if (ret == -1) {
    break;
   }
   if (ret) {
    if (proc->state.ifl < 0 || proc->state.ifl >= 128) {
     fprintf (
# 49 "project/radare2/shlr/spp/spp.c" 3 4
             __stderrp
# 49 "project/radare2/shlr/spp/spp.c"
                   , "Nested conditionals parsing error.\n");
     break;
    }
   }
   break;
  }
 }
 return ret;
}

static char *spp_run_str(char *buf, int *rv) {
 char *b;
 Output tmp;
 tmp.fout = 
# 62 "project/radare2/shlr/spp/spp.c" 3 4
           ((void *)0)
# 62 "project/radare2/shlr/spp/spp.c"
               ;
 tmp.cout = r_strbuf_new ("");
 int rc = spp_run (buf, &tmp);
 b = strdup (r_strbuf_get (tmp.cout));
 r_strbuf_free (tmp.cout);
 if (rv) {
  *rv = rc;
 }
 return b;
}

__attribute__((visibility("default"))) void lbuf_strcat(SppBuf *dst, char *src) {
 int len = strlen (src);
 char *nbuf;
 if (!dst->lbuf || (len + dst->lbuf_n) > dst->lbuf_s) {
  nbuf = realloc (dst->lbuf, dst->lbuf_s << 1);
  if (!nbuf) {
   fprintf (
# 79 "project/radare2/shlr/spp/spp.c" 3 4
           __stderrp
# 79 "project/radare2/shlr/spp/spp.c"
                 , "Out of memory.\n");
   return;
  }
  dst->lbuf = nbuf;
 }
 
# 84 "project/radare2/shlr/spp/spp.c" 3 4
__builtin___memcpy_chk (
# 84 "project/radare2/shlr/spp/spp.c"
dst->lbuf + dst->lbuf_n
# 84 "project/radare2/shlr/spp/spp.c" 3 4
, 
# 84 "project/radare2/shlr/spp/spp.c"
src, len + 1
# 84 "project/radare2/shlr/spp/spp.c" 3 4
, __builtin_object_size (
# 84 "project/radare2/shlr/spp/spp.c"
dst->lbuf + dst->lbuf_n
# 84 "project/radare2/shlr/spp/spp.c" 3 4
, 0))
# 84 "project/radare2/shlr/spp/spp.c"
                                              ;
 dst->lbuf_n += len;
}

__attribute__((visibility("default"))) int do_fputs(Output *out, char *str) {
 int i;
 int printed = 0;
 for (i = 0; i <= proc->state.ifl; i++) {
  if (!proc->state.echo[i]) {
   return printed;
  }
 }
 if (str[0]) {
  printed = 1;
 }
 if (proc->fputs) {
  proc->fputs (out, str);
 } else {
  if (out->fout) {
   fprintf (out->fout, "%s", str);
  }
 }
 return printed;
}

__attribute__((visibility("default"))) void spp_eval(char *buf, Output *out) {
 spp_proc_eval (proc, buf, out);
}

__attribute__((visibility("default"))) void spp_proc_eval(SppProc *proc, char *buf, Output *out) {
 char *ptr, *ptr2;
 char *ptrr = 
# 115 "project/radare2/shlr/spp/spp.c" 3 4
             ((void *)0)
# 115 "project/radare2/shlr/spp/spp.c"
                 ;
 int delta;
 int printed = 0;
retry:

 if (!proc->tag_pre && proc->token) {
  do {
   ptr = strstr (buf, proc->token);
   if (ptr) {
    *ptr = '\0';
   }
   delta = strlen (buf) - 1;
   if (buf[delta] == '\n') {
    buf[delta] = '\0';
   }
   if (*buf) {
    spp_run (buf, out);
   }
   buf = ptr + 1;
  } while (ptr);
  return;
 }

 if (!proc->tag_post) {

  return;
 }


 delta = strlen (proc->tag_post);


 ptr = proc->tag_pre? strstr (buf, proc->tag_pre): 
# 147 "project/radare2/shlr/spp/spp.c" 3 4
                                                  ((void *)0)
# 147 "project/radare2/shlr/spp/spp.c"
                                                      ;
 if (ptr) {
  if (0) printf ("==> 0.0 (%s)\n", ptr);
  if (!proc->tag_begin || (proc->tag_begin && ptr == buf)) {
   *ptr = '\0';
   ptr = ptr + strlen (proc->tag_pre);
   if (do_fputs (out, buf)) {
    printed = 1;
   }
   if (0) printf ("==> 0 (%s)\n", ptr);
  }
  ptrr = strstr (ptr + strlen (proc->tag_pre), proc->tag_pre);
 }


 if (!ptr) {
  if (do_fputs (out, buf)) {
   printed = 1;
  }
  return;
 }
 ptr2 = strstr (ptr, proc->tag_post);
 if (ptr2) {
  *ptr2 = '\0';
  if (ptrr) {
   if (ptrr < ptr2) {
    char *p = strdup (ptr2 + 2);
    char *s = spp_run_str (ptrr + strlen (proc->tag_pre), 
# 174 "project/radare2/shlr/spp/spp.c" 3 4
                                                         ((void *)0)
# 174 "project/radare2/shlr/spp/spp.c"
                                                             );
    if (0) fprintf (
# 175 "project/radare2/shlr/spp/spp.c" 3 4
              __stderrp
# 175 "project/radare2/shlr/spp/spp.c"
                    , "strcpy(%s)(%s)\n", ptrr, s);
    
# 176 "project/radare2/shlr/spp/spp.c" 3 4
   __builtin___strcpy_chk (
# 176 "project/radare2/shlr/spp/spp.c"
   ptrr
# 176 "project/radare2/shlr/spp/spp.c" 3 4
   , 
# 176 "project/radare2/shlr/spp/spp.c"
   s
# 176 "project/radare2/shlr/spp/spp.c" 3 4
   , __builtin_object_size (
# 176 "project/radare2/shlr/spp/spp.c"
   ptrr
# 176 "project/radare2/shlr/spp/spp.c" 3 4
   , 2 > 1 ? 1 : 0))
# 176 "project/radare2/shlr/spp/spp.c"
                   ;
    free (s);
    ptr[-2] = proc->tag_pre[0];

    if (0) fprintf (
# 180 "project/radare2/shlr/spp/spp.c" 3 4
              __stderrp
# 180 "project/radare2/shlr/spp/spp.c"
                    , "strcat(%s)(%s)\n", ptrr, p);
    
# 181 "project/radare2/shlr/spp/spp.c" 3 4
   __builtin___strcat_chk (
# 181 "project/radare2/shlr/spp/spp.c"
   ptrr
# 181 "project/radare2/shlr/spp/spp.c" 3 4
   , 
# 181 "project/radare2/shlr/spp/spp.c"
   p
# 181 "project/radare2/shlr/spp/spp.c" 3 4
   , __builtin_object_size (
# 181 "project/radare2/shlr/spp/spp.c"
   ptrr
# 181 "project/radare2/shlr/spp/spp.c" 3 4
   , 2 > 1 ? 1 : 0))
# 181 "project/radare2/shlr/spp/spp.c"
                   ;
    buf = ptr - 2;
    if (0) fprintf (
# 183 "project/radare2/shlr/spp/spp.c" 3 4
              __stderrp
# 183 "project/radare2/shlr/spp/spp.c"
                    , "CONTINUE (%s)\n", buf);
    free (p);
    ptrr = 
# 185 "project/radare2/shlr/spp/spp.c" 3 4
          ((void *)0)
# 185 "project/radare2/shlr/spp/spp.c"
              ;
    goto retry;
   }
  }
  if (proc->buf.lbuf && proc->buf.lbuf[0]) {
   if (0) printf("==> 1 (%s)\n", proc->buf.lbuf);
   if (ptr) {
    lbuf_strcat (&proc->buf, buf);
    if (do_fputs (out, buf)) {
     printed = 1;
    }
    spp_run (ptr, out);
   } else {
    lbuf_strcat (&proc->buf, buf);
    if (0) printf ("=(1)=> spp_run(%s)\n", proc->buf.lbuf);
    spp_run (proc->buf.lbuf + delta, out);
    if (0) printf ("=(1)=> spp_run(%s)\n", proc->buf.lbuf);
   }
   proc->buf.lbuf[0]='\0';
   proc->buf.lbuf_n = 0;
  } else {
   if (0) printf ("==> 2 (%s)\n", ptr);
   if (ptr) {
    if (0) printf (" ==> 2.1: run(%s)\n", ptr);
    spp_run (ptr, out);
    buf = ptr2 + delta;
    if (buf[0] == '\n' && printed) {
     buf++;
    }
    if (0) printf (" ==> 2.1: continue(%s)\n", buf);
    goto retry;
   } else {
    if (do_fputs (out, buf)) {
     printed = 1;
    }
   }
  }
  if (do_fputs (out, buf)) {
   printed = 1;
  }
 } else {
  if (0) printf ("==> 3\n");
  lbuf_strcat (&proc->buf, ptr);
 }
}


__attribute__((visibility("default"))) void spp_io(FILE *in, Output *out) {
 char buf[4096];
 int lines;
 if (!proc->buf.lbuf) {
  proc->buf.lbuf = calloc (1, 4096);
 }
 if (!proc->buf.lbuf) {
  fprintf (
# 239 "project/radare2/shlr/spp/spp.c" 3 4
          __stderrp
# 239 "project/radare2/shlr/spp/spp.c"
                , "Out of memory.\n");
  return;
 }
 proc->buf.lbuf[0] = '\0';
 proc->buf.lbuf_s = 1024;
 while (!feof (in)) {
  buf[0] = '\0';
  if (!fgets (buf, sizeof (buf) - 1, in)) {
   break;
  }
  if (feof (in)) break;
  lines = 1;
  if (!memcmp (buf, "#!", 2)) {
   if (!fgets (buf, sizeof (buf) - 1, in) || feof (in)) {
    break;
   }
   lines++;
  }
  if (proc->multiline) {
   while (1) {
    char *eol = buf + strlen (buf) - strlen (proc->multiline);
    if (!strcmp (eol, proc->multiline)) {
     if (0) fprintf (
# 261 "project/radare2/shlr/spp/spp.c" 3 4
               __stderrp
# 261 "project/radare2/shlr/spp/spp.c"
                     , "Multiline detected!\n");
     if (!fgets (eol, 1023, in)) {
      break;
     }
     if (feof (in)) {
      break;
     }
     lines++;
    } else {
     break;
    }
   }
  }
  spp_eval (buf, out);
  proc->state.lineno += lines;
 }
 (void)do_fputs (out, proc->buf.lbuf);
}

__attribute__((visibility("default"))) int spp_file(const char *file, Output *out) {
 FILE *in = fopen (file, "r");
 if (0) fprintf (
# 282 "project/radare2/shlr/spp/spp.c" 3 4
           __stderrp
# 282 "project/radare2/shlr/spp/spp.c"
                 , "SPP-FILE(%s)\n", file);
 if (in) {
  spp_io (in, out);
  fclose (in);
  return 1;
 }
 fprintf (
# 288 "project/radare2/shlr/spp/spp.c" 3 4
         __stderrp
# 288 "project/radare2/shlr/spp/spp.c"
               , "Cannot find '%s'\n", file);
 return 0;
}

__attribute__((visibility("default"))) void spp_proc_list_kw() {
 int i;
 for (i = 0; tags[i].name; i++) {
  printf ("%s\n", tags[i].name);
 }
}

__attribute__((visibility("default"))) void spp_proc_list() {
 size_t i;
 for (i = 0; procs[i]; i++) {
  printf ("%s\n", procs[i]->name);
 }
}

__attribute__((visibility("default"))) void spp_proc_set(SppProc *p, const char *arg, int fail) {
 size_t i;
 
# 308 "project/radare2/shlr/spp/spp.c" 3 4
_Bool 
# 308 "project/radare2/shlr/spp/spp.c"
     found = 
# 308 "project/radare2/shlr/spp/spp.c" 3 4
             0
# 308 "project/radare2/shlr/spp/spp.c"
                  ;
 if (arg) {
  for (i = 0; procs[i]; i++) {
   if (!strcmp (procs[i]->name, arg)) {
    proc = procs[i];
    found = 
# 313 "project/radare2/shlr/spp/spp.c" 3 4
           1
# 313 "project/radare2/shlr/spp/spp.c"
               ;
    if (0) printf ("SET PROC:(%s)(%s)\n", arg, proc->name);
    break;
   }
  }
 }
 if (arg && *arg && !procs[i] && fail) {
  fprintf (
# 320 "project/radare2/shlr/spp/spp.c" 3 4
          __stderrp
# 320 "project/radare2/shlr/spp/spp.c"
                , "Invalid preprocessor name '%s'\n", arg);
  return;
 }
 if (!found || !proc) {
  proc = p;
 }
 if (proc) {
  proc->state.lineno = 1;
  proc->state.ifl = 0;
  for (i = 0; i < 128; i++) {
   proc->state.echo[i] = proc->default_echo;
  }

  tags = (SppTag*)proc->tags;
 }
}

__attribute__((visibility("default"))) void out_printf(Output *out, char *str, ...) {
 va_list ap;
 
# 339 "project/radare2/shlr/spp/spp.c" 3 4
__builtin_va_start(
# 339 "project/radare2/shlr/spp/spp.c"
ap
# 339 "project/radare2/shlr/spp/spp.c" 3 4
,
# 339 "project/radare2/shlr/spp/spp.c"
str
# 339 "project/radare2/shlr/spp/spp.c" 3 4
)
# 339 "project/radare2/shlr/spp/spp.c"
                  ;
 if (out->fout) {
  vfprintf (out->fout, str, ap);
 } else {
  char tmp[4096];
  
# 344 "project/radare2/shlr/spp/spp.c" 3 4
 __builtin___vsnprintf_chk (
# 344 "project/radare2/shlr/spp/spp.c"
 tmp
# 344 "project/radare2/shlr/spp/spp.c" 3 4
 , 
# 344 "project/radare2/shlr/spp/spp.c"
 sizeof (tmp)
# 344 "project/radare2/shlr/spp/spp.c" 3 4
 , 0, __builtin_object_size (
# 344 "project/radare2/shlr/spp/spp.c"
 tmp
# 344 "project/radare2/shlr/spp/spp.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 344 "project/radare2/shlr/spp/spp.c"
 str
# 344 "project/radare2/shlr/spp/spp.c" 3 4
 , 
# 344 "project/radare2/shlr/spp/spp.c"
 ap
# 344 "project/radare2/shlr/spp/spp.c" 3 4
 )
# 344 "project/radare2/shlr/spp/spp.c"
                                       ;
  tmp[sizeof (tmp) - 1] = 0;
  r_strbuf_append (out->cout, tmp);
 }
 
# 348 "project/radare2/shlr/spp/spp.c" 3 4
__builtin_va_end(
# 348 "project/radare2/shlr/spp/spp.c"
ap
# 348 "project/radare2/shlr/spp/spp.c" 3 4
)
# 348 "project/radare2/shlr/spp/spp.c"
           ;
}

static void spp_proc_init(SppProc *p) {
 p->state.lineno = 1;
 p->state.ifl = 0;
 size_t i;
 for (i = 0; i < 128; i++) {
  p->state.echo[i] = p->default_echo;
 }
}

__attribute__((visibility("default"))) char *spp_eval_str(SppProc *p, const char *code) {
 if (p) {
  spp_proc_init (p);
 }
 Output out;
 out.fout = 
# 365 "project/radare2/shlr/spp/spp.c" 3 4
           ((void *)0)
# 365 "project/radare2/shlr/spp/spp.c"
               ;
 out.cout = r_strbuf_new (
# 366 "project/radare2/shlr/spp/spp.c" 3 4
                         ((void *)0)
# 366 "project/radare2/shlr/spp/spp.c"
                             );
 r_strbuf_init (out.cout);
 char *c = strdup (code);
 if (c) {
  spp_proc_eval (p, c, &out);
  free (c);
 }
 return r_strbuf_drain (out.cout);
}
