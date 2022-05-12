# 0 "project/radare2/libr/debug/p/native/maps/darwin.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/debug/p/native/maps/darwin.c"


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
# 33 "project/radare2/libr/debug/p/native/maps/darwin.c"
vm_address_t get_kernel_base(task_t ___task) {
 kern_return_t ret;
 task_t task;
 vm_region_submap_info_data_64_t info;
 ut64 size;
 mach_msg_type_number_t info_count = VM_REGION_SUBMAP_INFO_COUNT_64;
 unsigned int depth = 0;
 ut64 addr = 0xffffff8000000000;
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
   return addr + 0x2000;
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



 size = osize = 4096;
# 98 "project/radare2/libr/debug/p/native/maps/darwin.c"
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

   int ret = proc_regionfilename (dbg->pid, address,
    module_name, sizeof (module_name));




   module_name[ret] = 0;


   snprintf (buf, sizeof (buf), "%s %02x %s%s%s%s%s %s depth=%d",
    r_str_rwx_i (((info.max_protection&1)<<2) | (info.max_protection&2) | ((info.max_protection&4)>>2)), i,
    unparse_inheritance (info.inheritance),
    info.user_tag? " user": "",
    info.is_submap? " sub": "",
    info.inheritance? " inherit": "",
    info.is_submap ? " submap": "",
    module_name, depth);



   mr = r_debug_map_new (buf, address, address+size,
     ((info.protection&1)<<2) | (info.protection&2) | ((info.protection&4)>>2), 0);
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
# 314 "project/radare2/libr/debug/p/native/maps/darwin.c"
static RList *darwin_dbg_maps(RDebug *dbg) {

 return ios_dbg_maps (dbg);







}
