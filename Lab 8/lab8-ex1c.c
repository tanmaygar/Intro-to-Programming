/*Print student records for heaviest and lightest students (in terms of weight) for each branch and year.*/
#include <stdio.h>
#include <stdlib.h>
#define Max(a,b) (a > b ? a : b)
#define Min(a,b) (a < b ? a : b)
#define SIZE 1000
//Creating Struct for student
struct student_record_t
{
    char FirstName[25];
    char LastName[25];
    int BloodType;
    int BranchType;
    int Year;
    int Height_in_CM;
    int Weight_in_KG;
};
typedef struct student_record_t student_record;

//making enum for blood type and branch type for switchcases
enum Blood_type_t {ANEGATIVE = 0, BNEGATIVE, ABNEGATIVE, ONEGATIVE, APOSITIVE, BPOSTIVE, ABPOSITIVE, OPOSITIVE};
enum Branch_type_t {AI = 0, BM, BT, CHE, CHY, CSE, EE, ES, MA, ME, MSME};

//to print record of a particular student
void print_student(student_record student[], int num);

//Comparing weight of students
void weight_compare(student_record student[]);

//BEGINNING OF MAIN FUNCTION
int main()
{
    struct student_record_t student_record[SIZE];
    //scanning input of all students from the txt file
    for(int i = 0; i < SIZE; i++)
    {
        scanf("%s %s %d %d %d %d %d", student_record[i].FirstName, student_record[i].LastName,&student_record[i].BloodType,&student_record[i].BranchType,&student_record[i].Year,&student_record[i].Height_in_CM,&student_record[i].Weight_in_KG);
    }
    //printing heaviest and lightest weight of each branch of each year
    weight_compare(student_record);
    printf("\n");
    return EXIT_SUCCESS;
}

//to print record of a particular student
void print_student(student_record student[], int num)
{
    printf("%s %s ", student[num].FirstName, student[num].LastName);    //printing Name
    enum Branch_type_t branch_no = student[num].BranchType;
    enum Blood_type_t blood_no = student[num].BloodType;

    //using switch case to print blood group instead of its number
    switch(blood_no)
    {
        case ANEGATIVE:
            printf("ANEGATIVE ");
            break;
        case BNEGATIVE:
            printf("BNEGATIVE ");
            break;
        case ABNEGATIVE:
            printf("ABNEGATIVE ");
            break;
        case ONEGATIVE:
            printf("ONEGATIVE ");
            break;
        case APOSITIVE:
            printf("APOSITIVE ");
            break;
        case BPOSTIVE:
            printf("BPOSTIVE ");
            break;
        case ABPOSITIVE:
            printf("ABPOSITIVE ");
            break;
        case OPOSITIVE:
            printf("OPOSITIVE ");
            break;
       }

       //using switch case to print branch type instead of its number
    switch(branch_no)
    {
        case AI:
            printf("AI ");
            break;
        case BM:
            printf("BM ");
            break;
        case BT:
            printf("BT ");
            break;
        case CHE:
            printf("CHE ");
            break;
        case CHY:
            printf("CHY ");
            break;
        case CSE:
            printf("CSE ");
            break;
        case EE:
            printf("EE ");
            break;
        case ES:
            printf("ES ");
            break;
        case MA:
            printf("MA ");
            break;
        case ME:
            printf("ME ");
            break;
        case MSME:
            printf("MSME ");
            break;
       }
       
    printf("%d %d %d\n", student[num].Year, student[num].Height_in_CM, student[num].Weight_in_KG);  //printing the year height and weight
}

//Comparing weight of students
void weight_compare(student_record student[])
{
    //Loop for going through each year
    for(int year_count = 1; year_count <= 4; year_count++)
        {
            //loop for going through each Branch
            for(int branch_count = 0; branch_count < 11; branch_count++)
            {
                //taking arbitrary numbers for weight as we dont know the heaviest and lighest weight of each branch  
                int heaviest = 0;
                int lighest = 400;
                //finding heaviest and lighest
                for(int i = 0; i < SIZE; i++)
                    {
                        if(student[i].Year == year_count && student[i].BranchType == branch_count)
                        {
                            heaviest = Max(heaviest, student[i].Weight_in_KG);
                            lighest = Min(lighest, student[i].Weight_in_KG);
                        }
                    }
                    //printing for heaviest weight of all students
                printf("Heaviest: \n");
                for(int i = 0; i < SIZE; i++)
                    {
                        if(student[i].Year == year_count && student[i].BranchType == branch_count && student[i].Weight_in_KG == heaviest)
                        {
                            print_student(student,i);
                        }
                    }
                //printing for lighest weight of all students
                printf("Lighest: \n");
                for(int i = 0; i < SIZE; i++)
                {
                        if(student[i].Year == year_count && student[i].BranchType == branch_count && student[i].Weight_in_KG == lighest)
                        {
                            print_student(student,i);
                        }
                }
                printf("\n");
            }

        }
}
