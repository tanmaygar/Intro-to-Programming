/*Test iterateFunction on (i) pow(x,y) function from
math.h, (ii) the strcat function (or on your implementation from Lab
9); calling iterateFunction with strcat, 3 and two strings YA and HOO,
should produce YAHOOHOOHOO.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//our iterate function
void *iterateFunction(void*x, void*y,void* (*f)(void*, const void*), unsigned int d)
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

//BEGINNING OF MAIN FUNCTION
int main()
{
    int d = 1;
    double a = 3,b = 4;
    //iterating for pow function
    iterateFunction(&a, &b, pow_new, d);
    printf("%lf\n",a);

    //iterating for strcat function
    char he[30] = "YA";
    char lo[30] = "HOO";
    iterateFunction(he, lo, strcat,3);
    printf("%s\n", he);

    printf("\n");
    return EXIT_SUCCESS;
}
