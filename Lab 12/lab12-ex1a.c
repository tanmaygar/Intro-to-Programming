/*Create a variable of type vector; accept the value of d from the
user and dynamically allocate memory for v to store d entries.*/
#include <stdio.h>
#include <stdlib.h>

//struct for our vector
struct _vector_t
{
    double *v;
    unsigned int d;
};
typedef struct _vector_t vector_t;

//initializing the vector using double a
vector_t* initializeVector(vector_t *vec, unsigned int d, double a)
{
    for(int i = 0; i < vec->d; i ++)
    {
        printf("Enter the value %d of vector: ", i);
        scanf("%lf", (vec->v + i));
    }
    printf("\n");
    return vec;
}

//BEGINNING OF MAIN FUNCTION
int main()
{
    vector_t vector_v;
    printf("Enter the value of d: \n");
    scanf("%u", &vector_v.d);
    printf("\n");

    //allocating memory for v
    vector_v.v = (double*)malloc(vector_v.d * sizeof(double));
    if(vector_v.v == NULL)
    {
        printf("Failed\n");
        free(vector_v.v);
        return 1;
    }

    //asking for input for each direction of vector
    for(int i = 0; i < vector_v.d; i ++)
    {
        printf("Enter the value %d of vector: ",i);
        scanf("%lf", (vector_v.v + i));
    }
    printf("\n");

    //printing our vector
    printf("The vector for (a): \n");
    for(int i = 0; i < vector_v.d; i++)
    {
        printf("%lf ", *(vector_v.v + i));
    }
    printf("\n");

    //freeing the allocated memory
    free(vector_v.v);
    printf("\n");

    return EXIT_SUCCESS;
}
