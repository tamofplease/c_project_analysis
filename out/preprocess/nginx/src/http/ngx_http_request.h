# 0 "project/nginx/src/http/ngx_http_request.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/nginx/src/http/ngx_http_request.h"
# 154 "project/nginx/src/http/ngx_http_request.h"
typedef enum {
    NGX_HTTP_INITING_REQUEST_STATE = 0,
    NGX_HTTP_READING_REQUEST_STATE,
    NGX_HTTP_PROCESS_REQUEST_STATE,

    NGX_HTTP_CONNECT_UPSTREAM_STATE,
    NGX_HTTP_WRITING_UPSTREAM_STATE,
    NGX_HTTP_READING_UPSTREAM_STATE,

    NGX_HTTP_WRITING_REQUEST_STATE,
    NGX_HTTP_LINGERING_CLOSE_STATE,
    NGX_HTTP_KEEPALIVE_STATE
} ngx_http_state_e;


typedef struct {
    ngx_str_t name;
    ngx_uint_t offset;
    ngx_http_header_handler_pt handler;
} ngx_http_header_t;


typedef struct {
    ngx_str_t name;
    ngx_uint_t offset;
} ngx_http_header_out_t;


typedef struct {
    ngx_list_t headers;

    ngx_table_elt_t *host;
    ngx_table_elt_t *connection;
    ngx_table_elt_t *if_modified_since;
    ngx_table_elt_t *if_unmodified_since;
    ngx_table_elt_t *if_match;
    ngx_table_elt_t *if_none_match;
    ngx_table_elt_t *user_agent;
    ngx_table_elt_t *referer;
    ngx_table_elt_t *content_length;
    ngx_table_elt_t *content_range;
    ngx_table_elt_t *content_type;

    ngx_table_elt_t *range;
    ngx_table_elt_t *if_range;

    ngx_table_elt_t *transfer_encoding;
    ngx_table_elt_t *te;
    ngx_table_elt_t *expect;
    ngx_table_elt_t *upgrade;






    ngx_table_elt_t *authorization;

    ngx_table_elt_t *keep_alive;
# 234 "project/nginx/src/http/ngx_http_request.h"
    ngx_str_t user;
    ngx_str_t passwd;

    ngx_array_t cookies;

    ngx_str_t server;
    off_t content_length_n;
    time_t keep_alive_n;

    unsigned connection_type:2;
    unsigned chunked:1;
    unsigned msie:1;
    unsigned msie6:1;
    unsigned opera:1;
    unsigned gecko:1;
    unsigned chrome:1;
    unsigned safari:1;
    unsigned konqueror:1;
} ngx_http_headers_in_t;


typedef struct {
    ngx_list_t headers;
    ngx_list_t trailers;

    ngx_uint_t status;
    ngx_str_t status_line;

    ngx_table_elt_t *server;
    ngx_table_elt_t *date;
    ngx_table_elt_t *content_length;
    ngx_table_elt_t *content_encoding;
    ngx_table_elt_t *location;
    ngx_table_elt_t *refresh;
    ngx_table_elt_t *last_modified;
    ngx_table_elt_t *content_range;
    ngx_table_elt_t *accept_ranges;
    ngx_table_elt_t *www_authenticate;
    ngx_table_elt_t *expires;
    ngx_table_elt_t *etag;

    ngx_str_t *override_charset;

    size_t content_type_len;
    ngx_str_t content_type;
    ngx_str_t charset;
    u_char *content_type_lowcase;
    ngx_uint_t content_type_hash;

    ngx_array_t cache_control;
    ngx_array_t link;

    off_t content_length_n;
    off_t content_offset;
    time_t date_time;
    time_t last_modified_time;
} ngx_http_headers_out_t;


typedef void (*ngx_http_client_body_handler_pt)(ngx_http_request_t *r);

typedef struct {
    ngx_temp_file_t *temp_file;
    ngx_chain_t *bufs;
    ngx_buf_t *buf;
    off_t rest;
    off_t received;
    ngx_chain_t *free;
    ngx_chain_t *busy;
    ngx_http_chunked_t *chunked;
    ngx_http_client_body_handler_pt post_handler;
    unsigned filter_need_buffering:1;
    unsigned last_sent:1;
    unsigned last_saved:1;
} ngx_http_request_body_t;


typedef struct ngx_http_addr_conf_s ngx_http_addr_conf_t;

typedef struct {
    ngx_http_addr_conf_t *addr_conf;
    ngx_http_conf_ctx_t *conf_ctx;
# 324 "project/nginx/src/http/ngx_http_request.h"
    ngx_chain_t *busy;
    ngx_int_t nbusy;

    ngx_chain_t *free;

    unsigned ssl:1;
    unsigned proxy_protocol:1;
} ngx_http_connection_t;


typedef void (*ngx_http_cleanup_pt)(void *data);

typedef struct ngx_http_cleanup_s ngx_http_cleanup_t;

struct ngx_http_cleanup_s {
    ngx_http_cleanup_pt handler;
    void *data;
    ngx_http_cleanup_t *next;
};


typedef ngx_int_t (*ngx_http_post_subrequest_pt)(ngx_http_request_t *r,
    void *data, ngx_int_t rc);

typedef struct {
    ngx_http_post_subrequest_pt handler;
    void *data;
} ngx_http_post_subrequest_t;


typedef struct ngx_http_postponed_request_s ngx_http_postponed_request_t;

struct ngx_http_postponed_request_s {
    ngx_http_request_t *request;
    ngx_chain_t *out;
    ngx_http_postponed_request_t *next;
};


