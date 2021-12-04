/*Write a function swapFirstInversion that accepts (i) a double array
num[], (ii) a positive integer n, and finds the first index i ≤ n − 2 (if
any) such that num[i] > num[i + 1] and swaps num[i] with num[i+1].*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define SIZE 6

//our iterate function
void *iterateFunction(void*x, void*y, void* (*f)(void*, void*), unsigned int d)
{
    //loop for iterating our function f d times
    for(int i = 0; i < d; i++)
    {
        x = ((*f)(x,y));
    }
    //returning x
    return x;
}

//creating a new power function using pow() as pow() doesn't return a pointer
void* pow_new(void*x, const void*y)
{
    *(double*)x = pow(*(double*)x,*(double*)y);
    return (void*)x;
}

//Our swap inversion function which returns pointer to num
void *swapFirstInversion(void *num, void *n)
{
    for(int i = 0; i < (*(int*)n) - 1; i++)
    {
        //looping through each element
        if( ((double*)num)[i] > ((double*)num)[i + 1])
        {
            double tmp = ((double*)num)[i];
            ((double*)num)[i] = ((double*)num)[i + 1];
            ((double*)num)[i + 1] = tmp;
            break;
        }
    }
    //returning pointer to num
    return (void*)num;
}

//BEGINNING OF MAIN FUNCTION
int main()
{
    //our pre defined array
    double num[SIZE]={3,5,6,0,2,7};
    for(int i = 0; i < SIZE; i++)
    {
        printf("%lf ", num[i]);
    }
    printf("\n");

    //swapFirstInversion(num,3);
    int n = SIZE;

    iterateFunction(num, &n, swapFirstInversion, n*(n-1)/2);        //sorting our pre-defined array
    for(int i = 0; i < SIZE; i++)
    {
        printf("%lf ", num[i]);
    }
    printf("\n");


    //add malloc code and take input from user
    double *new_num = (double*)malloc(n * sizeof(double));
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < SIZE; i++)
    {
        printf("Enter: ");
        scanf("%lf", new_num + i);
        printf("\n");
    }


    iterateFunction(new_num, &n, swapFirstInversion, n*(n-1)/2);
    for(int i = 0; i < SIZE; i++)
    {
        printf("%lf ", new_num[i]);
    }
    printf("\n");

    free(new_num);
    return EXIT_SUCCESS;
}
