# 1 "project/radare2/libr/asm/arch/pyc/opcode_33.c"
#include "opcode.h"

pyc_opcodes *opcode_33(void) {
 pyc_opcodes *ret = opcode_3x ();
 if (!ret) {
  return NULL;
 }

 ret->version_sig = (void *(*)())opcode_33;



 rm_op (.op_obj = ret->opcodes, .op_name = "STOP_CODE", .op_code = 0);
 def_op (.op_obj = ret->opcodes, .op_name = "YIELD_FROM", .op_code = 72, .pop = 1, .push = 0);

 r_list_purge (ret->opcode_arg_fmt);
 add_arg_fmt (ret, "EXTENDED_ARG", format_extended_arg);
 add_arg_fmt (ret, "MAKE_FUNCTION", format_MAKE_FUNCTION_arg_3x);

 return ret;
}
