# 1 "project/goaccess/src/gstorage.c"
# 31 "project/goaccess/src/gstorage.c"
#include <stdio.h>
#if !defined __SUNPRO_C
#include <stdint.h>
#endif
#include <stdlib.h>
#include <string.h>

#include "gstorage.h"

#ifdef HAVE_GEOLOCATION
#include "geoip1.h"
#endif

#include "browsers.h"
#include "commons.h"
#include "error.h"
#include "gkhash.h"
#include "opesys.h"
#include "ui.h"
#include "util.h"
#include "xmalloc.h"




static int gen_visitor_key (GKeyData * kdata, GLogItem * logitem);
static int gen_404_key (GKeyData * kdata, GLogItem * logitem);
static int gen_browser_key (GKeyData * kdata, GLogItem * logitem);
static int gen_host_key (GKeyData * kdata, GLogItem * logitem);
static int gen_keyphrase_key (GKeyData * kdata, GLogItem * logitem);
static int gen_os_key (GKeyData * kdata, GLogItem * logitem);
static int gen_vhost_key (GKeyData * kdata, GLogItem * logitem);
static int gen_remote_user_key (GKeyData * kdata, GLogItem * logitem);
static int gen_cache_status_key (GKeyData * kdata, GLogItem * logitem);
static int gen_referer_key (GKeyData * kdata, GLogItem * logitem);
static int gen_ref_site_key (GKeyData * kdata, GLogItem * logitem);
static int gen_request_key (GKeyData * kdata, GLogItem * logitem);
static int gen_static_request_key (GKeyData * kdata, GLogItem * logitem);
static int gen_status_code_key (GKeyData * kdata, GLogItem * logitem);
static int gen_visit_time_key (GKeyData * kdata, GLogItem * logitem);
#ifdef HAVE_GEOLOCATION
static int gen_geolocation_key (GKeyData * kdata, GLogItem * logitem);
#endif

static int gen_mime_type_key (GKeyData * kdata, GLogItem * logitem);
static int gen_tls_type_key (GKeyData * kdata, GLogItem * logitem);


static void insert_data (GModule module, GKeyData * kdata);
static void insert_rootmap (GModule module, GKeyData * kdata);
static void insert_root (GModule module, GKeyData * kdata);
static void insert_hit (GModule module, GKeyData * kdata);
static void insert_visitor (GModule module, GKeyData * kdata);
static void insert_bw (GModule module, GKeyData * kdata, uint64_t size);
static void insert_cumts (GModule module, GKeyData * kdata, uint64_t ts);
static void insert_maxts (GModule module, GKeyData * kdata, uint64_t ts);
static void insert_method (GModule module, GKeyData * kdata, const char *data);
static void insert_protocol (GModule module, GKeyData * kdata, const char *data);
static void insert_agent (GModule module, GKeyData * kdata, uint32_t agent_nkey);


const httpmethods http_methods[] = {
  { "OPTIONS" , 7 } ,
  { "GET" , 3 } ,
  { "HEAD" , 4 } ,
  { "POST" , 4 } ,
  { "PUT" , 3 } ,
  { "DELETE" , 6 } ,
  { "TRACE" , 5 } ,
  { "CONNECT" , 7 } ,
  { "PATCH" , 5 } ,

  { "PROPFIND" , 8 } ,
  { "PROPPATCH" , 9 } ,
  { "MKCOL" , 5 } ,
  { "COPY" , 4 } ,
  { "MOVE" , 4 } ,
  { "LOCK" , 4 } ,
  { "UNLOCK" , 6 } ,
  { "VERSION-CONTROL" , 15 } ,
  { "REPORT" , 6 } ,
  { "CHECKOUT" , 8 } ,
  { "CHECKIN" , 7 } ,
  { "UNCHECKOUT" , 10 } ,
  { "MKWORKSPACE" , 11 } ,
  { "UPDATE" , 6 } ,
  { "LABEL" , 5 } ,
  { "MERGE" , 5 } ,
  { "BASELINE-CONTROL" , 16 } ,
  { "MKACTIVITY" , 10 } ,
  { "ORDERPATCH" , 10 } ,
};
size_t http_methods_len = ARRAY_SIZE (http_methods);

const httpprotocols http_protocols[] = {
  { "HTTP/1.0" , 8 } ,
  { "HTTP/1.1" , 8 } ,
  { "HTTP/2" , 6 } ,
  { "HTTP/3" , 6 } ,
};
size_t http_protocols_len = ARRAY_SIZE (http_protocols);

