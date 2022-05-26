# 1 "project/nnn/src/dbg.h"
# 31 "project/nnn/src/dbg.h"
       

#ifdef DEBUG
static int DEBUG_FD;

static int xprintf(int fd, const char *fmt, ...)
{
 char buf[BUFSIZ];
 int r;
 va_list ap;

 va_start(ap, fmt);
 r = vsnprintf(buf, sizeof(buf), fmt, ap);
 if (r > 0 && (unsigned int)r < sizeof(buf))
  r = write(fd, buf, r);
 va_end(ap);
 return r;
}

static int enabledbg(void)
{
 FILE *fp = fopen("/tmp/nnndbg", "w");

 if (!fp) {
  perror("dbg(1)");

  fp = fopen("./nnndbg", "w");
  if (!fp) {
   perror("dbg(2)");
   return -1;
  }
 }

 DEBUG_FD = dup(fileno(fp));
 fclose(fp);
 if (DEBUG_FD == -1) {
  perror("dbg(3)");
  return -1;
 }

 return 0;
}

static void disabledbg(void)
{
 close(DEBUG_FD);
}

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)

#define DPRINTF_D(x) xprintf(DEBUG_FD, "ln " TOSTRING(__LINE__) ": " #x "=%d\n", x)
#define DPRINTF_U(x) xprintf(DEBUG_FD, "ln " TOSTRING(__LINE__) ": " #x "=%u\n", x)
#define DPRINTF_S(x) xprintf(DEBUG_FD, "ln " TOSTRING(__LINE__) ": " #x "=%s\n", x)
#define DPRINTF_P(x) xprintf(DEBUG_FD, "ln " TOSTRING(__LINE__) ": " #x "=%p\n", x)
#else
#define DPRINTF_D(x) 
#define DPRINTF_U(x) 
#define DPRINTF_S(x) 
#define DPRINTF_P(x) 
#endif
