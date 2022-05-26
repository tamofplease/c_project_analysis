# 1 "project/goaccess/src/goaccess.c"
# 31 "project/goaccess/src/goaccess.c"
#define _LARGEFILE_SOURCE 
#define _LARGEFILE64_SOURCE 
#define _FILE_OFFSET_BITS 64

#include <assert.h>
#include <ctype.h>
#include <errno.h>

#include <locale.h>

#if HAVE_CONFIG_H
#include <config.h>
#endif

#include <fcntl.h>
#include <grp.h>
#include <pthread.h>
#include <pwd.h>
#include <signal.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <inttypes.h>

#include "gkhash.h"

#ifdef HAVE_GEOLOCATION
#include "geoip1.h"
#endif

#include "browsers.h"
#include "csv.h"
#include "error.h"
#include "gdashboard.h"
#include "gdns.h"
#include "gholder.h"
#include "goaccess.h"
#include "gwsocket.h"
#include "json.h"
#include "options.h"
#include "output.h"
#include "util.h"
#include "websocket.h"
#include "xmalloc.h"

GConf conf = {
  .append_method = 1,
  .append_protocol = 1,
  .hl_header = 1,
  .num_tests = 10,
};


GSpinner *parsing_spinner;

int active_gdns = 0;


static GWSWriter *gwswriter;
static GWSReader *gwsreader;

static GDash *dash;

static GHolder *holder;

static sigset_t oldset;

static WINDOW *header_win, *main_win;

static int main_win_height = 0;


static GScroll gscroll = {
  {
     {0, 0},
     {0, 0},
     {0, 0},
     {0, 0},
     {0, 0},
     {0, 0},
     {0, 0},
     {0, 0},
     {0, 0},
     {0, 0},
     {0, 0},
     {0, 0},
     {0, 0},
     {0, 0},
     {0, 0},
#ifdef HAVE_GEOLOCATION
     {0, 0},
#endif
     {0, 0},
     {0, 0},
  },
  0,
  0,
  0,
};



static void
house_keeping_holder (void) {

  pthread_mutex_lock (&gdns_thread.mutex);


  active_gdns = 0;

  free_holder (&holder);

  gdns_free_queue ();

  free_storage ();

  pthread_mutex_unlock (&gdns_thread.mutex);
}


static void
house_keeping (void) {
  house_keeping_holder ();


  if (dash && !conf.output_stdout) {
    free_dashboard (dash);
    reset_find ();
  }


#ifdef HAVE_GEOLOCATION
  geoip_free ();
#endif


  if (conf.invalid_requests_log) {
    LOG_DEBUG (("Closing invalid requests log.\n"));
    invalid_log_close ();
  }


  if (conf.unknowns_log) {
    LOG_DEBUG (("Closing unknowns log.\n"));
    unknowns_log_close ();
  }


  free_formats ();
  free_browsers_hash ();
  if (conf.debug_log) {
    LOG_DEBUG (("Bye.\n"));
    dbg_log_close ();
  }
  if (conf.fifo_in)
    free ((char *) conf.fifo_in);
  if (conf.fifo_out)
    free ((char *) conf.fifo_out);


  free (parsing_spinner);

  free_color_lists ();

  free_cmd_args ();

  free (gwswriter);

  free (gwsreader);
}

static void
cleanup (int ret) {


  if (!conf.output_stdout)
    endwin ();


  if (ret)
    output_logerrors ();

  house_keeping ();
}


static void
drop_permissions (void) {
  struct passwd *pw;

  errno = 0;
  if ((pw = getpwnam (conf.username)) == NULL) {
    if (errno == 0)
      FATAL ("No such user %s", conf.username);
    FATAL ("Unable to retrieve user %s: %s", conf.username, strerror (errno));
  }

  if (setgroups (1, &pw->pw_gid) == -1)
    FATAL ("setgroups: %s", strerror (errno));
  if (setgid (pw->pw_gid) == -1)
    FATAL ("setgid: %s", strerror (errno));
  if (setuid (pw->pw_uid) == -1)
    FATAL ("setuid: %s", strerror (errno));
}



static void
write_pid_file (const char *path, pid_t pid) {
  FILE *pidfile;

  if (!path)
    return;

  if ((pidfile = fopen (path, "w"))) {
    fprintf (pidfile, "%d", pid);
    fclose (pidfile);
  } else {
    FATAL ("Unable to open the specified pid file. %s", strerror (errno));
  }
}