static GParse paneling[] = {
  {
    VISITORS,
    gen_visitor_key,
    insert_data,
    NULL,
    insert_hit,
    insert_visitor,
    insert_bw,
    insert_cumts,
    insert_maxts,
    NULL,
    NULL,
    NULL,
  }, {
    REQUESTS,
    gen_request_key,
    insert_data,
    NULL,
    insert_hit,
    insert_visitor,
    insert_bw,
    insert_cumts,
    insert_maxts,
    insert_method,
    insert_protocol,
    NULL,
  }, {
    REQUESTS_STATIC,
    gen_static_request_key,
    insert_data,
    NULL,
    insert_hit,
    insert_visitor,
    insert_bw,
    insert_cumts,
    insert_maxts,
    insert_method,
    insert_protocol,
    NULL,
  }, {
    NOT_FOUND,
    gen_404_key,
    insert_data,
    NULL,
    insert_hit,
    insert_visitor,
    insert_bw,
    insert_cumts,
    insert_maxts,
    insert_method,
    insert_protocol,
    NULL,
  }, {
    HOSTS,
    gen_host_key,
    insert_data,
    NULL,
    insert_hit,
    insert_visitor,
    insert_bw,
    insert_cumts,
    insert_maxts,
    NULL,
    NULL,
    insert_agent,
  }, {
    OS,
    gen_os_key,
    insert_data,
    insert_rootmap,
    insert_hit,
    insert_visitor,
    insert_bw,
    insert_cumts,
    insert_maxts,
    insert_method,
    insert_protocol,
    NULL,
  }, {
    BROWSERS,
    gen_browser_key,
    insert_data,
    insert_rootmap,
    insert_hit,
    insert_visitor,
    insert_bw,
    insert_cumts,
    insert_maxts,
    NULL,
    NULL,
    NULL,
  }, {
    REFERRERS,
    gen_referer_key,
    insert_data,
    NULL,
    insert_hit,
    insert_visitor,
    insert_bw,
    insert_cumts,
    insert_maxts,
    NULL,
    NULL,
    NULL,
  }, {
    REFERRING_SITES,
    gen_ref_site_key,
    insert_data,
    NULL,
    insert_hit,
    insert_visitor,
    insert_bw,
    insert_cumts,
    insert_maxts,
    NULL,
    NULL,
    NULL,
  }, {
    KEYPHRASES,
    gen_keyphrase_key,
    insert_data,
    NULL,
    insert_hit,
    insert_visitor,
    insert_bw,
    insert_cumts,
    insert_maxts,
    NULL,
    NULL,
    NULL,
  },
#ifdef HAVE_GEOLOCATION
  {
    GEO_LOCATION,
    gen_geolocation_key,
    insert_data,
    insert_rootmap,
    insert_hit,
    insert_visitor,
    insert_bw,
    insert_cumts,
    insert_maxts,
    NULL,
    NULL,
    NULL,
  },
#endif
  {
    STATUS_CODES,
    gen_status_code_key,
    insert_data,
    insert_rootmap,
    insert_hit,
    insert_visitor,
    insert_bw,
    insert_cumts,
    insert_maxts,
    NULL,
    NULL,
    NULL,
  }, {
    VISIT_TIMES,
    gen_visit_time_key,
    insert_data,
    NULL,
    insert_hit,
    insert_visitor,
    insert_bw,
    insert_cumts,
    insert_maxts,
    NULL,
    NULL,
    NULL,
  }, {
    VIRTUAL_HOSTS,
    gen_vhost_key,
    insert_data,
    NULL,
    insert_hit,
    insert_visitor,
    insert_bw,
    insert_cumts,
    insert_maxts,
    NULL,
    NULL,
    NULL,
  }, {
    REMOTE_USER,
    gen_remote_user_key,
    insert_data,
    NULL,
    insert_hit,
    insert_visitor,
    insert_bw,
    insert_cumts,
    insert_maxts,
    NULL,
    NULL,
    NULL,
  }, {
    CACHE_STATUS,
    gen_cache_status_key,
    insert_data,
    NULL,
    insert_hit,
    insert_visitor,
    insert_bw,
    insert_cumts,
    insert_maxts,
    NULL,
    NULL,
    NULL,
  }, {
    MIME_TYPE,
    gen_mime_type_key,
    insert_data,
    insert_rootmap,
    insert_hit,
    insert_visitor,
    insert_bw,
    insert_cumts,
    insert_maxts,
    NULL,
    NULL,
    NULL,
  }, {
    TLS_TYPE,
    gen_tls_type_key,
    insert_data,
    insert_rootmap,
    insert_hit,
    insert_visitor,
    insert_bw,
    insert_cumts,
    insert_maxts,
    NULL,
    NULL,
    NULL,
  },
};



