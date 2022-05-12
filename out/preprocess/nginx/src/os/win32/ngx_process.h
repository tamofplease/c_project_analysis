# 0 "project/nginx/src/os/win32/ngx_process.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/nginx/src/os/win32/ngx_process.h"
# 12 "project/nginx/src/os/win32/ngx_process.h"
typedef DWORD ngx_pid_t;
# 25 "project/nginx/src/os/win32/ngx_process.h"
typedef uint64_t ngx_cpuset_t;


typedef struct {
    HANDLE handle;
    ngx_pid_t pid;
    char *name;

    HANDLE term;
    HANDLE quit;
    HANDLE reopen;

    u_char term_event[(sizeof("ngx_cache_manager_mutex_") + NGX_INT32_LEN)];
    u_char quit_event[(sizeof("ngx_cache_manager_mutex_") + NGX_INT32_LEN)];
    u_char reopen_event[(sizeof("ngx_cache_manager_mutex_") + NGX_INT32_LEN)];

    unsigned just_spawn:1;
    unsigned exiting:1;
} ngx_process_t;


typedef struct {
    char *path;
    char *name;
    char *args;
    char *const *argv;
    char *const *envp;
    HANDLE child;
} ngx_exec_ctx_t;


ngx_pid_t ngx_spawn_process(ngx_cycle_t *cycle, char *name, ngx_int_t respawn);
ngx_pid_t ngx_execute(ngx_cycle_t *cycle, ngx_exec_ctx_t *ctx);
# 69 "project/nginx/src/os/win32/ngx_process.h"
extern int ngx_argc;
extern char **ngx_argv;
extern char **ngx_os_argv;

extern ngx_int_t ngx_last_process;
extern ngx_process_t ngx_processes[(MAXIMUM_WAIT_OBJECTS - 4)];

extern ngx_pid_t ngx_pid;
extern ngx_pid_t ngx_parent;
