/*This program accepts a string and a number k and prints the string left-rotated k times.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input_string[30];
    int k;
    printf("Enter string: ");
    scanf("%s", input_string);

    int length_input_string = 0;
    for(int i = 0; input_string[i] != '\0'; i++)            //counting length of string
    {
        length_input_string++;
    }

    printf("Enter the number of left rotations: ");         //user inputs value k
    scanf("%d", &k);
    char rotated_array[length_input_string];
    int num_for_new_array;                                  //declared new int variable for adding to rotated_array
    for(int i = 0; i < length_input_string; i++)
    {
        num_for_new_array = i - k;                          //left rotation thats why subtraction
        while(num_for_new_array < 0)
        {
            num_for_new_array = num_for_new_array + length_input_string;  //doing this so that num_for_new_array becomes positive to use as index for rotated_array
        }
        //num_for_new_array = (39916800 + i - k) % length_input_string;
        rotated_array[num_for_new_array] = input_string[i];
    }
    for(int i = 0; i < length_input_string; i++)                //printing our new rotated word
    {
        printf("%c", rotated_array[i]);
    }
    printf("\n");


    return 0;
}
