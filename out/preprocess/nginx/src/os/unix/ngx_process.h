# 0 "project/nginx/src/os/unix/ngx_process.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/nginx/src/os/unix/ngx_process.h"
# 12 "project/nginx/src/os/unix/ngx_process.h"
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_setaffinity.h" 1 3 4
# 32 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_setaffinity.h" 3 4

# 32 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_setaffinity.h" 3 4
typedef uint64_t ngx_cpuset_t;
# 13 "project/nginx/src/os/unix/ngx_process.h" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_setproctitle.h" 1 3 4
# 14 "project/nginx/src/os/unix/ngx_process.h" 2



# 16 "project/nginx/src/os/unix/ngx_process.h"
typedef pid_t ngx_pid_t;



typedef void (*ngx_spawn_proc_pt) (ngx_cycle_t *cycle, void *data);

typedef struct {
    ngx_pid_t pid;
    int status;
    ngx_socket_t channel[2];

    ngx_spawn_proc_pt proc;
    void *data;
    char *name;

    unsigned respawn:1;
    unsigned just_spawn:1;
    unsigned detached:1;
    unsigned exiting:1;
    unsigned exited:1;
} ngx_process_t;


typedef struct {
    char *path;
    char *name;
    char *const *argv;
    char *const *envp;
} ngx_exec_ctx_t;
# 64 "project/nginx/src/os/unix/ngx_process.h"
ngx_pid_t ngx_spawn_process(ngx_cycle_t *cycle,
    ngx_spawn_proc_pt proc, void *data, char *name, ngx_int_t respawn);
ngx_pid_t ngx_execute(ngx_cycle_t *cycle, ngx_exec_ctx_t *ctx);
ngx_int_t ngx_init_signals(ngx_log_t *log);
void ngx_debug_point(void);
# 78 "project/nginx/src/os/unix/ngx_process.h"
extern int ngx_argc;
extern char **ngx_argv;
extern char **ngx_os_argv;

extern ngx_pid_t ngx_pid;
extern ngx_pid_t ngx_parent;
extern ngx_socket_t ngx_channel;
extern ngx_int_t ngx_process_slot;
extern ngx_int_t ngx_last_process;
extern ngx_process_t ngx_processes[1024];
