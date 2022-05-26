# 1 "project/radare2/shlr/grub/partmap/gpt.c"
# 20 "project/radare2/shlr/grub/partmap/gpt.c"
#include <r_types.h>
#include <grub/disk.h>
#include <grub/misc.h>
#include <grub/mm.h>
#include <grub/partition.h>
#include <grub/msdos_partition.h>
#include <grub/gpt_partition.h>

static grub_uint8_t grub_gpt_magic[8] =
  {
    0x45, 0x46, 0x49, 0x20, 0x50, 0x41, 0x52, 0x54
  };

static const grub_gpt_part_type_t grub_gpt_partition_type_empty = GRUB_GPT_PARTITION_TYPE_EMPTY;

struct grub_partition_map grub_gpt_partition_map;



static grub_err_t
gpt_partition_map_iterate (grub_disk_t disk,
      int (*hook) (grub_disk_t disk,
     const grub_partition_t partition,
     void *closure),
      void *closure)
{
  struct grub_partition part;
  struct grub_gpt_header gpt;
  struct grub_gpt_partentry entry;
  struct grub_msdos_partition_mbr mbr;
  grub_uint64_t entries;
  unsigned int i;
  int last_offset = 0;


  if (grub_disk_read (disk, 0, 0, sizeof (mbr), &mbr))
    return grub_errno;


  if (mbr.signature != grub_cpu_to_le16 (GRUB_PC_PARTITION_SIGNATURE))
    return grub_error (GRUB_ERR_BAD_PART_TABLE, "no signature");


  if (mbr.entries[0].type != GRUB_PC_PARTITION_TYPE_GPT_DISK)
    return grub_error (GRUB_ERR_BAD_PART_TABLE, "no GPT partition map found");


  if (grub_disk_read (disk, 1, 0, sizeof (gpt), &gpt))
    return grub_errno;

  if (grub_memcmp (gpt.magic, grub_gpt_magic, sizeof (grub_gpt_magic)))
    return grub_error (GRUB_ERR_BAD_PART_TABLE, "no valid GPT header");

  grub_dprintf ("gpt", "Read a valid GPT header\n");

  entries = grub_le_to_cpu64 (gpt.partitions);
  for (i = 0; i < grub_le_to_cpu32 (gpt.maxpart); i++)
    {
      if (grub_disk_read (disk, entries, last_offset,
     sizeof (entry), &entry))
 return grub_errno;

      if (grub_memcmp (&grub_gpt_partition_type_empty, &entry.type,
         sizeof (grub_gpt_partition_type_empty)))
 {

          memset (&part, 0, sizeof (struct grub_partition));
   part.start = grub_le_to_cpu64 (entry.start);
   part.len = (grub_le_to_cpu64 (entry.end)
        - grub_le_to_cpu64 (entry.start) + 1);
   part.offset = entries;
   part.number = i;
   part.index = last_offset;
   part.msdostype = 0;
   part.partmap = &grub_gpt_partition_map;

   grub_dprintf ("gpt", "GPT entry %d: start=%"PFMT64d", length=%"PFMT64d"\n", i,
   (ut64) part.start, (ut64) part.len);

   if (hook (disk, &part, closure))
     return grub_errno;
 }

      last_offset += grub_le_to_cpu32 (gpt.partentry_size);
      if (last_offset == GRUB_DISK_SECTOR_SIZE) {
   last_offset = 0;
   entries++;
 }
    }

  return GRUB_ERR_NONE;
}



struct grub_partition_map grub_gpt_partition_map =
  {
    .name = "gpt",
    .iterate = gpt_partition_map_iterate,
  };
