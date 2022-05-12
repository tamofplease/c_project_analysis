# 0 "project/radare2/shlr/capstone/MathExtras.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/shlr/capstone/MathExtras.h"
# 37 "project/radare2/shlr/capstone/MathExtras.h"
static inline uint32_t Hi_32(uint64_t Value) {
 return (uint32_t)(Value >> 32);
}


static inline uint32_t Lo_32(uint64_t Value) {
 return (uint32_t)(Value);
}



static inline bool isUIntN(unsigned N, uint64_t x) {
 return x == (x & (~0ULL >> (64 - N)));
}
# 61 "project/radare2/shlr/capstone/MathExtras.h"
static inline bool isMask_32(uint32_t Value) {
 return Value && ((Value + 1) & Value) == 0;
}




static inline bool isMask_64(uint64_t Value) {
 return Value && ((Value + 1) & Value) == 0;
}




static inline bool isShiftedMask_32(uint32_t Value) {
 return isMask_32((Value - 1) | Value);
}



static inline bool isShiftedMask_64(uint64_t Value) {
 return isMask_64((Value - 1) | Value);
}



static inline bool isPowerOf2_32(uint32_t Value) {
 return Value && !(Value & (Value - 1));
}





static inline unsigned CountLeadingZeros_32(uint32_t Value) {
 unsigned Count;



 if (!Value) return 32;

 Count = __builtin_clz(Value);
# 117 "project/radare2/shlr/capstone/MathExtras.h"
 return Count;
}





static inline unsigned CountLeadingOnes_32(uint32_t Value) {
 return CountLeadingZeros_32(~Value);
}





static inline unsigned CountLeadingZeros_64(uint64_t Value) {
 unsigned Count;



 if (!Value) return 64;

 Count = __builtin_clzll(Value);
# 175 "project/radare2/shlr/capstone/MathExtras.h"
 return Count;
}





static inline unsigned CountLeadingOnes_64(uint64_t Value) {
 return CountLeadingZeros_64(~Value);
}





static inline unsigned CountTrailingZeros_32(uint32_t Value) {

 return Value ? __builtin_ctz(Value) : 32;
# 204 "project/radare2/shlr/capstone/MathExtras.h"
}





static inline unsigned CountTrailingOnes_32(uint32_t Value) {
 return CountTrailingZeros_32(~Value);
}





static inline unsigned CountTrailingZeros_64(uint64_t Value) {

 return Value ? __builtin_ctzll(Value) : 64;
# 234 "project/radare2/shlr/capstone/MathExtras.h"
}





static inline unsigned CountTrailingOnes_64(uint64_t Value) {
 return CountTrailingZeros_64(~Value);
}




static inline unsigned CountPopulation_32(uint32_t Value) {

 return __builtin_popcount(Value);





}



static inline unsigned CountPopulation_64(uint64_t Value) {

 return __builtin_popcountll(Value);






}




static inline unsigned Log2_32(uint32_t Value) {
 return 31 - CountLeadingZeros_32(Value);
}



static inline unsigned Log2_64(uint64_t Value) {
 return 63 - CountLeadingZeros_64(Value);
}




static inline unsigned Log2_32_Ceil(uint32_t Value) {
 return 32-CountLeadingZeros_32(Value-1);
}



static inline unsigned Log2_64_Ceil(uint64_t Value) {
 return 64-CountLeadingZeros_64(Value-1);
}



static inline uint64_t GreatestCommonDivisor64(uint64_t A, uint64_t B) {
 while (B) {
  uint64_t T = B;
  B = A % B;
  A = T;
 }
 return A;
}



static inline double BitsToDouble(uint64_t Bits) {
 union {
  uint64_t L;
  double D;
 } T;
 T.L = Bits;
 return T.D;
}



static inline float BitsToFloat(uint32_t Bits) {
 union {
  uint32_t I;
  float F;
 } T;
 T.I = Bits;
 return T.F;
}





static inline uint64_t DoubleToBits(double Double) {
 union {
  uint64_t L;
  double D;
 } T;
 T.D = Double;
 return T.L;
}





static inline uint32_t FloatToBits(float Float) {
 union {
  uint32_t I;
  float F;
 } T;
 T.F = Float;
 return T.I;
}



static inline uint64_t MinAlign(uint64_t A, uint64_t B) {





 return (A | B) & (1 + ~(A | B));
}



static inline uint64_t NextPowerOf2(uint64_t A) {
 A |= (A >> 1);
 A |= (A >> 2);
 A |= (A >> 4);
 A |= (A >> 8);
 A |= (A >> 16);
 A |= (A >> 32);
 return A + 1;
}
# 387 "project/radare2/shlr/capstone/MathExtras.h"
static inline uint64_t RoundUpToAlignment(uint64_t Value, uint64_t Align) {
 return ((Value + Align - 1) / Align) * Align;
}




static inline uint64_t OffsetToAlignment(uint64_t Value, uint64_t Align) {
 return RoundUpToAlignment(Value, Align) - Value;
}




static inline int64_t abs64(int64_t x) {
 return (x < 0) ? -x : x;
}



static inline int32_t SignExtend32(uint32_t X, unsigned B) {
 return (int32_t)(X << (32 - B)) >> (32 - B);
}



static inline int64_t SignExtend64(uint64_t X, unsigned B) {
 return (int64_t)(X << (64 - B)) >> (64 - B);
}
# 424 "project/radare2/shlr/capstone/MathExtras.h"
static inline unsigned int countLeadingZeros(int x)
{
 int i;
 const unsigned bits = sizeof(x) * 8;
 unsigned count = bits;

 if (x < 0) {
  return 0;
 }
 for (i = bits; --i; ) {
  if (x == 0) break;
  count--;
  x >>= 1;
 }

 return count;
}
