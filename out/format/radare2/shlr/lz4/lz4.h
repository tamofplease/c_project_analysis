# 1 "project/radare2/shlr/lz4/lz4.h"
# 35 "project/radare2/shlr/lz4/lz4.h"
#if defined (__cplusplus)
extern "C" {
#endif

#ifndef LZ4_H_2983827168210
#define LZ4_H_2983827168210 


#include <stddef.h>
# 85 "project/radare2/shlr/lz4/lz4.h"
#ifndef LZ4LIB_VISIBILITY
# if defined(__GNUC__) && (__GNUC__ >= 4)
#define LZ4LIB_VISIBILITY __attribute__ ((visibility ("default")))
# else
#define LZ4LIB_VISIBILITY 
# endif
#endif
#if defined(LZ4_DLL_EXPORT) && (LZ4_DLL_EXPORT==1)
#define LZ4LIB_API __declspec(dllexport) LZ4LIB_VISIBILITY
#elif defined(LZ4_DLL_IMPORT) && (LZ4_DLL_IMPORT==1)
#define LZ4LIB_API __declspec(dllimport) LZ4LIB_VISIBILITY
#else
#define LZ4LIB_API LZ4LIB_VISIBILITY
#endif


#define LZ4_VERSION_MAJOR 1
#define LZ4_VERSION_MINOR 9
#define LZ4_VERSION_RELEASE 3

#define LZ4_VERSION_NUMBER (LZ4_VERSION_MAJOR *100*100 + LZ4_VERSION_MINOR *100 + LZ4_VERSION_RELEASE)

#define LZ4_LIB_VERSION LZ4_VERSION_MAJOR.LZ4_VERSION_MINOR.LZ4_VERSION_RELEASE
#define LZ4_QUOTE(str) #str
#define LZ4_EXPAND_AND_QUOTE(str) LZ4_QUOTE(str)
#define LZ4_VERSION_STRING LZ4_EXPAND_AND_QUOTE(LZ4_LIB_VERSION)

LZ4LIB_API int LZ4_versionNumber (void);
LZ4LIB_API const char* LZ4_versionString (void);
# 126 "project/radare2/shlr/lz4/lz4.h"
#ifndef LZ4_MEMORY_USAGE
#define LZ4_MEMORY_USAGE 14
#endif
# 148 "project/radare2/shlr/lz4/lz4.h"
LZ4LIB_API int LZ4_compress_default(const char* src, char* dst, int srcSize, int dstCapacity);
# 164 "project/radare2/shlr/lz4/lz4.h"
LZ4LIB_API int LZ4_decompress_safe (const char* src, char* dst, int compressedSize, int dstCapacity);





#define LZ4_MAX_INPUT_SIZE 0x7E000000
#define LZ4_COMPRESSBOUND(isize) ((unsigned)(isize) > (unsigned)LZ4_MAX_INPUT_SIZE ? 0 : (isize) + ((isize)/255) + 16)
# 182 "project/radare2/shlr/lz4/lz4.h"
LZ4LIB_API int LZ4_compressBound(int inputSize);
# 192 "project/radare2/shlr/lz4/lz4.h"
LZ4LIB_API int LZ4_compress_fast (const char* src, char* dst, int srcSize, int dstCapacity, int acceleration);
# 201 "project/radare2/shlr/lz4/lz4.h"
LZ4LIB_API int LZ4_sizeofState(void);
LZ4LIB_API int LZ4_compress_fast_extState (void* state, const char* src, char* dst, int srcSize, int dstCapacity, int acceleration);
# 228 "project/radare2/shlr/lz4/lz4.h"
LZ4LIB_API int LZ4_compress_destSize (const char* src, char* dst, int* srcSizePtr, int targetDstSize);
# 265 "project/radare2/shlr/lz4/lz4.h"
LZ4LIB_API int LZ4_decompress_safe_partial (const char* src, char* dst, int srcSize, int targetOutputSize, int dstCapacity);





typedef union LZ4_stream_u LZ4_stream_t;

LZ4LIB_API LZ4_stream_t* LZ4_createStream(void);
LZ4LIB_API int LZ4_freeStream (LZ4_stream_t* streamPtr);
# 298 "project/radare2/shlr/lz4/lz4.h"
LZ4LIB_API void LZ4_resetStream_fast (LZ4_stream_t* streamPtr);
# 311 "project/radare2/shlr/lz4/lz4.h"
LZ4LIB_API int LZ4_loadDict (LZ4_stream_t* streamPtr, const char* dictionary, int dictSize);
# 336 "project/radare2/shlr/lz4/lz4.h"
LZ4LIB_API int LZ4_compress_fast_continue (LZ4_stream_t* streamPtr, const char* src, char* dst, int srcSize, int dstCapacity, int acceleration);
# 345 "project/radare2/shlr/lz4/lz4.h"
LZ4LIB_API int LZ4_saveDict (LZ4_stream_t* streamPtr, char* safeBuffer, int maxDictSize);






typedef union LZ4_streamDecode_u LZ4_streamDecode_t;





LZ4LIB_API LZ4_streamDecode_t* LZ4_createStreamDecode(void);
LZ4LIB_API int LZ4_freeStreamDecode (LZ4_streamDecode_t* LZ4_stream);
# 368 "project/radare2/shlr/lz4/lz4.h"
LZ4LIB_API int LZ4_setStreamDecode (LZ4_streamDecode_t* LZ4_streamDecode, const char* dictionary, int dictSize);
# 381 "project/radare2/shlr/lz4/lz4.h"
LZ4LIB_API int LZ4_decoderRingBufferSize(int maxBlockSize);
#define LZ4_DECODER_RING_BUFFER_SIZE(maxBlockSize) (65536 + 14 + (maxBlockSize))
# 409 "project/radare2/shlr/lz4/lz4.h"
LZ4LIB_API int LZ4_decompress_safe_continue (LZ4_streamDecode_t* LZ4_streamDecode, const char* src, char* dst, int srcSize, int dstCapacity);
# 420 "project/radare2/shlr/lz4/lz4.h"
LZ4LIB_API int LZ4_decompress_safe_usingDict (const char* src, char* dst, int srcSize, int dstCapcity, const char* dictStart, int dictSize);

#endif
# 449 "project/radare2/shlr/lz4/lz4.h"
#ifdef LZ4_STATIC_LINKING_ONLY

#ifndef LZ4_STATIC_3504398509
#define LZ4_STATIC_3504398509 

#ifdef LZ4_PUBLISH_STATIC_FUNCTIONS
#define LZ4LIB_STATIC_API LZ4LIB_API
#else
#define LZ4LIB_STATIC_API 
#endif
# 471 "project/radare2/shlr/lz4/lz4.h"
LZ4LIB_STATIC_API int LZ4_compress_fast_extState_fastReset (void* state, const char* src, char* dst, int srcSize, int dstCapacity, int acceleration);
# 499 "project/radare2/shlr/lz4/lz4.h"
LZ4LIB_STATIC_API void LZ4_attach_dictionary(LZ4_stream_t* workingStream, const LZ4_stream_t* dictionaryStream);
# 553 "project/radare2/shlr/lz4/lz4.h"
#define LZ4_DECOMPRESS_INPLACE_MARGIN(compressedSize) (((compressedSize) >> 8) + 32)
#define LZ4_DECOMPRESS_INPLACE_BUFFER_SIZE(decompressedSize) ((decompressedSize) + LZ4_DECOMPRESS_INPLACE_MARGIN(decompressedSize))

#ifndef LZ4_DISTANCE_MAX
#define LZ4_DISTANCE_MAX 65535
#endif

#define LZ4_COMPRESS_INPLACE_MARGIN (LZ4_DISTANCE_MAX + 32)
#define LZ4_COMPRESS_INPLACE_BUFFER_SIZE(maxCompressedSize) ((maxCompressedSize) + LZ4_COMPRESS_INPLACE_MARGIN)

#endif
#endif



#ifndef LZ4_H_98237428734687
#define LZ4_H_98237428734687 
# 578 "project/radare2/shlr/lz4/lz4.h"
#define LZ4_HASHLOG (LZ4_MEMORY_USAGE-2)
#define LZ4_HASHTABLESIZE (1 << LZ4_MEMORY_USAGE)
#define LZ4_HASH_SIZE_U32 (1 << LZ4_HASHLOG)

#if defined(__cplusplus) || (defined (__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L) )
#include <stdint.h>

typedef struct LZ4_stream_t_internal LZ4_stream_t_internal;
struct LZ4_stream_t_internal {
    uint32_t hashTable[LZ4_HASH_SIZE_U32];
    uint32_t currentOffset;
    uint32_t tableType;
    const uint8_t* dictionary;
    const LZ4_stream_t_internal* dictCtx;
    uint32_t dictSize;
};

typedef struct {
    const uint8_t* externalDict;
    size_t extDictSize;
    const uint8_t* prefixEnd;
    size_t prefixSize;
} LZ4_streamDecode_t_internal;

#else

typedef struct LZ4_stream_t_internal LZ4_stream_t_internal;
struct LZ4_stream_t_internal {
    unsigned int hashTable[LZ4_HASH_SIZE_U32];
    unsigned int currentOffset;
    unsigned int tableType;
    const unsigned char* dictionary;
    const LZ4_stream_t_internal* dictCtx;
    unsigned int dictSize;
};

typedef struct {
    const unsigned char* externalDict;
    const unsigned char* prefixEnd;
    size_t extDictSize;
    size_t prefixSize;
} LZ4_streamDecode_t_internal;

#endif
# 632 "project/radare2/shlr/lz4/lz4.h"
#define LZ4_STREAMSIZE_U64 ((1 << (LZ4_MEMORY_USAGE-3)) + 4 + ((sizeof(void*)==16) ? 4 : 0) )
#define LZ4_STREAMSIZE (LZ4_STREAMSIZE_U64 * sizeof(unsigned long long))
union LZ4_stream_u {
    unsigned long long table[LZ4_STREAMSIZE_U64];
    LZ4_stream_t_internal internal_donotuse;
} ;
# 653 "project/radare2/shlr/lz4/lz4.h"
LZ4LIB_API LZ4_stream_t* LZ4_initStream (void* buffer, size_t size);
# 663 "project/radare2/shlr/lz4/lz4.h"
#define LZ4_STREAMDECODESIZE_U64 (4 + ((sizeof(void*)==16) ? 2 : 0) )
#define LZ4_STREAMDECODESIZE (LZ4_STREAMDECODESIZE_U64 * sizeof(unsigned long long))
union LZ4_streamDecode_u {
    unsigned long long table[LZ4_STREAMDECODESIZE_U64];
    LZ4_streamDecode_t_internal internal_donotuse;
} ;
# 687 "project/radare2/shlr/lz4/lz4.h"
#ifdef LZ4_DISABLE_DEPRECATE_WARNINGS
#define LZ4_DEPRECATED(message) 
#else
# if defined (__cplusplus) && (__cplusplus >= 201402)
#define LZ4_DEPRECATED(message) [[deprecated(message)]]
# elif defined(_MSC_VER)
#define LZ4_DEPRECATED(message) __declspec(deprecated(message))
# elif defined(__clang__) || (defined(__GNUC__) && (__GNUC__ * 10 + __GNUC_MINOR__ >= 45))
#define LZ4_DEPRECATED(message) __attribute__((deprecated(message)))
# elif defined(__GNUC__) && (__GNUC__ * 10 + __GNUC_MINOR__ >= 31)
#define LZ4_DEPRECATED(message) __attribute__((deprecated))
# else
            
# 699 "project/radare2/shlr/lz4/lz4.h"
#pragma message("WARNING: LZ4_DEPRECATED needs custom implementation for this compiler")
#define LZ4_DEPRECATED(message) 
# endif
#endif


LZ4_DEPRECATED("use LZ4_compress_default() instead") LZ4LIB_API int LZ4_compress (const char* src, char* dest, int srcSize);
LZ4_DEPRECATED("use LZ4_compress_default() instead") LZ4LIB_API int LZ4_compress_limitedOutput (const char* src, char* dest, int srcSize, int maxOutputSize);
LZ4_DEPRECATED("use LZ4_compress_fast_extState() instead") LZ4LIB_API int LZ4_compress_withState (void* state, const char* source, char* dest, int inputSize);
LZ4_DEPRECATED("use LZ4_compress_fast_extState() instead") LZ4LIB_API int LZ4_compress_limitedOutput_withState (void* state, const char* source, char* dest, int inputSize, int maxOutputSize);
LZ4_DEPRECATED("use LZ4_compress_fast_continue() instead") LZ4LIB_API int LZ4_compress_continue (LZ4_stream_t* LZ4_streamPtr, const char* source, char* dest, int inputSize);
LZ4_DEPRECATED("use LZ4_compress_fast_continue() instead") LZ4LIB_API int LZ4_compress_limitedOutput_continue (LZ4_stream_t* LZ4_streamPtr, const char* source, char* dest, int inputSize, int maxOutputSize);


LZ4_DEPRECATED("use LZ4_decompress_fast() instead") LZ4LIB_API int LZ4_uncompress (const char* source, char* dest, int outputSize);
LZ4_DEPRECATED("use LZ4_decompress_safe() instead") LZ4LIB_API int LZ4_uncompress_unknownOutputSize (const char* source, char* dest, int isize, int maxOutputSize);
# 725 "project/radare2/shlr/lz4/lz4.h"
LZ4_DEPRECATED("Use LZ4_createStream() instead") LZ4LIB_API void* LZ4_create (char* inputBuffer);
LZ4_DEPRECATED("Use LZ4_createStream() instead") LZ4LIB_API int LZ4_sizeofStreamState(void);
LZ4_DEPRECATED("Use LZ4_resetStream() instead") LZ4LIB_API int LZ4_resetStreamState(void* state, char* inputBuffer);
LZ4_DEPRECATED("Use LZ4_saveDict() instead") LZ4LIB_API char* LZ4_slideInputBuffer (void* state);


LZ4_DEPRECATED("use LZ4_decompress_safe_usingDict() instead") LZ4LIB_API int LZ4_decompress_safe_withPrefix64k (const char* src, char* dst, int compressedSize, int maxDstSize);
LZ4_DEPRECATED("use LZ4_decompress_fast_usingDict() instead") LZ4LIB_API int LZ4_decompress_fast_withPrefix64k (const char* src, char* dst, int originalSize);
# 762 "project/radare2/shlr/lz4/lz4.h"
LZ4_DEPRECATED("This function is deprecated and unsafe. Consider using LZ4_decompress_safe() instead")
LZ4LIB_API int LZ4_decompress_fast (const char* src, char* dst, int originalSize);
LZ4_DEPRECATED("This function is deprecated and unsafe. Consider using LZ4_decompress_safe_continue() instead")
LZ4LIB_API int LZ4_decompress_fast_continue (LZ4_streamDecode_t* LZ4_streamDecode, const char* src, char* dst, int originalSize);
LZ4_DEPRECATED("This function is deprecated and unsafe. Consider using LZ4_decompress_safe_usingDict() instead")
LZ4LIB_API int LZ4_decompress_fast_usingDict (const char* src, char* dst, int originalSize, const char* dictStart, int dictSize);







LZ4LIB_API void LZ4_resetStream (LZ4_stream_t* streamPtr);


#endif


#if defined (__cplusplus)
}
#endif
