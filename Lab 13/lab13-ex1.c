/*Write a program to read the file "1000CommonWords.txt" and print
all the 7-letter words in this file on screen.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE_WORD 7
#define WORD_LIMIT 20

int main()
{
    FILE *f;
    char word[WORD_LIMIT];  //defining array of char for the word

    //opening the file
    f = fopen("1000CommonWords.txt","r");
    if(f == NULL)
    {
        printf("Could not open file\n");
        return 1;
    }

    int count = 0;
    //looping through all the words and printing the SIZE_WORD letter words
    while(!feof(f) && !ferror(f))
    {
        fscanf(f,"%s",word);
        int n = strlen(word);
        if(n == SIZE_WORD)
        {
            printf("%s\n", word);
            count++;
        }
    }

    printf("\n");
    //printing number of such words
    printf("count: %d\n",count);

    //closing the file
    fclose(f);
    return EXIT_SUCCESS;
}
