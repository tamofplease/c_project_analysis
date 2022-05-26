# 1 "project/radare2/shlr/grub/partmap/bsdlabel.c"
# 20 "project/radare2/shlr/grub/partmap/bsdlabel.c"
#include <grub/partition.h>
#include <grub/bsdlabel.h>
#include <grub/disk.h>
#include <grub/mm.h>
#include <grub/misc.h>

struct grub_partition_map grub_bsdlabel_partition_map;


static grub_err_t
bsdlabel_partition_map_iterate (grub_disk_t disk,
    int (*hook) (grub_disk_t disk,
          const grub_partition_t partition,
          void *closure),
    void *closure)
{
  struct grub_partition_bsd_disk_label label;
  struct grub_partition p;
  grub_disk_addr_t delta = 0;
  unsigned pos;


  delta = grub_partition_get_start (disk->partition);


  if (grub_disk_read (disk, GRUB_PC_PARTITION_BSD_LABEL_SECTOR,
        0, sizeof (label), &label))
    return grub_errno;


  if (label.magic != grub_cpu_to_le32 (GRUB_PC_PARTITION_BSD_LABEL_MAGIC))
    return grub_error (GRUB_ERR_BAD_PART_TABLE, "no signature");

  pos = sizeof (label) + GRUB_PC_PARTITION_BSD_LABEL_SECTOR
    * GRUB_DISK_SECTOR_SIZE;

  for (p.number = 0;
       p.number < grub_cpu_to_le16 (label.num_partitions);
       p.number++)
    {
      struct grub_partition_bsd_entry be;

      p.offset = pos / GRUB_DISK_SECTOR_SIZE;
      p.index = pos % GRUB_DISK_SECTOR_SIZE;

      if (grub_disk_read (disk, p.offset, p.index, sizeof (be), &be))
 return grub_errno;

      p.start = grub_le_to_cpu32 (be.offset) - delta;
      p.len = grub_le_to_cpu32 (be.size);
      p.partmap = &grub_bsdlabel_partition_map;

      if (be.fs_type != GRUB_PC_PARTITION_BSD_TYPE_UNUSED)
 if (hook (disk, &p, closure))
   return grub_errno;

      pos += sizeof (struct grub_partition_bsd_entry);
    }

  return GRUB_ERR_NONE;
}



struct grub_partition_map grub_bsdlabel_partition_map =
  {
    .name = "bsd",
    .iterate = bsdlabel_partition_map_iterate,
  };
