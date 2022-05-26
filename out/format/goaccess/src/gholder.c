# 1 "project/goaccess/src/gholder.c"
# 31 "project/goaccess/src/gholder.c"
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include "gholder.h"

#include "error.h"
#include "gdns.h"
#include "gkhash.h"
#include "util.h"
#include "xmalloc.h"

#ifdef HAVE_GEOLOCATION
#include "geoip1.h"
#endif

typedef struct GPanel_ {
  GModule module;
  void (*insert) (GRawDataItem item, GHolder * h, datatype type, const struct GPanel_ *);
  void (*holder_callback) (GHolder * h);
} GPanel;



static void add_data_to_holder (GRawDataItem item, GHolder * h, datatype type, const GPanel * panel);
static void add_host_to_holder (GRawDataItem item, GHolder * h, datatype type, const GPanel * panel);
static void add_root_to_holder (GRawDataItem item, GHolder * h, datatype type, const GPanel * panel);
static void add_host_child_to_holder (GHolder * h);

static GPanel paneling[] = {
  {VISITORS , add_data_to_holder , NULL},
  {REQUESTS , add_data_to_holder , NULL},
  {REQUESTS_STATIC , add_data_to_holder , NULL},
  {NOT_FOUND , add_data_to_holder , NULL},
  {HOSTS , add_host_to_holder , add_host_child_to_holder} ,
  {OS , add_root_to_holder , NULL},
  {BROWSERS , add_root_to_holder , NULL},
  {VISIT_TIMES , add_data_to_holder , NULL},
  {VIRTUAL_HOSTS , add_data_to_holder , NULL},
  {REFERRERS , add_data_to_holder , NULL},
  {REFERRING_SITES , add_data_to_holder , NULL},
  {KEYPHRASES , add_data_to_holder , NULL},
  {STATUS_CODES , add_root_to_holder , NULL},
  {REMOTE_USER , add_data_to_holder , NULL},
  {CACHE_STATUS , add_data_to_holder , NULL},
#ifdef HAVE_GEOLOCATION
  {GEO_LOCATION , add_root_to_holder , NULL},
#endif
  {MIME_TYPE , add_root_to_holder, NULL} ,
  {TLS_TYPE , add_root_to_holder, NULL} ,
};







static GPanel *
panel_lookup (GModule module) {
  int i, num_panels = ARRAY_SIZE (paneling);

  for (i = 0; i < num_panels; i++) {
    if (paneling[i].module == module)
      return &paneling[i];
  }
  return NULL;
}




GHolder *
new_gholder (uint32_t size) {
  GHolder *holder = xmalloc (size * sizeof (GHolder));
  memset (holder, 0, size * sizeof *holder);

  return holder;
}




static GHolderItem *
new_gholder_item (uint32_t size) {
  GHolderItem *item = xcalloc (size, sizeof (GHolderItem));

  return item;
}




static GSubList *
new_gsublist (void) {
  GSubList *sub_list = xmalloc (sizeof (GSubList));
  sub_list->head = NULL;
  sub_list->tail = NULL;
  sub_list->size = 0;

  return sub_list;
}




static GSubItem *
new_gsubitem (GModule module, GMetrics * nmetrics) {
  GSubItem *sub_item = xmalloc (sizeof (GSubItem));

  sub_item->metrics = nmetrics;
  sub_item->module = module;
  sub_item->prev = NULL;
  sub_item->next = NULL;

  return sub_item;
}


static void
add_sub_item_back (GSubList * sub_list, GModule module, GMetrics * nmetrics) {
  GSubItem *sub_item = new_gsubitem (module, nmetrics);
  if (sub_list->tail) {
    sub_list->tail->next = sub_item;
    sub_item->prev = sub_list->tail;
    sub_list->tail = sub_item;
  } else {
    sub_list->head = sub_item;
    sub_list->tail = sub_item;
  }
  sub_list->size++;
}


static void
delete_sub_list (GSubList * sub_list) {
  GSubItem *item = NULL;
  GSubItem *next = NULL;

  if (sub_list->size == 0)
    goto clear;

  for (item = sub_list->head; item; item = next) {
    next = item->next;
    free (item->metrics->data);
    free (item->metrics);
    free (item);
  }
clear:
  sub_list->head = NULL;
  sub_list->size = 0;
  free (sub_list);
}


static void
free_holder_data (GHolderItem item) {
  if (item.sub_list != NULL)
    delete_sub_list (item.sub_list);
  free_gmetrics (item.metrics);
}


