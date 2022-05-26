# 1 "project/radare2/shlr/zip/zlib/zlib.h"
# 31 "project/radare2/shlr/zip/zlib/zlib.h"
#ifndef ZLIB_H
#define ZLIB_H 

#include "zconf.h"

#ifdef __cplusplus
extern "C" {
#endif

#define ZLIB_VERSION "1.2.11"
#define ZLIB_VERNUM 0x12b0
#define ZLIB_VER_MAJOR 1
#define ZLIB_VER_MINOR 2
#define ZLIB_VER_REVISION 11
#define ZLIB_VER_SUBREVISION 0
# 81 "project/radare2/shlr/zip/zlib/zlib.h"
typedef voidpf (*alloc_func) OF((voidpf opaque, uInt items, uInt size));
typedef void (*free_func) OF((voidpf opaque, voidpf address));

struct internal_state;

typedef struct z_stream_s {
    z_const Bytef *next_in;
    uInt avail_in;
    uLong total_in;

    Bytef *next_out;
    uInt avail_out;
    uLong total_out;

    z_const char *msg;
    struct internal_state FAR *state;

    alloc_func zalloc;
    free_func zfree;
    voidpf opaque;

    int data_type;

    uLong adler;
    uLong reserved;
} z_stream;

typedef z_stream FAR *z_streamp;





typedef struct gz_header_s {
    int text;
    uLong time;
    int xflags;
    int os;
    Bytef *extra;
    uInt extra_len;
    uInt extra_max;
    Bytef *name;
    uInt name_max;
    Bytef *comment;
    uInt comm_max;
    int hcrc;
    int done;

} gz_header;

typedef gz_header FAR *gz_headerp;
# 168 "project/radare2/shlr/zip/zlib/zlib.h"
#define Z_NO_FLUSH 0
#define Z_PARTIAL_FLUSH 1
#define Z_SYNC_FLUSH 2
#define Z_FULL_FLUSH 3
#define Z_FINISH 4
#define Z_BLOCK 5
#define Z_TREES 6


#define Z_OK 0
#define Z_STREAM_END 1
#define Z_NEED_DICT 2
#define Z_ERRNO (-1)
#define Z_STREAM_ERROR (-2)
#define Z_DATA_ERROR (-3)
#define Z_MEM_ERROR (-4)
#define Z_BUF_ERROR (-5)
#define Z_VERSION_ERROR (-6)




#define Z_NO_COMPRESSION 0
#define Z_BEST_SPEED 1
#define Z_BEST_COMPRESSION 9
#define Z_DEFAULT_COMPRESSION (-1)


#define Z_FILTERED 1
#define Z_HUFFMAN_ONLY 2
#define Z_RLE 3
#define Z_FIXED 4
#define Z_DEFAULT_STRATEGY 0


#define Z_BINARY 0
#define Z_TEXT 1
#define Z_ASCII Z_TEXT
#define Z_UNKNOWN 2


#define Z_DEFLATED 8


#define Z_NULL 0

#define zlib_version zlibVersion()





ZEXTERN const char * ZEXPORT zlibVersion OF((void));
# 250 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT deflate OF((z_streamp strm, int flush));
# 363 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT deflateEnd OF((z_streamp strm));
# 400 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT inflate OF((z_streamp strm, int flush));
# 520 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT inflateEnd OF((z_streamp strm));
# 611 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT deflateSetDictionary OF((z_streamp strm,
                                             const Bytef *dictionary,
                                             uInt dictLength));
# 655 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT deflateGetDictionary OF((z_streamp strm,
                                             Bytef *dictionary,
                                             uInt *dictLength));
# 677 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT deflateCopy OF((z_streamp dest,
                                    z_streamp source));
# 695 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT deflateReset OF((z_streamp strm));
# 706 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT deflateParams OF((z_streamp strm,
                                      int level,
                                      int strategy));
# 743 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT deflateTune OF((z_streamp strm,
                                    int good_length,
                                    int max_lazy,
                                    int nice_length,
                                    int max_chain));
# 760 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN uLong ZEXPORT deflateBound OF((z_streamp strm,
                                       uLong sourceLen));
