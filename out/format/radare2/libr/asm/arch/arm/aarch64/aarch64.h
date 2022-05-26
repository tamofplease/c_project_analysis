# 1 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
# 22 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
#ifndef OPCODE_AARCH64_H
#define OPCODE_AARCH64_H 

#include "mybfd.h"

#include <stdint.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif


#define AARCH64_PCREL_OFFSET 0

typedef uint32_t aarch64_insn;


#define AARCH64_FEATURE_SHA2 0x200000000ULL
#define AARCH64_FEATURE_AES 0x800000000ULL
#define AARCH64_FEATURE_V8_4 0x000000800ULL
#define AARCH64_FEATURE_SM4 0x100000000ULL
#define AARCH64_FEATURE_SHA3 0x400000000ULL
#define AARCH64_FEATURE_V8 0x00000001
#define AARCH64_FEATURE_V8_2 0x00000020
#define AARCH64_FEATURE_V8_3 0x00000040
#define AARCH64_FEATURE_CRYPTO 0x00010000
#define AARCH64_FEATURE_FP 0x00020000
#define AARCH64_FEATURE_SIMD 0x00040000
#define AARCH64_FEATURE_CRC 0x00080000
#define AARCH64_FEATURE_LSE 0x00100000
#define AARCH64_FEATURE_PAN 0x00200000
#define AARCH64_FEATURE_LOR 0x00400000
#define AARCH64_FEATURE_RDMA 0x00800000
#define AARCH64_FEATURE_V8_1 0x01000000
#define AARCH64_FEATURE_F16 0x02000000
#define AARCH64_FEATURE_RAS 0x04000000
#define AARCH64_FEATURE_PROFILE 0x08000000
#define AARCH64_FEATURE_SVE 0x10000000
#define AARCH64_FEATURE_RCPC 0x20000000
#define AARCH64_FEATURE_COMPNUM 0x40000000
#define AARCH64_FEATURE_DOTPROD 0x080000000
#define AARCH64_FEATURE_F16_FML 0x1000000000ULL


#define AARCH64_ARCH_V8 AARCH64_FEATURE (AARCH64_FEATURE_V8, \
       AARCH64_FEATURE_FP \
       | AARCH64_FEATURE_SIMD)
#define AARCH64_ARCH_V8_1 AARCH64_FEATURE (AARCH64_ARCH_V8, \
       AARCH64_FEATURE_CRC \
       | AARCH64_FEATURE_V8_1 \
       | AARCH64_FEATURE_LSE \
       | AARCH64_FEATURE_PAN \
       | AARCH64_FEATURE_LOR \
       | AARCH64_FEATURE_RDMA)
#define AARCH64_ARCH_V8_2 AARCH64_FEATURE (AARCH64_ARCH_V8_1, \
       AARCH64_FEATURE_V8_2 \
       | AARCH64_FEATURE_RAS)
#define AARCH64_ARCH_V8_3 AARCH64_FEATURE (AARCH64_ARCH_V8_2, \
       AARCH64_FEATURE_V8_3 \
       | AARCH64_FEATURE_RCPC \
       | AARCH64_FEATURE_COMPNUM)
#define AARCH64_ARCH_V8_4 AARCH64_FEATURE (AARCH64_ARCH_V8_3, \
       AARCH64_FEATURE_V8_4 \
       | AARCH64_FEATURE_DOTPROD \
       | AARCH64_FEATURE_F16_FML)

#define AARCH64_ARCH_NONE AARCH64_FEATURE (0, 0)
#define AARCH64_ANY AARCH64_FEATURE (-1, 0)


typedef unsigned long long aarch64_feature_set;

#define AARCH64_CPU_HAS_ALL_FEATURES(CPU,FEAT) \
  ((~(CPU) & (FEAT)) == 0)

#define AARCH64_CPU_HAS_ANY_FEATURES(CPU,FEAT) \
  (((CPU) & (FEAT)) != 0)

#define AARCH64_CPU_HAS_FEATURE(CPU,FEAT) \
  AARCH64_CPU_HAS_ALL_FEATURES (CPU,FEAT)

#define AARCH64_MERGE_FEATURE_SETS(TARG,F1,F2) \
  do \
    { \
      (TARG) = (F1) | (F2); \
    } \
  while (0)

#define AARCH64_CLEAR_FEATURE(TARG,F1,F2) \
  do \
    { \
      (TARG) = (F1) &~ (F2); \
    } \
  while (0)

