# 1 "project/radare2/libr/debug/p/native/bsd/bsd_debug.h"


#ifndef _BSD_DEBUG_H
#define _BSD_DEBUG_H 
#include <r_debug.h>
#include <sys/ptrace.h>
#define R_DEBUG_REG_T struct reg

int bsd_handle_signals(RDebug *dbg);
int bsd_reg_write(RDebug *dbg, int type, const ut8 *buf, int size);
RDebugInfo *bsd_info(RDebug *dbg, const char *arg);
RList *bsd_pid_list(RDebug *dbg, int pid, RList *list);
RList *bsd_native_sysctl_map(RDebug *dbg);
RList *bsd_desc_list(int pid);
RList *bsd_thread_list(RDebug *dbg, int pid, RList *list);
#endif
