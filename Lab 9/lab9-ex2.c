/*Write a program that swaps the values of two variables by passing
their addresses.*/
#include <stdio.h>
#include <stdlib.h>

void swap_numbers(int *a, int *b)
{
    //Declaring a tmp variable
    int tmp;
    //assigning the address of a to tmp
    tmp = *a;
    //assigning the address of b to a
    *a = *b;
    //assigning the address of tmp to b
    *b = tmp;
}

int main()
{
    int a,b;
    printf("Enter values of a and b: ");
    scanf("%d %d", &a, &b);
    //a = 6, b = 1;
    printf("Original: a : %d :: b : %d\n", a,b);
    swap_numbers(&a, &b);
    printf("Final   : a : %d :: b : %d\n", a,b);

    return EXIT_SUCCESS;
}
