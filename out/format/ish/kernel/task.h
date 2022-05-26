# 1 "project/ish/kernel/task.h"
#ifndef TASK_H
#define TASK_H 

#include <pthread.h>
#include "emu/cpu.h"
#include "kernel/mm.h"
#include "kernel/fs.h"
#include "kernel/signal.h"
#include "kernel/resource.h"
#include "fs/sockrestart.h"
#include "util/list.h"
#include "util/timer.h"
#include "util/sync.h"



struct task {
    struct cpu_state cpu;
    struct mm *mm;
    struct mem *mem;
    pthread_t thread;
    uint64_t threadid;

    struct tgroup *group;
    struct list group_links;
    pid_t_ pid, tgid;
    uid_t_ uid, gid;
    uid_t_ euid, egid;
    uid_t_ suid, sgid;
#define MAX_GROUPS 32
    unsigned ngroups;
    uid_t_ groups[MAX_GROUPS];
    char comm[16] __strncpy_safe;
    bool did_exec;

    struct fdtable *files;
    struct fs_info *fs;


    struct sighand *sighand;
    sigset_t_ blocked;
    sigset_t_ pending;
    sigset_t_ waiting;
    struct list queue;
    cond_t pause;

    sigset_t_ saved_mask;
    bool has_saved_mask;

    struct {

        lock_t lock;
        cond_t cond;

        bool traced;
        bool stopped;
        int signal;
        struct siginfo_ info;
        int trap_event;
    } ptrace;


    struct task *parent;
    struct list children;
    struct list siblings;

    addr_t clear_tid;
    addr_t robust_list;


    dword_t exit_code;
    bool zombie;
    bool exiting;


    struct vfork_info {
        bool done;
        cond_t cond;
        lock_t lock;
    } *vfork;
    int exit_signal;



    lock_t general_lock;

    struct task_sockrestart sockrestart;


    cond_t *waiting_cond;
    lock_t *waiting_lock;
    lock_t waiting_cond_lock;
};



extern __thread struct task *current;

static inline void task_set_mm(struct task *task, struct mm *mm) {
    task->mm = mm;
    task->mem = &task->mm->mem;
    task->cpu.mmu = &task->mem->mmu;
}




struct task *task_create_(struct task *parent);

void task_destroy(struct task *task);


void vfork_notify(struct task *task);
pid_t_ task_setsid(struct task *task);
void task_leave_session(struct task *task);

struct posix_timer {
    struct timer *timer;
    int_t timer_id;
    struct task *task;
    int_t signal;
    union sigval_ sig_value;
};


struct tgroup {
    struct list threads;
    struct task *leader;
    struct rusage_ rusage;


    pid_t_ sid, pgid;
    struct list session;
    struct list pgroup;

    bool stopped;
    cond_t stopped_cond;

    struct tty *tty;
    struct timer *itimer;
#define TIMERS_MAX 16
    struct posix_timer posix_timers[TIMERS_MAX];

    struct rlimit_ limits[RLIMIT_NLIMITS_];



    bool doing_group_exit;
    dword_t group_exit_code;

    struct rusage_ children_rusage;
    cond_t child_exit;

    dword_t personality;


    lock_t lock;
};

static inline bool task_is_leader(struct task *task) {
    return task->group->leader == task;
}

struct pid {
    dword_t id;
    struct task *task;
    struct list session;
    struct list pgroup;
};


extern lock_t pids_lock;

struct pid *pid_get(dword_t pid);
struct task *pid_get_task(dword_t pid);
struct task *pid_get_task_zombie(dword_t id);

#define MAX_PID (1 << 15)


void task_start(struct task *task);
void task_run_current(void);

extern void (*exit_hook)(struct task *task, int code);

#define superuser() (current != NULL && current->euid == 0)



void update_thread_name(void);

#endif
