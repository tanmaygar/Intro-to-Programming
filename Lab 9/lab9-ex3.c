/*Create a typedef structure called complex, which can store the real and
imaginary parts of a complex number, and write the following three
functions: a function that accepts two complex values and returns
their sum, a function that accepts two complex values and returns
their product, a function that accepts the address of a complex value
and accepts the real and imaginary parts.*/

#include <stdio.h>
#include <stdlib.h>

struct _complex_t
{
    double x;
    double y;
};
typedef struct _complex_t complex_t;

//function for printing the complex numbers
void print_complex(complex_t complex);

//function for adding the two complex numbers
complex_t func_sum_complex(complex_t c1, complex_t c2);

//function for multiplying two complex numbers
complex_t func_prod_complex(complex_t c1, complex_t c2);

//function for accepting a complex number from user
void accept_complex_user(complex_t *complex);

//printing complex number using address
void print_complex_using_address(complex_t *complex);

//BEGINNING OF MAIN FUNCTION
int main()
{
    complex_t complex_1 = { 1 , 2 };
    complex_t complex_2 = { 2 , 3 };
    //printing our initialized complex numbers
    print_complex(complex_1);
    print_complex_using_address(&complex_1);
    print_complex(complex_2);


    printf("\n");

    //printing the sum of complex numbers
    complex_t sum_complex = func_sum_complex(complex_1, complex_2);
    printf("The sum is:\n");
    print_complex(sum_complex);

    printf("\n");

    //printing the product of complex the numbers
    complex_t prod_complex = func_prod_complex(complex_1,complex_2);
    printf("The product is: \n");
    print_complex(prod_complex);
    printf("\n");

    //asking for input of two complex numbers
    printf("Enter the complex numbers:\n \n");
    complex_t complex_3;
    complex_t complex_4;
    printf("Complex no.3 \n");
    accept_complex_user(&complex_3);
    printf("Complex no.4 \n");
    accept_complex_user(&complex_4);

    printf("\n");
    //printing the input complex numbers
    print_complex(complex_3);
    print_complex_using_address(&complex_3);
    print_complex(complex_4);


    //printing the sum of complex numbers
    complex_t sum_complex_user = func_sum_complex(complex_3, complex_4);
    printf("\nThe sum is:\n");
    print_complex(sum_complex_user);

    printf("\n");

    //printing the product of complex numbers
    complex_t prod_complex_user = func_prod_complex(complex_3,complex_4);
    printf("The product is: \n");
    print_complex(prod_complex_user);
    printf("\n");


    return EXIT_SUCCESS;
}

//function for printing the complex numbers
void print_complex(complex_t complex)
{
    printf("Complex number is ( %lf ) + ( %lf )I\n", complex.x, complex.y);
}

//function for adding the two complex numbers
complex_t func_sum_complex(complex_t c1, complex_t c2)
{
    complex_t sum_of_complex;
    sum_of_complex.x = c1.x + c2.x;
    sum_of_complex.y = c1.y + c2.y;
    return sum_of_complex;
}

//function for multiplying two complex numbers
complex_t func_prod_complex(complex_t c1, complex_t c2)
{
    complex_t prod_of_complex;
    prod_of_complex.x = (c1.x * c2.x) - (c1.y * c2.y);
    prod_of_complex.y = (c1.x * c2.y) + (c1.y * c2.x);
    return prod_of_complex;
}

//function for accepting a complex number from user
void accept_complex_user(complex_t *complex)
{
    complex_t c1;
    printf("enter complex no: ");
    scanf("%lf %lf", &c1.x, &c1.y);
    *complex = c1;
}

//printing complex number using address
void print_complex_using_address(complex_t *complex)
{
    printf("Print Complex using address: ( %lf ) + ( %lf )I\n", complex->x, complex->y);
}
