# 1 "project/goaccess/src/parser.c"
# 35 "project/goaccess/src/parser.c"
#define _LARGEFILE_SOURCE 
#define _LARGEFILE64_SOURCE 
#define _FILE_OFFSET_BITS 64

#define _XOPEN_SOURCE 700
#define _DEFAULT_SOURCE 

#include <ctype.h>
#include <errno.h>

#if HAVE_CONFIG_H
#include <config.h>
#endif

#include <arpa/inet.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <inttypes.h>

#include "gkhash.h"

#include "parser.h"

#include "browsers.h"
#include "error.h"
#include "goaccess.h"
#include "gstorage.h"
#include "pdjson.h"
#include "util.h"
#include "websocket.h"
#include "xmalloc.h"




GRawData *
new_grawdata (void) {
  GRawData *raw_data = xmalloc (sizeof (*raw_data));
  memset (raw_data, 0, sizeof *raw_data);

  return raw_data;
}




GRawDataItem *
new_grawdata_item (unsigned int size) {
  GRawDataItem *item = xcalloc (size, sizeof (*item));
  return item;
}


void
free_raw_data (GRawData * raw_data) {
  free (raw_data->items);
  free (raw_data);
}


void
reset_struct (Logs * logs) {
  int i = 0;

  for (i = 0; i < logs->size; ++i)
    logs->glog[i].invalid = logs->glog[i].processed = 0;
}




Logs *
init_logs (int size) {
  Logs *logs = NULL;
  GLog *glog = NULL;
  int i = 0;


  if (!size && !conf.restore)
    return NULL;



  logs = xcalloc (1, sizeof (*logs));
  if (!size) {
    logs->glog = xcalloc (1, sizeof (*glog));
    logs->processed = &(logs->glog[0].processed);
    return logs;
  }

  glog = xcalloc (size, sizeof (*glog));
  for (i = 0; i < size; ++i) {
    glog[i].errors = xcalloc (MAX_LOG_ERRORS, sizeof (char *));
    glog[i].filename = xstrdup (conf.filenames[i]);

    logs->processed = &(glog[i].processed);
    logs->filename = glog[i].filename;
  }

  logs->glog = glog;
  logs->size = size;

  return logs;
}


void
free_logerrors (GLog * glog) {
  int i;

  if (!glog->log_erridx)
    return;

  for (i = 0; i < glog->log_erridx; ++i)
    free (glog->errors[i]);
  glog->log_erridx = 0;
}


void
free_logs (Logs * logs) {
  GLog *glog = NULL;
  int i;

  for (i = 0; i < logs->size; ++i) {
    glog = &logs->glog[i];

    free (glog->filename);
    free_logerrors (glog);
    free (glog->errors);
    if (glog->pipe) {
      fclose (glog->pipe);
    }
  }

  free (logs->glog);
  free (logs);
}




GLogItem *
init_log_item (GLog * glog) {
  time_t now = time (0);
  GLogItem *logitem;
  glog->items = xmalloc (sizeof (GLogItem));
  logitem = glog->items;
  memset (logitem, 0, sizeof *logitem);

  logitem->agent = NULL;
  logitem->browser = NULL;
  logitem->browser_type = NULL;
  logitem->continent = NULL;
  logitem->country = NULL;
  logitem->date = NULL;
  logitem->errstr = NULL;
  logitem->host = NULL;
  logitem->keyphrase = NULL;
  logitem->method = NULL;
  logitem->os = NULL;
  logitem->os_type = NULL;
  logitem->protocol = NULL;
  logitem->qstr = NULL;
  logitem->ref = NULL;
  logitem->req_key = NULL;
  logitem->req = NULL;
  logitem->resp_size = 0LL;
  logitem->serve_time = 0;
  logitem->status = NULL;
  logitem->time = NULL;
  logitem->uniq_key = NULL;
  logitem->vhost = NULL;
  logitem->userid = NULL;
  logitem->cache_status = NULL;


  logitem->mime_type = NULL;
  logitem->tls_type = NULL;
  logitem->tls_cypher = NULL;
  logitem->tls_type_cypher = NULL;

  memset (logitem->site, 0, sizeof (logitem->site));
  memset (logitem->agent_hex, 0, sizeof (logitem->agent_hex));
  localtime_r (&now, &logitem->dt);

  return logitem;
}


static void
free_glog (GLogItem * logitem) {
  if (logitem->agent != NULL)
    free (logitem->agent);
  if (logitem->browser != NULL)
    free (logitem->browser);
  if (logitem->browser_type != NULL)
    free (logitem->browser_type);
  if (logitem->continent != NULL)
    free (logitem->continent);
  if (logitem->country != NULL)
    free (logitem->country);
  if (logitem->date != NULL)
    free (logitem->date);
  if (logitem->errstr != NULL)
    free (logitem->errstr);
  if (logitem->host != NULL)
    free (logitem->host);
  if (logitem->keyphrase != NULL)
    free (logitem->keyphrase);
  if (logitem->method != NULL)
    free (logitem->method);
  if (logitem->os != NULL)
    free (logitem->os);
  if (logitem->os_type != NULL)
    free (logitem->os_type);
  if (logitem->protocol != NULL)
    free (logitem->protocol);
  if (logitem->qstr != NULL)
    free (logitem->qstr);
  if (logitem->ref != NULL)
    free (logitem->ref);
  if (logitem->req_key != NULL)
    free (logitem->req_key);
  if (logitem->req != NULL)
    free (logitem->req);
  if (logitem->status != NULL)
    free (logitem->status);
  if (logitem->time != NULL)
    free (logitem->time);
  if (logitem->uniq_key != NULL)
    free (logitem->uniq_key);
  if (logitem->userid != NULL)
    free (logitem->userid);
  if (logitem->cache_status != NULL)
    free (logitem->cache_status);
  if (logitem->vhost != NULL)
    free (logitem->vhost);

  if (logitem->mime_type != NULL)
    free (logitem->mime_type);
  if (logitem->tls_type != NULL)
    free (logitem->tls_type);
  if (logitem->tls_cypher != NULL)
    free (logitem->tls_cypher);
  if (logitem->tls_type_cypher != NULL)
    free (logitem->tls_type_cypher);

  free (logitem);
}




