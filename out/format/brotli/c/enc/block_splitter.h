# 1 "project/brotli/c/enc/block_splitter.h"
# 9 "project/brotli/c/enc/block_splitter.h"
#ifndef BROTLI_ENC_BLOCK_SPLITTER_H_
#define BROTLI_ENC_BLOCK_SPLITTER_H_ 

#include "../common/platform.h"
#include <brotli/types.h>
#include "./command.h"
#include "./memory.h"
#include "./quality.h"

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

typedef struct BlockSplit {
  size_t num_types;
  size_t num_blocks;
  uint8_t* types;
  uint32_t* lengths;

  size_t types_alloc_size;
  size_t lengths_alloc_size;
} BlockSplit;

BROTLI_INTERNAL void BrotliInitBlockSplit(BlockSplit* self);
BROTLI_INTERNAL void BrotliDestroyBlockSplit(MemoryManager* m,
                                             BlockSplit* self);

BROTLI_INTERNAL void BrotliSplitBlock(MemoryManager* m,
                                      const Command* cmds,
                                      const size_t num_commands,
                                      const uint8_t* data,
                                      const size_t offset,
                                      const size_t mask,
                                      const BrotliEncoderParams* params,
                                      BlockSplit* literal_split,
                                      BlockSplit* insert_and_copy_split,
                                      BlockSplit* dist_split);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
