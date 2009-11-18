#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>

int main(int argc, char **argv) {
    if(argc<2) {
       fprintf(stderr, "Usage: %s <path_to_resolve>\n", argv[0]);
        exit(1);
    }

    char *resolved = realpath(argv[1], NULL);
    if(resolved != NULL) {
        puts(resolved);
        exit(0);
    } else {
        perror("Error resolving pathname");
        exit(2);
     }
}   

