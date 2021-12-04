#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m1, m2, c1, c2;
    printf("Enter m1 and c1 as a b: ");
    scanf("%f %f",&m1, &c1);

    printf("Enter m2 and c2 as a b: ");
    scanf("%f %f",&m2, &c2);

    if(m1 == m2)
    {
        if(c1 == c2)
        {
            printf("The lines are identical\n");
        }
        else
        {
            printf("The lines are parallel\n");
        }
    }
    else
    {
        float x = ( ( c2 - c1 ) / ( m1 - m2 ) );
        float y = ( ( (m1 * c2) - (m2 * c1) ) / ( m1 - m2 ) );
        printf("The point of intersection is: (%f,%f)\n", x, y);

    }
    return EXIT_SUCCESS;
}
