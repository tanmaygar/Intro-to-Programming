/*Write a program that accepts a character and displays all the letters in the English alphabet starting from the given letter*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    char input_char;
    printf("Enter a character: ");                               //Asking user for input
    scanf("%c", &input_char);

    int char_num = (int)input_char;                         //initializing a variable for ASCII code of input_char
    int counter = 0;                                        //counter for keeping track of number times printed

    if((char_num >= 97) && (char_num <= 122))               //first case for lower case of letters
    {
        for(int i = char_num; i <= 123; i++)
        {
            //if i exceeds 122 then we bring it back to 97 to continue printing other letters
            if(i > 122)
            {
                i = i - 26;
            }
            printf("%c ",i);
            counter++;
            //loop continues for 26 times to print all letters
            if(counter == 26)
            {
                break;
            }
        }
    }
    else if((char_num >= 65) && (char_num <= 90))
    {
        for(int i = char_num; i <= 91; i++)
        {
            //if i exceeds 90 then we bring it back to 65 to continue printing other letters
            if(i > 90)
            {
                i = i - 26;
            }
            printf("%c ",i);
            counter++;
            //loop continues for 26 times to print all letters
            if(counter == 26)
            {
                break;
            }
        }


    }
    //if input character is not a letter then prints the message
    else
    {
        printf("%c is not an English letter\n", input_char);
    }

    printf("\n");
    return EXIT_SUCCESS;
}
