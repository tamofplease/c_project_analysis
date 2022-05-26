# 1 "project/brotli/c/enc/static_dict.h"
# 9 "project/brotli/c/enc/static_dict.h"
#ifndef BROTLI_ENC_STATIC_DICT_H_
#define BROTLI_ENC_STATIC_DICT_H_ 

#include "../common/dictionary.h"
#include "../common/platform.h"
#include <brotli/types.h>
#include "./encoder_dict.h"

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

#define BROTLI_MAX_STATIC_DICTIONARY_MATCH_LEN 37
static const uint32_t kInvalidMatch = 0xFFFFFFF;
# 31 "project/brotli/c/enc/static_dict.h"
BROTLI_INTERNAL BROTLI_BOOL BrotliFindAllStaticDictionaryMatches(
    const BrotliEncoderDictionary* dictionary,
    const uint8_t* data, size_t min_length, size_t max_length,
    uint32_t* matches);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
