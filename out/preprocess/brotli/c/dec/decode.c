# 0 "project/brotli/c/dec/decode.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/brotli/c/dec/decode.c"






# 1 "/usr/local/include/brotli/decode.h" 1 3 4
# 15 "/usr/local/include/brotli/decode.h" 3 4
# 1 "/usr/local/include/brotli/port.h" 1 3 4
# 16 "/usr/local/include/brotli/decode.h" 2 3 4
# 1 "/usr/local/include/brotli/types.h" 1 3 4
# 15 "/usr/local/include/brotli/types.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4

# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 209 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 321 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef int wchar_t;
# 415 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
} max_align_t;
# 16 "/usr/local/include/brotli/types.h" 2 3 4
# 27 "/usr/local/include/brotli/types.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdint.h" 1 3 4
# 9 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdint.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 1 3 4
# 27 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int8_t.h" 3 4
typedef signed char int8_t;
# 28 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 29 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 30 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 31 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4

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




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 1 3 4
# 649 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 650 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 715 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_posix_availability.h" 1 3 4
# 716 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 2 3 4
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
# 62 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_intptr_t.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/types.h" 1 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 1 3 4
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 3 4
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
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_intptr_t.h" 2 3 4

typedef __darwin_intptr_t intptr_t;
# 63 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_intmax_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_intmax_t.h" 3 4
typedef long int intmax_t;
# 68 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uintmax_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uintmax_t.h" 3 4
typedef long unsigned int uintmax_t;
# 69 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 10 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdint.h" 2 3 4
# 28 "/usr/local/include/brotli/types.h" 2 3 4
# 71 "/usr/local/include/brotli/types.h" 3 4
typedef void* (*brotli_alloc_func)(void* opaque, size_t size);
# 81 "/usr/local/include/brotli/types.h" 3 4
typedef void (*brotli_free_func)(void* opaque, void* address);
# 17 "/usr/local/include/brotli/decode.h" 2 3 4
# 28 "/usr/local/include/brotli/decode.h" 3 4
typedef struct BrotliDecoderStateStruct BrotliDecoderState;





typedef enum {

  BROTLI_DECODER_RESULT_ERROR = 0,

  BROTLI_DECODER_RESULT_SUCCESS = 1,

  BROTLI_DECODER_RESULT_NEEDS_MORE_INPUT = 2,

  BROTLI_DECODER_RESULT_NEEDS_MORE_OUTPUT = 3
} BrotliDecoderResult;
# 112 "/usr/local/include/brotli/decode.h" 3 4
typedef enum {



  BROTLI_DECODER_NO_ERROR = 0 , BROTLI_DECODER_SUCCESS = 1 , BROTLI_DECODER_NEEDS_MORE_INPUT = 2 , BROTLI_DECODER_NEEDS_MORE_OUTPUT = 3 , BROTLI_DECODER_ERROR_FORMAT_EXUBERANT_NIBBLE = -1 , BROTLI_DECODER_ERROR_FORMAT_RESERVED = -2 , BROTLI_DECODER_ERROR_FORMAT_EXUBERANT_META_NIBBLE = -3 , BROTLI_DECODER_ERROR_FORMAT_SIMPLE_HUFFMAN_ALPHABET = -4 , BROTLI_DECODER_ERROR_FORMAT_SIMPLE_HUFFMAN_SAME = -5 , BROTLI_DECODER_ERROR_FORMAT_CL_SPACE = -6 , BROTLI_DECODER_ERROR_FORMAT_HUFFMAN_SPACE = -7 , BROTLI_DECODER_ERROR_FORMAT_CONTEXT_MAP_REPEAT = -8 , BROTLI_DECODER_ERROR_FORMAT_BLOCK_LENGTH_1 = -9 , BROTLI_DECODER_ERROR_FORMAT_BLOCK_LENGTH_2 = -10 , BROTLI_DECODER_ERROR_FORMAT_TRANSFORM = -11 , BROTLI_DECODER_ERROR_FORMAT_DICTIONARY = -12 , BROTLI_DECODER_ERROR_FORMAT_WINDOW_BITS = -13 , BROTLI_DECODER_ERROR_FORMAT_PADDING_1 = -14 , BROTLI_DECODER_ERROR_FORMAT_PADDING_2 = -15 , BROTLI_DECODER_ERROR_FORMAT_DISTANCE = -16 , BROTLI_DECODER_ERROR_DICTIONARY_NOT_SET = -19 , BROTLI_DECODER_ERROR_INVALID_ARGUMENTS = -20 , BROTLI_DECODER_ERROR_ALLOC_CONTEXT_MODES = -21 , BROTLI_DECODER_ERROR_ALLOC_TREE_GROUPS = -22 , BROTLI_DECODER_ERROR_ALLOC_CONTEXT_MAP = -25 , BROTLI_DECODER_ERROR_ALLOC_RING_BUFFER_1 = -26 , BROTLI_DECODER_ERROR_ALLOC_RING_BUFFER_2 = -27 , BROTLI_DECODER_ERROR_ALLOC_BLOCK_TYPE_TREES = -30 , BROTLI_DECODER_ERROR_UNREACHABLE = -31
} BrotliDecoderErrorCode;
# 131 "/usr/local/include/brotli/decode.h" 3 4
typedef enum BrotliDecoderParameter {






  BROTLI_DECODER_PARAM_DISABLE_RING_BUFFER_REALLOCATION = 0,



  BROTLI_DECODER_PARAM_LARGE_WINDOW = 1
} BrotliDecoderParameter;
# 154 "/usr/local/include/brotli/decode.h" 3 4
 int BrotliDecoderSetParameter(
    BrotliDecoderState* state, BrotliDecoderParameter param, uint32_t value);
# 175 "/usr/local/include/brotli/decode.h" 3 4
 BrotliDecoderState* BrotliDecoderCreateInstance(
    brotli_alloc_func alloc_func, brotli_free_func free_func, void* opaque);






 void BrotliDecoderDestroyInstance(BrotliDecoderState* state);
# 202 "/usr/local/include/brotli/decode.h" 3 4
 BrotliDecoderResult BrotliDecoderDecompress(
    size_t encoded_size,
    const uint8_t encoded_buffer[(encoded_size)],
    size_t* decoded_size,
    uint8_t decoded_buffer[(*decoded_size)]);
# 246 "/usr/local/include/brotli/decode.h" 3 4
 BrotliDecoderResult BrotliDecoderDecompressStream(
  BrotliDecoderState* state, size_t* available_in, const uint8_t** next_in,
  size_t* available_out, uint8_t** next_out, size_t* total_out);
# 257 "/usr/local/include/brotli/decode.h" 3 4
 int BrotliDecoderHasMoreOutput(
    const BrotliDecoderState* state);
# 288 "/usr/local/include/brotli/decode.h" 3 4
 const uint8_t* BrotliDecoderTakeOutput(
    BrotliDecoderState* state, size_t* size);
# 301 "/usr/local/include/brotli/decode.h" 3 4
 int BrotliDecoderIsUsed(const BrotliDecoderState* state);
# 311 "/usr/local/include/brotli/decode.h" 3 4
 int BrotliDecoderIsFinished(
    const BrotliDecoderState* state);
# 325 "/usr/local/include/brotli/decode.h" 3 4
 BrotliDecoderErrorCode BrotliDecoderGetErrorCode(
    const BrotliDecoderState* state);




 const char* BrotliDecoderErrorString(BrotliDecoderErrorCode c);






 uint32_t BrotliDecoderVersion(void);
# 8 "project/brotli/c/dec/decode.c" 2

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 1 3 4
# 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 1 3 4
# 135 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/AvailabilityVersions.h" 1 3 4
# 136 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/AvailabilityInternal.h" 1 3 4
# 137 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 1 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4

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
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
# 156 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4
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
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
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


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_null.h" 1 3 4
# 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4
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








# 10 "project/brotli/c/dec/decode.c" 2
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






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 153 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4


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
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_strings.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_common.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_strings.h" 2 3 4
# 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/strings.h" 2 3 4
# 185 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 194 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_string.h" 1 3 4
# 195 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 11 "project/brotli/c/dec/decode.c" 2

# 1 "project/brotli/c/dec/../common/constants.h" 1
# 15 "project/brotli/c/dec/../common/constants.h"
# 1 "project/brotli/c/dec/../common/./platform.h" 1
# 340 "project/brotli/c/dec/../common/./platform.h"

# 340 "project/brotli/c/dec/../common/./platform.h"
static inline __attribute__((__always_inline__)) uint16_t BrotliUnalignedRead16(const void* p) {
  return *(const uint16_t*)p;
}
static inline __attribute__((__always_inline__)) uint32_t BrotliUnalignedRead32(const void* p) {
  return *(const uint32_t*)p;
}

static inline __attribute__((__always_inline__)) uint64_t BrotliUnalignedRead64(const void* p) {
  return *(const uint64_t*)p;
}
static inline __attribute__((__always_inline__)) void BrotliUnalignedWrite64(void* p, uint64_t v) {
  *(uint64_t*)p = v;
}
# 502 "project/brotli/c/dec/../common/./platform.h"
static inline __attribute__((__always_inline__)) void BrotliRBit(void) { }
# 516 "project/brotli/c/dec/../common/./platform.h"
static inline __attribute__((__always_inline__)) double brotli_min_double (double a, double b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) double brotli_max_double (double a, double b) { return a > b ? a : b; } static inline __attribute__((__always_inline__)) float brotli_min_float (float a, float b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) float brotli_max_float (float a, float b) { return a > b ? a : b; } static inline __attribute__((__always_inline__)) int brotli_min_int (int a, int b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) int brotli_max_int (int a, int b) { return a > b ? a : b; }
static inline __attribute__((__always_inline__)) size_t brotli_min_size_t (size_t a, size_t b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) size_t brotli_max_size_t (size_t a, size_t b) { return a > b ? a : b; } static inline __attribute__((__always_inline__)) uint32_t brotli_min_uint32_t (uint32_t a, uint32_t b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) uint32_t brotli_max_uint32_t (uint32_t a, uint32_t b) { return a > b ? a : b; } static inline __attribute__((__always_inline__)) uint8_t brotli_min_uint8_t (uint8_t a, uint8_t b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) uint8_t brotli_max_uint8_t (uint8_t a, uint8_t b) { return a > b ? a : b; }
# 559 "project/brotli/c/dec/../common/./platform.h"
 void* BrotliDefaultAllocFunc(void* opaque, size_t size);


 void BrotliDefaultFreeFunc(void* opaque, void* address);

static inline __attribute__((__always_inline__)) __attribute__ ((unused)) void BrotliSuppressUnusedFunctions(void) {
  (void)(&BrotliSuppressUnusedFunctions);
  (void)(&BrotliUnalignedRead16);
  (void)(&BrotliUnalignedRead32);
  (void)(&BrotliUnalignedRead64);
  (void)(&BrotliUnalignedWrite64);
  (void)(&BrotliUnalignedRead16);
  (void)(&BrotliUnalignedRead32);
  (void)(&BrotliUnalignedRead64);
  (void)(&BrotliUnalignedWrite64);
  (void)(&BrotliRBit);
  (void)(&brotli_min_double);
  (void)(&brotli_max_double);
  (void)(&brotli_min_float);
  (void)(&brotli_max_float);
  (void)(&brotli_min_int);
  (void)(&brotli_max_int);
  (void)(&brotli_min_size_t);
  (void)(&brotli_max_size_t);
  (void)(&brotli_min_uint32_t);
  (void)(&brotli_max_uint32_t);
  (void)(&brotli_min_uint8_t);
  (void)(&brotli_max_uint8_t);
  (void)(&BrotliDefaultAllocFunc);
  (void)(&BrotliDefaultFreeFunc);



}
# 16 "project/brotli/c/dec/../common/constants.h" 2
# 105 "project/brotli/c/dec/../common/constants.h"
typedef struct BrotliDistanceCodeLimit {
  uint32_t max_alphabet_size;
  uint32_t max_distance;
} BrotliDistanceCodeLimit;
# 127 "project/brotli/c/dec/../common/constants.h"
static inline __attribute__((__always_inline__)) __attribute__ ((unused)) BrotliDistanceCodeLimit BrotliCalculateDistanceCodeLimit(
    uint32_t max_distance, uint32_t npostfix, uint32_t ndirect) {
  BrotliDistanceCodeLimit result;


  (void)(&BrotliCalculateDistanceCodeLimit);
  if (max_distance <= ndirect) {

    result.max_alphabet_size = max_distance + 16;
    result.max_distance = max_distance;
    return result;
  } else {

    uint32_t forbidden_distance = max_distance + 1;

    uint32_t offset = forbidden_distance - ndirect - 1;
    uint32_t ndistbits = 0;
    uint32_t tmp;
    uint32_t half;
    uint32_t group;

    uint32_t postfix = (1u << npostfix) - 1;
    uint32_t extra;
    uint32_t start;

    offset = (offset >> npostfix) + 4;

    tmp = offset / 2;

    while (tmp != 0) {ndistbits++; tmp = tmp >> 1;}

    ndistbits--;

    half = (offset >> ndistbits) & 1;

    group = ((ndistbits - 1) << 1) | half;

    if (group == 0) {

      result.max_alphabet_size = ndirect + 16;
      result.max_distance = ndirect;
      return result;
    }

    group--;

    ndistbits = (group >> 1) + 1;

    extra = (1u << ndistbits) - 1;

    start = (1u << (ndistbits + 1)) - 4;

    start += (group & 1) << ndistbits;

    result.max_alphabet_size = ((group << npostfix) | postfix) + ndirect +
        16 + 1;

    result.max_distance = ((start + extra) << npostfix) + postfix + ndirect + 1;
    return result;
  }
}



typedef struct {
  uint16_t offset;
  uint8_t nbits;
} BrotliPrefixCodeRange;


 extern const BrotliPrefixCodeRange
    _kBrotliPrefixCodeRanges[26];
# 13 "project/brotli/c/dec/decode.c" 2
# 1 "project/brotli/c/dec/../common/context.h" 1
# 94 "project/brotli/c/dec/../common/context.h"
typedef enum ContextType {
  CONTEXT_LSB6 = 0,
  CONTEXT_MSB6 = 1,
  CONTEXT_UTF8 = 2,
  CONTEXT_SIGNED = 3
} ContextType;



 extern const uint8_t _kBrotliContextLookupTable[2048];

typedef const uint8_t* ContextLut;
# 14 "project/brotli/c/dec/decode.c" 2
# 1 "project/brotli/c/dec/../common/dictionary.h" 1
# 19 "project/brotli/c/dec/../common/dictionary.h"
typedef struct BrotliDictionary {
# 30 "project/brotli/c/dec/../common/dictionary.h"
  uint8_t size_bits_by_length[32];


  uint32_t offsets_by_length[32];


  size_t data_size;




  const uint8_t* data;
} BrotliDictionary;

 const BrotliDictionary* BrotliGetDictionary(void);
# 55 "project/brotli/c/dec/../common/dictionary.h"
 void BrotliSetDictionaryData(const uint8_t* data);
# 15 "project/brotli/c/dec/decode.c" 2
# 1 "project/brotli/c/dec/../common/platform.h" 1
# 16 "project/brotli/c/dec/decode.c" 2
# 1 "project/brotli/c/dec/../common/transform.h" 1
# 18 "project/brotli/c/dec/../common/transform.h"
enum BrotliWordTransformType {
  BROTLI_TRANSFORM_IDENTITY = 0,
  BROTLI_TRANSFORM_OMIT_LAST_1 = 1,
  BROTLI_TRANSFORM_OMIT_LAST_2 = 2,
  BROTLI_TRANSFORM_OMIT_LAST_3 = 3,
  BROTLI_TRANSFORM_OMIT_LAST_4 = 4,
  BROTLI_TRANSFORM_OMIT_LAST_5 = 5,
  BROTLI_TRANSFORM_OMIT_LAST_6 = 6,
  BROTLI_TRANSFORM_OMIT_LAST_7 = 7,
  BROTLI_TRANSFORM_OMIT_LAST_8 = 8,
  BROTLI_TRANSFORM_OMIT_LAST_9 = 9,
  BROTLI_TRANSFORM_UPPERCASE_FIRST = 10,
  BROTLI_TRANSFORM_UPPERCASE_ALL = 11,
  BROTLI_TRANSFORM_OMIT_FIRST_1 = 12,
  BROTLI_TRANSFORM_OMIT_FIRST_2 = 13,
  BROTLI_TRANSFORM_OMIT_FIRST_3 = 14,
  BROTLI_TRANSFORM_OMIT_FIRST_4 = 15,
  BROTLI_TRANSFORM_OMIT_FIRST_5 = 16,
  BROTLI_TRANSFORM_OMIT_FIRST_6 = 17,
  BROTLI_TRANSFORM_OMIT_FIRST_7 = 18,
  BROTLI_TRANSFORM_OMIT_FIRST_8 = 19,
  BROTLI_TRANSFORM_OMIT_FIRST_9 = 20,
  BROTLI_TRANSFORM_SHIFT_FIRST = 21,
  BROTLI_TRANSFORM_SHIFT_ALL = 22,
  BROTLI_NUM_TRANSFORM_TYPES
};



typedef struct BrotliTransforms {
  uint16_t prefix_suffix_size;

  const uint8_t* prefix_suffix;
  const uint16_t* prefix_suffix_map;
  uint32_t num_transforms;

  const uint8_t* transforms;


  const uint8_t* params;



  int16_t cutOffTransforms[BROTLI_TRANSFORM_OMIT_LAST_9 + 1];
} BrotliTransforms;
# 75 "project/brotli/c/dec/../common/transform.h"
 const BrotliTransforms* BrotliGetTransforms(void);

 int BrotliTransformDictionaryWord(
    uint8_t* dst, const uint8_t* word, int len,
    const BrotliTransforms* transforms, int transform_idx);
# 17 "project/brotli/c/dec/decode.c" 2
# 1 "project/brotli/c/dec/../common/version.h" 1
# 18 "project/brotli/c/dec/decode.c" 2
# 1 "project/brotli/c/dec/./bit_reader.h" 1
# 14 "project/brotli/c/dec/./bit_reader.h"
# 1 "project/brotli/c/dec/./../common/constants.h" 1
# 15 "project/brotli/c/dec/./bit_reader.h" 2
# 1 "project/brotli/c/dec/./../common/platform.h" 1
# 16 "project/brotli/c/dec/./bit_reader.h" 2
# 24 "project/brotli/c/dec/./bit_reader.h"
__attribute__ ((visibility ("hidden"))) extern const uint32_t kBrotliBitMask[33];

static inline __attribute__((__always_inline__)) uint32_t BitMask(uint32_t n) {
  if ((!!__builtin_constant_p(n)) || (!!0)) {


    return ~((0xFFFFFFFFu) << n);
  } else {
    return kBrotliBitMask[n];
  }
}

typedef struct {
  uint64_t val_;
  uint32_t bit_pos_;
  const uint8_t* next_in;
  size_t avail_in;
} BrotliBitReader;

typedef struct {
  uint64_t val_;
  uint32_t bit_pos_;
  const uint8_t* next_in;
  size_t avail_in;
} BrotliBitReaderState;


__attribute__ ((visibility ("hidden"))) void BrotliInitBitReader(BrotliBitReader* const br);






__attribute__ ((visibility ("hidden"))) 
# 58 "project/brotli/c/dec/./bit_reader.h" 3 4
               int 
# 58 "project/brotli/c/dec/./bit_reader.h"
                           BrotliWarmupBitReader(BrotliBitReader* const br);




__attribute__ ((visibility ("hidden"))) __attribute__((__noinline__)) 
# 63 "project/brotli/c/dec/./bit_reader.h" 3 4
                               int 
# 63 "project/brotli/c/dec/./bit_reader.h"
                                           BrotliSafeReadBits32Slow(
    BrotliBitReader* const br, uint32_t n_bits, uint32_t* val);

static inline __attribute__((__always_inline__)) void BrotliBitReaderSaveState(
    BrotliBitReader* const from, BrotliBitReaderState* to) {
  to->val_ = from->val_;
  to->bit_pos_ = from->bit_pos_;
  to->next_in = from->next_in;
  to->avail_in = from->avail_in;
}

static inline __attribute__((__always_inline__)) void BrotliBitReaderRestoreState(
    BrotliBitReader* const to, BrotliBitReaderState* from) {
  to->val_ = from->val_;
  to->bit_pos_ = from->bit_pos_;
  to->next_in = from->next_in;
  to->avail_in = from->avail_in;
}

static inline __attribute__((__always_inline__)) uint32_t BrotliGetAvailableBits(
    const BrotliBitReader* br) {
  return (1 ? 64 : 32) - br->bit_pos_;
}




static inline __attribute__((__always_inline__)) size_t BrotliGetRemainingBytes(BrotliBitReader* br) {
  static const size_t kCap = (size_t)1 << 30;
  if (br->avail_in > kCap) return kCap;
  return br->avail_in + (BrotliGetAvailableBits(br) >> 3);
}



static inline __attribute__((__always_inline__)) 
# 98 "project/brotli/c/dec/./bit_reader.h" 3 4
                    int 
# 98 "project/brotli/c/dec/./bit_reader.h"
                                BrotliCheckInputAmount(
    BrotliBitReader* const br, size_t num) {
  return 
# 100 "project/brotli/c/dec/./bit_reader.h" 3 4
        (!!(
# 100 "project/brotli/c/dec/./bit_reader.h"
        br->avail_in >= num
# 100 "project/brotli/c/dec/./bit_reader.h" 3 4
        ) ? 1 : 0)
# 100 "project/brotli/c/dec/./bit_reader.h"
                                           ;
}





static inline __attribute__((__always_inline__)) void BrotliFillBitWindow(
    BrotliBitReader* const br, uint32_t n_bits) {

  if (!(!!0) && (!!__builtin_constant_p(n_bits)) && (n_bits <= 8)) {
    if (br->bit_pos_ >= 56) {
      br->val_ >>= 56;
      br->bit_pos_ ^= 56;
      br->val_ |= BrotliUnalignedRead64(br->next_in) << 8;
      br->avail_in -= 7;
      br->next_in += 7;
    }
  } else if (
      !(!!0) && (!!__builtin_constant_p(n_bits)) && (n_bits <= 16)) {
    if (br->bit_pos_ >= 48) {
      br->val_ >>= 48;
      br->bit_pos_ ^= 48;
      br->val_ |= BrotliUnalignedRead64(br->next_in) << 16;
      br->avail_in -= 6;
      br->next_in += 6;
    }
  } else {
    if (br->bit_pos_ >= 32) {
      br->val_ >>= 32;
      br->bit_pos_ ^= 32;
      br->val_ |= ((uint64_t)BrotliUnalignedRead32(br->next_in)) << 32;
      br->avail_in -= (sizeof(uint64_t) >> 1);
      br->next_in += (sizeof(uint64_t) >> 1);
    }
  }
# 155 "project/brotli/c/dec/./bit_reader.h"
}



static inline __attribute__((__always_inline__)) void BrotliFillBitWindow16(BrotliBitReader* const br) {
  BrotliFillBitWindow(br, 17);
}



static inline __attribute__((__always_inline__)) 
# 165 "project/brotli/c/dec/./bit_reader.h" 3 4
                    int 
# 165 "project/brotli/c/dec/./bit_reader.h"
                                BrotliPullByte(BrotliBitReader* const br) {
  if (br->avail_in == 0) {
    return 
# 167 "project/brotli/c/dec/./bit_reader.h" 3 4
          0
# 167 "project/brotli/c/dec/./bit_reader.h"
                      ;
  }
  br->val_ >>= 8;

  br->val_ |= ((uint64_t)*br->next_in) << 56;



  br->bit_pos_ -= 8;
  --br->avail_in;
  ++br->next_in;
  return 
# 178 "project/brotli/c/dec/./bit_reader.h" 3 4
        1
# 178 "project/brotli/c/dec/./bit_reader.h"
                   ;
}



static inline __attribute__((__always_inline__)) uint64_t BrotliGetBitsUnmasked(
    BrotliBitReader* const br) {
  return br->val_ >> br->bit_pos_;
}



static inline __attribute__((__always_inline__)) uint32_t BrotliGet16BitsUnmasked(
    BrotliBitReader* const br) {
  BrotliFillBitWindow(br, 16);
  return (uint32_t)BrotliGetBitsUnmasked(br);
}



static inline __attribute__((__always_inline__)) uint32_t BrotliGetBits(
    BrotliBitReader* const br, uint32_t n_bits) {
  BrotliFillBitWindow(br, n_bits);
  return (uint32_t)BrotliGetBitsUnmasked(br) & BitMask(n_bits);
}



static inline __attribute__((__always_inline__)) 
# 206 "project/brotli/c/dec/./bit_reader.h" 3 4
                    int 
# 206 "project/brotli/c/dec/./bit_reader.h"
                                BrotliSafeGetBits(
    BrotliBitReader* const br, uint32_t n_bits, uint32_t* val) {
  while (BrotliGetAvailableBits(br) < n_bits) {
    if (!BrotliPullByte(br)) {
      return 
# 210 "project/brotli/c/dec/./bit_reader.h" 3 4
            0
# 210 "project/brotli/c/dec/./bit_reader.h"
                        ;
    }
  }
  *val = (uint32_t)BrotliGetBitsUnmasked(br) & BitMask(n_bits);
  return 
# 214 "project/brotli/c/dec/./bit_reader.h" 3 4
        1
# 214 "project/brotli/c/dec/./bit_reader.h"
                   ;
}


static inline __attribute__((__always_inline__)) void BrotliDropBits(
    BrotliBitReader* const br, uint32_t n_bits) {
  br->bit_pos_ += n_bits;
}

static inline __attribute__((__always_inline__)) void BrotliBitReaderUnload(BrotliBitReader* br) {
  uint32_t unused_bytes = BrotliGetAvailableBits(br) >> 3;
  uint32_t unused_bits = unused_bytes << 3;
  br->avail_in += unused_bytes;
  br->next_in -= unused_bytes;
  if (unused_bits == sizeof(br->val_) << 3) {
    br->val_ = 0;
  } else {
    br->val_ <<= unused_bits;
  }
  br->bit_pos_ += unused_bits;
}



static inline __attribute__((__always_inline__)) void BrotliTakeBits(
  BrotliBitReader* const br, uint32_t n_bits, uint32_t* val) {
  *val = (uint32_t)BrotliGetBitsUnmasked(br) & BitMask(n_bits);
 
                                                                    ;
  BrotliDropBits(br, n_bits);
}




