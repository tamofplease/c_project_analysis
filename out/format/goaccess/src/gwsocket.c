# 1 "project/goaccess/src/gwsocket.c"
# 31 "project/goaccess/src/gwsocket.c"
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

#include "gwsocket.h"

#include "commons.h"
#include "error.h"
#include "goaccess.h"
#include "json.h"
#include "parser.h"
#include "settings.h"
#include "websocket.h"
#include "xmalloc.h"




GWSReader *
new_gwsreader (void) {
  GWSReader *reader = xmalloc (sizeof (GWSReader));
  memset (reader, 0, sizeof *reader);

  return reader;
}




GWSWriter *
new_gwswriter (void) {
  GWSWriter *writer = xmalloc (sizeof (GWSWriter));
  memset (writer, 0, sizeof *writer);

  return writer;
}





static int
write_holder (int fd, const char *buf, int len) {
  int i, ret = 0;

  for (i = 0; i < len;) {
    ret = write (fd, buf + i, len - i);
    if (ret < 0) {
      if (errno == EINTR || errno == EAGAIN)
        continue;
      return -1;
    } else {
      i += ret;
    }
  }

  return i;
}


static void
clear_fifo_packet (GWSReader * gwserver) {
  memset (gwserver->hdr, 0, sizeof (gwserver->hdr));
  gwserver->hlen = 0;

  if (gwserver->packet == NULL)
    return;

  if (gwserver->packet->data)
    free (gwserver->packet->data);
  free (gwserver->packet);
  gwserver->packet = NULL;
}





int
broadcast_holder (int fd, const char *buf, int len) {
  char *p = NULL, *ptr = NULL;

  p = calloc (sizeof (uint32_t) * 3, sizeof (char));

  ptr = p;
  ptr += pack_uint32 (ptr, 0);
  ptr += pack_uint32 (ptr, 0x01);
  ptr += pack_uint32 (ptr, len);

  write_holder (fd, p, sizeof (uint32_t) * 3);
  write_holder (fd, buf, len);
  free (p);

  return 0;
}





int
send_holder_to_client (int fd, int listener, const char *buf, int len) {
  char *p = NULL, *ptr = NULL;

  p = calloc (sizeof (uint32_t) * 3, sizeof (char));

  ptr = p;
  ptr += pack_uint32 (ptr, listener);
  ptr += pack_uint32 (ptr, 0x01);
  ptr += pack_uint32 (ptr, len);

  write_holder (fd, p, sizeof (uint32_t) * 3);
  write_holder (fd, buf, len);
  free (p);

  return 0;
}






int
read_fifo (GWSReader * gwsreader, void (*f) (int)) {
  WSPacket **pa = &gwsreader->packet;
  char *ptr;
  int bytes = 0, readh = 0, need = 0, fd = gwsreader->fd;
  uint32_t listener = 0, type = 0, size = 0;
  struct pollfd fds[] = {
    {.fd = gwsreader->self_pipe[0],.events = POLLIN},
    {.fd = gwsreader->fd,.events = POLLIN,},
  };

  if (poll (fds, sizeof (fds) / sizeof (fds[0]), -1) == -1) {
    switch (errno) {
    case EINTR:
      break;
    default:
      FATAL ("Unable to poll: %s.", strerror (errno));
    }
  }

  if (fds[0].revents & POLLIN)
    return 1;
  if (!(fds[1].revents & POLLIN)) {
    LOG (("No file descriptor set on read_message()\n"));
    return 0;
  }

  readh = gwsreader->hlen;
  need = HDR_SIZE - readh;
  if (need > 0) {
    if ((bytes = ws_read_fifo (fd, gwsreader->hdr, &gwsreader->hlen, readh, need)) < 0)
      return 0;
    if (bytes != need)
      return 0;
  }


  ptr = gwsreader->hdr;
  ptr += unpack_uint32 (ptr, &listener);
  ptr += unpack_uint32 (ptr, &type);
  ptr += unpack_uint32 (ptr, &size);

  if ((*pa) == NULL) {
    (*pa) = xcalloc (1, sizeof (WSPacket));
    (*pa)->type = type;
    (*pa)->size = size;
    (*pa)->data = xcalloc (size + 1, sizeof (char));
  }

  readh = (*pa)->len;
  need = (*pa)->size - readh;
  if (need > 0) {
    if ((bytes = ws_read_fifo (fd, (*pa)->data, &(*pa)->len, readh, need)) < 0)
      return 0;
    if (bytes != need)
      return 0;
  }
  clear_fifo_packet (gwsreader);

  (*f) (listener);

  return 0;
}





