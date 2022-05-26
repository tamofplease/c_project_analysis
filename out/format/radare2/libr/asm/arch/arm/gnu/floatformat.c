# 1 "project/radare2/libr/asm/arch/arm/gnu/floatformat.c"
# 22 "project/radare2/libr/asm/arch/arm/gnu/floatformat.c"
#define _GNU_SOURCE 

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <math.h>

#include <string.h>


#ifdef STDC_HEADERS
#include <float.h>
#endif

#include "ansidecl.h"
#include "libiberty.h"
#include "floatformat.h"

#ifndef INFINITY
#ifdef HUGE_VAL
#define INFINITY HUGE_VAL
#else
#define INFINITY (1.0 / 0.0)
#endif
#endif

#ifndef NAN
#ifdef DBL_QNAN
#define NAN DBL_QNAN
#else
#define NAN (0.0 / 0.0)
#endif
#endif

static int mant_bits_set (const struct floatformat *, const unsigned char *);
static unsigned long get_field (const unsigned char *,
                                enum floatformat_byteorders,
                                unsigned int,
                                unsigned int,
                                unsigned int);
static int floatformat_always_valid (const struct floatformat *fmt,
                                     const void *from);

static int
floatformat_always_valid (const struct floatformat *fmt ATTRIBUTE_UNUSED,
                          const void *from ATTRIBUTE_UNUSED)
{
  return 1;
}




#define FLOATFORMAT_CHAR_BIT 8


const struct floatformat floatformat_ieee_half_big =
{
  floatformat_big, 16, 0, 1, 5, 15, 31, 6, 10,
  floatformat_intbit_no,
  "floatformat_ieee_half_big",
  floatformat_always_valid,
  NULL
};
const struct floatformat floatformat_ieee_half_little =
{
  floatformat_little, 16, 0, 1, 5, 15, 31, 6, 10,
  floatformat_intbit_no,
  "floatformat_ieee_half_little",
  floatformat_always_valid,
  NULL
};
const struct floatformat floatformat_ieee_single_big =
{
  floatformat_big, 32, 0, 1, 8, 127, 255, 9, 23,
  floatformat_intbit_no,
  "floatformat_ieee_single_big",
  floatformat_always_valid,
  NULL
};
const struct floatformat floatformat_ieee_single_little =
{
  floatformat_little, 32, 0, 1, 8, 127, 255, 9, 23,
  floatformat_intbit_no,
  "floatformat_ieee_single_little",
  floatformat_always_valid,
  NULL
};
const struct floatformat floatformat_ieee_double_big =
{
  floatformat_big, 64, 0, 1, 11, 1023, 2047, 12, 52,
  floatformat_intbit_no,
  "floatformat_ieee_double_big",
  floatformat_always_valid,
  NULL
};
const struct floatformat floatformat_ieee_double_little =
{
  floatformat_little, 64, 0, 1, 11, 1023, 2047, 12, 52,
  floatformat_intbit_no,
  "floatformat_ieee_double_little",
  floatformat_always_valid,
  NULL
};




const struct floatformat floatformat_ieee_double_littlebyte_bigword =
{
  floatformat_littlebyte_bigword, 64, 0, 1, 11, 1023, 2047, 12, 52,
  floatformat_intbit_no,
  "floatformat_ieee_double_littlebyte_bigword",
  floatformat_always_valid,
  NULL
};



const struct floatformat floatformat_vax_f =
{
  floatformat_vax, 32, 0, 1, 8, 129, 0, 9, 23,
  floatformat_intbit_no,
  "floatformat_vax_f",
  floatformat_always_valid,
  NULL
};
const struct floatformat floatformat_vax_d =
{
  floatformat_vax, 64, 0, 1, 8, 129, 0, 9, 55,
  floatformat_intbit_no,
  "floatformat_vax_d",
  floatformat_always_valid,
  NULL
};
const struct floatformat floatformat_vax_g =
{
  floatformat_vax, 64, 0, 1, 11, 1025, 0, 12, 52,
  floatformat_intbit_no,
  "floatformat_vax_g",
  floatformat_always_valid,
  NULL
};

static int floatformat_i387_ext_is_valid (const struct floatformat *fmt,
       const void *from);

