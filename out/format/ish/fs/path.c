# 1 "project/ish/fs/path.c"
#include <string.h>
#include <sys/stat.h>
#include "kernel/calls.h"
#include "fs/path.h"

static int __path_normalize(const char *at_path, const char *path, char *out, int flags, int levels) {

    if (flags & N_SYMLINK_FOLLOW)
        assert(!(flags & N_SYMLINK_NOFOLLOW));
    else
        assert(flags & N_SYMLINK_NOFOLLOW);

    const char *p = path;
    char *o = out;
    *o = '\0';
    int n = MAX_PATH - 1;

    if (strcmp(path, "") == 0)
        return _ENOENT;

    if (at_path != NULL && strcmp(at_path, "/") != 0) {
        strcpy(o, at_path);
        n -= strlen(at_path);
        o += strlen(at_path);
    }

    while (*p == '/')
        p++;

    while (*p != '\0') {
        if (p[0] == '.') {
            if (p[1] == '\0' || p[1] == '/') {

                p++;
                while (*p == '/')
                    p++;
                continue;
            } else if (p[1] == '.' && (p[2] == '\0' || p[2] == '/')) {

                if (o != out) {
                    do {
                        o--;
                        n++;
                    } while (*o != '/');
                }
                p += 2;
                while (*p == '/')
                    p++;
                continue;
            }
        }


        *o++ = '/'; n--;
        char *c = o;

        while (*p != '/' && *p != '\0' && --n > 0)
            *o++ = *p++;

        while (*p == '/')
            p++;

        if (n == 0)
            return _ENAMETOOLONG;

        if ((flags & N_SYMLINK_FOLLOW) || *p != '\0') {



            char possible_symlink[MAX_PATH];
            *o = '\0';
            strcpy(possible_symlink, out);
            struct mount *mount = find_mount_and_trim_path(possible_symlink);
            assert(path_is_normalized(possible_symlink));
            int res = _EINVAL;
            if (mount->fs->readlink)
                res = mount->fs->readlink(mount, possible_symlink, c, MAX_PATH - (c - out));
            if (res >= 0) {
                mount_release(mount);
                if (levels >= 5)
                    return _ELOOP;

                c[res] = '\0';

                if (*c == '/')
                    memmove(out, c, strlen(c) + 1);
                char *expanded_path = possible_symlink;
                strcpy(expanded_path, out);
                if (strcmp(p, "") != 0) {
                    strcat(expanded_path, "/");
                    strcat(expanded_path, p);
                }
                return __path_normalize(NULL, expanded_path, out, flags, levels + 1);
            }



            if (*(p - 1) == '/') {
                struct statbuf stat;
                int err = mount->fs->stat(mount, possible_symlink, &stat);
                mount_release(mount);
                if (err >= 0) {
                    if (!S_ISDIR(stat.mode))
                        return _ENOTDIR;
                    err = access_check(&stat, AC_X);
                    if (err < 0)
                        return err;
                }
            } else {
                mount_release(mount);
            }
        }
    }

    *o = '\0';
    assert(path_is_normalized(out));

    return 0;
}

int path_normalize(struct fd *at, const char *path, char *out, int flags) {
    assert(at != NULL);
    if (strcmp(path, "") == 0)
        return _ENOENT;


    lock(&current->fs->lock);
    if (path[0] == '/')
        at = current->fs->root;
    else if (at == AT_PWD)
        at = current->fs->pwd;
    unlock(&current->fs->lock);
    char at_path[MAX_PATH];
    if (at != NULL) {
        int err = generic_getpath(at, at_path);
        if (err < 0)
            return err;
        assert(path_is_normalized(at_path));
    }

    return __path_normalize(at != NULL ? at_path : NULL, path, out, flags, 0);
}


bool path_is_normalized(const char *path) {
    while (*path != '\0') {
        if (*path != '/')
            return false;
        path++;
        if (*path == '/')
            return false;
        while (*path != '/' && *path != '\0')
            path++;
    }
    return true;
}

bool path_next_component(const char **path, char *component, int *err) {
    const char *p = *path;
    if (*p == '\0')
        return false;

    assert(*p == '/');
    p++;
    char *c = component;
    while (*p != '/' && *p != '\0') {
        *c++ = *p++;
        if (c - component >= MAX_NAME) {
            *err = _ENAMETOOLONG;
            return false;
        }
    }
    *c = '\0';
    *path = p;
    return true;
}
