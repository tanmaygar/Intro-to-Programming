#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;

    x=5/4;
    printf(" %f\n",x);

    x=5.0/4.0;
    printf(" %f\n",x);
    printf(" %.1f\n",x);

    //Modify the next line so that the correct value is printed.
    x=4.0/5;
    printf(" %f\n",x);

    //Modify the print statement to print up to 2 digits of accuracy.
    x=3.1416;
    printf(" %.2f\n",x);
    return 0;
}
