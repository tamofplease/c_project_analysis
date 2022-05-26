# 1 "project/radare2/libr/debug/p/native/maps/darwin.c"
#if __APPLE__

kern_return_t mach_vm_region_recurse (
 vm_map_t target_task,
 mach_vm_address_t *address,
 mach_vm_size_t *size,
 natural_t *nesting_depth,
 vm_region_recurse_info_t info,
 mach_msg_type_number_t *infoCnt
);

static const char *unparse_inheritance(vm_inherit_t i) {
 switch (i) {
 case VM_INHERIT_SHARE: return "share";
 case VM_INHERIT_COPY: return "copy";
 case VM_INHERIT_NONE: return "none";
 default: return "???";
 }
}

#if __LP64__
#define ADDR "%16lx"
#define HEADER_SIZE 0x1000
#define IMAGE_OFFSET 0x2000
#define KERNEL_LOWER 0xffffff8000000000
#else
#define ADDR "%8x"
#define HEADER_SIZE 0x1000
#define IMAGE_OFFSET 0x201000
#define KERNEL_LOWER 0x80000000
#endif

vm_address_t get_kernel_base(task_t ___task) {
 kern_return_t ret;
 task_t task;
 vm_region_submap_info_data_64_t info;
 ut64 size;
 mach_msg_type_number_t info_count = VM_REGION_SUBMAP_INFO_COUNT_64;
 unsigned int depth = 0;
 ut64 addr = KERNEL_LOWER;
 int count;

 ret = task_for_pid(mach_task_self(), 0, &task);
 if (ret != KERN_SUCCESS)
  return 0;
 ut64 naddr;
 eprintf ("%d vs %d\n", task, ___task);
 for (count=128; count; count--) {

  naddr = addr;
  ret = vm_region_recurse_64 (task, (vm_address_t*)&naddr, (vm_size_t*)&size,
    &depth, (vm_region_info_t)&info, &info_count);
  if (ret != KERN_SUCCESS)
   break;
  if (size<1) break;
  if (addr == naddr) {
   addr += size;
   continue;
  }
  eprintf ("0x%08"PFMT64x" size 0x%08"PFMT64x" perm 0x%x\n", (ut64)addr, (ut64)size, info.max_protection);


  if (size > 1024*1024*1024) {
   return addr + IMAGE_OFFSET;
  }
  addr += size;
 }
 return (vm_address_t)0;
}

extern int proc_regionfilename(int pid, uint64_t address, void * buffer, uint32_t buffersize);

static RList *ios_dbg_maps(RDebug *dbg) {
 bool contiguous = false;
 ut32 oldprot = UT32_MAX;
 char buf[1024];
 mach_vm_address_t address = MACH_VM_MIN_ADDRESS;
 mach_vm_size_t size = (mach_vm_size_t) 0;
 mach_vm_size_t osize = (mach_vm_size_t) 0;
 natural_t depth = 0;
 task_t task = pid_to_task (dbg->tid);
 RDebugMap *mr = NULL;
 RList *list = NULL;
 int i = 0;
#if __arm64__ || __aarch64__
 size = osize = 16384;
#else
 size = osize = 4096;
#endif
#if 0
 if (dbg->pid == 0) {
  vm_address_t base = get_kernel_base (task);
  eprintf ("Kernel Base Address: 0x%"PFMT64x"\n", (ut64)base);
  return NULL;
 }
#endif

 kern_return_t kr;
 for (;;) {
  struct vm_region_submap_info_64 info;
  mach_msg_type_number_t info_count;

  depth = VM_REGION_BASIC_INFO_64;
  info_count = VM_REGION_SUBMAP_INFO_COUNT_64;
  memset (&info, 0, sizeof (info));
  kr = mach_vm_region_recurse (task, &address, &size, &depth,
   (vm_region_recurse_info_t) &info, &info_count);
  if (kr != KERN_SUCCESS) {

   break;
  }
  if (!list) {
   list = r_list_new ();

  }
  if (mr) {
   if (address == mr->addr + mr->size) {
    if (oldprot != UT32_MAX && oldprot == info.protection) {

     mr->size += size;
     contiguous = true;
    } else {
     contiguous = false;
    }
   } else {
    contiguous = false;
   }
  } else contiguous = false;
  oldprot = info.protection;
  if (info.max_protection!=0 && !contiguous) {
   char module_name[1024];
   module_name[0] = 0;
#ifndef __POWERPC__
   int ret = proc_regionfilename (dbg->pid, address,
    module_name, sizeof (module_name));
#else
#warning TODO: support proc_regionfilename on old OSX (ppc)
   int ret = 0;
#endif
   module_name[ret] = 0;
   #define xwr2rwx(x) ((x&1)<<2) | (x&2) | ((x&4)>>2)

   snprintf (buf, sizeof (buf), "%s %02x %s%s%s%s%s %s depth=%d",
    r_str_rwx_i (xwr2rwx (info.max_protection)), i,
    unparse_inheritance (info.inheritance),
    info.user_tag? " user": "",
    info.is_submap? " sub": "",
    info.inheritance? " inherit": "",
    info.is_submap ? " submap": "",
    module_name, depth);



   mr = r_debug_map_new (buf, address, address+size,
     xwr2rwx (info.protection), 0);
   if (!mr) {
    eprintf ("Cannot create r_debug_map_new\n");
    break;
   }
   mr->file = strdup (module_name);
   i++;
   r_list_append (list, mr);
  }
  if (size<1) size = osize;
  address += size;
  size = 0;
 }
 return list;
}

