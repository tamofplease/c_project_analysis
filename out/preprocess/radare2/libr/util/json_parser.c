# 0 "project/radare2/libr/util/json_parser.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/util/json_parser.c"


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 1 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 1 3 4
# 649 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 650 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 715 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_posix_availability.h" 1 3 4
# 716 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 3 4

# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 2 3 4



extern int * __error(void);


# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 2 3 4
# 4 "project/radare2/libr/util/json_parser.c" 2

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_utf8.h" 1 3 4




# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str.h" 1 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 1 3 4
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 3 4
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
# 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 1 3 4
# 135 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/AvailabilityVersions.h" 1 3 4
# 136 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/AvailabilityInternal.h" 1 3 4
# 137 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_null.h" 1 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mbstate_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mbstate_t.h" 3 4
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
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mbstate_t.h" 2 3 4
typedef __darwin_mbstate_t mbstate_t;
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ct_rune_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ct_rune_t.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rune_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rune_t.h" 3 4
typedef __darwin_rune_t rune_t;
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 3 4
typedef __darwin_wchar_t wchar_t;
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 2 3 4
# 89 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 1 3 4
# 40 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 99 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 90 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 1 3 4
# 78 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 1 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_va_list.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_va_list.h" 3 4
typedef __darwin_va_list va_list;
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 2 3 4



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
# 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_clock_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_clock_t.h" 3 4
typedef __darwin_clock_t clock_t;
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_time_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timespec.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timespec.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 2 3 4

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



# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_wctype.h" 1 3 4
# 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_wctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/__wctype.h" 1 3 4
# 60 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/__wctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wint_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wint_t.h" 3 4
typedef __darwin_wint_t wint_t;
# 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/__wctype.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_wctype_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_wctype_t.h" 3 4
typedef __darwin_wctype_t wctype_t;
# 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/__wctype.h" 2 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/__wctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ctype.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 1 3 4
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 1 3 4
# 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 2 3 4
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
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/__wctype.h" 2 3 4
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
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_list.h" 1 3 4



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








# 12 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
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
# 170 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_useconds_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_useconds_t.h" 3 4
typedef __darwin_useconds_t useconds_t;
# 171 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_suseconds_t.h" 3 4
typedef __darwin_suseconds_t suseconds_t;
# 172 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rsize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rsize_t.h" 3 4
typedef __darwin_size_t rsize_t;
# 175 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
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

# 144 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4

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
# 253 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4


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
# 365 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
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
# 187 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 3 4



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
# 5 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_list.h" 2 3 4
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
# 8 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str.h" 2 3 4





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
# 6 "project/radare2/libr/util/json_parser.c" 2
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
# 7 "project/radare2/libr/util/json_parser.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_json.h" 1 3 4
# 25 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_json.h" 3 4
typedef enum r_json_type_t {
 R_JSON_NULL,
 R_JSON_OBJECT,
 R_JSON_ARRAY,
 R_JSON_STRING,
 R_JSON_INTEGER,
 R_JSON_DOUBLE,
 R_JSON_BOOLEAN
} RJsonType;

typedef struct r_json_t {
 RJsonType type;
 const char *key;
 union {
  const char *str_value;
  struct {
   union {
    unsigned long long u_value;
    long long s_value;
   };
   double dbl_value;
  } num;
  struct {
   size_t count;
   struct r_json_t *first;
   struct r_json_t *last;
  } children;
 };
 struct r_json_t *next;
} RJson;

__attribute__((visibility("default"))) RJson *r_json_parse(char *text);

__attribute__((visibility("default"))) void r_json_free(RJson *js);

__attribute__((visibility("default"))) const RJson *r_json_get(const RJson *json, const char *key);
__attribute__((visibility("default"))) const RJson *r_json_item(const RJson *json, size_t idx);
# 8 "project/radare2/libr/util/json_parser.c" 2
# 16 "project/radare2/libr/util/json_parser.c"

