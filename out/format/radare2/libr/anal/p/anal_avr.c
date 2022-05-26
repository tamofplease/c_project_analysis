# 1 "project/radare2/libr/anal/p/anal_avr.c"


#if 0
http:
https:
#endif

#include <string.h>
#include <r_types.h>
#include <r_util.h>
#include <r_crypto.h>
#include <r_lib.h>
#include <r_asm.h>
#include <r_anal.h>

#include "../../asm/arch/avr/disasm.h"

static RDESContext desctx;

typedef struct _cpu_const_tag {
 const char *const key;
 ut8 type;
 ut32 value;
 ut8 size;
} CPU_CONST;

#define CPU_CONST_NONE 0
#define CPU_CONST_PARAM 1
#define CPU_CONST_REG 2

typedef struct _cpu_model_tag {
 const char *const model;
 int pc;
 char *inherit;
 struct _cpu_model_tag *inherit_cpu_p;
 CPU_CONST *consts[10];
} CPU_MODEL;

typedef void (*inst_handler_t) (RAnal *anal, RAnalOp *op, const ut8 *buf, int len, int *fail, CPU_MODEL *cpu);

typedef struct _opcodes_tag_ {
 const char *const name;
 int mask;
 int selector;
 inst_handler_t handler;
 int cycles;
 int size;
 ut64 type;
} OPCODE_DESC;

static OPCODE_DESC* avr_op_analyze(RAnal *anal, RAnalOp *op, ut64 addr, const ut8 *buf, int len, CPU_MODEL *cpu);

#define CPU_MODEL_DECL(model,pc,consts) \
 { \
  model, \
  pc, \
  consts \
 }
#define MASK(bits) ((bits) == 32 ? 0xffffffff : (~((~((ut32) 0)) << (bits))))
#define CPU_PC_MASK(cpu) MASK((cpu)->pc)
#define CPU_PC_SIZE(cpu) ((((cpu)->pc) >> 3) + ((((cpu)->pc) & 0x07) ? 1 : 0))

#define INST_HANDLER(OPCODE_NAME) static void _inst__ ## OPCODE_NAME (RAnal *anal, RAnalOp *op, const ut8 *buf, int len, int *fail, CPU_MODEL *cpu)
#define INST_DECL(OP,M,SL,C,SZ,T) { #OP, (M), (SL), _inst__ ## OP, (C), (SZ), R_ANAL_OP_TYPE_ ## T }
#define INST_LAST { "unknown", 0, 0, (void *) 0, 2, 1, R_ANAL_OP_TYPE_UNK }

#define INST_CALL(OPCODE_NAME) _inst__ ## OPCODE_NAME (anal, op, buf, len, fail, cpu)
#define INST_INVALID { *fail = 1; return; }
#define INST_ASSERT(x) { if (!(x)) { INST_INVALID; } }

#define ESIL_A(e,...) r_strbuf_appendf (&op->esil, e, ##__VA_ARGS__)

#define STR_BEGINS(in,s) r_str_ncasecmp (in, s, strlen (s))




CPU_CONST cpu_reg_common[] = {
 { "spl", CPU_CONST_REG, 0x3d, sizeof (ut8) },
 { "sph", CPU_CONST_REG, 0x3e, sizeof (ut8) },
 { "sreg", CPU_CONST_REG, 0x3f, sizeof (ut8) },
 { "spmcsr", CPU_CONST_REG, 0x37, sizeof (ut8) },
 { NULL, 0, 0, 0 },
};

CPU_CONST cpu_memsize_common[] = {
 { "eeprom_size", CPU_CONST_PARAM, 512, sizeof (ut32) },
 { "io_size", CPU_CONST_PARAM, 0x40, sizeof (ut32) },
 { "sram_start", CPU_CONST_PARAM, 0x60, sizeof (ut32) },
 { "sram_size", CPU_CONST_PARAM, 1024, sizeof (ut32) },
 { NULL, 0, 0, 0 },
};

CPU_CONST cpu_memsize_m640_m1280m_m1281_m2560_m2561[] = {
 { "eeprom_size", CPU_CONST_PARAM, 512, sizeof (ut32) },
 { "io_size", CPU_CONST_PARAM, 0x1ff, sizeof (ut32) },
 { "sram_start", CPU_CONST_PARAM, 0x200, sizeof (ut32) },
 { "sram_size", CPU_CONST_PARAM, 0x2000, sizeof (ut32) },
 { NULL, 0, 0, 0 },
};

CPU_CONST cpu_memsize_xmega128a4u[] = {
 { "eeprom_size", CPU_CONST_PARAM, 0x800, sizeof (ut32) },
 { "io_size", CPU_CONST_PARAM, 0x1000, sizeof (ut32) },
 { "sram_start", CPU_CONST_PARAM, 0x800, sizeof (ut32) },
 { "sram_size", CPU_CONST_PARAM, 0x2000, sizeof (ut32) },
 { NULL, 0, 0, 0 },
};

CPU_CONST cpu_pagesize_5_bits[] = {
 { "page_size", CPU_CONST_PARAM, 5, sizeof (ut8) },
 { NULL, 0, 0, 0 },
};

CPU_CONST cpu_pagesize_7_bits[] = {
 { "page_size", CPU_CONST_PARAM, 7, sizeof (ut8) },
 { NULL, 0, 0, 0 },
};

CPU_MODEL cpu_models[] = {
 { .model = "ATmega640", .pc = 15,
  .consts = {
   cpu_reg_common,
   cpu_memsize_m640_m1280m_m1281_m2560_m2561,
   cpu_pagesize_7_bits,
   NULL
  },
 },
 {
  .model = "ATxmega128a4u", .pc = 17,
  .consts = {
   cpu_reg_common,
   cpu_memsize_xmega128a4u,
   cpu_pagesize_7_bits,
   NULL
  }
 },
 { .model = "ATmega1280", .pc = 16, .inherit = "ATmega640" },
 { .model = "ATmega1281", .pc = 16, .inherit = "ATmega640" },
 { .model = "ATmega2560", .pc = 17, .inherit = "ATmega640" },
 { .model = "ATmega2561", .pc = 17, .inherit = "ATmega640" },
 { .model = "ATmega88", .pc = 8, .inherit = "ATmega8" },


 {
  .model = "ATmega8", .pc = 13,
  .consts = {
   cpu_reg_common,
   cpu_memsize_common,
   cpu_pagesize_5_bits,
   NULL
  }
 },

};


static CPU_MODEL *get_cpu_model(const char *model);

static CPU_MODEL *__get_cpu_model_recursive(const char *model) {
 CPU_MODEL *cpu = NULL;

 for (cpu = cpu_models; cpu < cpu_models + ((sizeof (cpu_models) / sizeof (CPU_MODEL))) - 1; cpu++) {
  if (!r_str_casecmp (model, cpu->model)) {
   break;
  }
 }


 if (cpu->inherit && !cpu->inherit_cpu_p) {
  cpu->inherit_cpu_p = get_cpu_model (cpu->inherit);
  if (!cpu->inherit_cpu_p) {
   eprintf ("ERROR: Cannot inherit from unknown CPU model '%s'.\n", cpu->inherit);
  }
 }

 return cpu;
}

static CPU_MODEL *get_cpu_model(const char *model) {
 static CPU_MODEL *cpu = NULL;
 if (!model) {
  return NULL;
 }

 if (cpu && cpu->model && !r_str_casecmp (model, cpu->model)) {
  return cpu;
 }
 return cpu = __get_cpu_model_recursive (model);
}

static ut32 const_get_value(CPU_CONST *c) {
 return c ? MASK (c->size * 8) & c->value : 0;
}

static CPU_CONST *const_by_name(CPU_MODEL *cpu, int type, char *c) {
 CPU_CONST **clist, *citem;

 for (clist = cpu->consts; *clist; clist++) {
  for (citem = *clist; citem->key; citem++) {
   if (!strcmp (c, citem->key)
   && (type == CPU_CONST_NONE || type == citem->type)) {
    return citem;
   }
  }
 }
 if (cpu->inherit_cpu_p) {
  return const_by_name (cpu->inherit_cpu_p, type, c);
 }
 eprintf ("ERROR: CONSTANT key[%s] NOT FOUND.\n", c);
 return NULL;
}

static int __esil_pop_argument(RAnalEsil *esil, ut64 *v) {
 char *t = r_anal_esil_pop (esil);
 if (!t || !r_anal_esil_get_parm (esil, t, v)) {
  free (t);
  return false;
 }
 free (t);
 return true;
}

static CPU_CONST *const_by_value(CPU_MODEL *cpu, int type, ut32 v) {
 CPU_CONST **clist, *citem;
 if (!cpu) {
  return NULL;
 }
 for (clist = cpu->consts; *clist; clist++) {
  for (citem = *clist; citem && citem->key; citem++) {
   if (citem->value == (MASK (citem->size * 8) & v)
   && (type == CPU_CONST_NONE || type == citem->type)) {
    return citem;
   }
  }
 }
 if (cpu->inherit_cpu_p) {
  return const_by_value (cpu->inherit_cpu_p, type, v);
 }
 return NULL;
}

static RStrBuf *__generic_io_dest(ut8 port, int write, CPU_MODEL *cpu) {
 RStrBuf *r = r_strbuf_new ("");
 CPU_CONST *c = const_by_value (cpu, CPU_CONST_REG, port);
 if (c != NULL) {
  r_strbuf_set (r, c->key);
  if (write) {
   r_strbuf_append (r, ",=");
  }
 } else {
  r_strbuf_setf (r, "_io,%d,+,%s[1]", port, write ? "=" : "");
 }

 return r;
}

static void __generic_ld_st(RAnalOp *op, char *mem, char ireg, int use_ramp, int prepostdec, int offset, int st) {
 if (ireg) {

  if (prepostdec < 0) {
   ESIL_A ("1,%c,-,%c,=,", ireg, ireg);
  }

  ESIL_A ("%c,", ireg);

  if (offset != 0) {
   ESIL_A ("%d,+,", offset);
  }
 } else {
  ESIL_A ("%d,", offset);
 }
 if (use_ramp) {
  ESIL_A ("16,ramp%c,<<,+,", ireg ? ireg : 'd');
 }

 ESIL_A ("_%s,+,", mem);

 ESIL_A ("%s[1],", st ? "=" : "");

 if (ireg && prepostdec > 0) {
  ESIL_A ("1,%c,+,%c,=,", ireg, ireg);
 }
}

