/*Write a function that accepts a string and removes duplicates of characters.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input_word[50];
    printf("Enter the string: ");
    scanf("%s", input_word);
    int input_length = strlen(input_word);

    for(int i = 0; i < input_length; i++)
    {
        for(int j = i + 1; j < input_length; j++)
        {
            if(input_word[i] == input_word[j])          //checking if each letter after out letter is repeated
            {
                input_word[j] = '\0';
            }
        }
    }

    printf("Output: ");
    for(int i = 0; i < input_length; i++)
    {
        printf("%c",input_word[i]);
    }
    printf("\n");


    return EXIT_SUCCESS;
}
