# 1 "project/nginx/src/os/unix/ngx_setproctitle.c"







#include <ngx_config.h>
#include <ngx_core.h>


#if (NGX_SETPROCTITLE_USES_ENV)
# 30 "project/nginx/src/os/unix/ngx_setproctitle.c"
extern char **environ;

static char *ngx_os_argv_last;

ngx_int_t
ngx_init_setproctitle(ngx_log_t *log)
{
    u_char *p;
    size_t size;
    ngx_uint_t i;

    size = 0;

    for (i = 0; environ[i]; i++) {
        size += ngx_strlen(environ[i]) + 1;
    }

    p = ngx_alloc(size, log);
    if (p == NULL) {
        return NGX_ERROR;
    }

    ngx_os_argv_last = ngx_os_argv[0];

    for (i = 0; ngx_os_argv[i]; i++) {
        if (ngx_os_argv_last == ngx_os_argv[i]) {
            ngx_os_argv_last = ngx_os_argv[i] + ngx_strlen(ngx_os_argv[i]) + 1;
        }
    }

    for (i = 0; environ[i]; i++) {
        if (ngx_os_argv_last == environ[i]) {

            size = ngx_strlen(environ[i]) + 1;
            ngx_os_argv_last = environ[i] + size;

            ngx_cpystrn(p, (u_char *) environ[i], size);
            environ[i] = (char *) p;
            p += size;
        }
    }

    ngx_os_argv_last--;

    return NGX_OK;
}


void
ngx_setproctitle(char *title)
{
    u_char *p;

#if (NGX_SOLARIS)

    ngx_int_t i;
    size_t size;

#endif

    ngx_os_argv[1] = NULL;

    p = ngx_cpystrn((u_char *) ngx_os_argv[0], (u_char *) "nginx: ",
                    ngx_os_argv_last - ngx_os_argv[0]);

    p = ngx_cpystrn(p, (u_char *) title, ngx_os_argv_last - (char *) p);

#if (NGX_SOLARIS)

    size = 0;

    for (i = 0; i < ngx_argc; i++) {
        size += ngx_strlen(ngx_argv[i]) + 1;
    }

    if (size > (size_t) ((char *) p - ngx_os_argv[0])) {






        p = ngx_cpystrn(p, (u_char *) " (", ngx_os_argv_last - (char *) p);

        for (i = 0; i < ngx_argc; i++) {
            p = ngx_cpystrn(p, (u_char *) ngx_argv[i],
                            ngx_os_argv_last - (char *) p);
            p = ngx_cpystrn(p, (u_char *) " ", ngx_os_argv_last - (char *) p);
        }

        if (*(p - 1) == ' ') {
            *(p - 1) = ')';
        }
    }

#endif

    if (ngx_os_argv_last - (char *) p) {
        ngx_memset(p, NGX_SETPROCTITLE_PAD, ngx_os_argv_last - (char *) p);
    }

    ngx_log_debug1(NGX_LOG_DEBUG_CORE, ngx_cycle->log, 0,
                   "setproctitle: \"%s\"", ngx_os_argv[0]);
}

#endif
