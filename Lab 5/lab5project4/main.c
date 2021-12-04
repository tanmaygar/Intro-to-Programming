/*This program accepts two integers m and n and display the perimeter of a m x n rectangle.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int i = 0; i < m; i++)                  //First for loop for each line
    {
        if(i == 0)                              //First line printing stars all throughout
        {
            for(int j = 0; j < n; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else if(i == (m - 1))                   //Last line printing stars all throughout
        {
            for(int j = 0; j < n; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else                                    //Printing only 2 stars for other lines
        {
            for(int j = 0; j < n; j++)
            {
                if(j == 0)                      //printing star for first vertical side
                {
                    printf("*");
                }
                else if(j == (n - 1))
                {
                    printf("*");                //printing star for other vertical side
                }
                else
                {
                    printf(" ");                //printing space for other parts
                }

            }
            printf("\n");
        }

    }
    if((m > 1) && (n > 1))
    {
        printf("The perimeter of rectangle is: %d\n",((m + n - 2) * 2));
    }
    else
    {
        printf("Perimeter is %d but no rectangle is formed it is a straight line\n",((m + n - 1)));
    }

    return EXIT_SUCCESS;
}
