# 1 "project/radare2/libr/asm/arch/pyc/opcode_25.c"
#include "opcode.h"

pyc_opcodes *opcode_25(void) {
 pyc_opcodes *ret = opcode_24 ();
 if (!ret) {
  return NULL;
 }

 ret->version_sig = (void *(*)())opcode_25;


 def_op (.op_obj = ret->opcodes, .op_name = "WITH_CLEANUP", .op_code = 81);

 r_list_purge (ret->opcode_arg_fmt);
 add_arg_fmt (ret, "EXTENDED_ARG", format_extended_arg);

 return ret;
}
