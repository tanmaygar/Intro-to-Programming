#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number n: ");
    scanf("%d", &n);
    int histogram_array[n];
    printf("Enter the %d numbers: ", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &histogram_array[i]);
    }

    int large_num = histogram_array[0];
    for(int k = 0; k < n; k++)
    {
        if(histogram_array[k] > large_num)
        {
            large_num = histogram_array[k];
        }
    }

    for(int j = large_num; j > 0; j--)
    {
        for(int i = 0; i < n; i++)
        {
            if(histogram_array[i] >= j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
