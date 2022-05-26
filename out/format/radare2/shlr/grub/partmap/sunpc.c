# 1 "project/radare2/shlr/grub/partmap/sunpc.c"
# 20 "project/radare2/shlr/grub/partmap/sunpc.c"
#include <grub/partition.h>
#include <grub/disk.h>
#include <grub/mm.h>
#include <grub/misc.h>
#include <grub/symbol.h>
#include <grub/types.h>
#include <grub/err.h>
#include <r_types.h>

#define GRUB_PARTMAP_SUN_PC_MAGIC 0xDABE
#define GRUB_PARTMAP_SUN_PC_MAX_PARTS 16
#define GRUB_PARTMAP_SUN_PC_WHOLE_DISK_ID 0x05

R_PACKED (
struct grub_sun_pc_partition_descriptor
{
  grub_uint16_t id;
  grub_uint16_t unused;
  grub_uint32_t start_sector;
  grub_uint32_t num_sectors;
});

R_PACKED (
struct grub_sun_pc_block
{
  grub_uint8_t unused[72];
  struct grub_sun_pc_partition_descriptor partitions[GRUB_PARTMAP_SUN_PC_MAX_PARTS];
  grub_uint8_t unused2[244];
  grub_uint16_t magic;
  grub_uint16_t csum;
});

struct grub_partition_map grub_sun_pc_partition_map;


static int
grub_sun_is_valid (struct grub_sun_pc_block *label)
{
  grub_unaligned_uint16_t *pos;
  grub_uint16_t sum = 0;

  for (pos = (grub_uint16_t *) label;
       pos < (grub_uint16_t *) (label + 1);
       pos++)
    sum ^= *pos;

  return ! sum;
}

static grub_err_t
sun_pc_partition_map_iterate (grub_disk_t disk,
         int (*hook) (grub_disk_t disk,
        const grub_partition_t partition,
        void *closure),
         void *closure)
{
  grub_partition_t p;
  struct grub_sun_pc_block block;
  int partnum;
  grub_err_t err;

  p = (grub_partition_t) grub_zalloc (sizeof (struct grub_partition));
  if (! p)
    return grub_errno;

  p->partmap = &grub_sun_pc_partition_map;
  err = grub_disk_read (disk, 1, 0, sizeof (struct grub_sun_pc_block), &block);
  if (err)
    {
      grub_free (p);
      return err;
    }

  if (GRUB_PARTMAP_SUN_PC_MAGIC != grub_le_to_cpu16 (block.magic))
    {
      grub_free (p);
      return grub_error (GRUB_ERR_BAD_PART_TABLE,
    "not a sun_pc partition table");
    }

  if (! grub_sun_is_valid (&block))
    {
      grub_free (p);
      return grub_error (GRUB_ERR_BAD_PART_TABLE, "invalid checksum");
    }



  for (partnum = 0; partnum < GRUB_PARTMAP_SUN_PC_MAX_PARTS; partnum++)
    {
      struct grub_sun_pc_partition_descriptor *desc;

      if (block.partitions[partnum].id == 0
   || block.partitions[partnum].id == GRUB_PARTMAP_SUN_PC_WHOLE_DISK_ID)
 continue;

      desc = &block.partitions[partnum];
      p->start = grub_le_to_cpu32 (desc->start_sector);
      p->len = grub_le_to_cpu32 (desc->num_sectors);
      p->number = partnum;
      if (p->len)
 {
   if (hook (disk, p, closure))
     partnum = GRUB_PARTMAP_SUN_PC_MAX_PARTS;
 }
    }

  grub_free (p);

  return grub_errno;
}


struct grub_partition_map grub_sun_pc_partition_map =
  {
    .name = "sunpc",
    .iterate = sun_pc_partition_map_iterate,
  };
