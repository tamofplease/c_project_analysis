# 1 "project/radare2/libr/asm/p/cs_version.h"
#ifndef CS_VERSION_H
#define CS_VERSION_H 

#include <capstone.h>

#if CS_API_MAJOR == 5
#define CAPSTONE_VERSION_STRING "v5"
#elif CS_API_MAJOR == 4
#define CAPSTONE_VERSION_STRING "v4"
#elif CS_API_MAJOR == 3
#define CAPSTONE_VERSION_STRING "v3"
#else
#define CAPSTONE_VERSION_STRING ""
#endif

#endif
