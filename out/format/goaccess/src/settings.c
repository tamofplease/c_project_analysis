# 1 "project/goaccess/src/settings.c"
# 31 "project/goaccess/src/settings.c"
#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#include "settings.h"

#include "error.h"
#include "gkhash.h"
#include "labels.h"
#include "pdjson.h"
#include "util.h"
#include "xmalloc.h"

static char **nargv;
static int nargc = 0;


static GEnum LOGTYPE[] = {
  {"COMBINED" , COMBINED} ,
  {"VCOMBINED" , VCOMBINED} ,
  {"COMMON" , COMMON} ,
  {"VCOMMON" , VCOMMON} ,
  {"W3C" , W3C} ,
  {"CLOUDFRONT" , CLOUDFRONT} ,
  {"CLOUDSTORAGE" , CLOUDSTORAGE} ,
  {"AWSELB" , AWSELB} ,
  {"SQUID" , SQUID} ,
  {"AWSS3" , AWSS3} ,
  {"CADDY" , CADDY} ,
  {"AWSALB" , AWSALB} ,
};

static const GPreConfLog logs = {
  "%h %^[%d:%t %^] \"%r\" %s %b \"%R\" \"%u\"",
  "%v:%^ %h %^[%d:%t %^] \"%r\" %s %b \"%R\" \"%u\"",
  "%h %^[%d:%t %^] \"%r\" %s %b",
  "%v:%^ %h %^[%d:%t %^] \"%r\" %s %b",
  "%d %t %^ %m %U %q %^ %^ %h %u %R %s %^ %^ %L",
  "%d\\t%t\\t%^\\t%b\\t%h\\t%m\\t%v\\t%U\\t%s\\t%R\\t%u\\t%q\\t%^\\t%C\\t%^\\t%^\\t%^\\t%^\\t%T\\t%^\\t%K\\t%k\\t%^\\t%H\\t%^",
  "\"%x\",\"%h\",%^,%^,\"%m\",\"%U\",\"%s\",%^,\"%b\",\"%D\",%^,\"%R\",\"%u\"",
  "%^ %dT%t.%^ %^ %h:%^ %^ %^ %T %^ %s %^ %^ %b \"%r\" \"%u\" %k %K %^ \"%^\" \"%v\"",
  "%^ %^ %^ %v %^: %x.%^ %~%L %h %^/%s %b %m %U",
  "%^ %v [%d:%t %^] %h %^\"%r\" %s %^ %b %^ %L %^ \"%R\" \"%u\"",


  "{ \"ts\": \"%x.%^\", \"request\": { \"remote_addr\": \"%h:%^\", \"proto\":"
  "\"%H\", \"method\": \"%m\", \"host\": \"%v\", \"uri\": \"%U\", \"headers\": {"
  "\"User-Agent\": [\"%u\"], \"Referer\": [\"%R\"] }, \"tls\": { \"cipher_suite\":"
  "\"%k\", \"proto\": \"%K\" } }, \"duration\": \"%T\", \"size\": \"%b\","
  "\"status\": \"%s\", \"resp_headers\": { \"Content-Type\": [\"%M\"] } }",

  "%^ %dT%t.%^ %v %h:%^ %^ %^ %T %^ %s %^ %^ %b \"%r\" \"%u\" %k %K %^"
};

static const GPreConfTime times = {
  "%H:%M:%S",
  "%f",
  "%s",
};

static const GPreConfDate dates = {
  "%d/%b/%Y",
  "%Y-%m-%d",
  "%f",
  "%s",
};



static const char *ignore_cmd_opts[] = {
  "help",
  "storage",
  "version",
};





static int
in_ignore_cmd_opts (const char *val) {
  size_t i;
  for (i = 0; i < ARRAY_SIZE (ignore_cmd_opts); i++) {
    if (strstr (val, ignore_cmd_opts[i]) != NULL)
      return 1;
  }
  return 0;
}
# 132 "project/goaccess/src/settings.c"
char *
get_config_file_path (void) {
  char *upath = NULL, *gpath = NULL, *rpath = NULL;


  if (conf.iconfigfile != NULL) {
    rpath = realpath (conf.iconfigfile, NULL);
    if (rpath == NULL)
      FATAL ("Unable to open the specified config file. %s", strerror (errno));
    return rpath;
  }


  upath = get_user_config ();

  if ((rpath = realpath (upath, NULL)) != NULL) {
    free (upath);
    return rpath;
  }
  LOG_DEBUG (("Unable to find user's config file %s %s", upath, strerror (errno)));
  free (upath);


  gpath = get_global_config ();
  if ((rpath = realpath (gpath, NULL)) != NULL && conf.load_global_config) {
    free (gpath);
    return rpath;
  }
  LOG_DEBUG (("Unable to find global config file %s %s", gpath, strerror (errno)));
  free (gpath);

  return NULL;
}