static inline __attribute__((__always_inline__)) uint32_t BrotliReadBits24(
    BrotliBitReader* const br, uint32_t n_bits) {
  ;
  if (1 || (n_bits <= 16)) {
    uint32_t val;
    BrotliFillBitWindow(br, n_bits);
    BrotliTakeBits(br, n_bits, &val);
    return val;
  } else {
    uint32_t low_val;
    uint32_t high_val;
    BrotliFillBitWindow(br, 16);
    BrotliTakeBits(br, 16, &low_val);
    BrotliFillBitWindow(br, 8);
    BrotliTakeBits(br, n_bits - 16, &high_val);
    return low_val | (high_val << 16);
  }
}


static inline __attribute__((__always_inline__)) uint32_t BrotliReadBits32(
    BrotliBitReader* const br, uint32_t n_bits) {
  ;
  if (1 || (n_bits <= 16)) {
    uint32_t val;
    BrotliFillBitWindow(br, n_bits);
    BrotliTakeBits(br, n_bits, &val);
    return val;
  } else {
    uint32_t low_val;
    uint32_t high_val;
    BrotliFillBitWindow(br, 16);
    BrotliTakeBits(br, 16, &low_val);
    BrotliFillBitWindow(br, 16);
    BrotliTakeBits(br, n_bits - 16, &high_val);
    return low_val | (high_val << 16);
  }
}




static inline __attribute__((__always_inline__)) 
# 291 "project/brotli/c/dec/./bit_reader.h" 3 4
                    int 
# 291 "project/brotli/c/dec/./bit_reader.h"
                                BrotliSafeReadBits(
    BrotliBitReader* const br, uint32_t n_bits, uint32_t* val) {
  ;
  while (BrotliGetAvailableBits(br) < n_bits) {
    if (!BrotliPullByte(br)) {
      return 
# 296 "project/brotli/c/dec/./bit_reader.h" 3 4
            0
# 296 "project/brotli/c/dec/./bit_reader.h"
                        ;
    }
  }
  BrotliTakeBits(br, n_bits, val);
  return 
# 300 "project/brotli/c/dec/./bit_reader.h" 3 4
        1
# 300 "project/brotli/c/dec/./bit_reader.h"
                   ;
}


static inline __attribute__((__always_inline__)) 
# 304 "project/brotli/c/dec/./bit_reader.h" 3 4
                    int 
# 304 "project/brotli/c/dec/./bit_reader.h"
                                BrotliSafeReadBits32(
    BrotliBitReader* const br, uint32_t n_bits, uint32_t* val) {
  ;
  if (1 || (n_bits <= 24)) {
    while (BrotliGetAvailableBits(br) < n_bits) {
      if (!BrotliPullByte(br)) {
        return 
# 310 "project/brotli/c/dec/./bit_reader.h" 3 4
              0
# 310 "project/brotli/c/dec/./bit_reader.h"
                          ;
      }
    }
    BrotliTakeBits(br, n_bits, val);
    return 
# 314 "project/brotli/c/dec/./bit_reader.h" 3 4
          1
# 314 "project/brotli/c/dec/./bit_reader.h"
                     ;
  } else {
    return BrotliSafeReadBits32Slow(br, n_bits, val);
  }
}



static inline __attribute__((__always_inline__)) 
# 322 "project/brotli/c/dec/./bit_reader.h" 3 4
                    int 
# 322 "project/brotli/c/dec/./bit_reader.h"
                                BrotliJumpToByteBoundary(BrotliBitReader* br) {
  uint32_t pad_bits_count = BrotliGetAvailableBits(br) & 0x7;
  uint32_t pad_bits = 0;
  if (pad_bits_count != 0) {
    BrotliTakeBits(br, pad_bits_count, &pad_bits);
  }
  return 
# 328 "project/brotli/c/dec/./bit_reader.h" 3 4
        (!!(
# 328 "project/brotli/c/dec/./bit_reader.h"
        pad_bits == 0
# 328 "project/brotli/c/dec/./bit_reader.h" 3 4
        ) ? 1 : 0)
# 328 "project/brotli/c/dec/./bit_reader.h"
                                     ;
}




static inline __attribute__((__always_inline__)) void BrotliCopyBytes(uint8_t* dest,
                                          BrotliBitReader* br, size_t num) {
  while (BrotliGetAvailableBits(br) >= 8 && num > 0) {
    *dest = (uint8_t)BrotliGetBitsUnmasked(br);
    BrotliDropBits(br, 8);
    ++dest;
    --num;
  }
  
# 342 "project/brotli/c/dec/./bit_reader.h" 3 4
 __builtin___memcpy_chk (
# 342 "project/brotli/c/dec/./bit_reader.h"
 dest
# 342 "project/brotli/c/dec/./bit_reader.h" 3 4
 , 
# 342 "project/brotli/c/dec/./bit_reader.h"
 br->next_in, num
# 342 "project/brotli/c/dec/./bit_reader.h" 3 4
 , __builtin_object_size (
# 342 "project/brotli/c/dec/./bit_reader.h"
 dest
# 342 "project/brotli/c/dec/./bit_reader.h" 3 4
 , 0))
# 342 "project/brotli/c/dec/./bit_reader.h"
                               ;
  br->avail_in -= num;
  br->next_in += num;
}
# 19 "project/brotli/c/dec/decode.c" 2
# 1 "project/brotli/c/dec/./huffman.h" 1
# 38 "project/brotli/c/dec/./huffman.h"
typedef struct {
  uint8_t bits;
  uint16_t value;
} HuffmanCode;

static inline __attribute__((__always_inline__)) HuffmanCode ConstructHuffmanCode(const uint8_t bits,
    const uint16_t value) {
  HuffmanCode h;
  h.bits = bits;
  h.value = value;
  return h;
}
# 91 "project/brotli/c/dec/./huffman.h"
__attribute__ ((visibility ("hidden"))) void BrotliBuildCodeLengthsHuffmanTable(HuffmanCode* root_table,
    const uint8_t* const code_lengths, uint16_t* count);



__attribute__ ((visibility ("hidden"))) uint32_t BrotliBuildHuffmanTable(HuffmanCode* root_table,
    int root_bits, const uint16_t* const symbol_lists, uint16_t* count);





__attribute__ ((visibility ("hidden"))) uint32_t BrotliBuildSimpleHuffmanTable(HuffmanCode* table,
    int root_bits, uint16_t* symbols, uint32_t num_symbols);




typedef struct {
  HuffmanCode** htrees;
  HuffmanCode* codes;
  uint16_t alphabet_size_max;
  uint16_t alphabet_size_limit;
  uint16_t num_htrees;
} HuffmanTreeGroup;
# 20 "project/brotli/c/dec/decode.c" 2
# 1 "project/brotli/c/dec/./prefix.h" 1
# 16 "project/brotli/c/dec/./prefix.h"
typedef struct CmdLutElement {
  uint8_t insert_len_extra_bits;
  uint8_t copy_len_extra_bits;
  int8_t distance_code;
  uint8_t context;
  uint16_t insert_len_offset;
  uint16_t copy_len_offset;
} CmdLutElement;