#define AARCH64_FEATURE(core,coproc) ((core) | (coproc))

enum aarch64_operand_class
{
  AARCH64_OPND_CLASS_NIL,
  AARCH64_OPND_CLASS_INT_REG,
  AARCH64_OPND_CLASS_MODIFIED_REG,
  AARCH64_OPND_CLASS_FP_REG,
  AARCH64_OPND_CLASS_SIMD_REG,
  AARCH64_OPND_CLASS_SIMD_ELEMENT,
  AARCH64_OPND_CLASS_SISD_REG,
  AARCH64_OPND_CLASS_SIMD_REGLIST,
  AARCH64_OPND_CLASS_SVE_REG,
  AARCH64_OPND_CLASS_PRED_REG,
  AARCH64_OPND_CLASS_ADDRESS,
  AARCH64_OPND_CLASS_IMMEDIATE,
  AARCH64_OPND_CLASS_SYSTEM,
  AARCH64_OPND_CLASS_COND,
};




enum aarch64_opnd
{
  AARCH64_OPND_NIL,

  AARCH64_OPND_Rd,
  AARCH64_OPND_Rn,
  AARCH64_OPND_Rm,
  AARCH64_OPND_Rt,
  AARCH64_OPND_Rt2,
  AARCH64_OPND_Rs,
  AARCH64_OPND_Ra,
  AARCH64_OPND_Rt_SYS,

  AARCH64_OPND_Rd_SP,
  AARCH64_OPND_Rn_SP,
  AARCH64_OPND_Rm_SP,
  AARCH64_OPND_PAIRREG,
  AARCH64_OPND_Rm_EXT,
  AARCH64_OPND_Rm_SFT,

  AARCH64_OPND_Fd,
  AARCH64_OPND_Fn,
  AARCH64_OPND_Fm,
  AARCH64_OPND_Fa,
  AARCH64_OPND_Ft,
  AARCH64_OPND_Ft2,

  AARCH64_OPND_Sd,
  AARCH64_OPND_Sn,
  AARCH64_OPND_Sm,

  AARCH64_OPND_Va,
  AARCH64_OPND_Vd,
  AARCH64_OPND_Vn,
  AARCH64_OPND_Vm,
  AARCH64_OPND_VdD1,
  AARCH64_OPND_VnD1,
  AARCH64_OPND_Ed,
  AARCH64_OPND_En,
  AARCH64_OPND_Em,
  AARCH64_OPND_Em16,

  AARCH64_OPND_LVn,
  AARCH64_OPND_LVt,
  AARCH64_OPND_LVt_AL,

  AARCH64_OPND_LEt,

  AARCH64_OPND_CRn,
  AARCH64_OPND_CRm,

  AARCH64_OPND_IDX,
  AARCH64_OPND_MASK,
  AARCH64_OPND_IMM_VLSL,
  AARCH64_OPND_IMM_VLSR,
  AARCH64_OPND_SIMD_IMM,
  AARCH64_OPND_SIMD_IMM_SFT,
  AARCH64_OPND_SIMD_FPIMM,
  AARCH64_OPND_SHLL_IMM,

  AARCH64_OPND_IMM0,
  AARCH64_OPND_FPIMM0,
  AARCH64_OPND_FPIMM,
  AARCH64_OPND_IMMR,
  AARCH64_OPND_IMMS,
  AARCH64_OPND_WIDTH,
  AARCH64_OPND_IMM,
  AARCH64_OPND_IMM_2,
  AARCH64_OPND_UIMM3_OP1,
  AARCH64_OPND_UIMM3_OP2,
  AARCH64_OPND_UIMM4,
  AARCH64_OPND_UIMM7,
  AARCH64_OPND_BIT_NUM,
  AARCH64_OPND_EXCEPTION,
  AARCH64_OPND_CCMP_IMM,
  AARCH64_OPND_SIMM5,
  AARCH64_OPND_NZCV,


  AARCH64_OPND_LIMM,
  AARCH64_OPND_AIMM,
  AARCH64_OPND_HALF,
  AARCH64_OPND_FBITS,
  AARCH64_OPND_IMM_MOV,
  AARCH64_OPND_IMM_ROT1,
  AARCH64_OPND_IMM_ROT2,
  AARCH64_OPND_IMM_ROT3,

  AARCH64_OPND_COND,
  AARCH64_OPND_COND1,

