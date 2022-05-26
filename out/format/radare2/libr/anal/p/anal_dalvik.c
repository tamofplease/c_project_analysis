# 1 "project/radare2/libr/anal/p/anal_dalvik.c"


#include <r_types.h>
#include <r_lib.h>
#include <r_asm.h>
#include <r_anal.h>

#include "../../asm/arch/dalvik/opcode.h"
#include "../../bin/format/dex/dex.h"

#define GETWIDE "32,v%u,<<,v%u,|"
#define SETWIDE "DUP,v%u,=,32,SWAP,>>,v%u,="

static const char *getCond(ut8 cond) {
 switch (cond) {
 case 0x32:
 case 0x38:
  return "-,!";
 case 0x33:
 case 0x39:
  return "-";
 case 0x34:
 case 0x3a:
  return "<";
 case 0x35:
 case 0x3b:
  return "<,!";
 case 0x36:
 case 0x3c:
  return "<=,!";
 case 0x37:
 case 0x3d:
  return "<=";
 }
 return "";
}

typedef enum {
 OP_INT,
 OP_LONG,
 OP_LONG_SHFT,
 OP_FLOAT,
 OP_DOUBLE
} OperandType;







static void format11x(int len, const unsigned char* data, ut32* dst) {
 if (len > 1) {
  *dst = data[1] & 0x0F;
 }
}

static void format11n(int len, const unsigned char* data, ut32* dst, ut32* src) {
 if (len > 1) {
  *dst = data[1] & 0x0F;
  *src = (st32)((st8)((data[1] & 0xF0) >> 4));
 }
}

static void format12x(int len, const unsigned char* data, ut32* dst, ut32* src) {
 if (len > 1) {
  *dst = data[1] & 0x0F;
  *src = (data[1] & 0xF0) >> 4;
 }
}







static void format21t(int len, const unsigned char* data, ut32* dst, ut32* src) {
 if (len > 3) {
  *dst = data[1];
  *src = 2*r_read_le16(data+2);
 }
}

static void format21s(int len, const unsigned char* data, ut32* dst, ut32* src) {
 if (len > 3) {
  *dst = data[1];
  *src = (st32)(st16)r_read_le16(data+2);
 }
}

static void format21hw(int len, const unsigned char* data, ut32* dst, ut32* src) {
 if (len > 3) {
  *dst = data[1];
  *src = ((st32)(st16)r_read_le16(data+2) << 16);
 }
}

static void format21hd(int len, const unsigned char* data, ut32* dst, st64* src) {
 if (len > 3) {
  *dst = data[1];
  *src = ((st64)(st16)r_read_le16(data+2) << 48);
 }
}

static void format21c(int len, const unsigned char* data, ut32* dst, ut32* src) {
 if (len > 3) {
  *dst = data[1];
  *src = r_read_le16(data+2);
 }
}

static void format22c(int len, const unsigned char* data, ut32* dst, ut32* src, ut32* ref) {
 if (len > 3) {
  *dst = data[1] & 0x0F;
  *src = (data[1] & 0xF0) >> 4;
  *ref = r_read_le16(data+2);
 }
}


static void format22x(int len, const unsigned char* data, ut32* dst, ut32* src) {
 if (len > 3) {
  *dst = data[1];
  *src = r_read_le16(data+2);
 }
}

static void format22t(int len, const unsigned char* data, ut32* dst, ut32* src, ut32* ref) {
 if (len > 3) {
  *dst = data[1] & 0x0F;
  *src = (data[1] & 0xF0) >> 4;
  *ref = 2*r_read_le16(data+2);
 }
}

static void format22s(int len, const unsigned char* data, ut32* dst, ut32* src, ut32* ref) {
 if (len > 3) {
  *dst = data[1] & 0x0F;
  *src = (data[1] & 0xF0) >> 4;
  *ref = (st32)(st16)r_read_le16(data+2);
 }
}

static void format22b(int len, const unsigned char* data, ut32* dst, ut32* src, ut32* ref) {
 if (len > 3) {
  *dst = data[1];
  *src = data[2];
  *ref = (st32)(*(st8*)(data+3));
 }
}

static void format23x(int len, const unsigned char* data, ut32* dst, ut32* src, ut32* ref) {
 if (len > 1) {
  *dst = data[1];
  *src = data[2];
  *ref = data[3];
 }
}







static void format31i(int len, const unsigned char* data, ut32* dst, ut32* src) {
 if (len > 5) {
  *dst = data[1];
  *src = r_read_le32(data+2);
 }
}

static void format31c(int len, const unsigned char* data, ut32* dst, ut32* src) {
 if (len > 5) {
  *dst = data[1];
  *src = r_read_le32(data+2);
 }
}

