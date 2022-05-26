# 1 "project/brotli/c/enc/utf8_util.h"
# 9 "project/brotli/c/enc/utf8_util.h"
#ifndef BROTLI_ENC_UTF8_UTIL_H_
#define BROTLI_ENC_UTF8_UTIL_H_ 

#include "../common/platform.h"
#include <brotli/types.h>

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

static const double kMinUTF8Ratio = 0.75;




BROTLI_INTERNAL BROTLI_BOOL BrotliIsMostlyUTF8(
    const uint8_t* data, const size_t pos, const size_t mask,
    const size_t length, const double min_fraction);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
