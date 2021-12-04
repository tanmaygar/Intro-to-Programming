#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   int b;
   printf("Enter first number: ");
   scanf("%d", &a);
   printf("Enter the second number: ");
   scanf("%d", &b);
   printf("The quotient is %d, the remainder is %d\n", (a/b), a%b);
}
