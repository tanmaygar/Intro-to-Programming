#include <stdio.h>
#include <stdlib.h>
#include "test.h"
#define SIZE 100
int main()
{
    print_hello();
    char name[SIZE];
    ask_name(name);
    print_name(name);
    return 0;
}
