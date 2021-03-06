# 1 "project/nginx/src/os/unix/ngx_socket.c"







#include <ngx_config.h>
#include <ngx_core.h>
# 24 "project/nginx/src/os/unix/ngx_socket.c"
#if (NGX_HAVE_FIONBIO)

int
ngx_nonblocking(ngx_socket_t s)
{
    int nb;

    nb = 1;

    return ioctl(s, FIONBIO, &nb);
}


int
ngx_blocking(ngx_socket_t s)
{
    int nb;

    nb = 0;

    return ioctl(s, FIONBIO, &nb);
}

#endif


#if (NGX_FREEBSD)

int
ngx_tcp_nopush(ngx_socket_t s)
{
    int tcp_nopush;

    tcp_nopush = 1;

    return setsockopt(s, IPPROTO_TCP, TCP_NOPUSH,
                      (const void *) &tcp_nopush, sizeof(int));
}


int
ngx_tcp_push(ngx_socket_t s)
{
    int tcp_nopush;

    tcp_nopush = 0;

    return setsockopt(s, IPPROTO_TCP, TCP_NOPUSH,
                      (const void *) &tcp_nopush, sizeof(int));
}

#elif (NGX_LINUX)


int
ngx_tcp_nopush(ngx_socket_t s)
{
    int cork;

    cork = 1;

    return setsockopt(s, IPPROTO_TCP, TCP_CORK,
                      (const void *) &cork, sizeof(int));
}


int
ngx_tcp_push(ngx_socket_t s)
{
    int cork;

    cork = 0;

    return setsockopt(s, IPPROTO_TCP, TCP_CORK,
                      (const void *) &cork, sizeof(int));
}

#else

int
ngx_tcp_nopush(ngx_socket_t s)
{
    return 0;
}


int
ngx_tcp_push(ngx_socket_t s)
{
    return 0;
}

#endif
