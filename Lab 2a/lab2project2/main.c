#include <stdio.h>
int main()
{
    float c;
    printf("Enter Temp in Celcius: \n");
    scanf("%f",&c);
    float f = (c * 9)/5 + 32;
    printf("Temp in far: %f\n", f);
}