  AARCH64_OPND_ADDR_ADRP,
  AARCH64_OPND_ADDR_PCREL14,
  AARCH64_OPND_ADDR_PCREL19,
  AARCH64_OPND_ADDR_PCREL21,
  AARCH64_OPND_ADDR_PCREL26,

  AARCH64_OPND_ADDR_SIMPLE,
  AARCH64_OPND_ADDR_REGOFF,
  AARCH64_OPND_ADDR_SIMM7,
  AARCH64_OPND_ADDR_SIMM9,
  AARCH64_OPND_ADDR_SIMM9_2,






  AARCH64_OPND_ADDR_SIMM10,
  AARCH64_OPND_ADDR_UIMM12,
  AARCH64_OPND_SIMD_ADDR_SIMPLE,
  AARCH64_OPND_ADDR_OFFSET,
  AARCH64_OPND_SIMD_ADDR_POST,

  AARCH64_OPND_SYSREG,
  AARCH64_OPND_PSTATEFIELD,
  AARCH64_OPND_SYSREG_AT,
  AARCH64_OPND_SYSREG_DC,
  AARCH64_OPND_SYSREG_IC,
  AARCH64_OPND_SYSREG_TLBI,
  AARCH64_OPND_BARRIER,
  AARCH64_OPND_BARRIER_ISB,
  AARCH64_OPND_PRFOP,
  AARCH64_OPND_BARRIER_PSB,

  AARCH64_OPND_SVE_ADDR_RI_S4x16,
  AARCH64_OPND_SVE_ADDR_RI_S4xVL,
  AARCH64_OPND_SVE_ADDR_RI_S4x2xVL,
  AARCH64_OPND_SVE_ADDR_RI_S4x3xVL,
  AARCH64_OPND_SVE_ADDR_RI_S4x4xVL,
  AARCH64_OPND_SVE_ADDR_RI_S6xVL,
  AARCH64_OPND_SVE_ADDR_RI_S9xVL,
  AARCH64_OPND_SVE_ADDR_RI_U6,
  AARCH64_OPND_SVE_ADDR_RI_U6x2,
  AARCH64_OPND_SVE_ADDR_RI_U6x4,
  AARCH64_OPND_SVE_ADDR_RI_U6x8,
  AARCH64_OPND_SVE_ADDR_R,
  AARCH64_OPND_SVE_ADDR_RR,
  AARCH64_OPND_SVE_ADDR_RR_LSL1,
  AARCH64_OPND_SVE_ADDR_RR_LSL2,
  AARCH64_OPND_SVE_ADDR_RR_LSL3,
  AARCH64_OPND_SVE_ADDR_RX,
  AARCH64_OPND_SVE_ADDR_RX_LSL1,
  AARCH64_OPND_SVE_ADDR_RX_LSL2,
  AARCH64_OPND_SVE_ADDR_RX_LSL3,
  AARCH64_OPND_SVE_ADDR_RZ,
  AARCH64_OPND_SVE_ADDR_RZ_LSL1,
  AARCH64_OPND_SVE_ADDR_RZ_LSL2,
  AARCH64_OPND_SVE_ADDR_RZ_LSL3,
  AARCH64_OPND_SVE_ADDR_RZ_XTW_14,

  AARCH64_OPND_SVE_ADDR_RZ_XTW_22,

  AARCH64_OPND_SVE_ADDR_RZ_XTW1_14,

  AARCH64_OPND_SVE_ADDR_RZ_XTW1_22,

  AARCH64_OPND_SVE_ADDR_RZ_XTW2_14,

  AARCH64_OPND_SVE_ADDR_RZ_XTW2_22,

  AARCH64_OPND_SVE_ADDR_RZ_XTW3_14,

  AARCH64_OPND_SVE_ADDR_RZ_XTW3_22,

