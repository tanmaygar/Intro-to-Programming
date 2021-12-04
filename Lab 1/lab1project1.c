#include<stdio.h>

int main()
{
    int inputnum1;
    int inputnum2;
    printf("Enter first number: ");
    scanf("%d",&inputnum1);
    printf("Enter second number: ");
    scanf("%d", &inputnum2);
    printf("The sum of two numbers is %d and the product of the two numbers is %d.\n", inputnum1 + inputnum2, inputnum1 * inputnum2);


    return 0;
}
