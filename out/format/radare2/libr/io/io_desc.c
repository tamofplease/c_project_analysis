# 1 "project/radare2/libr/io/io_desc.c"


#include <r_io.h>
#include <sdb.h>
#include <string.h>


R_API RIODesc* r_io_desc_new(RIO* io, RIOPlugin* plugin, const char* uri, int perm, int mode, void* data) {
 r_return_val_if_fail (io && plugin && uri, NULL);
 ut32 fd32 = 0;
 if (io->files) {
  if (!r_id_pool_grab_id (io->files->pool, &fd32)) {
   return NULL;
  }
 }
 RIODesc* desc = R_NEW0 (RIODesc);
 if (desc) {
  desc->fd = fd32;
  desc->io = io;
  desc->plugin = plugin;
  desc->data = data;
  desc->perm = perm;

  desc->uri = strdup (uri);
 }
 return desc;
}

R_API void r_io_desc_free(RIODesc* desc) {
 if (desc) {
  free (desc->uri);
  free (desc->referer);
  free (desc->name);
  r_io_desc_cache_fini (desc);
  if (desc->io && desc->io->files) {
   r_id_storage_delete (desc->io->files, desc->fd);
  }

  free (desc);
 }
}

R_API bool r_io_desc_add(RIO* io, RIODesc* desc) {
 r_return_val_if_fail (io && desc && desc->io, false);
 if (!r_id_storage_set (io->files, desc, desc->fd)) {

  eprintf ("You are using this API incorrectly\n");
  eprintf ("fd %d was probably not generated by this RIO-instance\n", desc->fd);
  r_sys_backtrace ();
  return false;
 }
 return true;
}


R_API bool r_io_desc_del(RIO* io, int fd) {
 r_return_val_if_fail (io && io->files, false);
 RIODesc* desc = r_id_storage_get (io->files, fd);
 if (desc == io->desc) {
  io->desc = NULL;
 }

 r_io_map_del_for_fd (io, desc->fd);
 r_io_desc_free (desc);
 return true;
}

R_API RIODesc* r_io_desc_get(RIO* io, int fd) {
 r_return_val_if_fail (io && io->files, NULL);
 return (RIODesc*) r_id_storage_get (io->files, fd);
}

R_API RIODesc *r_io_desc_get_byuri(RIO *io, const char *uri) {
 r_return_val_if_fail (io && io->files, NULL);
 RIODesc *d = r_io_desc_get_lowest (io);
 while (d) {
  if (!strcmp (d->uri, uri)) {
   return d;
  }
  d = r_io_desc_get_next (io, d);
 }
 return NULL;
}

R_API RIODesc *r_io_desc_get_next(RIO *io, RIODesc *desc) {
 r_return_val_if_fail (desc && io && io->files, NULL);
 const int next_fd = r_io_fd_get_next (io, desc->fd);
 if (next_fd == -1) {
  return NULL;
 }
 return (RIODesc*) r_id_storage_get (io->files, next_fd);
}

R_API RIODesc *r_io_desc_get_prev(RIO *io, RIODesc *desc) {
 r_return_val_if_fail (desc && io && io->files, NULL);
 const int prev_fd = r_io_fd_get_prev (io, desc->fd);
 if (prev_fd == -1) {
  return NULL;
 }
 return (RIODesc*) r_id_storage_get (io->files, prev_fd);
}

R_API RIODesc *r_io_desc_get_highest(RIO *io) {
 int fd = r_io_fd_get_highest (io);
 if (fd == -1) {
  return NULL;
 }
 return r_io_desc_get (io, fd);
}

R_API RIODesc *r_io_desc_get_lowest(RIO *io) {
 int fd = r_io_fd_get_lowest (io);
 if (fd == -1) {
  return NULL;
 }
 return r_io_desc_get (io, fd);
}

R_API RIODesc *r_io_desc_open(RIO *io, const char *uri, int perm, int mode) {
 r_return_val_if_fail (io && uri, NULL);
 RIOPlugin *plugin = r_io_plugin_resolve (io, uri, 0);
 if (!plugin || !plugin->open) {
  return NULL;
 }
 RIODesc *desc = plugin->open (io, uri, perm, mode);
 if (!desc) {
  return NULL;
 }

 if (!desc->name) {
  desc->name = strdup (uri);
 }
 if (!desc->uri) {
  desc->uri = strdup (uri);
 }
 if (!desc->plugin) {
  desc->plugin = plugin;
 }
 if (!r_io_desc_add (io, desc)) {
  r_io_desc_free (desc);
  return NULL;
 }
 return desc;
}

