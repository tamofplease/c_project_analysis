# 1 "project/radare2/shlr/grub/fs/hfsplus.c"
# 22 "project/radare2/shlr/grub/fs/hfsplus.c"
#include <grub/err.h>
#include <grub/file.h>
#include <grub/mm.h>
#include <grub/misc.h>
#include <grub/disk.h>
#include <grub/types.h>
#include <grub/fshelp.h>
#include <grub/hfs.h>
#include <grub/charset.h>
#include <r_util.h>

#define GRUB_HFSPLUS_MAGIC 0x482B
#define GRUB_HFSPLUSX_MAGIC 0x4858
#define GRUB_HFSPLUS_SBLOCK 2


R_PACKED (
struct grub_hfsplus_extent
{

  grub_uint32_t start;

  grub_uint32_t count;
});


R_PACKED (
struct grub_hfsplus_forkdata
{
  grub_uint64_t size;
  grub_uint32_t clumpsize;
  grub_uint32_t blocks;
  struct grub_hfsplus_extent extents[8];
});


R_PACKED (
struct grub_hfsplus_volheader
{
  grub_uint16_t magic;
  grub_uint16_t version;
  grub_uint32_t attributes;
  grub_uint8_t unused1[12];
  grub_uint32_t utime;
  grub_uint8_t unused2[16];
  grub_uint32_t blksize;
  grub_uint8_t unused3[60];
  grub_uint64_t num_serial;
  struct grub_hfsplus_forkdata allocations_file;
  struct grub_hfsplus_forkdata extents_file;
  struct grub_hfsplus_forkdata catalog_file;
  struct grub_hfsplus_forkdata attrib_file;
  struct grub_hfsplus_forkdata startup_file;
});


enum grub_hfsplus_btnode_type
  {
    GRUB_HFSPLUS_BTNODE_TYPE_LEAF = -1,
    GRUB_HFSPLUS_BTNODE_TYPE_INDEX = 0,
    GRUB_HFSPLUS_BTNODE_TYPE_HEADER = 1,
    GRUB_HFSPLUS_BTNODE_TYPE_MAP = 2,
  };

R_PACKED (
struct grub_hfsplus_btnode
{
  grub_uint32_t next;
  grub_uint32_t prev;
  grub_int8_t type;
  grub_uint8_t height;
  grub_uint16_t count;
  grub_uint16_t unused;
});


R_PACKED (
struct grub_hfsplus_btheader
{
  grub_uint16_t depth;
  grub_uint32_t root;
  grub_uint32_t leaf_records;
  grub_uint32_t first_leaf_node;
  grub_uint32_t last_leaf_node;
  grub_uint16_t nodesize;
  grub_uint16_t keysize;
  grub_uint32_t total_nodes;
  grub_uint32_t free_nodes;
  grub_uint16_t reserved1;
  grub_uint32_t clump_size;
  grub_uint8_t btree_type;
  grub_uint8_t key_compare;
  grub_uint32_t attributes;
});


R_PACKED (
struct grub_hfsplus_catkey
{
  grub_uint16_t keylen;
  grub_uint32_t parent;
  grub_uint16_t namelen;
  grub_unaligned_uint16_t name[30];
});


R_PACKED (
struct grub_hfsplus_extkey
{
  grub_uint16_t keylen;
  grub_uint8_t type;
  grub_uint8_t unused;
  grub_uint32_t fileid;
  grub_uint32_t start;
});

R_PACKED (
struct grub_hfsplus_key
{
  union
  {
    struct grub_hfsplus_extkey extkey;
    struct grub_hfsplus_catkey catkey;
    grub_uint16_t keylen;
  };
});
R_PACKED (
struct grub_hfsplus_catfile
{
  grub_uint16_t type;
  grub_uint16_t flags;
  grub_uint32_t reserved;
  grub_uint32_t fileid;
  grub_uint8_t unused1[4];
  grub_uint32_t mtime;
  grub_uint8_t unused2[22];
  grub_uint16_t mode;
  grub_uint8_t unused3[44];
  struct grub_hfsplus_forkdata data;
  struct grub_hfsplus_forkdata resource;
});


#define GRUB_HFSPLUS_FILEMODE_MASK 0170000
#define GRUB_HFSPLUS_FILEMODE_REG 0100000
#define GRUB_HFSPLUS_FILEMODE_DIRECTORY 0040000
#define GRUB_HFSPLUS_FILEMODE_SYMLINK 0120000


