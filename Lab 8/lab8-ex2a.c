/*Define a struct xypoint_t to represent points in x,y coordinate system and
rtpoint_t to represent points in r,theta coordinate system. Use double for all coordinates.*/

/*write a function that accepts xypoint_t as a parameter and returns rtpoint_t*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265

struct xypoint_t        //struct for x and y coordinates
{
    double x;
    double y;
};
void print_rtpoint(struct xypoint_t s1);    //function for printing r,theta when x and y are given

int main()
{
    double x_input, y_input;

    //input for x and y coordinates
    printf("Enter the coordinate x: ");
    scanf("%lf", &x_input);
    printf("Enter the coordinate y: ");
    scanf("%lf", &y_input);
    /*x_input = rand();
    y_input = rand();
    printf("x,y : %lf , %lf\n", x_input, y_input);*/

    //printing out the r and theta coordinates
    struct xypoint_t xy_input = {.x = x_input,.y = y_input};
    print_rtpoint(xy_input);


    return EXIT_SUCCESS;
}


void print_rtpoint(struct xypoint_t s1)
{
    //putting struct input in variables for easy usage
    double x_coord = s1.x;
    double y_coord = s1.y;

    //finding value of r
    double r = sqrt( pow( x_coord, 2 ) + pow( y_coord, 2 ) );

    //finding value of theta
    double theta_abs, theta_final;
    theta_abs = atan( fabs( y_coord / x_coord ) );
    if(x_coord >= 0)
    {
        if(y_coord >= 0)
        {
            theta_final = theta_abs;
        }
        else
        {
            theta_final = (2 * PI) - theta_abs;
        }
    }
    if(x_coord < 0)
    {
        if(y_coord >= 0)
        {
            theta_final = PI - theta_abs;
        }
        else
        {
            theta_final = PI + theta_abs;
        }
    }
    //converting radians to degrees
    theta_final = theta_final * 180 / PI;
    printf("r = %f and theta = %f\n", r, theta_final);
}
