/*Write a program that accepts a permutation of 1, 2, . . . , n (stored in
the array str) and finds the permutation that comes after str in the lexicographical ordering*/
#include <stdio.h>
#include <stdlib.h>

//printing function for array
void print_array(int array[],int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}

//BEGINNING OF MAIN FUNCTION
int main()
{
    int n;                              //input number n
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int array_num[n];                   //our array of numbers
    int tmp_array_num[n];               //our temporary array for storing and working numbers with
    for(int i = 0; i < n; i++)
    {
        printf("Enter num_%d: ", i + 1);
        scanf("%d",&array_num[i]);
        tmp_array_num[i] = array_num[i];
        printf("\n");
    }

    //printf("og: ");
    //print_array(array_num,n);
    //printf("tmp: ");
    //print_array(tmp_array_num,n);


    int counter = 0;                            //counter to keep track when the ascending from behind breaks
    for(int i = n - 1; i >= 0; i--)
    {
        counter++;
        if(array_num[i] > array_num[i - 1])
        {
            break;
        }
    }
    //printf("counter %d\n",counter);

    if(counter == n)                    //if the counter reaches till end of our array then original number in descending order
    {
        //do nothing and moves point to last for printing our array
    }
    else
    {
        /*tmp_array_num[n - 1 - counter + 1] = array_num[n - 1 - counter];
        tmp_array_num[n - 1 - counter] = array_num[n - 1];
        for(int i = 0; i < counter - 1; i++)
        {
            tmp_array_num[n - 1 - counter + 2 + i] = array_num[n - 2 - i];
        }
        print_array(tmp_array_num,n);*/

        int next_greater;                   //to find the next greater number than the number where our loop breaks initially
        for(int i = n - 1; i >= 0; i--)
        {
            if(array_num[n - 1 - counter] < array_num[i])
            {
                next_greater = array_num[i];
                break;
            }

        }
        tmp_array_num[n - 1 - counter] = next_greater;          //giving value of next greater number to place where loop breaks

        int tmp_2[counter + 1];                            //making new tmp_2 array for easy working to make ascending order
        for(int i = 0; i < counter + 1; i++)
        {
            tmp_2[i] = array_num[n - 1 - i];
        }
        //printf("tmp_2: ");
        //print_array(tmp_2,counter +1);

        int tmp = 0;                                //swapping number
        for(int i = 0; i < counter + 1; i++)
        {
            for(int j = i + 1; j < counter + 1; j++)    //making ascending order
            {
                if(tmp_2[j] < tmp_2[i])
                {
                    tmp = tmp_2[i];
                    tmp_2[i] = tmp_2[j];
                    tmp_2[j] = tmp;
                }
            }
        }

        //printf("line 98,99: ");
        //print_array(tmp_2,counter +1);
        //print_array(tmp_array_num,n);

        int dupli = 0;                          //checks for duplicate highest number
        for (int i = 0; i < counter + 1; i++)   //assigning our tmp_array with the new values after putting in ascending order
        {
            if(tmp_2[i] == next_greater)
            {
                dupli++;
                if(dupli > 1)
                {
                    tmp_array_num[n - 1 - counter + 1 + i] = tmp_2[i];
                }
            }
            else
            {
                tmp_array_num[n - 1 - counter + 1 + i - dupli] = tmp_2[i];
            }
            //printf("%d: \n",i);
            //print_array(tmp_array_num,n);
            //printf("tmp_2: ");
            //print_array(tmp_2, counter +1);
        }

    }
    //printing our new array
    printf("\nNext\n");
    for(int i = 0; i < n; i++)
    {
        array_num[i] = tmp_array_num[i];
    }
    print_array(array_num, n);

    return EXIT_SUCCESS;
}