#define GRUB_HFSPLUS_FILEID_ROOTDIR 2
#define GRUB_HFSPLUS_FILEID_OVERFLOW 3
#define GRUB_HFSPLUS_FILEID_CATALOG 4

enum grub_hfsplus_filetype
  {
    GRUB_HFSPLUS_FILETYPE_DIR = 1,
    GRUB_HFSPLUS_FILETYPE_REG = 2,
    GRUB_HFSPLUS_FILETYPE_DIR_THREAD = 3,
    GRUB_HFSPLUS_FILETYPE_REG_THREAD = 4
  };

#define GRUB_HFSPLUSX_BINARYCOMPARE 0xBC
#define GRUB_HFSPLUSX_CASEFOLDING 0xCF


struct grub_hfsplus_catkey_internal
{
  int parent;
  char *name;
};


struct grub_hfsplus_extkey_internal
{
  grub_uint32_t fileid;
  grub_uint32_t start;
};

struct grub_hfsplus_key_internal
{
  union
  {
    struct grub_hfsplus_extkey_internal extkey;
    struct grub_hfsplus_catkey_internal catkey;
  };
};



struct grub_fshelp_node
{
  struct grub_hfsplus_data *data;
  struct grub_hfsplus_extent extents[8];
  grub_uint64_t size;
  grub_uint32_t fileid;
  grub_int32_t mtime;
};

struct grub_hfsplus_btree
{
  grub_uint32_t root;
  int nodesize;


  struct grub_fshelp_node file;
};


struct grub_hfsplus_data
{
  struct grub_hfsplus_volheader volheader;
  grub_disk_t disk;

  unsigned int log2blksize;

  struct grub_hfsplus_btree catalog_tree;
  struct grub_hfsplus_btree extoverflow_tree;

  struct grub_fshelp_node dirroot;
  struct grub_fshelp_node opened_file;



  int embedded_offset;
  int case_sensitive;
};



static inline unsigned int
grub_hfsplus_btree_recoffset (struct grub_hfsplus_btree *btree,
      struct grub_hfsplus_btnode *node, int index)
{
  char *cnode = (char *) node;
  grub_uint16_t *recptr;
  recptr = (grub_uint16_t *) (&cnode[btree->nodesize
         - index * sizeof (grub_uint16_t) - 2]);
  return recptr? grub_be_to_cpu16 (*recptr): 0;
}



static inline struct grub_hfsplus_key *
grub_hfsplus_btree_recptr (struct grub_hfsplus_btree *btree,
      struct grub_hfsplus_btnode *node, int index)
{
  char *cnode = (char *) node;
  unsigned int offset;
  offset = grub_hfsplus_btree_recoffset (btree, node, index);
  return (struct grub_hfsplus_key *) &cnode[offset];
}





static int
grub_hfsplus_find_block (struct grub_hfsplus_extent *extent,
    int *fileblock)
{
  int i;
  grub_size_t blksleft = *fileblock;


  for (i = 0; i < 8; i++)
    {
      if (blksleft < grub_be_to_cpu32 (extent[i].count))
 return grub_be_to_cpu32 (extent[i].start) + blksleft;
      blksleft -= grub_be_to_cpu32 (extent[i].count);
    }

  *fileblock = blksleft;
  return -1;
}

static grub_err_t
grub_hfsplus_btree_search (struct grub_hfsplus_btree *btree,
      struct grub_hfsplus_key_internal *key,
      int (*compare_keys) (struct grub_hfsplus_key *keya,
      struct grub_hfsplus_key_internal *keyb),
      struct grub_hfsplus_btnode **matchnode, int *keyoffset);

static int grub_hfsplus_cmp_extkey (struct grub_hfsplus_key *keya,
        struct grub_hfsplus_key_internal *keyb);