static int
onopen (WSPipeOut * pipeout, WSClient * client) {
  uint32_t hsize = sizeof (uint32_t) * 3;
  char *hdr = calloc (hsize, sizeof (char));
  char *ptr = hdr;

  ptr += pack_uint32 (ptr, client->listener);
  ptr += pack_uint32 (ptr, WS_OPCODE_TEXT);
  ptr += pack_uint32 (ptr, INET6_ADDRSTRLEN);

  ws_write_fifo (pipeout, hdr, hsize);
  ws_write_fifo (pipeout, client->remote_ip, INET6_ADDRSTRLEN);
  free (hdr);

  return 0;
}


void
set_ready_state (void) {
  fprintf (stderr, "\33[2K\r");
  fprintf (stderr, "%s\n", INFO_WS_READY_FOR_CONN);
}





int
open_fifoout (void) {
  const char *fifo = conf.fifo_out;
  int fdfifo;


  ws_setfifo (fifo);
  if ((fdfifo = open (fifo, O_RDWR | O_NONBLOCK)) == -1)
    return -1;

  return fdfifo;
}





int
open_fifoin (void) {
  const char *fifo = conf.fifo_in;
  int fdfifo;

  if ((fdfifo = open (fifo, O_WRONLY | O_NONBLOCK)) == -1)
    return -1;

  return fdfifo;
}


void
set_self_pipe (int *self_pipe) {

  if (pipe (self_pipe) == -1)
    FATAL ("Unable to create pipe: %s.", strerror (errno));


  set_nonblocking (self_pipe[0]);
  set_nonblocking (self_pipe[1]);
}


void
stop_ws_server (GWSWriter * gwswriter, GWSReader * gwsreader) {
  pthread_t writer, reader;
  WSServer *server = NULL;

  if (!gwsreader || !gwswriter)
    return;
  if (!(server = gwswriter->server))
    return;

  pthread_mutex_lock (&gwsreader->mutex);
  if ((write (gwsreader->self_pipe[1], "x", 1)) == -1 && errno != EAGAIN)
    LOG (("Unable to write to self pipe on pipeout.\n"));
  pthread_mutex_unlock (&gwsreader->mutex);


  pthread_mutex_lock (&gwswriter->mutex);
  if ((write (server->self_pipe[1], "x", 1)) == -1 && errno != EAGAIN)
    ws_stop (server);
  pthread_mutex_unlock (&gwswriter->mutex);

  reader = gwsreader->thread;
  if (pthread_join (reader, NULL) != 0)
    LOG (("Unable to join thread gwsreader: %s\n", strerror (errno)));

  writer = gwswriter->thread;
  if (pthread_join (writer, NULL) != 0)
    LOG (("Unable to join thread gwswriter: %s\n", strerror (errno)));
}


static void
start_server (void *ptr_data) {
  GWSWriter *writer = (GWSWriter *) ptr_data;

  writer->server->onopen = onopen;
  pthread_mutex_lock (&writer->mutex);
  set_self_pipe (writer->server->self_pipe);
  pthread_mutex_unlock (&writer->mutex);


  ws_start (writer->server);
  fprintf (stderr, "Stopping WebSocket server...\n");
  ws_stop (writer->server);
}


static void
set_ws_opts (void) {
  ws_set_config_strict (1);
  if (conf.addr)
    ws_set_config_host (conf.addr);
  if (conf.unix_socket)
    ws_set_config_unix_socket (conf.unix_socket);
  if (conf.fifo_in)
    ws_set_config_pipein (conf.fifo_in);
  if (conf.fifo_out)
    ws_set_config_pipeout (conf.fifo_out);
  if (conf.origin)
    ws_set_config_origin (conf.origin);
  if (conf.port)
    ws_set_config_port (conf.port);
  if (conf.sslcert)
    ws_set_config_sslcert (conf.sslcert);
  if (conf.sslkey)
    ws_set_config_sslkey (conf.sslkey);
}


int
setup_ws_server (GWSWriter * gwswriter, GWSReader * gwsreader) {
  int id;
  pthread_t *thread;

  if (pthread_mutex_init (&gwswriter->mutex, NULL))
    FATAL ("Failed init gwswriter mutex");
  if (pthread_mutex_init (&gwsreader->mutex, NULL))
    FATAL ("Failed init gwsreader mutex");


  thread = &gwswriter->thread;


  if ((gwswriter->server = ws_init ("0.0.0.0", "7890", set_ws_opts)) == NULL)
    FATAL ("Failed init websocket");

  id = pthread_create (&(*thread), NULL, (void *) &start_server, gwswriter);
  if (id)
    FATAL ("Return code from pthread_create(): %d", id);


  thread = &gwsreader->thread;
  id = pthread_create (&(*thread), NULL, (void *) &read_client, gwsreader);
  if (id)
    FATAL ("Return code from pthread_create(): %d", id);

  return 0;
}
