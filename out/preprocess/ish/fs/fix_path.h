# 0 "project/ish/fs/fix_path.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/ish/fs/fix_path.h"



static inline const char *fix_path(const char *path) {
    if (path[0] == '\0')
        return ".";
    if (path[0] == '/')
        path++;
    return path;
}
