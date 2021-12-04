#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    printf("Enter integer a: ");
    scanf("%d", &a);
    printf("Enter integer b: ");
    scanf("%d", &b);
    printf("the quotient when a is divided by b is %d, and the remainder when a is divided by b is %d.\n", a/b, a%b);

    return 0;
}
