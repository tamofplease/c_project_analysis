# 1 "project/nginx/src/os/win32/ngx_shmem.c"







#include <ngx_config.h>
#include <ngx_core.h>
# 34 "project/nginx/src/os/win32/ngx_shmem.c"
#ifdef _WIN64
#define NGX_SHMEM_BASE 0x0000047047e00000
#else
#define NGX_SHMEM_BASE 0x2efe0000
#endif


ngx_uint_t ngx_allocation_granularity;


ngx_int_t
ngx_shm_alloc(ngx_shm_t *shm)
{
    u_char *name;
    uint64_t size;
    static u_char *base = (u_char *) NGX_SHMEM_BASE;

    name = ngx_alloc(shm->name.len + 2 + NGX_INT32_LEN, shm->log);
    if (name == NULL) {
        return NGX_ERROR;
    }

    (void) ngx_sprintf(name, "%V_%s%Z", &shm->name, ngx_unique);

    ngx_set_errno(0);

    size = shm->size;

    shm->handle = CreateFileMapping(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE,
                                    (u_long) (size >> 32),
                                    (u_long) (size & 0xffffffff),
                                    (char *) name);

    if (shm->handle == NULL) {
        ngx_log_error(NGX_LOG_ALERT, shm->log, ngx_errno,
                      "CreateFileMapping(%uz, %s) failed",
                      shm->size, name);
        ngx_free(name);

        return NGX_ERROR;
    }

    ngx_free(name);

    if (ngx_errno == ERROR_ALREADY_EXISTS) {
        shm->exists = 1;
    }

    shm->addr = MapViewOfFileEx(shm->handle, FILE_MAP_WRITE, 0, 0, 0, base);

    if (shm->addr != NULL) {
        base += ngx_align(size, ngx_allocation_granularity);
        return NGX_OK;
    }

    ngx_log_debug3(NGX_LOG_DEBUG_CORE, shm->log, ngx_errno,
                   "MapViewOfFileEx(%uz, %p) of file mapping \"%V\" failed, "
                   "retry without a base address",
                   shm->size, base, &shm->name);
# 103 "project/nginx/src/os/win32/ngx_shmem.c"
    shm->addr = MapViewOfFile(shm->handle, FILE_MAP_WRITE, 0, 0, 0);

    if (shm->addr != NULL) {
        return NGX_OK;
    }

    ngx_log_error(NGX_LOG_ALERT, shm->log, ngx_errno,
                  "MapViewOfFile(%uz) of file mapping \"%V\" failed",
                  shm->size, &shm->name);

    if (CloseHandle(shm->handle) == 0) {
        ngx_log_error(NGX_LOG_ALERT, shm->log, ngx_errno,
                      "CloseHandle() of file mapping \"%V\" failed",
                      &shm->name);
    }

    return NGX_ERROR;
}


ngx_int_t
ngx_shm_remap(ngx_shm_t *shm, u_char *addr)
{
    if (UnmapViewOfFile(shm->addr) == 0) {
        ngx_log_error(NGX_LOG_ALERT, shm->log, ngx_errno,
                      "UnmapViewOfFile(%p) of file mapping \"%V\" failed",
                      shm->addr, &shm->name);
        return NGX_ERROR;
    }

    shm->addr = MapViewOfFileEx(shm->handle, FILE_MAP_WRITE, 0, 0, 0, addr);

    if (shm->addr != NULL) {
        return NGX_OK;
    }

    ngx_log_error(NGX_LOG_ALERT, shm->log, ngx_errno,
                  "MapViewOfFileEx(%uz, %p) of file mapping \"%V\" failed",
                  shm->size, addr, &shm->name);

    return NGX_ERROR;
}


void
ngx_shm_free(ngx_shm_t *shm)
{
    if (UnmapViewOfFile(shm->addr) == 0) {
        ngx_log_error(NGX_LOG_ALERT, shm->log, ngx_errno,
                      "UnmapViewOfFile(%p) of file mapping \"%V\" failed",
                      shm->addr, &shm->name);
    }

    if (CloseHandle(shm->handle) == 0) {
        ngx_log_error(NGX_LOG_ALERT, shm->log, ngx_errno,
                      "CloseHandle() of file mapping \"%V\" failed",
                      &shm->name);
    }
}
