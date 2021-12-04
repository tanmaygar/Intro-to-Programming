/*This program accepts a string and prints the number of occurence of each vowel and total length of string*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input_string[30];
    printf("Enter string: ");
    //scanf("%s", input_string);
    fgets(input_string, sizeof(input_string), stdin);
    int count_a = 0, count_e = 0, count_i = 0, count_o = 0, count_u = 0, length_input_string = 0;
    for(int i = 0; input_string[i] != '\0'; i++)                //Using for loop to check for each character
    {
        if((input_string[i] == 'a') || (input_string[i] == 'A'))
        {
            count_a++;                                          //For checking A
        }
        else if((input_string[i] == 'e') || (input_string[i] == 'E'))
        {
            count_e++;                                          //For checking E
        }
        else if((input_string[i] == 'i') || (input_string[i] == 'I'))
        {
            count_i++;                                          //For checking I
        }
        else if((input_string[i] == 'o') || (input_string[i] == 'O'))
        {
            count_o++;                                          //For checking O
        }
        else if((input_string[i] == 'u') || (input_string[i] == 'U'))
        {
            count_u++;                                          //For checking U
        }
        length_input_string++;                                  //For adding length of string
    }
    printf("A: %d\n",count_a);
    printf("E: %d\n",count_e);
    printf("I: %d\n",count_i);
    printf("O: %d\n",count_o);
    printf("U: %d\n",count_u);
    /*We have subtracted 1 from the length of string as fgets counts the enter key as one character upon giving the text*/
    printf("String length: %d\n",(length_input_string - 1));
    return EXIT_SUCCESS;
}