static void __generic_pop(RAnalOp *op, int sz) {
 if (sz > 1) {
  ESIL_A ("1,sp,+,_ram,+,");
  ESIL_A ("[%d],", sz);
  ESIL_A ("%d,sp,+=,", sz);
 } else {
  ESIL_A ("1,sp,+=,"
   "sp,_ram,+,[1],");
 }
}

static void __generic_push(RAnalOp *op, int sz) {
 ESIL_A ("sp,_ram,+,");
 if (sz > 1) {
  ESIL_A ("-%d,+,", sz - 1);
 }
 ESIL_A ("=[%d],", sz);
 ESIL_A ("-%d,sp,+=,", sz);
}

INST_HANDLER (adc) {

 if (len < 2) {
  return;
 }
 const ut32 d = ((buf[0] >> 4) & 0xf) | ((buf[1] & 1) << 4);
 const ut32 r = (buf[0] & 0xf) | ((buf[1] & 2) << 3);
 ESIL_A ("r%d,cf,+,r%d,+=,", r, d);
 ESIL_A ("$z,zf,:=,");
 ESIL_A ("3,$c,hf,:=,");
 ESIL_A ("7,$c,cf,:=,");
 ESIL_A ("7,$o,vf,:=,");
 ESIL_A ("0x80,r%d,&,!,!,nf,:=", d);
}

INST_HANDLER (add) {

 if (len < 2) {
  return;
 }
 const ut32 d = ((buf[0] >> 4) & 0xf) | ((buf[1] & 1) << 4);
 const ut32 r = (buf[0] & 0xf) | ((buf[1] & 2) << 3);
 ESIL_A ("r%d,r%d,+=,", r, d);
 ESIL_A ("$z,zf,:=,");
 ESIL_A ("3,$c,hf,:=,");
 ESIL_A ("7,$c,cf,:=,");
 ESIL_A ("7,$o,vf,:=,");
 ESIL_A ("0x80,r%d,&,!,!,nf,:=,", d);
}

INST_HANDLER (adiw) {
 if (len < 1) {
  return;
 }
 const ut32 d = ((buf[0] & 0x30) >> 3) + 24;
 const ut32 k = (buf[0] & 0x0f) | ((buf[0] >> 2) & 0x30);
 op->val = k;
 ESIL_A ("%d,r%d_r%d,+=,", k, d + 1, d);

 ESIL_A ("7,$o,vf,:=,");
 ESIL_A ("r%d_r%d,0x8000,&,!,!,nf,:=,", d + 1, d);
 ESIL_A ("$z,zf,:=,");
 ESIL_A ("15,$c,cf,:=,");
 ESIL_A ("vf,nf,^,sf,:=");
}

INST_HANDLER (and) {

 if (len < 2) {
  return;
 }
 const ut32 d = ((buf[0] >> 4) & 0xf) | ((buf[1] & 1) << 4);
 const ut32 r = (buf[0] & 0xf) | ((buf[1] & 2) << 3);
 ESIL_A ("r%d,r%d,&=,$z,zf,:=,r%d,0x80,&,!,!,nf,:=,0,vf,:=,nf,sf,:=,", r, d, d);
}

INST_HANDLER (andi) {

 if (len < 2) {
  return;
 }
 const ut32 d = ((buf[0] >> 4) & 0xf) + 16;
 const ut32 k = ((buf[1] & 0x0f) << 4) | (buf[0] & 0x0f);
 op->val = k;
 ESIL_A ("%d,r%d,&=,$z,zf,:=,r%d,0x80,&,!,!,nf,:=,0,vf,:=,nf,sf,:=,", k, d, d);
}

INST_HANDLER (asr) {
 if (len < 2) {
  return;
 }
 int d = ((buf[0] >> 4) & 0xf) | ((buf[1] & 1) << 4);
 ESIL_A ("r%d,0x1,&,cf,:=,0x1,r%d,>>,r%d,0x80,&,|,", d, d, d);

 ESIL_A ("$z,zf,:=,");
 ESIL_A ("r%d,0x80,&,!,!,nf,:=,", d);
 ESIL_A ("nf,cf,^,vf,:=,");
 ESIL_A ("nf,vf,^,sf,:=,");
}

INST_HANDLER (bclr) {
# 396 "project/radare2/libr/anal/p/anal_avr.c"
 if (len < 1) {
  return;
 }
 int s = (buf[0] >> 4) & 0x7;
 ESIL_A ("0xff,%d,1,<<,^,sreg,&=,", s);
}

INST_HANDLER (bld) {
 if (len < 2) {
  return;
 }
 int d = ((buf[1] & 0x01) << 4) | ((buf[0] >> 4) & 0xf);
 int b = buf[0] & 0x7;
 ESIL_A ("r%d,%d,1,<<,0xff,^,&,", d, b);
 ESIL_A ("%d,tf,<<,|,r%d,=,", b, d);
}

INST_HANDLER (brbx) {
# 424 "project/radare2/libr/anal/p/anal_avr.c"
 if (len < 2) {
  return;
 }
 int s = buf[0] & 0x7;
 op->jump = op->addr
  + ((((buf[1] & 0x03) << 6) | ((buf[0] & 0xf8) >> 2))
   | (buf[1] & 0x2 ? ~((int) 0x7f) : 0))
  + 2;
 op->fail = op->addr + op->size;
 op->cycles = 1;




 ESIL_A ("%d,1,<<,sreg,&,", s);
 ESIL_A (buf[1] & 0x4
   ? "!,"
   : "!,!,");
 ESIL_A ("?{,%"PFMT64d",pc,=,},", op->jump);
}

INST_HANDLER (break) {
 ESIL_A ("BREAK");
}

INST_HANDLER (bset) {
# 459 "project/radare2/libr/anal/p/anal_avr.c"
 if (len < 1) {
  return;
 }
 int s = (buf[0] >> 4) & 0x7;
 ESIL_A ("%d,1,<<,sreg,|=,", s);
}

INST_HANDLER (bst) {
 if (len < 2) {
  return;
 }
 ESIL_A ("r%d,%d,1,<<,&,!,!,tf,=,",
  ((buf[1] & 1) << 4) | ((buf[0] >> 4) & 0xf),
  buf[0] & 0x7);
}

INST_HANDLER (call) {
 if (len < 4) {
  return;
 }
 op->jump = (buf[2] << 1)
   | (buf[3] << 9)
   | (buf[1] & 0x01) << 23
   | (buf[0] & 0x01) << 17
   | (buf[0] & 0xf0) << 14;
 op->fail = op->addr + op->size;
 op->cycles = cpu->pc <= 16 ? 3 : 4;
 if (!STR_BEGINS (cpu->model, "ATxmega")) {
  op->cycles--;
 }
 ESIL_A ("pc,");

 __generic_push (op, CPU_PC_SIZE (cpu));
 ESIL_A ("%"PFMT64d",pc,=,", op->jump);
}

INST_HANDLER (cbi) {
 if (len < 1) {
  return;
 }
 int a = (buf[0] >> 3) & 0x1f;
 int b = buf[0] & 0x07;
 RStrBuf *io_port;

 op->family = R_ANAL_OP_FAMILY_IO;
 op->type2 = 1;
 op->val = a;


 io_port = __generic_io_dest (a, 0, cpu);
 ESIL_A ("0xff,%d,1,<<,^,%s,&,", b, r_strbuf_get (io_port));
 r_strbuf_free (io_port);


 io_port = __generic_io_dest (a, 1, cpu);
 ESIL_A ("%s,", r_strbuf_get (io_port));
 r_strbuf_free (io_port);
}

INST_HANDLER (com) {
 if (len < 2) {
  return;
 }
 int r = ((buf[0] >> 4) & 0x0f) | ((buf[1] & 1) << 4);

 ESIL_A ("r%d,0xff,-,r%d,=,$z,zf,:=,0,cf,:=,0,vf,:=,r%d,0x80,&,!,!,nf,:=,vf,nf,^,sf,:=", r, r, r);

}

INST_HANDLER (cp) {
 if (len < 2) {
  return;
 }
 const ut32 r = (buf[0] & 0x0f) | ((buf[1] << 3) & 0x10);
 const ut32 d = ((buf[0] >> 4) & 0x0f) | ((buf[1] << 4) & 0x10);
 ESIL_A ("r%d,r%d,-,0x80,&,!,!,nf,:=,", r, d);
 ESIL_A ("r%d,r%d,==,", r, d);
 ESIL_A ("$z,zf,:=,");
 ESIL_A ("3,$b,hf,:=,");
 ESIL_A ("8,$b,cf,:=,");
 ESIL_A ("7,$o,vf,:=,");
 ESIL_A ("vf,nf,^,sf,:=");
}

INST_HANDLER (cpc) {
 if (len < 2) {
  return;
 }
 const ut32 r = (buf[0] & 0x0f) | ((buf[1] << 3) & 0x10);
 const ut32 d = ((buf[0] >> 4) & 0x0f) | ((buf[1] << 4) & 0x10);

 ESIL_A ("cf,r%d,+,DUP,r%d,-,0x80,&,!,!,nf,:=,", r, d);
 ESIL_A ("r%d,==,", d);
 ESIL_A ("$z,zf,:=,");
 ESIL_A ("3,$b,hf,:=,");
 ESIL_A ("8,$b,cf,:=,");
 ESIL_A ("7,$o,vf,:=,");
 ESIL_A ("vf,nf,^,sf,:=");
}

INST_HANDLER (cpi) {
 if (len < 2) {
  return;
 }
 const ut32 d = ((buf[0] >> 4) & 0xf) + 16;
 const ut32 k = (buf[0] & 0xf) | ((buf[1] & 0xf) << 4);
 ESIL_A ("%d,r%d,-,0x80,&,!,!,nf,:=,", k, d);
 ESIL_A ("%d,r%d,==,", k, d);
 ESIL_A ("$z,zf,:=,");
 ESIL_A ("3,$b,hf,:=,");
 ESIL_A ("8,$b,cf,:=,");
 ESIL_A ("7,$o,vf,:=,");
 ESIL_A ("vf,nf,^,sf,:=");
}

