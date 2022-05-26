# 1 "project/radare2/shlr/grub/fs/jfs.c"
# 20 "project/radare2/shlr/grub/fs/jfs.c"
#include <grub/err.h>
#include <grub/file.h>
#include <grub/mm.h>
#include <grub/misc.h>
#include <grub/disk.h>
#include <grub/types.h>
#include <grub/charset.h>
#include <r_types.h>

#define GRUB_JFS_MAX_SYMLNK_CNT 8
#define GRUB_JFS_FILETYPE_MASK 0170000
#define GRUB_JFS_FILETYPE_REG 0100000
#define GRUB_JFS_FILETYPE_LNK 0120000
#define GRUB_JFS_FILETYPE_DIR 0040000

#define GRUB_JFS_SBLOCK 64
#define GRUB_JFS_AGGR_INODE 2
#define GRUB_JFS_FS1_INODE_BLK 104

#define GRUB_JFS_TREE_LEAF 2

struct grub_jfs_sblock
{

  grub_uint8_t magic[4];
  grub_uint32_t version;
  grub_uint64_t ag_size;



  grub_uint32_t blksz;
  grub_uint16_t log2_blksz;

  grub_uint8_t unused[71];
  grub_uint8_t volname[11];
  grub_uint8_t unused2[32];
  grub_uint8_t uuid[16];
};
R_PACKED (
struct grub_jfs_extent
{

  grub_uint16_t length;
  grub_uint8_t length2;


  grub_uint8_t blk1;
  grub_uint32_t blk2;
});

R_PACKED (
struct grub_jfs_iag
{
  grub_uint8_t unused[3072];
  struct grub_jfs_extent inodes[128];
});



R_PACKED (
struct grub_jfs_treehead
{
  grub_uint64_t next;
  grub_uint64_t prev;

  grub_uint8_t flags;
  grub_uint8_t unused;

  grub_uint16_t count;
  grub_uint16_t max;
  grub_uint8_t unused2[10];
});


R_PACKED (
struct grub_jfs_tree_extent
{
  grub_uint8_t flags;
  grub_uint16_t unused;


  grub_uint8_t offset1;
  grub_uint32_t offset2;

  struct grub_jfs_extent extent;
});


R_PACKED (
struct grub_jfs_tree_dir
{


  grub_uint64_t nextb;
  grub_uint64_t prevb;

  grub_uint8_t flags;


  grub_uint8_t count;
  grub_uint8_t freecnt;
  grub_uint8_t freelist;
  grub_uint8_t maxslot;


  grub_uint8_t sindex;
  grub_uint8_t unused[10];
});


R_PACKED (
struct grub_jfs_internal_dirent
{
  struct grub_jfs_extent ex;
  grub_uint8_t next;
  grub_uint8_t len;
  grub_uint16_t namepart[11];
});


R_PACKED (
struct grub_jfs_leaf_dirent
{

  grub_uint32_t inode;
  grub_uint8_t next;


  grub_uint8_t len;
  grub_unaligned_uint16_t namepart[11];
  grub_uint32_t index;
});




R_PACKED (
struct grub_jfs_leaf_next_dirent
{
  grub_uint8_t next;
  grub_uint8_t len;
  grub_unaligned_uint16_t namepart[15];
});

R_PACKED (
struct grub_jfs_inode
{
  grub_uint32_t stamp;
  grub_uint32_t fileset;
  grub_uint32_t inode;
  grub_uint8_t unused[12];
  grub_uint64_t size;
  grub_uint8_t unused2[20];
  grub_uint32_t mode;
  grub_uint8_t unused3[72];
  grub_uint8_t unused4[96];
  R_PACKED (
  union
  {

 R_PACKED (
 struct
    {
      struct grub_jfs_treehead tree;
      struct grub_jfs_tree_extent extents[16];
    }) file;
 R_PACKED (
 union
    {

      struct
      {
 grub_uint8_t unused[16];
 grub_uint8_t flags;


 grub_uint8_t count;
 grub_uint8_t freecnt;
 grub_uint8_t freelist;
 grub_uint32_t idotdot;
 grub_uint8_t sorted[8];
      } header;
      struct grub_jfs_leaf_dirent dirents[8];
 }) dir;

    struct
    {
      grub_uint8_t unused[32];
      grub_uint8_t path[128];
    } symlink;
  });
});

