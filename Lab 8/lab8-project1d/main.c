/*Randomly select a student and find donors for this student in the same branch.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

//Finding donor for a student
void find_blood_type_donor(student_record student[]);

//BEGINNING OF OUR MAIN FUNCTION
int main()
{
    struct student_record_t student_record[SIZE];
    //scanning input of all students from the txt file
    for(int i = 0; i < SIZE; i++)
    {
        scanf("%s %s %d %d %d %d %d", student_record[i].FirstName, student_record[i].LastName,&student_record[i].BloodType,&student_record[i].BranchType,&student_record[i].Year,&student_record[i].Height_in_CM,&student_record[i].Weight_in_KG);
    }
    //printing the list of students who can donate to our random student
    find_blood_type_donor(student_record);
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

//Finding donor for a student
void find_blood_type_donor(student_record student[])
{
    srand(time(0));
    int num = rand() % SIZE;
    //printing the details of student who needs the blood
    printf("Finding donor for student %d: \n", num);
    printf("Receiver: \n");
    print_student(student, num);
    printf("\nDonor: \n");

    //printing details of all the donors from the same branch
    enum Blood_type_t blood_type;
    blood_type = student[num].BloodType;
    for(int i = 0; i < SIZE; i++)
        {
            if(student[num].BranchType == student[i].BranchType)
            {
                switch(blood_type)
                {
                    case ANEGATIVE:
                        if(student[i].BloodType == ANEGATIVE || student[i].BloodType == ONEGATIVE)
                        {
                            print_student(student, i);
                        }
                        break;
                    case BNEGATIVE:
                        if(student[i].BloodType == BNEGATIVE || student[i].BloodType == ONEGATIVE)
                        {
                            print_student(student, i);
                        }
                        break;
                    case ABNEGATIVE:
                        if(student[i].BloodType == ABNEGATIVE || student[i].BloodType == ANEGATIVE || student[i].BloodType == BNEGATIVE || student[i].BloodType == ONEGATIVE)
                        {
                            print_student(student, i);
                        }
                        break;
                    case ONEGATIVE:
                        if(student[i].BloodType == ONEGATIVE)
                        {
                            print_student(student, i);
                        }
                        break;
                    case APOSITIVE:
                        if(student[i].BloodType == ANEGATIVE || student[i].BloodType == ONEGATIVE || student[i].BloodType == APOSITIVE || student[i].BloodType == OPOSITIVE)
                        {
                            print_student(student, i);
                        }
                        break;
                    case BPOSTIVE:
                        if(student[i].BloodType == BNEGATIVE || student[i].BloodType == BPOSTIVE || student[i].BloodType == ONEGATIVE || student[i].BloodType == OPOSITIVE)
                        {
                            print_student(student, i);
                        }
                        break;
                    case ABPOSITIVE:
                        print_student(student,i);
                        break;
                    case OPOSITIVE:
                        if(student[i].BloodType == OPOSITIVE || student[i].BloodType == ONEGATIVE)
                        {
                            print_student(student, i);
                        }
                        break;
                }
            }
        }
}
