/*This program accepts a string as input and prints all subsets of the string (in any order).*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    char input_string[30];
    int k;
    printf("Enter string: ");
    scanf("%s", input_string);

    int length_input_string = 0;
    for(int i = 0; input_string[i] != '\0'; i++)                        //calculating length of string
    {
        length_input_string++;
    }
    unsigned last_word_length_input_string = pow(2,length_input_string);
    for(int i = 0; i < last_word_length_input_string; i++)                //loop for word created by representing the word for example,
                                                                    //from CAT the word CT can be represented as 101, AT as 011 and so on
    {
        //for(int j = length_input_string - 1; j >= 0; j--)
        for(int j = 0; j < length_input_string; j++)
        {
            if(i & (1 << j))                            //loop to find which letter is occurring in the word using bitwise AND
            {
                printf("%c",input_string[j]);
            }
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
