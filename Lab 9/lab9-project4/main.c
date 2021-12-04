/*The library string.h has a function called strcat, which is declared as
char *strcat(char *dest, const char *src). It appends (concatenates
at the end), the string pointed to by src to the string pointed to by
dest. Write your own implemenation of this function.*/

#include <stdio.h>
#include <stdlib.h>

//my own strcat function
char *strcat_own(char *dest, const char *src)
{
    int str_len = 0;
    //calculating the length of dest string
    do
    {
        str_len++;
    }while(dest[str_len] != '\0');

    //changing the members of array after the dest string ends
    for(int i = str_len; src[i - str_len] != '\0'; i++)
    {
        dest[i] = src[i - str_len];
    }
    return dest;
}

//BEGINNING OF MAIN FUNCTION
int main()
{
    char dest_text[100] = "This is ";
    char src_text[50] = "ID 1063";

    //applying our strcat function
    strcat_own(dest_text, src_text);
    printf("%s\n", dest_text);

    return EXIT_SUCCESS;
}
