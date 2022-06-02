# 1 "project/nginx/src/event/modules/ngx_iocp_module.h"







#ifndef _NGX_IOCP_MODULE_H_INCLUDED_
#define _NGX_IOCP_MODULE_H_INCLUDED_ 


typedef struct {
    int threads;
    int post_acceptex;
    int acceptex_read;
} ngx_iocp_conf_t;


extern ngx_module_t ngx_iocp_module;


#endif