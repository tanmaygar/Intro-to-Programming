/*Write a function for calculating fallingFactorial and realBinomialCoefficient*/
#include <stdio.h>
#include <stdlib.h>

long double fallingFactorial(long double x, int n);

long double factorial(int n);

long double realBinomialCoefficient(long double x, int n);

//BEGINING OF MAIN FUNCTION
int main()
{
    long double x;
    int n;
    //x = 10;
    //n = 5;
    //uncomment the above 2 lines and comment the below lines to test directly

    //Asking input for value of x
    printf("Enter the value of x: ");
    scanf("%Lf", &x);

    //asking input for value of n taking care that x > n
    do
    {
      printf("Enter a positive integer for n: ");
      scanf("%d", &n);
    }while ((n > x) || (n <= 0));

    printf("The value of falling factorial is: %Lf\n", fallingFactorial(x,n));

    printf("The value of the Binomial Coefficient is: %Lf\n", realBinomialCoefficient(x,n));

    return EXIT_SUCCESS;
}


long double fallingFactorial(long double x, int n)
{
    //using for loop to multiply from x till (x - ( n - 1 ) )
    long double falling_factorial_value = 1;
    for(int i = 0; i < n; i++)
    {
        falling_factorial_value = falling_factorial_value*(x - i);
    }
    return falling_factorial_value;
}

long double factorial(int n)
{
    //using fallingFactorial to compute factorial
    long double n_factorial = fallingFactorial(n,n);
    return n_factorial;
}

long double realBinomialCoefficient(long double x, int n)
{
    //using fallingFactorial and factorial function to compute the binomial coefficient
    long double binomial_coefficient_value = fallingFactorial(x,n) / factorial(n);
    return binomial_coefficient_value;
}

