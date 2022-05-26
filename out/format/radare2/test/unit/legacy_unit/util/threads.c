# 1 "project/radare2/test/unit/legacy_unit/util/threads.c"
#include <r_th.h>
#include <r_util.h>

int looper(struct r_th_t *th) {
 int i;
 int *ctr = th->user;
 for (i=0;i<9999;i++) {
  if (th->breaked)
   break;
  (*ctr)++;
  printf ("%d loop %d\r", i, *ctr);
  fflush (stdout);
#if __UNIX__
  sleep (1);
#endif
 }
 return 0;
}

int test1() {
 int ctr = 0;
 struct r_th_t *th;

 th = r_th_new (&looper, &ctr, 0);
 th = r_th_new (&looper, &ctr, 0);


#if __i386__ || __x86_64__
 asm ("int3");
#endif

 while (r_th_wait_async (th)) {
  printf ("\nwaiting...\n");
  fflush (stdout);
  r_sys_usleep (400);

 }
 printf ("\nfinished\n");
#if 0
 r_th_start(th, true);
 sleep(1);
#endif

 r_th_wait (th);
 r_th_free (th);

 printf ("\nresult %d\n", ctr);
 return 0;
}

int main() {
 return test1 ();
}
