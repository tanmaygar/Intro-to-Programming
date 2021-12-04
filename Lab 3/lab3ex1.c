#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , y , z;
    printf("Enter x: \n");
    scanf("%i", &x);
    printf("Enter y: \n");
    scanf("%i", &y);
    printf("Enter z: \n");
    scanf("%i", &z);

    if ((x > y) && (x > z))
    {
        if (y > z)
        {
            printf("%i, %i, %i\n", z,y,x);
        }
        //printf("%i, %i, %i", x,y,z);
        else
        {
            printf("%i, %i, %i\n", y,z,x);
        }
    }
    else if ((y > z) && (y > x))
    {
        if (x > z)
        {
            printf("%i, %i, %i\n", z,x,y);
        }
        else
        {
            printf("%i, %i, %i\n", x,z,y);
        }
    }
    else if ((z > y) && (z > x))
    {
        if (y > x)
        {
            printf("%i, %i, %i\n", x,y,z);
        }
        else
        {
            printf("%i, %i, %i\n", y,x,z);
        }
    }

    return 0;
}

//tanmay garg
