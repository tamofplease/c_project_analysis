# 0 "project/radare2/libr/core/linux_heap_jemalloc.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/core/linux_heap_jemalloc.c"





# 1 "project/radare2/libr/core/linux_heap_jemalloc.c" 1
# 94 "project/radare2/libr/core/linux_heap_jemalloc.c"
static bool r_resolve_jemalloc_32(RCore *core, char *symname, ut64 *symbol) {
 RListIter *iter;
 RDebugMap *map;
 const char *path = NULL;
 ut64 jemalloc_addr = UT64_MAX;

 if (!core || !core->dbg || !core->dbg->maps){
  return false;
 }
 r_debug_map_sync (core->dbg);
 r_list_foreach (core->dbg->maps, iter, map) {
  if (strstr (map->name, "libjemalloc.")) {
   jemalloc_addr = map->addr;
   path = map->name;
   break;
  }
 }
 if (!path) {
  eprintf ("Warning: cannot find jemalloc mapped in memory (see `dm`)\n");
  return false;
 }
# 131 "project/radare2/libr/core/linux_heap_jemalloc.c"
 eprintf ("[*] Resolving %s from libjemalloc.2... ", symname);

 char *va = r_core_cmd_strf (core, "dmi libjemalloc.2 %s$~[1]", symname);
 ut64 n = r_num_get (NULL, va);
 if (n && n != UT64_MAX) {
  *symbol = n;
  eprintf ("0x%08"PFMT64x"\n", n);
 } else {
  eprintf ("NOT FOUND\n");
 }
 free (va);
 return true;

}