static grub_disk_addr_t
grub_hfsplus_read_block (grub_fshelp_node_t node, grub_disk_addr_t fileblock)
{
  struct grub_hfsplus_btnode *nnode = 0;
  int blksleft = fileblock;
  struct grub_hfsplus_extent *extents = &node->extents[0];

  while (1)
    {
      struct grub_hfsplus_extkey *key;
      struct grub_hfsplus_extkey_internal extoverflow;
      int blk, ptr = 0;


      blk = grub_hfsplus_find_block (extents, &blksleft);



      grub_free (nnode);
      nnode = 0;

      if (blk != -1)
 return (blk
  + (node->data->embedded_offset >> (node->data->log2blksize
         - GRUB_DISK_SECTOR_BITS)));




      if (node->fileid == GRUB_HFSPLUS_FILEID_OVERFLOW)
 {
   grub_error (GRUB_ERR_READ_ERROR,
        "extra extents found in an extend overflow file");
   break;
 }


      extoverflow.fileid = node->fileid;
      extoverflow.start = fileblock - blksleft;

      if (grub_hfsplus_btree_search (&node->data->extoverflow_tree,
         (struct grub_hfsplus_key_internal *) &extoverflow,
         grub_hfsplus_cmp_extkey, &nnode, &ptr))
 {
   grub_error (GRUB_ERR_READ_ERROR,
        "no block found for the file id 0x%x and the block offset 0x%x",
        node->fileid, fileblock);
   break;
 }


      key = (struct grub_hfsplus_extkey *)
 grub_hfsplus_btree_recptr (&node->data->extoverflow_tree, nnode, ptr);
      extents = (struct grub_hfsplus_extent *) (key + 1);



    }

  grub_free (nnode);


  return -1;
}




static grub_ssize_t
grub_hfsplus_read_file (grub_fshelp_node_t node,
   void (*read_hook) (grub_disk_addr_t sector,
        unsigned offset, unsigned length,
        void *closure),
   void *closure, int flags,
   int pos, grub_size_t len, char *buf)
{
  return grub_fshelp_read_file (node->data->disk, node, read_hook, closure,
    flags, pos, len, buf, grub_hfsplus_read_block,
    node->size,
    node->data->log2blksize - GRUB_DISK_SECTOR_BITS);
}

