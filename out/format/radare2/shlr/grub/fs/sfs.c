# 1 "project/radare2/shlr/grub/fs/sfs.c"
# 20 "project/radare2/shlr/grub/fs/sfs.c"
#include <grub/err.h>
#include <grub/file.h>
#include <grub/mm.h>
#include <grub/misc.h>
#include <grub/disk.h>
#include <grub/types.h>
#include <grub/fshelp.h>
#include <r_types.h>

R_PACKED (
struct grub_sfs_bheader
{
  grub_uint8_t magic[4];
  grub_uint32_t chksum;
  grub_uint32_t ipointtomyself;
});


R_PACKED (
struct grub_sfs_rblock
{
  struct grub_sfs_bheader header;
  grub_uint32_t version;
  grub_uint8_t unused1[36];
  grub_uint32_t blocksize;
  grub_uint8_t unused2[40];
  grub_uint8_t unused3[8];
  grub_uint32_t rootobject;
  grub_uint32_t btree;
});


R_PACKED (
struct grub_sfs_obj
{
  grub_uint8_t unused1[4];
  grub_uint32_t nodeid;
  grub_uint8_t unused2[4];
  union
  {
 R_PACKED (
 struct
    {
      grub_uint32_t first_block;
      grub_uint32_t size;
    }) file ;
 R_PACKED (
 struct
    {
      grub_uint32_t hashtable;
      grub_uint32_t dir_objc;
    }) dir ;
  } file_dir;
  grub_uint8_t unused3[4];
  grub_uint8_t type;
  grub_uint8_t filename[1];
  grub_uint8_t comment[1];
});

#define GRUB_SFS_TYPE_DELETED 32
#define GRUB_SFS_TYPE_SYMLINK 64
#define GRUB_SFS_TYPE_DIR 128


R_PACKED (
struct grub_sfs_objc
{
  struct grub_sfs_bheader header;
  grub_uint32_t parent;
  grub_uint32_t next;
  grub_uint32_t prev;

  struct grub_sfs_obj objects[1];
});

R_PACKED (
struct grub_sfs_btree_node
{
  grub_uint32_t key;
  grub_uint32_t data;
});

R_PACKED (
struct grub_sfs_btree_extent
{
  grub_uint32_t key;
  grub_uint32_t next;
  grub_uint32_t prev;
  grub_uint16_t size;
});

R_PACKED (
struct grub_sfs_btree
{
  struct grub_sfs_bheader header;
  grub_uint16_t nodes;
  grub_uint8_t leaf;
  grub_uint8_t nodesize;


  struct grub_sfs_btree_node node[1];
});



struct grub_fshelp_node
{
  struct grub_sfs_data *data;
  int block;
  int size;
};


struct grub_sfs_data
{
  struct grub_sfs_rblock rblock;
  struct grub_fshelp_node diropen;
  grub_disk_t disk;


  unsigned int blocksize;


  char *label;
};




static grub_err_t
grub_sfs_read_extent (struct grub_sfs_data *data, unsigned int block,
        int *size, int *nextext)
{
  char *treeblock;
  struct grub_sfs_btree *tree;
  int i;
  int next;

  if (!block)
    return 0;

  treeblock = grub_malloc (data->blocksize);

  next = grub_be_to_cpu32 (data->rblock.btree);
  tree = (struct grub_sfs_btree *) treeblock;


  do
    {
      grub_disk_read (data->disk, next, 0, data->blocksize, treeblock);
      if (grub_errno)
 {
   grub_free (treeblock);
   return grub_errno;
 }

      for (i = grub_be_to_cpu16 (tree->nodes) - 1; i >= 0; i--)
 {

#define EXTNODE(tree,index) \
 ((struct grub_sfs_btree_node *) (((char *) &(tree)->node[0]) \
      + (index) * (tree)->nodesize))


   if ((grub_be_to_cpu32 (EXTNODE(tree, i)->key) <= block)
       && !tree->leaf)
     {
       next = grub_be_to_cpu32 (EXTNODE (tree, i)->data);
       break;
     }


   if (grub_be_to_cpu32 (EXTNODE (tree, i)->key) == block && tree->leaf)
     {
       struct grub_sfs_btree_extent *extent;
       extent = (struct grub_sfs_btree_extent *) EXTNODE (tree, i);


       *size = grub_be_to_cpu16 (extent->size);
       *nextext = grub_be_to_cpu32 (extent->next);

       grub_free (treeblock);
       return 0;
     }

#undef EXTNODE

 }
    } while (!tree->leaf);

  grub_free (treeblock);

  return grub_error (GRUB_ERR_FILE_READ_ERROR, "SFS extent not found");
}

