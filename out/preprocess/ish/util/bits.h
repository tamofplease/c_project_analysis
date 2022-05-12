# 0 "project/ish/util/bits.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/ish/util/bits.h"



typedef void bits_t;


static inline bool bit_test(size_t i, bits_t *data) {
    char *c = data;
    return c[i >> 3] & (1 << (i & 7)) ? 1 : 0;
}

static inline void bit_set(size_t i, bits_t *data) {
    char *c = data;
    c[i >> 3] |= 1 << (i & 7);
}

static inline void bit_clear(size_t i, bits_t *data) {
    char *c = data;
    c[i >> 3] &= ~(1 << (i & 7));
}
