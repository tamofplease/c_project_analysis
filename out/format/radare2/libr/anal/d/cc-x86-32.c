# 1 "project/radare2/libr/anal/d/cc-x86-32.c"


#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static struct kv kvs[] = {
  {"pascal","cc"},
  {"cc.fastcall.argn","stack"},
  {"cc.watcom.argn","stack"},
  {"cc.fastcall.arg1","edx"},
  {"default.cc","cdecl"},
  {"cc.fastcall.arg0","ecx"},
  {"cc.watcom.arg2","ebx"},
  {"cc.cdecl.argn","stack"},
  {"cc.watcom.arg3","ecx"},
  {"cc.watcom.arg0","eax"},
  {"cc.watcom.arg1","edx"},
  {"optlink","cc"},
  {"cc.cdecl-fastcall-ms.argn","stack"},
  {"cc.watcom.ret","eax"},
  {"cc.optlink.argn","stack"},
  {"stdcall","cc"},
  {"cc.borland.arg1","edx"},
  {"cc.borland.ret","eax"},
  {"cc.borland.arg0","eax"},
  {"cc.borland.arg2","ecx"},
  {"cdecl","cc"},
  {"cc.pascal.ret","eax"},
  {"cc.fastcall.ret","eax"},
  {"cc.cdecl-fastcall-ms.arg0","ecx"},
  {"cc.optlink.arg2","ecx"},
  {"cc.cdecl.ret","eax"},
  {"cc.optlink.arg0","eax"},
  {"cc.borland.argn","stack_rev"},
  {"cc.optlink.arg1","edx"},
  {"fastcall","cc"},
  {"cdecl-fastcall-ms","cc"},
  {"cc.stdcall.ret","eax"},
  {"cc.optlink.ret","eax"},
  {"cc.pascal.argn","stack_rev"},
  {"borland","cc"},
  {"cc.stdcall.argn","stack"},
  {"watcom","cc"},
  {"cc.cdecl-fastcall-ms.ret","eax"},
  {NULL, NULL}
};


typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_cc_x86_32_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_cc_x86_32_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_cc_x86_32(x,y) gperf_cc_x86_32_hash(x)
const unsigned int gperf_cc_x86_32_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_cc_x86_32 = {
  .name = "cc-x86-32",
  .get = &gperf_cc_x86_32_get,
  .hash = &gperf_cc_x86_32_hash,
  .foreach = &gperf_cc_x86_32_foreach
};

#if MAIN
int main () {
 const char *s = ((char*(*)(char*))gperf_cc_x86_32.get)("foo");
 printf ("%s\n", s);
}
#endif
