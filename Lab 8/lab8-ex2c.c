/*Define a struct xypoint_t to represent points in x,y coordinate system and
rtpoint_t to represent points in r,theta coordinate system. Use double for all coordinates.*/
/*write a function is_triangle() that accepts triangle_t and returns 1 if triangle inequality holds for all the three points*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265

struct xypoint_t        //struct for x and y coordinates
{
    double x;
    double y;
};

typedef struct xypoint_t triangle_t[3];

int isTriangle(triangle_t t1);              //function for triangle inequality

int main()
{

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