#define B16210(x) (((x) >= '0' && (x) <= '9') ? ((x) - '0') : (toupper((x)) - 'A' + 10))
static void
decode_hex (char *url, char *out) {
  char *ptr;
  const char *c;

  for (c = url, ptr = out; *c; c++) {
    if (*c != '%' || !isxdigit (c[1]) || !isxdigit (c[2])) {
      *ptr++ = *c;
    } else {
      *ptr++ = (char) ((B16210 (c[1]) * 16) + (B16210 (c[2])));
      c += 2;
    }
  }
  *ptr = 0;
}





static char *
decode_url (char *url) {
  char *out, *decoded;

  if ((url == NULL) || (*url == '\0'))
    return NULL;

  out = decoded = xstrdup (url);
  decode_hex (url, out);

  if (conf.double_decode)
    decode_hex (decoded, out);
  strip_newlines (out);

  return trim_str (char_replace (out, '+', ' '));
}







static int
extract_keyphrase (char *ref, char **keyphrase) {
  char *r, *ptr, *pch, *referer;
  int encoded = 0;

  if (!(strstr (ref, "http://www.google.")) &&
      !(strstr (ref, "http://webcache.googleusercontent.com/")) &&
      !(strstr (ref, "http://translate.googleusercontent.com/")) &&
      !(strstr (ref, "https://www.google.")) &&
      !(strstr (ref, "https://webcache.googleusercontent.com/")) &&
      !(strstr (ref, "https://translate.googleusercontent.com/")))
    return 1;


  if ((r = strstr (ref, "/+&")) != NULL)
    return 1;

  else if ((r = strstr (ref, "/+")) != NULL)
    r += 2;

  else if ((r = strstr (ref, "q=cache:")) != NULL) {
    pch = strchr (r, '+');
    if (pch)
      r += pch - r + 1;
  }

  else if ((r = strstr (ref, "&q=")) != NULL || (r = strstr (ref, "?q=")) != NULL)
    r += 3;
  else if ((r = strstr (ref, "%26q%3D")) != NULL || (r = strstr (ref, "%3Fq%3D")) != NULL)
    encoded = 1, r += 7;
  else
    return 1;

  if (!encoded && (ptr = strchr (r, '&')) != NULL)
    *ptr = '\0';
  else if (encoded && (ptr = strstr (r, "%26")) != NULL)
    *ptr = '\0';

  referer = decode_url (r);
  if (referer == NULL || *referer == '\0') {
    free (referer);
    return 1;
  }

  referer = char_replace (referer, '+', ' ');
  *keyphrase = trim_str (referer);

  return 0;
}






static int
extract_referer_site (const char *referer, char *host) {
  char *url, *begin, *end;
  int len = 0;

  if ((referer == NULL) || (*referer == '\0'))
    return 1;

  url = strdup (referer);
  if ((begin = strstr (url, "//")) == NULL)
    goto clean;

  begin += 2;
  if ((len = strlen (begin)) == 0)
    goto clean;

  if ((end = strchr (begin, '/')) != NULL)
    len = end - begin;

  if (len == 0)
    goto clean;

  if (len >= REF_SITE_LEN)
    len = REF_SITE_LEN;

  memcpy (host, begin, len);
  host[len] = '\0';
  free (url);
  return 0;
clean:
  free (url);

  return 1;
}





static int
verify_static_content (const char *req) {
  const char *nul = NULL;
  const char *ext = NULL, *pch = NULL;
  int elen = 0, i;

  if ((req == NULL) || (*req == '\0'))
    return 0;

  nul = req + strlen (req);

  for (i = 0; i < conf.static_file_idx; ++i) {
    ext = conf.static_files[i];
    if (ext == NULL || *ext == '\0')
      continue;

    elen = strlen (ext);
    if (conf.all_static_files && (pch = strchr (req, '?')) != NULL && pch - req > elen) {
      pch -= elen;
      if (0 == strncasecmp (ext, pch, elen))
        return 1;
      continue;
    }

    if (nul - req > elen && !strncasecmp (nul - elen, ext, elen))
      return 1;
  }

  return 0;
}





static const char *
extract_method (const char *token) {
  size_t i;
  for (i = 0; i < http_methods_len; i++) {
    if (strncasecmp (token, http_methods[i].method, http_methods[i].len) == 0) {
      return http_methods[i].method;
    }
  }
  return NULL;
}


static void
contains_usecs (void) {
  if (conf.serve_usecs)
    return;
  conf.serve_usecs = 1;
}

static int
is_cache_hit (const char *tkn) {
  if (strcasecmp ("MISS", tkn) == 0)
    return 1;
  else if (strcasecmp ("BYPASS", tkn) == 0)
    return 1;
  else if (strcasecmp ("EXPIRED", tkn) == 0)
    return 1;
  else if (strcasecmp ("STALE", tkn) == 0)
    return 1;
  else if (strcasecmp ("UPDATING", tkn) == 0)
    return 1;
  else if (strcasecmp ("REVALIDATED", tkn) == 0)
    return 1;
  else if (strcasecmp ("HIT", tkn) == 0)
    return 1;
  return 0;
}





static const char *
extract_protocol (const char *token) {
  size_t i;
  for (i = 0; i < http_protocols_len; i++) {
    if (strncasecmp (token, http_protocols[i].protocol, http_protocols[i].len) == 0) {
      return http_protocols[i].protocol;
    }
  }
  return NULL;
}






static char *
parse_req (char *line, char **method, char **protocol) {
  char *req = NULL, *request = NULL, *dreq = NULL, *ptr = NULL;
  const char *meth, *proto;
  ptrdiff_t rlen;

  meth = extract_method (line);


  if (meth == NULL) {
    request = xstrdup (line);
  }

  else {
    req = line + strlen (meth);
    if (!(ptr = strrchr (req, ' ')) || !(proto = extract_protocol (++ptr)))
      return alloc_string ("-");

    req++;
    if ((rlen = ptr - req) <= 0)
      return alloc_string ("-");

    request = xmalloc (rlen + 1);
    strncpy (request, req, rlen);
    request[rlen] = 0;

    if (conf.append_method)
      (*method) = strtoupper (xstrdup (meth));

    if (conf.append_protocol)
      (*protocol) = strtoupper (xstrdup (proto));
  }

  if (!(dreq = decode_url (request)))
    return request;
  else if (*dreq == '\0') {
    free (dreq);
    return request;
  }

  free (request);
  return dreq;
}