static int
floatformat_i387_ext_is_valid (const struct floatformat *fmt, const void *from)
{




  unsigned long exponent, int_bit;
  const unsigned char *ufrom = (const unsigned char *) from;

  exponent = get_field (ufrom, fmt->byteorder, fmt->totalsize,
   fmt->exp_start, fmt->exp_len);
  int_bit = get_field (ufrom, fmt->byteorder, fmt->totalsize,
         fmt->man_start, 1);

  if ((exponent == 0) != (int_bit == 0)) {
   return 0;
  } else {
   return 1;
  }
}

const struct floatformat floatformat_i387_ext =
{
  floatformat_little, 80, 0, 1, 15, 0x3fff, 0x7fff, 16, 64,
  floatformat_intbit_yes,
  "floatformat_i387_ext",
  floatformat_i387_ext_is_valid,
  NULL
};
const struct floatformat floatformat_m68881_ext =
{

  floatformat_big, 96, 0, 1, 15, 0x3fff, 0x7fff, 32, 64,
  floatformat_intbit_yes,
  "floatformat_m68881_ext",
  floatformat_always_valid,
  NULL
};
const struct floatformat floatformat_i960_ext =
{

  floatformat_little, 96, 16, 17, 15, 0x3fff, 0x7fff, 32, 64,
  floatformat_intbit_yes,
  "floatformat_i960_ext",
  floatformat_always_valid,
  NULL
};
const struct floatformat floatformat_m88110_ext =
{
  floatformat_big, 80, 0, 1, 15, 0x3fff, 0x7fff, 16, 64,
  floatformat_intbit_yes,
  "floatformat_m88110_ext",
  floatformat_always_valid,
  NULL
};
const struct floatformat floatformat_m88110_harris_ext =
{


  floatformat_big,128, 0, 1, 11, 0x3ff, 0x7ff, 12, 52,
  floatformat_intbit_no,
  "floatformat_m88110_ext_harris",
  floatformat_always_valid,
  NULL
};
const struct floatformat floatformat_arm_ext_big =
{

  floatformat_big, 96, 0, 17, 15, 0x3fff, 0x7fff, 32, 64,
  floatformat_intbit_yes,
  "floatformat_arm_ext_big",
  floatformat_always_valid,
  NULL
};
const struct floatformat floatformat_arm_ext_littlebyte_bigword =
{

  floatformat_littlebyte_bigword, 96, 0, 17, 15, 0x3fff, 0x7fff, 32, 64,
  floatformat_intbit_yes,
  "floatformat_arm_ext_littlebyte_bigword",
  floatformat_always_valid,
  NULL
};
const struct floatformat floatformat_ia64_spill_big =
{
  floatformat_big, 128, 0, 1, 17, 65535, 0x1ffff, 18, 64,
  floatformat_intbit_yes,
  "floatformat_ia64_spill_big",
  floatformat_always_valid,
  NULL
};
const struct floatformat floatformat_ia64_spill_little =
{
  floatformat_little, 128, 0, 1, 17, 65535, 0x1ffff, 18, 64,
  floatformat_intbit_yes,
  "floatformat_ia64_spill_little",
  floatformat_always_valid,
  NULL
};
const struct floatformat floatformat_ia64_quad_big =
{
  floatformat_big, 128, 0, 1, 15, 16383, 0x7fff, 16, 112,
  floatformat_intbit_no,
  "floatformat_ia64_quad_big",
  floatformat_always_valid,
  NULL
};
const struct floatformat floatformat_ia64_quad_little =
{
  floatformat_little, 128, 0, 1, 15, 16383, 0x7fff, 16, 112,
  floatformat_intbit_no,
  "floatformat_ia64_quad_little",
  floatformat_always_valid,
  NULL
};

