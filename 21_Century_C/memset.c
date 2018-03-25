#include <stdio.h>
#include <string.h>

int main() {
    int len = 20;
    char carr[len];
    int iarr[len];
    float farr[len];
    double darr[len];
    memset(carr, 0, sizeof(char) * len);
    memset(iarr, 0, sizeof(int) * len);
    memset(farr, 0, sizeof(float) * len);
    memset(darr, 0, sizeof(double) * len);

    for (int i = 0; i < len; ++i)
        if (carr[i] == '\0')
            printf("%2d:\t%c\n", i, '*');
        else
            printf("%2d:\t%c\n", i, carr[i]);

    for (int i = 0; i < len; ++i) printf("%2d:\t%d\n", i, iarr[i]);
    memset(iarr, 5, sizeof(int) * len);
    for (int i = 0; i < len; ++i) printf("%2d:\t%d\n", i, iarr[i]);

    for (int i = 0; i < len; ++i) printf("%2d:\t%f\n", i, farr[i]);

    for (int i = 0; i < len; ++i) printf("%2d:\t%lf\n", i, darr[i]);
}
