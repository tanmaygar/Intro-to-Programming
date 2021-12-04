/*This for printing lines in reverse order*/
#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *f;
    f = fopen("file.txt", "r");
    char txt[100];
    int len;
    char c;
    //counting the total number of characters
    for(len = 0; !feof(f); len++)
    {
        char c = fgetc(f);
    }
    //printf("%d\n", len);

    /*rewind(f);
    while(!feof(f))
    {
        fgets(txt, sizeof(txt), f);
        printf("%s\n", txt);
        fpos_t a;
        fgetpos(f, &a);
        printf("%p\n",&a);
    }*/

    //printf("\n");
    rewind(f);
    int i = 0;
    int extra = 0;
    //using while loop to print each line
    while(len >= 0)
    {
        fseek(f, i, SEEK_END);
        char b;
        fscanf(f, "%c", &b);
        //checking if going in reverse when we get a new line
        if(b == '\n')
        {
            fgets(txt, sizeof(txt), f);
            printf("%s", txt);
            extra++;
            //for the last line printing
            if(extra == 1)
            {
                printf("\n");
            }
        }
        i--;
        len--;
    }

    rewind(f);
    //printing only for first line
    while(!feof(f))
    {
        fgets(txt, sizeof(txt),f);
        printf("%s", txt);
        break;
    }

    fclose(f);
    return 0;
}
