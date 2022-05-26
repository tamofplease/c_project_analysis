# 1 "project/nginx/src/os/unix/ngx_gcc_atomic_ppc.h"
# 26 "project/nginx/src/os/unix/ngx_gcc_atomic_ppc.h"
#if (NGX_PTR_SIZE == 8)

static ngx_inline ngx_atomic_uint_t
ngx_atomic_cmp_set(ngx_atomic_t *lock, ngx_atomic_uint_t old,
    ngx_atomic_uint_t set)
{
    ngx_atomic_uint_t res, temp;

    __asm__ volatile (

    "    li      %0, 0       \n"
    "    lwsync              \n"
    "1:                      \n"
    "    ldarx   %1, 0, %2   \n"

    "    cmpd    %1, %3      \n"
    "    bne-    2f          \n"
    "    stdcx.  %4, 0, %2   \n"

    "    bne-    1b          \n"
    "    isync               \n"
    "    li      %0, 1       \n"
    "2:                      \n"

    : "=&b" (res), "=&b" (temp)
    : "b" (lock), "b" (old), "b" (set)
    : "cc", "memory");

    return res;
}


static ngx_inline ngx_atomic_int_t
ngx_atomic_fetch_add(ngx_atomic_t *value, ngx_atomic_int_t add)
{
    ngx_atomic_uint_t res, temp;

    __asm__ volatile (

    "    lwsync              \n"
    "1:  ldarx   %0, 0, %2   \n"

    "    add     %1, %0, %3  \n"
    "    stdcx.  %1, 0, %2   \n"

    "    bne-    1b          \n"
    "    isync               \n"

    : "=&b" (res), "=&b" (temp)
    : "b" (value), "b" (add)
    : "cc", "memory");

    return res;
}


#if (NGX_SMP)
#define ngx_memory_barrier() \
    __asm__ volatile ("isync  \n  lwsync  \n" ::: "memory")
#else
#define ngx_memory_barrier() __asm__ volatile ("" ::: "memory")
#endif

#else

static ngx_inline ngx_atomic_uint_t
ngx_atomic_cmp_set(ngx_atomic_t *lock, ngx_atomic_uint_t old,
    ngx_atomic_uint_t set)
{
    ngx_atomic_uint_t res, temp;

    __asm__ volatile (

    "    li      %0, 0       \n"
    "    eieio               \n"
    "1:                      \n"
    "    lwarx   %1, 0, %2   \n"

    "    cmpw    %1, %3      \n"
    "    bne-    2f          \n"
    "    stwcx.  %4, 0, %2   \n"

    "    bne-    1b          \n"
    "    isync               \n"
    "    li      %0, 1       \n"
    "2:                      \n"

    : "=&b" (res), "=&b" (temp)
    : "b" (lock), "b" (old), "b" (set)
    : "cc", "memory");

    return res;
}


static ngx_inline ngx_atomic_int_t
ngx_atomic_fetch_add(ngx_atomic_t *value, ngx_atomic_int_t add)
{
    ngx_atomic_uint_t res, temp;

    __asm__ volatile (

    "    eieio               \n"
    "1:  lwarx   %0, 0, %2   \n"

    "    add     %1, %0, %3  \n"
    "    stwcx.  %1, 0, %2   \n"

    "    bne-    1b          \n"
    "    isync               \n"

    : "=&b" (res), "=&b" (temp)
    : "b" (value), "b" (add)
    : "cc", "memory");

    return res;
}


#if (NGX_SMP)
#define ngx_memory_barrier() \
    __asm__ volatile ("isync  \n  eieio  \n" ::: "memory")
#else
#define ngx_memory_barrier() __asm__ volatile ("" ::: "memory")
#endif

#endif


#define ngx_cpu_pause() 
