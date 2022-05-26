# 1 "project/radare2/libr/debug/p/native/maps/windows_maps.h"
#ifndef WINDOWS_MAPS_H
#define WINDOWS_MAPS_H 
#include <r_core.h>

R_API RList *r_w32_dbg_modules(RDebug *dbg);
R_API RList *r_w32_dbg_maps(RDebug *dbg);

#endif
