# 1 "project/radare2/libr/asm/arch/cris/gnu/cris-dis.c"
# 24 "project/radare2/libr/asm/arch/cris/gnu/cris-dis.c"
#include <stdlib.h>
#include <string.h>
#include "disas-asm.h"
#include "sysdep.h"
#include "opcode/cris.h"
#include "libiberty.h"




#ifndef MAX_BYTES_PER_CRIS_INSN
#define MAX_BYTES_PER_CRIS_INSN 8
#endif



#ifndef PARSE_PREFIX
#define PARSE_PREFIX 1
#endif


#define REGISTER_PREFIX_CHAR '$'
# 68 "project/radare2/libr/asm/arch/cris/gnu/cris-dis.c"
#ifndef TRACE_CASE
#define TRACE_CASE (disdata->trace_case)
#endif

enum cris_disass_family
 { cris_dis_v0_v10, cris_dis_common_v10_v32, cris_dis_v32 };


struct cris_disasm_data
{


  bfd_boolean trace_case;



  enum cris_disass_family distype;
};


static long case_offset = 0;


static long case_offset_counter = 0;


static long no_of_case_offsets = 0;


static long last_immediate = 0;

static int cris_constraint
  (const char *, unsigned, unsigned, struct cris_disasm_data *);




bfd_boolean
cris_parse_disassembler_options (disassemble_info *info,
     enum cris_disass_family distype)
{
  struct cris_disasm_data *disdata = (struct cris_disasm_data *) info->private_data;
  if (!disdata) {
   return FALSE;
  }

  info->private_data = calloc (1, sizeof (struct cris_disasm_data));


  disdata->trace_case
    = (!info->disassembler_options
       || (strcmp (info->disassembler_options, "nocase") != 0));

  disdata->distype = distype;
  return TRUE;
}

static const struct cris_spec_reg *
spec_reg_info (unsigned int sreg, enum cris_disass_family distype)
{
  int i;

  for (i = 0; cris_spec_regs[i].name != NULL; i++)
    {
      if (cris_spec_regs[i].number == sreg)
 {
       if (distype == cris_dis_v32) {
        switch (cris_spec_regs[i].applicable_version) {
        case cris_ver_warning:
        case cris_ver_version_all:
        case cris_ver_v3p:
        case cris_ver_v8p:
        case cris_ver_v10p:
        case cris_ver_v32p:

         if (!cris_spec_regs[i].warning) {
          return &cris_spec_regs[i];
         }
        default:;
        }
       } else if (cris_spec_regs[i].applicable_version != cris_ver_v32p) {
        return &cris_spec_regs[i];
       }
 }
    }

  return NULL;
}



static int
number_of_bits (unsigned int val)
{
  int bits;

  for (bits = 0; val != 0; val &= val - 1) {
   bits++;
  }

  return bits;
}



static const struct cris_opcode *
get_opcode_entry (unsigned int insn,
    unsigned int prefix_insn,
    struct cris_disasm_data *disdata)
{


  static const struct cris_opcode **opc_table = NULL;

  const struct cris_opcode *max_matchedp = NULL;
  const struct cris_opcode **prefix_opc_table = NULL;


  static const struct cris_opcode **dip_prefixes = NULL;
  static const struct cris_opcode **bdapq_m1_prefixes = NULL;
  static const struct cris_opcode **bdapq_m2_prefixes = NULL;
  static const struct cris_opcode **bdapq_m4_prefixes = NULL;
  static const struct cris_opcode **rest_prefixes = NULL;


  if (!opc_table)
    {
      opc_table = calloc (65536, sizeof (opc_table[0]));
      if (!opc_table) {
       return NULL;
      }

      dip_prefixes
 = calloc (65536, sizeof (dip_prefixes[0]));
      if (!dip_prefixes) {
       return NULL;
      }

      bdapq_m1_prefixes
 = calloc (65536, sizeof (bdapq_m1_prefixes[0]));
      if (!bdapq_m1_prefixes) {
       return NULL;
      }

      bdapq_m2_prefixes
 = calloc (65536, sizeof (bdapq_m2_prefixes[0]));
      if (!bdapq_m2_prefixes) {
       return NULL;
      }

      bdapq_m4_prefixes
 = calloc (65536, sizeof (bdapq_m4_prefixes[0]));
      if (!bdapq_m4_prefixes) {
       return NULL;
      }

      rest_prefixes
 = calloc (65536, sizeof (rest_prefixes[0]));
      if (!rest_prefixes) {
       return NULL;
      }
    }







