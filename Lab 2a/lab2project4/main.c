#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
   float a,b,c;
   printf("Enter a : \n");
   scanf("%f", &a);
   printf("Enter b : \n");
   scanf("%f", &b);
   printf("Enter c : \n");
   scanf("%f", &c);
   float d = b*b - 4*a*c;
   if (d > 0)
   {
       printf("Both roots are real\n");
       float root1 = (((b * (-1)) + sqrt(d))/(2*a));
       float root2 = (((b * (-1)) - sqrt(d))/(2*a));
       printf("roots are: %f  %f\n", root1, root2);
   }
   else if (d == 0)
   {
       printf("Both roots are equal\n");
       float root = (((b) * (-1))/(2*a));
       printf("root is: %f\n", root);
   }
   else
   {
       printf("Both roots are imaginary\n");
   }

}
