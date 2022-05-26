# 1 "project/radare2/libr/anal/p/anal_tms320_c55x_plus.c"


#include <string.h>
#include <r_types.h>
#include <r_lib.h>
#include <r_asm.h>
#include <r_anal.h>

ut32 get_ins_len(ut8 opcode);

int tms320_c55x_plus_op(RAnal *anal, RAnalOp *op, ut64 addr, const ut8 *buf, int len) {
 ut16 *ins = (ut16*)buf;
 ut32 ins_len;

 if (!buf || len <= 0) {
  return 0;
 }

 ins_len = get_ins_len(buf[0]);
 if (ins_len == 0) {
  return 0;
 }

 op->addr = addr;
 op->size = ins_len;

 if (ins_len == 1) {
  if (*ins == 0x20) {
   op->type = R_ANAL_OP_TYPE_NOP;
  } else if (*ins == 0x21) {
   op->type = R_ANAL_OP_TYPE_RET;
  }
 } else if (ins_len >= 4 && buf[0] == 0xD8) {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = (buf[1] << 16) | (buf[2] << 8) | buf[3];
 } else if (ins_len >= 2 && buf[0] == 0x6A) {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = addr + ((st8)buf[1]) + ins_len;
 } else if (ins_len >= 3 && buf[0] == 0x9A) {

  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = addr + (st16)((buf[1] << 8) | buf[2]) + ins_len;
 } else if (ins_len >= 4 && buf[0] == 0x9C) {

  op->type = R_ANAL_OP_TYPE_JMP;
  op->jump = (buf[1] << 16) | (buf[2] << 8) | buf[3];
 } else if (ins_len >= 3 && buf[0] == 0x68) {

  op->type = R_ANAL_OP_TYPE_JMP;
  op->jump = addr + (st16)((buf[1] << 8) | buf[2]) + ins_len;
  } else if (ins_len == 2 && buf[0] == 0x02) {


  op->type = R_ANAL_OP_TYPE_UCALL;
  op->fail = addr + ins_len;
  } else if (ins_len >= 3 && buf[0] == 0x69) {

  op->type = R_ANAL_OP_TYPE_CALL;
  op->jump = addr + (st16)((buf[1] << 8) | buf[2]) + ins_len;
  } else if (ins_len >= 3 && buf[0] == 0x9D) {

  op->type = R_ANAL_OP_TYPE_CALL;
  op->jump = (buf[1] << 16) | (buf[2] << 8) | buf[3];
  } else if (ins_len >= 3 && buf[0] == 0x9B) {

  op->type = R_ANAL_OP_TYPE_CALL;
  op->jump = addr + (st16)((buf[1] << 8) | buf[2]) + ins_len;
  } else if (ins_len >= 4 && buf[0] == 0xD9) {

  op->type = R_ANAL_OP_TYPE_CALL;
  op->jump = (buf[1] << 16) | (buf[2] << 8) | buf[3];
 } else {
  op->type = R_ANAL_OP_TYPE_UNK;
 }
 return op->size;
}