static void
daemonize (void) {
  pid_t pid, sid;
  int fd;


  pid = fork ();

  if (pid < 0)
    exit (EXIT_FAILURE);
  if (pid > 0) {
    write_pid_file (conf.pidfile, pid);
    printf ("Daemonized GoAccess: %d\n", pid);
    exit (EXIT_SUCCESS);
  }

  umask (0);

  sid = setsid ();
  if (sid < 0) {
    LOG_DEBUG (("Unable to setsid: %s.\n", strerror (errno)));
    exit (EXIT_FAILURE);
  }



  if (chdir ("/") < 0) {
    LOG_DEBUG (("Unable to set chdir: %s.\n", strerror (errno)));
    exit (EXIT_FAILURE);
  }



  if ((fd = open ("/dev/null", O_RDWR, 0)) == -1) {
    LOG_DEBUG (("Unable to open /dev/null: %s.\n", strerror (errno)));
    exit (EXIT_FAILURE);
  }

  dup2 (fd, STDIN_FILENO);
  dup2 (fd, STDOUT_FILENO);
  dup2 (fd, STDERR_FILENO);
  if (fd > STDERR_FILENO) {
    close (fd);
  }
}



static void
allocate_holder_by_module (GModule module) {
  GRawData *raw_data;


  raw_data = parse_raw_data (module);
  if (!raw_data) {
    LOG_DEBUG (("raw data is NULL for module: %d.\n", module));
    return;
  }

  load_holder_data (raw_data, holder + module, module, module_sort[module]);
}



static void
allocate_holder (void) {
  size_t idx = 0;

  holder = new_gholder (TOTAL_MODULES);
  FOREACH_MODULE (idx, module_list) {
    allocate_holder_by_module (module_list[idx]);
  }
}



static void
allocate_data_by_module (GModule module, int col_data) {
  int size = 0, max_choices = get_max_choices ();

  dash->module[module].head = module_to_head (module);
  dash->module[module].desc = module_to_desc (module);

  size = holder[module].idx;
  if (gscroll.expanded && module == gscroll.current) {
    size = size > max_choices ? max_choices : holder[module].idx;
  } else {
    size = holder[module].idx > col_data ? col_data : holder[module].idx;
  }

  dash->module[module].alloc_data = size;
  dash->module[module].ht_size = holder[module].ht_size;
  dash->module[module].idx_data = 0;
  dash->module[module].pos_y = 0;

  if (gscroll.expanded && module == gscroll.current)
    dash->module[module].dash_size = DASH_EXPANDED;
  else
    dash->module[module].dash_size = DASH_COLLAPSED;
  dash->total_alloc += dash->module[module].dash_size;

  pthread_mutex_lock (&gdns_thread.mutex);
  load_data_to_dash (&holder[module], dash, module, &gscroll);
  pthread_mutex_unlock (&gdns_thread.mutex);
}



static void
allocate_data (void) {
  GModule module;
  int col_data = get_num_collapsed_data_rows ();
  size_t idx = 0;

  dash = new_gdash ();
  FOREACH_MODULE (idx, module_list) {
    module = module_list[idx];
    allocate_data_by_module (module, col_data);
  }
}

static void
clean_stdscrn (void) {
  int row, col;

  getmaxyx (stdscr, row, col);
  draw_header (stdscr, "", "%s", row - 1, 0, col, color_default);
}


static void
render_screens (uint32_t offset) {
  GColors *color = get_color (COLOR_DEFAULT);
  int row, col;
  char time_str_buf[32];

  getmaxyx (stdscr, row, col);
  term_size (main_win, &main_win_height);

  generate_time ();
  strftime (time_str_buf, sizeof (time_str_buf), "%d/%b/%Y:%T", &now_tm);

  draw_header (stdscr, "", "%s", row - 1, 0, col, color_default);

  wattron (stdscr, color->attr | COLOR_PAIR (color->pair->idx));
  mvaddstr (row - 1, 1, T_HELP_ENTER);
  mvprintw (row - 1, col / 2 - 10, "%" PRIu32 "/r - %s", offset, time_str_buf);
  mvaddstr (row - 1, col - 6 - strlen (T_QUIT), T_QUIT);
  mvprintw (row - 1, col - 5, "%s", GO_VERSION);
  wattroff (stdscr, color->attr | COLOR_PAIR (color->pair->idx));

  refresh ();


  display_general (header_win, holder);
  wrefresh (header_win);


  update_active_module (header_win, gscroll.current);

  display_content (main_win, dash, &gscroll);
}


static int
collapse_current_module (void) {
  if (!gscroll.expanded)
    return 1;

  gscroll.expanded = 0;
  reset_scroll_offsets (&gscroll);
  free_dashboard (dash);
  allocate_data ();

  return 0;
}



static void
disabled_panel_msg (GModule module) {
  const char *lbl = module_to_label (module);
  int row, col;

  getmaxyx (stdscr, row, col);
  draw_header (stdscr, lbl, ERR_PANEL_DISABLED, row - 1, 0, col, color_error);
}