# 775 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT deflatePending OF((z_streamp strm,
                                       unsigned *pending,
                                       int *bits));
# 790 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT deflatePrime OF((z_streamp strm,
                                     int bits,
                                     int value));
# 807 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT deflateSetHeader OF((z_streamp strm,
                                         gz_headerp head));
# 884 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT inflateSetDictionary OF((z_streamp strm,
                                             const Bytef *dictionary,
                                             uInt dictLength));
# 907 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT inflateGetDictionary OF((z_streamp strm,
                                             Bytef *dictionary,
                                             uInt *dictLength));
# 922 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT inflateSync OF((z_streamp strm));
# 941 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT inflateCopy OF((z_streamp dest,
                                    z_streamp source));
# 957 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT inflateReset OF((z_streamp strm));
# 967 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT inflateReset2 OF((z_streamp strm,
                                      int windowBits));
# 981 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT inflatePrime OF((z_streamp strm,
                                     int bits,
                                     int value));
# 1002 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN long ZEXPORT inflateMark OF((z_streamp strm));
# 1030 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT inflateGetHeader OF((z_streamp strm,
                                         gz_headerp head));
# 1092 "project/radare2/shlr/zip/zlib/zlib.h"
typedef unsigned (*in_func) OF((void FAR *,
                                z_const unsigned char FAR * FAR *));
typedef int (*out_func) OF((void FAR *, unsigned char FAR *, unsigned));

ZEXTERN int ZEXPORT inflateBack OF((z_streamp strm,
                                    in_func in, void FAR *in_desc,
                                    out_func out, void FAR *out_desc));
# 1166 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT inflateBackEnd OF((z_streamp strm));







ZEXTERN uLong ZEXPORT zlibCompileFlags OF((void));
# 1215 "project/radare2/shlr/zip/zlib/zlib.h"
#ifndef Z_SOLO
# 1227 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT compress OF((Bytef *dest, uLongf *destLen,
                                 const Bytef *source, uLong sourceLen));
# 1242 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT compress2 OF((Bytef *dest, uLongf *destLen,
                                  const Bytef *source, uLong sourceLen,
                                  int level));
# 1258 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN uLong ZEXPORT compressBound OF((uLong sourceLen));






ZEXTERN int ZEXPORT uncompress OF((Bytef *dest, uLongf *destLen,
                                   const Bytef *source, uLong sourceLen));
# 1283 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT uncompress2 OF((Bytef *dest, uLongf *destLen,
                                    const Bytef *source, uLong *sourceLen));
# 1300 "project/radare2/shlr/zip/zlib/zlib.h"
typedef struct gzFile_s *gzFile;
# 1340 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN gzFile ZEXPORT gzdopen OF((int fd, const char *mode));
# 1363 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT gzbuffer OF((gzFile file, unsigned size));
# 1379 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT gzsetparams OF((gzFile file, int level, int strategy));
# 1390 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT gzread OF((gzFile file, voidp buf, unsigned len));
# 1420 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN z_size_t ZEXPORT gzfread OF((voidp buf, z_size_t size, z_size_t nitems,
                                     gzFile file));
# 1446 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT gzwrite OF((gzFile file,
                                voidpc buf, unsigned len));






ZEXTERN z_size_t ZEXPORT gzfwrite OF((voidpc buf, z_size_t size,
                                      z_size_t nitems, gzFile file));
# 1468 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORTVA gzprintf Z_ARG((gzFile file, const char *format, ...));
# 1483 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT gzputs OF((gzFile file, const char *s));







ZEXTERN char * ZEXPORT gzgets OF((gzFile file, char *buf, int len));
# 1504 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT gzputc OF((gzFile file, int c));





