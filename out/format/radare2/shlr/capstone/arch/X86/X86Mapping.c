# 1 "project/radare2/shlr/capstone/arch/X86/X86Mapping.c"



#ifdef CAPSTONE_HAS_X86

#if defined(CAPSTONE_HAS_OSXKERNEL)
#include <Availability.h>
#endif

#include <string.h>
#ifndef CAPSTONE_HAS_OSXKERNEL
#include <stdlib.h>
#endif

#include "X86Mapping.h"
#include "X86DisassemblerDecoder.h"

#include "../../utils.h"


const uint64_t arch_masks[9] = {
 0, 0xff,
 0xffff,
 0,
 0xffffffff,
 0, 0, 0,
 0xffffffffffffffffLL
};

static const x86_reg sib_base_map[] = {
 X86_REG_INVALID,
#define ENTRY(x) X86_REG_ ##x,
 ALL_SIB_BASES
#undef ENTRY
};




enum {
 X86_REG_BX_SI = 500,
 X86_REG_BX_DI = 501,
 X86_REG_BP_SI = 502,
 X86_REG_BP_DI = 503,
 X86_REG_sib = 504,
 X86_REG_sib64 = 505
};

static const x86_reg sib_index_map[] = {
 X86_REG_INVALID,
#define ENTRY(x) X86_REG_ ##x,
 ALL_EA_BASES
 REGS_XMM
 REGS_YMM
 REGS_ZMM
#undef ENTRY
};

static const x86_reg segment_map[] = {
 X86_REG_INVALID,
 X86_REG_CS,
 X86_REG_SS,
 X86_REG_DS,
 X86_REG_ES,
 X86_REG_FS,
 X86_REG_GS,
};

x86_reg x86_map_sib_base(int r)
{
 return sib_base_map[r];
}

x86_reg x86_map_sib_index(int r)
{
 return sib_index_map[r];
}

x86_reg x86_map_segment(int r)
{
 return segment_map[r];
}

#ifndef CAPSTONE_DIET
static const name_map reg_name_maps[] = {
 { X86_REG_INVALID, NULL },

 { X86_REG_AH, "ah" },
 { X86_REG_AL, "al" },
 { X86_REG_AX, "ax" },
 { X86_REG_BH, "bh" },
 { X86_REG_BL, "bl" },
 { X86_REG_BP, "bp" },
 { X86_REG_BPL, "bpl" },
 { X86_REG_BX, "bx" },
 { X86_REG_CH, "ch" },
 { X86_REG_CL, "cl" },
 { X86_REG_CS, "cs" },
 { X86_REG_CX, "cx" },
 { X86_REG_DH, "dh" },
 { X86_REG_DI, "di" },
 { X86_REG_DIL, "dil" },
 { X86_REG_DL, "dl" },
 { X86_REG_DS, "ds" },
 { X86_REG_DX, "dx" },
 { X86_REG_EAX, "eax" },
 { X86_REG_EBP, "ebp" },
 { X86_REG_EBX, "ebx" },
 { X86_REG_ECX, "ecx" },
 { X86_REG_EDI, "edi" },
 { X86_REG_EDX, "edx" },
 { X86_REG_EFLAGS, "flags" },
 { X86_REG_EIP, "eip" },
 { X86_REG_EIZ, "eiz" },
 { X86_REG_ES, "es" },
 { X86_REG_ESI, "esi" },
 { X86_REG_ESP, "esp" },
 { X86_REG_FPSW, "fpsw" },
 { X86_REG_FS, "fs" },
 { X86_REG_GS, "gs" },
 { X86_REG_IP, "ip" },
 { X86_REG_RAX, "rax" },
 { X86_REG_RBP, "rbp" },
 { X86_REG_RBX, "rbx" },
 { X86_REG_RCX, "rcx" },
 { X86_REG_RDI, "rdi" },
 { X86_REG_RDX, "rdx" },
 { X86_REG_RIP, "rip" },
 { X86_REG_RIZ, "riz" },
 { X86_REG_RSI, "rsi" },
 { X86_REG_RSP, "rsp" },
 { X86_REG_SI, "si" },
 { X86_REG_SIL, "sil" },
 { X86_REG_SP, "sp" },
 { X86_REG_SPL, "spl" },
 { X86_REG_SS, "ss" },
 { X86_REG_CR0, "cr0" },
 { X86_REG_CR1, "cr1" },
 { X86_REG_CR2, "cr2" },
 { X86_REG_CR3, "cr3" },
 { X86_REG_CR4, "cr4" },
 { X86_REG_CR5, "cr5" },
 { X86_REG_CR6, "cr6" },
 { X86_REG_CR7, "cr7" },
 { X86_REG_CR8, "cr8" },
 { X86_REG_CR9, "cr9" },
 { X86_REG_CR10, "cr10" },
 { X86_REG_CR11, "cr11" },
 { X86_REG_CR12, "cr12" },
 { X86_REG_CR13, "cr13" },
 { X86_REG_CR14, "cr14" },
 { X86_REG_CR15, "cr15" },
 { X86_REG_DR0, "dr0" },
 { X86_REG_DR1, "dr1" },
 { X86_REG_DR2, "dr2" },
 { X86_REG_DR3, "dr3" },
 { X86_REG_DR4, "dr4" },
 { X86_REG_DR5, "dr5" },
 { X86_REG_DR6, "dr6" },
 { X86_REG_DR7, "dr7" },
 { X86_REG_DR8, "dr8" },
 { X86_REG_DR9, "dr9" },
 { X86_REG_DR10, "dr10" },
 { X86_REG_DR11, "dr11" },
 { X86_REG_DR12, "dr12" },
 { X86_REG_DR13, "dr13" },
 { X86_REG_DR14, "dr14" },
 { X86_REG_DR15, "dr15" },
 { X86_REG_FP0, "fp0" },
 { X86_REG_FP1, "fp1" },
 { X86_REG_FP2, "fp2" },
 { X86_REG_FP3, "fp3" },
 { X86_REG_FP4, "fp4" },
 { X86_REG_FP5, "fp5" },
 { X86_REG_FP6, "fp6" },
 { X86_REG_FP7, "fp7" },
 { X86_REG_K0, "k0" },
 { X86_REG_K1, "k1" },
 { X86_REG_K2, "k2" },
 { X86_REG_K3, "k3" },
 { X86_REG_K4, "k4" },
 { X86_REG_K5, "k5" },
 { X86_REG_K6, "k6" },
 { X86_REG_K7, "k7" },
 { X86_REG_MM0, "mm0" },
 { X86_REG_MM1, "mm1" },
 { X86_REG_MM2, "mm2" },
 { X86_REG_MM3, "mm3" },
 { X86_REG_MM4, "mm4" },
 { X86_REG_MM5, "mm5" },
 { X86_REG_MM6, "mm6" },
 { X86_REG_MM7, "mm7" },
 { X86_REG_R8, "r8" },
 { X86_REG_R9, "r9" },
 { X86_REG_R10, "r10" },
 { X86_REG_R11, "r11" },
 { X86_REG_R12, "r12" },
 { X86_REG_R13, "r13" },
 { X86_REG_R14, "r14" },
 { X86_REG_R15, "r15" },
 { X86_REG_ST0, "st(0)" },
 { X86_REG_ST1, "st(1)" },
 { X86_REG_ST2, "st(2)" },
 { X86_REG_ST3, "st(3)" },
 { X86_REG_ST4, "st(4)" },
 { X86_REG_ST5, "st(5)" },
 { X86_REG_ST6, "st(6)" },
 { X86_REG_ST7, "st(7)" },
 { X86_REG_XMM0, "xmm0" },
 { X86_REG_XMM1, "xmm1" },
 { X86_REG_XMM2, "xmm2" },
 { X86_REG_XMM3, "xmm3" },
 { X86_REG_XMM4, "xmm4" },
 { X86_REG_XMM5, "xmm5" },
 { X86_REG_XMM6, "xmm6" },
 { X86_REG_XMM7, "xmm7" },
 { X86_REG_XMM8, "xmm8" },
 { X86_REG_XMM9, "xmm9" },
 { X86_REG_XMM10, "xmm10" },
 { X86_REG_XMM11, "xmm11" },
 { X86_REG_XMM12, "xmm12" },
 { X86_REG_XMM13, "xmm13" },
 { X86_REG_XMM14, "xmm14" },
 { X86_REG_XMM15, "xmm15" },
 { X86_REG_XMM16, "xmm16" },
 { X86_REG_XMM17, "xmm17" },
 { X86_REG_XMM18, "xmm18" },
 { X86_REG_XMM19, "xmm19" },
 { X86_REG_XMM20, "xmm20" },
 { X86_REG_XMM21, "xmm21" },
 { X86_REG_XMM22, "xmm22" },
 { X86_REG_XMM23, "xmm23" },
 { X86_REG_XMM24, "xmm24" },
 { X86_REG_XMM25, "xmm25" },
 { X86_REG_XMM26, "xmm26" },
 { X86_REG_XMM27, "xmm27" },
 { X86_REG_XMM28, "xmm28" },
 { X86_REG_XMM29, "xmm29" },
 { X86_REG_XMM30, "xmm30" },
 { X86_REG_XMM31, "xmm31" },
 { X86_REG_YMM0, "ymm0" },
 { X86_REG_YMM1, "ymm1" },
 { X86_REG_YMM2, "ymm2" },
 { X86_REG_YMM3, "ymm3" },
 { X86_REG_YMM4, "ymm4" },
 { X86_REG_YMM5, "ymm5" },
 { X86_REG_YMM6, "ymm6" },
 { X86_REG_YMM7, "ymm7" },
 { X86_REG_YMM8, "ymm8" },
 { X86_REG_YMM9, "ymm9" },
 { X86_REG_YMM10, "ymm10" },
 { X86_REG_YMM11, "ymm11" },
 { X86_REG_YMM12, "ymm12" },
 { X86_REG_YMM13, "ymm13" },
 { X86_REG_YMM14, "ymm14" },
 { X86_REG_YMM15, "ymm15" },
 { X86_REG_YMM16, "ymm16" },
 { X86_REG_YMM17, "ymm17" },
 { X86_REG_YMM18, "ymm18" },
 { X86_REG_YMM19, "ymm19" },
 { X86_REG_YMM20, "ymm20" },
 { X86_REG_YMM21, "ymm21" },
 { X86_REG_YMM22, "ymm22" },
 { X86_REG_YMM23, "ymm23" },
 { X86_REG_YMM24, "ymm24" },
 { X86_REG_YMM25, "ymm25" },
 { X86_REG_YMM26, "ymm26" },
 { X86_REG_YMM27, "ymm27" },
 { X86_REG_YMM28, "ymm28" },
 { X86_REG_YMM29, "ymm29" },
 { X86_REG_YMM30, "ymm30" },
 { X86_REG_YMM31, "ymm31" },
 { X86_REG_ZMM0, "zmm0" },
 { X86_REG_ZMM1, "zmm1" },
 { X86_REG_ZMM2, "zmm2" },
 { X86_REG_ZMM3, "zmm3" },
 { X86_REG_ZMM4, "zmm4" },
 { X86_REG_ZMM5, "zmm5" },
 { X86_REG_ZMM6, "zmm6" },
 { X86_REG_ZMM7, "zmm7" },
 { X86_REG_ZMM8, "zmm8" },
 { X86_REG_ZMM9, "zmm9" },
 { X86_REG_ZMM10, "zmm10" },
 { X86_REG_ZMM11, "zmm11" },
 { X86_REG_ZMM12, "zmm12" },
 { X86_REG_ZMM13, "zmm13" },
 { X86_REG_ZMM14, "zmm14" },
 { X86_REG_ZMM15, "zmm15" },
 { X86_REG_ZMM16, "zmm16" },
 { X86_REG_ZMM17, "zmm17" },
 { X86_REG_ZMM18, "zmm18" },
 { X86_REG_ZMM19, "zmm19" },
 { X86_REG_ZMM20, "zmm20" },
 { X86_REG_ZMM21, "zmm21" },
 { X86_REG_ZMM22, "zmm22" },
 { X86_REG_ZMM23, "zmm23" },
 { X86_REG_ZMM24, "zmm24" },
 { X86_REG_ZMM25, "zmm25" },
 { X86_REG_ZMM26, "zmm26" },
 { X86_REG_ZMM27, "zmm27" },
 { X86_REG_ZMM28, "zmm28" },
 { X86_REG_ZMM29, "zmm29" },
 { X86_REG_ZMM30, "zmm30" },
 { X86_REG_ZMM31, "zmm31" },
 { X86_REG_R8B, "r8b" },
 { X86_REG_R9B, "r9b" },
 { X86_REG_R10B, "r10b" },
 { X86_REG_R11B, "r11b" },
 { X86_REG_R12B, "r12b" },
 { X86_REG_R13B, "r13b" },
 { X86_REG_R14B, "r14b" },
 { X86_REG_R15B, "r15b" },
 { X86_REG_R8D, "r8d" },
 { X86_REG_R9D, "r9d" },
 { X86_REG_R10D, "r10d" },
 { X86_REG_R11D, "r11d" },
 { X86_REG_R12D, "r12d" },
 { X86_REG_R13D, "r13d" },
 { X86_REG_R14D, "r14d" },
 { X86_REG_R15D, "r15d" },
 { X86_REG_R8W, "r8w" },
 { X86_REG_R9W, "r9w" },
 { X86_REG_R10W, "r10w" },
 { X86_REG_R11W, "r11w" },
 { X86_REG_R12W, "r12w" },
 { X86_REG_R13W, "r13w" },
 { X86_REG_R14W, "r14w" },
 { X86_REG_R15W, "r15w" },

 { X86_REG_BND0, "bnd0" },
 { X86_REG_BND1, "bnd1" },
 { X86_REG_BND2, "bnd2" },
 { X86_REG_BND3, "bnd3" },
};
#endif


