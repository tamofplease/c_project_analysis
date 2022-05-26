# 1 "project/radare2/libr/anal/p/anal_or1k.c"


#include <r_asm.h>
#include <r_anal.h>
#include <r_lib.h>
#include <or1k_disas.h>

struct operands {
 ut32 rd;
 ut32 ra;
 ut32 rb;
 ut32 n;
 ut32 k1;
 ut32 k2;
 ut32 k;
 ut32 i;
 ut32 l;
};

static ut32 cpu[32] = {0};
static ut32 cpu_enable;
# 33 "project/radare2/libr/anal/p/anal_or1k.c"
static ut64 n_oper_to_addr(ut32 n, ut32 mask, ut64 addr) {



 return (ut64) ((st64) ((st32) (sign_extend(n, mask) << 2)) + addr);
}

static int insn_to_op(RAnal *a, RAnalOp *op, ut64 addr, insn_t *descr, insn_extra_t *extra, ut32 insn) {
 struct operands o = {0};
 insn_type_t type = type_of_opcode(descr, extra);
 insn_type_descr_t *type_descr = &types[INSN_X];


 if (has_type_descriptor(type) && is_type_descriptor_defined(type)) {
  type_descr = &types[type];
 }

 if (extra == NULL) {
  op->type = descr->insn_type;
 } else {
  op->type = extra->insn_type;
 }

 switch ((insn & INSN_OPCODE_MASK) >> INSN_OPCODE_SHIFT) {
 case 0x00:
  o.n = get_operand_value(insn, type_descr, INSN_OPER_N);
  op->eob = true;
  op->jump = n_oper_to_addr(o.n, get_operand_mask(type_descr, INSN_OPER_N),
    addr);
  op->delay = 1;
  break;
 case 0x01:
  o.n = get_operand_value(insn, type_descr, INSN_OPER_N);
  op->eob = true;
  op->jump = n_oper_to_addr(o.n, get_operand_mask(type_descr, INSN_OPER_N),
    addr);
  op->delay = 1;
  break;
 case 0x03:
  o.n = get_operand_value(insn, type_descr, INSN_OPER_N);
  op->cond = R_ANAL_COND_NE;
  op->jump = n_oper_to_addr(o.n, get_operand_mask(type_descr, INSN_OPER_N),
    addr);
  op->fail = addr + 8;
  op->delay = 1;
  break;
 case 0x04:
  o.n = get_operand_value(insn, type_descr, INSN_OPER_N);
  op->cond = R_ANAL_COND_EQ;
  op->jump = n_oper_to_addr(o.n, get_operand_mask(type_descr, INSN_OPER_N),
    addr);
  op->fail = addr + 8;
  op->delay = 1;
  break;
 case 0x11:
  o.rb = get_operand_value(insn, type_descr, INSN_OPER_B);
  op->eob = true;
  if (cpu_enable & (1 << o.rb)) {
   op->jump = cpu[o.rb];
  }
  op->delay = 1;
  break;
 case 0x12:
  o.rb = get_operand_value(insn, type_descr, INSN_OPER_B);
  op->eob = true;
  if (cpu_enable & (1 << o.rb)) {
   op->jump = cpu[o.rb];
  }
  op->delay = 1;
  break;
 case 0x06:
  switch (insn & (1 << 16)) {
  case 0:
   o.rd = get_operand_value(insn, type_descr, INSN_OPER_D);
   o.k = get_operand_value(insn, type_descr, INSN_OPER_K);
   cpu[o.rd] = o.k << 16;
   cpu_enable |= (1 << o.rd);
   break;
  case 1:
   break;
  }
  break;
 case 0x27:
  o.rd = get_operand_value(insn, type_descr, INSN_OPER_D);
  o.ra = get_operand_value(insn, type_descr, INSN_OPER_A);
  o.i = get_operand_value(insn, type_descr, INSN_OPER_I);
  if (cpu_enable & (1 << o.ra) & cpu_enable & (1 << o.rd)) {
   cpu[o.rd] = cpu[o.ra] | o.i;
   cpu_enable |= (1 << o.rd);
   op->ptr = cpu[o.rd];
   op->direction = 8;
  }
  break;
 case 0x2a:
  o.rd = get_operand_value(insn, type_descr, INSN_OPER_D);
  o.ra = get_operand_value(insn, type_descr, INSN_OPER_A);
  o.i = get_operand_value(insn, type_descr, INSN_OPER_I);
  if (cpu_enable & (1 << o.ra)) {
   cpu[o.rd] = cpu[o.ra] | o.i;
   cpu_enable |= (1 << o.rd);
   op->ptr = cpu[o.rd];
   op->direction = 8;
  }
  break;
 default:

  cpu_enable = 0;
 }


 if ((op->type & R_ANAL_OP_TYPE_JMP) == R_ANAL_OP_TYPE_JMP) {

  cpu_enable = 0;
 }
 return 4;
}

static int or1k_op(RAnal *a, RAnalOp *op, ut64 addr, const ut8 *data, int len, RAnalOpMask mask) {
 ut32 insn, opcode;
 ut8 opcode_idx;
 insn_t *insn_descr;
 insn_extra_t *extra_descr;


 insn = r_read_be32(data);
 op->size = 4;
 opcode = (insn & INSN_OPCODE_MASK);
 opcode_idx = opcode >> INSN_OPCODE_SHIFT;


 if (opcode_idx >= insns_count) {
  return op->size;
 }


 insn_descr = &or1k_insns[opcode_idx];
 if (insn_descr->type == INSN_INVAL) {
  return op->size;
 }



 if ((insn_descr->name == NULL) && (insn_descr->extra != NULL)) {
  extra_descr = find_extra_descriptor(insn_descr->extra, insn);
  if (extra_descr != NULL) {
   insn_to_op(a, op, addr, insn_descr, extra_descr, insn);
  }
 }
 else {

  insn_to_op(a, op, addr, insn_descr, NULL, insn);
 }

 return op->size;
}

RAnalPlugin r_anal_plugin_or1k = {
 .name = "or1k",
 .desc = "OpenRISC 1000",
 .license = "LGPL3",
 .bits = 32,
 .arch = "or1k",
 .esil = false,
 .op = &or1k_op,
};

#ifndef R2_PLUGIN_INCORE
R_API RLibStruct radare_plugin = {
 .type = R_LIB_TYPE_ANAL,
 .data = &r_anal_plugin_or1k,
 .version = R2_VERSION
};
#endif
