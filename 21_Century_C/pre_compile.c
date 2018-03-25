#include <math.h>
#include <stdio.h>

#define AnAssert(expression, action) \
    do {                             \
        \ if (!(expression)) action; \
        \                            \
    } while (0)

int main() {
    double an_array[100];
    double total = 0;

    for (int i = 0; i < 100; i++) {
        AnAssert(!(isnan(an_array[i])), break);

        total += an_array[i];
    }
}
