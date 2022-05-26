# 1 "project/radare2/libr/hash/sha2.c"
# 35 "project/radare2/libr/hash/sha2.c"
#include <string.h>
#include "r_hash.h"
#include "sha2.h"

#define WEAK_ALIASING 0
# 84 "project/radare2/libr/hash/sha2.c"
#ifndef BYTE_ORDER

#define LITTLE_ENDIAN 1234
#define BIG_ENDIAN 4321
#define BYTE_ORDER LITTLE_ENDIAN
#endif

#if !defined(BYTE_ORDER) || (BYTE_ORDER != LITTLE_ENDIAN && BYTE_ORDER != BIG_ENDIAN)
#warning Define BYTE_ORDER to be equal to either LITTLE_ENDIAN or BIG_ENDIAN
#define BYTE_ORDER BIG_ENDIAN
#endif




#define r_SHA256_SHORT_BLOCK_LENGTH (SHA256_BLOCK_LENGTH - 8)
#define r_SHA384_SHORT_BLOCK_LENGTH (SHA384_BLOCK_LENGTH - 16)
#define r_SHA512_SHORT_BLOCK_LENGTH (SHA512_BLOCK_LENGTH - 16)



#if BYTE_ORDER == LITTLE_ENDIAN
#define REVERSE32(w,x) {\
  ut32 tmp = (w);\
  tmp = (tmp >> 16) | (tmp << 16);\
  (x) = ((tmp & 0xff00ff00UL) >> 8) | ((tmp & 0x00ff00ffUL) << 8);\
}
#define REVERSE64(w,x) {\
  ut64 tmp = (w);\
  tmp = (tmp >> 32) | (tmp << 32);\
  tmp = ((tmp & 0xff00ff00ff00ff00ULL) >> 8) |\
  ((tmp & 0x00ff00ff00ff00ffULL) << 8);\
  (x) = ((tmp & 0xffff0000ffff0000ULL) >> 16) |\
  ((tmp & 0x0000ffff0000ffffULL) << 16);\
}
#endif






#define ADDINC128(w,n) {\
  (w)[0] += (ut64) (n);\
  if ((w)[0] < (n)) {\
   (w)[1]++;\
  }\
}
# 143 "project/radare2/libr/hash/sha2.c"
#define R(b,x) ((x) >> (b))

#define S32(b,x) (((x) >> (b)) | ((x) << (32 - (b))))

#define S64(b,x) (((x) >> (b)) | ((x) << (64 - (b))))


#define Ch(x,y,z) (((x) & (y)) ^ ((~(x)) & (z)))
#define Maj(x,y,z) (((x) & (y)) ^ ((x) & (z)) ^ ((y) & (z)))


#define Sigma0_256(x) (S32 (2, (x)) ^ S32 (13, (x)) ^ S32 (22, (x)))
#define Sigma1_256(x) (S32 (6, (x)) ^ S32 (11, (x)) ^ S32 (25, (x)))
#define sigma0_256(x) (S32 (7, (x)) ^ S32 (18, (x)) ^ R (3, (x)))
#define sigma1_256(x) (S32 (17, (x)) ^ S32 (19, (x)) ^ R (10, (x)))


#define Sigma0_512(x) (S64 (28, (x)) ^ S64 (34, (x)) ^ S64 (39, (x)))
#define Sigma1_512(x) (S64 (14, (x)) ^ S64 (18, (x)) ^ S64 (41, (x)))
#define sigma0_512(x) (S64 ( 1, (x)) ^ S64 ( 8, (x)) ^ R ( 7, (x)))
#define sigma1_512(x) (S64 (19, (x)) ^ S64 (61, (x)) ^ R ( 6, (x)))






static void SHA512_Last(R_SHA512_CTX *);
static void SHA256_Transform(R_SHA256_CTX *, const ut32 *);
static void SHA512_Transform(R_SHA512_CTX *, const ut64 *);