static const CmdLutElement kCmdLut[704] = {
  { 0x00, 0x00, 0, 0x00, 0x0000, 0x0002 },
  { 0x00, 0x00, 0, 0x01, 0x0000, 0x0003 },
  { 0x00, 0x00, 0, 0x02, 0x0000, 0x0004 },
  { 0x00, 0x00, 0, 0x03, 0x0000, 0x0005 },
  { 0x00, 0x00, 0, 0x03, 0x0000, 0x0006 },
  { 0x00, 0x00, 0, 0x03, 0x0000, 0x0007 },
  { 0x00, 0x00, 0, 0x03, 0x0000, 0x0008 },
  { 0x00, 0x00, 0, 0x03, 0x0000, 0x0009 },
  { 0x00, 0x00, 0, 0x00, 0x0001, 0x0002 },
  { 0x00, 0x00, 0, 0x01, 0x0001, 0x0003 },
  { 0x00, 0x00, 0, 0x02, 0x0001, 0x0004 },
  { 0x00, 0x00, 0, 0x03, 0x0001, 0x0005 },
  { 0x00, 0x00, 0, 0x03, 0x0001, 0x0006 },
  { 0x00, 0x00, 0, 0x03, 0x0001, 0x0007 },
  { 0x00, 0x00, 0, 0x03, 0x0001, 0x0008 },
  { 0x00, 0x00, 0, 0x03, 0x0001, 0x0009 },
  { 0x00, 0x00, 0, 0x00, 0x0002, 0x0002 },
  { 0x00, 0x00, 0, 0x01, 0x0002, 0x0003 },
  { 0x00, 0x00, 0, 0x02, 0x0002, 0x0004 },
  { 0x00, 0x00, 0, 0x03, 0x0002, 0x0005 },
  { 0x00, 0x00, 0, 0x03, 0x0002, 0x0006 },
  { 0x00, 0x00, 0, 0x03, 0x0002, 0x0007 },
  { 0x00, 0x00, 0, 0x03, 0x0002, 0x0008 },
  { 0x00, 0x00, 0, 0x03, 0x0002, 0x0009 },
  { 0x00, 0x00, 0, 0x00, 0x0003, 0x0002 },
  { 0x00, 0x00, 0, 0x01, 0x0003, 0x0003 },
  { 0x00, 0x00, 0, 0x02, 0x0003, 0x0004 },
  { 0x00, 0x00, 0, 0x03, 0x0003, 0x0005 },
  { 0x00, 0x00, 0, 0x03, 0x0003, 0x0006 },
  { 0x00, 0x00, 0, 0x03, 0x0003, 0x0007 },
  { 0x00, 0x00, 0, 0x03, 0x0003, 0x0008 },
  { 0x00, 0x00, 0, 0x03, 0x0003, 0x0009 },
  { 0x00, 0x00, 0, 0x00, 0x0004, 0x0002 },
  { 0x00, 0x00, 0, 0x01, 0x0004, 0x0003 },
  { 0x00, 0x00, 0, 0x02, 0x0004, 0x0004 },
  { 0x00, 0x00, 0, 0x03, 0x0004, 0x0005 },
  { 0x00, 0x00, 0, 0x03, 0x0004, 0x0006 },
  { 0x00, 0x00, 0, 0x03, 0x0004, 0x0007 },
  { 0x00, 0x00, 0, 0x03, 0x0004, 0x0008 },
  { 0x00, 0x00, 0, 0x03, 0x0004, 0x0009 },
  { 0x00, 0x00, 0, 0x00, 0x0005, 0x0002 },
  { 0x00, 0x00, 0, 0x01, 0x0005, 0x0003 },
  { 0x00, 0x00, 0, 0x02, 0x0005, 0x0004 },
  { 0x00, 0x00, 0, 0x03, 0x0005, 0x0005 },
  { 0x00, 0x00, 0, 0x03, 0x0005, 0x0006 },
  { 0x00, 0x00, 0, 0x03, 0x0005, 0x0007 },
  { 0x00, 0x00, 0, 0x03, 0x0005, 0x0008 },
  { 0x00, 0x00, 0, 0x03, 0x0005, 0x0009 },
  { 0x01, 0x00, 0, 0x00, 0x0006, 0x0002 },
  { 0x01, 0x00, 0, 0x01, 0x0006, 0x0003 },
  { 0x01, 0x00, 0, 0x02, 0x0006, 0x0004 },
  { 0x01, 0x00, 0, 0x03, 0x0006, 0x0005 },
  { 0x01, 0x00, 0, 0x03, 0x0006, 0x0006 },
  { 0x01, 0x00, 0, 0x03, 0x0006, 0x0007 },
  { 0x01, 0x00, 0, 0x03, 0x0006, 0x0008 },
  { 0x01, 0x00, 0, 0x03, 0x0006, 0x0009 },
  { 0x01, 0x00, 0, 0x00, 0x0008, 0x0002 },
  { 0x01, 0x00, 0, 0x01, 0x0008, 0x0003 },
  { 0x01, 0x00, 0, 0x02, 0x0008, 0x0004 },
  { 0x01, 0x00, 0, 0x03, 0x0008, 0x0005 },
  { 0x01, 0x00, 0, 0x03, 0x0008, 0x0006 },
  { 0x01, 0x00, 0, 0x03, 0x0008, 0x0007 },
  { 0x01, 0x00, 0, 0x03, 0x0008, 0x0008 },
  { 0x01, 0x00, 0, 0x03, 0x0008, 0x0009 },
  { 0x00, 0x01, 0, 0x03, 0x0000, 0x000a },
  { 0x00, 0x01, 0, 0x03, 0x0000, 0x000c },
  { 0x00, 0x02, 0, 0x03, 0x0000, 0x000e },
  { 0x00, 0x02, 0, 0x03, 0x0000, 0x0012 },
  { 0x00, 0x03, 0, 0x03, 0x0000, 0x0016 },
  { 0x00, 0x03, 0, 0x03, 0x0000, 0x001e },
  { 0x00, 0x04, 0, 0x03, 0x0000, 0x0026 },
  { 0x00, 0x04, 0, 0x03, 0x0000, 0x0036 },
  { 0x00, 0x01, 0, 0x03, 0x0001, 0x000a },
  { 0x00, 0x01, 0, 0x03, 0x0001, 0x000c },
  { 0x00, 0x02, 0, 0x03, 0x0001, 0x000e },
  { 0x00, 0x02, 0, 0x03, 0x0001, 0x0012 },
  { 0x00, 0x03, 0, 0x03, 0x0001, 0x0016 },
  { 0x00, 0x03, 0, 0x03, 0x0001, 0x001e },
  { 0x00, 0x04, 0, 0x03, 0x0001, 0x0026 },
  { 0x00, 0x04, 0, 0x03, 0x0001, 0x0036 },
  { 0x00, 0x01, 0, 0x03, 0x0002, 0x000a },
  { 0x00, 0x01, 0, 0x03, 0x0002, 0x000c },
  { 0x00, 0x02, 0, 0x03, 0x0002, 0x000e },
  { 0x00, 0x02, 0, 0x03, 0x0002, 0x0012 },
  { 0x00, 0x03, 0, 0x03, 0x0002, 0x0016 },
  { 0x00, 0x03, 0, 0x03, 0x0002, 0x001e },
  { 0x00, 0x04, 0, 0x03, 0x0002, 0x0026 },
  { 0x00, 0x04, 0, 0x03, 0x0002, 0x0036 },
  { 0x00, 0x01, 0, 0x03, 0x0003, 0x000a },
  { 0x00, 0x01, 0, 0x03, 0x0003, 0x000c },
  { 0x00, 0x02, 0, 0x03, 0x0003, 0x000e },
  { 0x00, 0x02, 0, 0x03, 0x0003, 0x0012 },
  { 0x00, 0x03, 0, 0x03, 0x0003, 0x0016 },
  { 0x00, 0x03, 0, 0x03, 0x0003, 0x001e },
  { 0x00, 0x04, 0, 0x03, 0x0003, 0x0026 },
  { 0x00, 0x04, 0, 0x03, 0x0003, 0x0036 },
  { 0x00, 0x01, 0, 0x03, 0x0004, 0x000a },
  { 0x00, 0x01, 0, 0x03, 0x0004, 0x000c },
  { 0x00, 0x02, 0, 0x03, 0x0004, 0x000e },
  { 0x00, 0x02, 0, 0x03, 0x0004, 0x0012 },
  { 0x00, 0x03, 0, 0x03, 0x0004, 0x0016 },
  { 0x00, 0x03, 0, 0x03, 0x0004, 0x001e },
  { 0x00, 0x04, 0, 0x03, 0x0004, 0x0026 },
  { 0x00, 0x04, 0, 0x03, 0x0004, 0x0036 },
  { 0x00, 0x01, 0, 0x03, 0x0005, 0x000a },
  { 0x00, 0x01, 0, 0x03, 0x0005, 0x000c },
  { 0x00, 0x02, 0, 0x03, 0x0005, 0x000e },
  { 0x00, 0x02, 0, 0x03, 0x0005, 0x0012 },
  { 0x00, 0x03, 0, 0x03, 0x0005, 0x0016 },
  { 0x00, 0x03, 0, 0x03, 0x0005, 0x001e },
  { 0x00, 0x04, 0, 0x03, 0x0005, 0x0026 },
  { 0x00, 0x04, 0, 0x03, 0x0005, 0x0036 },
  { 0x01, 0x01, 0, 0x03, 0x0006, 0x000a },
  { 0x01, 0x01, 0, 0x03, 0x0006, 0x000c },
  { 0x01, 0x02, 0, 0x03, 0x0006, 0x000e },
  { 0x01, 0x02, 0, 0x03, 0x0006, 0x0012 },
  { 0x01, 0x03, 0, 0x03, 0x0006, 0x0016 },
  { 0x01, 0x03, 0, 0x03, 0x0006, 0x001e },
  { 0x01, 0x04, 0, 0x03, 0x0006, 0x0026 },
  { 0x01, 0x04, 0, 0x03, 0x0006, 0x0036 },
  { 0x01, 0x01, 0, 0x03, 0x0008, 0x000a },
  { 0x01, 0x01, 0, 0x03, 0x0008, 0x000c },
  { 0x01, 0x02, 0, 0x03, 0x0008, 0x000e },
  { 0x01, 0x02, 0, 0x03, 0x0008, 0x0012 },
  { 0x01, 0x03, 0, 0x03, 0x0008, 0x0016 },
  { 0x01, 0x03, 0, 0x03, 0x0008, 0x001e },
  { 0x01, 0x04, 0, 0x03, 0x0008, 0x0026 },
  { 0x01, 0x04, 0, 0x03, 0x0008, 0x0036 },
  { 0x00, 0x00, -1, 0x00, 0x0000, 0x0002 },
  { 0x00, 0x00, -1, 0x01, 0x0000, 0x0003 },
  { 0x00, 0x00, -1, 0x02, 0x0000, 0x0004 },
  { 0x00, 0x00, -1, 0x03, 0x0000, 0x0005 },
  { 0x00, 0x00, -1, 0x03, 0x0000, 0x0006 },
  { 0x00, 0x00, -1, 0x03, 0x0000, 0x0007 },
  { 0x00, 0x00, -1, 0x03, 0x0000, 0x0008 },
  { 0x00, 0x00, -1, 0x03, 0x0000, 0x0009 },
  { 0x00, 0x00, -1, 0x00, 0x0001, 0x0002 },
  { 0x00, 0x00, -1, 0x01, 0x0001, 0x0003 },
  { 0x00, 0x00, -1, 0x02, 0x0001, 0x0004 },
  { 0x00, 0x00, -1, 0x03, 0x0001, 0x0005 },
  { 0x00, 0x00, -1, 0x03, 0x0001, 0x0006 },
  { 0x00, 0x00, -1, 0x03, 0x0001, 0x0007 },
  { 0x00, 0x00, -1, 0x03, 0x0001, 0x0008 },
  { 0x00, 0x00, -1, 0x03, 0x0001, 0x0009 },
  { 0x00, 0x00, -1, 0x00, 0x0002, 0x0002 },
  { 0x00, 0x00, -1, 0x01, 0x0002, 0x0003 },
  { 0x00, 0x00, -1, 0x02, 0x0002, 0x0004 },
  { 0x00, 0x00, -1, 0x03, 0x0002, 0x0005 },
  { 0x00, 0x00, -1, 0x03, 0x0002, 0x0006 },
  { 0x00, 0x00, -1, 0x03, 0x0002, 0x0007 },
  { 0x00, 0x00, -1, 0x03, 0x0002, 0x0008 },
  { 0x00, 0x00, -1, 0x03, 0x0002, 0x0009 },
  { 0x00, 0x00, -1, 0x00, 0x0003, 0x0002 },
  { 0x00, 0x00, -1, 0x01, 0x0003, 0x0003 },
  { 0x00, 0x00, -1, 0x02, 0x0003, 0x0004 },
  { 0x00, 0x00, -1, 0x03, 0x0003, 0x0005 },
  { 0x00, 0x00, -1, 0x03, 0x0003, 0x0006 },
  { 0x00, 0x00, -1, 0x03, 0x0003, 0x0007 },
  { 0x00, 0x00, -1, 0x03, 0x0003, 0x0008 },
  { 0x00, 0x00, -1, 0x03, 0x0003, 0x0009 },
  { 0x00, 0x00, -1, 0x00, 0x0004, 0x0002 },
  { 0x00, 0x00, -1, 0x01, 0x0004, 0x0003 },
  { 0x00, 0x00, -1, 0x02, 0x0004, 0x0004 },
  { 0x00, 0x00, -1, 0x03, 0x0004, 0x0005 },
  { 0x00, 0x00, -1, 0x03, 0x0004, 0x0006 },
  { 0x00, 0x00, -1, 0x03, 0x0004, 0x0007 },
  { 0x00, 0x00, -1, 0x03, 0x0004, 0x0008 },
  { 0x00, 0x00, -1, 0x03, 0x0004, 0x0009 },
  { 0x00, 0x00, -1, 0x00, 0x0005, 0x0002 },
  { 0x00, 0x00, -1, 0x01, 0x0005, 0x0003 },
  { 0x00, 0x00, -1, 0x02, 0x0005, 0x0004 },
  { 0x00, 0x00, -1, 0x03, 0x0005, 0x0005 },
  { 0x00, 0x00, -1, 0x03, 0x0005, 0x0006 },
  { 0x00, 0x00, -1, 0x03, 0x0005, 0x0007 },
  { 0x00, 0x00, -1, 0x03, 0x0005, 0x0008 },
  { 0x00, 0x00, -1, 0x03, 0x0005, 0x0009 },
  { 0x01, 0x00, -1, 0x00, 0x0006, 0x0002 },
  { 0x01, 0x00, -1, 0x01, 0x0006, 0x0003 },
  { 0x01, 0x00, -1, 0x02, 0x0006, 0x0004 },
  { 0x01, 0x00, -1, 0x03, 0x0006, 0x0005 },
  { 0x01, 0x00, -1, 0x03, 0x0006, 0x0006 },
  { 0x01, 0x00, -1, 0x03, 0x0006, 0x0007 },
  { 0x01, 0x00, -1, 0x03, 0x0006, 0x0008 },
  { 0x01, 0x00, -1, 0x03, 0x0006, 0x0009 },
  { 0x01, 0x00, -1, 0x00, 0x0008, 0x0002 },
  { 0x01, 0x00, -1, 0x01, 0x0008, 0x0003 },
  { 0x01, 0x00, -1, 0x02, 0x0008, 0x0004 },
  { 0x01, 0x00, -1, 0x03, 0x0008, 0x0005 },
  { 0x01, 0x00, -1, 0x03, 0x0008, 0x0006 },
  { 0x01, 0x00, -1, 0x03, 0x0008, 0x0007 },
  { 0x01, 0x00, -1, 0x03, 0x0008, 0x0008 },
  { 0x01, 0x00, -1, 0x03, 0x0008, 0x0009 },
  { 0x00, 0x01, -1, 0x03, 0x0000, 0x000a },
  { 0x00, 0x01, -1, 0x03, 0x0000, 0x000c },
  { 0x00, 0x02, -1, 0x03, 0x0000, 0x000e },
  { 0x00, 0x02, -1, 0x03, 0x0000, 0x0012 },
  { 0x00, 0x03, -1, 0x03, 0x0000, 0x0016 },
  { 0x00, 0x03, -1, 0x03, 0x0000, 0x001e },
  { 0x00, 0x04, -1, 0x03, 0x0000, 0x0026 },
  { 0x00, 0x04, -1, 0x03, 0x0000, 0x0036 },
  { 0x00, 0x01, -1, 0x03, 0x0001, 0x000a },
  { 0x00, 0x01, -1, 0x03, 0x0001, 0x000c },
  { 0x00, 0x02, -1, 0x03, 0x0001, 0x000e },
  { 0x00, 0x02, -1, 0x03, 0x0001, 0x0012 },
  { 0x00, 0x03, -1, 0x03, 0x0001, 0x0016 },
  { 0x00, 0x03, -1, 0x03, 0x0001, 0x001e },
  { 0x00, 0x04, -1, 0x03, 0x0001, 0x0026 },
  { 0x00, 0x04, -1, 0x03, 0x0001, 0x0036 },
  { 0x00, 0x01, -1, 0x03, 0x0002, 0x000a },
  { 0x00, 0x01, -1, 0x03, 0x0002, 0x000c },
  { 0x00, 0x02, -1, 0x03, 0x0002, 0x000e },
  { 0x00, 0x02, -1, 0x03, 0x0002, 0x0012 },
  { 0x00, 0x03, -1, 0x03, 0x0002, 0x0016 },
  { 0x00, 0x03, -1, 0x03, 0x0002, 0x001e },
  { 0x00, 0x04, -1, 0x03, 0x0002, 0x0026 },
  { 0x00, 0x04, -1, 0x03, 0x0002, 0x0036 },
  { 0x00, 0x01, -1, 0x03, 0x0003, 0x000a },
  { 0x00, 0x01, -1, 0x03, 0x0003, 0x000c },
  { 0x00, 0x02, -1, 0x03, 0x0003, 0x000e },
  { 0x00, 0x02, -1, 0x03, 0x0003, 0x0012 },
  { 0x00, 0x03, -1, 0x03, 0x0003, 0x0016 },
  { 0x00, 0x03, -1, 0x03, 0x0003, 0x001e },
  { 0x00, 0x04, -1, 0x03, 0x0003, 0x0026 },
  { 0x00, 0x04, -1, 0x03, 0x0003, 0x0036 },
  { 0x00, 0x01, -1, 0x03, 0x0004, 0x000a },
  { 0x00, 0x01, -1, 0x03, 0x0004, 0x000c },
  { 0x00, 0x02, -1, 0x03, 0x0004, 0x000e },
  { 0x00, 0x02, -1, 0x03, 0x0004, 0x0012 },
  { 0x00, 0x03, -1, 0x03, 0x0004, 0x0016 },
  { 0x00, 0x03, -1, 0x03, 0x0004, 0x001e },
  { 0x00, 0x04, -1, 0x03, 0x0004, 0x0026 },
  { 0x00, 0x04, -1, 0x03, 0x0004, 0x0036 },
  { 0x00, 0x01, -1, 0x03, 0x0005, 0x000a },
  { 0x00, 0x01, -1, 0x03, 0x0005, 0x000c },
  { 0x00, 0x02, -1, 0x03, 0x0005, 0x000e },
  { 0x00, 0x02, -1, 0x03, 0x0005, 0x0012 },
  { 0x00, 0x03, -1, 0x03, 0x0005, 0x0016 },
  { 0x00, 0x03, -1, 0x03, 0x0005, 0x001e },
  { 0x00, 0x04, -1, 0x03, 0x0005, 0x0026 },
  { 0x00, 0x04, -1, 0x03, 0x0005, 0x0036 },
  { 0x01, 0x01, -1, 0x03, 0x0006, 0x000a },
  { 0x01, 0x01, -1, 0x03, 0x0006, 0x000c },
  { 0x01, 0x02, -1, 0x03, 0x0006, 0x000e },
  { 0x01, 0x02, -1, 0x03, 0x0006, 0x0012 },
  { 0x01, 0x03, -1, 0x03, 0x0006, 0x0016 },
  { 0x01, 0x03, -1, 0x03, 0x0006, 0x001e },
  { 0x01, 0x04, -1, 0x03, 0x0006, 0x0026 },
  { 0x01, 0x04, -1, 0x03, 0x0006, 0x0036 },
  { 0x01, 0x01, -1, 0x03, 0x0008, 0x000a },
  { 0x01, 0x01, -1, 0x03, 0x0008, 0x000c },
  { 0x01, 0x02, -1, 0x03, 0x0008, 0x000e },
  { 0x01, 0x02, -1, 0x03, 0x0008, 0x0012 },
  { 0x01, 0x03, -1, 0x03, 0x0008, 0x0016 },
  { 0x01, 0x03, -1, 0x03, 0x0008, 0x001e },
  { 0x01, 0x04, -1, 0x03, 0x0008, 0x0026 },
  { 0x01, 0x04, -1, 0x03, 0x0008, 0x0036 },
  { 0x02, 0x00, -1, 0x00, 0x000a, 0x0002 },
  { 0x02, 0x00, -1, 0x01, 0x000a, 0x0003 },
  { 0x02, 0x00, -1, 0x02, 0x000a, 0x0004 },
  { 0x02, 0x00, -1, 0x03, 0x000a, 0x0005 },
  { 0x02, 0x00, -1, 0x03, 0x000a, 0x0006 },
  { 0x02, 0x00, -1, 0x03, 0x000a, 0x0007 },
  { 0x02, 0x00, -1, 0x03, 0x000a, 0x0008 },
  { 0x02, 0x00, -1, 0x03, 0x000a, 0x0009 },
  { 0x02, 0x00, -1, 0x00, 0x000e, 0x0002 },
  { 0x02, 0x00, -1, 0x01, 0x000e, 0x0003 },
  { 0x02, 0x00, -1, 0x02, 0x000e, 0x0004 },
  { 0x02, 0x00, -1, 0x03, 0x000e, 0x0005 },
  { 0x02, 0x00, -1, 0x03, 0x000e, 0x0006 },
  { 0x02, 0x00, -1, 0x03, 0x000e, 0x0007 },
  { 0x02, 0x00, -1, 0x03, 0x000e, 0x0008 },
  { 0x02, 0x00, -1, 0x03, 0x000e, 0x0009 },
  { 0x03, 0x00, -1, 0x00, 0x0012, 0x0002 },
  { 0x03, 0x00, -1, 0x01, 0x0012, 0x0003 },
  { 0x03, 0x00, -1, 0x02, 0x0012, 0x0004 },
  { 0x03, 0x00, -1, 0x03, 0x0012, 0x0005 },
  { 0x03, 0x00, -1, 0x03, 0x0012, 0x0006 },
  { 0x03, 0x00, -1, 0x03, 0x0012, 0x0007 },
  { 0x03, 0x00, -1, 0x03, 0x0012, 0x0008 },
  { 0x03, 0x00, -1, 0x03, 0x0012, 0x0009 },
  { 0x03, 0x00, -1, 0x00, 0x001a, 0x0002 },
  { 0x03, 0x00, -1, 0x01, 0x001a, 0x0003 },
  { 0x03, 0x00, -1, 0x02, 0x001a, 0x0004 },
  { 0x03, 0x00, -1, 0x03, 0x001a, 0x0005 },
  { 0x03, 0x00, -1, 0x03, 0x001a, 0x0006 },
  { 0x03, 0x00, -1, 0x03, 0x001a, 0x0007 },
  { 0x03, 0x00, -1, 0x03, 0x001a, 0x0008 },
  { 0x03, 0x00, -1, 0x03, 0x001a, 0x0009 },
  { 0x04, 0x00, -1, 0x00, 0x0022, 0x0002 },
  { 0x04, 0x00, -1, 0x01, 0x0022, 0x0003 },
  { 0x04, 0x00, -1, 0x02, 0x0022, 0x0004 },
  { 0x04, 0x00, -1, 0x03, 0x0022, 0x0005 },
  { 0x04, 0x00, -1, 0x03, 0x0022, 0x0006 },
  { 0x04, 0x00, -1, 0x03, 0x0022, 0x0007 },
  { 0x04, 0x00, -1, 0x03, 0x0022, 0x0008 },
  { 0x04, 0x00, -1, 0x03, 0x0022, 0x0009 },
  { 0x04, 0x00, -1, 0x00, 0x0032, 0x0002 },
  { 0x04, 0x00, -1, 0x01, 0x0032, 0x0003 },
  { 0x04, 0x00, -1, 0x02, 0x0032, 0x0004 },
  { 0x04, 0x00, -1, 0x03, 0x0032, 0x0005 },
  { 0x04, 0x00, -1, 0x03, 0x0032, 0x0006 },
  { 0x04, 0x00, -1, 0x03, 0x0032, 0x0007 },
  { 0x04, 0x00, -1, 0x03, 0x0032, 0x0008 },
  { 0x04, 0x00, -1, 0x03, 0x0032, 0x0009 },
  { 0x05, 0x00, -1, 0x00, 0x0042, 0x0002 },
  { 0x05, 0x00, -1, 0x01, 0x0042, 0x0003 },
  { 0x05, 0x00, -1, 0x02, 0x0042, 0x0004 },
  { 0x05, 0x00, -1, 0x03, 0x0042, 0x0005 },
  { 0x05, 0x00, -1, 0x03, 0x0042, 0x0006 },
  { 0x05, 0x00, -1, 0x03, 0x0042, 0x0007 },
  { 0x05, 0x00, -1, 0x03, 0x0042, 0x0008 },
  { 0x05, 0x00, -1, 0x03, 0x0042, 0x0009 },
  { 0x05, 0x00, -1, 0x00, 0x0062, 0x0002 },
  { 0x05, 0x00, -1, 0x01, 0x0062, 0x0003 },
  { 0x05, 0x00, -1, 0x02, 0x0062, 0x0004 },
  { 0x05, 0x00, -1, 0x03, 0x0062, 0x0005 },
  { 0x05, 0x00, -1, 0x03, 0x0062, 0x0006 },
  { 0x05, 0x00, -1, 0x03, 0x0062, 0x0007 },
  { 0x05, 0x00, -1, 0x03, 0x0062, 0x0008 },
  { 0x05, 0x00, -1, 0x03, 0x0062, 0x0009 },
  { 0x02, 0x01, -1, 0x03, 0x000a, 0x000a },
  { 0x02, 0x01, -1, 0x03, 0x000a, 0x000c },
  { 0x02, 0x02, -1, 0x03, 0x000a, 0x000e },
  { 0x02, 0x02, -1, 0x03, 0x000a, 0x0012 },
  { 0x02, 0x03, -1, 0x03, 0x000a, 0x0016 },
  { 0x02, 0x03, -1, 0x03, 0x000a, 0x001e },
  { 0x02, 0x04, -1, 0x03, 0x000a, 0x0026 },
  { 0x02, 0x04, -1, 0x03, 0x000a, 0x0036 },
  { 0x02, 0x01, -1, 0x03, 0x000e, 0x000a },
  { 0x02, 0x01, -1, 0x03, 0x000e, 0x000c },
  { 0x02, 0x02, -1, 0x03, 0x000e, 0x000e },
  { 0x02, 0x02, -1, 0x03, 0x000e, 0x0012 },
  { 0x02, 0x03, -1, 0x03, 0x000e, 0x0016 },
  { 0x02, 0x03, -1, 0x03, 0x000e, 0x001e },
  { 0x02, 0x04, -1, 0x03, 0x000e, 0x0026 },
  { 0x02, 0x04, -1, 0x03, 0x000e, 0x0036 },
  { 0x03, 0x01, -1, 0x03, 0x0012, 0x000a },
  { 0x03, 0x01, -1, 0x03, 0x0012, 0x000c },
  { 0x03, 0x02, -1, 0x03, 0x0012, 0x000e },
  { 0x03, 0x02, -1, 0x03, 0x0012, 0x0012 },
  { 0x03, 0x03, -1, 0x03, 0x0012, 0x0016 },
  { 0x03, 0x03, -1, 0x03, 0x0012, 0x001e },
  { 0x03, 0x04, -1, 0x03, 0x0012, 0x0026 },
  { 0x03, 0x04, -1, 0x03, 0x0012, 0x0036 },
  { 0x03, 0x01, -1, 0x03, 0x001a, 0x000a },
  { 0x03, 0x01, -1, 0x03, 0x001a, 0x000c },
  { 0x03, 0x02, -1, 0x03, 0x001a, 0x000e },
  { 0x03, 0x02, -1, 0x03, 0x001a, 0x0012 },
  { 0x03, 0x03, -1, 0x03, 0x001a, 0x0016 },
  { 0x03, 0x03, -1, 0x03, 0x001a, 0x001e },
  { 0x03, 0x04, -1, 0x03, 0x001a, 0x0026 },
  { 0x03, 0x04, -1, 0x03, 0x001a, 0x0036 },
  { 0x04, 0x01, -1, 0x03, 0x0022, 0x000a },
  { 0x04, 0x01, -1, 0x03, 0x0022, 0x000c },
  { 0x04, 0x02, -1, 0x03, 0x0022, 0x000e },
  { 0x04, 0x02, -1, 0x03, 0x0022, 0x0012 },
  { 0x04, 0x03, -1, 0x03, 0x0022, 0x0016 },
  { 0x04, 0x03, -1, 0x03, 0x0022, 0x001e },
  { 0x04, 0x04, -1, 0x03, 0x0022, 0x0026 },
  { 0x04, 0x04, -1, 0x03, 0x0022, 0x0036 },
  { 0x04, 0x01, -1, 0x03, 0x0032, 0x000a },
  { 0x04, 0x01, -1, 0x03, 0x0032, 0x000c },
  { 0x04, 0x02, -1, 0x03, 0x0032, 0x000e },
  { 0x04, 0x02, -1, 0x03, 0x0032, 0x0012 },
  { 0x04, 0x03, -1, 0x03, 0x0032, 0x0016 },
  { 0x04, 0x03, -1, 0x03, 0x0032, 0x001e },
  { 0x04, 0x04, -1, 0x03, 0x0032, 0x0026 },
  { 0x04, 0x04, -1, 0x03, 0x0032, 0x0036 },
  { 0x05, 0x01, -1, 0x03, 0x0042, 0x000a },
  { 0x05, 0x01, -1, 0x03, 0x0042, 0x000c },
  { 0x05, 0x02, -1, 0x03, 0x0042, 0x000e },
  { 0x05, 0x02, -1, 0x03, 0x0042, 0x0012 },
  { 0x05, 0x03, -1, 0x03, 0x0042, 0x0016 },
  { 0x05, 0x03, -1, 0x03, 0x0042, 0x001e },
  { 0x05, 0x04, -1, 0x03, 0x0042, 0x0026 },
  { 0x05, 0x04, -1, 0x03, 0x0042, 0x0036 },
  { 0x05, 0x01, -1, 0x03, 0x0062, 0x000a },
  { 0x05, 0x01, -1, 0x03, 0x0062, 0x000c },
  { 0x05, 0x02, -1, 0x03, 0x0062, 0x000e },
  { 0x05, 0x02, -1, 0x03, 0x0062, 0x0012 },
  { 0x05, 0x03, -1, 0x03, 0x0062, 0x0016 },
  { 0x05, 0x03, -1, 0x03, 0x0062, 0x001e },
  { 0x05, 0x04, -1, 0x03, 0x0062, 0x0026 },
  { 0x05, 0x04, -1, 0x03, 0x0062, 0x0036 },
  { 0x00, 0x05, -1, 0x03, 0x0000, 0x0046 },
  { 0x00, 0x05, -1, 0x03, 0x0000, 0x0066 },
  { 0x00, 0x06, -1, 0x03, 0x0000, 0x0086 },
  { 0x00, 0x07, -1, 0x03, 0x0000, 0x00c6 },
  { 0x00, 0x08, -1, 0x03, 0x0000, 0x0146 },
  { 0x00, 0x09, -1, 0x03, 0x0000, 0x0246 },
  { 0x00, 0x0a, -1, 0x03, 0x0000, 0x0446 },
  { 0x00, 0x18, -1, 0x03, 0x0000, 0x0846 },
  { 0x00, 0x05, -1, 0x03, 0x0001, 0x0046 },
  { 0x00, 0x05, -1, 0x03, 0x0001, 0x0066 },
  { 0x00, 0x06, -1, 0x03, 0x0001, 0x0086 },
  { 0x00, 0x07, -1, 0x03, 0x0001, 0x00c6 },
  { 0x00, 0x08, -1, 0x03, 0x0001, 0x0146 },
  { 0x00, 0x09, -1, 0x03, 0x0001, 0x0246 },
  { 0x00, 0x0a, -1, 0x03, 0x0001, 0x0446 },
  { 0x00, 0x18, -1, 0x03, 0x0001, 0x0846 },
  { 0x00, 0x05, -1, 0x03, 0x0002, 0x0046 },
  { 0x00, 0x05, -1, 0x03, 0x0002, 0x0066 },
  { 0x00, 0x06, -1, 0x03, 0x0002, 0x0086 },
  { 0x00, 0x07, -1, 0x03, 0x0002, 0x00c6 },
  { 0x00, 0x08, -1, 0x03, 0x0002, 0x0146 },
  { 0x00, 0x09, -1, 0x03, 0x0002, 0x0246 },
  { 0x00, 0x0a, -1, 0x03, 0x0002, 0x0446 },
  { 0x00, 0x18, -1, 0x03, 0x0002, 0x0846 },
  { 0x00, 0x05, -1, 0x03, 0x0003, 0x0046 },
  { 0x00, 0x05, -1, 0x03, 0x0003, 0x0066 },
  { 0x00, 0x06, -1, 0x03, 0x0003, 0x0086 },
  { 0x00, 0x07, -1, 0x03, 0x0003, 0x00c6 },
  { 0x00, 0x08, -1, 0x03, 0x0003, 0x0146 },
  { 0x00, 0x09, -1, 0x03, 0x0003, 0x0246 },
  { 0x00, 0x0a, -1, 0x03, 0x0003, 0x0446 },
  { 0x00, 0x18, -1, 0x03, 0x0003, 0x0846 },
  { 0x00, 0x05, -1, 0x03, 0x0004, 0x0046 },
  { 0x00, 0x05, -1, 0x03, 0x0004, 0x0066 },
  { 0x00, 0x06, -1, 0x03, 0x0004, 0x0086 },
  { 0x00, 0x07, -1, 0x03, 0x0004, 0x00c6 },
  { 0x00, 0x08, -1, 0x03, 0x0004, 0x0146 },
  { 0x00, 0x09, -1, 0x03, 0x0004, 0x0246 },
  { 0x00, 0x0a, -1, 0x03, 0x0004, 0x0446 },
  { 0x00, 0x18, -1, 0x03, 0x0004, 0x0846 },
  { 0x00, 0x05, -1, 0x03, 0x0005, 0x0046 },
  { 0x00, 0x05, -1, 0x03, 0x0005, 0x0066 },
  { 0x00, 0x06, -1, 0x03, 0x0005, 0x0086 },
  { 0x00, 0x07, -1, 0x03, 0x0005, 0x00c6 },
  { 0x00, 0x08, -1, 0x03, 0x0005, 0x0146 },
  { 0x00, 0x09, -1, 0x03, 0x0005, 0x0246 },
  { 0x00, 0x0a, -1, 0x03, 0x0005, 0x0446 },
  { 0x00, 0x18, -1, 0x03, 0x0005, 0x0846 },
  { 0x01, 0x05, -1, 0x03, 0x0006, 0x0046 },
  { 0x01, 0x05, -1, 0x03, 0x0006, 0x0066 },
  { 0x01, 0x06, -1, 0x03, 0x0006, 0x0086 },
  { 0x01, 0x07, -1, 0x03, 0x0006, 0x00c6 },
  { 0x01, 0x08, -1, 0x03, 0x0006, 0x0146 },
  { 0x01, 0x09, -1, 0x03, 0x0006, 0x0246 },
  { 0x01, 0x0a, -1, 0x03, 0x0006, 0x0446 },
  { 0x01, 0x18, -1, 0x03, 0x0006, 0x0846 },
  { 0x01, 0x05, -1, 0x03, 0x0008, 0x0046 },
  { 0x01, 0x05, -1, 0x03, 0x0008, 0x0066 },
  { 0x01, 0x06, -1, 0x03, 0x0008, 0x0086 },
  { 0x01, 0x07, -1, 0x03, 0x0008, 0x00c6 },
  { 0x01, 0x08, -1, 0x03, 0x0008, 0x0146 },
  { 0x01, 0x09, -1, 0x03, 0x0008, 0x0246 },
  { 0x01, 0x0a, -1, 0x03, 0x0008, 0x0446 },
  { 0x01, 0x18, -1, 0x03, 0x0008, 0x0846 },
  { 0x06, 0x00, -1, 0x00, 0x0082, 0x0002 },
  { 0x06, 0x00, -1, 0x01, 0x0082, 0x0003 },
  { 0x06, 0x00, -1, 0x02, 0x0082, 0x0004 },
  { 0x06, 0x00, -1, 0x03, 0x0082, 0x0005 },
  { 0x06, 0x00, -1, 0x03, 0x0082, 0x0006 },
  { 0x06, 0x00, -1, 0x03, 0x0082, 0x0007 },
  { 0x06, 0x00, -1, 0x03, 0x0082, 0x0008 },
  { 0x06, 0x00, -1, 0x03, 0x0082, 0x0009 },
  { 0x07, 0x00, -1, 0x00, 0x00c2, 0x0002 },
  { 0x07, 0x00, -1, 0x01, 0x00c2, 0x0003 },
  { 0x07, 0x00, -1, 0x02, 0x00c2, 0x0004 },
  { 0x07, 0x00, -1, 0x03, 0x00c2, 0x0005 },
  { 0x07, 0x00, -1, 0x03, 0x00c2, 0x0006 },
  { 0x07, 0x00, -1, 0x03, 0x00c2, 0x0007 },
  { 0x07, 0x00, -1, 0x03, 0x00c2, 0x0008 },
  { 0x07, 0x00, -1, 0x03, 0x00c2, 0x0009 },
  { 0x08, 0x00, -1, 0x00, 0x0142, 0x0002 },
  { 0x08, 0x00, -1, 0x01, 0x0142, 0x0003 },
  { 0x08, 0x00, -1, 0x02, 0x0142, 0x0004 },
  { 0x08, 0x00, -1, 0x03, 0x0142, 0x0005 },
  { 0x08, 0x00, -1, 0x03, 0x0142, 0x0006 },
  { 0x08, 0x00, -1, 0x03, 0x0142, 0x0007 },
  { 0x08, 0x00, -1, 0x03, 0x0142, 0x0008 },
  { 0x08, 0x00, -1, 0x03, 0x0142, 0x0009 },
  { 0x09, 0x00, -1, 0x00, 0x0242, 0x0002 },
  { 0x09, 0x00, -1, 0x01, 0x0242, 0x0003 },
  { 0x09, 0x00, -1, 0x02, 0x0242, 0x0004 },
  { 0x09, 0x00, -1, 0x03, 0x0242, 0x0005 },
  { 0x09, 0x00, -1, 0x03, 0x0242, 0x0006 },
  { 0x09, 0x00, -1, 0x03, 0x0242, 0x0007 },
  { 0x09, 0x00, -1, 0x03, 0x0242, 0x0008 },
  { 0x09, 0x00, -1, 0x03, 0x0242, 0x0009 },
  { 0x0a, 0x00, -1, 0x00, 0x0442, 0x0002 },
  { 0x0a, 0x00, -1, 0x01, 0x0442, 0x0003 },
  { 0x0a, 0x00, -1, 0x02, 0x0442, 0x0004 },
  { 0x0a, 0x00, -1, 0x03, 0x0442, 0x0005 },
  { 0x0a, 0x00, -1, 0x03, 0x0442, 0x0006 },
  { 0x0a, 0x00, -1, 0x03, 0x0442, 0x0007 },
  { 0x0a, 0x00, -1, 0x03, 0x0442, 0x0008 },
  { 0x0a, 0x00, -1, 0x03, 0x0442, 0x0009 },
  { 0x0c, 0x00, -1, 0x00, 0x0842, 0x0002 },
  { 0x0c, 0x00, -1, 0x01, 0x0842, 0x0003 },
  { 0x0c, 0x00, -1, 0x02, 0x0842, 0x0004 },
  { 0x0c, 0x00, -1, 0x03, 0x0842, 0x0005 },
  { 0x0c, 0x00, -1, 0x03, 0x0842, 0x0006 },
  { 0x0c, 0x00, -1, 0x03, 0x0842, 0x0007 },
  { 0x0c, 0x00, -1, 0x03, 0x0842, 0x0008 },
  { 0x0c, 0x00, -1, 0x03, 0x0842, 0x0009 },
  { 0x0e, 0x00, -1, 0x00, 0x1842, 0x0002 },
  { 0x0e, 0x00, -1, 0x01, 0x1842, 0x0003 },
  { 0x0e, 0x00, -1, 0x02, 0x1842, 0x0004 },
  { 0x0e, 0x00, -1, 0x03, 0x1842, 0x0005 },
  { 0x0e, 0x00, -1, 0x03, 0x1842, 0x0006 },
  { 0x0e, 0x00, -1, 0x03, 0x1842, 0x0007 },
  { 0x0e, 0x00, -1, 0x03, 0x1842, 0x0008 },
  { 0x0e, 0x00, -1, 0x03, 0x1842, 0x0009 },
  { 0x18, 0x00, -1, 0x00, 0x5842, 0x0002 },
  { 0x18, 0x00, -1, 0x01, 0x5842, 0x0003 },
  { 0x18, 0x00, -1, 0x02, 0x5842, 0x0004 },
  { 0x18, 0x00, -1, 0x03, 0x5842, 0x0005 },
  { 0x18, 0x00, -1, 0x03, 0x5842, 0x0006 },
  { 0x18, 0x00, -1, 0x03, 0x5842, 0x0007 },
  { 0x18, 0x00, -1, 0x03, 0x5842, 0x0008 },
  { 0x18, 0x00, -1, 0x03, 0x5842, 0x0009 },
  { 0x02, 0x05, -1, 0x03, 0x000a, 0x0046 },
  { 0x02, 0x05, -1, 0x03, 0x000a, 0x0066 },
  { 0x02, 0x06, -1, 0x03, 0x000a, 0x0086 },
  { 0x02, 0x07, -1, 0x03, 0x000a, 0x00c6 },
  { 0x02, 0x08, -1, 0x03, 0x000a, 0x0146 },
  { 0x02, 0x09, -1, 0x03, 0x000a, 0x0246 },
  { 0x02, 0x0a, -1, 0x03, 0x000a, 0x0446 },
  { 0x02, 0x18, -1, 0x03, 0x000a, 0x0846 },
  { 0x02, 0x05, -1, 0x03, 0x000e, 0x0046 },
  { 0x02, 0x05, -1, 0x03, 0x000e, 0x0066 },
  { 0x02, 0x06, -1, 0x03, 0x000e, 0x0086 },
  { 0x02, 0x07, -1, 0x03, 0x000e, 0x00c6 },
  { 0x02, 0x08, -1, 0x03, 0x000e, 0x0146 },
  { 0x02, 0x09, -1, 0x03, 0x000e, 0x0246 },
  { 0x02, 0x0a, -1, 0x03, 0x000e, 0x0446 },
  { 0x02, 0x18, -1, 0x03, 0x000e, 0x0846 },
  { 0x03, 0x05, -1, 0x03, 0x0012, 0x0046 },
  { 0x03, 0x05, -1, 0x03, 0x0012, 0x0066 },
  { 0x03, 0x06, -1, 0x03, 0x0012, 0x0086 },
  { 0x03, 0x07, -1, 0x03, 0x0012, 0x00c6 },
  { 0x03, 0x08, -1, 0x03, 0x0012, 0x0146 },
  { 0x03, 0x09, -1, 0x03, 0x0012, 0x0246 },
  { 0x03, 0x0a, -1, 0x03, 0x0012, 0x0446 },
  { 0x03, 0x18, -1, 0x03, 0x0012, 0x0846 },
  { 0x03, 0x05, -1, 0x03, 0x001a, 0x0046 },
  { 0x03, 0x05, -1, 0x03, 0x001a, 0x0066 },
  { 0x03, 0x06, -1, 0x03, 0x001a, 0x0086 },
  { 0x03, 0x07, -1, 0x03, 0x001a, 0x00c6 },
  { 0x03, 0x08, -1, 0x03, 0x001a, 0x0146 },
  { 0x03, 0x09, -1, 0x03, 0x001a, 0x0246 },
  { 0x03, 0x0a, -1, 0x03, 0x001a, 0x0446 },
  { 0x03, 0x18, -1, 0x03, 0x001a, 0x0846 },
  { 0x04, 0x05, -1, 0x03, 0x0022, 0x0046 },
  { 0x04, 0x05, -1, 0x03, 0x0022, 0x0066 },
  { 0x04, 0x06, -1, 0x03, 0x0022, 0x0086 },
  { 0x04, 0x07, -1, 0x03, 0x0022, 0x00c6 },
  { 0x04, 0x08, -1, 0x03, 0x0022, 0x0146 },
  { 0x04, 0x09, -1, 0x03, 0x0022, 0x0246 },
  { 0x04, 0x0a, -1, 0x03, 0x0022, 0x0446 },
  { 0x04, 0x18, -1, 0x03, 0x0022, 0x0846 },
  { 0x04, 0x05, -1, 0x03, 0x0032, 0x0046 },
  { 0x04, 0x05, -1, 0x03, 0x0032, 0x0066 },
  { 0x04, 0x06, -1, 0x03, 0x0032, 0x0086 },
  { 0x04, 0x07, -1, 0x03, 0x0032, 0x00c6 },
  { 0x04, 0x08, -1, 0x03, 0x0032, 0x0146 },
  { 0x04, 0x09, -1, 0x03, 0x0032, 0x0246 },
  { 0x04, 0x0a, -1, 0x03, 0x0032, 0x0446 },
  { 0x04, 0x18, -1, 0x03, 0x0032, 0x0846 },
  { 0x05, 0x05, -1, 0x03, 0x0042, 0x0046 },
  { 0x05, 0x05, -1, 0x03, 0x0042, 0x0066 },
  { 0x05, 0x06, -1, 0x03, 0x0042, 0x0086 },
  { 0x05, 0x07, -1, 0x03, 0x0042, 0x00c6 },
  { 0x05, 0x08, -1, 0x03, 0x0042, 0x0146 },
  { 0x05, 0x09, -1, 0x03, 0x0042, 0x0246 },
  { 0x05, 0x0a, -1, 0x03, 0x0042, 0x0446 },
  { 0x05, 0x18, -1, 0x03, 0x0042, 0x0846 },
  { 0x05, 0x05, -1, 0x03, 0x0062, 0x0046 },
  { 0x05, 0x05, -1, 0x03, 0x0062, 0x0066 },
  { 0x05, 0x06, -1, 0x03, 0x0062, 0x0086 },
  { 0x05, 0x07, -1, 0x03, 0x0062, 0x00c6 },
  { 0x05, 0x08, -1, 0x03, 0x0062, 0x0146 },
  { 0x05, 0x09, -1, 0x03, 0x0062, 0x0246 },
  { 0x05, 0x0a, -1, 0x03, 0x0062, 0x0446 },
  { 0x05, 0x18, -1, 0x03, 0x0062, 0x0846 },
  { 0x06, 0x01, -1, 0x03, 0x0082, 0x000a },
  { 0x06, 0x01, -1, 0x03, 0x0082, 0x000c },
  { 0x06, 0x02, -1, 0x03, 0x0082, 0x000e },
  { 0x06, 0x02, -1, 0x03, 0x0082, 0x0012 },
  { 0x06, 0x03, -1, 0x03, 0x0082, 0x0016 },
  { 0x06, 0x03, -1, 0x03, 0x0082, 0x001e },
  { 0x06, 0x04, -1, 0x03, 0x0082, 0x0026 },
  { 0x06, 0x04, -1, 0x03, 0x0082, 0x0036 },
  { 0x07, 0x01, -1, 0x03, 0x00c2, 0x000a },
  { 0x07, 0x01, -1, 0x03, 0x00c2, 0x000c },
  { 0x07, 0x02, -1, 0x03, 0x00c2, 0x000e },
  { 0x07, 0x02, -1, 0x03, 0x00c2, 0x0012 },
  { 0x07, 0x03, -1, 0x03, 0x00c2, 0x0016 },
  { 0x07, 0x03, -1, 0x03, 0x00c2, 0x001e },
  { 0x07, 0x04, -1, 0x03, 0x00c2, 0x0026 },
  { 0x07, 0x04, -1, 0x03, 0x00c2, 0x0036 },
  { 0x08, 0x01, -1, 0x03, 0x0142, 0x000a },
  { 0x08, 0x01, -1, 0x03, 0x0142, 0x000c },
  { 0x08, 0x02, -1, 0x03, 0x0142, 0x000e },
  { 0x08, 0x02, -1, 0x03, 0x0142, 0x0012 },
  { 0x08, 0x03, -1, 0x03, 0x0142, 0x0016 },
  { 0x08, 0x03, -1, 0x03, 0x0142, 0x001e },
  { 0x08, 0x04, -1, 0x03, 0x0142, 0x0026 },
  { 0x08, 0x04, -1, 0x03, 0x0142, 0x0036 },
  { 0x09, 0x01, -1, 0x03, 0x0242, 0x000a },
  { 0x09, 0x01, -1, 0x03, 0x0242, 0x000c },
  { 0x09, 0x02, -1, 0x03, 0x0242, 0x000e },
  { 0x09, 0x02, -1, 0x03, 0x0242, 0x0012 },
  { 0x09, 0x03, -1, 0x03, 0x0242, 0x0016 },
  { 0x09, 0x03, -1, 0x03, 0x0242, 0x001e },
  { 0x09, 0x04, -1, 0x03, 0x0242, 0x0026 },
  { 0x09, 0x04, -1, 0x03, 0x0242, 0x0036 },
  { 0x0a, 0x01, -1, 0x03, 0x0442, 0x000a },
  { 0x0a, 0x01, -1, 0x03, 0x0442, 0x000c },
  { 0x0a, 0x02, -1, 0x03, 0x0442, 0x000e },
  { 0x0a, 0x02, -1, 0x03, 0x0442, 0x0012 },
  { 0x0a, 0x03, -1, 0x03, 0x0442, 0x0016 },
  { 0x0a, 0x03, -1, 0x03, 0x0442, 0x001e },
  { 0x0a, 0x04, -1, 0x03, 0x0442, 0x0026 },
  { 0x0a, 0x04, -1, 0x03, 0x0442, 0x0036 },
  { 0x0c, 0x01, -1, 0x03, 0x0842, 0x000a },
  { 0x0c, 0x01, -1, 0x03, 0x0842, 0x000c },
  { 0x0c, 0x02, -1, 0x03, 0x0842, 0x000e },
  { 0x0c, 0x02, -1, 0x03, 0x0842, 0x0012 },
  { 0x0c, 0x03, -1, 0x03, 0x0842, 0x0016 },
  { 0x0c, 0x03, -1, 0x03, 0x0842, 0x001e },
  { 0x0c, 0x04, -1, 0x03, 0x0842, 0x0026 },
  { 0x0c, 0x04, -1, 0x03, 0x0842, 0x0036 },
  { 0x0e, 0x01, -1, 0x03, 0x1842, 0x000a },
  { 0x0e, 0x01, -1, 0x03, 0x1842, 0x000c },
  { 0x0e, 0x02, -1, 0x03, 0x1842, 0x000e },
  { 0x0e, 0x02, -1, 0x03, 0x1842, 0x0012 },
  { 0x0e, 0x03, -1, 0x03, 0x1842, 0x0016 },
  { 0x0e, 0x03, -1, 0x03, 0x1842, 0x001e },
  { 0x0e, 0x04, -1, 0x03, 0x1842, 0x0026 },
  { 0x0e, 0x04, -1, 0x03, 0x1842, 0x0036 },
  { 0x18, 0x01, -1, 0x03, 0x5842, 0x000a },
  { 0x18, 0x01, -1, 0x03, 0x5842, 0x000c },
  { 0x18, 0x02, -1, 0x03, 0x5842, 0x000e },
  { 0x18, 0x02, -1, 0x03, 0x5842, 0x0012 },
  { 0x18, 0x03, -1, 0x03, 0x5842, 0x0016 },
  { 0x18, 0x03, -1, 0x03, 0x5842, 0x001e },
  { 0x18, 0x04, -1, 0x03, 0x5842, 0x0026 },
  { 0x18, 0x04, -1, 0x03, 0x5842, 0x0036 },
  { 0x06, 0x05, -1, 0x03, 0x0082, 0x0046 },
  { 0x06, 0x05, -1, 0x03, 0x0082, 0x0066 },
  { 0x06, 0x06, -1, 0x03, 0x0082, 0x0086 },
  { 0x06, 0x07, -1, 0x03, 0x0082, 0x00c6 },
  { 0x06, 0x08, -1, 0x03, 0x0082, 0x0146 },
  { 0x06, 0x09, -1, 0x03, 0x0082, 0x0246 },
  { 0x06, 0x0a, -1, 0x03, 0x0082, 0x0446 },
  { 0x06, 0x18, -1, 0x03, 0x0082, 0x0846 },
  { 0x07, 0x05, -1, 0x03, 0x00c2, 0x0046 },
  { 0x07, 0x05, -1, 0x03, 0x00c2, 0x0066 },
  { 0x07, 0x06, -1, 0x03, 0x00c2, 0x0086 },
  { 0x07, 0x07, -1, 0x03, 0x00c2, 0x00c6 },
  { 0x07, 0x08, -1, 0x03, 0x00c2, 0x0146 },
  { 0x07, 0x09, -1, 0x03, 0x00c2, 0x0246 },
  { 0x07, 0x0a, -1, 0x03, 0x00c2, 0x0446 },
  { 0x07, 0x18, -1, 0x03, 0x00c2, 0x0846 },
  { 0x08, 0x05, -1, 0x03, 0x0142, 0x0046 },
  { 0x08, 0x05, -1, 0x03, 0x0142, 0x0066 },
  { 0x08, 0x06, -1, 0x03, 0x0142, 0x0086 },
  { 0x08, 0x07, -1, 0x03, 0x0142, 0x00c6 },
  { 0x08, 0x08, -1, 0x03, 0x0142, 0x0146 },
  { 0x08, 0x09, -1, 0x03, 0x0142, 0x0246 },
  { 0x08, 0x0a, -1, 0x03, 0x0142, 0x0446 },
  { 0x08, 0x18, -1, 0x03, 0x0142, 0x0846 },
  { 0x09, 0x05, -1, 0x03, 0x0242, 0x0046 },
  { 0x09, 0x05, -1, 0x03, 0x0242, 0x0066 },
  { 0x09, 0x06, -1, 0x03, 0x0242, 0x0086 },
  { 0x09, 0x07, -1, 0x03, 0x0242, 0x00c6 },
  { 0x09, 0x08, -1, 0x03, 0x0242, 0x0146 },
  { 0x09, 0x09, -1, 0x03, 0x0242, 0x0246 },
  { 0x09, 0x0a, -1, 0x03, 0x0242, 0x0446 },
  { 0x09, 0x18, -1, 0x03, 0x0242, 0x0846 },
  { 0x0a, 0x05, -1, 0x03, 0x0442, 0x0046 },
  { 0x0a, 0x05, -1, 0x03, 0x0442, 0x0066 },
  { 0x0a, 0x06, -1, 0x03, 0x0442, 0x0086 },
  { 0x0a, 0x07, -1, 0x03, 0x0442, 0x00c6 },
  { 0x0a, 0x08, -1, 0x03, 0x0442, 0x0146 },
  { 0x0a, 0x09, -1, 0x03, 0x0442, 0x0246 },
  { 0x0a, 0x0a, -1, 0x03, 0x0442, 0x0446 },
  { 0x0a, 0x18, -1, 0x03, 0x0442, 0x0846 },
  { 0x0c, 0x05, -1, 0x03, 0x0842, 0x0046 },
  { 0x0c, 0x05, -1, 0x03, 0x0842, 0x0066 },
  { 0x0c, 0x06, -1, 0x03, 0x0842, 0x0086 },
  { 0x0c, 0x07, -1, 0x03, 0x0842, 0x00c6 },
  { 0x0c, 0x08, -1, 0x03, 0x0842, 0x0146 },
  { 0x0c, 0x09, -1, 0x03, 0x0842, 0x0246 },
  { 0x0c, 0x0a, -1, 0x03, 0x0842, 0x0446 },
  { 0x0c, 0x18, -1, 0x03, 0x0842, 0x0846 },
  { 0x0e, 0x05, -1, 0x03, 0x1842, 0x0046 },
  { 0x0e, 0x05, -1, 0x03, 0x1842, 0x0066 },
  { 0x0e, 0x06, -1, 0x03, 0x1842, 0x0086 },
  { 0x0e, 0x07, -1, 0x03, 0x1842, 0x00c6 },
  { 0x0e, 0x08, -1, 0x03, 0x1842, 0x0146 },
  { 0x0e, 0x09, -1, 0x03, 0x1842, 0x0246 },
  { 0x0e, 0x0a, -1, 0x03, 0x1842, 0x0446 },
  { 0x0e, 0x18, -1, 0x03, 0x1842, 0x0846 },
  { 0x18, 0x05, -1, 0x03, 0x5842, 0x0046 },
  { 0x18, 0x05, -1, 0x03, 0x5842, 0x0066 },
  { 0x18, 0x06, -1, 0x03, 0x5842, 0x0086 },
  { 0x18, 0x07, -1, 0x03, 0x5842, 0x00c6 },
  { 0x18, 0x08, -1, 0x03, 0x5842, 0x0146 },
  { 0x18, 0x09, -1, 0x03, 0x5842, 0x0246 },
  { 0x18, 0x0a, -1, 0x03, 0x5842, 0x0446 },
  { 0x18, 0x18, -1, 0x03, 0x5842, 0x0846 },
};
# 21 "project/brotli/c/dec/decode.c" 2
# 1 "project/brotli/c/dec/./state.h" 1
# 13 "project/brotli/c/dec/./state.h"
# 1 "project/brotli/c/dec/./../common/dictionary.h" 1
# 14 "project/brotli/c/dec/./state.h" 2

