# 1 "project/goaccess/src/csv.c"
# 31 "project/goaccess/src/csv.c"
#define _LARGEFILE_SOURCE 
#define _LARGEFILE64_SOURCE 
#define _FILE_OFFSET_BITS 64

#include <ctype.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>
#include <inttypes.h>

#include "csv.h"

#include "error.h"
#include "gkhash.h"
#include "ui.h"
#include "util.h"

struct tm now_tm;


typedef struct GPanel_ {
  GModule module;
  void (*render) (FILE * fp, GHolder * h, GPercTotals totals);
} GPanel;

static void print_csv_data (FILE * fp, GHolder * h, GPercTotals totals);



static GPanel paneling[] = {
  {VISITORS , print_csv_data} ,
  {REQUESTS , print_csv_data} ,
  {REQUESTS_STATIC , print_csv_data} ,
  {NOT_FOUND , print_csv_data} ,
  {HOSTS , print_csv_data} ,
  {OS , print_csv_data} ,
  {BROWSERS , print_csv_data} ,
  {VISIT_TIMES , print_csv_data} ,
  {VIRTUAL_HOSTS , print_csv_data} ,
  {REFERRERS , print_csv_data} ,
  {REFERRING_SITES , print_csv_data} ,
  {KEYPHRASES , print_csv_data} ,
  {STATUS_CODES , print_csv_data} ,
  {REMOTE_USER , print_csv_data} ,
  {CACHE_STATUS , print_csv_data} ,
#ifdef HAVE_GEOLOCATION
  {GEO_LOCATION , print_csv_data} ,
#endif
  {MIME_TYPE , print_csv_data} ,
  {TLS_TYPE , print_csv_data} ,
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


static void
escape_cvs_output (FILE * fp, char *s) {
  while (*s) {
    switch (*s) {
    case '"':
      fprintf (fp, "\"\"");
      break;
    default:
      fputc (*s, fp);
      break;
    }
    s++;
  }
}




static void
print_csv_metric_block (FILE * fp, GMetrics * nmetrics) {

  fprintf (fp, "\"%" PRIu64 "\",", nmetrics->hits);
  fprintf (fp, "\"%4.2f%%\",", nmetrics->hits_perc);
  fprintf (fp, "\"%" PRIu64 "\",", nmetrics->visitors);
  fprintf (fp, "\"%4.2f%%\",", nmetrics->visitors_perc);


  if (conf.bandwidth) {
    fprintf (fp, "\"%" PRIu64 "\",", nmetrics->bw.nbw);
    fprintf (fp, "\"%4.2f%%\",", nmetrics->bw_perc);
  }


  if (conf.serve_usecs) {
    fprintf (fp, "\"%" PRIu64 "\",", nmetrics->avgts.nts);
    fprintf (fp, "\"%" PRIu64 "\",", nmetrics->cumts.nts);
    fprintf (fp, "\"%" PRIu64 "\",", nmetrics->maxts.nts);
  }


  if (conf.append_method && nmetrics->method)
    fprintf (fp, "\"%s\"", nmetrics->method);
  fprintf (fp, ",");


  if (conf.append_protocol && nmetrics->protocol)
    fprintf (fp, "\"%s\"", nmetrics->protocol);
  fprintf (fp, ",");


  fprintf (fp, "\"");
  escape_cvs_output (fp, nmetrics->data);
  fprintf (fp, "\"\r\n");
}





static void
print_csv_sub_items (FILE * fp, GHolder * h, int idx, GPercTotals totals) {
  GMetrics *nmetrics;
  GSubList *sub_list = h->items[idx].sub_list;
  GSubItem *iter;

  int i = 0;

  if (sub_list == NULL)
    return;

  for (iter = sub_list->head; iter; iter = iter->next, i++) {
    set_data_metrics (iter->metrics, &nmetrics, totals);

    fprintf (fp, "\"%d\",", i);
    fprintf (fp, "\"%d\",", idx);
    fprintf (fp, "\"%s\",", module_to_id (h->module));


    print_csv_metric_block (fp, nmetrics);
    free (nmetrics);
  }
}




static void
print_csv_data (FILE * fp, GHolder * h, GPercTotals totals) {
  GMetrics *nmetrics;
  int i;

  for (i = 0; i < h->idx; i++) {
    set_data_metrics (h->items[i].metrics, &nmetrics, totals);

    fprintf (fp, "\"%d\",", i);
    fprintf (fp, ",");
    fprintf (fp, "\"%s\",", module_to_id (h->module));


    print_csv_metric_block (fp, nmetrics);

    if (h->sub_items_size)
      print_csv_sub_items (fp, h, i, totals);

    free (nmetrics);
  }
}

#pragma GCC diagnostic ignored "-Wformat-nonliteral"

static void
print_csv_summary (FILE * fp) {
  char now[DATE_TIME];
  char *source = NULL;
  const char *fmt;
  int i = 0;
  uint64_t total = 0;
  uint32_t t = 0;

  generate_time ();
  strftime (now, DATE_TIME, "%Y-%m-%d %H:%M:%S %z", &now_tm);


  fmt = "\"%d\",,\"%s\",,,,,,,,\"%s\",\"%s\"\r\n";
  fprintf (fp, fmt, i++, GENER_ID, now, OVERALL_DATETIME);


  fmt = "\"%d\",,\"%s\",,,,,,,,\"%" PRIu64 "\",\"%s\"\r\n";
  total = ht_get_processed ();
  fprintf (fp, fmt, i++, GENER_ID, total, OVERALL_REQ);


  fmt = "\"%d\",,\"%s\",,,,,,,,\"%" PRIu64 "\",\"%s\"\r\n";
  total = ht_sum_valid ();
  fprintf (fp, fmt, i++, GENER_ID, total, OVERALL_VALID);


  total = ht_get_invalid ();
  fprintf (fp, fmt, i++, GENER_ID, total, OVERALL_FAILED);


  fmt = "\"%d\",,\"%s\",,,,,,,,\"%u\",\"%s\"\r\n";
  t = ht_get_processing_time ();
  fprintf (fp, fmt, i++, GENER_ID, t, OVERALL_GENTIME);


  fmt = "\"%d\",,\"%s\",,,,,,,,\"%" PRIu64 "\",\"%s\"\r\n";
  total = ht_get_size_uniqmap (VISITORS);
  fprintf (fp, fmt, i++, GENER_ID, total, OVERALL_VISITORS);


  total = ht_get_size_datamap (REQUESTS);
  fprintf (fp, fmt, i++, GENER_ID, total, OVERALL_FILES);


  total = ht_get_excluded_ips ();
  fprintf (fp, fmt, i++, GENER_ID, total, OVERALL_EXCL_HITS);


  total = ht_get_size_datamap (REFERRERS);
  fprintf (fp, fmt, i++, GENER_ID, total, OVERALL_REF);


  total = ht_get_size_datamap (NOT_FOUND);
  fprintf (fp, fmt, i++, GENER_ID, total, OVERALL_NOTFOUND);


  total = ht_get_size_datamap (REQUESTS_STATIC);
  fprintf (fp, fmt, i++, GENER_ID, total, OVERALL_STATIC);


  fmt = "\"%d\",,\"%s\",,,,,,,,\"%jd\",\"%s\"\r\n";
  fprintf (fp, fmt, i++, GENER_ID, (intmax_t) get_log_sizes (), OVERALL_LOGSIZE);


  fmt = "\"%d\",,\"%s\",,,,,,,,\"%" PRIu64 "\",\"%s\"\r\n";
  fprintf (fp, fmt, i++, GENER_ID, ht_sum_bw (), OVERALL_BANDWIDTH);


  source = get_log_source_str (0);
  fmt = "\"%d\",,\"%s\",,,,,,,,\"%s\",\"%s\"\r\n";
  fprintf (fp, fmt, i++, GENER_ID, source, OVERALL_LOG);
  free (source);
}

#pragma GCC diagnostic warning "-Wformat-nonliteral"


void
output_csv (GHolder * holder, const char *filename) {
  GModule module;
  GPercTotals totals;
  const GPanel *panel = NULL;
  size_t idx = 0;
  FILE *fp;

  fp = (filename != NULL) ? fopen (filename, "w") : stdout;
  if (!fp)
    FATAL ("Unable to open CSV file: %s.", strerror (errno));

  if (!conf.no_csv_summary)
    print_csv_summary (fp);

  set_module_totals (&totals);

  FOREACH_MODULE (idx, module_list) {
    module = module_list[idx];

    if (!(panel = panel_lookup (module))) {
      continue;
    }

    panel->render (fp, holder + module, totals);
  }

  fclose (fp);
}
