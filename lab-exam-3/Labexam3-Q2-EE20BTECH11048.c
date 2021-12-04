/*Test your map function with the input array being an array of Point variables and fun
being the distance function of part (a), accepting the Point variables from the user and
printing the distance array.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//struct for our point
struct _Point_t
{
    double x;
    double y;
};

typedef struct _Point_t Point_t;

//function which calculates the distance of a point from the origin
void distance(void* distance_from_origin, const void* point);

//function which takes arrays and our distance function
void map(void* output_arr, void* input_arr,size_t arr_size, size_t elem_size, void (*fun)(void*, const void*));

//BEGINNING OF MAIN FUNCTION
int main()
{
    //testing for a single point
    Point_t p;
    printf("Enter coordinates of point: ");
    scanf("%lf %lf", &p.x, &p.y);

    double distance_origin;

    distance(&distance_origin, &p);
    printf("The distance from origin: %lf\n", distance_origin);
    printf("\n");

    //asking for number of points
    int arr_size;
    printf("Enter the number of points: ");
    scanf("%d", &arr_size);
    //allocating memory for our array of points
    Point_t *arr_point;
    arr_point = (Point_t*)malloc(sizeof(Point_t) * arr_size);
    for(int i = 0; i < arr_size; i++)
    {
        printf("Enter coordinates for point %d: ", i+1);
        scanf("%lf %lf", &(arr_point + i)->x, &(arr_point + i)->y);
    }

    //allocating memory for array of output
    double *output_arr;
    output_arr = (double*)malloc(sizeof(double) * arr_size);
    /*for(int i = 0; i < arr_size; i++)
    {
        printf("cood: %lf %lf\n", (arr_point+i)->x,(arr_point+i)->y);
    }*/

    printf("\n");
    map(output_arr, arr_point, arr_size, sizeof(Point_t), distance);

    free(output_arr);
    free(arr_point);
    return EXIT_SUCCESS;
}

//function which calculates the distance of a point from the origin
void distance(void* distance_from_origin, const void* point)
{
    //typecasting our const void* to our struct pointer
    struct _Point_t *p;
    p = (struct _Point_t*)point;

    double x_cood = p->x;
    double y_cood = p->y;
    *(double*) distance_from_origin = sqrt(pow(x_cood , 2) + pow(y_cood , 2));
}

//function which takes arrays and our distance function
void map(void* output_arr, void* input_arr,size_t arr_size, size_t elem_size, void (*fun)(void*, const void*))
{
    //typecasting our const void* to our struct pointer
    struct _Point_t *p;
    p = (struct _Point_t*)input_arr;

    //typecasting our output array into an array of doubles
    double *o;
    o = (double*)output_arr;

    //implementing our distance function for each point
    int size_of_array = arr_size;
    for(unsigned int i = 0; i < size_of_array; i++)
    {
        distance(o + i, p + i);
        printf("The distance of point %d: %lf\n", i + 1, *(o + i));
    }
}