static int
set_module_to (GScroll * scrll, GModule module) {
  if (get_module_index (module) == -1) {
    disabled_panel_msg (module);
    return 1;
  }


  if (!conf.no_tab_scroll)
    gscroll.dash = get_module_index (module) * DASH_COLLAPSED;


  collapse_current_module ();
  scrll->current = module;
  return 0;
}


static void
scroll_to_first_line (void) {
  if (!gscroll.expanded)
    gscroll.dash = 0;
  else {
    gscroll.module[gscroll.current].scroll = 0;
    gscroll.module[gscroll.current].offset = 0;
  }
}


static void
scroll_to_last_line (void) {
  int exp_size = get_num_expanded_data_rows ();
  int scrll = 0, offset = 0;

  if (!gscroll.expanded)
    gscroll.dash = dash->total_alloc - main_win_height;
  else {
    scrll = dash->module[gscroll.current].idx_data - 1;
    if (scrll >= exp_size && scrll >= offset + exp_size)
      offset = scrll < exp_size - 1 ? 0 : scrll - exp_size + 1;
    gscroll.module[gscroll.current].scroll = scrll;
    gscroll.module[gscroll.current].offset = offset;
  }
}


static void
load_ip_agent_list (void) {
  int type_ip = 0;

  int sel = gscroll.module[gscroll.current].scroll;
  GDashData item = dash->module[HOSTS].data[sel];

  if (!invalid_ipaddr (item.metrics->data, &type_ip))
    load_agent_list (main_win, item.metrics->data);
}


static void
expand_current_module (void) {
  if (gscroll.expanded && gscroll.current == HOSTS) {
    load_ip_agent_list ();
    return;
  }


  if (gscroll.expanded)
    return;

  reset_scroll_offsets (&gscroll);
  gscroll.expanded = 1;

  free_holder_by_module (&holder, gscroll.current);
  free_dashboard (dash);
  allocate_holder_by_module (gscroll.current);
  allocate_data ();
}


static int
expand_module_from_ypos (int y) {

  if (y < MAX_HEIGHT_HEADER || y == LINES - 1)
    return 1;

  if (set_module_from_mouse_event (&gscroll, dash, y))
    return 1;

  reset_scroll_offsets (&gscroll);
  gscroll.expanded = 1;

  free_holder_by_module (&holder, gscroll.current);
  free_dashboard (dash);
  allocate_holder_by_module (gscroll.current);
  allocate_data ();

  return 0;
}


static int
expand_on_mouse_click (void) {
  int ok_mouse;
  MEVENT event;

  ok_mouse = getmouse (&event);
  if (!conf.mouse_support || ok_mouse != OK)
    return 1;

  if (event.bstate & BUTTON1_CLICKED)
    return expand_module_from_ypos (event.y);
  return 1;
}


static void
scroll_down_expanded_module (void) {
  int exp_size = get_num_expanded_data_rows ();
  int *scroll_ptr, *offset_ptr;

  scroll_ptr = &gscroll.module[gscroll.current].scroll;
  offset_ptr = &gscroll.module[gscroll.current].offset;

  if (!gscroll.expanded)
    return;
  if (*scroll_ptr >= dash->module[gscroll.current].idx_data - 1)
    return;
  ++(*scroll_ptr);
  if (*scroll_ptr >= exp_size && *scroll_ptr >= *offset_ptr + exp_size)
    ++(*offset_ptr);
}


static void
scroll_up_expanded_module (void) {
  int *scroll_ptr, *offset_ptr;

  scroll_ptr = &gscroll.module[gscroll.current].scroll;
  offset_ptr = &gscroll.module[gscroll.current].offset;

  if (!gscroll.expanded)
    return;
  if (*scroll_ptr <= 0)
    return;
  --(*scroll_ptr);
  if (*scroll_ptr < *offset_ptr)
    --(*offset_ptr);
}


static void
scroll_up_dashboard (void) {
  gscroll.dash--;
}


static void
page_up_module (void) {
  int exp_size = get_num_expanded_data_rows ();
  int *scroll_ptr, *offset_ptr;

  scroll_ptr = &gscroll.module[gscroll.current].scroll;
  offset_ptr = &gscroll.module[gscroll.current].offset;

  if (!gscroll.expanded)
    return;

  *scroll_ptr -= exp_size;
  if (*scroll_ptr < 0)
    *scroll_ptr = 0;

  if (*scroll_ptr < *offset_ptr)
    *offset_ptr -= exp_size;
  if (*offset_ptr <= 0)
    *offset_ptr = 0;
}


