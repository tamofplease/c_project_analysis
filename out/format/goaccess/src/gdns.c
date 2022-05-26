# 1 "project/goaccess/src/gdns.c"
# 31 "project/goaccess/src/gdns.c"
#define _MULTI_THREADED 
#ifdef __FreeBSD__
#include <sys/socket.h>
#endif

#if HAVE_CONFIG_H
#include <config.h>
#endif

#include <pthread.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <ctype.h>
#include <errno.h>
#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <time.h>
#include <unistd.h>

#include "gdns.h"

#include "error.h"
#include "gkhash.h"
#include "goaccess.h"
#include "util.h"
#include "xmalloc.h"

GDnsThread gdns_thread;
static GDnsQueue *gdns_queue;


void
gqueue_init (GDnsQueue * q, int capacity) {
  q->head = 0;
  q->tail = -1;
  q->size = 0;
  q->capacity = capacity;
}




int
gqueue_size (GDnsQueue * q) {
  return q->size;
}




int
gqueue_empty (GDnsQueue * q) {
  return q->size == 0;
}




int
gqueue_full (GDnsQueue * q) {
  return q->size == q->capacity;
}


void
gqueue_destroy (GDnsQueue * q) {
  free (q);
}





int
gqueue_enqueue (GDnsQueue * q, const char *item) {
  if (gqueue_full (q))
    return -1;

  q->tail = (q->tail + 1) % q->capacity;
  strncpy (q->buffer[q->tail], item, sizeof (q->buffer[q->tail]));
  q->buffer[q->tail][sizeof (q->buffer[q->tail]) - 1] = '\0';
  q->size++;
  return 0;
}





int
gqueue_find (GDnsQueue * q, const char *item) {
  int i;
  if (gqueue_empty (q))
    return 0;

  for (i = 0; i < q->size; i++) {
    if (strcmp (item, q->buffer[i]) == 0)
      return 1;
  }
  return 0;
}





char *
gqueue_dequeue (GDnsQueue * q) {
  char *item;
  if (gqueue_empty (q))
    return NULL;

  item = q->buffer[q->head];
  q->head = (q->head + 1) % q->capacity;
  q->size--;
  return item;
}





static char *
reverse_host (const struct sockaddr *a, socklen_t length) {
  char h[H_SIZE];
  int flags, st;

  flags = NI_NAMEREQD;
  st = getnameinfo (a, length, h, H_SIZE, NULL, 0, flags);
  if (!st)
    return alloc_string (h);
  return alloc_string (gai_strerror (st));
}





char *
reverse_ip (char *str) {
  union {
    struct sockaddr addr;
    struct sockaddr_in6 addr6;
    struct sockaddr_in addr4;
  } a;

  if (str == NULL || *str == '\0')
    return NULL;

  memset (&a, 0, sizeof (a));
  if (1 == inet_pton (AF_INET, str, &a.addr4.sin_addr)) {
    a.addr4.sin_family = AF_INET;
    return reverse_host (&a.addr, sizeof (a.addr4));
  } else if (1 == inet_pton (AF_INET6, str, &a.addr6.sin6_addr)) {
    a.addr6.sin6_family = AF_INET6;
    return reverse_host (&a.addr, sizeof (a.addr6));
  }
  return NULL;
}


void
dns_resolver (char *addr) {
  pthread_mutex_lock (&gdns_thread.mutex);

  if (!gqueue_full (gdns_queue) && !gqueue_find (gdns_queue, addr)) {

    gqueue_enqueue (gdns_queue, addr);
    pthread_cond_broadcast (&gdns_thread.not_empty);
  }
  pthread_mutex_unlock (&gdns_thread.mutex);
}



static void
dns_worker (void GO_UNUSED (*ptr_data)) {
  char *ip = NULL, *host = NULL;

  while (1) {
    pthread_mutex_lock (&gdns_thread.mutex);

    while (gqueue_empty (gdns_queue))
      pthread_cond_wait (&gdns_thread.not_empty, &gdns_thread.mutex);

    ip = gqueue_dequeue (gdns_queue);

    pthread_mutex_unlock (&gdns_thread.mutex);
    host = reverse_ip (ip);
    pthread_mutex_lock (&gdns_thread.mutex);

    if (!active_gdns) {
      pthread_mutex_unlock (&gdns_thread.mutex);
      free (host);
      return;
    }


    if (host != NULL && active_gdns) {
      ht_insert_hostname (ip, host);
      free (host);
    }

    pthread_cond_signal (&gdns_thread.not_full);
    pthread_mutex_unlock (&gdns_thread.mutex);
  }
}


void
gdns_init (void) {
  gdns_queue = xmalloc (sizeof (GDnsQueue));
  gqueue_init (gdns_queue, QUEUE_SIZE);

  if (pthread_cond_init (&(gdns_thread.not_empty), NULL))
    FATAL ("Failed init thread condition");

  if (pthread_cond_init (&(gdns_thread.not_full), NULL))
    FATAL ("Failed init thread condition");

  if (pthread_mutex_init (&(gdns_thread.mutex), NULL))
    FATAL ("Failed init thread mutex");
}


void
gdns_free_queue (void) {
  gqueue_destroy (gdns_queue);
}


void
gdns_thread_create (void) {
  int th;

  active_gdns = 1;
  th = pthread_create (&(gdns_thread.thread), NULL, (void *) &dns_worker, NULL);
  if (th)
    FATAL ("Return code from pthread_create(): %d", th);
  pthread_detach (gdns_thread.thread);
}