static const ut32 K256[64] = {
 0x428a2f98UL, 0x71374491UL, 0xb5c0fbcfUL, 0xe9b5dba5UL,
 0x3956c25bUL, 0x59f111f1UL, 0x923f82a4UL, 0xab1c5ed5UL,
 0xd807aa98UL, 0x12835b01UL, 0x243185beUL, 0x550c7dc3UL,
 0x72be5d74UL, 0x80deb1feUL, 0x9bdc06a7UL, 0xc19bf174UL,
 0xe49b69c1UL, 0xefbe4786UL, 0x0fc19dc6UL, 0x240ca1ccUL,
 0x2de92c6fUL, 0x4a7484aaUL, 0x5cb0a9dcUL, 0x76f988daUL,
 0x983e5152UL, 0xa831c66dUL, 0xb00327c8UL, 0xbf597fc7UL,
 0xc6e00bf3UL, 0xd5a79147UL, 0x06ca6351UL, 0x14292967UL,
 0x27b70a85UL, 0x2e1b2138UL, 0x4d2c6dfcUL, 0x53380d13UL,
 0x650a7354UL, 0x766a0abbUL, 0x81c2c92eUL, 0x92722c85UL,
 0xa2bfe8a1UL, 0xa81a664bUL, 0xc24b8b70UL, 0xc76c51a3UL,
 0xd192e819UL, 0xd6990624UL, 0xf40e3585UL, 0x106aa070UL,
 0x19a4c116UL, 0x1e376c08UL, 0x2748774cUL, 0x34b0bcb5UL,
 0x391c0cb3UL, 0x4ed8aa4aUL, 0x5b9cca4fUL, 0x682e6ff3UL,
 0x748f82eeUL, 0x78a5636fUL, 0x84c87814UL, 0x8cc70208UL,
 0x90befffaUL, 0xa4506cebUL, 0xbef9a3f7UL, 0xc67178f2UL
};


static const ut32 sha256_initial_hash_value[8] = {
 0x6a09e667UL,
 0xbb67ae85UL,
 0x3c6ef372UL,
 0xa54ff53aUL,
 0x510e527fUL,
 0x9b05688cUL,
 0x1f83d9abUL,
 0x5be0cd19UL
};


static const ut64 K512[80] = {
 0x428a2f98d728ae22ULL, 0x7137449123ef65cdULL,
 0xb5c0fbcfec4d3b2fULL, 0xe9b5dba58189dbbcULL,
 0x3956c25bf348b538ULL, 0x59f111f1b605d019ULL,
 0x923f82a4af194f9bULL, 0xab1c5ed5da6d8118ULL,
 0xd807aa98a3030242ULL, 0x12835b0145706fbeULL,
 0x243185be4ee4b28cULL, 0x550c7dc3d5ffb4e2ULL,
 0x72be5d74f27b896fULL, 0x80deb1fe3b1696b1ULL,
 0x9bdc06a725c71235ULL, 0xc19bf174cf692694ULL,
 0xe49b69c19ef14ad2ULL, 0xefbe4786384f25e3ULL,
 0x0fc19dc68b8cd5b5ULL, 0x240ca1cc77ac9c65ULL,
 0x2de92c6f592b0275ULL, 0x4a7484aa6ea6e483ULL,
 0x5cb0a9dcbd41fbd4ULL, 0x76f988da831153b5ULL,
 0x983e5152ee66dfabULL, 0xa831c66d2db43210ULL,
 0xb00327c898fb213fULL, 0xbf597fc7beef0ee4ULL,
 0xc6e00bf33da88fc2ULL, 0xd5a79147930aa725ULL,
 0x06ca6351e003826fULL, 0x142929670a0e6e70ULL,
 0x27b70a8546d22ffcULL, 0x2e1b21385c26c926ULL,
 0x4d2c6dfc5ac42aedULL, 0x53380d139d95b3dfULL,
 0x650a73548baf63deULL, 0x766a0abb3c77b2a8ULL,
 0x81c2c92e47edaee6ULL, 0x92722c851482353bULL,
 0xa2bfe8a14cf10364ULL, 0xa81a664bbc423001ULL,
 0xc24b8b70d0f89791ULL, 0xc76c51a30654be30ULL,
 0xd192e819d6ef5218ULL, 0xd69906245565a910ULL,
 0xf40e35855771202aULL, 0x106aa07032bbd1b8ULL,
 0x19a4c116b8d2d0c8ULL, 0x1e376c085141ab53ULL,
 0x2748774cdf8eeb99ULL, 0x34b0bcb5e19b48a8ULL,
 0x391c0cb3c5c95a63ULL, 0x4ed8aa4ae3418acbULL,
 0x5b9cca4f7763e373ULL, 0x682e6ff3d6b2b8a3ULL,
 0x748f82ee5defb2fcULL, 0x78a5636f43172f60ULL,
 0x84c87814a1f0ab72ULL, 0x8cc702081a6439ecULL,
 0x90befffa23631e28ULL, 0xa4506cebde82bde9ULL,
 0xbef9a3f7b2c67915ULL, 0xc67178f2e372532bULL,
 0xca273eceea26619cULL, 0xd186b8c721c0c207ULL,
 0xeada7dd6cde0eb1eULL, 0xf57d4f7fee6ed178ULL,
 0x06f067aa72176fbaULL, 0x0a637dc5a2c898a6ULL,
 0x113f9804bef90daeULL, 0x1b710b35131c471bULL,
 0x28db77f523047d84ULL, 0x32caab7b40c72493ULL,
 0x3c9ebe0a15c9bebcULL, 0x431d67c49c100d4cULL,
 0x4cc5d4becb3e42b6ULL, 0x597f299cfc657e2aULL,
 0x5fcb6fab3ad6faecULL, 0x6c44198c4a475817ULL
};


