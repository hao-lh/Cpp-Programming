#include <stdio.h>

#define Peval(cmd) printf(#cmd " = %lu\n", cmd);

int main() {
    double *plist = (double[]){1, 2, 3};
    double list[] = {1, 2, 3};
    Peval(sizeof(plist));
    Peval(sizeof(list));
}
