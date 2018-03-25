#include <stdio.h>

int main() {
    double arr[20] = {[2] = .2, [5] = .5, [7] = .7, .8, .9};
    for (int i = 0; i < 20; i++) printf("%2d:\t%lf\n", i, arr[i]);
}