static void
page_down_module (void) {
  int exp_size = get_num_expanded_data_rows ();
  int *scroll_ptr, *offset_ptr;

  scroll_ptr = &gscroll.module[gscroll.current].scroll;
  offset_ptr = &gscroll.module[gscroll.current].offset;

  if (!gscroll.expanded)
    return;

  *scroll_ptr += exp_size;
  if (*scroll_ptr >= dash->module[gscroll.current].idx_data - 1)
    *scroll_ptr = dash->module[gscroll.current].idx_data - 1;
  if (*scroll_ptr >= exp_size && *scroll_ptr >= *offset_ptr + exp_size)
    *offset_ptr += exp_size;
  if (*offset_ptr + exp_size >= dash->module[gscroll.current].idx_data - 1)
    *offset_ptr = dash->module[gscroll.current].idx_data - exp_size;
  if (*scroll_ptr < exp_size - 1)
    *offset_ptr = 0;
}



static int
render_search_dialog (int search) {
  if (render_find_dialog (main_win, &gscroll))
    return 1;

  pthread_mutex_lock (&gdns_thread.mutex);
  search = perform_next_find (holder, &gscroll);
  pthread_mutex_unlock (&gdns_thread.mutex);
  if (search != 0)
    return 1;

  free_dashboard (dash);
  allocate_data ();

  return 0;
}


static int
search_next_match (int search) {
  pthread_mutex_lock (&gdns_thread.mutex);
  search = perform_next_find (holder, &gscroll);
  pthread_mutex_unlock (&gdns_thread.mutex);
  if (search != 0)
    return 1;

  free_dashboard (dash);
  allocate_data ();
  return 0;
}


static void
tail_term (void) {
  pthread_mutex_lock (&gdns_thread.mutex);
  free_holder (&holder);
  pthread_cond_broadcast (&gdns_thread.not_empty);
  pthread_mutex_unlock (&gdns_thread.mutex);

  free_dashboard (dash);
  allocate_holder ();
  allocate_data ();

  term_size (main_win, &main_win_height);
}

static void
tail_html (void) {
  char *json = NULL;

  pthread_mutex_lock (&gdns_thread.mutex);
  free_holder (&holder);
  pthread_cond_broadcast (&gdns_thread.not_empty);
  pthread_mutex_unlock (&gdns_thread.mutex);

  allocate_holder ();

  pthread_mutex_lock (&gdns_thread.mutex);
  json = get_json (holder, 0);
  pthread_mutex_unlock (&gdns_thread.mutex);

  if (json == NULL)
    return;

  pthread_mutex_lock (&gwswriter->mutex);
  broadcast_holder (gwswriter->fd, json, strlen (json));
  pthread_mutex_unlock (&gwswriter->mutex);
  free (json);
}


static void
fast_forward_client (int listener) {
  char *json = NULL;

  pthread_mutex_lock (&gdns_thread.mutex);
  json = get_json (holder, 0);
  pthread_mutex_unlock (&gdns_thread.mutex);

  if (json == NULL)
    return;

  pthread_mutex_lock (&gwswriter->mutex);
  send_holder_to_client (gwswriter->fd, listener, json, strlen (json));
  pthread_mutex_unlock (&gwswriter->mutex);
  free (json);
}



void
read_client (void *ptr_data) {
  GWSReader *reader = (GWSReader *) ptr_data;


  if (reader->fd == -1)
    return;

  pthread_mutex_lock (&reader->mutex);
  set_self_pipe (reader->self_pipe);
  pthread_mutex_unlock (&reader->mutex);

  while (1) {

    if (read_fifo (reader, fast_forward_client))
      break;
  }
  close (reader->fd);
}


