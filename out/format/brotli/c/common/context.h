# 1 "project/brotli/c/common/context.h"
# 88 "project/brotli/c/common/context.h"
#ifndef BROTLI_COMMON_CONTEXT_H_
#define BROTLI_COMMON_CONTEXT_H_ 

#include <brotli/port.h>
#include <brotli/types.h>

typedef enum ContextType {
  CONTEXT_LSB6 = 0,
  CONTEXT_MSB6 = 1,
  CONTEXT_UTF8 = 2,
  CONTEXT_SIGNED = 3
} ContextType;



BROTLI_COMMON_API extern const uint8_t _kBrotliContextLookupTable[2048];

typedef const uint8_t* ContextLut;


#define BROTLI_CONTEXT_LUT(MODE) (&_kBrotliContextLookupTable[(MODE) << 9])


#define BROTLI_CONTEXT(P1,P2,LUT) ((LUT)[P1] | ((LUT) + 256)[P2])

#endif
