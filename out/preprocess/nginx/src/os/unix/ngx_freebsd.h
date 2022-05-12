# 0 "project/nginx/src/os/unix/ngx_freebsd.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/nginx/src/os/unix/ngx_freebsd.h"
# 12 "project/nginx/src/os/unix/ngx_freebsd.h"
void ngx_debug_init(void);
ngx_chain_t *ngx_freebsd_sendfile_chain(ngx_connection_t *c, ngx_chain_t *in,
    off_t limit);

extern int ngx_freebsd_kern_osreldate;
extern int ngx_freebsd_hw_ncpu;
extern u_long ngx_freebsd_net_inet_tcp_sendspace;

extern ngx_uint_t ngx_freebsd_sendfile_nbytes_bug;
extern ngx_uint_t ngx_freebsd_use_tcp_nopush;
extern ngx_uint_t ngx_debug_malloc;
