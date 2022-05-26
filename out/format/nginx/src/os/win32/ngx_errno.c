# 1 "project/nginx/src/os/win32/ngx_errno.c"







#include <ngx_config.h>
#include <ngx_core.h>


u_char *
ngx_strerror(ngx_err_t err, u_char *errstr, size_t size)
{
    u_int len;
    static u_long lang = MAKELANGID(LANG_ENGLISH, SUBLANG_ENGLISH_US);

    if (size == 0) {
        return errstr;
    }

    len = FormatMessage(FORMAT_MESSAGE_FROM_SYSTEM,
                        NULL, err, lang, (char *) errstr, size, NULL);

    if (len == 0 && lang) {
# 34 "project/nginx/src/os/win32/ngx_errno.c"
        lang = 0;

        len = FormatMessage(FORMAT_MESSAGE_FROM_SYSTEM,
                            NULL, err, lang, (char *) errstr, size, NULL);
    }

    if (len == 0) {
        return ngx_snprintf(errstr, size,
                            "FormatMessage() error:(%d)", GetLastError());
    }


    while (errstr[len] == '\0' || errstr[len] == CR
           || errstr[len] == LF || errstr[len] == '.')
    {
        --len;
    }

    return &errstr[++len];
}


ngx_int_t
ngx_strerror_init(void)
{
    return NGX_OK;
}
