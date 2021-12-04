#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<complex.h>

int main()
{
    double complex z = 2.0 + 3.0 * I;

    //printf(" %lf %lf\n", creal(z), cimag(z));

    double complex z2 = 5.0 + 4.0 * I;

    double complex zp = ( (creal(z) * creal(z2)) - (cimag(z) * cimag(z2) )) + ( (creal(z)*cimag(z2)) + (creal(z2)*cimag(z)) ) * I;

    printf("%lf %lf\n", creal(zp), cimag(zp));

    return 0;
}


