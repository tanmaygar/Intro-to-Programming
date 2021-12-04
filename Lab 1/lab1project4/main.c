#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    char number[3];
    printf("Enter number: \n");
    scanf("%s", number);
    printf("%c\n", number[0]);
    printf("%c\n", number[1]);
    printf("%c\n", number[2]);
}*/
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%i", &num);
    if (num >=100)
    {
        printf("%d\n", num/100);
        num = num%100;
        printf("%d\n", num/10);
        num = num%10;
        printf("%d\n", num/1);
        num = num%1;
    }
    else if (num < 100 && num > 9)
    {
        printf("%d\n", num/10);
        num = num%10;
        printf("%d\n", num/1);
        num = num%1;
    }
    else
    {
        printf("%d", num);
    }

}
















/*int main()
{
    int num;
    do
    {
        printf("Enter number: ");
        scanf("%i", &num);
    }
    while(num > 1000);

    printf("%d\n", num/100);
    num = num%100;
    printf("%d\n", num/10);
    num = num%10;
    printf("%d\n", num/1);
    num = num%1;

}*/
