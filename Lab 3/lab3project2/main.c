#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter;
    int n;
    printf("Enter letter: \n");
    scanf("%c", &letter);
    printf("Enter number n: \n");
    scanf("%i", &n);
    if ( ( letter >= 'a' ) && ( letter <= 'z' ))
    {
      if (letter + n <= 122)
        {
            printf("Here is the answer: %c\n", letter + n);
        }
      else
        {
                printf("Here is the answer: %c\n", 'a' + ( ( letter + n -'a' ) % 26 ) );
        }
    }
    else if ( ( letter >= 'A' ) && ( letter <= 'Z' ) )
    {
        if (letter + n <= 90)
        {
            printf("Here is the answer: %c\n", letter + n);
        }
        else
        {
            printf("Here is the answer: %c\n", 'A' + ( ( letter + n - 'A' ) % 26 ) );
        }
    }


    return 0;
}


//tanmay garg
