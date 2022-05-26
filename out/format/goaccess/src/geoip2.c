# 1 "project/goaccess/src/geoip2.c"
# 31 "project/goaccess/src/geoip2.c"
#if HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdlib.h>
#include <string.h>
#include <errno.h>

#ifdef HAVE_LIBMAXMINDDB
#include <maxminddb.h>
#endif

#include "geoip1.h"

#include "error.h"
#include "util.h"
#include "xmalloc.h"


int geoip_city_type = 0;
static MMDB_s *mmdb = NULL;





int
is_geoip_resource (void) {
  return mmdb != NULL ? 1 : 0;
}


void
geoip_free (void) {
  if (!is_geoip_resource ())
    return;

  MMDB_close (mmdb);
  free (mmdb);
  mmdb = NULL;
}





void
init_geoip (void) {
  const char *fn = conf.geoip_database;
  int status = 0;

  if (fn == NULL)
    return;


  mmdb = xcalloc (1, sizeof (MMDB_s));
  if ((status = MMDB_open (fn, MMDB_MODE_MMAP, mmdb)) != MMDB_SUCCESS) {
    free (mmdb);
    FATAL ("Unable to open GeoIP2 database %s: %s\n", fn, MMDB_strerror (status));
  }

  if (strcmp (mmdb->metadata.database_type, "GeoLite2-City") == 0)
    geoip_city_type = 1;
}






static int
geoip_lookup (MMDB_lookup_result_s * res, const char *ip) {
  int gai_err, mmdb_err;

  *res = MMDB_lookup_string (mmdb, ip, &gai_err, &mmdb_err);
  if (0 != gai_err)
    return 1;

  if (MMDB_SUCCESS != mmdb_err)
    FATAL ("Error from libmaxminddb: %s\n", MMDB_strerror (mmdb_err));

  if (!(*res).found_entry)
    return 1;

  return 0;
}





static const char *
get_continent_name_and_code (const char *continentid) {
  if (memcmp (continentid, "NA", 2) == 0)
    return "NA North America";
  else if (memcmp (continentid, "OC", 2) == 0)
    return "OC Oceania";
  else if (memcmp (continentid, "EU", 2) == 0)
    return "EU Europe";
  else if (memcmp (continentid, "SA", 2) == 0)
    return "SA South America";
  else if (memcmp (continentid, "AF", 2) == 0)
    return "AF Africa";
  else if (memcmp (continentid, "AN", 2) == 0)
    return "AN Antarctica";
  else if (memcmp (continentid, "AS", 2) == 0)
    return "AS Asia";
  else
    return "-- Unknown";
}



static void
geoip_set_country (const char *country, const char *code, char *loc) {
  if (country && code)
    snprintf (loc, COUNTRY_LEN, "%s %s", code, country);
  else
    snprintf (loc, COUNTRY_LEN, "%s", "Unknown");
}



static void
geoip_set_city (const char *city, const char *region, char *loc) {
  snprintf (loc, CITY_LEN, "%s, %s", city ? city : "N/A City", region ? region : "N/A Region");
}



static void
geoip_set_continent (const char *continent, char *loc) {
  if (continent)
    snprintf (loc, CONTINENT_LEN, "%s", get_continent_name_and_code (continent));
  else
    snprintf (loc, CONTINENT_LEN, "%s", "Unknown");
}






static char *
get_value (MMDB_lookup_result_s res, ...) {
  MMDB_entry_data_s entry_data;
  char *value = NULL;
  int status = 0;
  va_list keys;
  va_start (keys, res);

  status = MMDB_vget_value (&res.entry, &entry_data, keys);
  va_end (keys);

  if (status != MMDB_SUCCESS)
    return NULL;

  if (!entry_data.has_data)
    return NULL;

  if (entry_data.type != MMDB_DATA_TYPE_UTF8_STRING)
    FATAL ("Invalid data UTF8 GeoIP2 data %d:\n", entry_data.type);

  if ((value = strndup (entry_data.utf8_string, entry_data.data_size)) == NULL)
    FATAL ("Unable to allocate buffer %s: ", strerror (errno));

  return value;
}





static void
geoip_query_city (MMDB_lookup_result_s res, char *location) {
  char *city = NULL, *region = NULL;

  if (res.found_entry) {
    city = get_value (res, "city", "names", "en", NULL);
    region = get_value (res, "subdivisions", "0", "names", "en", NULL);
  }
  geoip_set_city (city, region, location);
  free (city);
  free (region);
}





static void
geoip_query_country (MMDB_lookup_result_s res, char *location) {
  char *country = NULL, *code = NULL;

  if (res.found_entry) {
    country = get_value (res, "country", "names", "en", NULL);
    code = get_value (res, "country", "iso_code", NULL);
  }
  geoip_set_country (country, code, location);
  free (code);
  free (country);
}





static void
geoip_query_continent (MMDB_lookup_result_s res, char *location) {
  char *code = NULL;

  if (res.found_entry)
    code = get_value (res, "continent", "code", NULL);
  geoip_set_continent (code, location);
  free (code);
}


void
geoip_get_country (const char *ip, char *location, GO_UNUSED GTypeIP type_ip) {
  MMDB_lookup_result_s res;

  geoip_lookup (&res, ip);
  geoip_query_country (res, location);
}


void
geoip_get_continent (const char *ip, char *location, GO_UNUSED GTypeIP type_ip) {
  MMDB_lookup_result_s res;

  geoip_lookup (&res, ip);
  geoip_query_continent (res, location);
}






int
set_geolocation (char *host, char *continent, char *country, char *city) {
  MMDB_lookup_result_s res;

  if (!is_geoip_resource ())
    return 1;

  geoip_lookup (&res, host);
  geoip_query_country (res, country);
  geoip_query_continent (res, continent);
  if (geoip_city_type)
    geoip_query_city (res, city);

  return 0;
}
