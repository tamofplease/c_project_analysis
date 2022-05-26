# 1 "project/ish/fs/path.h"
#ifndef PATH_H
#define PATH_H 

#define AT_PWD (struct fd *) -2

#define N_SYMLINK_FOLLOW 1
#define N_SYMLINK_NOFOLLOW 2
#define N_PARENT_DIR_WRITE 4
# 26 "project/ish/fs/path.h"
int path_normalize(struct fd *at, const char *path, char *out, int flags);
bool path_is_normalized(const char *path);
# 38 "project/ish/fs/path.h"
bool path_next_component(const char **path, char *component, int *err);

#endif