ZEXTERN int ZEXPORT gzgetc OF((gzFile file));
# 1519 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT gzungetc OF((int c, gzFile file));
# 1531 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT gzflush OF((gzFile file, int flush));
# 1566 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT gzrewind OF((gzFile file));
# 1594 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT gzeof OF((gzFile file));
# 1609 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT gzdirect OF((gzFile file));
# 1630 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT gzclose OF((gzFile file));
# 1643 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT gzclose_r OF((gzFile file));
ZEXTERN int ZEXPORT gzclose_w OF((gzFile file));
# 1655 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN const char * ZEXPORT gzerror OF((gzFile file, int *errnum));
# 1671 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN void ZEXPORT gzclearerr OF((gzFile file));






#endif
# 1688 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN uLong ZEXPORT adler32 OF((uLong adler, const Bytef *buf, uInt len));
# 1707 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN uLong ZEXPORT adler32_z OF((uLong adler, const Bytef *buf,
                                    z_size_t len));
# 1725 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN uLong ZEXPORT crc32 OF((uLong crc, const Bytef *buf, uInt len));
# 1742 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN uLong ZEXPORT crc32_z OF((uLong adler, const Bytef *buf,
                                  z_size_t len));
# 1764 "project/radare2/shlr/zip/zlib/zlib.h"
ZEXTERN int ZEXPORT deflateInit_ OF((z_streamp strm, int level,
                                     const char *version, int stream_size));
ZEXTERN int ZEXPORT inflateInit_ OF((z_streamp strm,
                                     const char *version, int stream_size));
ZEXTERN int ZEXPORT deflateInit2_ OF((z_streamp strm, int level, int method,
                                      int windowBits, int memLevel,
                                      int strategy, const char *version,
                                      int stream_size));
ZEXTERN int ZEXPORT inflateInit2_ OF((z_streamp strm, int windowBits,
                                      const char *version, int stream_size));
ZEXTERN int ZEXPORT inflateBackInit_ OF((z_streamp strm, int windowBits,
                                         unsigned char FAR *window,
                                         const char *version,
                                         int stream_size));
#ifdef Z_PREFIX_SET
#define z_deflateInit(strm,level) \
          deflateInit_((strm), (level), ZLIB_VERSION, (int)sizeof(z_stream))
#define z_inflateInit(strm) \
          inflateInit_((strm), ZLIB_VERSION, (int)sizeof(z_stream))
#define z_deflateInit2(strm,level,method,windowBits,memLevel,strategy) \
          deflateInit2_((strm),(level),(method),(windowBits),(memLevel),\
                        (strategy), ZLIB_VERSION, (int)sizeof(z_stream))
#define z_inflateInit2(strm,windowBits) \
          inflateInit2_((strm), (windowBits), ZLIB_VERSION, \
                        (int)sizeof(z_stream))
#define z_inflateBackInit(strm,windowBits,window) \
          inflateBackInit_((strm), (windowBits), (window), \
                           ZLIB_VERSION, (int)sizeof(z_stream))
#else
#define deflateInit(strm,level) \
          deflateInit_((strm), (level), ZLIB_VERSION, (int)sizeof(z_stream))
#define inflateInit(strm) \
          inflateInit_((strm), ZLIB_VERSION, (int)sizeof(z_stream))
#define deflateInit2(strm,level,method,windowBits,memLevel,strategy) \
          deflateInit2_((strm),(level),(method),(windowBits),(memLevel),\
                        (strategy), ZLIB_VERSION, (int)sizeof(z_stream))
#define inflateInit2(strm,windowBits) \
          inflateInit2_((strm), (windowBits), ZLIB_VERSION, \
                        (int)sizeof(z_stream))
#define inflateBackInit(strm,windowBits,window) \
          inflateBackInit_((strm), (windowBits), (window), \
                           ZLIB_VERSION, (int)sizeof(z_stream))
#endif

#ifndef Z_SOLO
# 1817 "project/radare2/shlr/zip/zlib/zlib.h"
struct gzFile_s {
    unsigned have;
    unsigned char *next;
    z_off64_t pos;
};
ZEXTERN int ZEXPORT gzgetc_ OF((gzFile file));
#ifdef Z_PREFIX_SET
#undef z_gzgetc
#define z_gzgetc(g) \
          ((g)->have ? ((g)->have--, (g)->pos++, *((g)->next)++) : (gzgetc)(g))
