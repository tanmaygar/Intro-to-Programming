#include <stdio.h>
#include <stdlib.h>

int main()
{
  char name[100];
  printf("name? ");
  scanf("%s", name);
  printf("Hello ");
  name[0] = "Z";
  printf("%s\n", name);
}






















//int n = strlen(name);
/*for (int i = 1; i < n; i = i + 1)
  {
      printf("%c", name[i]);
  }*/