R_PACKED (
struct grub_jfs_data
{
  struct grub_jfs_sblock sblock;
  grub_disk_t disk;
  struct grub_jfs_inode fileset;
  struct grub_jfs_inode currinode;
  int pos;
  int linknest;
});

R_PACKED (
struct grub_jfs_diropen
{
  int index;
  R_PACKED (
  union
  {
    struct grub_jfs_tree_dir header;
    struct grub_jfs_leaf_dirent dirent[0];
    struct grub_jfs_leaf_next_dirent next_dirent[0];
    char sorted[0];
  }) *dirpage;
  struct grub_jfs_data *data;
  struct grub_jfs_inode *inode;
  int count;
  char *sorted;
  struct grub_jfs_leaf_dirent *leaf;
  struct grub_jfs_leaf_next_dirent *next_leaf;


  char name[255];
  grub_uint32_t ino;
});

static grub_err_t grub_jfs_lookup_symlink (struct grub_jfs_data *data,
        int ino);

struct getblk_closure
{
  struct grub_jfs_data *data;
  unsigned int blk;
};

static int
getblk (struct grub_jfs_treehead *treehead,
 struct grub_jfs_tree_extent *extents,
 struct getblk_closure *c)
{
  int found = -1;
  int i;

  for (i = 0; i < grub_le_to_cpu16 (treehead->count) - 2; i++)
    {
      if (treehead->flags & GRUB_JFS_TREE_LEAF)
 {

   if (grub_le_to_cpu32 (extents[i].offset2) <= c->blk
       && ((grub_le_to_cpu16 (extents[i].extent.length))
    + (extents[i].extent.length2 << 8)
    + grub_le_to_cpu32 (extents[i].offset2)) > c->blk)
     return (c->blk - grub_le_to_cpu32 (extents[i].offset2)
      + grub_le_to_cpu32 (extents[i].extent.blk2));
 }
      else
 if (c->blk >= grub_le_to_cpu32 (extents[i].offset2))
   found = i;
    }

  if (found != -1)
    {
      struct
      {
 struct grub_jfs_treehead treehead;
 struct grub_jfs_tree_extent extents[254];
      } tree;

      if (grub_disk_read (c->data->disk,
     grub_le_to_cpu32 (extents[found].extent.blk2)
     << (grub_le_to_cpu16 (c->data->sblock.log2_blksz)
         - GRUB_DISK_SECTOR_BITS), 0,
     sizeof (tree), (char *) &tree))
 return -1;

      return getblk (&tree.treehead, &tree.extents[0], c);
    }

  return -1;
}



static int
grub_jfs_blkno (struct grub_jfs_data *data, struct grub_jfs_inode *inode,
  unsigned int blk)
{
  struct getblk_closure c;
  c.data = data;
  c.blk = blk;
  return getblk (&inode->file.tree, &inode->file.extents[0], &c);
}


static grub_err_t
grub_jfs_read_inode (struct grub_jfs_data *data, int ino,
       struct grub_jfs_inode *inode)
{
  struct grub_jfs_iag iag;
  int iagnum = ino / 4096;
  int inoext = (ino % 4096) / 32;
  int inonum = (ino % 4096) % 32;
  grub_uint32_t iagblk;
  grub_uint32_t inoblk;

  iagblk = grub_jfs_blkno (data, &data->fileset, iagnum + 1);
  if (grub_errno)
    return grub_errno;


  if (grub_disk_read (data->disk,
        iagblk << (grub_le_to_cpu16 (data->sblock.log2_blksz)
     - GRUB_DISK_SECTOR_BITS), 0,
        sizeof (struct grub_jfs_iag), &iag))
    return grub_errno;

