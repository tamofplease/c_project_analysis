# 1 "project/nginx/src/core/ngx_log.h"







#ifndef _NGX_LOG_H_INCLUDED_
#define _NGX_LOG_H_INCLUDED_ 


#include <ngx_config.h>
#include <ngx_core.h>


#define NGX_LOG_STDERR 0
#define NGX_LOG_EMERG 1
#define NGX_LOG_ALERT 2
#define NGX_LOG_CRIT 3
#define NGX_LOG_ERR 4
#define NGX_LOG_WARN 5
#define NGX_LOG_NOTICE 6
#define NGX_LOG_INFO 7
#define NGX_LOG_DEBUG 8

#define NGX_LOG_DEBUG_CORE 0x010
#define NGX_LOG_DEBUG_ALLOC 0x020
#define NGX_LOG_DEBUG_MUTEX 0x040
#define NGX_LOG_DEBUG_EVENT 0x080
#define NGX_LOG_DEBUG_HTTP 0x100
#define NGX_LOG_DEBUG_MAIL 0x200
#define NGX_LOG_DEBUG_STREAM 0x400






#define NGX_LOG_DEBUG_FIRST NGX_LOG_DEBUG_CORE
#define NGX_LOG_DEBUG_LAST NGX_LOG_DEBUG_STREAM
#define NGX_LOG_DEBUG_CONNECTION 0x80000000
#define NGX_LOG_DEBUG_ALL 0x7ffffff0


typedef u_char *(*ngx_log_handler_pt) (ngx_log_t *log, u_char *buf, size_t len);
typedef void (*ngx_log_writer_pt) (ngx_log_t *log, ngx_uint_t level,
    u_char *buf, size_t len);


struct ngx_log_s {
    ngx_uint_t log_level;
    ngx_open_file_t *file;

    ngx_atomic_uint_t connection;

    time_t disk_full_time;

    ngx_log_handler_pt handler;
    void *data;

    ngx_log_writer_pt writer;
    void *wdata;







    char *action;

    ngx_log_t *next;
};


#define NGX_MAX_ERROR_STR 2048




#if (NGX_HAVE_C99_VARIADIC_MACROS)

#define NGX_HAVE_VARIADIC_MACROS 1

#define ngx_log_error(level,log,...) \
    if ((log)->log_level >= level) ngx_log_error_core(level, log, __VA_ARGS__)

void ngx_log_error_core(ngx_uint_t level, ngx_log_t *log, ngx_err_t err,
    const char *fmt, ...);

#define ngx_log_debug(level,log,...) \
    if ((log)->log_level & level) \
        ngx_log_error_core(NGX_LOG_DEBUG, log, __VA_ARGS__)



#elif (NGX_HAVE_GCC_VARIADIC_MACROS)

#define NGX_HAVE_VARIADIC_MACROS 1

#define ngx_log_error(level,log,args...) \
    if ((log)->log_level >= level) ngx_log_error_core(level, log, args)

void ngx_log_error_core(ngx_uint_t level, ngx_log_t *log, ngx_err_t err,
    const char *fmt, ...);

#define ngx_log_debug(level,log,args...) \
    if ((log)->log_level & level) \
        ngx_log_error_core(NGX_LOG_DEBUG, log, args)



#else

#define NGX_HAVE_VARIADIC_MACROS 0

void ngx_cdecl ngx_log_error(ngx_uint_t level, ngx_log_t *log, ngx_err_t err,
    const char *fmt, ...);
void ngx_log_error_core(ngx_uint_t level, ngx_log_t *log, ngx_err_t err,
    const char *fmt, va_list args);
void ngx_cdecl ngx_log_debug_core(ngx_log_t *log, ngx_err_t err,
    const char *fmt, ...);


#endif




#if (NGX_DEBUG)

#if (NGX_HAVE_VARIADIC_MACROS)

#define ngx_log_debug0(level,log,err,fmt) \
        ngx_log_debug(level, log, err, fmt)

#define ngx_log_debug1(level,log,err,fmt,arg1) \
        ngx_log_debug(level, log, err, fmt, arg1)

#define ngx_log_debug2(level,log,err,fmt,arg1,arg2) \
        ngx_log_debug(level, log, err, fmt, arg1, arg2)

#define ngx_log_debug3(level,log,err,fmt,arg1,arg2,arg3) \
        ngx_log_debug(level, log, err, fmt, arg1, arg2, arg3)

#define ngx_log_debug4(level,log,err,fmt,arg1,arg2,arg3,arg4) \
        ngx_log_debug(level, log, err, fmt, arg1, arg2, arg3, arg4)

