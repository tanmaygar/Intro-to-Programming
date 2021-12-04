#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    unsigned long long input_num;        //Asking for input of number from user
    printf("Enter number: ");
    scanf("%llu", &input_num);

    //Printing binary form of input number
    printf("Binary of input number is: ");
    for (unsigned long i = pow(2,31); i > 0; i = i / 2)
    {
        if(input_num & i)                               //Using bitwise AND operation for printing 1 and 0 of number
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");




    //Printing the reverse number
    printf("\nThe reverse number is: ");
    unsigned long long tmp_num = input_num;

    while (tmp_num > 0)                     //Using while loop to print the remainder of number and dividing it by 10
    {
        unsigned long long rev_num = tmp_num % 10;
        printf("%llu", rev_num);
        tmp_num = tmp_num / 10;
    }
    printf("\n");

    //Assigning a variable for getting the reverse number to get its binary form
    tmp_num = input_num;
    unsigned long long reverse_num = 0;
    while(tmp_num != 0)
    {
      reverse_num = reverse_num * 10 + (tmp_num % 10);
      tmp_num = tmp_num / 10;
    }


    printf("Binary of reverse num is: ");
    for (unsigned long i = pow(2,31); i > 0; i = i / 2)     //Using for loop to use bitwise AND operator to print 0 and 1 for binary
    {
        if(reverse_num & i)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");

    return EXIT_SUCCESS;
}

#if 0
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    unsigned long long int  input_num;
    printf("Enter number: ");
    scanf("%llu", &input_num);

    //Reverse number code
    unsigned long long int  tmp_num = input_num;        /*Creating a tmp variable for making the reverse number*/
    unsigned long long int  reverse_num = 0;
    while(tmp_num != 0)                                 /*Loop for writing the reverse number*/
    {
      reverse_num = reverse_num * 10 + (tmp_num % 10);
      tmp_num = tmp_num / 10;
    }
    printf("The reverse number is: %llu\n", reverse_num);

    //Making binary for reverse number
    unsigned long long int  reverse_binary_num = 0;
    unsigned long long int  tmp_reverse_num = reverse_num;      /*Making tmp variable for reverse_num so that reverse_num is not destroyed*/
    while(tmp_reverse_num != 0)                                 /*Loop for binary conversion for number*/
    {
        reverse_binary_num = reverse_binary_num * 10 + (tmp_reverse_num % 2);
        tmp_reverse_num = tmp_reverse_num / 2;
    }
    printf("The binary form of reverse number is: %llu\n", reverse_binary_num);

    //Making binary for input number
    unsigned long long int  binary_num = 0;
    unsigned long long int  tmp_num_for_binary = input_num;     /*Creating tmp variable for converting to binary so that input_num is not destroyed*/
    while(tmp_num_for_binary != 0)
    {
        binary_num = binary_num * 10 + (tmp_num_for_binary % 2);
        tmp_num_for_binary = tmp_num_for_binary / 2;
    }
    printf("The binary form of input number is: %llu\n", binary_num);


    return EXIT_SUCCESS;
}
#endif

/*Initial attempt on writing reverse number*/
/*int reverse[4];
    for(int i = 0; i < 4; i++)
    {
      reverse[i] = num % 10;
      num = num / 10;
    }
    int reverse_num = 0;
    for (int j = 0; j < 4; j++)
    {
      reverse_num = reverse_num * 10 + reverse[j];
    }
    printf("%d\n", reverse_num);*/