const uint8_t regsize_map_32 [] = {
 0,
 1,
 1,
 2,
 1,
 1,
 2,
 1,
 2,
 1,
 1,
 2,
 2,
 1,
 2,
 1,
 1,
 2,
 2,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 2,
 4,
 4,
 10,
 2,
 2,
 2,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 2,
 1,
 2,
 1,
 2,
 4,
 4,
 4,
 4,
 4,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 10,
 10,
 10,
 10,
 10,
 10,
 10,
 10,
 2,
 2,
 2,
 2,
 2,
 2,
 2,
 2,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 10,
 10,
 10,
 10,
 10,
 10,
 10,
 10,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 1,
 1,
 1,
 1,
 1,
 1,
 1,
 1,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 2,
 2,
 2,
 2,
 2,
 2,
 2,
 2,
 16,
 16,
 16,
 16,
};


const uint8_t regsize_map_64 [] = {
 0,
 1,
 1,
 2,
 1,
 1,
 2,
 1,
 2,
 1,
 1,
 2,
 2,
 1,
 2,
 1,
 1,
 2,
 2,
 4,
 4,
 4,
 4,
 4,
 4,
 8,
 4,
 4,
 2,
 4,
 4,
 10,
 2,
 2,
 2,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 2,
 1,
 2,
 1,
 2,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 10,
 10,
 10,
 10,
 10,
 10,
 10,
 10,
 2,
 2,
 2,
 2,
 2,
 2,
 2,
 2,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 10,
 10,
 10,
 10,
 10,
 10,
 10,
 10,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 16,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 32,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 64,
 1,
 1,
 1,
 1,
 1,
 1,
 1,
 1,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 2,
 2,
 2,
 2,
 2,
 2,
 2,
 2,
 16,
 16,
 16,
 16,
};

const char *X86_reg_name(csh handle, unsigned int reg)
{
#ifndef CAPSTONE_DIET
 cs_struct *ud = (cs_struct *)handle;

 if (reg >= ARR_SIZE(reg_name_maps))
  return NULL;

 if (reg == X86_REG_EFLAGS) {
  if (ud->mode & CS_MODE_32)
   return "eflags";
  if (ud->mode & CS_MODE_64)
   return "rflags";
 }

 return reg_name_maps[reg].name;
#else
 return NULL;
#endif
}

#ifndef CAPSTONE_DIET
static const char * const insn_name_maps[] = {
 NULL,
#ifndef CAPSTONE_X86_REDUCE
#include "X86MappingInsnName.inc"
#else
#include "X86MappingInsnName_reduce.inc"
#endif
};
#endif


