/*Write a program to accept a positive integer n, a nxn matrix M, and a vector v, and to print the entries of M.v*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Asking for input for value of n
    int n;
    do
    {
        printf("Enter a natural number n: ");
        scanf("%d", &n);

    }while(n < 0);

    //scanning input for matrix elements
    double matrix_M[n][n];
    printf("Enter the elements of %d x %d Matrix M: \n",n,n);
    for(int row_input = 0; row_input < n; row_input++)
    {
        printf("Enter for row %d: ", (row_input + 1));
        for(int column_input = 0; column_input < n; column_input++)
        {
            scanf("%lf", &matrix_M[row_input][column_input]);
        }
    }
    printf("\n");

    //scanning for vector elements
    double vector_v[n];
    printf("Enter the elements for the vector V: \n");
    for(int row_input_vector = 0; row_input_vector < n; row_input_vector++)
    {
        printf("Enter for row %d: ", (row_input_vector + 1));
        scanf("%lf", &vector_v[row_input_vector]);
    }
    printf("\n");

    double dot_product[n];

    //finding the value of each element of dot_product matrix
    for(int i = 0; i < n; i++)
    {
        dot_product[i] = 0;
        for(int j = 0; j < n; j++)
        {
            dot_product[i] += (matrix_M[i][j] * vector_v[j]);
        }
    }

    //printing the elements of our dot_product matrix
    printf("The elements of dot product are: \n");
    for(int row_value = 0; row_value < n; row_value++)
    {
        printf("%lf\n", dot_product[row_value]);
    }

    return EXIT_SUCCESS;
}
