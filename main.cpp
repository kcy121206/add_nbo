#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <arpa/inet.h>

int main(int argc , char *argv[] ) {
    FILE *fd;       // file1, file2 = fd1, fd2
    uint32_t a1, b1, result;

    fd = fopen(argv[1], "r"); // file read
    fread(&a1, sizeof(a1), 1, fd);  //overflow setting for a1

    fd = fopen(argv[2], "r");
    fread(&b1, sizeof(b1), 1, fd);  //overflow setting for b1

    a1 = ntohl(a1);
    b1 = ntohl(b1);

    result = a1 + b1;

    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", a1, a1, b1, b1, result, result);

    return 0;
}