const char *X86_insn_name(csh handle, unsigned int id)
{
#ifndef CAPSTONE_DIET
 if (id >= ARR_SIZE(insn_name_maps))
  return NULL;

 return insn_name_maps[id];
#else
 return NULL;
#endif
}

#ifndef CAPSTONE_DIET
static const name_map group_name_maps[] = {

 { X86_GRP_INVALID, NULL },
 { X86_GRP_JUMP, "jump" },
 { X86_GRP_CALL, "call" },
 { X86_GRP_RET, "ret" },
 { X86_GRP_INT, "int" },
 { X86_GRP_IRET, "iret" },
 { X86_GRP_PRIVILEGE, "privilege" },
 { X86_GRP_BRANCH_RELATIVE, "branch_relative" },


 { X86_GRP_VM, "vm" },
 { X86_GRP_3DNOW, "3dnow" },
 { X86_GRP_AES, "aes" },
 { X86_GRP_ADX, "adx" },
 { X86_GRP_AVX, "avx" },
 { X86_GRP_AVX2, "avx2" },
 { X86_GRP_AVX512, "avx512" },
 { X86_GRP_BMI, "bmi" },
 { X86_GRP_BMI2, "bmi2" },
 { X86_GRP_CMOV, "cmov" },
 { X86_GRP_F16C, "fc16" },
 { X86_GRP_FMA, "fma" },
 { X86_GRP_FMA4, "fma4" },
 { X86_GRP_FSGSBASE, "fsgsbase" },
 { X86_GRP_HLE, "hle" },
 { X86_GRP_MMX, "mmx" },
 { X86_GRP_MODE32, "mode32" },
 { X86_GRP_MODE64, "mode64" },
 { X86_GRP_RTM, "rtm" },
 { X86_GRP_SHA, "sha" },
 { X86_GRP_SSE1, "sse1" },
 { X86_GRP_SSE2, "sse2" },
 { X86_GRP_SSE3, "sse3" },
 { X86_GRP_SSE41, "sse41" },
 { X86_GRP_SSE42, "sse42" },
 { X86_GRP_SSE4A, "sse4a" },
 { X86_GRP_SSSE3, "ssse3" },
 { X86_GRP_PCLMUL, "pclmul" },
 { X86_GRP_XOP, "xop" },
 { X86_GRP_CDI, "cdi" },
 { X86_GRP_ERI, "eri" },
 { X86_GRP_TBM, "tbm" },
 { X86_GRP_16BITMODE, "16bitmode" },
 { X86_GRP_NOT64BITMODE, "not64bitmode" },
 { X86_GRP_SGX, "sgx" },
 { X86_GRP_DQI, "dqi" },
 { X86_GRP_BWI, "bwi" },
 { X86_GRP_PFI, "pfi" },
 { X86_GRP_VLX, "vlx" },
 { X86_GRP_SMAP, "smap" },
 { X86_GRP_NOVLX, "novlx" },
 { X86_GRP_FPU, "fpu" },
};
#endif

const char *X86_group_name(csh handle, unsigned int id)
{
#ifndef CAPSTONE_DIET
 return id2name(group_name_maps, ARR_SIZE(group_name_maps), id);
#else
 return NULL;
#endif
}

#define GET_INSTRINFO_ENUM 
#ifdef CAPSTONE_X86_REDUCE
#include "X86GenInstrInfo_reduce.inc"

const insn_map_x86 insns[] = {
#include "X86MappingInsn_reduce.inc"
};
#else
#include "X86GenInstrInfo.inc"

const insn_map_x86 insns[] = {
#include "X86MappingInsn.inc"
};
#endif

#ifndef CAPSTONE_DIET

static void arr_replace(uint16_t *arr, uint8_t max, x86_reg r1, x86_reg r2)
{
 uint8_t i;

 for(i = 0; i < max; i++) {
  if (arr[i] == r1) {
   arr[i] = r2;
   break;
  }
 }
}
#endif



unsigned int find_insn(unsigned int id)
{

 unsigned int left, right, m;
 unsigned int max = ARR_SIZE(insns);

 right = max - 1;

 if (id < insns[0].id || id > insns[right].id)

  return -1;

 left = 0;

 while(left <= right) {
  m = (left + right) / 2;
  if (id == insns[m].id) {
   return m;
  }

  if (id < insns[m].id)
   right = m - 1;
  else
   left = m + 1;
 }



 return -1;
}


void X86_get_insn_id(cs_struct *h, cs_insn *insn, unsigned int id)
{
 unsigned int i = find_insn(id);
 if (i != -1) {
  insn->id = insns[i].mapid;

  if (h->detail) {
#ifndef CAPSTONE_DIET
   memcpy(insn->detail->regs_read, insns[i].regs_use, sizeof(insns[i].regs_use));
   insn->detail->regs_read_count = (uint8_t)count_positive(insns[i].regs_use);


   switch(id) {
    default:
     memcpy(insn->detail->regs_write, insns[i].regs_mod, sizeof(insns[i].regs_mod));
     insn->detail->regs_write_count = (uint8_t)count_positive(insns[i].regs_mod);
     break;
    case X86_RDTSC:
     if (h->mode == CS_MODE_64) {
      memcpy(insn->detail->regs_write, insns[i].regs_mod, sizeof(insns[i].regs_mod));
      insn->detail->regs_write_count = (uint8_t)count_positive(insns[i].regs_mod);
     } else {
      insn->detail->regs_write[0] = X86_REG_EAX;
      insn->detail->regs_write[1] = X86_REG_EDX;
      insn->detail->regs_write_count = 2;
     }
     break;
    case X86_RDTSCP:
     if (h->mode == CS_MODE_64) {
      memcpy(insn->detail->regs_write, insns[i].regs_mod, sizeof(insns[i].regs_mod));
      insn->detail->regs_write_count = (uint8_t)count_positive(insns[i].regs_mod);
     } else {
      insn->detail->regs_write[0] = X86_REG_EAX;
      insn->detail->regs_write[1] = X86_REG_ECX;
      insn->detail->regs_write[2] = X86_REG_EDX;
      insn->detail->regs_write_count = 3;
     }
     break;
   }

   switch(insn->id) {
    default:
     break;

    case X86_INS_LOOP:
    case X86_INS_LOOPE:
    case X86_INS_LOOPNE:
     switch(h->mode) {
      default: break;
      case CS_MODE_16:
         insn->detail->regs_read[0] = X86_REG_CX;
         insn->detail->regs_read_count = 1;
         insn->detail->regs_write[0] = X86_REG_CX;
         insn->detail->regs_write_count = 1;
         break;
      case CS_MODE_32:
         insn->detail->regs_read[0] = X86_REG_ECX;
         insn->detail->regs_read_count = 1;
         insn->detail->regs_write[0] = X86_REG_ECX;
         insn->detail->regs_write_count = 1;
         break;
      case CS_MODE_64:
         insn->detail->regs_read[0] = X86_REG_RCX;
         insn->detail->regs_read_count = 1;
         insn->detail->regs_write[0] = X86_REG_RCX;
         insn->detail->regs_write_count = 1;
         break;
     }


     if (insn->id != X86_INS_LOOP) {
      insn->detail->regs_read[1] = X86_REG_EFLAGS;
      insn->detail->regs_read_count = 2;
     }

     break;

    case X86_INS_LODSB:
    case X86_INS_LODSD:
    case X86_INS_LODSQ:
    case X86_INS_LODSW:
     switch(h->mode) {
      default:
       break;
      case CS_MODE_16:
       arr_replace(insn->detail->regs_read, insn->detail->regs_read_count, X86_REG_ESI, X86_REG_SI);
       arr_replace(insn->detail->regs_write, insn->detail->regs_write_count, X86_REG_ESI, X86_REG_SI);
       break;
      case CS_MODE_64:
       arr_replace(insn->detail->regs_read, insn->detail->regs_read_count, X86_REG_ESI, X86_REG_RSI);
       arr_replace(insn->detail->regs_write, insn->detail->regs_write_count, X86_REG_ESI, X86_REG_RSI);
       break;
     }
     break;

    case X86_INS_SCASB:
    case X86_INS_SCASW:
    case X86_INS_SCASQ:
    case X86_INS_STOSB:
    case X86_INS_STOSD:
    case X86_INS_STOSQ:
    case X86_INS_STOSW:
     switch(h->mode) {
      default:
       break;
      case CS_MODE_16:
       arr_replace(insn->detail->regs_read, insn->detail->regs_read_count, X86_REG_EDI, X86_REG_DI);
       arr_replace(insn->detail->regs_write, insn->detail->regs_write_count, X86_REG_EDI, X86_REG_DI);
       break;
      case CS_MODE_64:
       arr_replace(insn->detail->regs_read, insn->detail->regs_read_count, X86_REG_EDI, X86_REG_RDI);
       arr_replace(insn->detail->regs_write, insn->detail->regs_write_count, X86_REG_EDI, X86_REG_RDI);
       break;
     }
     break;

    case X86_INS_CMPSB:
    case X86_INS_CMPSD:
    case X86_INS_CMPSQ:
    case X86_INS_CMPSW:
    case X86_INS_MOVSB:
    case X86_INS_MOVSW:
    case X86_INS_MOVSD:
    case X86_INS_MOVSQ:
     switch(h->mode) {
      default:
       break;
      case CS_MODE_16:
       arr_replace(insn->detail->regs_read, insn->detail->regs_read_count, X86_REG_EDI, X86_REG_DI);
       arr_replace(insn->detail->regs_write, insn->detail->regs_write_count, X86_REG_EDI, X86_REG_DI);
       arr_replace(insn->detail->regs_read, insn->detail->regs_read_count, X86_REG_ESI, X86_REG_SI);
       arr_replace(insn->detail->regs_write, insn->detail->regs_write_count, X86_REG_ESI, X86_REG_SI);
       break;
      case CS_MODE_64:
       arr_replace(insn->detail->regs_read, insn->detail->regs_read_count, X86_REG_EDI, X86_REG_RDI);
       arr_replace(insn->detail->regs_write, insn->detail->regs_write_count, X86_REG_EDI, X86_REG_RDI);
       arr_replace(insn->detail->regs_read, insn->detail->regs_read_count, X86_REG_ESI, X86_REG_RSI);
       arr_replace(insn->detail->regs_write, insn->detail->regs_write_count, X86_REG_ESI, X86_REG_RSI);
       break;
     }
     break;

    case X86_INS_RET:
     switch(h->mode) {
      case CS_MODE_16:
       insn->detail->regs_write[0] = X86_REG_SP;
       insn->detail->regs_read[0] = X86_REG_SP;
       break;
      case CS_MODE_32:
       insn->detail->regs_write[0] = X86_REG_ESP;
       insn->detail->regs_read[0] = X86_REG_ESP;
       break;
      default:
       insn->detail->regs_write[0] = X86_REG_RSP;
       insn->detail->regs_read[0] = X86_REG_RSP;
       break;
     }
     insn->detail->regs_write_count = 1;
     insn->detail->regs_read_count = 1;
     break;
   }

   memcpy(insn->detail->groups, insns[i].groups, sizeof(insns[i].groups));
   insn->detail->groups_count = (uint8_t)count_positive8(insns[i].groups);

   if (insns[i].branch || insns[i].indirect_branch) {

    insn->detail->groups[insn->detail->groups_count] = X86_GRP_JUMP;
    insn->detail->groups_count++;
   }

   switch (insns[i].id) {
    case X86_OUT8ir:
    case X86_OUT16ir:
    case X86_OUT32ir:
     if (insn->detail->x86.operands[0].imm == -78) {


      insn->detail->groups[insn->detail->groups_count] = X86_GRP_INT;
      insn->detail->groups_count++;
     }
     break;

    default:
     break;
   }
#endif
  }
 }
}




