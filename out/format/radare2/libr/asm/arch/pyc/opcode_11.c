# 1 "project/radare2/libr/asm/arch/pyc/opcode_11.c"
#include "opcode.h"

pyc_opcodes *opcode_11(void) {
 pyc_opcodes *ret = opcode_13 ();
 if (!ret) {
  return NULL;
 }

 ret->version_sig = (void *(*)())opcode_11;

 r_list_purge (ret->opcode_arg_fmt);
 add_arg_fmt (ret, "EXTENDED_ARG", format_extended_arg);

 return ret;
}