  inoblk = grub_le_to_cpu32 (iag.inodes[inoext].blk2);
  inoblk <<= (grub_le_to_cpu16 (data->sblock.log2_blksz)
       - GRUB_DISK_SECTOR_BITS);
  inoblk += inonum;

  if (grub_disk_read (data->disk, inoblk, 0,
        sizeof (struct grub_jfs_inode), inode))
    return grub_errno;

  return 0;
}


static struct grub_jfs_data *
grub_jfs_mount (grub_disk_t disk)
{
  struct grub_jfs_data *data = 0;

  data = grub_malloc (sizeof (struct grub_jfs_data));
  if (!data)
    return 0;


  if (grub_disk_read (disk, GRUB_JFS_SBLOCK, 0,
        sizeof (struct grub_jfs_sblock), &data->sblock))
    goto fail;

  if (grub_strncmp ((char *) (data->sblock.magic), "JFS1", 4))
    {
      grub_error (GRUB_ERR_BAD_FS, "not a JFS filesystem");
      goto fail;
    }

  data->disk = disk;
  data->pos = 0;
  data->linknest = 0;


  if (grub_disk_read (data->disk, GRUB_JFS_FS1_INODE_BLK, 0,
        sizeof (struct grub_jfs_inode), &data->fileset))
    goto fail;

  return data;

 fail:
  grub_free (data);

  if (grub_errno == GRUB_ERR_OUT_OF_RANGE)
    grub_error (GRUB_ERR_BAD_FS, "not a JFS filesystem");

  return 0;
}


static struct grub_jfs_diropen *
grub_jfs_opendir (struct grub_jfs_data *data, struct grub_jfs_inode *inode)
{
  struct grub_jfs_internal_dirent *de;
  struct grub_jfs_diropen *diro;
  int blk;

  de = (struct grub_jfs_internal_dirent *) inode->dir.dirents;

  if (!((grub_le_to_cpu32 (inode->mode)
  & GRUB_JFS_FILETYPE_MASK) == GRUB_JFS_FILETYPE_DIR))
    {
      grub_error (GRUB_ERR_BAD_FILE_TYPE, "not a directory");
      return 0;
    }

  diro = grub_zalloc (sizeof (struct grub_jfs_diropen));
  if (!diro)
    return 0;

  diro->data = data;
  diro->inode = inode;


  if (inode->file.tree.flags & GRUB_JFS_TREE_LEAF)
    {
      diro->leaf = inode->dir.dirents;
      diro->next_leaf = (struct grub_jfs_leaf_next_dirent *) de;
      diro->sorted = (char *) (inode->dir.header.sorted);
      diro->count = inode->dir.header.count;

      return diro;
    }

  diro->dirpage = grub_malloc (grub_le_to_cpu32 (data->sblock.blksz));
  if (!diro->dirpage)
    {
      grub_free (diro);
      return 0;
    }

  blk = grub_le_to_cpu32 (de[inode->dir.header.sorted[0]].ex.blk2);
  blk <<= (grub_le_to_cpu16 (data->sblock.log2_blksz) - GRUB_DISK_SECTOR_BITS);


  do
    {
      int index;
      if (grub_disk_read (data->disk, blk, 0,
     grub_le_to_cpu32 (data->sblock.blksz),
     diro->dirpage->sorted))
 {
   grub_free (diro->dirpage);
   grub_free (diro);
   return 0;
 }

      de = (struct grub_jfs_internal_dirent *) diro->dirpage->dirent;
      index = diro->dirpage->sorted[diro->dirpage->header.sindex * 32];
      blk = (grub_le_to_cpu32 (de[index].ex.blk2)
      << (grub_le_to_cpu16 (data->sblock.log2_blksz)
   - GRUB_DISK_SECTOR_BITS));
    } while (!(diro->dirpage->header.flags & GRUB_JFS_TREE_LEAF));

  diro->leaf = diro->dirpage->dirent;
  diro->next_leaf = diro->dirpage->next_dirent;
  diro->sorted = &diro->dirpage->sorted[diro->dirpage->header.sindex * 32];
  diro->count = diro->dirpage->header.count;

  return diro;
}