static const ut64 sha384_initial_hash_value[8] = {
 0xcbbb9d5dc1059ed8ULL,
 0x629a292a367cd507ULL,
 0x9159015a3070dd17ULL,
 0x152fecd8f70e5939ULL,
 0x67332667ffc00b31ULL,
 0x8eb44a8768581511ULL,
 0xdb0c2e0d64f98fa7ULL,
 0x47b5481dbefa4fa4ULL
};


static const ut64 sha512_initial_hash_value[8] = {
 0x6a09e667f3bcc908ULL,
 0xbb67ae8584caa73bULL,
 0x3c6ef372fe94f82bULL,
 0xa54ff53a5f1d36f1ULL,
 0x510e527fade682d1ULL,
 0x9b05688c2b3e6c1fULL,
 0x1f83d9abfb41bd6bULL,
 0x5be0cd19137e2179ULL
};





static const char *sha2_hex_digits = "0123456789abcdef";



void r_SHA256_Init(R_SHA256_CTX *context) {
 if (context == (R_SHA256_CTX *) 0) {
  return;
 }
 memcpy (context->state, sha256_initial_hash_value, r_SHA256_DIGEST_LENGTH);
 r_mem_memzero (context->buffer, r_SHA256_BLOCK_LENGTH);
 context->bitcount = 0;
}

#ifdef SHA2_UNROLL_TRANSFORM



#if BYTE_ORDER == LITTLE_ENDIAN

#define ROUND256_0_TO_15(a,b,c,d,e,f,g,h) \
 REVERSE32 (*data++, W256[j]);\
 T1 = (h) + Sigma1_256 (e) + Ch ((e), (f), (g)) +\
 K256[j] + W256[j];\
 (d) += T1;\
 (h) = T1 + Sigma0_256 (a) + Maj ((a), (b), (c));\
 j++


#else

#define ROUND256_0_TO_15(a,b,c,d,e,f,g,h) \
 T1 = (h) + Sigma1_256 (e) + Ch ((e), (f), (g)) +\
 K256[j] + (W256[j] = *data++);\
 (d) += T1;\
 (h) = T1 + Sigma0_256 (a) + Maj ((a), (b), (c));\
 j++

#endif

#define ROUND256(a,b,c,d,e,f,g,h) \
 s0 = W256[(j + 1) & 0x0f];\
 s0 = sigma0_256 (s0);\
 s1 = W256[(j + 14) & 0x0f];\
 s1 = sigma1_256 (s1);\
 T1 = (h) + Sigma1_256 (e) + Ch ((e), (f), (g)) + K256[j] +\
 (W256[j & 0x0f] += s1 + W256[(j + 9) & 0x0f] + s0);\
 (d) += T1;\
 (h) = T1 + Sigma0_256 (a) + Maj ((a), (b), (c));\
 j++