static int
floatformat_ibm_long_double_is_valid (const struct floatformat *fmt,
          const void *from)
{
  const unsigned char *ufrom = (const unsigned char *) from;
  const struct floatformat *hfmt = fmt->split_half;
  long top_exp, bot_exp;
  int top_nan = 0;

  top_exp = get_field (ufrom, hfmt->byteorder, hfmt->totalsize,
         hfmt->exp_start, hfmt->exp_len);
  bot_exp = get_field (ufrom + 8, hfmt->byteorder, hfmt->totalsize,
         hfmt->exp_start, hfmt->exp_len);

  if ((unsigned long)top_exp == hfmt->exp_nan) {
   top_nan = mant_bits_set (hfmt, ufrom);
  }


  if (top_nan) {
   return 1;
  }



  if ((unsigned long) top_exp == hfmt->exp_nan || top_exp == 0)
    {
   if (bot_exp != 0) {
    return 0;
   }

   return !mant_bits_set (hfmt, ufrom + 8);
    }







    if (bot_exp < top_exp - 53) {
     return 1;
    }
    if (bot_exp > top_exp - 53 && bot_exp != 0) {
     return 0;
    }
    if (bot_exp == 0) {


     int first_bit = -1, second_bit = -1, cur_bit;
     for (cur_bit = 0; (unsigned int)cur_bit < hfmt->man_len; cur_bit++) {
      if (get_field (ufrom + 8, hfmt->byteorder, hfmt->totalsize,
    hfmt->man_start + cur_bit, 1)) {
       if (first_bit == -1) {
        first_bit = cur_bit;
       } else {
        second_bit = cur_bit;
        break;
       }
      }
     }

     if (first_bit == -1) {
      return 1;
     }

     if (-first_bit < top_exp - 53) {
      return 1;
     }
     if (-first_bit > top_exp - 53) {
      return 0;
     }



     if (second_bit != -1) {
      return 0;
     }
     return !get_field (ufrom, hfmt->byteorder, hfmt->totalsize,
      hfmt->man_start + hfmt->man_len - 1, 1);
    }
  else
    {



      if (get_field (ufrom, hfmt->byteorder, hfmt->totalsize,
    hfmt->man_start + hfmt->man_len - 1, 1)) {
       return 0;
      }
      return !mant_bits_set (hfmt, ufrom + 8);
    }
}

const struct floatformat floatformat_ibm_long_double_big =
{
  floatformat_big, 128, 0, 1, 11, 1023, 2047, 12, 52,
  floatformat_intbit_no,
  "floatformat_ibm_long_double_big",
  floatformat_ibm_long_double_is_valid,
  &floatformat_ieee_double_big
};

const struct floatformat floatformat_ibm_long_double_little =
{
  floatformat_little, 128, 0, 1, 11, 1023, 2047, 12, 52,
  floatformat_intbit_no,
  "floatformat_ibm_long_double_little",
  floatformat_ibm_long_double_is_valid,
  &floatformat_ieee_double_little
};


#ifndef min
#define min(a,b) ((a) < (b) ? (a) : (b))
#endif



static int
mant_bits_set (const struct floatformat *fmt, const unsigned char *ufrom)
{
  unsigned int mant_bits, mant_off;
  int mant_bits_left;

  mant_off = fmt->man_start;
  mant_bits_left = fmt->man_len;
  while (mant_bits_left > 0)
    {
      mant_bits = min (mant_bits_left, 32);

      if (get_field (ufrom, fmt->byteorder, fmt->totalsize,
    mant_off, mant_bits) != 0) {
       return 1;
      }

      mant_off += mant_bits;
      mant_bits_left -= mant_bits;
    }
  return 0;
}



static unsigned long
get_field (const unsigned char *data, enum floatformat_byteorders order,
           unsigned int total_len, unsigned int start, unsigned int len)
{
  unsigned long result = 0;
  unsigned int cur_byte;
  int lo_bit, hi_bit, cur_bitshift = 0;
  int nextbyte = (order == floatformat_little) ? 1 : -1;


  start = total_len - (start + len);


  if (order == floatformat_little) {
   cur_byte = start / FLOATFORMAT_CHAR_BIT;
  } else {
   cur_byte = (total_len - start - 1) / FLOATFORMAT_CHAR_BIT;
  }

  lo_bit = start % FLOATFORMAT_CHAR_BIT;
  hi_bit = min (lo_bit + len, FLOATFORMAT_CHAR_BIT);

  do
    {
      unsigned int shifted = *(data + cur_byte) >> lo_bit;
      unsigned int bits = hi_bit - lo_bit;
      unsigned int mask = (1 << bits) - 1;
      result |= (shifted & mask) << cur_bitshift;
      len -= bits;
      cur_bitshift += bits;
      cur_byte += nextbyte;
      lo_bit = 0;
      hi_bit = min (len, FLOATFORMAT_CHAR_BIT);
    }
  while (len != 0);

  return result;
}





