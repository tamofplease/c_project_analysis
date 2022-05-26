# 1 "project/goaccess/src/json.c"
# 31 "project/goaccess/src/json.c"
#define _LARGEFILE_SOURCE 
#define _LARGEFILE64_SOURCE 
#define _FILE_OFFSET_BITS 64

#include <errno.h>
#include <ctype.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>
#include <inttypes.h>

#include "json.h"

#include "error.h"
#include "gkhash.h"
#include "settings.h"
#include "ui.h"
#include "util.h"
#include "websocket.h"
#include "xmalloc.h"

typedef struct GPanel_ {
  GModule module;
  void (*render) (GJSON * json, GHolder * h, GPercTotals totals, const struct GPanel_ *);
  void (*subitems) (GJSON * json, GHolderItem * item, GPercTotals totals, int size, int iisp);
} GPanel;


static int nlines = 0;

static int escape_html_output = 0;

static void print_json_data (GJSON * json, GHolder * h, GPercTotals totals,
                             const struct GPanel_ *);
static void print_json_host_items (GJSON * json, GHolderItem * item,
                                   GPercTotals totals, int size, int iisp);
static void print_json_sub_items (GJSON * json, GHolderItem * item,
                                  GPercTotals totals, int size, int iisp);


static GPanel paneling[] = {
  {VISITORS , print_json_data , NULL } ,
  {REQUESTS , print_json_data , NULL } ,
  {REQUESTS_STATIC , print_json_data , NULL } ,
  {NOT_FOUND , print_json_data , NULL } ,
  {HOSTS , print_json_data , print_json_host_items } ,
  {OS , print_json_data , print_json_sub_items } ,
  {BROWSERS , print_json_data , print_json_sub_items } ,
  {VISIT_TIMES , print_json_data , NULL } ,
  {VIRTUAL_HOSTS , print_json_data , NULL } ,
  {REFERRERS , print_json_data , NULL } ,
  {REFERRING_SITES , print_json_data , NULL } ,
  {KEYPHRASES , print_json_data , NULL } ,
  {STATUS_CODES , print_json_data , print_json_sub_items } ,
  {REMOTE_USER , print_json_data , NULL } ,
  {CACHE_STATUS , print_json_data , NULL } ,
#ifdef HAVE_GEOLOCATION
  {GEO_LOCATION , print_json_data , print_json_sub_items } ,
#endif
  {MIME_TYPE , print_json_data , print_json_sub_items } ,
  {TLS_TYPE , print_json_data , print_json_sub_items } ,

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




static GJSON *
new_gjson (void) {
  GJSON *json = xcalloc (1, sizeof (GJSON));

  return json;
}


static void
free_json (GJSON * json) {
  if (!json)
    return;

  free (json->buf);
  free (json);
}


void
set_json_nlines (int newline) {
  nlines = newline;
}



static void
set_json_buffer (GJSON * json, int len) {
  char *tmp = NULL;

  size_t need = json->offset + len + 1, newlen = 0;

  if (need <= json->size)
    return;

  if (json->size == 0) {
    newlen = INIT_BUF_SIZE;
  } else {
    newlen = json->size;
    newlen += newlen / 2;
  }

  if (newlen < need)
    newlen = need;

  tmp = realloc (json->buf, newlen);
  if (tmp == NULL) {
    free_json (json);
    FATAL (("Unable to realloc JSON buffer.\n"));
  }
  json->buf = tmp;
  json->size = newlen;
}

#pragma GCC diagnostic ignored "-Wformat-nonliteral"




__attribute__((format (printf, 2, 3)))
  static void pjson (GJSON * json, const char *fmt, ...) {
  int len = 0;
  va_list args;

  va_start (args, fmt);
  if ((len = vsnprintf (NULL, 0, fmt, args)) < 0)
    FATAL (("Unable to write JSON formatted data.\n"));
  va_end (args);


  set_json_buffer (json, len);

  va_start (args, fmt);
  vsprintf (json->buf + json->offset, fmt, args);
  va_end (args);
  json->offset += len;
  }




void
fpjson (FILE * fp, const char *fmt, ...) {
  va_list args;

  va_start (args, fmt);
  vfprintf (fp, fmt, args);
  va_end (args);
}

#pragma GCC diagnostic warning "-Wformat-nonliteral"


static void
escape_json_other (GJSON * json, const char **s) {
# 222 "project/goaccess/src/json.c"
  if (escape_html_output) {
    switch (**s) {
    case '\'':
      pjson (json, "&#39;");
      return;
    case '&':
      pjson (json, "&amp;");
      return;
    case '<':
      pjson (json, "&lt;");
      return;
    case '>':
      pjson (json, "&gt;");
      return;
    }
  }

  if ((uint8_t) ** s <= 0x1f) {

    char buf[8];
    snprintf (buf, sizeof buf, "\\u%04x", **s);
    pjson (json, "%s", buf);
  } else if ((uint8_t) ** s == 0xe2 && (uint8_t) * (*s + 1) == 0x80 &&
             (uint8_t) * (*s + 2) == 0xa8) {

    pjson (json, "\\u2028");
    *s += 2;
  } else if ((uint8_t) ** s == 0xe2 && (uint8_t) * (*s + 1) == 0x80 &&
             (uint8_t) * (*s + 2) == 0xa9) {

    pjson (json, "\\u2029");
    *s += 2;
  } else {
    char buf[2];
    snprintf (buf, sizeof buf, "%c", **s);
    pjson (json, "%s", buf);
  }
}




static void
escape_json_output (GJSON * json, const char *s) {
  while (*s) {
    switch (*s) {

    case '"':
      pjson (json, "\\\"");
      break;
    case '\\':
      pjson (json, "\\\\");
      break;
    case '\b':
      pjson (json, "\\b");
      break;
    case '\f':
      pjson (json, "\\f");
      break;
    case '\n':
      pjson (json, "\\n");
      break;
    case '\r':
      pjson (json, "\\r");
      break;
    case '\t':
      pjson (json, "\\t");
      break;
    case '/':
      pjson (json, "\\/");
      break;
    default:
      escape_json_other (json, &s);
      break;
    }
    s++;
  }
}


static void
pskeysval (GJSON * json, const char *key, const char *val, int sp, int last) {
  if (!last)
    pjson (json, "%.*s\"%s\": \"%s\",%.*s", sp, TAB, key, val, nlines, NL);
  else
    pjson (json, "%.*s\"%s\": \"%s\"", sp, TAB, key, val);
}


void
fpskeyaval (FILE * fp, const char *key, const char *val, int sp, int last) {
  if (!last)
    fpjson (fp, "%.*s\"%s\": %s,%.*s", sp, TAB, key, val, nlines, NL);
  else
    fpjson (fp, "%.*s\"%s\": %s", sp, TAB, key, val);
}


void
fpskeysval (FILE * fp, const char *key, const char *val, int sp, int last) {
  if (!last)
    fpjson (fp, "%.*s\"%s\": \"%s\",%.*s", sp, TAB, key, val, nlines, NL);
  else
    fpjson (fp, "%.*s\"%s\": \"%s\"", sp, TAB, key, val);
}


void
fpskeyival (FILE * fp, const char *key, int val, int sp, int last) {
  if (!last)
    fpjson (fp, "%.*s\"%s\": %d,%.*s", sp, TAB, key, val, nlines, NL);
  else
    fpjson (fp, "%.*s\"%s\": %d", sp, TAB, key, val);
}


static void
pskeyu64val (GJSON * json, const char *key, uint64_t val, int sp, int last) {
  if (!last)
    pjson (json, "%.*s\"%s\": %" PRIu64 ",%.*s", sp, TAB, key, val, nlines, NL);
  else
    pjson (json, "%.*s\"%s\": %" PRIu64 "", sp, TAB, key, val);
}


static void
pskeyfval (GJSON * json, const char *key, float val, int sp, int last) {
  if (!last)
    pjson (json, "%.*s\"%s\": \"%4.2f\",%.*s", sp, TAB, key, val, nlines, NL);
  else
    pjson (json, "%.*s\"%s\": \"%4.2f\"", sp, TAB, key, val);
}


static void
popen_obj (GJSON * json, int iisp) {

  pjson (json, "%.*s{%.*s", iisp, TAB, nlines, NL);
}


void
fpopen_obj (FILE * fp, int iisp) {

  fpjson (fp, "%.*s{%.*s", iisp, TAB, nlines, NL);
}


static void
popen_obj_attr (GJSON * json, const char *attr, int sp) {

  pjson (json, "%.*s\"%s\": {%.*s", sp, TAB, attr, nlines, NL);
}


void
fpopen_obj_attr (FILE * fp, const char *attr, int sp) {

  fpjson (fp, "%.*s\"%s\": {%.*s", sp, TAB, attr, nlines, NL);
}


static void
pclose_obj (GJSON * json, int iisp, int last) {
  if (!last)
    pjson (json, "%.*s%.*s},%.*s", nlines, NL, iisp, TAB, nlines, NL);
  else
    pjson (json, "%.*s%.*s}", nlines, NL, iisp, TAB);
}


void
fpclose_obj (FILE * fp, int iisp, int last) {
  if (!last)
    fpjson (fp, "%.*s%.*s},%.*s", nlines, NL, iisp, TAB, nlines, NL);
  else
    fpjson (fp, "%.*s%.*s}", nlines, NL, iisp, TAB);
}


static void
popen_arr_attr (GJSON * json, const char *attr, int sp) {

  pjson (json, "%.*s\"%s\": [%.*s", sp, TAB, attr, nlines, NL);
}


void
fpopen_arr_attr (FILE * fp, const char *attr, int sp) {

  fpjson (fp, "%.*s\"%s\": [%.*s", sp, TAB, attr, nlines, NL);
}


static void
pclose_arr (GJSON * json, int sp, int last) {
  if (!last)
    pjson (json, "%.*s%.*s],%.*s", nlines, NL, sp, TAB, nlines, NL);
  else
    pjson (json, "%.*s%.*s]", nlines, NL, sp, TAB);
}


void
fpclose_arr (FILE * fp, int sp, int last) {
  if (!last)
    fpjson (fp, "%.*s%.*s],%.*s", nlines, NL, sp, TAB, nlines, NL);
  else
    fpjson (fp, "%.*s%.*s]", nlines, NL, sp, TAB);
}


static void
poverall_datetime (GJSON * json, int sp) {
  char now[DATE_TIME];

  generate_time ();
  strftime (now, DATE_TIME, "%Y-%m-%d %H:%M:%S %z", &now_tm);

  pskeysval (json, OVERALL_DATETIME, now, sp, 0);
}


static void
poverall_start_end_date (GJSON * json, GHolder * h, int sp) {
  char *start = NULL, *end = NULL;

  if (h->idx == 0 || get_start_end_parsing_dates (&start, &end, "%d/%b/%Y"))
    return;

  pskeysval (json, OVERALL_STARTDATE, start, sp, 0);
  pskeysval (json, OVERALL_ENDDATE, end, sp, 0);

  free (end);
  free (start);
}


static void
poverall_requests (GJSON * json, int sp) {
  pskeyu64val (json, OVERALL_REQ, ht_get_processed (), sp, 0);
}



static void
poverall_valid_reqs (GJSON * json, int sp) {
  pskeyu64val (json, OVERALL_VALID, ht_sum_valid (), sp, 0);
}



static void
poverall_invalid_reqs (GJSON * json, int sp) {
  pskeyu64val (json, OVERALL_FAILED, ht_get_invalid (), sp, 0);
}



static void
poverall_processed_time (GJSON * json, int sp) {
  pskeyu64val (json, OVERALL_GENTIME, ht_get_processing_time (), sp, 0);
}



static void
poverall_visitors (GJSON * json, int sp) {
  pskeyu64val (json, OVERALL_VISITORS, ht_get_size_uniqmap (VISITORS), sp, 0);
}



static void
poverall_files (GJSON * json, int sp) {
  pskeyu64val (json, OVERALL_FILES, ht_get_size_datamap (REQUESTS), sp, 0);
}



static void
poverall_excluded (GJSON * json, int sp) {
  pskeyu64val (json, OVERALL_EXCL_HITS, ht_get_excluded_ips (), sp, 0);
}


static void
poverall_refs (GJSON * json, int sp) {
  pskeyu64val (json, OVERALL_REF, ht_get_size_datamap (REFERRERS), sp, 0);
}



static void
poverall_notfound (GJSON * json, int sp) {
  pskeyu64val (json, OVERALL_NOTFOUND, ht_get_size_datamap (NOT_FOUND), sp, 0);
}



static void
poverall_static_files (GJSON * json, int sp) {
  pskeyu64val (json, OVERALL_STATIC, ht_get_size_datamap (REQUESTS_STATIC), sp, 0);
}



static void
poverall_log_size (GJSON * json, int sp) {
  pjson (json, "%.*s\"%s\": %jd,%.*s", sp, TAB, OVERALL_LOGSIZE,
         (intmax_t) get_log_sizes (), nlines, NL);
}



static void
poverall_bandwidth (GJSON * json, int sp) {
  pskeyu64val (json, OVERALL_BANDWIDTH, ht_sum_bw (), sp, 0);
}

static void
poverall_log_path (GJSON * json, int idx, int isp) {
  pjson (json, "%.*s\"", isp, TAB);
  if (conf.filenames[idx][0] == '-' && conf.filenames[idx][1] == '\0')
    pjson (json, "STDIN");
  else
    escape_json_output (json, conf.filenames[idx]);
  pjson (json, conf.filenames_idx - 1 != idx ? "\",\n" : "\"");
}



static void
poverall_log (GJSON * json, int sp) {
  int idx, isp = 0;


  if (conf.json_pretty_print)
    isp = sp + 1;

  popen_arr_attr (json, OVERALL_LOG, sp);
  for (idx = 0; idx < conf.filenames_idx; ++idx)
    poverall_log_path (json, idx, isp);
  pclose_arr (json, sp, 1);
}


static void
phits (GJSON * json, GMetrics * nmetrics, int sp) {
  int isp = 0;


  if (conf.json_pretty_print)
    isp = sp + 1;

  popen_obj_attr (json, "hits", sp);

  pskeyu64val (json, "count", nmetrics->hits, isp, 0);

  pskeyfval (json, "percent", nmetrics->hits_perc, isp, 1);
  pclose_obj (json, sp, 0);
}


static void
pvisitors (GJSON * json, GMetrics * nmetrics, int sp) {
  int isp = 0;


  if (conf.json_pretty_print)
    isp = sp + 1;

  popen_obj_attr (json, "visitors", sp);

  pskeyu64val (json, "count", nmetrics->visitors, isp, 0);

  pskeyfval (json, "percent", nmetrics->visitors_perc, isp, 1);
  pclose_obj (json, sp, 0);
}


static void
pbw (GJSON * json, GMetrics * nmetrics, int sp) {
  int isp = 0;


  if (conf.json_pretty_print)
    isp = sp + 1;

  if (!conf.bandwidth)
    return;

  popen_obj_attr (json, "bytes", sp);

  pskeyu64val (json, "count", nmetrics->bw.nbw, isp, 0);

  pskeyfval (json, "percent", nmetrics->bw_perc, isp, 1);
  pclose_obj (json, sp, 0);
}


static void
pavgts (GJSON * json, GMetrics * nmetrics, int sp) {
  if (!conf.serve_usecs)
    return;
  pskeyu64val (json, "avgts", nmetrics->avgts.nts, sp, 0);
}


static void
pcumts (GJSON * json, GMetrics * nmetrics, int sp) {
  if (!conf.serve_usecs)
    return;
  pskeyu64val (json, "cumts", nmetrics->cumts.nts, sp, 0);
}


static void
pmaxts (GJSON * json, GMetrics * nmetrics, int sp) {
  if (!conf.serve_usecs)
    return;
  pskeyu64val (json, "maxts", nmetrics->maxts.nts, sp, 0);
}


static void
pmethod (GJSON * json, GMetrics * nmetrics, int sp) {

  if (conf.append_method && nmetrics->method) {
    pskeysval (json, "method", nmetrics->method, sp, 0);
  }
}


static void
pprotocol (GJSON * json, GMetrics * nmetrics, int sp) {

  if (conf.append_protocol && nmetrics->protocol) {
    pskeysval (json, "protocol", nmetrics->protocol, sp, 0);
  }
}

static void
pmeta_i64_data (GJSON * json, GHolder * h, void (*cb) (GModule, uint64_t *, uint64_t *),
                const char *key, int show_perc, int sp) {
  int isp = 0;
  uint64_t max = 0, min = 0, total = ht_get_meta_data (h->module, key);
  float avg = (total == 0 ? 0 : (((float) total) / h->ht_size));


  if (conf.json_pretty_print)
    isp = sp + 1;

  cb (h->module, &min, &max);

  popen_obj_attr (json, "total", sp);
  pskeyu64val (json, "value", total, isp, 1);
  pclose_obj (json, sp, 0);

  popen_obj_attr (json, "avg", sp);
  pskeyu64val (json, "value", avg, isp, !show_perc);
  if (show_perc) {
    pskeyfval (json, "percent", get_percentage (total, avg), isp, 1);
  }
  pclose_obj (json, sp, 0);

  popen_obj_attr (json, "max", sp);
  pskeyu64val (json, "value", max, isp, !show_perc);
  if (show_perc) {
    pskeyfval (json, "percent", get_percentage (total, max), isp, 1);
  }
  pclose_obj (json, sp, 0);

  popen_obj_attr (json, "min", sp);
  pskeyu64val (json, "value", min, isp, !show_perc);
  if (show_perc) {
    pskeyfval (json, "percent", get_percentage (total, min), isp, 1);
  }
  pclose_obj (json, sp, 1);
}

static void
pmeta_i32_data (GJSON * json, GHolder * h, void (*cb) (GModule, uint32_t *, uint32_t *),
                const char *key, int show_perc, int sp) {
  int isp = 0;
  uint32_t max = 0, min = 0, total = ht_get_meta_data (h->module, key);
  float avg = (total == 0 ? 0 : (((float) total) / h->ht_size));


  if (conf.json_pretty_print)
    isp = sp + 1;

  cb (h->module, &min, &max);

  popen_obj_attr (json, "total", sp);
  pskeyu64val (json, "value", total, isp, 1);
  pclose_obj (json, sp, 0);

  popen_obj_attr (json, "avg", sp);
  pskeyu64val (json, "value", avg, isp, !show_perc);
  if (show_perc) {
    pskeyfval (json, "percent", get_percentage (total, avg), isp, 1);
  }
  pclose_obj (json, sp, 0);

  popen_obj_attr (json, "max", sp);
  pskeyu64val (json, "value", max, isp, !show_perc);
  if (show_perc) {
    pskeyfval (json, "percent", get_percentage (total, max), isp, 1);
  }
  pclose_obj (json, sp, 0);

  popen_obj_attr (json, "min", sp);
  pskeyu64val (json, "value", min, isp, !show_perc);
  if (show_perc) {
    pskeyfval (json, "percent", get_percentage (total, min), isp, 1);
  }
  pclose_obj (json, sp, 1);
}


static void
pmeta_data_unique (GJSON * json, int ht_size, int sp) {
  int isp = 0;


  if (conf.json_pretty_print)
    isp = sp + 1;

  popen_obj_attr (json, "data", sp);

  popen_obj_attr (json, "total", isp);
  pskeyu64val (json, "value", ht_size, isp + 1, 1);
  pclose_obj (json, isp, 1);

  pclose_obj (json, sp, 1);
}


static void
pmeta_data_hits (GJSON * json, GHolder * h, int sp) {
  int isp = 0;


  if (conf.json_pretty_print)
    isp = sp + 1;

  popen_obj_attr (json, "hits", sp);
  pmeta_i32_data (json, h, ht_get_hits_min_max, "hits", 1, isp);
  pclose_obj (json, sp, 0);
}


static void
pmeta_data_visitors (GJSON * json, GHolder * h, int sp) {
  int isp = 0;


  if (conf.json_pretty_print)
    isp = sp + 1;

  popen_obj_attr (json, "visitors", sp);
  pmeta_i32_data (json, h, ht_get_visitors_min_max, "visitors", 1, isp);
  pclose_obj (json, sp, 0);
}


static void
pmeta_data_bw (GJSON * json, GHolder * h, int sp) {
  int isp = 0;
  if (!conf.bandwidth)
    return;


  if (conf.json_pretty_print)
    isp = sp + 1;

  popen_obj_attr (json, "bytes", sp);
  pmeta_i64_data (json, h, ht_get_bw_min_max, "bytes", 1, isp);
  pclose_obj (json, sp, 0);
}



static void
pmeta_data_avgts (GJSON * json, GHolder * h, int sp) {
  int isp = 0;
  uint64_t avg = 0, hits = 0, cumts = 0;

  if (!conf.serve_usecs)
    return;


  if (conf.json_pretty_print)
    isp = sp + 1;

  cumts = ht_get_meta_data (h->module, "cumts");
  hits = ht_get_meta_data (h->module, "hits");
  if (hits > 0)
    avg = cumts / hits;

  popen_obj_attr (json, "avgts", sp);

  popen_obj_attr (json, "avg", isp);
  pskeyu64val (json, "value", avg, isp + 1, 1);
  pclose_obj (json, isp, 1);

  pclose_obj (json, sp, 0);
}


static void
pmeta_data_cumts (GJSON * json, GHolder * h, int sp) {
  int isp = 0;

  if (!conf.serve_usecs)
    return;


  if (conf.json_pretty_print)
    isp = sp + 1;

  popen_obj_attr (json, "cumts", sp);
  pmeta_i64_data (json, h, ht_get_cumts_min_max, "cumts", 0, isp);
  pclose_obj (json, sp, 0);
}


static void
pmeta_data_maxts (GJSON * json, GHolder * h, int sp) {
  int isp = 0;
  if (!conf.serve_usecs)
    return;


  if (conf.json_pretty_print)
    isp = sp + 1;

  popen_obj_attr (json, "maxts", sp);
  pmeta_i64_data (json, h, ht_get_maxts_min_max, "maxts", 0, isp);
  pclose_obj (json, sp, 0);
}


static void
print_meta_data (GJSON * json, GHolder * h, int sp) {
  int isp = 0, iisp = 0;

  if (conf.json_pretty_print)
    isp = sp + 1, iisp = sp + 2;

  popen_obj_attr (json, "metadata", isp);

  pmeta_data_avgts (json, h, iisp);
  pmeta_data_cumts (json, h, iisp);
  pmeta_data_maxts (json, h, iisp);
  pmeta_data_bw (json, h, iisp);
  pmeta_data_visitors (json, h, iisp);
  pmeta_data_hits (json, h, iisp);
  pmeta_data_unique (json, h->ht_size, iisp);

  pclose_obj (json, isp, 0);
}


static void
print_json_block (GJSON * json, GMetrics * nmetrics, int sp) {

  phits (json, nmetrics, sp);

  pvisitors (json, nmetrics, sp);

  pbw (json, nmetrics, sp);


  pavgts (json, nmetrics, sp);
  pcumts (json, nmetrics, sp);
  pmaxts (json, nmetrics, sp);


  pmethod (json, nmetrics, sp);
  pprotocol (json, nmetrics, sp);


  pjson (json, "%.*s\"data\": \"", sp, TAB);
  escape_json_output (json, nmetrics->data);
  pjson (json, "\"");
}


static void
process_host_agents (GJSON * json, GHolderItem * item, int iisp) {
  GAgents *agents = NULL;
  int i, n = 0, iiisp = 0;


  if (conf.json_pretty_print)
    iiisp = iisp + 1;


  if (!(agents = load_host_agents (item->metrics->data)))
    return;

  pjson (json, ",%.*s%.*s\"items\": [%.*s", nlines, NL, iisp, TAB, nlines, NL);

  n = agents->idx > 10 ? 10 : agents->idx;
  for (i = 0; i < n; ++i) {
    pjson (json, "%.*s\"", iiisp, TAB);
    escape_json_output (json, agents->items[i].agent);
    if (i == n - 1)
      pjson (json, "\"");
    else
      pjson (json, "\",%.*s", nlines, NL);
  }

  pclose_arr (json, iisp, 1);


  free_agents_array (agents);
}


static void
print_json_sub_items (GJSON * json, GHolderItem * item, GPercTotals totals, int size, int iisp) {
  GMetrics *nmetrics;
  GSubItem *iter;
  GSubList *sl = item->sub_list;
  int i = 0, iiisp = 0, iiiisp = 0;


  if (size == 0)
    return;


  if (conf.json_pretty_print)
    iiisp = iisp + 1, iiiisp = iiisp + 1;

  if (sl == NULL)
    return;

  pjson (json, ",%.*s%.*s\"items\": [%.*s", nlines, NL, iisp, TAB, nlines, NL);
  for (iter = sl->head; iter; iter = iter->next, i++) {
    set_data_metrics (iter->metrics, &nmetrics, totals);

    popen_obj (json, iiisp);
    print_json_block (json, nmetrics, iiiisp);
    pclose_obj (json, iiisp, (i == sl->size - 1));
    free (nmetrics);
  }
  pclose_arr (json, iisp, 1);
}


static void
print_json_host_geo (GJSON * json, GSubList * sl, int iisp) {
  GSubItem *iter;
  int i;
  static const char *key[] = {
    "country",
    "city",
    "hostname",
  };

  pjson (json, ",%.*s", nlines, NL);


  for (i = 0, iter = sl->head; iter; iter = iter->next, i++) {
    pjson (json, "%.*s\"%s\": \"", iisp, TAB, key[iter->metrics->id]);
    escape_json_output (json, iter->metrics->data);
    pjson (json, (i != sl->size - 1) ? "\",%.*s" : "\"", nlines, NL);
  }
}


static void
print_json_host_items (GJSON * json, GHolderItem * item, GPercTotals totals,
                       int size, int iisp) {
  (void) totals;

  if (size > 0 && item->sub_list != NULL)
    print_json_host_geo (json, item->sub_list, iisp);


  if (conf.list_agents)
    process_host_agents (json, item, iisp);
}


static void
print_data_metrics (GJSON * json, GHolder * h, GPercTotals totals, int sp,
                    const struct GPanel_ *panel) {
  GMetrics *nmetrics;
  int i, isp = 0, iisp = 0, iiisp = 0;


  if (conf.json_pretty_print)
    isp = sp + 1, iisp = sp + 2, iiisp = sp + 3;

  popen_arr_attr (json, "data", isp);

  for (i = 0; i < h->idx; i++) {
    set_data_metrics (h->items[i].metrics, &nmetrics, totals);


    popen_obj (json, iisp);

    print_json_block (json, nmetrics, iiisp);

    if (panel->subitems)
      panel->subitems (json, h->items + i, totals, h->sub_items_size, iiisp);

    pclose_obj (json, iisp, (i == h->idx - 1));

    free (nmetrics);
  }
  pclose_arr (json, isp, 1);
}


static void
print_json_data (GJSON * json, GHolder * h, GPercTotals totals, const struct GPanel_ *panel) {
  int sp = 0;

  if (conf.json_pretty_print)
    sp = 1;


  popen_obj_attr (json, module_to_id (h->module), sp);

  print_meta_data (json, h, sp);

  print_data_metrics (json, h, totals, sp, panel);

  pclose_obj (json, sp, 1);
}




static int
num_panels (void) {
  size_t idx = 0, npanels = 0;

  FOREACH_MODULE (idx, module_list)
    npanels++;

  return npanels;
}


static void
print_json_summary (GJSON * json, GHolder * holder) {
  int sp = 0, isp = 0;


  if (conf.json_pretty_print)
    sp = 1, isp = 2;

  popen_obj_attr (json, GENER_ID, sp);

  poverall_start_end_date (json, holder, isp);

  poverall_datetime (json, isp);

  poverall_requests (json, isp);

  poverall_valid_reqs (json, isp);

  poverall_invalid_reqs (json, isp);

  poverall_processed_time (json, isp);

  poverall_visitors (json, isp);

  poverall_files (json, isp);

  poverall_excluded (json, isp);

  poverall_refs (json, isp);

  poverall_notfound (json, isp);

  poverall_static_files (json, isp);

  poverall_log_size (json, isp);

  poverall_bandwidth (json, isp);

  poverall_log (json, isp);
  pclose_obj (json, sp, num_panels () > 0 ? 0 : 1);
}


static GJSON *
init_json_output (GHolder * holder) {
  GJSON *json = NULL;
  GModule module;
  GPercTotals totals;
  const GPanel *panel = NULL;
  size_t idx = 0, npanels = num_panels (), cnt = 0;

  json = new_gjson ();

  popen_obj (json, 0);
  print_json_summary (json, holder);

  set_module_totals (&totals);

  FOREACH_MODULE (idx, module_list) {
    module = module_list[idx];

    if (!(panel = panel_lookup (module)))
      continue;

    panel->render (json, holder + module, totals, panel);
    pjson (json, (cnt++ != npanels - 1) ? ",%.*s" : "%.*s", nlines, NL);
  }

  pclose_obj (json, 0, 1);

  return json;
}




char *
get_json (GHolder * holder, int escape_html) {
  GJSON *json = NULL;
  char *buf = NULL;

  if (holder == NULL)
    return NULL;

  escape_html_output = escape_html;
  if ((json = init_json_output (holder)) && json->size > 0) {
    buf = xstrdup (json->buf);
    free_json (json);
  }

  return buf;
}


void
output_json (GHolder * holder, const char *filename) {
  GJSON *json = NULL;
  FILE *fp;

  if (filename != NULL)
    fp = fopen (filename, "w");
  else
    fp = stdout;

  if (!fp)
    FATAL ("Unable to open JSON file: %s.", strerror (errno));


  if (conf.json_pretty_print)
    nlines = 1;


  if ((json = init_json_output (holder)) && json->size > 0) {
    fprintf (fp, "%s", json->buf);
    free_json (json);
  }

  fclose (fp);
}