  if (prefix_insn != NO_CRIS_PREFIX)
    {
      const struct cris_opcode *popcodep
 = (opc_table[prefix_insn] != NULL
    ? opc_table[prefix_insn]
    : get_opcode_entry (prefix_insn, NO_CRIS_PREFIX, disdata));

      if (!popcodep) {
       return NULL;
      }

      if (popcodep->match == BDAP_QUICK_OPCODE)
 {


   int offset = (prefix_insn & 255);

   if (offset > 127) {
    offset -= 256;
   }

   switch (offset)
     {
     case -4:
       prefix_opc_table = bdapq_m4_prefixes;
       break;

     case -2:
       prefix_opc_table = bdapq_m2_prefixes;
       break;

     case -1:
       prefix_opc_table = bdapq_m1_prefixes;
       break;

     default:
       prefix_opc_table = rest_prefixes;
       break;
     }
      } else if (popcodep->match == DIP_OPCODE) {


       prefix_opc_table = dip_prefixes;
      } else {
       prefix_opc_table = rest_prefixes;
      }
    }

    if (prefix_insn != NO_CRIS_PREFIX && prefix_opc_table[insn] != NULL) {
     max_matchedp = prefix_opc_table[insn];
    } else if (prefix_insn == NO_CRIS_PREFIX && opc_table[insn] != NULL) {
     max_matchedp = opc_table[insn];
    } else {
     const struct cris_opcode *opcodep;
     int max_level_of_match = -1;

     for (opcodep = cris_opcodes;
      opcodep->name != NULL;
      opcodep++) {
      int level_of_match;

      if (disdata->distype == cris_dis_v32) {
       switch (opcodep->applicable_version) {
       case cris_ver_version_all:
        break;

       case cris_ver_v0_3:
       case cris_ver_v0_10:
       case cris_ver_v3_10:
       case cris_ver_sim_v0_10:
       case cris_ver_v8_10:
       case cris_ver_v10:
       case cris_ver_warning:
        continue;

       case cris_ver_v3p:
       case cris_ver_v8p:
       case cris_ver_v10p:
       case cris_ver_v32p:
        break;

       case cris_ver_v8:
        abort ();
       default:
        abort ();
       }
      } else {
       switch (opcodep->applicable_version) {
       case cris_ver_version_all:
       case cris_ver_v0_3:
       case cris_ver_v3p:
       case cris_ver_v0_10:
       case cris_ver_v8p:
       case cris_ver_v8_10:
       case cris_ver_v10:
       case cris_ver_sim_v0_10:
       case cris_ver_v10p:
       case cris_ver_warning:
        break;

       case cris_ver_v32p:
        continue;

       case cris_ver_v8:
        abort ();
       default:
        abort ();
       }
      }







      if ((opcodep->match & insn) == opcodep->match && (opcodep->lose & insn) == 0 && ((level_of_match = cris_constraint (opcodep->args, insn, prefix_insn, disdata)) >= 0) && ((level_of_match += 2 * number_of_bits (opcodep->match | opcodep->lose)) > max_level_of_match)) {
       max_matchedp = opcodep;
       max_level_of_match = level_of_match;



       if (level_of_match >= 2 * 16) {
        break;
       }
      }
  }







  if (prefix_insn == NO_CRIS_PREFIX) {
   opc_table[insn] = max_matchedp;
  } else {
   prefix_opc_table[insn] = max_matchedp;
  }
    }

  return max_matchedp;
}





static int
cris_constraint (const char *cs,
   unsigned int insn,
   unsigned int prefix_insn,
   struct cris_disasm_data *disdata)
{
  int retval = 0;
  int tmp;
  int prefix_ok = 0;
  const char *s;

