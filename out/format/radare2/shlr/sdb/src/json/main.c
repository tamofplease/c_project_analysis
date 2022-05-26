# 1 "project/radare2/shlr/sdb/src/json/main.c"


#include <stdio.h>
#include <stdlib.h>
#include "rangstr.h"
#include "json.h"
#include "../sdb.h"

Rangstr json_find (const char *s, Rangstr *rs);
int test_main () {
 Rangstr rs ;

 rs = json_get ("{\"hello\":\"world\"}", "hello");
printf ("OUT: ");
rangstr_print (&rs);
printf ("\n");

printf ("--\n");
 rs = json_get ("{\"hello\":{\"world\":123}}", "hello.world");
printf ("OUT: ");
rangstr_print (&rs);
printf ("\n");
 return 0;
}

int test_glossary(char *buf) {
 char *path;
{
 path = "glossary.title";
 char *s= api_json_set (buf, path, "patata");
 if (s) {
  printf ("%s\n", s);
  free (s);
 } else printf ("set failed\n");
}
{
 path = "glossary.title";
 char *s= api_json_get (buf, path);
 if (s) {
  printf ("%s\n", s);
  free (s);
 } else printf ("set failed\n");
}
{
 path = "glossary.title";
 char *s= api_json_get (buf, path);
 if (s) {
  printf ("%s\n", s);
  free (s);
 } else printf ("set failed\n");
}
return 0;
}

int main(int argc, char **argv) {
 Rangstr rs;
 char buf[4096];
 int n = fread (buf, 1, sizeof (buf), stdin);
 buf[n] = 0;


 char *path = argv[1];

#if 1
 printf (">>>> %s <<<<\n", sdb_json_unindent (buf));
 printf (">>>> %s <<<<\n", sdb_json_indent (buf, "  "));

 path = "glossary.title";
 char *s = api_json_set (buf, path, "patata");
 if (s) {
  printf ("%s\n", s);
  free (s);
 } else printf ("set failed\n");
#endif



#if 0
 char *a = "{}";
 a = json_seti (a, "id", 123);
 a = json_seti (a, "user.name", "blah");
 printf ("id = %d\n", json_geti ("{'id':123}", "id"));
#endif


 path = argv[1];
 rs = json_get (buf, path);
 printf ("-- output --\n");
 rangstr_print(&rs);
 printf ("\n");
 return 0;
}