  AARCH64_OPND_SVE_ADDR_ZI_U5,
  AARCH64_OPND_SVE_ADDR_ZI_U5x2,
  AARCH64_OPND_SVE_ADDR_ZI_U5x4,
  AARCH64_OPND_SVE_ADDR_ZI_U5x8,
  AARCH64_OPND_SVE_ADDR_ZZ_LSL,
  AARCH64_OPND_SVE_ADDR_ZZ_SXTW,
  AARCH64_OPND_SVE_ADDR_ZZ_UXTW,
  AARCH64_OPND_SVE_AIMM,
  AARCH64_OPND_SVE_ASIMM,
  AARCH64_OPND_SVE_FPIMM8,
  AARCH64_OPND_SVE_I1_HALF_ONE,
  AARCH64_OPND_SVE_I1_HALF_TWO,
  AARCH64_OPND_SVE_I1_ZERO_ONE,
  AARCH64_OPND_SVE_IMM_ROT1,
  AARCH64_OPND_SVE_IMM_ROT2,
  AARCH64_OPND_SVE_INV_LIMM,
  AARCH64_OPND_SVE_LIMM,
  AARCH64_OPND_SVE_LIMM_MOV,
  AARCH64_OPND_SVE_PATTERN,
  AARCH64_OPND_SVE_PATTERN_SCALED,
  AARCH64_OPND_SVE_PRFOP,
  AARCH64_OPND_SVE_Pd,
  AARCH64_OPND_SVE_Pg3,
  AARCH64_OPND_SVE_Pg4_5,
  AARCH64_OPND_SVE_Pg4_10,
  AARCH64_OPND_SVE_Pg4_16,
  AARCH64_OPND_SVE_Pm,
  AARCH64_OPND_SVE_Pn,
  AARCH64_OPND_SVE_Pt,
  AARCH64_OPND_SVE_Rm,
  AARCH64_OPND_SVE_Rn_SP,
  AARCH64_OPND_SVE_SHLIMM_PRED,
  AARCH64_OPND_SVE_SHLIMM_UNPRED,
  AARCH64_OPND_SVE_SHRIMM_PRED,
  AARCH64_OPND_SVE_SHRIMM_UNPRED,
  AARCH64_OPND_SVE_SIMM5,
  AARCH64_OPND_SVE_SIMM5B,
  AARCH64_OPND_SVE_SIMM6,
  AARCH64_OPND_SVE_SIMM8,
  AARCH64_OPND_SVE_UIMM3,
  AARCH64_OPND_SVE_UIMM7,
  AARCH64_OPND_SVE_UIMM8,
  AARCH64_OPND_SVE_UIMM8_53,
  AARCH64_OPND_SVE_VZn,
  AARCH64_OPND_SVE_Vd,
  AARCH64_OPND_SVE_Vm,
  AARCH64_OPND_SVE_Vn,
  AARCH64_OPND_SVE_Za_5,
  AARCH64_OPND_SVE_Za_16,
  AARCH64_OPND_SVE_Zd,
  AARCH64_OPND_SVE_Zm_5,
  AARCH64_OPND_SVE_Zm_16,
  AARCH64_OPND_SVE_Zm3_INDEX,
  AARCH64_OPND_SVE_Zm3_22_INDEX,
  AARCH64_OPND_SVE_Zm4_INDEX,
  AARCH64_OPND_SVE_Zn,
  AARCH64_OPND_SVE_Zn_INDEX,
  AARCH64_OPND_SVE_ZnxN,
  AARCH64_OPND_SVE_Zt,
  AARCH64_OPND_SVE_ZtxN,
  AARCH64_OPND_SM3_IMM2,
};






enum aarch64_opnd_qualifier
{

  AARCH64_OPND_QLF_NIL,



  AARCH64_OPND_QLF_W,
  AARCH64_OPND_QLF_X,
  AARCH64_OPND_QLF_WSP,
  AARCH64_OPND_QLF_SP,
# 397 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
  AARCH64_OPND_QLF_S_B,
  AARCH64_OPND_QLF_S_H,
  AARCH64_OPND_QLF_S_S,
  AARCH64_OPND_QLF_S_D,
  AARCH64_OPND_QLF_S_Q,




  AARCH64_OPND_QLF_S_4B,







  AARCH64_OPND_QLF_V_4B,
  AARCH64_OPND_QLF_V_8B,
  AARCH64_OPND_QLF_V_16B,
  AARCH64_OPND_QLF_V_2H,
  AARCH64_OPND_QLF_V_4H,
  AARCH64_OPND_QLF_V_8H,
  AARCH64_OPND_QLF_V_2S,
  AARCH64_OPND_QLF_V_4S,
  AARCH64_OPND_QLF_V_1D,
  AARCH64_OPND_QLF_V_2D,
  AARCH64_OPND_QLF_V_1Q,

  AARCH64_OPND_QLF_P_Z,
  AARCH64_OPND_QLF_P_M,