  for (s = cs; *s; s++) {
   switch (*s) {
   case '!':


    if (prefix_insn != NO_CRIS_PREFIX || disdata->distype != cris_dis_v0_v10) {
     return -1;
    }
    break;

   case 'U':

    return -1;

   case 'M':




    tmp = ((insn >> 12) & 0xf);
    if (tmp != 0 && tmp != 4 && tmp != 8) {
     return -1;
    }
    break;

   case 'm':
    if ((insn & 0x30) == 0x30) {
     return -1;
    }
    break;

   case 'S':

    if (prefix_insn != NO_CRIS_PREFIX && (insn & 0x400) == 0) {
     prefix_ok = 1;
     break;
    } else {
     return -1;
    }

   case 's':
   case 'y':
   case 'Y':


    if (prefix_insn != NO_CRIS_PREFIX) {
     if (insn & 0x400) {
      const struct cris_opcode *prefix_opcodep = get_opcode_entry (prefix_insn, NO_CRIS_PREFIX, disdata);

      if (prefix_opcodep->match == DIP_OPCODE) {
       return -1;
      }
     }

     prefix_ok = 1;
    }
    break;

   case 'B':

    prefix_ok = 1;



    if (prefix_insn != NO_CRIS_PREFIX) {

     const struct cris_opcode *prefix_opcodep = get_opcode_entry (prefix_insn, NO_CRIS_PREFIX, disdata);

     if (prefix_opcodep->match == BDAP_QUICK_OPCODE) {
      int pushsize = (prefix_insn & 255);

      if (pushsize > 127) {
       pushsize -= 256;
      }

      if (s[1] == 'P') {
       unsigned int spec_reg = (insn >> 12) & 15;
       const struct cris_spec_reg *sregp = spec_reg_info (spec_reg, disdata->distype);



       if (sregp && sregp->reg_size == (unsigned int)-pushsize) {
        break;
       }
      } else if (s[1] == 'R') {
       if ((insn & 0x30) == 0x20 && pushsize == -4) {
        break;
       }
      }


     }
    }
    return -1;

   case 'D':
    retval = (((insn >> 12) & 15) == (insn & 15));
    if (!retval) {
     return -1;
    } else {
     retval += 4;
    }
    break;

   case 'P': {
    const struct cris_spec_reg *sregp = spec_reg_info ((insn >> 12) & 15, disdata->distype);
# 515 "project/radare2/libr/asm/arch/cris/gnu/cris-dis.c"
    if (sregp != NULL) {
     retval += 3;
     break;
    } else {
     return -1;
    }
   }
   }
  }

  if (prefix_insn != NO_CRIS_PREFIX && !prefix_ok) {
   return -1;
  }

  return retval;
}



static char *
format_hex (unsigned long number,
     char *outbuffer,
     struct cris_disasm_data *disdata)
{

  number &= 0xffffffff;

  sprintf (outbuffer, "0x%lx", number);


  if (TRACE_CASE) {
   last_immediate = number;
  }

  return outbuffer + strlen (outbuffer);
}





static char *
format_dec (long number, char *outbuffer, int signedp)
{
  last_immediate = number;
  sprintf (outbuffer, signedp ? "%ld" : "%lu", number);

  return outbuffer + strlen (outbuffer);
}



static char *
format_reg (struct cris_disasm_data *disdata,
     int regno,
     char *outbuffer_start,
     bfd_boolean with_reg_prefix)
{
  char *outbuffer = outbuffer_start;

  if (with_reg_prefix) {
   *outbuffer++ = REGISTER_PREFIX_CHAR;
  }

  switch (regno)
    {
    case 15:

      if (disdata->distype == cris_dis_v32) {
       strcpy (outbuffer, "acr");
      } else {
       strcpy (outbuffer, "pc");
      }
      break;

    case 14:
      strcpy (outbuffer, "sp");
      break;

    default:
      sprintf (outbuffer, "r%d", regno);
      break;
    }

  return outbuffer_start + strlen (outbuffer_start);
}



static char *
format_sup_reg (unsigned int regno,
  char *outbuffer_start,
  bfd_boolean with_reg_prefix)
{
  char *outbuffer = outbuffer_start;
  int i;

  if (with_reg_prefix) {
   *outbuffer++ = REGISTER_PREFIX_CHAR;
  }

  for (i = 0; cris_support_regs[i].name != NULL; i++) {
   if (cris_support_regs[i].number == regno) {
    sprintf (outbuffer, "%s", cris_support_regs[i].name);
    return outbuffer_start + strlen (outbuffer_start);
   }
  }



  sprintf (outbuffer, "format_sup_reg-BUG");
  return outbuffer_start + strlen (outbuffer_start);
}



static unsigned
bytes_to_skip (unsigned int insn,
        const struct cris_opcode *matchedp,
        enum cris_disass_family distype,
        const struct cris_opcode *prefix_matchedp)
{

  unsigned to_skip = 2;
  const char *template = matchedp->args;
  const char *s;

  for (s = template; *s; s++) {
   if ((*s == 's' || *s == 'N' || *s == 'Y') && (insn & 0x400) && (insn & 15) == 15 && !prefix_matchedp) {


    int mode_size = 1 << ((insn >> 4) & (*template == 'z' ? 1 : 3));

    if (matchedp->imm_oprnd_size == SIZE_FIX_32) {
     to_skip += 4;
    } else if (matchedp->imm_oprnd_size == SIZE_SPEC_REG) {
     const struct cris_spec_reg *sregp = spec_reg_info ((insn >> 12) & 15, distype);



     if (!sregp) {
      return 2;
     }




     to_skip +=
      distype == cris_dis_v32 ? 4 : (sregp->reg_size + 1) & ~1;
    } else {
     to_skip += (mode_size + 1) & ~1;
    }
   } else if (*s == 'n') {
    to_skip += 4;
   } else if (*s == 'b') {
    to_skip += 2;
   }
  }

  return to_skip;
}



