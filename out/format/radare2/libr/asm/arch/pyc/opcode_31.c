# 1 "project/radare2/libr/asm/arch/pyc/opcode_31.c"
#include "opcode.h"

pyc_opcodes *opcode_31(void) {
 pyc_opcodes *ret = opcode_32 ();
 if (!ret) {
  return NULL;
 }

 ret->version_sig = (void *(*)())opcode_31;


 rm_op (.op_obj = ret->opcodes, .op_name = "DUP_TOP_TWO", .op_code = 5);
 rm_op (.op_obj = ret->opcodes, .op_name = "DELETE_DEREF", .op_code = 138);
 rm_op (.op_obj = ret->opcodes, .op_name = "SETUP_WITH", .op_code = 143);


 def_op (.op_obj = ret->opcodes, .op_name = "ROT_FOUR", .op_code = 5);
 def_op (.op_obj = ret->opcodes, .op_name = "DUP_TOPX", .op_code = 99);


 def_op (.op_obj = ret->opcodes, .op_name = "EXTENDED_ARG", .op_code = 143);

 r_list_purge (ret->opcode_arg_fmt);
 add_arg_fmt (ret, "EXTENDED_ARG", format_extended_arg);
 add_arg_fmt (ret, "MAKE_FUNCTION", format_MAKE_FUNCTION_arg_3x);

 return ret;
}
