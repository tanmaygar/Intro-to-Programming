/*Define a struct xypoint_t to represent points in x,y coordinate system and
rtpoint_t to represent points in r,theta coordinate system. Use double for all coordinates.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265

struct xypoint_t        //struct for x and y coordinates
{
    double x;
    double y;
};

struct rtpoint_t        //struct for r and theta coordinates
{
    double r;
    double theta;
};

typedef struct xypoint_t triangle_t[3];


void print_rtpoint(struct xypoint_t s1);    //function for printing r,theta when x and y are given

void print_xypoint(struct rtpoint_t s2);    //function for printing x,y when r and theta are given

int isTriangle(triangle_t t1);              //function for triangle inequality

int main()
{
    double x_input, y_input, r_input, t_input;

    //input for x and y coordinates
    printf("Enter the coordinate x: ");
    scanf("%lf", &x_input);
    printf("Enter the coordinate y: ");
    scanf("%lf", &y_input);

    //printing out the r and theta coordinates
    struct xypoint_t xy_input = {.x = x_input,.y = y_input};
    print_rtpoint(xy_input);

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

    //triangle inequality
    //triangle_t triangle = {{0,0},{1,0},{0,1}};
    triangle_t triangle;
    for(int i = 0; i < 3; i++)
    {
      printf("Enter coordinates for x%d y%d: ",(i + 1),(i + 1));
      scanf("%lf %lf",&triangle[i].x,&triangle[i].y);
    }

    int return_value_isTraingle = isTriangle(triangle);
    printf("%d\n", return_value_isTraingle);



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
int isTriangle(triangle_t t1)
{
    //putting struct input in variables for easy usage
    double x1 = t1[0].x;
    double y1 = t1[0].y;
    double x2 = t1[1].x;
    double y2 = t1[1].y;
    double x3 = t1[2].x;
    double y3 = t1[2].y;

    //finding length of the sides
    double a = sqrt( pow((x1 - x2), 2 ) + pow((y1 - y2), 2 ));
    double b = sqrt( pow((x2 - x3), 2 ) + pow((y2 - y3), 2 ));
    double c = sqrt( pow((x3 - x1), 2 ) + pow((y3 - y1), 2 ));
    //printf("%lf %lf %lf\n", a,b,c);

    if( fabs(a + b - c) < pow(10,-7) || fabs(c + a - b) < pow(10,-7) || fabs(b+c - a) < pow(10,-7))
    {
      printf("Collinear\n");
      return 0;
    }
    else if( (a + b > c) && (c + b > a) && (a + c > b) )
    {
      printf("Triangle inequality holds\n");
      return 1;
    }
    else
    {
      printf("Triangle inequality doesnt hold\n");
      return 0;
    }
}
