#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Question: What are the color of apples?\n");
    printf("A: Red\n");
    printf("B: Green\n");
    printf("C: Blue\n");
    printf("D: Orange\n");
    char option;
    printf("Enter the answer: \n");
    scanf("%c", &option);
    if (option == 'A' || option == 'a')
    {
        printf("Answer is correct!\n");
    }
    else
    {
        printf("Answer is incorrect :| \n");
    }
}