void
free_holder_by_module (GHolder ** holder, GModule module) {
  int j;

  if ((*holder) == NULL)
    return;

  for (j = 0; j < (*holder)[module].idx; j++) {
    free_holder_data ((*holder)[module].items[j]);
  }
  free ((*holder)[module].items);

  (*holder)[module].holder_size = 0;
  (*holder)[module].idx = 0;
  (*holder)[module].sub_items_size = 0;
}


void
free_holder (GHolder ** holder) {
  GModule module;
  int j;
  size_t idx = 0;

  if ((*holder) == NULL)
    return;

  FOREACH_MODULE (idx, module_list) {
    module = module_list[idx];

    for (j = 0; j < (*holder)[module].idx; j++) {
      free_holder_data ((*holder)[module].items[j]);
    }
    free ((*holder)[module].items);
  }
  free (*holder);
  (*holder) = NULL;
}





static int
get_item_idx_in_holder (GHolder * holder, const char *k) {
  int i;
  if (holder == NULL)
    return KEY_NOT_FOUND;
  if (holder->idx == 0)
    return KEY_NOT_FOUND;
  if (k == NULL || *k == '\0')
    return KEY_NOT_FOUND;

  for (i = 0; i < holder->idx; i++) {
    if (strcmp (k, holder->items[i].metrics->data) == 0)
      return i;
  }

  return KEY_NOT_FOUND;
}



static void
sort_sub_list (GHolder * h, GSort sort) {
  GHolderItem *arr;
  GSubItem *iter;
  GSubList *sub_list;
  int i, j, k;


  for (i = 0; i < h->idx; i++) {
    sub_list = h->items[i].sub_list;
    if (sub_list == NULL)
      continue;

    arr = new_gholder_item (sub_list->size);


    for (j = 0, iter = sub_list->head; iter; iter = iter->next, j++) {
      arr[j].metrics = new_gmetrics ();

      arr[j].metrics->bw.nbw = iter->metrics->bw.nbw;
      arr[j].metrics->data = xstrdup (iter->metrics->data);
      arr[j].metrics->hits = iter->metrics->hits;
      arr[j].metrics->id = iter->metrics->id;
      arr[j].metrics->visitors = iter->metrics->visitors;
      if (conf.serve_usecs) {
        arr[j].metrics->avgts.nts = iter->metrics->avgts.nts;
        arr[j].metrics->cumts.nts = iter->metrics->cumts.nts;
        arr[j].metrics->maxts.nts = iter->metrics->maxts.nts;
      }
    }
    sort_holder_items (arr, j, sort);
    delete_sub_list (sub_list);

    sub_list = new_gsublist ();
    for (k = 0; k < j; k++) {
      if (k > 0)
        sub_list = h->items[i].sub_list;

      add_sub_item_back (sub_list, h->module, arr[k].metrics);
      h->items[i].sub_list = sub_list;
      sub_list = NULL;
    }

    free (arr);
    if (sub_list) {
      delete_sub_list (sub_list);
      sub_list = NULL;
    }
  }
}




static int
set_host_child_metrics (char *data, uint8_t id, GMetrics ** nmetrics) {
  GMetrics *metrics;

  metrics = new_gmetrics ();
  metrics->data = xstrdup (data);
  metrics->id = id;
  *nmetrics = metrics;

  return 0;
}




static void
set_host_sub_list (GHolder * h, GSubList * sub_list) {
  GMetrics *nmetrics;
#ifdef HAVE_GEOLOCATION
  char city[CITY_LEN] = "";
  char continent[CONTINENT_LEN] = "";
  char country[COUNTRY_LEN] = "";
#endif

  char *host = h->items[h->idx].metrics->data, *hostname = NULL;
#ifdef HAVE_GEOLOCATION

  set_geolocation (host, continent, country, city);


  if (country[0] != '\0') {
    set_host_child_metrics (country, MTRC_ID_COUNTRY, &nmetrics);
    add_sub_item_back (sub_list, h->module, nmetrics);
    h->items[h->idx].sub_list = sub_list;
    h->sub_items_size++;


    conf.has_geocountry = 1;
  }


  if (city[0] != '\0') {
    set_host_child_metrics (city, MTRC_ID_CITY, &nmetrics);
    add_sub_item_back (sub_list, h->module, nmetrics);
    h->items[h->idx].sub_list = sub_list;
    h->sub_items_size++;


    conf.has_geocity = 1;
  }
#endif


  if (conf.enable_html_resolver && conf.output_stdout && !conf.no_ip_validation) {
    hostname = reverse_ip (host);
    set_host_child_metrics (hostname, MTRC_ID_HOSTNAME, &nmetrics);
    add_sub_item_back (sub_list, h->module, nmetrics);
    h->items[h->idx].sub_list = sub_list;
    h->sub_items_size++;
    free (hostname);
  }
}




