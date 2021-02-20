#include<cstdio>
#include<cstdlib>
#include<cstring>
struct attributes
{
    char firstname[20];
    char lastname[20];
    char number[20];
};
struct contacts
{
    attributes arr[100];
    int numofcontacts;
};
contacts cont;

void search_c();
void add_c();
int showMenu(void);

int main()
{

    char choice;
    do
    {
        choice = showMenu();
        switch(choice)
        {
        case '1':
            add_c();
            break;
        case '2':
            search_c();
            break;
        case '3':
            exit(0);
            break;
        default:
            break;
        }
        printf("Do you want to continue?\n");
        printf("Press y or Y for yes...\n");
        printf("Press n or N for no...\n");
        printf("Press c or C for clearing the screen...\n");
        scanf(" %c",&choice);
        if(choice=='c' || choice=='C')
        {
            system("cls");
        }

    }while(choice !='n' && choice !='N');

}

int showMenu(void){
  int choice;
  printf("1.Add Contact\t");
  printf("2.Search Contact\t");
  printf("3.Exit\n");
  scanf("%d", &choice);
  return choice;
}
void add_c()
{
    int numofc;
    printf("Enter the number of Contacts you want to add:\n");
    scanf("%d",&numofc);
    cont.numofcontacts=cont.numofcontacts+numofc;
    static int i=0;
    int k=i;
    for(i;i<numofc+k;i++)
    {
        printf("First Name:\n");
        scanf("%s",cont.arr[i].firstname);

        printf("Last Name:\n");
        scanf("%s",cont.arr[i].lastname);

        printf("Phone Number:\n");
        scanf("%s",cont.arr[i].number);
    }
    for(int j=0;j<cont.numofcontacts;j++)
    {
        printf("%s\t",cont.arr[j].firstname);
        printf("%s\t",cont.arr[j].lastname);
        printf("%s\n",cont.arr[j].number);
    }
    printf("%d Contact(s)\n",cont.numofcontacts);
}
void search_c()
{
    char tempfname[20];
    char templname[20];
    printf("Enter the first name of the Contact:\n");
    scanf("%s",tempfname);
    printf("Enter the last name of the Contact:\n");
    scanf("%s",templname);
    int result=0;
    for(int i=0;i<cont.numofcontacts;i++)
    {
        if((strcmp(cont.arr[i].firstname,tempfname)==0) && (strcmp(cont.arr[i].lastname,templname)==0))
        {
            printf("%s\n",cont.arr[i].number);
            result++;
        }
    }
    if(result==0)
    {
        printf("%d\n",result);
    }
}