# 16 "project/radare2/libr/util/json_parser.c"
static RJson *json_new(void) {
 return 
# 17 "project/radare2/libr/util/json_parser.c" 3 4
       (
# 17 "project/radare2/libr/util/json_parser.c"
       RJson
# 17 "project/radare2/libr/util/json_parser.c" 3 4
       *)calloc(1,sizeof(
# 17 "project/radare2/libr/util/json_parser.c"
       RJson
# 17 "project/radare2/libr/util/json_parser.c" 3 4
       ))
# 17 "project/radare2/libr/util/json_parser.c"
                     ;
}

static RJson *create_json(RJsonType type, const char *key, RJson *parent) {
 RJson *js = json_new ();
 if (!js) {
  return 
# 23 "project/radare2/libr/util/json_parser.c" 3 4
        ((void *)0)
# 23 "project/radare2/libr/util/json_parser.c"
            ;
 }
 js->type = type;
 js->key = key;
 if (!parent->children.last) {
  parent->children.first = parent->children.last = js;
 } else {
  parent->children.last->next = js;
  parent->children.last = js;
 }
 parent->children.count++;
 return js;
}


# 37 "project/radare2/libr/util/json_parser.c" 3 4
__attribute__((visibility("default"))) 
# 37 "project/radare2/libr/util/json_parser.c"
     void r_json_free(RJson *js) {
 if (!js) {
  return;
 }
 if (js->type == R_JSON_OBJECT || js->type == R_JSON_ARRAY) {
  RJson *p = js->children.first;
  RJson *p1;
  while (p) {
   p1 = p->next;
   r_json_free (p);
   p = p1;
  }
 }
 free (js);
}

static char *unescape_string(char *s, char **end) {
 char *p = s;
 char *d = s;
 char c;
 while ((c = *p++)) {
  if (c == '"') {
   *d = '\0';
   *end = p;
   return s;
  }
  if (c == '\\') {
   switch (*p) {
   case '\\':
   case '/':
   case '"':
    *d++ = *p++;
    break;
   case 'b':
    *d++ = '\b';
    p++;
    break;
   case 'f':
    *d++ = '\f';
    p++;
    break;
   case 'n':
    *d++ = '\n';
    p++;
    break;
   case 'r':
    *d++ = '\r';
    p++;
    break;
   case 't':
    *d++ = '\t';
    p++;
    break;
   case 'u': {
    char *ps = p - 1;
    
# 92 "project/radare2/libr/util/json_parser.c" 3 4
   unsigned char 
# 92 "project/radare2/libr/util/json_parser.c"
       high = 0, low = 0;
    if (r_hex_to_byte (&high, p[1]) || r_hex_to_byte (&high, p[2])
      || r_hex_to_byte (&low, p[3]) || r_hex_to_byte (&low, p[4])) {
     do { (void)("invalid unicode escape"); (void)(p - 1); } while (0);
     return 
# 96 "project/radare2/libr/util/json_parser.c" 3 4
           ((void *)0)
# 96 "project/radare2/libr/util/json_parser.c"
               ;
    }
    RRune codepoint = (RRune)high << 8 | (RRune)low;
    if ((codepoint & 0xfc00) == 0xd800) {
     p += 6;
     high = low = 0;
     if (p[-1] != '\\' || *p != 'u'
       || r_hex_to_byte (&high, p[1]) || r_hex_to_byte (&high, p[2])
       || r_hex_to_byte (&low, p[3]) || r_hex_to_byte (&low, p[4])) {
      do { (void)("invalid unicode surrogate"); (void)(ps); } while (0);
      return 
# 106 "project/radare2/libr/util/json_parser.c" 3 4
            ((void *)0)
# 106 "project/radare2/libr/util/json_parser.c"
                ;
     }
     RRune codepoint2 = (RRune)high << 8 | (RRune)low;
     if ((codepoint2 & 0xfc00) != 0xdc00) {
      do { (void)("invalid unicode surrogate"); (void)(ps); } while (0);
      return 
# 111 "project/radare2/libr/util/json_parser.c" 3 4
            ((void *)0)
# 111 "project/radare2/libr/util/json_parser.c"
                ;
     }
     codepoint = 0x10000 + ((codepoint - 0xd800) << 10) + (codepoint2 - 0xdc00);
    }
    int sz = r_utf8_encode ((
# 115 "project/radare2/libr/util/json_parser.c" 3 4
                            unsigned char 
# 115 "project/radare2/libr/util/json_parser.c"
                                *)d, codepoint);
    if (!s) {
     do { (void)("invalid codepoint"); (void)(ps); } while (0);
     return 
# 118 "project/radare2/libr/util/json_parser.c" 3 4
           ((void *)0)
# 118 "project/radare2/libr/util/json_parser.c"
               ;
    }
    d += sz;
    p += 5;
    break;
   }
   default:

    *d++ = c;
    break;
   }
  } else {
   *d++ = c;
  }
 }
 do { (void)("no closing quote for string"); (void)(s); } while (0);
 return 
# 134 "project/radare2/libr/util/json_parser.c" 3 4
       ((void *)0)
# 134 "project/radare2/libr/util/json_parser.c"
           ;
}