static void
add_host_child_to_holder (GHolder * h) {
  GMetrics *nmetrics;
  GSubList *sub_list = new_gsublist ();

  char *ip = h->items[h->idx].metrics->data;
  char *hostname = NULL;
  int n = h->sub_items_size;


  set_host_sub_list (h, sub_list);

  pthread_mutex_lock (&gdns_thread.mutex);
  hostname = ht_get_hostname (ip);
  pthread_mutex_unlock (&gdns_thread.mutex);


  if (!hostname) {
    dns_resolver (ip);
  } else if (hostname) {
    set_host_child_metrics (hostname, MTRC_ID_HOSTNAME, &nmetrics);
    add_sub_item_back (sub_list, h->module, nmetrics);
    h->items[h->idx].sub_list = sub_list;
    h->sub_items_size++;
    free (hostname);
  }


  if (n == h->sub_items_size)
    free (sub_list);
}





static int
map_data (GModule module, GRawDataItem item, datatype type, char **data, uint32_t * hits) {
  switch (type) {
  case U32:
    if (!(*data = ht_get_datamap (module, item.nkey)))
      return 1;
    if (!item.hits)
      return 1;
    *hits = item.hits;
    break;
  case STR:
    if (!(*hits = ht_get_hits (module, item.nkey)))
      return 1;
    *data = xstrdup (item.data);
    break;
  }
  return 0;
}


static void
set_single_metrics (GRawDataItem item, GHolder * h, char *data, uint32_t hits) {
  uint32_t visitors = 0;
  uint64_t bw = 0, cumts = 0, maxts = 0;

  bw = ht_get_bw (h->module, item.nkey);
  cumts = ht_get_cumts (h->module, item.nkey);
  maxts = ht_get_maxts (h->module, item.nkey);
  visitors = ht_get_visitors (h->module, item.nkey);

  h->items[h->idx].metrics = new_gmetrics ();
  h->items[h->idx].metrics->hits = hits;
  h->items[h->idx].metrics->data = data;
  h->items[h->idx].metrics->visitors = visitors;
  h->items[h->idx].metrics->bw.nbw = bw;
  h->items[h->idx].metrics->avgts.nts = cumts / hits;
  h->items[h->idx].metrics->cumts.nts = cumts;
  h->items[h->idx].metrics->maxts.nts = maxts;

  if (bw && !conf.bandwidth)
    conf.bandwidth = 1;
  if (cumts && !conf.serve_usecs)
    conf.serve_usecs = 1;

  if (conf.append_method) {
    h->items[h->idx].metrics->method = ht_get_method (h->module, item.nkey);
  }

  if (conf.append_protocol) {
    h->items[h->idx].metrics->protocol = ht_get_protocol (h->module, item.nkey);
  }
}



static void
add_data_to_holder (GRawDataItem item, GHolder * h, datatype type, const GPanel * panel) {
  char *data = NULL;
  uint32_t hits = 0;

  if (map_data (h->module, item, type, &data, &hits) == 1)
    return;

  set_single_metrics (item, h, data, hits);
  if (panel->holder_callback)
    panel->holder_callback (h);

  h->idx++;
}


static void
set_host (GRawDataItem item, GHolder * h, const GPanel * panel, char *data, uint32_t hits) {
  set_single_metrics (item, h, xstrdup (data), hits);
  if (panel->holder_callback)
    panel->holder_callback (h);
  h->idx++;
}



static void
add_host_to_holder (GRawDataItem item, GHolder * h, datatype type, const GPanel * panel) {
  char buf4[INET_ADDRSTRLEN];
  char buf6[INET6_ADDRSTRLEN];
  char *data = NULL;
  uint32_t hits = 0;
  unsigned i;

  struct in6_addr addr6, mask6, nwork6;
  struct in_addr addr4, mask4, nwork4;

  const char *m4 = "255.255.255.0";
  const char *m6 = "ffff:ffff:ffff:ffff:0000:0000:0000:0000";

  if (map_data (h->module, item, type, &data, &hits) == 1)
    return;

  if (!conf.anonymize_ip) {
    add_data_to_holder (item, h, type, panel);
    free (data);
    return;
  }

  if (1 == inet_pton (AF_INET, data, &addr4)) {
    if (1 == inet_pton (AF_INET, m4, &mask4)) {
      memset (buf4, 0, sizeof *buf4);
      nwork4.s_addr = addr4.s_addr & mask4.s_addr;

      if (inet_ntop (AF_INET, &nwork4, buf4, INET_ADDRSTRLEN) != NULL) {
        set_host (item, h, panel, buf4, hits);
        free (data);
      }
    }
  } else if (1 == inet_pton (AF_INET6, data, &addr6)) {
    if (1 == inet_pton (AF_INET6, m6, &mask6)) {
      memset (buf6, 0, sizeof *buf6);
      for (i = 0; i < 16; i++) {
        nwork6.s6_addr[i] = addr6.s6_addr[i] & mask6.s6_addr[i];
      }

      if (inet_ntop (AF_INET6, &nwork6, buf6, INET6_ADDRSTRLEN) != NULL) {
        set_host (item, h, panel, buf6, hits);
        free (data);
      }
    }
  }
}