# 1 "project/brotli/c/dec/./../common/transform.h" 1
# 16 "project/brotli/c/dec/./state.h" 2

# 1 "project/brotli/c/dec/././bit_reader.h" 1
# 18 "project/brotli/c/dec/./state.h" 2
# 1 "project/brotli/c/dec/././huffman.h" 1
# 19 "project/brotli/c/dec/./state.h" 2
# 113 "project/brotli/c/dec/./state.h"
typedef enum {
  BROTLI_STATE_UNINITED,
  BROTLI_STATE_LARGE_WINDOW_BITS,
  BROTLI_STATE_INITIALIZE,
  BROTLI_STATE_METABLOCK_BEGIN,
  BROTLI_STATE_METABLOCK_HEADER,
  BROTLI_STATE_METABLOCK_HEADER_2,
  BROTLI_STATE_CONTEXT_MODES,
  BROTLI_STATE_COMMAND_BEGIN,
  BROTLI_STATE_COMMAND_INNER,
  BROTLI_STATE_COMMAND_POST_DECODE_LITERALS,
  BROTLI_STATE_COMMAND_POST_WRAP_COPY,
  BROTLI_STATE_UNCOMPRESSED,
  BROTLI_STATE_METADATA,
  BROTLI_STATE_COMMAND_INNER_WRITE,
  BROTLI_STATE_METABLOCK_DONE,
  BROTLI_STATE_COMMAND_POST_WRITE_1,
  BROTLI_STATE_COMMAND_POST_WRITE_2,
  BROTLI_STATE_BEFORE_COMPRESSED_METABLOCK_HEADER,
  BROTLI_STATE_HUFFMAN_CODE_0,
  BROTLI_STATE_HUFFMAN_CODE_1,
  BROTLI_STATE_HUFFMAN_CODE_2,
  BROTLI_STATE_HUFFMAN_CODE_3,
  BROTLI_STATE_CONTEXT_MAP_1,
  BROTLI_STATE_CONTEXT_MAP_2,
  BROTLI_STATE_TREE_GROUP,
  BROTLI_STATE_BEFORE_COMPRESSED_METABLOCK_BODY,
  BROTLI_STATE_DONE
} BrotliRunningState;

typedef enum {
  BROTLI_STATE_METABLOCK_HEADER_NONE,
  BROTLI_STATE_METABLOCK_HEADER_EMPTY,
  BROTLI_STATE_METABLOCK_HEADER_NIBBLES,
  BROTLI_STATE_METABLOCK_HEADER_SIZE,
  BROTLI_STATE_METABLOCK_HEADER_UNCOMPRESSED,
  BROTLI_STATE_METABLOCK_HEADER_RESERVED,
  BROTLI_STATE_METABLOCK_HEADER_BYTES,
  BROTLI_STATE_METABLOCK_HEADER_METADATA
} BrotliRunningMetablockHeaderState;

typedef enum {
  BROTLI_STATE_UNCOMPRESSED_NONE,
  BROTLI_STATE_UNCOMPRESSED_WRITE
} BrotliRunningUncompressedState;

typedef enum {
  BROTLI_STATE_TREE_GROUP_NONE,
  BROTLI_STATE_TREE_GROUP_LOOP
} BrotliRunningTreeGroupState;

typedef enum {
  BROTLI_STATE_CONTEXT_MAP_NONE,
  BROTLI_STATE_CONTEXT_MAP_READ_PREFIX,
  BROTLI_STATE_CONTEXT_MAP_HUFFMAN,
  BROTLI_STATE_CONTEXT_MAP_DECODE,
  BROTLI_STATE_CONTEXT_MAP_TRANSFORM
} BrotliRunningContextMapState;

typedef enum {
  BROTLI_STATE_HUFFMAN_NONE,
  BROTLI_STATE_HUFFMAN_SIMPLE_SIZE,
  BROTLI_STATE_HUFFMAN_SIMPLE_READ,
  BROTLI_STATE_HUFFMAN_SIMPLE_BUILD,
  BROTLI_STATE_HUFFMAN_COMPLEX,
  BROTLI_STATE_HUFFMAN_LENGTH_SYMBOLS
} BrotliRunningHuffmanState;

typedef enum {
  BROTLI_STATE_DECODE_UINT8_NONE,
  BROTLI_STATE_DECODE_UINT8_SHORT,
  BROTLI_STATE_DECODE_UINT8_LONG
} BrotliRunningDecodeUint8State;

typedef enum {
  BROTLI_STATE_READ_BLOCK_LENGTH_NONE,
  BROTLI_STATE_READ_BLOCK_LENGTH_SUFFIX
} BrotliRunningReadBlockLengthState;

typedef struct BrotliMetablockHeaderArena {
  BrotliRunningTreeGroupState substate_tree_group;
  BrotliRunningContextMapState substate_context_map;
  BrotliRunningHuffmanState substate_huffman;

  uint32_t sub_loop_counter;

  uint32_t repeat_code_len;
  uint32_t prev_code_len;


  uint32_t symbol;
  uint32_t repeat;
  uint32_t space;


  HuffmanCode table[32];

  uint16_t* symbol_lists;

  uint16_t symbols_lists_array[15 + 1 +
                               704];

  int next_symbol[32];
  uint8_t code_length_code_lengths[(17 + 1)];

  uint16_t code_length_histo[16];


  int htree_index;
  HuffmanCode* next;


  uint32_t context_index;
  uint32_t max_run_length_prefix;
  uint32_t code;
  HuffmanCode context_map_table[646];
} BrotliMetablockHeaderArena;

typedef struct BrotliMetablockBodyArena {
  uint8_t dist_extra_bits[544];
  uint32_t dist_offset[544];
} BrotliMetablockBodyArena;

struct BrotliDecoderStateStruct {
  BrotliRunningState state;


  int loop_counter;

  BrotliBitReader br;

  brotli_alloc_func alloc_func;
  brotli_free_func free_func;
  void* memory_manager_opaque;



  union {
    uint64_t u64;
    uint8_t u8[8];
  } buffer;
  uint32_t buffer_length;

  int pos;
  int max_backward_distance;
  int max_distance;
  int ringbuffer_size;
  int ringbuffer_mask;
  int dist_rb_idx;
  int dist_rb[4];
  int error_code;
  uint8_t* ringbuffer;
  uint8_t* ringbuffer_end;
  HuffmanCode* htree_command;
  const uint8_t* context_lookup;
  uint8_t* context_map_slice;
  uint8_t* dist_context_map_slice;



  HuffmanTreeGroup literal_hgroup;
  HuffmanTreeGroup insert_copy_hgroup;
  HuffmanTreeGroup distance_hgroup;
  HuffmanCode* block_type_trees;
  HuffmanCode* block_len_trees;


  int trivial_literal_context;


  int distance_context;
  int meta_block_remaining_len;
  uint32_t block_length_index;
  uint32_t block_length[3];
  uint32_t num_block_types[3];
  uint32_t block_type_rb[6];
  uint32_t distance_postfix_bits;
  uint32_t num_direct_distance_codes;
  uint32_t num_dist_htrees;
  uint8_t* dist_context_map;
  HuffmanCode* literal_htree;
  uint8_t dist_htree_index;

  int copy_length;
  int distance_code;


  size_t rb_roundtrips;
  size_t partial_pos_out;


  uint32_t mtf_upper_bound;
  uint32_t mtf[64 + 1];




  BrotliRunningMetablockHeaderState substate_metablock_header;
  BrotliRunningUncompressedState substate_uncompressed;
  BrotliRunningDecodeUint8State substate_decode_uint8;
  BrotliRunningReadBlockLengthState substate_read_block_length;

  unsigned int is_last_metablock : 1;
  unsigned int is_uncompressed : 1;
  unsigned int is_metadata : 1;
  unsigned int should_wrap_ringbuffer : 1;
  unsigned int canny_ringbuffer_allocation : 1;
  unsigned int large_window : 1;
  unsigned int size_nibbles : 8;
  uint32_t window_bits;

  int new_ringbuffer_size;

  uint32_t num_literal_htrees;
  uint8_t* context_map;
  uint8_t* context_modes;

  const BrotliDictionary* dictionary;
  const BrotliTransforms* transforms;

  uint32_t trivial_literal_contexts[8];

  union {
    BrotliMetablockHeaderArena header;
    BrotliMetablockBodyArena body;
  } arena;
};

typedef struct BrotliDecoderStateStruct BrotliDecoderStateInternal;


__attribute__ ((visibility ("hidden"))) 
# 344 "project/brotli/c/dec/./state.h" 3 4
               int 
# 344 "project/brotli/c/dec/./state.h"
                           BrotliDecoderStateInit(BrotliDecoderStateInternal* s,
    brotli_alloc_func alloc_func, brotli_free_func free_func, void* opaque);
__attribute__ ((visibility ("hidden"))) void BrotliDecoderStateCleanup(BrotliDecoderStateInternal* s);
__attribute__ ((visibility ("hidden"))) void BrotliDecoderStateMetablockBegin(BrotliDecoderStateInternal* s);
__attribute__ ((visibility ("hidden"))) void BrotliDecoderStateCleanupAfterMetablock(
    BrotliDecoderStateInternal* s);
__attribute__ ((visibility ("hidden"))) 
# 350 "project/brotli/c/dec/./state.h" 3 4
               int 
# 350 "project/brotli/c/dec/./state.h"
                           BrotliDecoderHuffmanTreeGroupInit(
    BrotliDecoderStateInternal* s, HuffmanTreeGroup* group, uint32_t alphabet_size_max,
    uint32_t alphabet_size_limit, uint32_t ntrees);
# 22 "project/brotli/c/dec/decode.c" 2
# 46 "project/brotli/c/dec/decode.c"
static const uint32_t kRingBufferWriteAheadSlack = 42;

static const uint8_t kCodeLengthCodeOrder[(17 + 1)] = {
  1, 2, 3, 4, 0, 5, 17, 6, 16, 7, 8, 9, 10, 11, 12, 13, 14, 15,
};


static const uint8_t kCodeLengthPrefixLength[16] = {
  2, 2, 2, 3, 2, 2, 2, 4, 2, 2, 2, 3, 2, 2, 2, 4,
};

static const uint8_t kCodeLengthPrefixValue[16] = {
  0, 4, 3, 2, 0, 4, 3, 1, 0, 4, 3, 2, 0, 4, 3, 5,
};


# 61 "project/brotli/c/dec/decode.c" 3 4
int 
# 61 "project/brotli/c/dec/decode.c"
           BrotliDecoderSetParameter(
    BrotliDecoderStateInternal* state, BrotliDecoderParameter p, uint32_t value) {
  if (state->state != BROTLI_STATE_UNINITED) return 
# 63 "project/brotli/c/dec/decode.c" 3 4
                                                   0
# 63 "project/brotli/c/dec/decode.c"
                                                               ;
  switch (p) {
    case BROTLI_DECODER_PARAM_DISABLE_RING_BUFFER_REALLOCATION:
      state->canny_ringbuffer_allocation = !!value ? 0 : 1;
      return 
# 67 "project/brotli/c/dec/decode.c" 3 4
            1
# 67 "project/brotli/c/dec/decode.c"
                       ;

    case BROTLI_DECODER_PARAM_LARGE_WINDOW:
      state->large_window = 
# 70 "project/brotli/c/dec/decode.c" 3 4
                           (!!(
# 70 "project/brotli/c/dec/decode.c"
                           !!value
# 70 "project/brotli/c/dec/decode.c" 3 4
                           ) ? 1 : 0)
# 70 "project/brotli/c/dec/decode.c"
                                                  ;
      return 
# 71 "project/brotli/c/dec/decode.c" 3 4
            1
# 71 "project/brotli/c/dec/decode.c"
                       ;

    default: return 
# 73 "project/brotli/c/dec/decode.c" 3 4
                   0
# 73 "project/brotli/c/dec/decode.c"
                               ;
  }
}

BrotliDecoderStateInternal* BrotliDecoderCreateInstance(
    brotli_alloc_func alloc_func, brotli_free_func free_func, void* opaque) {
  BrotliDecoderStateInternal* state = 0;
  if (!alloc_func && !free_func) {
    state = (BrotliDecoderStateInternal*)malloc(sizeof(BrotliDecoderStateInternal));
  } else if (alloc_func && free_func) {
    state = (BrotliDecoderStateInternal*)alloc_func(opaque, sizeof(BrotliDecoderStateInternal));
  }
  if (state == 0) {
    (void)(0);
    return 0;
  }
  if (!BrotliDecoderStateInit(state, alloc_func, free_func, opaque)) {
    (void)(0);
    if (!alloc_func && !free_func) {
      free(state);
    } else if (alloc_func && free_func) {
      free_func(opaque, state);
    }
    return 0;
  }
  return state;
}


void BrotliDecoderDestroyInstance(BrotliDecoderStateInternal* state) {
  if (!state) {
    return;
  } else {
    brotli_free_func free_func = state->free_func;
    void* opaque = state->memory_manager_opaque;
    BrotliDecoderStateCleanup(state);
    free_func(opaque, state);
  }
}


static __attribute__((__noinline__)) BrotliDecoderResult SaveErrorCode(
    BrotliDecoderStateInternal* s, BrotliDecoderErrorCode e) {
  s->error_code = (int)e;
  switch (e) {
    case BROTLI_DECODER_SUCCESS:
      return BROTLI_DECODER_RESULT_SUCCESS;

    case BROTLI_DECODER_NEEDS_MORE_INPUT:
      return BROTLI_DECODER_RESULT_NEEDS_MORE_INPUT;

    case BROTLI_DECODER_NEEDS_MORE_OUTPUT:
      return BROTLI_DECODER_RESULT_NEEDS_MORE_OUTPUT;

    default:
      return BROTLI_DECODER_RESULT_ERROR;
  }
}