static char *skip_block_comment(char *ps) {


 char *p = ps + 2;
 if (!*p) {
  do { (void)("endless comment"); (void)(ps); } while (0);
  return 
# 143 "project/radare2/libr/util/json_parser.c" 3 4
        ((void *)0)
# 143 "project/radare2/libr/util/json_parser.c"
            ;
 }
 REPEAT:
 p = strchr (p + 1, '/');
 if (!p) {
  do { (void)("endless comment"); (void)(ps); } while (0);
  return 
# 149 "project/radare2/libr/util/json_parser.c" 3 4
        ((void *)0)
# 149 "project/radare2/libr/util/json_parser.c"
            ;
 }
 if (p[-1] != '*') {
  goto REPEAT;
 }
 return p + 1;
}

static char *skip_whitespace(char *p) {
 while (*p) {
  if (*p == '/') {
   if (p[1] == '/') {
    char *ps = p;
    p = strchr (p + 2, '\n');
    if (!p) {
     do { (void)("endless comment"); (void)(ps); } while (0);
     return 
# 165 "project/radare2/libr/util/json_parser.c" 3 4
           ((void *)0)
# 165 "project/radare2/libr/util/json_parser.c"
               ;
    }
    p++;
   } else if (p[1] == '*') {
    p = skip_block_comment (p);
    if (!p) {
     return 
# 171 "project/radare2/libr/util/json_parser.c" 3 4
           ((void *)0)
# 171 "project/radare2/libr/util/json_parser.c"
               ;
    }
    continue;
   } else {
    do { (void)("unexpected chars"); (void)(p); } while (0);
    return 
# 176 "project/radare2/libr/util/json_parser.c" 3 4
          ((void *)0)
# 176 "project/radare2/libr/util/json_parser.c"
              ;
   }
   continue;
  } else if (!
# 179 "project/radare2/libr/util/json_parser.c" 3 4
             ((
# 179 "project/radare2/libr/util/json_parser.c"
             *p
# 179 "project/radare2/libr/util/json_parser.c" 3 4
             ) == ' ' || (
# 179 "project/radare2/libr/util/json_parser.c"
             *p
# 179 "project/radare2/libr/util/json_parser.c" 3 4
             )=='\t' || (
# 179 "project/radare2/libr/util/json_parser.c"
             *p
# 179 "project/radare2/libr/util/json_parser.c" 3 4
             ) == '\n' || (
# 179 "project/radare2/libr/util/json_parser.c"
             *p
# 179 "project/radare2/libr/util/json_parser.c" 3 4
             ) == '\r')
# 179 "project/radare2/libr/util/json_parser.c"
                              ) {
   break;
  }
  p++;
 }
 return p;
}

