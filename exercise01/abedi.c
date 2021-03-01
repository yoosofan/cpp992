#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <conio.h>

typedef struct
{
    char first[20];
    char last[20];
    char num[20];

}info;

struct book
{
    info m[100];
    int n;
}con;

void menu(int* d);

void sch(int* d)
{
    int j= 0;
    char input[20];
    char b;
    printf("Search by which one??? :\n");
    printf("1) Phone - number\n");
    printf("2) First name\n");
    printf("3) Last name\n");
    char a= getch();
    switch(a)
    {
    case '1':
        printf("Enter phone - number:\n");
        fflush(stdin);
        gets(input);
        for(int i= 0; i< (*d); i++)
        {
            if(strcmp(input, con.m[i].num)== 0)
            {
                printf("Phone-number : %s\n", input);
                printf("First name : %s\n", con.m[i].first);
                printf("last name : %s\n", con.m[i].last);
                printf("Search operation has been completed.\n");
                printf("Press (1) to search another contact or any else to return to menu");
                j++;
            }
        }
        if(j== 0)
            printf("0\n");
        printf("Search operation has been completed.\n");
        printf("Press (1) to search another contact or any else to return to menu");
        b= getch();
        switch(b)
        {
        case '1':
            system("cls");
            sch(d);

        default:
            system("cls");
            menu(d);
        }

    case '2':
        printf("Enter first name:\n");
        fflush(stdin);
        gets(input);
        for(int i= 0; i< (*d); i++)
        {
            if(strcmp(input, con.m[i].first)== 0)
            {
                printf("Phone-number : %s\n", con.m[i].num);
                printf("First name : %s\n", input);
                printf("last name : %s\n", con.m[i].last);
                j++;
                printf("**************************\n");
            }
        }
        if(j== 0)
            printf("0\n");
        printf("Search operation has been completed.\n");
        printf("Press (1) to search another contact or any else to return to menu");
        fflush(stdin);
        b= getch();
        switch(b)
        {
        case '1':
            system("cls");
            sch(d);

        default:
            system("cls");
            menu(d);
        }

    case '3':
        printf("Enter last name:\n");
        fflush(stdin);
        gets(input);
        for(int i= 0; i< (*d); i++)
        {
            if(strcmp(input, con.m[i].last)== 0)
            {
                printf("Phone - number : %s\n", con.m[i].num);
                printf("First name : %s\n", con.m[i].first);
                printf("last name : %s\n", input);
                j++;
                printf("**************************\n");
            }
        }
        if(j== 0)
            printf("0\n");
        printf("Search operation has been completed.\n");
        printf("Press (1) to search another contact or any else to return to menu");
        b= getch();
        switch(b)
        {
        case '1':
            system("cls");
            sch(d);

        default:
            system("cls");
            menu(d);
        }
    }
}

void enter(int* j)
{

    printf("Contact no: %d\n", (*j)+1);
    printf("Enter phone-number:\n");
    lam:
    fflush(stdin);
    scanf("%s", &con.m[*j].num);
    for(int i= 0; i<(*j); i++)
    {
        if(strcmp(con.m[*j].num, con.m[i].num)== 0)
        {
            printf("This number has already been entered\nEnter another one:\n");
            goto lam;
        }
    }
    printf("Enter first name:\n");
    fflush(stdin);
    scanf("%s", &con.m[*j].first);
    printf("Enter last name:\n");
    fflush(stdin);
    scanf("%s", &con.m[*j].last);
    (*j)++;
    printf("The contact has been saved.\n");
    printf("Press (1) to add a new contact or any else to return to menu");
    char a= getch();
    switch(a)
    {
    case '1':
        system("cls");
        enter(j);

    default:
        system("cls");
        menu(j);
    }
}



void menu(int* d)
{
    printf("Please select an option:\n");
    printf("1) Enter a new contact\n");
    printf("2) Search a contact\n");
    printf("3) Log out\n");
    char a;
    a= getch();
    switch(a)
    {
    case '1':
        system("cls");
        enter(d);

    case '2':
        system("cls");
        sch(d);

    case '3':
        exit(1);

    default:
        printf("Invalid Input, enter another one\n");
        Sleep(1000);
        system("cls");
        menu(d);
    }
}


int main()
{
    con.n=0;
    int* p= &con.n;
    menu(p);
    return 0;
}
