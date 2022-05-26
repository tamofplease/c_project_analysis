# 1 "project/nginx/src/os/win32/ngx_shmem.h"







#ifndef _NGX_SHMEM_H_INCLUDED_
#define _NGX_SHMEM_H_INCLUDED_ 


#include <ngx_config.h>
#include <ngx_core.h>


typedef struct {
    u_char *addr;
    size_t size;
    ngx_str_t name;
    HANDLE handle;
    ngx_log_t *log;
    ngx_uint_t exists;
} ngx_shm_t;


ngx_int_t ngx_shm_alloc(ngx_shm_t *shm);
ngx_int_t ngx_shm_remap(ngx_shm_t *shm, u_char *addr);
void ngx_shm_free(ngx_shm_t *shm);

extern ngx_uint_t ngx_allocation_granularity;


#endif
