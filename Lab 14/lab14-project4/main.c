/*Implement the selection sort algorithm.*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

//swap function
void swap(int *a, int *b);

//selection sort function to sort array of integers
void selection_sort(int array[], int n);

//BEGINNING OF MAIN FUNCTION
int main()
{
    //defining our array
    int array[SIZE] = {10,4,-1,1,0};
    selection_sort(array, SIZE);
    //printing our sorted array
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    return EXIT_SUCCESS;
}

//swap function
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

//selection sort function to sort array of integers
void selection_sort(int array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(array[j] < array[i])
            {
                swap(&array[j], &array[i]);
            }
        }
    }
}