static void format32x(int len, const unsigned char* data, ut32* dst, ut32* src) {
 if (len > 5) {
  *dst = r_read_le16(data+2);
  *src = r_read_le16(data+4);
 }
}
# 205 "project/radare2/libr/anal/p/anal_dalvik.c"
static void format51l(int len, const unsigned char* data, ut32* dst, st64* src) {
 if (len > 9) {
  *dst = data[1];
  *src = (st64)r_read_le64(data+2);
 }
}


#define OPCALL(x,y,z) dalvik_math_op(op, data, len, mask, x, y, z)
static void dalvik_math_op(RAnalOp* op, const unsigned char* data, int len,
 RAnalOpMask mask, char* operation, unsigned int optype, OperandType ot) {

 ut32 vA = 0, vB = 0, vC = 0;
 op->type = optype;
 if (ot == OP_FLOAT || ot == OP_DOUBLE) {
  op->family = R_ANAL_OP_FAMILY_FPU;
 }

 char* v = "v";
 if (data[0] < 0xb0) {
  format23x(len, data, &vA, &vB, &vC);
 } else if (data[0] < 0xd0) {
  format12x(len, data, &vA, &vB);
  vC = vB;
  vB = vA;
 } else if (data[0] < 0xd8) {
  format22s(len, data, &vA, &vB, &vC);
  v = "";
 } else if (data[0] < 0xe3) {
  format22b(len, data, &vA, &vB, &vC);
  v = "";
 }

 if (mask & R_ANAL_OP_MASK_ESIL) {
  if (ot == OP_INT) {
   if (optype == R_ANAL_OP_TYPE_DIV || optype == R_ANAL_OP_TYPE_MOD) {
    esilprintf (op, "32,%s%d,~,32,v%u,~,%s,v%u,=", v, vC, vB, operation, vA);
   } else {
    esilprintf (op, "%s%d,v%u,%s,v%u,=", v, vC, vB, operation, vA);
   }
  } else if (ot == OP_LONG) {
   esilprintf (op, GETWIDE "," GETWIDE ",%s," SETWIDE,
    vC+1, vC, vB+1, vB, operation, vA, vA+1);
  } else if (ot == OP_LONG_SHFT) {
   esilprintf (op, "v%u," GETWIDE ",%s," SETWIDE,
    vC, vB+1, vB, operation, vA, vA+1);
  } else if (ot == OP_FLOAT) {
   esilprintf (op, "32,32,v%u,F2D,32,v%u,F2D,F%s,D2F,v%u,=", vC, vB, operation, vA);
  } else if (ot == OP_DOUBLE) {
   esilprintf (op, GETWIDE "," GETWIDE ",F%s," SETWIDE,
    vC+1, vC, vB+1, vB, operation, vA, vA+1);
  }
 }
}

