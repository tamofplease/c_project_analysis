# 0 "project/nginx/src/event/modules/ngx_iocp_module.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/nginx/src/event/modules/ngx_iocp_module.h"
# 12 "project/nginx/src/event/modules/ngx_iocp_module.h"
typedef struct {
    int threads;
    int post_acceptex;
    int acceptex_read;
} ngx_iocp_conf_t;


extern ngx_module_t ngx_iocp_module;
