# 1 "project/radare2/libr/io/p/io_debug.c"


#include <errno.h>
#include <r_io.h>
#include <r_lib.h>
#include <r_util.h>
#include <r_cons.h>
#include <r_debug.h>
#include <string.h>

#if __linux__ || __APPLE__ || __WINDOWS__ || __NetBSD__ || __KFBSD__ || __OpenBSD__
#define DEBUGGER_SUPPORTED 1
#else
#define DEBUGGER_SUPPORTED 0
#endif

#if DEBUGGER && DEBUGGER_SUPPORTED
#define MAGIC_EXIT 123

#include <signal.h>
#if __UNIX__
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#endif

#if __APPLE__
#if !__POWERPC__
#include <spawn.h>
#endif
#include <sys/types.h>
#include <sys/wait.h>
#include <mach/exception_types.h>
#include <mach/mach_init.h>
#include <mach/mach_port.h>
#include <mach/mach_traps.h>
#include <mach/task.h>
#include <mach/task_info.h>
#include <mach/thread_act.h>
#include <mach/thread_info.h>
#include <mach/vm_map.h>
#include <mach-o/loader.h>
#include <mach-o/nlist.h>
#endif

#if __WINDOWS__
#include <windows.h>
#include <tlhelp32.h>
#include <winbase.h>
#include <psapi.h>
#include <r_util/r_w32dw.h>
#endif







#if __WINDOWS__
typedef struct {
 HANDLE hnd;
 ut64 winbase;
} RIOW32;

static int setup_tokens(void) {
 HANDLE tok = NULL;
 TOKEN_PRIVILEGES tp;
 DWORD err = -1;

 if (!OpenProcessToken (GetCurrentProcess (), TOKEN_ADJUST_PRIVILEGES, &tok)) {
  goto err_enable;
 }
 tp.PrivilegeCount = 1;
 if (!LookupPrivilegeValue (NULL, SE_DEBUG_NAME, &tp.Privileges[0].Luid)) {
  goto err_enable;
 }

 tp.Privileges[0].Attributes = 0;
 if (!AdjustTokenPrivileges (tok, 0, &tp, sizeof (tp), NULL, NULL)) {
  goto err_enable;
 }
 err = 0;
err_enable:
 if (tok) {
  CloseHandle (tok);
 }
 if (err) {
  r_sys_perror ("setup_tokens");
 }
 return err;
}

struct __createprocess_params {
 LPCTSTR appname;
 LPTSTR cmdline;
 PROCESS_INFORMATION *pi;
};

static int __createprocess_wrap(void *params) {
 STARTUPINFO si = { 0 };

 struct __createprocess_params *p = params;
 return CreateProcess (p->appname, p->cmdline, NULL, NULL, FALSE,
  CREATE_NEW_CONSOLE | DEBUG_ONLY_THIS_PROCESS,
  NULL, NULL, &si, p->pi);
}

static int fork_and_ptraceme(RIO *io, int bits, const char *cmd) {
 PROCESS_INFORMATION pi;
 STARTUPINFO si = { 0 };
 si.cb = sizeof (si);
 DEBUG_EVENT de;
 int pid, tid;
 if (!*cmd) {
  return -1;
 }
 setup_tokens ();
 if (!io->dbgwrap) {
  io->dbgwrap = r_w32dw_new ();
 }
 char *_cmd = io->args ? r_str_appendf (strdup (cmd), " %s", io->args) :
  strdup (cmd);
 char **argv = r_str_argv (_cmd, NULL);
 char *cmdline = NULL;

 int i = 0;
 while (argv[i]) {
  r_str_arg_unescape (argv[i]);
  cmdline = r_str_appendf (cmdline, "\"%s\" ", argv[i]);
  i++;
 }

 LPTSTR appname_ = r_sys_conv_utf8_to_win (argv[0]);
 LPTSTR cmdline_ = r_sys_conv_utf8_to_win (cmdline);
 free (cmdline);
 struct __createprocess_params p = {appname_, cmdline_, &pi};
 RW32Dw *wrap = (RW32Dw *)io->dbgwrap;
 wrap->params.type = W32_CALL_FUNC;
 wrap->params.func.func = __createprocess_wrap;
 wrap->params.func.user = &p;
 r_w32dw_waitret (wrap);
 if (!r_w32dw_ret (wrap)) {
  (void)r_w32dw_err (wrap);
  r_sys_perror ("fork_and_ptraceme/CreateProcess");
  free (appname_);
  free (cmdline_);
  return -1;
 }
 free (appname_);
 free (cmdline_);
 r_str_argv_free (argv);


 pid = pi.dwProcessId;
 tid = pi.dwThreadId;


 wrap->params.type = W32_WAIT;
 wrap->params.wait.wait_time = 10000;
 wrap->params.wait.de = &de;
 r_w32dw_waitret (wrap);
 if (!r_w32dw_ret (wrap)) {
  goto err_fork;
 }


 if (de.dwDebugEventCode != CREATE_PROCESS_DEBUG_EVENT) {
  eprintf ("exception code 0x%04x\n", (ut32)de.dwDebugEventCode);
  goto err_fork;
 }

 CloseHandle (de.u.CreateProcessInfo.hFile);

 wrap->pi.hProcess = pi.hProcess;
 wrap->pi.hThread = pi.hThread;
 wrap->winbase = (ut64)de.u.CreateProcessInfo.lpBaseOfImage;

 eprintf ("Spawned new process with pid %d, tid = %d\n", pid, tid);
 return pid;

err_fork:
 eprintf ("Error: Cannot create new process.\n");
 TerminateProcess (pi.hProcess, 1);
 r_w32dw_free (io->dbgwrap);
 io->dbgwrap = NULL;
 CloseHandle (pi.hThread);
 CloseHandle (pi.hProcess);
 return -1;
}
#else