#if defined(HAVE_LIBSSL) && defined(HAVE_CIPHER_STD_NAME)
static int
extract_tls_version_cipher (char *tkn, char **cipher, char **tls_version) {
  SSL_CTX *ctx = NULL;
  SSL *ssl = NULL;
  int code = 0;
  unsigned short code_be;
  unsigned char cipherid[3];
  const SSL_CIPHER *c = NULL;
  char *bEnd;
  const char *sn = NULL;

  code = strtoull (tkn, &bEnd, 10);
  if (tkn == bEnd || *bEnd != '\0' || errno == ERANGE) {
    LOG_DEBUG (("unable to convert cipher code to a valid decimal."));
    goto fail;
  }


  if (!(ctx = SSL_CTX_new (SSLv23_server_method ()))) {
    LOG_DEBUG (("Unable to create a new SSL_CTX_new to extact TLS."));
    goto fail;
  }
  if (!(ssl = SSL_new (ctx))) {
    LOG_DEBUG (("Unable to create a new instace of SSL_new to extact TLS."));
    goto fail;
  }

  code_be = htobe16 (code);
  memcpy (cipherid, &code_be, 2);
  cipherid[2] = 0;

  if (!(c = SSL_CIPHER_find (ssl, cipherid))) {
    LOG_DEBUG (("Unable to find cipher to extact TLS."));
    goto fail;
  }

  if (!(sn = SSL_CIPHER_standard_name (c))) {
    LOG_DEBUG (("Unable to get cipher standard name to extact TLS."));
    goto fail;
  }
  *cipher = xstrdup (sn);
  *tls_version = xstrdup (SSL_CIPHER_get_version (c));

  free (tkn);
  SSL_free (ssl);
  SSL_CTX_free (ctx);

  return 0;

fail:
  free (tkn);
  if (ssl)
    SSL_free (ssl);
  if (ctx)
    SSL_CTX_free (ctx);
  return 1;
}
#endif






static void
get_delim (char *dest, const char *p) {

  if (p[0] == '\0' || p[1] == '\0') {
    dest[0] = '\0';
    return;
  }

  dest[0] = *(p + 1);
}




static char *
parsed_string (const char *pch, char **str, int move_ptr) {
  char *p;
  size_t len = (pch - *str + 1);

  p = xmalloc (len);
  memcpy (p, *str, (len - 1));
  p[len - 1] = '\0';
  if (move_ptr)
    *str += len - 1;

  return trim_str (p);
}





static char *
parse_string (char **str, const char *delims, int cnt) {
  int idx = 0;
  char *pch = *str, *p = NULL;
  char end;

  if ((*delims != 0x0) && (p = strpbrk (*str, delims)) == NULL)
    return NULL;

  end = !*delims ? 0x0 : *p;
  do {

    if (*pch == end)
      idx++;

    if ((*pch == end && cnt == idx) || *pch == '\0')
      return parsed_string (pch, str, 1);

    if (*pch == '\\')
      pch++;
  } while (*pch++);

  return NULL;
}

char *
extract_by_delim (char **str, const char *end) {
  return parse_string (&(*str), end, 1);
}



static void
find_alpha (char **str) {
  char *s = *str;
  while (*s) {
    if (isspace (*s))
      s++;
    else
      break;
  }
  *str += s - *str;
}



static int
find_alpha_count (char *str) {
  int cnt = 0;
  char *s = str;
  while (*s) {
    if (isspace (*s))
      s++, cnt++;
    else
      break;
  }
  return cnt;
}





#pragma GCC diagnostic ignored "-Wformat-nonliteral"
static int
set_date (char **fdate, struct tm tm) {
  char buf[DATE_LEN] = "";

  memset (buf, 0, sizeof (buf));
  if (strftime (buf, DATE_LEN, conf.date_num_format, &tm) <= 0)
    return 1;
  *fdate = xstrdup (buf);

  return 0;
}





static int
set_time (char **ftime, struct tm tm) {
  char buf[TIME_LEN] = "";

  memset (buf, 0, sizeof (buf));
  if (strftime (buf, TIME_LEN, "%H:%M:%S", &tm) <= 0)
    return 1;
  *ftime = xstrdup (buf);

  return 0;
}






static int
spec_err (GLogItem * logitem, int code, const char spec, const char *tkn) {
  char *err = NULL;
  const char *fmt = NULL;

  switch (code) {
  case SPEC_TOKN_NUL:
    fmt = "Token for '%%%c' specifier is NULL.";
    err = xmalloc (snprintf (NULL, 0, fmt, spec) + 1);
    sprintf (err, fmt, spec);
    break;
  case SPEC_TOKN_INV:
    fmt = "Token '%s' doesn't match specifier '%%%c'";
    err = xmalloc (snprintf (NULL, 0, fmt, (tkn ? tkn : "-"), spec) + 1);
    sprintf (err, fmt, (tkn ? tkn : "-"), spec);
    break;
  case SPEC_SFMT_MIS:
    fmt = "Missing braces '%s' and ignore chars for specifier '%%%c'";
    err = xmalloc (snprintf (NULL, 0, fmt, (tkn ? tkn : "-"), spec) + 1);
    sprintf (err, fmt, (tkn ? tkn : "-"), spec);
    break;
  }
  logitem->errstr = err;

  return code;
}

static void
set_tm_dt_logitem (GLogItem * logitem, struct tm tm) {
  logitem->dt.tm_year = tm.tm_year;
  logitem->dt.tm_mon = tm.tm_mon;
  logitem->dt.tm_mday = tm.tm_mday;
}

