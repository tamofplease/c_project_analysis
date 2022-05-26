# 1 "project/radare2/libr/anal/d/types-16.c"


#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static struct kv kvs[] = {
  {"gid_t","type"},
  {"pid_t","type"},
  {"type.size_t.size","16"},
  {"size_t","type"},
  {"type.char *.size","16"},
  {"type.gid_t.uid","16"},
  {"type.pid_t.pid","16"},
  {"uid_t","type"},
  {"type.pid_t","w"},
  {"type.uid_t","w"},
  {"type.uid_t.uid","16"},
  {"type.gid_t","w"},
  {"type.size_t","w"},
  {"type.void *.size","16"},
  {NULL, NULL}
};


typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_types_16_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_types_16_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_types_16(x,y) gperf_types_16_hash(x)
const unsigned int gperf_types_16_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_types_16 = {
  .name = "types-16",
  .get = &gperf_types_16_get,
  .hash = &gperf_types_16_hash,
  .foreach = &gperf_types_16_foreach
};

#if MAIN
int main () {
 const char *s = ((char*(*)(char*))gperf_types_16.get)("foo");
 printf ("%s\n", s);
}
#endif
