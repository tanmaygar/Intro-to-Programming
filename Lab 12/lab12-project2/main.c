/*Accept the value of m, n from the user and dynamically allocate memory
for matrix to store a rectangular matrix of size m × n*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double **matrix;
    unsigned int m,n;
    printf("Enter the value of m and n: ");
    scanf("%d %d", &m, &n);
    printf("\n");
    //m = 5;
    //n = 5;
    unsigned int num_elements = m*n;

    //allocating the memory of rows first
    matrix = (double**)malloc(m * sizeof(double*));

    //checking if it exceeds memory
    if(matrix == NULL)
    {
        printf("Failed\n");
        free(matrix);
        return 1;
    }

    //allocating memory for each column of each row
    for(int i; i < m; i++)
    {
        matrix[i] = (double*)malloc(n * sizeof(double));
    }

    //checking if it exceeds memory
    if(matrix == NULL)
    {
        printf("Failed\n");
        free(matrix);
        return 2;
    }

    //initializing the values of matrix to a particular number to check if it is working or not
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            matrix[i][j] = 4;
            printf("%lf ", matrix[i][j]);
        }
        printf("\n");
    }

    //freeing memory
    free(matrix);
    printf("\n");

    return EXIT_SUCCESS;
}
