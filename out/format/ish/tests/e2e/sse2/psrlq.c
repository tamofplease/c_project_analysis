# 1 "project/ish/tests/e2e/sse2/psrlq.c"
#include <stdint.h>
#include <stdio.h>
#include <emmintrin.h>
#include <xmmintrin.h>

#define printout() printf("%05lld %05lld\n", (long long) out[0], (long long) out[1])

void main(void) {
 int64_t out[2] = { 0, 0 };
 int64_t buf1234[2] = { 1234, 5678 };


 __m128i xmm1 = _mm_load_si128((__m128i*) buf1234);
 _mm_store_si128((__m128i*) out, xmm1);
 printout();


 asm volatile( "psrlq $1, %[vec1]\n\t"
  : [vec1] "+x" (xmm1)
  :);
 _mm_store_si128((__m128i*) out, xmm1);
 printout();


 asm volatile( "psrlq $66, %[vec1]\n\t"
  : [vec1] "+x" (xmm1)
  :);

 _mm_store_si128((__m128i*) out, xmm1);
 printout();
}
