#include <stdio.h>

#define pname(cmd) printf("sizeof(" #cmd " = %lu\n", sizeof(cmd))
#define concat(item1, item2) (item1 ## item2)

int main()
{
    int concat(i, sz);
    pname(concat(i,sz));
}
