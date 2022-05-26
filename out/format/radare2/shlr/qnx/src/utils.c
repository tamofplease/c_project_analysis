# 1 "project/radare2/shlr/qnx/src/utils.c"


#include <errno.h>
#include <r_types.h>
#include "utils.h"

#define I386_NUM_GREGS 16
#define I386_NUM_FREGS 16
#define I386_NUM_XREGS 9

#define NUM_GPREGS 13

#define I386_SSE_NUM_REGS (I386_NUM_GREGS + I386_NUM_FREGS + I386_NUM_XREGS)

#define I387_NUM_XMM_REGS 8
#define I387_ST0_REGNUM I386_ST0_REGNUM
#define I387_FCTRL_REGNUM (I387_ST0_REGNUM + 8)
#define I387_FSTAT_REGNUM (I387_FCTRL_REGNUM + 1)
#define I387_FTAG_REGNUM (I387_FCTRL_REGNUM + 2)
#define I387_FISEG_REGNUM (I387_FCTRL_REGNUM + 3)
#define I387_FIOFF_REGNUM (I387_FCTRL_REGNUM + 4)
#define I387_FOSEG_REGNUM (I387_FCTRL_REGNUM + 5)
#define I387_FOOFF_REGNUM (I387_FCTRL_REGNUM + 6)
#define I387_FOP_REGNUM (I387_FCTRL_REGNUM + 7)
#define I387_XMM0_REGNUM (I387_ST0_REGNUM + 16)
#define I387_MXCSR_REGNUM (I387_XMM0_REGNUM + I387_NUM_XMM_REGS)


enum {
 NTO_REG_GENERAL,
 NTO_REG_FLOAT,
 NTO_REG_SYSTEM,
 NTO_REG_ALT,
 NTO_REG_END
};

enum i386_regnum {
 I386_EAX_REGNUM,
 I386_ECX_REGNUM,
 I386_EDX_REGNUM,
 I386_EBX_REGNUM,
 I386_ESP_REGNUM,
 I386_EBP_REGNUM,
 I386_ESI_REGNUM,
 I386_EDI_REGNUM,
 I386_EIP_REGNUM,
 I386_EFLAGS_REGNUM,
 I386_CS_REGNUM,
 I386_SS_REGNUM,
 I386_DS_REGNUM,
 I386_ES_REGNUM,
 I386_FS_REGNUM,
 I386_GS_REGNUM,
 I386_ST0_REGNUM
};

static int i386nto_gregset_reg_offset[] = {
 7 * 4,
 6 * 4,
 5 * 4,
 4 * 4,
 11 * 4,
 2 * 4,
 1 * 4,
 0 * 4,
 8 * 4,
 10 * 4,
 9 * 4,
 12 * 4,
 -1
};




#define NTO_ENAMETOOLONG 78
#define NTO_ELIBACC 83
#define NTO_ELIBBAD 84
#define NTO_ELIBSCN 85
#define NTO_ELIBMAX 86
#define NTO_ELIBEXEC 87
#define NTO_EILSEQ 88
#define NTO_ENOSYS 89

#if defined(__linux__) || defined(__WINDOWS__) || defined(__APPLE__) || defined(__CYGWIN__) || defined(MINGW32) || defined(__NetBSD__)

struct errnomap_t {
 int nto;
 int other;
};

int errnoconvert (int x) {
 struct errnomap_t errnomap[] = {
#if defined(__linux__)
  {NTO_ENAMETOOLONG, ENAMETOOLONG},
  {NTO_ELIBACC, ELIBACC},
  {NTO_ELIBBAD, ELIBBAD},
  {NTO_ELIBSCN, ELIBSCN},
  {NTO_ELIBMAX, ELIBMAX},
  {NTO_ELIBEXEC, ELIBEXEC},
  {NTO_EILSEQ, EILSEQ},
  {NTO_ENOSYS, ENOSYS}
#elif defined(__CYGWIN__)
  {NTO_ENAMETOOLONG, ENAMETOOLONG},
  {NTO_ENOSYS, ENOSYS}
#elif defined(__MINGW32__) || defined(MINGW32) || defined(__NetBSD__)

  {NTO_ENAMETOOLONG, ENAMETOOLONG},
  {NTO_ELIBACC, ESRCH},
  {NTO_ELIBBAD, ESRCH},
  {NTO_ELIBSCN, ENOEXEC},
  {NTO_ELIBMAX, EPERM},
  {NTO_ELIBEXEC, ENOEXEC},
  {NTO_EILSEQ, EILSEQ},
  {NTO_ENOSYS, ENOSYS}
#else
  {0}
#endif
 };
 int i;

 for (i = 0; i < sizeof(errnomap) / sizeof(errnomap[0]); i++)
  if (errnomap[i].nto == x)
   return errnomap[i].other;
 return x;
}

#else
int errnoconvert (int x) {
 return x;
}
#endif

