#include <stdio.h>
#include <stdlib.h>

int main()
{
   char name[100];
   printf("Enter name: \n");
   scanf("%s", name);
   printf("Hello ");
   name[0] = 'Z';
   printf("%s", name);

}
