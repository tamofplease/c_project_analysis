# 1 "project/radare2/libr/anal/p/anal_arc.c"


#include <string.h>
#include <r_types.h>
#include <r_lib.h>
#include <r_asm.h>
#include <r_anal.h>

#define ARC_REG_ILINK1 0x1d
#define ARC_REG_ILINK2 0x1e
#define ARC_REG_BLINK 0x1f
#define ARC_REG_LIMM 0x3e
#define ARC_REG_PCL 0x3f


typedef struct arc_fields_t {
 ut8 opcode;
 ut8 subopcode;
 ut8 format;
 ut8 format2;
 ut8 cond;
 ut16 a;
 ut16 b;
 ut16 c;
 ut8 mode_aa;
 ut8 mode_zz;
 ut8 mode_m;
 ut8 mode_n;
 st64 imm;
 st64 limm;
} arc_fields;

static void arccompact_dump_fields(ut64 addr, ut32 words[2], arc_fields *f) {
#if DEBUG

 eprintf ("DEBUG: 0x%04llx: %08x op=0x%x subop=0x%x format=0x%x fields.a=0x%x fields.b=0x%x fields.c=0x%x imm=%i limm=%lli\n",
  addr, words[0], f->opcode, f->subopcode, f->format, f->a, f->b, f->c, f->imm, f->limm);
#endif
}




static inline ut32 r_read_me32_arc(const void *src) {
 const ut8 *s = src;
 return (((ut32)s[1]) << 24) | (((ut32)s[0]) << 16) | (((ut32)s[3]) << 8) | (((ut32)s[2]) << 0);
}

static int sex(int bits, int imm) {
 int maxsint = (1 << (bits - 1)) - 1;
 int maxuint = (1 << (bits)) - 1;

 if (imm > maxsint) {

  imm = -maxuint + imm - 1;
 }
 return imm;
}

#define SEX_S7(imm) sex (7, imm);
#define SEX_S8(imm) sex (8, imm);
#define SEX_S9(imm) sex (9, imm);
#define SEX_S10(imm) sex (10, imm);
#define SEX_S12(imm) sex (12, imm);
#define SEX_S13(imm) sex (13, imm);
#define SEX_S21(imm) sex (21, imm);
#define SEX_S25(imm) sex (25, imm);

static int map_cond2radare(ut8 cond) {
 switch (cond) {
 case 0: return R_ANAL_COND_AL;
 case 1: return R_ANAL_COND_EQ;
 case 2: return R_ANAL_COND_NE;
 case 3: return R_ANAL_COND_PL;
 case 4: return R_ANAL_COND_MI;
 case 7: return R_ANAL_COND_VS;
 case 8: return R_ANAL_COND_VC;
 case 9: return R_ANAL_COND_GT;
 case 0xa: return R_ANAL_COND_GE;
 case 0xb: return R_ANAL_COND_LT;
 case 0xc: return R_ANAL_COND_LE;
 case 0xd: return R_ANAL_COND_HI;
 case 0xe: return R_ANAL_COND_LS;
#if 0




 case 5: return R_ANAL_COND_?? - CS,C,LO - Carry set & LO
 case 6: return R_ANAL_COND_?? - CC,NC,HS - Carry clear & HS

 case 0xf: return R_ANAL_COND_?? - PNZ - Positive non-zero
#endif
 }
 return -1;
}

static void arcompact_jump(RAnalOp *op, ut64 addr, ut64 jump, ut8 delay) {
 op->jump = jump;
 op->fail = addr + op->size;
 op->delay = delay;
}

static void arcompact_jump_cond(RAnalOp *op, ut64 addr, ut64 jump, ut8 delay, ut8 cond) {
 arcompact_jump (op, addr, jump, delay);
 op->cond = map_cond2radare (cond);
}

static void arcompact_branch(RAnalOp *op, ut64 addr, st64 offset, ut8 delay) {
 arcompact_jump (op, addr, (addr & ~3) + offset, delay);
}

static void map_zz2refptr(RAnalOp *op, ut8 mode_zz) {
 switch (mode_zz) {
 case 0: op->refptr = 4; break;
 case 1: op->refptr = 1; break;
 case 2: op->refptr = 2; break;
 default:
  op->type = R_ANAL_OP_TYPE_ILL;
  break;
 }
}

