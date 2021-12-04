#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define Min(a,b) (a < b ? a : b)

struct _word_info_t             //struct for our word along with its length
{
    char w[30];
    int str_length;
};

typedef struct _word_info_t word_info_t;

//this function calculates the length of string
int string_length(char c[]);

//this function compares two strings given to it
int compare_two_strings(char first[], char second[], int str_len_first, int str_len_sec);

//BEGINNING OF MAIN FUNCTION
int main()
{
    int num_of_string;
    printf("Enter the number of strings: \n");      //input for number of strings
    scanf("%d", &num_of_string);

    word_info_t word[num_of_string];
    for(int i = 0; i < num_of_string; i++)          //input for string
    {
        printf("Enter string %d: ", i + 1);
        scanf("%s", word[i].w);
        word[i].str_length = string_length(word[i].w);
        printf("\n");
    }

    word_info_t *tmp_ptr;                               //tmp pointer to store our earliest word
    int var_comp;
    for(int i = 0; i < num_of_string - 1; i++)      //loop for comparing two strings
    {
        var_comp = compare_two_strings(word[i].w, word[i + 1].w, word[i].str_length,word[i + 1].str_length);
        if(var_comp == 1 || var_comp == 0)
        {
            tmp_ptr = &word[i];
        }
        if(var_comp == 2)
        {
            tmp_ptr = &word[i + 1];
        }

    }
    printf("The earliest string is: %s\n", tmp_ptr->w);     //printing our earliest word
    return EXIT_SUCCESS;
}

//this function calculates the length of string
int string_length(char c[])
{
    int count = 0;
    do
    {
        count++;
    }while(c[count] != '\0');
    return count;
}

//this function compares two strings given to it
int compare_two_strings(char first[], char second[], int str_len_first, int str_len_sec)
{
    if(str_len_first == str_len_sec)                //case when both string are of same length
    {
        for(int i = 0; i < str_len_first; i++)      //loop for comparing each letter and which comes earlier
        {
            int first_word_num = first[i];          //converting character to int form
            int sec_word_num = second[i];

            if(first_word_num > sec_word_num)       //if letter of first word comes later then return 2
            {
                return 2;
            }
            else if(sec_word_num > first_word_num)  //if letter of second word comes later return 1
            {
                return 1;
            }
            else                                    //separate else statement which does nothing
            {
                // do nothing
            }
        }
        return 0;                                   //if both strings are same then return 0
    }

    else                                            //case when string are not of equal length
    {
        int len = Min(str_len_first, str_len_sec);  //finding min length of two words

        for(int i = 0; i < len; i++)                //loop for comparing each letter and which comes earlier
        {
            int first_word_num = first[i];          //converting character to int form
            int sec_word_num = second[i];

            if(first_word_num > sec_word_num)       //if letter of first word comes later then return 2
            {
                return 2;
            }
            else if(sec_word_num > first_word_num)  //if letter of second word comes later return 1
            {
                return 1;
            }
            else                                    //separate else statement which does nothing
            {
                //do nothing
            }
        }

        if(first[len] == '\0')                      //checks for special case of words
        {
            return 1;
        }
        else if(second[len] == '\0')
        {
            return 2;
        }
        else
        {
            //do nothing
        }
    }

}