static void
grub_jfs_closedir (struct grub_jfs_diropen *diro)
{
  if (!diro)
    return;
  grub_free (diro->dirpage);
  grub_free (diro);
}

static void
addstr (grub_uint16_t *name, int ulen, grub_uint16_t *filename, int *strpos)
{
  while (ulen--)
    filename[(*strpos)++] = *(name++);
}


static grub_err_t
grub_jfs_getent (struct grub_jfs_diropen *diro)
{
  int strpos = 0;
  struct grub_jfs_leaf_dirent *leaf;
  struct grub_jfs_leaf_next_dirent *next_leaf;
  int len;
  int nextent;
  grub_uint16_t filename[255];




  if (diro->index == diro->count)
    {
      unsigned int next;



      if ((diro->inode->file.tree.flags & GRUB_JFS_TREE_LEAF)
   || !grub_le_to_cpu64 (diro->dirpage->header.nextb))
 return GRUB_ERR_OUT_OF_RANGE;

      next = grub_le_to_cpu64 (diro->dirpage->header.nextb);
      next <<= (grub_le_to_cpu16 (diro->data->sblock.log2_blksz)
  - GRUB_DISK_SECTOR_BITS);

      if (grub_disk_read (diro->data->disk, next, 0,
     grub_le_to_cpu32 (diro->data->sblock.blksz),
     diro->dirpage->sorted))
 return grub_errno;

      diro->leaf = diro->dirpage->dirent;
      diro->next_leaf = diro->dirpage->next_dirent;
      diro->sorted = &diro->dirpage->sorted[diro->dirpage->header.sindex * 32];
      diro->count = diro->dirpage->header.count;
      diro->index = 0;
    }

  leaf = &diro->leaf[(int) diro->sorted[diro->index]];

  len = leaf->len;
  if (!len)
    {
      diro->index++;
      return grub_jfs_getent (diro);
    }

  addstr (leaf->namepart, len < 11 ? len : 11, filename, &strpos);
  diro->ino = grub_le_to_cpu32 (leaf->inode);
  len -= 11;


  nextent = leaf->next;
  if (leaf->next != 255)
    do
      {
  next_leaf = &diro->next_leaf[nextent];
 addstr (next_leaf->namepart, len < 15 ? len : 15, filename, &strpos);

 len -= 15;
 nextent = next_leaf->next;
      } while (next_leaf->next != 255 && len > 0);

  diro->index++;


  *grub_utf16_to_utf8 ((grub_uint8_t *) (diro->name), filename, strpos) = '\0';

  return 0;
}




static grub_ssize_t
grub_jfs_read_file (struct grub_jfs_data *data,
      void (*read_hook) (grub_disk_addr_t sector,
           unsigned offset, unsigned length,
           void *closure),
      void *closure,
      int pos, grub_size_t len, char *buf)
{
  int i;
  int blockcnt;

  blockcnt = ((len + pos + grub_le_to_cpu32 (data->sblock.blksz) - 1)
       / grub_le_to_cpu32 (data->sblock.blksz));

  for (i = pos / grub_le_to_cpu32 (data->sblock.blksz); i < blockcnt; i++)
    {
      int blknr;
      int blockoff = pos % grub_le_to_cpu32 (data->sblock.blksz);
      int blockend = grub_le_to_cpu32 (data->sblock.blksz);

      int skipfirst = 0;

      blknr = grub_jfs_blkno (data, &data->currinode, i);
      if (grub_errno)
 return -1;


      if (i == blockcnt - 1)
 {
   blockend = (len + pos) % grub_le_to_cpu32 (data->sblock.blksz);

   if (!blockend)
     blockend = grub_le_to_cpu32 (data->sblock.blksz);
 }


      if (i == (pos / (int) grub_le_to_cpu32 (data->sblock.blksz)))
 {
   skipfirst = blockoff;
   blockend -= skipfirst;
 }

      data->disk->read_hook = read_hook;
      data->disk->closure = closure;
      grub_disk_read (data->disk,
        blknr << (grub_le_to_cpu16 (data->sblock.log2_blksz)
    - GRUB_DISK_SECTOR_BITS),
        skipfirst, blockend, buf);

      data->disk->read_hook = 0;
      if (grub_errno)
 return -1;

      buf += grub_le_to_cpu32 (data->sblock.blksz) - skipfirst;
    }

  return len;
}