static struct grub_hfsplus_data *
grub_hfsplus_mount (grub_disk_t disk)
{
  struct grub_hfsplus_data *data;
  struct grub_hfsplus_btheader header;
  struct grub_hfsplus_btnode node;
  grub_uint16_t magic;
  union {
    struct grub_hfs_sblock hfs;
    struct grub_hfsplus_volheader hfsplus;
  } volheader;

  data = grub_malloc (sizeof (*data));
  if (!data)
    return 0;

  data->disk = disk;


  grub_disk_read (disk, GRUB_HFSPLUS_SBLOCK, 0, sizeof (volheader),
    &volheader);
  if (grub_errno)
    goto fail;

  data->embedded_offset = 0;
  if (grub_be_to_cpu16 (volheader.hfs.magic) == GRUB_HFS_MAGIC)
    {
      int extent_start;
      int ablk_size;
      int ablk_start;


      if (grub_be_to_cpu16 (volheader.hfs.embed_sig) != GRUB_HFSPLUS_MAGIC)
 {
   grub_error (GRUB_ERR_BAD_FS, "not a HFS+ filesystem");
   goto fail;
 }


      extent_start = grub_be_to_cpu16 (volheader.hfs.embed_extent.first_block);
      ablk_size = grub_be_to_cpu32 (volheader.hfs.blksz);
      ablk_start = grub_be_to_cpu16 (volheader.hfs.first_block);
      data->embedded_offset = (ablk_start
          + extent_start
          * (ablk_size >> GRUB_DISK_SECTOR_BITS));

      grub_disk_read (disk, data->embedded_offset + GRUB_HFSPLUS_SBLOCK, 0,
        sizeof (volheader), &volheader);
      if (grub_errno)
 goto fail;
    }



  magic = grub_be_to_cpu16 (volheader.hfsplus.magic);
  if ((magic != GRUB_HFSPLUS_MAGIC) && (magic != GRUB_HFSPLUSX_MAGIC))
    {
      grub_error (GRUB_ERR_BAD_FS, "not a HFS+ filesystem");
      goto fail;
    }

  grub_memcpy (&data->volheader, &volheader.hfsplus,
      sizeof (volheader.hfsplus));

  if (grub_fshelp_log2blksize (grub_be_to_cpu32 (data->volheader.blksize),
          &data->log2blksize))
    goto fail;


  data->catalog_tree.file.data = data;
  data->catalog_tree.file.fileid = GRUB_HFSPLUS_FILEID_CATALOG;
  grub_memcpy (&data->catalog_tree.file.extents,
        data->volheader.catalog_file.extents,
        sizeof data->volheader.catalog_file.extents);
  data->catalog_tree.file.size =
    grub_be_to_cpu64 (data->volheader.catalog_file.size);


  data->extoverflow_tree.file.data = data;
  data->extoverflow_tree.file.fileid = GRUB_HFSPLUS_FILEID_OVERFLOW;
  grub_memcpy (&data->extoverflow_tree.file.extents,
        data->volheader.extents_file.extents,
        sizeof data->volheader.catalog_file.extents);

  data->extoverflow_tree.file.size =
    grub_be_to_cpu64 (data->volheader.extents_file.size);


  if (grub_hfsplus_read_file (&data->catalog_tree.file, 0, 0, 0,
         sizeof (struct grub_hfsplus_btnode),
         sizeof (header), (char *) &header) <= 0)
    goto fail;

  data->catalog_tree.root = grub_be_to_cpu32 (header.root);
  data->catalog_tree.nodesize = grub_be_to_cpu16 (header.nodesize);
  data->case_sensitive = ((magic == GRUB_HFSPLUSX_MAGIC) &&
     (header.key_compare == GRUB_HFSPLUSX_BINARYCOMPARE));

  if (grub_hfsplus_read_file (&data->extoverflow_tree.file, 0, 0, 0,
         sizeof (struct grub_hfsplus_btnode),
         sizeof (header), (char *) &header) <= 0)
    goto fail;

  data->extoverflow_tree.root = grub_be_to_cpu32 (header.root);

  if (grub_hfsplus_read_file (&data->extoverflow_tree.file, 0, 0, 0, 0,
         sizeof (node), (char *) &node) <= 0)
    goto fail;

  data->extoverflow_tree.root = grub_be_to_cpu32 (header.root);
  data->extoverflow_tree.nodesize = grub_be_to_cpu16 (header.nodesize);

  data->dirroot.data = data;
  data->dirroot.fileid = GRUB_HFSPLUS_FILEID_ROOTDIR;

  return data;

 fail:

  if (grub_errno == GRUB_ERR_OUT_OF_RANGE)
    grub_error (GRUB_ERR_BAD_FS, "not a HFS+ filesystem");

  grub_free (data);
  return 0;
}



static int
grub_hfsplus_cmp_catkey (struct grub_hfsplus_key *keya,
    struct grub_hfsplus_key_internal *keyb)
{
  struct grub_hfsplus_catkey *catkey_a = &keya->catkey;
  struct grub_hfsplus_catkey_internal *catkey_b = &keyb->catkey;
  char *filename;
  int i;
  int diff;

  diff = grub_be_to_cpu32 (catkey_a->parent) - catkey_b->parent;
  if (diff)
    return diff;


  for (i = 0; i < grub_be_to_cpu16 (catkey_a->namelen); i++)
    catkey_a->name[i] = grub_be_to_cpu16 (catkey_a->name[i]);

  filename = grub_malloc (grub_be_to_cpu16 (catkey_a->namelen) + 1);

  if (! grub_utf16_to_utf8 ((grub_uint8_t *) filename, catkey_a->name,
       grub_be_to_cpu16 (catkey_a->namelen)))
    return -1;


  diff = grub_strncmp (filename, catkey_b->name,
         grub_be_to_cpu16 (catkey_a->namelen));

  grub_free (filename);



  for (i = 0; i < grub_be_to_cpu16 (catkey_a->namelen); i++)
    catkey_a->name[i] = grub_cpu_to_be16 (catkey_a->name[i]);
  return diff;
}



static int
grub_hfsplus_cmp_extkey (struct grub_hfsplus_key *keya,
    struct grub_hfsplus_key_internal *keyb)
{
  struct grub_hfsplus_extkey *extkey_a = &keya->extkey;
  struct grub_hfsplus_extkey_internal *extkey_b = &keyb->extkey;
  int diff;

  diff = grub_be_to_cpu32 (extkey_a->fileid) - extkey_b->fileid;

  if (diff)
    return diff;

  diff = grub_be_to_cpu32 (extkey_a->start) - extkey_b->start;
  return diff;
}

