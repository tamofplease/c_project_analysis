# 0 "project/nginx/src/os/unix/ngx_sunpro_atomic_sparc64.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/nginx/src/os/unix/ngx_sunpro_atomic_sparc64.h"
# 15 "project/nginx/src/os/unix/ngx_sunpro_atomic_sparc64.h"
ngx_atomic_uint_t
ngx_casa(ngx_atomic_uint_t set, ngx_atomic_uint_t old, ngx_atomic_t *lock);

ngx_atomic_uint_t
ngx_casxa(ngx_atomic_uint_t set, ngx_atomic_uint_t old, ngx_atomic_t *lock);




static ngx_inline ngx_atomic_uint_t
ngx_atomic_cmp_set(ngx_atomic_t *lock, ngx_atomic_uint_t old,
    ngx_atomic_uint_t set)
{
    set = ngx_casxa(set, old, lock);

    return (set == old);
}


static ngx_inline ngx_atomic_int_t
ngx_atomic_fetch_add(ngx_atomic_t *value, ngx_atomic_int_t add)
{
    ngx_atomic_uint_t old, res;

    old = *value;

    for ( ;; ) {

        res = old + add;

        res = ngx_casxa(res, old, value);

        if (res == old) {
            return res;
        }

        old = res;
    }
}
