# 1 "project/radare2/libr/bp/bp_io.c"


#include <r_bp.h>
#include <config.h>

R_API void r_bp_restore_one(RBreakpoint *bp, RBreakpointItem *b, bool set) {
 if (set) {

  if (b->hw || !b->bbytes) {
   eprintf ("hw breakpoints not yet supported\n");
  } else {
   bp->iob.write_at (bp->iob.io, b->addr, b->bbytes, b->size);
  }
 } else {

  if (b->hw || !b->obytes) {
   eprintf ("hw breakpoints not yet supported\n");
  } else {
   bp->iob.write_at (bp->iob.io, b->addr, b->obytes, b->size);
  }
 }
}




R_API int r_bp_restore(RBreakpoint *bp, bool set) {
 return r_bp_restore_except (bp, set, UT64_MAX);
}






R_API bool r_bp_restore_except(RBreakpoint *bp, bool set, ut64 addr) {
 bool rc = true;
 RListIter *iter;
 RBreakpointItem *b;

 if (set && bp->bpinmaps) {
  bp->corebind.syncDebugMaps (bp->corebind.core);
 }

 r_list_foreach (bp->bps, iter, b) {
  if (addr && b->addr == addr) {
   continue;
  }

  if (set && !b->enabled) {
   continue;
  }

  if (set && bp->bpinmaps && !r_bp_is_valid (bp, b)) {
   continue;
  }
  if (bp->breakpoint && bp->breakpoint (bp, b, set)) {
   continue;
  }


  r_bp_restore_one (bp, b, set);
  rc = true;
 }
 return rc;
}