void
floatformat_to_double (const struct floatformat *fmt,
                       const void *from, double *to)
{
  const unsigned char *ufrom = (const unsigned char *) from;
  double dto;
  long exponent;
  unsigned long mant;
  unsigned int mant_bits, mant_off;
  int mant_bits_left;





  exponent = get_field (ufrom, fmt->byteorder, fmt->totalsize,
   fmt->exp_start, fmt->exp_len);




  if ((unsigned long) exponent == fmt->exp_nan)
    {
      int nan = mant_bits_set (fmt, ufrom);
# 506 "project/radare2/libr/asm/arch/arm/gnu/floatformat.c"
      if (nan) {
       dto = NAN;
      } else {
       dto = INFINITY;
      }

      if (get_field (ufrom, fmt->byteorder, fmt->totalsize, fmt->sign_start, 1)) {
       dto = -dto;
      }

      *to = dto;

      return;
    }

  mant_bits_left = fmt->man_len;
  mant_off = fmt->man_start;
  dto = 0.0;





  if (exponent == 0) {
   exponent = 1 - fmt->exp_bias;
  } else {
   exponent -= fmt->exp_bias;





   if (fmt->intbit == floatformat_intbit_no) {
    dto = ldexp (1.0, exponent);
   } else {
    exponent++;
   }
    }

  while (mant_bits_left > 0)
    {
      mant_bits = min (mant_bits_left, 32);

      mant = get_field (ufrom, fmt->byteorder, fmt->totalsize,
    mant_off, mant_bits);

      dto += ldexp ((double) mant, exponent - mant_bits);
      exponent -= mant_bits;
      mant_off += mant_bits;
      mant_bits_left -= mant_bits;
    }


    if (get_field (ufrom, fmt->byteorder, fmt->totalsize, fmt->sign_start, 1)) {
     dto = -dto;
    }
    *to = dto;
}

static void put_field (unsigned char *, enum floatformat_byteorders,
                       unsigned int,
                       unsigned int,
                       unsigned int,
                       unsigned long);



static void
put_field (unsigned char *data, enum floatformat_byteorders order,
           unsigned int total_len, unsigned int start, unsigned int len,
           unsigned long stuff_to_put)
{
  unsigned int cur_byte;
  int lo_bit, hi_bit;
  int nextbyte = (order == floatformat_little) ? 1 : -1;


  start = total_len - (start + len);


  if (order == floatformat_little) {
   cur_byte = start / FLOATFORMAT_CHAR_BIT;
  } else {
   cur_byte = (total_len - start - 1) / FLOATFORMAT_CHAR_BIT;
  }

  lo_bit = start % FLOATFORMAT_CHAR_BIT;
  hi_bit = min (lo_bit + len, FLOATFORMAT_CHAR_BIT);

  do
    {
      unsigned char *byte_ptr = data + cur_byte;
      unsigned int bits = hi_bit - lo_bit;
      unsigned int mask = ((1 << bits) - 1) << lo_bit;
      *byte_ptr = (*byte_ptr & ~mask) | ((stuff_to_put << lo_bit) & mask);
      stuff_to_put >>= bits;
      len -= bits;
      cur_byte += nextbyte;
      lo_bit = 0;
      hi_bit = min (len, FLOATFORMAT_CHAR_BIT);
    }
  while (len != 0);
}