INST_HANDLER (cpse) {
 if (len < 2) {
  return;
 }
 int r = (buf[0] & 0xf) | ((buf[1] & 0x2) << 3);
 int d = ((buf[0] >> 4) & 0xf) | ((buf[1] & 0x1) << 4);
 RAnalOp next_op = {0};



 avr_op_analyze (anal,
   &next_op,
   op->addr + op->size, buf + op->size, len - op->size,
   cpu);
 r_strbuf_fini (&next_op.esil);
 op->jump = op->addr + next_op.size + 2;
 op->fail = op->addr + 2;


 op->cycles = 1;




 ESIL_A ("r%d,r%d,^,!,", r, d);
 ESIL_A ("?{,%"PFMT64d",pc,=,},", op->jump);
}

INST_HANDLER (dec) {
 if (len < 2) {
  return;
 }
 const ut32 d = ((buf[0] >> 4) & 0xf) | ((buf[1] & 0x1) << 4);
 ESIL_A ("0x1,r%d,-=,", d);

 ESIL_A ("7,$o,vf,:=,");
 ESIL_A ("r%d,0x80,&,!,!,nf,:=,", d);
 ESIL_A ("$z,zf,:=,");
 ESIL_A ("vf,nf,^,sf,:=,");
}

INST_HANDLER (des) {
 if (desctx.round < 16) {
  op->type = R_ANAL_OP_TYPE_CRYPTO;
  op->cycles = 1;
  r_strbuf_setf (&op->esil, "%d,des", desctx.round);
 }
}

INST_HANDLER (eijmp) {
 ut64 z = 0;
 ut64 eind = 0;

 if (anal->esil) {
  r_anal_esil_reg_read (anal->esil, "z", &z, NULL);
  r_anal_esil_reg_read (anal->esil, "eind", &eind, NULL);
 }


 op->jump = ((eind << 16) + z) << 1;

 ESIL_A ("1,z,16,eind,<<,+,<<,pc,=,");

 op->cycles = 2;
}

INST_HANDLER (eicall) {

 ESIL_A ("pc,");

 __generic_push (op, CPU_PC_SIZE (cpu));

 INST_CALL (eijmp);

 op->cycles = !STR_BEGINS (cpu->model, "ATxmega") ? 3 : 4;
}

INST_HANDLER (elpm) {


 if (len < 2) {
  return;
 }
 int d = ((buf[1] & 0xfe) == 0x90)
   ? ((buf[1] & 1) << 4) | ((buf[0] >> 4) & 0xf)
   : 0;
 ESIL_A ("16,rampz,<<,z,+,_prog,+,[1],");
 ESIL_A ("r%d,=,", d);
 if ((buf[1] & 0xfe) == 0x90 && (buf[0] & 0xf) == 0x7) {
  ESIL_A ("16,1,z,+,DUP,z,=,>>,1,&,rampz,+=,");
 }
}

INST_HANDLER (eor) {

 if (len < 2) {
  return;
 }
 const ut32 d = ((buf[0] >> 4) & 0xf) | ((buf[1] & 1) << 4);
 const ut32 r = (buf[0] & 0xf) | ((buf[1] & 2) << 3);
 ESIL_A ("r%d,r%d,^=,$z,zf,:=,0,vf,:=,r%d,0x80,&,!,!,nf,:=,nf,sf,:=", r, d, d);

}

INST_HANDLER (fmul) {
 if (len < 1) {
  return;
 }
 const ut32 d = ((buf[0] >> 4) & 0x7) + 16;
 const ut32 r = (buf[0] & 0x7) + 16;

 ESIL_A ("0xffff,1,r%d,r%d,*,<<,&,r1_r0,=,", r, d);
 ESIL_A ("r1_r0,0x8000,&,!,!,cf,:=,");
 ESIL_A ("$z,zf,:=");

}

INST_HANDLER (fmuls) {
 if (len < 1) {
  return;
 }
 const ut32 d = ((buf[0] >> 4) & 0x7) + 16;
 const ut32 r = (buf[0] & 0x7) + 16;

 ESIL_A ("1,");
 ESIL_A ("r%d,DUP,0x80,&,?{,0xff00,|,},", d);
 ESIL_A ("r%d,DUP,0x80,&,?{,0xff00,|,},", r);
 ESIL_A ("*,<<,r1_r0,=,");

 ESIL_A ("r1_r0,0x8000,&,!,!,cf,:=,");
 ESIL_A ("$z,zf,:=");
}

INST_HANDLER (fmulsu) {
 if (len < 1) {
  return;
 }
 const ut32 d = ((buf[0] >> 4) & 0x7) + 16;
 const ut32 r = (buf[0] & 0x7) + 16;

 ESIL_A ("1,");
 ESIL_A ("r%d,DUP,0x80,&,?{,0xff00,|,},", d);
 ESIL_A ("r%d,*,<<,r1_r0,=,", r);

 ESIL_A ("r1_r0,0x8000,&,!,!,cf,:=,");
 ESIL_A ("$z,zf,:=");
}

INST_HANDLER (ijmp) {
 ut64 z = 0;

 if (anal->esil) {
  r_anal_esil_reg_read (anal->esil, "z", &z, NULL);
 }


 op->jump = z << 1;
 op->cycles = 2;
 ESIL_A ("1,z,<<,pc,=,");
}

INST_HANDLER (icall) {

 ESIL_A ("pc,");

 __generic_push (op, CPU_PC_SIZE (cpu));

 INST_CALL (ijmp);

 if (!STR_BEGINS (cpu->model, "ATxmega")) {

  op->cycles--;
 }
}

INST_HANDLER (in) {
 if (len < 2) {
  return;
 }
 int r = ((buf[0] >> 4) & 0x0f) | ((buf[1] & 0x01) << 4);
 int a = (buf[0] & 0x0f) | ((buf[1] & 0x6) << 3);
 RStrBuf *io_src = __generic_io_dest (a, 0, cpu);
 op->type2 = 0;
 op->val = a;
 op->family = R_ANAL_OP_FAMILY_IO;
 ESIL_A ("%s,r%d,=,", r_strbuf_get (io_src), r);
 r_strbuf_free (io_src);
}

INST_HANDLER (inc) {
 if (len < 2) {
  return;
 }
 const ut32 d = ((buf[0] >> 4) & 0xf) | ((buf[1] & 0x1) << 4);
 ESIL_A ("1,r%d,+=,", d);

 ESIL_A ("7,$o,vf,:=,");
 ESIL_A ("r%d,0x80,&,!,!,nf,:=,", d);
 ESIL_A ("$z,zf,:=,");
 ESIL_A ("vf,nf,^,sf,:=,");
}

INST_HANDLER (jmp) {
 if (len < 4) {
  return;
 }
 op->jump = (buf[2] << 1)
   | (buf[3] << 9)
   | (buf[1] & 0x01) << 23
   | (buf[0] & 0x01) << 17
   | (buf[0] & 0xf0) << 14;
 op->cycles = 3;
 ESIL_A ("%"PFMT64d",pc,=,", op->jump);
}

INST_HANDLER (lac) {
 if (len < 2) {
  return;
 }
 int d = ((buf[0] >> 4) & 0xf) | ((buf[1] & 0x1) << 4);


 __generic_ld_st (op, "ram", 'z', 1, 0, 0, 0);
 ESIL_A ("r%d,0xff,^,&,", d);
 ESIL_A ("DUP,r%d,=,", d);
 __generic_ld_st (op, "ram", 'z', 1, 0, 0, 1);
}

INST_HANDLER (las) {
 if (len < 2) {
  return;
 }
 int d = ((buf[0] >> 4) & 0xf) | ((buf[1] & 0x1) << 4);


 __generic_ld_st (op, "ram", 'z', 1, 0, 0, 0);
 ESIL_A ("r%d,|,", d);
 ESIL_A ("DUP,r%d,=,", d);
 __generic_ld_st (op, "ram", 'z', 1, 0, 0, 1);
}

INST_HANDLER (lat) {
 if (len < 2) {
  return;
 }
 int d = ((buf[0] >> 4) & 0xf) | ((buf[1] & 0x1) << 4);


 __generic_ld_st (op, "ram", 'z', 1, 0, 0, 0);
 ESIL_A ("r%d,^,", d);
 ESIL_A ("DUP,r%d,=,", d);
 __generic_ld_st (op, "ram", 'z', 1, 0, 0, 1);
}

INST_HANDLER (ld) {


 if (len < 2) {
  return;
 }

 __generic_ld_st (
  op, "ram",
  'x',
  0,
  (buf[0] & 0xf) == 0xe
   ? -1
   : (buf[0] & 0xf) == 0xd
    ? 1
    : 0,
  0,
  0);

 ESIL_A ("r%d,=,", ((buf[1] & 1) << 4) | ((buf[0] >> 4) & 0xf));

 op->cycles = (buf[0] & 0x3) == 0
   ? 2
   : (buf[0] & 0x3) == 1
    ? 2
    : 3;
 if (!STR_BEGINS (cpu->model, "ATxmega") && op->cycles > 1) {

  op->cycles--;
 }
}

INST_HANDLER (ldd) {



 if (len < 2) {
  return;
 }


 int offset = (buf[1] & 0x20)
   | ((buf[1] & 0xc) << 1)
   | (buf[0] & 0x7);

 __generic_ld_st (
  op, "ram",
  buf[0] & 0x8 ? 'y' : 'z',
  0,
  !(buf[1] & 0x10)
   ? 0
   : buf[0] & 0x1
    ? 1
    : -1,
  !(buf[1] & 0x10) ? offset : 0,
  0);

 ESIL_A ("r%d,=,", ((buf[1] & 1) << 4) | ((buf[0] >> 4) & 0xf));

 op->cycles =
  (buf[1] & 0x10) == 0
   ? (!offset ? 1 : 3)
   : (buf[0] & 0x3) == 0
    ? 1
    : (buf[0] & 0x3) == 1
     ? 2
     : 3;
 if (!STR_BEGINS (cpu->model, "ATxmega") && op->cycles > 1) {

  op->cycles--;
 }
}

INST_HANDLER (ldi) {
 if (len < 2) {
  return;
 }
 int k = (buf[0] & 0xf) + ((buf[1] & 0xf) << 4);
 int d = ((buf[0] >> 4) & 0xf) + 16;
 op->val = k;
 ESIL_A ("0x%x,r%d,=,", k, d);
}

INST_HANDLER (lds) {
 if (len < 4) {
  return;
 }
 int d = ((buf[0] >> 4) & 0xf) | ((buf[1] & 0x1) << 4);
 int k = (buf[3] << 8) | buf[2];
 op->ptr = k;


 __generic_ld_st (op, "ram", 0, 1, 0, k, 0);
 ESIL_A ("r%d,=,", d);
}

