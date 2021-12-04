#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int new_day = 0;
    int d, y, m;
    printf("Enter the date: \n");
    scanf("%i", &d);
    printf("Enter the month: \n");
    scanf("%i", &m);
    printf("Enter the year: \n");
    scanf("%i", &y);
    enum week_t {SAT = 1, SUN, MON, TUE, WED, THU,FRI};
    enum month_t {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
    if ((y >= 2000) && (y <= 2100))
    {
        if (m <= 12)
        {
            if (d <= 31)
            {
                if((y % 4 == 0) && ((d == 30 && m == 2) || (d == 31 && m == 2) || (d == 31 && m == 4) || (d == 31 && m == 6) || (d == 31 && m == 9) || (d == 31 && m == 11)))
                {
                    printf("Inavlid\n");
                }
                else if((y % 4 != 0) && ((d == 30 && m == 2)||(d == 29 && m == 2) || (d == 31 && m == 2) || (d == 31 && m == 4) || (d == 31 && m == 6) || (d == 31 && m == 9) || (d == 31 && m == 11)))
                {
                    printf("Inavlid\n");
                }
                else
                {
                    int year = y - 2000;
                    float yy = year / 4;
                    new_day = (year) * 365 + ceil(yy);
                    enum month_t count_month;
                    count_month = m - 1;
                    switch(count_month)
                    {
                        case JAN:
                            break;
                        case FEB:
                            new_day = new_day + 31;
                            break;
                        case MAR:
                            if (y % 4 == 0)
                            {
                                new_day = new_day + 29 + 31;
                            }
                            else
                            {
                                new_day = new_day + 28 + 31;
                            }
                            break;
                        case APR:
                            if (y % 4 == 0)
                            {
                                new_day = new_day + 29 + 31 + 31;
                            }
                            else
                            {
                                new_day = new_day + 28 + 31 + 31;
                            }
                            break;
                        case MAY:
                            if (y % 4 == 0)
                            {
                                new_day = new_day + 29 + 31 + 31 + 30;
                            }
                            else
                            {
                                new_day = new_day + 28 + 31 + 31 + 30;
                            }
                            break;
                        case JUN:
                            if (y % 4 == 0)
                            {
                                new_day = new_day + 29 + 31 + 31 + 30 + 31;
                            }
                            else
                            {
                                new_day = new_day + 28 + 31 + 31 + 30 + 31;
                            }
                            break;
                        case JUL:
                            if (y % 4 == 0)
                            {
                                new_day = new_day + 29 + 31 + 31 + 30 + 31 + 30;
                            }
                            else
                            {
                                new_day = new_day + 28 + 31 + 31 + 30 + 31 + 30;
                            }
                            break;
                        case AUG:
                            if (y % 4 == 0)
                            {
                                new_day = new_day + 29 + 31 + 31 + 30 + 31 + 30 + 31;
                            }
                            else
                            {
                                new_day = new_day + 28 + 31 + 31 + 30 + 31 + 30 + 31;
                            }
                            break;
                        case SEP:
                            if (y % 4 == 0)
                            {
                                new_day = new_day + 29 + 31 + 31 + 30 + 31 + 30 + 31 + 31;
                            }
                            else
                            {
                                new_day = new_day + 28 + 31 + 31 + 30 + 31 + 30 + 31 + 31;
                            }
                            break;
                        case OCT:
                            if (y % 4 == 0)
                            {
                                new_day = new_day + 29 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
                            }
                            else
                            {
                                new_day = new_day + 28 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
                            }
                            break;
                        case NOV:
                            if (y % 4 == 0)
                            {
                                new_day = new_day + 29 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
                            }
                            else
                            {
                                new_day = new_day + 28 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
                            }
                            break;
                        case DEC:
                             if (y % 4 == 0)
                            {
                                new_day = new_day + 29 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
                            }
                            else
                            {
                                new_day = new_day + 28 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
                            }
                            break;
                    }
                    new_day = ((new_day + d - 1));
                    if ( y % 4 != 0)
                    {
                        new_day = new_day + 1;
                    }
                    new_day = ((new_day % 7));
                    enum week_t w;
                    w = new_day  ;
                    switch(w)
                    {
                        case 0:
                            printf("Saturday\n");
                            break;
                        case 1:
                            printf("Sunday\n");
                            break;
                        case 2:
                            printf("Monday\n");
                            break;
                        case 3:
                            printf("Tuesday\n");
                            break;
                        case 4:
                            printf("Wednesday\n");
                            break;
                        case 5:
                            printf("Thursday\n");
                            break;
                        case 6:
                            printf("Friday\n");
                            break;
                    }
                    //printf("%i\n",new_day);
                    //printf("yy is %i\n",yy);
                }
            }
            else
            {
                printf("Invalid date");
            }
        }
        else
        {
            printf("Invalid month\n");
        }
    }
    else
    {
        printf("Invalid year\n");
    }
}




//tanmay garg