  AARCH64_OPND_QLF_CR,
  AARCH64_OPND_QLF_imm_0_7,
  AARCH64_OPND_QLF_imm_0_15,
  AARCH64_OPND_QLF_imm_0_31,
  AARCH64_OPND_QLF_imm_0_63,
  AARCH64_OPND_QLF_imm_1_32,
  AARCH64_OPND_QLF_imm_1_64,



  AARCH64_OPND_QLF_LSL,
  AARCH64_OPND_QLF_MSL,



  AARCH64_OPND_QLF_RETRIEVE,
};



enum aarch64_insn_class
{
  addsub_carry,
  addsub_ext,
  addsub_imm,
  addsub_shift,
  asimdall,
  asimddiff,
  asimdelem,
  asimdext,
  asimdimm,
  asimdins,
  asimdmisc,
  asimdperm,
  asimdsame,
  asimdshf,
  asimdtbl,
  asisddiff,
  asisdelem,
  asisdlse,
  asisdlsep,
  asisdlso,
  asisdlsop,
  asisdmisc,
  asisdone,
  asisdpair,
  asisdsame,
  asisdshf,
  bitfield,
  branch_imm,
  branch_reg,
  compbranch,
  condbranch,
  condcmp_imm,
  condcmp_reg,
  condsel,
  cryptoaes,
  cryptosha2,
  cryptosha3,
  dp_1src,
  dp_2src,
  dp_3src,
  exception,
  extract,
  float2fix,
  float2int,
  floatccmp,
  floatcmp,
  floatdp1,
  floatdp2,
  floatdp3,
  floatimm,
  floatsel,
  ldst_immpost,
  ldst_immpre,
  ldst_imm9,
  ldst_imm10,
  ldst_pos,
  ldst_regoff,
  ldst_unpriv,
  ldst_unscaled,
  ldstexcl,
  ldstnapair_offs,
  ldstpair_off,
  ldstpair_indexed,
  loadlit,
  log_imm,
  log_shift,
  lse_atomic,
  movewide,
  pcreladdr,
  ic_system,
  sve_cpy,
  sve_index,
  sve_limm,
  sve_misc,
  sve_movprfx,
  sve_pred_zm,
  sve_shift_pred,
  sve_shift_unpred,
  sve_size_bhs,
  sve_size_bhsd,
  sve_size_hsd,
  sve_size_sd,
  testbranch,
  cryptosm3,
  cryptosm4,
  dotproduct,
};



enum aarch64_op
{
  OP_NIL,
  OP_STRB_POS,
  OP_LDRB_POS,
  OP_LDRSB_POS,
  OP_STRH_POS,
  OP_LDRH_POS,
  OP_LDRSH_POS,
  OP_STR_POS,
  OP_LDR_POS,
  OP_STRF_POS,
  OP_LDRF_POS,
  OP_LDRSW_POS,
  OP_PRFM_POS,

  OP_STURB,
  OP_LDURB,
  OP_LDURSB,
  OP_STURH,
  OP_LDURH,
  OP_LDURSH,
  OP_STUR,
  OP_LDUR,
  OP_STURV,
  OP_LDURV,
  OP_LDURSW,
  OP_PRFUM,

  OP_LDR_LIT,
  OP_LDRV_LIT,
  OP_LDRSW_LIT,
  OP_PRFM_LIT,

  OP_ADD,
  OP_B,
  OP_BL,

  OP_MOVN,
  OP_MOVZ,
  OP_MOVK,

  OP_MOV_IMM_LOG,
  OP_MOV_IMM_WIDE,
  OP_MOV_IMM_WIDEN,

  OP_MOV_V,

  OP_ASR_IMM,
  OP_LSR_IMM,
  OP_LSL_IMM,

  OP_BIC,

  OP_UBFX,
  OP_BFXIL,
  OP_SBFX,
  OP_SBFIZ,
  OP_BFI,
  OP_BFC,
  OP_UBFIZ,
  OP_UXTB,
  OP_UXTH,
  OP_UXTW,

  OP_CINC,
  OP_CINV,
  OP_CNEG,
  OP_CSET,
  OP_CSETM,

  OP_FCVT,
  OP_FCVTN,
  OP_FCVTN2,
  OP_FCVTL,
  OP_FCVTL2,
  OP_FCVTXN_S,

  OP_ROR_IMM,

