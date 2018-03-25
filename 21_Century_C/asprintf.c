#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>  //free

void get_strings(char const *in) {
    char *cmd;
    asprintf(&cmd, "strings %s", in);
    if (system(cmd)) fprintf(stderr, "something went wrong running %s.\n", cmd);
    free(cmd);
}

int main(int argc, char **argv) {
    for (int i = 0; i < argc; i++) printf("idx = %d, para = %s\n", i, argv[i]);
    get_strings(argv[0]);
}