#define ngx_log_debug5(level,log,err,fmt,arg1,arg2,arg3,arg4,arg5) \
        ngx_log_debug(level, log, err, fmt, arg1, arg2, arg3, arg4, arg5)


                       arg1, arg2, arg3, arg4, arg5, arg6) \
        ngx_log_debug(level, log, err, fmt, \
                       arg1, arg2, arg3, arg4, arg5, arg6)


                       arg1, arg2, arg3, arg4, arg5, arg6, arg7) \
        ngx_log_debug(level, log, err, fmt, \
                       arg1, arg2, arg3, arg4, arg5, arg6, arg7)


                       arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8) \
        ngx_log_debug(level, log, err, fmt, \
                       arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)


#else

#define ngx_log_debug0(level,log,err,fmt) \
    if ((log)->log_level & level) \
        ngx_log_debug_core(log, err, fmt)

#define ngx_log_debug1(level,log,err,fmt,arg1) \
    if ((log)->log_level & level) \
        ngx_log_debug_core(log, err, fmt, arg1)

#define ngx_log_debug2(level,log,err,fmt,arg1,arg2) \
    if ((log)->log_level & level) \
        ngx_log_debug_core(log, err, fmt, arg1, arg2)

#define ngx_log_debug3(level,log,err,fmt,arg1,arg2,arg3) \
    if ((log)->log_level & level) \
        ngx_log_debug_core(log, err, fmt, arg1, arg2, arg3)

#define ngx_log_debug4(level,log,err,fmt,arg1,arg2,arg3,arg4) \
    if ((log)->log_level & level) \
        ngx_log_debug_core(log, err, fmt, arg1, arg2, arg3, arg4)

#define ngx_log_debug5(level,log,err,fmt,arg1,arg2,arg3,arg4,arg5) \
    if ((log)->log_level & level) \
        ngx_log_debug_core(log, err, fmt, arg1, arg2, arg3, arg4, arg5)


                       arg1, arg2, arg3, arg4, arg5, arg6) \
    if ((log)->log_level & level) \
        ngx_log_debug_core(log, err, fmt, arg1, arg2, arg3, arg4, arg5, arg6)


                       arg1, arg2, arg3, arg4, arg5, arg6, arg7) \
    if ((log)->log_level & level) \
        ngx_log_debug_core(log, err, fmt, \
                       arg1, arg2, arg3, arg4, arg5, arg6, arg7)


                       arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8) \
    if ((log)->log_level & level) \
        ngx_log_debug_core(log, err, fmt, \
                       arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)

#endif

#else

#define ngx_log_debug0(level,log,err,fmt) 
#define ngx_log_debug1(level,log,err,fmt,arg1) 
#define ngx_log_debug2(level,log,err,fmt,arg1,arg2) 
#define ngx_log_debug3(level,log,err,fmt,arg1,arg2,arg3) 
#define ngx_log_debug4(level,log,err,fmt,arg1,arg2,arg3,arg4) 
#define ngx_log_debug5(level,log,err,fmt,arg1,arg2,arg3,arg4,arg5) 
#define ngx_log_debug6(level,log,err,fmt,arg1,arg2,arg3,arg4,arg5,arg6) 

                       arg6, arg7)

                       arg6, arg7, arg8)

#endif



ngx_log_t *ngx_log_init(u_char *prefix, u_char *error_log);
void ngx_cdecl ngx_log_abort(ngx_err_t err, const char *fmt, ...);
void ngx_cdecl ngx_log_stderr(ngx_err_t err, const char *fmt, ...);
u_char *ngx_log_errno(u_char *buf, u_char *last, ngx_err_t err);
ngx_int_t ngx_log_open_default(ngx_cycle_t *cycle);
ngx_int_t ngx_log_redirect_stderr(ngx_cycle_t *cycle);
ngx_log_t *ngx_log_get_file_log(ngx_log_t *head);
char *ngx_log_set_log(ngx_conf_t *cf, ngx_log_t **head);
# 250 "project/nginx/src/core/ngx_log.h"
static ngx_inline void
ngx_write_stderr(char *text)
{
    (void) ngx_write_fd(ngx_stderr, text, ngx_strlen(text));
}


static ngx_inline void
ngx_write_stdout(char *text)
{
    (void) ngx_write_fd(ngx_stdout, text, ngx_strlen(text));
}


extern ngx_module_t ngx_errlog_module;
extern ngx_uint_t ngx_use_stderr;


#endif
