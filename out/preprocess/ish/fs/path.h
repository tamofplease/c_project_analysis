# 0 "project/ish/fs/path.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/ish/fs/path.h"
# 26 "project/ish/fs/path.h"
int path_normalize(struct fd *at, const char *path, char *out, int flags);
bool path_is_normalized(const char *path);
# 38 "project/ish/fs/path.h"
bool path_next_component(const char **path, char *component, int *err);
