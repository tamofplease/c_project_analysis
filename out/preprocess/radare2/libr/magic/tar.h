# 0 "project/radare2/libr/magic/tar.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/magic/tar.h"
# 52 "project/radare2/libr/magic/tar.h"
union record {
 char charptr[512];
 struct header {
  char name[100];
  char mode[8];
  char uid[8];
  char gid[8];
  char size[12];
  char mtime[12];
  char chksum[8];
  char linkflag;
  char linkname[100];
  char magic[8];
  char uname[32];
  char gname[32];
  char devmajor[8];
  char devminor[8];
 } header;
};
