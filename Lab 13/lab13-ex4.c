/*A heterogram is a string in which no character is repeated. An
example is the word Apricot, while Apple is not a heterogram. Write
a function IsHeterogram that accepts a string and checks whether it
is a heterogram.*/

/*Read the file 12letterWords.txt and create a file called 12letter-
Hgrams.txt that contains all 12-letter heterograms.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Function for being a heterogram
int isHeterogram(char s[])
{
    int n = strlen(s);

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1 ; j < n; j++)
        {
            if(s[i] == s[j])
            {
                return 10;
            }
        }
    }
    return 12;
}

//BEGINNING OF MAIN FUNCTION
int main()
{
    /*char s[10] = "Hello";
    int num = isHeterogram(s);
    printf("%d\n", num);*/

    FILE *f_list;
    f_list = fopen("12letterwords.txt", "r");
    if(f_list == NULL)
    {
        printf("Could not open file\n");
        return 1;
    }

    //opening a new file for putting our final words
    FILE *f_new = fopen("12letterHgrams.txt", "w");
    char word[20];
    //looping through all the words
    while(!feof(f_list) && !ferror(f_list))
    {
        fscanf(f_list,"%s",word);
        int check_hetergram = isHeterogram(word);
        //if it is a hetergram then it will print the word in the new file
        if(check_hetergram == 12)
        {
            fprintf(f_new,"%s\n", word);
        }
    }


    //closing the file
    fclose(f_new);
    fclose(f_list);
    printf("Done\n");

    return EXIT_SUCCESS;
}
