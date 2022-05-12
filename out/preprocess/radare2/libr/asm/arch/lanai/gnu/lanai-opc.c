# 0 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
# 67 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
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
# 68 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/ansidecl.h" 1 3 4
# 69 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/lanai.h" 1 3 4
# 80 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/lanai.h" 3 4
enum bfd_lanai_architecture {
 v0 = 0, v1
};

extern const char *bfd_lanai_architecture_pname[];

struct bfd_lanai_opcode {
 const char *name;
 unsigned long match;
 unsigned long lose;
 const char *args;
 unsigned int flags;
 enum bfd_lanai_architecture architecture;
};
# 393 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/lanai.h" 3 4
extern struct bfd_lanai_opcode bfd_lanai_opcodes[];
extern const int bfd_lanai_num_opcodes;
# 70 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 2


# 71 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
const char *
# 71 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           bfd_lanai_architecture_pname
# 71 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                             [] = {
 "v0",
 "v1",
 
# 74 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
((void *)0)
# 74 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
    ,
};
# 158 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
struct 
# 158 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
      bfd_lanai_opcode bfd_lanai_opcodes
# 158 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                [] = {



  { "nop", 0x00000001,0xfffffffe ,"", 
# 162 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                        0x10
# 162 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                            , 0},
  { "nop(RI)", 0x00000000,0x8f820000 ,"", 
# 163 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                            0x10
# 163 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                , 0},
  { "nop(RR)", 0xc0000000,0x3f820000 ,"", 
# 164 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                            0x20
# 164 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                , 0},
  { "nop(RRR)", 0xd0000000,0x2f820000 ,"", 
# 165 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             0x40
# 165 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                  , 0},
  { "nop(BR)", 0xe2000000,0x1c000000 ,"", 
# 166 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                            0x200
# 166 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                , 0},
  { "nop(SLI)", 0xf0020000,0x0f810000 ,"", 
# 167 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             0x800
# 167 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                  , 0},
  { "nop(SPLS)", 0xf0030000,0x0f808000 ,"", 
# 168 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                              0x1000
# 168 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                    , 0},
  { "nop(SBR)", 0xf203c000,0x0c003800 ,"", 
# 169 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             0x4000
# 169 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                  , 0},



  { "mov", (
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xc0000000) 
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | 
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x00))&(0x07)) << 8) 
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | (((
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00)
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10)
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )?1<<6:0) | ((
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00)
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ?1<<7:0)),((
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf00207fb)
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |0x007c0000)&~(
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xc0000000) 
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | 
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x00))&(0x07)) << 8) 
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | (((
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00)
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10)
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )?1<<6:0) | ((
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00)
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ?1<<7:0))) ,"1,d", 
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                           0x20
# 173 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                               , 0},
  { "mov", (
# 174 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 174 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 174 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0)&0xe) << 24) | ((0)&1) ) 
# 174 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 174 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 174 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 174 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe000003)
# 174 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 174 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 174 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 174 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0)&0xe) << 24) | ((0)&1) ) 
# 174 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 174 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 174 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"B,P", 
# 174 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                      1
# 174 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                             ,0},
  { "mov", (
# 175 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf0020000)
# 175 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ),((
# 175 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf0030000)
# 175 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 175 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf0020000)
# 175 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )) ,"I,d", 
# 175 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                  0x800
# 175 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                       , 0},
  { "mov", (
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000)
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x00))&(0x07)) << 28)
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|((0)?
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|(((
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00)
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x04)
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )?
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          1
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x1f) << 18)
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf0030000)
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          31
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x1f) << 18)
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000)
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x00))&(0x07)) << 28)
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|((0)?
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|(((
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00)
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x04)
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )?
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          1
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x1f) << 18)
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"j,d", 
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             0x10
# 176 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 , 0},
  { "mov", (
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000)
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x00))&(0x07)) << 28)
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|((1)?
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|(((
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00)
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x04)
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )?
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          1
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x1f) << 18)
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf0030000)
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          31
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x1f) << 18)
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000)
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x00))&(0x07)) << 28)
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|((1)?
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|(((
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00)
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x04)
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )?
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          1
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x1f) << 18)
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"J,d", 
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             0x10
# 177 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 , 0},
  { "mov", (
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000)
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x04))&(0x07)) << 28)
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|((0)?
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|(((
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x04)
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x04)
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )?
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          1
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x1f) << 18)
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf0030000)
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          31
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x1f) << 18)
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000)
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x04))&(0x07)) << 28)
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|((0)?
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|(((
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x04)
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x04)
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )?
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          1
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x1f) << 18)
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"l,d", 
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             0x10
# 178 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 , 0},
  { "mov", (
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000)
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x04))&(0x07)) << 28)
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|((1)?
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|(((
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x04)
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x04)
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )?
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          1
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x1f) << 18)
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf0030000)
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          31
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x1f) << 18)
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000)
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x04))&(0x07)) << 28)
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|((1)?
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|(((
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x04)
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x04)
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )?
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          1
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x1f) << 18)
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"L,d", 
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             0x10
# 179 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 , 0},


  { "mov", (
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000)
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x05))&(0x07)) << 28)
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|((0)?
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|(((
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x05)
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x04)
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )?
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          1
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x1f) << 18)
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf0030000)
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          31
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x1f) << 18)
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000)
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x05))&(0x07)) << 28)
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|((0)?
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|(((
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x05)
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x04)
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )?
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          1
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x1f) << 18)
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"j,d", 
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                            0x10
# 182 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                , 0},
  { "mov", (
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000)
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x05))&(0x07)) << 28)
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|((1)?
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|(((
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x05)
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x04)
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )?
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          1
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x1f) << 18)
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf0030000)
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          31
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x1f) << 18)
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000)
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x05))&(0x07)) << 28)
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|((1)?
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|(((
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x05)
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x04)
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )?
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          1
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x1f) << 18)
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"J,d", 
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                            0x10
# 183 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                , 0},
  { "mov", (
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000)
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x05))&(0x07)) << 28)
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|((0)?
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|(((
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x05)
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x04)
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )?
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          1
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x1f) << 18)
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf0030000)
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          31
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x1f) << 18)
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000)
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x05))&(0x07)) << 28)
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|((0)?
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|(((
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x05)
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x04)
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )?
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          1
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x1f) << 18)
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"l,d", 
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                            0x10
# 184 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                , 0},
  { "mov", (
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000)
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x05))&(0x07)) << 28)
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|((1)?
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|(((
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x05)
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x04)
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )?
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          1
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x1f) << 18)
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf0030000)
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          31
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x1f) << 18)
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000)
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x05))&(0x07)) << 28)
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|((1)?
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)|(((
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x05)
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x04)
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )?
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          1
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x1f) << 18)
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"L,d", 
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                            0x10
# 185 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                , 0},



  { "add", (
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xc0000000) 
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | 
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x00))&(0x07)) << 8) 
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((((
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00)
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ) ? ((
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00)
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10)
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ?0xc0:0x80) : 0 )),((
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf00207fb)
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xc0000000) 
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | 
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x00))&(0x07)) << 8) 
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((((
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00)
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ) ? ((
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00)
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10)
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ?0xc0:0x80) : 0 ))) ,"1,2,d", 
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                       0x20
# 189 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                           ,0},
  { "add", (
# 190 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0000000) 
# 190 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 190 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0)&0xe) << 24) | ((0)&1) ) 
# 190 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 190 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 190 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 190 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xfe000003)
# 190 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 190 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0000000) 
# 190 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 190 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0)&0xe) << 24) | ((0)&1) ) 
# 190 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 190 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 190 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"p,b,P", 
# 190 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                       (0x200)
# 190 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                             |
# 190 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                              1
# 190 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     ,0},
  { "add", (
# 191 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000) 
# 191 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 191 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x00))&(0x07)) << 28) 
# 191 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 191 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 191 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((0)?
# 191 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 191 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 191 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf0030000)
# 191 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 191 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000) 
# 191 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 191 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x00))&(0x07)) << 28) 
# 191 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 191 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 191 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((0)?
# 191 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 191 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"1,j,d", 
# 191 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         0x10
# 191 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                             ,0},
  { "add", (
# 192 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000) 
# 192 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 192 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x00))&(0x07)) << 28) 
# 192 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 192 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 192 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 192 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 192 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 192 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf0030000)
# 192 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 192 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000) 
# 192 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 192 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x00))&(0x07)) << 28) 
# 192 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 192 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 192 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 192 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 192 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"1,J,d", 
# 192 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         0x10
# 192 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                             ,0},

  { "add.f", (
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xc0000000) 
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&(0x07)) << 8) 
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((((
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00)
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x07)
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )==
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x07)
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ) ? ((
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00)
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10)
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ?0xc0:0x80) : 0 )),((
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf00207fb)
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xc0000000) 
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&(0x07)) << 8) 
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((((
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00)
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x07)
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )==
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x07)
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ) ? ((
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00)
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10)
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ?0xc0:0x80) : 0 ))) ,"1,2,d", 
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         0x20
# 194 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                             ,0},
  { "add.f", (
# 195 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000000) 
# 195 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 195 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&(0x07)) << 28) 
# 195 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 195 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 195 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 195 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 195 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0)),((
# 195 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf0030000)
# 195 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 195 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000000) 
# 195 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 195 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&(0x07)) << 28) 
# 195 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 195 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 195 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 195 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 195 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0))) ,"1,j,d", 
# 195 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                           0x10
# 195 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                               ,0},
  { "add.f", (
# 196 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000000) 
# 196 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 196 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&(0x07)) << 28) 
# 196 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 196 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 196 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 196 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 196 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0)),((
# 196 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf0030000)
# 196 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 196 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000000) 
# 196 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 196 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&(0x07)) << 28) 
# 196 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 196 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 196 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 196 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 196 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0))) ,"1,J,d", 
# 196 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                           0x10
# 196 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                               ,0},

  { "addc", (
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xc0000000) 
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x01))&(0x07)) << 8) 
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((((
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x01)
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x07)
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )==
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x07)
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ) ? ((
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x01)
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10)
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ?0xc0:0x80) : 0 )),((
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf00207fb)
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xc0000000) 
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x01))&(0x07)) << 8) 
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((((
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x01)
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x07)
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )==
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x07)
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ) ? ((
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x01)
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10)
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ?0xc0:0x80) : 0 ))) ,"1,2,d", 
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         0x20
# 198 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                             ,0},
  { "addc", (
# 199 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000000) 
# 199 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 199 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x01))&(0x07)) << 28) 
# 199 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 199 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 199 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 199 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 199 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 199 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000)
# 199 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 199 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000000) 
# 199 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 199 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x01))&(0x07)) << 28) 
# 199 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 199 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 199 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 199 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 199 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"1,j,d", 
# 199 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                           0x10
# 199 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                               ,0},
  { "addc", (
# 200 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000000) 
# 200 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 200 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x01))&(0x07)) << 28) 
# 200 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 200 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 200 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 200 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 200 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 200 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000)
# 200 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 200 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000000) 
# 200 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 200 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x01))&(0x07)) << 28) 
# 200 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 200 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 200 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 200 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 200 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"1,J,d", 
# 200 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                           0x10
# 200 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                               ,0},

  { "addc.f", (
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xc0000000) 
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((1)?
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | 
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((0x01))&(0x07)) << 8) 
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((((
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x01)
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x07)
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )==
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x07)
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             ) ? ((
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x01)
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x10)
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             ?0xc0:0x80) : 0 )),((
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xf00207fb)
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&~(
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xc0000000) 
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((1)?
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | 
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((0x01))&(0x07)) << 8) 
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((((
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x01)
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x07)
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )==
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x07)
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             ) ? ((
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x01)
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x10)
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             ?0xc0:0x80) : 0 ))) ,"1,2,d", 
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                           0x20
# 202 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                               ,0},
  { "addc.f", (
# 203 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000000) 
# 203 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 203 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((0x01))&(0x07)) << 28) 
# 203 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((1)?
# 203 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 203 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((0)?
# 203 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00010000)
# 203 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0)),((
# 203 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xf0030000)
# 203 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&~(
# 203 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000000) 
# 203 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 203 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((0x01))&(0x07)) << 28) 
# 203 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((1)?
# 203 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 203 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((0)?
# 203 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00010000)
# 203 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0))) ,"1,j,d", 
# 203 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             0x10
# 203 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "addc.f", (
# 204 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000000) 
# 204 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 204 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((0x01))&(0x07)) << 28) 
# 204 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((1)?
# 204 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 204 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 204 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00010000)
# 204 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0)),((
# 204 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xf0030000)
# 204 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&~(
# 204 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000000) 
# 204 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 204 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((0x01))&(0x07)) << 28) 
# 204 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((1)?
# 204 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 204 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 204 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00010000)
# 204 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0))) ,"1,J,d", 
# 204 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             0x10
# 204 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},




  { "and", (
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xc0000000) 
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | 
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x04))&(0x07)) << 8) 
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((((
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x04)
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ) ? ((
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x04)
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10)
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ?0xc0:0x80) : 0 )),((
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf00207fb)
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xc0000000) 
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | 
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x04))&(0x07)) << 8) 
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((((
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x04)
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ) ? ((
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x04)
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10)
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ?0xc0:0x80) : 0 ))) ,"1,2,d", 
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                       0x20
# 209 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                           ,0},
  { "and", (
# 210 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000) 
# 210 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 210 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x04))&(0x07)) << 28) 
# 210 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 210 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 210 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((0)?
# 210 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 210 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 210 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf0030000)
# 210 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 210 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000) 
# 210 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 210 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x04))&(0x07)) << 28) 
# 210 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 210 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 210 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((0)?
# 210 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 210 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"1,l,d", 
# 210 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         0x10
# 210 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                             ,0},
  { "and", (
# 211 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000) 
# 211 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 211 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x04))&(0x07)) << 28) 
# 211 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 211 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 211 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 211 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 211 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 211 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf0030000)
# 211 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 211 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000) 
# 211 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 211 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x04))&(0x07)) << 28) 
# 211 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 211 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 211 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 211 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 211 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"1,L,d", 
# 211 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         0x10
# 211 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                             ,0},
  { "and.f", (
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xc0000000) 
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x04))&(0x07)) << 8) 
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((((
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x04)
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x07)
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )==
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x07)
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ) ? ((
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x04)
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10)
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ?0xc0:0x80) : 0 )),((
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf00207fb)
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xc0000000) 
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x04))&(0x07)) << 8) 
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((((
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x04)
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x07)
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )==
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x07)
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ) ? ((
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x04)
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10)
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ?0xc0:0x80) : 0 ))) ,"1,2,d", 
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         0x20
# 212 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                             ,0},
  { "and.f", (
# 213 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000000) 
# 213 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 213 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x04))&(0x07)) << 28) 
# 213 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 213 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 213 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 213 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 213 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0)),((
# 213 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf0030000)
# 213 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 213 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000000) 
# 213 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 213 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x04))&(0x07)) << 28) 
# 213 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 213 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 213 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 213 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 213 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0))) ,"1,l,d", 
# 213 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                           0x10
# 213 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                               ,0},
  { "and.f", (
# 214 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000000) 
# 214 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 214 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x04))&(0x07)) << 28) 
# 214 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 214 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 214 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 214 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 214 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0)),((
# 214 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf0030000)
# 214 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 214 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000000) 
# 214 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 214 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x04))&(0x07)) << 28) 
# 214 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 214 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 214 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 214 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 214 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0))) ,"1,L,d", 
# 214 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                           0x10
# 214 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                               ,0},



  { "bt", (
# 218 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xe0000000) 
# 218 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | 
# 218 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         ((((0)&0xe) << 24) | ((0)&1) ) 
# 218 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((0)?
# 218 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00000002)
# 218 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0)),((
# 218 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xfe000003)
# 218 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&~(
# 218 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xe0000000) 
# 218 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | 
# 218 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         ((((0)&0xe) << 24) | ((0)&1) ) 
# 218 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((0)?
# 218 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00000002)
# 218 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0))) ,"B", 
# 218 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                     (0x200)
# 218 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                           ,0},
  { "bt", (
# 219 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xf003c000)
# 219 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         |
# 219 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         ((((0)&0xe) << 24) | ((0)&1) )
# 219 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         |
# 219 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (((
# 219 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         0
# 219 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         )&0x7) << 8)
# 219 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         |((0)?
# 219 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00000002)
# 219 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0)),((
# 219 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xfe03f807)
# 219 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&~(
# 219 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xf003c000)
# 219 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         |
# 219 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         ((((0)&0xe) << 24) | ((0)&1) )
# 219 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         |
# 219 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (((
# 219 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         0
# 219 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         )&0x7) << 8)
# 219 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         |((0)?
# 219 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00000002)
# 219 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0))) ,"1", 
# 219 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                       (0x200)
# 219 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                             ,0},
  { "bt", (
# 220 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xf003c000)
# 220 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         |
# 220 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         ((((0)&0xe) << 24) | ((0)&1) )
# 220 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         |
# 220 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (((
# 220 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         0
# 220 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         )&0x7) << 8)
# 220 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         |((0)?
# 220 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00000002)
# 220 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0)),((
# 220 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xfe03f807)
# 220 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&~(
# 220 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xf003c000)
# 220 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         |
# 220 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         ((((0)&0xe) << 24) | ((0)&1) )
# 220 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         |
# 220 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (((
# 220 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         0
# 220 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         )&0x7) << 8)
# 220 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         |((0)?
# 220 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00000002)
# 220 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0))) ,"143", 
# 220 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                       (0x200)
# 220 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                             ,0},
  { "bt.r", (
# 221 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0000000) 
# 221 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 221 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0)&0xe) << 24) | ((0)&1) ) 
# 221 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 221 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 221 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 221 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xfe000003)
# 221 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 221 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0000000) 
# 221 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 221 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0)&0xe) << 24) | ((0)&1) ) 
# 221 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 221 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 221 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"b", 
# 221 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                       (0x80000|0x200)
# 221 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                ,0},
  { "bt.r", (
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003c000)
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0)&0xe) << 24) | ((0)&1) )
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x00))&0x7) << 8)
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           2
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           )&0x1f) << 18)
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ),((
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xfe03f807)
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           0x1f
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           )&0x1f) << 18)
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           7
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           )&0x7) << 8)
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003c000)
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0)&0xe) << 24) | ((0)&1) )
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x00))&0x7) << 8)
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           2
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           )&0x1f) << 18)
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )) ,"3", 
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                              (0x80000|0x200)
# 222 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                       ,0},

  { "bf", (
# 224 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xe0000000) 
# 224 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | 
# 224 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         ((((1)&0xe) << 24) | ((1)&1) ) 
# 224 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((0)?
# 224 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00000002)
# 224 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0)),((
# 224 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xfe000003)
# 224 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&~(
# 224 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xe0000000) 
# 224 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | 
# 224 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         ((((1)&0xe) << 24) | ((1)&1) ) 
# 224 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((0)?
# 224 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00000002)
# 224 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0))) ,"B", 
# 224 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                     0x200
# 224 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                         ,0},
  { "bf", (
# 225 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xf003c000)
# 225 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         |
# 225 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         ((((1)&0xe) << 24) | ((1)&1) )
# 225 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         |
# 225 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (((
# 225 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         0
# 225 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         )&0x7) << 8)
# 225 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         |((0)?
# 225 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00000002)
# 225 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0)),((
# 225 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xfe03f807)
# 225 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&~(
# 225 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xf003c000)
# 225 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         |
# 225 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         ((((1)&0xe) << 24) | ((1)&1) )
# 225 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         |
# 225 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (((
# 225 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         0
# 225 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         )&0x7) << 8)
# 225 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         |((0)?
# 225 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00000002)
# 225 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0))) ,"1", 
# 225 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                       0x200
# 225 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                           ,0},
  { "bf", (
# 226 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xf003c000)
# 226 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         |
# 226 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         ((((1)&0xe) << 24) | ((1)&1) )
# 226 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         |
# 226 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (((
# 226 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         0
# 226 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         )&0x7) << 8)
# 226 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         |((0)?
# 226 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00000002)
# 226 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0)),((
# 226 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xfe03f807)
# 226 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&~(
# 226 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xf003c000)
# 226 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         |
# 226 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         ((((1)&0xe) << 24) | ((1)&1) )
# 226 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         |
# 226 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (((
# 226 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         0
# 226 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         )&0x7) << 8)
# 226 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         |((0)?
# 226 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00000002)
# 226 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0))) ,"143", 
# 226 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                       0x200
# 226 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                           ,0},
  { "bf.r", (
# 227 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0000000) 
# 227 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 227 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((1)&0xe) << 24) | ((1)&1) ) 
# 227 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 227 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 227 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 227 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xfe000003)
# 227 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 227 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0000000) 
# 227 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 227 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((1)&0xe) << 24) | ((1)&1) ) 
# 227 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 227 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 227 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"b", 
# 227 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                       0x200
# 227 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                           |
# 227 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                            0x80000
# 227 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "bf.r", (
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003c000)
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((1)&0xe) << 24) | ((1)&1) )
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x00))&0x7) << 8)
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           2
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           )&0x1f) << 18)
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ),((
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xfe03f807)
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           0x1f
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           )&0x1f) << 18)
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           7
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           )&0x7) << 8)
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003c000)
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((1)&0xe) << 24) | ((1)&1) )
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x00))&0x7) << 8)
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           2
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           )&0x1f) << 18)
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )) ,"3", 
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                              0x200
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                  |
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                   0x80000
# 228 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                        ,0},

  { "bhi", (
# 230 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 230 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 230 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((2)&0xe) << 24) | ((2)&1) ) 
# 230 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 230 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 230 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 230 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe000003)
# 230 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 230 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 230 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 230 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((2)&0xe) << 24) | ((2)&1) ) 
# 230 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 230 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 230 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"B", 
# 230 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                      (0x200|0x40000)
# 230 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                              ,0},
  { "bhi", (
# 231 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 231 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 231 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((2)&0xe) << 24) | ((2)&1) )
# 231 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 231 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 231 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 231 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 231 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 231 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 231 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 231 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 231 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 231 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 231 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 231 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((2)&0xe) << 24) | ((2)&1) )
# 231 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 231 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 231 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 231 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 231 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 231 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 231 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"1", 
# 231 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 231 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "bhi", (
# 232 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 232 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 232 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((2)&0xe) << 24) | ((2)&1) )
# 232 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 232 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 232 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 232 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 232 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 232 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 232 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 232 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 232 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 232 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 232 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 232 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((2)&0xe) << 24) | ((2)&1) )
# 232 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 232 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 232 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 232 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 232 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 232 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 232 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"143", 
# 232 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 232 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "bhi.r", (
# 233 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 233 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 233 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((2)&0xe) << 24) | ((2)&1) ) 
# 233 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 233 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 233 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0)),((
# 233 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe000003)
# 233 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 233 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 233 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 233 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((2)&0xe) << 24) | ((2)&1) ) 
# 233 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 233 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 233 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0))) ,"b", 
# 233 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                        (0x80000|0x200|0x40000)
# 233 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                   ,0},
  { "bhi.r", (
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((2)&0xe) << 24) | ((2)&1) )
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe03f807)
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            0x1f
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            7
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x7) << 8)
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((2)&0xe) << 24) | ((2)&1) )
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"3", 
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             (0x80000|0x200|0x40000)
# 234 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                        ,0},

  { "bugt", (
# 236 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0000000) 
# 236 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 236 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((2)&0xe) << 24) | ((2)&1) ) 
# 236 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 236 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 236 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 236 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xfe000003)
# 236 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 236 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0000000) 
# 236 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 236 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((2)&0xe) << 24) | ((2)&1) ) 
# 236 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 236 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 236 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"B",
# 236 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                  1
# 236 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                         |
# 236 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                          (0x200|0x40000)
# 236 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                  ,0},
  { "bugt", (
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003c000)
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((2)&0xe) << 24) | ((2)&1) )
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           0
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           )&0x7) << 8)
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |((0)?
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xfe03f807)
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003c000)
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((2)&0xe) << 24) | ((2)&1) )
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           0
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           )&0x7) << 8)
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |((0)?
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"1",
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                     1
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                            |
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             (0x200|0x40000)
# 237 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     ,0},
  { "bugt", (
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003c000)
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((2)&0xe) << 24) | ((2)&1) )
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           0
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           )&0x7) << 8)
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |((0)?
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xfe03f807)
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003c000)
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((2)&0xe) << 24) | ((2)&1) )
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           0
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           )&0x7) << 8)
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |((0)?
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"143",
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                       1
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                              |
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                               (0x200|0x40000)
# 238 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                       ,0},
  { "bugt.r", (
# 239 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xe0000000) 
# 239 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 239 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((2)&0xe) << 24) | ((2)&1) ) 
# 239 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((1)?
# 239 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000002)
# 239 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0)),((
# 239 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xfe000003)
# 239 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&~(
# 239 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xe0000000) 
# 239 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 239 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((2)&0xe) << 24) | ((2)&1) ) 
# 239 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((1)?
# 239 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000002)
# 239 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0))) ,"b",
# 239 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                    1
# 239 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                           |
# 239 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                            (0x80000|0x200|0x40000)
# 239 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                       ,0},
  { "bugt.r", (
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xf003c000)
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((2)&0xe) << 24) | ((2)&1) )
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((0x00))&0x7) << 8)
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             2
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             )&0x1f) << 18)
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000002)
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             ),((
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xfe03f807)
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             0x1f
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             )&0x1f) << 18)
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             7
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             )&0x7) << 8)
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&~(
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xf003c000)
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((2)&0xe) << 24) | ((2)&1) )
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((0x00))&0x7) << 8)
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             2
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             )&0x1f) << 18)
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000002)
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )) ,"3",
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         1
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                |
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                 (0x80000|0x200|0x40000)
# 240 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                            ,0},

  { "bls", (
# 242 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 242 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 242 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((3)&0xe) << 24) | ((3)&1) ) 
# 242 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 242 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 242 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 242 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe000003)
# 242 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 242 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 242 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 242 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((3)&0xe) << 24) | ((3)&1) ) 
# 242 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 242 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 242 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"B", 
# 242 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                      (0x200|0x40000)
# 242 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                              ,0},
  { "bls", (
# 243 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 243 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 243 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((3)&0xe) << 24) | ((3)&1) )
# 243 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 243 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 243 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 243 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 243 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 243 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 243 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 243 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 243 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 243 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 243 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 243 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((3)&0xe) << 24) | ((3)&1) )
# 243 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 243 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 243 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 243 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 243 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 243 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 243 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"1", 
# 243 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 243 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "bls", (
# 244 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 244 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 244 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((3)&0xe) << 24) | ((3)&1) )
# 244 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 244 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 244 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 244 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 244 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 244 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 244 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 244 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 244 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 244 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 244 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 244 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((3)&0xe) << 24) | ((3)&1) )
# 244 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 244 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 244 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 244 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 244 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 244 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 244 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"143", 
# 244 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 244 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "bls.r", (
# 245 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 245 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 245 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((3)&0xe) << 24) | ((3)&1) ) 
# 245 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 245 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 245 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0)),((
# 245 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe000003)
# 245 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 245 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 245 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 245 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((3)&0xe) << 24) | ((3)&1) ) 
# 245 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 245 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 245 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0))) ,"b", 
# 245 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                        (0x80000|0x200|0x40000)
# 245 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                   ,0},
  { "bls.r", (
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((3)&0xe) << 24) | ((3)&1) )
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe03f807)
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            0x1f
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            7
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x7) << 8)
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((3)&0xe) << 24) | ((3)&1) )
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"3", 
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             (0x80000|0x200|0x40000)
# 246 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                        ,0},

  { "bule", (
# 248 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0000000) 
# 248 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 248 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((3)&0xe) << 24) | ((3)&1) ) 
# 248 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 248 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 248 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 248 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xfe000003)
# 248 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 248 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0000000) 
# 248 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 248 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((3)&0xe) << 24) | ((3)&1) ) 
# 248 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 248 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 248 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"B",
# 248 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                  1
# 248 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                         |
# 248 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                          (0x200|0x40000)
# 248 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                  ,0},
  { "bule", (
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003c000)
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((3)&0xe) << 24) | ((3)&1) )
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           0
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           )&0x7) << 8)
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |((0)?
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xfe03f807)
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003c000)
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((3)&0xe) << 24) | ((3)&1) )
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           0
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           )&0x7) << 8)
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |((0)?
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"1",
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                     1
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                            |
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             (0x200|0x40000)
# 249 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     ,0},
  { "bule", (
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003c000)
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((3)&0xe) << 24) | ((3)&1) )
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           0
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           )&0x7) << 8)
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |((0)?
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xfe03f807)
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003c000)
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((3)&0xe) << 24) | ((3)&1) )
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           0
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           )&0x7) << 8)
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |((0)?
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"143",
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                       1
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                              |
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                               (0x200|0x40000)
# 250 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                       ,0},
  { "bule.r", (
# 251 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xe0000000) 
# 251 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 251 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((3)&0xe) << 24) | ((3)&1) ) 
# 251 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((1)?
# 251 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000002)
# 251 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0)),((
# 251 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xfe000003)
# 251 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&~(
# 251 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xe0000000) 
# 251 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 251 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((3)&0xe) << 24) | ((3)&1) ) 
# 251 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((1)?
# 251 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000002)
# 251 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0))) ,"b",
# 251 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                    1
# 251 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                           |
# 251 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                            (0x80000|0x200|0x40000)
# 251 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                       ,0},
  { "bule.r", (
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xf003c000)
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((3)&0xe) << 24) | ((3)&1) )
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((0x00))&0x7) << 8)
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             2
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             )&0x1f) << 18)
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000002)
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             ),((
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xfe03f807)
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             0x1f
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             )&0x1f) << 18)
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             7
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             )&0x7) << 8)
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&~(
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xf003c000)
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((3)&0xe) << 24) | ((3)&1) )
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((0x00))&0x7) << 8)
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             2
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             )&0x1f) << 18)
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000002)
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )) ,"3",
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         1
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                |
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                 (0x80000|0x200|0x40000)
# 252 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                            ,0},

  { "bcc", (
# 254 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 254 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 254 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((4)&0xe) << 24) | ((4)&1) ) 
# 254 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 254 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 254 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 254 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe000003)
# 254 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 254 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 254 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 254 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((4)&0xe) << 24) | ((4)&1) ) 
# 254 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 254 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 254 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"B", 
# 254 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                      (0x200|0x40000)
# 254 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                              ,0},
  { "bcc", (
# 255 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 255 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 255 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((4)&0xe) << 24) | ((4)&1) )
# 255 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 255 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 255 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 255 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 255 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 255 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 255 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 255 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 255 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 255 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 255 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 255 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((4)&0xe) << 24) | ((4)&1) )
# 255 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 255 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 255 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 255 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 255 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 255 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 255 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"1", 
# 255 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 255 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "bcc", (
# 256 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 256 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 256 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((4)&0xe) << 24) | ((4)&1) )
# 256 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 256 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 256 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 256 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 256 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 256 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 256 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 256 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 256 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 256 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 256 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 256 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((4)&0xe) << 24) | ((4)&1) )
# 256 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 256 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 256 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 256 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 256 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 256 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 256 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"143", 
# 256 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 256 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "bcc.r", (
# 257 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 257 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 257 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((4)&0xe) << 24) | ((4)&1) ) 
# 257 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 257 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 257 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0)),((
# 257 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe000003)
# 257 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 257 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 257 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 257 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((4)&0xe) << 24) | ((4)&1) ) 
# 257 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 257 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 257 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0))) ,"b", 
# 257 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                        (0x80000|0x200|0x40000)
# 257 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                   ,0},
  { "bcc.r", (
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((4)&0xe) << 24) | ((4)&1) )
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe03f807)
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            0x1f
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            7
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x7) << 8)
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((4)&0xe) << 24) | ((4)&1) )
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"3", 
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             (0x80000|0x200|0x40000)
# 258 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                        ,0},

  { "buge", (
# 260 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0000000) 
# 260 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 260 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((5)&0xe) << 24) | ((5)&1) ) 
# 260 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 260 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 260 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 260 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xfe000003)
# 260 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 260 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0000000) 
# 260 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 260 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((5)&0xe) << 24) | ((5)&1) ) 
# 260 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 260 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 260 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"B",
# 260 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                  1
# 260 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                         |
# 260 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                          (0x200|0x40000)
# 260 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                  ,0},
  { "buge", (
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003c000)
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((5)&0xe) << 24) | ((5)&1) )
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           0
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           )&0x7) << 8)
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |((0)?
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xfe03f807)
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003c000)
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((5)&0xe) << 24) | ((5)&1) )
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           0
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           )&0x7) << 8)
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |((0)?
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"1",
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                     1
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                            |
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             (0x200|0x40000)
# 261 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     ,0},
  { "buge", (
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003c000)
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((5)&0xe) << 24) | ((5)&1) )
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           0
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           )&0x7) << 8)
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |((0)?
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xfe03f807)
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003c000)
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((5)&0xe) << 24) | ((5)&1) )
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           0
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           )&0x7) << 8)
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |((0)?
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"143",
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                       1
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                              |
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                               (0x200|0x40000)
# 262 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                       ,0},
  { "buge.r", (
# 263 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xe0000000) 
# 263 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 263 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((5)&0xe) << 24) | ((5)&1) ) 
# 263 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((1)?
# 263 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000002)
# 263 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0)),((
# 263 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xfe000003)
# 263 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&~(
# 263 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xe0000000) 
# 263 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 263 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((5)&0xe) << 24) | ((5)&1) ) 
# 263 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((1)?
# 263 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000002)
# 263 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0))) ,"b",
# 263 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                    1
# 263 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                           |
# 263 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                            (0x80000|0x200|0x40000)
# 263 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                       ,0},
  { "buge.r", (
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xf003c000)
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((5)&0xe) << 24) | ((5)&1) )
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((0x00))&0x7) << 8)
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             2
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             )&0x1f) << 18)
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000002)
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             ),((
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xfe03f807)
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             0x1f
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             )&0x1f) << 18)
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             7
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             )&0x7) << 8)
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&~(
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xf003c000)
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((5)&0xe) << 24) | ((5)&1) )
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((0x00))&0x7) << 8)
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             2
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             )&0x1f) << 18)
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000002)
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )) ,"3",
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         1
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                |
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                 (0x80000|0x200|0x40000)
# 264 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                            ,0},

  { "bcs", (
# 266 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 266 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 266 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((5)&0xe) << 24) | ((5)&1) ) 
# 266 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 266 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 266 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 266 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe000003)
# 266 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 266 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 266 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 266 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((5)&0xe) << 24) | ((5)&1) ) 
# 266 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 266 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 266 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"B", 
# 266 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                      (0x200|0x40000)
# 266 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                              ,0},
  { "bcs", (
# 267 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 267 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 267 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((5)&0xe) << 24) | ((5)&1) )
# 267 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 267 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 267 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 267 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 267 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 267 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 267 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 267 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 267 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 267 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 267 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 267 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((5)&0xe) << 24) | ((5)&1) )
# 267 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 267 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 267 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 267 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 267 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 267 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 267 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"1", 
# 267 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 267 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "bcs", (
# 268 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 268 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 268 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((5)&0xe) << 24) | ((5)&1) )
# 268 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 268 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 268 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 268 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 268 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 268 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 268 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 268 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 268 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 268 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 268 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 268 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((5)&0xe) << 24) | ((5)&1) )
# 268 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 268 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 268 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 268 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 268 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 268 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 268 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"143", 
# 268 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 268 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "bcs.r", (
# 269 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 269 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 269 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((5)&0xe) << 24) | ((5)&1) ) 
# 269 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 269 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 269 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0)),((
# 269 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe000003)
# 269 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 269 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 269 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 269 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((5)&0xe) << 24) | ((5)&1) ) 
# 269 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 269 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 269 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0))) ,"b", 
# 269 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                        (0x80000|0x200|0x40000)
# 269 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                   ,0},
  { "bcs.r", (
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((5)&0xe) << 24) | ((5)&1) )
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe03f807)
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            0x1f
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            7
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x7) << 8)
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((5)&0xe) << 24) | ((5)&1) )
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"3", 
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             (0x80000|0x200|0x40000)
# 270 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                        ,0},

  { "bult", (
# 272 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0000000) 
# 272 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 272 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((4)&0xe) << 24) | ((4)&1) ) 
# 272 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 272 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 272 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 272 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xfe000003)
# 272 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 272 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0000000) 
# 272 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 272 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((4)&0xe) << 24) | ((4)&1) ) 
# 272 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 272 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 272 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"B",
# 272 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                  1
# 272 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                         |
# 272 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                          (0x200|0x40000)
# 272 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                  ,0},
  { "bult", (
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003c000)
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((4)&0xe) << 24) | ((4)&1) )
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           0
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           )&0x7) << 8)
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |((0)?
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xfe03f807)
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003c000)
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((4)&0xe) << 24) | ((4)&1) )
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           0
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           )&0x7) << 8)
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |((0)?
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"1",
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                     1
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                            |
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             (0x200|0x40000)
# 273 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     ,0},
  { "bult", (
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003c000)
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((4)&0xe) << 24) | ((4)&1) )
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           0
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           )&0x7) << 8)
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |((0)?
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xfe03f807)
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003c000)
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((4)&0xe) << 24) | ((4)&1) )
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           0
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           )&0x7) << 8)
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           |((0)?
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000002)
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"143",
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                       1
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                              |
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                               (0x200|0x40000)
# 274 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                       ,0},
  { "bult.r", (
# 275 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xe0000000) 
# 275 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 275 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((4)&0xe) << 24) | ((4)&1) ) 
# 275 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((1)?
# 275 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000002)
# 275 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0)),((
# 275 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xfe000003)
# 275 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&~(
# 275 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xe0000000) 
# 275 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 275 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((4)&0xe) << 24) | ((4)&1) ) 
# 275 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((1)?
# 275 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000002)
# 275 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0))) ,"b",
# 275 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                    1
# 275 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                           |
# 275 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                            (0x80000|0x200|0x40000)
# 275 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                       ,0},
  { "bult.r", (
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xf003c000)
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((4)&0xe) << 24) | ((4)&1) )
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((0x00))&0x7) << 8)
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             2
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             )&0x1f) << 18)
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000002)
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             ),((
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xfe03f807)
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             0x1f
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             )&0x1f) << 18)
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             7
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             )&0x7) << 8)
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&~(
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xf003c000)
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((4)&0xe) << 24) | ((4)&1) )
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((0x00))&0x7) << 8)
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             2
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             )&0x1f) << 18)
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             |
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000002)
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )) ,"3",
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         1
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                |
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                 (0x80000|0x200|0x40000)
# 276 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                            ,0},

  { "bne", (
# 278 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 278 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 278 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((6)&0xe) << 24) | ((6)&1) ) 
# 278 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 278 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 278 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 278 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe000003)
# 278 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 278 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 278 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 278 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((6)&0xe) << 24) | ((6)&1) ) 
# 278 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 278 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 278 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"B", 
# 278 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                      (0x200|0x40000)
# 278 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                              ,0},
  { "bne", (
# 279 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 279 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 279 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((6)&0xe) << 24) | ((6)&1) )
# 279 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 279 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 279 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 279 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 279 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 279 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 279 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 279 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 279 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 279 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 279 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 279 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((6)&0xe) << 24) | ((6)&1) )
# 279 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 279 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 279 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 279 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 279 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 279 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 279 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"1", 
# 279 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 279 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "bne", (
# 280 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 280 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 280 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((6)&0xe) << 24) | ((6)&1) )
# 280 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 280 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 280 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 280 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 280 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 280 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 280 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 280 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 280 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 280 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 280 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 280 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((6)&0xe) << 24) | ((6)&1) )
# 280 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 280 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 280 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 280 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 280 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 280 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 280 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"143", 
# 280 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 280 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "bne.r", (
# 281 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 281 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 281 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((6)&0xe) << 24) | ((6)&1) ) 
# 281 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 281 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 281 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0)),((
# 281 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe000003)
# 281 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 281 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 281 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 281 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((6)&0xe) << 24) | ((6)&1) ) 
# 281 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 281 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 281 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0))) ,"b", 
# 281 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                        (0x80000|0x200|0x40000)
# 281 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                   ,0},
  { "bne.r", (
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((6)&0xe) << 24) | ((6)&1) )
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe03f807)
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            0x1f
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            7
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x7) << 8)
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((6)&0xe) << 24) | ((6)&1) )
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"3", 
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             (0x80000|0x200|0x40000)
# 282 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                        ,0},

  { "beq", (
# 284 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 284 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 284 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((7)&0xe) << 24) | ((7)&1) ) 
# 284 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 284 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 284 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 284 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe000003)
# 284 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 284 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 284 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 284 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((7)&0xe) << 24) | ((7)&1) ) 
# 284 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 284 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 284 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"B", 
# 284 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                      (0x200|0x40000)
# 284 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                              ,0},
  { "beq", (
# 285 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 285 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 285 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((7)&0xe) << 24) | ((7)&1) )
# 285 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 285 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 285 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 285 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 285 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 285 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 285 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 285 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 285 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 285 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 285 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 285 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((7)&0xe) << 24) | ((7)&1) )
# 285 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 285 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 285 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 285 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 285 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 285 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 285 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"1", 
# 285 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 285 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "beq", (
# 286 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 286 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 286 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((7)&0xe) << 24) | ((7)&1) )
# 286 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 286 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 286 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 286 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 286 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 286 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 286 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 286 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 286 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 286 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 286 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 286 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((7)&0xe) << 24) | ((7)&1) )
# 286 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 286 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 286 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 286 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 286 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 286 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 286 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"143", 
# 286 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 286 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "beq.r", (
# 287 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 287 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 287 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((7)&0xe) << 24) | ((7)&1) ) 
# 287 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 287 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 287 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0)),((
# 287 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe000003)
# 287 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 287 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 287 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 287 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((7)&0xe) << 24) | ((7)&1) ) 
# 287 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 287 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 287 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0))) ,"b", 
# 287 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                        (0x80000|0x200|0x40000)
# 287 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                   ,0},
  { "beq.r", (
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((7)&0xe) << 24) | ((7)&1) )
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe03f807)
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            0x1f
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            7
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x7) << 8)
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((7)&0xe) << 24) | ((7)&1) )
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"3", 
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             (0x80000|0x200|0x40000)
# 288 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                        ,0},

  { "bvc", (
# 290 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 290 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 290 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((8)&0xe) << 24) | ((8)&1) ) 
# 290 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 290 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 290 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 290 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe000003)
# 290 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 290 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 290 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 290 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((8)&0xe) << 24) | ((8)&1) ) 
# 290 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 290 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 290 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"B", 
# 290 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                      (0x200|0x40000)
# 290 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                              ,0},
  { "bvc", (
# 291 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 291 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 291 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((8)&0xe) << 24) | ((8)&1) )
# 291 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 291 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 291 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 291 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 291 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 291 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 291 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 291 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 291 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 291 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 291 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 291 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((8)&0xe) << 24) | ((8)&1) )
# 291 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 291 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 291 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 291 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 291 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 291 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 291 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"1", 
# 291 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 291 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "bvc", (
# 292 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 292 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 292 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((8)&0xe) << 24) | ((8)&1) )
# 292 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 292 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 292 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 292 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 292 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 292 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 292 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 292 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 292 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 292 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 292 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 292 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((8)&0xe) << 24) | ((8)&1) )
# 292 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 292 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 292 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 292 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 292 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 292 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 292 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"143", 
# 292 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 292 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "bvc.r", (
# 293 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 293 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 293 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((8)&0xe) << 24) | ((8)&1) ) 
# 293 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 293 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 293 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0)),((
# 293 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe000003)
# 293 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 293 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 293 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 293 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((8)&0xe) << 24) | ((8)&1) ) 
# 293 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 293 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 293 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0))) ,"b", 
# 293 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                        (0x80000|0x200|0x40000)
# 293 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                   ,0},
  { "bvc.r", (
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((8)&0xe) << 24) | ((8)&1) )
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe03f807)
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            0x1f
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            7
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x7) << 8)
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((8)&0xe) << 24) | ((8)&1) )
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"3", 
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             (0x80000|0x200|0x40000)
# 294 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                        ,0},

  { "bvs", (
# 296 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 296 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 296 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((9)&0xe) << 24) | ((9)&1) ) 
# 296 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 296 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 296 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 296 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe000003)
# 296 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 296 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 296 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 296 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((9)&0xe) << 24) | ((9)&1) ) 
# 296 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 296 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 296 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"B", 
# 296 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                      (0x200|0x40000)
# 296 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                              ,0},
  { "bvs", (
# 297 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 297 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 297 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((9)&0xe) << 24) | ((9)&1) )
# 297 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 297 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 297 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 297 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 297 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 297 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 297 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 297 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 297 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 297 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 297 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 297 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((9)&0xe) << 24) | ((9)&1) )
# 297 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 297 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 297 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 297 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 297 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 297 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 297 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"1", 
# 297 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 297 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "bvs", (
# 298 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 298 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 298 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((9)&0xe) << 24) | ((9)&1) )
# 298 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 298 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 298 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 298 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 298 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 298 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 298 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 298 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 298 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 298 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 298 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 298 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((9)&0xe) << 24) | ((9)&1) )
# 298 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 298 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 298 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 298 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 298 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 298 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 298 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"143", 
# 298 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 298 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "bvs.r", (
# 299 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 299 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 299 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((9)&0xe) << 24) | ((9)&1) ) 
# 299 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 299 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 299 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0)),((
# 299 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe000003)
# 299 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 299 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 299 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 299 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((9)&0xe) << 24) | ((9)&1) ) 
# 299 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 299 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 299 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0))) ,"b", 
# 299 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                        (0x80000|0x200|0x40000)
# 299 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                   ,0},
  { "bvs.r", (
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((9)&0xe) << 24) | ((9)&1) )
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe03f807)
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            0x1f
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            7
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x7) << 8)
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((9)&0xe) << 24) | ((9)&1) )
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"3", 
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             (0x80000|0x200|0x40000)
# 300 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                        ,0},

  { "bpl", (
# 302 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 302 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 302 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((10)&0xe) << 24) | ((10)&1) ) 
# 302 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 302 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 302 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 302 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe000003)
# 302 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 302 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 302 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 302 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((10)&0xe) << 24) | ((10)&1) ) 
# 302 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 302 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 302 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"B", 
# 302 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                      (0x200|0x40000)
# 302 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                              ,0},
  { "bpl", (
# 303 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 303 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 303 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((10)&0xe) << 24) | ((10)&1) )
# 303 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 303 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 303 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 303 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 303 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 303 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 303 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 303 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 303 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 303 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 303 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 303 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((10)&0xe) << 24) | ((10)&1) )
# 303 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 303 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 303 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 303 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 303 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 303 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 303 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"1", 
# 303 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 303 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "bpl", (
# 304 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 304 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 304 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((10)&0xe) << 24) | ((10)&1) )
# 304 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 304 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 304 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 304 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 304 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 304 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 304 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 304 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 304 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 304 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 304 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 304 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((10)&0xe) << 24) | ((10)&1) )
# 304 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 304 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 304 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 304 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 304 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 304 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 304 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"143", 
# 304 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 304 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "bpl.r", (
# 305 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 305 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 305 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((10)&0xe) << 24) | ((10)&1) ) 
# 305 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 305 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 305 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0)),((
# 305 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe000003)
# 305 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 305 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 305 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 305 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((10)&0xe) << 24) | ((10)&1) ) 
# 305 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 305 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 305 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0))) ,"b", 
# 305 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                        (0x80000|0x200|0x40000)
# 305 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                   ,0},
  { "bpl.r", (
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((10)&0xe) << 24) | ((10)&1) )
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe03f807)
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            0x1f
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            7
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x7) << 8)
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((10)&0xe) << 24) | ((10)&1) )
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"3", 
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             (0x80000|0x200|0x40000)
# 306 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                        ,0},

  { "bmi", (
# 308 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 308 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 308 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((11)&0xe) << 24) | ((11)&1) ) 
# 308 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 308 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 308 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 308 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe000003)
# 308 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 308 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 308 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 308 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((11)&0xe) << 24) | ((11)&1) ) 
# 308 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 308 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 308 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"B", 
# 308 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                      (0x200|0x40000)
# 308 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                              ,0},
  { "bmi", (
# 309 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 309 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 309 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((11)&0xe) << 24) | ((11)&1) )
# 309 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 309 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 309 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 309 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 309 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 309 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 309 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 309 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 309 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 309 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 309 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 309 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((11)&0xe) << 24) | ((11)&1) )
# 309 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 309 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 309 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 309 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 309 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 309 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 309 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"1", 
# 309 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 309 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "bmi", (
# 310 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 310 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 310 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((11)&0xe) << 24) | ((11)&1) )
# 310 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 310 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 310 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 310 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 310 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 310 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 310 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 310 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 310 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 310 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 310 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 310 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((11)&0xe) << 24) | ((11)&1) )
# 310 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 310 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 310 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 310 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 310 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 310 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 310 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"143", 
# 310 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 310 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "bmi.r", (
# 311 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 311 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 311 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((11)&0xe) << 24) | ((11)&1) ) 
# 311 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 311 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 311 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0)),((
# 311 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe000003)
# 311 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 311 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 311 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 311 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((11)&0xe) << 24) | ((11)&1) ) 
# 311 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 311 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 311 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0))) ,"b", 
# 311 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                        (0x80000|0x200|0x40000)
# 311 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                   ,0},
  { "bmi.r", (
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((11)&0xe) << 24) | ((11)&1) )
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe03f807)
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            0x1f
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            7
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x7) << 8)
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((11)&0xe) << 24) | ((11)&1) )
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"3", 
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             (0x80000|0x200|0x40000)
# 312 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                        ,0},

  { "bge", (
# 314 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 314 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 314 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((12)&0xe) << 24) | ((12)&1) ) 
# 314 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 314 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 314 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 314 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe000003)
# 314 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 314 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 314 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 314 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((12)&0xe) << 24) | ((12)&1) ) 
# 314 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 314 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 314 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"B", 
# 314 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                      (0x200|0x40000)
# 314 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                              ,0},
  { "bge", (
# 315 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 315 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 315 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((12)&0xe) << 24) | ((12)&1) )
# 315 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 315 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 315 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 315 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 315 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 315 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 315 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 315 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 315 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 315 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 315 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 315 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((12)&0xe) << 24) | ((12)&1) )
# 315 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 315 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 315 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 315 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 315 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 315 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 315 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"1", 
# 315 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 315 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "bge", (
# 316 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 316 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 316 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((12)&0xe) << 24) | ((12)&1) )
# 316 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 316 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 316 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 316 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 316 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 316 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 316 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 316 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 316 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 316 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 316 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 316 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((12)&0xe) << 24) | ((12)&1) )
# 316 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 316 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 316 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 316 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 316 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 316 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 316 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"143", 
# 316 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 316 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "bge.r", (
# 317 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 317 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 317 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((12)&0xe) << 24) | ((12)&1) ) 
# 317 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 317 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 317 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0)),((
# 317 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe000003)
# 317 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 317 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 317 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 317 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((12)&0xe) << 24) | ((12)&1) ) 
# 317 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 317 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 317 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0))) ,"b", 
# 317 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                        (0x80000|0x200|0x40000)
# 317 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                   ,0},
  { "bge.r", (
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((12)&0xe) << 24) | ((12)&1) )
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe03f807)
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            0x1f
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            7
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x7) << 8)
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((12)&0xe) << 24) | ((12)&1) )
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"3", 
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             (0x80000|0x200|0x40000)
# 318 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                        ,0},

  { "blt", (
# 320 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 320 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 320 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((13)&0xe) << 24) | ((13)&1) ) 
# 320 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 320 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 320 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 320 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe000003)
# 320 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 320 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 320 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 320 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((13)&0xe) << 24) | ((13)&1) ) 
# 320 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 320 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 320 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"B", 
# 320 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                      (0x200|0x40000)
# 320 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                              ,0},
  { "blt", (
# 321 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 321 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 321 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((13)&0xe) << 24) | ((13)&1) )
# 321 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 321 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 321 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 321 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 321 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 321 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 321 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 321 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 321 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 321 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 321 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 321 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((13)&0xe) << 24) | ((13)&1) )
# 321 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 321 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 321 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 321 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 321 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 321 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 321 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"1", 
# 321 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 321 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "blt", (
# 322 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 322 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 322 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((13)&0xe) << 24) | ((13)&1) )
# 322 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 322 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 322 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 322 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 322 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 322 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 322 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 322 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 322 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 322 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 322 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 322 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((13)&0xe) << 24) | ((13)&1) )
# 322 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 322 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 322 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 322 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 322 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 322 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 322 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"143", 
# 322 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 322 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "blt.r", (
# 323 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 323 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 323 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((13)&0xe) << 24) | ((13)&1) ) 
# 323 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 323 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 323 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0)),((
# 323 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe000003)
# 323 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 323 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 323 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 323 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((13)&0xe) << 24) | ((13)&1) ) 
# 323 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 323 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 323 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0))) ,"b", 
# 323 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                        (0x80000|0x200|0x40000)
# 323 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                   ,0},
  { "blt.r", (
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((13)&0xe) << 24) | ((13)&1) )
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe03f807)
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            0x1f
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            7
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x7) << 8)
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((13)&0xe) << 24) | ((13)&1) )
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"3", 
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             (0x80000|0x200|0x40000)
# 324 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                        ,0},

  { "bgt", (
# 326 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 326 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 326 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((14)&0xe) << 24) | ((14)&1) ) 
# 326 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 326 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 326 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 326 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe000003)
# 326 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 326 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 326 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 326 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((14)&0xe) << 24) | ((14)&1) ) 
# 326 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 326 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 326 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"B", 
# 326 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                      (0x200|0x40000)
# 326 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                              ,0},
  { "bgt", (
# 327 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 327 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 327 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((14)&0xe) << 24) | ((14)&1) )
# 327 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 327 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 327 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 327 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 327 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 327 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 327 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 327 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 327 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 327 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 327 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 327 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((14)&0xe) << 24) | ((14)&1) )
# 327 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 327 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 327 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 327 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 327 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 327 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 327 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"1", 
# 327 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 327 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "bgt", (
# 328 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 328 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 328 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((14)&0xe) << 24) | ((14)&1) )
# 328 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 328 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 328 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 328 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 328 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 328 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 328 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 328 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 328 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 328 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 328 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 328 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((14)&0xe) << 24) | ((14)&1) )
# 328 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 328 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 328 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 328 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 328 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 328 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 328 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"143", 
# 328 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 328 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "bgt.r", (
# 329 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 329 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 329 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((14)&0xe) << 24) | ((14)&1) ) 
# 329 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 329 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 329 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0)),((
# 329 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe000003)
# 329 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 329 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 329 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 329 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((14)&0xe) << 24) | ((14)&1) ) 
# 329 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 329 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 329 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0))) ,"b", 
# 329 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                        (0x80000|0x200|0x40000)
# 329 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                   ,0},
  { "bgt.r", (
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((14)&0xe) << 24) | ((14)&1) )
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe03f807)
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            0x1f
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            7
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x7) << 8)
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((14)&0xe) << 24) | ((14)&1) )
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"3", 
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             (0x80000|0x200|0x40000)
# 330 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                        ,0},

  { "ble", (
# 332 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 332 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 332 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((15)&0xe) << 24) | ((15)&1) ) 
# 332 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 332 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 332 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 332 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe000003)
# 332 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 332 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000000) 
# 332 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 332 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((15)&0xe) << 24) | ((15)&1) ) 
# 332 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 332 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 332 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"B", 
# 332 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                      (0x200|0x40000)
# 332 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                              ,0},
  { "ble", (
# 333 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 333 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 333 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((15)&0xe) << 24) | ((15)&1) )
# 333 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 333 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 333 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 333 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 333 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 333 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 333 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 333 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 333 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 333 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 333 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 333 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((15)&0xe) << 24) | ((15)&1) )
# 333 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 333 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 333 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 333 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 333 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 333 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 333 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"1", 
# 333 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 333 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "ble", (
# 334 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 334 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 334 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((15)&0xe) << 24) | ((15)&1) )
# 334 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 334 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 334 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 334 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 334 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 334 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 334 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 334 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xfe03f807)
# 334 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 334 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf003c000)
# 334 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 334 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((15)&0xe) << 24) | ((15)&1) )
# 334 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 334 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((
# 334 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          0
# 334 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          )&0x7) << 8)
# 334 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |((0)?
# 334 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000002)
# 334 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"143", 
# 334 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         (0x200|0x40000)
# 334 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "ble.r", (
# 335 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 335 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 335 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((15)&0xe) << 24) | ((15)&1) ) 
# 335 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 335 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 335 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0)),((
# 335 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe000003)
# 335 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 335 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0000000) 
# 335 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 335 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((15)&0xe) << 24) | ((15)&1) ) 
# 335 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 335 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 335 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0))) ,"b", 
# 335 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                        (0x80000|0x200|0x40000)
# 335 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                   ,0},
  { "ble.r", (
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((15)&0xe) << 24) | ((15)&1) )
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xfe03f807)
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            0x1f
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            7
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x7) << 8)
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf003c000)
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((15)&0xe) << 24) | ((15)&1) )
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x00))&0x7) << 8)
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            2
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            )&0x1f) << 18)
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000002)
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"3", 
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             (0x80000|0x200|0x40000)
# 336 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                        ,0},



  { "ld", 0x80030004,0x7000fffb ,"[++1],d", 
# 340 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             0x80
# 340 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "ld", 0x80010004,0x7002fffb ,"[1++],d", 
# 341 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             0x80
# 341 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "ld", 0x8003fffc,0x70000003 ,"[--1],d", 
# 342 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             0x80
# 342 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "ld", 0x8001fffc,0x70020003 ,"[1--],d", 
# 343 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             0x80
# 343 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "ld", (
# 344 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 344 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 344 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 344 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 344 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 344 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 344 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 344 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 344 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 2 ))&0x7) << 0)
# 344 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 344 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0030007)
# 344 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 344 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 344 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 344 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 344 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 344 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 344 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 344 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 344 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 344 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 2 ))&0x7) << 0)
# 344 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"2[1],d", 
# 344 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x100
# 344 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                 ,0},
  { "ld", (
# 345 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 345 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 345 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 345 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 345 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 345 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 345 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 345 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 345 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 2 ))&0x7) << 0)
# 345 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 345 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0030007)
# 345 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 345 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 345 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 345 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 345 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 345 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 345 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 345 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 345 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 345 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 2 ))&0x7) << 0)
# 345 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"2[*1],d", 
# 345 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x100
# 345 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                 ,0},
  { "ld", (
# 346 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 346 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 346 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 346 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 346 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 346 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 346 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 346 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 346 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 2 ))&0x7) << 0)
# 346 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 346 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0030007)
# 346 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 346 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 346 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 346 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 346 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 346 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 346 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 346 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 346 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 346 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 2 ))&0x7) << 0)
# 346 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"2[1*],d", 
# 346 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x100
# 346 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                 ,0},
  { "ld", (
# 347 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 347 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 347 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 347 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 347 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 347 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 347 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 347 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 347 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 2 ))&0x7) << 0)
# 347 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 347 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0030007)
# 347 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 347 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 347 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 347 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 347 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 347 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 347 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 347 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 347 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 347 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 2 ))&0x7) << 0)
# 347 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"[162],d", 
# 347 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x100
# 347 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                 ,0},
  { "ld", (
# 348 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 348 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 348 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 348 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 348 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 348 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 348 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 348 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 348 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 2 ))&0x7) << 0)
# 348 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 348 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0030007)
# 348 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 348 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 348 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 348 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 348 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 348 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 348 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 348 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 348 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 348 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 2 ))&0x7) << 0)
# 348 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"[*162],d", 
# 348 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x100
# 348 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                 ,0},
  { "ld", (
# 349 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 349 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 349 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 349 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 349 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 349 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 349 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 349 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 349 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 2 ))&0x7) << 0)
# 349 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 349 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0030007)
# 349 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 349 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 349 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 349 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 349 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 349 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 349 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 349 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 349 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 349 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 2 ))&0x7) << 0)
# 349 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"[1*62],d", 
# 349 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x100
# 349 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                 ,0},
  { "ld", (
# 350 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xf0000000) 
# 350 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((0)?
# 350 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00010000)
# 350 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0)),((
# 350 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xf0030000)
# 350 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&~(
# 350 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xf0000000) 
# 350 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((0)?
# 350 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00010000)
# 350 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0))) ,"[Y],d", 
# 350 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                    0x400
# 350 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                         ,0},
  { "ld", 0x80020000,0x707d0000 ,"[o],d", 
# 351 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             0x80
# 351 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},

  { "ld", (
# 353 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x80000000) 
# 353 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((0)?
# 353 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x10000000)
# 353 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((1)?
# 353 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00020000)
# 353 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((0)?
# 353 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00010000)
# 353 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0)),((
# 353 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xf0030000)
# 353 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&~(
# 353 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x80000000) 
# 353 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((0)?
# 353 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x10000000)
# 353 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((1)?
# 353 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00020000)
# 353 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((0)?
# 353 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00010000)
# 353 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0))) ,"o[1],d", 
# 353 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                       0x80
# 353 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                           ,0},
  { "ld", (
# 354 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x80000000) 
# 354 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((0)?
# 354 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x10000000)
# 354 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((1)?
# 354 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00020000)
# 354 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((1)?
# 354 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00010000)
# 354 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0)),((
# 354 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xf0030000)
# 354 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&~(
# 354 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x80000000) 
# 354 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((0)?
# 354 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x10000000)
# 354 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((1)?
# 354 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00020000)
# 354 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((1)?
# 354 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00010000)
# 354 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0))) ,"o[*1],d", 
# 354 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                       0x80
# 354 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                           ,0},
  { "ld", (
# 355 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x80000000) 
# 355 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((0)?
# 355 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x10000000)
# 355 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((0)?
# 355 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00020000)
# 355 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((1)?
# 355 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00010000)
# 355 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0)),((
# 355 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xf0030000)
# 355 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&~(
# 355 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x80000000) 
# 355 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((0)?
# 355 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x10000000)
# 355 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((0)?
# 355 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00020000)
# 355 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((1)?
# 355 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00010000)
# 355 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0))) ,"o[1*],d", 
# 355 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                       0x80
# 355 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                           ,0},

  { "uld", 0x80030004,0x7000fffb ,"[++1],d", 
# 357 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                              1
# 357 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     ,0},
  { "uld", 0x80010004,0x7002fffb ,"[1++],d", 
# 358 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                              1
# 358 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     ,0},
  { "uld", 0x8003fffc,0x70000003 ,"[--1],d", 
# 359 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                              1
# 359 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     ,0},
  { "uld", 0x8001fffc,0x70020003 ,"[1--],d", 
# 360 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                              1
# 360 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     ,0},
  { "uld", (
# 361 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xa0000000) 
# 361 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 361 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10000000)
# 361 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 361 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 361 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((0)?
# 361 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 361 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | 
# 361 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((( 1 | 2 ))&0x7) << 0)
# 361 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ),((
# 361 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0030007)
# 361 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 361 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xa0000000) 
# 361 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 361 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10000000)
# 361 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 361 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 361 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((0)?
# 361 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 361 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | 
# 361 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((( 1 | 2 ))&0x7) << 0)
# 361 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )) ,"2[1],d", 
# 361 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            1
# 361 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                   ,0},
  { "uld", (
# 362 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xa0000000) 
# 362 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 362 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10000000)
# 362 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 362 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 362 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 362 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 362 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | 
# 362 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((( 1 | 2 ))&0x7) << 0)
# 362 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ),((
# 362 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0030007)
# 362 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 362 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xa0000000) 
# 362 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 362 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10000000)
# 362 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 362 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 362 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 362 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 362 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | 
# 362 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((( 1 | 2 ))&0x7) << 0)
# 362 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )) ,"2[*1],d", 
# 362 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            1
# 362 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                   ,0},
  { "uld", (
# 363 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xa0000000) 
# 363 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 363 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10000000)
# 363 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((0)?
# 363 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 363 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 363 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 363 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | 
# 363 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((( 1 | 2 ))&0x7) << 0)
# 363 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ),((
# 363 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0030007)
# 363 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 363 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xa0000000) 
# 363 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 363 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10000000)
# 363 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((0)?
# 363 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 363 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 363 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 363 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | 
# 363 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((( 1 | 2 ))&0x7) << 0)
# 363 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )) ,"2[1*],d", 
# 363 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            1
# 363 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                   ,0},
  { "uld", (
# 364 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xa0000000) 
# 364 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 364 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10000000)
# 364 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 364 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 364 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((0)?
# 364 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 364 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | 
# 364 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((( 1 | 2 ))&0x7) << 0)
# 364 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ),((
# 364 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0030007)
# 364 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 364 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xa0000000) 
# 364 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 364 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10000000)
# 364 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 364 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 364 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((0)?
# 364 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 364 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | 
# 364 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((( 1 | 2 ))&0x7) << 0)
# 364 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )) ,"[162],d", 
# 364 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            1
# 364 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                   ,0},
  { "uld", (
# 365 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xa0000000) 
# 365 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 365 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10000000)
# 365 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 365 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 365 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 365 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 365 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | 
# 365 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((( 1 | 2 ))&0x7) << 0)
# 365 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ),((
# 365 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0030007)
# 365 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 365 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xa0000000) 
# 365 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 365 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10000000)
# 365 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 365 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 365 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 365 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 365 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | 
# 365 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((( 1 | 2 ))&0x7) << 0)
# 365 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )) ,"[*162],d", 
# 365 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            1
# 365 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                   ,0},
  { "uld", (
# 366 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xa0000000) 
# 366 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 366 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10000000)
# 366 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((0)?
# 366 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 366 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 366 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 366 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | 
# 366 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((( 1 | 2 ))&0x7) << 0)
# 366 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ),((
# 366 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0030007)
# 366 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 366 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xa0000000) 
# 366 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 366 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10000000)
# 366 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((0)?
# 366 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 366 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 366 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 366 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | 
# 366 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (((( 1 | 2 ))&0x7) << 0)
# 366 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )) ,"[1*62],d", 
# 366 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            1
# 366 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                   ,0},
  { "uld", (
# 367 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
               (0xf0000000) 
# 367 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
               | ((0)?
# 367 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
               (0x00010000)
# 367 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
               :0)),((
# 367 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
               (0xf0030000)
# 367 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
               )&~(
# 367 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
               (0xf0000000) 
# 367 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
               | ((0)?
# 367 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
               (0x00010000)
# 367 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
               :0))) ,"[Y],d", 
# 367 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                          0x400
# 367 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                               |
# 367 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                1
# 367 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                       ,0},

  { "uld", (
# 369 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
               (0x80000000) 
# 369 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
               | ((0)?
# 369 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
               (0x10000000)
# 369 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
               :0) | ((1)?
# 369 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
               (0x00020000)
# 369 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
               :0) | ((0)?
# 369 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
               (0x00010000)
# 369 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
               :0)),((
# 369 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
               (0xf0030000)
# 369 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
               )&~(
# 369 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
               (0x80000000) 
# 369 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
               | ((0)?
# 369 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
               (0x10000000)
# 369 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
               :0) | ((1)?
# 369 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
               (0x00020000)
# 369 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
               :0) | ((0)?
# 369 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
               (0x00010000)
# 369 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
               :0))) ,"[o],d", 
# 369 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             1
# 369 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                    ,0},
  { "uld", (
# 370 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
               (0x80000000) 
# 370 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
               | ((0)?
# 370 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
               (0x10000000)
# 370 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
               :0) | ((1)?
# 370 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
               (0x00020000)
# 370 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
               :0) | ((0)?
# 370 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
               (0x00010000)
# 370 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
               :0)),((
# 370 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
               (0xf0030000)
# 370 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
               )&~(
# 370 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
               (0x80000000) 
# 370 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
               | ((0)?
# 370 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
               (0x10000000)
# 370 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
               :0) | ((1)?
# 370 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
               (0x00020000)
# 370 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
               :0) | ((0)?
# 370 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
               (0x00010000)
# 370 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
               :0))) ,"o[1],d", 
# 370 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             1
# 370 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                    ,0},
  { "uld", (
# 371 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x80000000) 
# 371 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 371 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10000000)
# 371 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 371 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 371 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 371 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 371 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 371 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf0030000)
# 371 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 371 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x80000000) 
# 371 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 371 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10000000)
# 371 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 371 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 371 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 371 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 371 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"o[*1],d", 
# 371 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                        1
# 371 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                               ,0},
  { "uld", (
# 372 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x80000000) 
# 372 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 372 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10000000)
# 372 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((0)?
# 372 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 372 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 372 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 372 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 372 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf0030000)
# 372 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 372 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x80000000) 
# 372 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 372 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10000000)
# 372 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((0)?
# 372 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 372 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 372 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 372 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"o[1*],d", 
# 372 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                        1
# 372 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                               ,0},

  { "ld.h", 0xf0030c02,0x0000f3fd ,"[++1],d", 
# 374 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                               0x10000
# 374 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     |
# 374 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                      0x1000
# 374 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                            ,0},
  { "ld.h", 0xf0030402,0x0000fbfd ,"[1++],d", 
# 375 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                               0x10000
# 375 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     |
# 375 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                      0x1000
# 375 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                            ,0},
  { "ld.h", 0xf0030ffe,0x0000f001 ,"[--1],d", 
# 376 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                               0x10000
# 376 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     |
# 376 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                      0x1000
# 376 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                            ,0},
  { "ld.h", 0xf00307fe,0x0000f801 ,"[1--],d", 
# 377 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                               0x10000
# 377 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     |
# 377 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                      0x1000
# 377 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                            ,0},
  { "ld.h", (
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 0 ))&0x7) << 0)
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0030007)
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 0 ))&0x7) << 0)
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"2[1],d", 
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x100
# 378 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                        ,0},
  { "ld.h", (
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 0 ))&0x7) << 0)
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0030007)
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 0 ))&0x7) << 0)
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"2[*1],d", 
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x100
# 379 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                        ,0},
  { "ld.h", (
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 0 ))&0x7) << 0)
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0030007)
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 0 ))&0x7) << 0)
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"2[1*],d", 
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x100
# 380 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                        ,0},
  { "ld.h", (
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 0 ))&0x7) << 0)
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0030007)
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 0 ))&0x7) << 0)
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"[162],d", 
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x100
# 381 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                        ,0},
  { "ld.h", (
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 0 ))&0x7) << 0)
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0030007)
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 0 ))&0x7) << 0)
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"[*162],d", 
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x100
# 382 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                        ,0},
  { "ld.h", (
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 0 ))&0x7) << 0)
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0030007)
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 0 ))&0x7) << 0)
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"[1*62],d", 
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x100
# 383 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                        ,0},
  { "ld.h", 0xf0030800,0x007cf400 ,"[i],d", 
# 384 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                               0x10000
# 384 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     |
# 384 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                      0x1000
# 384 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                            ,0},

  { "ld.h", (
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 0 ))&0x5) << 12) 
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003fc00)
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 0 ))&0x5) << 12) 
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"i[1],d", 
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x1000
# 386 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                         ,0},
  { "ld.h", (
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 0 ))&0x5) << 12) 
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003fc00)
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 0 ))&0x5) << 12) 
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"i[*1],d", 
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x1000
# 387 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                         ,0},
  { "ld.h", (
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 0 ))&0x5) << 12) 
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003fc00)
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 0 ))&0x5) << 12) 
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"i[1*],d", 
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x1000
# 388 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                         ,0},

  { "uld.h", 0xf0031c02,0x0000e3fd ,"[++1],d", 
# 390 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                0x10000
# 390 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                      |
# 390 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                       0x1000
# 390 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                             ,0},
  { "uld.h", 0xf0031402,0x0000ebfd ,"[1++],d", 
# 391 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                0x10000
# 391 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                      |
# 391 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                       0x1000
# 391 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                             ,0},
  { "uld.h", 0xf0031ffe,0x0000e001 ,"[--1],d", 
# 392 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                0x10000
# 392 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                      |
# 392 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                       0x1000
# 392 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                             ,0},
  { "uld.h", 0xf00317fe,0x0000e801 ,"[1--],d", 
# 393 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                0x10000
# 393 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                      |
# 393 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                       0x1000
# 393 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                             ,0},
  { "uld.h",(
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 1 | 0 ))&0x7) << 0)
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ),((
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0030007)
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 1 | 0 ))&0x7) << 0)
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )),"2[1],d", 
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x100
# 394 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                        ,0},
  { "uld.h",(
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 1 | 0 ))&0x7) << 0)
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ),((
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0030007)
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 1 | 0 ))&0x7) << 0)
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )),"2[*1],d", 
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x100
# 395 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                        ,0},
  { "uld.h",(
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 1 | 0 ))&0x7) << 0)
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ),((
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0030007)
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 1 | 0 ))&0x7) << 0)
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )),"2[1*],d", 
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x100
# 396 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                        ,0},
  { "uld.h",(
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 1 | 0 ))&0x7) << 0)
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ),((
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0030007)
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 1 | 0 ))&0x7) << 0)
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )),"[162],d", 
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x100
# 397 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                        ,0},
  { "uld.h",(
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 1 | 0 ))&0x7) << 0)
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ),((
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0030007)
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 1 | 0 ))&0x7) << 0)
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )),"[*162],d", 
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x100
# 398 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                        ,0},
  { "uld.h",(
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 1 | 0 ))&0x7) << 0)
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ),((
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0030007)
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 1 | 0 ))&0x7) << 0)
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )),"[1*62],d", 
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x100
# 399 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                        ,0},
  { "uld.h", 0xf0031800,0x007ce400 ,"[i],d", 
# 400 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                0x10000
# 400 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                      |
# 400 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                       0x1000
# 400 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                             ,0},

  { "uld.h",(
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 1 | 0 ))&0x5) << 12) 
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003fc00)
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 1 | 0 ))&0x5) << 12) 
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))),"i[1],d", 
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x1000
# 402 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                         ,0},
  { "uld.h",(
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 1 | 0 ))&0x5) << 12) 
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003fc00)
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 1 | 0 ))&0x5) << 12) 
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))),"i[*1],d", 
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x1000
# 403 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                         ,0},
  { "uld.h",(
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 1 | 0 ))&0x5) << 12) 
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003fc00)
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 1 | 0 ))&0x5) << 12) 
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))),"i[1*],d", 
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x1000
# 404 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                         ,0},

  { "ld.b", 0xf0034c01,0x0000b3fe ,"[++1],d", 
# 406 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                               0x20000
# 406 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     |
# 406 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                      0x1000
# 406 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                            ,0},
  { "ld.b", 0xf0034401,0x0000bbfe ,"[1++],d", 
# 407 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                               0x20000
# 407 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     |
# 407 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                      0x1000
# 407 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                            ,0},
  { "ld.b", 0xf0034fff,0x0000b000 ,"[--1],d", 
# 408 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                               0x20000
# 408 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     |
# 408 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                      0x1000
# 408 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                            ,0},
  { "ld.b", 0xf00347ff,0x0000b800 ,"[1--],d", 
# 409 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                               0x20000
# 409 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     |
# 409 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                      0x1000
# 409 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                            ,0},
  { "ld.b", (
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x7) << 0)
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ),((
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0030007)
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x7) << 0)
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )) ,"2[1],d", 
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                       0x20000
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                             |
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                              0x100
# 410 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                   ,0},
  { "ld.b", (
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x7) << 0)
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ),((
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0030007)
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x7) << 0)
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )) ,"2[*1],d", 
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                       0x20000
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                             |
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                              0x100
# 411 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                   ,0},
  { "ld.b", (
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x7) << 0)
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ),((
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0030007)
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x7) << 0)
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )) ,"2[1*],d", 
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                       0x20000
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                             |
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                              0x100
# 412 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                   ,0},
  { "ld.b", (
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x7) << 0)
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ),((
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0030007)
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x7) << 0)
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )) ,"[162],d", 
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                       0x20000
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                             |
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                              0x100
# 413 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                   ,0},
  { "ld.b", (
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x7) << 0)
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ),((
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0030007)
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x7) << 0)
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )) ,"[*162],d", 
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                       0x20000
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                             |
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                              0x100
# 414 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                   ,0},
  { "ld.b", (
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x7) << 0)
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ),((
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0030007)
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x7) << 0)
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )) ,"[1*62],d", 
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                       0x20000
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                             |
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                              0x100
# 415 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                   ,0},
  { "ld.b", 0xf0034800,0x007cb400 ,"[i],d", 
# 416 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                               0x20000
# 416 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     |
# 416 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                      0x1000
# 416 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                            ,0},

  { "ld.b", (
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x5) << 12) 
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003fc00)
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x5) << 12) 
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"i[1],d", 
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                        0x20000
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                              |
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                               0x1000
# 418 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                     ,0},
  { "ld.b", (
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x5) << 12) 
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003fc00)
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x5) << 12) 
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"i[*1],d", 
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                        0x20000
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                              |
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                               0x1000
# 419 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                     ,0},
  { "ld.b", (
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x5) << 12) 
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003fc00)
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x5) << 12) 
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"i[1*],d", 
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                        0x20000
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                              |
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                               0x1000
# 420 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                     ,0},

  { "uld.b", 0xf0035c01,0x0000a3fe ,"[++1],d", 
# 422 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                0x20000
# 422 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                      |
# 422 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                       0x1000
# 422 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                             ,0},
  { "uld.b", 0xf0035401,0x0000abfe ,"[1++],d", 
# 423 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                0x20000
# 423 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                      |
# 423 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                       0x1000
# 423 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                             ,0},
  { "uld.b", 0xf0035fff,0x0000a000 ,"[--1],d", 
# 424 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                0x20000
# 424 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                      |
# 424 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                       0x1000
# 424 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                             ,0},
  { "uld.b", 0xf00357ff,0x0000a800 ,"[1--],d", 
# 425 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                0x20000
# 425 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                      |
# 425 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                       0x1000
# 425 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                             ,0},
  { "uld.b", (
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xa0000000) 
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((0)?
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x10000000)
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((0)?
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00010000)
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | 
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((( 1 | 4 ))&0x7) << 0)
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             ),((
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xe0030007)
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&~(
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xa0000000) 
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((0)?
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x10000000)
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((0)?
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00010000)
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | 
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((( 1 | 4 ))&0x7) << 0)
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )) ,"2[1],d", 
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                           0x20000
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                 |
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                  0x100
# 426 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                       ,0},
  { "uld.b", (
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xa0000000) 
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((0)?
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x10000000)
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00010000)
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | 
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((( 1 | 4 ))&0x7) << 0)
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             ),((
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xe0030007)
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&~(
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xa0000000) 
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((0)?
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x10000000)
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00010000)
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | 
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((( 1 | 4 ))&0x7) << 0)
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )) ,"2[*1],d", 
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                           0x20000
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                 |
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                  0x100
# 427 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                       ,0},
  { "uld.b", (
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xa0000000) 
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((0)?
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x10000000)
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((0)?
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00010000)
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | 
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((( 1 | 4 ))&0x7) << 0)
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             ),((
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xe0030007)
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&~(
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xa0000000) 
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((0)?
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x10000000)
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((0)?
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00010000)
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | 
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((( 1 | 4 ))&0x7) << 0)
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )) ,"2[1*],d", 
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                           0x20000
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                 |
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                  0x100
# 428 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                       ,0},
  { "uld.b", (
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xa0000000) 
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((0)?
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x10000000)
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((0)?
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00010000)
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | 
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((( 1 | 4 ))&0x7) << 0)
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             ),((
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xe0030007)
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&~(
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xa0000000) 
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((0)?
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x10000000)
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((0)?
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00010000)
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | 
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((( 1 | 4 ))&0x7) << 0)
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )) ,"[162],d", 
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                           0x20000
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                 |
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                  0x100
# 429 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                       ,0},
  { "uld.b", (
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xa0000000) 
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((0)?
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x10000000)
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00010000)
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | 
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((( 1 | 4 ))&0x7) << 0)
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             ),((
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xe0030007)
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&~(
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xa0000000) 
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((0)?
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x10000000)
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00010000)
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | 
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((( 1 | 4 ))&0x7) << 0)
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )) ,"[*162],d", 
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                           0x20000
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                 |
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                  0x100
# 430 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                       ,0},
  { "uld.b", (
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xa0000000) 
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((0)?
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x10000000)
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((0)?
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00010000)
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | 
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((( 1 | 4 ))&0x7) << 0)
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             ),((
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xe0030007)
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&~(
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xa0000000) 
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((0)?
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x10000000)
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((0)?
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00010000)
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | 
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((( 1 | 4 ))&0x7) << 0)
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )) ,"[1*62],d", 
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                           0x20000
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                 |
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                  0x100
# 431 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                       ,0},
  { "uld.b", 0xf0035800,0x007ca400 ,"[i],d", 
# 432 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                0x20000
# 432 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                      |
# 432 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                       0x1000
# 432 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                             ,0},

  { "uld.b", (
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xf0030000) 
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((( 1 | 4 ))&0x5) << 12) 
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((0)?
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00002000)
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000800)
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((0)?
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000400)
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0)),((
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xf003fc00)
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&~(
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xf0030000) 
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((( 1 | 4 ))&0x5) << 12) 
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((0)?
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00002000)
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000800)
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((0)?
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000400)
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0))) ,"i[1],d", 
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x20000
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x1000
# 434 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                         ,0},
  { "uld.b", (
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xf0030000) 
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((( 1 | 4 ))&0x5) << 12) 
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((0)?
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00002000)
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000800)
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000400)
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0)),((
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xf003fc00)
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&~(
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xf0030000) 
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((( 1 | 4 ))&0x5) << 12) 
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((0)?
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00002000)
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000800)
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000400)
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0))) ,"i[*1],d", 
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x20000
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x1000
# 435 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                         ,0},
  { "uld.b", (
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xf0030000) 
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((( 1 | 4 ))&0x5) << 12) 
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((0)?
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00002000)
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((0)?
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000800)
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000400)
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0)),((
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xf003fc00)
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&~(
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xf0030000) 
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (((( 1 | 4 ))&0x5) << 12) 
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((0)?
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00002000)
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((0)?
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000800)
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000400)
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0))) ,"i[1*],d", 
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x20000
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x1000
# 436 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                         ,0},



  { "leadz", (
# 440 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xc0000002) 
# 440 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 440 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 440 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0)),((
# 440 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf00207fb)
# 440 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 440 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xc0000002) 
# 440 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((0)?
# 440 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 440 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0))) ,"1,d", 
# 440 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         0x100000
# 440 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                ,0},
  { "leadz.f", (
# 441 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
              (0xc0000002) 
# 441 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
              | ((1)?
# 441 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
              (0x00020000)
# 441 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
              :0)),((
# 441 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
              (0xf00207fb)
# 441 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
              )&~(
# 441 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
              (0xc0000002) 
# 441 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
              | ((1)?
# 441 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
              (0x00020000)
# 441 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
              :0))) ,"1,d", 
# 441 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                           0x100000
# 441 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                  ,0},



  { "or", (
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xc0000000) 
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((0)?
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00020000)
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | 
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         ((((0x05))&(0x07)) << 8) 
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((((
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x05)
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x07)
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )==
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x07)
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         ) ? ((
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x05)
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x10)
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         ?0xc0:0x80) : 0 )),((
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xf00207fb)
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&~(
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xc0000000) 
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((0)?
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00020000)
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | 
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         ((((0x05))&(0x07)) << 8) 
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((((
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x05)
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x07)
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )==
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x07)
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         ) ? ((
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x05)
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x10)
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         ?0xc0:0x80) : 0 ))) ,"1,2,d", 
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                        0x20
# 445 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                            ,0},
  { "or", (
# 446 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00000000) 
# 446 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | 
# 446 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         ((((0x05))&(0x07)) << 28) 
# 446 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((0)?
# 446 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00020000)
# 446 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((0)?
# 446 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00010000)
# 446 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0)),((
# 446 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xf0030000)
# 446 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&~(
# 446 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00000000) 
# 446 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | 
# 446 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         ((((0x05))&(0x07)) << 28) 
# 446 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((0)?
# 446 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00020000)
# 446 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((0)?
# 446 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00010000)
# 446 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0))) ,"1,j,d", 
# 446 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                          0x10
# 446 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                              ,0},
  { "or", (
# 447 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00000000) 
# 447 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | 
# 447 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         ((((0x05))&(0x07)) << 28) 
# 447 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((0)?
# 447 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00020000)
# 447 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((1)?
# 447 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00010000)
# 447 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0)),((
# 447 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xf0030000)
# 447 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&~(
# 447 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00000000) 
# 447 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | 
# 447 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         ((((0x05))&(0x07)) << 28) 
# 447 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((0)?
# 447 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00020000)
# 447 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((1)?
# 447 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00010000)
# 447 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0))) ,"1,J,d", 
# 447 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                          0x10
# 447 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                              ,0},
  { "or.f", (
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xc0000000) 
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x05))&(0x07)) << 8) 
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((((
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x05)
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x07)
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )==
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x07)
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ) ? ((
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x05)
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10)
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ?0xc0:0x80) : 0 )),((
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf00207fb)
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xc0000000) 
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x05))&(0x07)) << 8) 
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((((
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x05)
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x07)
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )==
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x07)
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ) ? ((
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x05)
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10)
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ?0xc0:0x80) : 0 ))) ,"1,2,d", 
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                          0x20
# 448 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                              ,0},
  { "or.f", (
# 449 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000000) 
# 449 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 449 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x05))&(0x07)) << 28) 
# 449 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 449 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 449 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 449 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 449 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 449 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000)
# 449 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 449 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000000) 
# 449 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 449 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x05))&(0x07)) << 28) 
# 449 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 449 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 449 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 449 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 449 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"1,j,d", 
# 449 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                            0x10
# 449 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                ,0},
  { "or.f", (
# 450 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000000) 
# 450 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 450 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x05))&(0x07)) << 28) 
# 450 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 450 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 450 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 450 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 450 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 450 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000)
# 450 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 450 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000000) 
# 450 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 450 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x05))&(0x07)) << 28) 
# 450 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 450 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 450 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 450 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 450 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"1,J,d", 
# 450 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                            0x10
# 450 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                ,0},



  { "popc", (
# 454 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xc0000003) 
# 454 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 454 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 454 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 454 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf00207fb)
# 454 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 454 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xc0000003) 
# 454 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 454 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 454 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"1,d", 
# 454 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                       0x200000
# 454 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                             ,0},
  { "popc.f", (
# 455 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xc0000003) 
# 455 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((1)?
# 455 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 455 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0)),((
# 455 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xf00207fb)
# 455 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&~(
# 455 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xc0000003) 
# 455 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((1)?
# 455 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 455 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0))) ,"1,d", 
# 455 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                         0x200000
# 455 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                               ,0},



  { "put", (
# 459 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xd0000000)
# 459 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ),((
# 459 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf0000000)
# 459 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 459 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xd0000000)
# 459 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )) ,"15(243),d",
# 459 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                    0x40
# 459 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                         , 0},



  { "punt", 0xf003ff47, 0x00000000 ,"", 
# 463 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             0x2000
# 463 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                   , 0},



  { "sh", (
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xc0000000) 
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((0)?
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00020000)
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | 
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         ((((0x07))&(0x07)) << 8) 
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((((
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x07)
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x07)
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )==
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x07)
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         ) ? ((
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x07)
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x10)
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         ?0xc0:0x80) : 0 )),((
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xf00207fb)
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&~(
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xc0000000) 
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((0)?
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00020000)
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | 
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         ((((0x07))&(0x07)) << 8) 
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((((
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x07)
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x07)
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )==
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x07)
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         ) ? ((
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x07)
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x10)
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         ?0xc0:0x80) : 0 ))) ,"1,2,d", 
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                        0x20
# 467 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                            , 0},
  { "sh", (
# 468 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00000000) 
# 468 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | 
# 468 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         ((((0x07))&(0x07)) << 28) 
# 468 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((0)?
# 468 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00020000)
# 468 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((0)?
# 468 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00010000)
# 468 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0)),((
# 468 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xf0030000)
# 468 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&~(
# 468 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00000000) 
# 468 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | 
# 468 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         ((((0x07))&(0x07)) << 28) 
# 468 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((0)?
# 468 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00020000)
# 468 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((0)?
# 468 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00010000)
# 468 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0))) ,"1,s,d", 
# 468 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                          0x10
# 468 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                              , 0},
  { "sh.f", (
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xc0000000) 
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x07))&(0x07)) << 8) 
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((((
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x07)
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x07)
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )==
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x07)
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ) ? ((
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x07)
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10)
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ?0xc0:0x80) : 0 )),((
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf00207fb)
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xc0000000) 
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x07))&(0x07)) << 8) 
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((((
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x07)
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x07)
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )==
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x07)
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ) ? ((
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x07)
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10)
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ?0xc0:0x80) : 0 ))) ,"1,2,d", 
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                          0x20
# 469 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                              , 0},
  { "sh.f", (
# 470 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000000) 
# 470 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 470 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x07))&(0x07)) << 28) 
# 470 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 470 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 470 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 470 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 470 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 470 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000)
# 470 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 470 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000000) 
# 470 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 470 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x07))&(0x07)) << 28) 
# 470 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 470 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 470 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 470 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 470 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"1,s,d", 
# 470 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                            0x10
# 470 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                , 0},
  { "sha", (
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xc0000000) 
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | 
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x07)
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10))&(0x07)) << 8) 
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((((
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10)
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ) ? ((
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10)
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10)
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ?0xc0:0x80) : 0 )),((
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf00207fb)
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xc0000000) 
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | 
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x07)
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10))&(0x07)) << 8) 
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((((
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10)
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ) ? ((
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          |
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10)
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10)
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ?0xc0:0x80) : 0 ))) ,"1,2,d", 
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                 0x20
# 471 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     , 0},
  { "sha", (
# 472 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000) 
# 472 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 472 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x07))&(0x07)) << 28) 
# 472 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 472 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 472 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 472 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 472 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 472 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf0030000)
# 472 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 472 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000) 
# 472 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 472 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x07))&(0x07)) << 28) 
# 472 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 472 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 472 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 472 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 472 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"1,s,d", 
# 472 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                           0x10
# 472 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                               , 0},
  { "sha.f", (
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xc0000000) 
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x07)
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10))&(0x07)) << 8) 
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((((
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x07)
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10)
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x07)
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )==
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x07)
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ) ? ((
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x07)
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10)
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10)
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ?0xc0:0x80) : 0 )),((
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf00207fb)
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xc0000000) 
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x07)
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10))&(0x07)) << 8) 
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((((
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x07)
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10)
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x07)
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )==
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x07)
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ) ? ((
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x07)
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            |
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10)
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10)
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ?0xc0:0x80) : 0 ))) ,"1,2,d", 
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                   0x20
# 473 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                       , 0},
  { "sha.f", (
# 474 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000000) 
# 474 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 474 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x07))&(0x07)) << 28) 
# 474 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 474 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 474 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 474 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 474 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0)),((
# 474 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf0030000)
# 474 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 474 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000000) 
# 474 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 474 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x07))&(0x07)) << 28) 
# 474 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 474 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 474 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 474 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 474 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0))) ,"1,s,d", 
# 474 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             0x10
# 474 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 , 0},



  { "st", 0x90030004,0x6000fffb ,"d,[++1]", 
# 478 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             0x80
# 478 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "st", 0x90010004,0x6002fffb ,"d,[1++]", 
# 479 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             0x80
# 479 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "st", 0x9003fffc,0x60000003 ,"d,[--1]", 
# 480 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             0x80
# 480 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "st", 0x9001fffc,0x60020003 ,"d,[1--]", 
# 481 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             0x80
# 481 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "st", (
# 482 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 482 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 482 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 482 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 482 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 482 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 482 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 482 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 482 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 2 ))&0x7) << 0)
# 482 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 482 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0030007)
# 482 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 482 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 482 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 482 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 482 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 482 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 482 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 482 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 482 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 482 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 2 ))&0x7) << 0)
# 482 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"d,2[1]", 
# 482 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x100
# 482 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                 ,0},
  { "st", (
# 483 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 483 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 483 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 483 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 483 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 483 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 483 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 483 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 483 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 2 ))&0x7) << 0)
# 483 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 483 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0030007)
# 483 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 483 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 483 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 483 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 483 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 483 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 483 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 483 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 483 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 483 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 2 ))&0x7) << 0)
# 483 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"d,2[*1]", 
# 483 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x100
# 483 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                 ,0},
  { "st", (
# 484 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 484 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 484 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 484 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 484 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 484 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 484 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 484 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 484 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 2 ))&0x7) << 0)
# 484 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 484 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0030007)
# 484 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 484 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 484 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 484 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 484 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 484 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 484 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 484 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 484 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 484 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 2 ))&0x7) << 0)
# 484 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"d,2[1*]", 
# 484 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x100
# 484 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                 ,0},
  { "st", (
# 485 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 485 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 485 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 485 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 485 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 485 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 485 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 485 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 485 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 2 ))&0x7) << 0)
# 485 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 485 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0030007)
# 485 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 485 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 485 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 485 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 485 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 485 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 485 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 485 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 485 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 485 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 2 ))&0x7) << 0)
# 485 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"d,[162]", 
# 485 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x100
# 485 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                 ,0},
  { "st", (
# 486 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 486 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 486 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 486 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 486 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 486 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 486 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 486 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 486 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 2 ))&0x7) << 0)
# 486 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 486 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0030007)
# 486 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 486 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 486 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 486 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 486 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 486 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 486 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 486 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 486 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 486 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 2 ))&0x7) << 0)
# 486 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"d,[*162]", 
# 486 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x100
# 486 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                 ,0},
  { "st", (
# 487 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 487 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 487 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 487 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 487 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 487 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 487 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 487 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 487 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 2 ))&0x7) << 0)
# 487 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 487 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0030007)
# 487 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 487 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 487 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 487 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 487 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 487 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 487 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 487 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 487 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 487 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 2 ))&0x7) << 0)
# 487 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"d,[1*62]", 
# 487 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x100
# 487 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                 ,0},
  { "st", (
# 488 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xf0000000) 
# 488 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((1)?
# 488 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00010000)
# 488 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0)),((
# 488 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xf0030000)
# 488 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&~(
# 488 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xf0000000) 
# 488 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((1)?
# 488 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00010000)
# 488 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0))) ,"d,[Y]", 
# 488 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                    0x400
# 488 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                         ,0},
  { "st", 0x90020000,0x607d0000 ,"d,[o]", 
# 489 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                             0x80
# 489 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},

  { "st", (
# 491 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x80000000) 
# 491 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((1)?
# 491 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x10000000)
# 491 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((1)?
# 491 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00020000)
# 491 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((0)?
# 491 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00010000)
# 491 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0)),((
# 491 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xf0030000)
# 491 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&~(
# 491 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x80000000) 
# 491 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((1)?
# 491 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x10000000)
# 491 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((1)?
# 491 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00020000)
# 491 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((0)?
# 491 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00010000)
# 491 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0))) ,"d,o[1]", 
# 491 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                       0x80
# 491 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                           ,0},
  { "st", (
# 492 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x80000000) 
# 492 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((1)?
# 492 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x10000000)
# 492 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((1)?
# 492 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00020000)
# 492 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((1)?
# 492 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00010000)
# 492 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0)),((
# 492 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xf0030000)
# 492 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&~(
# 492 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x80000000) 
# 492 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((1)?
# 492 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x10000000)
# 492 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((1)?
# 492 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00020000)
# 492 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((1)?
# 492 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00010000)
# 492 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0))) ,"d,o[*1]", 
# 492 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                       0x80
# 492 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                           ,0},
  { "st", (
# 493 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x80000000) 
# 493 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((1)?
# 493 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x10000000)
# 493 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((0)?
# 493 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00020000)
# 493 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((1)?
# 493 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00010000)
# 493 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0)),((
# 493 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0xf0030000)
# 493 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         )&~(
# 493 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x80000000) 
# 493 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         | ((1)?
# 493 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x10000000)
# 493 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((0)?
# 493 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00020000)
# 493 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0) | ((1)?
# 493 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
         (0x00010000)
# 493 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
         :0))) ,"d,o[1*]", 
# 493 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                       0x80
# 493 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                           ,0},

  { "st.h", 0xf0032c02,0x0000d3fd ,"d,[++1]", 
# 495 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                               0x10000
# 495 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     |
# 495 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                      0x1000
# 495 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                            ,0},
  { "st.h", 0xf0032402,0x0000dbfd ,"d,[1++]", 
# 496 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                               0x10000
# 496 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     |
# 496 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                      0x1000
# 496 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                            ,0},
  { "st.h", 0xf0032ffe,0x0000d001 ,"d,[--1]", 
# 497 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                               0x10000
# 497 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     |
# 497 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                      0x1000
# 497 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                            ,0},
  { "st.h", 0xf00327fe,0x0000d801 ,"d,[1--]", 
# 498 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                               0x10000
# 498 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     |
# 498 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                      0x1000
# 498 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                            ,0},
  { "st.h", (
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 0 ))&0x7) << 0)
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0030007)
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 0 ))&0x7) << 0)
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"d,2[1]", 
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x100
# 499 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                        ,0},
  { "st.h", (
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 0 ))&0x7) << 0)
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0030007)
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 0 ))&0x7) << 0)
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"d,2[*1]", 
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x100
# 500 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                        ,0},
  { "st.h", (
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 0 ))&0x7) << 0)
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0030007)
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 0 ))&0x7) << 0)
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"d,2[1*]", 
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x100
# 501 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                        ,0},
  { "st.h", (
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 0 ))&0x7) << 0)
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0030007)
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 0 ))&0x7) << 0)
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"d,[162]", 
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x100
# 502 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                        ,0},
  { "st.h", (
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 0 ))&0x7) << 0)
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0030007)
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 0 ))&0x7) << 0)
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"d,[*162]", 
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x100
# 503 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                        ,0},
  { "st.h", (
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 0 ))&0x7) << 0)
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ),((
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xe0030007)
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xa0000000) 
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10000000)
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (((( 0 | 0 ))&0x7) << 0)
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )) ,"d,[1*62]", 
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x100
# 504 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                        ,0},
  { "st.h", 0xf0032800,0x007cd400 ,"d,[i]", 
# 505 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                               0x10000
# 505 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     |
# 505 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                      0x1000
# 505 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                            ,0},

  { "st.h", (
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 0 ))&0x5) << 12) 
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003fc00)
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 0 ))&0x5) << 12) 
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"d,i[1]", 
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x1000
# 507 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                         ,0},
  { "st.h", (
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 0 ))&0x5) << 12) 
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003fc00)
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 0 ))&0x5) << 12) 
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"d,i[*1]", 
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x1000
# 508 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                         ,0},
  { "st.h", (
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 0 ))&0x5) << 12) 
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003fc00)
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 0 ))&0x5) << 12) 
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"d,i[1*]", 
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                            0x10000
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                  |
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                   0x1000
# 509 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                         ,0},

  { "st.b", 0xf0036c01,0x000093fe ,"d,[++1]", 
# 511 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                               0x20000
# 511 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     |
# 511 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                      0x1000
# 511 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                            ,0},
  { "st.b", 0xf0036401,0x00009bfe ,"d,[1++]", 
# 512 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                               0x20000
# 512 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     |
# 512 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                      0x1000
# 512 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                            ,0},
  { "st.b", 0xf0036fff,0x00009000 ,"d,[--1]", 
# 513 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                               0x20000
# 513 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     |
# 513 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                      0x1000
# 513 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                            ,0},
  { "st.b", 0xf00367ff,0x00009800 ,"d,[1--]", 
# 514 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                               0x20000
# 514 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     |
# 514 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                      0x1000
# 514 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                            ,0},
  { "st.b", (
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x7) << 0)
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ),((
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0030007)
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x7) << 0)
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )) ,"d,2[1]", 
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                       0x20000
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                             |
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                              0x100
# 515 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                   ,0},
  { "st.b", (
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x7) << 0)
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ),((
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0030007)
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x7) << 0)
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )) ,"d,2[*1]", 
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                       0x20000
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                             |
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                              0x100
# 516 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                   ,0},
  { "st.b", (
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x7) << 0)
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ),((
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0030007)
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x7) << 0)
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )) ,"d,2[1*]", 
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                       0x20000
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                             |
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                              0x100
# 517 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                   ,0},
  { "st.b", (
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x7) << 0)
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ),((
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0030007)
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x7) << 0)
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )) ,"d,[162]", 
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                       0x20000
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                             |
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                              0x100
# 518 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                   ,0},
  { "st.b", (
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x7) << 0)
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ),((
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0030007)
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x7) << 0)
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )) ,"d,[*162]", 
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                       0x20000
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                             |
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                              0x100
# 519 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                   ,0},
  { "st.b", (
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x7) << 0)
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ),((
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0030007)
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xa0000000) 
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10000000)
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x7) << 0)
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )) ,"d,[1*62]", 
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                       0x20000
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                             |
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                              0x100
# 520 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                   ,0},
  { "st.b", 0xf0036800,0x007c9400 ,"d,[i]", 
# 521 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                               0x20000
# 521 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                     |
# 521 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                      0x1000
# 521 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                            ,0},

  { "st.b", (
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x5) << 12) 
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003fc00)
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x5) << 12) 
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"d,i[1]", 
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                        0x20000
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                              |
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                               0x1000
# 523 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                     ,0},
  { "st.b", (
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x5) << 12) 
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003fc00)
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x5) << 12) 
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"d,i[*1]", 
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                        0x20000
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                              |
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                               0x1000
# 524 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                     ,0},
  { "st.b", (
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x5) << 12) 
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf003fc00)
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000) 
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (((( 0 | 4 ))&0x5) << 12) 
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((1)?
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00002000)
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000800)
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000400)
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"d,i[1*]", 
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                        0x20000
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                              |
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                               0x1000
# 525 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                     ,0},



  { "sub", (
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xc0000000) 
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | 
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x02))&(0x07)) << 8) 
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((((
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x02)
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ) ? ((
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x02)
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10)
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ?0xc0:0x80) : 0 )),((
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf00207fb)
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xc0000000) 
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | 
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x02))&(0x07)) << 8) 
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((((
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x02)
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ) ? ((
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x02)
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10)
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ?0xc0:0x80) : 0 ))) ,"1,2,d", 
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                          0x20
# 529 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                              ,0},
  { "sub", (
# 530 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000) 
# 530 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 530 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x02))&(0x07)) << 28) 
# 530 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 530 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 530 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((0)?
# 530 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 530 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 530 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf0030000)
# 530 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 530 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000) 
# 530 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 530 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x02))&(0x07)) << 28) 
# 530 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 530 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 530 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((0)?
# 530 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 530 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"1,j,d", 
# 530 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                            0x10
# 530 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                ,0},
  { "sub", (
# 531 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000) 
# 531 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 531 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x02))&(0x07)) << 28) 
# 531 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 531 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 531 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 531 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 531 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 531 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf0030000)
# 531 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 531 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000) 
# 531 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 531 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x02))&(0x07)) << 28) 
# 531 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 531 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 531 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 531 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 531 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"1,J,d", 
# 531 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                            0x10
# 531 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                ,0},

  { "sub.f", (
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xc0000000) 
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x02))&(0x07)) << 8) 
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((((
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x02)
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x07)
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )==
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x07)
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ) ? ((
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x02)
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10)
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ?0xc0:0x80) : 0 )),((
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf00207fb)
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xc0000000) 
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x02))&(0x07)) << 8) 
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((((
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x02)
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x07)
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )==
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x07)
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ) ? ((
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x02)
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10)
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ?0xc0:0x80) : 0 ))) ,"1,2,d", 
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                            0x20
# 533 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                ,0},
  { "sub.f", (
# 534 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000000) 
# 534 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 534 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x02))&(0x07)) << 28) 
# 534 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 534 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 534 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 534 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 534 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0)),((
# 534 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf0030000)
# 534 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 534 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000000) 
# 534 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 534 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x02))&(0x07)) << 28) 
# 534 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 534 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 534 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 534 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 534 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0))) ,"1,j,d", 
# 534 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                              0x10
# 534 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                  ,0},
  { "sub.f", (
# 535 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000000) 
# 535 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 535 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x02))&(0x07)) << 28) 
# 535 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 535 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 535 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 535 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 535 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0)),((
# 535 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf0030000)
# 535 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 535 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000000) 
# 535 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 535 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x02))&(0x07)) << 28) 
# 535 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 535 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 535 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 535 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 535 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0))) ,"1,J,d", 
# 535 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                              0x10
# 535 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                  ,0},

  { "subb", (
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xc0000000) 
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x03))&(0x07)) << 8) 
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((((
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x03)
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x07)
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )==
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x07)
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ) ? ((
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x03)
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10)
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ?0xc0:0x80) : 0 )),((
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf00207fb)
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xc0000000) 
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | 
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x03))&(0x07)) << 8) 
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((((
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x03)
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x07)
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )==
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x07)
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ) ? ((
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x03)
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x10)
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ?0xc0:0x80) : 0 ))) ,"1,2,d", 
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                            0x20
# 537 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                ,0},
  { "subb", (
# 538 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000000) 
# 538 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 538 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x03))&(0x07)) << 28) 
# 538 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 538 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 538 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 538 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 538 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 538 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000)
# 538 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 538 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000000) 
# 538 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 538 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x03))&(0x07)) << 28) 
# 538 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 538 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 538 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((0)?
# 538 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 538 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"1,j,d", 
# 538 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                              0x10
# 538 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                  ,0},
  { "subb", (
# 539 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000000) 
# 539 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 539 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x03))&(0x07)) << 28) 
# 539 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 539 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 539 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 539 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 539 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0)),((
# 539 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xf0030000)
# 539 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 539 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00000000) 
# 539 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 539 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((0x03))&(0x07)) << 28) 
# 539 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | ((0)?
# 539 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00020000)
# 539 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0) | ((1)?
# 539 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0x00010000)
# 539 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           :0))) ,"1,J,d", 
# 539 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                              0x10
# 539 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                  ,0},

  { "subb.f", (
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xc0000000) 
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((1)?
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | 
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((0x03))&(0x07)) << 8) 
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((((
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x03)
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x07)
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )==
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x07)
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             ) ? ((
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x03)
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x10)
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             ?0xc0:0x80) : 0 )),((
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xf00207fb)
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&~(
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xc0000000) 
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((1)?
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | 
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((0x03))&(0x07)) << 8) 
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((((
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x03)
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x07)
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )==
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x07)
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             ) ? ((
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x03)
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x10)
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             ?0xc0:0x80) : 0 ))) ,"1,2,d", 
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                              0x20
# 541 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                  ,0},
  { "subb.f", (
# 542 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000000) 
# 542 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 542 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((0x03))&(0x07)) << 28) 
# 542 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((1)?
# 542 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 542 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((0)?
# 542 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00010000)
# 542 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0)),((
# 542 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xf0030000)
# 542 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&~(
# 542 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000000) 
# 542 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 542 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((0x03))&(0x07)) << 28) 
# 542 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((1)?
# 542 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 542 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((0)?
# 542 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00010000)
# 542 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0))) ,"1,j,d", 
# 542 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                0x10
# 542 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                    ,0},
  { "subb.f", (
# 543 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000000) 
# 543 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 543 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((0x03))&(0x07)) << 28) 
# 543 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((1)?
# 543 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 543 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 543 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00010000)
# 543 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0)),((
# 543 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0xf0030000)
# 543 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             )&~(
# 543 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00000000) 
# 543 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | 
# 543 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             ((((0x03))&(0x07)) << 28) 
# 543 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             | ((1)?
# 543 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00020000)
# 543 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0) | ((1)?
# 543 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
             (0x00010000)
# 543 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
             :0))) ,"1,J,d", 
# 543 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                0x10
# 543 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                    ,0},




  { "shi", (
# 548 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 548 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 548 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((2)&0xe) << 24) | ((2)&1) )
# 548 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ),((
# 548 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xff000003)
# 548 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 548 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 548 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 548 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((2)&0xe) << 24) | ((2)&1) )
# 548 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )) ,"1", 
# 548 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                    0x8000
# 548 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                         |
# 548 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                          1
# 548 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "sugt", (
# 549 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0000002) 
# 549 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 549 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((2)&0xe) << 24) | ((2)&1) )
# 549 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ),((
# 549 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xff000003)
# 549 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 549 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0000002) 
# 549 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 549 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((2)&0xe) << 24) | ((2)&1) )
# 549 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )) ,"1", 
# 549 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                     0x8000
# 549 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                          ,0},
  { "sls", (
# 550 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 550 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 550 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((3)&0xe) << 24) | ((3)&1) )
# 550 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ),((
# 550 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xff000003)
# 550 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 550 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 550 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 550 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((3)&0xe) << 24) | ((3)&1) )
# 550 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )) ,"1", 
# 550 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                    0x8000
# 550 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                         |
# 550 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                          1
# 550 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "sule", (
# 551 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0000002) 
# 551 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 551 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((3)&0xe) << 24) | ((3)&1) )
# 551 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ),((
# 551 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xff000003)
# 551 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 551 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0000002) 
# 551 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 551 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((3)&0xe) << 24) | ((3)&1) )
# 551 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )) ,"1", 
# 551 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                     0x8000
# 551 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                          ,0},
  { "scc", (
# 552 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 552 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 552 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((4)&0xe) << 24) | ((4)&1) )
# 552 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ),((
# 552 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xff000003)
# 552 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 552 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 552 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 552 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((4)&0xe) << 24) | ((4)&1) )
# 552 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )) ,"1", 
# 552 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                    0x8000
# 552 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                         |
# 552 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                          1
# 552 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "suge", (
# 553 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0000002) 
# 553 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 553 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((5)&0xe) << 24) | ((5)&1) )
# 553 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ),((
# 553 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xff000003)
# 553 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 553 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0000002) 
# 553 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 553 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((5)&0xe) << 24) | ((5)&1) )
# 553 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )) ,"1", 
# 553 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                     0x8000
# 553 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                          ,0},
  { "scs", (
# 554 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 554 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 554 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((5)&0xe) << 24) | ((5)&1) )
# 554 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ),((
# 554 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xff000003)
# 554 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 554 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 554 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 554 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((5)&0xe) << 24) | ((5)&1) )
# 554 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )) ,"1", 
# 554 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                    0x8000
# 554 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                         |
# 554 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                          1
# 554 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                 ,0},
  { "sult", (
# 555 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0000002) 
# 555 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 555 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((4)&0xe) << 24) | ((4)&1) )
# 555 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           ),((
# 555 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xff000003)
# 555 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )&~(
# 555 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           (0xe0000002) 
# 555 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           | 
# 555 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
           ((((4)&0xe) << 24) | ((4)&1) )
# 555 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
           )) ,"1", 
# 555 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                     0x8000
# 555 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                          ,0},
  { "sne", (
# 556 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 556 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 556 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((6)&0xe) << 24) | ((6)&1) )
# 556 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ),((
# 556 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xff000003)
# 556 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 556 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 556 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 556 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((6)&0xe) << 24) | ((6)&1) )
# 556 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )) ,"1", 
# 556 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                    0x8000
# 556 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                         ,0},
  { "seq", (
# 557 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 557 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 557 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((7)&0xe) << 24) | ((7)&1) )
# 557 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ),((
# 557 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xff000003)
# 557 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 557 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 557 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 557 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((7)&0xe) << 24) | ((7)&1) )
# 557 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )) ,"1", 
# 557 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                    0x8000
# 557 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                         ,0},
  { "svc", (
# 558 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 558 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 558 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((8)&0xe) << 24) | ((8)&1) )
# 558 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ),((
# 558 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xff000003)
# 558 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 558 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 558 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 558 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((8)&0xe) << 24) | ((8)&1) )
# 558 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )) ,"1", 
# 558 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                    0x8000
# 558 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                         ,0},
  { "svs", (
# 559 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 559 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 559 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((9)&0xe) << 24) | ((9)&1) )
# 559 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ),((
# 559 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xff000003)
# 559 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 559 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 559 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 559 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((9)&0xe) << 24) | ((9)&1) )
# 559 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )) ,"1", 
# 559 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                    0x8000
# 559 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                         ,0},
  { "spl", (
# 560 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 560 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 560 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((10)&0xe) << 24) | ((10)&1) )
# 560 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ),((
# 560 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xff000003)
# 560 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 560 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 560 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 560 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((10)&0xe) << 24) | ((10)&1) )
# 560 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )) ,"1", 
# 560 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                    0x8000
# 560 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                         ,0},
  { "smi", (
# 561 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 561 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 561 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((11)&0xe) << 24) | ((11)&1) )
# 561 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ),((
# 561 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xff000003)
# 561 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 561 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 561 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 561 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((11)&0xe) << 24) | ((11)&1) )
# 561 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )) ,"1", 
# 561 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                    0x8000
# 561 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                         ,0},
  { "sge", (
# 562 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 562 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 562 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((12)&0xe) << 24) | ((12)&1) )
# 562 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ),((
# 562 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xff000003)
# 562 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 562 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 562 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 562 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((12)&0xe) << 24) | ((12)&1) )
# 562 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )) ,"1", 
# 562 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                    0x8000
# 562 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                         ,0},
  { "slt", (
# 563 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 563 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 563 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((13)&0xe) << 24) | ((13)&1) )
# 563 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ),((
# 563 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xff000003)
# 563 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 563 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 563 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 563 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((13)&0xe) << 24) | ((13)&1) )
# 563 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )) ,"1", 
# 563 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                    0x8000
# 563 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                         ,0},
  { "sgt", (
# 564 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 564 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 564 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((14)&0xe) << 24) | ((14)&1) )
# 564 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ),((
# 564 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xff000003)
# 564 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 564 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 564 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 564 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((14)&0xe) << 24) | ((14)&1) )
# 564 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )) ,"1", 
# 564 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                    0x8000
# 564 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                         ,0},
  { "sle", (
# 565 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 565 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 565 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((15)&0xe) << 24) | ((15)&1) )
# 565 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ),((
# 565 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xff000003)
# 565 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 565 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xe0000002) 
# 565 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 565 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((15)&0xe) << 24) | ((15)&1) )
# 565 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )) ,"1", 
# 565 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                    0x8000
# 565 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                         ,0},



  { "xor", (
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xc0000000) 
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | 
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x06))&(0x07)) << 8) 
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((((
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x06)
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ) ? ((
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x06)
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10)
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ?0xc0:0x80) : 0 )),((
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf00207fb)
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xc0000000) 
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | 
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x06))&(0x07)) << 8) 
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((((
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x06)
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )==
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x07)
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ) ? ((
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x06)
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x10)
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          ?0xc0:0x80) : 0 ))) ,"1,2,d", 
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                          0x20
# 569 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                              ,0},
  { "xor", (
# 570 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000) 
# 570 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 570 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x06))&(0x07)) << 28) 
# 570 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 570 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 570 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((0)?
# 570 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 570 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 570 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf0030000)
# 570 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 570 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000) 
# 570 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 570 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x06))&(0x07)) << 28) 
# 570 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 570 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 570 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((0)?
# 570 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 570 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"1,j,d", 
# 570 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                            0x10
# 570 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                ,0},
  { "xor", (
# 571 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000) 
# 571 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 571 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x06))&(0x07)) << 28) 
# 571 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 571 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 571 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 571 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 571 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0)),((
# 571 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0xf0030000)
# 571 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          )&~(
# 571 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00000000) 
# 571 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | 
# 571 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          ((((0x06))&(0x07)) << 28) 
# 571 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          | ((0)?
# 571 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00020000)
# 571 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0) | ((1)?
# 571 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
          (0x00010000)
# 571 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
          :0))) ,"1,J,d", 
# 571 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                            0x10
# 571 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                ,0},
  { "xor.f", (
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xc0000000) 
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x06))&(0x07)) << 8) 
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((((
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x06)
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x07)
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )==
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x07)
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ) ? ((
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x06)
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10)
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ?0xc0:0x80) : 0 )),((
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf00207fb)
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xc0000000) 
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | 
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x06))&(0x07)) << 8) 
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((((
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x06)
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x07)
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )==
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x07)
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ) ? ((
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x06)
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x10)
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            ?0xc0:0x80) : 0 ))) ,"1,2,d", 
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                            0x20
# 572 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                ,0},
  { "xor.f", (
# 573 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000000) 
# 573 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 573 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x06))&(0x07)) << 28) 
# 573 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 573 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 573 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 573 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 573 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0)),((
# 573 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf0030000)
# 573 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 573 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000000) 
# 573 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 573 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x06))&(0x07)) << 28) 
# 573 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 573 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 573 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((0)?
# 573 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 573 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0))) ,"1,j,d", 
# 573 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                              0x10
# 573 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                  ,0},
  { "xor.f", (
# 574 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000000) 
# 574 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 574 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x06))&(0x07)) << 28) 
# 574 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 574 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 574 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 574 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 574 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0)),((
# 574 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0xf0030000)
# 574 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            )&~(
# 574 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00000000) 
# 574 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | 
# 574 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            ((((0x06))&(0x07)) << 28) 
# 574 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            | ((1)?
# 574 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00020000)
# 574 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0) | ((1)?
# 574 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
            (0x00010000)
# 574 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
            :0))) ,"1,J,d", 
# 574 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                              0x10
# 574 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                  ,0},

};

const int bfd_lanai_num_opcodes = ((sizeof 
# 578 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                          bfd_lanai_opcodes
# 578 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                       )/(sizeof 
# 578 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c" 3 4
                                                                 bfd_lanai_opcodes
# 578 "project/radare2/libr/asm/arch/lanai/gnu/lanai-opc.c"
                                                                              [0]));