static int arcompact_genops_jmp(RAnalOp *op, ut64 addr, arc_fields *f, ut64 basic_type) {
 ut64 type_ujmp;
 ut64 type_cjmp;
 ut64 type_ucjmp;

 switch (basic_type) {
 case R_ANAL_OP_TYPE_JMP:
  type_ujmp = R_ANAL_OP_TYPE_UJMP;
  type_cjmp = R_ANAL_OP_TYPE_CJMP;
  type_ucjmp = R_ANAL_OP_TYPE_UCJMP;
  break;
 case R_ANAL_OP_TYPE_CALL:
  type_ujmp = R_ANAL_OP_TYPE_UCALL;
  type_cjmp = R_ANAL_OP_TYPE_CCALL;
  type_ucjmp = R_ANAL_OP_TYPE_UCCALL;
  break;
 default:
  return -1;
 }

 f->cond = f->a & 0x1f;

 switch (f->format) {
 case 0:
  if (f->c == ARC_REG_LIMM) {

   op->type = basic_type;
   arcompact_jump (op, addr, f->limm, f->mode_n);
   return op->size;
  }
  if (f->c == ARC_REG_ILINK1 || f->c == ARC_REG_ILINK2 || f->c == ARC_REG_BLINK) {


   op->type = R_ANAL_OP_TYPE_RET;
   op->delay = f->mode_n;
   return op->size;
  }
  op->type = type_ujmp;
  return op->size;
 case 1:
  op->type = basic_type;
  arcompact_jump (op, addr, f->c, f->mode_n);
  return op->size;
 case 2:
  op->type = basic_type;
  f->imm = (f->a << 6 | f->c);
  f->imm = SEX_S12 (f->imm);
  arcompact_jump (op, addr, f->imm, f->mode_n);
  return op->size;
 case 3:
  if (f->mode_m == 0) {
   if (f->c == ARC_REG_LIMM) {
    op->type = type_cjmp;
    arcompact_jump_cond (op, addr, f->limm, f->mode_n, f->cond);
    return op->size;
   }
   if (f->c == ARC_REG_ILINK1 || f->c == ARC_REG_ILINK2 || f->c == ARC_REG_BLINK) {


    op->type = R_ANAL_OP_TYPE_CRET;
    op->cond = map_cond2radare (f->cond);
    op->delay = f->mode_n;
    return op->size;
   }

   op->cond = map_cond2radare (f->cond);
   op->type = type_ucjmp;
   return op->size;
  }

  op->type = type_cjmp;
  arcompact_jump_cond (op, addr, f->c, f->mode_n, f->cond);
  return op->size;
 }


 return 0;
}

