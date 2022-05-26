# 1 "project/radare2/libr/asm/arch/gb/gbdis.c"


#include <r_types.h>
#include <r_util.h>
#include <r_asm.h>
#include <r_lib.h>
#include <stdio.h>
#include <string.h>
#include "gb_op_table.h"

static int gbOpLength(int gboptype){
 switch (gboptype) {
 case GB_8BIT:
  return 1;
 case GB_8BIT + ARG_8 + GB_IO:
 case GB_8BIT + ARG_8:
 case GB_16BIT:
  return 2;
 case GB_8BIT + ARG_16:
  return 3;
 default:
  return 0;
 }
}

static void gb_hardware_register_name (char *reg, ut8 offset) {
 switch (offset) {
 case 0x00:
  r_str_cpy (reg, "rP1")
  break;
 case 0x01:
  r_str_cpy (reg, "rSB")
  break;
 case 0x02:
  r_str_cpy (reg, "rSC")
  break;
 case 0x04:
  r_str_cpy (reg, "rDIV")
  break;
 case 0x05:
  r_str_cpy (reg, "rTIMA")
  break;
 case 0x06:
  r_str_cpy (reg, "rTMA")
  break;
 case 0x07:
  r_str_cpy (reg, "rTAC")
  break;
 case 0x0f:
  r_str_cpy (reg, "rIF")
  break;

 case 0x10:
  r_str_cpy (reg, "rAUD1SWEEP")
  break;
 case 0x11:
  r_str_cpy (reg, "rAUD1LEN")
  break;
 case 0x12:
  r_str_cpy (reg, "rAUD1ENV")
  break;
 case 0x13:
  r_str_cpy (reg, "rAUD1LOW")
  break;
 case 0x14:
  r_str_cpy (reg, "rAUD1HIGH")
  break;

 case 0x16:
  r_str_cpy (reg, "rAUD2LEN")
  break;
 case 0x17:
  r_str_cpy (reg, "rAUD2ENV")
  break;
 case 0x18:
  r_str_cpy (reg, "rAUD2LOW")
  break;
 case 0x19:
  r_str_cpy (reg, "rAUD2HIGH")
  break;

 case 0x1a:
  r_str_cpy (reg, "rAUD3ENA")
  break;
 case 0x1b:
  r_str_cpy (reg, "rAUD3LEN")
  break;
 case 0x1c:
  r_str_cpy (reg, "rAUD3LEVEL")
  break;
 case 0x1d:
  r_str_cpy (reg, "rAUD3LOW")
  break;
 case 0x1e:
  r_str_cpy (reg, "rAUD3HIGH")
  break;

 case 0x20:
  r_str_cpy (reg, "rAUD4LEN")
  break;
 case 0x21:
  r_str_cpy (reg, "rAUD4ENV")
  break;
 case 0x22:
  r_str_cpy (reg, "rAUD4POLY")
  break;

 case 0x23:
  r_str_cpy (reg, "rAUD4GO")
  break;
 case 0x24:
  r_str_cpy (reg, "rAUDVOL")
  break;
 case 0x25:
  r_str_cpy (reg, "rAUDTERM")
  break;
 case 0x26:
  r_str_cpy (reg, "rAUDENA")
  break;
 case 0x76:
  r_str_cpy (reg, "rPCM12")
  break;
 case 0x77:
  r_str_cpy (reg, "rPCM34")
  break;
 case 0x40:
  r_str_cpy (reg, "rLCDC")
  break;
 case 0x41:
  r_str_cpy (reg, "rSTAT")
  break;
 case 0x42:
  r_str_cpy (reg, "rSCY")
  break;
 case 0x43:
  r_str_cpy (reg, "rSCX")
  break;
 case 0x44:
  r_str_cpy (reg, "rLY")
  break;
 case 0x45:
  r_str_cpy (reg, "rLYC")
  break;
 case 0x46:
  r_str_cpy (reg, "rDMA")
  break;
 case 0x47:
  r_str_cpy (reg, "rBGP")
  break;
 case 0x48:
  r_str_cpy (reg, "rOBP0")
  break;
 case 0x49:
  r_str_cpy (reg, "rOBP1")
  break;
 case 0x4a:
  r_str_cpy (reg, "rWY")
  break;
 case 0x4b:
  r_str_cpy (reg, "rWX")
  break;
 case 0x4d:
  r_str_cpy (reg, "rKEY1")
  break;
 case 0x4f:
  r_str_cpy (reg, "rVBK")
  break;
 case 0x51:
 case 0x52:
 case 0x53:
 case 0x54:
 case 0x55:
  sprintf (reg, "rHDMA%d", offset - 0x50);
  break;
 case 0x56:
  r_str_cpy (reg, "rRP")
  break;
 case 0x68:
  r_str_cpy (reg, "rBCPS")
  break;
 case 0x69:
  r_str_cpy (reg, "rBCPD")
  break;
 case 0x6a:
  r_str_cpy (reg, "rOCPS")
  break;
 case 0x6b:
  r_str_cpy (reg, "rOCPD")
  break;
 case 0x70:
  r_str_cpy (reg, "rSVBK")
  break;
 case 0xff:
  r_str_cpy (reg, "rIE")
  break;
 default:

  sprintf (reg, "0xff%02x", offset);
  break;
 }
}

#ifndef GB_DIS_LEN_ONLY
static int gbDisass(RAsmOp *op, const ut8 *buf, int len){
 int foo = gbOpLength (gb_op[buf[0]].type);
 if (len < foo) {
  return 0;
 }
 const char *buf_asm = "invalid";
 char reg[32];
 memset (reg, '\0', sizeof (reg));
 switch (gb_op[buf[0]].type) {
 case GB_8BIT:
  buf_asm = sdb_fmt ("%s", gb_op[buf[0]].name);
  break;
 case GB_16BIT:
  buf_asm = sdb_fmt ("%s %s", cb_ops[buf[1] >> 3u], cb_regs[buf[1] & 7u]);
  break;
 case GB_8BIT + ARG_8:
  buf_asm = sdb_fmt (gb_op[buf[0]].name, buf[1]);
  break;
 case GB_8BIT + ARG_16:
  buf_asm = sdb_fmt (gb_op[buf[0]].name, buf[1] + 0x100 * buf[2]);
  break;
 case GB_8BIT + ARG_8 + GB_IO:
  gb_hardware_register_name(reg, buf[1]);
  buf_asm = sdb_fmt (gb_op[buf[0]].name, reg);
  break;
 }
 r_strbuf_set (&op->buf_asm, buf_asm);
 return foo;
}
#endif