static BrotliDecoderErrorCode DecodeWindowBits(BrotliDecoderStateInternal* s,
                                               BrotliBitReader* br) {
  uint32_t n;
  
# 137 "project/brotli/c/dec/decode.c" 3 4
 int 
# 137 "project/brotli/c/dec/decode.c"
             large_window = s->large_window;
  s->large_window = 
# 138 "project/brotli/c/dec/decode.c" 3 4
                   0
# 138 "project/brotli/c/dec/decode.c"
                               ;
  BrotliTakeBits(br, 1, &n);
  if (n == 0) {
    s->window_bits = 16;
    return BROTLI_DECODER_SUCCESS;
  }
  BrotliTakeBits(br, 3, &n);
  if (n != 0) {
    s->window_bits = 17 + n;
    return BROTLI_DECODER_SUCCESS;
  }
  BrotliTakeBits(br, 3, &n);
  if (n == 1) {
    if (large_window) {
      BrotliTakeBits(br, 1, &n);
      if (n == 1) {
        return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_WINDOW_BITS);
      }
      s->large_window = 
# 156 "project/brotli/c/dec/decode.c" 3 4
                       1
# 156 "project/brotli/c/dec/decode.c"
                                  ;
      return BROTLI_DECODER_SUCCESS;
    } else {
      return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_WINDOW_BITS);
    }
  }
  if (n != 0) {
    s->window_bits = 8 + n;
    return BROTLI_DECODER_SUCCESS;
  }
  s->window_bits = 17;
  return BROTLI_DECODER_SUCCESS;
}

static inline __attribute__((__always_inline__)) void memmove16(uint8_t* dst, uint8_t* src) {



  uint32_t buffer[4];
  
# 175 "project/brotli/c/dec/decode.c" 3 4
 __builtin___memcpy_chk (
# 175 "project/brotli/c/dec/decode.c"
 buffer
# 175 "project/brotli/c/dec/decode.c" 3 4
 , 
# 175 "project/brotli/c/dec/decode.c"
 src, 16
# 175 "project/brotli/c/dec/decode.c" 3 4
 , __builtin_object_size (
# 175 "project/brotli/c/dec/decode.c"
 buffer
# 175 "project/brotli/c/dec/decode.c" 3 4
 , 0))
# 175 "project/brotli/c/dec/decode.c"
                        ;
  
# 176 "project/brotli/c/dec/decode.c" 3 4
 __builtin___memcpy_chk (
# 176 "project/brotli/c/dec/decode.c"
 dst
# 176 "project/brotli/c/dec/decode.c" 3 4
 , 
# 176 "project/brotli/c/dec/decode.c"
 buffer, 16
# 176 "project/brotli/c/dec/decode.c" 3 4
 , __builtin_object_size (
# 176 "project/brotli/c/dec/decode.c"
 dst
# 176 "project/brotli/c/dec/decode.c" 3 4
 , 0))
# 176 "project/brotli/c/dec/decode.c"
                        ;

}


static __attribute__((__noinline__)) BrotliDecoderErrorCode DecodeVarLenUint8(
    BrotliDecoderStateInternal* s, BrotliBitReader* br, uint32_t* value) {
  uint32_t bits;
  switch (s->substate_decode_uint8) {
    case BROTLI_STATE_DECODE_UINT8_NONE:
      if ((__builtin_expect(!BrotliSafeReadBits(br, 1, &bits), 0))) {
        return BROTLI_DECODER_NEEDS_MORE_INPUT;
      }
      if (bits == 0) {
        *value = 0;
        return BROTLI_DECODER_SUCCESS;
      }


    case BROTLI_STATE_DECODE_UINT8_SHORT:
      if ((__builtin_expect(!BrotliSafeReadBits(br, 3, &bits), 0))) {
        s->substate_decode_uint8 = BROTLI_STATE_DECODE_UINT8_SHORT;
        return BROTLI_DECODER_NEEDS_MORE_INPUT;
      }
      if (bits == 0) {
        *value = 1;
        s->substate_decode_uint8 = BROTLI_STATE_DECODE_UINT8_NONE;
        return BROTLI_DECODER_SUCCESS;
      }

      *value = bits;


    case BROTLI_STATE_DECODE_UINT8_LONG:
      if ((__builtin_expect(!BrotliSafeReadBits(br, *value, &bits), 0))) {
        s->substate_decode_uint8 = BROTLI_STATE_DECODE_UINT8_LONG;
        return BROTLI_DECODER_NEEDS_MORE_INPUT;
      }
      *value = (1U << *value) + bits;
      s->substate_decode_uint8 = BROTLI_STATE_DECODE_UINT8_NONE;
      return BROTLI_DECODER_SUCCESS;

    default:
      return
          ((void)(0), BROTLI_DECODER_ERROR_UNREACHABLE);
  }
}


static BrotliDecoderErrorCode __attribute__((__noinline__)) DecodeMetaBlockLength(
    BrotliDecoderStateInternal* s, BrotliBitReader* br) {
  uint32_t bits;
  int i;
  for (;;) {
    switch (s->substate_metablock_header) {
      case BROTLI_STATE_METABLOCK_HEADER_NONE:
        if (!BrotliSafeReadBits(br, 1, &bits)) {
          return BROTLI_DECODER_NEEDS_MORE_INPUT;
        }
        s->is_last_metablock = bits ? 1 : 0;
        s->meta_block_remaining_len = 0;
        s->is_uncompressed = 0;
        s->is_metadata = 0;
        if (!s->is_last_metablock) {
          s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_NIBBLES;
          break;
        }
        s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_EMPTY;


      case BROTLI_STATE_METABLOCK_HEADER_EMPTY:
        if (!BrotliSafeReadBits(br, 1, &bits)) {
          return BROTLI_DECODER_NEEDS_MORE_INPUT;
        }
        if (bits) {
          s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_NONE;
          return BROTLI_DECODER_SUCCESS;
        }
        s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_NIBBLES;


      case BROTLI_STATE_METABLOCK_HEADER_NIBBLES:
        if (!BrotliSafeReadBits(br, 2, &bits)) {
          return BROTLI_DECODER_NEEDS_MORE_INPUT;
        }
        s->size_nibbles = (uint8_t)(bits + 4);
        s->loop_counter = 0;
        if (bits == 3) {
          s->is_metadata = 1;
          s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_RESERVED;
          break;
        }
        s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_SIZE;


      case BROTLI_STATE_METABLOCK_HEADER_SIZE:
        i = s->loop_counter;
        for (; i < (int)s->size_nibbles; ++i) {
          if (!BrotliSafeReadBits(br, 4, &bits)) {
            s->loop_counter = i;
            return BROTLI_DECODER_NEEDS_MORE_INPUT;
          }
          if (i + 1 == (int)s->size_nibbles && s->size_nibbles > 4 &&
              bits == 0) {
            return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_EXUBERANT_NIBBLE);
          }
          s->meta_block_remaining_len |= (int)(bits << (i * 4));
        }
        s->substate_metablock_header =
            BROTLI_STATE_METABLOCK_HEADER_UNCOMPRESSED;


      case BROTLI_STATE_METABLOCK_HEADER_UNCOMPRESSED:
        if (!s->is_last_metablock) {
          if (!BrotliSafeReadBits(br, 1, &bits)) {
            return BROTLI_DECODER_NEEDS_MORE_INPUT;
          }
          s->is_uncompressed = bits ? 1 : 0;
        }
        ++s->meta_block_remaining_len;
        s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_NONE;
        return BROTLI_DECODER_SUCCESS;

      case BROTLI_STATE_METABLOCK_HEADER_RESERVED:
        if (!BrotliSafeReadBits(br, 1, &bits)) {
          return BROTLI_DECODER_NEEDS_MORE_INPUT;
        }
        if (bits != 0) {
          return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_RESERVED);
        }
        s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_BYTES;


      case BROTLI_STATE_METABLOCK_HEADER_BYTES:
        if (!BrotliSafeReadBits(br, 2, &bits)) {
          return BROTLI_DECODER_NEEDS_MORE_INPUT;
        }
        if (bits == 0) {
          s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_NONE;
          return BROTLI_DECODER_SUCCESS;
        }
        s->size_nibbles = (uint8_t)bits;
        s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_METADATA;


      case BROTLI_STATE_METABLOCK_HEADER_METADATA:
        i = s->loop_counter;
        for (; i < (int)s->size_nibbles; ++i) {
          if (!BrotliSafeReadBits(br, 8, &bits)) {
            s->loop_counter = i;
            return BROTLI_DECODER_NEEDS_MORE_INPUT;
          }
          if (i + 1 == (int)s->size_nibbles && s->size_nibbles > 1 &&
              bits == 0) {
            return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_EXUBERANT_META_NIBBLE)
                                                                  ;
          }
          s->meta_block_remaining_len |= (int)(bits << (i * 8));
        }
        ++s->meta_block_remaining_len;
        s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_NONE;
        return BROTLI_DECODER_SUCCESS;

      default:
        return
            ((void)(0), BROTLI_DECODER_ERROR_UNREACHABLE);
    }
  }
}





static inline __attribute__((__always_inline__)) uint32_t DecodeSymbol(uint32_t bits,
                                           const HuffmanCode* table,
                                           BrotliBitReader* br) {
  ;
  table += (bits & 0xFF);
  if ((table->bits) > 8U) {
    uint32_t nbits = (table->bits) - 8U;
    BrotliDropBits(br, 8U);
    table += ((table->value) + ((bits >> 8U) & BitMask(nbits)))

                                                        ;
  }
  BrotliDropBits(br, (table->bits));
  return (table->value);
}



static inline __attribute__((__always_inline__)) uint32_t ReadSymbol(const HuffmanCode* table,
                                         BrotliBitReader* br) {
  return DecodeSymbol(BrotliGet16BitsUnmasked(br), table, br);
}



static __attribute__((__noinline__)) 
# 375 "project/brotli/c/dec/decode.c" 3 4
                      int 
# 375 "project/brotli/c/dec/decode.c"
                                  SafeDecodeSymbol(
    const HuffmanCode* table, BrotliBitReader* br, uint32_t* result) {
  uint32_t val;
  uint32_t available_bits = BrotliGetAvailableBits(br);
  ;
  if (available_bits == 0) {
    if ((table->bits) == 0) {
      *result = (table->value);
      return 
# 383 "project/brotli/c/dec/decode.c" 3 4
            1
# 383 "project/brotli/c/dec/decode.c"
                       ;
    }
    return 
# 385 "project/brotli/c/dec/decode.c" 3 4
          0
# 385 "project/brotli/c/dec/decode.c"
                      ;
  }
  val = (uint32_t)BrotliGetBitsUnmasked(br);
  table += (val & 0xFF);
  if ((table->bits) <= 8U) {
    if ((table->bits) <= available_bits) {
      BrotliDropBits(br, (table->bits));
      *result = (table->value);
      return 
# 393 "project/brotli/c/dec/decode.c" 3 4
            1
# 393 "project/brotli/c/dec/decode.c"
                       ;
    } else {
      return 
# 395 "project/brotli/c/dec/decode.c" 3 4
            0
# 395 "project/brotli/c/dec/decode.c"
                        ;
    }
  }
  if (available_bits <= 8U) {
    return 
# 399 "project/brotli/c/dec/decode.c" 3 4
          0
# 399 "project/brotli/c/dec/decode.c"
                      ;
  }


  val = (val & BitMask((table->bits))) >> 8U;
  available_bits -= 8U;
  table += ((table->value) + val);
  if (available_bits < (table->bits)) {
    return 
# 407 "project/brotli/c/dec/decode.c" 3 4
          0
# 407 "project/brotli/c/dec/decode.c"
                      ;
  }

  BrotliDropBits(br, 8U + (table->bits));
  *result = (table->value);
  return 
# 412 "project/brotli/c/dec/decode.c" 3 4
        1
# 412 "project/brotli/c/dec/decode.c"
                   ;
}

static inline __attribute__((__always_inline__)) 
# 415 "project/brotli/c/dec/decode.c" 3 4
                    int 
# 415 "project/brotli/c/dec/decode.c"
                                SafeReadSymbol(
    const HuffmanCode* table, BrotliBitReader* br, uint32_t* result) {
  uint32_t val;
  if ((__builtin_expect(!!(BrotliSafeGetBits(br, 15, &val)), 1))) {
    *result = DecodeSymbol(val, table, br);
    return 
# 420 "project/brotli/c/dec/decode.c" 3 4
          1
# 420 "project/brotli/c/dec/decode.c"
                     ;
  }
  return SafeDecodeSymbol(table, br, result);
}


static inline __attribute__((__always_inline__)) void PreloadSymbol(int safe,
                                        const HuffmanCode* table,
                                        BrotliBitReader* br,
                                        uint32_t* bits,
                                        uint32_t* value) {
  if (safe) {
    return;
  }
  ;
  table += (BrotliGetBits(br, 8U));
  *bits = (table->bits);
  *value = (table->value);
}



static inline __attribute__((__always_inline__)) uint32_t ReadPreloadedSymbol(const HuffmanCode* table,
                                                  BrotliBitReader* br,
                                                  uint32_t* bits,
                                                  uint32_t* value) {
  uint32_t result = *value;
  if ((__builtin_expect(*bits > 8U, 0))) {
    uint32_t val = BrotliGet16BitsUnmasked(br);
    const HuffmanCode* ext = table + (val & 0xFF) + *value;
    uint32_t mask = BitMask((*bits - 8U));
    ;
    BrotliDropBits(br, 8U);
    ext += ((val >> 8U) & mask);
    BrotliDropBits(br, (ext->bits));
    result = (ext->value);
  } else {
    BrotliDropBits(br, *bits);
  }
  PreloadSymbol(0, table, br, bits, value);
  return result;
}

static inline __attribute__((__always_inline__)) uint32_t Log2Floor(uint32_t x) {
  uint32_t result = 0;
  while (x) {
    x >>= 1;
    ++result;
  }
  return result;
}




static BrotliDecoderErrorCode ReadSimpleHuffmanSymbols(
    uint32_t alphabet_size_max, uint32_t alphabet_size_limit,
    BrotliDecoderStateInternal* s) {

  BrotliBitReader* br = &s->br;
  BrotliMetablockHeaderArena* h = &s->arena.header;
  uint32_t max_bits = Log2Floor(alphabet_size_max - 1);
  uint32_t i = h->sub_loop_counter;
  uint32_t num_symbols = h->symbol;
  while (i <= num_symbols) {
    uint32_t v;
    if ((__builtin_expect(!BrotliSafeReadBits(br, max_bits, &v), 0))) {
      h->sub_loop_counter = i;
      h->substate_huffman = BROTLI_STATE_HUFFMAN_SIMPLE_READ;
      return BROTLI_DECODER_NEEDS_MORE_INPUT;
    }
    if (v >= alphabet_size_limit) {
      return
          ((void)(0), BROTLI_DECODER_ERROR_FORMAT_SIMPLE_HUFFMAN_ALPHABET);
    }
    h->symbols_lists_array[i] = (uint16_t)v;
    ;
    ++i;
  }

  for (i = 0; i < num_symbols; ++i) {
    uint32_t k = i + 1;
    for (; k <= num_symbols; ++k) {
      if (h->symbols_lists_array[i] == h->symbols_lists_array[k]) {
        return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_SIMPLE_HUFFMAN_SAME);
      }
    }
  }

  return BROTLI_DECODER_SUCCESS;
}







static inline __attribute__((__always_inline__)) void ProcessSingleCodeLength(uint32_t code_len,
    uint32_t* symbol, uint32_t* repeat, uint32_t* space,
    uint32_t* prev_code_len, uint16_t* symbol_lists,
    uint16_t* code_length_histo, int* next_symbol) {
  *repeat = 0;
  if (code_len != 0) {
    symbol_lists[next_symbol[code_len]] = (uint16_t)(*symbol);
    next_symbol[code_len] = (int)(*symbol);
    *prev_code_len = code_len;
    *space -= 32768U >> code_len;
    code_length_histo[code_len]++;
   
                                     ;
  }
  (*symbol)++;
}
# 545 "project/brotli/c/dec/decode.c"
static inline __attribute__((__always_inline__)) void ProcessRepeatedCodeLength(uint32_t code_len,
    uint32_t repeat_delta, uint32_t alphabet_size, uint32_t* symbol,
    uint32_t* repeat, uint32_t* space, uint32_t* prev_code_len,
    uint32_t* repeat_code_len, uint16_t* symbol_lists,
    uint16_t* code_length_histo, int* next_symbol) {
  uint32_t old_repeat;
  uint32_t extra_bits = 3;
  uint32_t new_len = 0;
  if (code_len == 16) {
    new_len = *prev_code_len;
    extra_bits = 2;
  }
  if (*repeat_code_len != new_len) {
    *repeat = 0;
    *repeat_code_len = new_len;
  }
  old_repeat = *repeat;
  if (*repeat > 0) {
    *repeat -= 2;
    *repeat <<= extra_bits;
  }
  *repeat += repeat_delta + 3U;
  repeat_delta = *repeat - old_repeat;
  if (*symbol + repeat_delta > alphabet_size) {
    (void)(0);
    *symbol = alphabet_size;
    *space = 0xFFFFF;
    return;
  }
 
                                                                              ;
  if (*repeat_code_len != 0) {
    unsigned last = *symbol + repeat_delta;
    int next = next_symbol[*repeat_code_len];
    do {
      symbol_lists[next] = (uint16_t)*symbol;
      next = (int)*symbol;
    } while (++(*symbol) != last);
    next_symbol[*repeat_code_len] = next;
    *space -= repeat_delta << (15 - *repeat_code_len);
    code_length_histo[*repeat_code_len] =
        (uint16_t)(code_length_histo[*repeat_code_len] + repeat_delta);
  } else {
    *symbol += repeat_delta;
  }
}


static BrotliDecoderErrorCode ReadSymbolCodeLengths(
    uint32_t alphabet_size, BrotliDecoderStateInternal* s) {
  BrotliBitReader* br = &s->br;
  BrotliMetablockHeaderArena* h = &s->arena.header;
  uint32_t symbol = h->symbol;
  uint32_t repeat = h->repeat;
  uint32_t space = h->space;
  uint32_t prev_code_len = h->prev_code_len;
  uint32_t repeat_code_len = h->repeat_code_len;
  uint16_t* symbol_lists = h->symbol_lists;
  uint16_t* code_length_histo = h->code_length_histo;
  int* next_symbol = h->next_symbol;
  if (!BrotliWarmupBitReader(br)) {
    return BROTLI_DECODER_NEEDS_MORE_INPUT;
  }
  while (symbol < alphabet_size && space > 0) {
    const HuffmanCode* p = h->table;
    uint32_t code_len;
    ;
    if (!BrotliCheckInputAmount(br, (sizeof(uint64_t) >> 1))) {
      h->symbol = symbol;
      h->repeat = repeat;
      h->prev_code_len = prev_code_len;
      h->repeat_code_len = repeat_code_len;
      h->space = space;
      return BROTLI_DECODER_NEEDS_MORE_INPUT;
    }
    BrotliFillBitWindow16(br);
    p += (BrotliGetBitsUnmasked(br) & BitMask(5))
                                                            ;
    BrotliDropBits(br, (p->bits));
    code_len = (p->value);
    if (code_len < 16) {
      ProcessSingleCodeLength(code_len, &symbol, &repeat, &space,
          &prev_code_len, symbol_lists, code_length_histo, next_symbol);
    } else {
      uint32_t extra_bits =
          (code_len == 16) ? 2 : 3;
      uint32_t repeat_delta =
          (uint32_t)BrotliGetBitsUnmasked(br) & BitMask(extra_bits);
      BrotliDropBits(br, extra_bits);
      ProcessRepeatedCodeLength(code_len, repeat_delta, alphabet_size,
          &symbol, &repeat, &space, &prev_code_len, &repeat_code_len,
          symbol_lists, code_length_histo, next_symbol);
    }
  }
  h->space = space;
  return BROTLI_DECODER_SUCCESS;
}

static BrotliDecoderErrorCode SafeReadSymbolCodeLengths(
    uint32_t alphabet_size, BrotliDecoderStateInternal* s) {
  BrotliBitReader* br = &s->br;
  BrotliMetablockHeaderArena* h = &s->arena.header;
  
# 647 "project/brotli/c/dec/decode.c" 3 4
 int 
# 647 "project/brotli/c/dec/decode.c"
             get_byte = 
# 647 "project/brotli/c/dec/decode.c" 3 4
                        0
# 647 "project/brotli/c/dec/decode.c"
                                    ;
  while (h->symbol < alphabet_size && h->space > 0) {
    const HuffmanCode* p = h->table;
    uint32_t code_len;
    uint32_t available_bits;
    uint32_t bits = 0;
    ;
    if (get_byte && !BrotliPullByte(br)) return BROTLI_DECODER_NEEDS_MORE_INPUT;
    get_byte = 
# 655 "project/brotli/c/dec/decode.c" 3 4
              0
# 655 "project/brotli/c/dec/decode.c"
                          ;
    available_bits = BrotliGetAvailableBits(br);
    if (available_bits != 0) {
      bits = (uint32_t)BrotliGetBitsUnmasked(br);
    }
    p += (bits & BitMask(5))
                                                                   ;
    if ((p->bits) > available_bits) {
      get_byte = 
# 663 "project/brotli/c/dec/decode.c" 3 4
                1
# 663 "project/brotli/c/dec/decode.c"
                           ;
      continue;
    }
    code_len = (p->value);
    if (code_len < 16) {
      BrotliDropBits(br, (p->bits));
      ProcessSingleCodeLength(code_len, &h->symbol, &h->repeat, &h->space,
          &h->prev_code_len, h->symbol_lists, h->code_length_histo,
          h->next_symbol);
    } else {
      uint32_t extra_bits = code_len - 14U;
      uint32_t repeat_delta = (bits >> (p->bits)) &
          BitMask(extra_bits);
      if (available_bits < (p->bits) + extra_bits) {
        get_byte = 
# 677 "project/brotli/c/dec/decode.c" 3 4
                  1
# 677 "project/brotli/c/dec/decode.c"
                             ;
        continue;
      }
      BrotliDropBits(br, (p->bits) + extra_bits);
      ProcessRepeatedCodeLength(code_len, repeat_delta, alphabet_size,
          &h->symbol, &h->repeat, &h->space, &h->prev_code_len,
          &h->repeat_code_len, h->symbol_lists, h->code_length_histo,
          h->next_symbol);
    }
  }
  return BROTLI_DECODER_SUCCESS;
}



