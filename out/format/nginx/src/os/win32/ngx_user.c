# 1 "project/nginx/src/os/win32/ngx_user.c"






#include <ngx_config.h>
#include <ngx_core.h>


#if (NGX_CRYPT)

ngx_int_t
ngx_libc_crypt(ngx_pool_t *pool, u_char *key, u_char *salt, u_char **encrypted)
{


    *encrypted = key;

    return NGX_OK;
}

#endif