struct insn_reg {
 uint16_t insn;
 x86_reg reg;
 enum cs_ac_type access;
};

struct insn_reg2 {
 uint16_t insn;
 x86_reg reg1, reg2;
 enum cs_ac_type access1, access2;
};

static const struct insn_reg insn_regs_att[] = {
 { X86_INSB, X86_REG_DX, CS_AC_READ },
 { X86_INSL, X86_REG_DX, CS_AC_READ },
 { X86_INSW, X86_REG_DX, CS_AC_READ },
 { X86_MOV16o16a, X86_REG_AX, CS_AC_READ },
 { X86_MOV16o32a, X86_REG_AX, CS_AC_READ },
 { X86_MOV16o64a, X86_REG_AX, CS_AC_READ },
 { X86_MOV32o16a, X86_REG_EAX, CS_AC_READ },
 { X86_MOV32o32a, X86_REG_EAX, CS_AC_READ },
 { X86_MOV32o64a, X86_REG_EAX, CS_AC_READ },
 { X86_MOV64o32a, X86_REG_RAX, CS_AC_READ },
 { X86_MOV64o64a, X86_REG_RAX, CS_AC_READ },
 { X86_MOV8o16a, X86_REG_AL, CS_AC_READ },
 { X86_MOV8o32a, X86_REG_AL, CS_AC_READ },
 { X86_MOV8o64a, X86_REG_AL, CS_AC_READ },
 { X86_OUT16ir, X86_REG_AX, CS_AC_READ },
 { X86_OUT32ir, X86_REG_EAX, CS_AC_READ },
 { X86_OUT8ir, X86_REG_AL, CS_AC_READ },
 { X86_POPDS16, X86_REG_DS, CS_AC_WRITE },
 { X86_POPDS32, X86_REG_DS, CS_AC_WRITE },
 { X86_POPES16, X86_REG_ES, CS_AC_WRITE },
 { X86_POPES32, X86_REG_ES, CS_AC_WRITE },
 { X86_POPFS16, X86_REG_FS, CS_AC_WRITE },
 { X86_POPFS32, X86_REG_FS, CS_AC_WRITE },
 { X86_POPFS64, X86_REG_FS, CS_AC_WRITE },
 { X86_POPGS16, X86_REG_GS, CS_AC_WRITE },
 { X86_POPGS32, X86_REG_GS, CS_AC_WRITE },
 { X86_POPGS64, X86_REG_GS, CS_AC_WRITE },
 { X86_POPSS16, X86_REG_SS, CS_AC_WRITE },
 { X86_POPSS32, X86_REG_SS, CS_AC_WRITE },
 { X86_PUSHCS16, X86_REG_CS, CS_AC_READ },
 { X86_PUSHCS32, X86_REG_CS, CS_AC_READ },
 { X86_PUSHDS16, X86_REG_DS, CS_AC_READ },
 { X86_PUSHDS32, X86_REG_DS, CS_AC_READ },
 { X86_PUSHES16, X86_REG_ES, CS_AC_READ },
 { X86_PUSHES32, X86_REG_ES, CS_AC_READ },
 { X86_PUSHFS16, X86_REG_FS, CS_AC_READ },
 { X86_PUSHFS32, X86_REG_FS, CS_AC_READ },
 { X86_PUSHFS64, X86_REG_FS, CS_AC_READ },
 { X86_PUSHGS16, X86_REG_GS, CS_AC_READ },
 { X86_PUSHGS32, X86_REG_GS, CS_AC_READ },
 { X86_PUSHGS64, X86_REG_GS, CS_AC_READ },
 { X86_PUSHSS16, X86_REG_SS, CS_AC_READ },
 { X86_PUSHSS32, X86_REG_SS, CS_AC_READ },
 { X86_RCL16rCL, X86_REG_CL, CS_AC_READ },
 { X86_RCL32rCL, X86_REG_CL, CS_AC_READ },
 { X86_RCL64rCL, X86_REG_CL, CS_AC_READ },
 { X86_RCL8rCL, X86_REG_CL, CS_AC_READ },
 { X86_RCR16rCL, X86_REG_CL, CS_AC_READ },
 { X86_RCR32rCL, X86_REG_CL, CS_AC_READ },
 { X86_RCR64rCL, X86_REG_CL, CS_AC_READ },
 { X86_RCR8rCL, X86_REG_CL, CS_AC_READ },
 { X86_ROL16rCL, X86_REG_CL, CS_AC_READ },
 { X86_ROL32rCL, X86_REG_CL, CS_AC_READ },
 { X86_ROL64rCL, X86_REG_CL, CS_AC_READ },
 { X86_ROL8rCL, X86_REG_CL, CS_AC_READ },
 { X86_ROR16rCL, X86_REG_CL, CS_AC_READ },
 { X86_ROR32rCL, X86_REG_CL, CS_AC_READ },
 { X86_ROR64rCL, X86_REG_CL, CS_AC_READ },
 { X86_ROR8rCL, X86_REG_CL, CS_AC_READ },
 { X86_SAL16rCL, X86_REG_CL, CS_AC_READ },
 { X86_SAL32rCL, X86_REG_CL, CS_AC_READ },
 { X86_SAL64rCL, X86_REG_CL, CS_AC_READ },
 { X86_SAL8rCL, X86_REG_CL, CS_AC_READ },
 { X86_SAR16rCL, X86_REG_CL, CS_AC_READ },
 { X86_SAR32rCL, X86_REG_CL, CS_AC_READ },
 { X86_SAR64rCL, X86_REG_CL, CS_AC_READ },
 { X86_SAR8rCL, X86_REG_CL, CS_AC_READ },
 { X86_SHL16rCL, X86_REG_CL, CS_AC_READ },
 { X86_SHL32rCL, X86_REG_CL, CS_AC_READ },
 { X86_SHL64rCL, X86_REG_CL, CS_AC_READ },
 { X86_SHL8rCL, X86_REG_CL, CS_AC_READ },
 { X86_SHLD16mrCL, X86_REG_CL, CS_AC_READ },
 { X86_SHLD16rrCL, X86_REG_CL, CS_AC_READ },
 { X86_SHLD32mrCL, X86_REG_CL, CS_AC_READ },
 { X86_SHLD32rrCL, X86_REG_CL, CS_AC_READ },
 { X86_SHLD64mrCL, X86_REG_CL, CS_AC_READ },
 { X86_SHLD64rrCL, X86_REG_CL, CS_AC_READ },
 { X86_SHR16rCL, X86_REG_CL, CS_AC_READ },
 { X86_SHR32rCL, X86_REG_CL, CS_AC_READ },
 { X86_SHR64rCL, X86_REG_CL, CS_AC_READ },
 { X86_SHR8rCL, X86_REG_CL, CS_AC_READ },
 { X86_SHRD16mrCL, X86_REG_CL, CS_AC_READ },
 { X86_SHRD16rrCL, X86_REG_CL, CS_AC_READ },
 { X86_SHRD32mrCL, X86_REG_CL, CS_AC_READ },
 { X86_SHRD32rrCL, X86_REG_CL, CS_AC_READ },
 { X86_SHRD64mrCL, X86_REG_CL, CS_AC_READ },
 { X86_SHRD64rrCL, X86_REG_CL, CS_AC_READ },
 { X86_XCHG16ar, X86_REG_AX, CS_AC_WRITE | CS_AC_READ },
 { X86_XCHG32ar, X86_REG_EAX, CS_AC_WRITE | CS_AC_READ },
 { X86_XCHG64ar, X86_REG_RAX, CS_AC_WRITE | CS_AC_READ },
};

