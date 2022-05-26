# 1 "project/radare2/libr/asm/arch/tricore/gnu/cpu-tricore.c"
# 21 "project/radare2/libr/asm/arch/tricore/gnu/cpu-tricore.c"
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <stdbool.h>


#include "sysdep.h"
#include "disas-asm.h"

#include "opcode/tricore.h"



unsigned long tricore_mask_abs;
unsigned long tricore_mask_absb;
unsigned long tricore_mask_b;
unsigned long tricore_mask_bit;
unsigned long tricore_mask_bo;
unsigned long tricore_mask_bol;
unsigned long tricore_mask_brc;
unsigned long tricore_mask_brn;
unsigned long tricore_mask_brr;
unsigned long tricore_mask_rc;
unsigned long tricore_mask_rcpw;
unsigned long tricore_mask_rcr;
unsigned long tricore_mask_rcrr;
unsigned long tricore_mask_rcrw;
unsigned long tricore_mask_rlc;
unsigned long tricore_mask_rr;
unsigned long tricore_mask_rr1;
unsigned long tricore_mask_rr2;
unsigned long tricore_mask_rrpw;
unsigned long tricore_mask_rrr;
unsigned long tricore_mask_rrr1;
unsigned long tricore_mask_rrr2;
unsigned long tricore_mask_rrrr;
unsigned long tricore_mask_rrrw;
unsigned long tricore_mask_sys;
unsigned long tricore_mask_sb;
unsigned long tricore_mask_sbc;
unsigned long tricore_mask_sbr;
unsigned long tricore_mask_sbrn;
unsigned long tricore_mask_sc;
unsigned long tricore_mask_slr;
unsigned long tricore_mask_slro;
unsigned long tricore_mask_sr;
unsigned long tricore_mask_src;
unsigned long tricore_mask_sro;
unsigned long tricore_mask_srr;
unsigned long tricore_mask_srrs;
unsigned long tricore_mask_ssr;
unsigned long tricore_mask_ssro;
unsigned long tricore_opmask[TRICORE_FMT_MAX];

int
bfd_default_scan (info, string)
     const bfd_arch_info_type *info;
     const char *string;
{
 return true;
}

const bfd_arch_info_type *
bfd_default_compatible (a, b)
     const bfd_arch_info_type *a;
     const bfd_arch_info_type *b;
{
 if (a->arch != b->arch) {
  return NULL;
 }

 if (a->bits_per_word != b->bits_per_word) {
  return NULL;
 }

 if (a->mach > b->mach) {
  return a;
 }

 if (b->mach > a->mach) {
  return b;
 }

 return a;
}

void tricore_init_arch_vars PARAMS ((unsigned long));



static const bfd_arch_info_type arch_info_struct[] =
{

  {
    32,
    32,
    8,
    bfd_arch_tricore,
    bfd_mach_rider_a,
    "tricore",
    "TriCore:Rider-A",
    3,
    false,
    bfd_default_compatible,
    bfd_default_scan,
    &arch_info_struct[1]
  },


  {
    32,
    32,
    8,
    bfd_arch_tricore,
    bfd_mach_rider_d,
    "tricore",
    "TriCore:Rider-D",
    3,
    false,
    bfd_default_compatible,
    bfd_default_scan,
    &arch_info_struct[2]
  },


  {
    32,
    32,
    8,
    bfd_arch_tricore,
    bfd_mach_rider_2,
    "tricore",
    "TriCore:V2",
    3,
    false,
    bfd_default_compatible,
    bfd_default_scan,
    (bfd_arch_info_type *) 0
  }
};

