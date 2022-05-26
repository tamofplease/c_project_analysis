# 1 "project/brotli/c/enc/encoder_dict.c"






#include "./encoder_dict.h"

#include "../common/dictionary.h"
#include "../common/transform.h"
#include "./dictionary_hash.h"
#include "./hash.h"

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

void BrotliInitEncoderDictionary(BrotliEncoderDictionary* dict) {
  dict->words = BrotliGetDictionary();
  dict->num_transforms = (uint32_t)BrotliGetTransforms()->num_transforms;

  dict->hash_table_words = kStaticDictionaryHashWords;
  dict->hash_table_lengths = kStaticDictionaryHashLengths;
  dict->buckets = kStaticDictionaryBuckets;
  dict->dict_words = kStaticDictionaryWords;

  dict->cutoffTransformsCount = kCutoffTransformsCount;
  dict->cutoffTransforms = kCutoffTransforms;
}

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif
