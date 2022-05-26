# 1 "project/radare2/shlr/grub/partmap/amiga.c"
# 20 "project/radare2/shlr/grub/partmap/amiga.c"
#include <grub/disk.h>
#include <grub/misc.h>
#include <grub/mm.h>
#include <grub/partition.h>
#include <r_types.h>
R_PACKED(
struct grub_amiga_rdsk
{

  grub_uint8_t magic[4];
  grub_uint32_t size;
  grub_int32_t checksum;
  grub_uint32_t scsihost;
  grub_uint32_t blksz;
  grub_uint32_t flags;
  grub_uint32_t badblcklst;
  grub_uint32_t partitionlst;
  grub_uint32_t fslst;


});

R_PACKED(
struct grub_amiga_partition
{

  grub_uint8_t magic[4];
  grub_int32_t size;
  grub_int32_t checksum;
  grub_uint32_t scsihost;
  grub_uint32_t next;
  grub_uint32_t flags;
  grub_uint32_t unused1[2];
  grub_uint32_t devflags;
  grub_uint8_t namelen;
  grub_uint8_t name[31];
  grub_uint32_t unused2[15];

  grub_uint32_t unused3[3];
  grub_uint32_t heads;
  grub_uint32_t unused4;
  grub_uint32_t block_per_track;
  grub_uint32_t unused5[3];
  grub_uint32_t lowcyl;
  grub_uint32_t highcyl;

  grub_uint32_t firstcyl;
});

struct grub_partition_map grub_amiga_partition_map;



static grub_err_t
amiga_partition_map_iterate (grub_disk_t disk,
        int (*hook) (grub_disk_t disk,
       const grub_partition_t partition,
       void *closure),
        void *closure)
{
  struct grub_partition part;
  struct grub_amiga_rdsk rdsk;
  int partno = 0;
  int next = -1;
  unsigned pos;


  for (pos = 0; pos < 15; pos++)
    {

      if (grub_disk_read (disk, pos, 0, sizeof (rdsk), &rdsk))
 return grub_errno;

      if (grub_strcmp ((char *) rdsk.magic, "RDSK") == 0)
 {

   next = grub_be_to_cpu32 (rdsk.partitionlst);
   break;
 }
    }

  if (next == -1)
    return grub_error (GRUB_ERR_BAD_PART_TABLE,
         "Amiga partition map not found");


  while (next != -1)
    {
      struct grub_amiga_partition apart;


      if (grub_disk_read (disk, next, 0, sizeof (apart), &apart))
 return grub_errno;


      part.start = (grub_be_to_cpu32 (apart.lowcyl)
      * grub_be_to_cpu32 (apart.heads)
      * grub_be_to_cpu32 (apart.block_per_track));
      part.len = ((grub_be_to_cpu32 (apart.highcyl)
     - grub_be_to_cpu32 (apart.lowcyl) + 1)
    * grub_be_to_cpu32 (apart.heads)
    * grub_be_to_cpu32 (apart.block_per_track));

      part.offset = (grub_off_t) next * 512;
      part.number = partno;
      part.index = 0;
      part.partmap = &grub_amiga_partition_map;

      if (hook (disk, &part, closure))
 return grub_errno;

      next = grub_be_to_cpu32 (apart.next);
      partno++;
    }

  return 0;
}



struct grub_partition_map grub_amiga_partition_map =
  {
    .name = "amiga",
    .iterate = amiga_partition_map_iterate,
  };
