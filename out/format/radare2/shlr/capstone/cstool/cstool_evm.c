# 1 "project/radare2/shlr/capstone/cstool/cstool_evm.c"
#include <stdio.h>
#include <stdlib.h>

#include <capstone/capstone.h>

void print_insn_detail_evm(csh handle, cs_insn *ins);

void print_insn_detail_evm(csh handle, cs_insn *ins)
{
 cs_evm *evm;


 if (ins->detail == NULL)
  return;

 evm = &(ins->detail->evm);

 if (evm->pop)
  printf("\tPop:     %u\n", evm->pop);

 if (evm->push)
  printf("\tPush:    %u\n", evm->push);

 if (evm->fee)
  printf("\tGas fee: %u\n", evm->fee);
}
