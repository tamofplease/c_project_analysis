# 1 "project/radare2/shlr/capstone/arch/BPF/BPFInstPrinter.c"



#include <capstone/platform.h>

#include "BPFConstants.h"
#include "BPFInstPrinter.h"
#include "BPFMapping.h"

static cs_bpf_op *expand_bpf_operands(cs_bpf *bpf)
{

 return &bpf->operands[bpf->op_count++];
}

static void push_op_reg(cs_bpf *bpf, bpf_op_type val, uint8_t ac_mode)
{
 cs_bpf_op *op = expand_bpf_operands(bpf);

 op->type = BPF_OP_REG;
 op->reg = val;
 op->access = ac_mode;
}

static void push_op_imm(cs_bpf *bpf, uint64_t val)
{
 cs_bpf_op *op = expand_bpf_operands(bpf);

 op->type = BPF_OP_IMM;
 op->imm = val;
}

static void push_op_off(cs_bpf *bpf, uint32_t val)
{
 cs_bpf_op *op = expand_bpf_operands(bpf);

 op->type = BPF_OP_OFF;
 op->off = val;
}

static void push_op_mem(cs_bpf *bpf, bpf_reg reg, uint32_t val)
{
 cs_bpf_op *op = expand_bpf_operands(bpf);

 op->type = BPF_OP_MEM;
 op->mem.base = reg;
 op->mem.disp = val;
}

static void push_op_mmem(cs_bpf *bpf, uint32_t val)
{
 cs_bpf_op *op = expand_bpf_operands(bpf);

 op->type = BPF_OP_MMEM;
 op->mmem = val;
}

static void push_op_msh(cs_bpf *bpf, uint32_t val)
{
 cs_bpf_op *op = expand_bpf_operands(bpf);

 op->type = BPF_OP_MSH;
 op->msh = val;
}

static void push_op_ext(cs_bpf *bpf, bpf_ext_type val)
{
 cs_bpf_op *op = expand_bpf_operands(bpf);

 op->type = BPF_OP_EXT;
 op->ext = val;
}

static void convert_operands(MCInst *MI, cs_bpf *bpf)
{
 unsigned opcode = MCInst_getOpcode(MI);
 unsigned mc_op_count = MCInst_getNumOperands(MI);
 MCOperand *op;
 MCOperand *op2;
 unsigned i;

 bpf->op_count = 0;
 if (BPF_CLASS(opcode) == BPF_CLASS_LD || BPF_CLASS(opcode) == BPF_CLASS_LDX) {
  switch (BPF_MODE(opcode)) {
  case BPF_MODE_IMM:
   push_op_imm(bpf, MCOperand_getImm(MCInst_getOperand(MI, 0)));
   break;
  case BPF_MODE_ABS:
   op = MCInst_getOperand(MI, 0);
   push_op_mem(bpf, BPF_REG_INVALID, (uint32_t)MCOperand_getImm(op));
   break;
  case BPF_MODE_IND:
   op = MCInst_getOperand(MI, 0);
   op2 = MCInst_getOperand(MI, 1);
   push_op_mem(bpf, MCOperand_getReg(op), (uint32_t)MCOperand_getImm(op2));
   break;
  case BPF_MODE_MEM:
   if (EBPF_MODE(MI->csh)) {

    push_op_reg(bpf, MCOperand_getReg(MCInst_getOperand(MI, 0)), CS_AC_WRITE);
    op = MCInst_getOperand(MI, 1);
    op2 = MCInst_getOperand(MI, 2);
    push_op_mem(bpf, MCOperand_getReg(op), (uint32_t)MCOperand_getImm(op2));
   }
   else {
    push_op_mmem(bpf, (uint32_t)MCOperand_getImm(MCInst_getOperand(MI, 0)));
   }
   break;
  case BPF_MODE_LEN:
   push_op_ext(bpf, BPF_EXT_LEN);
   break;
  case BPF_MODE_MSH:
   op = MCInst_getOperand(MI, 0);
   push_op_msh(bpf, (uint32_t)MCOperand_getImm(op));
   break;

  }
  return;
 }
 if (BPF_CLASS(opcode) == BPF_CLASS_ST || BPF_CLASS(opcode) == BPF_CLASS_STX) {
  if (!EBPF_MODE(MI->csh)) {

   push_op_mmem(bpf, (uint32_t)MCOperand_getImm(MCInst_getOperand(MI, 0)));
   return;
  }





  op = MCInst_getOperand(MI, 0);
  op2 = MCInst_getOperand(MI, 1);
  push_op_mem(bpf, MCOperand_getReg(op), (uint32_t)MCOperand_getImm(op2));
  op = MCInst_getOperand(MI, 2);
  if (MCOperand_isImm(op))
   push_op_imm(bpf, MCOperand_getImm(op));
  else if (MCOperand_isReg(op))
   push_op_reg(bpf, MCOperand_getReg(op), CS_AC_READ);
  return;
 }

 if (BPF_CLASS(opcode) == BPF_CLASS_JMP) {
  for (i = 0; i < mc_op_count; i++) {
   op = MCInst_getOperand(MI, i);
   if (MCOperand_isImm(op)) {






    if (BPF_OP(opcode) == BPF_JUMP_JA ||
      (!EBPF_MODE(MI->csh) && i >= 1) ||
      (EBPF_MODE(MI->csh) && i == 2))
     push_op_off(bpf, (uint32_t)MCOperand_getImm(op));
    else
     push_op_imm(bpf, MCOperand_getImm(op));
   }
   else if (MCOperand_isReg(op)) {
    push_op_reg(bpf, MCOperand_getReg(op), CS_AC_READ);
   }
  }
  return;
 }

 if (!EBPF_MODE(MI->csh)) {

  for (i = 0; i < mc_op_count; i++) {
   op = MCInst_getOperand(MI, i);
   if (MCOperand_isImm(op))
    push_op_imm(bpf, MCOperand_getImm(op));
   else if (MCOperand_isReg(op))
    push_op_reg(bpf, MCOperand_getReg(op), CS_AC_READ);
  }
  return;
 }
# 189 "project/radare2/shlr/capstone/arch/BPF/BPFInstPrinter.c"
 if (mc_op_count == 1) {
  op = MCInst_getOperand(MI, 0);
  push_op_reg(bpf, MCOperand_getReg(op), CS_AC_READ | CS_AC_WRITE);
 }
 else {
  op = MCInst_getOperand(MI, 0);
  push_op_reg(bpf, MCOperand_getReg(op), CS_AC_READ | CS_AC_WRITE);

  op = MCInst_getOperand(MI, 1);
  if (MCOperand_isImm(op))
   push_op_imm(bpf, MCOperand_getImm(op));
  else if (MCOperand_isReg(op))
   push_op_reg(bpf, MCOperand_getReg(op), CS_AC_READ);
 }
}

