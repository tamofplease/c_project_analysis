# 1 "project/goaccess/src/sort.c"
# 31 "project/goaccess/src/sort.c"
#if HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <getopt.h>
#include <errno.h>

#include "error.h"
#include "settings.h"
#include "util.h"

#include "sort.h"


const int sort_choices[][SORT_MAX_OPTS] = {

  {SORT_BY_HITS, SORT_BY_VISITORS, SORT_BY_DATA, SORT_BY_BW, SORT_BY_AVGTS, SORT_BY_CUMTS, SORT_BY_MAXTS, -1},

  {SORT_BY_HITS, SORT_BY_VISITORS, SORT_BY_DATA, SORT_BY_BW, SORT_BY_AVGTS, SORT_BY_CUMTS, SORT_BY_MAXTS, SORT_BY_PROT, SORT_BY_MTHD, -1},

  {SORT_BY_HITS, SORT_BY_VISITORS, SORT_BY_DATA, SORT_BY_BW, SORT_BY_AVGTS, SORT_BY_CUMTS, SORT_BY_MAXTS, SORT_BY_PROT, SORT_BY_MTHD, -1},

  {SORT_BY_HITS, SORT_BY_VISITORS, SORT_BY_DATA, SORT_BY_BW, SORT_BY_AVGTS, SORT_BY_CUMTS, SORT_BY_MAXTS, SORT_BY_PROT, SORT_BY_MTHD, -1},

  {SORT_BY_HITS, SORT_BY_VISITORS, SORT_BY_DATA, SORT_BY_BW, SORT_BY_AVGTS, SORT_BY_CUMTS, SORT_BY_MAXTS, -1},

  {SORT_BY_HITS, SORT_BY_VISITORS, SORT_BY_DATA, SORT_BY_BW, SORT_BY_AVGTS, SORT_BY_CUMTS, SORT_BY_MAXTS, -1},

  {SORT_BY_HITS, SORT_BY_VISITORS, SORT_BY_DATA, SORT_BY_BW, SORT_BY_AVGTS, SORT_BY_CUMTS, SORT_BY_MAXTS, -1},

  {SORT_BY_HITS, SORT_BY_VISITORS, SORT_BY_DATA, SORT_BY_BW, SORT_BY_AVGTS, SORT_BY_CUMTS, SORT_BY_MAXTS, -1},

  {SORT_BY_HITS, SORT_BY_VISITORS, SORT_BY_DATA, SORT_BY_BW, SORT_BY_AVGTS, SORT_BY_CUMTS, SORT_BY_MAXTS, -1},

  {SORT_BY_HITS, SORT_BY_VISITORS, SORT_BY_DATA, SORT_BY_BW, SORT_BY_AVGTS, SORT_BY_CUMTS, SORT_BY_MAXTS, -1},

  {SORT_BY_HITS, SORT_BY_VISITORS, SORT_BY_DATA, SORT_BY_BW, SORT_BY_AVGTS, SORT_BY_CUMTS, SORT_BY_MAXTS, -1},

  {SORT_BY_HITS, SORT_BY_VISITORS, SORT_BY_DATA, SORT_BY_BW, SORT_BY_AVGTS, SORT_BY_CUMTS, SORT_BY_MAXTS, -1},

  {SORT_BY_HITS, SORT_BY_VISITORS, SORT_BY_DATA, SORT_BY_BW, SORT_BY_AVGTS, SORT_BY_CUMTS, SORT_BY_MAXTS, -1},

  {SORT_BY_HITS, SORT_BY_VISITORS, SORT_BY_DATA, SORT_BY_BW, SORT_BY_AVGTS, SORT_BY_CUMTS, SORT_BY_MAXTS, -1},

  {SORT_BY_HITS, SORT_BY_VISITORS, SORT_BY_DATA, SORT_BY_BW, SORT_BY_AVGTS, SORT_BY_CUMTS, SORT_BY_MAXTS, -1},
#ifdef HAVE_GEOLOCATION

  {SORT_BY_HITS, SORT_BY_VISITORS, SORT_BY_DATA, SORT_BY_BW, SORT_BY_AVGTS, SORT_BY_CUMTS, SORT_BY_MAXTS, -1},
#endif

  {SORT_BY_HITS, SORT_BY_DATA, SORT_BY_BW, SORT_BY_AVGTS, SORT_BY_CUMTS, SORT_BY_MAXTS, -1},

  {SORT_BY_HITS, SORT_BY_DATA, SORT_BY_VISITORS, SORT_BY_BW, -1},
};

