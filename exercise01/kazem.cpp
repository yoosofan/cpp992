#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct phone
{
    char fname[20];
    char lname[20];
    char number[20];
};


struct func
{
    struct phone arr[100];
    int tedad;

};

void add();

void searchfunc();

struct func info;


int main()
{

    add();
    searchfunc();
    return 0;


}

void add()
{
    info.tedad=0;

    int amount;

    printf("how many elements will you add?");

    scanf("%d",&amount);

    for(int i=(info.tedad);i<amount;i++)
    {
    printf("please enter the first name:");
    scanf("%s",info.arr[i].fname);

    printf("please enter the last name:");
    scanf("%s",info.arr[i].lname);

    printf("please enter the phone number:");
    scanf("%s",info.arr[i].number);
    info.tedad+=1;
    }
}


void searchfunc()
{
    int b;
    printf("how do you want to search(1 for first name,2 for last name,0 for exit):");
    scanf("%d",&b);

    if(b==1)
    {
        char firstname[20];
        printf("please enter the first name:");
        scanf("%s",firstname);
        for(int i=0;i<info.tedad;i++)
        {
            if(strstr(info.arr[i].fname,firstname)!=NULL)
                printf("%s",info.arr[i].number);
        }
    }

    else if(b==2)
    {
        char lastname[20];
        printf("please enter the first name:");
        scanf("%s",lastname);
        for(int j=0;j<info.tedad;j++)
        {
            if(strstr(info.arr[j].lname,lastname)!=NULL)
                printf("%s",info.arr[j].number);
        }

    }
}