void
set_default_static_files (void) {
  size_t i;
  const char *exts[] = {
    ".css",
    ".js ",
    ".jpg",
    ".png",
    ".gif",
    ".ico",
    ".jpeg",
    ".pdf",
    ".txt",
    ".csv",
    ".mpeg",
    ".mpg",
    ".swf",
    ".woff",
    ".woff2",
    ".xls",
    ".xlsx",
    ".doc ",
    ".docx",
    ".ppt ",
    ".pptx",
    ".zip",
    ".mp3",
    ".mp4",
    ".exe",
    ".iso ",
    ".gz  ",
    ".rar ",
    ".svg ",
    ".bmp ",
    ".tar ",
    ".tgz ",
    ".tiff",
    ".tif ",
    ".ttf ",
    ".flv ",
    ".avi",
  };

  if (conf.static_file_idx > 0)
    return;

  for (i = 0; i < ARRAY_SIZE (exts); i++) {
    if (conf.static_file_max_len < strlen (exts[i]))
      conf.static_file_max_len = strlen (exts[i]);
    conf.static_files[conf.static_file_idx++] = exts[i];
  }
}


void
free_formats (void) {
  free (conf.log_format);
  free (conf.date_format);
  free (conf.date_num_format);
  free (conf.spec_date_time_format);
  free (conf.spec_date_time_num_format);
  free (conf.time_format);
}


void
free_cmd_args (void) {
  int i;
  if (nargc == 0)
    return;
  for (i = 0; i < nargc; i++)
    free (nargv[i]);
  free (nargv);
  free (conf.iconfigfile);
}


static void
append_to_argv (int *argc, char ***argv, char *val) {
  char **_argv = xrealloc (*argv, (*argc + 2) * sizeof (*_argv));
  _argv[*argc] = val;
  _argv[*argc + 1] = (char *) '\0';
  (*argc)++;
  *argv = _argv;
}






int
parse_conf_file (int *argc, char ***argv) {
  char line[MAX_LINE_CONF + 1];
  char *path = NULL, *val, *opt, *p;
  FILE *file;
  int i, n = 0;
  size_t idx;


  append_to_argv (&nargc, &nargv, xstrdup ((char *) *argv[0]));


  path = get_config_file_path ();
  if (path == NULL)
    return ENOENT;


  if ((file = fopen (path, "r")) == NULL) {
    free (path);
    return ENOENT;
  }

  while (fgets (line, sizeof line, file) != NULL) {
    while (line[0] == ' ' || line[0] == '\t')
      memmove (line, line + 1, strlen (line));
    n++;
    if (line[0] == '\n' || line[0] == '\r' || line[0] == '#')
      continue;


    idx = strcspn (line, " \t");
    if (strlen (line) == idx)
      FATAL ("Malformed config key at line: %d", n);

    line[idx] = '\0';



    while ((p = strpbrk (line, "_")) != NULL)
      *p = '-';


    if (in_ignore_cmd_opts (line))
      continue;


    val = line + (idx + 1);
    idx = strspn (val, " \t");
    if (strlen (line) == idx)
      FATAL ("Malformed config value at line: %d", n);
    val = val + idx;
    val = trim_str (val);

    if (strcmp ("false", val) == 0)
      continue;


    opt = xmalloc (snprintf (NULL, 0, "--%s", line) + 1);
    sprintf (opt, "--%s", line);

    append_to_argv (&nargc, &nargv, opt);
    if (strcmp ("true", val) != 0)
      append_to_argv (&nargc, &nargv, xstrdup (val));
  }


  for (i = 1; i < *argc; i++)
    append_to_argv (&nargc, &nargv, xstrdup ((char *) (*argv)[i]));

  *argc = nargc;
  *argv = (char **) nargv;

  fclose (file);

  if (conf.iconfigfile == NULL)
    conf.iconfigfile = xstrdup (path);

  free (path);
  return 0;
}






static int
get_log_format_item_enum (const char *str) {
  int ret;
  char *upstr;

  ret = str2enum (LOGTYPE, ARRAY_SIZE (LOGTYPE), str);
  if (ret >= 0)
    return ret;


  upstr = strtoupper (xstrdup (str));
  ret = str2enum (LOGTYPE, ARRAY_SIZE (LOGTYPE), upstr);
  free (upstr);

  return ret;
}