static void
set_tm_tm_logitem (GLogItem * logitem, struct tm tm) {
  logitem->dt.tm_hour = tm.tm_hour;
  logitem->dt.tm_min = tm.tm_min;
  logitem->dt.tm_sec = tm.tm_sec;
}

static void
set_numeric_date (uint32_t * numdate, const char *date) {
  int res = 0;
  if ((res = str2int (date)) == -1)
    FATAL ("Unable to parse date to integer %s", date);
  *numdate = res;
}

static void
set_agent_hash (GLogItem * logitem) {
  logitem->agent_hash = djb2 ((unsigned char *) logitem->agent);
  sprintf (logitem->agent_hex, "%" PRIx32, logitem->agent_hash);
}

#pragma GCC diagnostic warning "-Wformat-nonliteral"





static int
parse_specifier (GLogItem * logitem, char **str, const char *p, const char *end) {
  struct tm tm;
  time_t now = time (0);
  const char *dfmt = conf.date_format;
  const char *tfmt = conf.time_format;

  char *pch, *sEnd, *bEnd, *tkn = NULL;
  double serve_secs = 0.0;
  uint64_t bandw = 0, serve_time = 0;
  long status = 0L;
  int dspc = 0, fmtspcs = 0;

  errno = 0;
  memset (&tm, 0, sizeof (tm));
  localtime_r (&now, &tm);

  switch (*p) {

  case 'd':
    if (logitem->date)
      return 0;






    if ((fmtspcs = count_matches (dfmt, ' ')) && (pch = strchr (*str, ' ')))
      dspc = find_alpha_count (pch);

    if (!(tkn = parse_string (&(*str), end, MAX (dspc, fmtspcs) + 1)))
      return spec_err (logitem, SPEC_TOKN_NUL, *p, NULL);

    if (str_to_time (tkn, dfmt, &tm) != 0 || set_date (&logitem->date, tm) != 0) {
      spec_err (logitem, SPEC_TOKN_INV, *p, tkn);
      free (tkn);
      return 1;
    }

    set_numeric_date (&logitem->numdate, logitem->date);
    set_tm_dt_logitem (logitem, tm);
    free (tkn);
    break;

  case 't':
    if (logitem->time)
      return 0;
    if (!(tkn = parse_string (&(*str), end, 1)))
      return spec_err (logitem, SPEC_TOKN_NUL, *p, NULL);

    if (str_to_time (tkn, tfmt, &tm) != 0 || set_time (&logitem->time, tm) != 0) {
      spec_err (logitem, SPEC_TOKN_INV, *p, tkn);
      free (tkn);
      return 1;
    }

    set_tm_tm_logitem (logitem, tm);
    free (tkn);
    break;

  case 'x':
    if (logitem->time && logitem->date)
      return 0;
    if (!(tkn = parse_string (&(*str), end, 1)))
      return spec_err (logitem, SPEC_TOKN_NUL, *p, NULL);

    if (str_to_time (tkn, tfmt, &tm) != 0 || set_date (&logitem->date, tm) != 0 ||
        set_time (&logitem->time, tm) != 0) {
      spec_err (logitem, SPEC_TOKN_INV, *p, tkn);
      free (tkn);
      return 1;
    }
    set_numeric_date (&logitem->numdate, logitem->date);
    set_tm_dt_logitem (logitem, tm);
    set_tm_tm_logitem (logitem, tm);
    free (tkn);
    break;

  case 'v':
    if (logitem->vhost)
      return 0;
    tkn = parse_string (&(*str), end, 1);
    if (tkn == NULL)
      return spec_err (logitem, SPEC_TOKN_NUL, *p, NULL);
    logitem->vhost = tkn;
    break;

  case 'e':
    if (logitem->userid)
      return 0;
    tkn = parse_string (&(*str), end, 1);
    if (tkn == NULL)
      return spec_err (logitem, SPEC_TOKN_NUL, *p, NULL);
    logitem->userid = tkn;
    break;

  case 'C':
    if (logitem->cache_status)
      return 0;
    tkn = parse_string (&(*str), end, 1);
    if (tkn == NULL)
      return spec_err (logitem, SPEC_TOKN_NUL, *p, NULL);
    if (is_cache_hit (tkn))
      logitem->cache_status = tkn;
    else
      free (tkn);
    break;

  case 'h':
    if (logitem->host)
      return 0;


    if (*str[0] == '[' && (*str += 1) && **str)
      end = "]";
    if (!(tkn = parse_string (&(*str), end, 1)))
      return spec_err (logitem, SPEC_TOKN_NUL, *p, NULL);

    if (!conf.no_ip_validation && invalid_ipaddr (tkn, &logitem->type_ip)) {
      spec_err (logitem, SPEC_TOKN_INV, *p, tkn);
      free (tkn);
      return 1;
    }


    if (conf.no_ip_validation && *tkn == '\0') {
      spec_err (logitem, SPEC_TOKN_INV, *p, tkn);
      free (tkn);
      return 1;
    }
    logitem->host = tkn;
    break;

  case 'm':
    if (logitem->method)
      return 0;
    if (!(tkn = parse_string (&(*str), end, 1)))
      return spec_err (logitem, SPEC_TOKN_NUL, *p, NULL);
    {
      const char *meth = NULL;
      if (!(meth = extract_method (tkn))) {
        spec_err (logitem, SPEC_TOKN_INV, *p, tkn);
        free (tkn);
        return 1;
      }
      logitem->method = xstrdup (meth);
      free (tkn);
    }
    break;

  case 'U':
    if (logitem->req)
      return 0;
    tkn = parse_string (&(*str), end, 1);
    if (tkn == NULL || *tkn == '\0') {
      free (tkn);
      return spec_err (logitem, SPEC_TOKN_NUL, *p, NULL);
    }

    if ((logitem->req = decode_url (tkn)) == NULL) {
      spec_err (logitem, SPEC_TOKN_INV, *p, tkn);
      free (tkn);
      return 1;
    }
    free (tkn);
    break;

  case 'q':
    if (logitem->qstr)
      return 0;
    tkn = parse_string (&(*str), end, 1);
    if (tkn == NULL || *tkn == '\0') {
      free (tkn);
      return 0;
    }

    if ((logitem->qstr = decode_url (tkn)) == NULL) {
      spec_err (logitem, SPEC_TOKN_INV, *p, tkn);
      free (tkn);
      return 1;
    }
    free (tkn);
    break;

  case 'H':
    if (logitem->protocol)
      return 0;
    if (!(tkn = parse_string (&(*str), end, 1)))
      return spec_err (logitem, SPEC_TOKN_NUL, *p, NULL);
    {
      const char *proto = NULL;
      if (!(proto = extract_protocol (tkn))) {
        spec_err (logitem, SPEC_TOKN_INV, *p, tkn);
        free (tkn);
        return 1;
      }
      logitem->protocol = xstrdup (proto);
      free (tkn);
    }
    break;

  case 'r':
    if (logitem->req)
      return 0;
    if (!(tkn = parse_string (&(*str), end, 1)))
      return spec_err (logitem, SPEC_TOKN_NUL, *p, NULL);

    logitem->req = parse_req (tkn, &logitem->method, &logitem->protocol);
    free (tkn);
    break;

  case 's':
    if (logitem->status)
      return 0;
    if (!(tkn = parse_string (&(*str), end, 1)))
      return spec_err (logitem, SPEC_TOKN_NUL, *p, NULL);


    if (conf.no_strict_status) {
      logitem->status = tkn;
      break;
    }

    status = strtol (tkn, &sEnd, 10);
    if (tkn == sEnd || *sEnd != '\0' || errno == ERANGE || status < 100 || status > 599) {
      spec_err (logitem, SPEC_TOKN_INV, *p, tkn);
      free (tkn);
      return 1;
    }
    logitem->status = tkn;
    break;

  case 'b':
    if (logitem->resp_size)
      return 0;
    if (!(tkn = parse_string (&(*str), end, 1)))
      return spec_err (logitem, SPEC_TOKN_NUL, *p, NULL);

    bandw = strtoull (tkn, &bEnd, 10);
    if (tkn == bEnd || *bEnd != '\0' || errno == ERANGE)
      bandw = 0;
    logitem->resp_size = bandw;
    conf.bandwidth = 1;
    free (tkn);
    break;

  case 'R':
    if (logitem->ref)
      return 0;

    if (!(tkn = parse_string (&(*str), end, 1)))
      tkn = alloc_string ("-");
    if (*tkn == '\0') {
      free (tkn);
      tkn = alloc_string ("-");
    }
    if (strcmp (tkn, "-") != 0) {
      extract_keyphrase (tkn, &logitem->keyphrase);
      extract_referer_site (tkn, logitem->site);


      if (hide_referer (logitem->site)) {
        logitem->site[0] = '\0';
        free (tkn);
      } else
        logitem->ref = tkn;
      break;
    }
    logitem->ref = tkn;

    break;

  case 'u':
    if (logitem->agent)
      return 0;

    tkn = parse_string (&(*str), end, 1);
    if (tkn != NULL && *tkn != '\0') {


      logitem->agent = decode_url (tkn);
      set_agent_hash (logitem);
      free (tkn);
      break;
    } else if (tkn != NULL && *tkn == '\0') {
      free (tkn);
      tkn = alloc_string ("-");
    }

    else {
      tkn = alloc_string ("-");
    }
    logitem->agent = tkn;
    set_agent_hash (logitem);
    break;

  case 'L':

    if (logitem->serve_time)
      return 0;
    if (!(tkn = parse_string (&(*str), end, 1)))
      return spec_err (logitem, SPEC_TOKN_NUL, *p, NULL);

    serve_secs = strtoull (tkn, &bEnd, 10);
    if (tkn == bEnd || *bEnd != '\0' || errno == ERANGE)
      serve_secs = 0;

    logitem->serve_time = (serve_secs > 0) ? serve_secs * MILS : 0;

    contains_usecs ();
    free (tkn);
    break;


  case 'T':

    if (logitem->serve_time)
      return 0;
    if (!(tkn = parse_string (&(*str), end, 1)))
      return spec_err (logitem, SPEC_TOKN_NUL, *p, NULL);

    if (strchr (tkn, '.') != NULL)
      serve_secs = strtod (tkn, &bEnd);
    else
      serve_secs = strtoull (tkn, &bEnd, 10);

    if (tkn == bEnd || *bEnd != '\0' || errno == ERANGE)
      serve_secs = 0;

    logitem->serve_time = (serve_secs > 0) ? serve_secs * SECS : 0;

    contains_usecs ();
    free (tkn);
    break;

  case 'D':

    if (logitem->serve_time)
      return 0;
    if (!(tkn = parse_string (&(*str), end, 1)))
      return spec_err (logitem, SPEC_TOKN_NUL, *p, NULL);

    serve_time = strtoull (tkn, &bEnd, 10);
    if (tkn == bEnd || *bEnd != '\0' || errno == ERANGE)
      serve_time = 0;
    logitem->serve_time = serve_time;

    contains_usecs ();
    free (tkn);
    break;


  case 'k':

    if (logitem->tls_cypher)
      return 0;
    if (!(tkn = parse_string (&(*str), end, 1)))
      return spec_err (logitem, SPEC_TOKN_NUL, *p, NULL);

#if defined(HAVE_LIBSSL) && defined(HAVE_CIPHER_STD_NAME)
    {
      char *tmp = NULL;
      for (tmp = tkn; isdigit (*tmp); tmp++);
      if (!strlen (tmp))
        extract_tls_version_cipher (tkn, &logitem->tls_cypher, &logitem->tls_type);
      else
        logitem->tls_cypher = tkn;
    }
#else
    logitem->tls_cypher = tkn;
#endif

    break;


  case 'K':

    if (logitem->tls_type)
      return 0;
    if (!(tkn = parse_string (&(*str), end, 1)))
      return spec_err (logitem, SPEC_TOKN_NUL, *p, NULL);

    logitem->tls_type = tkn;
    break;


  case 'M':

    if (logitem->mime_type)
      return 0;
    if (!(tkn = parse_string (&(*str), end, 1)))
      return spec_err (logitem, SPEC_TOKN_NUL, *p, NULL);

    logitem->mime_type = tkn;

    break;

  case '~':
    find_alpha (&(*str));
    break;

  default:
    if ((pch = strchr (*str, p[1])) != NULL)
      *str += pch - *str;
  }

  return 0;
}






