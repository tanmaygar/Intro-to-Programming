#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    float area = 3.14 * r * r;
    float circum = 3.14 * 2 * r;
    printf("The area of circle is %f, the circumference of circle is %f \n", area, circum);
}
