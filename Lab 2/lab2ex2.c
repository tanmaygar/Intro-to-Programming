#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;
    printf("Enter temperature in Celcius: ");
    scanf("%f", &c);
    float f = (((c * 9) / 5) + 32);
    printf("The temperature in Fahrenheit is %f\n", f);
    return 0;

}
