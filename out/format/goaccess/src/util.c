# 1 "project/goaccess/src/util.c"
# 31 "project/goaccess/src/util.c"
#define _LARGEFILE_SOURCE 
#define _LARGEFILE64_SOURCE 
#define _FILE_OFFSET_BITS 64

#define _XOPEN_SOURCE 700

#include <arpa/inet.h>
#include <ctype.h>
#include <errno.h>
#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>
#include <inttypes.h>

#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <netdb.h>
#include <unistd.h>

#include "util.h"

#include "error.h"
#include "labels.h"
#include "xmalloc.h"


static const char *code_type[][2] = {
  {"1", STATUS_CODE_1XX},
  {"2", STATUS_CODE_2XX},
  {"3", STATUS_CODE_3XX},
  {"4", STATUS_CODE_4XX},
  {"5", STATUS_CODE_5XX},
};


static const char *codes[][2] = {
  {"100", STATUS_CODE_100},
  {"101", STATUS_CODE_101},
  {"200", STATUS_CODE_200},
  {"201", STATUS_CODE_201},
  {"202", STATUS_CODE_202},
  {"203", STATUS_CODE_203},
  {"204", STATUS_CODE_204},
  {"205", STATUS_CODE_205},
  {"206", STATUS_CODE_206},
  {"207", STATUS_CODE_207},
  {"208", STATUS_CODE_208},
  {"300", STATUS_CODE_300},
  {"301", STATUS_CODE_301},
  {"302", STATUS_CODE_302},
  {"303", STATUS_CODE_303},
  {"304", STATUS_CODE_304},
  {"305", STATUS_CODE_305},
  {"307", STATUS_CODE_307},
  {"308", STATUS_CODE_308},
  {"400", STATUS_CODE_400},
  {"401", STATUS_CODE_401},
  {"402", STATUS_CODE_402},
  {"403", STATUS_CODE_403},
  {"404", STATUS_CODE_404},
  {"405", STATUS_CODE_405},
  {"406", STATUS_CODE_406},
  {"407", STATUS_CODE_407},
  {"408", STATUS_CODE_408},
  {"409", STATUS_CODE_409},
  {"410", STATUS_CODE_410},
  {"411", STATUS_CODE_411},
  {"412", STATUS_CODE_412},
  {"413", STATUS_CODE_413},
  {"414", STATUS_CODE_414},
  {"415", STATUS_CODE_415},
  {"416", STATUS_CODE_416},
  {"417", STATUS_CODE_417},
  {"418", STATUS_CODE_418},
  {"421", STATUS_CODE_421},
  {"422", STATUS_CODE_422},
  {"423", STATUS_CODE_423},
  {"424", STATUS_CODE_424},
  {"426", STATUS_CODE_426},
  {"428", STATUS_CODE_428},
  {"429", STATUS_CODE_429},
  {"431", STATUS_CODE_431},
  {"444", STATUS_CODE_444},
  {"451", STATUS_CODE_451},
  {"494", STATUS_CODE_494},
  {"495", STATUS_CODE_495},
  {"496", STATUS_CODE_496},
  {"497", STATUS_CODE_497},
  {"499", STATUS_CODE_499},
  {"500", STATUS_CODE_500},
  {"501", STATUS_CODE_501},
  {"502", STATUS_CODE_502},
  {"503", STATUS_CODE_503},
  {"504", STATUS_CODE_504},
  {"505", STATUS_CODE_505},
  {"520", STATUS_CODE_520},
  {"521", STATUS_CODE_521},
  {"522", STATUS_CODE_522},
  {"523", STATUS_CODE_523},
  {"524", STATUS_CODE_524}
};





char *
substring (const char *str, int begin, int len) {
  char *buffer;
  if (str == NULL)
    return NULL;
  if (begin < 0)
    begin = strlen (str) + begin;
  if (begin < 0)
    begin = 0;
  if (len < 0)
    len = 0;
  if (((size_t) begin) > strlen (str))
    begin = strlen (str);
  if (((size_t) len) > strlen (&str[begin]))
    len = strlen (&str[begin]);
  if ((buffer = xmalloc (len + 1)) == NULL)
    return NULL;
  memcpy (buffer, &(str[begin]), len);
  buffer[len] = '\0';

  return buffer;
}