static void print_operand(MCInst *MI, struct SStream *O, const cs_bpf_op *op)
{
 switch (op->type) {
 case BPF_OP_INVALID:
  SStream_concat(O, "invalid");
  break;
 case BPF_OP_REG:
  SStream_concat(O, BPF_reg_name((csh)MI->csh, op->reg));
  break;
 case BPF_OP_IMM:
  SStream_concat(O, "0x%" PRIx64, op->imm);
  break;
 case BPF_OP_OFF:
  SStream_concat(O, "+0x%x", op->off);
  break;
 case BPF_OP_MEM:
  SStream_concat(O, "[");
  if (op->mem.base != BPF_REG_INVALID)
   SStream_concat(O, BPF_reg_name((csh)MI->csh, op->mem.base));
  if (op->mem.disp != 0) {
   if (op->mem.base != BPF_REG_INVALID)
    SStream_concat(O, "+");
   SStream_concat(O, "0x%x", op->mem.disp);
  }
  if (op->mem.base == BPF_REG_INVALID && op->mem.disp == 0)
   SStream_concat(O, "0x0");
  SStream_concat(O, "]");
  break;
 case BPF_OP_MMEM:
  SStream_concat(O, "m[0x%x]", op->mmem);
  break;
 case BPF_OP_MSH:
  SStream_concat(O, "4*([0x%x]&0xf)", op->msh);
  break;
 case BPF_OP_EXT:
  switch (op->ext) {
  case BPF_EXT_LEN:
   SStream_concat(O, "#len");
   break;
  }
  break;
 }
}






void BPF_printInst(MCInst *MI, struct SStream *O, void *PrinterInfo)
{
 int i;
 cs_insn insn;
 cs_bpf bpf;

 insn.detail = NULL;

 BPF_get_insn_id((cs_struct*)MI->csh, &insn, MCInst_getOpcode(MI));
 MCInst_setOpcodePub(MI, insn.id);

 SStream_concat(O, BPF_insn_name((csh)MI->csh, insn.id));
 convert_operands(MI, &bpf);
 for (i = 0; i < bpf.op_count; i++) {
  if (i == 0)
   SStream_concat(O, "\t");
  else
   SStream_concat(O, ", ");
  print_operand(MI, O, &bpf.operands[i]);
 }

#ifndef CAPSTONE_DIET
 if (MI->flat_insn->detail) {
  MI->flat_insn->detail->bpf = bpf;
 }
#endif
}