R_API RIODesc *r_io_desc_open_plugin(RIO *io, RIOPlugin *plugin, const char *uri, int perm, int mode) {
 r_return_val_if_fail (io && io->files && uri && plugin, NULL);
 if (!plugin->open || !plugin->check || !plugin->check (io, uri, false)) {
  return NULL;
 }
 RIODesc *desc = plugin->open (io, uri, perm, mode);
 if (!desc) {
  return NULL;
 }

 if (!desc->plugin) {
  desc->plugin = plugin;
 }
 if (!desc->uri) {
  desc->uri = strdup (uri);
 }
 if (!desc->name) {
  desc->name = strdup (uri);
 }
 if (!r_io_desc_add (io, desc)) {
  r_io_desc_free (desc);
  return NULL;
 }
 return desc;
}


R_API bool r_io_desc_close(RIODesc *desc) {
 if (!desc || !desc->io || !desc->plugin) {
  return false;
 }
 RIO *io = desc->io;
 if (desc->plugin->close && !desc->plugin->close (desc)) {
  return false;
 }

 r_io_desc_del (io, desc->fd);
 return true;
}


R_API int r_io_desc_write(RIODesc *desc, const ut8* buf, int len) {
 r_return_val_if_fail (desc && buf, -1);
 if (len < 0) {
  return -1;
 }

 if (desc->io && (desc->io->p_cache & 2)) {
  return r_io_desc_cache_write (desc,
    r_io_desc_seek (desc, 0LL, R_IO_SEEK_CUR), buf, len);
 }
 return r_io_plugin_write (desc, buf, len);
}


R_API int r_io_desc_read(RIODesc *desc, ut8 *buf, int len) {
 r_return_val_if_fail (desc && buf, -1);

 if (!(desc->perm & R_PERM_R)) {
  return -1;
 }
 ut64 seek = r_io_desc_seek (desc, 0LL, R_IO_SEEK_CUR);
 if (desc->io->cachemode) {
  if (seek != UT64_MAX && r_io_cache_at (desc->io, seek)) {
   return r_io_cache_read (desc->io, seek, buf, len);
  }
 }
 int ret = r_io_plugin_read (desc, buf, len);
 if (ret > 0 && desc->io->cachemode) {
  r_io_cache_write (desc->io, seek, buf, len);
 } else if ((ret > 0) && desc->io && (desc->io->p_cache & 1)) {
  ret = r_io_desc_cache_read (desc, seek, buf, ret);
 }
 return ret;
}

R_API ut64 r_io_desc_seek(RIODesc* desc, ut64 offset, int whence) {
 if (!desc || !desc->plugin || !desc->plugin->seek) {
  return (ut64) -1;
 }
 return desc->plugin->seek (desc->io, desc, offset, whence);
}

R_API ut64 r_io_desc_size(RIODesc* desc) {
 if (!desc || !desc->plugin || !desc->plugin->seek) {
  return 0LL;
 }
 ut64 off = r_io_desc_seek (desc, 0LL, R_IO_SEEK_CUR);
 ut64 ret = r_io_desc_seek (desc, 0LL, R_IO_SEEK_END);

 r_io_desc_seek (desc, off, R_IO_SEEK_SET);
 return ret;
}

R_API bool r_io_desc_resize(RIODesc *desc, ut64 newsize) {
 if (desc && desc->plugin && desc->plugin->resize) {
  bool ret = desc->plugin->resize (desc->io, desc, newsize);
  if (desc->io && desc->io->p_cache) {
   r_io_desc_cache_cleanup (desc);
  }
  return ret;
 }
 return false;
}

R_API bool r_io_desc_is_blockdevice(RIODesc *desc) {
 if (!desc || !desc->plugin || !desc->plugin->is_blockdevice) {
  return false;
 }
 return desc->plugin->is_blockdevice (desc);
}

