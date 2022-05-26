# 1 "project/nginx/src/http/modules/ngx_http_empty_gif_module.c"






#include <ngx_config.h>
#include <ngx_core.h>
#include <ngx_http.h>


static char *ngx_http_empty_gif(ngx_conf_t *cf, ngx_command_t *cmd,
    void *conf);

static ngx_command_t ngx_http_empty_gif_commands[] = {

    { ngx_string("empty_gif"),
      NGX_HTTP_LOC_CONF|NGX_CONF_NOARGS,
      ngx_http_empty_gif,
      0,
      0,
      NULL },

      ngx_null_command
};




static u_char ngx_empty_gif[] = {

    'G', 'I', 'F', '8', '9', 'a',


    0x01, 0x00,
    0x01, 0x00,
    0x80,
    0x01,
    0x00,


    0x00, 0x00, 0x00,
    0xff, 0xff, 0xff,


    0x21,
    0xf9,
    0x04,
    0x01,


    0x00, 0x00,
    0x01,
    0x00,


    0x2c,
    0x00, 0x00,
    0x00, 0x00,
    0x01, 0x00,
    0x01, 0x00,
    0x00,


    0x02,

    0x02,
    0x4c, 0x01,



    0x00,

    0x3B
};


static ngx_http_module_t ngx_http_empty_gif_module_ctx = {
    NULL,
    NULL,

    NULL,
    NULL,

    NULL,
    NULL,

    NULL,
    NULL
};


ngx_module_t ngx_http_empty_gif_module = {
    NGX_MODULE_V1,
    &ngx_http_empty_gif_module_ctx,
    ngx_http_empty_gif_commands,
    NGX_HTTP_MODULE,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NGX_MODULE_V1_PADDING
};


static ngx_str_t ngx_http_gif_type = ngx_string("image/gif");


static ngx_int_t
ngx_http_empty_gif_handler(ngx_http_request_t *r)
{
    ngx_http_complex_value_t cv;

    if (!(r->method & (NGX_HTTP_GET|NGX_HTTP_HEAD))) {
        return NGX_HTTP_NOT_ALLOWED;
    }

    ngx_memzero(&cv, sizeof(ngx_http_complex_value_t));

    cv.value.len = sizeof(ngx_empty_gif);
    cv.value.data = ngx_empty_gif;
    r->headers_out.last_modified_time = 23349600;

    return ngx_http_send_response(r, NGX_HTTP_OK, &ngx_http_gif_type, &cv);
}


static char *
ngx_http_empty_gif(ngx_conf_t *cf, ngx_command_t *cmd, void *conf)
{
    ngx_http_core_loc_conf_t *clcf;

    clcf = ngx_http_conf_get_module_loc_conf(cf, ngx_http_core_module);
    clcf->handler = ngx_http_empty_gif_handler;

    return NGX_CONF_OK;
}