static BrotliDecoderErrorCode ReadCodeLengthCodeLengths(BrotliDecoderStateInternal* s) {
  BrotliBitReader* br = &s->br;
  BrotliMetablockHeaderArena* h = &s->arena.header;
  uint32_t num_codes = h->repeat;
  unsigned space = h->space;
  uint32_t i = h->sub_loop_counter;
  for (; i < (17 + 1); ++i) {
    const uint8_t code_len_idx = kCodeLengthCodeOrder[i];
    uint32_t ix;
    uint32_t v;
    if ((__builtin_expect(!BrotliSafeGetBits(br, 4, &ix), 0))) {
      uint32_t available_bits = BrotliGetAvailableBits(br);
      if (available_bits != 0) {
        ix = BrotliGetBitsUnmasked(br) & 0xF;
      } else {
        ix = 0;
      }
      if (kCodeLengthPrefixLength[ix] > available_bits) {
        h->sub_loop_counter = i;
        h->repeat = num_codes;
        h->space = space;
        h->substate_huffman = BROTLI_STATE_HUFFMAN_COMPLEX;
        return BROTLI_DECODER_NEEDS_MORE_INPUT;
      }
    }
    v = kCodeLengthPrefixValue[ix];
    BrotliDropBits(br, kCodeLengthPrefixLength[ix]);
    h->code_length_code_lengths[code_len_idx] = (uint8_t)v;
    ;
    if (v != 0) {
      space = space - (32U >> v);
      ++num_codes;
      ++h->code_length_histo[v];
      if (space - 1U >= 32U) {

        break;
      }
    }
  }
  if (!(num_codes == 1 || space == 0)) {
    return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_CL_SPACE);
  }
  return BROTLI_DECODER_SUCCESS;
}
# 748 "project/brotli/c/dec/decode.c"
static BrotliDecoderErrorCode ReadHuffmanCode(uint32_t alphabet_size_max,
                                              uint32_t alphabet_size_limit,
                                              HuffmanCode* table,
                                              uint32_t* opt_table_size,
                                              BrotliDecoderStateInternal* s) {
  BrotliBitReader* br = &s->br;
  BrotliMetablockHeaderArena* h = &s->arena.header;

  for (;;) {
    switch (h->substate_huffman) {
      case BROTLI_STATE_HUFFMAN_NONE:
        if (!BrotliSafeReadBits(br, 2, &h->sub_loop_counter)) {
          return BROTLI_DECODER_NEEDS_MORE_INPUT;
        }
        ;



        if (h->sub_loop_counter != 1) {
          h->space = 32;
          h->repeat = 0;
          
# 769 "project/brotli/c/dec/decode.c" 3 4
         __builtin___memset_chk (
# 769 "project/brotli/c/dec/decode.c"
         &h->code_length_histo[0]
# 769 "project/brotli/c/dec/decode.c" 3 4
         , 
# 769 "project/brotli/c/dec/decode.c"
         0, sizeof(h->code_length_histo[0]) * (5 + 1)
# 769 "project/brotli/c/dec/decode.c" 3 4
         , __builtin_object_size (
# 769 "project/brotli/c/dec/decode.c"
         &h->code_length_histo[0]
# 769 "project/brotli/c/dec/decode.c" 3 4
         , 0))
                                                               
# 770 "project/brotli/c/dec/decode.c"
                                                              ;
          
# 771 "project/brotli/c/dec/decode.c" 3 4
         __builtin___memset_chk (
# 771 "project/brotli/c/dec/decode.c"
         &h->code_length_code_lengths[0]
# 771 "project/brotli/c/dec/decode.c" 3 4
         , 
# 771 "project/brotli/c/dec/decode.c"
         0, sizeof(h->code_length_code_lengths)
# 771 "project/brotli/c/dec/decode.c" 3 4
         , __builtin_object_size (
# 771 "project/brotli/c/dec/decode.c"
         &h->code_length_code_lengths[0]
# 771 "project/brotli/c/dec/decode.c" 3 4
         , 0))
                                                  
# 772 "project/brotli/c/dec/decode.c"
                                                 ;
          h->substate_huffman = BROTLI_STATE_HUFFMAN_COMPLEX;
          continue;
        }


      case BROTLI_STATE_HUFFMAN_SIMPLE_SIZE:

        if (!BrotliSafeReadBits(br, 2, &h->symbol)) {
          h->substate_huffman = BROTLI_STATE_HUFFMAN_SIMPLE_SIZE;
          return BROTLI_DECODER_NEEDS_MORE_INPUT;
        }
        h->sub_loop_counter = 0;


      case BROTLI_STATE_HUFFMAN_SIMPLE_READ: {
        BrotliDecoderErrorCode result =
            ReadSimpleHuffmanSymbols(alphabet_size_max, alphabet_size_limit, s);
        if (result != BROTLI_DECODER_SUCCESS) {
          return result;
        }
      }


      case BROTLI_STATE_HUFFMAN_SIMPLE_BUILD: {
        uint32_t table_size;
        if (h->symbol == 3) {
          uint32_t bits;
          if (!BrotliSafeReadBits(br, 1, &bits)) {
            h->substate_huffman = BROTLI_STATE_HUFFMAN_SIMPLE_BUILD;
            return BROTLI_DECODER_NEEDS_MORE_INPUT;
          }
          h->symbol += bits;
        }
        ;
        table_size = BrotliBuildSimpleHuffmanTable(
            table, 8U, h->symbols_lists_array, h->symbol);
        if (opt_table_size) {
          *opt_table_size = table_size;
        }
        h->substate_huffman = BROTLI_STATE_HUFFMAN_NONE;
        return BROTLI_DECODER_SUCCESS;
      }


      case BROTLI_STATE_HUFFMAN_COMPLEX: {
        uint32_t i;
        BrotliDecoderErrorCode result = ReadCodeLengthCodeLengths(s);
        if (result != BROTLI_DECODER_SUCCESS) {
          return result;
        }
        BrotliBuildCodeLengthsHuffmanTable(h->table,
                                           h->code_length_code_lengths,
                                           h->code_length_histo);
        
# 826 "project/brotli/c/dec/decode.c" 3 4
       __builtin___memset_chk (
# 826 "project/brotli/c/dec/decode.c"
       &h->code_length_histo[0]
# 826 "project/brotli/c/dec/decode.c" 3 4
       , 
# 826 "project/brotli/c/dec/decode.c"
       0, sizeof(h->code_length_histo)
# 826 "project/brotli/c/dec/decode.c" 3 4
       , __builtin_object_size (
# 826 "project/brotli/c/dec/decode.c"
       &h->code_length_histo[0]
# 826 "project/brotli/c/dec/decode.c" 3 4
       , 0))
# 826 "project/brotli/c/dec/decode.c"
                                                                        ;
        for (i = 0; i <= 15; ++i) {
          h->next_symbol[i] = (int)i - (15 + 1);
          h->symbol_lists[h->next_symbol[i]] = 0xFFFF;
        }

        h->symbol = 0;
        h->prev_code_len = 8;
        h->repeat = 0;
        h->repeat_code_len = 0;
        h->space = 32768;
        h->substate_huffman = BROTLI_STATE_HUFFMAN_LENGTH_SYMBOLS;
      }


      case BROTLI_STATE_HUFFMAN_LENGTH_SYMBOLS: {
        uint32_t table_size;
        BrotliDecoderErrorCode result = ReadSymbolCodeLengths(
            alphabet_size_limit, s);
        if (result == BROTLI_DECODER_NEEDS_MORE_INPUT) {
          result = SafeReadSymbolCodeLengths(alphabet_size_limit, s);
        }
        if (result != BROTLI_DECODER_SUCCESS) {
          return result;
        }

        if (h->space != 0) {
          ;
          return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_HUFFMAN_SPACE);
        }
        table_size = BrotliBuildHuffmanTable(
            table, 8U, h->symbol_lists, h->code_length_histo);
        if (opt_table_size) {
          *opt_table_size = table_size;
        }
        h->substate_huffman = BROTLI_STATE_HUFFMAN_NONE;
        return BROTLI_DECODER_SUCCESS;
      }

      default:
        return
            ((void)(0), BROTLI_DECODER_ERROR_UNREACHABLE);
    }
  }
}


static inline __attribute__((__always_inline__)) uint32_t ReadBlockLength(const HuffmanCode* table,
                                              BrotliBitReader* br) {
  uint32_t code;
  uint32_t nbits;
  code = ReadSymbol(table, br);
  nbits = _kBrotliPrefixCodeRanges[code].nbits;
  return _kBrotliPrefixCodeRanges[code].offset + BrotliReadBits24(br, nbits);
}



static inline __attribute__((__always_inline__)) 
# 884 "project/brotli/c/dec/decode.c" 3 4
                    int 
# 884 "project/brotli/c/dec/decode.c"
                                SafeReadBlockLength(
    BrotliDecoderStateInternal* s, uint32_t* result, const HuffmanCode* table,
    BrotliBitReader* br) {
  uint32_t index;
  if (s->substate_read_block_length == BROTLI_STATE_READ_BLOCK_LENGTH_NONE) {
    if (!SafeReadSymbol(table, br, &index)) {
      return 
# 890 "project/brotli/c/dec/decode.c" 3 4
            0
# 890 "project/brotli/c/dec/decode.c"
                        ;
    }
  } else {
    index = s->block_length_index;
  }
  {
    uint32_t bits;
    uint32_t nbits = _kBrotliPrefixCodeRanges[index].nbits;
    uint32_t offset = _kBrotliPrefixCodeRanges[index].offset;
    if (!BrotliSafeReadBits(br, nbits, &bits)) {
      s->block_length_index = index;
      s->substate_read_block_length = BROTLI_STATE_READ_BLOCK_LENGTH_SUFFIX;
      return 
# 902 "project/brotli/c/dec/decode.c" 3 4
            0
# 902 "project/brotli/c/dec/decode.c"
                        ;
    }
    *result = offset + bits;
    s->substate_read_block_length = BROTLI_STATE_READ_BLOCK_LENGTH_NONE;
    return 
# 906 "project/brotli/c/dec/decode.c" 3 4
          1
# 906 "project/brotli/c/dec/decode.c"
                     ;
  }
}
# 924 "project/brotli/c/dec/decode.c"
static __attribute__((__noinline__)) void InverseMoveToFrontTransform(
    uint8_t* v, uint32_t v_len, BrotliDecoderStateInternal* state) {

  uint32_t i = 1;
  uint32_t upper_bound = state->mtf_upper_bound;
  uint32_t* mtf = &state->mtf[1];
  uint8_t* mtf_u8 = (uint8_t*)mtf;

  const uint8_t b0123[4] = {0, 1, 2, 3};
  uint32_t pattern;
  
# 934 "project/brotli/c/dec/decode.c" 3 4
 __builtin___memcpy_chk (
# 934 "project/brotli/c/dec/decode.c"
 &pattern
# 934 "project/brotli/c/dec/decode.c" 3 4
 , 
# 934 "project/brotli/c/dec/decode.c"
 &b0123, 4
# 934 "project/brotli/c/dec/decode.c" 3 4
 , __builtin_object_size (
# 934 "project/brotli/c/dec/decode.c"
 &pattern
# 934 "project/brotli/c/dec/decode.c" 3 4
 , 0))
# 934 "project/brotli/c/dec/decode.c"
                            ;


  mtf[0] = pattern;
  do {
    pattern += 0x04040404;
    mtf[i] = pattern;
    i++;
  } while (i <= upper_bound);


  upper_bound = 0;
  for (i = 0; i < v_len; ++i) {
    int index = v[i];
    uint8_t value = mtf_u8[index];
    upper_bound |= v[i];
    v[i] = value;
    mtf_u8[-1] = value;
    do {
      index--;
      mtf_u8[index + 1] = mtf_u8[index];
    } while (index >= 0);
  }

  state->mtf_upper_bound = upper_bound >> 2;
}


static BrotliDecoderErrorCode HuffmanTreeGroupDecode(
    HuffmanTreeGroup* group, BrotliDecoderStateInternal* s) {
  BrotliMetablockHeaderArena* h = &s->arena.header;
  if (h->substate_tree_group != BROTLI_STATE_TREE_GROUP_LOOP) {
    h->next = group->codes;
    h->htree_index = 0;
    h->substate_tree_group = BROTLI_STATE_TREE_GROUP_LOOP;
  }
  while (h->htree_index < group->num_htrees) {
    uint32_t table_size;
    BrotliDecoderErrorCode result = ReadHuffmanCode(group->alphabet_size_max,
        group->alphabet_size_limit, h->next, &table_size, s);
    if (result != BROTLI_DECODER_SUCCESS) return result;
    group->htrees[h->htree_index] = h->next;
    h->next += table_size;
    ++h->htree_index;
  }
  h->substate_tree_group = BROTLI_STATE_TREE_GROUP_NONE;
  return BROTLI_DECODER_SUCCESS;
}
# 991 "project/brotli/c/dec/decode.c"
static BrotliDecoderErrorCode DecodeContextMap(uint32_t context_map_size,
                                               uint32_t* num_htrees,
                                               uint8_t** context_map_arg,
                                               BrotliDecoderStateInternal* s) {
  BrotliBitReader* br = &s->br;
  BrotliDecoderErrorCode result = BROTLI_DECODER_SUCCESS;
  BrotliMetablockHeaderArena* h = &s->arena.header;

  switch ((int)h->substate_context_map) {
    case BROTLI_STATE_CONTEXT_MAP_NONE:
      result = DecodeVarLenUint8(s, br, num_htrees);
      if (result != BROTLI_DECODER_SUCCESS) {
        return result;
      }
      (*num_htrees)++;
      h->context_index = 0;
      ;
      ;
      *context_map_arg =
          (uint8_t*)s->alloc_func(s->memory_manager_opaque, (size_t)context_map_size);
      if (*context_map_arg == 0) {
        return ((void)(0), BROTLI_DECODER_ERROR_ALLOC_CONTEXT_MAP);
      }
      if (*num_htrees <= 1) {
        
# 1015 "project/brotli/c/dec/decode.c" 3 4
       __builtin___memset_chk (
# 1015 "project/brotli/c/dec/decode.c"
       *context_map_arg
# 1015 "project/brotli/c/dec/decode.c" 3 4
       , 
# 1015 "project/brotli/c/dec/decode.c"
       0, (size_t)context_map_size
# 1015 "project/brotli/c/dec/decode.c" 3 4
       , __builtin_object_size (
# 1015 "project/brotli/c/dec/decode.c"
       *context_map_arg
# 1015 "project/brotli/c/dec/decode.c" 3 4
       , 0))
# 1015 "project/brotli/c/dec/decode.c"
                                                            ;
        return BROTLI_DECODER_SUCCESS;
      }
      h->substate_context_map = BROTLI_STATE_CONTEXT_MAP_READ_PREFIX;


    case BROTLI_STATE_CONTEXT_MAP_READ_PREFIX: {
      uint32_t bits;


      if (!BrotliSafeGetBits(br, 5, &bits)) {
        return BROTLI_DECODER_NEEDS_MORE_INPUT;
      }
      if ((bits & 1) != 0) {
        h->max_run_length_prefix = (bits >> 1) + 1;
        BrotliDropBits(br, 5);
      } else {
        h->max_run_length_prefix = 0;
        BrotliDropBits(br, 1);
      }
      ;
      h->substate_context_map = BROTLI_STATE_CONTEXT_MAP_HUFFMAN;
    }


    case BROTLI_STATE_CONTEXT_MAP_HUFFMAN: {
      uint32_t alphabet_size = *num_htrees + h->max_run_length_prefix;
      result = ReadHuffmanCode(alphabet_size, alphabet_size,
                               h->context_map_table, 
# 1043 "project/brotli/c/dec/decode.c" 3 4
                                                    ((void *)0)
# 1043 "project/brotli/c/dec/decode.c"
                                                        , s);
      if (result != BROTLI_DECODER_SUCCESS) return result;
      h->code = 0xFFFF;
      h->substate_context_map = BROTLI_STATE_CONTEXT_MAP_DECODE;
    }


    case BROTLI_STATE_CONTEXT_MAP_DECODE: {
      uint32_t context_index = h->context_index;
      uint32_t max_run_length_prefix = h->max_run_length_prefix;
      uint8_t* context_map = *context_map_arg;
      uint32_t code = h->code;
      
# 1055 "project/brotli/c/dec/decode.c" 3 4
     int 
# 1055 "project/brotli/c/dec/decode.c"
                 skip_preamble = (code != 0xFFFF);
      while (context_index < context_map_size || skip_preamble) {
        if (!skip_preamble) {
          if (!SafeReadSymbol(h->context_map_table, br, &code)) {
            h->code = 0xFFFF;
            h->context_index = context_index;
            return BROTLI_DECODER_NEEDS_MORE_INPUT;
          }
          ;

          if (code == 0) {
            context_map[context_index++] = 0;
            continue;
          }
          if (code > max_run_length_prefix) {
            context_map[context_index++] =
                (uint8_t)(code - max_run_length_prefix);
            continue;
          }
        } else {
          skip_preamble = 
# 1075 "project/brotli/c/dec/decode.c" 3 4
                         0
# 1075 "project/brotli/c/dec/decode.c"
                                     ;
        }

        {
          uint32_t reps;
          if (!BrotliSafeReadBits(br, code, &reps)) {
            h->code = code;
            h->context_index = context_index;
            return BROTLI_DECODER_NEEDS_MORE_INPUT;
          }
          reps += 1U << code;
          ;
          if (context_index + reps > context_map_size) {
            return
                ((void)(0), BROTLI_DECODER_ERROR_FORMAT_CONTEXT_MAP_REPEAT);
          }
          do {
            context_map[context_index++] = 0;
          } while (--reps);
        }
      }
    }


    case BROTLI_STATE_CONTEXT_MAP_TRANSFORM: {
      uint32_t bits;
      if (!BrotliSafeReadBits(br, 1, &bits)) {
        h->substate_context_map = BROTLI_STATE_CONTEXT_MAP_TRANSFORM;
        return BROTLI_DECODER_NEEDS_MORE_INPUT;
      }
      if (bits != 0) {
        InverseMoveToFrontTransform(*context_map_arg, context_map_size, s);
      }
      h->substate_context_map = BROTLI_STATE_CONTEXT_MAP_NONE;
      return BROTLI_DECODER_SUCCESS;
    }

    default:
      return
          ((void)(0), BROTLI_DECODER_ERROR_UNREACHABLE);
  }
}



static inline __attribute__((__always_inline__)) 
# 1120 "project/brotli/c/dec/decode.c" 3 4
                    int 
# 1120 "project/brotli/c/dec/decode.c"
                                DecodeBlockTypeAndLength(
    int safe, BrotliDecoderStateInternal* s, int tree_type) {
  uint32_t max_block_type = s->num_block_types[tree_type];
  const HuffmanCode* type_tree = &s->block_type_trees[
      tree_type * 632];
  const HuffmanCode* len_tree = &s->block_len_trees[
      tree_type * 396];
  BrotliBitReader* br = &s->br;
  uint32_t* ringbuffer = &s->block_type_rb[tree_type * 2];
  uint32_t block_type;
  if (max_block_type <= 1) {
    return 
# 1131 "project/brotli/c/dec/decode.c" 3 4
          0
# 1131 "project/brotli/c/dec/decode.c"
                      ;
  }


  if (!safe) {
    block_type = ReadSymbol(type_tree, br);
    s->block_length[tree_type] = ReadBlockLength(len_tree, br);
  } else {
    BrotliBitReaderState memento;
    BrotliBitReaderSaveState(br, &memento);
    if (!SafeReadSymbol(type_tree, br, &block_type)) return 
# 1141 "project/brotli/c/dec/decode.c" 3 4
                                                           0
# 1141 "project/brotli/c/dec/decode.c"
                                                                       ;
    if (!SafeReadBlockLength(s, &s->block_length[tree_type], len_tree, br)) {
      s->substate_read_block_length = BROTLI_STATE_READ_BLOCK_LENGTH_NONE;
      BrotliBitReaderRestoreState(br, &memento);
      return 
# 1145 "project/brotli/c/dec/decode.c" 3 4
            0
# 1145 "project/brotli/c/dec/decode.c"
                        ;
    }
  }

  if (block_type == 1) {
    block_type = ringbuffer[1] + 1;
  } else if (block_type == 0) {
    block_type = ringbuffer[0];
  } else {
    block_type -= 2;
  }
  if (block_type >= max_block_type) {
    block_type -= max_block_type;
  }
  ringbuffer[0] = ringbuffer[1];
  ringbuffer[1] = block_type;
  return 
# 1161 "project/brotli/c/dec/decode.c" 3 4
        1
# 1161 "project/brotli/c/dec/decode.c"
                   ;
}

static inline __attribute__((__always_inline__)) void DetectTrivialLiteralBlockTypes(
    BrotliDecoderStateInternal* s) {
  size_t i;
  for (i = 0; i < 8; ++i) s->trivial_literal_contexts[i] = 0;
  for (i = 0; i < s->num_block_types[0]; i++) {
    size_t offset = i << 6;
    size_t error = 0;
    size_t sample = s->context_map[offset];
    size_t j;
    for (j = 0; j < (1u << 6);) {
      { if ((4 & 1) != 0) {error |= s->context_map[offset + j++] ^ sample;;} if ((4 & 2) != 0) {error |= s->context_map[offset + j++] ^ sample;; error |= s->context_map[offset + j++] ^ sample;;} if ((4 & 4) != 0) {error |= s->context_map[offset + j++] ^ sample;; error |= s->context_map[offset + j++] ^ sample;; error |= s->context_map[offset + j++] ^ sample;; error |= s->context_map[offset + j++] ^ sample;;} }
    }
    if (error == 0) {
      s->trivial_literal_contexts[i >> 5] |= 1u << (i & 31);
    }
  }
}

static inline __attribute__((__always_inline__)) void PrepareLiteralDecoding(BrotliDecoderStateInternal* s) {
  uint8_t context_mode;
  size_t trivial;
  uint32_t block_type = s->block_type_rb[1];
  uint32_t context_offset = block_type << 6;
  s->context_map_slice = s->context_map + context_offset;
  trivial = s->trivial_literal_contexts[block_type >> 5];
  s->trivial_literal_context = (trivial >> (block_type & 31)) & 1;
  s->literal_htree = s->literal_hgroup.htrees[s->context_map_slice[0]];
  context_mode = s->context_modes[block_type] & 3;
  s->context_lookup = (&_kBrotliContextLookupTable[(context_mode) << 9]);
}



static inline __attribute__((__always_inline__)) 
# 1197 "project/brotli/c/dec/decode.c" 3 4
                    int 
# 1197 "project/brotli/c/dec/decode.c"
                                DecodeLiteralBlockSwitchInternal(
    int safe, BrotliDecoderStateInternal* s) {
  if (!DecodeBlockTypeAndLength(safe, s, 0)) {
    return 
# 1200 "project/brotli/c/dec/decode.c" 3 4
          0
# 1200 "project/brotli/c/dec/decode.c"
                      ;
  }
  PrepareLiteralDecoding(s);
  return 
# 1203 "project/brotli/c/dec/decode.c" 3 4
        1
# 1203 "project/brotli/c/dec/decode.c"
                   ;
}

static void __attribute__((__noinline__)) DecodeLiteralBlockSwitch(BrotliDecoderStateInternal* s) {
  DecodeLiteralBlockSwitchInternal(0, s);
}

static 
# 1210 "project/brotli/c/dec/decode.c" 3 4
      int 
# 1210 "project/brotli/c/dec/decode.c"
                  __attribute__((__noinline__)) SafeDecodeLiteralBlockSwitch(
    BrotliDecoderStateInternal* s) {
  return DecodeLiteralBlockSwitchInternal(1, s);
}



static inline __attribute__((__always_inline__)) 
# 1217 "project/brotli/c/dec/decode.c" 3 4
                    int 
# 1217 "project/brotli/c/dec/decode.c"
                                DecodeCommandBlockSwitchInternal(
    int safe, BrotliDecoderStateInternal* s) {
  if (!DecodeBlockTypeAndLength(safe, s, 1)) {
    return 
# 1220 "project/brotli/c/dec/decode.c" 3 4
          0
# 1220 "project/brotli/c/dec/decode.c"
                      ;
  }
  s->htree_command = s->insert_copy_hgroup.htrees[s->block_type_rb[3]];
  return 
# 1223 "project/brotli/c/dec/decode.c" 3 4
        1
# 1223 "project/brotli/c/dec/decode.c"
                   ;
}

static void __attribute__((__noinline__)) DecodeCommandBlockSwitch(BrotliDecoderStateInternal* s) {
  DecodeCommandBlockSwitchInternal(0, s);
}

static 
# 1230 "project/brotli/c/dec/decode.c" 3 4
      int 
# 1230 "project/brotli/c/dec/decode.c"
                  __attribute__((__noinline__)) SafeDecodeCommandBlockSwitch(
    BrotliDecoderStateInternal* s) {
  return DecodeCommandBlockSwitchInternal(1, s);
}



static inline __attribute__((__always_inline__)) 
# 1237 "project/brotli/c/dec/decode.c" 3 4
                    int 
# 1237 "project/brotli/c/dec/decode.c"
                                DecodeDistanceBlockSwitchInternal(
    int safe, BrotliDecoderStateInternal* s) {
  if (!DecodeBlockTypeAndLength(safe, s, 2)) {
    return 
# 1240 "project/brotli/c/dec/decode.c" 3 4
          0
# 1240 "project/brotli/c/dec/decode.c"
                      ;
  }
  s->dist_context_map_slice = s->dist_context_map +
      (s->block_type_rb[5] << 2);
  s->dist_htree_index = s->dist_context_map_slice[s->distance_context];
  return 
# 1245 "project/brotli/c/dec/decode.c" 3 4
        1
# 1245 "project/brotli/c/dec/decode.c"
                   ;
}

static void __attribute__((__noinline__)) DecodeDistanceBlockSwitch(BrotliDecoderStateInternal* s) {
  DecodeDistanceBlockSwitchInternal(0, s);
}

static 
# 1252 "project/brotli/c/dec/decode.c" 3 4
      int 
# 1252 "project/brotli/c/dec/decode.c"
                  __attribute__((__noinline__)) SafeDecodeDistanceBlockSwitch(
    BrotliDecoderStateInternal* s) {
  return DecodeDistanceBlockSwitchInternal(1, s);
}

static size_t UnwrittenBytes(const BrotliDecoderStateInternal* s, 
# 1257 "project/brotli/c/dec/decode.c" 3 4
                                                         int 
# 1257 "project/brotli/c/dec/decode.c"
                                                                     wrap) {
  size_t pos = wrap && s->pos > s->ringbuffer_size ?
      (size_t)s->ringbuffer_size : (size_t)(s->pos);
  size_t partial_pos_rb = (s->rb_roundtrips * (size_t)s->ringbuffer_size) + pos;
  return partial_pos_rb - s->partial_pos_out;
}




static BrotliDecoderErrorCode __attribute__((__noinline__)) WriteRingBuffer(
    BrotliDecoderStateInternal* s, size_t* available_out, uint8_t** next_out,
    size_t* total_out, 
# 1269 "project/brotli/c/dec/decode.c" 3 4
                      int 
# 1269 "project/brotli/c/dec/decode.c"
                                  force) {
  uint8_t* start =
      s->ringbuffer + (s->partial_pos_out & (size_t)s->ringbuffer_mask);
  size_t to_write = UnwrittenBytes(s, 
# 1272 "project/brotli/c/dec/decode.c" 3 4
                                     1
# 1272 "project/brotli/c/dec/decode.c"
                                                );
  size_t num_written = *available_out;
  if (num_written > to_write) {
    num_written = to_write;
  }
  if (s->meta_block_remaining_len < 0) {
    return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_BLOCK_LENGTH_1);
  }
  if (next_out && !*next_out) {
    *next_out = start;
  } else {
    if (next_out) {
      
# 1284 "project/brotli/c/dec/decode.c" 3 4
     __builtin___memcpy_chk (
# 1284 "project/brotli/c/dec/decode.c"
     *next_out
# 1284 "project/brotli/c/dec/decode.c" 3 4
     , 
# 1284 "project/brotli/c/dec/decode.c"
     start, num_written
# 1284 "project/brotli/c/dec/decode.c" 3 4
     , __builtin_object_size (
# 1284 "project/brotli/c/dec/decode.c"
     *next_out
# 1284 "project/brotli/c/dec/decode.c" 3 4
     , 0))
# 1284 "project/brotli/c/dec/decode.c"
                                          ;
      *next_out += num_written;
    }
  }
  *available_out -= num_written;
  ;
  ;
  s->partial_pos_out += num_written;
  if (total_out) {
    *total_out = s->partial_pos_out;
  }
  if (num_written < to_write) {
    if (s->ringbuffer_size == (1 << s->window_bits) || force) {
      return BROTLI_DECODER_NEEDS_MORE_OUTPUT;
    } else {
      return BROTLI_DECODER_SUCCESS;
    }
  }

  if (s->ringbuffer_size == (1 << s->window_bits) &&
      s->pos >= s->ringbuffer_size) {
    s->pos -= s->ringbuffer_size;
    s->rb_roundtrips++;
    s->should_wrap_ringbuffer = (size_t)s->pos != 0 ? 1 : 0;
  }
  return BROTLI_DECODER_SUCCESS;
}

static void __attribute__((__noinline__)) WrapRingBuffer(BrotliDecoderStateInternal* s) {
  if (s->should_wrap_ringbuffer) {
    
# 1314 "project/brotli/c/dec/decode.c" 3 4
   __builtin___memcpy_chk (
# 1314 "project/brotli/c/dec/decode.c"
   s->ringbuffer
# 1314 "project/brotli/c/dec/decode.c" 3 4
   , 
# 1314 "project/brotli/c/dec/decode.c"
   s->ringbuffer_end, (size_t)s->pos
# 1314 "project/brotli/c/dec/decode.c" 3 4
   , __builtin_object_size (
# 1314 "project/brotli/c/dec/decode.c"
   s->ringbuffer
# 1314 "project/brotli/c/dec/decode.c" 3 4
   , 0))
# 1314 "project/brotli/c/dec/decode.c"
                                                           ;
    s->should_wrap_ringbuffer = 0;
  }
}
# 1326 "project/brotli/c/dec/decode.c"
static 
# 1326 "project/brotli/c/dec/decode.c" 3 4
      int 
