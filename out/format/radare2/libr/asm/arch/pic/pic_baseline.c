# 1 "project/radare2/libr/asm/arch/pic/pic_baseline.c"


#include "pic_baseline.h"

static const PicBaselineOpInfo pic_baseline_op_info[PIC_BASELINE_OPCODE_INVALID] = {
  { "nop", PIC_BASELINE_OP_ARGS_NONE },
  { "option", PIC_BASELINE_OP_ARGS_NONE },
  { "sleep", PIC_BASELINE_OP_ARGS_NONE },
  { "clrwdt", PIC_BASELINE_OP_ARGS_NONE },
  { "tris", PIC_BASELINE_OP_ARGS_3F },
  { "movlb", PIC_BASELINE_OP_ARGS_3K },
  { "return", PIC_BASELINE_OP_ARGS_NONE },
  { "retfie", PIC_BASELINE_OP_ARGS_NONE },
  { "movwf", PIC_BASELINE_OP_ARGS_5F },
  { "clrf", PIC_BASELINE_OP_ARGS_5F },
  { "clrw", PIC_BASELINE_OP_ARGS_NONE },
  { "subwf", PIC_BASELINE_OP_ARGS_1D_5F },
  { "decf", PIC_BASELINE_OP_ARGS_1D_5F },
  { "iorwf", PIC_BASELINE_OP_ARGS_1D_5F },
  { "andwf", PIC_BASELINE_OP_ARGS_1D_5F },
  { "xorwf", PIC_BASELINE_OP_ARGS_1D_5F },
  { "andwf", PIC_BASELINE_OP_ARGS_1D_5F },
  { "movf", PIC_BASELINE_OP_ARGS_1D_5F },
  { "comf", PIC_BASELINE_OP_ARGS_1D_5F },
  { "incf", PIC_BASELINE_OP_ARGS_1D_5F },
  { "decfsz", PIC_BASELINE_OP_ARGS_1D_5F },
  { "rrf", PIC_BASELINE_OP_ARGS_1D_5F },
  { "rlf", PIC_BASELINE_OP_ARGS_1D_5F },
  { "swapf", PIC_BASELINE_OP_ARGS_1D_5F },
  { "incfsz", PIC_BASELINE_OP_ARGS_1D_5F },
  { "bcf", PIC_BASELINE_OP_ARGS_3B_5F },
  { "bsf", PIC_BASELINE_OP_ARGS_3B_5F },
  { "btfsc", PIC_BASELINE_OP_ARGS_3B_5F },
  { "btfss", PIC_BASELINE_OP_ARGS_3B_5F },
  { "retlw", PIC_BASELINE_OP_ARGS_8K },
  { "call", PIC_BASELINE_OP_ARGS_8K },
  { "goto", PIC_BASELINE_OP_ARGS_9K },
  { "movlw", PIC_BASELINE_OP_ARGS_8K },
  { "iorlw", PIC_BASELINE_OP_ARGS_8K },
  { "andlw", PIC_BASELINE_OP_ARGS_8K },
  { "xorlw", PIC_BASELINE_OP_ARGS_8K }
};

PicBaselineOpcode pic_baseline_get_opcode(ut16 instr) {
 if (instr & 0xf000) {
  return PIC_BASELINE_OPCODE_INVALID;
 }

 switch ((instr >> 6) & 0x3f) {
 case 0x7:
  return PIC_BASELINE_OPCODE_ADDWF;
 case 0x5:
  return PIC_BASELINE_OPCODE_ANDWF;
 case 0x1:
  if (instr & (1 << 5)) {
   return PIC_BASELINE_OPCODE_CLRF;
  }
  if ((instr & 0x1f) == 0) {
   return PIC_BASELINE_OPCODE_CLRW;
  }
  return PIC_BASELINE_OPCODE_INVALID;
 case 0x9:
  return PIC_BASELINE_OPCODE_COMF;
 case 0x3:
  return PIC_BASELINE_OPCODE_DECF;
 case 0xb:
  return PIC_BASELINE_OPCODE_DECFSZ;
 case 0xa:
  return PIC_BASELINE_OPCODE_INCF;
 case 0xf:
  return PIC_BASELINE_OPCODE_INCFSZ;
 case 0x4:
  return PIC_BASELINE_OPCODE_IORWF;
 case 0x8:
  return PIC_BASELINE_OPCODE_MOVF;
 case 0x0:
  if (instr & (1 << 5)) {
   return PIC_BASELINE_OPCODE_MOVWF;
  } else {
   switch (instr & 0x1f) {
   case 0x0:
    return PIC_BASELINE_OPCODE_NOP;
   case 0x4:
    return PIC_BASELINE_OPCODE_CLRWDT;
   case 0x2:
    return PIC_BASELINE_OPCODE_OPTION;
   case 0x3:
    return PIC_BASELINE_OPCODE_SLEEP;
   case 0x1:
   case 0x5:
   case 0x6:
   case 0x7:
    return PIC_BASELINE_OPCODE_TRIS;
   case 0x10:
   case 0x11:
   case 0x12:
   case 0x13:
   case 0x14:
   case 0x15:
   case 0x16:
   case 0x17:
    return PIC_BASELINE_OPCODE_MOVLB;
   case 0x1e:
    return PIC_BASELINE_OPCODE_RETURN;
   case 0x1f:
    return PIC_BASELINE_OPCODE_RETFIE;
   default:
    return PIC_BASELINE_OPCODE_INVALID;
   }
  }
 case 0xd:
  return PIC_BASELINE_OPCODE_RLF;
 case 0xc:
  return PIC_BASELINE_OPCODE_RRF;
 case 0x2:
  return PIC_BASELINE_OPCODE_SUBWF;
 case 0xe:
  return PIC_BASELINE_OPCODE_SWAPF;
 case 0x6:
  return PIC_BASELINE_OPCODE_XORWF;
 case 0x10:
 case 0x11:
 case 0x12:
 case 0x13:
  return PIC_BASELINE_OPCODE_BCF;
 case 0x14:
 case 0x15:
 case 0x16:
 case 0x17:
  return PIC_BASELINE_OPCODE_BSF;
 case 0x18:
 case 0x19:
 case 0x1a:
 case 0x1b:
  return PIC_BASELINE_OPCODE_BTFSC;
 case 0x1c:
 case 0x1d:
 case 0x1e:
 case 0x1f:
  return PIC_BASELINE_OPCODE_BTFSS;
 case 0x38:
 case 0x39:
 case 0x3a:
 case 0x3b:
  return PIC_BASELINE_OPCODE_ANDLW;
 case 0x24:
 case 0x25:
 case 0x26:
 case 0x27:
  return PIC_BASELINE_OPCODE_CALL;
 case 0x28:
 case 0x29:
 case 0x2a:
 case 0x2b:
 case 0x2c:
 case 0x2d:
 case 0x2e:
 case 0x2f:
  return PIC_BASELINE_OPCODE_GOTO;
 case 0x34:
 case 0x35:
 case 0x36:
 case 0x37:
  return PIC_BASELINE_OPCODE_IORLW;
 case 0x30:
 case 0x31:
 case 0x32:
 case 0x33:
  return PIC_BASELINE_OPCODE_MOVLW;
 case 0x20:
 case 0x21:
 case 0x22:
 case 0x23:
  return PIC_BASELINE_OPCODE_RETLW;
 case 0x3c:
 case 0x3d:
 case 0x3e:
 case 0x3f:
  return PIC_BASELINE_OPCODE_XORLW;
 default:
  return PIC_BASELINE_OPCODE_INVALID;
 }
}


