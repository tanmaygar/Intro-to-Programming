#include<stdio.h>
#include<complex.h>
#include <math.h>


int main()
{
    double complex z=2.0+3.0*I;
    printf(" %lf %lf\n",creal(z),cimag(z));
    double complex z2 = 1.0 + 2.0*I;
    double complex zp = (creal(z)*creal(z2)) - (cimag(z)*cimag(z2)) + ((creal(z)*cimag(z2)) + (cimag(z)*creal(z2)))*I;
    printf(" %lf %lf\n",creal(zp),cimag(zp));
    return 0;
}