static GEnum FIELD[] = {
  {"BY_HITS" , SORT_BY_HITS } ,
  {"BY_VISITORS" , SORT_BY_VISITORS } ,
  {"BY_DATA" , SORT_BY_DATA } ,
  {"BY_BW" , SORT_BY_BW } ,
  {"BY_AVGTS" , SORT_BY_AVGTS } ,
  {"BY_CUMTS" , SORT_BY_CUMTS } ,
  {"BY_MAXTS" , SORT_BY_MAXTS } ,
  {"BY_PROT" , SORT_BY_PROT } ,
  {"BY_MTHD" , SORT_BY_MTHD } ,
};

static GEnum ORDER[] = {
  {"ASC" , SORT_ASC } ,
  {"DESC" , SORT_DESC } ,
};

GSort module_sort[TOTAL_MODULES] = {
  {VISITORS , SORT_BY_DATA , SORT_DESC } ,
  {REQUESTS , SORT_BY_HITS , SORT_DESC } ,
  {REQUESTS_STATIC , SORT_BY_HITS , SORT_DESC } ,
  {NOT_FOUND , SORT_BY_HITS , SORT_DESC } ,
  {HOSTS , SORT_BY_HITS , SORT_DESC } ,
  {OS , SORT_BY_HITS , SORT_DESC } ,
  {BROWSERS , SORT_BY_HITS , SORT_DESC } ,
  {VISIT_TIMES , SORT_BY_DATA , SORT_ASC } ,
  {VIRTUAL_HOSTS , SORT_BY_HITS , SORT_DESC } ,
  {REFERRERS , SORT_BY_HITS , SORT_DESC } ,
  {REFERRING_SITES , SORT_BY_HITS , SORT_DESC } ,
  {KEYPHRASES , SORT_BY_HITS , SORT_DESC } ,
  {STATUS_CODES , SORT_BY_HITS , SORT_DESC } ,
  {REMOTE_USER , SORT_BY_HITS , SORT_DESC } ,
  {CACHE_STATUS , SORT_BY_HITS , SORT_DESC } ,
#ifdef HAVE_GEOLOCATION
  {GEO_LOCATION , SORT_BY_HITS , SORT_DESC } ,
#endif
  {MIME_TYPE , SORT_BY_HITS , SORT_DESC } ,
  {TLS_TYPE , SORT_BY_VISITORS , SORT_DESC } ,
};



int
strcmp_asc (const void *a, const void *b) {
  return strcmp (*((char *const *) a), *((char *const *) b));
}


static int
cmp_data_asc (const void *a, const void *b) {
  const GHolderItem *ia = a;
  const GHolderItem *ib = b;
  return strcmp (ia->metrics->data, ib->metrics->data);
}


static int
cmp_data_desc (const void *a, const void *b) {
  const GHolderItem *ia = a;
  const GHolderItem *ib = b;
  return strcmp (ib->metrics->data, ia->metrics->data);
}


static int
cmp_num_desc (const void *a, const void *b) {
  const GHolderItem *ia = a;
  const GHolderItem *ib = b;

  uint64_t va = ia->metrics->hits;
  uint64_t vb = ib->metrics->hits;

  return (va < vb) - (va > vb);
}


static int
cmp_num_asc (const void *a, const void *b) {
  const GHolderItem *ia = a;
  const GHolderItem *ib = b;

  uint64_t va = ia->metrics->hits;
  uint64_t vb = ib->metrics->hits;

  return (va > vb) - (va < vb);
}


static int
cmp_vis_desc (const void *a, const void *b) {
  const GHolderItem *ia = a;
  const GHolderItem *ib = b;

  uint64_t va = ia->metrics->visitors;
  uint64_t vb = ib->metrics->visitors;

  return (va < vb) - (va > vb);
}


static int
cmp_vis_asc (const void *a, const void *b) {
  const GHolderItem *ia = a;
  const GHolderItem *ib = b;

  uint64_t va = ia->metrics->visitors;
  uint64_t vb = ib->metrics->visitors;

  return (va > vb) - (va < vb);
}


static int
cmp_raw_num_desc (const void *a, const void *b) {
  const GRawDataItem *ia = a;
  const GRawDataItem *ib = b;

  uint64_t va = ia->hits;
  uint64_t vb = ib->hits;

  return (va < vb) - (va > vb);
}


static int
cmp_raw_str_desc (const void *a, const void *b) {
  const GRawDataItem *ia = a;
  const GRawDataItem *ib = b;

  return strcmp (ib->data, ia->data);
}


static int
cmp_bw_desc (const void *a, const void *b) {
  const GHolderItem *ia = a;
  const GHolderItem *ib = b;

  uint64_t va = ia->metrics->bw.nbw;
  uint64_t vb = ib->metrics->bw.nbw;

  return (va < vb) - (va > vb);
}