static const struct insn_reg insn_regs_att_extra[] = {

 { 0, 0 },
#ifndef CAPSTONE_X86_REDUCE
 { X86_ADD_FrST0, X86_REG_ST0, CS_AC_READ },
 { X86_DIVR_FrST0, X86_REG_ST0, CS_AC_READ },
 { X86_DIV_FrST0, X86_REG_ST0, CS_AC_READ },
 { X86_FNSTSW16r, X86_REG_AX, CS_AC_READ },
 { X86_MUL_FrST0, X86_REG_ST0, CS_AC_READ },
 { X86_SKINIT, X86_REG_EAX, CS_AC_READ },
 { X86_SUBR_FrST0, X86_REG_ST0, CS_AC_READ },
 { X86_SUB_FrST0, X86_REG_ST0, CS_AC_READ },
 { X86_VMLOAD32, X86_REG_EAX, CS_AC_READ },
 { X86_VMLOAD64, X86_REG_RAX, CS_AC_READ },
 { X86_VMRUN32, X86_REG_EAX, CS_AC_READ },
 { X86_VMRUN64, X86_REG_RAX, CS_AC_READ },
 { X86_VMSAVE32, X86_REG_EAX, CS_AC_READ },
 { X86_VMSAVE64, X86_REG_RAX, CS_AC_READ },
#endif
};

static const struct insn_reg insn_regs_intel[] = {
 { X86_ADC16i16, X86_REG_AX, CS_AC_WRITE | CS_AC_READ },
 { X86_ADC32i32, X86_REG_EAX, CS_AC_WRITE | CS_AC_READ },
 { X86_ADC64i32, X86_REG_RAX, CS_AC_WRITE | CS_AC_READ },
 { X86_ADC8i8, X86_REG_AL, CS_AC_WRITE | CS_AC_READ },
 { X86_ADD16i16, X86_REG_AX, CS_AC_WRITE | CS_AC_READ },
 { X86_ADD32i32, X86_REG_EAX, CS_AC_WRITE | CS_AC_READ },
 { X86_ADD64i32, X86_REG_RAX, CS_AC_WRITE | CS_AC_READ },
 { X86_ADD8i8, X86_REG_AL, CS_AC_WRITE | CS_AC_READ },
 { X86_AND16i16, X86_REG_AX, CS_AC_WRITE | CS_AC_READ },
 { X86_AND32i32, X86_REG_EAX, CS_AC_WRITE | CS_AC_READ },
 { X86_AND64i32, X86_REG_RAX, CS_AC_WRITE | CS_AC_READ },
 { X86_AND8i8, X86_REG_AL, CS_AC_WRITE | CS_AC_READ },
 { X86_CMP16i16, X86_REG_AX, CS_AC_WRITE | CS_AC_READ },
 { X86_CMP32i32, X86_REG_EAX, CS_AC_WRITE | CS_AC_READ },
 { X86_CMP64i32, X86_REG_RAX, CS_AC_WRITE | CS_AC_READ },
 { X86_CMP8i8, X86_REG_AL, CS_AC_WRITE | CS_AC_READ },
 { X86_IN16ri, X86_REG_AX, CS_AC_WRITE },
 { X86_IN32ri, X86_REG_EAX, CS_AC_WRITE },
 { X86_IN8ri, X86_REG_AL, CS_AC_WRITE },
 { X86_LODSB, X86_REG_AL, CS_AC_WRITE },
 { X86_LODSL, X86_REG_EAX, CS_AC_WRITE },
 { X86_LODSQ, X86_REG_RAX, CS_AC_WRITE },
 { X86_LODSW, X86_REG_AX, CS_AC_WRITE },
 { X86_MOV16ao16, X86_REG_AX, CS_AC_WRITE },
 { X86_MOV16ao32, X86_REG_AX, CS_AC_WRITE },
 { X86_MOV16ao64, X86_REG_AX, CS_AC_WRITE },
 { X86_MOV32ao16, X86_REG_EAX, CS_AC_WRITE },
 { X86_MOV32ao32, X86_REG_EAX, CS_AC_WRITE },
 { X86_MOV32ao64, X86_REG_EAX, CS_AC_WRITE },
 { X86_MOV64ao32, X86_REG_RAX, CS_AC_WRITE },
 { X86_MOV64ao64, X86_REG_RAX, CS_AC_WRITE },
 { X86_MOV8ao16, X86_REG_AL, CS_AC_WRITE },
 { X86_MOV8ao32, X86_REG_AL, CS_AC_WRITE },
 { X86_MOV8ao64, X86_REG_AL, CS_AC_WRITE },
 { X86_OR16i16, X86_REG_AX, CS_AC_WRITE | CS_AC_READ },
 { X86_OR32i32, X86_REG_EAX, CS_AC_WRITE | CS_AC_READ },
 { X86_OR64i32, X86_REG_RAX, CS_AC_WRITE | CS_AC_READ },
 { X86_OR8i8, X86_REG_AL, CS_AC_WRITE | CS_AC_READ },
 { X86_OUTSB, X86_REG_DX, CS_AC_WRITE },
 { X86_OUTSL, X86_REG_DX, CS_AC_WRITE },
 { X86_OUTSW, X86_REG_DX, CS_AC_WRITE },
 { X86_POPDS16, X86_REG_DS, CS_AC_WRITE },
 { X86_POPDS32, X86_REG_DS, CS_AC_WRITE },
 { X86_POPES16, X86_REG_ES, CS_AC_WRITE },
 { X86_POPES32, X86_REG_ES, CS_AC_WRITE },
 { X86_POPFS16, X86_REG_FS, CS_AC_WRITE },
 { X86_POPFS32, X86_REG_FS, CS_AC_WRITE },
 { X86_POPFS64, X86_REG_FS, CS_AC_WRITE },
 { X86_POPGS16, X86_REG_GS, CS_AC_WRITE },
 { X86_POPGS32, X86_REG_GS, CS_AC_WRITE },
 { X86_POPGS64, X86_REG_GS, CS_AC_WRITE },
 { X86_POPSS16, X86_REG_SS, CS_AC_WRITE },
 { X86_POPSS32, X86_REG_SS, CS_AC_WRITE },
 { X86_PUSHCS16, X86_REG_CS, CS_AC_READ },
 { X86_PUSHCS32, X86_REG_CS, CS_AC_READ },
 { X86_PUSHDS16, X86_REG_DS, CS_AC_READ },
 { X86_PUSHDS32, X86_REG_DS, CS_AC_READ },
 { X86_PUSHES16, X86_REG_ES, CS_AC_READ },
 { X86_PUSHES32, X86_REG_ES, CS_AC_READ },
 { X86_PUSHFS16, X86_REG_FS, CS_AC_READ },
 { X86_PUSHFS32, X86_REG_FS, CS_AC_READ },
 { X86_PUSHFS64, X86_REG_FS, CS_AC_READ },
 { X86_PUSHGS16, X86_REG_GS, CS_AC_READ },
 { X86_PUSHGS32, X86_REG_GS, CS_AC_READ },
 { X86_PUSHGS64, X86_REG_GS, CS_AC_READ },
 { X86_PUSHSS16, X86_REG_SS, CS_AC_READ },
 { X86_PUSHSS32, X86_REG_SS, CS_AC_READ },
 { X86_SBB16i16, X86_REG_AX, CS_AC_WRITE | CS_AC_READ },
 { X86_SBB32i32, X86_REG_EAX, CS_AC_WRITE | CS_AC_READ },
 { X86_SBB64i32, X86_REG_RAX, CS_AC_WRITE | CS_AC_READ },
 { X86_SBB8i8, X86_REG_AL, CS_AC_WRITE | CS_AC_READ },
 { X86_SCASB, X86_REG_AL, CS_AC_WRITE | CS_AC_READ },
 { X86_SCASL, X86_REG_EAX, CS_AC_WRITE | CS_AC_READ },
 { X86_SCASQ, X86_REG_RAX, CS_AC_WRITE | CS_AC_READ },
 { X86_SCASW, X86_REG_AX, CS_AC_WRITE | CS_AC_READ },
 { X86_SUB16i16, X86_REG_AX, CS_AC_WRITE | CS_AC_READ },
 { X86_SUB32i32, X86_REG_EAX, CS_AC_WRITE | CS_AC_READ },
 { X86_SUB64i32, X86_REG_RAX, CS_AC_WRITE | CS_AC_READ },
 { X86_SUB8i8, X86_REG_AL, CS_AC_WRITE | CS_AC_READ },
 { X86_TEST16i16, X86_REG_AX, CS_AC_WRITE | CS_AC_READ },
 { X86_TEST32i32, X86_REG_EAX, CS_AC_WRITE | CS_AC_READ },
 { X86_TEST64i32, X86_REG_RAX, CS_AC_WRITE | CS_AC_READ },
 { X86_TEST8i8, X86_REG_AL, CS_AC_WRITE | CS_AC_READ },
 { X86_XOR16i16, X86_REG_AX, CS_AC_WRITE | CS_AC_READ },
 { X86_XOR32i32, X86_REG_EAX, CS_AC_WRITE | CS_AC_READ },
 { X86_XOR64i32, X86_REG_RAX, CS_AC_WRITE | CS_AC_READ },
 { X86_XOR8i8, X86_REG_AL, CS_AC_WRITE | CS_AC_READ },
};