static char *
grub_hfsplus_read_symlink (grub_fshelp_node_t node)
{
  char *symlink;
  grub_ssize_t numread;

  symlink = grub_malloc (node->size + 1);
  if (!symlink)
    return 0;

  numread = grub_hfsplus_read_file (node, 0, 0, 0, 0, node->size, symlink);
  if (numread != (grub_ssize_t) node->size)
    {
      grub_free (symlink);
      return 0;
    }
  symlink[node->size] = '\0';

  return symlink;
}

static int
grub_hfsplus_btree_iterate_node (struct grub_hfsplus_btree *btree,
     struct grub_hfsplus_btnode *first_node,
     int first_rec,
     int (*hook) (void *record, void *closure),
     void *closure)
{
  int rec;

  if (hook)
  for (;;)
    {
      char *cnode = (char *) first_node;

      if (!first_node) {
        return 0;
      }

      for (rec = first_rec; rec < grub_be_to_cpu16 (first_node->count); rec++)
 {
   if (hook (grub_hfsplus_btree_recptr (btree, first_node, rec), closure))
     return 1;
 }

      if (! first_node->next)
 break;

      if (grub_hfsplus_read_file (&btree->file, 0, 0, 0,
      (grub_be_to_cpu32 (first_node->next)
       * btree->nodesize),
      btree->nodesize, cnode) <= 0)
 return 1;


      first_rec = 0;
    }

  return 0;
}





static grub_err_t
grub_hfsplus_btree_search (struct grub_hfsplus_btree *btree,
      struct grub_hfsplus_key_internal *key,
      int (*compare_keys) (struct grub_hfsplus_key *keya,
      struct grub_hfsplus_key_internal *keyb),
      struct grub_hfsplus_btnode **matchnode, int *keyoffset)
{
  grub_uint64_t currnode;
  char *node;
  struct grub_hfsplus_btnode *nodedesc;
  int rec;

  node = grub_malloc (btree->nodesize);
  if (! node)
    return grub_errno;

  currnode = btree->root;
  while (1)
    {
      int match = 0;


      if (grub_hfsplus_read_file (&btree->file, 0, 0, 0,
      (long)currnode * (long)btree->nodesize,
      btree->nodesize, (char *) node) <= 0)
 {
   grub_free (node);
   return grub_error (GRUB_ERR_BAD_FS, "couldn't read i-node");
 }

      nodedesc = (struct grub_hfsplus_btnode *) node;


      for (rec = 0; rec < grub_be_to_cpu16 (nodedesc->count); rec++)
 {
   struct grub_hfsplus_key *currkey;
   currkey = grub_hfsplus_btree_recptr (btree, nodedesc, rec);



   if (nodedesc->type == GRUB_HFSPLUS_BTNODE_TYPE_LEAF
       && compare_keys (currkey, key) == 0)
     {


       *matchnode = nodedesc;
       *keyoffset = rec;

       return 0;
     }
   else if (nodedesc->type == GRUB_HFSPLUS_BTNODE_TYPE_INDEX)
     {
       grub_uint32_t *pointer;




       if (compare_keys (currkey, key) > 0)
  break;





       pointer = (grub_uint32_t *) ((char *) currkey
        + grub_be_to_cpu16 (currkey->keylen)
        + 2);
       currnode = grub_be_to_cpu32 (*pointer);
       match = 1;
     }
 }



      if (! match)
 {
   *matchnode = 0;
   grub_free (node);
   return 1;
 }
    }
}

struct grub_hfsplus_iterate_dir_closure
{
  grub_fshelp_node_t dir;
  int (*hook) (const char *filename,
        enum grub_fshelp_filetype filetype,
        grub_fshelp_node_t node,
        void *closure);
  void *closure;
  int ret;
};