static int
cmp_bw_asc (const void *a, const void *b) {
  const GHolderItem *ia = a;
  const GHolderItem *ib = b;

  uint64_t va = ia->metrics->bw.nbw;
  uint64_t vb = ib->metrics->bw.nbw;

  return (va > vb) - (va < vb);
}


static int
cmp_avgts_desc (const void *a, const void *b) {
  const GHolderItem *ia = a;
  const GHolderItem *ib = b;

  uint64_t va = ia->metrics->avgts.nts;
  uint64_t vb = ib->metrics->avgts.nts;

  return (va < vb) - (va > vb);
}


static int
cmp_avgts_asc (const void *a, const void *b) {
  const GHolderItem *ia = a;
  const GHolderItem *ib = b;

  uint64_t va = ia->metrics->avgts.nts;
  uint64_t vb = ib->metrics->avgts.nts;

  return (va > vb) - (va < vb);
}


static int
cmp_cumts_desc (const void *a, const void *b) {
  const GHolderItem *ia = a;
  const GHolderItem *ib = b;

  uint64_t va = ia->metrics->cumts.nts;
  uint64_t vb = ib->metrics->cumts.nts;

  return (va < vb) - (va > vb);
}


static int
cmp_cumts_asc (const void *a, const void *b) {
  const GHolderItem *ia = a;
  const GHolderItem *ib = b;

  uint64_t va = ia->metrics->cumts.nts;
  uint64_t vb = ib->metrics->cumts.nts;

  return (va > vb) - (va < vb);
}


static int
cmp_maxts_desc (const void *a, const void *b) {
  const GHolderItem *ia = a;
  const GHolderItem *ib = b;

  uint64_t va = ia->metrics->maxts.nts;
  uint64_t vb = ib->metrics->maxts.nts;

  return (va < vb) - (va > vb);
}


static int
cmp_maxts_asc (const void *a, const void *b) {
  const GHolderItem *ia = a;
  const GHolderItem *ib = b;

  uint64_t va = ia->metrics->maxts.nts;
  uint64_t vb = ib->metrics->maxts.nts;

  return (va > vb) - (va < vb);
}


static int
cmp_proto_asc (const void *a, const void *b) {
  const GHolderItem *ia = a;
  const GHolderItem *ib = b;
  return strcmp (ia->metrics->protocol, ib->metrics->protocol);
}


static int
cmp_proto_desc (const void *a, const void *b) {
  const GHolderItem *ia = a;
  const GHolderItem *ib = b;
  return strcmp (ib->metrics->protocol, ia->metrics->protocol);
}


static int
cmp_mthd_asc (const void *a, const void *b) {
  const GHolderItem *ia = a;
  const GHolderItem *ib = b;
  return strcmp (ia->metrics->method, ib->metrics->method);
}


static int
cmp_mthd_desc (const void *a, const void *b) {
  const GHolderItem *ia = a;
  const GHolderItem *ib = b;
  return strcmp (ib->metrics->method, ia->metrics->method);
}


#if defined(__clang__) && defined(__clang_major__) && (__clang_major__ >= 4)
__attribute__((no_sanitize ("implicit-conversion", "unsigned-integer-overflow")))
#endif
  int cmp_ui32_asc (const void *a, const void *b) {
  const uint32_t *ia = (const uint32_t *) a;
  const uint32_t *ib = (const uint32_t *) b;
  return *ia - *ib;
  }

int
cmp_ui32_desc (const void *a, const void *b) {
  const uint32_t *ia = (const uint32_t *) a;
  const uint32_t *ib = (const uint32_t *) b;
  return *ib - *ia;
}





int
get_sort_field_enum (const char *str) {
  return str2enum (FIELD, ARRAY_SIZE (FIELD), str);
}





int
get_sort_order_enum (const char *str) {
  return str2enum (ORDER, ARRAY_SIZE (ORDER), str);
}




const char *
get_sort_order_str (GSortOrder order) {
  return ORDER[order].str;
}




const char *
get_sort_field_str (GSortField field) {
  return FIELD[field].str;
}




const char *
get_sort_field_key (GSortField field) {
  static const char *field2key[][2] = {
    {"BY_HITS", "hits"},
    {"BY_VISITORS", "visitors"},
    {"BY_DATA", "data"},
    {"BY_BW", "bytes"},
    {"BY_AVGTS", "avgts"},
    {"BY_CUMTS", "cumts"},
    {"BY_MAXTS", "maxts"},
    {"BY_PROT", "protocol"},
    {"BY_MTHD", "method"},
  };

  return field2key[field][1];
}





