#include <stddef.h>
#include <stdio.h>

long long int fibonacci() {
    static long long int first = 0;
    static long long int second = 1;
    long long int out = first + second;
    first = second;
    second = out;

    return out;
}

typedef struct {
    int a, b;
    double c, d;
} abcd_s;

int main() {
    /* for (int i=0; i< 100; i++) */
    /* printf("%lli\n", fibonacci()); */

    abcd_s list[3] = {{.a = 1, .b = 2, .c = 3.0, .d = 4.0},
                      {.a = 5, .b = 6, .c = 7.0, .d = 8.0},
                      {.a = 9, .b = 10, .c = 11.0, .d = 12.0}};


    printf("sizeof(size_t)=%lu\n", sizeof(size_t));

    /* char *p0 = &list; */
    /* printf("&list=%p\n", &list); */
    printf("(size_t)&list=%p\n", (size_t)&list);


    /* char *p = (size_t)&list + sizeof(abcd_s) * 2 + offsetof(abcd_s, d); */
    /* double *pd = (double*)p; */
    /* printf("d=%lf\n", *pd); */
    /* char *p = (char*)list + sizeof(abcd_s) * 2 + offsetof(abcd_s, d); */
    /* printf("d=%lfi, offset from base = %lu, size=%lu\n", *((double*)p), offsetof(abcd_s, d), sizeof(abcd_s)); */


    return 0;
}