static int arcompact_genops(RAnalOp *op, ut64 addr, ut32 words[2]) {
 arc_fields fields = {0};

 fields.format = (words[0] & 0x00c00000) >> 22;
 fields.subopcode = (words[0] & 0x003f0000) >> 16;
 fields.c = (words[0] & 0x00000fc0) >> 6;
 fields.a = (words[0] & 0x0000003f);
 fields.b = (words[0] & 0x07000000) >> 24 | (words[0] & 0x7000) >> 9;
 fields.mode_n = 0;


 if (fields.b == ARC_REG_LIMM) {
  op->size = 8;
  fields.limm = words[1];

 } else if ((fields.format == 0 || fields.format == 1) && (fields.a == ARC_REG_LIMM)) {
  op->size = 8;
  fields.limm = words[1];
 } else if ((fields.format == 0) && (fields.c == ARC_REG_LIMM)) {
  op->size = 8;
  fields.limm = words[1];
 } else if ((fields.format == 3) && ((fields.a & 0x20) == 0x20) && (fields.c == ARC_REG_LIMM)) {
  op->size = 8;
  fields.limm = words[1];
 }

 if (fields.format == 1) {

  fields.imm = fields.c;
 } else if (fields.format == 2) {

  fields.imm = SEX_S12 (fields.c | fields.a << 6);
 }

 switch (fields.subopcode) {
 case 0x00:
  if ((fields.format == 1 || fields.format == 2) && fields.b == ARC_REG_PCL) {

   op->ptr = (addr & ~3) + fields.imm;
   op->refptr = 1;
  }
 case 0x01:
 case 0x14:
 case 0x15:
 case 0x16:
  op->type = R_ANAL_OP_TYPE_ADD;
  break;
 case 0x02:
 case 0x03:
 case 0x0e:
 case 0x17:
 case 0x18:
 case 0x19:
  op->type = R_ANAL_OP_TYPE_SUB;
  break;
 case 0x04:
 case 0x06:
 case 0x10:
 case 0x13:
  op->type = R_ANAL_OP_TYPE_AND;
  break;
 case 0x05:
 case 0x0f:
  op->type = R_ANAL_OP_TYPE_OR;
  break;
 case 0x07:
 case 0x12:
  op->type = R_ANAL_OP_TYPE_XOR;
  break;
 case 0x08:
 case 0x09:
  op->type = R_ANAL_OP_TYPE_CMOV;
  break;
 case 0x0a:
  if (fields.format == 2) {
   op->type = R_ANAL_OP_TYPE_MOV;
   op->val = SEX_S12 (fields.a << 6 | fields.c);
  } else if (fields.format == 3) {
   fields.cond = fields.a & 0x1f;
   op->cond = map_cond2radare (fields.cond);
   op->type = R_ANAL_OP_TYPE_CMOV;
   if ((fields.a & 0x20)) {

    op->val = fields.c;
   } else if (fields.c == ARC_REG_LIMM) {

    op->val = fields.limm;
   }
  }
  break;
 case 0x0b:
 case 0x0c:
 case 0x0d:
 case 0x11:
  op->type = R_ANAL_OP_TYPE_CMP;
  break;
 case 0x1a:
 case 0x1b:
 case 0x1c:
 case 0x1d:
  op->type = R_ANAL_OP_TYPE_MUL;
  break;
 case 0x21:
  fields.mode_n = 1;

 case 0x20:
  fields.mode_m = (words[0] & 0x20) >> 5;
  arcompact_genops_jmp (op, addr, &fields, R_ANAL_OP_TYPE_JMP);
  break;
 case 0x23:
  fields.mode_n = 1;

 case 0x22:
  fields.mode_m = (words[0] & 0x20) >> 5;
  arcompact_genops_jmp (op, addr, &fields, R_ANAL_OP_TYPE_CALL);
  break;
 case 0x1e:
 case 0x1f:
 case 0x24:
 case 0x25:
 case 0x26:
 case 0x27:
 case 0x2c:
 case 0x2d:
 case 0x2e:
 case 0x38:
 case 0x39:
 case 0x3a:
 case 0x3b:
 case 0x3c:
 case 0x3d:
 case 0x3e:
 case 0x3f:
  op->type = R_ANAL_OP_TYPE_ILL;
  break;
 case 0x28:


  switch (fields.format) {
  case 2:
   fields.imm = SEX_S13 ((fields.c | (fields.a << 6)) << 1);
   op->jump = (addr & ~3) + fields.imm;
   op->type = R_ANAL_OP_TYPE_CJMP;
   op->fail = addr + op->size;
   break;
  case 3:
   fields.imm = fields.c << 1;
   fields.cond = fields.a & 0x1f;
   op->cond = map_cond2radare (fields.a & 0x1f);
   op->jump = (addr & ~3) + fields.imm;
   op->type = R_ANAL_OP_TYPE_CJMP;
   op->fail = addr + op->size;
   break;
  default:
   op->type = R_ANAL_OP_TYPE_ILL;
   break;
  }
  break;
 case 0x29:
  op->type = R_ANAL_OP_TYPE_MOV;
  break;
 case 0x2a:
 case 0x2b:
  op->type = R_ANAL_OP_TYPE_IO;
  break;
 case 0x2f:
  switch (fields.a) {
  case 0:
   op->type = R_ANAL_OP_TYPE_SAL;
   break;
  case 1:
   op->type = R_ANAL_OP_TYPE_SAR;
   break;
  case 2:
   op->type = R_ANAL_OP_TYPE_SHR;
   break;
  case 3:
  case 4:
   op->type = R_ANAL_OP_TYPE_ROR;
   break;
  case 5:
  case 6:
  case 7:
  case 8:

   op->type = R_ANAL_OP_TYPE_MOV;

   break;
  case 9:
   op->type = R_ANAL_OP_TYPE_ABS;
   break;
  case 0xa:
   op->type = R_ANAL_OP_TYPE_NOT;
   break;
  case 0xb:
   op->type = R_ANAL_OP_TYPE_ROL;
   break;
  case 0xc:
   op->type = R_ANAL_OP_TYPE_XCHG;
   break;
  case 0x3f:
   switch (fields.b) {
   case 1:

    op->type = R_ANAL_OP_TYPE_NULL;
    break;
   case 2:
    op->type = R_ANAL_OP_TYPE_SWI;
    break;
   case 3:

    op->type = R_ANAL_OP_TYPE_NULL;
    break;
   case 4:
    op->type = R_ANAL_OP_TYPE_RET;
    break;
   case 5:
    op->type = R_ANAL_OP_TYPE_TRAP;
    break;
   default:
    op->type = R_ANAL_OP_TYPE_ILL;
    break;
   }
   break;
  default:
   op->type = R_ANAL_OP_TYPE_ILL;
   break;
  }
  break;
 case 0x30:
 case 0x31:
 case 0x32:
 case 0x33:
 case 0x34:
 case 0x35:
 case 0x36:
 case 0x37:
  op->type = R_ANAL_OP_TYPE_MOV;
  break;
 }

 arccompact_dump_fields (addr, words, &fields);
 return op->size;
}

