# 1 "project/radare2/libr/asm/arch/pyc/opcode_34.c"
#include "opcode.h"

pyc_opcodes *opcode_34(void) {
 pyc_opcodes *ret = opcode_33 ();
 if (!ret) {
  return NULL;
 }

 ret->version_sig = (void *(*)())opcode_34;


 rm_op (.op_obj = ret->opcodes, .op_name = "STORE_LOCALS", .op_code = 69);


 def_op (.op_obj = ret->opcodes, .op_name = "YIELD_FROM", .op_code = 72);
 free_op (.op_obj = ret->opcodes, .op_name = "LOAD_CLASSDEREF", .op_code = 148);

 r_list_purge (ret->opcode_arg_fmt);
 add_arg_fmt (ret, "EXTENDED_ARG", format_extended_arg);
 add_arg_fmt (ret, "MAKE_FUNCTION", format_MAKE_FUNCTION_arg_3x);

 return ret;
}
