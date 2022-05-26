# 1 "project/nginx/src/os/unix/ngx_thread_id.c"







#include <ngx_config.h>
#include <ngx_core.h>
#include <ngx_thread_pool.h>


#if (NGX_LINUX)






ngx_tid_t
ngx_thread_tid(void)
{
    return syscall(SYS_gettid);
}

#elif (NGX_FREEBSD) && (__FreeBSD_version >= 900031)

#include <pthread_np.h>

ngx_tid_t
ngx_thread_tid(void)
{
    return pthread_getthreadid_np();
}

#elif (NGX_DARWIN)
# 46 "project/nginx/src/os/unix/ngx_thread_id.c"
ngx_tid_t
ngx_thread_tid(void)
{
    uint64_t tid;

    (void) pthread_threadid_np(NULL, &tid);
    return tid;
}
# 62 "project/nginx/src/os/unix/ngx_thread_id.c"
#else

ngx_tid_t
ngx_thread_tid(void)
{
    return (uint64_t) (uintptr_t) pthread_self();
}

#endif
