# 1 "project/nginx/src/core/ngx_parse.h"







#ifndef _NGX_PARSE_H_INCLUDED_
#define _NGX_PARSE_H_INCLUDED_ 


#include <ngx_config.h>
#include <ngx_core.h>


ssize_t ngx_parse_size(ngx_str_t *line);
off_t ngx_parse_offset(ngx_str_t *line);
ngx_int_t ngx_parse_time(ngx_str_t *line, ngx_uint_t is_sec);


#endif