INST_HANDLER (sts) {
 if (len < 4) {
  return;
 }
 int r = ((buf[0] >> 4) & 0xf) | ((buf[1] & 0x1) << 4);
 int k = (buf[3] << 8) | buf[2];
 op->ptr = k;

 ESIL_A ("r%d,", r);
 __generic_ld_st (op, "ram", 0, 1, 0, k, 1);

 op->cycles = 2;
}

#if 0
INST_HANDLER (lds16) {
 int d = ((buf[0] >> 4) & 0xf) + 16;
 int k = (buf[0] & 0x0f)
  | ((buf[1] << 3) & 0x30)
  | ((buf[1] << 4) & 0x40)
  | (~(buf[1] << 4) & 0x80);
 op->ptr = k;


 __generic_ld_st (op, "ram", 0, 0, 0, k, 0);
 ESIL_A ("r%d,=,", d);
}
#endif

INST_HANDLER (lpm) {


 if (len < 2) {
  return;
 }
 ut16 ins = (((ut16) buf[1]) << 8) | ((ut16) buf[0]);

 __generic_ld_st (
  op, "prog",
  'z',
  1,
  (ins & 0xfe0f) == 0x9005
   ? 1
   : 0,
  0,
  0);

 ESIL_A ("r%d,=,",
  (ins == 0x95c8)
   ? 0
   : ((buf[0] >> 4) & 0xf)
    | ((buf[1] & 0x1) << 4));
}

INST_HANDLER (lsr) {
 if (len < 2) {
  return;
 }
 const ut32 d = ((buf[0] >> 4) & 0xf) | ((buf[1] & 1) << 4);
 ESIL_A ("r%d,0x1,&,cf,:=,", d);
 ESIL_A ("1,r%d,>>=,", d);
 ESIL_A ("$z,zf,:=,");
 ESIL_A ("0,nf,:=,");
 ESIL_A ("cf,vf,:=,");
 ESIL_A ("cf,sf,:=,");
}

INST_HANDLER (mov) {
 if (len < 2) {
  return;
 }
 const ut32 d = ((buf[1] << 4) & 0x10) | ((buf[0] >> 4) & 0x0f);
 const ut32 r = ((buf[1] << 3) & 0x10) | (buf[0] & 0x0f);
 ESIL_A ("r%d,r%d,=,", r, d);
}

INST_HANDLER (movw) {
 if (len < 1) {
  return;
 }
 const ut32 d = (buf[0] & 0xf0) >> 3;
 const ut32 r = (buf[0] & 0x0f) << 1;
 ESIL_A ("r%d,r%d,=,r%d,r%d,=,", r, d, r + 1, d + 1);
}

INST_HANDLER (mul) {
 if (len < 2) {
  return;
 }
 const ut32 d = ((buf[1] << 4) & 0x10) | ((buf[0] >> 4) & 0x0f);
 const ut32 r = ((buf[1] << 3) & 0x10) | (buf[0] & 0x0f);

 ESIL_A ("r%d,r%d,*,r1_r0,=,", r, d);
 ESIL_A ("r1_r0,0x8000,&,!,!,cf,:=,");
 ESIL_A ("$z,zf,:=");
}

INST_HANDLER (muls) {
 if (len < 1) {
  return;
 }
 const ut32 d = (buf[0] >> 4 & 0x0f) + 16;
 const ut32 r = (buf[0] & 0x0f) + 16;

 ESIL_A ("r%d,DUP,0x80,&,?{,0xff00,|,},", d);
 ESIL_A ("r%d,DUP,0x80,&,?{,0xff00,|,},", r);
 ESIL_A ("*,r1_r0,=,");

 ESIL_A ("r1_r0,0x8000,&,!,!,cf,:=,");
 ESIL_A ("$z,zf,:=");
}

INST_HANDLER (mulsu) {
 if (len < 1) {
  return;
 }
 const ut32 d = (buf[0] >> 4 & 0x07) + 16;
 const ut32 r = (buf[0] & 0x07) + 16;

 ESIL_A ("r%d,DUP,0x80,&,?{,0xff00,|,},", d);
 ESIL_A ("r%d,*,r1_r0,=,", r);

 ESIL_A ("r1_r0,0x8000,&,!,!,cf,:=,");
 ESIL_A ("$z,zf,:=");
}

INST_HANDLER (neg) {
 if (len < 2) {
  return;
 }
 int d = ((buf[0] >> 4) & 0xf) | ((buf[1] & 1) << 4);
 ESIL_A ("r%d,0x00,-,0xff,&,", d);
 ESIL_A ("DUP,r%d,0xff,^,|,0x08,&,!,!,hf,=,", d);
 ESIL_A ("DUP,0x80,-,!,vf,=,");
 ESIL_A ("DUP,0x80,&,!,!,nf,=,");
 ESIL_A ("DUP,!,zf,=,");
 ESIL_A ("DUP,!,!,cf,=,");
 ESIL_A ("vf,nf,^,sf,=,");
 ESIL_A ("r%d,=,", d);
}

INST_HANDLER (nop) {
 ESIL_A (",,");
}

INST_HANDLER (or) {
 if (len < 2) {
  return;
 }
 int d = ((buf[0] >> 4) & 0xf) | ((buf[1] & 1) << 4);
 int r = (buf[0] & 0xf) | ((buf[1] & 2) << 3);
 ESIL_A ("r%d,r%d,|=,", r, d);
 ESIL_A ("$z,zf,:=,");
 ESIL_A ("r%d,&,!,!,nf,:=,", d);
 ESIL_A ("0,vf,:=,");
 ESIL_A ("nf,sf,:=");
}

INST_HANDLER (ori) {

 if (len < 2) {
  return;
 }
 const ut32 d = ((buf[0] >> 4) & 0xf) + 16;
 const ut32 k = (buf[0] & 0xf) | ((buf[1] & 0xf) << 4);
 op->val = k;
 ESIL_A ("%d,r%d,|=,", k, d);
 ESIL_A ("$z,zf,:=,");
 ESIL_A ("r%d,0x80,&,!,!,nf,:=,", d);
 ESIL_A ("0,vf,:=,");
 ESIL_A ("nf,sf,:=");
}

INST_HANDLER (out) {
 if (len < 2) {
  return;
 }
 int r = ((buf[0] >> 4) & 0x0f) | ((buf[1] & 0x01) << 4);
 int a = (buf[0] & 0x0f) | ((buf[1] & 0x6) << 3);
 RStrBuf *io_dst = __generic_io_dest (a, 1, cpu);
 op->type2 = 1;
 op->val = a;
 op->family = R_ANAL_OP_FAMILY_IO;
 ESIL_A ("r%d,%s,", r, r_strbuf_get (io_dst));
 r_strbuf_free (io_dst);
}

INST_HANDLER (pop) {
 if (len < 2) {
  return;
 }
 int d = ((buf[1] & 0x1) << 4) | ((buf[0] >> 4) & 0xf);
 __generic_pop (op, 1);
 ESIL_A ("r%d,=,", d);

}

INST_HANDLER (push) {
 if (len < 2) {
  return;
 }
 int r = ((buf[1] & 0x1) << 4) | ((buf[0] >> 4) & 0xf);
 ESIL_A ("r%d,", r);
 __generic_push (op, 1);

 op->cycles = !STR_BEGINS (cpu->model, "ATxmega")
   ? 1
   : 2;
}

INST_HANDLER (rcall) {
 if (len < 2) {
  return;
 }

 op->jump = op->addr + (
  (((((buf[1] & 0xf) << 8) | buf[0]) << 1)
   | (((buf[1] & 0x8) ? ~((int) 0x1fff) : 0)))
  + 2);
 op->fail = op->addr + op->size;

 ESIL_A ("pc,");

 __generic_push (op, CPU_PC_SIZE (cpu));
 ESIL_A ("%"PFMT64d",pc,=,", op->jump);

 if (!r_str_ncasecmp (cpu->model, "ATtiny", 6)) {
  op->cycles = 4;
 } else {

  op->cycles = cpu->pc <= 16 ? 3 : 4;
  if (!STR_BEGINS (cpu->model, "ATxmega")) {
   op->cycles--;
  }
 }
}

INST_HANDLER (ret) {
 op->eob = true;

 __generic_pop (op, CPU_PC_SIZE (cpu));
 ESIL_A ("pc,=,");

 if (CPU_PC_SIZE (cpu) > 2) {
  op->cycles++;
 }
}

INST_HANDLER (reti) {

 op->family = R_ANAL_OP_FAMILY_PRIV;


 INST_CALL (ret);




 ESIL_A ("1,if,=,");
}

INST_HANDLER (rjmp) {
 st32 jump = ((((( buf[1] & 0xf) << 9) | (buf[0] << 1)))
   | (buf[1] & 0x8 ? ~(0x1fff) : 0))
  + 2;
 op->jump = op->addr + jump;
 ESIL_A ("%"PFMT64d",pc,=,", op->jump);
}

INST_HANDLER (ror) {
 const ut32 d = ((buf[0] >> 4) & 0x0f) | ((buf[1] << 4) & 0x10);
 ESIL_A ("cf,nf,:=,");
 ESIL_A ("r%d,0x1,&,", d);
 ESIL_A ("1,r%d,>>,7,cf,<<,|,r%d,=,cf,:=,", d, d);
 ESIL_A ("$z,zf,:=,");
 ESIL_A ("nf,cf,^,vf,:=,");
 ESIL_A ("vf,nf,^,sf,:=");
}

INST_HANDLER (sbc) {
 if (len < 2) {
  return;
 }
 const ut32 r = (buf[0] & 0x0f) | ((buf[1] & 0x2) << 3);
 const ut32 d = ((buf[0] >> 4) & 0xf) | ((buf[1] & 0x1) << 4);

 ESIL_A ("cf,r%d,+,r%d,-=,", r, d);
 ESIL_A ("$z,zf,:=,");
 ESIL_A ("3,$b,hf,:=,");
 ESIL_A ("8,$b,cf,:=,");
 ESIL_A ("7,$o,vf,:=,");
 ESIL_A ("0x80,r%d,&,!,!,nf,:=,", d);
 ESIL_A ("vf,nf,^,sf,:=");
}

