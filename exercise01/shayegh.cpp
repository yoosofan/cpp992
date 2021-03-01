#include <stdio.h>
#include <stdlib.h>

void Search();
void add();

const int NUMBER_OF_CHAR_IN_NAMES = 20;
const int NUMBER_OF_STUDENTS_IN_CLASS = 100;

struct student
{
    char firstName[NUMBER_OF_CHAR_IN_NAMES];
    char lastName[NUMBER_OF_CHAR_IN_NAMES];
    char phoneNum[12];

}stu;

struct person
{
    struct student arr[NUMBER_OF_STUDENTS_IN_CLASS];
    int c;

}per;

int i;

int main()
{
    int x;
    int y;
    printf("Tedad karbaran ra vared kon : \n");
    scanf("%d" , &x);
    add();
    Search();
    return 0;
}

void add()
{
    int a;
    int b;
    printf("\nChand ta ezafe mikoni?!\n");
    scanf("%d" , &a);
    for(b=0 ; b < a ; b++)
    {
        printf("\nEnter firstName :\n");
        scanf("%s" , per.arr[b].firstName);
        printf("\nEnter lastName :\n");
        scanf("%s" ,per.arr[b].lastName);
        printf("\nEnter phoneNum :\n");
        scanf("%s" , per.arr[b].phoneNum);
    }

}


void Search()
{
    char lname[NUMBER_OF_CHAR_IN_NAMES];
    int i;
    printf("\nSearch for lastName :\n ");
    scanf("%s" , lname);
    for(i=0 ; i < NUMBER_OF_STUDENTS_IN_CLASS ; i++)
    {
        int x = strcmp(per.arr[i].lastName,lname);
        if(x == 1 || x == 0){
                printf("\nStudent Phone Number : \n");
                printf("\nPhoneNum : %s\n", per.arr[100].phoneNum);
            }
    }
}