static char *
extract_braces (char **p) {
  char *b1 = NULL, *b2 = NULL, *ret = NULL, *s = *p;
  int esc = 0;
  ptrdiff_t len = 0;


  for (; *s; s++) {
    if (*s == '\\') {
      esc = 1;
    } else if (*s == '{' && !esc) {
      b1 = s;
    } else if (*s == '}' && !esc) {
      b2 = s;
      break;
    } else {
      esc = 0;
    }
  }

  if ((!b1) || (!b2))
    return NULL;
  if ((len = b2 - (b1 + 1)) <= 0)
    return NULL;


  ret = xmalloc (len + 1);
  memcpy (ret, b1 + 1, len);
  ret[len] = '\0';
  (*p) = b2 + 1;

  return ret;
}






static int
find_xff_host (GLogItem * logitem, char **str, char **p) {
  char *ptr = NULL, *tkn = NULL, *skips = NULL;
  int invalid_ip = 1, len = 0, type_ip = TYPE_IPINV;
  int idx = 0, skips_len = 0;

  if (!(skips = extract_braces (p)))
    return spec_err (logitem, SPEC_SFMT_MIS, **p, "{}");

  skips_len = strlen (skips);
  ptr = *str;
  while (*ptr != '\0') {
    if ((len = strcspn (ptr, skips)) == 0) {
      len++, ptr++, idx++;
      goto move;
    }


    if (idx < skips_len && logitem->host)
      break;

    ptr += len;

    if (!(tkn = parsed_string (ptr, str, 0)))
      break;

    invalid_ip = invalid_ipaddr (tkn, &type_ip);

    if (logitem->host && invalid_ip) {
      free (tkn);
      break;
    }
    if (!logitem->host && !invalid_ip) {
      logitem->host = xstrdup (tkn);
      logitem->type_ip = type_ip;
    }
    free (tkn);
    idx = 0;

  move:
    *str += len;
  }

  free (skips);

  return logitem->host == NULL;
}






