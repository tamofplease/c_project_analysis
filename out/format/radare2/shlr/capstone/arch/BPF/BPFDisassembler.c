# 1 "project/radare2/shlr/capstone/arch/BPF/BPFDisassembler.c"



#ifdef CAPSTONE_HAS_BPF

#include <string.h>
#include <stddef.h>

#include "BPFConstants.h"
#include "BPFDisassembler.h"
#include "BPFMapping.h"
#include "../../cs_priv.h"

static uint16_t read_u16(cs_struct *ud, const uint8_t *code)
{
 if (MODE_IS_BIG_ENDIAN(ud->mode))
  return (((uint16_t)code[0] << 8) | code[1]);
 else
  return (((uint16_t)code[1] << 8) | code[0]);
}

static uint32_t read_u32(cs_struct *ud, const uint8_t *code)
{
 if (MODE_IS_BIG_ENDIAN(ud->mode))
  return ((uint32_t)read_u16(ud, code) << 16) | read_u16(ud, code + 2);
 else
  return ((uint32_t)read_u16(ud, code + 2) << 16) | read_u16(ud, code);
}


static bpf_internal *alloc_bpf_internal(size_t code_len)
{
 bpf_internal *bpf;

 if (code_len < 8)
  return NULL;
 bpf = cs_mem_malloc(sizeof(bpf_internal));
 if (bpf == NULL)
  return NULL;

 bpf->insn_size = 8;
 return bpf;
}


static bpf_internal* fetch_cbpf(cs_struct *ud, const uint8_t *code,
  size_t code_len)
{
 bpf_internal *bpf;

 bpf = alloc_bpf_internal(code_len);
 if (bpf == NULL)
  return NULL;

 bpf->op = read_u16(ud, code);
 bpf->jt = code[2];
 bpf->jf = code[3];
 bpf->k = read_u32(ud, code + 4);
 return bpf;
}


static bpf_internal* fetch_ebpf(cs_struct *ud, const uint8_t *code,
  size_t code_len)
{
 bpf_internal *bpf;

 bpf = alloc_bpf_internal(code_len);
 if (bpf == NULL)
  return NULL;

 bpf->op = (uint16_t)code[0];



 if (bpf->op == (BPF_CLASS_LD | BPF_SIZE_DW | BPF_MODE_IMM)) {
  if (code_len < 16) {
   cs_mem_free(bpf);
   return NULL;
  }
  bpf->k = read_u32(ud, code + 4) | (((uint64_t)read_u32(ud, code + 12)) << 32);
  bpf->insn_size = 16;
 }
 else {
  bpf->dst = code[1] & 0xf;
  bpf->src = (code[1] & 0xf0) >> 4;
  bpf->offset = read_u16(ud, code + 2);
  bpf->k = read_u32(ud, code + 4);
 }
 return bpf;
}

#define CHECK_READABLE_REG(ud,reg) do { \
  if (! ((reg) >= BPF_REG_R0 && (reg) <= BPF_REG_R10)) \
   return false; \
 } while (0)

#define CHECK_WRITABLE_REG(ud,reg) do { \
  if (! ((reg) >= BPF_REG_R0 && (reg) < BPF_REG_R10)) \
   return false; \
 } while (0)

#define CHECK_READABLE_AND_PUSH(ud,MI,r) do { \
  CHECK_READABLE_REG(ud, r + BPF_REG_R0); \
  MCOperand_CreateReg0(MI, r + BPF_REG_R0); \
 } while (0)

#define CHECK_WRITABLE_AND_PUSH(ud,MI,r) do { \
  CHECK_WRITABLE_REG(ud, r + BPF_REG_R0); \
  MCOperand_CreateReg0(MI, r + BPF_REG_R0); \
 } while (0)

