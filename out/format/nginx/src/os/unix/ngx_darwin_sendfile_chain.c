# 1 "project/nginx/src/os/unix/ngx_darwin_sendfile_chain.c"







#include <ngx_config.h>
#include <ngx_core.h>
#include <ngx_event.h>
# 30 "project/nginx/src/os/unix/ngx_darwin_sendfile_chain.c"
ngx_chain_t *
ngx_darwin_sendfile_chain(ngx_connection_t *c, ngx_chain_t *in, off_t limit)
{
    int rc;
    off_t send, prev_send, sent;
    off_t file_size;
    ssize_t n;
    ngx_uint_t eintr;
    ngx_err_t err;
    ngx_buf_t *file;
    ngx_event_t *wev;
    ngx_chain_t *cl;
    ngx_iovec_t header, trailer;
    struct sf_hdtr hdtr;
    struct iovec headers[NGX_IOVS_PREALLOCATE];
    struct iovec trailers[NGX_IOVS_PREALLOCATE];

    wev = c->write;

    if (!wev->ready) {
        return in;
    }

#if (NGX_HAVE_KQUEUE)

    if ((ngx_event_flags & NGX_USE_KQUEUE_EVENT) && wev->pending_eof) {
        (void) ngx_connection_error(c, wev->kq_errno,
                               "kevent() reported about an closed connection");
        wev->error = 1;
        return NGX_CHAIN_ERROR;
    }

#endif



    if (limit == 0 || limit > (off_t) (NGX_MAX_SIZE_T_VALUE - ngx_pagesize)) {
        limit = NGX_MAX_SIZE_T_VALUE - ngx_pagesize;
    }

    send = 0;

    header.iovs = headers;
    header.nalloc = NGX_IOVS_PREALLOCATE;

    trailer.iovs = trailers;
    trailer.nalloc = NGX_IOVS_PREALLOCATE;

    for ( ;; ) {
        eintr = 0;
        prev_send = send;



        cl = ngx_output_chain_to_iovec(&header, in, limit - send, c->log);

        if (cl == NGX_CHAIN_ERROR) {
            return NGX_CHAIN_ERROR;
        }

        send += header.size;

        if (cl && cl->buf->in_file && send < limit) {
            file = cl->buf;



            file_size = ngx_chain_coalesce_file(&cl, limit - send);

            send += file_size;

            if (header.count == 0 && send < limit) {





                cl = ngx_output_chain_to_iovec(&trailer, cl, limit - send,
                                               c->log);
                if (cl == NGX_CHAIN_ERROR) {
                    return NGX_CHAIN_ERROR;
                }

                send += trailer.size;

            } else {
                trailer.count = 0;
            }






            hdtr.headers = header.count ? header.iovs : NULL;
            hdtr.hdr_cnt = header.count;
            hdtr.trailers = trailer.count ? trailer.iovs : NULL;
            hdtr.trl_cnt = trailer.count;

            sent = header.size + file_size;

            ngx_log_debug3(NGX_LOG_DEBUG_EVENT, c->log, 0,
                           "sendfile: @%O %O h:%uz",
                           file->file_pos, sent, header.size);

            rc = sendfile(file->file->fd, c->fd, file->file_pos,
                          &sent, &hdtr, 0);

            if (rc == -1) {
                err = ngx_errno;

                switch (err) {
                case NGX_EAGAIN:
                    break;

                case NGX_EINTR:
                    eintr = 1;
                    break;

                default:
                    wev->error = 1;
                    (void) ngx_connection_error(c, err, "sendfile() failed");
                    return NGX_CHAIN_ERROR;
                }

                ngx_log_debug1(NGX_LOG_DEBUG_EVENT, c->log, err,
                               "sendfile() sent only %O bytes", sent);
            }

            if (rc == 0 && sent == 0) {







                ngx_log_error(NGX_LOG_ALERT, c->log, 0,
                              "sendfile() reported that \"%s\" was truncated",
                              file->file->name.data);

                return NGX_CHAIN_ERROR;
            }

            ngx_log_debug4(NGX_LOG_DEBUG_EVENT, c->log, 0,
                           "sendfile: %d, @%O %O:%O",
                           rc, file->file_pos, sent, file_size + header.size);

        } else {
            n = ngx_writev(c, &header);

            if (n == NGX_ERROR) {
                return NGX_CHAIN_ERROR;
            }

            sent = (n == NGX_AGAIN) ? 0 : n;
        }

        c->sent += sent;

        in = ngx_chain_update_sent(in, sent);

        if (eintr) {
            send = prev_send + sent;
            continue;
        }

        if (send - prev_send != sent) {
            wev->ready = 0;
            return in;
        }

        if (send >= limit || in == NULL) {
            return in;
        }
    }
}
