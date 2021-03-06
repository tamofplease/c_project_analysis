# 1 "project/radare2/libr/io/p/io_http.c"


#include "r_io.h"
#include "r_lib.h"
#include <stdio.h>
#include <stdlib.h>
#include "../io_memory.h"

static bool __check(RIO *io, const char *pathname, bool many) {
 return (!strncmp (pathname, "http://", 7));
}

static RIODesc *__open(RIO *io, const char *pathname, int rw, int mode) {
 if (__check (io, pathname, 0)) {
  int rlen, code;
  RIOMalloc *mal = R_NEW0 (RIOMalloc);
  if (!mal) {
   return NULL;
  }
  mal->offset = 0;
  mal->buf = (ut8*)r_socket_http_get (pathname, &code, &rlen);
  if (mal->buf && rlen > 0) {
   mal->size = rlen;
   return r_io_desc_new (io, &r_io_plugin_malloc, pathname, R_PERM_RW | rw, mode, mal);
  }
  eprintf ("No HTTP response\n");
  free (mal);
 }
 return NULL;
}

RIOPlugin r_io_plugin_http = {
 .name = "http",
 .desc = "Make http get requests",
 .uris = "http://",
 .license = "LGPL3",
 .open = __open,
 .close = io_memory_close,
 .read = io_memory_read,
 .check = __check,
 .seek = io_memory_lseek,
 .write = io_memory_write,
};

#ifndef R2_PLUGIN_INCORE
R_API RLibStruct radare_plugin = {
 .type = R_LIB_TYPE_IO,
 .data = &r_io_plugin_http,
 .version = R2_VERSION
};
#endif