const bfd_arch_info_type bfd_tricore_arch =
{

  32,
  32,
  8,
  bfd_arch_tricore,
  bfd_mach_rider_b,
  "tricore",
  "TriCore:Rider-B",
  3,
  true,
  bfd_default_compatible,
  bfd_default_scan,
  &arch_info_struct[0]
};
# 186 "project/radare2/libr/asm/arch/tricore/gnu/cpu-tricore.c"
void
tricore_init_arch_vars (mach)
     unsigned long mach;
{
  switch (mach & bfd_mach_rider_mask)
    {
    case bfd_mach_rider_a:
      tricore_mask_abs = 0x0c0000ff;
      tricore_mask_absb = 0x0c0000ff;
      tricore_mask_b = 0x000000ff;
      tricore_mask_bit = 0x006000ff;
      tricore_mask_bo = 0x0fc000ff;
      tricore_mask_bol = 0x000000ff;
      tricore_mask_brc = 0x800000ff;
      tricore_mask_brn = 0x8000007f;
      tricore_mask_brr = 0x800000ff;
      tricore_mask_rc = 0x0fe000ff;
      tricore_mask_rcpw = 0x006000ff;
      tricore_mask_rcr = 0x00e000ff;
      tricore_mask_rcrr = 0x00e000ff;
      tricore_mask_rcrw = 0x00e000ff;
      tricore_mask_rlc = 0x000000ff;
      tricore_mask_rr = 0x0ff000ff;
      tricore_mask_rrpw = 0x006000ff;
      tricore_mask_rrr = 0x00f000ff;
      tricore_mask_rrr1 = 0x00fc00ff;
      tricore_mask_rrr2 = 0x00ff00ff;
      tricore_mask_rrrr = 0x00e000ff;
      tricore_mask_rrrw = 0x00e000ff;
      tricore_mask_sys = 0x07c000ff;
      tricore_mask_sb = 0x00ff;
      tricore_mask_sbc = 0x00ff;
      tricore_mask_sbr = 0x00ff;
      tricore_mask_sbrn = 0x007f;
      tricore_mask_sc = 0x00ff;
      tricore_mask_slr = 0x00ff;
      tricore_mask_slro = 0x00ff;
      tricore_mask_sr = 0xf0ff;
      tricore_mask_src = 0x00ff;
      tricore_mask_sro = 0x00ff;
      tricore_mask_srr = 0x00ff;
      tricore_mask_srrs = 0x003f;
      tricore_mask_ssr = 0x00ff;
      tricore_mask_ssro = 0x00ff;
      break;

    case bfd_mach_rider_b:
    case bfd_mach_rider_2:
      tricore_mask_abs = 0x0c0000ff;
      tricore_mask_absb = 0x0c0000ff;
      tricore_mask_b = 0x000000ff;
      tricore_mask_bit = 0x006000ff;
      tricore_mask_bo = 0x0fc000ff;
      tricore_mask_bol = 0x000000ff;
      tricore_mask_brc = 0x800000ff;
      tricore_mask_brn = 0x8000007f;
      tricore_mask_brr = 0x800000ff;
      tricore_mask_rc = 0x0fe000ff;
      tricore_mask_rcpw = 0x006000ff;
      tricore_mask_rcr = 0x00e000ff;
      tricore_mask_rcrr = 0x00e000ff;
      tricore_mask_rcrw = 0x00e000ff;
      tricore_mask_rlc = 0x000000ff;
      tricore_mask_rr = 0x0ff300ff;
      tricore_mask_rr1 = 0x0ffc00ff;
      tricore_mask_rr2 = 0x0fff00ff;
      tricore_mask_rrpw = 0x006000ff;
      tricore_mask_rrr = 0x00f300ff;
      tricore_mask_rrr1 = 0x00fc00ff;
      tricore_mask_rrr2 = 0x00ff00ff;
      tricore_mask_rrrr = 0x00e000ff;
      tricore_mask_rrrw = 0x00e000ff;
      if ((mach & bfd_mach_rider_mask) == bfd_mach_rider_2) {
       tricore_mask_sys = 0x0fc000ff;
      } else {
       tricore_mask_sys = 0x07c000ff;
      }
      tricore_mask_sb = 0x00ff;
      tricore_mask_sbc = 0x00ff;
      tricore_mask_sbr = 0x00ff;
      tricore_mask_sbrn = 0x00ff;
      tricore_mask_sc = 0x00ff;
      tricore_mask_slr = 0x00ff;
      tricore_mask_slro = 0x00ff;
      tricore_mask_sr = 0xf0ff;
      tricore_mask_src = 0x00ff;
      tricore_mask_sro = 0x00ff;
      tricore_mask_srr = 0x00ff;
      tricore_mask_srrs = 0x003f;
      tricore_mask_ssr = 0x00ff;
      tricore_mask_ssro = 0x00ff;
      break;
    }



  tricore_opmask[TRICORE_FMT_ABS] = tricore_mask_abs;
  tricore_opmask[TRICORE_FMT_ABSB] = tricore_mask_absb;
  tricore_opmask[TRICORE_FMT_B] = tricore_mask_b;
  tricore_opmask[TRICORE_FMT_BIT] = tricore_mask_bit;
  tricore_opmask[TRICORE_FMT_BO] = tricore_mask_bo;
  tricore_opmask[TRICORE_FMT_BOL] = tricore_mask_bol;
  tricore_opmask[TRICORE_FMT_BRC] = tricore_mask_brc;
  tricore_opmask[TRICORE_FMT_BRN] = tricore_mask_brn;
  tricore_opmask[TRICORE_FMT_BRR] = tricore_mask_brr;
  tricore_opmask[TRICORE_FMT_RC] = tricore_mask_rc;
  tricore_opmask[TRICORE_FMT_RCPW] = tricore_mask_rcpw;
  tricore_opmask[TRICORE_FMT_RCR] = tricore_mask_rcr;
  tricore_opmask[TRICORE_FMT_RCRR] = tricore_mask_rcrr;
  tricore_opmask[TRICORE_FMT_RCRW] = tricore_mask_rcrw;
  tricore_opmask[TRICORE_FMT_RLC] = tricore_mask_rlc;
  tricore_opmask[TRICORE_FMT_RR] = tricore_mask_rr;
  tricore_opmask[TRICORE_FMT_RR1] = tricore_mask_rr1;
  tricore_opmask[TRICORE_FMT_RR2] = tricore_mask_rr2;
  tricore_opmask[TRICORE_FMT_RRPW] = tricore_mask_rrpw;
  tricore_opmask[TRICORE_FMT_RRR] = tricore_mask_rrr;
  tricore_opmask[TRICORE_FMT_RRR1] = tricore_mask_rrr1;
  tricore_opmask[TRICORE_FMT_RRR2] = tricore_mask_rrr2;
  tricore_opmask[TRICORE_FMT_RRRR] = tricore_mask_rrrr;
  tricore_opmask[TRICORE_FMT_RRRW] = tricore_mask_rrrw;
  tricore_opmask[TRICORE_FMT_SYS] = tricore_mask_sys;
  tricore_opmask[TRICORE_FMT_SB] = tricore_mask_sb;
  tricore_opmask[TRICORE_FMT_SBC] = tricore_mask_sbc;
  tricore_opmask[TRICORE_FMT_SBR] = tricore_mask_sbr;
  tricore_opmask[TRICORE_FMT_SBRN] = tricore_mask_sbrn;
  tricore_opmask[TRICORE_FMT_SC] = tricore_mask_sc;
  tricore_opmask[TRICORE_FMT_SLR] = tricore_mask_slr;
  tricore_opmask[TRICORE_FMT_SLRO] = tricore_mask_slro;
  tricore_opmask[TRICORE_FMT_SR] = tricore_mask_sr;
  tricore_opmask[TRICORE_FMT_SRC] = tricore_mask_src;
  tricore_opmask[TRICORE_FMT_SRO] = tricore_mask_sro;
  tricore_opmask[TRICORE_FMT_SRR] = tricore_mask_srr;
  tricore_opmask[TRICORE_FMT_SRRS] = tricore_mask_srrs;
  tricore_opmask[TRICORE_FMT_SSR] = tricore_mask_ssr;
  tricore_opmask[TRICORE_FMT_SSRO] = tricore_mask_ssro;
}
