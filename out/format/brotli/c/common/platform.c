# 1 "project/brotli/c/common/platform.c"






#include <stdlib.h>

#include "./platform.h"
#include <brotli/types.h>


void* BrotliDefaultAllocFunc(void* opaque, size_t size) {
  BROTLI_UNUSED(opaque);
  return malloc(size);
}


void BrotliDefaultFreeFunc(void* opaque, void* address) {
  BROTLI_UNUSED(opaque);
  free(address);
}