static int
special_specifier (GLogItem * logitem, char **str, char **p) {
  switch (**p) {

  case 'h':
    if (logitem->host)
      return 0;
    if (find_xff_host (logitem, str, p))
      return spec_err (logitem, SPEC_TOKN_NUL, 'h', NULL);
    break;
  }

  return 0;
}






static int
parse_format (GLogItem * logitem, char *str, char *lfmt) {
  char end[2 + 1] = { 0 };
  char *p = NULL;
  int perc = 0, tilde = 0, ret = 0;

  if (str == NULL || *str == '\0')
    return 1;


  for (p = lfmt; *p; p++) {
    if (*p == '%') {
      perc++;
      continue;
    }
    if (*p == '~' && perc == 0) {
      tilde++;
      continue;
    }
    if (*str == '\n')
      return 0;

    if (tilde && *p != '\0') {
      if (*str == '\0')
        return 0;
      if (special_specifier (logitem, &str, &p) == 1)
        return 1;
      tilde = 0;
    }

    else if (perc && *p != '\0') {
      if (*str == '\0')
        return 0;

      memset (end, 0, sizeof end);
      get_delim (end, p);

      if ((ret = parse_specifier (logitem, &str, p, end)))
        return ret;
      perc = 0;
    } else if (perc && isspace (p[0])) {
      return 1;
    } else {
      str++;
    }
  }

  return 0;
}





static int
valid_line (char *line) {

  if ((line == NULL) || (*line == '\0'))
    return 1;

  if (*line == '#' || *line == '\n')
    return 1;

  return 0;
}



static void
strip_qstring (char *req) {
  char *qmark;
  if ((qmark = strchr (req, '?')) != NULL) {
    if ((qmark - req) > 0)
      *qmark = '\0';
  }
}



void
output_logerrors (void) {
  Logs *logs = get_db_logs (DB_INSTANCE);
  GLog *glog = NULL;
  int pid = getpid (), i;

  for (i = 0; i < logs->size; ++i) {
    glog = &logs->glog[i];
    if (!glog->log_erridx)
      continue;

    fprintf (stderr, "==%d== GoAccess - Copyright (C) 2009-2020 by Gerardo Orellana\n", pid);
    fprintf (stderr, "==%d== https://goaccess.io - <hello@goaccess.io>\n", pid);
    fprintf (stderr, "==%d== Released under the MIT License.\n", pid);
    fprintf (stderr, "==%d==\n", pid);
    fprintf (stderr, "==%d== FILE: %s\n", pid, glog->filename);
    fprintf (stderr, "==%d== ", pid);
    fprintf (stderr, ERR_PARSED_NLINES, glog->log_erridx);
    fprintf (stderr, " %s:\n", ERR_PARSED_NLINES_DESC);
    fprintf (stderr, "==%d==\n", pid);
    for (i = 0; i < glog->log_erridx; ++i)
      fprintf (stderr, "==%d== %s\n", pid, glog->errors[i]);
  }
  fprintf (stderr, "==%d==\n", pid);
  fprintf (stderr, "==%d== %s\n", pid, ERR_FORMAT_HEADER);
}


static int
verify_missing_fields (GLogItem * logitem) {

  if (logitem->host == NULL)
    logitem->errstr = xstrdup ("IPv4/6 is required.");
  else if (logitem->date == NULL)
    logitem->errstr = xstrdup ("A valid date is required.");
  else if (logitem->req == NULL)
    logitem->errstr = xstrdup ("A request is required.");

  return logitem->errstr != NULL;
}






static int
handle_crawler (const char *agent) {
  int bot = 0;

  if (!conf.ignore_crawlers && !conf.crawlers_only)
    return 1;

  bot = is_crawler (agent);
  return (conf.ignore_crawlers && bot) || (conf.crawlers_only && !bot) ? 0 : 1;
}