typedef struct ngx_http_posted_request_s ngx_http_posted_request_t;

struct ngx_http_posted_request_s {
    ngx_http_request_t *request;
    ngx_http_posted_request_t *next;
};


typedef ngx_int_t (*ngx_http_handler_pt)(ngx_http_request_t *r);
typedef void (*ngx_http_event_handler_pt)(ngx_http_request_t *r);


struct ngx_http_request_s {
    uint32_t signature;

    ngx_connection_t *connection;

    void **ctx;
    void **main_conf;
    void **srv_conf;
    void **loc_conf;

    ngx_http_event_handler_pt read_event_handler;
    ngx_http_event_handler_pt write_event_handler;





    ngx_http_upstream_t *upstream;
    ngx_array_t *upstream_states;


    ngx_pool_t *pool;
    ngx_buf_t *header_in;

    ngx_http_headers_in_t headers_in;
    ngx_http_headers_out_t headers_out;

    ngx_http_request_body_t *request_body;

    time_t lingering_time;
    time_t start_sec;
    ngx_msec_t start_msec;

    ngx_uint_t method;
    ngx_uint_t http_version;

    ngx_str_t request_line;
    ngx_str_t uri;
    ngx_str_t args;
    ngx_str_t exten;
    ngx_str_t unparsed_uri;

    ngx_str_t method_name;
    ngx_str_t http_protocol;
    ngx_str_t schema;

    ngx_chain_t *out;
    ngx_http_request_t *main;
    ngx_http_request_t *parent;
    ngx_http_postponed_request_t *postponed;
    ngx_http_post_subrequest_t *post_subrequest;
    ngx_http_posted_request_t *posted_requests;

    ngx_int_t phase_handler;
    ngx_http_handler_pt content_handler;
    ngx_uint_t access_code;

    ngx_http_variable_value_t *variables;







    size_t limit_rate;
    size_t limit_rate_after;


    size_t header_size;

    off_t request_length;

    ngx_uint_t err_status;

    ngx_http_connection_t *http_connection;
    ngx_http_v2_stream_t *stream;

    ngx_http_log_handler_pt log_handler;

    ngx_http_cleanup_t *cleanup;

    unsigned count:16;
    unsigned subrequests:8;
    unsigned blocked:8;

    unsigned aio:1;

    unsigned http_state:4;


    unsigned complex_uri:1;


    unsigned quoted_uri:1;


    unsigned plus_in_uri:1;


    unsigned empty_path_in_uri:1;

    unsigned invalid_header:1;

    unsigned add_uri_to_alias:1;
    unsigned valid_location:1;
    unsigned valid_unparsed_uri:1;
    unsigned uri_changed:1;
    unsigned uri_changes:4;

    unsigned request_body_in_single_buf:1;
    unsigned request_body_in_file_only:1;
    unsigned request_body_in_persistent_file:1;
    unsigned request_body_in_clean_file:1;
    unsigned request_body_file_group_access:1;
    unsigned request_body_file_log_level:3;
    unsigned request_body_no_buffering:1;

    unsigned subrequest_in_memory:1;
    unsigned waited:1;
# 510 "project/nginx/src/http/ngx_http_request.h"
    unsigned proxy:1;
    unsigned bypass_cache:1;
    unsigned no_cache:1;






    unsigned limit_conn_status:2;
    unsigned limit_req_status:3;

    unsigned limit_rate_set:1;
    unsigned limit_rate_after_set:1;





    unsigned pipeline:1;
    unsigned chunked:1;
    unsigned header_only:1;
    unsigned expect_trailers:1;
    unsigned keepalive:1;
    unsigned lingering_close:1;
    unsigned discard_body:1;
    unsigned reading_body:1;
    unsigned internal:1;
    unsigned error_page:1;
    unsigned filter_finalize:1;
    unsigned post_action:1;
    unsigned request_complete:1;
    unsigned request_output:1;
    unsigned header_sent:1;
    unsigned expect_tested:1;
    unsigned root_tested:1;
    unsigned done:1;
    unsigned logged:1;

    unsigned buffered:4;

    unsigned main_filter_need_in_memory:1;
    unsigned filter_need_in_memory:1;
    unsigned filter_need_temporary:1;
    unsigned preserve_body:1;
    unsigned allow_ranges:1;
    unsigned subrequest_ranges:1;
    unsigned single_range:1;
    unsigned disable_not_modified:1;
    unsigned stat_reading:1;
    unsigned stat_writing:1;
    unsigned stat_processing:1;

    unsigned background:1;
    unsigned health_check:1;



    ngx_uint_t state;

    ngx_uint_t header_hash;
    ngx_uint_t lowcase_index;
    u_char lowcase_header[32];

    u_char *header_name_start;
    u_char *header_name_end;
    u_char *header_start;
    u_char *header_end;






    u_char *uri_start;
    u_char *uri_end;
    u_char *uri_ext;
    u_char *args_start;
    u_char *request_start;
    u_char *request_end;
    u_char *method_end;
    u_char *schema_start;
    u_char *schema_end;
    u_char *host_start;
    u_char *host_end;
    u_char *port_start;
    u_char *port_end;

    unsigned http_minor:16;
    unsigned http_major:16;
};


typedef struct {
    ngx_http_posted_request_t terminal_posted_request;
} ngx_http_ephemeral_t;





extern ngx_http_header_t ngx_http_headers_in[];
extern ngx_http_header_out_t ngx_http_headers_out[];