static const struct insn_reg insn_regs_intel_extra[] = {

 { 0, 0, 0 },
#ifndef CAPSTONE_X86_REDUCE
 { X86_CMOVBE_F, X86_REG_ST0, CS_AC_WRITE },
 { X86_CMOVB_F, X86_REG_ST0, CS_AC_WRITE },
 { X86_CMOVE_F, X86_REG_ST0, CS_AC_WRITE },
 { X86_CMOVNBE_F, X86_REG_ST0, CS_AC_WRITE },
 { X86_CMOVNB_F, X86_REG_ST0, CS_AC_WRITE },
 { X86_CMOVNE_F, X86_REG_ST0, CS_AC_WRITE },
 { X86_CMOVNP_F, X86_REG_ST0, CS_AC_WRITE },
 { X86_CMOVP_F, X86_REG_ST0, CS_AC_WRITE },


 { X86_FNSTSW16r, X86_REG_AX, CS_AC_WRITE },
 { X86_SKINIT, X86_REG_EAX, CS_AC_WRITE },
 { X86_VMLOAD32, X86_REG_EAX, CS_AC_WRITE },
 { X86_VMLOAD64, X86_REG_RAX, CS_AC_WRITE },
 { X86_VMRUN32, X86_REG_EAX, CS_AC_WRITE },
 { X86_VMRUN64, X86_REG_RAX, CS_AC_WRITE },
 { X86_VMSAVE32, X86_REG_EAX, CS_AC_READ },
 { X86_VMSAVE64, X86_REG_RAX, CS_AC_READ },
 { X86_XCH_F, X86_REG_ST0, CS_AC_WRITE },
#endif
};

static const struct insn_reg2 insn_regs_intel2[] = {
 { X86_IN16rr, X86_REG_AX, X86_REG_DX, CS_AC_WRITE, CS_AC_READ },
 { X86_IN32rr, X86_REG_EAX, X86_REG_DX, CS_AC_WRITE, CS_AC_READ },
 { X86_IN8rr, X86_REG_AL, X86_REG_DX, CS_AC_WRITE, CS_AC_READ },
 { X86_INVLPGA32, X86_REG_EAX, X86_REG_ECX, CS_AC_READ, CS_AC_READ },
 { X86_INVLPGA64, X86_REG_RAX, X86_REG_ECX, CS_AC_READ, CS_AC_READ },
 { X86_OUT16rr, X86_REG_DX, X86_REG_AX, CS_AC_READ, CS_AC_READ },
 { X86_OUT32rr, X86_REG_DX, X86_REG_EAX, CS_AC_READ, CS_AC_READ },
 { X86_OUT8rr, X86_REG_DX, X86_REG_AL, CS_AC_READ, CS_AC_READ },
};

static int binary_search1(const struct insn_reg *insns, unsigned int max, unsigned int id)
{
 unsigned int first, last, mid;

 first = 0;
 last = max -1;

 if (insns[0].insn > id || insns[last].insn < id) {

  return -1;
 }

 while (first <= last) {
  mid = (first + last) / 2;
  if (insns[mid].insn < id) {
   first = mid + 1;
  } else if (insns[mid].insn == id) {
   return mid;
  } else {
   if (mid == 0)
    break;
   last = mid - 1;
  }
 }


 return -1;
}

static int binary_search2(const struct insn_reg2 *insns, unsigned int max, unsigned int id)
{
 unsigned int first, last, mid;

 first = 0;
 last = max -1;

 if (insns[0].insn > id || insns[last].insn < id) {

  return -1;
 }

 while (first <= last) {
  mid = (first + last) / 2;
  if (insns[mid].insn < id) {
   first = mid + 1;
  } else if (insns[mid].insn == id) {
   return mid;
  } else {
   if (mid == 0)
    break;
   last = mid - 1;
  }
 }


 return -1;
}




x86_reg X86_insn_reg_intel(unsigned int id, enum cs_ac_type *access)
{
 int i;

 i = binary_search1(insn_regs_intel, ARR_SIZE(insn_regs_intel), id);
 if (i != -1) {
  if (access) {
   *access = insn_regs_intel[i].access;
  }
  return insn_regs_intel[i].reg;
 }

 i = binary_search1(insn_regs_intel_extra, ARR_SIZE(insn_regs_intel_extra), id);
 if (i != -1) {
  if (access) {
   *access = insn_regs_intel_extra[i].access;
  }
  return insn_regs_intel_extra[i].reg;
 }


 return 0;
}