size_t
get_selected_format_idx (void) {
  if (conf.log_format == NULL)
    return (size_t) -1;
  if (strcmp (conf.log_format, logs.common) == 0)
    return COMMON;
  else if (strcmp (conf.log_format, logs.vcommon) == 0)
    return VCOMMON;
  else if (strcmp (conf.log_format, logs.combined) == 0)
    return COMBINED;
  else if (strcmp (conf.log_format, logs.vcombined) == 0)
    return VCOMBINED;
  else if (strcmp (conf.log_format, logs.w3c) == 0)
    return W3C;
  else if (strcmp (conf.log_format, logs.cloudfront) == 0)
    return CLOUDFRONT;
  else if (strcmp (conf.log_format, logs.cloudstorage) == 0)
    return CLOUDSTORAGE;
  else if (strcmp (conf.log_format, logs.awselb) == 0)
    return AWSELB;
  else if (strcmp (conf.log_format, logs.squid) == 0)
    return SQUID;
  else if (strcmp (conf.log_format, logs.awss3) == 0)
    return AWSS3;
  else if (strcmp (conf.log_format, logs.caddy) == 0)
    return CADDY;
  else if (strcmp (conf.log_format, logs.awsalb) == 0)
    return AWSALB;
  else
    return (size_t) -1;
}






char *
get_selected_format_str (size_t idx) {
  char *fmt = NULL;
  switch (idx) {
  case COMBINED:
    fmt = alloc_string (logs.combined);
    break;
  case VCOMBINED:
    fmt = alloc_string (logs.vcombined);
    break;
  case COMMON:
    fmt = alloc_string (logs.common);
    break;
  case VCOMMON:
    fmt = alloc_string (logs.vcommon);
    break;
  case W3C:
    fmt = alloc_string (logs.w3c);
    break;
  case CLOUDFRONT:
    fmt = alloc_string (logs.cloudfront);
    break;
  case CLOUDSTORAGE:
    fmt = alloc_string (logs.cloudstorage);
    break;
  case AWSELB:
    fmt = alloc_string (logs.awselb);
    break;
  case SQUID:
    fmt = alloc_string (logs.squid);
    break;
  case AWSS3:
    fmt = alloc_string (logs.awss3);
    break;
  case CADDY:
    fmt = alloc_string (logs.caddy);
    break;
  case AWSALB:
    fmt = alloc_string (logs.awsalb);
    break;
  }

  return fmt;
}






char *
get_selected_date_str (size_t idx) {
  char *fmt = NULL;
  switch (idx) {
  case COMMON:
  case VCOMMON:
  case COMBINED:
  case VCOMBINED:
  case AWSS3:
    fmt = alloc_string (dates.apache);
    break;
  case AWSELB:
  case AWSALB:
  case CLOUDFRONT:
  case W3C:
    fmt = alloc_string (dates.w3c);
    break;
  case CLOUDSTORAGE:
    fmt = alloc_string (dates.usec);
    break;
  case SQUID:
  case CADDY:
    fmt = alloc_string (dates.sec);
    break;
  }

  return fmt;
}






char *
get_selected_time_str (size_t idx) {
  char *fmt = NULL;
  switch (idx) {
  case AWSELB:
  case AWSALB:
  case CLOUDFRONT:
  case COMBINED:
  case COMMON:
  case VCOMBINED:
  case VCOMMON:
  case W3C:
  case AWSS3:
    fmt = alloc_string (times.fmt24);
    break;
  case CLOUDSTORAGE:
    fmt = alloc_string (times.usec);
    break;
  case SQUID:
  case CADDY:
    fmt = alloc_string (times.sec);
    break;
  }

  return fmt;
}



const char *
verify_formats (void) {
  if (conf.time_format == NULL || *conf.time_format == '\0')
    return ERR_FORMAT_NO_TIME_FMT;

  if (conf.date_format == NULL || *conf.date_format == '\0')
    return ERR_FORMAT_NO_DATE_FMT;

  if (conf.log_format == NULL || *conf.log_format == '\0')
    return ERR_FORMAT_NO_LOG_FMT;

  return NULL;
}



static char *
append_spec_date_format (const char *date_format, const char *spec_format) {
  char *s = xmalloc (snprintf (NULL, 0, "%s%s", date_format, spec_format) + 1);
  sprintf (s, "%s%s", date_format, spec_format);

  return s;
}







static char *
clean_date_time_format (const char *format) {
  char *fmt = NULL, *pr = NULL, *pw = NULL;
  int special = 0;

  if (format == NULL || *format == '\0')
    return NULL;

  fmt = xstrdup (format);
  pr = fmt;
  pw = fmt;
  while (*pr) {
    *pw = *pr++;
    if (*pw == '%' || special) {
      special = !special;
      pw++;
    }
  }
  *pw = '\0';

  return fmt;
}





