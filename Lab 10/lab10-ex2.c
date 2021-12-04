/*Write a recursive function defined as void permute(char *str, int n)
that prints str with all possible permutations of the first n characters.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Swaps character
void swap_char(char *a, char *b);

//find permutation of the letters
void permute(char *input_char, int length_string,int n);

//BEGINNING OF MAIN FUNCTION
int main()
{
    char input_string[] = "ABCD";
    int n = 4;
    int string_length = n;

    permute(input_string, string_length,n);

    return EXIT_SUCCESS;
}

//Swaps character
void swap_char(char *a, char *b)
{
    char tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

//find permutation of the letters
void permute(char *input_char, int length_string,int n)
{
    char tmp[10];
    strcpy(tmp, input_char);
    if(length_string == 1)          //base case for recursion
    {
        printf("%s\n",tmp);
    }
    else
    {
        for(int i = 0; i < length_string; i++)                  //this loops swaps first letter with each position and finds the recursion permutation
            {
                swap_char( tmp, tmp + (n - length_string) + i );
                permute(tmp, length_string - 1,n);
            }
    }

}