#if (__APPLE__ && __POWERPC__) || !__APPLE__

#if __APPLE__ || __BSD__
static void inferior_abort_handler(int pid) {
 eprintf ("Inferior received signal SIGABRT. Executing BKPT.\n");
}
#endif

static void trace_me(void) {
#if __APPLE__
 r_sys_signal (SIGTRAP, SIG_IGN);
#endif
#if __APPLE__ || __BSD__

 r_sys_signal (SIGABRT, inferior_abort_handler);
 if (ptrace (PT_TRACE_ME, 0, 0, 0) != 0) {
  r_sys_perror ("ptrace-traceme");
 }
#if __APPLE__
 ptrace (PT_SIGEXC, r_sys_getpid (), NULL, 0);
#endif
#else
 if (ptrace (PTRACE_TRACEME, 0, NULL, NULL) != 0) {
  r_sys_perror ("ptrace-traceme");
  exit (MAGIC_EXIT);
 }
#endif
}
#endif

#if __APPLE__ && !__POWERPC__
static void handle_posix_error(int err) {
 switch (err) {
 case 0:

  break;
 case 22:
  eprintf ("posix_spawnp: Invalid argument\n");
  break;
 case 86:
  eprintf ("Unsupported architecture. Please specify -b 32\n");
  break;
 default:
  eprintf ("posix_spawnp: unknown error %d\n", err);
  perror ("posix_spawnp");
  break;
 }
}
#endif

static RRunProfile* _get_run_profile(RIO *io, int bits, char **argv) {
 char *expr = NULL;
 int i;
 RRunProfile *rp = r_run_new (NULL);
 if (!rp) {
  return NULL;
 }
 for (i = 0; argv[i]; i++) {
  rp->_args[i] = argv[i];
 }
 rp->_args[i] = NULL;
 if (!argv[0]) {
  r_run_free (rp);
  return NULL;
 }
 rp->_program = strdup (argv[0]);

 rp->_dodebug = true;
 if (io->runprofile && *io->runprofile) {
  if (!r_run_parsefile (rp, io->runprofile)) {
   eprintf ("Can't find profile '%s'\n", io->runprofile);
   r_run_free (rp);
   return NULL;
  }
  if (strstr (io->runprofile, R_SYS_DIR ".rarun2.")) {
   (void)r_file_rm (io->runprofile);
  }
 } else if (io->envprofile) {
  if (!r_run_parse (rp, io->envprofile)) {
   eprintf ("Can't parse default rarun2 profile\n");
   r_run_free (rp);
   return NULL;
  }
 }
 if (bits == 64) {
  r_run_parseline (rp, expr=strdup ("bits=64"));
 } else if (bits == 32) {
  r_run_parseline (rp, expr=strdup ("bits=32"));
 }
 free (expr);
 if (r_run_config_env (rp)) {
  eprintf ("Can't config the environment.\n");
  r_run_free (rp);
  return NULL;
 }
 return rp;
}

#if __APPLE__ && !__POWERPC__

static void handle_posix_redirection(RRunProfile *rp, posix_spawn_file_actions_t *fileActions) {
 const int mode = S_IRUSR | S_IWUSR;
 if (rp->_stdin) {
  posix_spawn_file_actions_addopen (fileActions, STDIN_FILENO, rp->_stdin, O_RDONLY, mode);
 }
 if (rp->_stdout) {
  posix_spawn_file_actions_addopen (fileActions, STDOUT_FILENO, rp->_stdout, O_WRONLY, mode);
 }
 if (rp->_stderr) {
  posix_spawn_file_actions_addopen (fileActions, STDERR_FILENO, rp->_stderr, O_WRONLY, mode);
 }
}