static int dalvik_op(RAnal *anal, RAnalOp *op, ut64 addr, const ut8 *data, int len, RAnalOpMask mask) {
 int sz = dalvik_opcodes[data[0]].len;
 if (!op || sz >= len) {
  if (op && (mask & R_ANAL_OP_MASK_DISASM)) {
   op->mnemonic = strdup ("invalid");
  }
  return -1;
 }
 op->size = sz;
 op->nopcode = 1;
 op->id = data[0];

 ut32 vA = 0;
 ut32 vB = 0;
 ut32 vC = 0;
 if (len > 3) {
  vA = data[1];
  vB = data[2];
  vC = data[3];
 }
 switch (data[0]) {
 case 0x00:
  op->type = R_ANAL_OP_TYPE_NOP;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   esilprintf (op, ",");
  }
  break;
 case 0x01:
 case 0x07:
  {
   format12x(len, data, &vA, &vB);
   if (vA == vB) {
    op->type = R_ANAL_OP_TYPE_NOP;
    if (mask & R_ANAL_OP_MASK_ESIL) {
     esilprintf (op, ",");
    }
   } else {
    op->type = R_ANAL_OP_TYPE_MOV;


    if (mask & R_ANAL_OP_MASK_ESIL) {
     esilprintf (op, "v%u,v%u,=", vB, vA);
    }
   }
  }
  break;
 case 0x04:
  {
   format12x(len, data, &vA, &vB);
   if (vA == vB) {
    op->type = R_ANAL_OP_TYPE_NOP;
    if (mask & R_ANAL_OP_MASK_ESIL) {
     esilprintf (op, ",");
    }
   } else {
    op->type = R_ANAL_OP_TYPE_MOV;


    if (mask & R_ANAL_OP_MASK_ESIL) {
     esilprintf (op, "v%u,v%u,=,v%u,v%u,=", vB, vA, vB+1, vA+1);
    }
   }
  }
  break;
 case 0x02:
 case 0x08:
  op->type = R_ANAL_OP_TYPE_MOV;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   format22x(len, data, &vA, &vB);
   esilprintf (op, "v%u,v%u,=", vB, vA);
  }
  break;
 case 0x05:
  op->type = R_ANAL_OP_TYPE_MOV;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   format22x(len, data, &vA, &vB);
   esilprintf (op, "v%u,v%u,=,v%u,v%u,=", vB, vA, vB+1, vA+1);
  }
  break;
 case 0x03:
 case 0x09:
  op->type = R_ANAL_OP_TYPE_MOV;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   format32x(len, data, &vA, &vB);
   esilprintf (op, "v%u,v%u,=", vB, vA);
  }
  break;
 case 0x06:
  op->type = R_ANAL_OP_TYPE_MOV;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   format32x(len, data, &vA, &vB);
   esilprintf (op, "v%u,v%u,=,v%u,v%u,=", vB, vA, vB+1, vA+1);
  }
  break;
 case 0x0a:
 case 0x0b:
 case 0x0c:
 case 0x0d:

  op->type = R_ANAL_OP_TYPE_MOV;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   format11x(len, data, &vA);
   esilprintf (op, "sp,v%u,=[8],8,sp,+=,8", vA);
  }
  break;
 case 0x0e:
 case 0x0f:
 case 0x10:
 case 0x11:
 case 0xf1:
  op->type = R_ANAL_OP_TYPE_RET;
  op->eob = true;

  if (mask & R_ANAL_OP_MASK_ESIL) {
   if (data[0] == 0x0e) {
    esilprintf (op, "sp,[8],ip,=,8,sp,+=");
   } else {
    ut32 vA = data[1];
    esilprintf (op, "sp,[8],ip,=,8,sp,+=,8,sp,-=,v%d,sp,=[8]", vA);
   }
  }
  break;
 case 0x12:
  {
   op->type = R_ANAL_OP_TYPE_MOV;
   format11n(len, data, &vA, &vB);
   op->val = vB;
   if (mask & R_ANAL_OP_MASK_ESIL) {
    esilprintf (op, "%d,v%u,=", (st32)vB, vA);
   }
  }
  break;
 case 0x13:
  op->type = R_ANAL_OP_TYPE_MOV;
  format21s(len, data, &vA, &vB);
  if (mask & R_ANAL_OP_MASK_ESIL) {
   esilprintf (op, "%d,v%u,=", (st32)vB, vA);
  }
  op->val = vB;
  break;
 case 0x14:
  op->type = R_ANAL_OP_TYPE_MOV;
  format31i(len, data, &vA, &vB);
  op->val = vB;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   esilprintf (op, "%d,v%u,=", (st32)vB, vA);
  }
  break;
 case 0x15:
  op->type = R_ANAL_OP_TYPE_MOV;
  format21hw(len, data, &vA, &vB);
  op->val = vB;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   esilprintf (op, "%d,v%u,=", (st32)vB, vA);
  }
  break;
 case 0x16:
  op->type = R_ANAL_OP_TYPE_MOV;
  format21s(len, data, &vA, &vB);
  if (mask & R_ANAL_OP_MASK_ESIL) {
   esilprintf (op, "%" PFMT64d "," SETWIDE, (st64)(st32)vB, vA, vA+1);
  }
  op->val = vB;
  break;
 case 0x17:
  op->type = R_ANAL_OP_TYPE_MOV;
  format31i(len, data, &vA, &vB);
  if (mask & R_ANAL_OP_MASK_ESIL) {
   esilprintf (op, "%" PFMT64d "," SETWIDE, (st64)(st32)vB, vA, vA+1);
  }
  op->val = vB;
  break;
 case 0x18:
  {
   op->type = R_ANAL_OP_TYPE_MOV;
   st64 vB = 0;
   format51l(len, data, &vA, &vB);
   if (mask & R_ANAL_OP_MASK_ESIL) {
    esilprintf (op, "%" PFMT64d "," SETWIDE, vB, vA, vA+1);
   }
   op->val = vB;
   break;
  }
 case 0x19:
  {

   op->type = R_ANAL_OP_TYPE_MOV;
   st64 vB = 0;
   format21hd(len, data, &vA, &vB);
   if (mask & R_ANAL_OP_MASK_ESIL) {
    esilprintf (op, "%" PFMT64d "," SETWIDE, vB, vA, vA+1);
   }
   op->val = vB;
   break;
  }
 case 0x1a:
  op->type = R_ANAL_OP_TYPE_MOV;
  op->datatype = R_ANAL_DATATYPE_STRING;
  if (len > 2) {
   format21c(len, data, &vA, &vB);
   ut64 offset = R_ANAL_GET_OFFSET (anal, 's', vB);
   op->ptr = offset;
   if (mask & R_ANAL_OP_MASK_ESIL) {
    esilprintf (op, "0x%"PFMT64x",v%u,=", offset, vA);
   }
  }
  break;
 case 0x1b:
  {
   op->type = R_ANAL_OP_TYPE_MOV;
   op->datatype = R_ANAL_DATATYPE_STRING;
   format31c(len, data, &vA, &vB);
   ut64 offset = R_ANAL_GET_OFFSET (anal, 's', vB);
   op->ptr = offset;
   if (mask & R_ANAL_OP_MASK_ESIL) {
    esilprintf (op, "0x%"PFMT64x",v%u,=", offset, vA);
   }
   break;
  }
 case 0x1c:
  {
   op->type = R_ANAL_OP_TYPE_MOV;
   op->datatype = R_ANAL_DATATYPE_CLASS;
   format21c(len, data, &vA, &vB);
   ut64 offset = R_ANAL_GET_OFFSET (anal, 's', vB);
   op->ptr = offset;
   if (mask & R_ANAL_OP_MASK_ESIL) {
    esilprintf (op, "0x%"PFMT64x",v%u,=", offset, vA);
   }
   break;
  }
 case 0x1d:
  op->type = R_ANAL_OP_TYPE_PUSH;
  op->stackop = R_ANAL_STACK_INC;
  op->stackptr = 1;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   esilprintf (op, ",");
  }
  break;
 case 0x1e:
  op->type = R_ANAL_OP_TYPE_POP;
  op->stackop = R_ANAL_STACK_INC;
  op->stackptr = -1;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   esilprintf (op, ",");
  }
  break;

 case 0x1f:
  op->type = R_ANAL_OP_TYPE_CMP;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   esilprintf (op, ",");
  }
  break;
 case 0x20:
  op->type = R_ANAL_OP_TYPE_CMP;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   esilprintf (op, "%d,instanceof,%d,-,!,v%u,=", vC, vB, vA);
  }
  break;
 case 0x21:
  op->type = R_ANAL_OP_TYPE_LENGTH;
  op->datatype = R_ANAL_DATATYPE_ARRAY;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   format12x(len, data, &vA, &vB);
   esilprintf (op, "v%d,arraylength,v%d,=", vB, vA);
  }
  break;
 case 0x22:
  op->type = R_ANAL_OP_TYPE_NEW;


  format21c(len, data, &vA, &vB);
  ut64 off = R_ANAL_GET_OFFSET (anal, 't', vB);
  op->ptr = off;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   esilprintf (op, "%" PFMT64u ",new,v%d,=", off, vA);
  }
  break;
 case 0x23:
  op->type = R_ANAL_OP_TYPE_NEW;

  if (mask & R_ANAL_OP_MASK_ESIL) {
   format22c(len, data, &vA, &vB, &vC);
   esilprintf (op, "%u,%u,newarray,v%u,=",vC, vB, vA);
  }
  break;
 case 0x24:
 case 0x25:
 case 0x26:
  op->type = R_ANAL_OP_TYPE_NEW;





  break;
 case 0x27:
  op->type = R_ANAL_OP_TYPE_TRAP;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   format11x(len, data, &vA);
   esilprintf (op, "v%u,TRAP", vA);
  }
  break;
 case 0x28:
  if (len > 1) {
   op->jump = addr + ((char)data[1])*2;
   op->type = R_ANAL_OP_TYPE_JMP;
   op->eob = true;
   if (mask & R_ANAL_OP_MASK_ESIL) {
    esilprintf (op, "0x%"PFMT64x",ip,=", op->jump);
   }
  }
  break;
 case 0x29:
  if (len > 3) {
   op->jump = addr + (short)(data[2]|data[3]<<8)*2;
   op->type = R_ANAL_OP_TYPE_JMP;
   op->eob = true;
   if (mask & R_ANAL_OP_MASK_ESIL) {
    esilprintf (op, "0x%"PFMT64x",ip,=", op->jump);
   }
  }
  break;
 case 0x2a:
  if (len > 5) {
   st64 dst = (st64)(data[2]|(data[3]<<8)|(data[4]<<16)|((ut32)data[5]<<24));
   op->jump = addr + (dst * 2);
   op->type = R_ANAL_OP_TYPE_JMP;
   op->eob = true;
   if (mask & R_ANAL_OP_MASK_ESIL) {
    esilprintf (op, "0x%"PFMT64x",ip,=", op->jump);
   }
  }
  break;
 case 0x2b:
 case 0x2c:
  op->type = R_ANAL_OP_TYPE_SWITCH;
  break;
 case 0x2d:
 case 0x2e:

  op->type = R_ANAL_OP_TYPE_CMP;
  op->family = R_ANAL_OP_FAMILY_FPU;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   format23x(len, data, &vA, &vB, &vC);
   esilprintf (op, "32,v%u,F2D,32,v%u,F2D,F<=,?{,32,v%u,F2D,32,v%u,F2D,F==,!,-1,*,}{,1,},v%u,=", vC, vB, vC, vB, vA);
  }
  break;
 case 0x2f:
 case 0x30:
  op->type = R_ANAL_OP_TYPE_CMP;
  op->family = R_ANAL_OP_FAMILY_FPU;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   format23x(len, data, &vA, &vB, &vC);
   esilprintf (op, "v%u,v%u,F<=,?{,v%u,v%u,F==,!,-1,*,}{,1,},v%u,=", vC, vB, vC, vB, vA);
  }
  break;
 case 0x31:
  op->type = R_ANAL_OP_TYPE_CMP;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   format23x(len, data, &vA, &vB, &vC);

   esilprintf (op, GETWIDE "," GETWIDE ",-,DUP,0,<=,?{,1,}{,-1,},SWAP,!,?{,0,},v%u,=", vC+1, vC, vB+1, vB, vA);
  }
  break;
 case 0x32:
 case 0x33:
 case 0x34:
 case 0x35:
 case 0x36:
 case 0x37:
  op->type = R_ANAL_OP_TYPE_CJMP;

  if (len > 2) {
   format22t(len, data, &vA, &vB, &vC);
   op->jump = addr + vC;
   op->fail = addr + sz;
   op->eob = true;
   if (mask & R_ANAL_OP_MASK_ESIL) {
    const char *cond = getCond (data[0]);
    esilprintf (op, "v%u,v%u,%s,?{,%"PFMT64d",ip,=,}", vB, vA, cond, op->jump);
   }
  }
  break;
 case 0x38:
 case 0x39:
 case 0x3a:
 case 0x3b:
 case 0x3c:
 case 0x3d:

  op->type = R_ANAL_OP_TYPE_CJMP;

  if (len > 2) {
   format21t(len, data, &vA, &vB);
   op->jump = addr + vB;
   op->fail = addr + sz;
   op->eob = true;
   if (mask & R_ANAL_OP_MASK_ESIL) {
    const char *cond = getCond (data[0]);
    esilprintf (op, "0,v%u,%s,?{,%"PFMT64d",ip,=,}", vA, cond, op->jump);
   }
  }
  break;
 case 0x43:
  op->type = R_ANAL_OP_TYPE_ILL;
  op->size = 1;
  op->eob = true;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   esilprintf (op, ",");
  }
  break;
 case 0x44:
 case 0x45:
 case 0x46:
 case 0x47:
 case 0x48:
 case 0x49:
 case 0x4a:
 case 0x52:
 case 0x58:
 case 0x53:
 case 0x56:
 case 0x57:
 case 0xea:
 case 0xf4:
 case 0x66:
 case 0xfd:
 case 0x55:
 case 0x60:
 case 0x61:
 case 0x64:
 case 0x65:
 case 0xe3:
 case 0xe4:
 case 0xe5:
 case 0xe6:
 case 0xe7:
 case 0xe8:
 case 0xf3:
 case 0xf8:
 case 0xf2:


 case 0x54:
  op->type = R_ANAL_OP_TYPE_LOAD;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   ut32 vA = (data[1] & 0x0f);
   ut32 vB = (data[1] & 0xf0) >> 4;
   ut32 vC = (data[2] & 0x0f);
   esilprintf (op, "%d,v%d,iget,v%d,=", vC, vB, vA);
  }
  break;
 case 0x62:
  {
   op->datatype = R_ANAL_DATATYPE_OBJECT;
   op->type = R_ANAL_OP_TYPE_LOAD;
   ut32 vC = len > 3?(data[3] << 8) | data[2] : 0;
   op->ptr = anal->binb.get_offset (anal->binb.bin, 'f', vC);
   if (mask & R_ANAL_OP_MASK_ESIL) {
    ut32 vA = (data[1] & 0x0f);
    esilprintf (op, "%" PFMT64d ",v%d,=", op->ptr, vA);
   }
  }
  break;
 case 0x63:
  op->datatype = R_ANAL_DATATYPE_BOOLEAN;
  op->type = R_ANAL_OP_TYPE_LOAD;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   ut32 vA = (data[1] & 0x0f);
   ut32 vB = (data[1] & 0xf0) >> 4;
   ut32 vC = (data[2] & 0x0f);
   const char *vT = "-boolean";
   esilprintf (op, "%d,%d,sget%s,v%d,=", vC, vB, vT, vA);
  }
  break;
 case 0x4b:
 case 0x4c:
 case 0x4d:
 case 0x4e:
 case 0x4f:
 case 0x50:
 case 0x51:
 case 0x5c:
 case 0x5e:
 case 0x5f:
 case 0x59:
 case 0x5a:
 case 0x5b:
 case 0x5d:
 case 0x67:
 case 0x68:
 case 0x69:
 case 0x6a:
 case 0x6b:
 case 0x6c:
 case 0x6d:
 case 0xe9:
 case 0xeb:
 case 0xf5:
 case 0xf6:
 case 0xfc:
 case 0xfe:
  op->type = R_ANAL_OP_TYPE_STORE;
  vC = len > 3?(data[3] << 8) | data[2] : 0;
  op->ptr = anal->binb.get_offset (anal->binb.bin, 'f', vC);
  if (mask & R_ANAL_OP_MASK_ESIL) {
   ut32 vA = (data[1] & 0x0f);
   esilprintf (op, "%" PFMT64d ",v%u,=", op->ptr, vA);
  }
  break;
 case 0x7b:
  op->type = R_ANAL_OP_TYPE_NOT;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   format12x(len, data, &vA, &vB);
   esilprintf (op, "v%u,0,-,0xffffffff,&,v%u,=", vB, vA);
  }
  break;
 case 0x7c:
  op->type = R_ANAL_OP_TYPE_NOT;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   format12x(len, data, &vA, &vB);
   esilprintf (op, "0xffffffff,v%u,^,v%u,=", vB, vA);
  }
  break;
 case 0x7d:
  op->type = R_ANAL_OP_TYPE_NOT;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   format12x(len, data, &vA, &vB);
   esilprintf (op, GETWIDE ",0,-," SETWIDE, vB+1, vB, vA, vA+1);
  }
  break;
 case 0x7e:
  op->type = R_ANAL_OP_TYPE_NOT;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   format12x(len, data, &vA, &vB);
   esilprintf (op, "-1," GETWIDE ",^," SETWIDE, vB+1, vB, vA, vA+1);
  }
  break;
 case 0x7f:
  op->type = R_ANAL_OP_TYPE_NOT;
  op->family = R_ANAL_OP_FAMILY_FPU;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   format12x(len, data, &vA, &vB);
   esilprintf (op, "32,32,v%u,F2D,0,I2D,F-,D2F,v%u,=", vB, vA);
  }
  break;
 case 0x80:
  op->type = R_ANAL_OP_TYPE_NOT;
  op->family = R_ANAL_OP_FAMILY_FPU;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   format12x(len, data, &vA, &vB);
   esilprintf (op, GETWIDE ",0,I2D,F-," SETWIDE, vB+1, vB, vA, vA+1);
  }
  break;
 case 0x81:
 case 0x82:
 case 0x83:
 case 0x84:
 case 0x85:
 case 0x86:
 case 0x87:
 case 0x88:
 case 0x89:
 case 0x8a:
 case 0x8b:
 case 0x8c:
  op->family = R_ANAL_OP_FAMILY_FPU;

 case 0x8d:
 case 0x8e:
 case 0x8f:
  op->type = R_ANAL_OP_TYPE_CAST;
  format12x(len, data, &vA, &vB);


  if (mask & R_ANAL_OP_MASK_ESIL) {


   switch (data[0]) {
    case 0x81:
     esilprintf (op, "32,v%u,~," SETWIDE, vB, vA, vA+1);
     break;
    case 0x82:
     esilprintf (op, "32,v%u,I2D,D2F,v%u,=", vB, vA);
     break;
    case 0x83:
     esilprintf (op, "v%u,I2D," SETWIDE, vB, vA, vA+1);
     break;
    case 0x84:
     esilprintf (op, "v%u,0xffffffff,&,v%u,=", vB, vA);
     break;
    case 0x85:
     esilprintf (op, "32," GETWIDE ",I2D,D2F,v%u,=", vB+1, vB, vA);
     break;
    case 0x86:
     esilprintf (op, GETWIDE ",I2D," SETWIDE, vB+1, vB, vA, vA+1);
     break;
    case 0x87:
     esilprintf (op, "32,v%u,F2D,D2I,v%u,=", vB, vA);
     break;
    case 0x88:
     esilprintf (op, "32,v%u,F2D,D2I," SETWIDE, vB, vA, vA+1);
     break;
    case 0x89:
     esilprintf (op, "32,v%u,F2D,v%u,=", vB, vA);
     break;
    case 0x8a:
     esilprintf (op, GETWIDE ",D2I,v%u,=", vB+1, vB, vA);
     break;
    case 0x8b:
     esilprintf (op, GETWIDE ",D2I," SETWIDE, vB+1, vB, vA, vA+1);
     break;
    case 0x8c:
     esilprintf (op, "32," GETWIDE ",D2F,v%u,=", vB+1, vB, vA);
     break;
    case 0x8d:
    case 0x8e:
     esilprintf (op, "v%d,0xff,&,v%d,=", vB, vA);
     break;
    case 0x8f:
     esilprintf (op, "v%u,0xffff,&,v%u,=", vB, vA);
     break;
    default:
     break;
   }
  }
  break;
 case 0x90:
 case 0xb0:
 case 0xd0:
 case 0xd8:
  OPCALL ("+", R_ANAL_OP_TYPE_ADD, OP_INT);
  break;
 case 0x91:
 case 0xb1:
 case 0xd1:
 case 0xd9:
  OPCALL ("-", R_ANAL_OP_TYPE_SUB, OP_INT);
  break;
 case 0x92:
 case 0xb2:
 case 0xd2:
 case 0xda:
  OPCALL ("*", R_ANAL_OP_TYPE_MUL, OP_INT);
  break;
 case 0x93:
 case 0xb3:
 case 0xd3:
 case 0xdb:
  OPCALL ("~/", R_ANAL_OP_TYPE_DIV, OP_INT);
  break;
 case 0x94:
 case 0xb4:
 case 0xd4:
 case 0xdc:
  OPCALL ("~%", R_ANAL_OP_TYPE_MOD, OP_INT);
  break;
 case 0x95:
 case 0xb5:
 case 0xd5:
 case 0xdd:
  OPCALL ("&", R_ANAL_OP_TYPE_AND, OP_INT);
  break;
 case 0x96:
 case 0xb6:
 case 0xd6:
 case 0xde:
  OPCALL ("|", R_ANAL_OP_TYPE_OR, OP_INT);
  break;
 case 0x97:
 case 0xb7:
 case 0xd7:
 case 0xdf:
  OPCALL ("^", R_ANAL_OP_TYPE_XOR, OP_INT);
  break;
 case 0x98:
 case 0xb8:
 case 0xe0:
  OPCALL ("<<", R_ANAL_OP_TYPE_SHL, OP_INT);
  break;
 case 0x99:
 case 0xb9:
 case 0xe1:
  OPCALL (">>>>", R_ANAL_OP_TYPE_SHR, OP_INT);
  break;
 case 0x9a:
 case 0xba:
 case 0xe2:
  OPCALL (">>", R_ANAL_OP_TYPE_SHR, OP_INT);
  break;
 case 0xbb:
 case 0x9b:
  OPCALL ("+", R_ANAL_OP_TYPE_ADD, OP_LONG);
  break;
 case 0x9c:
 case 0xbc:
  OPCALL ("-", R_ANAL_OP_TYPE_SUB, OP_LONG);
  break;
 case 0x9d:
 case 0xbd:
  OPCALL ("*", R_ANAL_OP_TYPE_MUL, OP_LONG);
  break;
 case 0x9e:
 case 0xbe:
  OPCALL ("~/", R_ANAL_OP_TYPE_DIV, OP_LONG);
  break;
 case 0x9f:
 case 0xbf:
  OPCALL ("~%", R_ANAL_OP_TYPE_MOD, OP_LONG);
  break;
 case 0xa0:
 case 0xc0:
  OPCALL ("&", R_ANAL_OP_TYPE_AND, OP_LONG);
  break;
 case 0xa1:
 case 0xc1:
  OPCALL ("|", R_ANAL_OP_TYPE_OR, OP_LONG);
  break;
 case 0xa2:
 case 0xc2:
  OPCALL ("^", R_ANAL_OP_TYPE_XOR, OP_LONG);
  break;
 case 0xa3:
 case 0xc3:
  OPCALL ("<<", R_ANAL_OP_TYPE_SHL, OP_LONG_SHFT);
  break;
 case 0xa4:
 case 0xc4:
  OPCALL (">>>>", R_ANAL_OP_TYPE_SHR, OP_LONG_SHFT);
  break;
 case 0xa5:
 case 0xc5:
  OPCALL (">>", R_ANAL_OP_TYPE_SHR, OP_LONG_SHFT);
  break;
 case 0xa6:
 case 0xc6:
  OPCALL ("+", R_ANAL_OP_TYPE_ADD, OP_FLOAT);
  break;
 case 0xa7:
 case 0xc7:
  OPCALL ("-", R_ANAL_OP_TYPE_SUB, OP_FLOAT);
  break;
 case 0xa8:
 case 0xc8:
  OPCALL ("*", R_ANAL_OP_TYPE_MUL, OP_FLOAT);
  break;
 case 0xa9:
 case 0xaa:
 case 0xc9:
 case 0xca:
  OPCALL ("/", R_ANAL_OP_TYPE_DIV, OP_FLOAT);
  break;
 case 0xab:
 case 0xcb:
  OPCALL ("+", R_ANAL_OP_TYPE_ADD, OP_DOUBLE);
  break;
 case 0xac:
 case 0xcc:
  OPCALL ("-", R_ANAL_OP_TYPE_SUB, OP_DOUBLE);
  break;
 case 0xad:
 case 0xcd:
  OPCALL ("*", R_ANAL_OP_TYPE_MUL, OP_DOUBLE);
  break;
 case 0xae:
 case 0xaf:
 case 0xce:
 case 0xcf:
  OPCALL ("/", R_ANAL_OP_TYPE_DIV, OP_DOUBLE);
  break;

 case 0xec:
  op->type = R_ANAL_OP_TYPE_TRAP;
  if (mask & R_ANAL_OP_MASK_ESIL) {
   esilprintf (op, "TRAP");
  }
  break;
 case 0x73:
  break;
 case 0x6f:
 case 0x70:
 case 0x71:
 case 0x72:
 case 0x77:
 case 0x6e:
  if (len > 2) {


   ut32 vB = len > 3?(data[3] << 8) | data[2] : 0;
   ut64 dst = anal->binb.get_offset (anal->binb.bin, 'm', vB);
   if (dst == 0) {
    op->type = R_ANAL_OP_TYPE_UCALL;
   } else {
    op->type = R_ANAL_OP_TYPE_CALL;
    op->jump = dst;
   }
   op->fail = addr + sz;
   if (mask & R_ANAL_OP_MASK_ESIL) {

    esilprintf (op, "8,sp,-=,0x%"PFMT64x",sp,=[8],0x%"PFMT64x",ip,=", op->fail, op->jump);
   }
  }
  break;
 case 0x78:
 case 0xf0:
 case 0xf9:
 case 0xfb:
 case 0x74:
 case 0x75:
 case 0x76:
 case 0xfa:
  if (len > 2) {




   op->fail = addr + sz;

   op->type = R_ANAL_OP_TYPE_UCALL;


  }
  if (mask & R_ANAL_OP_MASK_ESIL) {

   esilprintf (op, "8,sp,-=,0x%"PFMT64x",sp,=[8],0x%"PFMT64x",ip,=", op->fail, op->jump);
  }
  break;
 case 0xee:
 case 0xef:
  op->type = R_ANAL_OP_TYPE_SWI;
  break;
 case 0xed:
  op->type = R_ANAL_OP_TYPE_TRAP;
  break;
 }
 return sz;
}

