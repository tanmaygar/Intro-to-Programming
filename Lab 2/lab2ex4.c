#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>

int main()
{
   float a , b , c;
   printf("Enter number a: \n");
   scanf("%f", &a);
   printf("Enter number b: \n");
   scanf("%f", &b);
   printf("Enter number c: \n");
   scanf("%f", &c);

   float D = (b * b) - (4 * a * c);
   if (D > 0)
   {
       printf("Roots are real\n");
       float root1 = ((-b + sqrt(D)) / (2 * a));
       float root2 = ((-b - sqrt(D)) / (2 * a));
       printf("The roots are: %f and %f\n", root1, root2);
   }
   else if (D == 0)
   {
       printf("Roots are equal\n");
       float root = ((-b + sqrt(D)) / (2 * a));
       printf("The roots are: %f\n", root);
   }
   else
   {
       printf("Roots are imaginary\n");
   }
   return 0;
}
