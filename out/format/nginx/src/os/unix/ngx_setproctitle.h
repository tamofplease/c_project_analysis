# 1 "project/nginx/src/os/unix/ngx_setproctitle.h"







#ifndef _NGX_SETPROCTITLE_H_INCLUDED_
#define _NGX_SETPROCTITLE_H_INCLUDED_ 


#if (NGX_HAVE_SETPROCTITLE)



#define ngx_init_setproctitle(log) NGX_OK
#define ngx_setproctitle(title) setproctitle("%s", title)


#else

#if !defined NGX_SETPROCTITLE_USES_ENV

#if (NGX_SOLARIS)

#define NGX_SETPROCTITLE_USES_ENV 1
#define NGX_SETPROCTITLE_PAD ' '

ngx_int_t ngx_init_setproctitle(ngx_log_t *log);
void ngx_setproctitle(char *title);

#elif (NGX_LINUX) || (NGX_DARWIN)

#define NGX_SETPROCTITLE_USES_ENV 1
#define NGX_SETPROCTITLE_PAD '\0'

ngx_int_t ngx_init_setproctitle(ngx_log_t *log);
void ngx_setproctitle(char *title);

#else

#define ngx_init_setproctitle(log) NGX_OK
#define ngx_setproctitle(title) 

#endif

#endif

#endif


#endif