static int
is_static (const char *req) {
  return verify_static_content (req);
}






static int
ignore_status_code (const char *status) {
  if (!status || conf.ignore_status_idx == 0)
    return 0;

  if (str_inarray (status, conf.ignore_status, conf.ignore_status_idx) != -1)
    return 1;
  return 0;
}





static int
ignore_static (const char *req) {
  if (conf.ignore_statics && is_static (req))
    return 1;
  return 0;
}





static int
is_404 (GLogItem * logitem) {
  if (!logitem->status || *logitem->status == '\0')
    return 0;

  if (!memcmp (logitem->status, "404", 3))
    return 1;

  else if (!memcmp (logitem->status, "444", 3) && conf.code444_as_404)
    return 1;
  return 0;
}






static int
ignore_line (GLogItem * logitem) {
  if (excluded_ip (logitem) == 0)
    return IGNORE_LEVEL_PANEL;
  if (handle_crawler (logitem->agent) == 0)
    return IGNORE_LEVEL_PANEL;
  if (ignore_referer (logitem->ref))
    return IGNORE_LEVEL_PANEL;
  if (ignore_status_code (logitem->status))
    return IGNORE_LEVEL_PANEL;
  if (ignore_static (logitem->req))
    return conf.ignore_statics;


  if (conf.ignore_qstr)
    strip_qstring (logitem->req);

  return 0;
}







static char *
get_uniq_visitor_key (GLogItem * logitem) {
  char *key = NULL;
  size_t s1, s2, s3;

  s1 = strlen (logitem->date);
  s2 = strlen (logitem->host);
  s3 = strlen (logitem->agent_hex);


  key = xcalloc (s1 + s2 + s3 + 3, sizeof (char));

  memcpy (key, logitem->date, s1);

  key[s1] = '|';
  memcpy (key + s1 + 1, logitem->host, s2 + 1);

  key[s1 + s2 + 1] = '|';
  memcpy (key + s1 + s2 + 2, logitem->agent_hex, s3 + 1);

  return key;
}







static int
is_likely_same_log (GLog * glog, const GLastParse * lp) {
  size_t size = 0;

  if (!lp->size)
    return 1;


  size = MIN (glog->snippetlen, lp->snippetlen);
  if (glog->snippet[0] != '\0' && lp->snippet[0] != '\0' &&
      memcmp (glog->snippet, lp->snippet, size) == 0)
    return 1;

  return 0;
}






static int
should_restore_from_disk (GLog * glog) {
  GLastParse lp = { 0 };

  if (!conf.restore)
    return 0;

  lp = ht_get_last_parse (glog->inode);



  if (!lp.ts)
    return 0;



  if (glog->inode && is_likely_same_log (glog, &lp)) {
    if (glog->size > lp.size && glog->read >= lp.line)
      return 0;
    return 1;
  }



  if (!glog->inode && lp.ts >= glog->lp.ts)
    return 1;



  if (glog->lp.ts > lp.ts)
    return 0;




  else if (glog->size < lp.size && glog->lp.ts == lp.ts)
    return 0;







  return 1;
}

static void
process_invalid (GLog * glog, GLogItem * logitem, const char *line) {
  GLastParse lp = { 0 };


  if (!conf.restore) {
    count_process_and_invalid (glog, line);
    return;
  }

  lp = ht_get_last_parse (glog->inode);



  if (glog->inode && is_likely_same_log (glog, &lp)) {

    if (glog->size > lp.size && glog->read >= lp.line)
      count_process_and_invalid (glog, line);
    return;
  }


  if (!logitem->numdate) {
    count_process_and_invalid (glog, line);
    return;
  }


  if ((glog->lp.ts = mktime (&logitem->dt)) == -1)
    return;




  if (should_restore_from_disk (glog) == 0)
    count_process_and_invalid (glog, line);
}

static int
parse_json_specifier (void *ptr_data, char *key, char *str) {
  GLogItem *logitem = (GLogItem *) ptr_data;
  char *spec = NULL;
  int ret = 0;

  if (!key || !str)
    return 0;

  if (0 == strlen (str))
    return 0;
  if (!(spec = ht_get_json_logfmt (key)))
    return 0;

  ret = parse_format (logitem, str, spec);
  free (spec);

  return ret;
}

static int
parse_json_format (GLogItem * logitem, char *str) {
  return parse_json_string (logitem, str, parse_json_specifier);
}






int
pre_process_log (GLog * glog, char *line, int dry_run) {
  GLogItem *logitem;
  int ret = 0;
  char *fmt = conf.log_format;


  if (valid_line (line))
    return -1;

  logitem = init_log_item (glog);


  if (conf.is_json_log_format)
    ret = parse_json_format (logitem, line);
  else
    ret = parse_format (logitem, line, fmt);

  if (ret || (ret = verify_missing_fields (logitem))) {
    process_invalid (glog, logitem, line);
    goto cleanup;
  }

  if ((glog->lp.ts = mktime (&logitem->dt)) == -1)
    goto cleanup;

  if (should_restore_from_disk (glog))
    goto cleanup;

  count_process (glog);


  if (logitem->agent == NULL) {
    logitem->agent = alloc_string ("-");
    set_agent_hash (logitem);
  }


  if (dry_run)
    goto cleanup;

  logitem->ignorelevel = ignore_line (logitem);

  if (logitem->ignorelevel == IGNORE_LEVEL_PANEL)
    goto cleanup;

  if (is_404 (logitem))
    logitem->is_404 = 1;
  else if (is_static (logitem->req))
    logitem->is_static = 1;

  logitem->uniq_key = get_uniq_visitor_key (logitem);

  process_log (logitem);

cleanup:
  free_glog (logitem);

  return ret;
}





static int
read_line (GLog * glog, char *line, int *test, int *cnt, int dry_run) {
  int ret = 0;


  if ((ret = pre_process_log (glog, line, dry_run)) == 0 && *test)
    *test = 0;


  if (ret == -1)
    return 0;



  if (conf.num_tests && ++(*cnt) == (int) conf.num_tests && *test) {
    uncount_processed (glog);
    uncount_invalid (glog);
    return 1;
  }

  return 0;
}