static grub_disk_addr_t
grub_sfs_read_block (grub_fshelp_node_t node, grub_disk_addr_t fileblock)
{
  int blk = node->block;
  int size = 0;
  int next = 0;

  while (blk)
    {
      grub_err_t err;



      if (fileblock == 0)
 return blk;

      err = grub_sfs_read_extent (node->data, blk, &size, &next);
      if (err)
 return 0;

      if (fileblock < (unsigned int) size)
 return fileblock + blk;

      fileblock -= size;

      blk = next;
    }

  grub_error (GRUB_ERR_FILE_READ_ERROR,
       "reading a SFS block outside the extent");

  return 0;
}




static grub_ssize_t
grub_sfs_read_file (grub_fshelp_node_t node,
      void (*read_hook) (grub_disk_addr_t sector,
           unsigned offset, unsigned length,
           void *closure),
      void *closure, int flags,
      int pos, grub_size_t len, char *buf)
{
  return grub_fshelp_read_file (node->data->disk, node, read_hook, closure,
    flags, pos, len, buf, grub_sfs_read_block,
    node->size, 0);
}


static struct grub_sfs_data *
grub_sfs_mount (grub_disk_t disk)
{
  struct grub_sfs_data *data;
  struct grub_sfs_objc *rootobjc;
  char *rootobjc_data = 0;
  unsigned int blk;

  data = grub_malloc (sizeof (*data));
  if (!data)
    return 0;


  grub_disk_read (disk, 0, 0, sizeof (struct grub_sfs_rblock),
    &data->rblock);
  if (grub_errno)
    goto fail;


  if (grub_strncmp ((char *) (data->rblock.header.magic), "SFS", 4))
    {
      grub_error (GRUB_ERR_BAD_FS, "not a SFS filesystem");
      goto fail;
    }

  data->blocksize = grub_be_to_cpu32 (data->rblock.blocksize);
  rootobjc_data = grub_malloc (data->blocksize);
  if (! rootobjc_data)
    goto fail;


  grub_disk_read (disk, grub_be_to_cpu32 (data->rblock.rootobject), 0,
    data->blocksize, rootobjc_data);
  if (grub_errno)
    goto fail;

  rootobjc = (struct grub_sfs_objc *) rootobjc_data;

  blk = grub_be_to_cpu32 (rootobjc->objects[0].file_dir.dir.dir_objc);
  data->diropen.size = 0;
  data->diropen.block = blk;
  data->diropen.data = data;
  data->disk = disk;
  data->label = grub_strdup ((char *) (rootobjc->objects[0].filename));

  return data;

 fail:
  if (grub_errno == GRUB_ERR_OUT_OF_RANGE)
    grub_error (GRUB_ERR_BAD_FS, "not an SFS filesystem");

  grub_free (data);
  grub_free (rootobjc_data);
  return 0;
}


static char *
grub_sfs_read_symlink (grub_fshelp_node_t node)
{
  struct grub_sfs_data *data = node->data;
  char *symlink;
  char *block;

  block = grub_malloc (data->blocksize);
  if (!block)
    return 0;

  grub_disk_read (data->disk, node->block, 0, data->blocksize, block);
  if (grub_errno)
    {
      grub_free (block);
      return 0;
    }



  symlink = grub_strdup (&block[24]);
  grub_free (block);
  if (!symlink)
    return 0;

  return symlink;
}

static int
grub_sfs_create_node (const char *name, int block,
        int size, int type,
        struct grub_sfs_data *data,
        int (*hook) (const char *filename,
       enum grub_fshelp_filetype filetype,
       grub_fshelp_node_t node, void *closure),
        void *closure)
{
  struct grub_fshelp_node *node;

  node = grub_malloc (sizeof (*node));
  if (!node)
    return 1;

  node->data = data;
  node->size = size;
  node->block = block;

  return hook (name, type, node, closure);
}