# 1326 "project/brotli/c/dec/decode.c"
                  __attribute__((__noinline__)) BrotliEnsureRingBuffer(
    BrotliDecoderStateInternal* s) {
  uint8_t* old_ringbuffer = s->ringbuffer;
  if (s->ringbuffer_size == s->new_ringbuffer_size) {
    return 
# 1330 "project/brotli/c/dec/decode.c" 3 4
          1
# 1330 "project/brotli/c/dec/decode.c"
                     ;
  }

  s->ringbuffer = (uint8_t*)s->alloc_func(s->memory_manager_opaque, (size_t)(s->new_ringbuffer_size) + kRingBufferWriteAheadSlack)
                                                                    ;
  if (s->ringbuffer == 0) {

    s->ringbuffer = old_ringbuffer;
    return 
# 1338 "project/brotli/c/dec/decode.c" 3 4
          0
# 1338 "project/brotli/c/dec/decode.c"
                      ;
  }
  s->ringbuffer[s->new_ringbuffer_size - 2] = 0;
  s->ringbuffer[s->new_ringbuffer_size - 1] = 0;

  if (!!old_ringbuffer) {
    
# 1344 "project/brotli/c/dec/decode.c" 3 4
   __builtin___memcpy_chk (
# 1344 "project/brotli/c/dec/decode.c"
   s->ringbuffer
# 1344 "project/brotli/c/dec/decode.c" 3 4
   , 
# 1344 "project/brotli/c/dec/decode.c"
   old_ringbuffer, (size_t)s->pos
# 1344 "project/brotli/c/dec/decode.c" 3 4
   , __builtin_object_size (
# 1344 "project/brotli/c/dec/decode.c"
   s->ringbuffer
# 1344 "project/brotli/c/dec/decode.c" 3 4
   , 0))
# 1344 "project/brotli/c/dec/decode.c"
                                                        ;
    { s->free_func(s->memory_manager_opaque, old_ringbuffer); old_ringbuffer = 
# 1345 "project/brotli/c/dec/decode.c" 3 4
   ((void *)0)
# 1345 "project/brotli/c/dec/decode.c"
   ; };
  }

  s->ringbuffer_size = s->new_ringbuffer_size;
  s->ringbuffer_mask = s->new_ringbuffer_size - 1;
  s->ringbuffer_end = s->ringbuffer + s->ringbuffer_size;

  return 
# 1352 "project/brotli/c/dec/decode.c" 3 4
        1
# 1352 "project/brotli/c/dec/decode.c"
                   ;
}

static BrotliDecoderErrorCode __attribute__((__noinline__)) CopyUncompressedBlockToOutput(
    size_t* available_out, uint8_t** next_out, size_t* total_out,
    BrotliDecoderStateInternal* s) {

  if (!BrotliEnsureRingBuffer(s)) {
    return ((void)(0), BROTLI_DECODER_ERROR_ALLOC_RING_BUFFER_1);
  }


  for (;;) {
    switch (s->substate_uncompressed) {
      case BROTLI_STATE_UNCOMPRESSED_NONE: {
        int nbytes = (int)BrotliGetRemainingBytes(&s->br);
        if (nbytes > s->meta_block_remaining_len) {
          nbytes = s->meta_block_remaining_len;
        }
        if (s->pos + nbytes > s->ringbuffer_size) {
          nbytes = s->ringbuffer_size - s->pos;
        }

        BrotliCopyBytes(&s->ringbuffer[s->pos], &s->br, (size_t)nbytes);
        s->pos += nbytes;
        s->meta_block_remaining_len -= nbytes;
        if (s->pos < 1 << s->window_bits) {
          if (s->meta_block_remaining_len == 0) {
            return BROTLI_DECODER_SUCCESS;
          }
          return BROTLI_DECODER_NEEDS_MORE_INPUT;
        }
        s->substate_uncompressed = BROTLI_STATE_UNCOMPRESSED_WRITE;
      }


      case BROTLI_STATE_UNCOMPRESSED_WRITE: {
        BrotliDecoderErrorCode result;
        result = WriteRingBuffer(
            s, available_out, next_out, total_out, 
# 1391 "project/brotli/c/dec/decode.c" 3 4
                                                  0
# 1391 "project/brotli/c/dec/decode.c"
                                                              );
        if (result != BROTLI_DECODER_SUCCESS) {
          return result;
        }
        if (s->ringbuffer_size == 1 << s->window_bits) {
          s->max_distance = s->max_backward_distance;
        }
        s->substate_uncompressed = BROTLI_STATE_UNCOMPRESSED_NONE;
        break;
      }
    }
  }
  ;
}







static void __attribute__((__noinline__)) BrotliCalculateRingBufferSize(
    BrotliDecoderStateInternal* s) {
  int window_size = 1 << s->window_bits;
  int new_ringbuffer_size = window_size;


  int min_size = s->ringbuffer_size ? s->ringbuffer_size : 1024;
  int output_size;


  if (s->ringbuffer_size == window_size) {
    return;
  }


  if (s->is_metadata) {
    return;
  }

  if (!s->ringbuffer) {
    output_size = 0;
  } else {
    output_size = s->pos;
  }
  output_size += s->meta_block_remaining_len;
  min_size = min_size < output_size ? output_size : min_size;

  if (!!s->canny_ringbuffer_allocation) {



    while ((new_ringbuffer_size >> 1) >= min_size) {
      new_ringbuffer_size >>= 1;
    }
  }

  s->new_ringbuffer_size = new_ringbuffer_size;
}


static BrotliDecoderErrorCode ReadContextModes(BrotliDecoderStateInternal* s) {
  BrotliBitReader* br = &s->br;
  int i = s->loop_counter;

  while (i < (int)s->num_block_types[0]) {
    uint32_t bits;
    if (!BrotliSafeReadBits(br, 2, &bits)) {
      s->loop_counter = i;
      return BROTLI_DECODER_NEEDS_MORE_INPUT;
    }
    s->context_modes[i] = (uint8_t)bits;
    ;
    i++;
  }
  return BROTLI_DECODER_SUCCESS;
}

static inline __attribute__((__always_inline__)) void TakeDistanceFromRingBuffer(BrotliDecoderStateInternal* s) {
  int offset = s->distance_code - 3;
  if (s->distance_code <= 3) {

    s->distance_context = 1 >> s->distance_code;
    s->distance_code = s->dist_rb[(s->dist_rb_idx - offset) & 3];
    s->dist_rb_idx -= s->distance_context;
  } else {
    int index_delta = 3;
    int delta;
    int base = s->distance_code - 10;
    if (s->distance_code < 10) {
      base = s->distance_code - 4;
    } else {
      index_delta = 2;
    }

    delta = ((0x605142 >> (4 * base)) & 0xF) - 3;
    s->distance_code = s->dist_rb[(s->dist_rb_idx + index_delta) & 0x3] + delta;
    if (s->distance_code <= 0) {


      s->distance_code = 0x7FFFFFFF;
    }
  }
}

static inline __attribute__((__always_inline__)) 
# 1496 "project/brotli/c/dec/decode.c" 3 4
                    int 
# 1496 "project/brotli/c/dec/decode.c"
                                SafeReadBits(
    BrotliBitReader* const br, uint32_t n_bits, uint32_t* val) {
  if (n_bits != 0) {
    return BrotliSafeReadBits(br, n_bits, val);
  } else {
    *val = 0;
    return 
# 1502 "project/brotli/c/dec/decode.c" 3 4
          1
# 1502 "project/brotli/c/dec/decode.c"
                     ;
  }
}

static inline __attribute__((__always_inline__)) 
# 1506 "project/brotli/c/dec/decode.c" 3 4
                    int 
# 1506 "project/brotli/c/dec/decode.c"
                                SafeReadBits32(
    BrotliBitReader* const br, uint32_t n_bits, uint32_t* val) {
  if (n_bits != 0) {
    return BrotliSafeReadBits32(br, n_bits, val);
  } else {
    *val = 0;
    return 
# 1512 "project/brotli/c/dec/decode.c" 3 4
          1
# 1512 "project/brotli/c/dec/decode.c"
                     ;
  }
}
# 1583 "project/brotli/c/dec/decode.c"
static void CalculateDistanceLut(BrotliDecoderStateInternal* s) {
  BrotliMetablockBodyArena* b = &s->arena.body;
  uint32_t npostfix = s->distance_postfix_bits;
  uint32_t ndirect = s->num_direct_distance_codes;
  uint32_t alphabet_size_limit = s->distance_hgroup.alphabet_size_limit;
  uint32_t postfix = 1u << npostfix;
  uint32_t j;
  uint32_t bits = 1;
  uint32_t half = 0;


  uint32_t i = 16;


  for (j = 0; j < ndirect; ++j) {
    b->dist_extra_bits[i] = 0;
    b->dist_offset[i] = j + 1;
    ++i;
  }


  while (i < alphabet_size_limit) {
    uint32_t base = ndirect + ((((2 + half) << bits) - 4) << npostfix) + 1;

    for (j = 0; j < postfix; ++j) {
      b->dist_extra_bits[i] = (uint8_t)bits;
      b->dist_offset[i] = base + j;
      ++i;
    }
    bits = bits + half;
    half = half ^ 1;
  }
}


static inline __attribute__((__always_inline__)) 
# 1618 "project/brotli/c/dec/decode.c" 3 4
                    int 
# 1618 "project/brotli/c/dec/decode.c"
                                ReadDistanceInternal(
    int safe, BrotliDecoderStateInternal* s, BrotliBitReader* br) {
  BrotliMetablockBodyArena* b = &s->arena.body;
  uint32_t code;
  uint32_t bits;
  BrotliBitReaderState memento;
  HuffmanCode* distance_tree = s->distance_hgroup.htrees[s->dist_htree_index];
  if (!safe) {
    code = ReadSymbol(distance_tree, br);
  } else {
    BrotliBitReaderSaveState(br, &memento);
    if (!SafeReadSymbol(distance_tree, br, &code)) {
      return 
# 1630 "project/brotli/c/dec/decode.c" 3 4
            0
# 1630 "project/brotli/c/dec/decode.c"
                        ;
    }
  }
  --s->block_length[2];


  s->distance_context = 0;
  if ((code & ~0xFu) == 0) {
    s->distance_code = (int)code;
    TakeDistanceFromRingBuffer(s);
    return 
# 1640 "project/brotli/c/dec/decode.c" 3 4
          1
# 1640 "project/brotli/c/dec/decode.c"
                     ;
  }
  if (!safe) {
    bits = BrotliReadBits32(br, b->dist_extra_bits[code]);
  } else {
    if (!SafeReadBits32(br, b->dist_extra_bits[code], &bits)) {
      ++s->block_length[2];
      BrotliBitReaderRestoreState(br, &memento);
      return 
# 1648 "project/brotli/c/dec/decode.c" 3 4
            0
# 1648 "project/brotli/c/dec/decode.c"
                        ;
    }
  }
  s->distance_code =
      (int)(b->dist_offset[code] + (bits << s->distance_postfix_bits));
  return 
# 1653 "project/brotli/c/dec/decode.c" 3 4
        1
# 1653 "project/brotli/c/dec/decode.c"
                   ;
}

static inline __attribute__((__always_inline__)) void ReadDistance(
    BrotliDecoderStateInternal* s, BrotliBitReader* br) {
  ReadDistanceInternal(0, s, br);
}

static inline __attribute__((__always_inline__)) 
# 1661 "project/brotli/c/dec/decode.c" 3 4
                    int 
# 1661 "project/brotli/c/dec/decode.c"
                                SafeReadDistance(
    BrotliDecoderStateInternal* s, BrotliBitReader* br) {
  return ReadDistanceInternal(1, s, br);
}

static inline __attribute__((__always_inline__)) 
# 1666 "project/brotli/c/dec/decode.c" 3 4
                    int 
# 1666 "project/brotli/c/dec/decode.c"
                                ReadCommandInternal(
    int safe, BrotliDecoderStateInternal* s, BrotliBitReader* br, int* insert_length) {
  uint32_t cmd_code;
  uint32_t insert_len_extra = 0;
  uint32_t copy_length;
  CmdLutElement v;
  BrotliBitReaderState memento;
  if (!safe) {
    cmd_code = ReadSymbol(s->htree_command, br);
  } else {
    BrotliBitReaderSaveState(br, &memento);
    if (!SafeReadSymbol(s->htree_command, br, &cmd_code)) {
      return 
# 1678 "project/brotli/c/dec/decode.c" 3 4
            0
# 1678 "project/brotli/c/dec/decode.c"
                        ;
    }
  }
  v = kCmdLut[cmd_code];
  s->distance_code = v.distance_code;
  s->distance_context = v.context;
  s->dist_htree_index = s->dist_context_map_slice[s->distance_context];
  *insert_length = v.insert_len_offset;
  if (!safe) {
    if ((__builtin_expect(v.insert_len_extra_bits != 0, 0))) {
      insert_len_extra = BrotliReadBits24(br, v.insert_len_extra_bits);
    }
    copy_length = BrotliReadBits24(br, v.copy_len_extra_bits);
  } else {
    if (!SafeReadBits(br, v.insert_len_extra_bits, &insert_len_extra) ||
        !SafeReadBits(br, v.copy_len_extra_bits, &copy_length)) {
      BrotliBitReaderRestoreState(br, &memento);
      return 
# 1695 "project/brotli/c/dec/decode.c" 3 4
            0
# 1695 "project/brotli/c/dec/decode.c"
                        ;
    }
  }
  s->copy_length = (int)copy_length + v.copy_len_offset;
  --s->block_length[1];
  *insert_length += (int)insert_len_extra;
  return 
# 1701 "project/brotli/c/dec/decode.c" 3 4
        1
# 1701 "project/brotli/c/dec/decode.c"
                   ;
}

static inline __attribute__((__always_inline__)) void ReadCommand(
    BrotliDecoderStateInternal* s, BrotliBitReader* br, int* insert_length) {
  ReadCommandInternal(0, s, br, insert_length);
}

static inline __attribute__((__always_inline__)) 
# 1709 "project/brotli/c/dec/decode.c" 3 4
                    int 
# 1709 "project/brotli/c/dec/decode.c"
                                SafeReadCommand(
    BrotliDecoderStateInternal* s, BrotliBitReader* br, int* insert_length) {
  return ReadCommandInternal(1, s, br, insert_length);
}

static inline __attribute__((__always_inline__)) 
# 1714 "project/brotli/c/dec/decode.c" 3 4
                    int 
# 1714 "project/brotli/c/dec/decode.c"
                                CheckInputAmount(
    int safe, BrotliBitReader* const br, size_t num) {
  if (safe) {
    return 
# 1717 "project/brotli/c/dec/decode.c" 3 4
          1
# 1717 "project/brotli/c/dec/decode.c"
                     ;
  }
  return BrotliCheckInputAmount(br, num);
}
# 1734 "project/brotli/c/dec/decode.c"
static inline __attribute__((__always_inline__)) BrotliDecoderErrorCode ProcessCommandsInternal(
    int safe, BrotliDecoderStateInternal* s) {
  int pos = s->pos;
  int i = s->loop_counter;
  BrotliDecoderErrorCode result = BROTLI_DECODER_SUCCESS;
  BrotliBitReader* br = &s->br;

  if (!CheckInputAmount(safe, br, 28)) {
    result = BROTLI_DECODER_NEEDS_MORE_INPUT;
    goto saveStateAndReturn;
  }
  if (!safe) {
    (void)(BrotliWarmupBitReader(br));
  }


  if (s->state == BROTLI_STATE_COMMAND_BEGIN) {
    goto CommandBegin;
  } else if (s->state == BROTLI_STATE_COMMAND_INNER) {
    goto CommandInner;
  } else if (s->state == BROTLI_STATE_COMMAND_POST_DECODE_LITERALS) {
    goto CommandPostDecodeLiterals;
  } else if (s->state == BROTLI_STATE_COMMAND_POST_WRAP_COPY) {
    goto CommandPostWrapCopy;
  } else {
    return ((void)(0), BROTLI_DECODER_ERROR_UNREACHABLE);
  }

CommandBegin:
  if (safe) {
    s->state = BROTLI_STATE_COMMAND_BEGIN;
  }
  if (!CheckInputAmount(safe, br, 28)) {
    s->state = BROTLI_STATE_COMMAND_BEGIN;
    result = BROTLI_DECODER_NEEDS_MORE_INPUT;
    goto saveStateAndReturn;
  }
  if ((__builtin_expect(s->block_length[1] == 0, 0))) {
    { if (safe) { if (!SafeDecodeCommandBlockSwitch(s)) { result = BROTLI_DECODER_NEEDS_MORE_INPUT; goto saveStateAndReturn; } } else { DecodeCommandBlockSwitch(s); } };
    goto CommandBegin;
  }

  { if (safe) { if (!SafeReadCommand(s, br, &i)) { result = BROTLI_DECODER_NEEDS_MORE_INPUT; goto saveStateAndReturn; } } else { ReadCommand(s, br, &i); } };
 
                                      ;
  if (i == 0) {
    goto CommandPostDecodeLiterals;
  }
  s->meta_block_remaining_len -= i;

CommandInner:
  if (safe) {
    s->state = BROTLI_STATE_COMMAND_INNER;
  }

  if (s->trivial_literal_context) {
    uint32_t bits;
    uint32_t value;
    PreloadSymbol(safe, s->literal_htree, br, &bits, &value);
    do {
      if (!CheckInputAmount(safe, br, 28)) {
        s->state = BROTLI_STATE_COMMAND_INNER;
        result = BROTLI_DECODER_NEEDS_MORE_INPUT;
        goto saveStateAndReturn;
      }
      if ((__builtin_expect(s->block_length[0] == 0, 0))) {
        { if (safe) { if (!SafeDecodeLiteralBlockSwitch(s)) { result = BROTLI_DECODER_NEEDS_MORE_INPUT; goto saveStateAndReturn; } } else { DecodeLiteralBlockSwitch(s); } };
        PreloadSymbol(safe, s->literal_htree, br, &bits, &value);
        if (!s->trivial_literal_context) goto CommandInner;
      }
      if (!safe) {
        s->ringbuffer[pos] =
            (uint8_t)ReadPreloadedSymbol(s->literal_htree, br, &bits, &value);
      } else {
        uint32_t literal;
        if (!SafeReadSymbol(s->literal_htree, br, &literal)) {
          result = BROTLI_DECODER_NEEDS_MORE_INPUT;
          goto saveStateAndReturn;
        }
        s->ringbuffer[pos] = (uint8_t)literal;
      }
      --s->block_length[0];
      ;
      ++pos;
      if ((__builtin_expect(pos == s->ringbuffer_size, 0))) {
        s->state = BROTLI_STATE_COMMAND_INNER_WRITE;
        --i;
        goto saveStateAndReturn;
      }
    } while (--i != 0);
  } else {
    uint8_t p1 = s->ringbuffer[(pos - 1) & s->ringbuffer_mask];
    uint8_t p2 = s->ringbuffer[(pos - 2) & s->ringbuffer_mask];
    do {
      const HuffmanCode* hc;
      uint8_t context;
      if (!CheckInputAmount(safe, br, 28)) {
        s->state = BROTLI_STATE_COMMAND_INNER;
        result = BROTLI_DECODER_NEEDS_MORE_INPUT;
        goto saveStateAndReturn;
      }
      if ((__builtin_expect(s->block_length[0] == 0, 0))) {
        { if (safe) { if (!SafeDecodeLiteralBlockSwitch(s)) { result = BROTLI_DECODER_NEEDS_MORE_INPUT; goto saveStateAndReturn; } } else { DecodeLiteralBlockSwitch(s); } };
        if (s->trivial_literal_context) goto CommandInner;
      }
      context = ((s->context_lookup)[p1] | ((s->context_lookup) + 256)[p2]);
      ;
      hc = s->literal_hgroup.htrees[s->context_map_slice[context]];
      p2 = p1;
      if (!safe) {
        p1 = (uint8_t)ReadSymbol(hc, br);
      } else {
        uint32_t literal;
        if (!SafeReadSymbol(hc, br, &literal)) {
          result = BROTLI_DECODER_NEEDS_MORE_INPUT;
          goto saveStateAndReturn;
        }
        p1 = (uint8_t)literal;
      }
      s->ringbuffer[pos] = p1;
      --s->block_length[0];
      ;
      ;
      ++pos;
      if ((__builtin_expect(pos == s->ringbuffer_size, 0))) {
        s->state = BROTLI_STATE_COMMAND_INNER_WRITE;
        --i;
        goto saveStateAndReturn;
      }
    } while (--i != 0);
  }
  ;
  if ((__builtin_expect(s->meta_block_remaining_len <= 0, 0))) {
    s->state = BROTLI_STATE_METABLOCK_DONE;
    goto saveStateAndReturn;
  }

CommandPostDecodeLiterals:
  if (safe) {
    s->state = BROTLI_STATE_COMMAND_POST_DECODE_LITERALS;
  }
  if (s->distance_code >= 0) {

    s->distance_context = s->distance_code ? 0 : 1;
    --s->dist_rb_idx;
    s->distance_code = s->dist_rb[s->dist_rb_idx & 3];
  } else {

    if ((__builtin_expect(s->block_length[2] == 0, 0))) {
      { if (safe) { if (!SafeDecodeDistanceBlockSwitch(s)) { result = BROTLI_DECODER_NEEDS_MORE_INPUT; goto saveStateAndReturn; } } else { DecodeDistanceBlockSwitch(s); } };
    }
    { if (safe) { if (!SafeReadDistance(s, br)) { result = BROTLI_DECODER_NEEDS_MORE_INPUT; goto saveStateAndReturn; } } else { ReadDistance(s, br); } };
  }
 
                                     ;
  if (s->max_distance != s->max_backward_distance) {
    s->max_distance =
        (pos < s->max_backward_distance) ? pos : s->max_backward_distance;
  }
  i = s->copy_length;


  if (s->distance_code > s->max_distance) {



    if (s->distance_code > 0x7FFFFFFC) {
     

                                                                 ;
      return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_DISTANCE);
    }
    if (i >= 4 &&
        i <= 24) {
      int address = s->distance_code - s->max_distance - 1;
      const BrotliDictionary* words = s->dictionary;
      const BrotliTransforms* transforms = s->transforms;
      int offset = (int)s->dictionary->offsets_by_length[i];
      uint32_t shift = s->dictionary->size_bits_by_length[i];

      int mask = (int)BitMask(shift);
      int word_idx = address & mask;
      int transform_idx = address >> shift;

      s->dist_rb_idx += s->distance_context;
      offset += word_idx * i;
      if ((__builtin_expect(!words->data, 0))) {
        return ((void)(0), BROTLI_DECODER_ERROR_DICTIONARY_NOT_SET);
      }
      if (transform_idx < (int)transforms->num_transforms) {
        const uint8_t* word = &words->data[offset];
        int len = i;
        if (transform_idx == transforms->cutOffTransforms[0]) {
          
# 1927 "project/brotli/c/dec/decode.c" 3 4
         __builtin___memcpy_chk (
# 1927 "project/brotli/c/dec/decode.c"
         &s->ringbuffer[pos]
# 1927 "project/brotli/c/dec/decode.c" 3 4
         , 
# 1927 "project/brotli/c/dec/decode.c"
         word, (size_t)len
# 1927 "project/brotli/c/dec/decode.c" 3 4
         , __builtin_object_size (
# 1927 "project/brotli/c/dec/decode.c"
         &s->ringbuffer[pos]
# 1927 "project/brotli/c/dec/decode.c" 3 4
         , 0))
# 1927 "project/brotli/c/dec/decode.c"
                                                       ;
         
                                 ;
        } else {
          len = BrotliTransformDictionaryWord(&s->ringbuffer[pos], word, len,
              transforms, transform_idx);
         

                                                                        ;
        }
        pos += len;
        s->meta_block_remaining_len -= len;
        if (pos >= s->ringbuffer_size) {
          s->state = BROTLI_STATE_COMMAND_POST_WRITE_1;
          goto saveStateAndReturn;
        }
      } else {
       

                                                                   ;
        return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_TRANSFORM);
      }
    } else {
     

                                                                 ;
      return ((void)(0), BROTLI_DECODER_ERROR_FORMAT_DICTIONARY);
    }
  } else {
    int src_start = (pos - s->distance_code) & s->ringbuffer_mask;
    uint8_t* copy_dst = &s->ringbuffer[pos];
    uint8_t* copy_src = &s->ringbuffer[src_start];
    int dst_end = pos + i;
    int src_end = src_start + i;

    s->dist_rb[s->dist_rb_idx & 3] = s->distance_code;
    ++s->dist_rb_idx;
    s->meta_block_remaining_len -= i;



    memmove16(copy_dst, copy_src);
    if (src_end > pos && dst_end > src_start) {

      goto CommandPostWrapCopy;
    }
    if (dst_end >= s->ringbuffer_size || src_end >= s->ringbuffer_size) {

      goto CommandPostWrapCopy;
    }
    pos += i;
    if (i > 16) {
      if (i > 32) {
        
# 1980 "project/brotli/c/dec/decode.c" 3 4
       __builtin___memcpy_chk (
# 1980 "project/brotli/c/dec/decode.c"
       copy_dst + 16
# 1980 "project/brotli/c/dec/decode.c" 3 4
       , 
# 1980 "project/brotli/c/dec/decode.c"
       copy_src + 16, (size_t)(i - 16)
# 1980 "project/brotli/c/dec/decode.c" 3 4
       , __builtin_object_size (
# 1980 "project/brotli/c/dec/decode.c"
       copy_dst + 16
# 1980 "project/brotli/c/dec/decode.c" 3 4
       , 0))
# 1980 "project/brotli/c/dec/decode.c"
                                                             ;
      } else {


        memmove16(copy_dst + 16, copy_src + 16);
      }
    }
  }
  ;
  if (s->meta_block_remaining_len <= 0) {

    s->state = BROTLI_STATE_METABLOCK_DONE;
    goto saveStateAndReturn;
  } else {
    goto CommandBegin;
  }
