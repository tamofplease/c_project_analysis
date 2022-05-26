# 1 "project/radare2/libr/asm/p/asm_lm32.c"




#include <r_types.h>
#include <r_util.h>
#include <r_lib.h>
#include <r_asm.h>
#include "../arch/lm32/lm32_isa.h"

#define LM32_UNUSED 0


static int reg_number_to_string(ut8 reg, char *str) {
 ut8 match_idx = 0xff;
 int i;
 for (i = 0; i < RAsmLm32RegNumber; i++) {
  if (RAsmLm32Regs[i].number == reg) {
   match_idx = i;
   break;
  }
 }

 if (match_idx == 0xff) {
  return -1;
 }
 strcpy (str, RAsmLm32Regs[match_idx].name);
 return 0;
}

#if LM32_UNUSED
static int string_to_reg_number(const char *str, ut8 *num) {
 ut8 match_idx = 0xff;
 int i;
 for (i = 0; i < RAsmLm32RegNumber; i++) {
  if (!strcmp (RAsmLm32Regs[i].name, str)) {
   match_idx = i;
   break;
  }
 }

 if (match_idx == 0xff) return -1;
 *num = RAsmLm32Regs[match_idx].number;
 return 0;
}

static int string_to_csr_number(const char *str, ut8 *num) {
 ut8 match_idx = 0xff;
 int i;
 for (i = 0; i < RAsmLm32CsrNumber; i++) {
  if (!strcmp (RAsmLm32Csrs[i].name, str)) {
   match_idx = i;
   break;
  }
 }

 if (match_idx == 0xff) return -1;
 *num = RAsmLm32Csrs[match_idx].number;
 return 0;
}

static int string_to_opcode(const char *str, ut8 *num) {
 ut8 tmp_num = 0xff;
 int i;
 for (i = 0; i < RAsmLm32OpcodeNumber; i++) {
  if (!strcmp (RAsmLm32OpcodeList[i].name, str)) {
   tmp_num = i;
  }
 }

 if (tmp_num == 0xff) return -1;
 *num = tmp_num;
 return 0;
}
#endif


static int csr_number_to_string(ut8 csr, char *str) {
 ut8 match_idx = 0xff;
 int i;
 for (i = 0; i < RAsmLm32CsrNumber; i++) {
  if (RAsmLm32Csrs[i].number == csr) {
   match_idx = i;
   break;
  }
 }

 if (match_idx == 0xff) {
  return -1;
 }
 strcpy (str, RAsmLm32Csrs[match_idx].name);
 return 0;
}


static st32 shift_and_signextend(ut8 shift, ut8 sign_loc, ut32 val) {
 ut32 tmp = val << shift;
 if (tmp & (1 << (shift + sign_loc))) {
  tmp |= ~((1 << (shift + sign_loc + 1)) - 1);
 }
 return tmp;
}


static bool is_invalid_imm5_instr(RAsmLm32Instruction *instr) {
 return instr->value & RAsmLm32InstrImm5InvalidBitsMask;
}

static bool is_invalid_one_reg_instr(RAsmLm32Instruction *instr) {
 return instr->value & RAsmLm32InstrOneRegInvalidBitsMask;
}

static bool is_invalid_two_reg_instr(RAsmLm32Instruction *instr) {
 return instr->value & RAsmLm32InstrTwoRegsInvalidBitsMask;
}

static bool is_invalid_wcsr_instr(RAsmLm32Instruction *instr) {
 return instr->value & RAsmLm32InstrWcsrInvalidBitsMask;
}


static bool is_pseudo_instr_ret(RAsmLm32Instruction *instr) {

 return (instr->op == lm32_op_b) && (instr->src0_reg == 0x1d);
}


static bool is_pseudo_instr_mv(RAsmLm32Instruction *instr) {
 return (instr->op == lm32_op_or) && !instr->src1_reg;
}


static bool is_pseudo_instr_mvhi(RAsmLm32Instruction *instr) {
 return (instr->op == lm32_op_orhi) && !instr->src0_reg;
}


static bool is_pseudo_instr_not(RAsmLm32Instruction *instr) {
 return (instr->op == lm32_op_xnor) && !instr->src1_reg;
}


static bool is_pseudo_instr_mvi(RAsmLm32Instruction *instr) {
 return (instr->op == lm32_op_addi) && !instr->src0_reg;
}


static bool is_pseudo_instr_nop(RAsmLm32Instruction *instr) {
 return (instr->op == lm32_op_addi) && !instr->dest_reg &&
   !instr->src0_reg && !instr->immediate;
}


static bool is_pseudo_instr_raise(RAsmLm32Instruction *instr) {
 return instr->op == raise_instr;
}

