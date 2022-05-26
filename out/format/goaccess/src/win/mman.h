# 1 "project/goaccess/src/win/mman.h"
#ifndef _MMAN_H_
#define _MMAN_H_ 


#define PROT_NONE 0x00
#define PROT_READ 0x01
#define PROT_WRITE 0x02
#define PROT_EXEC 0x04


#define MAP_SHARED 0x0001
#define MAP_PRIVATE 0x0002
#define MAP_COPY MAP_PRIVATE
#define MAP_FIXED 0x0010
#define MAP_RENAME 0x0020
#define MAP_NORESERVE 0x0040
#define MAP_INHERIT 0x0080
#define MAP_NOEXTEND 0x0100
#define MAP_HASSEMAPHORE 0x0200
#define MAP_STACK 0x0400


#define MAP_FAILED ((void *)-1)


#define MS_ASYNC 0x01
#define MS_SYNC 0x02
#define MS_INVALIDATE 0x04


#ifndef S_IWGRP
#define S_IWGRP 0
#define S_IRGRP 0
#define S_IROTH 0
#endif




void *mmap (void *addr, unsigned int len, int prot, int flags, int fd, unsigned int offset);




int munmap (void *addr, int len);




int msync (char *addr, int len, int flags);

#endif