static int fork_and_ptraceme_for_mac(RIO *io, int bits, const char *cmd) {
 pid_t p = -1;
 char **argv;
 posix_spawn_file_actions_t fileActions;
 ut32 ps_flags = POSIX_SPAWN_SETSIGDEF | POSIX_SPAWN_SETSIGMASK;
 sigset_t no_signals;
 sigset_t all_signals;
 size_t copied = 1;
 cpu_type_t cpu = CPU_TYPE_ANY;
 posix_spawnattr_t attr = {0};
 posix_spawnattr_init (&attr);

 sigemptyset (&no_signals);
 sigfillset (&all_signals);
 posix_spawnattr_setsigmask (&attr, &no_signals);
 posix_spawnattr_setsigdefault (&attr, &all_signals);

 posix_spawn_file_actions_init (&fileActions);
 posix_spawn_file_actions_addinherit_np (&fileActions, STDIN_FILENO);
 posix_spawn_file_actions_addinherit_np (&fileActions, STDOUT_FILENO);
 posix_spawn_file_actions_addinherit_np (&fileActions, STDERR_FILENO);

 ps_flags |= POSIX_SPAWN_CLOEXEC_DEFAULT;
 ps_flags |= POSIX_SPAWN_START_SUSPENDED;
#define _POSIX_SPAWN_DISABLE_ASLR 0x0100
 int ret;
 argv = r_str_argv (cmd, NULL);
 if (!argv) {
  posix_spawn_file_actions_destroy (&fileActions);
  return -1;
 }
 RRunProfile *rp = _get_run_profile (io, bits, argv);
 if (!rp) {
  r_str_argv_free (argv);
  posix_spawn_file_actions_destroy (&fileActions);
  return -1;
 }
 handle_posix_redirection (rp, &fileActions);
 if (rp->_args[0]) {
  if (!rp->_aslr) {
   ps_flags |= _POSIX_SPAWN_DISABLE_ASLR;
  }
#if __x86_64__
  if (rp->_bits == 32) {
   cpu = CPU_TYPE_I386;
  }
#endif
  (void)posix_spawnattr_setflags (&attr, ps_flags);
  posix_spawnattr_setbinpref_np (&attr, 1, &cpu, &copied);
  ret = posix_spawnp (&p, rp->_args[0], &fileActions, &attr, rp->_args, NULL);
  handle_posix_error (ret);
 }
 r_str_argv_free (argv);
 r_run_free (rp);
 posix_spawn_file_actions_destroy (&fileActions);
 return p;
}
#endif

#if (!(__APPLE__ && !__POWERPC__))
typedef struct fork_child_data_t {
 RIO *io;
 int bits;
 const char *cmd;
} fork_child_data;

static void fork_child_callback(void *user) {
 fork_child_data *data = user;
 char **argv = r_str_argv (data->cmd, NULL);
 if (!argv) {
  exit (1);
 }
 r_sys_clearenv ();
 RRunProfile *rp = _get_run_profile (data->io, data->bits, argv);
 if (!rp) {
  r_str_argv_free (argv);
  exit (1);
 }
 trace_me ();
 r_run_start (rp);
 r_run_free (rp);
 r_str_argv_free (argv);
 exit (1);
}

static int fork_and_ptraceme_for_unix(RIO *io, int bits, const char *cmd) {
 int ret, status, child_pid;
 void *bed = NULL;
 fork_child_data child_data;
 child_data.io = io;
 child_data.bits = bits;
 child_data.cmd = cmd;
 child_pid = r_io_ptrace_fork (io, fork_child_callback, &child_data);
 if (child_pid == -1 || child_pid == 0) {
  perror ("fork_and_ptraceme");
  return -1;
 } do {
  ret = waitpid (child_pid, &status, WNOHANG);
  if (ret == -1) {
   perror ("waitpid");
   return -1;
  }
  bed = r_cons_sleep_begin ();
  usleep (100000);
  r_cons_sleep_end (bed);
 } while (ret != child_pid && !r_cons_is_breaked ());
 if (!WIFSTOPPED (status)) {
  return -1;
 }
 if (WEXITSTATUS (status) == MAGIC_EXIT || r_cons_is_breaked ()) {
  eprintf ("Killing child process %d due to an error\n", (int)child_pid);
  kill (child_pid, SIGSTOP);
  return -1;
 }
 return child_pid;
}
#endif

static int fork_and_ptraceme(RIO *io, int bits, const char *cmd) {

 char *_eff_cmd = io->args ? r_str_appendf (strdup (cmd), " %s", io->args) : strdup(cmd);
 int r = 0;

#if __APPLE__ && !__POWERPC__
 r = fork_and_ptraceme_for_mac (io, bits, _eff_cmd);
#else
 r = fork_and_ptraceme_for_unix (io, bits, _eff_cmd);
#endif
 free (_eff_cmd);
 return r;
}
#endif

