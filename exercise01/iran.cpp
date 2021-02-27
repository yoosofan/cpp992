#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contacts
{
    char firstname[20];
    char lastname[20];
    char phonenumber[11];
};

struct contacts member[100] ;
FILE *co ;

int menu(void)
{
    int c ;
    system("cls");
    printf("1) add contact \n2) search contact\n3) list of contacts \n4) exit\n");
    printf("Enter your choice(1-4):");
    scanf("%d" , &c) ;
    if(c<1 || c>4)
    {
        printf("This choice is not exist");
    }
    else
        return(c);
}
int free_space(void)
{
    int t ;
    for(t = 0 ; t <= 100 ; t++ )
    {
        if(t == 100)
        {
            return -1 ;
        }
        else
            return t ;
    }
}
int add(void)
{
    int i ;
    system("cls");

    co = fopen ("contact" , "rb");
    if(!co)
    {
        printf("can not open this file");
    }
    co = fopen("contact" , "ab");
    for(;;){
    i = free_space();
    if(i == 100)
    {
        printf("list full") ;
        break;
    }
    printf("First name:") ;
    scanf("%s" , member[i].firstname);
    printf("Last name:") ;
    scanf("%s" , member[i].lastname);
    printf("Phone number:") ;
    scanf("%s" , member[i].phonenumber);
    fwrite( &member[i] , sizeof(struct contacts) , 1 , co);
    int m;
    printf("1.Back to menu \t 2.Continiue\n");
    scanf("%d" , &m);
    if(m == 1)
    {
        main();
        break;
    }
    if(m == 2)
    {
        continue;
    }

}
fclose(co) ;

}
int search(void)
{
    int i ;
    int b = 0 ;
    char s[20] ;
    co = fopen("contact" , "rb") ;
    if(co == NULL )
    {
        printf("can not open this file") ;
    }
    system("cls");
    scanf("%s" , &s);
    i = strlen (s);
    while(fread(member , sizeof(member) , 1 , co) == 1)
    {
        for (int l=0 ; l <= i ; l++)
        {
            char name[20];
            name[l] = member[l].lastname;
            name[i]='\0';
            if(strcmp(name , member[l].lastname) == 0)
            {
                printf("Firstname:%s\nLastname:%s\nPhonenumber:%s\n" , member[l].firstname , member[l].lastname , member[l].phonenumber);
                b++ ;
            }
        }
    }
            if(b == 0)
        {
            printf("This contact is not exist");
        }
        fclose(co);
        int m ;
        printf("\n1.Back to menu \n");
        scanf("%d" , &m);
        if(m == 1)
            {
                main();
        }
}
int list(void)
{
    int b = 0 ;
    system("cls");
    int i = 65 ;
    for(int m = 0 ; m<=100 ; m++)
        {for(;i<=96 ; i++)
        {
            co=fopen("contact" , "rb");
    while(fread(member , sizeof(member),1 , co) == 1)
        {
            if(member[m].lastname[0]==i || member[m].lastname[0]==i+32)
            {
                printf("Firstname:%s\nLastname:%s\nPhone number:%s" , member[m].firstname , member[m].lastname , member[m].phonenumber);
                b++ ;
            }
        }

        fclose(co);

    }
    break ;

    }
            if( b == 0)
        {
            printf("========Empty========");
        }
        int f ;
            printf("\n1.Back to menu \n");
    scanf("%d" , &f);
    if(f == 1)
    {
        main();
    }
}
int main()
{
    int choice ;
    system("cls");
    choice = menu();
    switch(choice)
    {
        case 1 : add() ;
        break;
        case 2 : search();
        break;
        case 3 : list();
        break;
        case 4 : exit(0);
    }
}
