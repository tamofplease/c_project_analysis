# 1 "project/brotli/c/enc/compress_fragment.h"
# 12 "project/brotli/c/enc/compress_fragment.h"
#ifndef BROTLI_ENC_COMPRESS_FRAGMENT_H_
#define BROTLI_ENC_COMPRESS_FRAGMENT_H_ 

#include "../common/platform.h"
#include <brotli/types.h>
#include "./memory.h"

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif
# 45 "project/brotli/c/enc/compress_fragment.h"
BROTLI_INTERNAL void BrotliCompressFragmentFast(MemoryManager* m,
                                                const uint8_t* input,
                                                size_t input_size,
                                                BROTLI_BOOL is_last,
                                                int* table, size_t table_size,
                                                uint8_t cmd_depth[128],
                                                uint16_t cmd_bits[128],
                                                size_t* cmd_code_numbits,
                                                uint8_t* cmd_code,
                                                size_t* storage_ix,
                                                uint8_t* storage);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
