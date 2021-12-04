#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct _Polynomial_t
{
    int n;
    float coeff[22];
};

typedef struct _Polynomial_t polynomial_t;

//This function prints the polynomial
void print_coeff(polynomial_t p);

//this function finds derivative
void deriv_polynomial_func(polynomial_t p);

//this function finds integral
void int_polynomial_func(polynomial_t p);

//BEGINNING OF MAIN FUNCTION
int main()
{
    polynomial_t polynomial;

    printf("Enter the degree of the polynomial less than 20: ");         //input for degree of polynomial
    scanf("%d", &polynomial.n);
    for(int i = polynomial.n ; i >= 0; i--)
    {
        printf("Enter the coefficient of a_%d: ", i);
        scanf("%f", &polynomial.coeff[i]);
        printf("\n");
    }

    for(int i = polynomial.n + 1; i < 22; i++)              //initializing other coefficients as 0
    {
        polynomial.coeff[i] = 0;
    }

    printf("Original polynomial: \n");                      //printing the original polynomial
    print_coeff(polynomial);
    printf("\n");


    deriv_polynomial_func(polynomial);
    printf("\n");



    int_polynomial_func(polynomial);
    printf("\n");

    return EXIT_SUCCESS;
}

//This function prints the polynomial
void print_coeff(polynomial_t p)
{
    for(int i = p.n; i >=0 ;i--)
    {
      printf("%f ", p.coeff[i]);
    }
    printf("\n");
}

//this function finds derivative
void deriv_polynomial_func(polynomial_t p)
{
    polynomial_t deriv_polynomial;                          //derivative of polynomial

    if(p.n > 0)
    {
        deriv_polynomial.n = p.n - 1;                  //initializing the degree of derivative
        for(int i = p.n; i > 0; i--)                   //calculating the coefficient of derivative
        {
            deriv_polynomial.coeff[i - 1] = (p.coeff[i]) * (i) ;
        }

        printf("The coefficients of derivatives are: \n");      //printing our derivative
        print_coeff(deriv_polynomial);
    }

    if(p.n == 0)
    {
        printf("The coefficients of derivatives are: \n");      //printing our derivative
        float case_0_poly = 0;
        printf("%f \n", case_0_poly);
    }
}

//this function finds integral
void int_polynomial_func(polynomial_t p)
{
    polynomial_t init_polynomial;                           //integral of polynomial
    init_polynomial.n = p.n + 1;                   //initializing the degree of integral
    for(int i = p.n; i >=0; i--)                   //calculating the coefficient of integral
    {
        init_polynomial.coeff[i + 1] = p.coeff[i]/(i + 1);
    }
    init_polynomial.coeff[0] = 0;
    printf("The coefficients of integral are: \n");         //printing our integral
    print_coeff(init_polynomial);
}
