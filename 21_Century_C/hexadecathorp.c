#include <stdio.h>
#include <math.h>  //NAN

#define pfcmd_len(cmd) printf(#cmd " = %d\n", cmd)
#define Setup_list(name, ...)\
double *name##_list = (double[]){__VA_ARGS__, NAN};\
int name##_len = 0;\
for (name##_len = 0;\
     !isnan(name##_list[name##_len]);\
    name##_len++)

int main() {
    Setup_list(items, 1, 2, 4, 8);
    pfcmd_len(items_len);
}
