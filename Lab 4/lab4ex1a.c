#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a positive integer: \n");
    scanf("%i", &num);
    int i = 0;
    while (i < num)
    {
        printf("*");
        i++;
    }
    printf("\n");

}