static int arcompact_op(RAnal *anal, RAnalOp *op, ut64 addr, const ut8 *data, int len) {
 ut32 words[2];
 arc_fields fields;





 if (addr % 2 != 0) {

  op->type = R_ANAL_OP_TYPE_ILL;
  return 0;
 }
 if (len < 8) {

  return 0;
 }

 op->type = R_ANAL_OP_TYPE_UNK;
 op->ptr = UT64_MAX;
 op->val = UT64_MAX;
 op->jump = UT64_MAX;
 op->fail = UT64_MAX;
 op->refptr = 0;
 op->delay = 0;

 if (anal->big_endian) {
  words[0] = r_read_be32 (&data[0]);
  words[1] = r_read_be32 (&data[4]);
 } else {
  words[0] = r_read_me32_arc (&data[0]);
  words[1] = r_read_me32_arc (&data[4]);
 }

 fields.opcode = (words[0] & 0xf8000000) >> 27;

 op->size = (fields.opcode >= 0x0c)? 2: 4;
 op->nopcode = op->size;


 switch (fields.opcode) {
 case 0:
  fields.format = (words[0] & 0x00010000) >> 16;
  fields.a = (words[0] & 0x07fe0000) >> 17;
  fields.b = (words[0] & 0x0000ffc0) >> 6;
  fields.c = (words[0] & 0x0000000f);
  fields.mode_n = (words[0] & 0x20) >> 5;
  fields.limm = fields.a << 1 | fields.b << 11;

  if (fields.format == 0) {

   fields.limm = SEX_S21 (fields.limm);
   fields.cond = (words[0] & 0x1f);
   op->cond = map_cond2radare (fields.cond);
   op->type = R_ANAL_OP_TYPE_CJMP;
  } else {

   fields.limm |= (fields.c & 0x0f) << 21;


   fields.limm = SEX_S25 (fields.limm);
   op->type = R_ANAL_OP_TYPE_JMP;
  }
  arcompact_branch (op, addr, fields.limm, fields.mode_n);
  break;
 case 1:
  fields.format = (words[0] & 0x00010000) >> 16;
  fields.mode_n = (words[0] & 0x20) >> 5;

  if (fields.format == 1) {
   fields.format2 = (words[0] & 0x10) >> 4;
   fields.subopcode = (words[0] & 0x0f);
   fields.b = (words[0] & 0x07000000) >> 24 | (words[0] & 0x7000) >> 9;
   fields.c = (words[0] & 0x00000fc0) >> 6;
   fields.imm = SEX_S9 ((words[0] & 0x00fe0000) >> 16 | (words[0] & 0x8000) >> 7);
   op->type = R_ANAL_OP_TYPE_CJMP;

   if (fields.format2 == 0) {

    if (fields.b == ARC_REG_LIMM || fields.c == ARC_REG_LIMM) {
     op->size = 8;
     fields.limm = words[1];
    }

   } else {


   }
   arcompact_branch (op, addr, fields.imm, fields.mode_n);
  } else {
   fields.format2 = (words[0] & 0x00020000) >> 17;
   fields.a = (words[0] & 0x07fc0000) >> 18;
   fields.b = (words[0] & 0x0000ffc0) >> 6;
   fields.c = (words[0] & 0x0000000f);
   fields.imm = fields.a << 2 | fields.b << 11;

   if (fields.format2 == 0) {

    fields.imm = SEX_S21 (fields.imm);
    fields.cond = (words[0] & 0x1f);
    op->cond = map_cond2radare (fields.cond);
    op->type = R_ANAL_OP_TYPE_CCALL;
   } else {

    fields.imm |= (fields.c & 0x0f) << 21;


    fields.imm = SEX_S25 (fields.imm);
    op->type = R_ANAL_OP_TYPE_CALL;
   }
   arcompact_branch (op, addr, fields.imm, fields.mode_n);
  }
  break;
 case 2:
  fields.a = (words[0] & 0x0000003f);
  fields.b = (words[0] & 0x07000000) >> 24 | (words[0] & 0x7000) >> 9;
  fields.imm = SEX_S9 ((words[0] & 0x00ff0000) >> 16 | (words[0] & 0x8000) >> 7);

  fields.mode_zz = (words[0] & 0x180) >> 7;

  op->type = R_ANAL_OP_TYPE_LOAD;


  if (fields.a == ARC_REG_PCL || fields.a == 61 || (fields.a >= 0x20 && fields.a <= 0x2b)) {
   op->type = R_ANAL_OP_TYPE_ILL;
  }

  map_zz2refptr (op, fields.mode_zz);

  if (fields.b == ARC_REG_LIMM) {
   op->size = 8;
   fields.limm = words[1];
   op->ptr = fields.limm + fields.imm;

  } else if (fields.b == ARC_REG_PCL) {
   op->ptr = (addr & ~3) + fields.imm;
  }

  break;
 case 3:
  fields.c = (words[0] & 0xfc0) >> 6;
  fields.b = (words[0] & 0x07000000) >> 24 | (words[0] & 0x7000) >> 9;
  fields.imm = SEX_S9 ((words[0] & 0x00ff0000) >> 16 | (words[0] & 0x8000) >> 7);

  fields.mode_zz = (words[0] & 0x6) >> 1;

  op->type = R_ANAL_OP_TYPE_STORE;

  map_zz2refptr (op, fields.mode_zz);

  if (fields.b == ARC_REG_LIMM) {
   op->size = 8;
   fields.limm = words[1];
   op->ptr = fields.limm;
  } else if (fields.c == ARC_REG_LIMM) {
   op->size = 8;
   fields.limm = words[1];
   op->val = fields.limm;
  }

  if (fields.b == ARC_REG_PCL) {
   op->ptr = (addr & ~3) + fields.imm;
  }

  break;
 case 4:
  op->type = R_ANAL_OP_TYPE_MOV;
  return arcompact_genops (op, addr, words);
 case 5:
 case 6:
 case 7:
 case 8:
  fields.subopcode = (words[0] & 0x003f0000) >> 16;
  fields.format = (words[0] & 0x00c00000) >> 22;
  fields.c = (words[0] & 0x00000fc0) >> 6;
  fields.a = (words[0] & 0x0000003f);
  fields.b = (words[0] & 0x07000000) >> 24 | (words[0] & 0x7000) >> 9;

  if (fields.b == ARC_REG_LIMM) {
   op->size = 8;
   fields.limm = words[1];
  } else if ((fields.format == 0 || fields.format == 1) && (fields.a == ARC_REG_LIMM)) {
   op->size = 8;
   fields.limm = words[1];
  } else if ((fields.format == 0) && (fields.c == ARC_REG_LIMM)) {
   op->size = 8;
   fields.limm = words[1];
  } else if ((fields.format == 3) && ((fields.a & 0x20) == 0x20) && (fields.c == ARC_REG_LIMM)) {
   op->size = 8;
   fields.limm = words[1];
  }



  op->type = R_ANAL_OP_TYPE_SHR;
  break;
 case 0x09:
 case 0x0a:
 case 0x0b:
  op->type = R_ANAL_OP_TYPE_UNK;
  break;
 case 0x0c:
  op->type = R_ANAL_OP_TYPE_LOAD;
  fields.subopcode = (words[0] & 0x00180000) >> 19;




  switch (fields.subopcode) {
  case 0:
  case 1:
  case 2:
   op->type = R_ANAL_OP_TYPE_LOAD;
   break;
  case 3:
   op->type = R_ANAL_OP_TYPE_ADD;
   break;
  }
  break;
 case 0x0d:
  fields.subopcode = (words[0] & 0x00180000) >> 19;




  switch (fields.subopcode) {
  case 0:
   op->type = R_ANAL_OP_TYPE_ADD;
   break;
  case 1:
   op->type = R_ANAL_OP_TYPE_SUB;
   break;
  case 2:
   op->type = R_ANAL_OP_TYPE_SHL;
   break;
  case 3:
   op->type = R_ANAL_OP_TYPE_SHR;
   break;
  }
  break;
 case 0x0e:
  fields.subopcode = (words[0] & 0x00180000) >> 19;

  fields.c = (words[0] & 0x00e00000) >> 21 | (words[0] & 0x00070000) >> 13;

  if (fields.c == ARC_REG_LIMM) {
   op->size = 6;
   op->val = (words[0] & 0x0000ffff) << 16 | (words[1] & 0xffff0000) >> 16;
  }

  switch (fields.subopcode) {
  case 0:
   op->type = R_ANAL_OP_TYPE_ADD;
   break;
  case 1:
  case 3:
   op->type = R_ANAL_OP_TYPE_MOV;
   break;
  case 2:
   op->type = R_ANAL_OP_TYPE_CMP;
   break;
  }
  break;
 case 0xf:
  fields.subopcode = (words[0] & 0x001f0000) >> 16;
  fields.c = (words[0] & 0x00e00000) >> (16 + 5);
  fields.b = (words[0] & 0x07000000) >> (16 + 8);

  switch (fields.subopcode) {
  case 0:
   switch (fields.c) {
   case 0:
    op->type = R_ANAL_OP_TYPE_UJMP;
    arcompact_jump (op, 0, 0, 0);
    break;
   case 1:
    op->type = R_ANAL_OP_TYPE_UJMP;
    arcompact_jump (op, 0, 0, 1);
    break;
   case 2:
    op->type = R_ANAL_OP_TYPE_UCALL;
    arcompact_jump (op, 0, 0, 0);
    break;
   case 3:
    op->type = R_ANAL_OP_TYPE_UCALL;
    arcompact_jump (op, 0, 0, 1);
    break;
   case 4:
   case 5:
    op->type = R_ANAL_OP_TYPE_ILL;
    break;
   case 6:
    op->cond = R_ANAL_COND_NE;
    op->type = R_ANAL_OP_TYPE_SUB;
    break;
   case 7:
    switch (fields.b) {
    case 0:
     op->type = R_ANAL_OP_TYPE_NOP;
     op->size = 4;
     break;
    case 1:
    case 2:
    case 3:
     op->type = R_ANAL_OP_TYPE_ILL;
     break;
    case 4:
     op->cond = R_ANAL_COND_EQ;
     op->type = R_ANAL_OP_TYPE_CRET;
     break;
    case 5:
     op->cond = R_ANAL_COND_NE;
     op->type = R_ANAL_OP_TYPE_CRET;
     break;
    case 7:
     op->delay = 1;

    case 6:
     op->type = R_ANAL_OP_TYPE_RET;
     break;
    }
    break;
   }
   break;
  case 1:
  case 3:
  case 8:
  case 9:
  case 0xa:
  case 0x17:
   op->type = R_ANAL_OP_TYPE_ILL;
   break;
  case 2:
   op->type = R_ANAL_OP_TYPE_SUB;
   break;
  case 4:
   op->type = R_ANAL_OP_TYPE_AND;
   break;
  case 5:
   op->type = R_ANAL_OP_TYPE_OR;
   break;
  case 6:

   op->type = R_ANAL_OP_TYPE_AND;
   break;
  case 7:
   op->type = R_ANAL_OP_TYPE_XOR;
   break;
  case 0xb:

   op->type = R_ANAL_OP_TYPE_AND;
   break;
  case 0xc:
   op->type = R_ANAL_OP_TYPE_MUL;
   break;
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x13:
   op->type = R_ANAL_OP_TYPE_CPL;
   break;
  case 0x11:
   op->type = R_ANAL_OP_TYPE_ABS;
   break;
  case 0x12:
   op->type = R_ANAL_OP_TYPE_NOT;
   break;
  case 0x14:
  case 0x15:
  case 0x16:
   op->type = R_ANAL_OP_TYPE_ADD;
   break;
  case 0x18:
   op->type = R_ANAL_OP_TYPE_SAL;
   break;
  case 0x19:
   op->type = R_ANAL_OP_TYPE_SHR;
   break;
  case 0x1a:
   op->type = R_ANAL_OP_TYPE_SAR;
   break;
  case 0x1b:
   op->type = R_ANAL_OP_TYPE_SAL;
   break;
  case 0x1c:
   op->type = R_ANAL_OP_TYPE_SAR;
   break;
  case 0x1d:
   op->type = R_ANAL_OP_TYPE_SHL;
   break;
  case 0x1e:
   op->type = R_ANAL_OP_TYPE_TRAP;



   break;
  case 0x1f:
   op->type = R_ANAL_OP_TYPE_TRAP;


   break;
  }
  break;
 case 0x10:
 case 0x11:
 case 0x12:
 case 0x13:

  op->type = R_ANAL_OP_TYPE_LOAD;
  break;
 case 0x14:
 case 0x15:
 case 0x16:

  op->type = R_ANAL_OP_TYPE_STORE;
  break;
 case 0x17:
  fields.subopcode = (words[0] & 0x00e00000) >> (16 + 5);
  switch (fields.subopcode) {
  case 0:
   op->type = R_ANAL_OP_TYPE_SAL;
   break;
  case 1:
   op->type = R_ANAL_OP_TYPE_SHL;
   break;
  case 2:
   op->type = R_ANAL_OP_TYPE_SAR;
   break;
  case 3:
   op->type = R_ANAL_OP_TYPE_SUB;
   break;
  case 4:
   op->type = R_ANAL_OP_TYPE_OR;
   break;
  case 5:
  case 6:
  case 7:
   op->type = R_ANAL_OP_TYPE_AND;
   break;
  }
  break;
 case 0x18:
  fields.subopcode = (words[0] & 0x00e00000) >> (16 + 5);
  switch (fields.subopcode) {
  case 0:
  case 1:
   op->type = R_ANAL_OP_TYPE_LOAD;
   break;
  case 2:
  case 3:
   op->type = R_ANAL_OP_TYPE_STORE;
   break;
  case 4:
   op->type = R_ANAL_OP_TYPE_ADD;
   break;
  case 5:
   fields.b = (words[0] & 0x07000000) >> (16 + 8);
   switch (fields.b) {
   case 0:
    op->type = R_ANAL_OP_TYPE_ADD;
    break;
   case 1:
    op->type = R_ANAL_OP_TYPE_SUB;
    break;
   default:
    op->type = R_ANAL_OP_TYPE_ILL;
    break;
   }
   break;
  case 6:
   fields.c = (words[0] & 0x001f0000) >> 16;
   switch (fields.c) {
   case 1:
   case 0x11:
    op->type = R_ANAL_OP_TYPE_POP;
    break;
   default:
    op->type = R_ANAL_OP_TYPE_ILL;
    break;
   }
   break;
  case 7:
   fields.c = (words[0] & 0x001f0000) >> 16;
   switch (fields.c) {
   case 1:
   case 0x11:
    op->type = R_ANAL_OP_TYPE_PUSH;
    break;
   default:
    op->type = R_ANAL_OP_TYPE_ILL;
    break;
   }
   break;
  }
  break;
 case 0x19:
  fields.subopcode = (words[0] & 0x06000000) >> (16 + 9);
  switch (fields.subopcode) {
  case 0:
  case 1:
  case 2:
   op->type = R_ANAL_OP_TYPE_LOAD;
   break;
  case 3:
   op->type = R_ANAL_OP_TYPE_ADD;
   break;
  }
  op->type = R_ANAL_OP_TYPE_UNK;
  break;
 case 0x1a:
  fields.c = (words[0] & 0x00ff0000) >> 14;
  op->ptr = (addr & ~3) + fields.c;
  op->refptr = 4;
  op->type = R_ANAL_OP_TYPE_LOAD;
  break;
 case 0x1b:
  op->val = (words[0] & 0x00ff0000) >> 16;
  op->type = R_ANAL_OP_TYPE_MOV;
  break;
 case 0x1c:
  fields.subopcode = (words[0] & 0x00800000) >> (16 + 7);
  if (fields.subopcode == 0) {
   op->type = R_ANAL_OP_TYPE_ADD;
  } else {
   op->type = R_ANAL_OP_TYPE_CMP;
  }
  break;
 case 0x1d:

  fields.imm = SEX_S8 ((words[0] & 0x007f0000) >> (16 - 1));

  op->type = R_ANAL_OP_TYPE_CJMP;
  arcompact_branch (op, addr, fields.imm, 0);
  break;
 case 0x1e:
  fields.subopcode = (words[0] & 0x06000000) >> (16 + 9);
  fields.imm = SEX_S10 ((words[0] & 0x01ff0000) >> (16 - 1));
  switch (fields.subopcode) {
  case 0:
   op->type = R_ANAL_OP_TYPE_JMP;
   break;
  case 1:
   op->cond = R_ANAL_COND_EQ;
   op->type = R_ANAL_OP_TYPE_CJMP;
   break;
  case 2:
   op->cond = R_ANAL_COND_NE;
   op->type = R_ANAL_OP_TYPE_CJMP;
   break;
  case 3:
   op->type = R_ANAL_OP_TYPE_CJMP;
   fields.imm = SEX_S7 ((words[0] & 0x003f0000) >> (16 - 1));

   break;
  }
  arcompact_branch (op, addr, fields.imm, 0);
  break;
 case 0x1f:
  fields.imm = SEX_S13 ((words[0] & 0x07ff0000) >> (16 - 2));
  op->type = R_ANAL_OP_TYPE_CALL;
  arcompact_branch (op, addr, fields.imm, 0);
  break;
 }
 arccompact_dump_fields (addr, words, &fields);
 return op->size;
}

