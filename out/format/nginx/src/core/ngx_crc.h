# 1 "project/nginx/src/core/ngx_crc.h"







#ifndef _NGX_CRC_H_INCLUDED_
#define _NGX_CRC_H_INCLUDED_ 


#include <ngx_config.h>
#include <ngx_core.h>




static ngx_inline uint32_t
ngx_crc(u_char *data, size_t len)
{
    uint32_t sum;

    for (sum = 0; len; len--) {






        sum = sum >> 1 | sum << 31;

        sum += *data++;
    }

    return sum;
}


#endif