char *
fgetline (FILE * fp) {
  char buf[LINE_BUFFER] = { 0 };
  char *line = NULL, *tmp = NULL;
  size_t linelen = 0, len = 0;

  while (1) {
    if (!fgets (buf, sizeof (buf), fp)) {
      if (conf.process_and_exit && errno == EAGAIN) {
        (void) nanosleep ((const struct timespec[]) { {0, 100000000L} }, NULL);
        continue;
      } else
        break;
    }

    len = strlen (buf);


    if (SIZE_MAX - len - 1 < linelen)
      break;

    if ((tmp = realloc (line, linelen + len + 1)) == NULL)
      break;

    line = tmp;

    strcpy (line + linelen, buf);
    linelen += len;

    if (feof (fp) || buf[len - 1] == '\n')
      return line;
  }
  free (line);

  return NULL;
}






#ifdef WITH_GETLINE
static int
read_lines (FILE * fp, GLog * glog, int dry_run) {
  char *line = NULL;
  int ret = 0, cnt = 0, test = conf.num_tests > 0 ? 1 : 0;

  glog->bytes = 0;
  while ((line = fgetline (fp)) != NULL) {

    if (conf.stop_processing)
      goto out;
    if ((ret = read_line (glog, line, &test, &cnt, dry_run)))
      goto out;
    if (dry_run && NUM_TESTS == cnt)
      goto out;
    glog->bytes += strlen (line);
    free (line);
    glog->read++;
  }



  if (!line && (errno == EAGAIN || errno == EWOULDBLOCK) && test)
    return 0;

  return (line && test) || ret || (!line && test && glog->processed);

out:
  free (line);




  return test || ret || (test && glog->processed);
}
#endif





#ifndef WITH_GETLINE
static int
read_lines (FILE * fp, GLog * glog, int dry_run) {
  char *s = NULL;
  char line[LINE_BUFFER] = { 0 };
  int ret = 0, cnt = 0, test = conf.num_tests > 0 ? 1 : 0;

  glog->bytes = 0;
  while ((s = fgets (line, LINE_BUFFER, fp)) != NULL) {

    if (conf.stop_processing)
      break;
    if ((ret = read_line (glog, line, &test, &cnt, dry_run)))
      break;
    if (dry_run && NUM_TESTS == cnt)
      break;
    glog->bytes += strlen (line);
    glog->read++;
  }



  if (!s && (errno == EAGAIN || errno == EWOULDBLOCK) && test)
    return 0;





  return (s && test) || ret || (!s && test && glog->processed);
}
#endif






int
set_initial_persisted_data (GLog * glog, FILE * fp, const char *fn) {
  size_t len;


  memset (glog->snippet, 0, sizeof (glog->snippet));
  glog->snippetlen = 0;

  if (glog->size == 0)
    return 1;

  len = MIN (glog->size, READ_BYTES);
  if ((fread (glog->snippet, len, 1, fp)) != 1 && ferror (fp))
    FATAL ("Unable to fread the specified log file '%s'", fn);
  glog->snippetlen = len;

  fseek (fp, 0, SEEK_SET);

  return 0;
}

static void
persist_last_parse (GLog * glog) {

  if (glog->inode && glog->size) {
    glog->lp.line = glog->read;
    glog->lp.snippetlen = glog->snippetlen;

    memcpy (glog->lp.snippet, glog->snippet, glog->snippetlen);

    ht_insert_last_parse (glog->inode, glog->lp);
  }

  else if (!glog->inode) {
    ht_insert_last_parse (0, glog->lp);
  }
}





static int
read_log (GLog * glog, int dry_run) {
  FILE *fp = NULL;
  int piping = 0;
  struct stat fdstat;




  if (glog->filename[0] == '-' && glog->filename[1] == '\0' && glog->pipe) {
    fp = glog->pipe;
    glog->piping = piping = 1;
  }


  if (!piping && (fp = fopen (glog->filename, "r")) == NULL)
    FATAL ("Unable to open the specified log file '%s'. %s", glog->filename, strerror (errno));


  if (!piping && stat (glog->filename, &fdstat) == 0) {
    glog->inode = fdstat.st_ino;
    glog->size = glog->lp.size = fdstat.st_size;
    set_initial_persisted_data (glog, fp, glog->filename);
  }


  if (read_lines (fp, glog, dry_run)) {
    if (!piping)
      fclose (fp);
    return 1;
  }

  persist_last_parse (glog);


  if (!piping)
    fclose (fp);

  return 0;
}

static void
set_log_processing (Logs * logs, GLog * glog) {
  lock_spinner ();
  logs->processed = &(glog->processed);
  logs->filename = glog->filename;
  unlock_spinner ();
}





int
parse_log (Logs * logs, int dry_run) {
  GLog *glog = NULL;
  const char *err_log = NULL;
  int idx;


  if ((err_log = verify_formats ()))
    FATAL ("%s", err_log);


  if (conf.restore && !logs->restored)
    logs->restored = rebuild_rawdata_cache ();


  if (conf.restore && !conf.filenames_idx && !conf.read_stdin) {
    logs->load_from_disk_only = 1;
    return 0;
  }

  for (idx = 0; idx < logs->size; ++idx) {
    glog = &logs->glog[idx];
    set_log_processing (logs, glog);

    if (read_log (glog, dry_run))
      return 1;

    glog->length = glog->bytes;
  }

  return 0;
}





char **
test_format (Logs * logs, int *len) {
  char **errors = NULL;
  GLog *glog = NULL;
  int i;

  if (parse_log (logs, 1) == 0)
    return NULL;

  for (i = 0; i < logs->size; ++i) {
    glog = &logs->glog[i];
    if (!glog->log_erridx)
      continue;
    break;
  }

  errors = xcalloc (glog->log_erridx, sizeof (char *));
  *len = glog->log_erridx;
  for (i = 0; i < glog->log_erridx; ++i)
    errors[i] = xstrdup (glog->errors[i]);
  free_logerrors (glog);

  return errors;
}
