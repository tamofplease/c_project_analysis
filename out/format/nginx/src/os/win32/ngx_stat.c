# 1 "project/nginx/src/os/win32/ngx_stat.c"







#include <ngx_config.h>
#include <ngx_core.h>


int ngx_file_type(char *file, ngx_file_info_t *sb)
{
    sb->dwFileAttributes = GetFileAttributes(file);

    if (sb->dwFileAttributes == INVALID_FILE_ATTRIBUTES) {
        return -1;
    }

    return 0;
}