#if 0

static RList *osx_dbg_maps (RDebug *dbg) {
 RDebugMap *mr;
 char buf[1024];
 int i, print;
 kern_return_t kret;
 vm_region_basic_info_data_64_t info, prev_info;
 mach_vm_address_t prev_address;
 mach_vm_size_t size, prev_size;
 mach_port_t object_name;
 mach_msg_type_number_t count;
 int nsubregions = 0;
 int num_printed = 0;
 size_t address = 0;
 task_t task = pid_to_task (dbg->pid);
 RList *list = r_list_new ();
# 199 "project/radare2/libr/debug/p/native/maps/darwin.c"
#if __arm64__ || __aarch64__
 size = 16384;
#else
 size = 4096;
#endif
 memset (&prev_info, 0, sizeof (prev_info));
 prev_address = address;
 prev_size = size;
 nsubregions = 1;

 for (i=0; ; i++) {
  int done = 0;

  address = prev_address + prev_size;
  print = 0;

  if (prev_size==0)
   break;

  if (address == 0)
   done = 1;

  if (!done) {
   count = VM_REGION_BASIC_INFO_COUNT_64;
   kret = mach_vm_region (task, (mach_vm_address_t *)&address,
     &size, VM_REGION_BASIC_INFO_64,
     (vm_region_info_t) &info, &count, &object_name);
   if (kret != KERN_SUCCESS) {
    size = 0;
    print = done = 1;
   }
  }

  if (address != prev_address + prev_size)
   print = 1;

  if ((info.protection != prev_info.protection)
    || (info.max_protection != prev_info.max_protection)
    || (info.inheritance != prev_info.inheritance)
    || (info.shared != prev_info.reserved)
    || (info.reserved != prev_info.reserved))
   print = 1;


   {
   char module_name[1024];
   module_name[0] = 0;
   int ret = proc_regionfilename (dbg->pid, address, module_name, sizeof (module_name));
   module_name[ret] = 0;

  #define xwr2rwx(x) ((x&1)<<2) | (x&2) | ((x&4)>>2)
  if (print && size>0 && prev_info.inheritance != VM_INHERIT_SHARE) {
   snprintf (buf, sizeof (buf), "%s %02x %s/%s/%s %s",
     r_str_rwx_i (xwr2rwx (prev_info.max_protection)), i,
     unparse_inheritance (prev_info.inheritance),
     prev_info.shared ? "shar" : "priv",
     prev_info.reserved ? "reserved" : "not-reserved",
     module_name);


   mr = r_debug_map_new (buf, prev_address, prev_address+prev_size,
    xwr2rwx (prev_info.protection), 0);
   if (!mr) {
    eprintf ("Cannot create r_debug_map_new\n");
    break;
   }
   mr->file = strdup (module_name);
   r_list_append (list, mr);
  }
}
#if 0
  if (1==0 && rest) {
   addr = 0LL;
   addr = (ut64) (ut32) prev_address;
   if (num_printed == 0)
    fprintf(stderr, "Region ");
   else fprintf(stderr, "   ... ");
   fprintf(stderr, " 0x%08llx - 0x%08llx %s (%s) %s, %s, %s",
     addr, addr + prev_size,
     unparse_protection (prev_info.protection),
     unparse_protection (prev_info.max_protection),
     unparse_inheritance (prev_info.inheritance),
     prev_info.shared ? "shared" : " private",
     prev_info.reserved ? "reserved" : "not-reserved");

   if (nsubregions > 1)
    fprintf(stderr, " (%d sub-regions)", nsubregions);

   fprintf(stderr, "\n");

   prev_address = address;
   prev_size = size;
   memcpy (&prev_info, &info, sizeof (vm_region_basic_info_data_64_t));
   nsubregions = 1;

   num_printed++;
  } else {
#endif
#if 0
   prev_size += size;
   nsubregions++;
#else
   prev_address = address;
   prev_size = size;
   memcpy (&prev_info, &info, sizeof (vm_region_basic_info_data_64_t));
   nsubregions = 1;

   num_printed++;
#endif

 }
 return list;
}
#endif

static RList *darwin_dbg_maps(RDebug *dbg) {

 return ios_dbg_maps (dbg);
#if 0
 const char *osname = dbg->anal->syscall->os;
 if (osname && !strcmp (osname, "ios")) {
  return ios_dbg_maps (dbg);
 }
 return osx_dbg_maps (dbg);
#endif
}

#endif
