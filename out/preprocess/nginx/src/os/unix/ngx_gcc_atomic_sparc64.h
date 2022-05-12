# 0 "project/nginx/src/os/unix/ngx_gcc_atomic_sparc64.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/nginx/src/os/unix/ngx_gcc_atomic_sparc64.h"
# 33 "project/nginx/src/os/unix/ngx_gcc_atomic_sparc64.h"
static ngx_inline ngx_atomic_uint_t
ngx_atomic_cmp_set(ngx_atomic_t *lock, ngx_atomic_uint_t old,
    ngx_atomic_uint_t set)
{
    __asm__ volatile (

    "casxa" " [%1] 0x80, %2, %0"

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

        "casxa" " [%1] 0x80, %2, %0"

        : "+r" (res) : "r" (value), "r" (old) : "memory");

        if (res == old) {
            return res;
        }

        old = res;
    }
}