static bool __plugin_open(RIO *io, const char *file, bool many) {
 if (!strncmp (file, "waitfor://", 10)) {
  return true;
 }
 if (!strncmp (file, "pidof://", 8)) {
  return true;
 }
 return (!strncmp (file, "dbg://", 6) && file[6]);
}

#include <r_core.h>
static int get_pid_of(RIO *io, const char *procname) {
 RCore *c = io->corebind.core;
 if (c && c->dbg && c->dbg->h) {
  RListIter *iter;
  RDebugPid *proc;
  RDebug *d = c->dbg;
  RList *pids = d->h->pids (d, 0);
  r_list_foreach (pids, iter, proc) {
   if (strstr (proc->path, procname)) {
    eprintf ("Matching PID %d %s\n", proc->pid, proc->path);
    return proc->pid;
   }
  }
 } else {
  eprintf ("Cannot enumerate processes\n");
 }
 return -1;
}

static RIODesc *__open(RIO *io, const char *file, int rw, int mode) {
 RIOPlugin *_plugin;
 RIODesc *ret = NULL;
 char uri[128];
 if (!strncmp (file, "waitfor://", 10)) {
  const char *procname = file + 10;
  eprintf ("Waiting for %s\n", procname);
  while (true) {
   int target_pid = get_pid_of (io, procname);
   if (target_pid != -1) {
    snprintf (uri, sizeof (uri), "dbg://%d", target_pid);
    file = uri;
    break;
   }
   r_sys_usleep (100);
  }
 } else if (!strncmp (file, "pidof://", 8)) {
  const char *procname = file + 8;
  int target_pid = get_pid_of (io, procname);
  if (target_pid == -1) {
   eprintf ("Cannot find matching process for %s\n", file);
   return NULL;
  }
  snprintf (uri, sizeof (uri), "dbg://%d", target_pid);
  file = uri;
 }
 if (__plugin_open (io, file, 0)) {
  const char *pidfile = file + 6;
  char *endptr;
  int pid = (int)strtol (pidfile, &endptr, 10);
  if (endptr == pidfile || pid < 0) {
   pid = -1;
  }
  if (pid == -1) {
   pid = fork_and_ptraceme (io, io->bits, file + 6);
   if (pid == -1) {
    return NULL;
   }
#if __WINDOWS__
   sprintf (uri, "w32dbg://%d", pid);
   _plugin = r_io_plugin_resolve (io, (const char *)uri, false);
   if (!_plugin || !_plugin->open) {
    return NULL;
   }
   if ((ret = _plugin->open (io, uri, rw, mode))) {
    RCore *c = io->corebind.core;
    RW32Dw *wrap = (RW32Dw *)ret->data;
    c->dbg->user = wrap;
   }
#elif __APPLE__
   sprintf (uri, "smach://%d", pid);
   _plugin = r_io_plugin_resolve (io, (const char *)uri + 1, false);
   if (!_plugin || !_plugin->open || !_plugin->close) {
    return NULL;
   }
   ret = _plugin->open (io, uri, rw, mode);
#else

   sprintf (uri, "ptrace://%d", pid);
   _plugin = r_io_plugin_resolve (io, (const char *)uri, false);
   if (!_plugin || !_plugin->open) {
    return NULL;
   }
   ret = _plugin->open (io, uri, rw, mode);
#endif
  } else {
   snprintf (uri, sizeof (uri), "attach://%d", pid);
   _plugin = r_io_plugin_resolve (io, (const char *)uri, false);
   if (!_plugin || !_plugin->open) {
    return NULL;
   }
   ret = _plugin->open (io, uri, rw, mode);
#if __WINDOWS__
   if (ret) {
    RCore *c = io->corebind.core;
    RW32Dw *wrap = (RW32Dw *)ret->data;
    c->dbg->user = wrap;
   }
#endif
  }
  if (ret) {
   ret->plugin = _plugin;
   ret->referer = strdup (file);
  }
 }
 return ret;
}

RIOPlugin r_io_plugin_debug = {
 .name = "debug",
 .desc = "Attach to native debugger instance",
 .license = "LGPL3",
 .uris = "dbg://,pidof://,waitfor://",
 .author = "pancake",
 .open = __open,
 .check = __plugin_open,
 .isdbg = true,
};
#else
RIOPlugin r_io_plugin_debug = {
 .name = "debug",
 .desc = "Debug a program or pid. (NOT SUPPORTED FOR THIS PLATFORM)",
};
#endif

#ifndef R2_PLUGIN_INCORE
R_API RLibStruct radare_plugin = {
 .type = R_LIB_TYPE_IO,
 .data = &r_io_plugin_debug,
 .version = R2_VERSION
};
#endif