static char *parse_key(const char **key, char *p) {

 p = skip_whitespace (p);
 if (!p) {
  return 
# 191 "project/radare2/libr/util/json_parser.c" 3 4
        ((void *)0)
# 191 "project/radare2/libr/util/json_parser.c"
            ;
 }
 char c;
 while ((c = *p++)) {
  if (c == '"') {
   *key = unescape_string (p, &p);
   if (!*key) {
    return 
# 198 "project/radare2/libr/util/json_parser.c" 3 4
          ((void *)0)
# 198 "project/radare2/libr/util/json_parser.c"
              ;
   }
   p = skip_whitespace (p);
   if (!p) {
    return 
# 202 "project/radare2/libr/util/json_parser.c" 3 4
          ((void *)0)
# 202 "project/radare2/libr/util/json_parser.c"
              ;
   }
   if (*p == ':') {
    return p + 1;
   }
   do { (void)("unexpected chars"); (void)(p); } while (0);
   return 
# 208 "project/radare2/libr/util/json_parser.c" 3 4
         ((void *)0)
# 208 "project/radare2/libr/util/json_parser.c"
             ;
  }
  if (c == '}') {
   return p - 1;
  }
  do { (void)("unexpected chars"); (void)(p - 1); } while (0);
  return 
# 214 "project/radare2/libr/util/json_parser.c" 3 4
        ((void *)0)
# 214 "project/radare2/libr/util/json_parser.c"
            ;
 }
 do { (void)("unexpected chars"); (void)(p - 1); } while (0);
 return 
# 217 "project/radare2/libr/util/json_parser.c" 3 4
       ((void *)0)
# 217 "project/radare2/libr/util/json_parser.c"
           ;
}

