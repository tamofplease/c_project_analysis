# 1 "project/nginx/src/os/unix/ngx_linux.h"







#ifndef _NGX_LINUX_H_INCLUDED_
#define _NGX_LINUX_H_INCLUDED_ 


ngx_chain_t *ngx_linux_sendfile_chain(ngx_connection_t *c, ngx_chain_t *in,
    off_t limit);


#endif
