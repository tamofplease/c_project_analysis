# 1 "project/goaccess/src/geoip1.h"
# 30 "project/goaccess/src/geoip1.h"
#if HAVE_CONFIG_H
#include <config.h>
#endif

#ifndef GEOIP_H_INCLUDED
#define GEOIP_H_INCLUDED 

#include "commons.h"

#define CITY_LEN 47 + 1
#define CONTINENT_LEN 47 + 1
#define COUNTRY_LEN 48 + 3

typedef struct GLocation_ {
  char city[CITY_LEN];
  char continent[CONTINENT_LEN];
  int hits;
} GLocation;

int is_geoip_resource (void);
int set_geolocation (char *host, char *continent, char *country, char *city);
void geoip_free (void);
void geoip_get_city (const char *ip, char *location, GTypeIP type_ip);
void geoip_get_continent (const char *ip, char *location, GTypeIP type_ip);
void geoip_get_country (const char *ip, char *location, GTypeIP type_ip);
void init_geoip (void);

#endif