bool X86_insn_reg_intel2(unsigned int id, x86_reg *reg1, enum cs_ac_type *access1, x86_reg *reg2, enum cs_ac_type *access2)
{
 int i = binary_search2(insn_regs_intel2, ARR_SIZE(insn_regs_intel2), id);
 if (i != -1) {
  *reg1 = insn_regs_intel2[i].reg1;
  *reg2 = insn_regs_intel2[i].reg2;
  if (access1)
   *access1 = insn_regs_intel2[i].access1;
  if (access2)
   *access2 = insn_regs_intel2[i].access2;
  return true;
 }


 return false;
}

x86_reg X86_insn_reg_att(unsigned int id, enum cs_ac_type *access)
{
 int i;

 i = binary_search1(insn_regs_att, ARR_SIZE(insn_regs_att), id);
 if (i != -1) {
  if (access)
   *access = insn_regs_att[i].access;
  return insn_regs_att[i].reg;
 }

 i = binary_search1(insn_regs_att_extra, ARR_SIZE(insn_regs_att_extra), id);
 if (i != -1) {
  if (access)
   *access = insn_regs_att_extra[i].access;
  return insn_regs_att_extra[i].reg;
 }


 return 0;
}


bool X86_insn_reg_att2(unsigned int id, x86_reg *reg1, enum cs_ac_type *access1, x86_reg *reg2, enum cs_ac_type *access2)
{
 int i = binary_search2(insn_regs_intel2, ARR_SIZE(insn_regs_intel2), id);
 if (i != -1) {
  *reg1 = insn_regs_intel2[i].reg2;
  *reg2 = insn_regs_intel2[i].reg1;
  if (access1)
   *access1 = insn_regs_intel2[i].access2;
  if (access2)
   *access2 = insn_regs_intel2[i].access1;
  return true;
 }


 return false;
}


static bool valid_repne(cs_struct *h, unsigned int opcode)
{
 unsigned int id;
 unsigned int i = find_insn(opcode);
 if (i != -1) {
  id = insns[i].mapid;
  switch(id) {
   default:
    return false;

   case X86_INS_CMPSB:
   case X86_INS_CMPSS:
   case X86_INS_CMPSW:
   case X86_INS_CMPSQ:

   case X86_INS_SCASB:
   case X86_INS_SCASW:
   case X86_INS_SCASQ:

   case X86_INS_MOVSB:
   case X86_INS_MOVSS:
   case X86_INS_MOVSW:
   case X86_INS_MOVSQ:

   case X86_INS_LODSB:
   case X86_INS_LODSW:
   case X86_INS_LODSD:
   case X86_INS_LODSQ:

   case X86_INS_STOSB:
   case X86_INS_STOSW:
   case X86_INS_STOSD:
   case X86_INS_STOSQ:

   case X86_INS_INSB:
   case X86_INS_INSW:
   case X86_INS_INSD:

   case X86_INS_OUTSB:
   case X86_INS_OUTSW:
   case X86_INS_OUTSD:

    return true;

   case X86_INS_MOVSD:
    if (opcode == X86_MOVSW)
     return true;
    return false;

   case X86_INS_CMPSD:
    if (opcode == X86_CMPSL)
     return true;
    return false;

   case X86_INS_SCASD:
    if (opcode == X86_SCASL)
     return true;
    return false;
  }
 }


 return false;
}



#ifndef CAPSTONE_DIET
static bool valid_bnd(cs_struct *h, unsigned int opcode)
{
 unsigned int id;
 unsigned int i = find_insn(opcode);
 if (i != -1) {
  id = insns[i].mapid;
  switch(id) {
   default:
    return false;

   case X86_INS_JAE:
   case X86_INS_JA:
   case X86_INS_JBE:
   case X86_INS_JB:
   case X86_INS_JCXZ:
   case X86_INS_JECXZ:
   case X86_INS_JE:
   case X86_INS_JGE:
   case X86_INS_JG:
   case X86_INS_JLE:
   case X86_INS_JL:
   case X86_INS_JMP:
   case X86_INS_JNE:
   case X86_INS_JNO:
   case X86_INS_JNP:
   case X86_INS_JNS:
   case X86_INS_JO:
   case X86_INS_JP:
   case X86_INS_JRCXZ:
   case X86_INS_JS:

   case X86_INS_CALL:
   case X86_INS_RET:
   case X86_INS_RETF:
   case X86_INS_RETFQ:
    return true;
  }
 }


 return false;
}
#endif


static bool xchg_mem(unsigned int opcode)
{
 switch(opcode) {
  default:
   return false;
  case X86_XCHG8rm:
  case X86_XCHG16rm:
  case X86_XCHG32rm:
  case X86_XCHG64rm:
     return true;
 }
}


static bool valid_rep(cs_struct *h, unsigned int opcode)
{
 unsigned int id;
 unsigned int i = find_insn(opcode);
 if (i != -1) {
  id = insns[i].mapid;
  switch(id) {
   default:
    return false;

   case X86_INS_MOVSB:
   case X86_INS_MOVSW:
   case X86_INS_MOVSQ:

   case X86_INS_LODSB:
   case X86_INS_LODSW:
   case X86_INS_LODSQ:

   case X86_INS_STOSB:
   case X86_INS_STOSW:
   case X86_INS_STOSQ:

   case X86_INS_INSB:
   case X86_INS_INSW:
   case X86_INS_INSD:

   case X86_INS_OUTSB:
   case X86_INS_OUTSW:
   case X86_INS_OUTSD:
    return true;



   case X86_INS_MOVSD:
    if (opcode == X86_MOVSL)
     return true;
    return false;

   case X86_INS_LODSD:
    if (opcode == X86_LODSL)
     return true;
    return false;

   case X86_INS_STOSD:
    if (opcode == X86_STOSL)
     return true;
    return false;
  }
 }


 return false;
}


static bool valid_repe(cs_struct *h, unsigned int opcode)
{
 unsigned int id;
 unsigned int i = find_insn(opcode);
 if (i != -1) {
  id = insns[i].mapid;
  switch(id) {
   default:
    return false;

   case X86_INS_CMPSB:
   case X86_INS_CMPSW:
   case X86_INS_CMPSQ:

   case X86_INS_SCASB:
   case X86_INS_SCASW:
   case X86_INS_SCASQ:
    return true;



   case X86_INS_CMPSD:
    if (opcode == X86_CMPSL)
     return true;
    return false;

   case X86_INS_SCASD:
    if (opcode == X86_SCASL)
     return true;
    return false;
  }
 }


 return false;
}

#ifndef CAPSTONE_DIET

static void add_cx(MCInst *MI)
{
 if (MI->csh->detail) {
  x86_reg cx;

  if (MI->csh->mode & CS_MODE_16)
   cx = X86_REG_CX;
  else if (MI->csh->mode & CS_MODE_32)
   cx = X86_REG_ECX;
  else
   cx = X86_REG_RCX;

  MI->flat_insn->detail->regs_read[MI->flat_insn->detail->regs_read_count] = cx;
  MI->flat_insn->detail->regs_read_count++;

  MI->flat_insn->detail->regs_write[MI->flat_insn->detail->regs_write_count] = cx;
  MI->flat_insn->detail->regs_write_count++;
 }
}
#endif


