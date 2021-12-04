/*Write a program to accept a positive integer n, right-rotate it and print the right-rotated
number. For example, if n = 1357, the output is 7135.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    long long int n;
    //asking for input for positive integer n
    do
    {
        printf("Enter a positive number n: ");
        scanf("%lld", &n);
    }while(n <= 0);

    //creating a separate variable for counting number of digits
    long long int num = n;
    int num_len = 0;
    while(num > 0)
    {
        num = num / 10;
        num_len++;
    }

    //creating a tmp variable for putting the number in an array
    long long int tmp_num = n;
    int array_num[num_len];
    for(int i = 0; i < num_len; i++)
    {
        array_num[i] = tmp_num % 10;
        tmp_num = tmp_num / 10;
        //printf("%d\n", array_num[i]);

    }

    //printing the final number
    printf("%d", array_num[0]);
    /*for(int i = num_len - 1; i >= 1; i--)
    {
        printf("%d", array_num[i]);
    }*/
    int i = num_len - 1;
    while(i >= 1)
    {
        printf("%d", array_num[i]);
        i--;
    }

    printf("\n");
    //printf("%d\n", num_len);

    return EXIT_SUCCESS;
}