static int arc_op(RAnal *anal, RAnalOp *op, ut64 addr, const ut8 *data, int len, RAnalOpMask mask) {
 const ut8 *b = (ut8 *)data;

 if (anal->bits == 16) {
  return arcompact_op (anal, op, addr, data, len);
 }


 op->size = 4;
 op->fail = addr + 4;
 ut8 basecode = (len > 3)? ((b[3] & 0xf8) >> 3): 0;
 switch (basecode) {
 case 0x04:
 case 0x05:
 case 0x06:
  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = addr + 4 + ((r_read_le32 (&data[0]) & 0x07ffff80) >> (7 - 2));
  break;
 case 0x07:
  op->type = R_ANAL_OP_TYPE_CJMP;
  op->jump = 0;
  break;
 case 0x08:
 case 0x09:
  op->type = R_ANAL_OP_TYPE_ADD;
  break;
 case 0x0a:
 case 0x0b:
  op->type = R_ANAL_OP_TYPE_SUB;
  break;
 case 0x0c:
  op->type = R_ANAL_OP_TYPE_AND;
  break;
 case 0x0d:
  op->type = R_ANAL_OP_TYPE_OR;
  break;
 case 0x0f:
  if ((b[0] == 0xff) && (b[1] == 0xff)) {
   op->type = R_ANAL_OP_TYPE_NOP;
   break;
  }
  op->type = R_ANAL_OP_TYPE_XOR;
  break;
 case 0x13:
  op->type = R_ANAL_OP_TYPE_ROR;
  break;
 default:
  break;
 }
 return op->size;
}

