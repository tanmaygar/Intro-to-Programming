/*Define a struct xypoint_t to represent points in x,y coordinate system and
rtpoint_t to represent points in r,theta coordinate system. Use double for all coordinates.*/
/*write a function that accepts rtpoint_t and returns corresponding xypoint_t*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265

struct rtpoint_t        //struct for r and theta coordinates
{
    double r;
    double theta;
};

void print_xypoint(struct rtpoint_t s2);    //function for printing x,y when r and theta are given

int main()
{
    double r_input, t_input;

    //input for r and theta
    printf("Enter the value of r: ");
    scanf("%lf", &r_input);
    printf("Enter the value of theta in degrees: ");
    scanf("%lf", &t_input);

    //converting degrees to radians
    t_input = t_input * PI / 180;

    //printing out the x and y coordinates
    struct rtpoint_t rt_input = {.r = r_input, .theta = t_input};
    print_xypoint(rt_input);

    return EXIT_SUCCESS;
}

void print_xypoint(struct rtpoint_t s2)
{
    //putting struct input in variables for easy usage
    double r_coord = s2.r;
    double theta_coord = s2.theta;

    //finding x and y from r and theta
    double x, y;
    x = r_coord * cos(theta_coord);
    y = r_coord * sin(theta_coord);

    printf("x = %f and y = %f\n",x,y);
}