char *
alloc_string (const char *str) {
  char *new = xmalloc (strlen (str) + 1);
  strcpy (new, str);
  return new;
}



void
xstrncpy (char *dest, const char *source, const size_t dest_size) {
  strncpy (dest, source, dest_size);
  if (dest_size > 0) {
    dest[dest_size - 1] = '\0';
  } else {
    dest[0] = '\0';
  }
}


void
genstr (char *dest, size_t len) {
  char set[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

  for (; len > 0; --len)
    *dest++ = set[rand () % (sizeof (set) - 1)];
  *dest = '\0';
}





int
count_matches (const char *s1, char c) {
  const char *ptr = s1;
  int n = 0;
  do {
    if (*ptr == c)
      n++;
  } while (*(ptr++));
  return n;
}


#if defined(__clang__) && defined(__clang_major__) && (__clang_major__ >= 4)
__attribute__((no_sanitize ("unsigned-integer-overflow")))
#if (__clang_major__ >= 12)
  __attribute__((no_sanitize ("unsigned-shift-base")))
#endif
#endif
  uint32_t
djb2 (const unsigned char *str) {
  uint32_t hash = 5381;
  int c;

  while ((c = *str++))
    hash = ((hash << 5) + hash) + c;

  return hash;
}





static int
wc_match (const char *wc, char *str) {
  while (*wc && *str) {
    if (*wc == '*') {
      while (*wc && *wc == '*')
        wc++;
      if (!*wc)
        return 1;

      while (*str && *str != *wc)
        str++;
    } else if (*wc == '?' || *wc == *str) {
      wc++;
      str++;
    } else {
      break;
    }
  }
  if (!*wc && !*str)
    return 1;
  return 0;
}






int
ignore_referer (const char *host) {
  char *needle = NULL;
  int i, ignore = 0;

  if (conf.ignore_referer_idx == 0)
    return 0;
  if (host == NULL || *host == '\0')
    return 0;

  needle = xstrdup (host);
  for (i = 0; i < conf.ignore_referer_idx; ++i) {
    if (conf.ignore_referers[i] == NULL || *conf.ignore_referers[i] == '\0')
      continue;

    if (wc_match (conf.ignore_referers[i], needle)) {
      ignore = 1;
      goto out;
    }
  }
out:
  free (needle);

  return ignore;
}






int
hide_referer (const char *host) {
  char *needle = NULL;
  int i, ignore = 0;

  if (conf.hide_referer_idx == 0)
    return 0;
  if (host == NULL || *host == '\0')
    return 0;

  needle = xstrdup (host);
  for (i = 0; i < conf.hide_referer_idx; ++i) {
    if (conf.hide_referers[i] == NULL || *conf.hide_referers[i] == '\0')
      continue;

    if (wc_match (conf.hide_referers[i], needle)) {
      ignore = 1;
      goto out;
    }
  }
out:
  free (needle);

  return ignore;
}





static int
within_range (const char *ip, const char *start, const char *end) {
  struct in6_addr addr6, start6, end6;
  struct in_addr addr4, start4, end4;

  if (start == NULL || *start == '\0')
    return 0;
  if (end == NULL || *end == '\0')
    return 0;
  if (ip == NULL || *ip == '\0')
    return 0;


  if (1 == inet_pton (AF_INET, ip, &addr4)) {
    if (1 != inet_pton (AF_INET, start, &start4))
      return 0;
    if (1 != inet_pton (AF_INET, end, &end4))
      return 0;
    if (memcmp (&addr4, &start4, sizeof (addr4)) >= 0 &&
        memcmp (&addr4, &end4, sizeof (addr4)) <= 0)
      return 1;
  }

  else if (1 == inet_pton (AF_INET6, ip, &addr6)) {
    if (1 != inet_pton (AF_INET6, start, &start6))
      return 0;
    if (1 != inet_pton (AF_INET6, end, &end6))
      return 0;
    if (memcmp (&addr6, &start6, sizeof (addr6)) >= 0 &&
        memcmp (&addr6, &end6, sizeof (addr6)) <= 0)
      return 1;
  }

  return 0;
}






int
ip_in_range (const char *ip) {
  char *start, *end, *dash;
  int i;

  for (i = 0; i < conf.ignore_ip_idx; ++i) {
    end = NULL;
    if (conf.ignore_ips[i] == NULL || *conf.ignore_ips[i] == '\0')
      continue;

    start = xstrdup (conf.ignore_ips[i]);

    if ((dash = strchr (start, '-')) != NULL) {
      *dash = '\0';
      end = dash + 1;
    }


    if (end == NULL) {
      if (strcmp (ip, start) == 0) {
        free (start);
        return 1;
      }
    }

    else {
      if (within_range (ip, start, end)) {
        free (start);
        return 1;
      }
    }
    free (start);
  }

  return 0;
}






int
find_output_type (char **filename, const char *ext, int alloc) {
  int i;
  const char *dot = NULL;

  for (i = 0; i < conf.output_format_idx; ++i) {

    if (strcmp (conf.output_formats[i], ext) == 0)
      return 0;

    if ((dot = strrchr (conf.output_formats[i], '.')) != NULL && strcmp (dot + 1, ext) == 0) {
      if (alloc)
        *filename = xstrdup (conf.output_formats[i]);
      return 0;
    }
  }

  return 1;
}
# 436 "project/goaccess/src/util.c"
int
valid_output_type (const char *filename) {
  const char *ext = NULL;
  size_t sl;

  if ((ext = strrchr (filename, '.')) == NULL)
    return -1;

  ext++;

  sl = strlen (ext);
  if (sl < 3 || sl > 4)
    return 0;

  if (strcmp ("html", ext) == 0)
    return 1;

  if (strcmp ("json", ext) == 0)
    return 1;

  if (strcmp ("csv", ext) == 0)
    return 1;

  return 0;
}





char *
get_user_config (void) {
  char *user_home = NULL, *path = NULL;
  size_t len;

  user_home = getenv ("HOME");
  if (user_home == NULL)
    return NULL;

  len = snprintf (NULL, 0, "%s/.goaccessrc", user_home) + 1;
  path = xmalloc (len);
  snprintf (path, len, "%s/.goaccessrc", user_home);

  return path;
}




char *
get_global_config (void) {
  char *path = NULL;
  size_t len;

  len = snprintf (NULL, 0, "%s/goaccess/goaccess.conf", SYSCONFDIR) + 1;
  path = xmalloc (len);
  snprintf (path, len, "%s/goaccess/goaccess.conf", SYSCONFDIR);

  return path;
}





char *
get_visitors_date (const char *odate, const char *from, const char *to) {
  char date[DATE_TIME] = "";

  memset (date, 0, sizeof *date);

  if (convert_date (date, odate, from, to, DATE_TIME) == 0)
    return xstrdup (date);

  LOG_DEBUG (("invalid date: %s", odate));
  return xstrdup ("---");
}





#pragma GCC diagnostic ignored "-Wformat-nonliteral"
int
str_to_time (const char *str, const char *fmt, struct tm *tm) {
  char *end = NULL, *sEnd = NULL;
  unsigned long long ts = 0;
  int us, ms;
#if !defined(__GLIBC__)
  int se;
#endif

  time_t seconds = 0;

  if (str == NULL || *str == '\0' || fmt == NULL || *fmt == '\0')
    return 1;

  us = strcmp ("%f", fmt) == 0;
  ms = strcmp ("%*", fmt) == 0;
#if !defined(__GLIBC__)
  se = strcmp ("%s", fmt) == 0;
#endif



#if !defined(__GLIBC__)
  if (se || us || ms) {
#else
  if (us || ms) {
#endif
    errno = 0;

    ts = strtoull (str, &sEnd, 10);
    if (str == sEnd || *sEnd != '\0' || errno == ERANGE)
      return 1;

    seconds = (us) ? ts / SECS : ((ms) ? ts / MILS : ts);

    localtime_r (&seconds, tm);

    return 0;
  }

  end = strptime (str, fmt, tm);
  if (end == NULL || *end != '\0')
    return 1;

  return 0;
}





int
convert_date (char *res, const char *data, const char *from, const char *to, int size) {
  struct tm tm;

  memset (&tm, 0, sizeof (tm));
  timestamp = time (NULL);
  localtime_r (&timestamp, &now_tm);

  if (str_to_time (data, from, &tm) != 0)
    return 1;


  if (!has_timestamp (from) && strpbrk (from, "Yy") == NULL)
    tm.tm_year = now_tm.tm_year;

  if (strftime (res, size, to, &tm) <= 0)
    return 1;

  return 0;
}

#pragma GCC diagnostic warning "-Wformat-nonliteral"





int
invalid_ipaddr (char *str, int *ipvx) {
  union {
    struct sockaddr addr;
    struct sockaddr_in6 addr6;
    struct sockaddr_in addr4;
  } a;

  (*ipvx) = TYPE_IPINV;
  if (str == NULL || *str == '\0')
    return 1;

  memset (&a, 0, sizeof (a));
  if (1 == inet_pton (AF_INET, str, &a.addr4.sin_addr)) {
    (*ipvx) = TYPE_IPV4;
    return 0;
  } else if (1 == inet_pton (AF_INET6, str, &a.addr6.sin6_addr)) {
    (*ipvx) = TYPE_IPV6;
    return 0;
  }

  return 1;
}





off_t
file_size (const char *filename) {
  struct stat st;

  if (stat (filename, &st) == 0)
    return st.st_size;

  LOG_DEBUG (("Can't determine size of %s: %s\n", filename, strerror (errno)));

  return -1;
}






const char *
verify_status_code_type (const char *str) {
  size_t i;
  for (i = 0; i < ARRAY_SIZE (code_type); i++)
    if (strchr (code_type[i][0], str[0]) != NULL)
      return _(code_type[i][1]);

  return "Unknown";
}






const char *
verify_status_code (char *str) {
  size_t i;
  for (i = 0; i < ARRAY_SIZE (codes); i++)
    if (strstr (str, codes[i][0]) != NULL)
      return _(codes[i][1]);

  return "Unknown";
}





int
str_inarray (const char *s, const char *arr[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    if (strcmp (arr[i], s) == 0)
      return i;
  }
  return -1;
}





char *
ltrim (char *s) {
  char *begin = s;

  while (isspace (*begin))
    ++begin;
  memmove (s, begin, strlen (begin) + 1);

  return s;
}





char *
rtrim (char *s) {
  char *end = s + strlen (s);

  while ((end != s) && isspace (*(end - 1)))
    --end;
  *end = '\0';

  return s;
}




char *
trim_str (char *str) {
  return rtrim (ltrim (str));
}





char *
filesize_str (unsigned long long log_size) {
  char *size = xmalloc (sizeof (char) * 12);
  if (log_size >= (1ULL << 50))
    snprintf (size, 12, "%.2f PiB", (double) (log_size) / PIB (1ULL));
  else if (log_size >= (1ULL << 40))
    snprintf (size, 12, "%.2f TiB", (double) (log_size) / TIB (1ULL));
  else if (log_size >= (1ULL << 30))
    snprintf (size, 12, "%.2f GiB", (double) (log_size) / GIB (1ULL));
  else if (log_size >= (1ULL << 20))
    snprintf (size, 12, "%.2f MiB", (double) (log_size) / MIB (1ULL));
  else if (log_size >= (1ULL << 10))
    snprintf (size, 12, "%.2f KiB", (double) (log_size) / KIB (1ULL));
  else
    snprintf (size, 12, "%.1f   B", (double) (log_size));

  return size;
}





char *
usecs_to_str (unsigned long long usec) {
  char *size = xmalloc (sizeof (char) * 11);
  if (usec >= DAY)
    snprintf (size, 11, "%.2f  d", (double) (usec) / DAY);
  else if (usec >= HOUR)
    snprintf (size, 11, "%.2f hr", (double) (usec) / HOUR);
  else if (usec >= MINS)
    snprintf (size, 11, "%.2f mn", (double) (usec) / MINS);
  else if (usec >= SECS)
    snprintf (size, 11, "%.2f  s", (double) (usec) / SECS);
  else if (usec >= MILS)
    snprintf (size, 11, "%.2f ms", (double) (usec) / MILS);
  else
    snprintf (size, 11, "%.2f us", (double) (usec));

  return size;
}





char *
int2str (int d, int width) {
  char *s = xmalloc (snprintf (NULL, 0, "%*d", width, d) + 1);
  sprintf (s, "%*d", width, d);

  return s;
}





char *
u322str (uint32_t d, int width) {
  char *s = xmalloc (snprintf (NULL, 0, "%*u", width, d) + 1);
  sprintf (s, "%*u", width, d);

  return s;
}





char *
u642str (uint64_t d, int width) {
  char *s = xmalloc (snprintf (NULL, 0, "%*" PRIu64, width, d) + 1);
  sprintf (s, "%*" PRIu64, width, d);

  return s;
}





char *
float2str (float d, int width) {
  char *s = xmalloc (snprintf (NULL, 0, "%*.2f", width, d) + 1);
  sprintf (s, "%*.2f", width, d);

  return s;
}

int
ptr2int (char *ptr) {
  char *sEnd = NULL;
  int value = -1;

  value = strtol (ptr, &sEnd, 10);
  if (ptr == sEnd || *sEnd != '\0' || errno == ERANGE) {
    LOG_DEBUG (("Invalid parse of integer value from pointer. \n"));
    return -1;
  }

  return value;
}

int
str2int (const char *date) {
  char *sEnd = NULL;
  int d = strtol (date, &sEnd, 10);
  if (date == sEnd || *sEnd != '\0' || errno == ERANGE)
    return -1;
  return d;
}




int
intlen (uint64_t num) {
  int l = 1;
  while (num > 9) {
    l++;
    num /= 10;
  }

  return l;
}




char *
char_repeat (int n, char c) {
  char *dest = xmalloc (n + 1);
  memset (dest, c, n);
  dest[n] = '\0';

  return dest;
}






char *
char_replace (char *str, char o, char n) {
  char *p = str;

  if (str == NULL || *str == '\0')
    return str;

  while ((p = strchr (p, o)) != NULL)
    *p++ = n;

  return str;
}




void
strip_newlines (char *str) {
  char *src, *dst;
  for (src = dst = str; *src != '\0'; src++) {
    *dst = *src;
    if (*dst != '\r' && *dst != '\n')
      dst++;
  }
  *dst = '\0';
}




char *
deblank (char *str) {
  char *out = str, *put = str;

  for (; *str != '\0'; ++str) {
    if (*str != ' ')
      *put++ = *str;
  }
  *put = '\0';

  return out;
}





char *
strtoupper (char *str) {
  char *p = str;
  if (str == NULL || *str == '\0')
    return str;

  while (*p != '\0') {
    *p = toupper (*p);
    p++;
  }

  return str;
}




char *
left_pad_str (const char *s, int indent) {
  char *buf = NULL;

  indent = strlen (s) + indent;
  buf = xmalloc (snprintf (NULL, 0, "%*s", indent, s) + 1);
  sprintf (buf, "%*s", indent, s);

  return buf;
}



size_t
append_str (char **dest, const char *src) {
  size_t curlen = strlen (*dest);
  size_t srclen = strlen (src);
  size_t newlen = curlen + srclen;

  char *str = xrealloc (*dest, newlen + 1);
  memcpy (str + curlen, src, srclen + 1);
  *dest = str;

  return newlen;
}






char *
escape_str (const char *src) {
  char *dest, *q;
  const unsigned char *p;

  if (src == NULL || *src == '\0')
    return NULL;

  p = (const unsigned char *) src;
  q = dest = xmalloc (strlen (src) * 4 + 1);

  while (*p) {
    switch (*p) {
    case '\\':
      *q++ = '\\';
      *q++ = '\\';
      break;
    case '\n':
      *q++ = '\\';
      *q++ = 'n';
      break;
    case '\r':
      *q++ = '\\';
      *q++ = 'r';
      break;
    case '\t':
      *q++ = '\\';
      *q++ = 't';
      break;
    default:

      if ((*p < ' ') || (*p >= 0177)) {
        *q++ = '\\';
        *q++ = '0' + (((*p) >> 6) & 07);
        *q++ = '0' + (((*p) >> 3) & 07);
        *q++ = '0' + ((*p) & 07);
      } else
        *q++ = *p;
      break;
    }
    p++;
  }
  *q = 0;
  return dest;
}





char *
unescape_str (const char *src) {
  char *dest, *q;
  const char *p = src;

  if (src == NULL || *src == '\0')
    return NULL;

  dest = xmalloc (strlen (src) + 1);
  q = dest;

  while (*p) {
    if (*p == '\\') {
      p++;
      switch (*p) {
      case '\0':

        goto out;
      case 'n':
        *q++ = '\n';
        break;
      case 'r':
        *q++ = '\r';
        break;
      case 't':
        *q++ = '\t';
        break;
      default:
        *q++ = *p;
        break;
      }
    } else
      *q++ = *p;
    p++;
  }
out:
  *q = 0;

  return dest;
}
