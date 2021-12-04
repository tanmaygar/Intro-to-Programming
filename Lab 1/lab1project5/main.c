#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    float a = 3.14*r*r;
    float c = 3.14*2*r;
    printf("Area = %f, circumference = %f\n",a,c);
}