static grub_err_t
grub_jfs_find_file (struct grub_jfs_data *data, const char *path)
{
  char * fpath = grub_malloc(grub_strlen (path));
  char *name = fpath;
  char *next;
  struct grub_jfs_diropen *diro;

  grub_strncpy (fpath, path, grub_strlen (path) + 1);

  if (grub_jfs_read_inode (data, GRUB_JFS_AGGR_INODE, &data->currinode))
    {
      grub_free (fpath);
      return grub_errno;
    }


  while (*name == '/')
    {
      name++;
      if (!*name)
        {
          grub_free (fpath);
          return 0;
        }
    }


  next = grub_strchr (name, '/');
  if (next)
    {
      while (*next == '/')
 {
   next[0] = '\0';
   next++;
 }
    }
  diro = grub_jfs_opendir (data, &data->currinode);
  if (!diro)
    {
      grub_free (fpath);
      return grub_errno;
    }

  for (;;)
    {
      if (grub_strlen (name) == 0)
        {
          grub_free (fpath);
          return GRUB_ERR_NONE;
        }

      if (grub_jfs_getent (diro) == GRUB_ERR_OUT_OF_RANGE)
 break;



      if (!grub_strcmp (name, diro->name))
 {
   int ino = diro->ino;
   int dirino = grub_le_to_cpu32 (data->currinode.inode);

   grub_jfs_closedir (diro);
   diro = 0;

   if (grub_jfs_read_inode (data, ino, &data->currinode))
     break;


   if ((grub_le_to_cpu32 (data->currinode.mode)
        & GRUB_JFS_FILETYPE_MASK) == GRUB_JFS_FILETYPE_LNK)
     {
       grub_jfs_lookup_symlink (data, dirino);
       if (grub_errno)
                {
                  grub_free (fpath);
                  return grub_errno;
                }
     }

   if (!next)
            {
              grub_free (fpath);
       return 0;
            }

   name = next;
   next = grub_strchr (name, '/');
   if (next)
     {
       next[0] = '\0';
       next++;
     }


   diro = grub_jfs_opendir (data, &data->currinode);
   if (!diro)
            {
              grub_free (fpath);
              return grub_errno;
            }

   continue;
 }
    }

  grub_jfs_closedir (diro);
  grub_error (GRUB_ERR_FILE_NOT_FOUND, "file not found");
  grub_free (fpath);
  return grub_errno;
}


static grub_err_t
grub_jfs_lookup_symlink (struct grub_jfs_data *data, int ino)
{
  int size = grub_le_to_cpu64 (data->currinode.size);
#ifndef _MSC_VER
  char symlink[size + 1];
#else
  char *symlink = grub_malloc(size + 1);
#endif
  if (++data->linknest > GRUB_JFS_MAX_SYMLNK_CNT)
    return grub_error (GRUB_ERR_SYMLINK_LOOP, "too deep nesting of symlinks");

  if (size <= 128)
    grub_strncpy (symlink, (char *) (data->currinode.symlink.path), 128);
  else if (grub_jfs_read_file (data, 0, 0, 0, size, symlink) < 0)
    return grub_errno;

  symlink[size] = '\0';


  if (symlink[0] == '/')
    ino = 2;


  if (grub_jfs_read_inode (data, ino, &data->currinode))
    return grub_errno;

  grub_jfs_find_file (data, symlink);
  if (grub_errno)
    grub_error (grub_errno, "cannot follow symlink `%s'", symlink);

  return grub_errno;
}


