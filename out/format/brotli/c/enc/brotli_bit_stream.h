# 1 "project/brotli/c/enc/brotli_bit_stream.h"
# 16 "project/brotli/c/enc/brotli_bit_stream.h"
#ifndef BROTLI_ENC_BROTLI_BIT_STREAM_H_
#define BROTLI_ENC_BROTLI_BIT_STREAM_H_ 

#include "../common/context.h"
#include "../common/platform.h"
#include <brotli/types.h>
#include "./command.h"
#include "./entropy_encode.h"
#include "./memory.h"
#include "./metablock.h"

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif




BROTLI_INTERNAL void BrotliStoreHuffmanTree(const uint8_t* depths, size_t num,
    HuffmanTree* tree, size_t* storage_ix, uint8_t* storage);

BROTLI_INTERNAL void BrotliBuildAndStoreHuffmanTreeFast(
    MemoryManager* m, const uint32_t* histogram, const size_t histogram_total,
    const size_t max_bits, uint8_t* depth, uint16_t* bits, size_t* storage_ix,
    uint8_t* storage);



BROTLI_INTERNAL void BrotliStoreMetaBlock(MemoryManager* m,
    const uint8_t* input, size_t start_pos, size_t length, size_t mask,
    uint8_t prev_byte, uint8_t prev_byte2, BROTLI_BOOL is_last,
    const BrotliEncoderParams* params, ContextType literal_context_mode,
    const Command* commands, size_t n_commands, const MetaBlockSplit* mb,
    size_t* storage_ix, uint8_t* storage);





BROTLI_INTERNAL void BrotliStoreMetaBlockTrivial(MemoryManager* m,
    const uint8_t* input, size_t start_pos, size_t length, size_t mask,
    BROTLI_BOOL is_last, const BrotliEncoderParams* params,
    const Command* commands, size_t n_commands,
    size_t* storage_ix, uint8_t* storage);





BROTLI_INTERNAL void BrotliStoreMetaBlockFast(MemoryManager* m,
    const uint8_t* input, size_t start_pos, size_t length, size_t mask,
    BROTLI_BOOL is_last, const BrotliEncoderParams* params,
    const Command* commands, size_t n_commands,
    size_t* storage_ix, uint8_t* storage);





BROTLI_INTERNAL void BrotliStoreUncompressedMetaBlock(
    BROTLI_BOOL is_final_block, const uint8_t* BROTLI_RESTRICT input,
    size_t position, size_t mask, size_t len,
    size_t* BROTLI_RESTRICT storage_ix, uint8_t* BROTLI_RESTRICT storage);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