INST_HANDLER (sbci) {
 if (len < 2) {
  return;
 }
 const ut32 d = ((buf[0] >> 4) & 0xf) + 16;
 const ut32 k = ((buf[1] & 0xf) << 4) | (buf[0] & 0xf);
 op->val = k;

 ESIL_A ("cf,%d,+,r%d,-=,", k, d);
 ESIL_A ("$z,zf,:=,");
 ESIL_A ("3,$b,hf,:=,");
 ESIL_A ("8,$b,cf,:=,");
 ESIL_A ("7,$o,vf,:=,");
 ESIL_A ("0x80,r%d,&,!,!,nf,:=,", d);
 ESIL_A ("vf,nf,^,sf,:=");
}

INST_HANDLER (sub) {
 if (len < 2) {
  return;
 }
 const ut32 d = ((buf[0] >> 4) & 0xf) | ((buf[1] & 1) << 4);
 const ut32 r = (buf[0] & 0xf) | ((buf[1] & 2) << 3);

 ESIL_A ("r%d,r%d,-=,", r, d);
 ESIL_A ("$z,zf,:=,");
 ESIL_A ("3,$b,hf,:=,");
 ESIL_A ("8,$b,cf,:=,");
 ESIL_A ("7,$o,vf,:=,");
 ESIL_A ("0x80,r%d,&,!,!,nf,:=,", d);
 ESIL_A ("vf,nf,^,sf,:=");
}

INST_HANDLER (subi) {
 if (len < 2) {
  return;
 }
 const ut32 d = ((buf[0] >> 4) & 0xf) + 16;
 const ut32 k = ((buf[1] & 0xf) << 4) | (buf[0] & 0xf);
 op->val = k;

 ESIL_A ("%d,r%d,-=,", k, d);
 ESIL_A ("$z,zf,:=,");
 ESIL_A ("3,$b,hf,:=,");
 ESIL_A ("8,$b,cf,:=,");
 ESIL_A ("7,$o,vf,:=,");
 ESIL_A ("0x80,r%d,&,!,!,nf,:=,", d);
 ESIL_A ("vf,nf,^,sf,:=");
}

INST_HANDLER (sbi) {
 if (len < 1) {
  return;
 }
 int a = (buf[0] >> 3) & 0x1f;
 int b = buf[0] & 0x07;
 RStrBuf *io_port;

 op->type2 = 1;
 op->val = a;
 op->family = R_ANAL_OP_FAMILY_IO;


 io_port = __generic_io_dest (a, 0, cpu);
 ESIL_A ("0xff,%d,1,<<,|,%s,&,", b, r_strbuf_get (io_port));
 r_strbuf_free (io_port);


 io_port = __generic_io_dest (a, 1, cpu);
 ESIL_A ("%s,", r_strbuf_get (io_port));
 r_strbuf_free (io_port);
}

INST_HANDLER (sbix) {

 if (len < 2) {
  return;
 }
 int a = (buf[0] >> 3) & 0x1f;
 int b = buf[0] & 0x07;
 RAnalOp next_op = { 0 };
 RStrBuf *io_port;

 op->type2 = 0;
 op->val = a;
 op->family = R_ANAL_OP_FAMILY_IO;



 avr_op_analyze (anal,
   &next_op,
   op->addr + op->size, buf + op->size,
   len - op->size,
   cpu);
 r_strbuf_fini (&next_op.esil);
 op->jump = op->addr + next_op.size + 2;
 op->fail = op->addr + op->size;


 op->cycles = 1;






 io_port = __generic_io_dest (a, 0, cpu);
 ESIL_A ("%d,1,<<,%s,&,", b, r_strbuf_get (io_port));
 ESIL_A ((buf[1] & 0xe) == 0xc
   ? "!,"
   : "!,!,");
 ESIL_A ("?{,%"PFMT64d",pc,=,},", op->jump);
 r_strbuf_free (io_port);
}

INST_HANDLER (sbiw) {
 if (len < 1) {
  return;
 }
 int d = ((buf[0] & 0x30) >> 3) + 24;
 int k = (buf[0] & 0xf) | ((buf[0] >> 2) & 0x30);
 op->val = k;
 ESIL_A ("%d,r%d_r%d,-=,", k, d + 1, d);
 ESIL_A ("$z,zf,:=,");
 ESIL_A ("15,$c,cf,:=,");
 ESIL_A ("r%d_r%d,0x8000,&,!,!,nf,:=,", d + 1, d);
 ESIL_A ("r%d_r%d,0x8080,&,0x8080,!,vf,:=,", d + 1, d);
 ESIL_A ("vf,nf,^,sf,:=");
}

INST_HANDLER (sbrx) {

 if (len < 2) {
  return;
 }
 int b = buf[0] & 0x7;
 int r = ((buf[0] >> 4) & 0xf) | ((buf[1] & 0x01) << 4);
 RAnalOp next_op = {0};



 avr_op_analyze (anal,
   &next_op,
   op->addr + op->size, buf + op->size, len - op->size,
   cpu);
 r_strbuf_fini (&next_op.esil);
 op->jump = op->addr + next_op.size + 2;
 op->fail = op->addr + 2;


 op->cycles = 1;




 ESIL_A ("%d,1,<<,r%d,&,", b, r);
 ESIL_A ((buf[1] & 0xe) == 0xc
   ? "!,"
   : "!,!,");
 ESIL_A ("?{,%"PFMT64d",pc,=,},", op->jump);
}

INST_HANDLER (sleep) {
 ESIL_A ("BREAK");
}

INST_HANDLER (spm) {
 ut64 spmcsr = 0;


 if (anal->esil) {
  r_anal_esil_reg_read (anal->esil, "spmcsr", &spmcsr, NULL);
 }


 ESIL_A ("0x7c,spmcsr,&=,");


 switch (spmcsr & 0x7f) {
 case 0x03:


  ESIL_A ("16,rampz,<<,z,+,");
  ESIL_A ("SPM_PAGE_ERASE,");
  break;

 case 0x01:
  ESIL_A ("r1,r0,");
  ESIL_A ("z,");
  ESIL_A ("SPM_PAGE_FILL,");
  break;

 case 0x05:
  ESIL_A ("16,rampz,<<,z,+,");
  ESIL_A ("SPM_PAGE_WRITE,");
  break;

 default:
  eprintf ("SPM: I dont know what to do with SPMCSR %02x.\n",
    (unsigned int) spmcsr);
 }

 op->cycles = 1;




}

INST_HANDLER (st) {


 if (len < 2) {
  return;
 }

 ESIL_A ("r%d,", ((buf[1] & 1) << 4) | ((buf[0] >> 4) & 0xf));

 __generic_ld_st (
  op, "ram",
  'x',
  0,
  (buf[0] & 0xf) == 0xe
   ? -1
   : (buf[0] & 0xf) == 0xd
    ? 1
    : 0,
  0,
  1);
# 1458 "project/radare2/libr/anal/p/anal_avr.c"
}

INST_HANDLER (std) {



 if (len < 2) {
  return;
 }

 ESIL_A ("r%d,", ((buf[1] & 1) << 4) | ((buf[0] >> 4) & 0xf));

 __generic_ld_st (
  op, "ram",
  buf[0] & 0x8 ? 'y' : 'z',
  0,
  !(buf[1] & 0x10)
   ? 0
   : buf[0] & 0x1
    ? 1
    : -1,
  !(buf[1] & 0x10)
   ? (buf[1] & 0x20)
   | ((buf[1] & 0xc) << 1)
   | (buf[0] & 0x7)
   : 0,
  1);
# 1498 "project/radare2/libr/anal/p/anal_avr.c"
}

INST_HANDLER (swap) {
 if (len < 2) {
  return;
 }
 int d = ((buf[1] & 0x1) << 4) | ((buf[0] >> 4) & 0xf);
 ESIL_A ("4,r%d,>>,0x0f,&,", d);
 ESIL_A ("4,r%d,<<,0xf0,&,", d);
 ESIL_A ("|,");
 ESIL_A ("r%d,=,", d);
}