static bool set_reg_profile(RAnal *anal) {
 const char *p =
 "=PC	ip\n"
 "=SP	sp\n"
 "=BP	bp\n"
 "=A0	v0\n"
 "=A1	v1\n"
 "=A2	v2\n"
 "=A3	v3\n"
 "=SN	v0\n"
 "gpr	v0	.32	0	0\n"
 "gpr	v1	.32	4	0\n"
 "gpr	v2	.32	8	0\n"
 "gpr	v3	.32	12	0\n"
 "gpr	v4	.32	16	0\n"
 "gpr	v5	.32	20	0\n"
 "gpr	v6	.32	24	0\n"
 "gpr	v7	.32	28	0\n"
 "gpr	v8	.32	32	0\n"
 "gpr	v9	.32	36	0\n"
 "gpr	v10	.32	40	0\n"
 "gpr	v11	.32	44	0\n"
 "gpr	v12	.32	48	0\n"
 "gpr	v13	.32	52	0\n"
 "gpr	v14	.32	56	0\n"
 "gpr	v15	.32	60	0\n"
 "gpr	v16	.32	40	0\n"
 "gpr	v17	.32	44	0\n"
 "gpr	v18	.32	48	0\n"
 "gpr	v19	.32	52	0\n"
 "gpr	v20	.32	56	0\n"
 "gpr	v21	.32	60	0\n"
 "gpr	v22	.32	64	0\n"
 "gpr	v23	.32	68	0\n"
 "gpr	v24	.32	72	0\n"
 "gpr	v25	.32	76	0\n"
 "gpr	v26	.32	80	0\n"
 "gpr	v27	.32	84	0\n"
 "gpr	v28	.32	88	0\n"
 "gpr	v29	.32	92	0\n"
 "gpr	v30	.32	96	0\n"
 "gpr	v31	.32	100	0\n"
 "gpr	v32	.32	104	0\n"
 "gpr	v33	.32	108	0\n"
 "gpr	v34	.32	112	0\n"
 "gpr	ip	.32	116	0\n"
 "gpr	sp	.32	120	0\n"
 "gpr	bp	.32	124	0\n"
 ;
 return r_reg_set_profile_string (anal->reg, p);
}

RAnalPlugin r_anal_plugin_dalvik = {
 .name = "dalvik",
 .arch = "dalvik",
 .set_reg_profile = &set_reg_profile,
 .license = "LGPL3",
 .bits = 32,
 .desc = "Dalvik (Android VM) bytecode analysis plugin",
 .op = &dalvik_op,
 .esil = true
};

#ifndef R2_PLUGIN_INCORE
R_API RLibStruct radare_plugin = {
 .type = R_LIB_TYPE_ANAL,
 .data = &r_anal_plugin_dalvik,
 .version = R2_VERSION
};
#endif
