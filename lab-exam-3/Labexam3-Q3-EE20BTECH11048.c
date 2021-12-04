/*Write a program that accepts an English word and prints the number of syllables it has,
using the files \1syllablenouns.txt",\2syllablenouns.txt",\3syllablenouns.txt",\4syllablenouns.txt".
If the word is not present in these files, you can print \Unable to find the number of
syllables".*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 100

//function to check if the word belongs to the file
void word_check_func(FILE *ptr, char word[], int *word_find_check, int file_num);

//BEGINNING OF MAIN FUNCTION
int main()
{
    int word_find_check = 0;
    char word[SIZE];
    printf("Enter the word: ");
    fgets(word, sizeof(word), stdin);

    //removing '\n' from the word
    int word_len = strlen(word);
    word[word_len - 1] ='\0';
    word_len--;

    //opening and checking each file
    FILE *one, *two, *three, *four;
    one = fopen("1syllablenouns.txt", "r");
    if(one == NULL)
    {
        printf("File could not open\n");
        return 1;
    }

    two = fopen("2syllablenouns.txt", "r");
    if(two == NULL)
    {
        printf("File could not open\n");
        fclose(one);
        return 2;
    }

    three = fopen("3syllablenouns.txt", "r");
    if(three == NULL)
    {
        printf("File could not open\n");
        fclose(one);
        fclose(two);
        return 3;
    }

    four = fopen("4syllablenouns.txt", "r");
    if(four == NULL)
    {
        printf("File could not open\n");
        fclose(one);
        fclose(two);
        fclose(three);
        return 4;
    }

    //checking for the word belonging to the file
    word_check_func(one, word, &word_find_check,1);
    word_check_func(two, word, &word_find_check,2);
    word_check_func(three, word, &word_find_check,3);
    word_check_func(four, word, &word_find_check,4);

    //if word doesnt belong to any file
    if(word_find_check == 0)
    {
        printf("Unable to find the number of syllables\n");
    }

    fclose(one);
    fclose(two);
    fclose(three);
    fclose(four);
    return EXIT_SUCCESS;
}

//function to check if the word belongs to the file
void word_check_func(FILE *ptr, char word[], int *word_find_check, int file_num)
{
    int comp_word_len;
    while(!feof(ptr))
    {
        char comp_word[SIZE];
        fgets(comp_word, sizeof(comp_word), ptr);

        //removing '\n' and '\r'
        comp_word_len = strlen(comp_word);
        comp_word[comp_word_len - 1] = '\0';
        comp_word[comp_word_len - 2] = '\0';

        if(strcmp(word, comp_word) == 0)
        {
            printf("It is a %d syllable word\n", file_num);
            *word_find_check = 1;
            break;
        }
    }
}
