#include <cstdio>
#include <cstring>
#include <cstdlib>

void searchph(void);
void extra(void);
void menu(void);

struct Phone
{
    char name[20];
    char family[20];
    int number;
};

struct Phone people[100];

int main()
{
    menu();
    return 0;
}

void menu(void)
{
    int a;
    printf("1_add phone number\n2_search phone number\n");
    printf("which one menu:");
    scanf("%d",&a);
    switch(a)
    {
      case 1:
        extra();
        break;
      case 2:
        searchph();
        break;
    }
}

void extra(void){
    int b,i,s;
    printf("how much phone number:");
    scanf("\n%d",&b);
    for( i=0 ; i<b ; i++){
        printf("enter name:");
        scanf("%s",people[i].name);
        printf("enter family:");
        scanf("%s",people[i].family);
        printf("enter phone number:");
        scanf("%d",&people[i].number);
        printf("information saved\n");
    }
    menu();
}
void searchph(void){
    int j,n;
    printf("enter phone number for search:");
    scanf("%d",&j);
    for( n=0 ; n<100 ; n++)
    {
        if( j==people[n].number)
        {
            printf("name=%s\n",people[n].name);
            printf("family=%s",people[n].family);
        }
    }
}