static void SHA256_Transform(R_SHA256_CTX *context, const ut32 *data) {
 ut32 a, b, c, d, e, f, g, h, s0, s1;
 ut32 T1, *W256;
 int j;

 W256 = (ut32 *) context->buffer;


 a = context->state[0];
 b = context->state[1];
 c = context->state[2];
 d = context->state[3];
 e = context->state[4];
 f = context->state[5];
 g = context->state[6];
 h = context->state[7];

 j = 0;
 do {

  ROUND256_0_TO_15 (a, b, c, d, e, f, g, h);
  ROUND256_0_TO_15 (h, a, b, c, d, e, f, g);
  ROUND256_0_TO_15 (g, h, a, b, c, d, e, f);
  ROUND256_0_TO_15 (f, g, h, a, b, c, d, e);
  ROUND256_0_TO_15 (e, f, g, h, a, b, c, d);
  ROUND256_0_TO_15 (d, e, f, g, h, a, b, c);
  ROUND256_0_TO_15 (c, d, e, f, g, h, a, b);
  ROUND256_0_TO_15 (b, c, d, e, f, g, h, a);
 } while (j < 16);


 do {
  ROUND256 (a, b, c, d, e, f, g, h);
  ROUND256 (h, a, b, c, d, e, f, g);
  ROUND256 (g, h, a, b, c, d, e, f);
  ROUND256 (f, g, h, a, b, c, d, e);
  ROUND256 (e, f, g, h, a, b, c, d);
  ROUND256 (d, e, f, g, h, a, b, c);
  ROUND256 (c, d, e, f, g, h, a, b);
  ROUND256 (b, c, d, e, f, g, h, a);
 } while (j < 64);


 context->state[0] += a;
 context->state[1] += b;
 context->state[2] += c;
 context->state[3] += d;
 context->state[4] += e;
 context->state[5] += f;
 context->state[6] += g;
 context->state[7] += h;


 a = b = c = d = e = f = g = h = T1 = 0;
}

#else

static void SHA256_Transform(R_SHA256_CTX *context, const ut32 *data) {
 ut32 a, b, c, d, e, f, g, h, s0, s1;
 ut32 T1, T2, *W256;
 int j;

 W256 = (ut32 *) context->buffer;


 a = context->state[0];
 b = context->state[1];
 c = context->state[2];
 d = context->state[3];
 e = context->state[4];
 f = context->state[5];
 g = context->state[6];
 h = context->state[7];

 j = 0;
 do {
#if BYTE_ORDER == LITTLE_ENDIAN

  REVERSE32 (*data++, W256[j]);

  T1 = h + Sigma1_256 (e) + Ch (e, f, g) + K256[j] + W256[j];
#else

  T1 = h + Sigma1_256 (e) + Ch (e, f, g) + K256[j] + (W256[j] = *data++);
#endif
  T2 = Sigma0_256 (a) + Maj (a, b, c);
  h = g;
  g = f;
  f = e;
  e = d + T1;
  d = c;
  c = b;
  b = a;
  a = T1 + T2;

  j++;
 } while (j < 16);

 do {

  s0 = W256[(j + 1) & 0x0f];
  s0 = sigma0_256 (s0);
  s1 = W256[(j + 14) & 0x0f];
  s1 = sigma1_256 (s1);


  T1 = h + Sigma1_256 (e) + Ch (e, f, g) + K256[j] +
  (W256[j & 0x0f] += s1 + W256[(j + 9) & 0x0f] + s0);
  T2 = Sigma0_256 (a) + Maj (a, b, c);
  h = g;
  g = f;
  f = e;
  e = d + T1;
  d = c;
  c = b;
  b = a;
  a = T1 + T2;

  j++;
 } while (j < 64);


 context->state[0] += a;
 context->state[1] += b;
 context->state[2] += c;
 context->state[3] += d;
 context->state[4] += e;
 context->state[5] += f;
 context->state[6] += g;
 context->state[7] += h;


 a = b = c = d = e = f = g = h = T1 = T2 = 0;
}

#endif

