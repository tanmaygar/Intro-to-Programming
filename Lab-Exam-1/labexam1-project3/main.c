/*Write a program which accepts the the values of the resistances (a_is and b_is as in the
picture) in two arrays, and prints the effective resistance between A and B.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n;                                  //input number n for a_i and b_i
    printf("Enter the value of n: ");
    scanf("%d", &n);
    float resistance_a[n], resistance_b[n];     //using an array of floating numbers

    printf("Enter the value of a_i: ");         //asking user to input resistance for a_i using a for loop for each iteration
    for(int i = 0; i < n; i++)
    {
        scanf("%f", &resistance_a[i]);
    }

    printf("Enter the value of b_i: ");         //asking user to input resistance for b_i using a for loop for each iteration
    for(int i = 0; i < n; i++)
    {
        scanf("%f", &resistance_b[i]);
    }

    double eq_resistance = resistance_b[( n - 1 )]; //initializing our equivalent resistance variable as (n-1)th b resistance
    int i_th_res;                       //i_th_res is i_th resistance for using in series and parallel formula
    int i_1_th_res;                     //i_1_th_res is (i-1)th resistance for using in series and parallel formula

    for(int i = n; i > 1; i--)          //for loop for applying series and parallel operation on resistances
    {
        i_th_res = i - 1;
        i_1_th_res = i_th_res - 1;
        eq_resistance = resistance_a[i_th_res] + eq_resistance;
        eq_resistance = ((eq_resistance * resistance_b[i_1_th_res]) / (eq_resistance + resistance_b[i_1_th_res]));
    }
    //finally adding first resistance of the circuit that is a_1 ( but according to array resistance_a[0]
    eq_resistance = resistance_a[0] + eq_resistance;

    //printing upto 4 decimal places
    printf("The equivalent resistance is %.4f\n",eq_resistance);
    return EXIT_SUCCESS;
}
