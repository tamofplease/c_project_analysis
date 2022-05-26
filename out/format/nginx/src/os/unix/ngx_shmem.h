# 1 "project/nginx/src/os/unix/ngx_shmem.h"







#ifndef _NGX_SHMEM_H_INCLUDED_
#define _NGX_SHMEM_H_INCLUDED_ 


#include <ngx_config.h>
#include <ngx_core.h>


typedef struct {
    u_char *addr;
    size_t size;
    ngx_str_t name;
    ngx_log_t *log;
    ngx_uint_t exists;
} ngx_shm_t;


ngx_int_t ngx_shm_alloc(ngx_shm_t *shm);
void ngx_shm_free(ngx_shm_t *shm);


#endif