  OP_SXTL,
  OP_SXTL2,
  OP_UXTL,
  OP_UXTL2,

  OP_MOV_P_P,
  OP_MOV_Z_P_Z,
  OP_MOV_Z_V,
  OP_MOV_Z_Z,
  OP_MOV_Z_Zi,
  OP_MOVM_P_P_P,
  OP_MOVS_P_P,
  OP_MOVZS_P_P_P,
  OP_MOVZ_P_P_P,
  OP_NOTS_P_P_P_Z,
  OP_NOT_P_P_P_Z,

  OP_FCMLA_ELEM,

  OP_TOTAL_NUM,
};


#define AARCH64_MAX_OPND_NUM 6

#define AARCH64_MAX_QLF_SEQ_NUM 10

typedef unsigned char aarch64_opnd_qualifier_t;

typedef aarch64_opnd_qualifier_t \
   aarch64_opnd_qualifier_seq_t [AARCH64_MAX_OPND_NUM];


static inline bfd_boolean
empty_qualifier_sequence_p (const aarch64_opnd_qualifier_t *qualifiers)
{
  int i;
  for (i = 0; i < AARCH64_MAX_OPND_NUM; ++i)
    if (qualifiers[i] != AARCH64_OPND_QLF_NIL)
      return FALSE;
  return TRUE;
}



struct aarch64_opcode
{

  const char *name;



  aarch64_insn opcode;





  aarch64_insn mask;


  enum aarch64_insn_class iclass;


  enum aarch64_op op;


  const aarch64_feature_set *avariant;




  enum aarch64_opnd operands[AARCH64_MAX_OPND_NUM];





  aarch64_opnd_qualifier_seq_t qualifiers_list[AARCH64_MAX_QLF_SEQ_NUM];


  uint32_t flags;



  unsigned char tied_operand;


  bfd_boolean (* verifier) (const struct aarch64_opcode *, const aarch64_insn);
};

typedef struct aarch64_opcode aarch64_opcode;


extern aarch64_opcode aarch64_opcode_table[];


#define F_ALIAS (1 << 0)
#define F_HAS_ALIAS (1 << 1)


#define F_P1 (1 << 2)
#define F_P2 (2 << 2)
#define F_P3 (3 << 2)

#define F_COND (1 << 4)

#define F_SF (1 << 5)

#define F_SIZEQ (1 << 6)

#define F_FPTYPE (1 << 7)

#define F_SSIZE (1 << 8)

#define F_T (1 << 9)

#define F_GPRSIZE_IN_Q (1 << 10)

#define F_LDS_SIZE (1 << 11)

#define F_OPD0_OPT (1 << 12)
#define F_OPD1_OPT (2 << 12)
#define F_OPD2_OPT (3 << 12)
#define F_OPD3_OPT (4 << 12)
#define F_OPD4_OPT (5 << 12)

#define F_DEFAULT(X) (((X) & 0x1f) << 15)





#define F_CONV (1 << 20)



#define F_PSEUDO (1 << 21)

#define F_MISC (1 << 22)

#define F_N (1 << 23)

#define F_OD(X) (((X) & 0x7) << 24)

#define F_LSE_SZ (1 << 27)

#define F_STRICT (1ULL << 28)

#define F_SYS_READ (1ULL << 29)

#define F_SYS_WRITE (1ULL << 30)


static inline bfd_boolean
alias_opcode_p (const aarch64_opcode *opcode)
{
  return (opcode->flags & F_ALIAS) ? TRUE : FALSE;
}

static inline bfd_boolean
opcode_has_alias (const aarch64_opcode *opcode)
{
  return (opcode->flags & F_HAS_ALIAS) ? TRUE : FALSE;
}


static inline int
opcode_priority (const aarch64_opcode *opcode)
{
  return (opcode->flags >> 2) & 0x3;
}

static inline bfd_boolean
pseudo_opcode_p (const aarch64_opcode *opcode)
{
  return (opcode->flags & F_PSEUDO) != 0lu ? TRUE : FALSE;
}

static inline bfd_boolean
optional_operand_p (const aarch64_opcode *opcode, unsigned int idx)
{
  return (((opcode->flags >> 12) & 0x7) == idx + 1)
    ? TRUE : FALSE;
}

static inline aarch64_insn
get_optional_operand_default_value (const aarch64_opcode *opcode)
{
  return (opcode->flags >> 15) & 0x1f;
}

