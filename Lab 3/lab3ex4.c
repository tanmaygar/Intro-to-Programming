#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159265

int main()
{
    double x1 , y1 , x2 , y2 , x3 , y3 ;
    printf("Enter the coordinates like this: a b\n");
    printf("Enter the coordinate of A: ");
    scanf("%lf %lf",&x1, &y1);
    printf("Enter the coordinate of B: ");
    scanf("%lf %lf",&x2, &y2);
    printf("Enter the coordinate of C: ");
    scanf("%lf %lf",&x3, &y3);


    double area = fabs(((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2))) / 2);
    if (area == 0)
    {
        printf("They are collinear\n");
    }
    else
    {
        printf("The area is: %f\n", area);
        double a = sqrt(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)));
        double b = sqrt(((x3 - x1) * (x3 - x1)) + ((y3 - y1) * (y3 - y1)));
        double c = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
        double angle_A = acos(( b * b + c * c - a * a ) / (2 * b * c));
        double angle_B = acos(( a * a + c * c - b * b ) / (2 * a * c));
        double angle_C = acos(( b * b + a * a - c * c ) / (2 * b * a));

        double angle_A_deg = angle_A * 180.0 / pi;
        double angle_B_deg = angle_B * 180.0 / pi;
        double angle_C_deg = angle_C * 180.0 / pi;

        printf("The angles are: %f %f %f\n",angle_A_deg, angle_B_deg, angle_C_deg);

    }

    return 0;

}


//tanmay garg
