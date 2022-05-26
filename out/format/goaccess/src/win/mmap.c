# 1 "project/goaccess/src/win/mmap.c"
#include <stdlib.h>
#include <windows.h>
#ifdef _WIN32
#include <io.h>
#endif
#include <errno.h>
#include "mman.h"

static const char id[] = "$Id: tpl.c 107 2007-04-20 17:11:29Z thanson $";
# 25 "project/goaccess/src/win/mmap.c"
void *
mmap (void *addr, unsigned int len, int prot, int flags, int fd, unsigned int offset) {
  DWORD wprot;
  DWORD waccess;
  HANDLE h;
  void *region;


  switch (prot) {
  case PROT_READ:
    wprot = PAGE_READONLY;
    break;
  case PROT_EXEC:
    wprot = PAGE_EXECUTE_READ;
    break;
  case PROT_READ | PROT_EXEC:
    wprot = PAGE_EXECUTE_READ;
    break;
  case PROT_WRITE:
    wprot = PAGE_READWRITE;
    break;
  case PROT_READ | PROT_WRITE:
    wprot = PAGE_READWRITE;
    break;
  case PROT_READ | PROT_WRITE | PROT_EXEC:
    wprot = PAGE_EXECUTE_READWRITE;
    break;
  case PROT_WRITE | PROT_EXEC:
    wprot = PAGE_EXECUTE_READWRITE;
    break;
  }


  h = CreateFileMapping ((HANDLE) _get_osfhandle (fd), 0, wprot, 0, len, 0);
  if (h == NULL) {
    DWORD error = GetLastError ();


    switch (error) {
    case ERROR_ACCESS_DENIED:
    case ERROR_INVALID_ACCESS:
      errno = EACCES;
      break;
    case ERROR_OUTOFMEMORY:
    case ERROR_NOT_ENOUGH_MEMORY:
      errno = ENOMEM;
      break;
    default:
      errno = EINVAL;
      break;
    }
    return MAP_FAILED;
  }



  switch (wprot) {
  case PAGE_READONLY:
    waccess = FILE_MAP_READ;
    break;
  case PAGE_READWRITE:
    waccess = FILE_MAP_WRITE;
    break;
  }


  region = MapViewOfFile (h, waccess, 0, 0, 0);
  if (region == NULL) {
    DWORD error = GetLastError ();


    switch (error) {
    case ERROR_ACCESS_DENIED:
    case ERROR_INVALID_ACCESS:
      errno = EACCES;
      break;
    case ERROR_INVALID_HANDLE:
      errno = EBADF;
      break;
    default:
      errno = EINVAL;
      break;
    }
    CloseHandle (h);
    return MAP_FAILED;
  }
  CloseHandle (h);


  return region;
}
# 127 "project/goaccess/src/win/mmap.c"
int
munmap (void *addr, int len) {
  if (UnmapViewOfFile (addr)) {
    return 0;
  } else {
    errno = EINVAL;
    return -1;
  }
}
# 148 "project/goaccess/src/win/mmap.c"
int
msync (char *addr, int len, int flags) {
  if (FlushViewOfFile (addr, len) == 0) {
    DWORD error = GetLastError ();


    switch (error) {
    case ERROR_INVALID_PARAMETER:
      errno = EINVAL;
      break;
    case ERROR_WRITE_FAULT:
      errno = EIO;
      break;
    default:
      errno = EINVAL;
      break;
    }
    return -1;
  }


  return 0;
}
