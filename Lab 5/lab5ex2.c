/*This program accepts an array of integers of size n and prints smallest and largest number out of them*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int num_array[n];
    printf("Enter n number one by one: \n");
    for(int i = 0; i < n; i++)                  //Loop for scanning for each number
    {
        scanf("%d",&num_array[i]);
    }
    int large_num = num_array[0];
    for(int i = 0; i < n; i++)                  //Checking if num_array[i] is greater than large_num which we have initialized
    {
        if(num_array[i] > large_num)            //If the number is greater than already initialized large_num then we make large_num that number
        {
            large_num = num_array[i];
        }
    }
    printf("The largest number is: %d\n", large_num);
    int small_num = num_array[0];
    for(int i = 0; i < n; i++)                  //Checking if num_array[i] is greater than small_num which we have initialized
    {
        if(num_array[i] < small_num)            //If the number is greater than already initialized small_num then we make small_num that number
        {
            small_num = num_array[i];
        }
    }
    printf("The smallest number is: %d\n",small_num);



    return EXIT_SUCCESS;
}
