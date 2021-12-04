#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    do{
        printf("Enter a positive integer: ");
        scanf("%i", &num);
    }while(num <= 0);


    // Loop for printing out input number of stars.
    int count_stars = 0;
    while (count_stars < num)
    {
        printf("*");
        count_stars++;
    }
    printf("\n");


    // Loop for printing out all perfect squares upto the number "num".
    printf("All positive squares from 1 to n: ");
    int j = 1;
    while (j * j <= num)
    {
        printf("%i ",j * j);
        j++;
    }
    printf("\n");


    // Loop for finding factorial for the input number
    int num_fact = 1;
    for (int k = 1; k <= num; k++)
    {
        num_fact = num_fact * k;
    }
    printf("The value of n!: %d\n", num_fact);


    // Asking the user to input n numbers equal to that of "num"
    printf("Enter n numbers: ");
    int l = 0, enter_num, sum_enter_num = 0;
    while (l < num)                                                   /*This is the loop for calculating sum of all the input numbers*/
    {
        scanf("%d", &enter_num);
        sum_enter_num+= enter_num;
        l++;
    }
    printf("The value of sum of input number is: %d\n", sum_enter_num);

    return EXIT_SUCCESS;
}
