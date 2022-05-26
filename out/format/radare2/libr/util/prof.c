# 1 "project/radare2/libr/util/prof.c"


#include "r_util.h"

typedef struct timeval tv;



static int timeval_subtract(tv *result, tv *end, tv *when) {

 if (end->tv_usec < when->tv_usec) {
  int nsec = (when->tv_usec - end->tv_usec) / 1000000 + 1;
  when->tv_usec -= 1000000 * nsec;
  when->tv_sec += nsec;
 }
 if (end->tv_usec - when->tv_usec > 1000000) {
  int nsec = (end->tv_usec - when->tv_usec) / 1000000;
  when->tv_usec += 1000000 * nsec;
  when->tv_sec -= nsec;
 }


 result->tv_sec = end->tv_sec - when->tv_sec;
 result->tv_usec = end->tv_usec - when->tv_usec;


 return end->tv_sec < when->tv_sec;
}

R_API void r_prof_start(struct r_prof_t *p) {
 tv *when = &p->when;
 p->result = 0.0;
 gettimeofday(when, NULL);
}

R_API double r_prof_end(struct r_prof_t *p) {
 tv end, diff, *when = &p->when;
 int sign;
 gettimeofday (&end, NULL);
 sign = timeval_subtract (&diff, when, &end);
 p->result = R_ABS (((double)(diff.tv_sec)
  + ((double)diff.tv_usec / 1000000.)));
 return R_ABS (sign);
}
