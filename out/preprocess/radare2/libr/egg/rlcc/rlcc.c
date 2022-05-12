# 0 "project/radare2/libr/egg/rlcc/rlcc.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/egg/rlcc/rlcc.c"


# 1 "/usr/local/include/mpc.h" 1 3 4
# 24 "/usr/local/include/mpc.h" 3 4
# 1 "/usr/local/include/gmp.h" 1 3 4
# 55 "/usr/local/include/gmp.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4

# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 209 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 321 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef int wchar_t;
# 415 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
} max_align_t;
# 56 "/usr/local/include/gmp.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 1 3 4
# 34 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 1 3 4
# 203 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 1 3 4
# 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 1 3 4
# 649 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 650 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 715 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_posix_availability.h" 1 3 4
# 716 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/limits.h" 1 3 4





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/limits.h" 1 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/limits.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_limits.h" 1 3 4
# 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/limits.h" 2 3 4
# 7 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/limits.h" 2 3 4
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/syslimits.h" 1 3 4
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 2 3 4
# 204 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 2 3 4
# 8 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 2 3 4
# 57 "/usr/local/include/gmp.h" 2 3 4
# 141 "/usr/local/include/gmp.h" 3 4
typedef unsigned long int mp_limb_t;
typedef long int mp_limb_signed_t;


typedef unsigned long int mp_bitcnt_t;




typedef struct
{
  int _mp_alloc;

  int _mp_size;


  mp_limb_t *_mp_d;
} __mpz_struct;




typedef __mpz_struct MP_INT;
typedef __mpz_struct mpz_t[1];

typedef mp_limb_t * mp_ptr;
typedef const mp_limb_t * mp_srcptr;







typedef long int mp_size_t;
typedef long int mp_exp_t;


typedef struct
{
  __mpz_struct _mp_num;
  __mpz_struct _mp_den;
} __mpq_struct;

typedef __mpq_struct MP_RAT;
typedef __mpq_struct mpq_t[1];

typedef struct
{
  int _mp_prec;



  int _mp_size;


  mp_exp_t _mp_exp;
  mp_limb_t *_mp_d;
} __mpf_struct;


typedef __mpf_struct mpf_t[1];


typedef enum
{
  GMP_RAND_ALG_DEFAULT = 0,
  GMP_RAND_ALG_LC = GMP_RAND_ALG_DEFAULT
} gmp_randalg_t;


typedef struct
{
  mpz_t _mp_seed;
  gmp_randalg_t _mp_alg;
  union {
    void *_mp_lc;
  } _mp_algdata;
} __gmp_randstate_struct;
typedef __gmp_randstate_struct gmp_randstate_t[1];



typedef const __mpz_struct *mpz_srcptr;
typedef __mpz_struct *mpz_ptr;
typedef const __mpf_struct *mpf_srcptr;
typedef __mpf_struct *mpf_ptr;
typedef const __mpq_struct *mpq_srcptr;
typedef __mpq_struct *mpq_ptr;
# 477 "/usr/local/include/gmp.h" 3 4
 void __gmp_set_memory_functions (void *(*) (size_t),
          void *(*) (void *, size_t, size_t),
          void (*) (void *, size_t)) ;


 void __gmp_get_memory_functions (void *(**) (size_t),
          void *(**) (void *, size_t, size_t),
          void (**) (void *, size_t)) ;


 extern const int __gmp_bits_per_limb;


 extern int __gmp_errno;


 extern const char * const __gmp_version;






 void __gmp_randinit (gmp_randstate_t, gmp_randalg_t, ...);


 void __gmp_randinit_default (gmp_randstate_t);


 void __gmp_randinit_lc_2exp (gmp_randstate_t, mpz_srcptr, unsigned long int, mp_bitcnt_t);


 int __gmp_randinit_lc_2exp_size (gmp_randstate_t, mp_bitcnt_t);


 void __gmp_randinit_mt (gmp_randstate_t);


 void __gmp_randinit_set (gmp_randstate_t, const __gmp_randstate_struct *);


 void __gmp_randseed (gmp_randstate_t, mpz_srcptr);


 void __gmp_randseed_ui (gmp_randstate_t, unsigned long int);


 void __gmp_randclear (gmp_randstate_t);


 unsigned long __gmp_urandomb_ui (gmp_randstate_t, unsigned long);


 unsigned long __gmp_urandomm_ui (gmp_randstate_t, unsigned long);





 int __gmp_asprintf (char **, const char *, ...);
# 554 "/usr/local/include/gmp.h" 3 4
 int __gmp_printf (const char *, ...);


 int __gmp_snprintf (char *, size_t, const char *, ...);


 int __gmp_sprintf (char *, const char *, ...);
# 596 "/usr/local/include/gmp.h" 3 4
 int __gmp_scanf (const char *, ...);


 int __gmp_sscanf (const char *, const char *, ...);