static void
new_modulekey (GKeyData * kdata) {
  GKeyData key = {
    .data = NULL,
    .data_nkey = 0,
    .root = NULL,
    .dhash = 0,
    .rhash = 0,
    .root_nkey = 0,
    .uniq_key = NULL,
    .uniq_nkey = 0,
  };
  *kdata = key;
}





static GParse *
panel_lookup (GModule module) {
  int i, num_panels = ARRAY_SIZE (paneling);

  for (i = 0; i < num_panels; i++) {
    if (paneling[i].module == module)
      return &paneling[i];
  }
  return NULL;
}




GMetrics *
new_gmetrics (void) {
  GMetrics *metrics = xcalloc (1, sizeof (GMetrics));

  return metrics;
}


void
free_gmetrics (GMetrics * metric) {
  if (metric == NULL)
    return;

  free (metric->data);
  free (metric->method);
  free (metric->protocol);
  free (metric);
}





char *
get_mtr_str (GSMetric metric) {

  GEnum enum_metrics[] = {
    {"MTRC_KEYMAP", MTRC_KEYMAP},
    {"MTRC_ROOTMAP", MTRC_ROOTMAP},
    {"MTRC_DATAMAP", MTRC_DATAMAP},
    {"MTRC_UNIQMAP", MTRC_UNIQMAP},
    {"MTRC_ROOT", MTRC_ROOT},
    {"MTRC_HITS", MTRC_HITS},
    {"MTRC_VISITORS", MTRC_VISITORS},
    {"MTRC_BW", MTRC_BW},
    {"MTRC_CUMTS", MTRC_CUMTS},
    {"MTRC_MAXTS", MTRC_MAXTS},
    {"MTRC_METHODS", MTRC_METHODS},
    {"MTRC_PROTOCOLS", MTRC_PROTOCOLS},
    {"MTRC_AGENTS", MTRC_AGENTS},
    {"MTRC_METADATA", MTRC_METADATA},
    {"MTRC_UNIQUE_KEYS", MTRC_UNIQUE_KEYS},
    {"MTRC_AGENT_KEYS", MTRC_AGENT_KEYS},
    {"MTRC_AGENT_VALS", MTRC_AGENT_VALS},
    {"MTRC_CNT_VALID", MTRC_CNT_VALID},
    {"MTRC_CNT_BW", MTRC_CNT_BW},
  };
  return enum2str (enum_metrics, ARRAY_SIZE (enum_metrics), metric);
}




uint32_t *
i322ptr (uint32_t val) {
  uint32_t *ptr = xmalloc (sizeof (uint32_t));
  *ptr = val;

  return ptr;
}




uint64_t *
uint642ptr (uint64_t val) {
  uint64_t *ptr = xmalloc (sizeof (uint64_t));
  *ptr = val;

  return ptr;
}


void
set_module_totals (GPercTotals * totals) {
  totals->bw = ht_sum_bw ();
  totals->hits = ht_sum_valid ();
  totals->visitors = ht_get_size_uniqmap (VISITORS);
}




void
set_data_metrics (GMetrics * ometrics, GMetrics ** nmetrics, GPercTotals totals) {
  GMetrics *metrics;


  float hits_perc = get_percentage (totals.hits, ometrics->hits);
  float visitors_perc = get_percentage (totals.visitors, ometrics->visitors);
  float bw_perc = get_percentage (totals.bw, ometrics->bw.nbw);

  metrics = new_gmetrics ();


  metrics->id = ometrics->id;
  metrics->hits = ometrics->hits;
  metrics->visitors = ometrics->visitors;


  metrics->hits_perc = hits_perc < 0 ? 0 : hits_perc;
  metrics->bw_perc = bw_perc < 0 ? 0 : bw_perc;
  metrics->visitors_perc = visitors_perc < 0 ? 0 : visitors_perc;


  metrics->bw.nbw = ometrics->bw.nbw;


  if (conf.serve_usecs && ometrics->hits > 0) {
    metrics->avgts.nts = ometrics->avgts.nts;
    metrics->cumts.nts = ometrics->cumts.nts;
    metrics->maxts.nts = ometrics->maxts.nts;
  }


  if (conf.append_method && ometrics->method)
    metrics->method = ometrics->method;


  if (conf.append_protocol && ometrics->protocol)
    metrics->protocol = ometrics->protocol;


  metrics->data = ometrics->data;

  *nmetrics = metrics;
}


