#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int input_num, divisor_count = 0;
    printf("Enter number: ");
    scanf("%d", &input_num);
    float sqrt_input_num = sqrt(input_num);

    for(int i = 1; (float)i <= sqrt_input_num; i++)
    {
        if(input_num % i == 0)
        {
           if(input_num / i == i)
           {
             divisor_count++;
           }
           else
           {
             divisor_count = divisor_count + 2;
           }
        }

    }

    printf("The number of divisors: %d\n", divisor_count);
    return EXIT_SUCCESS;
}
