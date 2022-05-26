# 1 "project/nginx/src/os/unix/ngx_gcc_atomic_amd64.h"







#if (NGX_SMP)
#define NGX_SMP_LOCK "lock;"
#else
#define NGX_SMP_LOCK 
#endif
# 36 "project/nginx/src/os/unix/ngx_gcc_atomic_amd64.h"
static ngx_inline ngx_atomic_uint_t
ngx_atomic_cmp_set(ngx_atomic_t *lock, ngx_atomic_uint_t old,
    ngx_atomic_uint_t set)
{
    u_char res;

    __asm__ volatile (

         NGX_SMP_LOCK
    "    cmpxchgq  %3, %1;   "
    "    sete      %0;       "

    : "=a" (res) : "m" (*lock), "a" (old), "r" (set) : "cc", "memory");

    return res;
}
# 66 "project/nginx/src/os/unix/ngx_gcc_atomic_amd64.h"
static ngx_inline ngx_atomic_int_t
ngx_atomic_fetch_add(ngx_atomic_t *value, ngx_atomic_int_t add)
{
    __asm__ volatile (

         NGX_SMP_LOCK
    "    xaddq  %0, %1;   "

    : "+r" (add) : "m" (*value) : "cc", "memory");

    return add;
}


#define ngx_memory_barrier() __asm__ volatile ("" ::: "memory")

#define ngx_cpu_pause() __asm__ ("pause")