static int
is_date_abbreviated (const char *fdate) {
  if (strpbrk (fdate, "cDF"))
    return 1;

  return 0;
}






static char *
set_format_time (void) {
  char *ftime = NULL;

  if (has_timestamp (conf.date_format) || !strcmp ("%T", conf.time_format))
    ftime = xstrdup ("%H%M%S");
  else
    ftime = clean_date_time_format (conf.time_format);

  return ftime;
}






static char *
set_format_date (void) {
  char *fdate = NULL;

  if (has_timestamp (conf.date_format))
    fdate = xstrdup ("%Y%m%d");
  else
    fdate = clean_date_time_format (conf.date_format);

  return fdate;
}






static void
set_spec_date_time_num_format (void) {
  char *buf = NULL, *tf = set_format_time ();
  const char *df = conf.date_num_format;

  if (!df || !tf) {
    free (tf);
    return;
  }

  if (conf.date_spec_hr && strchr (tf, 'H'))
    buf = append_spec_date_format (df, "%H");
  else
    buf = xstrdup (df);

  conf.spec_date_time_num_format = buf;
  free (tf);
}




static void
set_spec_date_time_format (void) {
  char *buf = NULL;
  const char *fmt = conf.spec_date_time_num_format;
  int buflen = 0, flen = 0;

  if (!fmt)
    return;

  flen = (strlen (fmt) * 2) + 1;
  buf = xcalloc (flen, sizeof (char));

  if (strchr (fmt, 'd'))
    buflen += snprintf (buf + buflen, flen - buflen, "%%d/");
  if (strchr (fmt, 'm'))
    buflen += snprintf (buf + buflen, flen - buflen, "%%b/");
  if (strchr (fmt, 'Y'))
    buflen += snprintf (buf + buflen, flen - buflen, "%%Y");
  if (strchr (fmt, 'H'))
    buflen += snprintf (buf + buflen, flen - buflen, ":%%H");

  conf.spec_date_time_format = buf;
}







static int
set_date_num_format (void) {
  char *fdate = NULL, *buf = NULL;
  int buflen = 0, flen = 0;

  fdate = set_format_date ();
  if (!fdate)
    return 1;

  if (is_date_abbreviated (fdate)) {
    free (fdate);
    conf.date_num_format = xstrdup ("%Y%m%d");
    return 0;
  }

  flen = strlen (fdate) + 1;
  flen = MAX (MIN_DATENUM_FMT_LEN, flen);
  buf = xcalloc (flen, sizeof (char));


  buflen += snprintf (buf + buflen, flen - buflen, "%%Y");
  if (strpbrk (fdate, "hbmBf*"))
    buflen += snprintf (buf + buflen, flen - buflen, "%%m");
  if (strpbrk (fdate, "def*"))
    buflen += snprintf (buf + buflen, flen - buflen, "%%d");

  conf.date_num_format = buf;
  free (fdate);

  return buflen == 0 ? 1 : 0;
}


int
is_json_log_format (const char *fmt) {
  enum json_type t = JSON_ERROR;
  json_stream json;

  json_open_string (&json, fmt);

  json_set_streaming (&json, false);
  do {
    t = json_next (&json);
    switch (t) {
    case JSON_ERROR:
      json_close (&json);
      return 0;
    default:
      break;
    }
  } while (t != JSON_DONE && t != JSON_ERROR);
  json_close (&json);

  return 1;
}


static void
dec_json_key (char *key) {
  char *ptr = NULL;
  if (key && (ptr = strrchr (key, '.')))
    *ptr = '\0';
  else if (key && !(ptr = strrchr (key, '.')))
    key[0] = '\0';
}