static void
count_bw (int numdate, uint64_t resp_size) {
  ht_inc_cnt_bw (numdate, resp_size);
}


static void
count_invalid (GLog * glog, const char *line) {
  glog->invalid++;
  ht_inc_cnt_overall ("failed_requests", 1);

  if (conf.invalid_requests_log) {
    LOG_INVALID (("%s", line));
  }

  if (glog->items->errstr && glog->log_erridx < MAX_LOG_ERRORS) {
    glog->errors[glog->log_erridx++] = xstrdup (glog->items->errstr);
  }
}






void
uncount_invalid (GLog * glog) {
  if (glog->invalid > conf.num_tests)
    glog->invalid -= conf.num_tests;
  else
    glog->invalid = 0;
}






void
uncount_processed (GLog * glog) {
  lock_spinner ();
  if (glog->processed > conf.num_tests)
    glog->processed -= conf.num_tests;
  else
    glog->processed = 0;
  unlock_spinner ();
}


static void
count_valid (int numdate) {
  lock_spinner ();
  ht_inc_cnt_valid (numdate, 1);
  unlock_spinner ();
}


void
count_process (GLog * glog) {
  lock_spinner ();
  glog->processed++;
  ht_inc_cnt_overall ("total_requests", 1);
  unlock_spinner ();
}

void
count_process_and_invalid (GLog * glog, const char *line) {
  count_process (glog);
  count_invalid (glog, line);
}





int
excluded_ip (GLogItem * logitem) {
  if (conf.ignore_ip_idx && ip_in_range (logitem->host)) {
    ht_inc_cnt_overall ("excluded_ip", 1);
    return 0;
  }
  return 1;
}






static int
insert_dkeymap (GModule module, GKeyData * kdata) {
  return ht_insert_keymap (module, kdata->numdate, kdata->dhash, &kdata->cdnkey);
}






static int
insert_rkeymap (GModule module, GKeyData * kdata) {
  return ht_insert_keymap (module, kdata->numdate, kdata->rhash, &kdata->crnkey);
}


static void
insert_data (GModule module, GKeyData * kdata) {
  ht_insert_datamap (module, kdata->numdate, kdata->data_nkey, kdata->data, kdata->cdnkey);
}






static int
insert_uniqmap (GModule module, GKeyData * kdata, uint32_t uniq_nkey) {
  return ht_insert_uniqmap (module, kdata->numdate, kdata->data_nkey, uniq_nkey);
}



static void
insert_rootmap (GModule module, GKeyData * kdata) {
  ht_insert_rootmap (module, kdata->numdate, kdata->root_nkey, kdata->root, kdata->crnkey);
}



static void
insert_root (GModule module, GKeyData * kdata) {
  ht_insert_root (module, kdata->numdate, kdata->data_nkey, kdata->root_nkey, kdata->cdnkey,
                  kdata->crnkey);
}


static void
insert_hit (GModule module, GKeyData * kdata) {
  ht_insert_hits (module, kdata->numdate, kdata->data_nkey, 1, kdata->cdnkey);
  ht_insert_meta_data (module, kdata->numdate, "hits", 1);
}



static void
insert_visitor (GModule module, GKeyData * kdata) {
  ht_insert_visitor (module, kdata->numdate, kdata->data_nkey, 1, kdata->cdnkey);
  ht_insert_meta_data (module, kdata->numdate, "visitors", 1);
}



static void
insert_bw (GModule module, GKeyData * kdata, uint64_t size) {
  ht_insert_bw (module, kdata->numdate, kdata->data_nkey, size, kdata->cdnkey);
  ht_insert_meta_data (module, kdata->numdate, "bytes", size);
}



static void
insert_cumts (GModule module, GKeyData * kdata, uint64_t ts) {
  ht_insert_cumts (module, kdata->numdate, kdata->data_nkey, ts, kdata->cdnkey);
  ht_insert_meta_data (module, kdata->numdate, "cumts", ts);
}



static void
insert_maxts (GModule module, GKeyData * kdata, uint64_t ts) {
  ht_insert_maxts (module, kdata->numdate, kdata->data_nkey, ts, kdata->cdnkey);
  ht_insert_meta_data (module, kdata->numdate, "maxts", ts);
}