static void jemalloc_get_chunks_32(RCore *core, const char *input) {
 ut64 cnksz;
 RConsPrintablePalette *pal = &r_cons_singleton ()->context->pal;

 if (!r_resolve_jemalloc_32(core, "je_chunksize", &cnksz)) {
  eprintf ("Fail at read symbol je_chunksize\n");
  return;
 }
 r_io_read_at (core->io, cnksz, (ut8 *)&cnksz, sizeof (ut32));

 switch (input[0]) {
 case '\0':
  eprintf ("need an arena_t to associate chunks");
  break;
 case ' ':
  {
   ut32 arena = UT32_MAX;
   arena_t *ar = R_NEW0 (arena_t);
   extent_node_t *node = R_NEW0 (extent_node_t), *head = R_NEW0 (extent_node_t);
   input++;
   arena = r_num_math (core->num, input);

   if (arena) {
    r_io_read_at (core->io, arena, (ut8 *)ar, sizeof (arena_t));
    r_io_read_at (core->io, (ut32)(size_t)ar->achunks.qlh_first, (ut8 *)head, sizeof (extent_node_t));
    if (head->en_addr) {
     PRINT_YA ("   Chunk - start: ");
     PRINTF_BA ("0x%08"PFMT64x, (ut64)(size_t)head->en_addr);
     PRINT_YA (", end: ");
     PRINTF_BA ("0x%08"PFMT64x, (ut64)(size_t)((char *)head->en_addr + cnksz));
     PRINT_YA (", size: ");
     PRINTF_BA ("0x%08"PFMT64x"\n", (ut64)cnksz);
     r_io_read_at (core->io, (ut64)(size_t)head->ql_link.qre_next, (ut8 *)node, sizeof (extent_node_t));
     while (node && node->en_addr != head->en_addr) {
      PRINT_YA ("   Chunk - start: ");
      PRINTF_BA ("0x%08"PFMT64x, (ut64)(size_t)node->en_addr);
      PRINT_YA (", end: ");
      PRINTF_BA ("0x%"PFMT64x, (ut64)(size_t)((char *)node->en_addr + cnksz));
      PRINT_YA (", size: ");
      PRINTF_BA ("0x%08"PFMT64x"\n", cnksz);
      r_io_read_at (core->io, (ut64)(size_t)node->ql_link.qre_next, (ut8 *)node, sizeof (extent_node_t));
     }
    }
   }
   free (ar);
   free (head);
   free (node);
  break;
  }
 case '*':
  {
   int i = 0;
   ut64 sym;
   ut32 arenas = UT32_MAX, arena = UT32_MAX;
   arena_t *ar = R_NEW0 (arena_t);
   extent_node_t *node = R_NEW0 (extent_node_t);
   extent_node_t *head = R_NEW0 (extent_node_t);

   if (!node || !head) {
    eprintf ("Error calling calloc\n");
    free (ar);
    free (node);
    free (head);
    return;
   }

   if (r_resolve_jemalloc_32 (core, "je_arenas", &sym)) {
    r_io_read_at (core->io, sym, (ut8 *)&arenas, sizeof (ut32));
    for (;;) {
     r_io_read_at (core->io, arenas + i * sizeof (ut32), (ut8 *)&arena, sizeof (ut32));
     if (!arena) {
      break;
     }
     PRINTF_GA ("arenas[%d]: @ 0x%"PFMT32x " { \n", i++, (ut32)arena);
     r_io_read_at (core->io, arena, (ut8 *)ar, sizeof (arena_t));
     r_io_read_at (core->io, (ut32)(size_t)ar->achunks.qlh_first, (ut8 *)head, sizeof (extent_node_t));
     if (head->en_addr != 0) {
      PRINT_YA ("   Chunk - start: ");
      PRINTF_BA ("0x%08"PFMT64x, (ut64)(size_t)head->en_addr);
      PRINT_YA (", end: ");
      PRINTF_BA ("0x%"PFMT64x, (ut64)(size_t)((char *)head->en_addr + cnksz));
      PRINT_YA (", size: ");
      PRINTF_BA ("0x%08"PFMT64x"\n", (ut64)cnksz);
      ut64 addr = (ut64) (size_t)head->ql_link.qre_next;
      r_io_read_at (core->io, addr, (ut8 *)node, sizeof (extent_node_t));
      while (node && head && node->en_addr != head->en_addr) {
       PRINT_YA ("   Chunk - start: ");
       PRINTF_BA ("0x%08"PFMT64x, (ut64)(size_t)node->en_addr);
       PRINT_YA (", end: ");
       PRINTF_BA ("0x%"PFMT64x, (ut64)(size_t)((char *)node->en_addr + cnksz));
       PRINT_YA (", size: ");
       PRINTF_BA ("0x%"PFMT64x"\n", cnksz);
       r_io_read_at (core->io, (ut32)(size_t)node->ql_link.qre_next, (ut8 *)node, sizeof (extent_node_t));
      }
     }
     PRINT_GA ("}\n");
    }
   }
   free (ar);
   free (head);
   free (node);
  }
  break;
 }
}

