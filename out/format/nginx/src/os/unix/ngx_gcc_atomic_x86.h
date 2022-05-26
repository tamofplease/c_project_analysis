# 1 "project/nginx/src/os/unix/ngx_gcc_atomic_x86.h"







#if (NGX_SMP)
#define NGX_SMP_LOCK "lock;"
#else
#define NGX_SMP_LOCK 
#endif
# 37 "project/nginx/src/os/unix/ngx_gcc_atomic_x86.h"
static ngx_inline ngx_atomic_uint_t
ngx_atomic_cmp_set(ngx_atomic_t *lock, ngx_atomic_uint_t old,
    ngx_atomic_uint_t set)
{
    u_char res;

    __asm__ volatile (

         NGX_SMP_LOCK
    "    cmpxchgl  %3, %1;   "
    "    sete      %0;       "

    : "=a" (res) : "m" (*lock), "a" (old), "r" (set) : "cc", "memory");

    return res;
}
# 68 "project/nginx/src/os/unix/ngx_gcc_atomic_x86.h"
#if !(( __GNUC__ == 2 && __GNUC_MINOR__ <= 7 ) || ( __INTEL_COMPILER >= 800 ))
# 79 "project/nginx/src/os/unix/ngx_gcc_atomic_x86.h"
static ngx_inline ngx_atomic_int_t
ngx_atomic_fetch_add(ngx_atomic_t *value, ngx_atomic_int_t add)
{
    __asm__ volatile (

         NGX_SMP_LOCK
    "    xaddl  %0, %1;   "

    : "+r" (add) : "m" (*value) : "cc", "memory");

    return add;
}


#else







static ngx_inline ngx_atomic_int_t
ngx_atomic_fetch_add(ngx_atomic_t *value, ngx_atomic_int_t add)
{
    ngx_atomic_uint_t old;

    __asm__ volatile (

         NGX_SMP_LOCK
    "    xaddl  %2, %1;   "

    : "=a" (old) : "m" (*value), "a" (add) : "cc", "memory");

    return old;
}

#endif







#define ngx_memory_barrier() __asm__ volatile ("" ::: "memory")


#define ngx_cpu_pause() __asm__ (".byte 0xf3, 0x90")
