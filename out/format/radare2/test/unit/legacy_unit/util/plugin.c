# 1 "project/radare2/test/unit/legacy_unit/util/plugin.c"
#include <r_lib.h>

int mystuff = 31337;

struct r_lib_struct_t radare_plugin = {
 .type = 1,
 .data = &mystuff,
 .version = R2_VERSION
};
