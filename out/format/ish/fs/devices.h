# 1 "project/ish/fs/devices.h"
#ifndef FS_DEVICES_H
#define FS_DEVICES_H 




#define MEM_MAJOR 1

#define DEV_NULL_MINOR 3

#define DEV_ZERO_MINOR 5

#define DEV_FULL_MINOR 7

#define DEV_RANDOM_MINOR 8

#define DEV_URANDOM_MINOR 9



#define TTY_CONSOLE_MAJOR 4


#define TTY_ALTERNATE_MAJOR 5

#define DEV_TTY_MINOR 0

#define DEV_CONSOLE_MINOR 1

#define DEV_PTMX_MINOR 2


#define TTY_PSEUDO_MASTER_MAJOR 128
#define TTY_PSEUDO_SLAVE_MAJOR 136


#define DYN_DEV_MAJOR 240


#define DEV_CLIPBOARD_MINOR 0

#define DEV_LOCATION_MINOR 1

#endif
