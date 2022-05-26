# 1 "project/ish/util/sync.h"
#ifndef UTIL_SYNC_H
#define UTIL_SYNC_H 

#include <stdatomic.h>
#include <pthread.h>
#include <stdbool.h>
#include <setjmp.h>
#include "misc.h"
#include "debug.h"



#define LOCK_DEBUG 0

typedef struct {
    pthread_mutex_t m;
    pthread_t owner;
#if LOCK_DEBUG
    struct lock_debug {
        const char *file;
        int line;
        int pid;
        bool initialized;
    } debug;
#endif
} lock_t;

static inline void lock_init(lock_t *lock) {
    pthread_mutex_init(&lock->m, NULL);
#if LOCK_DEBUG
    lock->debug = (struct lock_debug) {
        .initialized = true,
    };
#endif
}

#if LOCK_DEBUG
#define LOCK_INITIALIZER {PTHREAD_MUTEX_INITIALIZER, 0, { .initialized = true }}
#else
#define LOCK_INITIALIZER {PTHREAD_MUTEX_INITIALIZER, 0}
#endif
static inline void __lock(lock_t *lock, __attribute__((unused)) const char *file, __attribute__((unused)) int line) {
    pthread_mutex_lock(&lock->m);
    lock->owner = pthread_self();
#if LOCK_DEBUG
    assert(lock->debug.initialized);
    assert(!lock->debug.file && "Attempting to recursively lock");
    lock->debug.file = file;
    lock->debug.line = line;
    extern int current_pid(void);
    lock->debug.pid = current_pid();
#endif
}
#define lock(lock) __lock(lock, __FILE__, __LINE__)
static inline void unlock(lock_t *lock) {
#if LOCK_DEBUG
    assert(lock->debug.initialized);
    assert(lock->debug.file && "Attempting to unlock an unlocked lock");
    lock->debug = (struct lock_debug) { .initialized = true };
#endif
    lock->owner = zero_init(pthread_t);
    pthread_mutex_unlock(&lock->m);
}

static inline int trylock(lock_t *lock, __attribute__((unused)) const char *file, __attribute__((unused)) int line) {
    int status = pthread_mutex_trylock(&lock->m);
#if LOCK_DEBUG
    if (!status) {
        lock->debug.file = file;
        lock->debug.line = line;
        extern int current_pid(void);
        lock->debug.pid = current_pid();
    }
#endif
    return status;
}
#define trylock(lock) trylock(lock, __FILE__, __LINE__)




typedef struct {
    pthread_cond_t cond;
} cond_t;
#define COND_INITIALIZER ((cond_t) {PTHREAD_COND_INITIALIZER})


void cond_init(cond_t *cond);

void cond_destroy(cond_t *cond);




int must_check wait_for(cond_t *cond, lock_t *lock, struct timespec *timeout);

int wait_for_ignore_signals(cond_t *cond, lock_t *lock, struct timespec *timeout);

void notify(cond_t *cond);

void notify_once(cond_t *cond);





typedef struct {
    pthread_rwlock_t l;



    atomic_int val;
    const char *file;
    int line;
    int pid;
} wrlock_t;
static inline void wrlock_init(wrlock_t *lock) {
    pthread_rwlockattr_t *pattr = NULL;
#if defined(__GLIBC__)
    pthread_rwlockattr_t attr;
    pattr = &attr;
    pthread_rwlockattr_init(pattr);
    pthread_rwlockattr_setkind_np(pattr, PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP);
#endif
    if (pthread_rwlock_init(&lock->l, pattr)) __builtin_trap();
    lock->val = lock->line = lock->pid = 0;
    lock->file = NULL;
}

extern int current_pid(void);
static inline void wrlock_destroy(wrlock_t *lock) {
    if (pthread_rwlock_destroy(&lock->l) != 0) __builtin_trap();
}
static inline void read_wrlock(wrlock_t *lock) {
    if (pthread_rwlock_rdlock(&lock->l) != 0) __builtin_trap();
    assert(lock->val >= 0);
    lock->val++;
}
static inline void read_wrunlock(wrlock_t *lock) {
    assert(lock->val > 0);
    lock->val--;
    if (pthread_rwlock_unlock(&lock->l) != 0) __builtin_trap();
}
static inline void __write_wrlock(wrlock_t *lock, const char *file, int line) {
    if (pthread_rwlock_wrlock(&lock->l) != 0) __builtin_trap();
    assert(lock->val == 0);
    lock->val = -1;
    lock->file = file;
    lock->line = line;
    lock->pid = current_pid();
}
#define write_wrlock(lock) __write_wrlock(lock, __FILE__, __LINE__)
static inline void write_wrunlock(wrlock_t *lock) {
    assert(lock->val == -1);
    lock->val = lock->line = lock->pid = 0;
    lock->file = NULL;
    if (pthread_rwlock_unlock(&lock->l) != 0) __builtin_trap();
}

extern __thread sigjmp_buf unwind_buf;
extern __thread bool should_unwind;
static inline int sigunwind_start() {
    if (sigsetjmp(unwind_buf, 1)) {
        should_unwind = false;
        return 1;
    } else {
        should_unwind = true;
        return 0;
    }
}
static inline void sigunwind_end() {
    should_unwind = false;
}

#endif