R_API bool r_io_desc_is_chardevice(RIODesc *desc) {
 if (!desc || !desc->plugin || !desc->plugin->is_chardevice) {
  return false;
 }
 return desc->plugin->is_chardevice (desc);
}

R_API bool r_io_desc_exchange(RIO* io, int fd, int fdx) {
 RIODesc* desc, * descx;
 if (!(desc = r_io_desc_get (io, fd)) || !(descx = r_io_desc_get (io, fdx))) {
  return false;
 }
 desc->fd = fdx;
 descx->fd = fd;
 r_id_storage_set (io->files, desc, fdx);
 r_id_storage_set (io->files, descx, fd);
 if (io->p_cache) {
  HtUP* cache = desc->cache;
  desc->cache = descx->cache;
  descx->cache = cache;
  r_io_desc_cache_cleanup (desc);
  r_io_desc_cache_cleanup (descx);
 }
 ut32 map_id;
 if (r_id_storage_get_lowest (io->maps, &map_id)) {
  do {
   RIOMap *map = r_id_storage_get (io->maps, map_id);
   if (map->fd == fdx) {
    map->perm &= (desc->perm | R_PERM_X);
   } else if (map->fd == fd) {
    map->perm &= (descx->perm | R_PERM_X);
   }
  } while (r_id_storage_get_next (io->maps, &map_id));
 }
 return true;
}

R_API bool r_io_desc_is_dbg(RIODesc *desc) {
 if (desc && desc->plugin) {
  return desc->plugin->isdbg;
 }
 return false;
}

R_API int r_io_desc_get_pid(RIODesc *desc) {

 if (!desc) {
  return -3;
 }
 if (!desc->plugin) {
  return -4;
 }
 if (!desc->plugin->isdbg) {
  return -5;
 }
 if (!desc->plugin->getpid) {
  return -6;
 }
 return desc->plugin->getpid (desc);
}

R_API int r_io_desc_get_tid(RIODesc *desc) {

 if (!desc) {
  return -3;
 }
 if (!desc->plugin) {
  return -4;
 }
 if (!desc->plugin->isdbg) {
  return -5;
 }
 if (!desc->plugin->gettid) {
  return -6;
 }
 return desc->plugin->gettid (desc);
}

R_API bool r_io_desc_get_base(RIODesc *desc, ut64 *base) {
 if (!base || !desc || !desc->plugin || !desc->plugin->isdbg || !desc->plugin->getbase) {
  return false;
 }
 return desc->plugin->getbase (desc, base);
}

R_API int r_io_desc_read_at(RIODesc *desc, ut64 addr, ut8 *buf, int len) {
 if (desc && buf && (r_io_desc_seek (desc, addr, R_IO_SEEK_SET) == addr)) {
  return r_io_desc_read (desc, buf, len);
 }
 return 0;
}

R_API int r_io_desc_write_at(RIODesc *desc, ut64 addr, const ut8 *buf, int len) {
 if (desc && buf && (r_io_desc_seek (desc, addr, R_IO_SEEK_SET) == addr)) {
  return r_io_desc_write (desc, buf, len);
 }
 return 0;
}

R_API int r_io_desc_extend(RIODesc *desc, ut64 size) {
 if (desc && desc->plugin && desc->plugin->extend) {
  return desc->plugin->extend (desc->io, desc, size);
 }
 return 0;
}




R_IPI bool r_io_desc_init(RIO* io) {
 r_return_val_if_fail (io, false);
 r_io_desc_fini (io);


 io->files = r_id_storage_new (3, 0x80000000);
 if (!io->files) {
  return false;
 }
 return true;
}

static bool desc_fini_cb(void* user, void* data, ut32 id) {
 RIODesc* desc = (RIODesc*) data;
 if (desc->plugin && desc->plugin->close) {
  desc->plugin->close (desc);
 }
 r_io_desc_free (desc);
 return true;
}


R_IPI void r_io_desc_fini(RIO* io) {
 r_return_if_fail (io);
 if (io->files) {
  r_id_storage_foreach (io->files, desc_fini_cb, io);
  r_id_storage_free (io->files);
  io->files = NULL;
 }

 io->desc = NULL;
}