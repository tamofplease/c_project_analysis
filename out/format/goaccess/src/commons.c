# 1 "project/goaccess/src/commons.c"
# 31 "project/goaccess/src/commons.c"
#if HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#include "commons.h"

#include "error.h"
#include "labels.h"
#include "settings.h"
#include "util.h"
#include "xmalloc.h"


time_t end_proc;
time_t timestamp;
time_t start_proc;


int module_list[TOTAL_MODULES] = {[0 ... TOTAL_MODULES - 1] = -1 };



static GEnum enum_modules[] = {
  {"VISITORS" , VISITORS} ,
  {"REQUESTS" , REQUESTS} ,
  {"REQUESTS_STATIC" , REQUESTS_STATIC} ,
  {"NOT_FOUND" , NOT_FOUND} ,
  {"HOSTS" , HOSTS} ,
  {"OS" , OS} ,
  {"BROWSERS" , BROWSERS} ,
  {"VISIT_TIMES" , VISIT_TIMES} ,
  {"VIRTUAL_HOSTS" , VIRTUAL_HOSTS} ,
  {"REFERRERS" , REFERRERS} ,
  {"REFERRING_SITES" , REFERRING_SITES} ,
  {"KEYPHRASES" , KEYPHRASES} ,
  {"STATUS_CODES" , STATUS_CODES} ,
  {"REMOTE_USER" , REMOTE_USER} ,
  {"CACHE_STATUS" , CACHE_STATUS} ,
#ifdef HAVE_GEOLOCATION
  {"GEO_LOCATION" , GEO_LOCATION} ,
#endif
  {"MIME_TYPE" , MIME_TYPE} ,
  {"TLS_TYPE" , TLS_TYPE} ,
};





int
get_max_choices (void) {
  char *csv = NULL, *json = NULL, *html = NULL;
  int max = MAX_CHOICES;


  if (conf.max_items <= 0)
    return conf.real_time_html ? MAX_CHOICES_RT : MAX_CHOICES;


  if (!conf.output_stdout)
    return conf.max_items > MAX_CHOICES ? MAX_CHOICES : conf.max_items;



  if (conf.real_time_html)
    return conf.max_items > MAX_CHOICES_RT ? MAX_CHOICES_RT : conf.max_items;



  if (find_output_type (&csv, "csv", 1) == 0)
    max = conf.max_items;

  if (find_output_type (&json, "json", 1) == 0 && conf.max_items > 0)
    max = conf.max_items;



  if (find_output_type (&html, "html", 1) == 0 || conf.output_format_idx == 0)
    max = conf.max_items;

  free (csv);
  free (html);
  free (json);

  return max;
}




float
get_percentage (unsigned long long total, unsigned long long hit) {
  return (total == 0 ? 0 : (((float) hit) / total) * 100);
}


void
display_storage (void) {
  fprintf (stdout, "%s\n", BUILT_WITH_DEFHASH);
}


void
display_default_config_file (void) {
  char *path = get_config_file_path ();

  if (!path) {
    fprintf (stdout, "%s\n", ERR_NODEF_CONF_FILE);
    fprintf (stdout, "%s `-p /path/goaccess.conf`\n", ERR_NODEF_CONF_FILE_DESC);
  } else {
    fprintf (stdout, "%s\n", path);
    free (path);
  }
}


void
display_version (void) {
  fprintf (stdout, "GoAccess - %s.\n", GO_VERSION);
  fprintf (stdout, "%s: %s\n", INFO_MORE_INFO, GO_WEBSITE);
  fprintf (stdout, "Copyright (C) 2009-2020 by Gerardo Orellana\n");
  fprintf (stdout, "\nBuild configure arguments:\n");
#ifdef DEBUG
  fprintf (stdout, "  --enable-debug\n");
#endif
#ifdef HAVE_NCURSESW_NCURSES_H
  fprintf (stdout, "  --enable-utf8\n");
#endif
#ifdef HAVE_LIBGEOIP
  fprintf (stdout, "  --enable-geoip=legacy\n");
#endif
#ifdef HAVE_LIBMAXMINDDB
  fprintf (stdout, "  --enable-geoip=mmdb\n");
#endif
#ifdef WITH_GETLINE
  fprintf (stdout, "  --with-getline\n");
#endif
#ifdef HAVE_LIBSSL
  fprintf (stdout, "  --with-openssl\n");
#endif
}





int
str2enum (const GEnum map[], int len, const char *str) {
  int i;

  for (i = 0; i < len; ++i) {
    if (!strcmp (str, map[i].str))
      return map[i].idx;
  }

  return -1;
}





char *
enum2str (const GEnum map[], int len, int idx) {
  int i;

  for (i = 0; i < len; ++i) {
    if (idx == map[i].idx)
      return xstrdup (map[i].str);
  }

  return NULL;
}





int
get_module_enum (const char *str) {
  return str2enum (enum_modules, ARRAY_SIZE (enum_modules), str);
}





char *
get_module_str (GModule module) {
  return enum2str (enum_modules, ARRAY_SIZE (enum_modules), module);
}




GAgents *
new_gagents (uint32_t size) {
  GAgents *agents = xmalloc (sizeof (GAgents));
  memset (agents, 0, sizeof *agents);

  agents->items = xcalloc (size, sizeof (GAgentItem));
  agents->size = size;
  agents->idx = 0;

  return agents;
}


void
free_agents_array (GAgents * agents) {
  int i;

  if (agents == NULL)
    return;


  for (i = 0; i < agents->idx; ++i)
    free (agents->items[i].agent);
  if (agents->items)
    free (agents->items);
  free (agents);
}