static bool decodeLoad(cs_struct *ud, MCInst *MI, bpf_internal *bpf)
{
 if (!EBPF_MODE(ud)) {






  if (BPF_SIZE(bpf->op) == BPF_SIZE_DW)
   return false;
  if (BPF_SIZE(bpf->op) == BPF_SIZE_B || BPF_SIZE(bpf->op) == BPF_SIZE_H) {

   if (BPF_CLASS(bpf->op) != BPF_CLASS_LD)
    return false;

   if (BPF_MODE(bpf->op) == BPF_MODE_ABS) {
    MCOperand_CreateImm0(MI, bpf->k);
    return true;
   }
   else if (BPF_MODE(bpf->op) == BPF_MODE_IND) {
    MCOperand_CreateReg0(MI, BPF_REG_X);
    MCOperand_CreateImm0(MI, bpf->k);
    return true;
   }
   return false;
  }







  switch (BPF_MODE(bpf->op)) {
  default:
   break;
  case BPF_MODE_IMM:
   MCOperand_CreateImm0(MI, bpf->k);
   return true;
  case BPF_MODE_LEN:
   return true;
  case BPF_MODE_MEM:
   MCOperand_CreateImm0(MI, bpf->k);
   return true;
  }
  if (BPF_CLASS(bpf->op) == BPF_CLASS_LD) {
   if (BPF_MODE(bpf->op) == BPF_MODE_ABS) {
    MCOperand_CreateImm0(MI, bpf->k);
    return true;
   }
   else if (BPF_MODE(bpf->op) == BPF_MODE_IND) {
    MCOperand_CreateReg0(MI, BPF_REG_X);
    MCOperand_CreateImm0(MI, bpf->k);
    return true;
   }
  }
  else {
   if (BPF_MODE(bpf->op) == BPF_MODE_MSH) {
    MCOperand_CreateImm0(MI, bpf->k);
    return true;
   }
  }
  return false;
 }
# 186 "project/radare2/shlr/capstone/arch/BPF/BPFDisassembler.c"
 if (BPF_CLASS(bpf->op) == BPF_CLASS_LD) {
  switch (BPF_MODE(bpf->op)) {
  case BPF_MODE_IMM:
   if (bpf->op != (BPF_CLASS_LD | BPF_SIZE_DW | BPF_MODE_IMM))
    return false;
   MCOperand_CreateImm0(MI, bpf->k);
   return true;
  case BPF_MODE_ABS:
   MCOperand_CreateImm0(MI, bpf->k);
   return true;
  case BPF_MODE_IND:
   CHECK_READABLE_AND_PUSH(ud, MI, bpf->src);
   MCOperand_CreateImm0(MI, bpf->k);
   return true;
  }
  return false;

 }

 if (BPF_MODE(bpf->op) == BPF_MODE_MEM) {
  CHECK_WRITABLE_AND_PUSH(ud, MI, bpf->dst);
  CHECK_READABLE_AND_PUSH(ud, MI, bpf->src);
  MCOperand_CreateImm0(MI, bpf->offset);
  return true;
 }
 return false;
}

static bool decodeStore(cs_struct *ud, MCInst *MI, bpf_internal *bpf)
{






 if (!EBPF_MODE(ud)) {

  if (bpf->op != (BPF_CLASS(bpf->op) | BPF_MODE_MEM | BPF_SIZE_W))
   return false;
  MCOperand_CreateImm0(MI, bpf->k);
  return true;
 }



 if (BPF_MODE(bpf->op) == BPF_MODE_XADD) {
  if (BPF_CLASS(bpf->op) != BPF_CLASS_STX)
   return false;
  if (BPF_SIZE(bpf->op) != BPF_SIZE_W && BPF_SIZE(bpf->op) != BPF_SIZE_DW)
   return false;

  CHECK_READABLE_AND_PUSH(ud, MI, bpf->dst);
  MCOperand_CreateImm0(MI, bpf->offset);
  CHECK_READABLE_AND_PUSH(ud, MI, bpf->src);
  return true;
 }

 if (BPF_MODE(bpf->op) != BPF_MODE_MEM)
  return false;


 CHECK_READABLE_AND_PUSH(ud, MI, bpf->dst);
 MCOperand_CreateImm0(MI, bpf->offset);
 if (BPF_CLASS(bpf->op) == BPF_CLASS_ST)
  MCOperand_CreateImm0(MI, bpf->k);
 else
  CHECK_READABLE_AND_PUSH(ud, MI, bpf->src);
 return true;
}

static bool decodeALU(cs_struct *ud, MCInst *MI, bpf_internal *bpf)
{



 if (!EBPF_MODE(ud)) {
  if (BPF_OP(bpf->op) > BPF_ALU_XOR)
   return false;

  if (BPF_OP(bpf->op) == BPF_ALU_NEG)
   return true;
  if (BPF_SRC(bpf->op) == BPF_SRC_K)
   MCOperand_CreateImm0(MI, bpf->k);
  else
   MCOperand_CreateReg0(MI, BPF_REG_X);
  return true;
 }



 if (BPF_OP(bpf->op) > BPF_ALU_END)
  return false;


 if (BPF_OP(bpf->op) == BPF_ALU_END) {
  if (BPF_CLASS(bpf->op) == BPF_CLASS_ALU64)
   return false;
  if (bpf->k != 16 && bpf->k != 32 && bpf->k != 64)
   return false;
 }







 CHECK_WRITABLE_AND_PUSH(ud, MI, bpf->dst);


 if (BPF_OP(bpf->op) == BPF_ALU_NEG)
  return true;
 if (BPF_OP(bpf->op) == BPF_ALU_END) {

  MCInst_setOpcode(MI, MCInst_getOpcode(MI) | ((uint32_t)bpf->k << 4));
  return true;
 }


 if (BPF_SRC(bpf->op) == BPF_SRC_K) {
  MCOperand_CreateImm0(MI, bpf->k);
 }
 else {
  CHECK_READABLE_AND_PUSH(ud, MI, bpf->src);
 }
 return true;
}