# 621 "/usr/local/include/gmp.h" 3 4
 void *__gmpz_realloc (mpz_ptr, mp_size_t);



 void __gmpz_abs (mpz_ptr, mpz_srcptr);



 void __gmpz_add (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_add_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_addmul (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_addmul_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_and (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_array_init (mpz_ptr, mp_size_t, mp_size_t);


 void __gmpz_bin_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_bin_uiui (mpz_ptr, unsigned long int, unsigned long int);


 void __gmpz_cdiv_q (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_cdiv_q_2exp (mpz_ptr, mpz_srcptr, mp_bitcnt_t);


 unsigned long int __gmpz_cdiv_q_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_cdiv_qr (mpz_ptr, mpz_ptr, mpz_srcptr, mpz_srcptr);


 unsigned long int __gmpz_cdiv_qr_ui (mpz_ptr, mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_cdiv_r (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_cdiv_r_2exp (mpz_ptr, mpz_srcptr, mp_bitcnt_t);


 unsigned long int __gmpz_cdiv_r_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 unsigned long int __gmpz_cdiv_ui (mpz_srcptr, unsigned long int) __attribute__ ((__pure__));


 void __gmpz_clear (mpz_ptr);


 void __gmpz_clears (mpz_ptr, ...);


 void __gmpz_clrbit (mpz_ptr, mp_bitcnt_t);


 int __gmpz_cmp (mpz_srcptr, mpz_srcptr) __attribute__ ((__pure__));


 int __gmpz_cmp_d (mpz_srcptr, double) __attribute__ ((__pure__));


 int __gmpz_cmp_si (mpz_srcptr, signed long int) __attribute__ ((__pure__));


 int __gmpz_cmp_ui (mpz_srcptr, unsigned long int) __attribute__ ((__pure__));


 int __gmpz_cmpabs (mpz_srcptr, mpz_srcptr) __attribute__ ((__pure__));


 int __gmpz_cmpabs_d (mpz_srcptr, double) __attribute__ ((__pure__));


 int __gmpz_cmpabs_ui (mpz_srcptr, unsigned long int) __attribute__ ((__pure__));


 void __gmpz_com (mpz_ptr, mpz_srcptr);


 void __gmpz_combit (mpz_ptr, mp_bitcnt_t);


 int __gmpz_congruent_p (mpz_srcptr, mpz_srcptr, mpz_srcptr) __attribute__ ((__pure__));


 int __gmpz_congruent_2exp_p (mpz_srcptr, mpz_srcptr, mp_bitcnt_t) __attribute__ ((__pure__));


 int __gmpz_congruent_ui_p (mpz_srcptr, unsigned long, unsigned long) __attribute__ ((__pure__));


 void __gmpz_divexact (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_divexact_ui (mpz_ptr, mpz_srcptr, unsigned long);


 int __gmpz_divisible_p (mpz_srcptr, mpz_srcptr) __attribute__ ((__pure__));


 int __gmpz_divisible_ui_p (mpz_srcptr, unsigned long) __attribute__ ((__pure__));


 int __gmpz_divisible_2exp_p (mpz_srcptr, mp_bitcnt_t) __attribute__ ((__pure__));


 void __gmpz_dump (mpz_srcptr);


 void *__gmpz_export (void *, size_t *, int, size_t, int, size_t, mpz_srcptr);


 void __gmpz_fac_ui (mpz_ptr, unsigned long int);


 void __gmpz_2fac_ui (mpz_ptr, unsigned long int);


 void __gmpz_mfac_uiui (mpz_ptr, unsigned long int, unsigned long int);


 void __gmpz_primorial_ui (mpz_ptr, unsigned long int);


 void __gmpz_fdiv_q (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_fdiv_q_2exp (mpz_ptr, mpz_srcptr, mp_bitcnt_t);


 unsigned long int __gmpz_fdiv_q_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_fdiv_qr (mpz_ptr, mpz_ptr, mpz_srcptr, mpz_srcptr);


 unsigned long int __gmpz_fdiv_qr_ui (mpz_ptr, mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_fdiv_r (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_fdiv_r_2exp (mpz_ptr, mpz_srcptr, mp_bitcnt_t);


 unsigned long int __gmpz_fdiv_r_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 unsigned long int __gmpz_fdiv_ui (mpz_srcptr, unsigned long int) __attribute__ ((__pure__));


 void __gmpz_fib_ui (mpz_ptr, unsigned long int);


 void __gmpz_fib2_ui (mpz_ptr, mpz_ptr, unsigned long int);


 int __gmpz_fits_sint_p (mpz_srcptr) __attribute__ ((__pure__));


 int __gmpz_fits_slong_p (mpz_srcptr) __attribute__ ((__pure__));


 int __gmpz_fits_sshort_p (mpz_srcptr) __attribute__ ((__pure__));



 int __gmpz_fits_uint_p (mpz_srcptr) __attribute__ ((__pure__));




 int __gmpz_fits_ulong_p (mpz_srcptr) __attribute__ ((__pure__));




 int __gmpz_fits_ushort_p (mpz_srcptr) __attribute__ ((__pure__));



 void __gmpz_gcd (mpz_ptr, mpz_srcptr, mpz_srcptr);


 unsigned long int __gmpz_gcd_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_gcdext (mpz_ptr, mpz_ptr, mpz_ptr, mpz_srcptr, mpz_srcptr);


 double __gmpz_get_d (mpz_srcptr) __attribute__ ((__pure__));


 double __gmpz_get_d_2exp (signed long int *, mpz_srcptr);


 long int __gmpz_get_si (mpz_srcptr) __attribute__ ((__pure__));


 char *__gmpz_get_str (char *, int, mpz_srcptr);



 unsigned long int __gmpz_get_ui (mpz_srcptr) __attribute__ ((__pure__));




 mp_limb_t __gmpz_getlimbn (mpz_srcptr, mp_size_t) __attribute__ ((__pure__));



 mp_bitcnt_t __gmpz_hamdist (mpz_srcptr, mpz_srcptr) __attribute__ ((__pure__));


 void __gmpz_import (mpz_ptr, size_t, int, size_t, int, size_t, const void *);


 void __gmpz_init (mpz_ptr) ;


 void __gmpz_init2 (mpz_ptr, mp_bitcnt_t);


 void __gmpz_inits (mpz_ptr, ...) ;


 void __gmpz_init_set (mpz_ptr, mpz_srcptr);


 void __gmpz_init_set_d (mpz_ptr, double);


 void __gmpz_init_set_si (mpz_ptr, signed long int);


 int __gmpz_init_set_str (mpz_ptr, const char *, int);


 void __gmpz_init_set_ui (mpz_ptr, unsigned long int);
# 886 "/usr/local/include/gmp.h" 3 4
 int __gmpz_invert (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_ior (mpz_ptr, mpz_srcptr, mpz_srcptr);


 int __gmpz_jacobi (mpz_srcptr, mpz_srcptr) __attribute__ ((__pure__));




 int __gmpz_kronecker_si (mpz_srcptr, long) __attribute__ ((__pure__));


 int __gmpz_kronecker_ui (mpz_srcptr, unsigned long) __attribute__ ((__pure__));


 int __gmpz_si_kronecker (long, mpz_srcptr) __attribute__ ((__pure__));


 int __gmpz_ui_kronecker (unsigned long, mpz_srcptr) __attribute__ ((__pure__));


 void __gmpz_lcm (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_lcm_ui (mpz_ptr, mpz_srcptr, unsigned long);




 void __gmpz_lucnum_ui (mpz_ptr, unsigned long int);


 void __gmpz_lucnum2_ui (mpz_ptr, mpz_ptr, unsigned long int);


 int __gmpz_millerrabin (mpz_srcptr, int) __attribute__ ((__pure__));


 void __gmpz_mod (mpz_ptr, mpz_srcptr, mpz_srcptr);




 void __gmpz_mul (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_mul_2exp (mpz_ptr, mpz_srcptr, mp_bitcnt_t);


 void __gmpz_mul_si (mpz_ptr, mpz_srcptr, long int);


 void __gmpz_mul_ui (mpz_ptr, mpz_srcptr, unsigned long int);



 void __gmpz_neg (mpz_ptr, mpz_srcptr);



 void __gmpz_nextprime (mpz_ptr, mpz_srcptr);
# 961 "/usr/local/include/gmp.h" 3 4
 int __gmpz_perfect_power_p (mpz_srcptr) __attribute__ ((__pure__));



 int __gmpz_perfect_square_p (mpz_srcptr) __attribute__ ((__pure__));




 mp_bitcnt_t __gmpz_popcount (mpz_srcptr) __attribute__ ((__pure__));



 void __gmpz_pow_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_powm (mpz_ptr, mpz_srcptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_powm_sec (mpz_ptr, mpz_srcptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_powm_ui (mpz_ptr, mpz_srcptr, unsigned long int, mpz_srcptr);


 int __gmpz_probab_prime_p (mpz_srcptr, int) __attribute__ ((__pure__));


 void __gmpz_random (mpz_ptr, mp_size_t);


 void __gmpz_random2 (mpz_ptr, mp_size_t);


 void __gmpz_realloc2 (mpz_ptr, mp_bitcnt_t);


 mp_bitcnt_t __gmpz_remove (mpz_ptr, mpz_srcptr, mpz_srcptr);


 int __gmpz_root (mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_rootrem (mpz_ptr, mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_rrandomb (mpz_ptr, gmp_randstate_t, mp_bitcnt_t);


 mp_bitcnt_t __gmpz_scan0 (mpz_srcptr, mp_bitcnt_t) __attribute__ ((__pure__));


 mp_bitcnt_t __gmpz_scan1 (mpz_srcptr, mp_bitcnt_t) __attribute__ ((__pure__));


 void __gmpz_set (mpz_ptr, mpz_srcptr);


 void __gmpz_set_d (mpz_ptr, double);


 void __gmpz_set_f (mpz_ptr, mpf_srcptr);



 void __gmpz_set_q (mpz_ptr, mpq_srcptr);



 void __gmpz_set_si (mpz_ptr, signed long int);


 int __gmpz_set_str (mpz_ptr, const char *, int);


 void __gmpz_set_ui (mpz_ptr, unsigned long int);


 void __gmpz_setbit (mpz_ptr, mp_bitcnt_t);



 size_t __gmpz_size (mpz_srcptr) __attribute__ ((__pure__));



 size_t __gmpz_sizeinbase (mpz_srcptr, int) __attribute__ ((__pure__));


 void __gmpz_sqrt (mpz_ptr, mpz_srcptr);


 void __gmpz_sqrtrem (mpz_ptr, mpz_ptr, mpz_srcptr);


 void __gmpz_sub (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_sub_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_ui_sub (mpz_ptr, unsigned long int, mpz_srcptr);


 void __gmpz_submul (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_submul_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_swap (mpz_ptr, mpz_ptr) ;


 unsigned long int __gmpz_tdiv_ui (mpz_srcptr, unsigned long int) __attribute__ ((__pure__));


 void __gmpz_tdiv_q (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_tdiv_q_2exp (mpz_ptr, mpz_srcptr, mp_bitcnt_t);


 unsigned long int __gmpz_tdiv_q_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_tdiv_qr (mpz_ptr, mpz_ptr, mpz_srcptr, mpz_srcptr);


 unsigned long int __gmpz_tdiv_qr_ui (mpz_ptr, mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_tdiv_r (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_tdiv_r_2exp (mpz_ptr, mpz_srcptr, mp_bitcnt_t);


 unsigned long int __gmpz_tdiv_r_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 int __gmpz_tstbit (mpz_srcptr, mp_bitcnt_t) __attribute__ ((__pure__));


 void __gmpz_ui_pow_ui (mpz_ptr, unsigned long int, unsigned long int);


 void __gmpz_urandomb (mpz_ptr, gmp_randstate_t, mp_bitcnt_t);


 void __gmpz_urandomm (mpz_ptr, gmp_randstate_t, mpz_srcptr);



 void __gmpz_xor (mpz_ptr, mpz_srcptr, mpz_srcptr);


 mp_srcptr __gmpz_limbs_read (mpz_srcptr);


 mp_ptr __gmpz_limbs_write (mpz_ptr, mp_size_t);


 mp_ptr __gmpz_limbs_modify (mpz_ptr, mp_size_t);


 void __gmpz_limbs_finish (mpz_ptr, mp_size_t);


 mpz_srcptr __gmpz_roinit_n (mpz_ptr, mp_srcptr, mp_size_t);







 void __gmpq_abs (mpq_ptr, mpq_srcptr);



 void __gmpq_add (mpq_ptr, mpq_srcptr, mpq_srcptr);


 void __gmpq_canonicalize (mpq_ptr);


 void __gmpq_clear (mpq_ptr);


 void __gmpq_clears (mpq_ptr, ...);


 int __gmpq_cmp (mpq_srcptr, mpq_srcptr) __attribute__ ((__pure__));


 int __gmpq_cmp_si (mpq_srcptr, long, unsigned long) __attribute__ ((__pure__));


 int __gmpq_cmp_ui (mpq_srcptr, unsigned long int, unsigned long int) __attribute__ ((__pure__));


 int __gmpq_cmp_z (mpq_srcptr, mpz_srcptr) __attribute__ ((__pure__));


 void __gmpq_div (mpq_ptr, mpq_srcptr, mpq_srcptr);


 void __gmpq_div_2exp (mpq_ptr, mpq_srcptr, mp_bitcnt_t);


 int __gmpq_equal (mpq_srcptr, mpq_srcptr) __attribute__ ((__pure__));


 void __gmpq_get_num (mpz_ptr, mpq_srcptr);


 void __gmpq_get_den (mpz_ptr, mpq_srcptr);


 double __gmpq_get_d (mpq_srcptr) __attribute__ ((__pure__));


 char *__gmpq_get_str (char *, int, mpq_srcptr);


 void __gmpq_init (mpq_ptr);


 void __gmpq_inits (mpq_ptr, ...);







 void __gmpq_inv (mpq_ptr, mpq_srcptr);


 void __gmpq_mul (mpq_ptr, mpq_srcptr, mpq_srcptr);


 void __gmpq_mul_2exp (mpq_ptr, mpq_srcptr, mp_bitcnt_t);



 void __gmpq_neg (mpq_ptr, mpq_srcptr);
# 1216 "/usr/local/include/gmp.h" 3 4
 void __gmpq_set (mpq_ptr, mpq_srcptr);


 void __gmpq_set_d (mpq_ptr, double);


 void __gmpq_set_den (mpq_ptr, mpz_srcptr);


 void __gmpq_set_f (mpq_ptr, mpf_srcptr);


 void __gmpq_set_num (mpq_ptr, mpz_srcptr);


 void __gmpq_set_si (mpq_ptr, signed long int, unsigned long int);


 int __gmpq_set_str (mpq_ptr, const char *, int);


 void __gmpq_set_ui (mpq_ptr, unsigned long int, unsigned long int);


 void __gmpq_set_z (mpq_ptr, mpz_srcptr);


 void __gmpq_sub (mpq_ptr, mpq_srcptr, mpq_srcptr);


 void __gmpq_swap (mpq_ptr, mpq_ptr) ;





 void __gmpf_abs (mpf_ptr, mpf_srcptr);


 void __gmpf_add (mpf_ptr, mpf_srcptr, mpf_srcptr);


 void __gmpf_add_ui (mpf_ptr, mpf_srcptr, unsigned long int);

 void __gmpf_ceil (mpf_ptr, mpf_srcptr);


 void __gmpf_clear (mpf_ptr);


 void __gmpf_clears (mpf_ptr, ...);


 int __gmpf_cmp (mpf_srcptr, mpf_srcptr) __attribute__ ((__pure__));


 int __gmpf_cmp_z (mpf_srcptr, mpz_srcptr) __attribute__ ((__pure__));


 int __gmpf_cmp_d (mpf_srcptr, double) __attribute__ ((__pure__));


 int __gmpf_cmp_si (mpf_srcptr, signed long int) __attribute__ ((__pure__));


 int __gmpf_cmp_ui (mpf_srcptr, unsigned long int) __attribute__ ((__pure__));


 void __gmpf_div (mpf_ptr, mpf_srcptr, mpf_srcptr);


 void __gmpf_div_2exp (mpf_ptr, mpf_srcptr, mp_bitcnt_t);


 void __gmpf_div_ui (mpf_ptr, mpf_srcptr, unsigned long int);


 void __gmpf_dump (mpf_srcptr);


 int __gmpf_eq (mpf_srcptr, mpf_srcptr, mp_bitcnt_t) __attribute__ ((__pure__));


 int __gmpf_fits_sint_p (mpf_srcptr) __attribute__ ((__pure__));


 int __gmpf_fits_slong_p (mpf_srcptr) __attribute__ ((__pure__));


 int __gmpf_fits_sshort_p (mpf_srcptr) __attribute__ ((__pure__));


 int __gmpf_fits_uint_p (mpf_srcptr) __attribute__ ((__pure__));


 int __gmpf_fits_ulong_p (mpf_srcptr) __attribute__ ((__pure__));


 int __gmpf_fits_ushort_p (mpf_srcptr) __attribute__ ((__pure__));


 void __gmpf_floor (mpf_ptr, mpf_srcptr);


 double __gmpf_get_d (mpf_srcptr) __attribute__ ((__pure__));


 double __gmpf_get_d_2exp (signed long int *, mpf_srcptr);


 mp_bitcnt_t __gmpf_get_default_prec (void) __attribute__ ((__pure__));


 mp_bitcnt_t __gmpf_get_prec (mpf_srcptr) __attribute__ ((__pure__));


 long __gmpf_get_si (mpf_srcptr) __attribute__ ((__pure__));


 char *__gmpf_get_str (char *, mp_exp_t *, int, size_t, mpf_srcptr);


 unsigned long __gmpf_get_ui (mpf_srcptr) __attribute__ ((__pure__));


 void __gmpf_init (mpf_ptr);


 void __gmpf_init2 (mpf_ptr, mp_bitcnt_t);


 void __gmpf_inits (mpf_ptr, ...);


 void __gmpf_init_set (mpf_ptr, mpf_srcptr);


 void __gmpf_init_set_d (mpf_ptr, double);


 void __gmpf_init_set_si (mpf_ptr, signed long int);


 int __gmpf_init_set_str (mpf_ptr, const char *, int);


 void __gmpf_init_set_ui (mpf_ptr, unsigned long int);







 int __gmpf_integer_p (mpf_srcptr) __attribute__ ((__pure__));


 void __gmpf_mul (mpf_ptr, mpf_srcptr, mpf_srcptr);


 void __gmpf_mul_2exp (mpf_ptr, mpf_srcptr, mp_bitcnt_t);


 void __gmpf_mul_ui (mpf_ptr, mpf_srcptr, unsigned long int);


 void __gmpf_neg (mpf_ptr, mpf_srcptr);







 void __gmpf_pow_ui (mpf_ptr, mpf_srcptr, unsigned long int);


 void __gmpf_random2 (mpf_ptr, mp_size_t, mp_exp_t);


 void __gmpf_reldiff (mpf_ptr, mpf_srcptr, mpf_srcptr);


 void __gmpf_set (mpf_ptr, mpf_srcptr);


 void __gmpf_set_d (mpf_ptr, double);


 void __gmpf_set_default_prec (mp_bitcnt_t) ;


 void __gmpf_set_prec (mpf_ptr, mp_bitcnt_t);


 void __gmpf_set_prec_raw (mpf_ptr, mp_bitcnt_t) ;


 void __gmpf_set_q (mpf_ptr, mpq_srcptr);


 void __gmpf_set_si (mpf_ptr, signed long int);


 int __gmpf_set_str (mpf_ptr, const char *, int);


 void __gmpf_set_ui (mpf_ptr, unsigned long int);


 void __gmpf_set_z (mpf_ptr, mpz_srcptr);


 size_t __gmpf_size (mpf_srcptr) __attribute__ ((__pure__));


 void __gmpf_sqrt (mpf_ptr, mpf_srcptr);


 void __gmpf_sqrt_ui (mpf_ptr, unsigned long int);


 void __gmpf_sub (mpf_ptr, mpf_srcptr, mpf_srcptr);


 void __gmpf_sub_ui (mpf_ptr, mpf_srcptr, unsigned long int);


 void __gmpf_swap (mpf_ptr, mpf_ptr) ;


 void __gmpf_trunc (mpf_ptr, mpf_srcptr);


 void __gmpf_ui_div (mpf_ptr, unsigned long int, mpf_srcptr);


 void __gmpf_ui_sub (mpf_ptr, unsigned long int, mpf_srcptr);


 void __gmpf_urandomb (mpf_t, gmp_randstate_t, mp_bitcnt_t);
# 1465 "/usr/local/include/gmp.h" 3 4
 mp_limb_t __gmpn_add (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t);




 mp_limb_t __gmpn_add_1 (mp_ptr, mp_srcptr, mp_size_t, mp_limb_t) ;



 mp_limb_t __gmpn_add_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);


 mp_limb_t __gmpn_addmul_1 (mp_ptr, mp_srcptr, mp_size_t, mp_limb_t);



 int __gmpn_cmp (mp_srcptr, mp_srcptr, mp_size_t) __attribute__ ((__pure__));




 int __gmpn_zero_p (mp_srcptr, mp_size_t) __attribute__ ((__pure__));



 void __gmpn_divexact_1 (mp_ptr, mp_srcptr, mp_size_t, mp_limb_t);





 mp_limb_t __gmpn_divexact_by3c (mp_ptr, mp_srcptr, mp_size_t, mp_limb_t);





 mp_limb_t __gmpn_divrem (mp_ptr, mp_size_t, mp_ptr, mp_size_t, mp_srcptr, mp_size_t);


 mp_limb_t __gmpn_divrem_1 (mp_ptr, mp_size_t, mp_srcptr, mp_size_t, mp_limb_t);


 mp_limb_t __gmpn_divrem_2 (mp_ptr, mp_size_t, mp_ptr, mp_size_t, mp_srcptr);


 mp_limb_t __gmpn_div_qr_1 (mp_ptr, mp_limb_t *, mp_srcptr, mp_size_t, mp_limb_t);


 mp_limb_t __gmpn_div_qr_2 (mp_ptr, mp_ptr, mp_srcptr, mp_size_t, mp_srcptr);


 mp_size_t __gmpn_gcd (mp_ptr, mp_ptr, mp_size_t, mp_ptr, mp_size_t);


 mp_limb_t __gmpn_gcd_11 (mp_limb_t, mp_limb_t) __attribute__ ((__pure__));


 mp_limb_t __gmpn_gcd_1 (mp_srcptr, mp_size_t, mp_limb_t) __attribute__ ((__pure__));


 mp_limb_t __gmpn_gcdext_1 (mp_limb_signed_t *, mp_limb_signed_t *, mp_limb_t, mp_limb_t);


 mp_size_t __gmpn_gcdext (mp_ptr, mp_ptr, mp_size_t *, mp_ptr, mp_size_t, mp_ptr, mp_size_t);


 size_t __gmpn_get_str (unsigned char *, int, mp_ptr, mp_size_t);


 mp_bitcnt_t __gmpn_hamdist (mp_srcptr, mp_srcptr, mp_size_t) __attribute__ ((__pure__));


 mp_limb_t __gmpn_lshift (mp_ptr, mp_srcptr, mp_size_t, unsigned int);


 mp_limb_t __gmpn_mod_1 (mp_srcptr, mp_size_t, mp_limb_t) __attribute__ ((__pure__));


 mp_limb_t __gmpn_mul (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t);


 mp_limb_t __gmpn_mul_1 (mp_ptr, mp_srcptr, mp_size_t, mp_limb_t);


 void __gmpn_mul_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);


 void __gmpn_sqr (mp_ptr, mp_srcptr, mp_size_t);



 mp_limb_t __gmpn_neg (mp_ptr, mp_srcptr, mp_size_t);



 void __gmpn_com (mp_ptr, mp_srcptr, mp_size_t);


 int __gmpn_perfect_square_p (mp_srcptr, mp_size_t) __attribute__ ((__pure__));


 int __gmpn_perfect_power_p (mp_srcptr, mp_size_t) __attribute__ ((__pure__));


 mp_bitcnt_t __gmpn_popcount (mp_srcptr, mp_size_t) __attribute__ ((__pure__));


 mp_size_t __gmpn_pow_1 (mp_ptr, mp_srcptr, mp_size_t, mp_limb_t, mp_ptr);



 mp_limb_t __gmpn_preinv_mod_1 (mp_srcptr, mp_size_t, mp_limb_t, mp_limb_t) __attribute__ ((__pure__));


 void __gmpn_random (mp_ptr, mp_size_t);


 void __gmpn_random2 (mp_ptr, mp_size_t);


 mp_limb_t __gmpn_rshift (mp_ptr, mp_srcptr, mp_size_t, unsigned int);


 mp_bitcnt_t __gmpn_scan0 (mp_srcptr, mp_bitcnt_t) __attribute__ ((__pure__));


 mp_bitcnt_t __gmpn_scan1 (mp_srcptr, mp_bitcnt_t) __attribute__ ((__pure__));


 mp_size_t __gmpn_set_str (mp_ptr, const unsigned char *, size_t, int);


 size_t __gmpn_sizeinbase (mp_srcptr, mp_size_t, int);


 mp_size_t __gmpn_sqrtrem (mp_ptr, mp_ptr, mp_srcptr, mp_size_t);



 mp_limb_t __gmpn_sub (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t);




 mp_limb_t __gmpn_sub_1 (mp_ptr, mp_srcptr, mp_size_t, mp_limb_t) ;



 mp_limb_t __gmpn_sub_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);


 mp_limb_t __gmpn_submul_1 (mp_ptr, mp_srcptr, mp_size_t, mp_limb_t);


 void __gmpn_tdiv_qr (mp_ptr, mp_ptr, mp_size_t, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t);


 void __gmpn_and_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);

 void __gmpn_andn_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);

 void __gmpn_nand_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);

 void __gmpn_ior_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);

 void __gmpn_iorn_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);

 void __gmpn_nior_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);

 void __gmpn_xor_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);

 void __gmpn_xnor_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);


 void __gmpn_copyi (mp_ptr, mp_srcptr, mp_size_t);

 void __gmpn_copyd (mp_ptr, mp_srcptr, mp_size_t);

 void __gmpn_zero (mp_ptr, mp_size_t);


 mp_limb_t __gmpn_cnd_add_n (mp_limb_t, mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);

 mp_limb_t __gmpn_cnd_sub_n (mp_limb_t, mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);


 mp_limb_t __gmpn_sec_add_1 (mp_ptr, mp_srcptr, mp_size_t, mp_limb_t, mp_ptr);

 mp_size_t __gmpn_sec_add_1_itch (mp_size_t) __attribute__ ((__pure__));


 mp_limb_t __gmpn_sec_sub_1 (mp_ptr, mp_srcptr, mp_size_t, mp_limb_t, mp_ptr);

 mp_size_t __gmpn_sec_sub_1_itch (mp_size_t) __attribute__ ((__pure__));


 void __gmpn_cnd_swap (mp_limb_t, volatile mp_limb_t *, volatile mp_limb_t *, mp_size_t);


 void __gmpn_sec_mul (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);

 mp_size_t __gmpn_sec_mul_itch (mp_size_t, mp_size_t) __attribute__ ((__pure__));


 void __gmpn_sec_sqr (mp_ptr, mp_srcptr, mp_size_t, mp_ptr);

 mp_size_t __gmpn_sec_sqr_itch (mp_size_t) __attribute__ ((__pure__));


 void __gmpn_sec_powm (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_bitcnt_t, mp_srcptr, mp_size_t, mp_ptr);

 mp_size_t __gmpn_sec_powm_itch (mp_size_t, mp_bitcnt_t, mp_size_t) __attribute__ ((__pure__));


 void __gmpn_sec_tabselect (volatile mp_limb_t *, volatile const mp_limb_t *, mp_size_t, mp_size_t, mp_size_t);


 mp_limb_t __gmpn_sec_div_qr (mp_ptr, mp_ptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);

 mp_size_t __gmpn_sec_div_qr_itch (mp_size_t, mp_size_t) __attribute__ ((__pure__));

 void __gmpn_sec_div_r (mp_ptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);

 mp_size_t __gmpn_sec_div_r_itch (mp_size_t, mp_size_t) __attribute__ ((__pure__));


 int __gmpn_sec_invert (mp_ptr, mp_ptr, mp_srcptr, mp_size_t, mp_bitcnt_t, mp_ptr);

 mp_size_t __gmpn_sec_invert_itch (mp_size_t) __attribute__ ((__pure__));
# 1714 "/usr/local/include/gmp.h" 3 4
extern __inline__ __attribute__ ((__gnu_inline__)) void
__gmpz_abs (mpz_ptr __gmp_w, mpz_srcptr __gmp_u)
{
  if (__gmp_w != __gmp_u)
    __gmpz_set (__gmp_w, __gmp_u);
  __gmp_w->_mp_size = ((__gmp_w->_mp_size) >= 0 ? (__gmp_w->_mp_size) : -(__gmp_w->_mp_size));
}
# 1738 "/usr/local/include/gmp.h" 3 4
extern __inline__ __attribute__ ((__gnu_inline__))

int
__gmpz_fits_uint_p (mpz_srcptr __gmp_z)
{
  mp_size_t __gmp_n = __gmp_z->_mp_size; mp_ptr __gmp_p = __gmp_z->_mp_d; return (__gmp_n == 0 || (__gmp_n == 1 && __gmp_p[0] <= (0x7fffffff * 2U + 1U)));;
}




extern __inline__ __attribute__ ((__gnu_inline__))

int
__gmpz_fits_ulong_p (mpz_srcptr __gmp_z)
{
  mp_size_t __gmp_n = __gmp_z->_mp_size; mp_ptr __gmp_p = __gmp_z->_mp_d; return (__gmp_n == 0 || (__gmp_n == 1 && __gmp_p[0] <= (0x7fffffffffffffffL * 2UL + 1UL)));;
}




extern __inline__ __attribute__ ((__gnu_inline__))

int
__gmpz_fits_ushort_p (mpz_srcptr __gmp_z)
{
  mp_size_t __gmp_n = __gmp_z->_mp_size; mp_ptr __gmp_p = __gmp_z->_mp_d; return (__gmp_n == 0 || (__gmp_n == 1 && __gmp_p[0] <= (0x7fff * 2 + 1)));;
}




extern __inline__ __attribute__ ((__gnu_inline__))

unsigned long
__gmpz_get_ui (mpz_srcptr __gmp_z)
{
  mp_ptr __gmp_p = __gmp_z->_mp_d;
  mp_size_t __gmp_n = __gmp_z->_mp_size;
  mp_limb_t __gmp_l = __gmp_p[0];






  return (__gmp_n != 0 ? __gmp_l : 0);
# 1794 "/usr/local/include/gmp.h" 3 4
}




extern __inline__ __attribute__ ((__gnu_inline__))

mp_limb_t
__gmpz_getlimbn (mpz_srcptr __gmp_z, mp_size_t __gmp_n)
{
  mp_limb_t __gmp_result = 0;
  if (__builtin_expect ((__gmp_n >= 0 && __gmp_n < ((__gmp_z->_mp_size) >= 0 ? (__gmp_z->_mp_size) : -(__gmp_z->_mp_size))) != 0, 1))
    __gmp_result = __gmp_z->_mp_d[__gmp_n];
  return __gmp_result;
}



extern __inline__ __attribute__ ((__gnu_inline__)) void
__gmpz_neg (mpz_ptr __gmp_w, mpz_srcptr __gmp_u)
{
  if (__gmp_w != __gmp_u)
    __gmpz_set (__gmp_w, __gmp_u);
  __gmp_w->_mp_size = - __gmp_w->_mp_size;
}




extern __inline__ __attribute__ ((__gnu_inline__))

int
__gmpz_perfect_square_p (mpz_srcptr __gmp_a)
{
  mp_size_t __gmp_asize;
  int __gmp_result;

  __gmp_asize = __gmp_a->_mp_size;
  __gmp_result = (__gmp_asize >= 0);
  if (__builtin_expect ((__gmp_asize > 0) != 0, 1))
    __gmp_result = __gmpn_perfect_square_p (__gmp_a->_mp_d, __gmp_asize);
  return __gmp_result;
}




extern __inline__ __attribute__ ((__gnu_inline__))

mp_bitcnt_t
__gmpz_popcount (mpz_srcptr __gmp_u)
{
  mp_size_t __gmp_usize;
  mp_bitcnt_t __gmp_result;

  __gmp_usize = __gmp_u->_mp_size;
  __gmp_result = (__gmp_usize < 0 ? ~ ((mp_bitcnt_t) (0)) : ((mp_bitcnt_t) (0)));
  if (__builtin_expect ((__gmp_usize > 0) != 0, 1))
    __gmp_result = __gmpn_popcount (__gmp_u->_mp_d, __gmp_usize);
  return __gmp_result;
}




extern __inline__ __attribute__ ((__gnu_inline__))

void
__gmpz_set_q (mpz_ptr __gmp_w, mpq_srcptr __gmp_u)
{
  __gmpz_tdiv_q (__gmp_w, (&((__gmp_u)->_mp_num)), (&((__gmp_u)->_mp_den)));
}




extern __inline__ __attribute__ ((__gnu_inline__))

size_t
__gmpz_size (mpz_srcptr __gmp_z)
{
  return ((__gmp_z->_mp_size) >= 0 ? (__gmp_z->_mp_size) : -(__gmp_z->_mp_size));
}






extern __inline__ __attribute__ ((__gnu_inline__)) void
__gmpq_abs (mpq_ptr __gmp_w, mpq_srcptr __gmp_u)
{
  if (__gmp_w != __gmp_u)
    __gmpq_set (__gmp_w, __gmp_u);
  __gmp_w->_mp_num._mp_size = ((__gmp_w->_mp_num._mp_size) >= 0 ? (__gmp_w->_mp_num._mp_size) : -(__gmp_w->_mp_num._mp_size));
}



extern __inline__ __attribute__ ((__gnu_inline__)) void
__gmpq_neg (mpq_ptr __gmp_w, mpq_srcptr __gmp_u)
{
  if (__gmp_w != __gmp_u)
    __gmpq_set (__gmp_w, __gmp_u);
  __gmp_w->_mp_num._mp_size = - __gmp_w->_mp_num._mp_size;
}
# 2136 "/usr/local/include/gmp.h" 3 4
extern __inline__ __attribute__ ((__gnu_inline__))

mp_limb_t
__gmpn_add (mp_ptr __gmp_wp, mp_srcptr __gmp_xp, mp_size_t __gmp_xsize, mp_srcptr __gmp_yp, mp_size_t __gmp_ysize)
{
  mp_limb_t __gmp_c;
  do { mp_size_t __gmp_i; mp_limb_t __gmp_x; __gmp_i = (__gmp_ysize); if (__gmp_i != 0) { if (__gmpn_add_n (__gmp_wp, __gmp_xp, __gmp_yp, __gmp_i)) { do { if (__gmp_i >= (__gmp_xsize)) { (__gmp_c) = 1; goto __gmp_done; } __gmp_x = (__gmp_xp)[__gmp_i]; } while ((((__gmp_wp)[__gmp_i++] = (__gmp_x + 1) & ((~ ((mp_limb_t) (0))) >> 0)) == 0)); } } if ((__gmp_wp) != (__gmp_xp)) do { mp_size_t __gmp_j; ; for (__gmp_j = (__gmp_i); __gmp_j < (__gmp_xsize); __gmp_j++) (__gmp_wp)[__gmp_j] = (__gmp_xp)[__gmp_j]; } while (0); (__gmp_c) = 0; __gmp_done: ; } while (0);
  return __gmp_c;
}




extern __inline__ __attribute__ ((__gnu_inline__))

mp_limb_t
__gmpn_add_1 (mp_ptr __gmp_dst, mp_srcptr __gmp_src, mp_size_t __gmp_size, mp_limb_t __gmp_n)
{
  mp_limb_t __gmp_c;
  do { mp_size_t __gmp_i; mp_limb_t __gmp_x, __gmp_r; __gmp_x = (__gmp_src)[0]; __gmp_r = __gmp_x + (__gmp_n); (__gmp_dst)[0] = __gmp_r; if (((__gmp_r) < ((__gmp_n)))) { (__gmp_c) = 1; for (__gmp_i = 1; __gmp_i < (__gmp_size);) { __gmp_x = (__gmp_src)[__gmp_i]; __gmp_r = __gmp_x + 1; (__gmp_dst)[__gmp_i] = __gmp_r; ++__gmp_i; if (!((__gmp_r) < (1))) { if ((__gmp_src) != (__gmp_dst)) do { mp_size_t __gmp_j; ; for (__gmp_j = (__gmp_i); __gmp_j < (__gmp_size); __gmp_j++) (__gmp_dst)[__gmp_j] = (__gmp_src)[__gmp_j]; } while (0); (__gmp_c) = 0; break; } } } else { if ((__gmp_src) != (__gmp_dst)) do { mp_size_t __gmp_j; ; for (__gmp_j = (1); __gmp_j < (__gmp_size); __gmp_j++) (__gmp_dst)[__gmp_j] = (__gmp_src)[__gmp_j]; } while (0); (__gmp_c) = 0; } } while (0);
  return __gmp_c;
}




extern __inline__ __attribute__ ((__gnu_inline__))

int
__gmpn_cmp (mp_srcptr __gmp_xp, mp_srcptr __gmp_yp, mp_size_t __gmp_size)
{
  int __gmp_result;
  do { mp_size_t __gmp_i; mp_limb_t __gmp_x, __gmp_y; (__gmp_result) = 0; __gmp_i = (__gmp_size); while (--__gmp_i >= 0) { __gmp_x = (__gmp_xp)[__gmp_i]; __gmp_y = (__gmp_yp)[__gmp_i]; if (__gmp_x != __gmp_y) { (__gmp_result) = (__gmp_x > __gmp_y ? 1 : -1); break; } } } while (0);
  return __gmp_result;
}




extern __inline__ __attribute__ ((__gnu_inline__))

int
__gmpn_zero_p (mp_srcptr __gmp_p, mp_size_t __gmp_n)
{

    do {
      if (__gmp_p[--__gmp_n] != 0)
 return 0;
    } while (__gmp_n != 0);
  return 1;
}




extern __inline__ __attribute__ ((__gnu_inline__))

mp_limb_t
__gmpn_sub (mp_ptr __gmp_wp, mp_srcptr __gmp_xp, mp_size_t __gmp_xsize, mp_srcptr __gmp_yp, mp_size_t __gmp_ysize)
{
  mp_limb_t __gmp_c;
  do { mp_size_t __gmp_i; mp_limb_t __gmp_x; __gmp_i = (__gmp_ysize); if (__gmp_i != 0) { if (__gmpn_sub_n (__gmp_wp, __gmp_xp, __gmp_yp, __gmp_i)) { do { if (__gmp_i >= (__gmp_xsize)) { (__gmp_c) = 1; goto __gmp_done; } __gmp_x = (__gmp_xp)[__gmp_i]; } while ((((__gmp_wp)[__gmp_i++] = (__gmp_x - 1) & ((~ ((mp_limb_t) (0))) >> 0)), __gmp_x == 0)); } } if ((__gmp_wp) != (__gmp_xp)) do { mp_size_t __gmp_j; ; for (__gmp_j = (__gmp_i); __gmp_j < (__gmp_xsize); __gmp_j++) (__gmp_wp)[__gmp_j] = (__gmp_xp)[__gmp_j]; } while (0); (__gmp_c) = 0; __gmp_done: ; } while (0);
  return __gmp_c;
}




extern __inline__ __attribute__ ((__gnu_inline__))

mp_limb_t
__gmpn_sub_1 (mp_ptr __gmp_dst, mp_srcptr __gmp_src, mp_size_t __gmp_size, mp_limb_t __gmp_n)
{
  mp_limb_t __gmp_c;
  do { mp_size_t __gmp_i; mp_limb_t __gmp_x, __gmp_r; __gmp_x = (__gmp_src)[0]; __gmp_r = __gmp_x - (__gmp_n); (__gmp_dst)[0] = __gmp_r; if (((__gmp_x) < ((__gmp_n)))) { (__gmp_c) = 1; for (__gmp_i = 1; __gmp_i < (__gmp_size);) { __gmp_x = (__gmp_src)[__gmp_i]; __gmp_r = __gmp_x - 1; (__gmp_dst)[__gmp_i] = __gmp_r; ++__gmp_i; if (!((__gmp_x) < (1))) { if ((__gmp_src) != (__gmp_dst)) do { mp_size_t __gmp_j; ; for (__gmp_j = (__gmp_i); __gmp_j < (__gmp_size); __gmp_j++) (__gmp_dst)[__gmp_j] = (__gmp_src)[__gmp_j]; } while (0); (__gmp_c) = 0; break; } } } else { if ((__gmp_src) != (__gmp_dst)) do { mp_size_t __gmp_j; ; for (__gmp_j = (1); __gmp_j < (__gmp_size); __gmp_j++) (__gmp_dst)[__gmp_j] = (__gmp_src)[__gmp_j]; } while (0); (__gmp_c) = 0; } } while (0);
  return __gmp_c;
}




extern __inline__ __attribute__ ((__gnu_inline__))

mp_limb_t
__gmpn_neg (mp_ptr __gmp_rp, mp_srcptr __gmp_up, mp_size_t __gmp_n)
{
  while (*__gmp_up == 0)
    {
      *__gmp_rp = 0;
      if (!--__gmp_n)
 return 0;
      ++__gmp_up; ++__gmp_rp;
    }

  *__gmp_rp = (- *__gmp_up) & ((~ ((mp_limb_t) (0))) >> 0);

  if (--__gmp_n)
    __gmpn_com (++__gmp_rp, ++__gmp_up, __gmp_n);

  return 1;
}
# 2316 "/usr/local/include/gmp.h" 3 4
enum
{
  GMP_ERROR_NONE = 0,
  GMP_ERROR_UNSUPPORTED_ARGUMENT = 1,
  GMP_ERROR_DIVISION_BY_ZERO = 2,
  GMP_ERROR_SQRT_OF_NEGATIVE = 4,
  GMP_ERROR_INVALID_ARGUMENT = 8
};
# 25 "/usr/local/include/mpc.h" 2 3 4
# 1 "/usr/local/include/mpfr.h" 1 3 4
# 53 "/usr/local/include/mpfr.h" 3 4
# 1 "/usr/local/include/gmp.h" 1 3 4
# 54 "/usr/local/include/mpfr.h" 2 3 4







typedef void mpfr_void;
typedef int mpfr_int;
typedef unsigned int mpfr_uint;
typedef long mpfr_long;
typedef unsigned long mpfr_ulong;
typedef size_t mpfr_size_t;







typedef unsigned int mpfr_flags_t;
# 102 "/usr/local/include/mpfr.h" 3 4
typedef enum {
  MPFR_RNDN=0,
  MPFR_RNDZ,
  MPFR_RNDU,
  MPFR_RNDD,
  MPFR_RNDA,
  MPFR_RNDF,
  MPFR_RNDNA=-1
} mpfr_rnd_t;
# 168 "/usr/local/include/mpfr.h" 3 4
typedef long mpfr_prec_t;
typedef unsigned long mpfr_uprec_t;
# 184 "/usr/local/include/mpfr.h" 3 4
typedef int mpfr_sign_t;
# 195 "/usr/local/include/mpfr.h" 3 4
typedef long mpfr_exp_t;
typedef unsigned long mpfr_uexp_t;
# 224 "/usr/local/include/mpfr.h" 3 4
typedef struct {
  mpfr_prec_t _mpfr_prec;
  mpfr_sign_t _mpfr_sign;
  mpfr_exp_t _mpfr_exp;
  mp_limb_t *_mpfr_d;
} __mpfr_struct;
# 250 "/usr/local/include/mpfr.h" 3 4
typedef __mpfr_struct mpfr_t[1];
typedef __mpfr_struct *mpfr_ptr;
typedef const __mpfr_struct *mpfr_srcptr;
# 263 "/usr/local/include/mpfr.h" 3 4
typedef enum {
  MPFR_NAN_KIND = 0,
  MPFR_INF_KIND = 1,
  MPFR_ZERO_KIND = 2,
  MPFR_REGULAR_KIND = 3
} mpfr_kind_t;


typedef enum {
  MPFR_FREE_LOCAL_CACHE = 1,
  MPFR_FREE_GLOBAL_CACHE = 2
} mpfr_free_cache_t;
# 378 "/usr/local/include/mpfr.h" 3 4
 __attribute__ ((__returns_nonnull__)) const char * mpfr_get_version (void);
 __attribute__ ((__returns_nonnull__)) const char * mpfr_get_patches (void);

 int mpfr_buildopt_tls_p (void);
 int mpfr_buildopt_float128_p (void);
 int mpfr_buildopt_decimal_p (void);
 int mpfr_buildopt_gmpinternals_p (void);
 int mpfr_buildopt_sharedcache_p (void);
 __attribute__ ((__returns_nonnull__)) const char *
  mpfr_buildopt_tune_case (void);

 mpfr_exp_t mpfr_get_emin (void);
 int mpfr_set_emin (mpfr_exp_t);
 mpfr_exp_t mpfr_get_emin_min (void);
 mpfr_exp_t mpfr_get_emin_max (void);
 mpfr_exp_t mpfr_get_emax (void);
 int mpfr_set_emax (mpfr_exp_t);
 mpfr_exp_t mpfr_get_emax_min (void);
 mpfr_exp_t mpfr_get_emax_max (void);

 void mpfr_set_default_rounding_mode (mpfr_rnd_t);
 mpfr_rnd_t mpfr_get_default_rounding_mode (void);
 const char * mpfr_print_rnd_mode (mpfr_rnd_t);

 void mpfr_clear_flags (void);
 void mpfr_clear_underflow (void);
 void mpfr_clear_overflow (void);
 void mpfr_clear_divby0 (void);
 void mpfr_clear_nanflag (void);
 void mpfr_clear_inexflag (void);
 void mpfr_clear_erangeflag (void);

 void mpfr_set_underflow (void);
 void mpfr_set_overflow (void);
 void mpfr_set_divby0 (void);
 void mpfr_set_nanflag (void);
 void mpfr_set_inexflag (void);
 void mpfr_set_erangeflag (void);

 int mpfr_underflow_p (void);
 int mpfr_overflow_p (void);
 int mpfr_divby0_p (void);
 int mpfr_nanflag_p (void);
 int mpfr_inexflag_p (void);
 int mpfr_erangeflag_p (void);

 void mpfr_flags_clear (mpfr_flags_t);
 void mpfr_flags_set (mpfr_flags_t);
 mpfr_flags_t mpfr_flags_test (mpfr_flags_t);
 mpfr_flags_t mpfr_flags_save (void);
 void mpfr_flags_restore (mpfr_flags_t,
                                         mpfr_flags_t);

 int mpfr_check_range (mpfr_ptr, int, mpfr_rnd_t);

 void mpfr_init2 (mpfr_ptr, mpfr_prec_t);
 void mpfr_init (mpfr_ptr);
 void mpfr_clear (mpfr_ptr);

 void
  mpfr_inits2 (mpfr_prec_t, mpfr_ptr, ...) __attribute__ ((__sentinel__));
 void
  mpfr_inits (mpfr_ptr, ...) __attribute__ ((__sentinel__));
 void
  mpfr_clears (mpfr_ptr, ...) __attribute__ ((__sentinel__));

 int mpfr_prec_round (mpfr_ptr, mpfr_prec_t, mpfr_rnd_t);
 int mpfr_can_round (mpfr_srcptr, mpfr_exp_t, mpfr_rnd_t,
                                    mpfr_rnd_t, mpfr_prec_t);
 mpfr_prec_t mpfr_min_prec (mpfr_srcptr);

 mpfr_exp_t mpfr_get_exp (mpfr_srcptr);
 int mpfr_set_exp (mpfr_ptr, mpfr_exp_t);
 mpfr_prec_t mpfr_get_prec (mpfr_srcptr);
 void mpfr_set_prec (mpfr_ptr, mpfr_prec_t);
 void mpfr_set_prec_raw (mpfr_ptr, mpfr_prec_t);
 void mpfr_set_default_prec (mpfr_prec_t);
 mpfr_prec_t mpfr_get_default_prec (void);

 int mpfr_set_d (mpfr_ptr, double, mpfr_rnd_t);
 int mpfr_set_flt (mpfr_ptr, float, mpfr_rnd_t);






 int mpfr_set_ld (mpfr_ptr, long double, mpfr_rnd_t);




 int mpfr_set_z (mpfr_ptr, mpz_srcptr, mpfr_rnd_t);
 int mpfr_set_z_2exp (mpfr_ptr, mpz_srcptr, mpfr_exp_t,
                                     mpfr_rnd_t);
 void mpfr_set_nan (mpfr_ptr);
 void mpfr_set_inf (mpfr_ptr, int);
 void mpfr_set_zero (mpfr_ptr, int);



 int mpfr_set_f (mpfr_ptr, mpf_srcptr, mpfr_rnd_t);
 int mpfr_cmp_f (mpfr_srcptr, mpf_srcptr);
 int mpfr_get_f (mpf_ptr, mpfr_srcptr, mpfr_rnd_t);

 int mpfr_set_si (mpfr_ptr, long, mpfr_rnd_t);
 int mpfr_set_ui (mpfr_ptr, unsigned long, mpfr_rnd_t);
 int mpfr_set_si_2exp (mpfr_ptr, long, mpfr_exp_t, mpfr_rnd_t);
 int mpfr_set_ui_2exp (mpfr_ptr, unsigned long, mpfr_exp_t,
                                      mpfr_rnd_t);


 int mpfr_set_q (mpfr_ptr, mpq_srcptr, mpfr_rnd_t);
 int mpfr_mul_q (mpfr_ptr, mpfr_srcptr, mpq_srcptr, mpfr_rnd_t);
 int mpfr_div_q (mpfr_ptr, mpfr_srcptr, mpq_srcptr, mpfr_rnd_t);
 int mpfr_add_q (mpfr_ptr, mpfr_srcptr, mpq_srcptr, mpfr_rnd_t);
 int mpfr_sub_q (mpfr_ptr, mpfr_srcptr, mpq_srcptr, mpfr_rnd_t);
 int mpfr_cmp_q (mpfr_srcptr, mpq_srcptr);
 void mpfr_get_q (mpq_ptr q, mpfr_srcptr f);

 int mpfr_set_str (mpfr_ptr, const char *, int, mpfr_rnd_t);
 int mpfr_init_set_str (mpfr_ptr, const char *, int,
                                       mpfr_rnd_t);
 int mpfr_set4 (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t, int);
 int mpfr_abs (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_set (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_neg (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_signbit (mpfr_srcptr);
 int mpfr_setsign (mpfr_ptr, mpfr_srcptr, int, mpfr_rnd_t);
 int mpfr_copysign (mpfr_ptr, mpfr_srcptr, mpfr_srcptr,
                                   mpfr_rnd_t);

 mpfr_exp_t mpfr_get_z_2exp (mpz_ptr, mpfr_srcptr);
 float mpfr_get_flt (mpfr_srcptr, mpfr_rnd_t);
 double mpfr_get_d (mpfr_srcptr, mpfr_rnd_t);




 long double mpfr_get_ld (mpfr_srcptr, mpfr_rnd_t);
 double mpfr_get_d1 (mpfr_srcptr);
 double mpfr_get_d_2exp (long*, mpfr_srcptr, mpfr_rnd_t);
 long double mpfr_get_ld_2exp (long*, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_frexp (mpfr_exp_t*, mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 long mpfr_get_si (mpfr_srcptr, mpfr_rnd_t);
 unsigned long mpfr_get_ui (mpfr_srcptr, mpfr_rnd_t);
 size_t mpfr_get_str_ndigits (int, mpfr_prec_t);
 char * mpfr_get_str (char*, mpfr_exp_t*, int, size_t,
                                     mpfr_srcptr, mpfr_rnd_t);
 int mpfr_get_z (mpz_ptr z, mpfr_srcptr f, mpfr_rnd_t);

 void mpfr_free_str (char *);

 int mpfr_urandom (mpfr_ptr, gmp_randstate_t, mpfr_rnd_t);

__attribute__ ((__deprecated__))

 int mpfr_grandom (mpfr_ptr, mpfr_ptr, gmp_randstate_t,
                                  mpfr_rnd_t);
 int mpfr_nrandom (mpfr_ptr, gmp_randstate_t, mpfr_rnd_t);
 int mpfr_erandom (mpfr_ptr, gmp_randstate_t, mpfr_rnd_t);
 int mpfr_urandomb (mpfr_ptr, gmp_randstate_t);

 void mpfr_nextabove (mpfr_ptr);
 void mpfr_nextbelow (mpfr_ptr);
 void mpfr_nexttoward (mpfr_ptr, mpfr_srcptr);


 int mpfr_printf (const char*, ...);
 int mpfr_asprintf (char**, const char*, ...);
 int mpfr_sprintf (char*, const char*, ...);
 int mpfr_snprintf (char*, size_t, const char*, ...);


 int mpfr_pow (mpfr_ptr, mpfr_srcptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_pow_si (mpfr_ptr, mpfr_srcptr, long, mpfr_rnd_t);
 int mpfr_pow_ui (mpfr_ptr, mpfr_srcptr, unsigned long,
                                 mpfr_rnd_t);
 int mpfr_ui_pow_ui (mpfr_ptr, unsigned long, unsigned long,
                                    mpfr_rnd_t);
 int mpfr_ui_pow (mpfr_ptr, unsigned long, mpfr_srcptr,
                                 mpfr_rnd_t);
 int mpfr_pow_z (mpfr_ptr, mpfr_srcptr, mpz_srcptr, mpfr_rnd_t);

 int mpfr_sqrt (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_sqrt_ui (mpfr_ptr, unsigned long, mpfr_rnd_t);
 int mpfr_rec_sqrt (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);

 int mpfr_add (mpfr_ptr, mpfr_srcptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_sub (mpfr_ptr, mpfr_srcptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_mul (mpfr_ptr, mpfr_srcptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_div (mpfr_ptr, mpfr_srcptr, mpfr_srcptr, mpfr_rnd_t);

 int mpfr_add_ui (mpfr_ptr, mpfr_srcptr, unsigned long,
                                 mpfr_rnd_t);
 int mpfr_sub_ui (mpfr_ptr, mpfr_srcptr, unsigned long,
                                 mpfr_rnd_t);
 int mpfr_ui_sub (mpfr_ptr, unsigned long, mpfr_srcptr,
                                 mpfr_rnd_t);
 int mpfr_mul_ui (mpfr_ptr, mpfr_srcptr, unsigned long,
                                 mpfr_rnd_t);
 int mpfr_div_ui (mpfr_ptr, mpfr_srcptr, unsigned long,
                                 mpfr_rnd_t);
 int mpfr_ui_div (mpfr_ptr, unsigned long, mpfr_srcptr,
                                 mpfr_rnd_t);

 int mpfr_add_si (mpfr_ptr, mpfr_srcptr, long, mpfr_rnd_t);
 int mpfr_sub_si (mpfr_ptr, mpfr_srcptr, long, mpfr_rnd_t);
 int mpfr_si_sub (mpfr_ptr, long, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_mul_si (mpfr_ptr, mpfr_srcptr, long, mpfr_rnd_t);
 int mpfr_div_si (mpfr_ptr, mpfr_srcptr, long, mpfr_rnd_t);
 int mpfr_si_div (mpfr_ptr, long, mpfr_srcptr, mpfr_rnd_t);

 int mpfr_add_d (mpfr_ptr, mpfr_srcptr, double, mpfr_rnd_t);
 int mpfr_sub_d (mpfr_ptr, mpfr_srcptr, double, mpfr_rnd_t);
 int mpfr_d_sub (mpfr_ptr, double, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_mul_d (mpfr_ptr, mpfr_srcptr, double, mpfr_rnd_t);
 int mpfr_div_d (mpfr_ptr, mpfr_srcptr, double, mpfr_rnd_t);
 int mpfr_d_div (mpfr_ptr, double, mpfr_srcptr, mpfr_rnd_t);

 int mpfr_sqr (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);

 int mpfr_const_pi (mpfr_ptr, mpfr_rnd_t);
 int mpfr_const_log2 (mpfr_ptr, mpfr_rnd_t);
 int mpfr_const_euler (mpfr_ptr, mpfr_rnd_t);
 int mpfr_const_catalan (mpfr_ptr, mpfr_rnd_t);

 int mpfr_agm (mpfr_ptr, mpfr_srcptr, mpfr_srcptr, mpfr_rnd_t);

 int mpfr_log (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_log2 (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_log10 (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_log1p (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_log_ui (mpfr_ptr, unsigned long, mpfr_rnd_t);

 int mpfr_exp (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_exp2 (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_exp10 (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_expm1 (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_eint (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_li2 (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);

 int mpfr_cmp (mpfr_srcptr, mpfr_srcptr);
 int mpfr_cmp3 (mpfr_srcptr, mpfr_srcptr, int);
 int mpfr_cmp_d (mpfr_srcptr, double);
 int mpfr_cmp_ld (mpfr_srcptr, long double);
 int mpfr_cmp_ui (mpfr_srcptr, unsigned long);
 int mpfr_cmp_si (mpfr_srcptr, long);
 int mpfr_cmp_ui_2exp (mpfr_srcptr, unsigned long, mpfr_exp_t);
 int mpfr_cmp_si_2exp (mpfr_srcptr, long, mpfr_exp_t);
 int mpfr_cmpabs (mpfr_srcptr, mpfr_srcptr);
 int mpfr_cmpabs_ui (mpfr_srcptr, unsigned long);
 void mpfr_reldiff (mpfr_ptr, mpfr_srcptr, mpfr_srcptr,
                                   mpfr_rnd_t);
 int mpfr_eq (mpfr_srcptr, mpfr_srcptr, unsigned long);
 int mpfr_sgn (mpfr_srcptr);

 int mpfr_mul_2exp (mpfr_ptr, mpfr_srcptr, unsigned long,
                                   mpfr_rnd_t);
 int mpfr_div_2exp (mpfr_ptr, mpfr_srcptr, unsigned long,
                                   mpfr_rnd_t);
 int mpfr_mul_2ui (mpfr_ptr, mpfr_srcptr, unsigned long,
                                  mpfr_rnd_t);
 int mpfr_div_2ui (mpfr_ptr, mpfr_srcptr, unsigned long,
                                  mpfr_rnd_t);
 int mpfr_mul_2si (mpfr_ptr, mpfr_srcptr, long, mpfr_rnd_t);
 int mpfr_div_2si (mpfr_ptr, mpfr_srcptr, long, mpfr_rnd_t);

 int mpfr_rint (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_roundeven (mpfr_ptr, mpfr_srcptr);
 int mpfr_round (mpfr_ptr, mpfr_srcptr);
 int mpfr_trunc (mpfr_ptr, mpfr_srcptr);
 int mpfr_ceil (mpfr_ptr, mpfr_srcptr);
 int mpfr_floor (mpfr_ptr, mpfr_srcptr);
 int mpfr_rint_roundeven (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_rint_round (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_rint_trunc (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_rint_ceil (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_rint_floor (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_frac (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_modf (mpfr_ptr, mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_remquo (mpfr_ptr, long*, mpfr_srcptr, mpfr_srcptr,
                                 mpfr_rnd_t);
 int mpfr_remainder (mpfr_ptr, mpfr_srcptr, mpfr_srcptr,
                                    mpfr_rnd_t);
 int mpfr_fmod (mpfr_ptr, mpfr_srcptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_fmodquo (mpfr_ptr, long*, mpfr_srcptr, mpfr_srcptr,
                                  mpfr_rnd_t);

 int mpfr_fits_ulong_p (mpfr_srcptr, mpfr_rnd_t);
 int mpfr_fits_slong_p (mpfr_srcptr, mpfr_rnd_t);
 int mpfr_fits_uint_p (mpfr_srcptr, mpfr_rnd_t);
 int mpfr_fits_sint_p (mpfr_srcptr, mpfr_rnd_t);
 int mpfr_fits_ushort_p (mpfr_srcptr, mpfr_rnd_t);
 int mpfr_fits_sshort_p (mpfr_srcptr, mpfr_rnd_t);
 int mpfr_fits_uintmax_p (mpfr_srcptr, mpfr_rnd_t);
 int mpfr_fits_intmax_p (mpfr_srcptr, mpfr_rnd_t);

 void mpfr_extract (mpz_ptr, mpfr_srcptr, unsigned int);
 void mpfr_swap (mpfr_ptr, mpfr_ptr);
 void mpfr_dump (mpfr_srcptr);

 int mpfr_nan_p (mpfr_srcptr);
 int mpfr_inf_p (mpfr_srcptr);
 int mpfr_number_p (mpfr_srcptr);
 int mpfr_integer_p (mpfr_srcptr);
 int mpfr_zero_p (mpfr_srcptr);
 int mpfr_regular_p (mpfr_srcptr);

 int mpfr_greater_p (mpfr_srcptr, mpfr_srcptr);
 int mpfr_greaterequal_p (mpfr_srcptr, mpfr_srcptr);
 int mpfr_less_p (mpfr_srcptr, mpfr_srcptr);
 int mpfr_lessequal_p (mpfr_srcptr, mpfr_srcptr);
 int mpfr_lessgreater_p (mpfr_srcptr, mpfr_srcptr);
 int mpfr_equal_p (mpfr_srcptr, mpfr_srcptr);
 int mpfr_unordered_p (mpfr_srcptr, mpfr_srcptr);

 int mpfr_atanh (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_acosh (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_asinh (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_cosh (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_sinh (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_tanh (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_sinh_cosh (mpfr_ptr, mpfr_ptr, mpfr_srcptr,
                                    mpfr_rnd_t);

 int mpfr_sech (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_csch (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_coth (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);

 int mpfr_acos (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_asin (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_atan (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_sin (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_sin_cos (mpfr_ptr, mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_cos (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_tan (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_atan2 (mpfr_ptr, mpfr_srcptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_sec (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_csc (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_cot (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);

 int mpfr_hypot (mpfr_ptr, mpfr_srcptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_erf (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_erfc (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_cbrt (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);

__attribute__ ((__deprecated__))

 int mpfr_root (mpfr_ptr, mpfr_srcptr, unsigned long,
                               mpfr_rnd_t);
 int mpfr_rootn_ui (mpfr_ptr, mpfr_srcptr, unsigned long,
                                   mpfr_rnd_t);
 int mpfr_gamma (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_gamma_inc (mpfr_ptr, mpfr_srcptr, mpfr_srcptr,
                                    mpfr_rnd_t);
 int mpfr_beta (mpfr_ptr, mpfr_srcptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_lngamma (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_lgamma (mpfr_ptr, int *, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_digamma (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_zeta (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_zeta_ui (mpfr_ptr, unsigned long, mpfr_rnd_t);
 int mpfr_fac_ui (mpfr_ptr, unsigned long, mpfr_rnd_t);
 int mpfr_j0 (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_j1 (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_jn (mpfr_ptr, long, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_y0 (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_y1 (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_yn (mpfr_ptr, long, mpfr_srcptr, mpfr_rnd_t);

 int mpfr_ai (mpfr_ptr, mpfr_srcptr, mpfr_rnd_t);

 int mpfr_min (mpfr_ptr, mpfr_srcptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_max (mpfr_ptr, mpfr_srcptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_dim (mpfr_ptr, mpfr_srcptr, mpfr_srcptr, mpfr_rnd_t);

 int mpfr_mul_z (mpfr_ptr, mpfr_srcptr, mpz_srcptr, mpfr_rnd_t);
 int mpfr_div_z (mpfr_ptr, mpfr_srcptr, mpz_srcptr, mpfr_rnd_t);
 int mpfr_add_z (mpfr_ptr, mpfr_srcptr, mpz_srcptr, mpfr_rnd_t);
 int mpfr_sub_z (mpfr_ptr, mpfr_srcptr, mpz_srcptr, mpfr_rnd_t);
 int mpfr_z_sub (mpfr_ptr, mpz_srcptr, mpfr_srcptr, mpfr_rnd_t);
 int mpfr_cmp_z (mpfr_srcptr, mpz_srcptr);

 int mpfr_fma (mpfr_ptr, mpfr_srcptr, mpfr_srcptr, mpfr_srcptr,
                              mpfr_rnd_t);
 int mpfr_fms (mpfr_ptr, mpfr_srcptr, mpfr_srcptr, mpfr_srcptr,
                              mpfr_rnd_t);
 int mpfr_fmma (mpfr_ptr, mpfr_srcptr, mpfr_srcptr, mpfr_srcptr,
                               mpfr_srcptr, mpfr_rnd_t);
 int mpfr_fmms (mpfr_ptr, mpfr_srcptr, mpfr_srcptr, mpfr_srcptr,
                               mpfr_srcptr, mpfr_rnd_t);
 int mpfr_sum (mpfr_ptr, const mpfr_ptr *, unsigned long,
                              mpfr_rnd_t);
 int mpfr_dot (mpfr_ptr, const mpfr_ptr *, const mpfr_ptr *,
                              unsigned long, mpfr_rnd_t);

 void mpfr_free_cache (void);
 void mpfr_free_cache2 (mpfr_free_cache_t);
 void mpfr_free_pool (void);
 int mpfr_mp_memory_cleanup (void);

 int mpfr_subnormalize (mpfr_ptr, int, mpfr_rnd_t);

 int mpfr_strtofr (mpfr_ptr, const char *, char **, int,
                                  mpfr_rnd_t);

 void mpfr_round_nearest_away_begin (mpfr_t);
 int mpfr_round_nearest_away_end (mpfr_t, int);

 size_t mpfr_custom_get_size (mpfr_prec_t);
 void mpfr_custom_init (void *, mpfr_prec_t);
 __attribute__ ((__returns_nonnull__)) void *
  mpfr_custom_get_significand (mpfr_srcptr);
 mpfr_exp_t mpfr_custom_get_exp (mpfr_srcptr);
 void mpfr_custom_move (mpfr_ptr, void *);
 void mpfr_custom_init_set (mpfr_ptr, int, mpfr_exp_t,
                                           mpfr_prec_t, void *);
 int mpfr_custom_get_kind (mpfr_srcptr);

 int mpfr_total_order_p (mpfr_srcptr, mpfr_srcptr);
# 26 "/usr/local/include/mpc.h" 2 3 4
# 72 "/usr/local/include/mpc.h" 3 4
typedef int mpc_rnd_t;
# 101 "/usr/local/include/mpc.h" 3 4
typedef struct {
  mpfr_t re;
  mpfr_t im;
}
__mpc_struct;

typedef __mpc_struct mpc_t[1];
typedef __mpc_struct *mpc_ptr;
typedef const __mpc_struct *mpc_srcptr;
# 124 "/usr/local/include/mpc.h" 3 4
 int mpc_add (mpc_ptr, mpc_srcptr, mpc_srcptr, mpc_rnd_t);
 int mpc_add_fr (mpc_ptr, mpc_srcptr, mpfr_srcptr, mpc_rnd_t);
 int mpc_add_si (mpc_ptr, mpc_srcptr, long int, mpc_rnd_t);
 int mpc_add_ui (mpc_ptr, mpc_srcptr, unsigned long int, mpc_rnd_t);
 int mpc_sub (mpc_ptr, mpc_srcptr, mpc_srcptr, mpc_rnd_t);
 int mpc_sub_fr (mpc_ptr, mpc_srcptr, mpfr_srcptr, mpc_rnd_t);
 int mpc_fr_sub (mpc_ptr, mpfr_srcptr, mpc_srcptr, mpc_rnd_t);
 int mpc_sub_ui (mpc_ptr, mpc_srcptr, unsigned long int, mpc_rnd_t);
 int mpc_ui_ui_sub (mpc_ptr, unsigned long int, unsigned long int, mpc_srcptr, mpc_rnd_t);
 int mpc_mul (mpc_ptr, mpc_srcptr, mpc_srcptr, mpc_rnd_t);
 int mpc_mul_fr (mpc_ptr, mpc_srcptr, mpfr_srcptr, mpc_rnd_t);
 int mpc_mul_ui (mpc_ptr, mpc_srcptr, unsigned long int, mpc_rnd_t);
 int mpc_mul_si (mpc_ptr, mpc_srcptr, long int, mpc_rnd_t);
 int mpc_mul_i (mpc_ptr, mpc_srcptr, int, mpc_rnd_t);
 int mpc_sqr (mpc_ptr, mpc_srcptr, mpc_rnd_t);
 int mpc_div (mpc_ptr, mpc_srcptr, mpc_srcptr, mpc_rnd_t);
 int mpc_pow (mpc_ptr, mpc_srcptr, mpc_srcptr, mpc_rnd_t);
 int mpc_pow_fr (mpc_ptr, mpc_srcptr, mpfr_srcptr, mpc_rnd_t);
 int mpc_pow_ld (mpc_ptr, mpc_srcptr, long double, mpc_rnd_t);
 int mpc_pow_d (mpc_ptr, mpc_srcptr, double, mpc_rnd_t);
 int mpc_pow_si (mpc_ptr, mpc_srcptr, long, mpc_rnd_t);
 int mpc_pow_ui (mpc_ptr, mpc_srcptr, unsigned long, mpc_rnd_t);
 int mpc_pow_z (mpc_ptr, mpc_srcptr, mpz_srcptr, mpc_rnd_t);
 int mpc_div_fr (mpc_ptr, mpc_srcptr, mpfr_srcptr, mpc_rnd_t);
 int mpc_fr_div (mpc_ptr, mpfr_srcptr, mpc_srcptr, mpc_rnd_t);
 int mpc_div_ui (mpc_ptr, mpc_srcptr, unsigned long int, mpc_rnd_t);
 int mpc_ui_div (mpc_ptr, unsigned long int, mpc_srcptr, mpc_rnd_t);
 int mpc_div_2ui (mpc_ptr, mpc_srcptr, unsigned long int, mpc_rnd_t);
 int mpc_mul_2ui (mpc_ptr, mpc_srcptr, unsigned long int, mpc_rnd_t);
 int mpc_div_2si (mpc_ptr, mpc_srcptr, long int, mpc_rnd_t);
 int mpc_mul_2si (mpc_ptr, mpc_srcptr, long int, mpc_rnd_t);
 int mpc_conj (mpc_ptr, mpc_srcptr, mpc_rnd_t);
 int mpc_neg (mpc_ptr, mpc_srcptr, mpc_rnd_t);
 int mpc_sum (mpc_ptr, const mpc_ptr *, unsigned long, mpc_rnd_t);
 int mpc_dot (mpc_ptr, const mpc_ptr *, const mpc_ptr *, unsigned long, mpc_rnd_t);
 int mpc_norm (mpfr_ptr, mpc_srcptr, mpfr_rnd_t);
 int mpc_abs (mpfr_ptr, mpc_srcptr, mpfr_rnd_t);
 int mpc_sqrt (mpc_ptr, mpc_srcptr, mpc_rnd_t);
 int mpc_set (mpc_ptr, mpc_srcptr, mpc_rnd_t);
 int mpc_set_d (mpc_ptr, double, mpc_rnd_t);
 int mpc_set_d_d (mpc_ptr, double, double, mpc_rnd_t);
 int mpc_set_ld (mpc_ptr, long double, mpc_rnd_t);
 int mpc_set_ld_ld (mpc_ptr, long double, long double, mpc_rnd_t);
 int mpc_set_f (mpc_ptr, mpf_srcptr, mpc_rnd_t);
 int mpc_set_f_f (mpc_ptr, mpf_srcptr, mpf_srcptr, mpc_rnd_t);
 int mpc_set_fr (mpc_ptr, mpfr_srcptr, mpc_rnd_t);
 int mpc_set_fr_fr (mpc_ptr, mpfr_srcptr, mpfr_srcptr, mpc_rnd_t);
 int mpc_set_q (mpc_ptr, mpq_srcptr, mpc_rnd_t);
 int mpc_set_q_q (mpc_ptr, mpq_srcptr, mpq_srcptr, mpc_rnd_t);
 int mpc_set_si (mpc_ptr, long int, mpc_rnd_t);
 int mpc_set_si_si (mpc_ptr, long int, long int, mpc_rnd_t);
 int mpc_set_ui (mpc_ptr, unsigned long int, mpc_rnd_t);
 int mpc_set_ui_ui (mpc_ptr, unsigned long int, unsigned long int, mpc_rnd_t);
 int mpc_set_z (mpc_ptr, mpz_srcptr, mpc_rnd_t);
 int mpc_set_z_z (mpc_ptr, mpz_srcptr, mpz_srcptr, mpc_rnd_t);
 void mpc_swap (mpc_ptr, mpc_ptr);
 int mpc_fma (mpc_ptr, mpc_srcptr, mpc_srcptr, mpc_srcptr, mpc_rnd_t);

 void mpc_set_nan (mpc_ptr);

 int mpc_real (mpfr_ptr, mpc_srcptr, mpfr_rnd_t);
 int mpc_imag (mpfr_ptr, mpc_srcptr, mpfr_rnd_t);
 int mpc_arg (mpfr_ptr, mpc_srcptr, mpfr_rnd_t);
 int mpc_proj (mpc_ptr, mpc_srcptr, mpc_rnd_t);
 int mpc_cmp (mpc_srcptr, mpc_srcptr);
 int mpc_cmp_si_si (mpc_srcptr, long int, long int);
 int mpc_cmp_abs (mpc_srcptr, mpc_srcptr);
 int mpc_exp (mpc_ptr, mpc_srcptr, mpc_rnd_t);
 int mpc_log (mpc_ptr, mpc_srcptr, mpc_rnd_t);
 int mpc_log10 (mpc_ptr, mpc_srcptr, mpc_rnd_t);
 int mpc_sin (mpc_ptr, mpc_srcptr, mpc_rnd_t);
 int mpc_cos (mpc_ptr, mpc_srcptr, mpc_rnd_t);
 int mpc_sin_cos (mpc_ptr, mpc_ptr, mpc_srcptr, mpc_rnd_t, mpc_rnd_t);
 int mpc_tan (mpc_ptr, mpc_srcptr, mpc_rnd_t);
 int mpc_sinh (mpc_ptr, mpc_srcptr, mpc_rnd_t);
 int mpc_cosh (mpc_ptr, mpc_srcptr, mpc_rnd_t);
 int mpc_tanh (mpc_ptr, mpc_srcptr, mpc_rnd_t);
 int mpc_asin (mpc_ptr, mpc_srcptr, mpc_rnd_t);
 int mpc_acos (mpc_ptr, mpc_srcptr, mpc_rnd_t);
 int mpc_atan (mpc_ptr, mpc_srcptr, mpc_rnd_t);
 int mpc_asinh (mpc_ptr, mpc_srcptr, mpc_rnd_t);
 int mpc_acosh (mpc_ptr, mpc_srcptr, mpc_rnd_t);
 int mpc_atanh (mpc_ptr, mpc_srcptr, mpc_rnd_t);
 int mpc_rootofunity (mpc_ptr, unsigned long int, unsigned long int, mpc_rnd_t);
 void mpc_clear (mpc_ptr);
 int mpc_urandom (mpc_ptr, gmp_randstate_t);
 void mpc_init2 (mpc_ptr, mpfr_prec_t);
 void mpc_init3 (mpc_ptr, mpfr_prec_t, mpfr_prec_t);
 mpfr_prec_t mpc_get_prec (mpc_srcptr x);
 void mpc_get_prec2 (mpfr_prec_t *pr, mpfr_prec_t *pi, mpc_srcptr x);
 void mpc_set_prec (mpc_ptr, mpfr_prec_t);
 const char * mpc_get_version (void);

 int mpc_strtoc (mpc_ptr, const char *, char **, int, mpc_rnd_t);
 int mpc_set_str (mpc_ptr, const char *, int, mpc_rnd_t);
 char * mpc_get_str (int, size_t, mpc_srcptr, mpc_rnd_t);
 void mpc_free_str (char *);
# 4 "project/radare2/libr/egg/rlcc/rlcc.c" 2



# 6 "project/radare2/libr/egg/rlcc/rlcc.c"
static int isComment(mpc_ast_t *node) {
 if (!strcmp (node->tag, "comment|regex")) {
  return 1;
 }
 if (!strcmp (node->tag, "linecomment|regex")) {
  return 1;
 }
 return 0;
}

static int isInlineAssembly(mpc_ast_t *node) {
 if (!strcmp (node->tag, "asm|regex")) {
  return 1;
 }
 return 0;
}

static int isStatement(mpc_ast_t *node) {
 if (!strcmp (node->tag, "stmt|>")) {
  return 1;
 }
 return 0;
}

static int isSigdef(mpc_ast_t *node) {
 if (!strcmp (node->tag, "sigdef|>")) {
  return 1;
 }
 return 0;
}

static int isProcedure(mpc_ast_t *node) {
 if (!strcmp (node->tag, "procedure|>")) {
  return 1;
 }
 return 0;
}

static void processNode (mpc_ast_t *node) {
 if (isStatement(node)) {
  int i, narg = 0;
  const char *args[32];
  for (i = 0; i < node->children_num; i++) {
   const char *tag = node->children[i]->tag;
   const char *val = node->children[i]->contents;
   if (strcmp (tag, "char")) {
    printf ("TAG (%s) = (%s)\n", tag, val);
    args[narg++] = val;
   }
  }
  printf ("; CALL WITH %d ARGS\n", narg);
 } else if (isProcedure (node)) {
  int i, j;
  const char *name = node->children[0]->contents;
  printf ("%s:\n", name);
  for (i=0 ; i<node->children_num; i++) {
   if (!strcmp (node->children[i]->tag, "body|>")) {
    node = node->children[i];
    for (i=0 ; i<node->children_num; i++) {
     if (!strcmp (node->children[i]->tag, "stmt|>")) {
      processNode (node->children[i]);
     } else {
      fprintf(stderr,"UNK %s\n", node->children[i]->tag);
     }
    }
    break;
   }
  }
 } else if (isSigdef (node)) {
  if (node->children_num>4) {
   const char *name = node->children[0]->contents;
   const char *type = node->children[2]->contents;
   const char *size = node->children[4]->contents;
   if (!strcmp (type, "alias")) {
    printf (".equ %s,%s\n", name, size);
   } else if (!strcmp (type, "syscall")) {
    printf ("; TODO: register syscall %s number %s\n", name, size);
   } else if (!strcmp (type, "global")) {
    printf ("; TODO: global \n");
   } else {
    printf ("; UNKNOWN EXPRESISON: NAME = '%s' ", name);
    printf ("TYPE = '%s' ", type);
    printf ("SIZE = '%s'\n", size);
   }
  }
 } else if (isComment (node)) {
  char *s = strdup (node->contents + 2);
  int len = strlen (s);
  if (node->contents[1] == '*') {
   s[len-2] = 0;
  }
  while (s) {
   char *nl = strchr (s, '\n');
   if (nl) {
    *nl = 0;
    printf ("; %s\n", s);
    s = nl + 1;
   } else {
    printf ("; %s\n", s);
    s = 
# 105 "project/radare2/libr/egg/rlcc/rlcc.c" 3 4
       ((void *)0)
# 105 "project/radare2/libr/egg/rlcc/rlcc.c"
           ;
   }
  }
  free (s);
 } else if (isInlineAssembly (node)) {
  printf ("%s\n", node->contents+1);
 }
}

int main(int argc, char **argv) {
 mpc_parser_t* Ident = mpc_new("ident");
 mpc_parser_t* Number = mpc_new("number");
 mpc_parser_t* Character = mpc_new("character");
 mpc_parser_t* String = mpc_new("string");
 mpc_parser_t* Factor = mpc_new("factor");
 mpc_parser_t* Term = mpc_new("term");
 mpc_parser_t* Lexp = mpc_new("lexp");
 mpc_parser_t* Stmt = mpc_new("stmt");
 mpc_parser_t* Exp = mpc_new("exp");
 mpc_parser_t* Vartype = mpc_new("vartype");
 mpc_parser_t* Typeident = mpc_new("typeident");
 mpc_parser_t* Decls = mpc_new("decls");
 mpc_parser_t* Args = mpc_new("args");
 mpc_parser_t* Body = mpc_new("body");
 mpc_parser_t* Comment = mpc_new("comment");
 mpc_parser_t* Linecomment = mpc_new("linecomment");
 mpc_parser_t* Asm = mpc_new("asm");
 mpc_parser_t* Procedure = mpc_new("procedure");
 mpc_parser_t* CProcedure = mpc_new("cprocedure");
 mpc_parser_t* Sigdef = mpc_new("sigdef");
 mpc_parser_t* Sigbody = mpc_new("sigbody");
 mpc_parser_t* Includes = mpc_new("includes");
 mpc_parser_t* Smallc = mpc_new("smallc");

 mpc_err_t* err = mpca_lang(MPCA_LANG_DEFAULT,
   " ident     : /[a-zA-Z_][a-zA-Z0-9_]*/ ;                           \n"
   " number    : /[0-9]+/ ;                                           \n"
   " character : /'.'/ ;                                              \n"
   " string    : /\"(\\\\.|[^\"])*\"/ ;                               \n"
   "                                                                  \n"
   " factor    : '(' <lexp> ')'                                       \n"
   "           | <number>                                             \n"
   "           | <character>                                          \n"
   "           | <string>                                             \n"
   "           | <ident> '(' <lexp>? (',' <lexp>)* ')'                \n"
   "           | <ident> ;                                            \n"
   "                                                                  \n"
   " term      : <factor> (('*' | '/' | '%') <factor>)* ;             \n"
   " lexp      : <term> (('+' | '-') <term>)* ;                       \n"
   "                                                                  \n"
   " stmt      : '{' <stmt>* '}'                                      \n"
   "           | \"while\" '(' <exp> ')' <stmt>                       \n"
   "           | \"if\"    '(' <exp> ')' <stmt>                       \n"
   "           | <ident> '=' <lexp> ';'                               \n"
   "           | \"print\" '(' <lexp>? ')' ';'                        \n"
   "           | \"return\" <lexp>? ';'                               \n"
   "           | <ident> '(' (<number>|<ident>|<string>)? (',' (<string>|<number>|<ident>))* ')' ';' ;        \n"
   "                                                                  \n"
   " exp       : <lexp> '>' <lexp>                                    \n"
   "           | <lexp> '<' <lexp>                                    \n"
   "           | <lexp> \">=\" <lexp>                                 \n"
   "           | <lexp> \"<=\" <lexp>                                 \n"
   "           | <lexp> \"!=\" <lexp>                                 \n"
   "           | <lexp> \"==\" <lexp> ;                               \n"
   "                                                                  \n"
   " vartype   : (\"int\" | \"char\") ;                               \n"
   " typeident : <vartype> <ident> ;                                  \n"
   " decls     : (<typeident> ';')* ;                                 \n"
   " args      : <typeident>? (',' <typeident>)* ;                    \n"
   " body      : '{' <decls> <stmt>* '}' ;                            \n"
   " comment   : /\\/\\*([^\\*])*\\*\\// ;                            \n"
   " linecomment : /\\/\\/([^\\n])*/ ;                                \n"
   " asm       : /\\:([^\\n])*/ ;                                \n"
   " procedure : <ident> '@' \"global\" '(' <number>? ')' <body> ; \n"
   " cprocedure : <vartype> <ident> '(' <args> ')' <body> ; \n"
   " sigdef    : <ident> '@' <ident> '(' <number> ')' ';' ; \n"
   " sigbody   : '@' <ident> '(' <number> ')' ';' ; \n"
   " includes  : (\"#include\" <string>)* ;                           \n"
   " smallc    : /^/ (<comment>|<asm>|<linecomment>|<sigdef>|<sigbody>|<procedure>|<cprocedure>)* <includes> <decls> /$/ ; \n",
  Ident, Number, Character, String, Factor, Term, Lexp, Stmt, Exp,
  Vartype, Typeident, Decls, Args, Body, Comment, Linecomment, Asm, Procedure, CProcedure,
  Sigdef, Sigbody, Includes, Smallc, 
# 186 "project/radare2/libr/egg/rlcc/rlcc.c" 3 4
                                    ((void *)0)
# 186 "project/radare2/libr/egg/rlcc/rlcc.c"
                                        );

 if (err != 
# 188 "project/radare2/libr/egg/rlcc/rlcc.c" 3 4
           ((void *)0)
# 188 "project/radare2/libr/egg/rlcc/rlcc.c"
               ) {
  mpc_err_print (err);
  mpc_err_delete (err);
  return 1;
 }


 if (argc > 1) {

  mpc_result_t r;
  if (mpc_parse_contents(argv[1], Smallc, &r)) {
   mpc_ast_print_to(r.output, stderr);
   {
    int i;
    mpc_ast_t *root = r.output;
    for (i=0; i< root->children_num; i++) {
     mpc_ast_t *node = root->children[i];
     fprintf(stderr,"; TAG = %s    (%s)\n", node->tag, node->contents);
     processNode (node);
    }
   }
   mpc_ast_delete(r.output);
  } else {
   mpc_err_print(r.error);
   mpc_err_delete(r.error);
  }

 } else {

  mpc_result_t r;
  if (mpc_parse_pipe("<stdin>", stdin, Smallc, &r)) {
   mpc_ast_print(r.output);
   mpc_ast_delete(r.output);
  } else {
   mpc_err_print(r.error);
   mpc_err_delete(r.error);
  }
 }


 mpc_cleanup(17, Ident, Number, Character, String, Factor, Term, Lexp, Stmt, Exp,
   Vartype, Typeident, Decls, Args, Body, Comment, Procedure, CProcedure,
   Sigdef, Includes, Smallc);

 return 0;
}
