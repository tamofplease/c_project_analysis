# 0 "project/goaccess/src/win/mman.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/goaccess/src/win/mman.h"
# 40 "project/goaccess/src/win/mman.h"
void *mmap (void *addr, unsigned int len, int prot, int flags, int fd, unsigned int offset);




int munmap (void *addr, int len);




int msync (char *addr, int len, int flags);
