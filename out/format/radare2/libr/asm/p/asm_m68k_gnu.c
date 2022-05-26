# 1 "project/radare2/libr/asm/p/asm_m68k_gnu.c"


#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <r_types.h>
#include "../arch/include/opcode/m68k.h"
#include <r_lib.h>
#include <r_util.h>
#include <r_asm.h>
#include <mybfd.h>
#include "disas-asm.h"

static unsigned long Offset = 0;
static RStrBuf *buf_global = NULL;
static ut8 bytes[8];

static int m68k_buffer_read_memory(bfd_vma memaddr, bfd_byte *myaddr, ut32 length, struct disassemble_info *info) {
 int delta = (memaddr - Offset);
 if (delta < 0) {
  return -1;
 }
 if ((delta + length) > 8) {
  return -1;
 }
 memcpy (myaddr, bytes + delta, length);
 return 0;
}

static int symbol_at_address(bfd_vma addr, struct disassemble_info * info) {
 return 0;
}

static void memory_error_func(int status, bfd_vma memaddr, struct disassemble_info *info) {

}

DECLARE_GENERIC_PRINT_ADDRESS_FUNC()
DECLARE_GENERIC_FPRINTF_FUNC()

static int disassemble(RAsm *a, RAsmOp *op, const ut8 *buf, int len) {
 struct disassemble_info disasm_obj;
 buf_global = &op->buf_asm;
 Offset = a->pc;
 memcpy (bytes, buf, R_MIN (len, 8));


 memset (&disasm_obj, '\0', sizeof (struct disassemble_info));
 disasm_obj.buffer = bytes;
#if 0
 disasm_obj.flavour = PROCESSOR_V850E2;
 if (!R_STR_ISEMPTY (a->cpu)) {
  if (!strcmp (a->cpu, "e")) {
   disasm_obj.flavour = PROCESSOR_V850E;
  } else if (!strcmp (a->cpu, "e1")) {
   disasm_obj.flavour = PROCESSOR_V850E1;
  } else if (!strcmp (a->cpu, "e2")) {
   disasm_obj.flavour = PROCESSOR_V850E2;
  } else if (!strcmp (a->cpu, "e2v3")) {
   disasm_obj.flavour = PROCESSOR_V850E2V3;
  } else if (!strcmp (a->cpu, "e3v5")) {
   disasm_obj.flavour = PROCESSOR_V850E3V5;
  }
 }
#endif
 disasm_obj.read_memory_func = &m68k_buffer_read_memory;
 disasm_obj.symbol_at_address_func = &symbol_at_address;
 disasm_obj.memory_error_func = &memory_error_func;
 disasm_obj.print_address_func = &generic_print_address_func;
 disasm_obj.endian = BFD_ENDIAN_LITTLE;
 disasm_obj.fprintf_func = &generic_fprintf_func;
 disasm_obj.stream = stdout;

 op->size = print_insn_m68k ((bfd_vma)Offset, &disasm_obj);
 if (op->size == -1) {
  r_strbuf_set (&op->buf_asm, "(data)");
 }
 if (!memcmp (buf, "\xff\xff\xff\xff\xff\xff\xff\xff", op->size)) {
  r_strbuf_set (&op->buf_asm, "breakpoint");
  return 4;
 }
 return op->size;
}

RAsmPlugin r_asm_plugin_m68k_gnu = {
 .name = "m68k.gnu",
 .arch = "m68k",

 .license = "GPL3",
 .bits = 32,
 .endian = R_SYS_ENDIAN_LITTLE,
 .desc = "Binutils 2.36 based m68k disassembler",
 .disassemble = &disassemble
};

#ifndef R2_PLUGIN_INCORE
R_API RLibStruct radare_plugin = {
 .type = R_LIB_TYPE_ASM,
 .data = &r_asm_plugin_m68k_gnu,
 .version = R2_VERSION
};
#endif
