# 0 "project/ish/tools/fakefs.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/ish/tools/fakefs.h"


# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdbool.h" 1 3 4
# 4 "project/ish/tools/fakefs.h" 2

struct fakefsify_error {
    int line;
    enum {
        ERR_ARCHIVE,
        ERR_SQLITE,
        ERR_POSIX,
        ERR_CANCELLED,
    } type;
    int code;
    char *message;
};

struct progress {
    void *cookie;
    void (*callback)(void *cookie, double progress, const char *message, 
# 19 "project/ish/tools/fakefs.h" 3 4
                                                                        _Bool 
# 19 "project/ish/tools/fakefs.h"
                                                                             *cancel_out);
};


# 22 "project/ish/tools/fakefs.h" 3 4
_Bool 
# 22 "project/ish/tools/fakefs.h"
    fakefs_import(const char *archive_path, const char *fs, struct fakefsify_error *err_out, struct progress progress);

# 23 "project/ish/tools/fakefs.h" 3 4
_Bool 
# 23 "project/ish/tools/fakefs.h"
    fakefs_export(const char *fs, const char *archive_path, struct fakefsify_error *err_out, struct progress progress);
