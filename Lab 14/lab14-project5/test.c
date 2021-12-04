#include <stdio.h>
#include "test.h"
#define SIZE 100

//printing hello world on screen
void print_hello()
{
    printf("Hello world\n");
}

//asking name of user
void ask_name(char *name)
{
    printf("Enter your name: ");
    fgets(name, SIZE, stdin);
    printf("\n");
}

//printing hello along with name of user
void print_name(char *name)
{
    printf("Hello %s\n", name);
}
