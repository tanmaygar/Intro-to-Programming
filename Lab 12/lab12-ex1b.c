/*Write a function called initializeVector that accepts (i) the address
of a struct vector variable, (ii) the value of d, (iii) a double value a,
and dynamically allocates memory for v to store d entries, initializing
each entry to the value a.*/
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
        *(vec->v + i) = a;
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

    double a;
    printf("Enter the value of a: ");
    scanf("%lf", &a);
    //a = 4;
    printf("\n");

    initializeVector(&vector_v, vector_v.d, a);
    printf("\n");

    //printing our vector
    printf("The vector for (b): \n");
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
