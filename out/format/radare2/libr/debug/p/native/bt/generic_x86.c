# 1 "project/radare2/libr/debug/p/native/bt/generic_x86.c"






#include <r_debug.h>

static RList *backtrace_x86_32(RDebug *dbg, ut64 at) {
 RRegItem *ri;
 RReg *reg = dbg->reg;
 ut32 i, _esp, esp, ebp2;
 RList *list = r_list_new ();
 RIOBind *bio = &dbg->iob;
 ut8 buf[4];

 list->free = free;
 ri = (at==UT64_MAX)? r_reg_get (reg, "ebp", R_REG_TYPE_GPR): NULL;
 _esp = (ut32) ((ri)? r_reg_get_value (reg, ri): at);

 esp = _esp;
 for (i=0; i<dbg->btdepth; i++) {
  bio->read_at (bio->io, esp, (void *)&ebp2, 4);
  if (ebp2 == UT32_MAX)
   break;
  *buf = '\0';
  bio->read_at (bio->io, (ebp2-5)-(ebp2-5)%4, (void *)&buf, 4);


  if (buf[(ebp2-5)%4] == 0xe8) {
   RDebugFrame *frame = R_NEW0 (RDebugFrame);
   frame->addr = ebp2;
   frame->size = esp - _esp;
   r_list_append (list, frame);
  }
  esp += 4;
 }
 return list;
}


static RList *backtrace_x86_32_anal(RDebug *dbg, ut64 at) {
 RRegItem *ri;
 RReg *reg = dbg->reg;
 ut32 i, _esp, esp, eip, ebp2;
 RList *list;
 RIOBind *bio = &dbg->iob;
 RAnalFunction *fcn;
 RDebugFrame *frame;
 ut8 buf[4];


 list = r_list_new ();
 list->free = free;

 ri = (at==UT64_MAX)? r_reg_get (reg, "ebp", R_REG_TYPE_GPR): NULL;
 _esp = (ut32) ((ri)? r_reg_get_value (reg, ri): at);

 esp = _esp;

 eip = r_reg_get_value (reg, r_reg_get (reg, "eip", R_REG_TYPE_GPR));
 fcn = r_anal_get_fcn_in (dbg->anal, eip, R_ANAL_FCN_TYPE_NULL);
 if (fcn != NULL) {
  frame = R_NEW0 (RDebugFrame);
  frame->addr = eip;
  frame->size = 0;
  r_list_append (list, frame);
 }

 for (i=1; i<dbg->btdepth; i++) {
  bio->read_at (bio->io, esp, (void *)&ebp2, 4);
  if (ebp2 == UT32_MAX)
   break;
  *buf = '\0';
  bio->read_at (bio->io, (ebp2-5)-(ebp2-5)%4, (void *)&buf, 4);


  if (buf[(ebp2-5)%4]==0xe8) {
   frame = R_NEW0 (RDebugFrame);
   frame->addr = ebp2;
   frame->size = esp - _esp;
   frame->sp = _esp;
   frame->bp = _esp + frame->size;
   r_list_append (list, frame);
  }
  esp += 4;
 }
 return list;
}