static void
insert_method (GModule module, GKeyData * kdata, const char *data) {
  ht_insert_method (module, kdata->numdate, kdata->data_nkey, data ? data : "---",
                    kdata->cdnkey);
}



static void
insert_protocol (GModule module, GKeyData * kdata, const char *data) {
  ht_insert_protocol (module, kdata->numdate, kdata->data_nkey, data ? data : "---",
                      kdata->cdnkey);
}



static void
insert_agent (GModule module, GKeyData * kdata, uint32_t agent_nkey) {
  ht_insert_agent (module, kdata->numdate, kdata->data_nkey, agent_nkey);
}
# 741 "project/goaccess/src/gstorage.c"
static char *
gen_unique_req_key (GLogItem * logitem) {
  char *key = NULL;
  size_t s1 = 0, s2 = 0, s3 = 0, nul = 1, sep = 0;


  if (!conf.append_method && !conf.append_protocol)
    return xstrdup (logitem->req);

  if (!logitem->method && !logitem->protocol)
    return xstrdup (logitem->req);

  s1 = strlen (logitem->req);
  if (logitem->method && conf.append_method) {
    s2 = strlen (logitem->method);
    nul++;
  }
  if (logitem->protocol && conf.append_protocol) {
    s3 = strlen (logitem->protocol);
    nul++;
  }


  key = xcalloc (s1 + s2 + s3 + nul, sizeof (char));

  memcpy (key, logitem->req, s1);

  if (logitem->method && conf.append_method) {
    key[s1] = '|';
    sep++;
    memcpy (key + s1 + sep, logitem->method, s2 + 1);
  }
  if (logitem->protocol && conf.append_protocol) {
    key[s1 + s2 + sep] = '|';
    sep++;
    memcpy (key + s1 + s2 + sep, logitem->protocol, s3 + 1);
  }

  return key;
}



static void
append_query_string (char **req, const char *qstr) {
  char *r;
  size_t s1, s2, qm = 0;

  s1 = strlen (*req);
  s2 = strlen (qstr);


  if (*qstr != '?')
    qm = 1;

  r = xmalloc (s1 + s2 + qm + 1);
  memcpy (r, *req, s1);
  if (qm)
    r[s1] = '?';
  memcpy (r + s1 + qm, qstr, s2 + 1);

  free (*req);
  *req = r;
}



static void
get_kdata (GKeyData * kdata, const char *data_key, const char *data) {

  kdata->data = data;

  kdata->dhash = djb2 ((const unsigned char *) data_key);
}



static void
get_kroot (GKeyData * kdata, const char *root_key, const char *root) {

  kdata->root = root;

  kdata->rhash = djb2 ((const unsigned char *) root_key);
}




static void
set_spec_visitor_key (char **fdate, const char *ftime) {
  size_t dlen = 0, tlen = 0;
  char *key = NULL, *tkey = NULL, *pch = NULL;

  tkey = xstrdup (ftime);
  if (conf.date_spec_hr && (pch = strchr (tkey, ':')) && (pch - tkey) > 0)
    *pch = '\0';

  dlen = strlen (*fdate);
  tlen = strlen (tkey);

  key = xmalloc (dlen + tlen + 1);
  memcpy (key, *fdate, dlen);
  memcpy (key + dlen, tkey, tlen + 1);

  free (*fdate);
  free (tkey);
  *fdate = key;
}







static int
gen_visitor_key (GKeyData * kdata, GLogItem * logitem) {
  if (!logitem->date || !logitem->time)
    return 1;


  if (conf.date_spec_hr)
    set_spec_visitor_key (&logitem->date, logitem->time);

  get_kdata (kdata, logitem->date, logitem->date);
  kdata->numdate = logitem->numdate;

  return 0;
}







static int
gen_req_key (GKeyData * kdata, GLogItem * logitem) {
  if (!logitem->req)
    return 1;

  if (logitem->qstr)
    append_query_string (&logitem->req, logitem->qstr);
  logitem->req_key = gen_unique_req_key (logitem);

  get_kdata (kdata, logitem->req_key, logitem->req);
  kdata->numdate = logitem->numdate;

  return 0;
}







static int
gen_request_key (GKeyData * kdata, GLogItem * logitem) {
  if (!logitem->req || logitem->is_404 || logitem->is_static)
    return 1;

  return gen_req_key (kdata, logitem);
}






static int
gen_404_key (GKeyData * kdata, GLogItem * logitem) {
  if (logitem->req && logitem->is_404)
    return gen_req_key (kdata, logitem);
  return 1;
}






