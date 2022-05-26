# 1 "project/brotli/c/enc/compress_fragment_two_pass.h"
# 13 "project/brotli/c/enc/compress_fragment_two_pass.h"
#ifndef BROTLI_ENC_COMPRESS_FRAGMENT_TWO_PASS_H_
#define BROTLI_ENC_COMPRESS_FRAGMENT_TWO_PASS_H_ 

#include "../common/platform.h"
#include <brotli/types.h>
#include "./memory.h"

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

static const size_t kCompressFragmentTwoPassBlockSize = 1 << 17;
# 39 "project/brotli/c/enc/compress_fragment_two_pass.h"
BROTLI_INTERNAL void BrotliCompressFragmentTwoPass(MemoryManager* m,
                                                   const uint8_t* input,
                                                   size_t input_size,
                                                   BROTLI_BOOL is_last,
                                                   uint32_t* command_buf,
                                                   uint8_t* literal_buf,
                                                   int* table,
                                                   size_t table_size,
                                                   size_t* storage_ix,
                                                   uint8_t* storage);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