static inline unsigned int
get_opcode_dependent_value (const aarch64_opcode *opcode)
{
  return (opcode->flags >> 24) & 0x7;
}

static inline bfd_boolean
opcode_has_special_coder (const aarch64_opcode *opcode)
{
  return (opcode->flags & (F_SF | F_LSE_SZ | F_SIZEQ | F_FPTYPE | F_SSIZE | F_T
   | F_GPRSIZE_IN_Q | F_LDS_SIZE | F_MISC | F_N | F_COND)) ? TRUE
    : FALSE;
}

struct aarch64_name_value_pair
{
  const char * name;
  aarch64_insn value;
};

extern const struct aarch64_name_value_pair aarch64_operand_modifiers [];
extern const struct aarch64_name_value_pair aarch64_barrier_options [16];
extern const struct aarch64_name_value_pair aarch64_prfops [32];
extern const struct aarch64_name_value_pair aarch64_hint_options [];

typedef struct
{
  const char * name;
  aarch64_insn value;
  uint32_t flags;
} aarch64_sys_reg;

extern const aarch64_sys_reg aarch64_sys_regs [];
extern const aarch64_sys_reg aarch64_pstatefields [];
extern bfd_boolean aarch64_sys_reg_deprecated_p (const aarch64_sys_reg *);
extern bfd_boolean aarch64_sys_reg_supported_p (const aarch64_feature_set,
      const aarch64_sys_reg *);
extern bfd_boolean aarch64_pstatefield_supported_p (const aarch64_feature_set,
          const aarch64_sys_reg *);

typedef struct
{
  const char *name;
  uint32_t value;
  uint32_t flags ;
} aarch64_sys_ins_reg;

extern bfd_boolean aarch64_sys_ins_reg_has_xt (const aarch64_sys_ins_reg *);
extern bfd_boolean
aarch64_sys_ins_reg_supported_p (const aarch64_feature_set,
     const aarch64_sys_ins_reg *);

extern const aarch64_sys_ins_reg aarch64_sys_regs_ic [];
extern const aarch64_sys_ins_reg aarch64_sys_regs_dc [];
extern const aarch64_sys_ins_reg aarch64_sys_regs_at [];
extern const aarch64_sys_ins_reg aarch64_sys_regs_tlbi [];



enum aarch64_modifier_kind
{
  AARCH64_MOD_NONE,
  AARCH64_MOD_MSL,
  AARCH64_MOD_ROR,
  AARCH64_MOD_ASR,
  AARCH64_MOD_LSR,
  AARCH64_MOD_LSL,
  AARCH64_MOD_UXTB,
  AARCH64_MOD_UXTH,
  AARCH64_MOD_UXTW,
  AARCH64_MOD_UXTX,
  AARCH64_MOD_SXTB,
  AARCH64_MOD_SXTH,
  AARCH64_MOD_SXTW,
  AARCH64_MOD_SXTX,
  AARCH64_MOD_MUL,
  AARCH64_MOD_MUL_VL,
};

bfd_boolean
aarch64_extend_operator_p (enum aarch64_modifier_kind);

enum aarch64_modifier_kind
aarch64_get_operand_modifier (const struct aarch64_name_value_pair *);


typedef struct
{


  const char *names[4];
  aarch64_insn value;
} aarch64_cond;

extern const aarch64_cond aarch64_conds[16];

const aarch64_cond* get_cond_from_value (aarch64_insn value);
const aarch64_cond* get_inverted_cond (const aarch64_cond *cond);



struct aarch64_opnd_info
{
  enum aarch64_opnd type;
  aarch64_opnd_qualifier_t qualifier;
  int idx;

  union
    {
      struct
 {
   unsigned regno;
 } reg;
      struct
 {
   unsigned int regno;
   int64_t index;
 } reglane;

      struct
 {
   unsigned first_regno : 5;
   unsigned num_regs : 3;

   unsigned has_index : 1;

   int64_t index;
 } reglist;

      struct
 {
   int64_t value;
   unsigned is_fp : 1;
 } imm;

      struct
 {
   unsigned base_regno;
   struct
     {
       union
  {
    int imm;
    unsigned regno;
  };
       unsigned is_reg;
     } offset;
   unsigned pcrel : 1;
   unsigned writeback : 1;
   unsigned preind : 1;
   unsigned postind : 1;
 } addr;

      struct
 {

   aarch64_insn value;