static char *parse_value(RJson *parent, const char *key, char *p) {
 RJson *js;
 p = skip_whitespace (p);
 if (!p) {
  return 
# 224 "project/radare2/libr/util/json_parser.c" 3 4
        ((void *)0)
# 224 "project/radare2/libr/util/json_parser.c"
            ;
 }
 switch (*p) {
 case '\0':
  do { (void)("unexpected end of text"); (void)(p); } while (0);
  return 
# 229 "project/radare2/libr/util/json_parser.c" 3 4
        ((void *)0)
# 229 "project/radare2/libr/util/json_parser.c"
            ;
 case '{':
  js = create_json (R_JSON_OBJECT, key, parent);
  p++;
  while (1) {
   const char *new_key = 
# 234 "project/radare2/libr/util/json_parser.c" 3 4
                        ((void *)0)
# 234 "project/radare2/libr/util/json_parser.c"
                            ;
   p = parse_key (&new_key, p);
   if (!p) {
    return 
# 237 "project/radare2/libr/util/json_parser.c" 3 4
          ((void *)0)
# 237 "project/radare2/libr/util/json_parser.c"
              ;
   }
   if (*p != '}') {
    p = parse_value (js, new_key, p);
    if (!p) {
     return 
# 242 "project/radare2/libr/util/json_parser.c" 3 4
           ((void *)0)
# 242 "project/radare2/libr/util/json_parser.c"
               ;
    }
   }
   p = skip_whitespace (p);
   if (!p) {
    return 
# 247 "project/radare2/libr/util/json_parser.c" 3 4
          ((void *)0)
# 247 "project/radare2/libr/util/json_parser.c"
              ;
   }
   if (*p == ',') {
    char *commapos = p;
    p++;
    p = skip_whitespace (p);
    if (!p) {
     return 
# 254 "project/radare2/libr/util/json_parser.c" 3 4
           ((void *)0)
# 254 "project/radare2/libr/util/json_parser.c"
               ;
    }
    if (*p == '}') {
     do { (void)("trailing comma"); (void)(commapos); } while (0);
     return 
# 258 "project/radare2/libr/util/json_parser.c" 3 4
           ((void *)0)
# 258 "project/radare2/libr/util/json_parser.c"
               ;
    }
   } else if (*p == '}') {
    return p + 1;
   } else {
    do { (void)("unexpected chars"); (void)(p); } while (0);
    return 
# 264 "project/radare2/libr/util/json_parser.c" 3 4
          ((void *)0)
# 264 "project/radare2/libr/util/json_parser.c"
              ;
   }
  }
 case '[':
  js = create_json (R_JSON_ARRAY, key, parent);
  p++;
  while (1) {
   p = parse_value (js, 0, p);
   if (!p) {
    return 
# 273 "project/radare2/libr/util/json_parser.c" 3 4
          ((void *)0)
# 273 "project/radare2/libr/util/json_parser.c"
              ;
   }
   p = skip_whitespace (p);
   if (!p) {
    return 
# 277 "project/radare2/libr/util/json_parser.c" 3 4
          ((void *)0)
# 277 "project/radare2/libr/util/json_parser.c"
              ;
   }
   if (*p == ',') {
    char *commapos = p;
    p++;
    p = skip_whitespace (p);
    if (!p) {
     return 
# 284 "project/radare2/libr/util/json_parser.c" 3 4
           ((void *)0)
# 284 "project/radare2/libr/util/json_parser.c"
               ;
    }
    if (*p == ']') {
     do { (void)("trailing comma"); (void)(commapos); } while (0);
     return 
# 288 "project/radare2/libr/util/json_parser.c" 3 4
           ((void *)0)
# 288 "project/radare2/libr/util/json_parser.c"
               ;
    }
   } else if (*p == ']') {
    return p + 1;
   } else {
    do { (void)("unexpected chars"); (void)(p); } while (0);
    return 
# 294 "project/radare2/libr/util/json_parser.c" 3 4
          ((void *)0)
# 294 "project/radare2/libr/util/json_parser.c"
              ;
   }
  }
 case ']':
  return p;
 case '"':
  p++;
  js = create_json (R_JSON_STRING, key, parent);
  js->str_value = unescape_string (p, &p);
  if (!js->str_value) {
   return 
# 304 "project/radare2/libr/util/json_parser.c" 3 4
         ((void *)0)
# 304 "project/radare2/libr/util/json_parser.c"
             ;
  }
  return p;
 case '-':
 case '0':
 case '1':
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9': {
  js = create_json (R_JSON_INTEGER, key, parent);
  
# 319 "project/radare2/libr/util/json_parser.c" 3 4
 (*__error()) 
# 319 "project/radare2/libr/util/json_parser.c"
       = 0;
  char *pe;
  if (*p == '-') {
   js->num.s_value = (
# 322 "project/radare2/libr/util/json_parser.c" 3 4
                     long long
# 322 "project/radare2/libr/util/json_parser.c"
                         )strtoll (p, &pe, 10);
  } else {
   js->num.u_value = (
# 324 "project/radare2/libr/util/json_parser.c" 3 4
                     unsigned long long
# 324 "project/radare2/libr/util/json_parser.c"
                         )strtoull (p, &pe, 10);
  }
  if (pe == p || 
# 326 "project/radare2/libr/util/json_parser.c" 3 4
                (*__error()) 
# 326 "project/radare2/libr/util/json_parser.c"
                      == 
# 326 "project/radare2/libr/util/json_parser.c" 3 4
                         34
# 326 "project/radare2/libr/util/json_parser.c"
                               ) {
   do { (void)("invalid number"); (void)(p); } while (0);
   return 
# 328 "project/radare2/libr/util/json_parser.c" 3 4
         ((void *)0)
# 328 "project/radare2/libr/util/json_parser.c"
             ;
  }
  if (*pe == '.' || *pe == 'e' || *pe == 'E') {
   js->type = R_JSON_DOUBLE;
   
# 332 "project/radare2/libr/util/json_parser.c" 3 4
  (*__error()) 
# 332 "project/radare2/libr/util/json_parser.c"
        = 0;
   js->num.dbl_value = strtod (p, &pe);
   if (pe == p || 
# 334 "project/radare2/libr/util/json_parser.c" 3 4
                 (*__error()) 
# 334 "project/radare2/libr/util/json_parser.c"
                       == 
# 334 "project/radare2/libr/util/json_parser.c" 3 4
                          34
# 334 "project/radare2/libr/util/json_parser.c"
                                ) {
    do { (void)("invalid fractional number"); (void)(p); } while (0);
    return 
# 336 "project/radare2/libr/util/json_parser.c" 3 4
          ((void *)0)
# 336 "project/radare2/libr/util/json_parser.c"
              ;
   }
  } else {
   if (*p == '-') {
    js->num.dbl_value = (double) js->num.s_value;
   } else {
    js->num.dbl_value = (double) js->num.u_value;
   }
  }
  return pe;
 }
 case 't':
  if (!strncmp (p, "true", 4)) {
   js = create_json (R_JSON_BOOLEAN, key, parent);
   js->num.u_value = 1;
   return p + 4;
  }
  do { (void)("unexpected chars"); (void)(p); } while (0);
  return 
# 354 "project/radare2/libr/util/json_parser.c" 3 4
        ((void *)0)
# 354 "project/radare2/libr/util/json_parser.c"
            ;
 case 'f':
  if (!strncmp (p, "false", 5)) {
   js = create_json (R_JSON_BOOLEAN, key, parent);
   js->num.u_value = 0;
   return p + 5;
  }
  do { (void)("unexpected chars"); (void)(p); } while (0);
  return 
# 362 "project/radare2/libr/util/json_parser.c" 3 4
        ((void *)0)
# 362 "project/radare2/libr/util/json_parser.c"
            ;
 case 'n':
  if (!strncmp (p, "null", 4)) {
   create_json (R_JSON_NULL, key, parent);
   return p + 4;
  }
  do { (void)("unexpected chars"); (void)(p); } while (0);
  return 
# 369 "project/radare2/libr/util/json_parser.c" 3 4
        ((void *)0)
# 369 "project/radare2/libr/util/json_parser.c"
            ;
 default:
  do { (void)("unexpected chars"); (void)(p); } while (0);
  return 
# 372 "project/radare2/libr/util/json_parser.c" 3 4
        ((void *)0)
# 372 "project/radare2/libr/util/json_parser.c"
            ;
 }
 return 