static char *
print_flags (struct cris_disasm_data *disdata, unsigned int insn, char *cp)
{





  static const char v8_fnames[] = "cvznxibm";
  static const char v32_fnames[] = "cvznxiup";
  const char *fnames
    = disdata->distype == cris_dis_v32 ? v32_fnames : v8_fnames;

  unsigned char flagbits = (((insn >> 8) & 0xf0) | (insn & 15));
  int i;

  for (i = 0; i < 8; i++) {
   if (flagbits & (1 << i)) {
    *cp++ = fnames[i];
   }
  }

  return cp;
}





static void
print_with_operands (const struct cris_opcode *opcodep,
       unsigned int insn,
       unsigned char *buffer,
       bfd_vma addr,
       disassemble_info *info,



       const struct cris_opcode *prefix_opcodep,
       unsigned int prefix_insn,
       unsigned char *prefix_buffer,
       bfd_boolean with_reg_prefix)
{


  char temp[sizeof (".d [$r13=$r12-2147483648],$r10") * 2];
  char *tp = temp;
  static const char mode_char[] = "bwd?";
  const char *s;
  const char *cs;
  struct cris_disasm_data *disdata
    = (struct cris_disasm_data *) info->private_data;


  (*info->fprintf_func) (info->stream, "%s", opcodep->name);

  cs = opcodep->args;
  s = cs;


  if (*s == 'p') {
   s++;
  }

  if (*s == 'm' || *s == 'M' || *s == 'z')
    {
      *tp++ = '.';


      *tp++ = *s == 'M'
 ? (insn & 0x8000 ? 'd'
    : insn & 0x4000 ? 'w' : 'b')
 : mode_char[(insn >> 4) & (*s == 'z' ? 1 : 3)];


      s += 2;
    }



    if (opcodep->match != (BRANCH_PC_LOW + BRANCH_INCR_HIGH * 256)) {
     *tp++ = ' ';
    }



    if (opcodep->name[0] == 'j') {
     if (CONST_STRNEQ (opcodep->name, "jsr")) {

      info->insn_type = dis_jsr;
     } else {

      info->insn_type = dis_branch;
     }
    }


  info->branch_delay_insns = opcodep->delayed;


  for (; *s; s++)
    {
    switch (*s)
      {
      case 'T':
 tp = format_sup_reg ((insn >> 12) & 15, tp, with_reg_prefix);
 break;

      case 'A':
       if (with_reg_prefix) {
        *tp++ = REGISTER_PREFIX_CHAR;
       }
       *tp++ = 'a';
       *tp++ = 'c';
       *tp++ = 'r';
       break;

      case '[':
      case ']':
      case ',':
 *tp++ = *s;
 *tp++ = ' ';
 break;

      case '!':



 break;

      case 'd':


 break;

      case 'B':



 prefix_opcodep = NULL;
 break;

      case 'D':
      case 'r':
  tp = format_reg (disdata, insn & 15, tp, with_reg_prefix);
  break;
      case 'R':
  tp = format_reg (disdata, (insn >> 12) & 15, tp, with_reg_prefix);
  break;

      case 'n':
 {

   unsigned long long number
     = (buffer[2] + buffer[3] * 256 + buffer[4] * 65536
        + buffer[5] * 0x1000000 + addr);


   *tp = 0;
   if (temp[0]) {
    (*info->fprintf_func) (info->stream, "%s", temp);
   }
   tp = temp;

   (*info->print_address_func) ((bfd_vma) number, info);
 }
 break;

      case 'u':
 {

   unsigned long number = (buffer[0] & 0xf) * 2 + addr;


   *tp = 0;
   if (temp[0]) {
    (*info->fprintf_func) (info->stream, "%s", temp);
   }
   tp = temp;

   (*info->print_address_func) ((bfd_vma) number, info);
 }
 break;

      case 'N':
      case 'y':
      case 'Y':
      case 'S':
      case 's':

 if ((insn & 0x400) && (insn & 15) == 15 && !prefix_opcodep)
   {


     long number;
     int signedp
       = ((*cs == 'z' && (insn & 0x20))
   || opcodep->match == BDAP_QUICK_OPCODE);
     int nbytes;

     if (opcodep->imm_oprnd_size == SIZE_FIX_32) {
      nbytes = 4;
     } else if (opcodep->imm_oprnd_size == SIZE_SPEC_REG) {
      const struct cris_spec_reg *sregp = spec_reg_info ((insn >> 12) & 15, disdata->distype);




      if (!sregp) {

       nbytes = 42;
      } else {



       nbytes = disdata->distype == cris_dis_v32
          ? 4
          : (sregp->reg_size + 1) & ~1;
      }
       }
     else
       {
  int mode_size = 1 << ((insn >> 4) & (*cs == 'z' ? 1 : 3));

  if (mode_size == 1) {
   nbytes = 2;
  } else {
   nbytes = mode_size;
  }
       }

     switch (nbytes)
       {
       case 1:
  number = buffer[2];
  if (signedp && number > 127) {
   number -= 256;
  }
  break;

       case 2:
  number = buffer[2] + buffer[3] * 256;
  if (signedp && number > 32767) {
   number -= 65536;
  }
  break;

       case 4:
  number
    = buffer[2] + buffer[3] * 256 + buffer[4] * 65536
    + buffer[5] * 0x1000000;
  break;

       default:
  strcpy (tp, "bug");
  tp += 3;
  number = 42;
       }

       if ((*cs == 'z' && (insn & 0x20)) || (opcodep->match == BDAP_QUICK_OPCODE && (nbytes <= 2 || buffer[1 + nbytes] == 0))) {
        tp = format_dec (number, tp, signedp);
       } else {
        unsigned int highbyte = (number >> 24) & 0xff;






        if (nbytes == 4 && (highbyte == ((addr >> 24) & 0xff) || (highbyte != 0 && highbyte != 0xff) || info->insn_type == dis_branch || info->insn_type == dis_jsr)) {

         *tp = 0;
         tp = temp;
         if (temp[0]) {
          (*info->fprintf_func) (info->stream, "%s", temp);
         }

         (*info->print_address_func) ((bfd_vma)number, info);

         info->target = number;
        } else {
         tp = format_hex (number, tp, disdata);
        }
       }
   }
 else
   {


     if (info->insn_type != dis_nonbranch)
       {
  int mode_size
    = 1 << ((insn >> 4)
     & (opcodep->args[0] == 'z' ? 1 : 3));
  int size;
  info->insn_type = dis_dref;
  info->flags |= CRIS_DIS_FLAG_MEMREF;

  if (opcodep->imm_oprnd_size == SIZE_FIX_32) {
   size = 4;
  } else if (opcodep->imm_oprnd_size == SIZE_SPEC_REG) {
   const struct cris_spec_reg *sregp = spec_reg_info ((insn >> 12) & 15, disdata->distype);



   if (!sregp) {
    size = 4;
   } else {
    size = sregp->reg_size;
   }
  } else {
   size = mode_size;
  }

  info->data_size = size;
       }

     *tp++ = '[';

     if (prefix_opcodep


  && ((insn & 0x400) == 0
      || prefix_opcodep->match != DIP_OPCODE))
       {
  if (insn & 0x400)
    {
      tp = format_reg (disdata, insn & 15, tp, with_reg_prefix);
      *tp++ = '=';
    }




  switch (prefix_opcodep->match)
    {
    case DIP_OPCODE:

      if ((prefix_insn & 0x400) && (prefix_insn & 15) == 15)
        {


   unsigned long number
     = prefix_buffer[2] + prefix_buffer[3] * 256
     + prefix_buffer[4] * 65536
     + prefix_buffer[5] * 0x1000000;

   info->target = (bfd_vma) number;



   *tp = 0;
   tp = temp;
   if (temp[0]) {
    (*info->fprintf_func) (info->stream, "%s", temp);
   }

   (*info->print_address_func) ((bfd_vma) number, info);
        }
      else
        {


   info->flags
     |= (CRIS_DIS_FLAG_MEM_TARGET2_IS_REG
         | CRIS_DIS_FLAG_MEM_TARGET2_MEM);

   info->target2 = prefix_insn & 15;

   *tp++ = '[';
   tp = format_reg (disdata, prefix_insn & 15, tp,
      with_reg_prefix);
   if (prefix_insn & 0x400) {
    *tp++ = '+';
   }
   *tp++ = ']';
        }
      break;

    case BDAP_QUICK_OPCODE:
      {
        int number;

        number = prefix_buffer[0];
        if (number > 127) {
         number -= 256;
        }


        tp = format_reg (disdata, (prefix_insn >> 12) & 15, tp,
           with_reg_prefix);
        if (number >= 0) {
         *tp++ = '+';
        }
        tp = format_dec (number, tp, 1);

        info->flags |= CRIS_DIS_FLAG_MEM_TARGET_IS_REG;
        info->target = (prefix_insn >> 12) & 15;
        info->target2 = (bfd_vma) number;
        break;
      }

    case BIAP_OPCODE:

      tp = format_reg (disdata, prefix_insn & 15, tp,
         with_reg_prefix);
      *tp++ = '+';
      tp = format_reg (disdata, (prefix_insn >> 12) & 15, tp,
         with_reg_prefix);
      *tp++ = '.';
      *tp++ = mode_char[(prefix_insn >> 4) & 3];

      info->flags
        |= (CRIS_DIS_FLAG_MEM_TARGET2_IS_REG
     | CRIS_DIS_FLAG_MEM_TARGET_IS_REG

     | ((prefix_insn & 0x8000)
        ? CRIS_DIS_FLAG_MEM_TARGET2_MULT4
        : ((prefix_insn & 0x8000)
    ? CRIS_DIS_FLAG_MEM_TARGET2_MULT2 : 0)));


      if (insn == 0xf83f && (prefix_insn & ~0xf000) == 0x55f) {

       case_offset_counter = no_of_case_offsets;
      }
      break;

    case BDAP_INDIR_OPCODE:


      tp = format_reg (disdata, (prefix_insn >> 12) & 15, tp,
         with_reg_prefix);

      if ((prefix_insn & 0x400) && (prefix_insn & 15) == 15)
        {
   long number;
   unsigned int nbytes;


   int mode_size = 1 << ((prefix_insn >> 4) & 3);

   if (mode_size == 1) {
    nbytes = 2;
   } else {
    nbytes = mode_size;
   }

   switch (nbytes)
     {
     case 1:
       number = prefix_buffer[2];
       if (number > 127) {
        number -= 256;
       }
       break;

     case 2:
       number = prefix_buffer[2] + prefix_buffer[3] * 256;
       if (number > 32767) {
        number -= 65536;
       }
       break;

     case 4:
       number
         = prefix_buffer[2] + prefix_buffer[3] * 256
         + prefix_buffer[4] * 65536
         + prefix_buffer[5] * 0x1000000;
       break;

     default:
       strcpy (tp, "bug");
       tp += 3;
       number = 42;
     }

   info->flags |= CRIS_DIS_FLAG_MEM_TARGET_IS_REG;
   info->target2 = (bfd_vma) number;



   if (nbytes == 4)
     {


       *tp++ = '+';
       *tp = 0;
       tp = temp;
       (*info->fprintf_func) (info->stream, "%s", temp);

       (*info->print_address_func) ((bfd_vma) number, info);
     }
   else
     {
      if (number >= 0) {
       *tp++ = '+';
      }
      tp = format_dec (number, tp, 1);
     }
        }
      else
        {

   *tp++ = '+';
   *tp++ = '[';
   tp = format_reg (disdata, prefix_insn & 15, tp,
      with_reg_prefix);
   if (prefix_insn & 0x400) {
    *tp++ = '+';
   }
   *tp++ = ']';
   *tp++ = '.';
   *tp++ = mode_char[(prefix_insn >> 4) & 3];

   info->flags
     |= (CRIS_DIS_FLAG_MEM_TARGET2_IS_REG
         | CRIS_DIS_FLAG_MEM_TARGET2_MEM
         | CRIS_DIS_FLAG_MEM_TARGET_IS_REG

         | (((prefix_insn >> 4) == 2)
     ? 0
     : (((prefix_insn >> 4) & 3) == 1
        ? CRIS_DIS_FLAG_MEM_TARGET2_MEM_WORD
        : CRIS_DIS_FLAG_MEM_TARGET2_MEM_BYTE)));
        }
      break;

    default:
      (*info->fprintf_func) (info->stream, "?prefix-bug");
    }


  prefix_opcodep = NULL;
       }
     else
       {
  tp = format_reg (disdata, insn & 15, tp, with_reg_prefix);

  info->flags |= CRIS_DIS_FLAG_MEM_TARGET_IS_REG;
  info->target = insn & 15;

  if (insn & 0x400) {
   *tp++ = '+';
  }
       }
     *tp++ = ']';
   }
 break;

      case 'x':
 tp = format_reg (disdata, (insn >> 12) & 15, tp, with_reg_prefix);
 *tp++ = '.';
 *tp++ = mode_char[(insn >> 4) & 3];
 break;

      case 'I':
 tp = format_dec (insn & 63, tp, 0);
 break;

      case 'b':
 {
   int where = buffer[2] + buffer[3] * 256;

   if (where > 32767) {
    where -= 65536;
   }

   where += addr + ((disdata->distype == cris_dis_v32) ? 0 : 4);

   if (insn == BA_PC_INCR_OPCODE) {
    info->insn_type = dis_branch;
   } else {
    info->insn_type = dis_condbranch;
   }

   info->target = (bfd_vma) where;

   *tp = 0;
   tp = temp;
   (*info->fprintf_func) (info->stream, "%s%s ",
     temp, cris_cc_strings[insn >> 12]);

   (*info->print_address_func) ((bfd_vma) where, info);
 }
      break;

    case 'c':
      tp = format_dec (insn & 31, tp, 0);
      break;

    case 'C':
      tp = format_dec (insn & 15, tp, 0);
      break;

    case 'o':
      {
 long offset = insn & 0xfe;
 bfd_vma target;

 if (insn & 1) {
  offset |= ~0xff;
 }

 if (opcodep->match == BA_QUICK_OPCODE) {
  info->insn_type = dis_branch;
 } else {
  info->insn_type = dis_condbranch;
 }

 target = addr + ((disdata->distype == cris_dis_v32) ? 0 : 2) + offset;
 info->target = target;
 *tp = 0;
 tp = temp;
 (*info->fprintf_func) (info->stream, "%s", temp);
 (*info->print_address_func) (target, info);
      }
      break;

    case 'Q':
    case 'O':
      {
 long number = buffer[0];

 if (number > 127) {
  number = number - 256;
 }

 tp = format_dec (number, tp, 1);
 *tp++ = ',';
 tp = format_reg (disdata, (insn >> 12) & 15, tp, with_reg_prefix);
      }
      break;

    case 'f':
      tp = print_flags (disdata, insn, tp);
      break;

    case 'i':
      tp = format_dec ((insn & 32) ? (insn & 31) | ~31L : insn & 31, tp, 1);
      break;

    case 'P':
      {
 const struct cris_spec_reg *sregp
   = spec_reg_info ((insn >> 12) & 15, disdata->distype);

if (sregp) {
 if (!sregp->name) {

  *tp++ = '?';
 } else {
  if (with_reg_prefix) {
   *tp++ = REGISTER_PREFIX_CHAR;
  }
  strcpy (tp, sregp->name);
  tp += strlen (tp);
   }
}
      }
      break;

    default:
      strcpy (tp, "???");
      tp += 3;
    }
  }

  *tp = 0;

  if (prefix_opcodep) {
   (*info->fprintf_func) (info->stream, " (OOPS unused prefix \"%s: %s\")",
    prefix_opcodep->name, prefix_opcodep->args);
  }

  (*info->fprintf_func) (info->stream, "%s", temp);




  if (TRACE_CASE && case_offset_counter == 0)
    {
   if (CONST_STRNEQ (opcodep->name, "sub")) {
    case_offset = last_immediate;


   } else if (CONST_STRNEQ (opcodep->name, "add")) {

    case_offset = -last_immediate;


   } else if (CONST_STRNEQ (opcodep->name, "bound")) {
    no_of_case_offsets = last_immediate + 1;



   } else if (info->insn_type == dis_jsr || info->insn_type == dis_branch || info->insn_type == dis_condbranch) {
    case_offset = 0;
   }
    }
}






