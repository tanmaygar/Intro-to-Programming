/*Write a program to accept a number and print the
symbol and name of the element with atomic number n; use the file
chemicalElements.txt and the atoi function.*/
#include <stdio.h>
#include <stdlib.h>
#define NUM_ELEM 112

//defining struct for our elements
struct _chemical_t
{
    int atomic_num;
    char atomic_symbol[4];
    char atomic_name[20];
    char atomic_weight[20];
};

typedef struct _chemical_t element_t;

//BEGINNING OF MAIN FUNCTION
int main()
{
    FILE *f;
    element_t element[NUM_ELEM];                     //array of elements
    f = fopen("chemicalElements1.txt", "r");
    if(f == NULL)
    {
        printf("Could not open file\n");
        return 1;
    }

    //looping through all the elements and storing them in our array
    int i = 0;
    while(!feof(f) && !ferror(f))
    {
        char year_string[10];
        fscanf(f,"%s %s %s %s", year_string, element[i].atomic_symbol, element[i].atomic_name, element[i].atomic_weight);
        element[i].atomic_num = atoi(year_string);
        i++;
    }

    //input for nth element
    int n;
    do
    {
        printf("Enter the number: ");
        scanf("%d", &n);
    }while(n > NUM_ELEM || n <= 0);

    n--;
    //printing the nth element
    printf("%d  %s  %s  %s\n", element[n].atomic_num, element[n].atomic_symbol, element[n].atomic_name, element[n].atomic_weight);
    printf("\n");

    //closing the file
    fclose(f);
    return EXIT_SUCCESS;
}
