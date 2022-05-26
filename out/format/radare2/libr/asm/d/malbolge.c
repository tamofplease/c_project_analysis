# 1 "project/radare2/libr/asm/d/malbolge.c"


#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static struct kv kvs[] = {
  {"in","inputs a character, as an ascii code"},
  {"jmp","jump"},
  {"rotr","rotates the value by one ternary digit"},
  {"out","prints the value, as an ascii character, to the screen"},
  {"nop","do nothing"},
  {"mov","moves data from src to dst"},
  {"crz","crazy operation"},
  {"end","end"},
  {NULL, NULL}
};


typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_malbolge_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_malbolge_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_malbolge(x,y) gperf_malbolge_hash(x)
const unsigned int gperf_malbolge_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_malbolge = {
  .name = "malbolge",
  .get = &gperf_malbolge_get,
  .hash = &gperf_malbolge_hash,
  .foreach = &gperf_malbolge_foreach
};

#if MAIN
int main () {
 const char *s = ((char*(*)(char*))gperf_malbolge.get)("foo");
 printf ("%s\n", s);
}
#endif