static int
list_nodes (void *record, void *closure)
{
  struct grub_hfsplus_iterate_dir_closure *c = closure;
  struct grub_hfsplus_catkey *catkey;
  char *filename;
  int i;
  struct grub_fshelp_node *node;
  struct grub_hfsplus_catfile *fileinfo;
  enum grub_fshelp_filetype type = GRUB_FSHELP_UNKNOWN;

  catkey = (struct grub_hfsplus_catkey *) record;

  fileinfo =
    (struct grub_hfsplus_catfile *) ((char *) record
         + grub_be_to_cpu16 (catkey->keylen)
         + 2 + (grub_be_to_cpu16(catkey->keylen)
         % 2));


  if (grub_be_to_cpu32 (catkey->parent) != c->dir->fileid)
    return 1;


  if (grub_be_to_cpu16 (fileinfo->type) == GRUB_HFSPLUS_FILETYPE_REG)
    {
      int mode = (grub_be_to_cpu16 (fileinfo->mode)
    & GRUB_HFSPLUS_FILEMODE_MASK);

      if (mode == GRUB_HFSPLUS_FILEMODE_REG)
 type = GRUB_FSHELP_REG;
      else if (mode == GRUB_HFSPLUS_FILEMODE_SYMLINK)
 type = GRUB_FSHELP_SYMLINK;
      else
 type = GRUB_FSHELP_UNKNOWN;
    }
  else if (grub_be_to_cpu16 (fileinfo->type) == GRUB_HFSPLUS_FILETYPE_DIR)
    type = GRUB_FSHELP_DIR;

  if (type == GRUB_FSHELP_UNKNOWN)
    return 0;


  for (i = 0; i < grub_be_to_cpu16 (catkey->namelen); i++)
    {
      catkey->name[i] = grub_be_to_cpu16 (catkey->name[i]);


      if (catkey->name[i] == 0)
 return 0;
    }

  filename = grub_malloc (grub_be_to_cpu16 (catkey->namelen) + 1);
  if (! filename)
    return 0;

  if (! grub_utf16_to_utf8 ((grub_uint8_t *) filename, catkey->name,
       grub_be_to_cpu16 (catkey->namelen)))
    {
      grub_free (filename);
      return 0;
    }

  filename[grub_be_to_cpu16 (catkey->namelen)] = '\0';


  for (i = 0; i < grub_be_to_cpu16 (catkey->namelen); i++)
    catkey->name[i] = grub_be_to_cpu16 (catkey->name[i]);


  if (! c->dir->data->case_sensitive)
    type |= GRUB_FSHELP_CASE_INSENSITIVE;


  if (grub_strlen (filename) == grub_be_to_cpu16 (catkey->namelen))
    {


      node = grub_malloc (sizeof (*node));
      node->data = c->dir->data;

      grub_memcpy (node->extents, fileinfo->data.extents,
     sizeof (node->extents));
      node->mtime = grub_be_to_cpu32 (fileinfo->mtime) - 2082844800;
      node->size = grub_be_to_cpu64 (fileinfo->data.size);
      node->fileid = grub_be_to_cpu32 (fileinfo->fileid);

      if (c->hook == NULL)
        c->ret = 0;
      else
        c->ret = c->hook (filename, type, node, c->closure);
    }

  grub_free (filename);

  return c->ret;
}

static int
grub_hfsplus_iterate_dir (grub_fshelp_node_t dir,
     int (*hook) (const char *filename,
           enum grub_fshelp_filetype filetype,
           grub_fshelp_node_t node,
           void *closure),
     void *closure)
{
  struct grub_hfsplus_key_internal intern;
  struct grub_hfsplus_btnode *node = NULL;
  int ptr = 0;
  struct grub_hfsplus_iterate_dir_closure c;


  intern.catkey.parent = dir->fileid;
  intern.catkey.name = "";


  if (grub_hfsplus_btree_search (&dir->data->catalog_tree, &intern,
     grub_hfsplus_cmp_catkey, &node, &ptr))
    return 0;

  c.dir = dir;
  c.hook = hook;
  c.closure = closure;
  c.ret = 0;

  grub_hfsplus_btree_iterate_node (&dir->data->catalog_tree, node, ptr,
       list_nodes, &c);

  grub_free (node);

  return c.ret;
}


static grub_err_t
grub_hfsplus_open (struct grub_file *file, const char *name)
{
  struct grub_hfsplus_data *data;
  struct grub_fshelp_node *fdiro = 0;

  data = grub_hfsplus_mount (file->device->disk);
  if (!data)
    goto fail;

  grub_fshelp_find_file (name, &data->dirroot, &fdiro,
    grub_hfsplus_iterate_dir, 0,
    grub_hfsplus_read_symlink, GRUB_FSHELP_REG);
  if (grub_errno)
    goto fail;

  file->size = fdiro->size;
  data->opened_file = *fdiro;
  grub_free (fdiro);

  file->data = data;
  file->offset = 0;

  return 0;

 fail:
  if (data && fdiro != &data->dirroot)
    grub_free (fdiro);
  grub_free (data);

  return grub_errno;
}


