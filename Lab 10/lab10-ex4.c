/*Accept a polynomial P(x) and another polynomial Q(x) of
degree two from the user and print the coefficients of the remainder
when P(x) is divided by Q(x).
*/
#include <stdio.h>
#include <stdlib.h>

struct _Polynomial_t
{
    int n;
    int array_coeff[10];
};

typedef struct _Polynomial_t polynomial_t;

int main()
{
    polynomial_t P_x, Q_x;
    //Asking for input for P(x)
    printf("Enter degree of first polynomial: \n");
    scanf("%d", &P_x.n);
    for(int i = 0; i <= P_x.n; i++)
    {
        printf("Enter the value a_%d: ",i);
        scanf("%d", &P_x.array_coeff[i]);
        printf("\n");
    }

    //Asking for input for Q(x)
    printf("Second polynomial of degree 2\n");
    Q_x.n = 2;
    for(int i = 0; i <= Q_x.n; i++)
    {
        printf("Enter the value b_%d: ",i);
        scanf("%d", &Q_x.array_coeff[i]);
        printf("\n");
    }

    //Using long division method to calculate the remainder
    for(int i = P_x.n; i >= 2; i--)
    {
        for(int j = 2; j >= 0; j--)
        {
            P_x.array_coeff[i - j] = P_x.array_coeff[i - j] - (P_x.array_coeff[i] * Q_x.array_coeff[2 - j] / Q_x.array_coeff[2]);
        }
    }

    //Instead of creating another polynomial for remainder we are modifying original P(x) and print the coefficients
    if(P_x.array_coeff[1] == 0)
    {
        printf("The remainder is: %d\n", P_x.array_coeff[0]);
    }
    else
    {
        printf("The remainder is: %d x + %d\n", P_x.array_coeff[1], P_x.array_coeff[0]);
    }


    return EXIT_SUCCESS;
}
