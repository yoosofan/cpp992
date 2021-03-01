#include <stdio.h>
#include <stdlib.h>

void Search();
void add();

struct student
{
    char firstName[20];
    char lastName[20];
    char phoneNum[12];

}stu;

struct person
{
    struct student arr[100];
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
    for(b=1 ; b<=a ; b++)
    {
        printf("\nEnter firstName :\n");
        scanf("%s" , per.arr[100].firstName);
        printf("\nEnter lastName :\n");
        scanf("%s" ,per.arr[100].lastName);
        printf("\nEnter phoneNum :\n");
        scanf("%s" , per.arr[100].phoneNum);
    }

}


void Search()
{
    char lname[20];
    //int i;
    printf("\nSearch for lastName :\n ");
    scanf("%s" , lname);
    for(i=0 ; i<=100 ; i++)
    {
        int x = strcmp(per.arr[i].lastName,lname);
        if(x == 1 || x == 0){
                printf("\nStudent Phone Number : \n");
                printf("\nPhoneNum : %s\n", per.arr[100].phoneNum);
            }
    }
}
