#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int num_days = 0;
  int d, y, m;
  printf("Enter the date: \n");
  scanf("%i", &d);
  printf("Enter the month: \n");
  scanf("%i", &m);
  printf("Enter the year: \n");
  scanf("%i", &y);
  enum week_t {SAT, SUN, MON, TUE, WED, THU,FRI};
  enum month_t {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
  if (d <= 31 && m <= 12 && (y>=2000 && y <= 2100))
  {
    if((y % 4 == 0 || y != 2100) && ((d == 30 && m == 2) || (d == 31 && m == 2) || (d == 31 && m == 4) || (d == 31 && m == 6) || (d == 31 && m == 9) || (d == 31 && m == 11)))
    {
      printf("Inavlid\n");
    }
    else if((y % 4 != 0 || y == 2100) && ((d == 30 && m == 2)||(d == 29 && m == 2) || (d == 31 && m == 2) || (d == 31 && m == 4) || (d == 31 && m == 6) || (d == 31 && m == 9) || (d == 31 && m == 11)))
    {
      printf("Inavlid\n");
    }
    else
    {
      int year = y - 2000;
      float yy = year / 4.0;
      num_days = (year) * 365 + ceil(yy);
      enum month_t count_month;
      count_month = m - 1;
      switch(count_month)
      {
        case JAN:
          break;
        case FEB:
          num_days = num_days + 31;
          break;
        case MAR:
          if (y % 4 == 0)
            {
              num_days = num_days + 29 + 31;
            }
          else
            {
              num_days = num_days + 28 + 31;
            }
          break;
        case APR:
          if (y % 4 == 0)
            {
              num_days = num_days + 29 + 31 + 31;
            }
          else
            {
              num_days = num_days + 28 + 31 + 31;
            }
          break;
        case MAY:
          if (y % 4 == 0)
            {
              num_days = num_days + 29 + 31 + 31 + 30;
            }
          else
            {
              num_days = num_days + 28 + 31 + 31 + 30;
            }
          break;
        case JUN:
          if (y % 4 == 0)
            {
              num_days = num_days + 29 + 31 + 31 + 30 + 31;
            }
          else
            {
              num_days = num_days + 28 + 31 + 31 + 30 + 31;
            }
          break;
        case JUL:
          if (y % 4 == 0)
            {
              num_days = num_days + 29 + 31 + 31 + 30 + 31 + 30;
            }
          else
            {
              num_days = num_days + 28 + 31 + 31 + 30 + 31 + 30;
            }
          break;
        case AUG:
          if (y % 4 == 0)
            {
              num_days = num_days + 29 + 31 + 31 + 30 + 31 + 30 + 31;
            }
          else
            {
              num_days = num_days + 28 + 31 + 31 + 30 + 31 + 30 + 31;
            }
          break;
        case SEP:
          if (y % 4 == 0)
            {
              num_days = num_days + 29 + 31 + 31 + 30 + 31 + 30 + 31 + 31;
            }
          else
            {
              num_days = num_days + 28 + 31 + 31 + 30 + 31 + 30 + 31 + 31;
            }
          break;
        case OCT:
          if (y % 4 == 0)
            {
              num_days = num_days + 29 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
            }
          else
            {
              num_days = num_days + 28 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
            }
          break;
        case NOV:
          if (y % 4 == 0)
            {
              num_days = num_days + 29 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
            }
          else
            {
              num_days = num_days + 28 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
            }
          break;
        case DEC:
          if (y % 4 == 0)
            {
              num_days = num_days + 29 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
            }
          else
            {
              num_days = num_days + 28 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
            }
          break;
      }
      num_days = ((num_days + d - 1));
      /*if ( y % 4 != 0)
      {
        num_days = num_days + 1;
      }*/
      if (y == 2100 & m > 2)
      {
        num_days = num_days - 1;
      }
      num_days = ((num_days % 7));
      enum week_t w;
      w = num_days  ;
      switch(w)
        {
          case SAT:
            printf("The day is: Saturday\n");
            break;
          case SUN:
            printf("The day is: Sunday\n");
            break;
          case MON:
            printf("The day is: Monday\n");
            break;
          case TUE:
            printf("The day is: Tuesday\n");
            break;
          case WED:
            printf("The day is: Wednesday\n");
            break;
          case THU:
            printf("The day is: Thursday\n");
            break;
          case FRI:
            printf("The day is: Friday\n");
            break;
        }
        //printf("%i\n",num_days);
        //printf("yy is %i\n",yy);
    }
  }
  else
  {
    printf("Invalid date\n");
  }
}




