# 1 "project/radare2/shlr/capstone/cstool/cstool_riscv.c"



#include <stdio.h>
#include <capstone/capstone.h>

void print_insn_detail_riscv(csh handle, cs_insn *ins);

void print_insn_detail_riscv(csh handle, cs_insn *ins)
{
 cs_riscv *riscv;
 int i;


 if (ins->detail == NULL)
  return;

 riscv = &(ins->detail->riscv);
 if (riscv->op_count)
  printf("\top_count: %u\n", riscv->op_count);

 for (i = 0; i < riscv->op_count; i++) {
  cs_riscv_op *op = &(riscv->operands[i]);
  switch((int)op->type) {
   default:
    break;
   case RISCV_OP_REG:
    printf("\t\toperands[%u].type: REG = %s\n", i, cs_reg_name(handle, op->reg));
    break;
   case RISCV_OP_IMM:
    printf("\t\toperands[%u].type: IMM = 0x%lx\n", i, (long)op->imm);
    break;
   case RISCV_OP_MEM:
    printf("\t\toperands[%u].type: MEM\n", i);
    if (op->mem.base != RISCV_REG_INVALID)
     printf("\t\t\toperands[%u].mem.base: REG = %s\n",
       i, cs_reg_name(handle, op->mem.base));
    if (op->mem.disp != 0)
     printf("\t\t\toperands[%u].mem.disp: 0x%lx\n", i, (long)op->mem.disp);

    break;
  }
 }

 printf("\n");
}
