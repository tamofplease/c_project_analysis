# 1 "project/radare2/libr/cons/cpipe.c"


#include <r_cons.h>
#include <limits.h>



static int backup_fd = -1;
static int backup_fdn = 1;

#ifndef O_BINARY
#define O_BINARY 0
#endif

static bool __dupDescriptor(int fd, int fdn) {
#if __wasi__
 return false;
#elif __WINDOWS__
 backup_fd = 2002 - (fd - 2);
 return _dup2 (fdn, backup_fd) != -1;
#else
 backup_fd = sysconf (_SC_OPEN_MAX) - (fd - 2);
 if (backup_fd < 2) {
  backup_fd = 2002 - (fd - 2);
 }
 return dup2 (fdn, backup_fd) != -1;
#endif
}

R_API int r_cons_pipe_open(const char *file, int fdn, int append) {
#if __wasi__
 return -1;
#else
 if (fdn < 1) {
  return -1;
 }
 char *targetFile = (!strncmp (file, "~/", 2) || !strncmp (file, "~\\", 2))
  ? r_str_home (file + 2): strdup (file);
 const int fd_flags = O_BINARY | O_RDWR | O_CREAT | (append? O_APPEND: O_TRUNC);
 int fd = r_sandbox_open (targetFile, fd_flags, 0644);
 if (fd == -1) {
  eprintf ("r_cons_pipe_open: Cannot open file '%s'\n", file);
  free (targetFile);
  return -1;
 }
 if (backup_fd != -1) {
  close (backup_fd);

 }
 backup_fdn = fdn;
 if (!__dupDescriptor (fd, fdn)) {
  eprintf ("Cannot dup stdout to %d\n", fdn);
  free (targetFile);
  return -1;
 }
 close (fdn);
 dup2 (fd, fdn);
 free (targetFile);
 return fd;
#endif
}

R_API void r_cons_pipe_close(int fd) {
#if !__wasi__
 if (fd != -1) {
  close (fd);
  if (backup_fd != -1) {
   dup2 (backup_fd, backup_fdn);
   close (backup_fd);
   backup_fd = -1;
  }
 }
#endif
}
