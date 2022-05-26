# 1 "project/brotli/c/enc/backward_references.h"
# 9 "project/brotli/c/enc/backward_references.h"
#ifndef BROTLI_ENC_BACKWARD_REFERENCES_H_
#define BROTLI_ENC_BACKWARD_REFERENCES_H_ 

#include "../common/constants.h"
#include "../common/context.h"
#include "../common/dictionary.h"
#include "../common/platform.h"
#include <brotli/types.h>
#include "./command.h"
#include "./hash.h"
#include "./quality.h"

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif





BROTLI_INTERNAL void BrotliCreateBackwardReferences(size_t num_bytes,
    size_t position, const uint8_t* ringbuffer, size_t ringbuffer_mask,
    ContextLut literal_context_lut, const BrotliEncoderParams* params,
    Hasher* hasher, int* dist_cache, size_t* last_insert_len,
    Command* commands, size_t* num_commands, size_t* num_literals);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
