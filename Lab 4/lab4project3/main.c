#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x;
    printf("Enter real value of x: ");
    scanf("%lf", &x);

    //Finding exp function
    double denom_fact = 1.0;
    double sum_for_e = 1.0;
    for (int i = 1; i < 20; i++)                                       /*Loop for taylor series of exp function*/
    {
        denom_fact = denom_fact * i;
        sum_for_e = sum_for_e + (pow(x,i) / denom_fact);
    }
    printf("The value for exp using taylor series is: %f\n", sum_for_e);
    printf("The value for exp using math.h is : %f\n",exp(x));
    printf("\n");


    //Finding log function
    double sum_for_log = 0.0;
    int j = 1;
    double num_for_log = (x - 1.0) / (x + 1.0);
    while (j <= 20)                                                            /*Loop for taylor series of log function*/
    {
        sum_for_log = sum_for_log + (pow(num_for_log, 2*j - 1) /(2 * j - 1));
        j++;
    }
    printf("The value for log x using taylor series is: %f\n", 2 * sum_for_log);
    printf("The value for log x using math.h is: %f\n", log(x));
    printf("\n");


    //Finding sin function
    double sum_for_sin = 0.0, denom_fact_sin = 1.0;
    int k = 1;          //int for factorial calculation
    int p = 1;          //int for counting nth term
    while (p <= 20)                                                      /*Loop for Taylor series of sin function */
    {

        denom_fact_sin = denom_fact_sin * k;
        if (k % 2 != 0)
        {
            sum_for_sin = sum_for_sin + (pow(x,k) * pow(-1, p + 1) / denom_fact_sin);
            p++;
        }
        k++;

    }
    printf("The value for sin x using taylor series is: %f \n",sum_for_sin);
    printf("The value for sin x using math.h is : %f\n", sin(x));

    return EXIT_SUCCESS;
}

/*double sum_for_log = 0.0;
    int j = 1;
    double num_for_log = x - 1.0;
    while (j <= 20)
    {
        sum_for_log = sum_for_log + (pow(num_for_log, j) * pow(-1, j + 1) / j);
        j++;
    }
    printf("The value for log x using taylor series is: %f\n", sum_for_log);
    printf("The value for log x using math.h is: %f\n", log(x));*/

