#include <stdio.h>
#include <math.h>

double sum(double ele[])
{
    double sume = 0.0;
    for (int i=0; !isnan(ele[i]); i++)
        sume+= ele[i];

    return sume;
}

int main()
{
    double *list = (double[]){1.1, 2.2, 3.3, NAN, 4.4, NAN};
    printf("sum=%lf\n",sum(list));
    /* printf("sum=%lf\n",sum((double[]){1.1, 2.2, 3.3, NAN})); */
}