static int
gen_static_request_key (GKeyData * kdata, GLogItem * logitem) {
  if (logitem->req && logitem->is_static)
    return gen_req_key (kdata, logitem);
  return 1;
}






static int
gen_vhost_key (GKeyData * kdata, GLogItem * logitem) {
  if (!logitem->vhost)
    return 1;

  get_kdata (kdata, logitem->vhost, logitem->vhost);
  kdata->numdate = logitem->numdate;

  return 0;
}






static int
gen_remote_user_key (GKeyData * kdata, GLogItem * logitem) {
  if (!logitem->userid)
    return 1;

  get_kdata (kdata, logitem->userid, logitem->userid);
  kdata->numdate = logitem->numdate;

  return 0;
}






static int
gen_cache_status_key (GKeyData * kdata, GLogItem * logitem) {
  if (!logitem->cache_status)
    return 1;

  get_kdata (kdata, logitem->cache_status, logitem->cache_status);
  kdata->numdate = logitem->numdate;

  return 0;
}






static int
gen_host_key (GKeyData * kdata, GLogItem * logitem) {
  if (!logitem->host)
    return 1;

  get_kdata (kdata, logitem->host, logitem->host);
  kdata->numdate = logitem->numdate;

  return 0;
}







static int
gen_browser_key (GKeyData * kdata, GLogItem * logitem) {
  char *agent = NULL;
  char browser_type[BROWSER_TYPE_LEN] = "";

  if (logitem->agent == NULL || *logitem->agent == '\0')
    return 1;

  agent = xstrdup (logitem->agent);
  logitem->browser = verify_browser (agent, browser_type);
  logitem->browser_type = xstrdup (browser_type);


  get_kdata (kdata, logitem->browser, logitem->browser);


  get_kroot (kdata, logitem->browser_type, logitem->browser_type);
  kdata->numdate = logitem->numdate;

  free (agent);

  return 0;
}







static int
gen_os_key (GKeyData * kdata, GLogItem * logitem) {
  char *agent = NULL;
  char os_type[OPESYS_TYPE_LEN] = "";

  if (logitem->agent == NULL || *logitem->agent == '\0')
    return 1;

  agent = xstrdup (logitem->agent);
  logitem->os = verify_os (agent, os_type);
  logitem->os_type = xstrdup (os_type);


  get_kdata (kdata, logitem->os, logitem->os);


  get_kroot (kdata, logitem->os_type, logitem->os_type);
  kdata->numdate = logitem->numdate;

  free (agent);

  return 0;
}





static const char *
extract_mimemajor (const char *token) {
  const char *lookfor;



  if ((lookfor = "application", !strncmp (token, lookfor, 11)) ||
      (lookfor = "audio", !strncmp (token, lookfor, 5)) ||
      (lookfor = "font", !strncmp (token, lookfor, 4)) ||

      (lookfor = "example", !strncmp (token, lookfor, 7)) ||
      (lookfor = "image", !strncmp (token, lookfor, 5)) ||

      (lookfor = "message", !strncmp (token, lookfor, 7)) ||
      (lookfor = "model", !strncmp (token, lookfor, 5)) ||
      (lookfor = "multipart", !strncmp (token, lookfor, 9)) ||
      (lookfor = "text", !strncmp (token, lookfor, 4)) ||
      (lookfor = "video", !strncmp (token, lookfor, 5))
    )
    return lookfor;
  return NULL;
}






static int
gen_mime_type_key (GKeyData * kdata, GLogItem * logitem) {
  const char *major = NULL;

  if (!logitem->mime_type)
    return 1;


  major = extract_mimemajor (logitem->mime_type);
  if (!major)
    return 1;

  get_kdata (kdata, logitem->mime_type, logitem->mime_type);
  kdata->numdate = logitem->numdate;

  get_kroot (kdata, major, major);

  return 0;
}





static const char *
extract_tlsmajor (const char *token) {
  const char *lookfor;

  if ((lookfor = "SSLv3", !strncmp (token, lookfor, 5)) ||
      (lookfor = "TLSv1.1", !strncmp (token, lookfor, 7)) ||
      (lookfor = "TLSv1.2", !strncmp (token, lookfor, 7)) ||
      (lookfor = "TLSv1.3", !strncmp (token, lookfor, 7)) ||
      (lookfor = "TLS1.1", !strncmp (token, lookfor, 6)) ||
      (lookfor = "TLS1.2", !strncmp (token, lookfor, 6)) ||
      (lookfor = "TLS1.3", !strncmp (token, lookfor, 6)) ||

      (lookfor = "TLSv1", !strncmp (token, lookfor, 5)) ||
      (lookfor = "TLS1", !strncmp (token, lookfor, 4)))
    return lookfor;
  return NULL;
}