int
print_insn_cris_generic (bfd_vma memaddr,
    disassemble_info *info,
    bfd_boolean with_reg_prefix)
{
  int nbytes;
  unsigned int insn;
  const struct cris_opcode *matchedp;
  int advance = 0;
  struct cris_disasm_data *disdata
    = (struct cris_disasm_data *) info->private_data;



  unsigned char buffer[MAX_BYTES_PER_CRIS_INSN];
  unsigned char *bufp;
  int status = 0;
  bfd_vma addr;
# 1412 "project/radare2/libr/asm/arch/cris/gnu/cris-dis.c"
  for (nbytes = MAX_BYTES_PER_CRIS_INSN; nbytes > 0; nbytes -= 2)
    {
      status = (*info->read_memory_func) (memaddr, buffer, nbytes, info);
      if (status == 0) {
       break;
      }
    }



    if (nbytes != MAX_BYTES_PER_CRIS_INSN) {
     memset (buffer + nbytes, 0, MAX_BYTES_PER_CRIS_INSN - nbytes);
    }

    addr = memaddr;
    bufp = buffer;


    info->insn_info_valid = 1;
    info->branch_delay_insns = 0;
    info->data_size = 0;
    info->insn_type = dis_nonbranch;
    info->flags = 0;
    info->target = 0;
    info->target2 = 0;


    if (nbytes != 0) {
     matchedp = NULL;

     insn = bufp[0] + bufp[1] * 256;


     if (TRACE_CASE && case_offset_counter != 0) {
      info->insn_type = dis_noninsn;
      advance += 2;


      (*info->fprintf_func) (info->stream, "case %ld%s: -> ",
       case_offset + no_of_case_offsets - case_offset_counter,
       case_offset_counter == 1 ? "/default" : "");

      (*info->print_address_func) ((bfd_vma) ((short)(insn) + (long)(addr - (no_of_case_offsets - case_offset_counter) * 2)), info);
      case_offset_counter--;



      if (case_offset_counter == 0) {
       case_offset = 0;
      }
     } else if (insn == 0) {




      (*info->fprintf_func) (info->stream,
       disdata->distype == cris_dis_v32
        ? "bcc ."
        : "bcc .+2");
      info->insn_type = dis_noninsn;
      advance += 2;
     } else {
      const struct cris_opcode *prefix_opcodep = NULL;
      unsigned char *prefix_buffer = bufp;
      unsigned int prefix_insn = insn;
      int prefix_size = 0;

      matchedp = get_opcode_entry (insn, NO_CRIS_PREFIX, disdata);



      if (matchedp != NULL && PARSE_PREFIX && matchedp->args[0] == 'p') {


       prefix_size = bytes_to_skip (prefix_insn, matchedp,
        disdata->distype, NULL);
       prefix_opcodep = matchedp;

       insn = bufp[prefix_size] + bufp[prefix_size + 1] * 256;
       matchedp = get_opcode_entry (insn, prefix_insn, disdata);

       if (matchedp != NULL) {
        addr += prefix_size;
        bufp += prefix_size;
        advance += prefix_size;
       } else {



        matchedp = prefix_opcodep;
        insn = prefix_insn;
        prefix_opcodep = NULL;
       }
      }

      if (!matchedp) {
       (*info->fprintf_func) (info->stream, "??0x%x", insn);
       advance += 2;

       info->insn_type = dis_noninsn;
      } else {
       advance += bytes_to_skip (insn, matchedp, disdata->distype,
        prefix_opcodep);



       print_with_operands (matchedp, insn, bufp, addr, info,
        prefix_opcodep, prefix_insn,
        prefix_buffer, with_reg_prefix);
      }
     }
    } else {
     info->insn_type = dis_noninsn;
    }




    if (status != 0 && (nbytes == 0 || advance > nbytes)) {
     (*info->memory_error_func) (status, memaddr, info);
     return -1;
    }


  info->bytes_per_line = MAX_BYTES_PER_CRIS_INSN;





  info->bytes_per_chunk = 2;






  info->display_endian = BFD_ENDIAN_BIG;

  return advance;
}