static grub_err_t
grub_jfs_dir (grub_device_t device, const char *path,
       int (*hook) (const char *filename,
      const struct grub_dirhook_info *info,
      void *closure),
       void *closure)
{
  struct grub_jfs_data *data = 0;
  struct grub_jfs_diropen *diro = 0;

  data = grub_jfs_mount (device->disk);
  if (!data)
    goto fail;

  if (grub_jfs_find_file (data, path))
    goto fail;

  diro = grub_jfs_opendir (data, &data->currinode);
  if (!diro)
    goto fail;


  if (hook)
  while (grub_jfs_getent (diro) != GRUB_ERR_OUT_OF_RANGE)
    {
      struct grub_jfs_inode inode = {0};
      struct grub_dirhook_info info;
      grub_memset (&info, 0, sizeof (info));

      if (grub_jfs_read_inode (data, diro->ino, &inode))
 goto fail;

      info.dir = (grub_le_to_cpu32 (inode.mode)
    & GRUB_JFS_FILETYPE_MASK) == GRUB_JFS_FILETYPE_DIR;
      if (hook (diro->name, &info, closure))
 goto fail;
    }


  if (grub_errno == GRUB_ERR_OUT_OF_RANGE)
    grub_errno = 0;

 fail:
  grub_jfs_closedir (diro);
  grub_free (data);

  return grub_errno;
}



static grub_err_t
grub_jfs_open (struct grub_file *file, const char *name)
{
  struct grub_jfs_data *data;

  data = grub_jfs_mount (file->device->disk);
  if (!data)
    goto fail;

  grub_jfs_find_file (data, name);
  if (grub_errno)
    goto fail;


  if (! ((grub_le_to_cpu32 (data->currinode.mode)
   & GRUB_JFS_FILETYPE_MASK) == GRUB_JFS_FILETYPE_REG))
    {
      grub_error (GRUB_ERR_BAD_FILE_TYPE, "not a regular file");
      goto fail;
    }

  file->data = data;
  file->size = grub_le_to_cpu64 (data->currinode.size);

  return 0;

 fail:
  grub_free (data);

  return grub_errno;
}


static grub_ssize_t
grub_jfs_read (grub_file_t file, char *buf, grub_size_t len)
{
  struct grub_jfs_data *data =
    (struct grub_jfs_data *) file->data;

  return grub_jfs_read_file (data, file->read_hook, file->closure,
        file->offset, len, buf);
}


static grub_err_t
grub_jfs_close (grub_file_t file)
{
  grub_free (file->data);

  return GRUB_ERR_NONE;
}

static grub_err_t
grub_jfs_uuid (grub_device_t device, char **uuid)
{
  struct grub_jfs_data *data;
  grub_disk_t disk = device->disk;

  data = grub_jfs_mount (disk);
  if (data)
    {
      *uuid = grub_xasprintf ("%02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-"
        "%02x%02x%02x%02x%02x%02x",
        data->sblock.uuid[0], data->sblock.uuid[1],
        data->sblock.uuid[2], data->sblock.uuid[3],
        data->sblock.uuid[4], data->sblock.uuid[5],
        data->sblock.uuid[6], data->sblock.uuid[7],
        data->sblock.uuid[8], data->sblock.uuid[9],
        data->sblock.uuid[10], data->sblock.uuid[11],
        data->sblock.uuid[12], data->sblock.uuid[13],
        data->sblock.uuid[14], data->sblock.uuid[15]);
    }
  else
    *uuid = NULL;

  grub_free (data);

  return grub_errno;
}

static grub_err_t
grub_jfs_label (grub_device_t device, char **label)
{
  struct grub_jfs_data *data;
  data = grub_jfs_mount (device->disk);

  if (data)
    *label = grub_strndup ((char *) (data->sblock.volname), 11);
  else
    *label = 0;

  return grub_errno;
}


struct grub_fs grub_jfs_fs =
  {
    .name = "jfs",
    .dir = grub_jfs_dir,
    .open = grub_jfs_open,
    .read = grub_jfs_read,
    .close = grub_jfs_close,
    .label = grub_jfs_label,
    .uuid = grub_jfs_uuid,
    .next = 0
  };
