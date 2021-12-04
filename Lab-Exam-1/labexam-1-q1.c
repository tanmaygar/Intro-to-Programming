/*Write a program that accepts a number in {1, 2, . . . , 999} and spells it in English.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int input_num;
    printf("Enter the number between 1 and 999 : ");
    scanf("%d", &input_num);
    int hundred_place = input_num / 100;                //checks if it is a three digit number

    if(hundred_place > 0)
    {
      switch(hundred_place)
      {                                                 //printing word for hundred's place
        case 1:
            printf("one ");
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
            break;
      }
      printf("hundred ");
      if(input_num % 100 != 0)                  // printing "and" for cases when ten's or once's place are non zero
      {
          printf("and ");
      }
    }

    input_num = input_num % 100;                //converting the input_num to 2 digit number
    int ten_place = input_num / 10;             //finding ten's digit place number

    if((ten_place >= 2) || (ten_place == 0))       //printing for cases when ten's digit is greater than 1 or equal to 0
    {
      switch(ten_place)
      {
        case 0:
              break;
        case 2:
            printf("twenty ");
            break;
        case 3:
            printf("thirty ");
            break;
        case 4:
            printf("forty ");
            break;
        case 5:
            printf("fifty ");
            break;
        case 6:
            printf("sixty ");
            break;
        case 7:
            printf("seventy ");
            break;
        case 8:
            printf("eighty ");
            break;
        case 9:
            printf("ninety ");
            break;
      }

      input_num = input_num % 10;           //converting input_num to 1 digit number

      switch(input_num)                     //printing for all cases of one's place
      {
        case 0:
            break;
        case 1:
            printf("one ");
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
            break;
      }
    }
    if((input_num >= 10) && (input_num <= 19))              //this is a special case for printing when ten's place is 1.
    {
      switch(input_num)
      {
        case 10:
            printf("ten ");
            break;
        case 11:
            printf("eleven ");
            break;
        case 12:
            printf("twelve ");
            break;
        case 13:
            printf("thirteen ");
            break;
        case 14:
            printf("fourteen ");
            break;
        case 15:
            printf("fifteen ");
            break;
        case 16:
            printf("sixteen ");
            break;
        case 17:
            printf("seventeen ");
            break;
        case 18:
            printf("eighteen ");
            break;
        case 19:
            printf("nineteen ");
            break;
      }
    }

    printf("\n");

    return EXIT_SUCCESS;
}