static int r_asm_lm32_decode(RAsmLm32Instruction *instr) {
 instr->op = extract_opcode (instr->value);
 if (instr->op >= RAsmLm32OpcodeNumber) {
  return -1;
 }
 instr->op_decode = RAsmLm32OpcodeList[instr->op];

 switch (instr->op_decode.type) {
 case reg_imm16_signextend:
  instr->dest_reg = extract_reg_v (instr->value);
  instr->src0_reg = extract_reg_u (instr->value);
  instr->immediate = shift_and_signextend (0, RAsmLm32Imm16SignBitPos,
    extract_imm16 (instr->value));
  break;
 case reg_imm16_shift2_signextend:
  instr->dest_reg = extract_reg_v (instr->value);
  instr->src0_reg = extract_reg_u (instr->value);
  instr->immediate = shift_and_signextend (2, RAsmLm32Imm16SignBitPos,
    extract_imm16 (instr->value));
  break;
 case reg_imm16_zeroextend:
  instr->dest_reg = extract_reg_v (instr->value);
  instr->src0_reg = extract_reg_u (instr->value);
  instr->immediate = extract_imm16 (instr->value);
  break;
 case reg_imm5:
  if (is_invalid_imm5_instr (instr)) {
   return -1;
  }
  instr->dest_reg = extract_reg_v (instr->value);
  instr->src0_reg = extract_reg_u (instr->value);
  instr->immediate = extract_imm5 (instr->value);
  break;
 case raise_instr:
  if (is_invalid_imm5_instr (instr)) {
   return -1;
  }


  instr->immediate = extract_imm5 (instr->value);
  break;
 case one_reg:
  if (is_invalid_one_reg_instr (instr)) {
   return -1;
  }
  instr->src0_reg = extract_reg_u (instr->value);
  break;
 case two_regs:
  if (is_invalid_two_reg_instr (instr)) {
   return -1;
  }
  instr->dest_reg = extract_reg_w (instr->value);
  instr->src0_reg = extract_reg_u (instr->value);
  break;
 case three_regs:
  instr->dest_reg = extract_reg_w (instr->value);
  instr->src0_reg = extract_reg_v (instr->value);
  instr->src1_reg = extract_reg_u (instr->value);
  break;
 case reg_csr:
  if (is_invalid_wcsr_instr (instr)) {
   return -1;
  }
  instr->src0_reg = extract_reg_v (instr->value);
  instr->csr = extract_reg_u (instr->value);
  break;
 case csr_reg:

  if (is_invalid_two_reg_instr (instr)) {
   return -1;
  }
  instr->dest_reg = extract_reg_w (instr->value);
  instr->csr = extract_reg_u (instr->value);
  break;
 case imm26:
  instr->immediate = shift_and_signextend (2, RAsmLm32Imm26SignBitPos,
    extract_imm26 (instr->value));
  break;
 case reserved:
 default:
  return -1;
 }


 instr->pseudoInstruction = is_pseudo_instr_ret (instr) || is_pseudo_instr_mv (instr) ||
   is_pseudo_instr_mvhi (instr) || is_pseudo_instr_not (instr) || is_pseudo_instr_mvi (instr) ||
   is_pseudo_instr_nop (instr) || is_pseudo_instr_raise (instr);

 return 0;
}

static int write_reg_names_to_struct(RAsmLm32Instruction *instr) {
 switch (instr->op_decode.type) {
 case reg_imm16_signextend:
 case reg_imm16_shift2_signextend:
 case reg_imm16_zeroextend:
 case reg_imm5:
 case two_regs:
  if (reg_number_to_string (instr->dest_reg, instr->dest_reg_str)) {
   return -1;
  }
  if (reg_number_to_string (instr->src0_reg, instr->src0_reg_str)) {
   return -1;
  }
  break;
 case one_reg:
  if (reg_number_to_string (instr->src0_reg, instr->src0_reg_str)) {
   return -1;
  }
  break;
 case three_regs:
  if (reg_number_to_string (instr->dest_reg, instr->dest_reg_str)) {
   return -1;
  }
  if (reg_number_to_string (instr->src0_reg, instr->src0_reg_str)) {
   return -1;
  }
  if (reg_number_to_string (instr->src1_reg, instr->src1_reg_str)) {
   return -1;
  }
  break;
 case reg_csr:
  if (reg_number_to_string (instr->src0_reg, instr->src0_reg_str)) {
   return -1;
  }
  if (csr_number_to_string (instr->csr, instr->csr_reg_str)) {
   return -1;
  }
  break;
 case csr_reg:
  if (reg_number_to_string (instr->dest_reg, instr->dest_reg_str)) {
   return -1;
  }
  if (csr_number_to_string (instr->csr, instr->csr_reg_str)) {
   return -1;
  }
  break;
 case raise_instr:
 case imm26:
  break;
 default:
  return -1;
 }
 return 0;
}