//tanmay garg






/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num_days = 0;
    int d, y, m;
    printf("Enter the date: \n");
    scanf("%i", &d);
    printf("Enter the month: \n");
    scanf("%i", &m);
    printf("Enter the year : \n");
    scanf("%i", &y);
    enum week_t {SAT, SUN, MON, TUE, WED, THU,FRI};
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
                    float yy = year / 4.0;
                    num_days = (year) * 365 + ceil(yy);
                    enum month_t count_month;
                    count_month = m - 1;
                    switch(count_month)
                    {
                        case JAN:
                            break;
                        case FEB:
                            num_days = num_days + 31;
                            break;
                        case MAR:
                            if (y % 4 == 0)
                            {
                                num_days = num_days + 29 + 31;
                            }
                            else
                            {
                                num_days = num_days + 28 + 31;
                            }
                            break;
                        case APR:
                            if (y % 4 == 0)
                            {
                                num_days = num_days + 29 + 31 + 31;
                            }
                            else
                            {
                                num_days = num_days + 28 + 31 + 31;
                            }
                            break;
                        case MAY:
                            if (y % 4 == 0)
                            {
                                num_days = num_days + 29 + 31 + 31 + 30;
                            }
                            else
                            {
                                num_days = num_days + 28 + 31 + 31 + 30;
                            }
                            break;
                        case JUN:
                            if (y % 4 == 0)
                            {
                                num_days = num_days + 29 + 31 + 31 + 30 + 31;
                            }
                            else
                            {
                                num_days = num_days + 28 + 31 + 31 + 30 + 31;
                            }
                            break;
                        case JUL:
                            if (y % 4 == 0)
                            {
                                num_days = num_days + 29 + 31 + 31 + 30 + 31 + 30;
                            }
                            else
                            {
                                num_days = num_days + 28 + 31 + 31 + 30 + 31 + 30;
                            }
                            break;
                        case AUG:
                            if (y % 4 == 0)
                            {
                                num_days = num_days + 29 + 31 + 31 + 30 + 31 + 30 + 31;
                            }
                            else
                            {
                                num_days = num_days + 28 + 31 + 31 + 30 + 31 + 30 + 31;
                            }
                            break;
                        case SEP:
                            if (y % 4 == 0)
                            {
                                num_days = num_days + 29 + 31 + 31 + 30 + 31 + 30 + 31 + 31;
                            }
                            else
                            {
                                num_days = num_days + 28 + 31 + 31 + 30 + 31 + 30 + 31 + 31;
                            }
                            break;
                        case OCT:
                            if (y % 4 == 0)
                            {
                                num_days = num_days + 29 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
                            }
                            else
                            {
                                num_days = num_days + 28 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
                            }
                            break;
                        case NOV:
                            if (y % 4 == 0)
                            {
                                num_days = num_days + 29 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
                            }
                            else
                            {
                                num_days = num_days + 28 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
                            }
                            break;
                        case DEC:
                             if (y % 4 == 0)
                            {
                                num_days = num_days + 29 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
                            }
                            else
                            {
                                num_days = num_days + 28 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
                            }
                            break;
                    }
                    num_days = ((num_days + d - 1));
                    if ( y % 4 != 0)
                    {
                        num_days = num_days + 1;
                    }
                    num_days = ((num_days % 7));
                    enum week_t w;
                    w = num_days  ;
                    switch(w)
                    {
                        case 0:
                            printf("The day is: Saturday\n");
                            break;
                        case 1:
                            printf("The day is: Sunday\n");
                            break;
                        case 2:
                            printf("The day is: Monday\n");
                            break;
                        case 3:
                            printf("The day is: Tuesday\n");
                            break;
                        case 4:
                            printf("The day is: Wednesday\n");
                            break;
                        case 5:
                            printf("The day is: Thursday\n");
                            break;
                        case 6:
                            printf("The day is: Friday\n");
                            break;
                    }
                    //printf("%i\n",num_days);
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
*/

