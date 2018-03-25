#include <stdio.h>

#define Testclaim(assertion, returnval)                                       \
    if (!(assertion)) {                                                       \
        fprintf(stderr,                                                       \
                #assertion " failed to be true. Returning " #returnval "\n"); \
        return returnval;                                                     \
    }

int do_things() {
    int x = 1, y = 2;
    Testclaim(x == y, -1);
    return 0;
}

int main() { do_things(); }