LONGEST
extract_signed_integer (const ut8 *addr, int len, int be) {
 LONGEST retval;
 const ut8 *p;
 const ut8 *startaddr = addr;
 const ut8 *endaddr = startaddr + len;

 if (len > (int)sizeof(LONGEST))
  eprintf (
   "This operation is not available on integers of more than %d byte(s)\n",
   (int)sizeof(LONGEST));



 if (be) {
  p = startaddr;

  retval = ((LONGEST)*p ^ 0x80) - 0x80;
  for (++p; p < endaddr; p++)
   retval = (retval << 8) | *p;
 } else {
  p = endaddr - 1;

  retval = ((LONGEST)*p ^ 0x80) - 0x80;
  for (--p; p >= startaddr; --p)
   retval = (retval << 8) | *p;
 }
 return retval;
}

ULONGEST
extract_unsigned_integer (const ut8 *addr, int len, int be) {
 ULONGEST retval;
 const ut8 *p;
 const ut8 *startaddr = addr;
 const ut8 *endaddr = startaddr + len;

 if (len > (int)sizeof(LONGEST))
  eprintf (
   "This operation is not available on integers of more than %d byte(s)\n",
   (int)sizeof(LONGEST));



 retval = 0;
 if (be) {
  for (p = startaddr; p < endaddr; ++p)
   retval = (retval << 8) | *p;
 } else {
  for (p = endaddr - 1; p >= startaddr; --p)
   retval = (retval << 8) | *p;
 }
 return retval;
}

int i386nto_regset_id (int regno) {
 if (regno == -1)
  return NTO_REG_END;
 if (regno < I386_NUM_GREGS)
  return NTO_REG_GENERAL;
 if (regno < I386_NUM_GREGS + I386_NUM_FREGS)
  return NTO_REG_FLOAT;
 if (regno < I386_SSE_NUM_REGS)
  return NTO_REG_FLOAT;

 return -1;
}

int i386nto_reg_offset (int regnum) {
 if (regnum >= 0 && regnum < ARRAY_SIZE (i386nto_gregset_reg_offset))
  return i386nto_gregset_reg_offset[regnum];

 return -1;
}

int i386nto_register_area (int regno, int regset, ut32 *off) {
 *off = 0;
 if (regset == NTO_REG_GENERAL) {
  if (regno == -1)
   return NUM_GPREGS * 4;

  *off = i386nto_reg_offset (regno);
  if (*off == -1)
   return 0;
  return 4;
 } else if (regset == NTO_REG_FLOAT) {
  ut32 off_adjust, regsize, regset_size, regno_base;

  int first_four = (regno >= I387_FCTRL_REGNUM && regno <= I387_FISEG_REGNUM);
  int second_four = (regno > I387_FISEG_REGNUM && regno <= I387_FOP_REGNUM);
  int st_reg = (regno >= I387_ST0_REGNUM && regno < I387_ST0_REGNUM + 8);
  int xmm_reg = (regno >= I387_XMM0_REGNUM && regno < I387_MXCSR_REGNUM);
#if 0
      if (nto_cpuinfo_valid && nto_cpuinfo_flags | X86_CPU_FXSR)
   {
#endif
  regset_size = 512;

  if (first_four) {


   regsize = 2;
   off_adjust = 0;
   regno_base = I387_FCTRL_REGNUM;
  } else if (second_four) {

   regsize = 4;
   off_adjust = 8;
   regno_base = I387_FISEG_REGNUM + 1;
  } else if (st_reg) {

   regsize = 16;
   off_adjust = 32;
   regno_base = I387_ST0_REGNUM;
  } else if (xmm_reg) {

   regsize = 16;
   off_adjust = 160;
   regno_base = I387_XMM0_REGNUM;
  } else if (regno == I387_MXCSR_REGNUM) {
   regsize = 4;
   off_adjust = 24;
   regno_base = I387_MXCSR_REGNUM;
  } else {

   off_adjust = 0;
   regno_base = 0;
   regsize = regset_size;
  }
#if 0
 }
      else
 {
   regset_size = 108;

   if (first_four || second_four)
     {

       regsize = 4;
       off_adjust = 0;
       regno_base = I387_FCTRL_REGNUM;
     }
   else if (st_reg)
     {

       regsize = 10;
       off_adjust = 7 * 4;
       regno_base = I387_ST0_REGNUM;
     }
   else
     {

       off_adjust = 0;
       regno_base = 0;
       regsize = regset_size;
     }
 }
#endif

  *off = (regno != -1) ? off_adjust + (regno - regno_base) * regsize : 0;
  return regsize;
 }
 return -1;
}

ptid_t ptid_build (st32 pid, st64 tid) {
 ptid_t ptid;
 ptid.pid = pid;
 ptid.tid = tid;

 return ptid;
}

int ptid_equal (ptid_t ptid1, ptid_t ptid2) {
 return ptid1.pid == ptid2.pid && ptid1.tid == ptid2.tid;
}