static void jemalloc_print_narenas_32(RCore *core, const char *input) {
 ut64 symaddr;
 ut64 arenas;
 ut32 arena = UT32_MAX;
 arena_t *ar = R_NEW0 (arena_t);
 if (!ar) {
  return;
 }
 arena_stats_t *stats = R_NEW0 (arena_stats_t);
 if (!stats) {
  free (ar);
  return;
 }
 int i = 0;
 ut32 narenas = 0;
 RConsPrintablePalette *pal = &r_cons_singleton ()->context->pal;

 switch (input[0]) {
 case '\0':
  if (r_resolve_jemalloc_32(core, "narenas_total", &symaddr)) {
   r_io_read_at (core->io, symaddr, (ut8 *)&narenas, sizeof (ut32));
   PRINTF_GA ("narenas : %"PFMT64d"\n", (ut64)narenas);
  }
  if (narenas == 0) {
   eprintf ("No arenas allocated.\n");
   free (stats);
   free (ar);
   return;
  }
  if (narenas == UT32_MAX) {
   eprintf ("Cannot find narenas_total\n");
   free (stats);
   free (ar);
   return;
  }

  if (r_resolve_jemalloc_32(core, "je_arenas", &arenas)) {
   r_io_read_at (core->io, arenas, (ut8 *)&arenas, sizeof (ut32));
   PRINTF_GA ("arenas[%"PFMT64d"] @ 0x%"PFMT64x" {\n", (ut64)narenas, (ut64)arenas);
   for (i = 0; i < narenas; i++) {
    ut64 at = arenas + (i * sizeof (ut32));
    r_io_read_at (core->io, at, (ut8 *)&arena, sizeof (ut32));
    if (!arena) {
     PRINTF_YA ("  arenas[%d]: (empty)\n", i);
     continue;
    }
    PRINTF_YA ("  arenas[%d]: ", i);
    PRINTF_BA ("@ 0x%"PFMT64x"\n", at);
   }
  }
  PRINT_GA ("}\n");
  break;
 case ' ':
  arena = r_num_math (core->num, input + 1);
  r_io_read_at (core->io, (ut32)arena, (ut8 *)ar, sizeof (arena_t));

  PRINT_GA ("struct arena_s {\n");

  PRINTF_BA ("  ind = 0x%x\n", ar->ind);
  PRINTF_BA ("  nthreads: application allocation = 0x%"PFMT64x"\n", (ut64)ar->nthreads[0]);
  PRINTF_BA ("  nthreads: internal metadata allocation = 0x%"PFMT64x"\n", (ut64)ar->nthreads[1]);
  PRINTF_BA ("  lock = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, lock)));
  PRINTF_BA ("  stats = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, stats)));
  PRINTF_BA ("  tcache_ql = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, tcache_ql)));
  PRINTF_BA ("  prof_accumbytes = 0x%"PFMT64x"x\n", (ut64)ar->prof_accumbytes);
  PRINTF_BA ("  offset_state = 0x%"PFMT64x"\n", (ut64)ar->offset_state);
  PRINTF_BA ("  dss_prec_t = 0x%"PFMT64x"\n",(ut64)(arena + r_offsetof (arena_t, dss_prec)));
  PRINTF_BA ("  achunks = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, achunks)));
  PRINTF_BA ("  extent_sn_next = 0x%"PFMT64x"\n", (ut64)(size_t)ar->extent_sn_next);
  PRINTF_BA ("  spare = 0x%"PFMT64x"\n", (ut64)(size_t)ar->spare);
  PRINTF_BA ("  lg_dirty_mult = 0x%"PFMT64x"\n", (ut64)(ssize_t)ar->lg_dirty_mult);
  PRINTF_BA ("  purging = %s\n", r_str_bool (ar->purging));
  PRINTF_BA ("  nactive = 0x%"PFMT64x"\n", (ut64)(size_t)ar->nactive);
  PRINTF_BA ("  ndirty = 0x%"PFMT64x"\n", (ut64)(size_t)ar->ndirty);

  PRINTF_BA ("  runs_dirty = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, runs_dirty)));
  PRINTF_BA ("  chunks_cache = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, chunks_cache)));
  PRINTF_BA ("  huge = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, huge)));
  PRINTF_BA ("  huge_mtx = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, huge_mtx)));

  PRINTF_BA ("  chunks_szsnad_cached = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, chunks_szsnad_cached)));
  PRINTF_BA ("  chunks_ad_cached = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, chunks_ad_cached)));
  PRINTF_BA ("  chunks_szsnad_retained = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, chunks_szsnad_retained)));
  PRINTF_BA ("  chunks_ad_cached = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, chunks_ad_retained)));

  PRINTF_BA ("  chunks_mtx = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, chunks_mtx)));
  PRINTF_BA ("  node_cache = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, node_cache)));
  PRINTF_BA ("  node_cache_mtx = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, node_cache_mtx)));
  PRINTF_BA ("  chunks_hooks = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, chunk_hooks)));
  PRINTF_BA ("  bins = %d 0x%"PFMT64x"\n", JM_NBINS, (ut64)(arena + r_offsetof (arena_t, bins)));
  PRINTF_BA ("  runs_avail = %d 0x%"PFMT64x"\n", NPSIZES, (ut64)(arena + r_offsetof (arena_t, runs_avail)));
  PRINT_GA ("}\n");
  break;
 }
 free (ar);
 free (stats);
}

static void jemalloc_get_bins_32(RCore *core, const char *input) {
 int i = 0, j;
 ut64 bin_info;
 ut64 arenas;
 ut32 arena = UT32_MAX;
 arena_t *ar = NULL;
 arena_bin_info_t *b = NULL;
 RConsPrintablePalette *pal = &r_cons_singleton ()->context->pal;

 switch (input[0]) {
 case ' ':
  ar = R_NEW0 (arena_t);
  if (!ar) {
   break;
  }
  b = R_NEW0 (arena_bin_info_t);
  if (!b) {
   break;
  }
  if (!r_resolve_jemalloc_32(core, "je_arena_bin_info", &bin_info)) {
   eprintf ("Error resolving je_arena_bin_info\n");
   R_FREE (b);
   break;
  }
  if (r_resolve_jemalloc_32(core, "je_arenas", &arenas)) {
   r_io_read_at (core->io, arenas, (ut8 *)&arenas, sizeof (ut32));
   PRINTF_GA ("arenas @ 0x%"PFMT32x " {\n", (ut32)arenas);
   for (;;) {
    r_io_read_at (core->io, arenas + i * sizeof (ut32), (ut8 *)&arena, sizeof (ut32));
    if (!arena) {
     R_FREE (b);
     break;
    }
    PRINTF_YA ("   arenas[%d]: ", i++);
    PRINTF_BA ("@ 0x%"PFMT32x, (ut32)arena);
    PRINT_YA (" {\n");
    r_io_read_at (core->io, arena, (ut8 *)ar, sizeof (arena_t));
    for (j = 0; j < JM_NBINS; j++) {
     r_io_read_at (core->io, (ut32)(bin_info + j * sizeof (arena_bin_info_t)),
      (ut8*)b, sizeof (arena_bin_info_t));
     PRINT_YA ("    {\n");
     PRINT_YA ("       regsize : ");
     PRINTF_BA ("0x%zx\n", b->reg_size);
     PRINT_YA ("       redzone size ");
     PRINTF_BA ("0x%zx\n", b->redzone_size);
     PRINT_YA ("       reg_interval : ");
     PRINTF_BA ("0x%zx\n", b->reg_interval);
     PRINT_YA ("       run_size : ");
     PRINTF_BA ("0x%zx\n", b->run_size);
     PRINT_YA ("       nregs : ");
     PRINTF_BA ("0x%x\n", b->nregs);



     PRINT_YA ("       reg0_offset : ");
     PRINTF_BA ("0x%"PFMT64x"\n\n", (ut64)b->reg0_offset);
# 418 "project/radare2/libr/core/linux_heap_jemalloc.c"
     PRINT_YA ("    }\n");
    }
    PRINT_YA ("  }\n");
   }
  }
  PRINT_GA ("}\n");
  break;
 }
 free (ar);
 free (b);
}
# 520 "project/radare2/libr/core/linux_heap_jemalloc.c"
static int cmd_dbg_map_jemalloc_32(RCore *core, const char *input) {
 const char *help_msg[] = {
  "Usage:", "dmh", " # Memory map heap",
  "dmha", "[arena_t]", "show all arenas created, or print arena_t structure for given arena",
  "dmhb", "[arena_t]", "show all bins created for given arena",
  "dmhc", "*|[arena_t]", "show all chunks created in all arenas, or show all chunks created for a given arena_t instance",

  "dmh?", "", "Show map heap help", NULL
 };

 switch (input[0]) {
 case '?':
  r_core_cmd_help (core, help_msg);
  break;
 case 'a':
  jemalloc_print_narenas_32 (core, input + 1);
  break;
 case 'b':
  jemalloc_get_bins_32 (core, input + 1);
  break;
 case 'c':
  jemalloc_get_chunks_32 (core, input + 1);
  break;





 }
 return 0;
}
# 7 "project/radare2/libr/core/linux_heap_jemalloc.c" 2
# 94 "project/radare2/libr/core/linux_heap_jemalloc.c"
static bool r_resolve_jemalloc_64(RCore *core, char *symname, ut64 *symbol) {
 RListIter *iter;
 RDebugMap *map;
 const char *path = NULL;
 ut64 jemalloc_addr = UT64_MAX;

 if (!core || !core->dbg || !core->dbg->maps){
  return false;
 }
 r_debug_map_sync (core->dbg);
 r_list_foreach (core->dbg->maps, iter, map) {
  if (strstr (map->name, "libjemalloc.")) {
   jemalloc_addr = map->addr;
   path = map->name;
   break;
  }
 }
 if (!path) {
  eprintf ("Warning: cannot find jemalloc mapped in memory (see `dm`)\n");
  return false;
 }
# 131 "project/radare2/libr/core/linux_heap_jemalloc.c"
 eprintf ("[*] Resolving %s from libjemalloc.2... ", symname);

 char *va = r_core_cmd_strf (core, "dmi libjemalloc.2 %s$~[1]", symname);
 ut64 n = r_num_get (NULL, va);
 if (n && n != UT64_MAX) {
  *symbol = n;
  eprintf ("0x%08"PFMT64x"\n", n);
 } else {
  eprintf ("NOT FOUND\n");
 }
 free (va);
 return true;

}

static void jemalloc_get_chunks_64(RCore *core, const char *input) {
 ut64 cnksz;
 RConsPrintablePalette *pal = &r_cons_singleton ()->context->pal;

 if (!r_resolve_jemalloc_64(core, "je_chunksize", &cnksz)) {
  eprintf ("Fail at read symbol je_chunksize\n");
  return;
 }
 r_io_read_at (core->io, cnksz, (ut8 *)&cnksz, sizeof (ut64));

 switch (input[0]) {
 case '\0':
  eprintf ("need an arena_t to associate chunks");
  break;
 case ' ':
  {
   ut64 arena = UT64_MAX;
   arena_t *ar = R_NEW0 (arena_t);
   extent_node_t *node = R_NEW0 (extent_node_t), *head = R_NEW0 (extent_node_t);
   input++;
   arena = r_num_math (core->num, input);

   if (arena) {
    r_io_read_at (core->io, arena, (ut8 *)ar, sizeof (arena_t));
    r_io_read_at (core->io, (ut64)(size_t)ar->achunks.qlh_first, (ut8 *)head, sizeof (extent_node_t));
    if (head->en_addr) {
     PRINT_YA ("   Chunk - start: ");
     PRINTF_BA ("0x%08"PFMT64x, (ut64)(size_t)head->en_addr);
     PRINT_YA (", end: ");
     PRINTF_BA ("0x%08"PFMT64x, (ut64)(size_t)((char *)head->en_addr + cnksz));
     PRINT_YA (", size: ");
     PRINTF_BA ("0x%08"PFMT64x"\n", (ut64)cnksz);
     r_io_read_at (core->io, (ut64)(size_t)head->ql_link.qre_next, (ut8 *)node, sizeof (extent_node_t));
     while (node && node->en_addr != head->en_addr) {
      PRINT_YA ("   Chunk - start: ");
      PRINTF_BA ("0x%08"PFMT64x, (ut64)(size_t)node->en_addr);
      PRINT_YA (", end: ");
      PRINTF_BA ("0x%"PFMT64x, (ut64)(size_t)((char *)node->en_addr + cnksz));
      PRINT_YA (", size: ");
      PRINTF_BA ("0x%08"PFMT64x"\n", cnksz);
      r_io_read_at (core->io, (ut64)(size_t)node->ql_link.qre_next, (ut8 *)node, sizeof (extent_node_t));
     }
    }
   }
   free (ar);
   free (head);
   free (node);
  break;
  }
 case '*':
  {
   int i = 0;
   ut64 sym;
   ut64 arenas = UT64_MAX, arena = UT64_MAX;
   arena_t *ar = R_NEW0 (arena_t);
   extent_node_t *node = R_NEW0 (extent_node_t);
   extent_node_t *head = R_NEW0 (extent_node_t);

   if (!node || !head) {
    eprintf ("Error calling calloc\n");
    free (ar);
    free (node);
    free (head);
    return;
   }

   if (r_resolve_jemalloc_64 (core, "je_arenas", &sym)) {
    r_io_read_at (core->io, sym, (ut8 *)&arenas, sizeof (ut64));
    for (;;) {
     r_io_read_at (core->io, arenas + i * sizeof (ut64), (ut8 *)&arena, sizeof (ut64));
     if (!arena) {
      break;
     }
     PRINTF_GA ("arenas[%d]: @ 0x%"PFMT64x " { \n", i++, (ut64)arena);
     r_io_read_at (core->io, arena, (ut8 *)ar, sizeof (arena_t));
     r_io_read_at (core->io, (ut64)(size_t)ar->achunks.qlh_first, (ut8 *)head, sizeof (extent_node_t));
     if (head->en_addr != 0) {
      PRINT_YA ("   Chunk - start: ");
      PRINTF_BA ("0x%08"PFMT64x, (ut64)(size_t)head->en_addr);
      PRINT_YA (", end: ");
      PRINTF_BA ("0x%"PFMT64x, (ut64)(size_t)((char *)head->en_addr + cnksz));
      PRINT_YA (", size: ");
      PRINTF_BA ("0x%08"PFMT64x"\n", (ut64)cnksz);
      ut64 addr = (ut64) (size_t)head->ql_link.qre_next;
      r_io_read_at (core->io, addr, (ut8 *)node, sizeof (extent_node_t));
      while (node && head && node->en_addr != head->en_addr) {
       PRINT_YA ("   Chunk - start: ");
       PRINTF_BA ("0x%08"PFMT64x, (ut64)(size_t)node->en_addr);
       PRINT_YA (", end: ");
       PRINTF_BA ("0x%"PFMT64x, (ut64)(size_t)((char *)node->en_addr + cnksz));
       PRINT_YA (", size: ");
       PRINTF_BA ("0x%"PFMT64x"\n", cnksz);
       r_io_read_at (core->io, (ut64)(size_t)node->ql_link.qre_next, (ut8 *)node, sizeof (extent_node_t));
      }
     }
     PRINT_GA ("}\n");
    }
   }
   free (ar);
   free (head);
   free (node);
  }
  break;
 }
}

static void jemalloc_print_narenas_64(RCore *core, const char *input) {
 ut64 symaddr;
 ut64 arenas;
 ut64 arena = UT64_MAX;
 arena_t *ar = R_NEW0 (arena_t);
 if (!ar) {
  return;
 }
 arena_stats_t *stats = R_NEW0 (arena_stats_t);
 if (!stats) {
  free (ar);
  return;
 }
 int i = 0;
 ut64 narenas = 0;
 RConsPrintablePalette *pal = &r_cons_singleton ()->context->pal;

 switch (input[0]) {
 case '\0':
  if (r_resolve_jemalloc_64(core, "narenas_total", &symaddr)) {
   r_io_read_at (core->io, symaddr, (ut8 *)&narenas, sizeof (ut64));
   PRINTF_GA ("narenas : %"PFMT64d"\n", (ut64)narenas);
  }
  if (narenas == 0) {
   eprintf ("No arenas allocated.\n");
   free (stats);
   free (ar);
   return;
  }
  if (narenas == UT64_MAX) {
   eprintf ("Cannot find narenas_total\n");
   free (stats);
   free (ar);
   return;
  }

  if (r_resolve_jemalloc_64(core, "je_arenas", &arenas)) {
   r_io_read_at (core->io, arenas, (ut8 *)&arenas, sizeof (ut64));
   PRINTF_GA ("arenas[%"PFMT64d"] @ 0x%"PFMT64x" {\n", (ut64)narenas, (ut64)arenas);
   for (i = 0; i < narenas; i++) {
    ut64 at = arenas + (i * sizeof (ut64));
    r_io_read_at (core->io, at, (ut8 *)&arena, sizeof (ut64));
    if (!arena) {
     PRINTF_YA ("  arenas[%d]: (empty)\n", i);
     continue;
    }
    PRINTF_YA ("  arenas[%d]: ", i);
    PRINTF_BA ("@ 0x%"PFMT64x"\n", at);
   }
  }
  PRINT_GA ("}\n");
  break;
 case ' ':
  arena = r_num_math (core->num, input + 1);
  r_io_read_at (core->io, (ut64)arena, (ut8 *)ar, sizeof (arena_t));

  PRINT_GA ("struct arena_s {\n");

  PRINTF_BA ("  ind = 0x%x\n", ar->ind);
  PRINTF_BA ("  nthreads: application allocation = 0x%"PFMT64x"\n", (ut64)ar->nthreads[0]);
  PRINTF_BA ("  nthreads: internal metadata allocation = 0x%"PFMT64x"\n", (ut64)ar->nthreads[1]);
  PRINTF_BA ("  lock = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, lock)));
  PRINTF_BA ("  stats = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, stats)));
  PRINTF_BA ("  tcache_ql = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, tcache_ql)));
  PRINTF_BA ("  prof_accumbytes = 0x%"PFMT64x"x\n", (ut64)ar->prof_accumbytes);
  PRINTF_BA ("  offset_state = 0x%"PFMT64x"\n", (ut64)ar->offset_state);
  PRINTF_BA ("  dss_prec_t = 0x%"PFMT64x"\n",(ut64)(arena + r_offsetof (arena_t, dss_prec)));
  PRINTF_BA ("  achunks = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, achunks)));
  PRINTF_BA ("  extent_sn_next = 0x%"PFMT64x"\n", (ut64)(size_t)ar->extent_sn_next);
  PRINTF_BA ("  spare = 0x%"PFMT64x"\n", (ut64)(size_t)ar->spare);
  PRINTF_BA ("  lg_dirty_mult = 0x%"PFMT64x"\n", (ut64)(ssize_t)ar->lg_dirty_mult);
  PRINTF_BA ("  purging = %s\n", r_str_bool (ar->purging));
  PRINTF_BA ("  nactive = 0x%"PFMT64x"\n", (ut64)(size_t)ar->nactive);
  PRINTF_BA ("  ndirty = 0x%"PFMT64x"\n", (ut64)(size_t)ar->ndirty);

  PRINTF_BA ("  runs_dirty = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, runs_dirty)));
  PRINTF_BA ("  chunks_cache = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, chunks_cache)));
  PRINTF_BA ("  huge = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, huge)));
  PRINTF_BA ("  huge_mtx = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, huge_mtx)));

  PRINTF_BA ("  chunks_szsnad_cached = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, chunks_szsnad_cached)));
  PRINTF_BA ("  chunks_ad_cached = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, chunks_ad_cached)));
  PRINTF_BA ("  chunks_szsnad_retained = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, chunks_szsnad_retained)));
  PRINTF_BA ("  chunks_ad_cached = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, chunks_ad_retained)));

  PRINTF_BA ("  chunks_mtx = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, chunks_mtx)));
  PRINTF_BA ("  node_cache = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, node_cache)));
  PRINTF_BA ("  node_cache_mtx = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, node_cache_mtx)));
  PRINTF_BA ("  chunks_hooks = 0x%"PFMT64x"\n", (ut64)(arena + r_offsetof (arena_t, chunk_hooks)));
  PRINTF_BA ("  bins = %d 0x%"PFMT64x"\n", JM_NBINS, (ut64)(arena + r_offsetof (arena_t, bins)));
  PRINTF_BA ("  runs_avail = %d 0x%"PFMT64x"\n", NPSIZES, (ut64)(arena + r_offsetof (arena_t, runs_avail)));
  PRINT_GA ("}\n");
  break;
 }
 free (ar);
 free (stats);
}

static void jemalloc_get_bins_64(RCore *core, const char *input) {
 int i = 0, j;
 ut64 bin_info;
 ut64 arenas;
 ut64 arena = UT64_MAX;
 arena_t *ar = NULL;
 arena_bin_info_t *b = NULL;
 RConsPrintablePalette *pal = &r_cons_singleton ()->context->pal;

 switch (input[0]) {
 case ' ':
  ar = R_NEW0 (arena_t);
  if (!ar) {
   break;
  }
  b = R_NEW0 (arena_bin_info_t);
  if (!b) {
   break;
  }
  if (!r_resolve_jemalloc_64(core, "je_arena_bin_info", &bin_info)) {
   eprintf ("Error resolving je_arena_bin_info\n");
   R_FREE (b);
   break;
  }
  if (r_resolve_jemalloc_64(core, "je_arenas", &arenas)) {
   r_io_read_at (core->io, arenas, (ut8 *)&arenas, sizeof (ut64));
   PRINTF_GA ("arenas @ 0x%"PFMT64x " {\n", (ut64)arenas);
   for (;;) {
    r_io_read_at (core->io, arenas + i * sizeof (ut64), (ut8 *)&arena, sizeof (ut64));
    if (!arena) {
     R_FREE (b);
     break;
    }
    PRINTF_YA ("   arenas[%d]: ", i++);
    PRINTF_BA ("@ 0x%"PFMT64x, (ut64)arena);
    PRINT_YA (" {\n");
    r_io_read_at (core->io, arena, (ut8 *)ar, sizeof (arena_t));
    for (j = 0; j < JM_NBINS; j++) {
     r_io_read_at (core->io, (ut64)(bin_info + j * sizeof (arena_bin_info_t)),
      (ut8*)b, sizeof (arena_bin_info_t));
     PRINT_YA ("    {\n");
     PRINT_YA ("       regsize : ");
     PRINTF_BA ("0x%zx\n", b->reg_size);
     PRINT_YA ("       redzone size ");
     PRINTF_BA ("0x%zx\n", b->redzone_size);
     PRINT_YA ("       reg_interval : ");
     PRINTF_BA ("0x%zx\n", b->reg_interval);
     PRINT_YA ("       run_size : ");
     PRINTF_BA ("0x%zx\n", b->run_size);
     PRINT_YA ("       nregs : ");
     PRINTF_BA ("0x%x\n", b->nregs);



     PRINT_YA ("       reg0_offset : ");
     PRINTF_BA ("0x%"PFMT64x"\n\n", (ut64)b->reg0_offset);
# 418 "project/radare2/libr/core/linux_heap_jemalloc.c"
     PRINT_YA ("    }\n");
    }
    PRINT_YA ("  }\n");
   }
  }
  PRINT_GA ("}\n");
  break;
 }
 free (ar);
 free (b);
}
# 520 "project/radare2/libr/core/linux_heap_jemalloc.c"
static int cmd_dbg_map_jemalloc_64(RCore *core, const char *input) {
 const char *help_msg[] = {
  "Usage:", "dmh", " # Memory map heap",
  "dmha", "[arena_t]", "show all arenas created, or print arena_t structure for given arena",
  "dmhb", "[arena_t]", "show all bins created for given arena",
  "dmhc", "*|[arena_t]", "show all chunks created in all arenas, or show all chunks created for a given arena_t instance",

  "dmh?", "", "Show map heap help", NULL
 };

 switch (input[0]) {
 case '?':
  r_core_cmd_help (core, help_msg);
  break;
 case 'a':
  jemalloc_print_narenas_64 (core, input + 1);
  break;
 case 'b':
  jemalloc_get_bins_64 (core, input + 1);
  break;
 case 'c':
  jemalloc_get_chunks_64 (core, input + 1);
  break;





 }
 return 0;
}
