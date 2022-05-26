# 1 "project/radare2/libr/anal/d/cc-m68k-32.c"


#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static struct kv kvs[] = {
  {"m68k","cc"},
  {"cc.m68k.arg0","stack_rev"},
  {"default.cc","m68k"},
  {"cc.m68k.ret","d0"},
  {NULL, NULL}
};


typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_cc_m68k_32_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_cc_m68k_32_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_cc_m68k_32(x,y) gperf_cc_m68k_32_hash(x)
const unsigned int gperf_cc_m68k_32_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_cc_m68k_32 = {
  .name = "cc-m68k-32",
  .get = &gperf_cc_m68k_32_get,
  .hash = &gperf_cc_m68k_32_hash,
  .foreach = &gperf_cc_m68k_32_foreach
};

#if MAIN
int main () {
 const char *s = ((char*(*)(char*))gperf_cc_m68k_32.get)("foo");
 printf ("%s\n", s);
}
#endif