void r_SHA256_Update(R_SHA256_CTX *context, const ut8 *data, size_t len) {
 unsigned int freespace, usedspace;


 if (!context || !data || len == 0) {
  return;
 }

 usedspace = (context->bitcount >> 3) % SHA256_BLOCK_LENGTH;
 if (usedspace > 0) {

  freespace = SHA256_BLOCK_LENGTH - usedspace;

  if (len >= freespace) {

   memcpy (&context->buffer[usedspace], data, freespace);
   context->bitcount += freespace << 3;
   len -= freespace;
   data += freespace;
   SHA256_Transform (context, (ut32 *) context->buffer);
  } else {

   memcpy (&context->buffer[usedspace], data, len);
   context->bitcount += len << 3;

   usedspace = freespace = 0;
   return;
  }
 }
 while (len >= SHA256_BLOCK_LENGTH) {

  SHA256_Transform (context, (ut32 *) data);
  context->bitcount += SHA256_BLOCK_LENGTH << 3;
  len -= SHA256_BLOCK_LENGTH;
  data += SHA256_BLOCK_LENGTH;
 }
 if (len > 0) {

  memcpy (context->buffer, data, len);
  context->bitcount += len << 3;
 }

 usedspace = freespace = 0;
}

void r_SHA256_Final(ut8 *digest, R_SHA256_CTX *context) {
 ut32 *d = (ut32 *) digest;
 unsigned int usedspace;


 if (!context) {
  return;
 }


 if (digest != (ut8 *) 0) {
  usedspace = (context->bitcount >> 3) % SHA256_BLOCK_LENGTH;
#if BYTE_ORDER == LITTLE_ENDIAN

  REVERSE64 (context->bitcount, context->bitcount);
#endif
  if (usedspace > 0) {

   context->buffer[usedspace++] = 0x80;

   if (usedspace <= r_SHA256_SHORT_BLOCK_LENGTH) {

    memset (&context->buffer[usedspace], 0, r_SHA256_SHORT_BLOCK_LENGTH - usedspace);
   } else {
    if (usedspace < r_SHA256_BLOCK_LENGTH) {
     memset (&context->buffer[usedspace], 0, r_SHA256_BLOCK_LENGTH - usedspace);
    }

    SHA256_Transform (context, (ut32 *) context->buffer);


    memset (context->buffer, 0, r_SHA256_SHORT_BLOCK_LENGTH);
   }
  } else {

   memset (context->buffer, 0, r_SHA256_SHORT_BLOCK_LENGTH);


   *context->buffer = 0x80;
  }

#if WEAK_ALIASING
  *(ut64 *) &context->buffer[r_SHA256_SHORT_BLOCK_LENGTH] = context->bitcount;
#else
  {
   ut64 *p = (ut64 *) ((ut8 *) context->buffer + r_SHA256_SHORT_BLOCK_LENGTH);
   *p = (ut64) context->bitcount;
  }
#endif


  SHA256_Transform (context, (ut32 *) context->buffer);

#if BYTE_ORDER == LITTLE_ENDIAN
  {

   int j;
   for (j = 0; j < 8; j++) {
    REVERSE32 (context->state[j], context->state[j]);
    *d++ = context->state[j];
   }
  }
#else
  memcpy (d, context->state, r_SHA256_DIGEST_LENGTH);
#endif
 }


 r_mem_memzero (context, sizeof(*context));
 usedspace = 0;
}

char *r_SHA256_End(R_SHA256_CTX *context, char buffer[]) {
 ut8 digest[r_SHA256_DIGEST_LENGTH], *d = digest;
 int i;

 if (!context) {
  return NULL;
 }

 if (buffer) {
  r_SHA256_Final (digest, context);
  for (i = 0; i < r_SHA256_DIGEST_LENGTH; i++) {
   *buffer++ = sha2_hex_digits[(*d & 0xf0) >> 4];
   *buffer++ = sha2_hex_digits[*d & 0x0f];
   d++;
  }
  *buffer = (char) 0;
 } else {
  r_mem_memzero (context, sizeof(*context));
 }
 r_mem_memzero (digest, r_SHA256_DIGEST_LENGTH);
 return buffer;
}

char *r_SHA256_Data(const ut8 *data, size_t len, char digest[r_SHA256_DIGEST_STRING_LENGTH]) {
 R_SHA256_CTX context;

 r_SHA256_Init (&context);
 r_SHA256_Update (&context, data, len);
 return r_SHA256_End (&context, digest);
}



void r_SHA512_Init(R_SHA512_CTX *context) {
 if (context == (R_SHA512_CTX *) 0) {
  return;
 }
 memcpy (context->state, sha512_initial_hash_value, r_SHA512_DIGEST_LENGTH);
 r_mem_memzero (context->buffer, r_SHA512_BLOCK_LENGTH);
 context->bitcount[0] = context->bitcount[1] = 0;
}

#ifdef SHA2_UNROLL_TRANSFORM


