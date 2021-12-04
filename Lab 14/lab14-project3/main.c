/*Use binary search to find a real root of a real polynomia*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//swap function
void swap(void*a, void*b)
{
    void *tmp = a;
    a = b;
    b = tmp;
}

//function to calculate the value of f(x) where x is some real number
double poly_value(double coeff[], int *n, double *x)
{
    double value = 0;
    for(int i = 0; i < (*n)+1; i++)
    {
        value = value + ((pow(*x,i)) * coeff[i]);
    }
    return value;
}

//binary search function to find the roots
double binary_search(double coeff[], double a, double b, int n, double t)
{

    double c = (a+b)/2;
    //final condition for recursion
    if(fabs(b - a) < 2*(t))
    {
        return c;
    }
    //if a is the root
    else if(poly_value(coeff, &n, &a) == 0)
    {
        return a;
    }
    //if b is the root
    else if(poly_value(coeff, &n, &b) == 0)
    {
        return b;
    }
    //if the root lies on right side of the middle point
    else if(poly_value(coeff, &n, &c) * poly_value(coeff, &n, &b) <= 0)
    {
        a = c;
        return binary_search(coeff, a, b, n, t);
    }
    //if root lies of left side of middle point
    else if(poly_value(coeff, &n, &a) * poly_value(coeff, &n, &b) <= 0)
    {
        b = c;
        return binary_search(coeff, a, b, n, t);
    }
    //condition to print if there is no roots found in that interval
    else
    {
      printf("Please input proper interval such that only one root is there\n");
      return 10;
    }
}

//BEGINNING OF MAIN FUNCTION
int main()
{
    int n = 2;
    //double coeff[3] = {1,-3,1};
    do
    {
        printf("Enter degree n less than 40: ");
        scanf("%d", &n);
    }while(n < 1 || n > 40);


    double coeff[n+1];
    for(int i = 0; i < n + 1; i++)
    {
        printf("Enter coeff x^%d: ", i);
        scanf("%lf", &coeff[i]);
    }
    double a = 0;
    double b = 3;
    //double value = 0;
    double t = 0.001;
    do
    {
        printf("Enter the value of a b t that f(a)*f(b) < 0: ");
        scanf("%lf %lf %lf", &a, &b, &t);
    }while((poly_value(coeff, &n, &a) * poly_value(coeff, &n, &b) > 0) || a > b);

    double root = binary_search(coeff, a, b, n, t);
    if(root == 10)
    {
        return EXIT_SUCCESS;
    }
    printf("%lf\n", root);

    return EXIT_SUCCESS;
}