static int print_pseudo_instruction(RAsmLm32Instruction *instr, char *str) {
 if (!instr->pseudoInstruction) {
  return -1;
 }
 switch (instr->op) {

 case lm32_op_b:
  strcpy (str, "ret");
  break;

 case lm32_op_or:
  sprintf (str, "mv %s, %s", instr->dest_reg_str, instr->src0_reg_str);
  break;

 case lm32_op_orhi:
  sprintf (str, "mvhi %s, 0x%x", instr->dest_reg_str, instr->immediate);
  break;

 case lm32_op_xnor:
  sprintf (str, "not %s, %s", instr->dest_reg_str, instr->src0_reg_str);
  break;


 case lm32_op_addi:
  if (is_pseudo_instr_nop (instr)) {
   strcpy (str, "nop");
  } else {
   sprintf (str, "mvi %s, 0x%x", instr->dest_reg_str, instr->immediate);
  }
  break;

 case lm32_op_raise:
  switch (instr->immediate) {
  case 0x2:
   strcpy (str, "break");
   break;
  case 0x7:
   strcpy (str, "scall");
   break;
  default:
   return -1;
  }
  break;
 default:
  return -1;
 }
 return 0;
}


static int r_asm_lm32_stringify(RAsmLm32Instruction *instr, char *str) {
 if (write_reg_names_to_struct (instr)) {
  return -1;
 }


 if (instr->pseudoInstruction) {

  return print_pseudo_instruction (instr, str);
 }


 strcpy (str, instr->op_decode.name);


 switch (instr->op_decode.type) {
 case reg_imm16_signextend:
  sprintf (str, "%s %s, %s, 0x%x", instr->op_decode.name, instr->dest_reg_str, instr->src0_reg_str,
    instr->immediate);
  break;
 case reg_imm16_zeroextend:
 case reg_imm5:
  sprintf (str, "%s %s, %s, 0x%x", instr->op_decode.name, instr->dest_reg_str, instr->src0_reg_str,
    instr->immediate);
  break;
 case reg_imm16_shift2_signextend:

  sprintf (str, "%s %s, %s, 0x%x", instr->op_decode.name, instr->dest_reg_str, instr->src0_reg_str,
    instr->immediate + instr->addr);
  break;
 case one_reg:
  sprintf (str, "%s %s", instr->op_decode.name, instr->src0_reg_str);
  break;
 case two_regs:
  sprintf (str, "%s %s, %s", instr->op_decode.name, instr->dest_reg_str, instr->src0_reg_str);
  break;
 case three_regs:
  sprintf (str, "%s %s, %s, %s", instr->op_decode.name, instr->dest_reg_str, instr->src0_reg_str,
    instr->src1_reg_str);
  break;
 case reg_csr:
  sprintf (str, "%s %s, %s", instr->op_decode.name, instr->csr_reg_str, instr->src0_reg_str);
  break;
 case csr_reg:
  sprintf (str, "%s %s, %s", instr->op_decode.name, instr->dest_reg_str, instr->csr_reg_str);
  break;
 case imm26:

  sprintf (str, "%s 0x%x", instr->op_decode.name, instr->immediate + instr->addr);
  break;

 default:
  return -1;
 }
 return 0;
}

#if 0

static int r_asm_lm32_destringify(const char *string, RAsmLm32Instruction *instr) {

 return -1;
}

static int r_asm_lm32_encode(RAsmLm32Instruction *instr, ut32 *val) {

 return -1;
}

static int assemble(RAsm *a, RAsmOp *ao, const char *str) {

 return -1;
}
#endif

static int disassemble(RAsm *a, RAsmOp *op, const ut8 *buf, int len) {
 RAsmLm32Instruction instr = {0};
 instr.value = buf[0] << 24 | buf[1] << 16 | buf[2] << 8 | buf[3];
 instr.addr = a->pc;
 if (r_asm_lm32_decode (&instr)) {
  r_strbuf_set (&op->buf_asm, "invalid");
  a->invhex = 1;
  return -1;
 }

 if (r_asm_lm32_stringify (&instr, r_strbuf_get (&op->buf_asm))) {
  r_strbuf_set (&op->buf_asm, "invalid");
  a->invhex = 1;
  return -1;
 }
 return 4;
}

RAsmPlugin r_asm_plugin_lm32 = {
 .name = "lm32",
 .arch = "lm32",
 .desc = "disassembly plugin for Lattice Micro 32 ISA",
 .author = "Felix Held",
 .license = "BSD",
 .bits = 32,
 .endian = R_SYS_ENDIAN_BIG,
 .disassemble = &disassemble,
};

#ifndef R2_PLUGIN_INCORE
R_API RLibStruct radare_plugin = {
 .type = R_LIB_TYPE_ASM,
 .data = &r_asm_plugin_lm32,
 .version = R2_VERSION
};
#endif