#if BYTE_ORDER == LITTLE_ENDIAN

#define ROUND512_0_TO_15(a,b,c,d,e,f,g,h) \
 REVERSE64 (*data++, W512[j]);\
 T1 = (h) + Sigma1_512 (e) + Ch ((e), (f), (g)) +\
 K512[j] + W512[j];\
 (d) += T1,\
 (h) = T1 + Sigma0_512 (a) + Maj ((a), (b), (c)),\
 j++


#else

#define ROUND512_0_TO_15(a,b,c,d,e,f,g,h) \
 T1 = (h) + Sigma1_512 (e) + Ch ((e), (f), (g)) +\
 K512[j] + (W512[j] = *data++);\
 (d) += T1;\
 (h) = T1 + Sigma0_512 (a) + Maj ((a), (b), (c));\
 j++

#endif

#define ROUND512(a,b,c,d,e,f,g,h) \
 s0 = W512[(j + 1) & 0x0f];\
 s0 = sigma0_512 (s0);\
 s1 = W512[(j + 14) & 0x0f];\
 s1 = sigma1_512 (s1);\
 T1 = (h) + Sigma1_512 (e) + Ch ((e), (f), (g)) + K512[j] +\
 (W512[j & 0x0f] += s1 + W512[(j + 9) & 0x0f] + s0);\
 (d) += T1;\
 (h) = T1 + Sigma0_512 (a) + Maj ((a), (b), (c));\
 j++

static void SHA512_Transform(R_SHA512_CTX *context, const ut64 *data) {
 ut64 a, b, c, d, e, f, g, h, s0, s1;
 ut64 T1, *W512 = (ut64 *) context->buffer;
 int j;


 a = context->state[0];
 b = context->state[1];
 c = context->state[2];
 d = context->state[3];
 e = context->state[4];
 f = context->state[5];
 g = context->state[6];
 h = context->state[7];

 j = 0;
 do {
  ROUND512_0_TO_15 (a, b, c, d, e, f, g, h);
  ROUND512_0_TO_15 (h, a, b, c, d, e, f, g);
  ROUND512_0_TO_15 (g, h, a, b, c, d, e, f);
  ROUND512_0_TO_15 (f, g, h, a, b, c, d, e);
  ROUND512_0_TO_15 (e, f, g, h, a, b, c, d);
  ROUND512_0_TO_15 (d, e, f, g, h, a, b, c);
  ROUND512_0_TO_15 (c, d, e, f, g, h, a, b);
  ROUND512_0_TO_15 (b, c, d, e, f, g, h, a);
 } while (j < 16);


 do {
  ROUND512 (a, b, c, d, e, f, g, h);
  ROUND512 (h, a, b, c, d, e, f, g);
  ROUND512 (g, h, a, b, c, d, e, f);
  ROUND512 (f, g, h, a, b, c, d, e);
  ROUND512 (e, f, g, h, a, b, c, d);
  ROUND512 (d, e, f, g, h, a, b, c);
  ROUND512 (c, d, e, f, g, h, a, b);
  ROUND512 (b, c, d, e, f, g, h, a);
 } while (j < 80);


 context->state[0] += a;
 context->state[1] += b;
 context->state[2] += c;
 context->state[3] += d;
 context->state[4] += e;
 context->state[5] += f;
 context->state[6] += g;
 context->state[7] += h;


 a = b = c = d = e = f = g = h = T1 = 0;
}

#else