const PicBaselineOpInfo *pic_baseline_get_op_info(PicBaselineOpcode opcode) {
 if (opcode >= PIC_BASELINE_OPCODE_INVALID) {
  return NULL;
 }
 return &pic_baseline_op_info[opcode];
}


int pic_baseline_disassemble(RAsmOp *op, char *opbuf, const ut8 *b, int l) {
#define EMIT_INVALID { \
 op->size = 1; \
 strcpy (opbuf, "invalid"); \
 return 1; \
}
 if (!b || l < 2) {
  EMIT_INVALID
 }

 ut16 instr = r_read_le16 (b);
 PicBaselineOpcode opcode = pic_baseline_get_opcode (instr);
 if (opcode == PIC_BASELINE_OPCODE_INVALID) {
  EMIT_INVALID
 }

 const PicBaselineOpInfo *op_info = pic_baseline_get_op_info(opcode);
 if (!op_info) {
  EMIT_INVALID
 }

#undef EMIT_INVALID

 op->size = 2;

 const char *buf_asm = "invalid";
 switch (op_info->args) {
 case PIC_BASELINE_OP_ARGS_NONE:
  buf_asm = op_info->mnemonic;
  break;
 case PIC_BASELINE_OP_ARGS_2F:
  buf_asm = sdb_fmt ("%s 0x%x", op_info->mnemonic, instr & PIC_BASELINE_OP_ARGS_2F_MASK_F);
  break;
 case PIC_BASELINE_OP_ARGS_3F:
  buf_asm = sdb_fmt ("%s 0x%x", op_info->mnemonic, instr & PIC_BASELINE_OP_ARGS_3F_MASK_F);
  break;
 case PIC_BASELINE_OP_ARGS_3K:
  buf_asm = sdb_fmt ("%s 0x%x", op_info->mnemonic, instr & PIC_BASELINE_OP_ARGS_3K_MASK_K);
  break;
 case PIC_BASELINE_OP_ARGS_1D_5F:
  buf_asm = sdb_fmt ("%s 0x%x, %c", op_info->mnemonic, instr & PIC_BASELINE_OP_ARGS_1D_5F_MASK_F,
      (instr & PIC_BASELINE_OP_ARGS_1D_5F_MASK_D) >> 5 ? 'f' : 'w');
  break;
 case PIC_BASELINE_OP_ARGS_5F:
  buf_asm = sdb_fmt ("%s 0x%x", op_info->mnemonic, instr & PIC_BASELINE_OP_ARGS_5F_MASK_F);
  break;
 case PIC_BASELINE_OP_ARGS_3B_5F:
  buf_asm = sdb_fmt ("%s 0x%x, 0x%x", op_info->mnemonic, instr & PIC_BASELINE_OP_ARGS_3B_5F_MASK_F,
      (instr & PIC_BASELINE_OP_ARGS_3B_5F_MASK_B) >> 5);
  break;
 case PIC_BASELINE_OP_ARGS_8K:
  buf_asm = sdb_fmt ("%s 0x%x", op_info->mnemonic, instr & PIC_BASELINE_OP_ARGS_8K_MASK_K);
  break;
 case PIC_BASELINE_OP_ARGS_9K:
  buf_asm = sdb_fmt ("%s 0x%x", op_info->mnemonic, instr & PIC_BASELINE_OP_ARGS_9K_MASK_K);
  break;
 }
 strcpy (opbuf, buf_asm);

 return op->size;
}
