# 1 "project/radare2/shlr/grub/partmap/apple.c"
# 20 "project/radare2/shlr/grub/partmap/apple.c"
#include <grub/disk.h>
#include <grub/misc.h>
#include <grub/mm.h>
#include <grub/partition.h>

#define GRUB_APPLE_HEADER_MAGIC 0x4552
#define GRUB_APPLE_PART_MAGIC 0x504D

struct grub_apple_header
{


  grub_uint16_t magic;
  grub_uint16_t blocksize;
};

struct grub_apple_part
{


  grub_uint16_t magic;


  grub_uint16_t reserved;


  grub_uint32_t partmap_size;


  grub_uint32_t first_phys_block;


  grub_uint32_t blockcnt;


  char partname[32];


  char parttype[32];


  grub_uint32_t datablocks_first;


  grub_uint32_t datablocks_count;


  grub_uint32_t status;


  grub_uint32_t bootcode_pos;


  grub_uint32_t bootcode_size;


  grub_uint32_t bootcode_loadaddr;


  grub_uint32_t reserved2;


  grub_uint32_t bootcode_entrypoint;


  grub_uint32_t reserved3;


  grub_uint32_t bootcode_checksum;


  char processor[16];


  grub_uint16_t pad[187];
};

struct grub_partition_map grub_apple_partition_map;


static grub_err_t
apple_partition_map_iterate (grub_disk_t disk,
        int (*hook) (grub_disk_t disk,
       const grub_partition_t partition,
       void *closure),
        void *closure)
{
  struct grub_partition part;
  struct grub_apple_header aheader;
  struct grub_apple_part apart;
  int partno = 0, partnum = 0;
  unsigned pos;

  part.partmap = &grub_apple_partition_map;

  if (grub_disk_read (disk, 0, 0, sizeof (aheader), &aheader))
    return grub_errno;

  if (grub_be_to_cpu16 (aheader.magic) != GRUB_APPLE_HEADER_MAGIC)
    {
      grub_dprintf ("partition",
      "bad magic (found 0x%x; wanted 0x%x\n",
      grub_be_to_cpu16 (aheader.magic),
      GRUB_APPLE_HEADER_MAGIC);
      goto fail;
    }

  pos = grub_be_to_cpu16 (aheader.blocksize);

  do
    {
      part.offset = pos / GRUB_DISK_SECTOR_SIZE;
      part.index = pos % GRUB_DISK_SECTOR_SIZE;

      if (grub_disk_read (disk, part.offset, part.index,
     sizeof (struct grub_apple_part), &apart))
 return grub_errno;

      if (grub_be_to_cpu16 (apart.magic) != GRUB_APPLE_PART_MAGIC)
 {
   grub_dprintf ("partition",
   "partition %d: bad magic (found 0x%x; wanted 0x%x\n",
   partno, grub_be_to_cpu16 (apart.magic),
   GRUB_APPLE_PART_MAGIC);
   break;
 }

      if (partnum == 0)
 partnum = grub_be_to_cpu32 (apart.partmap_size);

      part.start = ((grub_disk_addr_t) grub_be_to_cpu32 (apart.first_phys_block)
      * grub_be_to_cpu16 (aheader.blocksize))
 / GRUB_DISK_SECTOR_SIZE;
      part.len = ((grub_disk_addr_t) grub_be_to_cpu32 (apart.blockcnt)
    * grub_be_to_cpu16 (aheader.blocksize))
 / GRUB_DISK_SECTOR_SIZE;
      part.offset = pos;
      part.index = partno;
      part.number = partno;

      grub_dprintf ("partition",
      "partition %d: name %s, type %s, start 0x%x, len 0x%x\n",
      partno, apart.partname, apart.parttype,
      grub_be_to_cpu32 (apart.first_phys_block),
      grub_be_to_cpu32 (apart.blockcnt));

      if (hook (disk, &part, closure))
 return grub_errno;

      pos += grub_be_to_cpu16 (aheader.blocksize);
      partno++;
    }
  while (partno < partnum);

  if (partno != 0)
    return 0;

 fail:
  return grub_error (GRUB_ERR_BAD_PART_TABLE,
       "Apple partition map not found");
}



struct grub_partition_map grub_apple_partition_map =
  {
    .name = "apple",
    .iterate = apple_partition_map_iterate,
  };