int
print_insn_cris_with_register_prefix (bfd_vma vma,
          disassemble_info *info)
{
 if (!info->private_data && !cris_parse_disassembler_options (info, cris_dis_v0_v10)) {
  return -1;
 }
 return print_insn_cris_generic (vma, info, TRUE);
}



int
print_insn_crisv32_with_register_prefix (bfd_vma vma,
      disassemble_info *info)
{
 if (!info->private_data && !cris_parse_disassembler_options (info, cris_dis_v32)) {
  return -1;
 }
 return print_insn_cris_generic (vma, info, TRUE);
}




int
print_insn_crisv10_v32_with_register_prefix (bfd_vma vma,
          disassemble_info *info)
{
 if (!info->private_data && !cris_parse_disassembler_options (info, cris_dis_common_v10_v32)) {
  return -1;
 }
 return print_insn_cris_generic (vma, info, TRUE);
}



int
print_insn_cris_without_register_prefix (bfd_vma vma,
      disassemble_info *info)
{
 if (!info->private_data && !cris_parse_disassembler_options (info, cris_dis_v0_v10)) {
  return -1;
 }
 return print_insn_cris_generic (vma, info, FALSE);
}



int
print_insn_crisv32_without_register_prefix (bfd_vma vma,
         disassemble_info *info)
{
 if (!info->private_data && !cris_parse_disassembler_options (info, cris_dis_v32)) {
  return -1;
 }
 return print_insn_cris_generic (vma, info, FALSE);
}




int
print_insn_crisv10_v32_without_register_prefix (bfd_vma vma,
      disassemble_info *info)
{
 if (!info->private_data && !cris_parse_disassembler_options (info, cris_dis_common_v10_v32)) {
  return -1;
 }
 return print_insn_cris_generic (vma, info, FALSE);
}






#define CR16_SUPPORTS_CPU 0
disassembler_ftype
cris_get_disassembler (bfd *abfd)
{
#if CR16_SUPPORTS_CPU
const int mode = 0;



if (!abfd) {
 return print_insn_cris_with_register_prefix;
}

if (bfd_get_symbol_leading_char (abfd) == 0) {
 switch (mode) {
 case 0:
  return print_insn_crisv32_with_register_prefix;
 case 1:
  return print_insn_crisv10_v32_with_register_prefix;
 default:



  return print_insn_cris_with_register_prefix;
 }
    }

switch (mode) {
case 0:

    return print_insn_crisv32_without_register_prefix;
case 1:

    return print_insn_crisv10_v32_without_register_prefix;
default:
  return print_insn_cris_without_register_prefix;
}
#else
 return print_insn_crisv32_without_register_prefix;
#endif
}