OPCODE_DESC opcodes[] = {

 INST_DECL (break, 0xffff, 0x9698, 1, 2, TRAP ),
 INST_DECL (eicall, 0xffff, 0x9519, 0, 2, UCALL ),
 INST_DECL (eijmp, 0xffff, 0x9419, 0, 2, UJMP ),
 INST_DECL (icall, 0xffff, 0x9509, 0, 2, UCALL ),
 INST_DECL (ijmp, 0xffff, 0x9409, 0, 2, UJMP ),
 INST_DECL (lpm, 0xffff, 0x95c8, 3, 2, LOAD ),
 INST_DECL (nop, 0xffff, 0x0000, 1, 2, NOP ),
 INST_DECL (ret, 0xffff, 0x9508, 4, 2, RET ),
 INST_DECL (reti, 0xffff, 0x9518, 4, 2, RET ),
 INST_DECL (sleep, 0xffff, 0x9588, 1, 2, NOP ),
 INST_DECL (spm, 0xffff, 0x95e8, 1, 2, TRAP ),
 INST_DECL (bclr, 0xff8f, 0x9488, 1, 2, MOV ),
 INST_DECL (bset, 0xff8f, 0x9408, 1, 2, MOV ),
 INST_DECL (fmul, 0xff88, 0x0308, 2, 2, MUL ),
 INST_DECL (fmuls, 0xff88, 0x0380, 2, 2, MUL ),
 INST_DECL (fmulsu, 0xff88, 0x0388, 2, 2, MUL ),
 INST_DECL (mulsu, 0xff88, 0x0300, 2, 2, AND ),
 INST_DECL (des, 0xff0f, 0x940b, 0, 2, CRYPTO ),
 INST_DECL (adiw, 0xff00, 0x9600, 2, 2, ADD ),
 INST_DECL (sbiw, 0xff00, 0x9700, 2, 2, SUB ),
 INST_DECL (cbi, 0xff00, 0x9800, 1, 2, IO ),
 INST_DECL (sbi, 0xff00, 0x9a00, 1, 2, IO ),
 INST_DECL (movw, 0xff00, 0x0100, 1, 2, MOV ),
 INST_DECL (muls, 0xff00, 0x0200, 2, 2, AND ),
 INST_DECL (asr, 0xfe0f, 0x9405, 1, 2, SAR ),
 INST_DECL (com, 0xfe0f, 0x9400, 1, 2, NOT ),
 INST_DECL (dec, 0xfe0f, 0x940a, 1, 2, SUB ),
 INST_DECL (elpm, 0xfe0f, 0x9006, 0, 2, LOAD ),
 INST_DECL (elpm, 0xfe0f, 0x9007, 0, 2, LOAD ),
 INST_DECL (inc, 0xfe0f, 0x9403, 1, 2, ADD ),
 INST_DECL (lac, 0xfe0f, 0x9206, 2, 2, LOAD ),
 INST_DECL (las, 0xfe0f, 0x9205, 2, 2, LOAD ),
 INST_DECL (lat, 0xfe0f, 0x9207, 2, 2, LOAD ),
 INST_DECL (ld, 0xfe0f, 0x900c, 0, 2, LOAD ),
 INST_DECL (ld, 0xfe0f, 0x900d, 0, 2, LOAD ),
 INST_DECL (ld, 0xfe0f, 0x900e, 0, 2, LOAD ),
 INST_DECL (lds, 0xfe0f, 0x9000, 0, 4, LOAD ),
 INST_DECL (sts, 0xfe0f, 0x9200, 2, 4, STORE ),
 INST_DECL (lpm, 0xfe0f, 0x9004, 3, 2, LOAD ),
 INST_DECL (lpm, 0xfe0f, 0x9005, 3, 2, LOAD ),
 INST_DECL (lsr, 0xfe0f, 0x9406, 1, 2, SHR ),
 INST_DECL (neg, 0xfe0f, 0x9401, 2, 2, SUB ),
 INST_DECL (pop, 0xfe0f, 0x900f, 2, 2, POP ),
 INST_DECL (push, 0xfe0f, 0x920f, 0, 2, PUSH ),
 INST_DECL (ror, 0xfe0f, 0x9407, 1, 2, SAR ),
 INST_DECL (st, 0xfe0f, 0x920c, 2, 2, STORE ),
 INST_DECL (st, 0xfe0f, 0x920d, 0, 2, STORE ),
 INST_DECL (st, 0xfe0f, 0x920e, 0, 2, STORE ),
 INST_DECL (swap, 0xfe0f, 0x9402, 1, 2, SAR ),
 INST_DECL (call, 0xfe0e, 0x940e, 0, 4, CALL ),
 INST_DECL (jmp, 0xfe0e, 0x940c, 2, 4, JMP ),
 INST_DECL (bld, 0xfe08, 0xf800, 1, 2, MOV ),
 INST_DECL (bst, 0xfe08, 0xfa00, 1, 2, MOV ),
 INST_DECL (sbix, 0xff00, 0x9900, 2, 2, CJMP ),
 INST_DECL (sbix, 0xff00, 0x9b00, 2, 2, CJMP ),
 INST_DECL (sbrx, 0xfe08, 0xfc00, 2, 2, CJMP ),
 INST_DECL (sbrx, 0xfe08, 0xfe00, 2, 2, CJMP ),
 INST_DECL (ldd, 0xfe07, 0x9001, 0, 2, LOAD ),
 INST_DECL (ldd, 0xfe07, 0x9002, 0, 2, LOAD ),
 INST_DECL (std, 0xfe07, 0x9201, 0, 2, STORE ),
 INST_DECL (std, 0xfe07, 0x9202, 0, 2, STORE ),
 INST_DECL (adc, 0xfc00, 0x1c00, 1, 2, ADD ),
 INST_DECL (add, 0xfc00, 0x0c00, 1, 2, ADD ),
 INST_DECL (and, 0xfc00, 0x2000, 1, 2, AND ),
 INST_DECL (brbx, 0xfc00, 0xf000, 0, 2, CJMP ),
 INST_DECL (brbx, 0xfc00, 0xf400, 0, 2, CJMP ),
 INST_DECL (cp, 0xfc00, 0x1400, 1, 2, CMP ),
 INST_DECL (cpc, 0xfc00, 0x0400, 1, 2, CMP ),
 INST_DECL (cpse, 0xfc00, 0x1000, 0, 2, CJMP ),
 INST_DECL (eor, 0xfc00, 0x2400, 1, 2, XOR ),
 INST_DECL (mov, 0xfc00, 0x2c00, 1, 2, MOV ),
 INST_DECL (mul, 0xfc00, 0x9c00, 2, 2, AND ),
 INST_DECL (or, 0xfc00, 0x2800, 1, 2, OR ),
 INST_DECL (sbc, 0xfc00, 0x0800, 1, 2, SUB ),
 INST_DECL (sub, 0xfc00, 0x1800, 1, 2, SUB ),
 INST_DECL (in, 0xf800, 0xb000, 1, 2, IO ),

 INST_DECL (out, 0xf800, 0xb800, 1, 2, IO ),
 INST_DECL (andi, 0xf000, 0x7000, 1, 2, AND ),
 INST_DECL (cpi, 0xf000, 0x3000, 1, 2, CMP ),
 INST_DECL (ldi, 0xf000, 0xe000, 1, 2, LOAD ),
 INST_DECL (ori, 0xf000, 0x6000, 1, 2, OR ),
 INST_DECL (rcall, 0xf000, 0xd000, 0, 2, CALL ),
 INST_DECL (rjmp, 0xf000, 0xc000, 2, 2, JMP ),
 INST_DECL (sbci, 0xf000, 0x4000, 1, 2, SUB ),
 INST_DECL (subi, 0xf000, 0x5000, 1, 2, SUB ),
 INST_DECL (ldd, 0xd200, 0x8000, 0, 2, LOAD ),
 INST_DECL (std, 0xd200, 0x8200, 0, 2, STORE ),

 INST_LAST
};

static void set_invalid_op(RAnalOp *op, ut64 addr) {

 op->family = R_ANAL_OP_FAMILY_UNKNOWN;
 op->type = R_ANAL_OP_TYPE_UNK;
 op->addr = addr;
 op->nopcode = 1;
 op->cycles = 1;
 op->size = 2;

 r_strbuf_set (&op->esil, "1,$");
}

static OPCODE_DESC* avr_op_analyze(RAnal *anal, RAnalOp *op, ut64 addr, const ut8 *buf, int len, CPU_MODEL *cpu) {
 OPCODE_DESC *opcode_desc;
 if (len < 2) {
  return NULL;
 }
 ut16 ins = (buf[1] << 8) | buf[0];
 int fail;
 char *t;


 for (opcode_desc = opcodes; opcode_desc->handler; opcode_desc++) {
  if ((ins & opcode_desc->mask) == opcode_desc->selector) {
   fail = 0;


   op->cycles = opcode_desc->cycles;
   op->size = opcode_desc->size;
   op->type = opcode_desc->type;
   op->jump = UT64_MAX;
   op->fail = UT64_MAX;

   op->addr = addr;


   r_strbuf_setf (&op->esil, "%s", "");


   opcode_desc->handler (anal, op, buf, len, &fail, cpu);
   if (fail) {
    goto INVALID_OP;
   }
   if (op->cycles <= 0) {

    opcode_desc->cycles = 2;
   }
   op->nopcode = (op->type == R_ANAL_OP_TYPE_UNK);


   t = r_strbuf_get (&op->esil);
   if (t && strlen (t) > 1) {
    t += strlen (t) - 1;
    if (*t == ',') {
     *t = '\0';
    }
   }

   return opcode_desc;
  }
 }
#if 0

 if ((ins & 0xff00) == 0xff00 && (ins & 0xf) > 7) {
  goto INVALID_OP;
 }

INVALID_OP:


 op->family = R_ANAL_OP_FAMILY_UNKNOWN;
 op->type = R_ANAL_OP_TYPE_UNK;
 op->addr = addr;
 op->nopcode = 1;
 op->cycles = 1;
 op->size = 2;


 r_strbuf_set (&op->esil, "1,$");
#else
INVALID_OP:
 set_invalid_op (op, addr);
#endif

 return NULL;
}


static int avr_op(RAnal *anal, RAnalOp *op, ut64 addr, const ut8 *buf, int len, RAnalOpMask mask) {
 char mnemonic[32] = {0};

 set_invalid_op (op, addr);

 int size = avr_anal (anal, mnemonic, sizeof (mnemonic), addr, buf, len);

 if (!strcmp (mnemonic, "invalid") ||
  !strcmp (mnemonic, "truncated")) {
  op->eob = true;
  op->mnemonic = strdup (mnemonic);
  op->size = 2;
  return -1;
 }


 CPU_MODEL *cpu = get_cpu_model (anal->cpu);


 if (anal->esil) {
  ut64 offset = 0;
  r_anal_esil_reg_write (anal->esil, "_prog", offset);

  offset += (1 << cpu->pc);
  r_anal_esil_reg_write (anal->esil, "_io", offset);

  offset += const_get_value (const_by_name (cpu, CPU_CONST_PARAM, "sram_start"));
  r_anal_esil_reg_write (anal->esil, "_sram", offset);

  offset += const_get_value (const_by_name (cpu, CPU_CONST_PARAM, "sram_size"));
  r_anal_esil_reg_write (anal->esil, "_eeprom", offset);

  offset += const_get_value (const_by_name (cpu, CPU_CONST_PARAM, "eeprom_size"));
  r_anal_esil_reg_write (anal->esil, "_page", offset);
 }

 avr_op_analyze (anal, op, addr, buf, len, cpu);

 op->mnemonic = op->size > 1? strdup (mnemonic): "invalid";
 op->size = size;

 return size;
}

static bool avr_custom_des(RAnalEsil *esil) {
 ut64 key, encrypt, text,des_round;
 ut32 key_lo, key_hi, buf_lo, buf_hi;
 if (!esil || !esil->anal || !esil->anal->reg) {
  return false;
 }
 if (!__esil_pop_argument (esil, &des_round)) {
  return false;
 }
 r_anal_esil_reg_read (esil, "hf", &encrypt, NULL);
 r_anal_esil_reg_read (esil, "deskey", &key, NULL);
 r_anal_esil_reg_read (esil, "text", &text, NULL);

 key_lo = key & UT32_MAX;
 key_hi = key >> 32;
 buf_lo = text & UT32_MAX;
 buf_hi = text >> 32;

 if (des_round != desctx.round) {
  desctx.round = des_round;
 }

 if (!desctx.round) {
  int i;

  r_des_permute_key (&key_lo, &key_hi);
  for (i = 0; i < 16; i++) {
   r_des_round_key (i, &desctx.round_key_lo[i], &desctx.round_key_hi[i], &key_lo, &key_hi);
  }
  r_des_permute_block0 (&buf_lo, &buf_hi);
 }

 if (encrypt) {
  r_des_round (&buf_lo, &buf_hi, &desctx.round_key_lo[desctx.round], &desctx.round_key_hi[desctx.round]);
 } else {
  r_des_round (&buf_lo, &buf_hi, &desctx.round_key_lo[15 - desctx.round], &desctx.round_key_hi[15 - desctx.round]);
 }

 if (desctx.round == 15) {
  r_des_permute_block1 (&buf_hi, &buf_lo);
  desctx.round = 0;
 } else {
  desctx.round++;
 }

 r_anal_esil_reg_write (esil, "text", text);
 return true;
}