bool X86_lockrep(MCInst *MI, SStream *O)
{
 unsigned int opcode;
 bool res = false;

 switch(MI->x86_prefix[0]) {
  default:
   break;
  case 0xf0:
#ifndef CAPSTONE_DIET
   if (MI->xAcquireRelease == 0xf2)
    SStream_concat(O, "xacquire|lock|");
   else if (MI->xAcquireRelease == 0xf3)
    SStream_concat(O, "xrelease|lock|");
   else
    SStream_concat(O, "lock|");
#endif
   break;
  case 0xf2:
   opcode = MCInst_getOpcode(MI);

#ifndef CAPSTONE_DIET
   if (xchg_mem(opcode) && MI->xAcquireRelease) {
    SStream_concat(O, "xacquire|");
   } else if (valid_repne(MI->csh, opcode)) {
    SStream_concat(O, "repne|");
    add_cx(MI);
   } else if (valid_bnd(MI->csh, opcode)) {
    SStream_concat(O, "bnd|");
   } else {

    MI->x86_prefix[0] = 0;


#ifndef CAPSTONE_X86_REDUCE
#if 0
    if (opcode == X86_MULPDrr) {
     MCInst_setOpcode(MI, X86_MULSDrr);
     SStream_concat0(O, "mulsd\t");
     res = true;
    }
#endif
#endif
   }
#else
   if (!valid_repne(MI->csh, opcode)) {
    MI->x86_prefix[0] = 0;
   }
#ifndef CAPSTONE_X86_REDUCE
#if 0

   if (opcode == X86_MULPDrr) {
    MCInst_setOpcode(MI, X86_MULSDrr);
   }
#endif
#endif
#endif
   break;

  case 0xf3:
   opcode = MCInst_getOpcode(MI);

#ifndef CAPSTONE_DIET
   if (xchg_mem(opcode) && MI->xAcquireRelease) {
    SStream_concat(O, "xrelease|");
   } else if (valid_rep(MI->csh, opcode)) {
    SStream_concat(O, "rep|");
    add_cx(MI);
   } else if (valid_repe(MI->csh, opcode)) {
    SStream_concat(O, "repe|");
    add_cx(MI);
   } else {

    MI->x86_prefix[0] = 0;


#ifndef CAPSTONE_X86_REDUCE
#if 0

    if (opcode == X86_MULPDrr) {
     MCInst_setOpcode(MI, X86_MULSSrr);
     SStream_concat0(O, "mulss\t");
     res = true;
    }
#endif
#endif
   }
#else
   if (!valid_rep(MI->csh, opcode) && !valid_repe(MI->csh, opcode)) {
    MI->x86_prefix[0] = 0;
   }
#ifndef CAPSTONE_X86_REDUCE
#if 0


   if (opcode == X86_MULPDrr) {
    MCInst_setOpcode(MI, X86_MULSSrr);
   }
#endif
#endif
#endif
   break;
 }


 if (MI->csh->detail)
  memcpy(MI->flat_insn->detail->x86.prefix, MI->x86_prefix, ARR_SIZE(MI->x86_prefix));

 return res;
}

void op_addReg(MCInst *MI, int reg)
{
 if (MI->csh->detail) {
  MI->flat_insn->detail->x86.operands[MI->flat_insn->detail->x86.op_count].type = X86_OP_REG;
  MI->flat_insn->detail->x86.operands[MI->flat_insn->detail->x86.op_count].reg = reg;
  MI->flat_insn->detail->x86.operands[MI->flat_insn->detail->x86.op_count].size = MI->csh->regsize_map[reg];
  MI->flat_insn->detail->x86.op_count++;
 }

 if (MI->op1_size == 0)
  MI->op1_size = MI->csh->regsize_map[reg];
}

void op_addImm(MCInst *MI, int v)
{
 if (MI->csh->detail) {
  MI->flat_insn->detail->x86.operands[MI->flat_insn->detail->x86.op_count].type = X86_OP_IMM;
  MI->flat_insn->detail->x86.operands[MI->flat_insn->detail->x86.op_count].imm = v;

  if (MI->csh->syntax != CS_OPT_SYNTAX_ATT) {
   if (MI->flat_insn->detail->x86.op_count > 0)
    MI->flat_insn->detail->x86.operands[MI->flat_insn->detail->x86.op_count].size = MI->flat_insn->detail->x86.operands[0].size;
   else
    MI->flat_insn->detail->x86.operands[MI->flat_insn->detail->x86.op_count].size = MI->imm_size;
  } else
   MI->has_imm = true;
  MI->flat_insn->detail->x86.op_count++;
 }

 if (MI->op1_size == 0)
  MI->op1_size = MI->imm_size;
}

void op_addXopCC(MCInst *MI, int v)
{
 if (MI->csh->detail) {
  MI->flat_insn->detail->x86.xop_cc = v;
 }
}

void op_addSseCC(MCInst *MI, int v)
{
 if (MI->csh->detail) {
  MI->flat_insn->detail->x86.sse_cc = v;
 }
}

void op_addAvxCC(MCInst *MI, int v)
{
 if (MI->csh->detail) {
  MI->flat_insn->detail->x86.avx_cc = v;
 }
}

void op_addAvxRoundingMode(MCInst *MI, int v)
{
 if (MI->csh->detail) {
  MI->flat_insn->detail->x86.avx_rm = v;
 }
}


void op_addAvxZeroOpmask(MCInst *MI)
{
 if (MI->csh->detail) {

  MI->flat_insn->detail->x86.operands[MI->flat_insn->detail->x86.op_count - 1].avx_zero_opmask = true;
 }
}

void op_addAvxSae(MCInst *MI)
{
 if (MI->csh->detail) {
  MI->flat_insn->detail->x86.avx_sae = true;
 }
}

void op_addAvxBroadcast(MCInst *MI, x86_avx_bcast v)
{
 if (MI->csh->detail) {

  MI->flat_insn->detail->x86.operands[MI->flat_insn->detail->x86.op_count - 1].avx_bcast = v;
 }
}

#ifndef CAPSTONE_DIET

typedef struct insn_op {
 uint64_t flags;
 uint8_t access[6];
} insn_op;

static const insn_op insn_ops[] = {
#ifdef CAPSTONE_X86_REDUCE
#include "X86MappingInsnOp_reduce.inc"
#else
#include "X86MappingInsnOp.inc"
#endif
};


const uint8_t *X86_get_op_access(cs_struct *h, unsigned int id, uint64_t *eflags)
{
 unsigned int i = find_insn(id);
 if (i != -1) {
  *eflags = insn_ops[i].flags;
  return insn_ops[i].access;
 }

 return NULL;
}

void X86_reg_access(const cs_insn *insn,
  cs_regs regs_read, uint8_t *regs_read_count,
  cs_regs regs_write, uint8_t *regs_write_count)
{
 uint8_t i;
 uint8_t read_count, write_count;
 cs_x86 *x86 = &(insn->detail->x86);

 read_count = insn->detail->regs_read_count;
 write_count = insn->detail->regs_write_count;


 memcpy(regs_read, insn->detail->regs_read, read_count * sizeof(insn->detail->regs_read[0]));
 memcpy(regs_write, insn->detail->regs_write, write_count * sizeof(insn->detail->regs_write[0]));


 for (i = 0; i < x86->op_count; i++) {
  cs_x86_op *op = &(x86->operands[i]);
  switch((int)op->type) {
   case X86_OP_REG:
    if ((op->access & CS_AC_READ) && !arr_exist(regs_read, read_count, op->reg)) {
     regs_read[read_count] = op->reg;
     read_count++;
    }
    if ((op->access & CS_AC_WRITE) && !arr_exist(regs_write, write_count, op->reg)) {
     regs_write[write_count] = op->reg;
     write_count++;
    }
    break;
   case X86_OP_MEM:

    if ((op->mem.segment != X86_REG_INVALID)) {
     regs_read[read_count] = op->mem.segment;
     read_count++;
    }
    if ((op->mem.base != X86_REG_INVALID) && !arr_exist(regs_read, read_count, op->mem.base)) {
     regs_read[read_count] = op->mem.base;
     read_count++;
    }
    if ((op->mem.index != X86_REG_INVALID) && !arr_exist(regs_read, read_count, op->mem.index)) {
     regs_read[read_count] = op->mem.index;
     read_count++;
    }
   default:
    break;
  }
 }

 *regs_read_count = read_count;
 *regs_write_count = write_count;
}
#endif



static const struct size_id {
 uint8_t enc_size;
 uint8_t size;
 uint16_t id;
} x86_imm_size[] = {
#include "X86ImmSize.inc"
};


uint8_t X86_immediate_size(unsigned int id, uint8_t *enc_size)
{

 unsigned int left, right, m;

 right = ARR_SIZE(x86_imm_size) - 1;

 if (id < x86_imm_size[0].id || id > x86_imm_size[right].id)

  return 0;

 left = 0;

 while (left <= right) {
  m = (left + right) / 2;
  if (id == x86_imm_size[m].id) {
   if (enc_size != NULL)
    *enc_size = x86_imm_size[m].enc_size;

   return x86_imm_size[m].size;
  }

  if (id > x86_imm_size[m].id)
   left = m + 1;
  else {
   if (m == 0)
    break;
   right = m - 1;
  }
 }


 return 0;
}

#define GET_REGINFO_ENUM 
#include "X86GenRegisterInfo.inc"


static const struct register_map {
 unsigned short id;
 unsigned short pub_id;
} reg_map [] = {

 { 0, 0 },
#include "X86MappingReg.inc"
};



unsigned short X86_register_map(unsigned short id)
{
 if (id < ARR_SIZE(reg_map))
  return reg_map[id].pub_id;

 return 0;
}

#endif
