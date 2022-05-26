# 1 "project/radare2/libr/anal/d/types-arm-ios-64.c"


#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static struct kv kvs[] = {
  {"func.sym.imp.err.ret","void"},
  {"errx","func"},
  {"func.err.noreturn","true"},
  {"func.err.ret","void"},
  {"func._exit.ret","void"},
  {"func.errc.args","1"},
  {"func.__assert_rtn.cc","amd64"},
  {"func._exit.noreturn","true"},
  {"func.sym.imp.err.args","2"},
  {"abort","func"},
  {"func.exit.cc","amd64"},
  {"func.__assert_rtn.ret","void"},
  {"func.__stack_chk_fail.ret","void"},
  {"func.abort.noreturn","true"},
  {"func.exit.args","1"},
  {"func.sym.imp.err.cc","amd64"},
  {"func.errx.ret","void"},
  {"func.err.args","1"},
  {"func.errc.arg.2","const char *,fmt"},
  {"func.__assert_rtn.noreturn","true"},
  {"func.__assert_rtn.args","4"},
  {"func.errc.arg.1","int,code"},
  {"func.exit.noreturn","true"},
  {"func.errc.arg.0","int,eval"},
  {"func.errx.noreturn","true"},
  {"func.abort.cc","amd64"},
  {"__stack_chk_fail","func"},
  {"func.__stack_chk_fail.cc","amd64"},
  {"func.__assert_rtn.arg.0","const char *,assertion"},
  {"exit","func"},
  {"func.__assert_rtn.arg.1","const char *,file"},
  {"func.errc.ret","void"},
  {"errc","func"},
  {"func.__assert_rtn.arg.2","unsigned int,line"},
  {"func.errx.args","1"},
  {"func.sym.imp.err.noreturn","true"},
  {"func.__assert_rtn.arg.3","const char *,function"},
  {"func.abort.ret","void"},
  {"func.__stack_chk_fail.args","0"},
  {"func.err.arg.0","int,eval"},
  {"func.err.arg.1","const char *,fmt"},
  {"func.exit.ret","void"},
  {"func.__stack_chk_fail.noreturn","true"},
  {"func._exit.arg.0","int,status"},
  {"err","func"},
  {"func._exit.cc","amd64"},
  {"func._exit.args","1"},
  {"func.sym.imp.err.arg.1","const char *,msg"},
  {"sym.imp.err","func"},
  {"func.sym.imp.err.arg.0","int,eval"},
  {"__assert_rtn","func"},
  {"_exit","func"},
  {"func.errx.arg.0","int,eval"},
  {"func.exit.arg.0","int,status"},
  {"func.errx.arg.1","const char *,fmt"},
  {"func.errc.noreturn","true"},
  {"func.abort.args","0"},
  {NULL, NULL}
};


typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_types_arm_ios_64_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_types_arm_ios_64_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_types_arm_ios_64(x,y) gperf_types_arm_ios_64_hash(x)
const unsigned int gperf_types_arm_ios_64_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_types_arm_ios_64 = {
  .name = "types-arm-ios-64",
  .get = &gperf_types_arm_ios_64_get,
  .hash = &gperf_types_arm_ios_64_hash,
  .foreach = &gperf_types_arm_ios_64_foreach
};

#if MAIN
int main () {
 const char *s = ((char*(*)(char*))gperf_types_arm_ios_64.get)("foo");
 printf ("%s\n", s);
}
#endif
