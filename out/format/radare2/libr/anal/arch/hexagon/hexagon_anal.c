# 1 "project/radare2/libr/anal/arch/hexagon/hexagon_anal.c"


#include <stdio.h>
#include <stdbool.h>
#include <r_types.h>
#include <r_util.h>
#include <r_asm.h>
#include <r_anal.h>
#include "hexagon.h"
#include "hexagon_insn.h"

int hexagon_anal_instruction(HexInsn *hi, RAnalOp *op) {
 op->vliw = hi->op_count;
 switch (hi->instruction) {
 case HEX_INS_CALL__R22_2: {

  op->type = R_ANAL_OP_TYPE_CALL;
  op->jump = op->addr + (st32) hi->ops[0].op.imm;
  break;
 }
 case HEX_INS_IF__PU__CALL__R15_2: {

  op->type = R_ANAL_OP_TYPE_CALL;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  break;
 }
 case HEX_INS_IF__NOT_PU_CALL__R15_2: {

  op->type = R_ANAL_OP_TYPE_CALL;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  break;
 }
 case HEX_INS_MULT_P0___CMP_EQ__RS____1____IF__P0_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_GT__RS____1____IF__P0_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___TSTBIT__RS___0____IF__P0_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_EQ__RS____1____IF__P0_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_GT__RS____1____IF__P0_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___TSTBIT__RS___0____IF__P0_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_EQ__RS____1____IF___NOT_P0_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_GT__RS____1____IF___NOT_P0_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___TSTBIT__RS___0____IF___NOT_P0_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_EQ__RS____1____IF___NOT_P0_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_GT__RS____1____IF___NOT_P0_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___TSTBIT__RS___0____IF___NOT_P0_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_EQ__RS___U5____IF__P0_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_EQ__RS___U5____IF__P0_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_EQ__RS___U5____IF___NOT_P0_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_EQ__RS___U5____IF___NOT_P0_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_GT__RS___U5____IF__P0_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_GT__RS___U5____IF__P0_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_GT__RS___U5____IF___NOT_P0_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_GT__RS___U5____IF___NOT_P0_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_GTU__RS___U5____IF__P0_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_GTU__RS___U5____IF__P0_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_GTU__RS___U5____IF___NOT_P0_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_GTU__RS___U5____IF___NOT_P0_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_EQ__RS____1____IF__P1_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_GT__RS____1____IF__P1_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___TSTBIT__RS___0____IF__P1_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_EQ__RS____1____IF__P1_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_GT__RS____1____IF__P1_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___TSTBIT__RS___0____IF__P1_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_EQ__RS____1____IF___NOT_P1_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_GT__RS____1____IF___NOT_P1_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___TSTBIT__RS___0____IF___NOT_P1_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_EQ__RS____1____IF___NOT_P1_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_GT__RS____1____IF___NOT_P1_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___TSTBIT__RS___0____IF___NOT_P1_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_EQ__RS___U5____IF__P1_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_EQ__RS___U5____IF__P1_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_EQ__RS___U5____IF___NOT_P1_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_EQ__RS___U5____IF___NOT_P1_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_GT__RS___U5____IF__P1_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_GT__RS___U5____IF__P1_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_GT__RS___U5____IF___NOT_P1_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_GT__RS___U5____IF___NOT_P1_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_GTU__RS___U5____IF__P1_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_GTU__RS___U5____IF__P1_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_GTU__RS___U5____IF___NOT_P1_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_GTU__RS___U5____IF___NOT_P1_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_EQ__RS__RT____IF__P0_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_EQ__RS__RT____IF__P1_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_EQ__RS__RT____IF__P0_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_EQ__RS__RT____IF__P1_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_EQ__RS__RT____IF___NOT_P0_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_EQ__RS__RT____IF___NOT_P1_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_EQ__RS__RT____IF___NOT_P0_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_EQ__RS__RT____IF___NOT_P1_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_GT__RS__RT____IF__P0_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_GT__RS__RT____IF__P1_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_GT__RS__RT____IF__P0_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_GT__RS__RT____IF__P1_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_GT__RS__RT____IF___NOT_P0_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_GT__RS__RT____IF___NOT_P1_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_GT__RS__RT____IF___NOT_P0_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_GT__RS__RT____IF___NOT_P1_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_GTU__RS__RT____IF__P0_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_GTU__RS__RT____IF__P1_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_GTU__RS__RT____IF__P0_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_GTU__RS__RT____IF__P1_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_GTU__RS__RT____IF___NOT_P0_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_GTU__RS__RT____IF___NOT_P1_NEW__JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P0___CMP_GTU__RS__RT____IF___NOT_P0_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_P1___CMP_GTU__RS__RT____IF___NOT_P1_NEW__JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_JUMP__R22_2: {

  op->type = R_ANAL_OP_TYPE_JMP;
  op->jump = op->addr + (st32) hi->ops[0].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__PU__JUMP_NT__R15_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__PU__JUMP_T__R15_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__NOT_PU_JUMP_NT__R15_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__NOT_PU_JUMP_T__R15_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__PU_NEW__JUMP_NT__R15_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__PU_NEW__JUMP_T__R15_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__NOT_PU_NEW_JUMP_NT__R15_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__NOT_PU_NEW_JUMP_T__R15_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__RS__NOT____0__JUMP_NT__R13_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__RS__NOT____0__JUMP_T__R13_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__RS_GT_EQ___0__JUMP_NT__R13_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__RS_GT_EQ___0__JUMP_T__R13_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__RS__EQ___0__JUMP_NT__R13_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__RS__EQ___0__JUMP_T__R13_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__RS_LT_EQ___0__JUMP_NT__R13_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__RS_LT_EQ___0__JUMP_T__R13_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_RD____U6___JUMP__R9_2: {

  op->type = R_ANAL_OP_TYPE_JMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_MULT_RD___RS___JUMP__R9_2: {

  op->type = R_ANAL_OP_TYPE_JMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_IF__PS_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_IF__PS__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_IF__PS_NEW__DEALLOC_RETURN_T: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_IF__NOT_PS_NEW_DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_IF__NOT_PS_DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_IF__NOT_PS_NEW_DEALLOC_RETURN_T: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_IF__CMP_EQ__NS_NEW__RT___JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__CMP_EQ__NS_NEW__RT___JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF___NOT_CMP_EQ__NS_NEW__RT___JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF___NOT_CMP_EQ__NS_NEW__RT___JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__CMP_GT__NS_NEW__RT___JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__CMP_GT__NS_NEW__RT___JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF___NOT_CMP_GT__NS_NEW__RT___JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF___NOT_CMP_GT__NS_NEW__RT___JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__CMP_GTU__NS_NEW__RT___JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__CMP_GTU__NS_NEW__RT___JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF___NOT_CMP_GTU__NS_NEW__RT___JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF___NOT_CMP_GTU__NS_NEW__RT___JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__CMP_GT__RT__NS_NEW___JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__CMP_GT__RT__NS_NEW___JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF___NOT_CMP_GT__RT__NS_NEW___JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF___NOT_CMP_GT__RT__NS_NEW___JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__CMP_GTU__RT__NS_NEW___JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__CMP_GTU__RT__NS_NEW___JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF___NOT_CMP_GTU__RT__NS_NEW___JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF___NOT_CMP_GTU__RT__NS_NEW___JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__CMP_EQ__NS_NEW___U5___JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__CMP_EQ__NS_NEW___U5___JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF___NOT_CMP_EQ__NS_NEW___U5___JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF___NOT_CMP_EQ__NS_NEW___U5___JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__CMP_GT__NS_NEW___U5___JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__CMP_GT__NS_NEW___U5___JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF___NOT_CMP_GT__NS_NEW___U5___JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF___NOT_CMP_GT__NS_NEW___U5___JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__CMP_GTU__NS_NEW___U5___JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__CMP_GTU__NS_NEW___U5___JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF___NOT_CMP_GTU__NS_NEW___U5___JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF___NOT_CMP_GTU__NS_NEW___U5___JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[2].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__TSTBIT__NS_NEW___0___JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__TSTBIT__NS_NEW___0___JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF___NOT_TSTBIT__NS_NEW___0___JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF___NOT_TSTBIT__NS_NEW___0___JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__CMP_EQ__NS_NEW____1___JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__CMP_EQ__NS_NEW____1___JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF___NOT_CMP_EQ__NS_NEW____1___JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF___NOT_CMP_EQ__NS_NEW____1___JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__CMP_GT__NS_NEW____1___JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF__CMP_GT__NS_NEW____1___JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF___NOT_CMP_GT__NS_NEW____1___JUMP_NT__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_IF___NOT_CMP_GT__NS_NEW____1___JUMP_T__R9_2: {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = op->addr + (st32) hi->ops[1].op.imm;
  op->fail = op->addr + op->size;
  break;
 }
 case HEX_INS_DUPLEX_RD_____1___DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD_____1___IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD_____1___IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD_____1___IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD_____1___IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD____U6___DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD____U6___IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD____U6___IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD____U6___IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD____U6___IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___RS___DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___RS___IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___RS___IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___RS___IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___RS___IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___ADD__RS____1____DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___ADD__RS____1____IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___ADD__RS____1____IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___ADD__RS____1____IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___ADD__RS____1____IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___ADD__RS___1____DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___ADD__RS___1____IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___ADD__RS___1____IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___ADD__RS___1____IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___ADD__RS___1____IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___ADD__SP___U6_2____DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___ADD__SP___U6_2____IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___ADD__SP___U6_2____IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___ADD__SP___U6_2____IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___ADD__SP___U6_2____IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___AND__RS___1____DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___AND__RS___1____IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___AND__RS___1____IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___AND__RS___1____IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___AND__RS___1____IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___AND__RS___255____DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___AND__RS___255____IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___AND__RS___255____IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___AND__RS___255____IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___AND__RS___255____IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMB__RS____U3_0____DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMB__RS____U3_0____IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMB__RS____U3_0____IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMB__RS____U3_0____IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMB__RS____U3_0____IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMH__RS____U3_1____DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMH__RS____U3_1____IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMH__RS____U3_1____IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMH__RS____U3_1____IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMH__RS____U3_1____IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMUB__RS____U4_0____DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMUB__RS____U4_0____IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMUB__RS____U4_0____IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMUB__RS____U4_0____IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMUB__RS____U4_0____IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMUH__RS____U3_1____DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMUH__RS____U3_1____IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMUH__RS____U3_1____IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMUH__RS____U3_1____IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMUH__RS____U3_1____IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMW__RS____U4_2____DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMW__RS____U4_2____IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMW__RS____U4_2____IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMW__RS____U4_2____IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMW__RS____U4_2____IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMW__SP____U5_2____DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMW__SP____U5_2____IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMW__SP____U5_2____IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMW__SP____U5_2____IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___MEMW__SP____U5_2____IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___SXTB__RS____DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___SXTB__RS____IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___SXTB__RS____IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___SXTB__RS____IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___SXTB__RS____IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___SXTH__RS____DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___SXTH__RS____IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___SXTH__RS____IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___SXTH__RS____IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___SXTH__RS____IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___ZXTH__RS____DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___ZXTH__RS____IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___ZXTH__RS____IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___ZXTH__RS____IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RD___ZXTH__RS____IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE___0___U2____DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE___0___U2____IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE___0___U2____IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE___0___U2____IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE___0___U2____IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE___0__RS____DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE___0__RS____IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE___0__RS____IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE___0__RS____IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE___0__RS____IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE___1___U2____DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE___1___U2____IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE___1___U2____IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE___1___U2____IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE___1___U2____IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE___2___U2____DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE___2___U2____IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE___2___U2____IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE___2___U2____IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE___2___U2____IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE___3___U2____DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE___3___U2____IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE___3___U2____IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE___3___U2____IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE___3___U2____IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE__RS___0____DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE__RS___0____IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE__RS___0____IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE__RS___0____IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___COMBINE__RS___0____IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___MEMD__SP____U5_3____DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___MEMD__SP____U5_3____IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___MEMD__SP____U5_3____IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___MEMD__SP____U5_3____IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RDD___MEMD__SP____U5_3____IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RX___ADD__RS__RX____DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RX___ADD__RS__RX____IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RX___ADD__RS__RX____IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RX___ADD__RS__RX____IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RX___ADD__RS__RX____IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RX___ADD__RX___S7____DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RX___ADD__RX___S7____IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RX___ADD__RX___S7____IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RX___ADD__RX___S7____IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RX___ADD__RX___S7____IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RX___ADD__RX__RS____DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RX___ADD__RX__RS____IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RX___ADD__RX__RS____IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RX___ADD__RX__RS____IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_RX___ADD__RX__RS____IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_IF___NOT__P0__RD____0___DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_IF___NOT__P0__RD____0___IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_IF___NOT__P0__RD____0___IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_IF___NOT__P0__RD____0___IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_IF___NOT__P0__RD____0___IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_IF___NOT__P0_NEW__RD____0___DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_IF___NOT__P0_NEW__RD____0___IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_IF___NOT__P0_NEW__RD____0___IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_IF___NOT__P0_NEW__RD____0___IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_IF___NOT__P0_NEW__RD____0___IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_IF__P0__RD____0___DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_IF__P0__RD____0___IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_IF__P0__RD____0___IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_IF__P0__RD____0___IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_IF__P0__RD____0___IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_IF__P0_NEW__RD____0___DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_IF__P0_NEW__RD____0___IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_IF__P0_NEW__RD____0___IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_IF__P0_NEW__RD____0___IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_IF__P0_NEW__RD____0___IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_P0___CMP_EQ__RS___U2____DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_P0___CMP_EQ__RS___U2____IF___NOT__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_P0___CMP_EQ__RS___U2____IF___NOT__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_P0___CMP_EQ__RS___U2____IF__P0__DEALLOC_RETURN: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 case HEX_INS_DUPLEX_P0___CMP_EQ__RS___U2____IF__P0_NEW__DEALLOC_RETURN_NT: {

  op->type = R_ANAL_OP_TYPE_RET;
  break;
 }
 }
 return op->size;
}