static bool decodeJump(cs_struct *ud, MCInst *MI, bpf_internal *bpf)
{

 if (!EBPF_MODE(ud)) {
  if (BPF_OP(bpf->op) > BPF_JUMP_JSET)
   return false;


  if (BPF_OP(bpf->op) == BPF_JUMP_JA) {
   MCOperand_CreateImm0(MI, bpf->k);
   return true;
  }

  if (BPF_SRC(bpf->op) == BPF_SRC_K)
   MCOperand_CreateImm0(MI, bpf->k);
  else
   MCOperand_CreateReg0(MI, BPF_REG_X);
  MCOperand_CreateImm0(MI, bpf->jt);
  MCOperand_CreateImm0(MI, bpf->jf);
 }
 else {
  if (BPF_OP(bpf->op) > BPF_JUMP_JSLE)
   return false;


  if (BPF_OP(bpf->op) == BPF_JUMP_EXIT)
   return bpf->op == (BPF_CLASS_JMP | BPF_JUMP_EXIT);
  if (BPF_OP(bpf->op) == BPF_JUMP_CALL) {
   if (bpf->op != (BPF_CLASS_JMP | BPF_JUMP_CALL))
    return false;
   MCOperand_CreateImm0(MI, bpf->k);
   return true;
  }


  if (BPF_OP(bpf->op) == BPF_JUMP_JA) {
   if (BPF_SRC(bpf->op) != BPF_SRC_K)
    return false;
   MCOperand_CreateImm0(MI, bpf->offset);
   return true;
  }


  CHECK_READABLE_AND_PUSH(ud, MI, bpf->dst);
  if (BPF_SRC(bpf->op) == BPF_SRC_K)
   MCOperand_CreateImm0(MI, bpf->k);
  else
   CHECK_READABLE_AND_PUSH(ud, MI, bpf->src);
  MCOperand_CreateImm0(MI, bpf->offset);
 }
 return true;
}

static bool decodeReturn(cs_struct *ud, MCInst *MI, bpf_internal *bpf)
{

 switch (BPF_RVAL(bpf->op)) {
 case BPF_SRC_K:
  MCOperand_CreateImm0(MI, bpf->k);
  return true;
 case BPF_SRC_X:
  MCOperand_CreateReg0(MI, BPF_REG_X);
  return true;
 case BPF_SRC_A:
  MCOperand_CreateReg0(MI, BPF_REG_A);
  return true;
 }
 return false;
}

static bool decodeMISC(cs_struct *ud, MCInst *MI, bpf_internal *bpf)
{
 uint16_t op = bpf->op ^ BPF_CLASS_MISC;
 return op == BPF_MISCOP_TAX || op == BPF_MISCOP_TXA;
}




static bool getInstruction(cs_struct *ud, MCInst *MI, bpf_internal *bpf)
{
 cs_detail *detail;

 detail = MI->flat_insn->detail;

 if (detail) {
  memset(detail, 0, offsetof(cs_detail, bpf) + sizeof(cs_bpf));
 }

 MCInst_clear(MI);
 MCInst_setOpcode(MI, bpf->op);

 switch (BPF_CLASS(bpf->op)) {
 default:
  return false;
 case BPF_CLASS_LD:
 case BPF_CLASS_LDX:
  return decodeLoad(ud, MI, bpf);
 case BPF_CLASS_ST:
 case BPF_CLASS_STX:
  return decodeStore(ud, MI, bpf);
 case BPF_CLASS_ALU:
  return decodeALU(ud, MI, bpf);
 case BPF_CLASS_JMP:
  return decodeJump(ud, MI, bpf);
 case BPF_CLASS_RET:

  if (EBPF_MODE(ud))
   return false;
  return decodeReturn(ud, MI, bpf);
 case BPF_CLASS_MISC:

  if (EBPF_MODE(ud))
   return decodeALU(ud, MI, bpf);
  else
   return decodeMISC(ud, MI, bpf);
 }
}

bool BPF_getInstruction(csh ud, const uint8_t *code, size_t code_len,
  MCInst *instr, uint16_t *size, uint64_t address, void *info)
{
 cs_struct *cs;
 bpf_internal *bpf;

 cs = (cs_struct*)ud;
 if (EBPF_MODE(cs))
  bpf = fetch_ebpf(cs, code, code_len);
 else
  bpf = fetch_cbpf(cs, code, code_len);
 if (bpf == NULL)
  return false;
 if (!getInstruction(cs, instr, bpf)) {
  cs_mem_free(bpf);
  return false;
 }

 *size = bpf->insn_size;
 cs_mem_free(bpf);

 return true;
}

#endif
