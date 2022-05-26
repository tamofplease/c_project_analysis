# 1 "project/brotli/c/common/transform.h"







#ifndef BROTLI_COMMON_TRANSFORM_H_
#define BROTLI_COMMON_TRANSFORM_H_ 

#include <brotli/port.h>
#include <brotli/types.h>

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

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

#define BROTLI_TRANSFORMS_MAX_CUT_OFF BROTLI_TRANSFORM_OMIT_LAST_9

typedef struct BrotliTransforms {
  uint16_t prefix_suffix_size;

  const uint8_t* prefix_suffix;
  const uint16_t* prefix_suffix_map;
  uint32_t num_transforms;

  const uint8_t* transforms;


  const uint8_t* params;



  int16_t cutOffTransforms[BROTLI_TRANSFORMS_MAX_CUT_OFF + 1];
} BrotliTransforms;


#define BROTLI_TRANSFORM_PREFIX_ID(T,I) ((T)->transforms[((I) * 3) + 0])
#define BROTLI_TRANSFORM_TYPE(T,I) ((T)->transforms[((I) * 3) + 1])
#define BROTLI_TRANSFORM_SUFFIX_ID(T,I) ((T)->transforms[((I) * 3) + 2])


#define BROTLI_TRANSFORM_PREFIX(T,I) (&(T)->prefix_suffix[ \
    (T)->prefix_suffix_map[BROTLI_TRANSFORM_PREFIX_ID(T, I)]])
#define BROTLI_TRANSFORM_SUFFIX(T,I) (&(T)->prefix_suffix[ \
    (T)->prefix_suffix_map[BROTLI_TRANSFORM_SUFFIX_ID(T, I)]])

BROTLI_COMMON_API const BrotliTransforms* BrotliGetTransforms(void);

BROTLI_COMMON_API int BrotliTransformDictionaryWord(
    uint8_t* dst, const uint8_t* word, int len,
    const BrotliTransforms* transforms, int transform_idx);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