static int archinfo(RAnal *anal, int query) {
 if (anal->bits != 16) {
  return -1;
 }
 switch (query) {
 case R_ANAL_ARCHINFO_ALIGN:
  return 2;
 case R_ANAL_ARCHINFO_MIN_OP_SIZE:

  return 2;
 case R_ANAL_ARCHINFO_MAX_OP_SIZE:
  return 8;
 default:
  return -1;
 }
}

static bool set_reg_profile(RAnal *anal) {
 if (anal->bits != 16) {
  return false;
 }
 const char *p16 =
  "=PC	pcl\n"
  "=SP	sp\n"
  "=LR	blink\n"

  "=A0	r0\n"
  "=A1	r1\n"
  "=A2	r2\n"
  "=A3	r3\n"

  "gpr	r0	.32	0	0\n"
  "gpr	r1	.32	4	0\n"
  "gpr	r2	.32	8	0\n"
  "gpr	r3	.32	12	0\n"
  "gpr	r4	.32	16	0\n"
  "gpr	r5	.32	20	0\n"
  "gpr	r6	.32	24	0\n"
  "gpr	r7	.32	28	0\n"
  "gpr	r8	.32	32	0\n"
  "gpr	r9	.32	36	0\n"
  "gpr	r10	.32	40	0\n"
  "gpr	r11	.32	44	0\n"
  "gpr	r12	.32	48	0\n"
  "gpr	r13	.32	52	0\n"
  "gpr	r14	.32	56	0\n"
  "gpr	r15	.32	60	0\n"
  "gpr	r16	.32	64	0\n"
  "gpr	r17	.32	68	0\n"
  "gpr	r18	.32	72	0\n"
  "gpr	r19	.32	76	0\n"
  "gpr	r20	.32	80	0\n"
  "gpr	r21	.32	84	0\n"
  "gpr	r22	.32	88	0\n"
  "gpr	r23	.32	92	0\n"
  "gpr	r24	.32	96	0\n"
  "gpr	r25	.32	100	0\n"
  "gpr	gp	.32	104	0\n"
  "gpr	fp	.32	108	0\n"
  "gpr	sp	.32	112	0\n"
  "gpr	ilink1	.32	116	0\n"
  "gpr	ilink2	.32	120	0\n"
  "gpr	blink	.32	124	0\n"
  "gpr	lp_count	.32	128	0\n"
  "gpr	pcl	.32	132	0\n";




 return r_reg_set_profile_string (anal->reg, p16);
}

RAnalPlugin r_anal_plugin_arc = {
 .name = "arc",
 .arch = "arc",
 .license = "LGPL3",
 .bits = 16 | 32,
 .desc = "ARC code analysis plugin",
 .op = &arc_op,
 .archinfo = archinfo,
 .set_reg_profile = set_reg_profile,
};

#ifndef R2_PLUGIN_INCORE
R_API RLibStruct radare_plugin = {
 .type = R_LIB_TYPE_ANAL,
 .data = &r_anal_plugin_arc,
 .version = R2_VERSION,
};
#endif
