/*Write a program to create a 3D array (of any type) of size 2 x 3 x 4
and print the addresses of all the array locations.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //asking for input for the size of array
    int a, b, c;
    printf("Enter the size of the 3D array: ");
    scanf("%d %d %d",&a, &b, &c);
    //a = 2, b = 3, c = 4;
    int array[a][b][c];
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            for(int k = 0; k < c; k++)
            {
                printf("array[%d][%d][%d]: %p\n",i, j, k, &array[i][j][k]); //printing the address of the array element
            }
        }
    }

    return EXIT_SUCCESS;
}
