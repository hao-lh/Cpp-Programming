#include <stdio.h>

int a(int *p)
{
    int y = *p;
    return y;
}

int main()
{
    int *p = 0;
    return a(p);
}
