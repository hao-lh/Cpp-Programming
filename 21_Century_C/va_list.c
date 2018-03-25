#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int func(int first, int second, int last, ...) {
    int const sz = 4;
    va_list vl;
    va_start(vl, last);
    double arr_max;
    double value = va_arg(vl, double);
    for (size_t i = 1; i < sz; i++)
        arr_max = ((value = va_arg(vl, double)) > arr_max) ? value : arr_max;
    va_end(vl);
    printf("max = %lf\n", arr_max);
}

int main(int argc, char** argv) {
    for (int i = 0; i < argc; i++) printf("%2d: %s\n", i, argv[i]);

    int ia = atoi(argv[1]);
    int ib = atoi(argv[2]);
    int ic = atoi(argv[3]);

    double da = atof(argv[4]);
    double db = atof(argv[5]);
    double dc = atof(argv[6]);
    double dd = atof(argv[7]);

    func(ia, ib, ic, da, db, dc, dd);
}