void
set_initial_sort (const char *smod, const char *sfield, const char *ssort) {
  int module, field, order;
  if ((module = get_module_enum (smod)) == -1)
    return;

  if ((field = get_sort_field_enum (sfield)) == -1)
    return;
  if ((order = get_sort_order_enum (ssort)) == -1)
    return;
  if (!can_sort_module (module, field))
    return;

  module_sort[module].field = field;
  module_sort[module].sort = order;
}





int
can_sort_module (GModule module, int field) {
  int i, can_sort = 0;
  for (i = 0; -1 != sort_choices[module][i]; i++) {
    if (sort_choices[module][i] != field)
      continue;
    if (SORT_BY_AVGTS == field && !conf.serve_usecs)
      continue;
    if (SORT_BY_CUMTS == field && !conf.serve_usecs)
      continue;
    if (SORT_BY_MAXTS == field && !conf.serve_usecs)
      continue;
    else if (SORT_BY_BW == field && !conf.bandwidth)
      continue;
    else if (SORT_BY_PROT == field && !conf.append_protocol)
      continue;
    else if (SORT_BY_MTHD == field && !conf.append_method)
      continue;

    can_sort = 1;
    break;
  }

  return can_sort;
}





void
parse_initial_sort (void) {
  int i;
  char module[SORT_MODULE_LEN], field[SORT_FIELD_LEN], order[SORT_ORDER_LEN];
  for (i = 0; i < conf.sort_panel_idx; ++i) {
    if (sscanf (conf.sort_panels[i], "%15[^','],%11[^','],%4s", module, field, order) != 3)
      continue;
    set_initial_sort (module, field, order);
  }
}


void
sort_holder_items (GHolderItem * items, int size, GSort sort) {
  switch (sort.field) {
  case SORT_BY_HITS:
    if (sort.sort == SORT_DESC)
      qsort (items, size, sizeof (GHolderItem), cmp_num_desc);
    else
      qsort (items, size, sizeof (GHolderItem), cmp_num_asc);
    break;
  case SORT_BY_VISITORS:
    if (sort.sort == SORT_DESC)
      qsort (items, size, sizeof (GHolderItem), cmp_vis_desc);
    else
      qsort (items, size, sizeof (GHolderItem), cmp_vis_asc);
    break;
  case SORT_BY_DATA:
    if (sort.sort == SORT_DESC)
      qsort (items, size, sizeof (GHolderItem), cmp_data_desc);
    else
      qsort (items, size, sizeof (GHolderItem), cmp_data_asc);
    break;
  case SORT_BY_BW:
    if (sort.sort == SORT_DESC)
      qsort (items, size, sizeof (GHolderItem), cmp_bw_desc);
    else
      qsort (items, size, sizeof (GHolderItem), cmp_bw_asc);
    break;
  case SORT_BY_AVGTS:
    if (sort.sort == SORT_DESC)
      qsort (items, size, sizeof (GHolderItem), cmp_avgts_desc);
    else
      qsort (items, size, sizeof (GHolderItem), cmp_avgts_asc);
    break;
  case SORT_BY_CUMTS:
    if (sort.sort == SORT_DESC)
      qsort (items, size, sizeof (GHolderItem), cmp_cumts_desc);
    else
      qsort (items, size, sizeof (GHolderItem), cmp_cumts_asc);
    break;
  case SORT_BY_MAXTS:
    if (sort.sort == SORT_DESC)
      qsort (items, size, sizeof (GHolderItem), cmp_maxts_desc);
    else
      qsort (items, size, sizeof (GHolderItem), cmp_maxts_asc);
    break;
  case SORT_BY_PROT:
    if (sort.sort == SORT_DESC)
      qsort (items, size, sizeof (GHolderItem), cmp_proto_desc);
    else
      qsort (items, size, sizeof (GHolderItem), cmp_proto_asc);
    break;
  case SORT_BY_MTHD:
    if (sort.sort == SORT_DESC)
      qsort (items, size, sizeof (GHolderItem), cmp_mthd_desc);
    else
      qsort (items, size, sizeof (GHolderItem), cmp_mthd_asc);
    break;
  }
}





GRawData *
sort_raw_num_data (GRawData * raw_data, int ht_size) {
  qsort (raw_data->items, ht_size, sizeof *(raw_data->items), cmp_raw_num_desc);
  return raw_data;
}




GRawData *
sort_raw_str_data (GRawData * raw_data, int ht_size) {
  qsort (raw_data->items, ht_size, sizeof *(raw_data->items), cmp_raw_str_desc);
  return raw_data;
}