CommandPostWrapCopy:
  {
    int wrap_guard = s->ringbuffer_size - pos;
    while (--i >= 0) {
      s->ringbuffer[pos] =
          s->ringbuffer[(pos - s->distance_code) & s->ringbuffer_mask];
      ++pos;
      if ((__builtin_expect(--wrap_guard == 0, 0))) {
        s->state = BROTLI_STATE_COMMAND_POST_WRITE_2;
        goto saveStateAndReturn;
      }
    }
  }
  if (s->meta_block_remaining_len <= 0) {

    s->state = BROTLI_STATE_METABLOCK_DONE;
    goto saveStateAndReturn;
  } else {
    goto CommandBegin;
  }

saveStateAndReturn:
  s->pos = pos;
  s->loop_counter = i;
  return result;
}



static __attribute__((__noinline__)) BrotliDecoderErrorCode ProcessCommands(
    BrotliDecoderStateInternal* s) {
  return ProcessCommandsInternal(0, s);
}

static __attribute__((__noinline__)) BrotliDecoderErrorCode SafeProcessCommands(
    BrotliDecoderStateInternal* s) {
  return ProcessCommandsInternal(1, s);
}

BrotliDecoderResult BrotliDecoderDecompress(
    size_t encoded_size, const uint8_t* encoded_buffer, size_t* decoded_size,
    uint8_t* decoded_buffer) {
  BrotliDecoderStateInternal s;
  BrotliDecoderResult result;
  size_t total_out = 0;
  size_t available_in = encoded_size;
  const uint8_t* next_in = encoded_buffer;
  size_t available_out = *decoded_size;
  uint8_t* next_out = decoded_buffer;
  if (!BrotliDecoderStateInit(&s, 0, 0, 0)) {
    return BROTLI_DECODER_RESULT_ERROR;
  }
  result = BrotliDecoderDecompressStream(
      &s, &available_in, &next_in, &available_out, &next_out, &total_out);
  *decoded_size = total_out;
  BrotliDecoderStateCleanup(&s);
  if (result != BROTLI_DECODER_RESULT_SUCCESS) {
    result = BROTLI_DECODER_RESULT_ERROR;
  }
  return result;
}
# 2069 "project/brotli/c/dec/decode.c"
BrotliDecoderResult BrotliDecoderDecompressStream(
    BrotliDecoderStateInternal* s, size_t* available_in, const uint8_t** next_in,
    size_t* available_out, uint8_t** next_out, size_t* total_out) {
  BrotliDecoderErrorCode result = BROTLI_DECODER_SUCCESS;
  BrotliBitReader* br = &s->br;

  if (total_out) {
    *total_out = s->partial_pos_out;
  }

  if ((int)s->error_code < 0) {
    return BROTLI_DECODER_RESULT_ERROR;
  }
  if (*available_out && (!next_out || !*next_out)) {
    return SaveErrorCode(
        s, ((void)(0), BROTLI_DECODER_ERROR_INVALID_ARGUMENTS));
  }
  if (!*available_out) next_out = 0;
  if (s->buffer_length == 0) {
    br->avail_in = *available_in;
    br->next_in = *next_in;
  } else {



    result = BROTLI_DECODER_NEEDS_MORE_INPUT;
    br->next_in = &s->buffer.u8[0];
  }

  for (;;) {
    if (result != BROTLI_DECODER_SUCCESS) {

      if (result == BROTLI_DECODER_NEEDS_MORE_INPUT) {
        if (s->ringbuffer != 0) {
          BrotliDecoderErrorCode intermediate_result = WriteRingBuffer(s,
              available_out, next_out, total_out, 
# 2104 "project/brotli/c/dec/decode.c" 3 4
                                                 1
# 2104 "project/brotli/c/dec/decode.c"
                                                            );

          if ((int)intermediate_result < 0) {
            result = intermediate_result;
            break;
          }
        }
        if (s->buffer_length != 0) {
          if (br->avail_in == 0) {



            s->buffer_length = 0;

            result = BROTLI_DECODER_SUCCESS;
            br->avail_in = *available_in;
            br->next_in = *next_in;
            continue;
          } else if (*available_in != 0) {


            result = BROTLI_DECODER_SUCCESS;
            s->buffer.u8[s->buffer_length] = **next_in;
            s->buffer_length++;
            br->avail_in = s->buffer_length;
            (*next_in)++;
            (*available_in)--;

            continue;
          }

          break;
        } else {

          *next_in = br->next_in;
          *available_in = br->avail_in;
          while (*available_in) {
            s->buffer.u8[s->buffer_length] = **next_in;
            s->buffer_length++;
            (*next_in)++;
            (*available_in)--;
          }
          break;
        }

      }



      if (s->buffer_length != 0) {


        s->buffer_length = 0;
      } else {



        BrotliBitReaderUnload(br);
        *available_in = br->avail_in;
        *next_in = br->next_in;
      }
      break;
    }
    switch (s->state) {
      case BROTLI_STATE_UNINITED:

        if (!BrotliWarmupBitReader(br)) {
          result = BROTLI_DECODER_NEEDS_MORE_INPUT;
          break;
        }

        result = DecodeWindowBits(s, br);
        if (result != BROTLI_DECODER_SUCCESS) {
          break;
        }
        if (s->large_window) {
          s->state = BROTLI_STATE_LARGE_WINDOW_BITS;
          break;
        }
        s->state = BROTLI_STATE_INITIALIZE;
        break;

      case BROTLI_STATE_LARGE_WINDOW_BITS:
        if (!BrotliSafeReadBits(br, 6, &s->window_bits)) {
          result = BROTLI_DECODER_NEEDS_MORE_INPUT;
          break;
        }
        if (s->window_bits < 10 ||
            s->window_bits > 30) {
          result = ((void)(0), BROTLI_DECODER_ERROR_FORMAT_WINDOW_BITS);
          break;
        }
        s->state = BROTLI_STATE_INITIALIZE;


      case BROTLI_STATE_INITIALIZE:
        ;

        s->max_backward_distance = (1 << s->window_bits) - 16;


        s->block_type_trees = (HuffmanCode*)s->alloc_func(s->memory_manager_opaque, sizeof(HuffmanCode) * 3 * (632 + 396))

                                                                           ;
        if (s->block_type_trees == 0) {
          result = ((void)(0), BROTLI_DECODER_ERROR_ALLOC_BLOCK_TYPE_TREES);
          break;
        }
        s->block_len_trees =
            s->block_type_trees + 3 * 632;

        s->state = BROTLI_STATE_METABLOCK_BEGIN;


      case BROTLI_STATE_METABLOCK_BEGIN:
        BrotliDecoderStateMetablockBegin(s);
        ;
        s->state = BROTLI_STATE_METABLOCK_HEADER;


      case BROTLI_STATE_METABLOCK_HEADER:
        result = DecodeMetaBlockLength(s, br);
        if (result != BROTLI_DECODER_SUCCESS) {
          break;
        }
        ;
        ;
        ;
        ;
        if (s->is_metadata || s->is_uncompressed) {
          if (!BrotliJumpToByteBoundary(br)) {
            result = ((void)(0), BROTLI_DECODER_ERROR_FORMAT_PADDING_1);
            break;
          }
        }
        if (s->is_metadata) {
          s->state = BROTLI_STATE_METADATA;
          break;
        }
        if (s->meta_block_remaining_len == 0) {
          s->state = BROTLI_STATE_METABLOCK_DONE;
          break;
        }
        BrotliCalculateRingBufferSize(s);
        if (s->is_uncompressed) {
          s->state = BROTLI_STATE_UNCOMPRESSED;
          break;
        }
        s->state = BROTLI_STATE_BEFORE_COMPRESSED_METABLOCK_HEADER;


      case BROTLI_STATE_BEFORE_COMPRESSED_METABLOCK_HEADER: {
        BrotliMetablockHeaderArena* h = &s->arena.header;
        s->loop_counter = 0;

        h->sub_loop_counter = 0;

        h->symbol_lists =
            &h->symbols_lists_array[15 + 1];
        h->substate_huffman = BROTLI_STATE_HUFFMAN_NONE;
        h->substate_tree_group = BROTLI_STATE_TREE_GROUP_NONE;
        h->substate_context_map = BROTLI_STATE_CONTEXT_MAP_NONE;
        s->state = BROTLI_STATE_HUFFMAN_CODE_0;
      }


      case BROTLI_STATE_HUFFMAN_CODE_0:
        if (s->loop_counter >= 3) {
          s->state = BROTLI_STATE_METABLOCK_HEADER_2;
          break;
        }

        result = DecodeVarLenUint8(s, br, &s->num_block_types[s->loop_counter]);
        if (result != BROTLI_DECODER_SUCCESS) {
          break;
        }
        s->num_block_types[s->loop_counter]++;
        ;
        if (s->num_block_types[s->loop_counter] < 2) {
          s->loop_counter++;
          break;
        }
        s->state = BROTLI_STATE_HUFFMAN_CODE_1;


      case BROTLI_STATE_HUFFMAN_CODE_1: {
        uint32_t alphabet_size = s->num_block_types[s->loop_counter] + 2;
        int tree_offset = s->loop_counter * 632;
        result = ReadHuffmanCode(alphabet_size, alphabet_size,
            &s->block_type_trees[tree_offset], 
# 2293 "project/brotli/c/dec/decode.c" 3 4
                                              ((void *)0)
# 2293 "project/brotli/c/dec/decode.c"
                                                  , s);
        if (result != BROTLI_DECODER_SUCCESS) break;
        s->state = BROTLI_STATE_HUFFMAN_CODE_2;
      }


      case BROTLI_STATE_HUFFMAN_CODE_2: {
        uint32_t alphabet_size = 26;
        int tree_offset = s->loop_counter * 396;
        result = ReadHuffmanCode(alphabet_size, alphabet_size,
            &s->block_len_trees[tree_offset], 
# 2303 "project/brotli/c/dec/decode.c" 3 4
                                             ((void *)0)
# 2303 "project/brotli/c/dec/decode.c"
                                                 , s);
        if (result != BROTLI_DECODER_SUCCESS) break;
        s->state = BROTLI_STATE_HUFFMAN_CODE_3;
      }


      case BROTLI_STATE_HUFFMAN_CODE_3: {
        int tree_offset = s->loop_counter * 396;
        if (!SafeReadBlockLength(s, &s->block_length[s->loop_counter],
            &s->block_len_trees[tree_offset], br)) {
          result = BROTLI_DECODER_NEEDS_MORE_INPUT;
          break;
        }
        ;
        s->loop_counter++;
        s->state = BROTLI_STATE_HUFFMAN_CODE_0;
        break;
      }

      case BROTLI_STATE_UNCOMPRESSED: {
        result = CopyUncompressedBlockToOutput(
            available_out, next_out, total_out, s);
        if (result != BROTLI_DECODER_SUCCESS) {
          break;
        }
        s->state = BROTLI_STATE_METABLOCK_DONE;
        break;
      }

      case BROTLI_STATE_METADATA:
        for (; s->meta_block_remaining_len > 0; --s->meta_block_remaining_len) {
          uint32_t bits;

          if (!BrotliSafeReadBits(br, 8, &bits)) {
            result = BROTLI_DECODER_NEEDS_MORE_INPUT;
            break;
          }
        }
        if (result == BROTLI_DECODER_SUCCESS) {
          s->state = BROTLI_STATE_METABLOCK_DONE;
        }
        break;

      case BROTLI_STATE_METABLOCK_HEADER_2: {
        uint32_t bits;
        if (!BrotliSafeReadBits(br, 6, &bits)) {
          result = BROTLI_DECODER_NEEDS_MORE_INPUT;
          break;
        }
        s->distance_postfix_bits = bits & BitMask(2);
        bits >>= 2;
        s->num_direct_distance_codes = bits << s->distance_postfix_bits;
        ;
        ;
        s->context_modes =
            (uint8_t*)s->alloc_func(s->memory_manager_opaque, (size_t)s->num_block_types[0]);
        if (s->context_modes == 0) {
          result = ((void)(0), BROTLI_DECODER_ERROR_ALLOC_CONTEXT_MODES);
          break;
        }
        s->loop_counter = 0;
        s->state = BROTLI_STATE_CONTEXT_MODES;
      }


      case BROTLI_STATE_CONTEXT_MODES:
        result = ReadContextModes(s);
        if (result != BROTLI_DECODER_SUCCESS) {
          break;
        }
        s->state = BROTLI_STATE_CONTEXT_MAP_1;


      case BROTLI_STATE_CONTEXT_MAP_1:
        result = DecodeContextMap(
            s->num_block_types[0] << 6,
            &s->num_literal_htrees, &s->context_map, s);
        if (result != BROTLI_DECODER_SUCCESS) {
          break;
        }
        DetectTrivialLiteralBlockTypes(s);
        s->state = BROTLI_STATE_CONTEXT_MAP_2;


      case BROTLI_STATE_CONTEXT_MAP_2: {
        uint32_t npostfix = s->distance_postfix_bits;
        uint32_t ndirect = s->num_direct_distance_codes;
        uint32_t distance_alphabet_size_max = ( 16 + (ndirect) + ((24U) << ((npostfix) + 1)))
                                                        ;
        uint32_t distance_alphabet_size_limit = distance_alphabet_size_max;
        
# 2393 "project/brotli/c/dec/decode.c" 3 4
       int 
# 2393 "project/brotli/c/dec/decode.c"
                   allocation_success = 
# 2393 "project/brotli/c/dec/decode.c" 3 4
                                        1
# 2393 "project/brotli/c/dec/decode.c"
                                                   ;
        if (s->large_window) {
          BrotliDistanceCodeLimit limit = BrotliCalculateDistanceCodeLimit(
              0x7FFFFFFC, npostfix, ndirect);
          distance_alphabet_size_max = ( 16 + (ndirect) + ((62U) << ((npostfix) + 1)))
                                                                ;
          distance_alphabet_size_limit = limit.max_alphabet_size;
        }
        result = DecodeContextMap(
            s->num_block_types[2] << 2,
            &s->num_dist_htrees, &s->dist_context_map, s);
        if (result != BROTLI_DECODER_SUCCESS) {
          break;
        }
        allocation_success &= BrotliDecoderHuffmanTreeGroupInit(
            s, &s->literal_hgroup, 256,
            256, s->num_literal_htrees);
        allocation_success &= BrotliDecoderHuffmanTreeGroupInit(
            s, &s->insert_copy_hgroup, 704,
            704, s->num_block_types[1]);
        allocation_success &= BrotliDecoderHuffmanTreeGroupInit(
            s, &s->distance_hgroup, distance_alphabet_size_max,
            distance_alphabet_size_limit, s->num_dist_htrees);
        if (!allocation_success) {
          return SaveErrorCode(s,
              ((void)(0), BROTLI_DECODER_ERROR_ALLOC_TREE_GROUPS));
        }
        s->loop_counter = 0;
        s->state = BROTLI_STATE_TREE_GROUP;
      }


      case BROTLI_STATE_TREE_GROUP: {
        HuffmanTreeGroup* hgroup = 
# 2426 "project/brotli/c/dec/decode.c" 3 4
                                  ((void *)0)
# 2426 "project/brotli/c/dec/decode.c"
                                      ;
        switch (s->loop_counter) {
          case 0: hgroup = &s->literal_hgroup; break;
          case 1: hgroup = &s->insert_copy_hgroup; break;
          case 2: hgroup = &s->distance_hgroup; break;
          default: return SaveErrorCode(s, ((void)(0), BROTLI_DECODER_ERROR_UNREACHABLE)
                                               );
        }
        result = HuffmanTreeGroupDecode(hgroup, s);
        if (result != BROTLI_DECODER_SUCCESS) break;
        s->loop_counter++;
        if (s->loop_counter < 3) {
          break;
        }
        s->state = BROTLI_STATE_BEFORE_COMPRESSED_METABLOCK_BODY;
      }


      case BROTLI_STATE_BEFORE_COMPRESSED_METABLOCK_BODY:
        PrepareLiteralDecoding(s);
        s->dist_context_map_slice = s->dist_context_map;
        s->htree_command = s->insert_copy_hgroup.htrees[0];
        if (!BrotliEnsureRingBuffer(s)) {
          result = ((void)(0), BROTLI_DECODER_ERROR_ALLOC_RING_BUFFER_2);
          break;
        }
        CalculateDistanceLut(s);
        s->state = BROTLI_STATE_COMMAND_BEGIN;


      case BROTLI_STATE_COMMAND_BEGIN:

      case BROTLI_STATE_COMMAND_INNER:

      case BROTLI_STATE_COMMAND_POST_DECODE_LITERALS:

      case BROTLI_STATE_COMMAND_POST_WRAP_COPY:
        result = ProcessCommands(s);
        if (result == BROTLI_DECODER_NEEDS_MORE_INPUT) {
          result = SafeProcessCommands(s);
        }
        break;

      case BROTLI_STATE_COMMAND_INNER_WRITE:

      case BROTLI_STATE_COMMAND_POST_WRITE_1:

      case BROTLI_STATE_COMMAND_POST_WRITE_2:
        result = WriteRingBuffer(
            s, available_out, next_out, total_out, 
# 2475 "project/brotli/c/dec/decode.c" 3 4
                                                  0
# 2475 "project/brotli/c/dec/decode.c"
                                                              );
        if (result != BROTLI_DECODER_SUCCESS) {
          break;
        }
        WrapRingBuffer(s);
        if (s->ringbuffer_size == 1 << s->window_bits) {
          s->max_distance = s->max_backward_distance;
        }
        if (s->state == BROTLI_STATE_COMMAND_POST_WRITE_1) {
          if (s->meta_block_remaining_len == 0) {

            s->state = BROTLI_STATE_METABLOCK_DONE;
          } else {
            s->state = BROTLI_STATE_COMMAND_BEGIN;
          }
          break;
        } else if (s->state == BROTLI_STATE_COMMAND_POST_WRITE_2) {
          s->state = BROTLI_STATE_COMMAND_POST_WRAP_COPY;
        } else {
          if (s->loop_counter == 0) {
            if (s->meta_block_remaining_len == 0) {
              s->state = BROTLI_STATE_METABLOCK_DONE;
            } else {
              s->state = BROTLI_STATE_COMMAND_POST_DECODE_LITERALS;
            }
            break;
          }
          s->state = BROTLI_STATE_COMMAND_INNER;
        }
        break;

      case BROTLI_STATE_METABLOCK_DONE:
        if (s->meta_block_remaining_len < 0) {
          result = ((void)(0), BROTLI_DECODER_ERROR_FORMAT_BLOCK_LENGTH_2);
          break;
        }
        BrotliDecoderStateCleanupAfterMetablock(s);
        if (!s->is_last_metablock) {
          s->state = BROTLI_STATE_METABLOCK_BEGIN;
          break;
        }
        if (!BrotliJumpToByteBoundary(br)) {
          result = ((void)(0), BROTLI_DECODER_ERROR_FORMAT_PADDING_2);
          break;
        }
        if (s->buffer_length == 0) {
          BrotliBitReaderUnload(br);
          *available_in = br->avail_in;
          *next_in = br->next_in;
        }
        s->state = BROTLI_STATE_DONE;


      case BROTLI_STATE_DONE:
        if (s->ringbuffer != 0) {
          result = WriteRingBuffer(
              s, available_out, next_out, total_out, 
# 2531 "project/brotli/c/dec/decode.c" 3 4
                                                    1
# 2531 "project/brotli/c/dec/decode.c"
                                                               );
          if (result != BROTLI_DECODER_SUCCESS) {
            break;
          }
        }
        return SaveErrorCode(s, result);
    }
  }
  return SaveErrorCode(s, result);
}


# 2542 "project/brotli/c/dec/decode.c" 3 4
int 
# 2542 "project/brotli/c/dec/decode.c"
           BrotliDecoderHasMoreOutput(const BrotliDecoderStateInternal* s) {

  if ((int)s->error_code < 0) {
    return 
# 2545 "project/brotli/c/dec/decode.c" 3 4
          0
# 2545 "project/brotli/c/dec/decode.c"
                      ;
  }
  return 
# 2547 "project/brotli/c/dec/decode.c" 3 4
        (!!(
# 2547 "project/brotli/c/dec/decode.c"
        s->ringbuffer != 0 && UnwrittenBytes(s, 
# 2547 "project/brotli/c/dec/decode.c" 3 4
        0
# 2547 "project/brotli/c/dec/decode.c"
        ) != 0
# 2547 "project/brotli/c/dec/decode.c" 3 4
        ) ? 1 : 0)
                                                                 
# 2548 "project/brotli/c/dec/decode.c"
                                                                ;
}

const uint8_t* BrotliDecoderTakeOutput(BrotliDecoderStateInternal* s, size_t* size) {
  uint8_t* result = 0;
  size_t available_out = *size ? *size : 1u << 24;
  size_t requested_out = available_out;
  BrotliDecoderErrorCode status;
  if ((s->ringbuffer == 0) || ((int)s->error_code < 0)) {
    *size = 0;
    return 0;
  }
  WrapRingBuffer(s);
  status = WriteRingBuffer(s, &available_out, &result, 0, 
# 2561 "project/brotli/c/dec/decode.c" 3 4
                                                         1
# 2561 "project/brotli/c/dec/decode.c"
                                                                    );

  if (status == BROTLI_DECODER_SUCCESS ||
      status == BROTLI_DECODER_NEEDS_MORE_OUTPUT) {
    *size = requested_out - available_out;
  } else {


    if ((int)status < 0) SaveErrorCode(s, status);
    *size = 0;
    result = 0;
  }
  return result;
}


# 2576 "project/brotli/c/dec/decode.c" 3 4
int 
# 2576 "project/brotli/c/dec/decode.c"
           BrotliDecoderIsUsed(const BrotliDecoderStateInternal* s) {
  return 
# 2577 "project/brotli/c/dec/decode.c" 3 4
        (!!(
# 2577 "project/brotli/c/dec/decode.c"
        s->state != BROTLI_STATE_UNINITED || BrotliGetAvailableBits(&s->br) != 0
# 2577 "project/brotli/c/dec/decode.c" 3 4
        ) ? 1 : 0)
                                          
# 2578 "project/brotli/c/dec/decode.c"
                                         ;
}


# 2581 "project/brotli/c/dec/decode.c" 3 4
int 
# 2581 "project/brotli/c/dec/decode.c"
           BrotliDecoderIsFinished(const BrotliDecoderStateInternal* s) {
  return 
# 2582 "project/brotli/c/dec/decode.c" 3 4
        (!!(
# 2582 "project/brotli/c/dec/decode.c"
        s->state == BROTLI_STATE_DONE
# 2582 "project/brotli/c/dec/decode.c" 3 4
        ) ? 1 : 0) 
# 2582 "project/brotli/c/dec/decode.c"
                                                      &&
      !BrotliDecoderHasMoreOutput(s);
}

BrotliDecoderErrorCode BrotliDecoderGetErrorCode(const BrotliDecoderStateInternal* s) {
  return (BrotliDecoderErrorCode)s->error_code;
}

const char* BrotliDecoderErrorString(BrotliDecoderErrorCode c) {
  switch (c) {



    case BROTLI_DECODER_NO_ERROR: return "NO_ERROR"; case BROTLI_DECODER_SUCCESS: return "SUCCESS"; case BROTLI_DECODER_NEEDS_MORE_INPUT: return "NEEDS_MORE_INPUT"; case BROTLI_DECODER_NEEDS_MORE_OUTPUT: return "NEEDS_MORE_OUTPUT"; case BROTLI_DECODER_ERROR_FORMAT_EXUBERANT_NIBBLE: return "EXUBERANT_NIBBLE"; case BROTLI_DECODER_ERROR_FORMAT_RESERVED: return "RESERVED"; case BROTLI_DECODER_ERROR_FORMAT_EXUBERANT_META_NIBBLE: return "EXUBERANT_META_NIBBLE"; case BROTLI_DECODER_ERROR_FORMAT_SIMPLE_HUFFMAN_ALPHABET: return "SIMPLE_HUFFMAN_ALPHABET"; case BROTLI_DECODER_ERROR_FORMAT_SIMPLE_HUFFMAN_SAME: return "SIMPLE_HUFFMAN_SAME"; case BROTLI_DECODER_ERROR_FORMAT_CL_SPACE: return "CL_SPACE"; case BROTLI_DECODER_ERROR_FORMAT_HUFFMAN_SPACE: return "HUFFMAN_SPACE"; case BROTLI_DECODER_ERROR_FORMAT_CONTEXT_MAP_REPEAT: return "CONTEXT_MAP_REPEAT"; case BROTLI_DECODER_ERROR_FORMAT_BLOCK_LENGTH_1: return "BLOCK_LENGTH_1"; case BROTLI_DECODER_ERROR_FORMAT_BLOCK_LENGTH_2: return "BLOCK_LENGTH_2"; case BROTLI_DECODER_ERROR_FORMAT_TRANSFORM: return "TRANSFORM"; case BROTLI_DECODER_ERROR_FORMAT_DICTIONARY: return "DICTIONARY"; case BROTLI_DECODER_ERROR_FORMAT_WINDOW_BITS: return "WINDOW_BITS"; case BROTLI_DECODER_ERROR_FORMAT_PADDING_1: return "PADDING_1"; case BROTLI_DECODER_ERROR_FORMAT_PADDING_2: return "PADDING_2"; case BROTLI_DECODER_ERROR_FORMAT_DISTANCE: return "DISTANCE"; case BROTLI_DECODER_ERROR_DICTIONARY_NOT_SET: return "DICTIONARY_NOT_SET"; case BROTLI_DECODER_ERROR_INVALID_ARGUMENTS: return "INVALID_ARGUMENTS"; case BROTLI_DECODER_ERROR_ALLOC_CONTEXT_MODES: return "CONTEXT_MODES"; case BROTLI_DECODER_ERROR_ALLOC_TREE_GROUPS: return "TREE_GROUPS"; case BROTLI_DECODER_ERROR_ALLOC_CONTEXT_MAP: return "CONTEXT_MAP"; case BROTLI_DECODER_ERROR_ALLOC_RING_BUFFER_1: return "RING_BUFFER_1"; case BROTLI_DECODER_ERROR_ALLOC_RING_BUFFER_2: return "RING_BUFFER_2"; case BROTLI_DECODER_ERROR_ALLOC_BLOCK_TYPE_TREES: return "BLOCK_TYPE_TREES"; case BROTLI_DECODER_ERROR_UNREACHABLE: return "UNREACHABLE";


    default: return "INVALID";
  }
}

uint32_t BrotliDecoderVersion() {
  return 0x1000009;
}
