# 1 "project/radare2/libr/cons/cutf8.c"



#include <r_cons.h>

#if __UNIX__
#include <stdio.h>
#include <fcntl.h>
#if HAVE_PTY
#include <termios.h>
#endif
#include <errno.h>
#if R_UTF8_DETECT_LOCALE
#include <locale.h>
#endif

#define RD_EOF (-1)
#define RD_EIO (-2)


#define R_UTF8_DETECT_R2ENV 1
#define R_UTF8_DETECT_ENV 1
#define R_UTF8_DETECT_LOCALE 0
#define R_UTF8_DETECT_CURSOR 0

#if R_UTF8_DETECT_CURSOR
static inline int rd(const int fd) {
 ut8 buffer[4];
 ssize_t n;

 for (;;) {
  n = read(fd, buffer, 1);
  if (n > (ssize_t)0) {
   return buffer[0];
  }
  if (n == (ssize_t)-1) {
   return RD_EOF;
  }
  if (n == (ssize_t)0) {
   return RD_EOF;
  }
  if (n != (ssize_t)-1) {
   return RD_EIO;
  }
  if (errno != EINTR && errno != EAGAIN && errno != EWOULDBLOCK) {
   return RD_EIO;
  }
 }
}
#endif



int current_tty(void) {
#if __WINDOWS__
 return 0;
#elif __wasi__ || __EMSCRIPTEN__
 return 0;
#elif __ANDROID__
 return 1;
#else
 int fd;
 const char *dev = ttyname(STDERR_FILENO);
#if 0
 if (!dev)
  dev = ttyname(STDIN_FILENO);
 if (!dev)
  dev = ttyname(STDERR_FILENO);
#endif
 if (!dev) {
  errno = ENOTTY;
  return -1;
 }

 do {
  fd = open (dev, O_RDWR | O_NOCTTY);
 } while (fd == -1 && errno == EINTR);
 if (fd == -1) {
  return -1;
 }
 return fd;
#endif
}

#if R_UTF8_DETECT_CURSOR




static int cursor_position(const int tty, int *const rowptr, int *const colptr) {
 struct termios saved, temporary;
 int ret, res, rows, cols, saved_errno;


 if (tty == -1)
  return ENOTTY;

 saved_errno = errno;


 res = tcgetattr (tty, &saved);
 if (res == -1) {
  ret = errno;
  errno = saved_errno;
  return ret;
 }


 res = tcgetattr (tty, &temporary);
 if (res == -1) {
  ret = errno;
  errno = saved_errno;
  return ret;
 }


 temporary.c_lflag &= ~ICANON;
 temporary.c_lflag &= ~ECHO;
 temporary.c_cflag &= ~CREAD;





 do {

  res = tcsetattr(tty, TCSANOW, &temporary);
  if (res == -1) {
   ret = errno;
   break;
  }


  ret = write (tty, "\033[6n", 4);
  if (ret)
   break;


  ret = EIO;







  for (;;) {
   res = rd(tty);
   if (res == 27 || res < 1)
    break;

  }


  res = rd(tty);
  if (res != '[')
   break;


  rows = 0;
  res = rd (tty);
  while (IS_DIGIT (res)) {
   rows = 10 * rows + res - '0';
   res = rd(tty);
  }

  if (res != ';') {
   break;
  }


  cols = 0;
  res = rd (tty);
  if (res == -1) {
   break;
  }
  while (IS_DIGIT(res)) {
   cols = 10 * cols + res - '0';
   res = rd(tty);
  }

  if (res != 'R')
   break;


  if (rowptr) {
   *rowptr = rows;
  }
  if (colptr) {
   *colptr = cols;
  }
  ret = 0;

 } while (0);


 res = tcsetattr (tty, TCSANOW, &saved);
 if (res == -1 && !ret) {
  ret = errno;
 }


 return ret;
}
#endif

R_API bool r_cons_is_utf8(void) {
 bool ret = false;
#if R_UTF8_DETECT_R2ENV
 char *e = r_sys_getenv ("R2_UTF8");
 if (e) {
  bool is_set = *e;
  if (is_set) {
   ret = r_str_is_true (e);
  }
  free (e);
  if (is_set) {
   return ret;
  }
 }
#endif
#if R_UTF8_DETECT_ENV
 const char *keys[] = { "LC_ALL", "LC_CTYPE", "LANG", NULL };
 const char **key = keys;
 for (; *key; key++) {
  char *val = r_sys_getenv (*key);
  if (val) {
   r_str_case (val, false);
   ret = strstr (val, "utf-8") || strstr (val, "utf8");
   free (val);
   break;
  }
 }
#endif
#if R_UTF8_DETECT_LOCALE
 const char *ctype = setlocale (LC_CTYPE, NULL);
 if ((ctype != NULL) && (ctype = strchr (ctype, '.')) && ctype++ &&
  (!r_str_casecmp (ctype, "UTF-8") || !r_str_casecmp (ctype, "UTF8"))) {
  return true;
 }
#endif
#if R_UTF8_DETECT_CURSOR
 int row = 0, col = 0;
 int row2 = 0, col2 = 0;
 int fd = current_tty ();
 if (fd == -1) {
  return false;
 }
 if (cursor_position (fd, &row, &col)) {
  close (fd);
  return false;
 }
 write (1, "\xc3\x89\xc3\xa9", 4);
 if (cursor_position (fd, &row2, &col2)) {
  close (fd);
  return false;
 }
 close (fd);
 write (1, "\r    \r", 6);
 return ((col2 - col) == 2);
#endif
 return ret;
}
#else
R_API bool r_cons_is_utf8(void) {
#if __WINDOWS__
 return GetConsoleOutputCP () == CP_UTF8;
#else
 return true;
#endif
}
#endif