static int
grub_sfs_iterate_dir (grub_fshelp_node_t dir,
        int (*hook) (const char *filename,
       enum grub_fshelp_filetype filetype,
       grub_fshelp_node_t node, void *closure),
        void *closure)
{
  struct grub_sfs_data *data = dir->data;
  char *objc_data;
  struct grub_sfs_objc *objc;
  unsigned int next = dir->block;
  int pos;

  objc_data = grub_malloc (data->blocksize);
  if (!objc_data)
    goto fail;



  while (next)
    {
      grub_disk_read (data->disk, next, 0, data->blocksize, objc_data);
      if (grub_errno)
 goto fail;

      objc = (struct grub_sfs_objc *) objc_data;

      pos = (char *) &objc->objects[0] - (char *) objc;


      while (pos + sizeof (struct grub_sfs_obj) < data->blocksize)
 {
   struct grub_sfs_obj *obj;
   obj = (struct grub_sfs_obj *) ((char *) objc + pos);
   char *filename = (char *) (obj->filename);
   int len;
   enum grub_fshelp_filetype type;
   unsigned int block;



   len = grub_strlen (filename);
   len += grub_strlen (filename + len + 1);

   pos += sizeof (*obj) + len;

   pos = ((pos + 1) >> 1) << 1;

   if (grub_strlen (filename) == 0)
     continue;


   if (obj->type & GRUB_SFS_TYPE_DELETED)
     continue;
   else if (obj->type & GRUB_SFS_TYPE_SYMLINK)
     type = GRUB_FSHELP_SYMLINK;
   else if (obj->type & GRUB_SFS_TYPE_DIR)
     type = GRUB_FSHELP_DIR;
   else
     type = GRUB_FSHELP_REG;

   if (type == GRUB_FSHELP_DIR)
     block = grub_be_to_cpu32 (obj->file_dir.dir.dir_objc);
   else
     block = grub_be_to_cpu32 (obj->file_dir.file.first_block);

   if (grub_sfs_create_node (filename, block,
        grub_be_to_cpu32 (obj->file_dir.file.size),
        type, data, hook, closure))
     {
       grub_free (objc_data);
       return 1;
     }
 }

      next = grub_be_to_cpu32 (objc->next);
    }

 fail:
  grub_free (objc_data);
  return 0;
}



static grub_err_t
grub_sfs_open (struct grub_file *file, const char *name)
{
  struct grub_sfs_data *data;
  struct grub_fshelp_node *fdiro = 0;

  data = grub_sfs_mount (file->device->disk);
  if (!data)
    goto fail;

  grub_fshelp_find_file (name, &data->diropen, &fdiro, grub_sfs_iterate_dir, 0,
    grub_sfs_read_symlink, GRUB_FSHELP_REG);
  if (grub_errno)
    goto fail;

  file->size = fdiro->size;
  data->diropen = *fdiro;
  grub_free (fdiro);

  file->data = data;
  file->offset = 0;

  return 0;

 fail:
  if (data && fdiro != &data->diropen)
    grub_free (fdiro);
  if (data)
    grub_free (data->label);
  grub_free (data);

  return grub_errno;
}


static grub_err_t
grub_sfs_close (grub_file_t file)
{
  grub_free (file->data);

  return GRUB_ERR_NONE;
}



static grub_ssize_t
grub_sfs_read (grub_file_t file, char *buf, grub_size_t len)
{
  struct grub_sfs_data *data = (struct grub_sfs_data *) file->data;

  int size = grub_sfs_read_file (&data->diropen, file->read_hook,
     file->closure, file->flags,
     file->offset, len, buf);

  return size;
}

struct grub_sfs_dir_closure
{
  int (*hook) (const char *filename,
        const struct grub_dirhook_info *info,
        void *closure);
  void *closure;
};

static int
iterate (const char *filename,
  enum grub_fshelp_filetype filetype,
  grub_fshelp_node_t node,
  void *closure)
{
  struct grub_sfs_dir_closure *c = closure;
  struct grub_dirhook_info info;
  grub_memset (&info, 0, sizeof (info));
  info.dir = ((filetype & GRUB_FSHELP_TYPE_MASK) == GRUB_FSHELP_DIR);
  grub_free (node);
  return c->hook? c->hook (filename, &info, c->closure):0;
}

static grub_err_t
grub_sfs_dir (grub_device_t device, const char *path,
       int (*hook) (const char *filename,
      const struct grub_dirhook_info *info,
      void *closure),
       void *closure)
{
  struct grub_sfs_data *data = 0;
  struct grub_fshelp_node *fdiro = 0;
  struct grub_sfs_dir_closure c;

  data = grub_sfs_mount (device->disk);
  if (!data)
    goto fail;

  grub_fshelp_find_file (path, &data->diropen, &fdiro, grub_sfs_iterate_dir, 0,
   grub_sfs_read_symlink, GRUB_FSHELP_DIR);
  if (grub_errno)
    goto fail;

  c.hook = hook;
  c.closure = closure;
  grub_sfs_iterate_dir (fdiro, iterate, &c);

 fail:
  if (data && fdiro != &data->diropen)
    grub_free (fdiro);
  if (data)
    grub_free (data->label);
  grub_free (data);

  return grub_errno;
}


static grub_err_t
grub_sfs_label (grub_device_t device, char **label)
{
  struct grub_sfs_data *data;
  grub_disk_t disk = device->disk;

  data = grub_sfs_mount (disk);
  if (data)
    *label = data->label;

  grub_free (data);

  return grub_errno;
}


struct grub_fs grub_sfs_fs =
  {
    .name = "sfs",
    .dir = grub_sfs_dir,
    .open = grub_sfs_open,
    .read = grub_sfs_read,
    .close = grub_sfs_close,
    .label = grub_sfs_label,
    .next = 0
  };