static bool avr_custom_spm_page_erase(RAnalEsil *esil) {
 ut64 addr, i;


 if (!esil || !esil->anal || !esil->anal->reg) {
  return false;
 }


 if (!__esil_pop_argument(esil, &addr)) {
  return false;
 }


 CPU_MODEL *cpu = get_cpu_model (esil->anal->cpu);
 ut64 page_size_bits = const_get_value (const_by_name (cpu, CPU_CONST_PARAM, "page_size"));


 addr &= ~(MASK (page_size_bits));



 ut8 c = 0xff;
 for (i = 0; i < (1ULL << page_size_bits); i++) {
  r_anal_esil_mem_write (
   esil, (addr + i) & CPU_PC_MASK (cpu), &c, 1);
 }

 return true;
}


static bool avr_custom_spm_page_fill(RAnalEsil *esil) {
 ut64 addr, i;
 ut8 r0, r1;


 if (!esil || !esil->anal || !esil->anal->reg) {
  return false;
 }


 if (!__esil_pop_argument(esil, &addr)) {
  return false;
 }

 if (!__esil_pop_argument (esil, &i)) {
  return false;
 }
 r0 = i;

 if (!__esil_pop_argument (esil, &i)) {
  return false;
 }
 r1 = i;


 CPU_MODEL *cpu = get_cpu_model (esil->anal->cpu);
 ut64 page_size_bits = const_get_value (const_by_name (cpu, CPU_CONST_PARAM, "page_size"));


 addr &= (MASK (page_size_bits) ^ 1);



 r_anal_esil_mem_write (esil, addr++, &r0, 1);
 r_anal_esil_mem_write (esil, addr++, &r1, 1);

 return true;
}


static bool avr_custom_spm_page_write(RAnalEsil *esil) {
 CPU_MODEL *cpu;
 char *t = NULL;
 ut64 addr, page_size_bits, tmp_page;


 if (!esil || !esil->anal || !esil->anal->reg) {
  return false;
 }


 if (!__esil_pop_argument (esil, &addr)) {
  return false;
 }



 cpu = get_cpu_model (esil->anal->cpu);
 page_size_bits = const_get_value (const_by_name (cpu, CPU_CONST_PARAM, "page_size"));
 r_anal_esil_reg_read (esil, "_page", &tmp_page, NULL);


 addr &= (~(MASK (page_size_bits)) & CPU_PC_MASK (cpu));



 if (!(t = malloc (1 << page_size_bits))) {
  eprintf ("Cannot alloc a buffer for copying the temporary page.\n");
  return false;
 }
 r_anal_esil_mem_read (esil, tmp_page, (ut8 *) t, 1 << page_size_bits);
 r_anal_esil_mem_write (esil, addr, (ut8 *) t, 1 << page_size_bits);

 return true;
}

static bool esil_avr_hook_reg_write(RAnalEsil *esil, const char *name, ut64 *val) {

 if (!esil || !esil->anal) {
  return false;
 }


 CPU_MODEL *cpu = get_cpu_model (esil->anal->cpu);


 if (!strcmp (name, "pc")) {
  *val &= CPU_PC_MASK (cpu);
 } else if (!strcmp (name, "pcl")) {
  if (cpu->pc < 8) {
   *val &= MASK (8);
  }
 } else if (!strcmp (name, "pch")) {
  *val = cpu->pc > 8
   ? *val & MASK (cpu->pc - 8)
   : 0;
 }
 return false;
}

static int esil_avr_init(RAnalEsil *esil) {
 if (!esil) {
  return false;
 }
 desctx.round = 0;
 r_anal_esil_set_op (esil, "des", avr_custom_des, 0, 0, R_ANAL_ESIL_OP_TYPE_CUSTOM);
 r_anal_esil_set_op (esil, "SPM_PAGE_ERASE", avr_custom_spm_page_erase, 0, 0, R_ANAL_ESIL_OP_TYPE_CUSTOM);
 r_anal_esil_set_op (esil, "SPM_PAGE_FILL", avr_custom_spm_page_fill, 0, 0, R_ANAL_ESIL_OP_TYPE_CUSTOM);
 r_anal_esil_set_op (esil, "SPM_PAGE_WRITE", avr_custom_spm_page_write, 0, 0, R_ANAL_ESIL_OP_TYPE_CUSTOM);
 esil->cb.hook_reg_write = esil_avr_hook_reg_write;
 return true;
}

static int esil_avr_fini(RAnalEsil *esil) {
 return true;
}

