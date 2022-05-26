# 1 "project/radare2/libr/asm/arch/sh/gnu/sh-dis.c"
# 18 "project/radare2/libr/asm/arch/sh/gnu/sh-dis.c"
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#define STATIC_TABLE 
#define DEFINE_TABLE 

#include "sh-opc.h"
#include "disas-asm.h"
#include "mybfd.h"

#define LITTLE_BIT 2


static int
print_insn_shx (bfd_vma memaddr, struct disassemble_info *info)
{
  fprintf_ftype fprintf_fn = info->fprintf_func;
  void *stream = info->stream;
  unsigned char insn[2];
  unsigned char nibs[4];
  int status;
  bfd_vma relmask = ~ (bfd_vma) 0;
  sh_opcode_info *op;

  status = info->read_memory_func (memaddr, insn, 2, info);

  if (status != 0)
    {
      info->memory_error_func (status, memaddr, info);
      return -1;
    }

  if (info->flags & LITTLE_BIT)
    {
      nibs[0] = (insn[1] >> 4) & 0xf;
      nibs[1] = insn[1] & 0xf;

      nibs[2] = (insn[0] >> 4) & 0xf;
      nibs[3] = insn[0] & 0xf;
    }
  else
    {
      nibs[0] = (insn[0] >> 4) & 0xf;
      nibs[1] = insn[0] & 0xf;

      nibs[2] = (insn[1] >> 4) & 0xf;
      nibs[3] = insn[1] & 0xf;
    }

  for (op = sh_table; op->name; op++)
    {
      int n;
      int imm = 0;
      int rn = 0;
      int rm = 0;
      int rb = 0;
      int disp_pc=0;
      bfd_vma disp_pc_addr = 0;

      for (n = 0; n < 4; n++)
 {
   int i = op->nibbles[n];

   if (i < 16)
     {
    if (nibs[n] == i) {
     continue;
    }
    goto fail;
     }
   switch (i)
     {
     case BRANCH_8:
       imm = (nibs[2] << 4) | (nibs[3]);
       if (imm & 0x80) {
        imm |= ~0xff;
       }
       imm = (imm * 2) + 4 ;
       goto ok;
     case BRANCH_12:
       imm = ((nibs[1]) << 8) | (nibs[2] << 4) | (nibs[3]);
       if (imm & 0x800) {
        imm |= ~0xfff;
       }
       imm = imm * 2 + 4;
       goto ok;
     case IMM_4:
       imm = nibs[3];
       goto ok;
     case IMM_4BY2:
       imm = nibs[3] <<1;
       goto ok;
     case IMM_4BY4:
       imm = nibs[3] <<2;
       goto ok;
     case IMM_8:
       imm = (nibs[2] << 4) | nibs[3];
       goto ok;
     case PCRELIMM_8BY2:
       imm = ((nibs[2] << 4) | nibs[3]) <<1;
       relmask = ~ (bfd_vma) 1;
       goto ok;
     case PCRELIMM_8BY4:
       imm = ((nibs[2] << 4) | nibs[3]) <<2;
       relmask = ~ (bfd_vma) 3;
       goto ok;
     case IMM_8BY2:
       imm = ((nibs[2] << 4) | nibs[3]) <<1;
       goto ok;
     case IMM_8BY4:
       imm = ((nibs[2] << 4) | nibs[3]) <<2;
       goto ok;
     case DISP_8:
       imm = (nibs[2] << 4) | (nibs[3]);
       goto ok;
     case DISP_4:
       imm = nibs[3];
       goto ok;
     case REG_N:
       rn = nibs[n];
       break;
     case REG_M:
       rm = nibs[n];
       break;
     case REG_NM:
       rn = (nibs[n] & 0xc) >> 2;
       rm = (nibs[n] & 0x3);
       break;
     case REG_B:
       rb = nibs[n] & 0x07;
       break;
     default:
       fprintf(stderr, "sh-dis: abort");
       return 0;
     }
 }

    ok:
      fprintf_fn (stream,"%s", op->name);
      for (n = 0; n < 3 && op->arg[n] != A_END; n++)
 {
       if (n && op->arg[1] != A_END) {
        fprintf_fn (stream, ",");
       }
       switch (op->arg[n]) {
       case A_IMM:
        fprintf_fn (stream, " 0x%02X", (unsigned char)(imm));
        break;
       case A_R0:
        fprintf_fn (stream, " r0");
        break;
       case A_REG_N:
        fprintf_fn (stream, " r%d", rn);
        break;
       case A_INC_N:
        fprintf_fn (stream, " @r%d+", rn);
        break;
       case A_DEC_N:
        fprintf_fn (stream, " @-r%d", rn);
        break;
       case A_IND_N:
        fprintf_fn (stream, " @r%d", rn);
        break;
       case A_DISP_REG_N:
        fprintf_fn (stream, " @(0x%x,r%d)", imm, rn);
        break;
       case A_REG_M:
        fprintf_fn (stream, " r%d", rm);
        break;
       case A_INC_M:
        fprintf_fn (stream, " @r%d+", rm);
        break;
       case A_DEC_M:
        fprintf_fn (stream, " @-r%d", rm);
        break;
       case A_IND_M:
        fprintf_fn (stream, " @r%d", rm);
        break;
       case A_DISP_REG_M:
        fprintf_fn (stream, " @(0x%x,r%d)", imm, rm);
        break;
       case A_REG_B:
        fprintf_fn (stream, " r%d_bank", rb);
        break;
       case A_DISP_PC:
        disp_pc = 1;
        disp_pc_addr = imm + 4 + (memaddr & relmask);
        fprintf_fn (stream, " @(0x%x,pc)", imm);
        break;
       case A_IND_R0_REG_N:
        fprintf_fn (stream, " @(r0,r%d)", rn);
        break;
       case A_IND_R0_REG_M:
        fprintf_fn (stream, " @(r0,r%d)", rm);
        break;
       case A_DISP_GBR:
        fprintf_fn (stream, " @(0x%x,gbr)", imm);
        break;
       case A_R0_GBR:
        fprintf_fn (stream, " @(r0,gbr)");
        break;
       case A_BDISP12:
       case A_BDISP8:
        fprintf_fn (stream, " ");
        (*info->print_address_func) (imm + memaddr, info);
        break;
       case A_SR:
        fprintf_fn (stream, " sr");
        break;
       case A_GBR:
        fprintf_fn (stream, " gbr");
        break;
       case A_VBR:
        fprintf_fn (stream, " vbr");
        break;
       case A_SSR:
        fprintf_fn (stream, " ssr");
        break;
       case A_SPC:
        fprintf_fn (stream, " spc");
        break;
       case A_MACH:
        fprintf_fn (stream, " mach");
        break;
       case A_MACL:
        fprintf_fn (stream, " macl");
        break;
       case A_PR:
        fprintf_fn (stream, " pr");
        break;
       case A_SGR:
        fprintf_fn (stream, " sgr");
        break;
       case A_DBR:
        fprintf_fn (stream, " dbr");
        break;
       case FD_REG_N:
        if (0) {
         goto d_reg_n;
        }
       case F_REG_N:
        fprintf_fn (stream, " fr%d", rn);
        break;
       case F_REG_M:
        fprintf_fn (stream, " fr%d", rm);
        break;
       case DX_REG_N:
        if (rn & 1) {
         fprintf_fn (stream, " xd%d", rn & ~1);
         break;
        }
       d_reg_n:
       case D_REG_N:
        fprintf_fn (stream, " dr%d", rn);
        break;
       case DX_REG_M:
        if (rm & 1) {
         fprintf_fn (stream, " xd%d", rm & ~1);
         break;
        }
       case D_REG_M:
        fprintf_fn (stream, " dr%d", rm);
        break;
       case FPSCR_M:
       case FPSCR_N:
        fprintf_fn (stream, " fpscr");
        break;
       case FPUL_M:
       case FPUL_N:
        fprintf_fn (stream, " fpul");
        break;
       case F_FR0:
        fprintf_fn (stream, " fr0");
        break;
       case V_REG_N:
        fprintf_fn (stream, " fv%d", rn * 4);
        break;
       case V_REG_M:
        fprintf_fn (stream, " fv%d", rm * 4);
        break;
       case XMTRX_M4:
        fprintf_fn (stream, " xmtrx");
        break;
       default:
        fprintf (stderr, "sh-dis: abort");
        return 0;
     }
 }

#if 0





      if (!(info->flags & 1)
   && (op->name[0] == 'j'
       || (op->name[0] == 'b'
    && (op->name[1] == 'r'
        || op->name[1] == 's'))
       || (op->name[0] == 'r' && op->name[1] == 't')
       || (op->name[0] == 'b' && op->name[2] == '.')))
 {
   info->flags |= 1;
   fprintf_fn (stream, " (slot ");
   print_insn_shx (memaddr + 2, info);
   info->flags &= ~1;
   fprintf_fn (stream, ")");
   return 4;
 }
#endif

      if (disp_pc && strcmp (op->name, "mova") != 0)
 {
   int size;
   bfd_byte bytes[4];

   if (relmask == ~(bfd_vma)1) {
    size = 2;
   } else {
    size = 4;
   }


   status = info->read_memory_func (disp_pc_addr, bytes, size, info);
   if (status != 0) {
   info->memory_error_func (status, memaddr, info);
   return -1;
   }
      uint32_t val;

   if (size == 2) {
    val=(info->flags & LITTLE_BIT)? bfd_getl16 (bytes):bfd_getb16 (bytes);

    val= (val&0x8000)? (val | 0xFFFF0000):(val & 0x0000FFFF);
   } else {
    val=(info->flags & LITTLE_BIT)? bfd_getl32 (bytes):bfd_getb32 (bytes);
   }


 }

      return 2;
    fail:
      ;

    }
  fprintf_fn (stream, ".word 0x%02x%02x%02x%02x", nibs[0], nibs[1], nibs[2], nibs[3]);
  return 2;
}

int
print_insn_shl (bfd_vma memaddr, struct disassemble_info *info)
{
  int r;

  info->flags = LITTLE_BIT;
  r = print_insn_shx (memaddr, info);
  return r;
}

int
print_insn_shb (bfd_vma memaddr, struct disassemble_info *info)
{
  int r;

  info->flags = 0;
  r = print_insn_shx (memaddr, info);
  return r;
}
