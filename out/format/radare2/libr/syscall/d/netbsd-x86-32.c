# 1 "project/radare2/libr/syscall/d/netbsd-x86-32.c"


#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static struct kv kvs[] = {
  {"write","0x80,4,3,"},
  {"0x80.1","exit"},
  {"0x80.0","syscall"},
  {"syscall","0x80,0,4,"},
  {"wait4","0x80,7,3,"},
  {"0x80.7","wait4"},
  {"0x80.6","close"},
  {"_","0x80"},
  {"0x80.5","open"},
  {"link","0x80,9,2,"},
  {"0x80.4","write"},
  {"execve.0x80","//"},
  {"compat_43_ocreat","0x80,8,2,"},
  {"read","0x80,3,3,"},
  {"0x80.10","unlink"},
  {"exit","0x80,1,1,"},
  {"unlink","0x80,10,1,"},
  {"0x80.9","link"},
  {"close","0x80,6,1,"},
  {"0x80.8","compat_43_ocreat"},
  {"open","0x80,5,3,"},
  {"0x80.3","read"},
  {"0x80.2","fork"},
  {"fork","0x80,2,0,"},
  {NULL, NULL}
};


typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_netbsd_x86_32_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_netbsd_x86_32_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_netbsd_x86_32(x,y) gperf_netbsd_x86_32_hash(x)
const unsigned int gperf_netbsd_x86_32_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_netbsd_x86_32 = {
  .name = "netbsd-x86-32",
  .get = &gperf_netbsd_x86_32_get,
  .hash = &gperf_netbsd_x86_32_hash,
  .foreach = &gperf_netbsd_x86_32_foreach
};

#if MAIN
int main () {
 const char *s = ((char*(*)(char*))gperf_netbsd_x86_32.get)("foo");
 printf ("%s\n", s);
}
#endif
