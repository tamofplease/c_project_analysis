# 1 "project/radare2/libr/anal/d/cc-sparc-32.c"


#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static struct kv kvs[] = {
  {"cc.sparc.argn","stack"},
  {"cc.sparc.arg4","i4"},
  {"cc.sparc.arg5","i5"},
  {"cc.sparc.ret","o0"},
  {"cc.sparc.arg2","i2"},
  {"default.cc","sparc"},
  {"sparc","cc"},
  {"cc.sparc.arg3","i3"},
  {"cc.sparc.arg0","i0"},
  {"cc.sparc.arg1","i1"},
  {NULL, NULL}
};


typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_cc_sparc_32_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_cc_sparc_32_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_cc_sparc_32(x,y) gperf_cc_sparc_32_hash(x)
const unsigned int gperf_cc_sparc_32_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_cc_sparc_32 = {
  .name = "cc-sparc-32",
  .get = &gperf_cc_sparc_32_get,
  .hash = &gperf_cc_sparc_32_hash,
  .foreach = &gperf_cc_sparc_32_foreach
};

#if MAIN
int main () {
 const char *s = ((char*(*)(char*))gperf_cc_sparc_32.get)("foo");
 printf ("%s\n", s);
}
#endif
