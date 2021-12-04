#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Welcome to QnA\nGet Ready for some questions\n");

    printf("Q1. What is the color of apples?\nA. Red\nB. Green\nC. Blue\nD. Orange\n");
    char q1_option;
    int score = 0;
    printf("Your answer: ");
    scanf("%s", &q1_option);
    if (q1_option == 'A' || q1_option == 'a')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Incorrect\n");
    }

    printf("Q2. What is the color of grapes?\nA. Red\nB. Green\nC. Blue\nD. Orange\n");
    char q2_option;
    printf("Your answer: ");
    scanf("%s", &q2_option);
    if (q2_option == 'B' || q2_option == 'b')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Incorrect\n");
    }

    printf("Q3. What is the color of orange?\nA. Red\nB. Green\nC. Blue\nD. Orange\n");
    char q3_option;
    printf("Your answer: ");
    scanf("%s", &q3_option);
    if (q3_option == 'D' || q3_option == 'd')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Incorrect\n");
    }

    printf("Q4. What is the capital of India?\nA. Delhi\nB. Mumbai\nC. Chennai\nD. Guwahati\n");
    char q4_option;
    printf("Your answer: ");
    scanf("%s", &q4_option);
    if (q4_option == 'A' || q4_option == 'a')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Incorrect\n");
    }
    printf("The score is: %d\n", score);

}
/*#include <stdio.h>

int main () {
   char c;

   printf("Enter character: ");
   c = getchar();

   printf("Character entered: ");
   putchar(c);

   return(0);
}*/
//tanmay
