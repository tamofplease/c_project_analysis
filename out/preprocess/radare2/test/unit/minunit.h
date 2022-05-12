# 0 "project/radare2/test/unit/minunit.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/test/unit/minunit.h"
# 27 "project/radare2/test/unit/minunit.h"
void snprint_mem(char *out, size_t out_size, const ut8 *buf, size_t len) {
 size_t i;
 *out = '\0';
 for (i = 0; i < len; i++) {
  size_t out_len;
  if (i > 0) {
   out_len = strlen (out);
   snprintf (out + out_len, out_size - out_len, " ");
  }
  out_len = strlen (out);
  snprintf (out + out_len, out_size - out_len, "%02x", buf[i]);
 }
}
# 199 "project/radare2/test/unit/minunit.h"
int tests_run = 0;
int tests_passed = 0;
int mu_test_status = 0;
