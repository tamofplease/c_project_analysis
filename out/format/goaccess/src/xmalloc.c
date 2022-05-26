# 1 "project/goaccess/src/xmalloc.c"
# 31 "project/goaccess/src/xmalloc.c"
#include <stdio.h>
#if !defined __SUNPRO_C
#include <stdint.h>
#endif
#include <stdlib.h>
#include <string.h>

#include "error.h"
#include "xmalloc.h"


void *
xmalloc (size_t size) {
  void *ptr;

  if ((ptr = malloc (size)) == NULL)
    FATAL ("Unable to allocate memory - failed.");

  return (ptr);
}

char *
xstrdup (const char *s) {
  char *ptr;
  size_t len;

  len = strlen (s) + 1;
  ptr = xmalloc (len);

  strncpy (ptr, s, len);
  return (ptr);
}


void *
xcalloc (size_t nmemb, size_t size) {
  void *ptr;

  if ((ptr = calloc (nmemb, size)) == NULL)
    FATAL ("Unable to calloc memory - failed.");

  return (ptr);
}


void *
xrealloc (void *oldptr, size_t size) {
  void *newptr;

  if ((newptr = realloc (oldptr, size)) == NULL)
    FATAL ("Unable to reallocate memory - failed");

  return (newptr);
}
