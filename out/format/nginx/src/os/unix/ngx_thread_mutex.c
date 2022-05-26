# 1 "project/nginx/src/os/unix/ngx_thread_mutex.c"






#include <ngx_config.h>
#include <ngx_core.h>
# 77 "project/nginx/src/os/unix/ngx_thread_mutex.c"
ngx_int_t
ngx_thread_mutex_create(ngx_thread_mutex_t *mtx, ngx_log_t *log)
{
    ngx_err_t err;
    pthread_mutexattr_t attr;

    err = pthread_mutexattr_init(&attr);
    if (err != 0) {
        ngx_log_error(NGX_LOG_EMERG, log, err,
                      "pthread_mutexattr_init() failed");
        return NGX_ERROR;
    }

    err = pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_ERRORCHECK);
    if (err != 0) {
        ngx_log_error(NGX_LOG_EMERG, log, err,
                      "pthread_mutexattr_settype"
                      "(PTHREAD_MUTEX_ERRORCHECK) failed");
        return NGX_ERROR;
    }

    err = pthread_mutex_init(mtx, &attr);
    if (err != 0) {
        ngx_log_error(NGX_LOG_EMERG, log, err,
                      "pthread_mutex_init() failed");
        return NGX_ERROR;
    }

    err = pthread_mutexattr_destroy(&attr);
    if (err != 0) {
        ngx_log_error(NGX_LOG_ALERT, log, err,
                      "pthread_mutexattr_destroy() failed");
    }

    return NGX_OK;
}


ngx_int_t
ngx_thread_mutex_destroy(ngx_thread_mutex_t *mtx, ngx_log_t *log)
{
    ngx_err_t err;

    err = pthread_mutex_destroy(mtx);
    if (err != 0) {
        ngx_log_error(NGX_LOG_ALERT, log, err,
                      "pthread_mutex_destroy() failed");
        return NGX_ERROR;
    }

    return NGX_OK;
}


ngx_int_t
ngx_thread_mutex_lock(ngx_thread_mutex_t *mtx, ngx_log_t *log)
{
    ngx_err_t err;

    err = pthread_mutex_lock(mtx);
    if (err == 0) {
        return NGX_OK;
    }

    ngx_log_error(NGX_LOG_ALERT, log, err, "pthread_mutex_lock() failed");

    return NGX_ERROR;
}


ngx_int_t
ngx_thread_mutex_unlock(ngx_thread_mutex_t *mtx, ngx_log_t *log)
{
    ngx_err_t err;

    err = pthread_mutex_unlock(mtx);

#if 0
    ngx_time_update();
#endif

    if (err == 0) {
        return NGX_OK;
    }

    ngx_log_error(NGX_LOG_ALERT, log, err, "pthread_mutex_unlock() failed");

    return NGX_ERROR;
}
