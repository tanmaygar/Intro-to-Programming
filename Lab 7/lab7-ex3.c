#include <stdio.h>
#include <stdlib.h>

double sum_of_some_elements(double number_array[],int i, int j);

int main()
{
    double number_array[10];
    //number_array[10] = {1,2,3,4,5,6,7,8,9,10};
    //uncomment the above line and comment the below 5 lines for testing directly
    printf("Enter any 10 numbers for the array:");
    for(int count = 0; count < 10; count++)
    {
        scanf("%lf", &number_array[count]);
    }

    int i,j;
    do
    {
        printf("Enter positive integers for i and j such that i <= j: ");
        scanf("%d %d", &i, &j);
    }while(i > j || (i <= 0) || (j <= 0) || (i > 10) || (j > 10));
    //comment the above do while loop and uncomment the below 2 lines for testing directly
    //i = 4;
    //j = 8;

    i--;        //for user number_array[0] is 1st element
    j--;
    printf("Sum of elements between element no. %d and %d: %lf\n", (i + 1), (j + 1), sum_of_some_elements(number_array,i,j));
    return EXIT_SUCCESS;
}

double sum_of_some_elements(double number_array[],int i, int j)
{
    double sum_of_elements = 0;
    for(int k = i; k <= j; k++)
    {
        sum_of_elements = sum_of_elements + number_array[k];
    }
    return sum_of_elements;
}
