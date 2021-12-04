#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number n: ");
    scanf("%d", &n);
    float vector_1_array[n], vector_2_array[n];

    printf("Enter the values of the first vector: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%f", &vector_1_array[i]);
    }
    printf("Enter the values of the second vector: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%f", &vector_2_array[i]);
    }
    float dot_product_sum = 0;
    for(int i = 0; i < n; i++)
    {
        dot_product_sum = dot_product_sum + (vector_1_array[i] * vector_2_array[i]);
    }
    printf("The dot product of the two vectors is: %f\n", dot_product_sum);

    return EXIT_SUCCESS;
}