static grub_err_t
grub_hfsplus_close (grub_file_t file)
{
  grub_free (file->data);

  return GRUB_ERR_NONE;
}



static grub_ssize_t
grub_hfsplus_read (grub_file_t file, char *buf, grub_size_t len)
{
  struct grub_hfsplus_data *data =
    (struct grub_hfsplus_data *) file->data;

  int size = grub_hfsplus_read_file (&data->opened_file, file->read_hook,
         file->closure, file->flags,
         file->offset, len, buf);

  return size;
}

struct grub_hfsplus_dir_closure
{
  int (*hook) (const char *filename,
        const struct grub_dirhook_info *info,
        void *closure);
  void *closure;
};

static int
iterate (const char *filename,
  enum grub_fshelp_filetype filetype,
  grub_fshelp_node_t node, void *closure)
{
  struct grub_hfsplus_dir_closure *c = closure;
  struct grub_dirhook_info info;
  grub_memset (&info, 0, sizeof (info));
  info.dir = ((filetype & GRUB_FSHELP_TYPE_MASK) == GRUB_FSHELP_DIR);
  info.mtimeset = 1;
  info.mtime = node->mtime;
  info.case_insensitive = !! (filetype & GRUB_FSHELP_CASE_INSENSITIVE);
  grub_free (node);
  return c->hook (filename, &info, c->closure);
}

static grub_err_t
grub_hfsplus_dir (grub_device_t device, const char *path,
    int (*hook) (const char *filename,
          const struct grub_dirhook_info *info,
          void *closure),
    void *closure)
{
  struct grub_hfsplus_data *data = 0;
  struct grub_fshelp_node *fdiro = 0;
  struct grub_hfsplus_dir_closure c;

  data = grub_hfsplus_mount (device->disk);
  if (!data)
    goto fail;


  grub_fshelp_find_file (path, &data->dirroot, &fdiro,
    grub_hfsplus_iterate_dir, 0,
    grub_hfsplus_read_symlink, GRUB_FSHELP_DIR);
  if (grub_errno)
    goto fail;

  c.hook = hook;
  c.closure = closure;

  grub_hfsplus_iterate_dir (fdiro, iterate, &c);

 fail:
  if (data && fdiro != &data->dirroot)
    grub_free (fdiro);
  grub_free (data);

  return grub_errno;
}


static grub_err_t
grub_hfsplus_label (grub_device_t device
      , char **label)
{

  return grub_error (GRUB_ERR_NOT_IMPLEMENTED_YET,
       "reading the label of a HFS+ "
       "partition is not implemented");
}


static grub_err_t
grub_hfsplus_mtime (grub_device_t device, grub_int32_t *tm)
{
  struct grub_hfsplus_data *data;
  grub_disk_t disk = device->disk;

  data = grub_hfsplus_mount (disk);
  if (!data)
    *tm = 0;
  else
    *tm = grub_be_to_cpu32 (data->volheader.utime) - 2082844800;

  grub_free (data);

  return grub_errno;

}

static grub_err_t
grub_hfsplus_uuid (grub_device_t device, char **uuid)
{
  struct grub_hfsplus_data *data;
  grub_disk_t disk = device->disk;

  data = grub_hfsplus_mount (disk);
  if (data)
    {
      *uuid = grub_xasprintf ("%016"PFMT64x,
        (unsigned long long)
        grub_be_to_cpu64 (data->volheader.num_serial));
    }
  else
    *uuid = NULL;

  grub_free (data);

  return grub_errno;
}


struct grub_fs grub_hfsplus_fs =
  {
    .name = "hfsplus",
    .dir = grub_hfsplus_dir,
    .open = grub_hfsplus_open,
    .read = grub_hfsplus_read,
    .close = grub_hfsplus_close,
    .label = grub_hfsplus_label,
    .mtime = grub_hfsplus_mtime,
    .uuid = grub_hfsplus_uuid,
#ifdef GRUB_UTIL
    .reserved_first_sector = 1,
#endif
    .next = 0
  };
