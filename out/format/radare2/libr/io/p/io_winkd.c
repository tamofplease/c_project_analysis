# 1 "project/radare2/libr/io/p/io_winkd.c"
# 16 "project/radare2/libr/io/p/io_winkd.c"
#include <r_io.h>
#include <r_lib.h>
#include <r_socket.h>
#include <r_util.h>
#include <transport.h>
#include <winkd.h>

static bool __plugin_open(RIO *io, const char *file, bool many) {
 return (!strncmp (file, "winkd://", 8));
}

static RIODesc *__open(RIO *io, const char *file, int rw, int mode) {
 if (!__plugin_open (io, file, 0)) {
  return NULL;
 }
 if (r_str_startswith (file, "winkd://?")) {
  eprintf ("Usage: winkd://(host:port:key) | (/tmp/windbg.pipe)\n");
  eprintf (" winkd://192.168.1.33:1234:key)  # UDP to host:port:key\n");
  eprintf (" winkd:///tmp # pipe - \\\\.\\pipe\\com_1 /tmp/windbg.pipe\n");
  eprintf (" # key is base36(aes256) in x.x.x.x format\n");
  return NULL;
 }

 io_backend_t *iob = NULL;
 if (strchr (file + 8, ':')) {
  iob = &iob_net;
 } else {
  iob = &iob_pipe;
 }

 if (!iob) {
  eprintf ("Error: Invalid WinDBG path\n");
  return NULL;
 }

 void *io_ctx = iob->open (file + 8);
 if (!io_ctx) {
  eprintf ("Error: Could not open the %s\n", iob->name);
  return NULL;
 }
 eprintf ("Opened %s %s with fd %p\n", iob->name, file + 8, io_ctx);

 io_desc_t *desc = io_desc_new (iob, io_ctx);
 if (!desc) {
  eprintf ("Error: Could not create io_desc_t\n");
  return NULL;
 }

 WindCtx *ctx = winkd_ctx_new (desc);
 if (!ctx) {
  eprintf ("Failed to initialize winkd context\n");
  return NULL;
 }
 return r_io_desc_new (io, &r_io_plugin_winkd, file, rw, mode, ctx);
}

static int __write(RIO *io, RIODesc *fd, const ut8 *buf, int count) {
 if (!fd) {
  return -1;
 }
 if (winkd_get_target (fd->data)) {
  return winkd_write_at_uva (fd->data, buf, io->off, count);
 }
 return winkd_write_at (fd->data, buf, io->off, count);
}

static ut64 __lseek(RIO *io, RIODesc *fd, ut64 offset, int whence) {
 switch (whence) {
 case R_IO_SEEK_SET:
  return io->off = offset;
 case R_IO_SEEK_CUR:
  return io->off + offset;
 case R_IO_SEEK_END:
  return ST64_MAX;
 default:
  return offset;
 }
}

static int __read(RIO *io, RIODesc *fd, ut8 *buf, int count) {
 if (!fd) {
  return -1;
 }

 if (winkd_get_target (fd->data)) {
  return winkd_read_at_uva (fd->data, buf, io->off, count);
 }

 return winkd_read_at (fd->data, buf, io->off, count);
}

static bool __close(RIODesc *fd) {
 winkd_ctx_free ((WindCtx**)&fd->data);
 return true;
}

RIOPlugin r_io_plugin_winkd = {
 .name = "winkd",
 .desc = "Attach to a KD debugger via UDP or socket file",
 .uris = "winkd://",
 .license = "LGPL3",
 .open = __open,
 .close = __close,
 .read = __read,
 .check = __plugin_open,
 .seek = __lseek,
 .write = __write,
 .isdbg = true
};

#ifndef R2_PLUGIN_INCORE
R_API RLibStruct radare_plugin = {
 .type = R_LIB_TYPE_IO,
 .data = &r_io_plugin_winkd,
 .version = R2_VERSION
};
#endif
