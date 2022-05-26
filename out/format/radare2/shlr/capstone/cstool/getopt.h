# 1 "project/radare2/shlr/capstone/cstool/getopt.h"
#ifndef CSTOOL_GETOPT_H
#define CSTOOL_GETOPT_H 


extern int opterr,
optind,
optopt,
optreset;

extern const char *optarg;

int getopt (int nargc, char *const nargv[], const char *ostr);

#endif
