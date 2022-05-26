# 1 "project/nginx/src/os/unix/ngx_gcc_atomic_sparc64.h"
# 26 "project/nginx/src/os/unix/ngx_gcc_atomic_sparc64.h"
#if (NGX_PTR_SIZE == 4)
#define NGX_CASA "casa"
#else
#define NGX_CASA "casxa"
#endif


static ngx_inline ngx_atomic_uint_t
ngx_atomic_cmp_set(ngx_atomic_t *lock, ngx_atomic_uint_t old,
    ngx_atomic_uint_t set)
{
    __asm__ volatile (

    NGX_CASA " [%1] 0x80, %2, %0"

    : "+r" (set) : "r" (lock), "r" (old) : "memory");

    return (set == old);
}


static ngx_inline ngx_atomic_int_t
ngx_atomic_fetch_add(ngx_atomic_t *value, ngx_atomic_int_t add)
{
    ngx_atomic_uint_t old, res;

    old = *value;

    for ( ;; ) {

        res = old + add;

        __asm__ volatile (

        NGX_CASA " [%1] 0x80, %2, %0"

        : "+r" (res) : "r" (value), "r" (old) : "memory");

        if (res == old) {
            return res;
        }

        old = res;
    }
}


#if (NGX_SMP)
#define ngx_memory_barrier() \
            __asm__ volatile ( \
            "membar #LoadLoad | #LoadStore | #StoreStore | #StoreLoad" \
            ::: "memory")
#else
#define ngx_memory_barrier() __asm__ volatile ("" ::: "memory")
#endif

#define ngx_cpu_pause() 
