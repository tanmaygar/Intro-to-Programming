/*Define an enum variable called BasicDataType with the values
Char, Int, Float, Double. Change the declaration type of v from double
* to void* and write a function called memoryAssign that accepts
(i) the address of a struct vector variable, (ii) the value of d, (iii) a
BasicDataType value t, and dynamically assigns memory for v to store
d entries whose data type is t.*/

#include <stdio.h>
#include <stdlib.h>

//struct for our vector
struct _vector_t
{
    void *v;
    unsigned int d;
};
typedef struct _vector_t vector_t;

enum BasicDataType {Char, Int, Float, Double};

//initializing the vector using input from user
vector_t* initializeVector(vector_t *vec, unsigned int d, int t)
{
    switch(t)
    {
        case Char:
        vec->v = (char*)malloc(d * sizeof(char));
        if(vec->v == NULL)
        {
            printf("Failed\n");
            free(vec);
            return vec;
        }
        for(int i = 0; i < d; i++)
        {
            printf("Enter the value %d for vector: ",i);
            scanf("%s", (char*)((int*)vec->v + i));
        }
        printf("\n");
        printf("The vector for part (c): \n");
        for(int i= 0; i < d; i++)
        {
            printf("%c ",*(char*)((int*)vec->v + i));
        }
        printf("\n");
        break;

        case Int:
        vec->v = (int*)malloc(d * sizeof(int));
        if(vec->v == NULL)
        {
            printf("Failed\n");
            free(vec);
            return vec;
        }
        for(int i = 0; i < d; i++)
        {
            printf("Enter the value %d of vector: ", i);
            scanf("%d", (int*)vec->v + i);
        }
        printf("\n");
        printf("The vector for part (c): \n");
        for(int i = 0; i < d; i++)
        {
            printf("%d ", *((int*)vec->v + i));
        }
        printf("\n");
        break;

        case Float:
        vec->v = (float*)malloc(d * sizeof(float));
        if(vec->v == NULL)
        {
            printf("Failed\n");
            free(vec);
            return vec;
        }
        for(int i = 0; i < d; i++)
        {
            printf("Enter the value %d of vector: ", i);
            scanf("%f", (float*)vec->v + i);
        }
        printf("\n");
        printf("The vector for part (c): \n");
        for(int i = 0; i < d; i++)
        {
            printf("%f ", *((float*)vec->v + i));
        }
        printf("\n");
        break;

        case Double:
        vec->v = (double*)malloc(d * sizeof(double));
        if(vec->v == NULL)
        {
            printf("Failed\n");
            free(vec);
            return vec;
        }
        for(int i = 0; i < d; i++)
        {
            printf("Enter the value %d of vector: ", i);
            scanf("%lf", (double*)vec->v + i);
        }
        printf("\n");
        printf("The vector for part (c): \n");
        for(int i = 0; i < d; i++)
        {
            printf("%lf ", *((double*)vec->v + i));
        }
        printf("\n");
        break;

        default:
        break;
    }
    return vec;
}

//BEGINNING OF MAIN FUNCTION
int main()
{
    vector_t vector_v;
    printf("Enter the value of d: \n");
    scanf("%u", &vector_v.d);
    printf("\n");

    //allocating memory for our vector
    vector_v.v = (double*)malloc(vector_v.d * sizeof(double));
    if(vector_v.v == NULL)
    {
        printf("Failed\n");
        free(vector_v.v);
        return 1;
    }

    //getting value of t for enum
    int w;
    printf("Enter the value of t: ");
    scanf("%d", &w);
    printf("\n");
    enum BasicDataType t = w;

    initializeVector(&vector_v, vector_v.d, t);
    printf("\n");

    free(vector_v.v);
    printf("\n");

    return EXIT_SUCCESS;
}
