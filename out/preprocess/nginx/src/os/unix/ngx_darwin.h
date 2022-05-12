# 0 "project/nginx/src/os/unix/ngx_darwin.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/nginx/src/os/unix/ngx_darwin.h"
# 12 "project/nginx/src/os/unix/ngx_darwin.h"
void ngx_debug_init(void);
ngx_chain_t *ngx_darwin_sendfile_chain(ngx_connection_t *c, ngx_chain_t *in,
    off_t limit);

extern int ngx_darwin_kern_osreldate;
extern int ngx_darwin_hw_ncpu;
extern u_long ngx_darwin_net_inet_tcp_sendspace;

extern ngx_uint_t ngx_debug_malloc;