static int
set_root_metrics (GRawDataItem item, GModule module, datatype type, GMetrics ** nmetrics) {
  GMetrics *metrics;
  char *data = NULL;
  uint64_t bw = 0, cumts = 0, maxts = 0;
  uint32_t hits = 0, visitors = 0;

  if (map_data (module, item, type, &data, &hits) == 1)
    return 1;

  bw = ht_get_bw (module, item.nkey);
  cumts = ht_get_cumts (module, item.nkey);
  maxts = ht_get_maxts (module, item.nkey);
  visitors = ht_get_visitors (module, item.nkey);

  metrics = new_gmetrics ();
  metrics->avgts.nts = cumts / hits;
  metrics->cumts.nts = cumts;
  metrics->maxts.nts = maxts;
  metrics->bw.nbw = bw;
  metrics->data = data;
  metrics->hits = hits;
  metrics->visitors = visitors;
  *nmetrics = metrics;

  return 0;
}


static void
add_root_to_holder (GRawDataItem item, GHolder * h, datatype type,
                    GO_UNUSED const GPanel * panel) {
  GSubList *sub_list;
  GMetrics *metrics, *nmetrics;
  char *root = NULL;
  int root_idx = KEY_NOT_FOUND, idx = 0;

  if (set_root_metrics (item, h->module, type, &nmetrics) == 1)
    return;

  if (!(root = ht_get_root (h->module, item.nkey))) {
    free_gmetrics (nmetrics);
    return;
  }


  if (KEY_NOT_FOUND == (root_idx = get_item_idx_in_holder (h, root))) {
    idx = h->idx;
    sub_list = new_gsublist ();
    metrics = new_gmetrics ();

    h->items[idx].metrics = metrics;
    h->items[idx].metrics->data = root;
    h->idx++;
  } else {
    sub_list = h->items[root_idx].sub_list;
    metrics = h->items[root_idx].metrics;

    idx = root_idx;
    free (root);
  }

  add_sub_item_back (sub_list, h->module, nmetrics);
  h->items[idx].sub_list = sub_list;

  h->items[idx].metrics = metrics;
  h->items[idx].metrics->cumts.nts += nmetrics->cumts.nts;
  h->items[idx].metrics->bw.nbw += nmetrics->bw.nbw;
  h->items[idx].metrics->hits += nmetrics->hits;
  h->items[idx].metrics->visitors += nmetrics->visitors;
  h->items[idx].metrics->avgts.nts =
    h->items[idx].metrics->cumts.nts / h->items[idx].metrics->hits;

  if (nmetrics->maxts.nts > h->items[idx].metrics->maxts.nts)
    h->items[idx].metrics->maxts.nts = nmetrics->maxts.nts;

  h->sub_items_size++;
}


void
load_holder_data (GRawData * raw_data, GHolder * h, GModule module, GSort sort) {
  int i;
  uint32_t size = 0, max_choices = get_max_choices ();
  const GPanel *panel = panel_lookup (module);

#ifdef _DEBUG
  clock_t begin = clock ();
  double taken;
  char *modstr = NULL;
  LOG_DEBUG (("== load_holder_data ==\n"));
#endif

  size = raw_data->size;
  h->holder_size = size > max_choices ? max_choices : size;
  h->ht_size = size;
  h->idx = 0;
  h->module = module;
  h->sub_items_size = 0;
  h->items = new_gholder_item (h->holder_size);

  for (i = 0; i < h->holder_size; i++) {
    panel->insert (raw_data->items[i], h, raw_data->type, panel);
  }
  sort_holder_items (h->items, h->idx, sort);
  if (h->sub_items_size)
    sort_sub_list (h, sort);
  free_raw_data (raw_data);

#ifdef _DEBUG
  modstr = get_module_str (module);
  taken = (double) (clock () - begin) / CLOCKS_PER_SEC;
  LOG_DEBUG (("== %-30s%f\n\n", modstr, taken));
  free (modstr);
#endif
}
