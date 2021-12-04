/*The sample file string-functions.c has a couple of example functions, and two more
function declarations; one for printing a string multiple times, and another, for printing
a substring of a string. Fill in the code inside these functions (this is usually called
the function definition).*/

#include<stdio.h>
#include <stdlib.h>

// This function returns the length of text.
unsigned int stringLength(char text[]);

// This function prints the character ch count many times.
void multiCharPrint(char ch,unsigned int count);

//This function prints the string text, count many times.
void multiStringPrint(char text[],unsigned int count);

//This function prints the substring of the given string text, between indices i and j, inclusive.
void substringPrint(char text[],unsigned int i, unsigned int j);

int main()
{
    char string[20]="Applesauce";
    printf("\n Length is %u \n",stringLength(string));

    multiCharPrint('*',10);
    printf("\n");

    int print_multiple;
    //print_multiple = 3;
    //uncomment above line and comment next 2 lines for testing directly
    printf("How many times would you like to print the word: ");
    scanf("%d", &print_multiple);

    //printing our string multiple times
    multiStringPrint(string, print_multiple);

    int string_length = stringLength(string);
    unsigned int i,j;
    do
    {
      printf("Enter the indices i and j between which the substring is to be printed: ");
      scanf("%u %u", &i,&j);
    }while((i > j) || (i > string_length) || (j > string_length) || (i <= 0) || (j <= 0));

    i--;                    //this is done in order to match with the indices inside the array
    j--;
    //comment the do while loop and above 2 lines then uncomment next line to test directly
    //i = 3, j = 8;
    printf("The substring is: ");
    substringPrint(string, i, j);

    printf("\n");
    return EXIT_SUCCESS;
}

// This function returns the length of text.
unsigned int stringLength(char text[])
{
    unsigned int i;
    i=0;
    while (text[i]!='\0')
    {
        i=i+1;
    }
    return i;
}
// This function prints the character ch count many times.
void multiCharPrint(char ch,unsigned int count)
{
    unsigned int i=1;
    while (i<=count)
    {
        printf("%c",ch);
        i=i+1;
    }
}

//This function prints the string text, count many times.
void multiStringPrint(char text[],unsigned int count)
{
  //for loop to print the string multiple times
    for(int i = 0; i < count; i++)
    {
        printf("%s\n", text);
    }

}

//This function prints the substring of the given string text, between indices i and j, inclusive.
void substringPrint(char text[],unsigned int i, unsigned int j)
{
    //using a for loop to print the characters between the indices i and j both inclusive
    for(int k = i; k <= j; k++)
    {
        printf("%c", text[k]);
    }
    printf("\n");
}