int
has_timestamp (const char *fmt) {
  if (strcmp ("%s", fmt) == 0 || strcmp ("%f", fmt) == 0)
    return 1;
  return 0;
}




int
enable_panel (GModule mod) {
  int i, module;

  for (i = 0; i < conf.enable_panel_idx; ++i) {
    if ((module = get_module_enum (conf.enable_panels[i])) == -1)
      continue;
    if (mod == (unsigned int) module) {
      return 1;
    }
  }

  return 0;
}




int
ignore_panel (GModule mod) {
  int i, module;

  for (i = 0; i < conf.ignore_panel_idx; ++i) {
    if ((module = get_module_enum (conf.ignore_panels[i])) == -1)
      continue;
    if (mod == (unsigned int) module) {
      return 1;
    }
  }

  return 0;
}




uint32_t
get_num_modules (void) {
  size_t idx = 0;
  uint32_t num = 0;

  FOREACH_MODULE (idx, module_list) {
    num++;
  }

  return num;
}





int
get_module_index (int module) {
  size_t idx = 0;

  FOREACH_MODULE (idx, module_list) {
    if (module_list[idx] == module)
      return idx;
  }

  return -1;
}






int
remove_module (GModule module) {
  int idx = get_module_index (module);
  if (idx == -1)
    return 1;

  if (idx < TOTAL_MODULES - 1)
    memmove (&module_list[idx], &module_list[idx + 1],
             ((TOTAL_MODULES - 1) - idx) * sizeof (module_list[0]));
  module_list[TOTAL_MODULES - 1] = -1;

  return 0;
}




int
get_next_module (GModule module) {
  int next = get_module_index (module) + 1;

  if (next == TOTAL_MODULES || module_list[next] == -1)
    return module_list[0];

  return module_list[next];
}




int
get_prev_module (GModule module) {
  int i;
  int next = get_module_index (module) - 1;

  if (next >= 0 && module_list[next] != -1)
    return module_list[next];

  for (i = TOTAL_MODULES - 1; i >= 0; i--) {
    if (module_list[i] != -1) {
      return module_list[i];
    }
  }

  return 0;
}






void
verify_panels (void) {
  int ignore_panel_idx = conf.ignore_panel_idx;


  if (!conf.log_format)
    return;

  if (!strstr (conf.log_format, "%v") && ignore_panel_idx < TOTAL_MODULES) {
    if (str_inarray ("VIRTUAL_HOSTS", conf.ignore_panels, ignore_panel_idx) < 0)
      remove_module (VIRTUAL_HOSTS);
  }
  if (!strstr (conf.log_format, "%e") && ignore_panel_idx < TOTAL_MODULES) {
    if (str_inarray ("REMOTE_USER", conf.ignore_panels, ignore_panel_idx) < 0)
      remove_module (REMOTE_USER);
  }
  if (!strstr (conf.log_format, "%C") && ignore_panel_idx < TOTAL_MODULES) {
    if (str_inarray ("CACHE_STATUS", conf.ignore_panels, ignore_panel_idx) < 0)
      remove_module (CACHE_STATUS);
  }
  if (!strstr (conf.log_format, "%M") && ignore_panel_idx < TOTAL_MODULES) {
    if (str_inarray ("MIME_TYPE", conf.ignore_panels, ignore_panel_idx) < 0)
      remove_module (MIME_TYPE);
  }
  if (!strstr (conf.log_format, "%K") && ignore_panel_idx < TOTAL_MODULES) {
    if (str_inarray ("TLS_TYPE", conf.ignore_panels, ignore_panel_idx) < 0)
      remove_module (TLS_TYPE);
  }
#ifdef HAVE_GEOLOCATION
#ifdef HAVE_LIBMAXMINDDB
  if (!conf.geoip_database && ignore_panel_idx < TOTAL_MODULES) {
    if (str_inarray ("GEO_LOCATION", conf.ignore_panels, ignore_panel_idx) < 0)
      remove_module (GEO_LOCATION);
  }
#endif
#endif
}





int
init_modules (void) {
  GModule module;
  int i;


  for (module = 0; module < TOTAL_MODULES; ++module)
    module_list[module] = -1;

  for (i = 0, module = 0; module < TOTAL_MODULES; ++module) {
    if (!ignore_panel (module) || enable_panel (module)) {
      module_list[i++] = module;
    }
  }

  return module_list[0] > -1 ? module_list[0] : 0;
}






intmax_t
get_log_sizes (void) {
  int i;
  off_t size = 0;


  if (conf.log_size > 0)
    return (intmax_t) conf.log_size;

  for (i = 0; i < conf.filenames_idx; ++i) {
    if (conf.filenames[i][0] == '-' && conf.filenames[i][1] == '\0')
      size += 0;
    else
      size += file_size (conf.filenames[i]);
  }

  return (intmax_t) size;
}





char *
get_log_source_str (int max_len) {
  char *str = xstrdup ("");
  int i, len = 0;

  for (i = 0; i < conf.filenames_idx; ++i) {
    if (conf.filenames[i][0] == '-' && conf.filenames[i][1] == '\0')
      append_str (&str, "STDIN");
    else
      append_str (&str, conf.filenames[i]);
    if (i != conf.filenames_idx - 1)
      append_str (&str, "; ");
  }

  len = strlen (str);
  if (max_len > 0 && len > 0 && len > max_len) {
    str[max_len - 3] = 0;
    append_str (&str, "...");
  }

  return str;
}
