#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)        //loop for printing stars on different lines
    {
        for(int j = 0; j < i; j++)      //loop for printing stars on the same line
        {
            printf("*");
        }
        printf("\n");
    }
}