static void SHA512_Transform(R_SHA512_CTX *context, const ut64 *data) {
 ut64 a, b, c, d, e, f, g, h, s0, s1;
 ut64 T1, T2, *W512 = (ut64 *) context->buffer;
 int j;


 a = context->state[0];
 b = context->state[1];
 c = context->state[2];
 d = context->state[3];
 e = context->state[4];
 f = context->state[5];
 g = context->state[6];
 h = context->state[7];

 j = 0;
 do {
#if BYTE_ORDER == LITTLE_ENDIAN

  REVERSE64 (*data++, W512[j]);

  T1 = h + Sigma1_512 (e) + Ch (e, f, g) + K512[j] + W512[j];
#else

  T1 = h + Sigma1_512 (e) + Ch (e, f, g) + K512[j] + (W512[j] = *data++);
#endif
  T2 = Sigma0_512 (a) + Maj (a, b, c);
  h = g;
  g = f;
  f = e;
  e = d + T1;
  d = c;
  c = b;
  b = a;
  a = T1 + T2;

  j++;
 } while (j < 16);

 do {

  s0 = W512[(j + 1) & 0x0f];
  s0 = sigma0_512 (s0);
  s1 = W512[(j + 14) & 0x0f];
  s1 = sigma1_512 (s1);


  T1 = h + Sigma1_512 (e) + Ch (e, f, g) + K512[j] +
  (W512[j & 0x0f] += s1 + W512[(j + 9) & 0x0f] + s0);
  T2 = Sigma0_512 (a) + Maj (a, b, c);
  h = g;
  g = f;
  f = e;
  e = d + T1;
  d = c;
  c = b;
  b = a;
  a = T1 + T2;

  j++;
 } while (j < 80);


 context->state[0] += a;
 context->state[1] += b;
 context->state[2] += c;
 context->state[3] += d;
 context->state[4] += e;
 context->state[5] += f;
 context->state[6] += g;
 context->state[7] += h;


 a = b = c = d = e = f = g = h = T1 = T2 = 0;
}

#endif

void r_SHA512_Update(R_SHA512_CTX *context, const ut8 *data, size_t len) {
 unsigned int freespace, usedspace;

 if (len == 0) {

  return;
 }


 if (!context || !data) {
  return;
 }

 usedspace = (context->bitcount[0] >> 3) % SHA512_BLOCK_LENGTH;
 if (usedspace > 0) {

  freespace = SHA512_BLOCK_LENGTH - usedspace;

  if (len >= freespace) {

   memcpy (&context->buffer[usedspace], data, freespace);
   ADDINC128 (context->bitcount, freespace << 3);
   len -= freespace;
   data += freespace;
   SHA512_Transform (context, (ut64 *) context->buffer);
  } else {

   memcpy (&context->buffer[usedspace], data, len);
   ADDINC128 (context->bitcount, len << 3);

   usedspace = freespace = 0;
   return;
  }
 }
 while (len >= SHA512_BLOCK_LENGTH) {

  SHA512_Transform (context, (ut64 *) data);
  ADDINC128 (context->bitcount, r_SHA512_BLOCK_LENGTH << 3);
  len -= SHA512_BLOCK_LENGTH;
  data += SHA512_BLOCK_LENGTH;
 }
 if (len > 0) {

  memcpy (context->buffer, data, len);
  ADDINC128 (context->bitcount, len << 3);
 }

 usedspace = freespace = 0;
}

static void SHA512_Last(R_SHA512_CTX *context) {
 unsigned int usedspace;

 usedspace = (context->bitcount[0] >> 3) % SHA512_BLOCK_LENGTH;
#if BYTE_ORDER == LITTLE_ENDIAN

 REVERSE64 (context->bitcount[0], context->bitcount[0]);
 REVERSE64 (context->bitcount[1], context->bitcount[1]);
#endif
 if (usedspace > 0) {

  context->buffer[usedspace++] = 0x80;

  if (usedspace <= r_SHA512_SHORT_BLOCK_LENGTH) {

   memset (&context->buffer[usedspace], 0, r_SHA512_SHORT_BLOCK_LENGTH - usedspace);
  } else {
   if (usedspace < r_SHA512_BLOCK_LENGTH) {
    memset (&context->buffer[usedspace], 0, r_SHA512_BLOCK_LENGTH - usedspace);
   }

   SHA512_Transform (context, (ut64 *) context->buffer);


   memset (context->buffer, 0, r_SHA512_BLOCK_LENGTH - 2);
  }
 } else {

  memset (context->buffer, 0, r_SHA512_SHORT_BLOCK_LENGTH);


  *context->buffer = 0x80;
 }

#if WEAK_ALIASING
 *(ut64 *) &context->buffer[r_SHA512_SHORT_BLOCK_LENGTH] = context->bitcount[1];
 *(ut64 *) &context->buffer[r_SHA512_SHORT_BLOCK_LENGTH + 8] = context->bitcount[0];
#else
 {
  ut64 *p = (ut64 *) ((ut8 *) context->buffer + r_SHA512_SHORT_BLOCK_LENGTH);
  *p = (ut64) context->bitcount[1];
  p = (ut64 *) ((ut8 *) context->buffer + r_SHA512_SHORT_BLOCK_LENGTH + 8);
  *p = (ut64) context->bitcount[0];
 }
#endif


 SHA512_Transform (context, (ut64 *) context->buffer);
}