static int
gen_tls_type_key (GKeyData * kdata, GLogItem * logitem) {
  const char *tls;
  size_t tlen = 0, clen = 0;

  if (!logitem->tls_type)
    return 1;


  tls = extract_tlsmajor (logitem->tls_type);

  if (!tls)
    return 1;

  kdata->numdate = logitem->numdate;
  if (!logitem->tls_cypher) {
    get_kroot (kdata, tls, tls);
    get_kdata (kdata, tls, tls);
    return 0;
  }

  clen = strlen (logitem->tls_cypher);
  tlen = strlen (tls);

  logitem->tls_type_cypher = xmalloc (tlen + clen + 2);
  memcpy (logitem->tls_type_cypher, tls, tlen);
  logitem->tls_type_cypher[tlen] = '/';

  memcpy (logitem->tls_type_cypher + tlen + 1, logitem->tls_cypher, clen + 1);

  get_kdata (kdata, logitem->tls_type_cypher, logitem->tls_type_cypher);
  get_kroot (kdata, tls, tls);

  return 0;
}







static int
gen_referer_key (GKeyData * kdata, GLogItem * logitem) {
  if (!logitem->ref)
    return 1;

  get_kdata (kdata, logitem->ref, logitem->ref);
  kdata->numdate = logitem->numdate;

  return 0;
}






static int
gen_ref_site_key (GKeyData * kdata, GLogItem * logitem) {
  if (logitem->site[0] == '\0')
    return 1;

  get_kdata (kdata, logitem->site, logitem->site);
  kdata->numdate = logitem->numdate;

  return 0;
}






static int
gen_keyphrase_key (GKeyData * kdata, GLogItem * logitem) {
  if (!logitem->keyphrase)
    return 1;

  get_kdata (kdata, logitem->keyphrase, logitem->keyphrase);
  kdata->numdate = logitem->numdate;

  return 0;
}

#ifdef HAVE_GEOLOCATION





static int
extract_geolocation (GLogItem * logitem, char *continent, char *country) {
  if (!is_geoip_resource ())
    return 1;

  geoip_get_country (logitem->host, country, logitem->type_ip);
  geoip_get_continent (logitem->host, continent, logitem->type_ip);

  return 0;
}
#endif






#ifdef HAVE_GEOLOCATION
static int
gen_geolocation_key (GKeyData * kdata, GLogItem * logitem) {
  char continent[CONTINENT_LEN] = "";
  char country[COUNTRY_LEN] = "";

  if (extract_geolocation (logitem, continent, country) == 1)
    return 1;

  if (country[0] != '\0')
    logitem->country = xstrdup (country);

  if (continent[0] != '\0')
    logitem->continent = xstrdup (continent);

  get_kdata (kdata, logitem->country, logitem->country);
  get_kroot (kdata, logitem->continent, logitem->continent);
  kdata->numdate = logitem->numdate;

  return 0;
}
#endif






static int
gen_status_code_key (GKeyData * kdata, GLogItem * logitem) {
  const char *status = NULL, *type = NULL;

  if (!logitem->status)
    return 1;

  type = verify_status_code_type (logitem->status);
  status = verify_status_code (logitem->status);

  get_kdata (kdata, status, status);
  get_kroot (kdata, type, type);
  kdata->numdate = logitem->numdate;

  return 0;
}






static void
parse_time_specificity_string (char *hmark, char *ftime) {

  if (conf.hour_spec_min && hmark[1] != '\0') {
    hmark[2] = '\0';
    return;
  }


  if ((hmark - ftime) > 0)
    *hmark = '\0';
}






static int
gen_visit_time_key (GKeyData * kdata, GLogItem * logitem) {
  char *hmark = NULL;
  char hour[HRMI_LEN] = "";
  if (!logitem->time)
    return 1;



  if (!has_timestamp (conf.time_format) && (hmark = strchr (logitem->time, ':'))) {
    parse_time_specificity_string (hmark, logitem->time);

    kdata->numdate = logitem->numdate;
    get_kdata (kdata, logitem->time, logitem->time);
    return 0;
  }



  memset (hour, 0, sizeof *hour);
  if (convert_date (hour, logitem->time, "%T", "%H:%M", HRMI_LEN) != 0)
    return 1;

  if (*hour == '\0')
    return 1;

  if ((hmark = strchr (hour, ':')))
    parse_time_specificity_string (hmark, hour);

  free (logitem->time);
  logitem->time = xstrdup (hour);

  get_kdata (kdata, logitem->time, logitem->time);
  kdata->numdate = logitem->numdate;

  return 0;
}

