/*Write a program to accept a year between 1939 and 2019
and print the name of the movie that won the Academy Award for
best picture in that year; use the academylist-movies file.*/
#include <stdio.h>
#include <stdlib.h>

//struct for movie details
struct _movie_details_t
{
    int year;
    char blank[5];
    char name[100];
};

typedef struct _movie_details_t movie_details_t;

//BEGINNING OF MAIN FUNCTION
int main()
{
    FILE *f;
    f = fopen("academylist-movies.txt", "r");
    if(f == NULL)
    {
        printf("Cannot open file\n");
        return 1;
    }

    movie_details_t movie[88];
    int i = 0;
    //looping through all the movies and storing them
    while(!feof(f) && !ferror(f))
    {
        fscanf(f, "%d %s", &movie[i].year, movie[i].blank);
        fgets(movie[i].name, 100, f);
        //printf("%s\n", movie[i].name);
        i++;
    }

    //input for year
    int input_year;
    do
    {
        printf("Enter the year: ");
        scanf("%d", &input_year);
    }while(input_year > 2019 || input_year < 1939);

    //looping through our details and printing the name
    for(int i = 0; i < 81; i++)
    {
        if(input_year == movie[i].year)
        {
            printf("The movie is:%s\n", movie[i].name);
        }
    }

    //closing the file
    fclose(f);

    return EXIT_SUCCESS;
}
