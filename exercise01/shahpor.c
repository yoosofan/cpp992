#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct
{
    char name[30];
    char last[30];
    char number[20];
}info;

struct vam
{
    info array[100];
    int num;
}mt;

void add(int* s)
{
    system("cls");
    int who;
    printf("How many contact do you wanna add?\n");
    scanf("%d",&who);
    if((who+*s)>100)
    {
        printf("not enough space hear!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
        Sleep(1000);
        add(s);
    }
    int i;
    for(i=0;i<who;i++)
    {

    printf("Enter info of contact %d\n" ,i+1);

    printf("Enter first name:\n");
    scanf("%s",&mt.array[*s].name);

    printf("Enter last name:\n");
    scanf("%s",&mt.array[*s].last);

    printf("Enter phone number:\n");
    scanf("%s",&mt.array[*s].number);
    (*s)++;
    }




}

void serch(int* n)
{
    int w;
    printf("Choose a Search mode:\n");
    printf("\n(1)By last name:");
    printf("\n(2)By phone number:\n");
    fflush(stdin);
    scanf("%d",&w);
    if(w== 1)
    {
        char d[30];
        int v57=0;
        printf("Enter last name:\n");
        fflush(stdin);
        gets(d);
        for(int j= 0; j< (*n); j++)
        {
            if(strcmp(d, mt.array[j].last)== 0)
            {
                printf("First name: %s\n",mt.array[j].name);
                printf("Last name: %s\n",mt.array[j].last);
                printf("Phone number: %s\n",mt.array[j].number);
                printf("--------------------------------------------\n");
                v57++;
            }
        }
        if(v57==0)
        {
            printf("0\n");
            Sleep(2000);
            system("cls");
            return;
        }
        else
        {
            printf("Press any key to return to menu:");
            char d= getch();
            return;
        }
    }
    else if(w== 2)
    {
        char f[30];
        int v58=0;
        printf("Enter phone number:\n");
        fflush(stdin);
        gets(f);
        for(int j= 0; j< (*n); j++)
        {
            if(strcmp(f, mt.array[j].number)== 0)
            {
                printf("First name: %s\n",mt.array[j].name);
                printf("Last name: %s\n",mt.array[j].last);
                printf("Phone number: %s\n",mt.array[j].number);
                printf("--------------------------------------------\n");
                v58++;
            }
        }
        if(v58==0)
        {
            printf("0\n");
            Sleep(2000);
            system("cls");
            return;
        }
        else
        {
            printf("Press any key to return to menu:");
            char d= getch();
            system("cls");
            return;
        }

    }
    else
    {
        printf("Input is incorrect.");
        Sleep(2000);
        system("cls");
        serch(n);
    }
}

int main()
{

    int why;

    mt.num=0;
    thi:
    printf("Choose a number:\n");
    int* n=&mt.num;
    printf("\n(1)Add new contact");
    printf("\n(2)Search a contact \n");
    fflush(stdin);
    scanf("%d",&why);

    if(why==1)
    {
        add(n);
        printf("your information get successful \n\n");
        Sleep(2000);
        system("cls");
        goto thi;
    }

    else if(why==2)
    {
        system("cls");
        serch(n);
        printf("Search completed!!!!!!\n\n");
        Sleep(2000);
        system("cls");
        goto thi;
    }

    else{}

    return 0;
}