# 374 "project/radare2/libr/util/json_parser.c" 3 4
       ((void *)0)
# 374 "project/radare2/libr/util/json_parser.c"
           ;
}


# 377 "project/radare2/libr/util/json_parser.c" 3 4
__attribute__((visibility("default"))) 
# 377 "project/radare2/libr/util/json_parser.c"
     RJson *r_json_parse(char *text) {
 RJson js = {0};
 if (!parse_value (&js, 0, text)) {
  if (js.children.first) {
   r_json_free (js.children.first);
  }
  return 0;
 }
 return js.children.first;
}


# 388 "project/radare2/libr/util/json_parser.c" 3 4
__attribute__((visibility("default"))) 
# 388 "project/radare2/libr/util/json_parser.c"
     const RJson *r_json_get(const RJson *json, const char *key) {
 RJson *js;
 for (js = json->children.first; js; js = js->next) {
  if (js->key && !strcmp (js->key, key)) {
   return js;
  }
 }
 return 
# 395 "project/radare2/libr/util/json_parser.c" 3 4
       ((void *)0)
# 395 "project/radare2/libr/util/json_parser.c"
           ;
}


# 398 "project/radare2/libr/util/json_parser.c" 3 4
__attribute__((visibility("default"))) 
# 398 "project/radare2/libr/util/json_parser.c"
     const RJson *r_json_item(const RJson *json, size_t idx) {
 RJson *js;
 for (js = json->children.first; js; js = js->next) {
  if (!idx--) {
   return js;
  }
 }
 return 
# 405 "project/radare2/libr/util/json_parser.c" 3 4
       ((void *)0)
# 405 "project/radare2/libr/util/json_parser.c"
           ;
}