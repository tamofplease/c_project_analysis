# 0 "project/nginx/src/os/unix/ngx_gcc_atomic_x86.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/nginx/src/os/unix/ngx_gcc_atomic_x86.h"
# 37 "project/nginx/src/os/unix/ngx_gcc_atomic_x86.h"
static ngx_inline ngx_atomic_uint_t
ngx_atomic_cmp_set(ngx_atomic_t *lock, ngx_atomic_uint_t old,
    ngx_atomic_uint_t set)
{
    u_char res;

    __asm__ volatile (

        
    "    cmpxchgl  %3, %1;   "
    "    sete      %0;       "

    : "=a" (res) : "m" (*lock), "a" (old), "r" (set) : "cc", "memory");

    return res;
}
# 79 "project/nginx/src/os/unix/ngx_gcc_atomic_x86.h"
static ngx_inline ngx_atomic_int_t
ngx_atomic_fetch_add(ngx_atomic_t *value, ngx_atomic_int_t add)
{
    __asm__ volatile (

        
    "    xaddl  %0, %1;   "

    : "+r" (add) : "m" (*value) : "cc", "memory");

    return add;
}