static bool set_reg_profile(RAnal *anal) {
 char *registers_profile = strdup (
  "=PC	pcl\n"
  "=SN	r24\n"
  "=SP	sp\n"
  "=BP    y\n"
  "=RS	8\n"



  "=A0	r25\n"
  "=A1	r24\n"
  "=A2	r23\n"
  "=A3	r22\n"
  "=R0	r24\n"
# 1960 "project/radare2/libr/anal/p/anal_avr.c"
  "gpr	r0	.8	0	0\n"
  "gpr	r1	.8	1	0\n"
  "gpr	r2	.8	2	0\n"
  "gpr	r3	.8	3	0\n"
  "gpr	r4	.8	4	0\n"
  "gpr	r5	.8	5	0\n"
  "gpr	r6	.8	6	0\n"
  "gpr	r7	.8	7	0\n"
  "gpr	text	.64	0	0\n"
  "gpr	r8	.8	8	0\n"
  "gpr	r9	.8	9	0\n"
  "gpr	r10	.8	10	0\n"
  "gpr	r11	.8	11	0\n"
  "gpr	r12	.8	12	0\n"
  "gpr	r13	.8	13	0\n"
  "gpr	r14	.8	14	0\n"
  "gpr	r15	.8	15	0\n"
  "gpr	deskey	.64	8	0\n"
  "gpr	r16	.8	16	0\n"
  "gpr	r17	.8	17	0\n"
  "gpr	r18	.8	18	0\n"
  "gpr	r19	.8	19	0\n"
  "gpr	r20	.8	20	0\n"
  "gpr	r21	.8	21	0\n"
  "gpr	r22	.8	22	0\n"
  "gpr	r23	.8	23	0\n"
  "gpr	r24	.8	24	0\n"
  "gpr	r25	.8	25	0\n"
  "gpr	r26	.8	26	0\n"
  "gpr	r27	.8	27	0\n"
  "gpr	r28	.8	28	0\n"
  "gpr	r29	.8	29	0\n"
  "gpr	r30	.8	30	0\n"
  "gpr	r31	.8	31	0\n"


  "gpr	r1_r0	.16	0	0\n"

  "gpr	r17_r16	.16	16	0\n"
  "gpr	r19_r18	.16	18	0\n"
  "gpr	r21_r20	.16	20	0\n"
  "gpr	r23_r22	.16	22	0\n"
  "gpr	r25_r24	.16	24	0\n"
  "gpr	r27_r26	.16	26	0\n"
  "gpr	r29_r28	.16	28	0\n"
  "gpr	r31_r30	.16	30	0\n"


  "gpr	x	.16	26	0\n"
  "gpr	y	.16	28	0\n"
  "gpr	z	.16	30	0\n"




  "gpr	pc	.32	32	0\n"
  "gpr	pcl	.16	32	0\n"
  "gpr	pch	.16	34	0\n"


  "gpr	sp	.16	36	0\n"
  "gpr	spl	.8	36	0\n"
  "gpr	sph	.8	37	0\n"


  "gpr	sreg	.8	38	0\n"
  "gpr	cf	.1	38.0	0\n"
  "gpr	zf	.1	38.1	0\n"
  "gpr	nf	.1	38.2	0\n"
  "gpr	vf	.1	38.3	0\n"
  "gpr	sf	.1	38.4	0\n"
  "gpr	hf	.1	38.5	0\n"
  "gpr	tf	.1	38.6	0\n"
  "gpr	if	.1	38.7	0\n"

  "gpr	rampx	.8	39	0\n"
  "gpr	rampy	.8	40	0\n"
  "gpr	rampz	.8	41	0\n"
  "gpr	rampd	.8	42	0\n"
  "gpr	eind	.8	43	0\n"
# 2057 "project/radare2/libr/anal/p/anal_avr.c"
  "gpr	_prog	.32	44	0\n"
  "gpr    _page   .32     48	0\n"
  "gpr	_eeprom	.32	52	0\n"
  "gpr	_ram	.32	56	0\n"
  "gpr	_io	.32	56	0\n"
  "gpr	_sram	.32	60	0\n"




  "gpr    spmcsr  .8      64      0\n"
 );

 if (!strcmp (r_str_get (anal->cpu), "ATmega328p")) {
  const char *section_two =
   "gpr		pinb	.8		65		0\n"
   "gpr		pinb0	.8		66		0\n"
   "gpr		pinb1	.8		67		0\n"
   "gpr		pinb2	.8		68		0\n"
   "gpr		pinb3	.8		69		0\n"
   "gpr		pinb4	.8		70		0\n"
   "gpr		pinb5	.8		71		0\n"
   "gpr		pinb6	.8		72		0\n"
   "gpr		pinb7	.8		73		0\n"

   "gpr		pinc	.8		74		0\n"
   "gpr		pinc0	.1		74		0\n"
   "gpr		pinc1	.1		74		0\n"
   "gpr		pinc2	.1		74		0\n"
   "gpr		pinc3	.1		74		0\n"
   "gpr		pinc4	.1		74		0\n"
   "gpr		pinc5	.1		74		0\n"
   "gpr		pinc6	.1		74		0\n"


   "gpr		pind	.8		75		0\n"
   "gpr		ddrb	.8		76		0\n"
   "gpr		ddb0	.1		76		0\n"
   "gpr		ddb1	.1		76		0\n"
   "gpr		ddb2	.1		76		0\n"
   "gpr		ddb3	.1		76		0\n"
   "gpr		ddb4	.1		76		0\n"
   "gpr		ddb5	.1		76		0\n"
   "gpr		ddb6	.1		76		0\n"
   "gpr		ddb7	.1		76		0\n"


   "gpr		ddrc	.8		77		0\n"
   "gpr		ddc0	.1		77		0\n"
   "gpr		ddc1	.1		77		0\n"
   "gpr		ddc2	.1		77		0\n"
   "gpr		ddc3	.1		77		0\n"
   "gpr		ddc4	.1		77		0\n"
   "gpr		ddc5	.1		77		0\n"
   "gpr		ddc6	.1		77		0\n"



   "gpr		dddd	.8		78		0\n"
   "gpr		ddd0	.1		78		0\n"
   "gpr		ddd1	.1		78		0\n"
   "gpr		ddd2	.1		78		0\n"
   "gpr		ddd3	.1		78		0\n"
   "gpr		ddd4	.1		78		0\n"
   "gpr		ddd5	.1		78		0\n"
   "gpr		ddd6	.1		78		0\n"

   "gpr		portb	.8		80		0\n"
   "gpr		portb0	.1		80		0\n"
   "gpr		portb1	.1		80		0\n"
   "gpr		portb2	.1		80		0\n"
   "gpr		portb3	.1		80		0\n"
   "gpr		portb4	.1		80		0\n"
   "gpr		portb5	.1		80		0\n"
   "gpr		portb6	.1		80		0\n"
   "gpr		portb7	.1		80		0\n"


   "gpr		portc	.8		80		0\n"
   "gpr		portc0	.1		80		0\n"
   "gpr		portc1	.1		80		0\n"
   "gpr		portc2	.1		80		0\n"
   "gpr		portc3	.1		80		0\n"
   "gpr		portc4	.1		80		0\n"
   "gpr		portc5	.1		80		0\n"
   "gpr		portc6	.1		80		0\n"
   "gpr		portc7	.1		80		0\n"


   "gpr		portd	.8		80		0\n"
   "gpr		portd0	.1		80		0\n"
   "gpr		portd1	.1		80		0\n"
   "gpr		portd2	.1		80		0\n"
   "gpr		portd3	.1		80		0\n"
   "gpr		portd4	.1		80		0\n"
   "gpr		portd5	.1		80		0\n"
   "gpr		portd6	.1		80		0\n"
   "gpr		portd7	.1		80		0\n"


   "gpr		tifr0	.8		82		0\n"
   "gpr		ocf0a	.1		82		0\n"
   "gpr		ocf0b	.1		82		0\n"


   "gpr		tifr1	.8		83		0\n"




   "gpr		tifr2	.8		84		0\n"

   "gpr		pcifr	.8		85		0\n"
   "gpr		eifr	.8		86		0\n"
   "gpr		eimsk	.8		87		0\n"
   "gpr		gpior0	.8		88		0\n"



   "gpr		eear	.16		89		0\n"
   "gpr		eearl	.8		89		0\n"
   "gpr		eear0	.1		89		0\n"
   "gpr		eear1	.1		89		0\n"
   "gpr		eear2	.1		89		0\n"
   "gpr		eear3	.1		89		0\n"
   "gpr		eear4	.1		89		0\n"
   "gpr		eear5	.1		89		0\n"
   "gpr		eear6	.1		89		0\n"
   "gpr		eear7	.1		89		0\n"

   "gpr		eearh	.8		89		0\n"
   "gpr		eear8	.1		89		0\n"
   "gpr		eear9	.1		89		0\n"


   "gpr		eecr	.8		90		0\n"
   "gpr		eedr	.8		91		0\n"
   "gpr		eedr0	.1		91		0\n"
   "gpr		eedr1	.1		91		0\n"
   "gpr		eedr2	.1		91		0\n"
   "gpr		eedr3	.1		91		0\n"
   "gpr		eedr4	.1		91		0\n"
   "gpr		eedr5	.1		91		0\n"
   "gpr		eedr6	.1		91		0\n"
   "gpr		eedr7	.1		91		0\n"




   "gpr		gtcrr	.8		90		0\n"
   "gpr		tcnt0	.8		90		0\n"
   "gpr		ocr0a	.8		90		0\n"
   "gpr		ocr0b	.8		90		0\n"
   "gpr		gpior1	.8		90		0\n"
   "gpr		gpior2	.8		90		0\n"
   "gpr		spcr	.8		90		0\n"
   "gpr		spsr	.8		90		0\n"
   "gpr		spdr	.8		90		0\n"
   "gpr		acsr	.8		90		0\n"
   "gpr		smcr	.8		90		0\n"
   "gpr		mcusr	.8		90		0\n"
   "gpr		mcucr	.8		90		0\n"
   "gpr		spmcsr	.8		90		0\n"
   "gpr		wdtcsr	.8		90		0\n"
   "gpr		clkpr	.8		90		0\n"
   "gpr		prr		.8		90		0\n"
   "gpr		osccal	.8		90		0\n"
   "gpr		acsr	.8		90		0\n"
   "gpr		pcicr	.8		90		0\n"
   "gpr		eicra	.8		90		0\n"
   "gpr		pcmsk0	.8		90		0\n"
   "gpr		pcmsk1	.8		90		0\n"
   "gpr		pcmsk2	.8		90		0\n"
   "gpr		pcicr	.8		90		0\n"
   "gpr		timsk0	.8		90		0\n"
   "gpr		timsk1	.8		90		0\n"
   "gpr		timsk2	.8		90		0\n"
   "gpr		pcicr	.8		90		0\n"
   "gpr		adc		.8		90		0\n"
   "gpr		adcw	.8		90		0\n"
   "gpr		adcl	.8		90		0\n"
   "gpr		adch	.8		90		0\n"
   "gpr		adcsra	.8		90		0\n"
   "gpr		adcsrb	.8		90		0\n"

   "gpr		admux	.8		90		0\n"
   "gpr		didr0	.8		90		0\n"
   "gpr		didr1	.8		90		0\n"
   "gpr		tccr1a	.8		90		0\n"
   "gpr		tccr1b	.8		90		0\n"
   "gpr		tccr1c	.8		90		0\n"
   "gpr		tcnt1	.8		90		0\n"
   "gpr		tcnt1l	.8		90		0\n"
   "gpr		icr1	.8		90		0\n"
   "gpr		icr1l	.8		90		0\n"
   "gpr		icr1h	.8		90		0\n"
   "gpr		ocr1h	.16		90		0\n"
   "gpr		ocr1al	.8		90		0\n"
   "gpr		ocr1ah	.8		90		0\n"
   "gpr		ocr1al	.8		90		0\n"
   "gpr		ocr1b	.16		90		0\n"
   "gpr		ocr1bl	.8		90		0\n"
   "gpr		ocr1bh	.8		90		0\n"
   "gpr		tccr2a	.8		90		0\n"
   "gpr		tccr2b	.8		90		0\n"
   "gpr		tcnt2	.8		90		0\n"
   "gpr		ocr2a	.8		90		0\n"
   "gpr		ocr2b	.8		90		0\n"
   "gpr		twbr	.8		90		0\n"
   "gpr		twsr	.8		90		0\n"
   "gpr		twar	.8		90		0\n"
   "gpr		twdr	.8		90		0\n"
   "gpr		twcr	.8		90		0\n"
   "gpr		twbr	.8		90		0\n"
   "gpr		twamr	.8		90		0\n"
   "gpr		ucsr0a	.8		90		0\n"
   "gpr		ucsr0b	.8		90		0\n"
   "gpr		ucsr0c	.8		90		0\n"
   "gpr		ubrr0l	.8		90		0\n"
   "gpr		ubrr0h	.8		90		0\n"
   "gpr		udr0	.8		90		0\n"
   "gpr		ubrr0l	.8		90		0\n"
   "gpr		ubrr0l	.8		90		0\n"
   ;
  RStrBuf *sb = r_strbuf_new (registers_profile);
  r_strbuf_append (sb, section_two);
  free (registers_profile);
  registers_profile = r_strbuf_drain (sb);
 }

 int status = r_reg_set_profile_string (anal->reg, registers_profile);
 free (registers_profile);
 return status;
}

static int archinfo(RAnal *anal, int q) {
 if (q == R_ANAL_ARCHINFO_ALIGN) {
  return 2;
 }
 if (q == R_ANAL_ARCHINFO_MAX_OP_SIZE) {
  return 4;
 }
 if (q == R_ANAL_ARCHINFO_MIN_OP_SIZE) {
  return 2;
 }
 return 2;
}

static ut8 *anal_mask_avr(RAnal *anal, int size, const ut8 *data, ut64 at) {
 RAnalOp *op = NULL;
 ut8 *ret = NULL;
 int idx;

 if (!(op = r_anal_op_new ())) {
  return NULL;
 }

 if (!(ret = malloc (size))) {
  r_anal_op_free (op);
  return NULL;
 }

 memset (ret, 0xff, size);

 CPU_MODEL *cpu = get_cpu_model (anal->cpu);

 for (idx = 0; idx + 1 < size; idx += op->size) {
  OPCODE_DESC* opcode_desc = avr_op_analyze (anal, op, at + idx, data + idx, size - idx, cpu);

  if (op->size < 1) {
   break;
  }

  if (!opcode_desc) {
   continue;
  }



  if (op->size == 4) {
   ret[idx + 2] = 0;
   ret[idx + 3] = 0;
  }

  if (op->ptr != UT64_MAX || op->jump != UT64_MAX) {
   ret[idx] = opcode_desc->mask;
   ret[idx + 1] = opcode_desc->mask >> 8;
  }
 }

 r_anal_op_free (op);

 return ret;
}

RAnalPlugin r_anal_plugin_avr = {
 .name = "avr",
 .desc = "AVR code analysis plugin",
 .license = "LGPL3",
 .arch = "avr",
 .esil = true,
 .archinfo = archinfo,
 .bits = 8 | 16,
 .op = &avr_op,
 .set_reg_profile = &set_reg_profile,
 .esil_init = esil_avr_init,
 .esil_fini = esil_avr_fini,
 .anal_mask = anal_mask_avr
};

#ifndef R2_PLUGIN_INCORE
R_API RLibStruct radare_plugin = {
 .type = R_LIB_TYPE_ANAL,
 .data = &r_anal_plugin_avr,
 .version = R2_VERSION
};
#endif