void r_SHA512_Final(ut8 digest[], R_SHA512_CTX *context) {
 ut64 *d = (ut64 *) digest;


 if (!context) {
  return;
 }


 if (digest != (ut8 *) 0) {
  SHA512_Last (context);


#if BYTE_ORDER == LITTLE_ENDIAN
  {

   int j;
   for (j = 0; j < 8; j++) {
    REVERSE64 (context->state[j], context->state[j]);
    *d++ = context->state[j];
   }
  }
#else
  memcpy (d, context->state, r_SHA512_DIGEST_LENGTH);
#endif
 }


 r_mem_memzero (context, sizeof(*context));
}

char *r_SHA512_End(R_SHA512_CTX *context, char buffer[]) {
 ut8 digest[r_SHA512_DIGEST_LENGTH], *d = digest;
 int i;


 if (!context) {
  return NULL;
 }

 if (buffer) {
  r_SHA512_Final (digest, context);

  for (i = 0; i < r_SHA512_DIGEST_LENGTH; i++) {
   *buffer++ = sha2_hex_digits[(*d & 0xf0) >> 4];
   *buffer++ = sha2_hex_digits[*d & 0x0f];
   d++;
  }
  *buffer = (char) 0;
 } else {
  r_mem_memzero (context, sizeof(*context));
 }
 r_mem_memzero (digest, r_SHA512_DIGEST_LENGTH);
 return buffer;
}

char *r_SHA512_Data(const ut8 *data, size_t len, char digest[r_SHA512_DIGEST_STRING_LENGTH]) {
 R_SHA512_CTX context;
 r_SHA512_Init (&context);
 r_SHA512_Update (&context, data, len);
 return r_SHA512_End (&context, digest);
}



void r_SHA384_Init(R_SHA384_CTX *context) {
 if (context == (R_SHA384_CTX *) 0) {
  return;
 }
 memcpy (context->state, sha384_initial_hash_value, r_SHA512_DIGEST_LENGTH);
 memset (context->buffer, 0, r_SHA384_BLOCK_LENGTH);
 context->bitcount[0] = context->bitcount[1] = 0;
}

void r_SHA384_Update(R_SHA384_CTX *context, const ut8 *data, size_t len) {
 r_SHA512_Update ((R_SHA512_CTX *) context, data, len);
}

void r_SHA384_Final(ut8 digest[], R_SHA384_CTX *context) {
 ut64 *d = (ut64 *) digest;


 if (!context) {
  return;
 }


 if (digest != (ut8 *) 0) {
  SHA512_Last ((R_SHA512_CTX *) context);


#if BYTE_ORDER == LITTLE_ENDIAN
  {

   int j;
   for (j = 0; j < 6; j++) {
    REVERSE64 (context->state[j], context->state[j]);
    *d++ = context->state[j];
   }
  }
#else
  memcpy (d, context->state, r_SHA384_DIGEST_LENGTH);
#endif
 }


 memset (context, 0, sizeof(*context));
}

char *r_SHA384_End(R_SHA384_CTX *context, char buffer[]) {
 ut8 digest[r_SHA384_DIGEST_LENGTH], *d = digest;
 int i;


 if (!context) {
  return NULL;
 }

 if (buffer != (char *) 0) {
  r_SHA384_Final (digest, context);

  for (i = 0; i < r_SHA384_DIGEST_LENGTH; i++) {
   *buffer++ = sha2_hex_digits[(*d & 0xf0) >> 4];
   *buffer++ = sha2_hex_digits[*d & 0x0f];
   d++;
  }
  *buffer = (char) 0;
 } else {
  memset (context, 0, sizeof(*context));
 }
 memset (digest, 0, r_SHA384_DIGEST_LENGTH);
 return buffer;
}

char *r_SHA384_Data(const ut8 *data, size_t len, char digest[r_SHA384_DIGEST_STRING_LENGTH]) {
 R_SHA384_CTX context;
 r_SHA384_Init (&context);
 r_SHA384_Update (&context, data, len);
 return r_SHA384_End (&context, digest);
}
