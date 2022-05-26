# 1 "project/radare2/shlr/capstone/tests/test_customized_mnem.c"






#include <stdio.h>
#include <stdlib.h>

#include <capstone/platform.h>
#include <capstone/capstone.h>

#define X86_CODE32 "\x75\x01"


static void print_string_hex(unsigned char *str, size_t len)
{
 unsigned char *c;

 for (c = str; c < str + len; c++) {
  printf("%02x ", *c & 0xff);
 }
 printf("\t");
}


static void print_insn(csh handle)
{
 cs_insn *insn;
 size_t count;

 count = cs_disasm(handle, (const uint8_t *)X86_CODE32, sizeof(X86_CODE32) - 1, 0x1000, 1, &insn);
 if (count) {
  print_string_hex((unsigned char *)X86_CODE32, sizeof(X86_CODE32) - 1);
  printf("\t%s\t%s\n", insn[0].mnemonic, insn[0].op_str);

  cs_free(insn, count);
 } else {
  printf("ERROR: Failed to disasm given code!\n");
  abort();
 }
}

static void test()
{
 csh handle;
 cs_err err;

 cs_opt_mnem my_mnem = { X86_INS_JNE, "jnz" };

 cs_opt_mnem default_mnem = { X86_INS_JNE, NULL };

 err = cs_open(CS_ARCH_X86, CS_MODE_32, &handle);
 if (err) {
  if (cs_support(CS_ARCH_X86)) {
   printf("Failed on cs_open() with error returned: %u\n", err);
   abort();
  } else
   return;
 }


 printf("Disassemble X86 code with default instruction mnemonic\n");
 print_insn(handle);


 printf("\nNow customize engine to change mnemonic from 'JNE' to 'JNZ'\n");
 cs_option(handle, CS_OPT_MNEMONIC, (size_t)&my_mnem);


 print_insn(handle);


 printf("\nReset engine to use the default mnemonic\n");
 cs_option(handle, CS_OPT_MNEMONIC, (size_t)&default_mnem);


 print_insn(handle);


 cs_close(&handle);
}

int main()
{
 test();

 return 0;
}