void
insert_methods_protocols (void) {
  size_t i;
  for (i = 0; i < http_methods_len; ++i)
    ht_insert_meth_proto (http_methods[i].method);
  for (i = 0; i < http_protocols_len; ++i)
    ht_insert_meth_proto (http_protocols[i].protocol);
  ht_insert_meth_proto ("---");
}




static int
include_uniq (GLogItem * logitem) {
  int u = conf.client_err_to_unique_count;

  if (!logitem->status || logitem->status[0] != '4' || (u && logitem->status[0] == '4'))
    return 1;
  return 0;
}


static void
set_datamap (GLogItem * logitem, GKeyData * kdata, const GParse * parse) {
  GModule module;
  module = parse->module;


  parse->datamap (module, kdata);


  if (parse->rootmap && kdata->root) {
    parse->rootmap (module, kdata);
    insert_root (module, kdata);
  }

  if (parse->hits)
    parse->hits (module, kdata);

  if (parse->visitor && kdata->uniq_nkey == 1)
    parse->visitor (module, kdata);

  if (parse->bw)
    parse->bw (module, kdata, logitem->resp_size);

  if (parse->cumts)
    parse->cumts (module, kdata, logitem->serve_time);

  if (parse->maxts)
    parse->maxts (module, kdata, logitem->serve_time);

  if (parse->method && conf.append_method)
    parse->method (module, kdata, logitem->method);

  if (parse->protocol && conf.append_protocol)
    parse->protocol (module, kdata, logitem->protocol);

  if (parse->agent && conf.list_agents)
    parse->agent (module, kdata, logitem->agent_nkey);
}


static void
map_log (GLogItem * logitem, const GParse * parse, GModule module) {
  GKeyData kdata;

  new_modulekey (&kdata);

  if (parse->key_data (&kdata, logitem) == 1)
    return;


  if (parse->datamap && kdata.data)
    kdata.data_nkey = insert_dkeymap (module, &kdata);


  if (parse->visitor && logitem->uniq_key && include_uniq (logitem))
    kdata.uniq_nkey = insert_uniqmap (module, &kdata, logitem->uniq_nkey);


  if (parse->rootmap && kdata.root)
    kdata.root_nkey = insert_rkeymap (module, &kdata);


  if (parse->datamap && kdata.data)
    set_datamap (logitem, &kdata, parse);
}

static void
ins_agent_key_val (GLogItem * logitem, uint32_t numdate) {
  logitem->agent_nkey = ht_insert_agent_key (numdate, logitem->agent_hash);

  if (logitem->agent_nkey != 0) {

    ht_insert_agent_value (numdate, logitem->agent_nkey, logitem->agent);
  }
}

static int
clean_old_data_by_date (uint32_t numdate) {
  uint32_t *dates = NULL;
  uint32_t idx, len = 0;

  if (ht_get_size_dates () < conf.keep_last)
    return 1;

  dates = get_sorted_dates (&len);



  for (idx = len; idx-- > 0;) {
    if (dates[idx] == numdate) {
      free (dates);
      return 1;
    }
  }


  if (dates[0] > numdate) {
    free (dates);
    return -1;
  }


  invalidate_date (dates[0]);


  rebuild_rawdata_cache ();
  free (dates);

  return 0;
}



void
process_log (GLogItem * logitem) {
  GModule module;
  const GParse *parse = NULL;
  size_t idx = 0;
  uint32_t numdate = logitem->numdate;

  if (conf.keep_last > 0 && clean_old_data_by_date (numdate) == -1)
    return;


  if (ht_insert_date (numdate) == -1)
    return;



  if ((logitem->uniq_nkey = ht_insert_unique_key (numdate, logitem->uniq_key)) == 0)
    return;





  if (conf.list_agents)
    ins_agent_key_val (logitem, numdate);

  FOREACH_MODULE (idx, module_list) {
    module = module_list[idx];
    if (!(parse = panel_lookup (module)))
      continue;
    map_log (logitem, parse, module);
  }

  count_bw (numdate, logitem->resp_size);

  if (logitem->ignorelevel != IGNORE_LEVEL_REQ)
    count_valid (numdate);
}
