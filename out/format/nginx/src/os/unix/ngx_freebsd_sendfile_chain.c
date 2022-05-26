# 1 "project/nginx/src/os/unix/ngx_freebsd_sendfile_chain.c"







#include <ngx_config.h>
#include <ngx_core.h>
#include <ngx_event.h>
# 32 "project/nginx/src/os/unix/ngx_freebsd_sendfile_chain.c"
ngx_chain_t *
ngx_freebsd_sendfile_chain(ngx_connection_t *c, ngx_chain_t *in, off_t limit)
{
    int rc, flags;
    off_t send, prev_send, sent;
    size_t file_size;
    ssize_t n;
    ngx_err_t err;
    ngx_buf_t *file;
    ngx_uint_t eintr, eagain;
#if (NGX_HAVE_SENDFILE_NODISKIO)
    ngx_uint_t ebusy;
#endif
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
    eagain = 0;
    flags = 0;

    header.iovs = headers;
    header.nalloc = NGX_IOVS_PREALLOCATE;

    trailer.iovs = trailers;
    trailer.nalloc = NGX_IOVS_PREALLOCATE;

    for ( ;; ) {
        eintr = 0;
#if (NGX_HAVE_SENDFILE_NODISKIO)
        ebusy = 0;
#endif
        prev_send = send;



        cl = ngx_output_chain_to_iovec(&header, in, limit - send, c->log);

        if (cl == NGX_CHAIN_ERROR) {
            return NGX_CHAIN_ERROR;
        }

        send += header.size;

        if (cl && cl->buf->in_file && send < limit) {
            file = cl->buf;



            file_size = (size_t) ngx_chain_coalesce_file(&cl, limit - send);

            send += file_size;

            if (send < limit) {





                cl = ngx_output_chain_to_iovec(&trailer, cl, limit - send,
                                               c->log);
                if (cl == NGX_CHAIN_ERROR) {
                    return NGX_CHAIN_ERROR;
                }

                send += trailer.size;

            } else {
                trailer.count = 0;
            }

            if (ngx_freebsd_use_tcp_nopush
                && c->tcp_nopush == NGX_TCP_NOPUSH_UNSET)
            {
                if (ngx_tcp_nopush(c->fd) == -1) {
                    err = ngx_socket_errno;






                    if (err != NGX_EINTR) {
                        wev->error = 1;
                        (void) ngx_connection_error(c, err,
                                                    ngx_tcp_nopush_n " failed");
                        return NGX_CHAIN_ERROR;
                    }

                } else {
                    c->tcp_nopush = NGX_TCP_NOPUSH_SET;

                    ngx_log_debug0(NGX_LOG_DEBUG_EVENT, c->log, 0,
                                   "tcp_nopush");
                }
            }






            hdtr.headers = header.count ? header.iovs : NULL;
            hdtr.hdr_cnt = header.count;
            hdtr.trailers = trailer.count ? trailer.iovs : NULL;
            hdtr.trl_cnt = trailer.count;






            if (!ngx_freebsd_sendfile_nbytes_bug) {
                header.size = 0;
            }

            sent = 0;

#if (NGX_HAVE_SENDFILE_NODISKIO)

            flags = (c->busy_count <= 2) ? SF_NODISKIO : 0;

            if (file->file->directio) {
                flags |= SF_NOCACHE;
            }

#endif

            rc = sendfile(file->file->fd, c->fd, file->file_pos,
                          file_size + header.size, &hdtr, &sent, flags);

            if (rc == -1) {
                err = ngx_errno;

                switch (err) {
                case NGX_EAGAIN:
                    eagain = 1;
                    break;

                case NGX_EINTR:
                    eintr = 1;
                    break;

#if (NGX_HAVE_SENDFILE_NODISKIO)
                case NGX_EBUSY:
                    ebusy = 1;
                    break;
#endif

                default:
                    wev->error = 1;
                    (void) ngx_connection_error(c, err, "sendfile() failed");
                    return NGX_CHAIN_ERROR;
                }

                ngx_log_debug1(NGX_LOG_DEBUG_EVENT, c->log, err,
                               "sendfile() sent only %O bytes", sent);






            } else if (rc >= 0 && sent == 0) {







                ngx_log_error(NGX_LOG_ALERT, c->log, 0,
                         "sendfile() reported that \"%s\" was truncated at %O",
                         file->file->name.data, file->file_pos);

                return NGX_CHAIN_ERROR;
            }

            ngx_log_debug4(NGX_LOG_DEBUG_EVENT, c->log, 0,
                           "sendfile: %d, @%O %O:%uz",
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

#if (NGX_HAVE_SENDFILE_NODISKIO)

        if (ebusy) {
            if (sent == 0) {
                c->busy_count++;

                ngx_log_debug1(NGX_LOG_DEBUG_EVENT, c->log, 0,
                               "sendfile() busy, count:%d", c->busy_count);

            } else {
                c->busy_count = 0;
            }

            if (wev->posted) {
                ngx_delete_posted_event(wev);
            }

            ngx_post_event(wev, &ngx_posted_next_events);

            wev->ready = 0;
            return in;
        }

        c->busy_count = 0;

#endif

        if (eagain) {
# 290 "project/nginx/src/os/unix/ngx_freebsd_sendfile_chain.c"
            wev->ready = 0;
            return in;
        }

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
