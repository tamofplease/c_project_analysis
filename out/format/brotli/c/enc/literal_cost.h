# 1 "project/brotli/c/enc/literal_cost.h"
# 10 "project/brotli/c/enc/literal_cost.h"
#ifndef BROTLI_ENC_LITERAL_COST_H_
#define BROTLI_ENC_LITERAL_COST_H_ 

#include "../common/platform.h"
#include <brotli/types.h>

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif




BROTLI_INTERNAL void BrotliEstimateBitCostsForLiterals(
    size_t pos, size_t len, size_t mask, const uint8_t* data, float* cost);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
