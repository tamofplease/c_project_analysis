# 1 "project/ish/tests/manual/stat.c"
#define _LARGEFILE64_SOURCE 
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

int main() {
    struct stat64 statbuf;
    if (fstat64(1, &statbuf) < 0) {
        perror("fstat"); return 1;
    }

    char buf[1000];
    int len;
#define PTIF(n) \
    len = sprintf(buf, #n " %llx\n", (long long) statbuf.st_##n); \
    write(1, buf, len);
    PTIF(atime);
    PTIF(mtime);
    PTIF(ctime);
# 30 "project/ish/tests/manual/stat.c"
    return 0;
}
