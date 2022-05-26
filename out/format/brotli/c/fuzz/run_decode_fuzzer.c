# 1 "project/brotli/c/fuzz/run_decode_fuzzer.c"
# 9 "project/brotli/c/fuzz/run_decode_fuzzer.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

void LLVMFuzzerTestOneInput(const uint8_t* data, size_t size);

int main(int argc, char* *argv) {
  if (argc != 2) {
    fprintf(stderr, "Exactly one argument is expected.\n");
    exit(EXIT_FAILURE);
  }

  FILE* f = fopen(argv[1], "r");
  if (!f) {
    fprintf(stderr, "Failed to open input file.");
    exit(EXIT_FAILURE);
  }

  size_t max_len = 1 << 20;
  unsigned char* tmp = (unsigned char*)malloc(max_len);
  size_t len = fread(tmp, 1, max_len, f);
  if (ferror(f)) {
    fclose(f);
    fprintf(stderr, "Failed read input file.");
    exit(EXIT_FAILURE);
  }

  unsigned char* data = (unsigned char*)malloc(len);
  memcpy(data, tmp, len);
  free(tmp);

  LLVMFuzzerTestOneInput(data, len);
  free(data);
  exit(EXIT_SUCCESS);
}
