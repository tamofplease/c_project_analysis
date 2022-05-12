# 0 "project/radare2/test/unit/test_sdb.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/test/unit/test_sdb.h"



static void diff_cb(const SdbDiff *diff, void *user) {
 char buf[2048];
 if (sdb_diff_format (buf, sizeof (buf), diff) < 0) {
  return;
 }
 printf ("%s\n", buf);
}

static inline void print_sdb(Sdb *sdb) {
 Sdb *e = sdb_new0 ();
 sdb_diff (e, sdb, diff_cb, NULL);
 sdb_free (e);
}
