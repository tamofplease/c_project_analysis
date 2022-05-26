# 1 "project/brotli/c/enc/backward_references_hq.h"
# 9 "project/brotli/c/enc/backward_references_hq.h"
#ifndef BROTLI_ENC_BACKWARD_REFERENCES_HQ_H_
#define BROTLI_ENC_BACKWARD_REFERENCES_HQ_H_ 

#include "../common/constants.h"
#include "../common/context.h"
#include "../common/dictionary.h"
#include "../common/platform.h"
#include <brotli/types.h>
#include "./command.h"
#include "./hash.h"
#include "./memory.h"
#include "./quality.h"

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

BROTLI_INTERNAL void BrotliCreateZopfliBackwardReferences(MemoryManager* m,
    size_t num_bytes,
    size_t position, const uint8_t* ringbuffer, size_t ringbuffer_mask,
    ContextLut literal_context_lut, const BrotliEncoderParams* params,
    Hasher* hasher, int* dist_cache, size_t* last_insert_len,
    Command* commands, size_t* num_commands, size_t* num_literals);

BROTLI_INTERNAL void BrotliCreateHqZopfliBackwardReferences(MemoryManager* m,
    size_t num_bytes,
    size_t position, const uint8_t* ringbuffer, size_t ringbuffer_mask,
    ContextLut literal_context_lut, const BrotliEncoderParams* params,
    Hasher* hasher, int* dist_cache, size_t* last_insert_len,
    Command* commands, size_t* num_commands, size_t* num_literals);

typedef struct ZopfliNode {


  uint32_t length;

  uint32_t distance;


  uint32_t dcode_insert_length;





  union {

    float cost;


    uint32_t next;

    uint32_t shortcut;
  } u;
} ZopfliNode;

BROTLI_INTERNAL void BrotliInitZopfliNodes(ZopfliNode* array, size_t length);
# 80 "project/brotli/c/enc/backward_references_hq.h"
BROTLI_INTERNAL size_t BrotliZopfliComputeShortestPath(
    MemoryManager* m, size_t num_bytes,
    size_t position, const uint8_t* ringbuffer, size_t ringbuffer_mask,
    ContextLut literal_context_lut, const BrotliEncoderParams* params,
    const int* dist_cache, Hasher* hasher, ZopfliNode* nodes);

BROTLI_INTERNAL void BrotliZopfliCreateCommands(
    const size_t num_bytes, const size_t block_start, const ZopfliNode* nodes,
    int* dist_cache, size_t* last_insert_len, const BrotliEncoderParams* params,
    Command* commands, size_t* num_literals);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
