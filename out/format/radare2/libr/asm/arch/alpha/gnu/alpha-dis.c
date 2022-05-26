# 1 "project/radare2/libr/asm/arch/alpha/gnu/alpha-dis.c"
# 23 "project/radare2/libr/asm/arch/alpha/gnu/alpha-dis.c"
#include "sysdep.h"
#include <stdio.h>
#include "disas-asm.h"
#include "opcode/alpha.h"



static const char * const osf_regnames[64] = {
  "v0", "t0", "t1", "t2", "t3", "t4", "t5", "t6",
  "t7", "s0", "s1", "s2", "s3", "s4", "s5", "fp",
  "a0", "a1", "a2", "a3", "a4", "a5", "t8", "t9",
  "t10", "t11", "ra", "t12", "at", "gp", "sp", "zero",
  "$f0", "$f1", "$f2", "$f3", "$f4", "$f5", "$f6", "$f7",
  "$f8", "$f9", "$f10", "$f11", "$f12", "$f13", "$f14", "$f15",
  "$f16", "$f17", "$f18", "$f19", "$f20", "$f21", "$f22", "$f23",
  "$f24", "$f25", "$f26", "$f27", "$f28", "$f29", "$f30", "$f31"
};



static const char * const vms_regnames[64] = {
  "R0", "R1", "R2", "R3", "R4", "R5", "R6", "R7",
  "R8", "R9", "R10", "R11", "R12", "R13", "R14", "R15",
  "R16", "R17", "R18", "R19", "R20", "R21", "R22", "R23",
  "R24", "AI", "RA", "PV", "AT", "FP", "SP", "RZ",
  "F0", "F1", "F2", "F3", "F4", "F5", "F6", "F7",
  "F8", "F9", "F10", "F11", "F12", "F13", "F14", "F15",
  "F16", "F17", "F18", "F19", "F20", "F21", "F22", "F23",
  "F24", "F25", "F26", "F27", "F28", "F29", "F30", "FZ"
};



int
print_insn_alpha (bfd_vma memaddr, struct disassemble_info *info)
{
  static const struct alpha_opcode *opcode_index[AXP_NOPS+1];
  const char * const * regnames;
  const struct alpha_opcode *opcode, *opcode_end;
  const unsigned char *opindex;
  unsigned insn, op, isa_mask;
  int need_comma;


  if (!opcode_index[0])
    {
      opcode = alpha_opcodes;
      opcode_end = opcode + alpha_num_opcodes;

      for (op = 0; op < AXP_NOPS; ++op)
 {
   opcode_index[op] = opcode;
   while (opcode < opcode_end && op == AXP_OP (opcode->opcode))
     ++opcode;
 }
      opcode_index[op] = opcode;
    }

  if (info->flavour == bfd_target_evax_flavour)
    regnames = vms_regnames;
  else
    regnames = osf_regnames;

  isa_mask = AXP_OPCODE_NOPAL;
  switch (info->mach)
    {
    case bfd_mach_alpha_ev4:
      isa_mask |= AXP_OPCODE_EV4;
      break;
    case bfd_mach_alpha_ev5:
      isa_mask |= AXP_OPCODE_EV5;
      break;
    case bfd_mach_alpha_ev6:
      isa_mask |= AXP_OPCODE_EV6;
      break;
    }


  {
    bfd_byte buffer[4];
    int status = (*info->read_memory_func) (memaddr, buffer, 4, info);
    if (status != 0)
      {
 (*info->memory_error_func) (status, memaddr, info);
 return -1;
      }
    insn = bfd_getl32 (buffer);
  }


  op = AXP_OP (insn);


  opcode_end = opcode_index[op + 1];
  for (opcode = opcode_index[op]; opcode < opcode_end; ++opcode)
    {
      if ((insn ^ opcode->opcode) & opcode->mask)
 continue;

      if (!(opcode->flags & isa_mask))
 continue;




      {
 int invalid = 0;
 for (opindex = opcode->operands; *opindex != 0; opindex++)
   {
     const struct alpha_operand *operand = alpha_operands + *opindex;
     if (operand->extract)
       (*operand->extract) (insn, &invalid);
   }
 if (invalid)
   continue;
      }


      goto found;
    }


  (*info->fprintf_func) (info->stream, ".long %#08x", insn);

  return 4;

 found:
  (*info->fprintf_func) (info->stream, "%s", opcode->name);
  if (opcode->operands[0] != 0)
    (*info->fprintf_func) (info->stream, "\t");


  need_comma = 0;
  for (opindex = opcode->operands; *opindex != 0; opindex++)
    {
      const struct alpha_operand *operand = alpha_operands + *opindex;
      int value;




      if ((operand->flags & AXP_OPERAND_FAKE) != 0)
 continue;


      if (operand->extract)
 value = (*operand->extract) (insn, (int *) NULL);
      else
 {
   value = (insn >> operand->shift) & ((1 << operand->bits) - 1);
   if (operand->flags & AXP_OPERAND_SIGNED)
     {
       int signbit = 1 << (operand->bits - 1);
       value = (value ^ signbit) - signbit;
     }
 }

      if (need_comma &&
   ((operand->flags & (AXP_OPERAND_PARENS | AXP_OPERAND_COMMA))
    != AXP_OPERAND_PARENS))
 {
   (*info->fprintf_func) (info->stream, ",");
 }
      if (operand->flags & AXP_OPERAND_PARENS)
 (*info->fprintf_func) (info->stream, "(");


      if (operand->flags & AXP_OPERAND_IR)
 (*info->fprintf_func) (info->stream, "%s", regnames[value]);
      else if (operand->flags & AXP_OPERAND_FPR)
 (*info->fprintf_func) (info->stream, "%s", regnames[value + 32]);
      else if (operand->flags & AXP_OPERAND_RELATIVE)
 (*info->print_address_func) (memaddr + 4 + value, info);
      else if (operand->flags & AXP_OPERAND_SIGNED)
 (*info->fprintf_func) (info->stream, "%d", value);
      else
 (*info->fprintf_func) (info->stream, "%#x", value);

      if (operand->flags & AXP_OPERAND_PARENS)
 (*info->fprintf_func) (info->stream, ")");
      need_comma = 1;
    }

  return 4;
}
