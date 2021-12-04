/*Write a program that accepts the names of two text files and appends
the contents of the second file to the first.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char first_file_name[100], second_file_name[100];
    FILE *first, *second;

    //asking user to input name of first file
    printf("Enter name of first file: ");
    scanf("%s", first_file_name);
    first = fopen(first_file_name, "r");
    if(first == NULL)
    {
        printf("First could not be opened\n");
        return 1;
    }

    //asking user to input name of second file
    printf("Enter name of second file: ");
    scanf("%s", second_file_name);
    second = fopen(second_file_name, "a");
    if(second == NULL)
    {
        printf("Second could not be opened\n");
        return 2;
    }

    //using loop to append content of first file in second
    while(!feof(first))
    {
        char txt[100];
        fgets(txt, sizeof(txt), first);
        fprintf(second, "%s", txt);
    }

    //closing files
    fclose(second);
    fclose(first);
    return EXIT_SUCCESS;
}
