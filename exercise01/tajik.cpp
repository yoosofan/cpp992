#include <cstdio>
#include <cconio>
#include <cstring>

const int MAX = 100;

int current = 0 ;

struct contact{
    char name[20];
    char lastname[20];
    char number[20];
} contacts[MAX];

void addContact();
void delContact();
void showContact();

int main(){
    int choice;
    while (1){
        printf("0- Exit\n1- Add Contact\n2- Show Contact\n3- Delete Contact\n");
        scanf("%d",&choice);
        if (choice == 0)
        {
            break;
        }
        else if (choice == 1)
        {
            addContact();
        }
        else if (choice == 2)
        {
            showContact();
        }
        else if (choice == 3)
        {
            delContact();
        }
    }
    
    return 1;
}
void addContact(){
    printf("\n--------------------------\n");
    printf("Add Contact\n") ;
    printf("Enter Name: ");
    scanf("%s",contacts[current].name);
    printf("Enter LastName: ");
    scanf("%s",contacts[current].lastname);
    printf("Enter Number: ");
    scanf("%s",contacts[current].number);
    current++;
    printf("--------------------------\n\n");
}

void showContact(){
    char n[20],l[20] ;
    printf("\n--------------------------\n");
    printf("Show Contact\n");
    printf("Enter Name: ");
    scanf("%s",n);
    printf("Enter LastName: ");
    scanf("%s",l);
    int j = 1 ;
    for (int i = 0; i < current; i++)
    {
        if ((strcmp(contacts[i].name,n)==0) && (strcmp(contacts[i].lastname,l)==0))
        {
            j = 0 ;
            printf("    Phone Number: %s\n",contacts[i].number);
            break ;
        }
    }
    if (j)
    {
        printf("    Not Found\n");
    }
    printf("--------------------------\n\n");
}

void delContact(){
    char n[20],l[20] ;
    printf("\n--------------------------\n");
    printf("Delete Contact\n");
    printf("Enter Name: ");
    scanf("%s",n);
    printf("Enter LastName: ");
    scanf("%s",l);
    for (int i = 0; i < current; i++)
    {
        if ((strcmp(contacts[i].name,n)==0) && (strcmp(contacts[i].lastname,l)==0))
        {
            strcpy(contacts[i].name,contacts[current].name);
            strcpy(contacts[i].lastname,contacts[current].lastname);
            strcpy(contacts[i].number,contacts[current].number);
            contacts[current].name[0] = '\0';
            contacts[current].lastname[0] = '\0';
            contacts[current].number[0] = '\0';
            current --;
            printf("    Contact Deleted\n");
            break;
        }
    }
    printf("--------------------------\n\n");
}