#else
#define gzgetc(g) \
          ((g)->have ? ((g)->have--, (g)->pos++, *((g)->next)++) : (gzgetc)(g))
#endif







#ifdef Z_LARGE64
   ZEXTERN gzFile ZEXPORT gzopen64 OF((const char *, const char *));
   ZEXTERN z_off64_t ZEXPORT gzseek64 OF((gzFile, z_off64_t, int));
   ZEXTERN z_off64_t ZEXPORT gztell64 OF((gzFile));
   ZEXTERN z_off64_t ZEXPORT gzoffset64 OF((gzFile));
   ZEXTERN uLong ZEXPORT adler32_combine64 OF((uLong, uLong, z_off64_t));
   ZEXTERN uLong ZEXPORT crc32_combine64 OF((uLong, uLong, z_off64_t));
#endif

#if !defined(ZLIB_INTERNAL) && defined(Z_WANT64)
# ifdef Z_PREFIX_SET
#define z_gzopen z_gzopen64
#define z_gzseek z_gzseek64
#define z_gztell z_gztell64
#define z_gzoffset z_gzoffset64
#define z_adler32_combine z_adler32_combine64
#define z_crc32_combine z_crc32_combine64
# else
#define gzopen gzopen64
#define gzseek gzseek64
#define gztell gztell64
#define gzoffset gzoffset64
#define adler32_combine adler32_combine64
#define crc32_combine crc32_combine64
# endif
# ifndef Z_LARGE64
     ZEXTERN gzFile ZEXPORT gzopen64 OF((const char *, const char *));
     ZEXTERN z_off_t ZEXPORT gzseek64 OF((gzFile, z_off_t, int));
     ZEXTERN z_off_t ZEXPORT gztell64 OF((gzFile));
     ZEXTERN z_off_t ZEXPORT gzoffset64 OF((gzFile));
     ZEXTERN uLong ZEXPORT adler32_combine64 OF((uLong, uLong, z_off_t));
     ZEXTERN uLong ZEXPORT crc32_combine64 OF((uLong, uLong, z_off_t));
# endif
#else
   ZEXTERN gzFile ZEXPORT gzopen OF((const char *, const char *));
   ZEXTERN z_off_t ZEXPORT gzseek OF((gzFile, z_off_t, int));
   ZEXTERN z_off_t ZEXPORT gztell OF((gzFile));
   ZEXTERN z_off_t ZEXPORT gzoffset OF((gzFile));
   ZEXTERN uLong ZEXPORT adler32_combine OF((uLong, uLong, z_off_t));
   ZEXTERN uLong ZEXPORT crc32_combine OF((uLong, uLong, z_off_t));
#endif

#else

   ZEXTERN uLong ZEXPORT adler32_combine OF((uLong, uLong, z_off_t));
   ZEXTERN uLong ZEXPORT crc32_combine OF((uLong, uLong, z_off_t));

#endif


ZEXTERN const char * ZEXPORT zError OF((int));
ZEXTERN int ZEXPORT inflateSyncPoint OF((z_streamp));
ZEXTERN const z_crc_t FAR * ZEXPORT get_crc_table OF((void));
ZEXTERN int ZEXPORT inflateUndermine OF((z_streamp, int));
ZEXTERN int ZEXPORT inflateValidate OF((z_streamp, int));
ZEXTERN unsigned long ZEXPORT inflateCodesUsed OF ((z_streamp));
ZEXTERN int ZEXPORT inflateResetKeep OF((z_streamp));
ZEXTERN int ZEXPORT deflateResetKeep OF((z_streamp));
#if (defined(_WIN32) || defined(__CYGWIN__)) && !defined(Z_SOLO)
ZEXTERN gzFile ZEXPORT gzopen_w OF((const wchar_t *path,
                                            const char *mode));
#endif
#if defined(STDC) || defined(Z_HAVE_STDARG_H)
# ifndef Z_SOLO
ZEXTERN int ZEXPORTVA gzvprintf Z_ARG((gzFile file,
                                                  const char *format,
                                                  va_list va));
# endif
#endif

#ifdef __cplusplus
}
#endif

#endif