static void
parse_tail_follow (GLog * glog, FILE * fp) {
#ifdef WITH_GETLINE
  char *buf = NULL;
#else
  char buf[LINE_BUFFER] = { 0 };
#endif

  glog->bytes = 0;
#ifdef WITH_GETLINE
  while ((buf = fgetline (fp)) != NULL) {
#else
  while (fgets (buf, LINE_BUFFER, fp) != NULL) {
#endif
    pthread_mutex_lock (&gdns_thread.mutex);
    pre_process_log (glog, buf, 0);
    pthread_mutex_unlock (&gdns_thread.mutex);
    glog->bytes += strlen (buf);
#ifdef WITH_GETLINE
    free (buf);
#endif


    if (++glog->read % MAX_BATCH_LINES == 0)
      break;
  }
}

static void
verify_inode (FILE * fp, GLog * glog) {
  struct stat fdstat;

  if (stat (glog->filename, &fdstat) == -1)
    FATAL ("Unable to stat the specified log file '%s'. %s", glog->filename, strerror (errno));

  glog->size = fdstat.st_size;




  if (fdstat.st_ino != glog->inode || glog->snippet[0] == '\0' || 0 == glog->size) {
    glog->length = glog->bytes = 0;
    set_initial_persisted_data (glog, fp, glog->filename);
  }
  glog->inode = fdstat.st_ino;
}





static int
perform_tail_follow (GLog * glog) {
  FILE *fp = NULL;
  char buf[READ_BYTES + 1] = { 0 };
  uint16_t len = 0;
  uint64_t length = 0;

  if (glog->filename[0] == '-' && glog->filename[1] == '\0') {
    parse_tail_follow (glog, glog->pipe);

    if (0 == glog->bytes)
      return 0;

    glog->length += glog->bytes;
    goto out;
  }

  length = file_size (glog->filename);




  if (length == glog->length)
    return 0;

  if (!(fp = fopen (glog->filename, "r")))
    FATAL ("Unable to read the specified log file '%s'. %s", glog->filename, strerror (errno));

  verify_inode (fp, glog);

  len = MIN (glog->snippetlen, length);


  if ((fread (buf, len, 1, fp)) != 1 && ferror (fp))
    FATAL ("Unable to fread the specified log file '%s'", glog->filename);





  if (glog->snippet[0] != '\0' && buf[0] != '\0' && memcmp (glog->snippet, buf, len) != 0)
    glog->length = glog->bytes = 0;

  if (!fseeko (fp, glog->length, SEEK_SET))
    parse_tail_follow (glog, fp);
  fclose (fp);

  glog->length += glog->bytes;


  if (glog->inode) {
    glog->lp.line = glog->read;
    glog->lp.size = glog->size;
    ht_insert_last_parse (glog->inode, glog->lp);
  }

out:

  return 1;
}


static void
tail_loop_html (Logs * logs) {
  struct timespec refresh = {
    .tv_sec = conf.html_refresh ? conf.html_refresh : HTML_REFRESH,
    .tv_nsec = 0,
  };
  int i = 0, ret = 0;

  while (1) {
    if (conf.stop_processing)
      break;

    for (i = 0, ret = 0; i < logs->size; ++i)
      ret |= perform_tail_follow (&logs->glog[i]);

    if (1 == ret)
      tail_html ();

    if (nanosleep (&refresh, NULL) == -1 && errno != EINTR)
      FATAL ("nanosleep: %s", strerror (errno));
  }
}


static void
process_html (Logs * logs, const char *filename) {

  pthread_mutex_lock (&gdns_thread.mutex);
  output_html (holder, filename);
  pthread_mutex_unlock (&gdns_thread.mutex);


  if (!conf.real_time_html)
    return;

  if (logs->load_from_disk_only)
    return;

  pthread_mutex_lock (&gwswriter->mutex);
  gwswriter->fd = open_fifoin ();
  pthread_mutex_unlock (&gwswriter->mutex);


  if (gwswriter->fd == -1)
    return;

  set_ready_state ();
  tail_loop_html (logs);
  close (gwswriter->fd);
}


static int
next_module (void) {
  int next = -1;

  if ((next = get_next_module (gscroll.current)) == -1)
    return 1;

  gscroll.current = next;
  if (!conf.no_tab_scroll)
    gscroll.dash = get_module_index (gscroll.current) * DASH_COLLAPSED;

  return 0;
}


static int
previous_module (void) {
  int prev = -1;

  if ((prev = get_prev_module (gscroll.current)) == -1)
    return 1;

  gscroll.current = prev;
  if (!conf.no_tab_scroll)
    gscroll.dash = get_module_index (gscroll.current) * DASH_COLLAPSED;

  return 0;
}


static void
window_resize (void) {
  endwin ();
  refresh ();
  werase (header_win);
  werase (main_win);
  werase (stdscr);
  term_size (main_win, &main_win_height);
  refresh ();
}



static void
render_sort_dialog (void) {
  load_sort_win (main_win, gscroll.current, &module_sort[gscroll.current]);

  pthread_mutex_lock (&gdns_thread.mutex);
  free_holder (&holder);
  pthread_cond_broadcast (&gdns_thread.not_empty);
  pthread_mutex_unlock (&gdns_thread.mutex);

  free_dashboard (dash);
  allocate_holder ();
  allocate_data ();
}

static void
term_tail_logs (Logs * logs) {
  struct timespec ts = {.tv_sec = 0,.tv_nsec = 200000000 };
  uint32_t offset = 0;
  int i, ret;

  for (i = 0, ret = 0; i < logs->size; ++i)
    ret |= perform_tail_follow (&logs->glog[i]);

  if (1 == ret) {
    tail_term ();
    offset = *logs->processed - logs->offset;
    render_screens (offset);
  }
  if (nanosleep (&ts, NULL) == -1 && errno != EINTR) {
    FATAL ("nanosleep: %s", strerror (errno));
  }
}


static void
get_keys (Logs * logs) {
  int search = 0;
  int c, quit = 1;
  uint32_t offset = 0;

  while (quit) {
    if (conf.stop_processing)
      break;

    offset = *logs->processed - logs->offset;
    c = wgetch (stdscr);
    switch (c) {
    case 'q':
      if (!gscroll.expanded) {
        quit = 0;
        break;
      }
      if (collapse_current_module () == 0)
        render_screens (offset);
      break;
    case KEY_F (1):
    case '?':
    case 'h':
      load_help_popup (main_win);
      render_screens (offset);
      break;
    case 49:

      if (set_module_to (&gscroll, VISITORS) == 0)
        render_screens (offset);
      break;
    case 50:

      if (set_module_to (&gscroll, REQUESTS) == 0)
        render_screens (offset);
      break;
    case 51:

      if (set_module_to (&gscroll, REQUESTS_STATIC) == 0)
        render_screens (offset);
      break;
    case 52:

      if (set_module_to (&gscroll, NOT_FOUND) == 0)
        render_screens (offset);
      break;
    case 53:

      if (set_module_to (&gscroll, HOSTS) == 0)
        render_screens (offset);
      break;
    case 54:

      if (set_module_to (&gscroll, OS) == 0)
        render_screens (offset);
      break;
    case 55:

      if (set_module_to (&gscroll, BROWSERS) == 0)
        render_screens (offset);
      break;
    case 56:

      if (set_module_to (&gscroll, VISIT_TIMES) == 0)
        render_screens (offset);
      break;
    case 57:

      if (set_module_to (&gscroll, VIRTUAL_HOSTS) == 0)
        render_screens (offset);
      break;
    case 48:

      if (set_module_to (&gscroll, REFERRERS) == 0)
        render_screens (offset);
      break;
    case 33:

      if (set_module_to (&gscroll, REFERRING_SITES) == 0)
        render_screens (offset);
      break;
    case 64:

      if (set_module_to (&gscroll, KEYPHRASES) == 0)
        render_screens (offset);
      break;
    case 35:

      if (set_module_to (&gscroll, STATUS_CODES) == 0)
        render_screens (offset);
      break;
    case 36:

      if (set_module_to (&gscroll, REMOTE_USER) == 0)
        render_screens (offset);
      break;
    case 37:

      if (set_module_to (&gscroll, CACHE_STATUS) == 0)
        render_screens (offset);
      break;
#ifdef HAVE_GEOLOCATION
    case 94:

      if (set_module_to (&gscroll, GEO_LOCATION) == 0)
        render_screens (offset);
      break;
#endif
    case 38:

      if (set_module_to (&gscroll, MIME_TYPE) == 0)
        render_screens (offset);
      break;
    case 42:

      if (set_module_to (&gscroll, TLS_TYPE) == 0)
        render_screens (offset);
      break;
    case 9:

      collapse_current_module ();
      if (next_module () == 0)
        render_screens (offset);
      break;
    case 353:

      collapse_current_module ();
      if (previous_module () == 0)
        render_screens (offset);
      break;
    case 'g':
      scroll_to_first_line ();
      display_content (main_win, dash, &gscroll);
      break;
    case 'G':
      scroll_to_last_line ();
      display_content (main_win, dash, &gscroll);
      break;

    case KEY_RIGHT:
    case 0x0a:
    case 0x0d:
    case 32:
    case 79:
    case 111:
    case KEY_ENTER:
      expand_current_module ();
      display_content (main_win, dash, &gscroll);
      break;
    case KEY_DOWN:
      if ((gscroll.dash + main_win_height) < dash->total_alloc) {
        gscroll.dash++;
        display_content (main_win, dash, &gscroll);
      }
      break;
    case KEY_MOUSE:
      if (expand_on_mouse_click () == 0)
        render_screens (offset);
      break;
    case 106:
      scroll_down_expanded_module ();
      display_content (main_win, dash, &gscroll);
      break;

    case KEY_UP:
      if (gscroll.dash > 0) {
        scroll_up_dashboard ();
        display_content (main_win, dash, &gscroll);
      }
      break;
    case 2:
    case 339:
      page_up_module ();
      display_content (main_win, dash, &gscroll);
      break;
    case 6:
    case 338:
      page_down_module ();
      display_content (main_win, dash, &gscroll);
      break;
    case 107:
      scroll_up_expanded_module ();
      display_content (main_win, dash, &gscroll);
      break;
    case 'n':
      if (search_next_match (search) == 0)
        render_screens (offset);
      break;
    case '/':
      if (render_search_dialog (search) == 0)
        render_screens (offset);
      break;
    case 99:
      if (conf.no_color)
        break;
      load_schemes_win (main_win);
      free_dashboard (dash);
      allocate_data ();
      set_wbkgd (main_win, header_win);
      render_screens (offset);
      break;
    case 115:
      render_sort_dialog ();
      render_screens (offset);
      break;
    case 269:
    case KEY_RESIZE:
      window_resize ();
      render_screens (offset);
      break;
    default:
      if (logs->load_from_disk_only)
        break;
      term_tail_logs (logs);
      break;
    }
  }
}





static void
set_accumulated_time (void) {
  time_t elapsed = end_proc - start_proc;
  elapsed = (!elapsed) ? !elapsed : elapsed;
  ht_inc_cnt_overall ("processing_time", elapsed);
}



static void
init_processing (void) {

  verify_panels ();

  pthread_mutex_lock (&parsing_spinner->mutex);
  parsing_spinner->label = "SETTING UP STORAGE";
  pthread_mutex_unlock (&parsing_spinner->mutex);

  init_storage ();
  insert_methods_protocols ();
  set_spec_date_format ();
}


static void
standard_output (Logs * logs) {
  char *csv = NULL, *json = NULL, *html = NULL;


  if (find_output_type (&csv, "csv", 1) == 0)
    output_csv (holder, csv);

  if (find_output_type (&json, "json", 1) == 0)
    output_json (holder, json);

  if (find_output_type (&html, "html", 1) == 0 || conf.output_format_idx == 0)
    process_html (logs, html);

  free (csv);
  free (html);
  free (json);
}


static void
curses_output (Logs * logs) {
  allocate_data ();
  if (!conf.skip_term_resolver)
    gdns_thread_create ();

  clean_stdscrn ();
  render_screens (0);

  get_keys (logs);
}


static void
set_locale (void) {
  char *loc_ctype;

  setlocale (LC_ALL, "");
  bindtextdomain (PACKAGE, LOCALEDIR);
  textdomain (PACKAGE);

  loc_ctype = getenv ("LC_CTYPE");
  if (loc_ctype != NULL)
    setlocale (LC_CTYPE, loc_ctype);
  else if ((loc_ctype = getenv ("LC_ALL")))
    setlocale (LC_CTYPE, loc_ctype);
  else
    setlocale (LC_CTYPE, "");
}





static int
open_term (char **buf) {
  const char *term = "/dev/tty";

  if (!isatty (STDERR_FILENO) || (term = ttyname (STDERR_FILENO)) == 0) {
    if (!isatty (STDOUT_FILENO) || (term = ttyname (STDOUT_FILENO)) == 0) {
      if (!isatty (STDIN_FILENO) || (term = ttyname (STDIN_FILENO)) == 0) {
        term = "/dev/tty";
      }
    }
  }
  *buf = xstrdup (term);

  return open (term, O_RDONLY);
}




static FILE *
set_pipe_stdin (void) {
  char *term = NULL;
  FILE *pipe = stdin;
  int term_fd = -1;
  int pipe_fd = -1;
# 1338 "project/goaccess/src/goaccess.c"
  if ((term_fd = open_term (&term)) == -1)
    goto out1;

  if ((pipe_fd = dup (fileno (stdin))) == -1)
    FATAL ("Unable to dup stdin: %s", strerror (errno));

  pipe = fdopen (pipe_fd, "r");
  if (freopen (term, "r", stdin) == 0)
    FATAL ("Unable to open input from TTY");
  if (fileno (stdin) != 0)
    (void) dup2 (fileno (stdin), 0);

  add_dash_filename ();

out1:



  if (conf.output_stdout && !conf.real_time_html)
    goto out2;


  if (pipe_fd == -1)
    pipe_fd = fileno (pipe);
  if (fcntl (pipe_fd, F_SETFL, fcntl (pipe_fd, F_GETFL, 0) | O_NONBLOCK) == -1)
    FATAL ("Unable to set fd as non-blocking: %s.", strerror (errno));

out2:

  free (term);

  return pipe;
}



static void
set_io (FILE ** pipe) {


  if (!isatty (STDOUT_FILENO) || conf.output_format_idx > 0)
    conf.output_stdout = 1;

  if (!isatty (STDIN_FILENO))
    *pipe = set_pipe_stdin ();
}


static void
parse_cmd_line (int argc, char **argv) {
  read_option_args (argc, argv);
  set_default_static_files ();
}

static void
handle_signal_action (GO_UNUSED int sig_number) {
  fprintf (stderr, "\nSIGINT caught!\n");
  fprintf (stderr, "Closing GoAccess...\n");

  stop_ws_server (gwswriter, gwsreader);
  conf.stop_processing = 1;

  if (!conf.output_stdout) {
    cleanup (EXIT_SUCCESS);
    exit (EXIT_SUCCESS);
  }
}

static void
setup_thread_signals (void) {
  struct sigaction act;

  act.sa_handler = handle_signal_action;
  sigemptyset (&act.sa_mask);
  act.sa_flags = 0;

  sigaction (SIGINT, &act, NULL);
  sigaction (SIGTERM, &act, NULL);
  signal (SIGPIPE, SIG_IGN);


  pthread_sigmask (SIG_SETMASK, &oldset, NULL);
}

static void
block_thread_signals (void) {


  sigset_t sigset;
  sigemptyset (&sigset);
  sigaddset (&sigset, SIGINT);
  sigaddset (&sigset, SIGPIPE);
  sigaddset (&sigset, SIGTERM);
  pthread_sigmask (SIG_BLOCK, &sigset, &oldset);
}


static Logs *
initializer (void) {
  int i;
  FILE *pipe = NULL;
  Logs *logs;


  if (conf.username)
    drop_permissions ();


  gscroll.current = init_modules ();

  set_locale ();

  parse_browsers_file ();

#ifdef HAVE_GEOLOCATION
  init_geoip ();
#endif

  set_io (&pipe);


  if (!(logs = init_logs (conf.filenames_idx)))
    FATAL (ERR_NO_DATA_PASSED);

  set_signal_data (logs);

  for (i = 0; i < logs->size; ++i)
    if (logs->glog[i].filename[0] == '-' && logs->glog[i].filename[1] == '\0')
      logs->glog[i].pipe = pipe;


  parsing_spinner = new_gspinner ();
  parsing_spinner->processed = &(logs->processed);
  parsing_spinner->filename = &(logs->filename);


  srand (getpid ());
  init_pre_storage (logs);

  return logs;
}

static char *
generate_fifo_name (void) {
  char fname[RAND_FN];
  const char *tmp;
  char *path;
  size_t len;

  if ((tmp = getenv ("TMPDIR")) == NULL)
    tmp = "/tmp";

  memset (fname, 0, sizeof (fname));
  genstr (fname, RAND_FN - 1);

  len = snprintf (NULL, 0, "%s/goaccess_fifo_%s", tmp, fname) + 1;
  path = xmalloc (len);
  snprintf (path, len, "%s/goaccess_fifo_%s", tmp, fname);

  return path;
}

static int
spawn_ws (void) {
  gwswriter = new_gwswriter ();
  gwsreader = new_gwsreader ();

  if (!conf.fifo_in)
    conf.fifo_in = generate_fifo_name ();
  if (!conf.fifo_out)
    conf.fifo_out = generate_fifo_name ();


  if ((gwsreader->fd = open_fifoout ()) == -1) {
    LOG (("Unable to open FIFO for read.\n"));
    return 1;
  }

  if (conf.daemonize)
    daemonize ();
  setup_ws_server (gwswriter, gwsreader);

  return 0;
}

static void
set_standard_output (void) {
  int html = 0;


  if (find_output_type (NULL, "html", 0) == 0 || conf.output_format_idx == 0)
    html = 1;


  if (html && conf.real_time_html) {
    if (spawn_ws ())
      return;
  }
  setup_thread_signals ();


  ui_spinner_create (parsing_spinner);
}


static void
set_curses (Logs * logs, int *quit) {
  const char *err_log = NULL;

  setup_thread_signals ();
  set_input_opts ();
  if (conf.no_color || has_colors () == FALSE) {
    conf.color_scheme = NO_COLOR;
    conf.no_color = 1;
  } else {
    start_color ();
  }
  init_colors (0);
  init_windows (&header_win, &main_win);
  set_curses_spinner (parsing_spinner);


  if (!conf.read_stdin && (verify_formats () || conf.load_conf_dlg)) {
    refresh ();
    *quit = render_confdlg (logs, parsing_spinner);
    clear ();
  }

  else if (conf.read_stdin && (err_log = verify_formats ())) {
    FATAL ("%s", err_log);
  }

  else {
    ui_spinner_create (parsing_spinner);
  }
}


int
main (int argc, char **argv) {
  Logs *logs = NULL;
  int quit = 0, ret = 0;

  block_thread_signals ();
  setup_sigsegv_handler ();


  verify_global_config (argc, argv);
  parse_conf_file (&argc, &argv);
  parse_cmd_line (argc, argv);

  logs = initializer ();


  if (conf.process_and_exit) {
  }

  else if (conf.output_stdout) {
    set_standard_output ();
  }

  else {
    set_curses (logs, &quit);
  }


  if (quit)
    goto clean;

  init_processing ();


  time (&start_proc);
  parsing_spinner->label = "PARSING";

  if ((ret = parse_log (logs, 0))) {
    end_spinner ();
    goto clean;
  }

  if (conf.stop_processing)
    goto clean;
  logs->offset = *logs->processed;

  parsing_spinner->label = "RENDERING";

  gdns_init ();
  parse_initial_sort ();
  allocate_holder ();

  end_spinner ();
  time (&end_proc);

  set_accumulated_time ();
  if (conf.process_and_exit) {
  }

  else if (conf.output_stdout) {
    standard_output (logs);
  }

  else {
    curses_output (logs);
  }


clean:
  cleanup (ret);

  return ret ? EXIT_FAILURE : EXIT_SUCCESS;
}