void
floatformat_from_double (const struct floatformat *fmt,
                         const double *from, void *to)
{
  double dfrom;
  int exponent;
  double mant;
  unsigned int mant_bits, mant_off;
  int mant_bits_left;
  unsigned char *uto = (unsigned char *) to;

  dfrom = *from;
  memset (uto, 0, fmt->totalsize / FLOATFORMAT_CHAR_BIT);






  if (dfrom < 0)
    {
      put_field (uto, fmt->byteorder, fmt->totalsize, fmt->sign_start, 1, 1);
      dfrom = -dfrom;
    }

  if (dfrom == 0)
    {

      return;
    }

  if (dfrom != dfrom)
    {

      put_field (uto, fmt->byteorder, fmt->totalsize, fmt->exp_start,
   fmt->exp_len, fmt->exp_nan);

      put_field (uto, fmt->byteorder, fmt->totalsize, fmt->man_start,
   32, 1);
      return;
    }

  if (dfrom + dfrom == dfrom)
    {


      put_field (uto, fmt->byteorder, fmt->totalsize, fmt->exp_start,
   fmt->exp_len, fmt->exp_nan);
      return;
    }

#if __ANDROID__
  mant = 0;
  exponent = 0;
#else
  mant = frexp (dfrom, &exponent);
#endif
  if (exponent + fmt->exp_bias - 1 > 0) {
   put_field (uto, fmt->byteorder, fmt->totalsize, fmt->exp_start,
    fmt->exp_len, exponent + fmt->exp_bias - 1);
  } else {


   put_field (uto, fmt->byteorder, fmt->totalsize, fmt->exp_start,
    fmt->exp_len, 0);
   mant = ldexp (mant, exponent + fmt->exp_bias - 1);
    }

  mant_bits_left = fmt->man_len;
  mant_off = fmt->man_start;
  while (mant_bits_left > 0)
    {
      unsigned long mant_long;
      mant_bits = mant_bits_left < 32 ? mant_bits_left : 32;

      mant *= 4294967296.0;
      mant_long = (unsigned long)mant;
      mant -= mant_long;



      if ((unsigned int) mant_bits_left == fmt->man_len
   && fmt->intbit == floatformat_intbit_no
   && exponent + fmt->exp_bias - 1 > 0)
 {
   mant_long &= 0x7fffffff;
   mant_bits -= 1;
 }
      else if (mant_bits < 32)
 {


   mant_long >>= 32 - mant_bits;
 }

      put_field (uto, fmt->byteorder, fmt->totalsize,
   mant_off, mant_bits, mant_long);
      mant_off += mant_bits;
      mant_bits_left -= mant_bits;
    }
}



int
floatformat_is_valid (const struct floatformat *fmt, const void *from)
{
  return fmt->is_valid (fmt, from);
}


#ifdef IEEE_DEBUG

#include <stdio.h>



void
ieee_test (double n)
{
  double result;

  floatformat_to_double (&floatformat_ieee_double_little, &n, &result);
  if ((n != result && (! isnan (n) || ! isnan (result)))
      || (n < 0 && result >= 0)
      || (n >= 0 && result < 0))
    printf ("Differ(to): %.20g -> %.20g\n", n, result);

  floatformat_from_double (&floatformat_ieee_double_little, &n, &result);
  if ((n != result && (! isnan (n) || ! isnan (result)))
      || (n < 0 && result >= 0)
      || (n >= 0 && result < 0))
    printf ("Differ(from): %.20g -> %.20g\n", n, result);

#if 0
  {
    char exten[16];

    floatformat_from_double (&floatformat_m68881_ext, &n, exten);
    floatformat_to_double (&floatformat_m68881_ext, exten, &result);
    if (n != result)
      printf ("Differ(to+from): %.20g -> %.20g\n", n, result);
  }
#endif

#if IEEE_DEBUG > 1

  {
    long double ex = *(long double *)exten;
    if (ex != n)
      printf ("Differ(from vs. extended): %.20g\n", n);
  }
#endif
}

int
main (void)
{
  ieee_test (0.0);
  ieee_test (0.5);
  ieee_test (1.1);
  ieee_test (256.0);
  ieee_test (0.12345);
  ieee_test (234235.78907234);
  ieee_test (-512.0);
  ieee_test (-0.004321);
  ieee_test (1.2E-70);
  ieee_test (1.2E-316);
  ieee_test (4.9406564584124654E-324);
  ieee_test (- 4.9406564584124654E-324);
  ieee_test (- 0.0);
  ieee_test (- INFINITY);
  ieee_test (- NAN);
  ieee_test (INFINITY);
  ieee_test (NAN);
  return 0;
}
#endif
