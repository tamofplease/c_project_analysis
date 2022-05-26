# 1 "project/radare2/shlr/capstone/suite/fuzz/fuzz_decode_platform.c"



#include <stdio.h>
#include <inttypes.h>

#include <capstone/capstone.h>

#include "platform.h"

int main(int argc, char **argv)
{
    unsigned char data;

    if (argc != 2) {
        printf("Decoding OSS fuzz platform\n");
        printf("Syntax: %s <hex-byte>\n", argv[0]);
        return -1;
    }

    data = (unsigned int)strtol(argv[1], NULL, 16);

    printf("cstool arch+mode = %s\n", get_platform_cstoolname(data));

    return 0;
}
