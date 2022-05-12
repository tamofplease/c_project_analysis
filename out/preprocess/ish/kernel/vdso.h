# 0 "project/ish/kernel/vdso.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/ish/kernel/vdso.h"


# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/tools/ptraceomatic-config.h" 1
# 4 "project/ish/kernel/vdso.h" 2

extern const char vdso_data[2 * (1 << 12)] __asm__("vdso_data");
int vdso_symbol(const char *name);