   uint32_t flags;
 } sysreg;

      const aarch64_cond *cond;

      aarch64_insn pstatefield;
      const aarch64_sys_ins_reg *sysins_op;
      const struct aarch64_name_value_pair *barrier;
      const struct aarch64_name_value_pair *hint_option;
      const struct aarch64_name_value_pair *prfop;
    };



  struct
    {
      enum aarch64_modifier_kind kind;
      unsigned operator_present: 1;

      unsigned amount_present: 1;
      int64_t amount;
    } shifter;

  unsigned skip:1;







  unsigned present:1;

};

typedef struct aarch64_opnd_info aarch64_opnd_info;
# 1020 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
struct aarch64_inst
{

  aarch64_insn value;


  const aarch64_opcode *opcode;


  const aarch64_cond *cond;


  aarch64_opnd_info operands[AARCH64_MAX_OPND_NUM];
};

typedef struct aarch64_inst aarch64_inst;
# 1089 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
enum aarch64_operand_error_kind
{
  AARCH64_OPDE_NIL,
  AARCH64_OPDE_RECOVERABLE,
  AARCH64_OPDE_SYNTAX_ERROR,
  AARCH64_OPDE_FATAL_SYNTAX_ERROR,
  AARCH64_OPDE_INVALID_VARIANT,
  AARCH64_OPDE_UNTIED_OPERAND,
  AARCH64_OPDE_OUT_OF_RANGE,
  AARCH64_OPDE_UNALIGNED,
  AARCH64_OPDE_REG_LIST,
  AARCH64_OPDE_OTHER_ERROR
};


struct aarch64_operand_error
{
  enum aarch64_operand_error_kind kind;
  int index;
  const char *error;
  int data[3];
  bfd_boolean non_fatal;
};

typedef struct aarch64_operand_error aarch64_operand_error;



extern int
aarch64_opcode_encode (const aarch64_opcode *, const aarch64_inst *,
         aarch64_insn *, aarch64_opnd_qualifier_t *,
         aarch64_operand_error *);

extern const aarch64_opcode *
aarch64_replace_opcode (struct aarch64_inst *,
   const aarch64_opcode *);




extern const aarch64_opcode *
aarch64_get_opcode (enum aarch64_op);


extern void
aarch64_print_operand (char *, size_t, bfd_vma, const aarch64_opcode *,
         const aarch64_opnd_info *, int, int *, bfd_vma *,
         char **);



extern int
aarch64_operand_index (const enum aarch64_opnd *, enum aarch64_opnd);

extern aarch64_opnd_qualifier_t
aarch64_get_expected_qualifier (const aarch64_opnd_qualifier_seq_t *, int,
    const aarch64_opnd_qualifier_t, int);

extern int
aarch64_num_of_operands (const aarch64_opcode *);

extern int
aarch64_stack_pointer_p (const aarch64_opnd_info *);

extern int
aarch64_zero_register_p (const aarch64_opnd_info *);

extern int
aarch64_decode_insn (aarch64_insn, aarch64_inst *, bfd_boolean,
       aarch64_operand_error *errors);



extern unsigned char
aarch64_get_qualifier_esize (aarch64_opnd_qualifier_t);

extern enum aarch64_operand_class
aarch64_get_operand_class (enum aarch64_opnd);

extern const char *
aarch64_get_operand_name (enum aarch64_opnd);

extern const char *
aarch64_get_operand_desc (enum aarch64_opnd);

extern bfd_boolean
aarch64_sve_dupm_mov_immediate_p (uint64_t, int);

#ifdef DEBUG_AARCH64
extern int debug_dump;

extern void
aarch64_verbose (const char *, ...) __attribute__ ((format (printf, 1, 2)));

#define DEBUG_TRACE(M,...) \
  { \
    if (debug_dump) \
      aarch64_verbose ("%s: " M ".", __func__, ##__VA_ARGS__); \
  }

#define DEBUG_TRACE_IF(C,M,...) \
  { \
    if (debug_dump && (C)) \
      aarch64_verbose ("%s: " M ".", __func__, ##__VA_ARGS__); \
  }
#else
#define DEBUG_TRACE(M,...) ;
#define DEBUG_TRACE_IF(C,M,...) ;
#endif

extern const char *const aarch64_sve_pattern_array[32];
extern const char *const aarch64_sve_prfop_array[16];

#ifdef __cplusplus
}
#endif

#endif