int
parse_json_string (void *ptr_data, const char *str, int (*cb) (void *, char *, char *)) {
  char *key = NULL, *val = NULL;
  enum json_type ctx = JSON_ERROR, t = JSON_ERROR;
  int ret = 0;
  size_t len = 0, level = 0;
  json_stream json;

  json_open_string (&json, str);
  do {
    t = json_next (&json);

    switch (t) {
    case JSON_OBJECT:
      if (key == NULL)
        key = xstrdup ("");
      break;
    case JSON_ARRAY_END:
    case JSON_OBJECT_END:
      dec_json_key (key);
      break;
    case JSON_TRUE:
      val = xstrdup ("true");
      if (!key || (ret = (*cb) (ptr_data, key, val)))
        goto clean;
      ctx = json_get_context (&json, &level);
      if (ctx != JSON_ARRAY)
        dec_json_key (key);
      free (val);
      val = NULL;
      break;
    case JSON_FALSE:
      val = xstrdup ("false");
      if (!key || (ret = (*cb) (ptr_data, key, val)))
        goto clean;
      ctx = json_get_context (&json, &level);
      if (ctx != JSON_ARRAY)
        dec_json_key (key);
      free (val);
      val = NULL;
      break;
    case JSON_NULL:
      val = xstrdup ("-");
      if (!key || (ret = (*cb) (ptr_data, key, val)))
        goto clean;
      ctx = json_get_context (&json, &level);
      if (ctx != JSON_ARRAY)
        dec_json_key (key);
      free (val);
      val = NULL;
      break;
    case JSON_STRING:
    case JSON_NUMBER:
      ctx = json_get_context (&json, &level);

      if ((level % 2) != 0 && ctx != JSON_ARRAY) {
        if (strlen (key) != 0)
          append_str (&key, ".");
        append_str (&key, json_get_string (&json, &len));
      }

      else if (key && (ctx == JSON_ARRAY || ((level % 2) == 0 && ctx != JSON_ARRAY))) {
        val = xstrdup (json_get_string (&json, &len));
        if (!key || (ret = (*cb) (ptr_data, key, val)))
          goto clean;
        if (ctx != JSON_ARRAY)
          dec_json_key (key);

        free (val);
        val = NULL;
      }
      break;
    case JSON_ERROR:
      ret = -1;
      goto clean;
      break;
    default:
      break;
    }
  } while (t != JSON_DONE && t != JSON_ERROR);

clean:
  free (val);
  free (key);
  json_close (&json);

  return ret;
}



void
set_spec_date_format (void) {
  if (verify_formats ())
    return;

  if (conf.is_json_log_format) {
    if (parse_json_string (NULL, conf.log_format, ht_insert_json_logfmt) == -1)
      FATAL ("Invalid JSON log format. Verify the syntax.");
  }

  if (conf.date_num_format)
    free (conf.date_num_format);
  if (conf.spec_date_time_format)
    free (conf.spec_date_time_format);
  if (conf.spec_date_time_num_format)
    free (conf.spec_date_time_num_format);

  if (set_date_num_format () == 0) {
    set_spec_date_time_num_format ();
    set_spec_date_time_format ();
  }
}




void
set_date_format_str (const char *oarg) {
  char *fmt = NULL;
  int type = get_log_format_item_enum (oarg);


  if (conf.date_format)
    free (conf.date_format);


  if (type == -1) {
    conf.date_format = unescape_str (oarg);
    return;
  }


  if ((fmt = get_selected_date_str (type)) == NULL) {
    LOG_DEBUG (("Unable to set date format from enum: %s\n", oarg));
    return;
  }

  conf.date_format = fmt;
}




void
set_time_format_str (const char *oarg) {
  char *fmt = NULL;
  int type = get_log_format_item_enum (oarg);


  if (conf.time_format)
    free (conf.time_format);


  if (type == -1) {
    conf.time_format = unescape_str (oarg);
    return;
  }


  if ((fmt = get_selected_time_str (type)) == NULL) {
    LOG_DEBUG (("Unable to set time format from enum: %s\n", oarg));
    return;
  }

  conf.time_format = fmt;
}


static void
contains_specifier (void) {
  conf.serve_usecs = conf.bandwidth = 0;
  if (!conf.log_format)
    return;

  if (strstr (conf.log_format, "%b"))
    conf.bandwidth = 1;
  if (strstr (conf.log_format, "%D"))
    conf.serve_usecs = 1;
  if (strstr (conf.log_format, "%T"))
    conf.serve_usecs = 1;
  if (strstr (conf.log_format, "%L"))
    conf.serve_usecs = 1;
}




void
set_log_format_str (const char *oarg) {
  char *fmt = NULL;
  int type = get_log_format_item_enum (oarg);


  if (conf.log_format)
    free (conf.log_format);

  if (type == -1 && is_json_log_format (oarg)) {
    conf.is_json_log_format = 1;
    conf.log_format = unescape_str (oarg);
    contains_specifier ();
    return;
  }


  if (type == -1) {
    conf.log_format = unescape_str (oarg);
    contains_specifier ();
    return;
  }


  if ((fmt = get_selected_format_str (type)) == NULL) {
    LOG_DEBUG (("Unable to set log format from enum: %s\n", oarg));
    return;
  }

  if (is_json_log_format (fmt))
    conf.is_json_log_format = 1;

  conf.log_format = unescape_str (fmt);
  contains_specifier ();


  set_time_format_str (oarg);
  set_date_format_str (oarg);
  free (fmt);
}
