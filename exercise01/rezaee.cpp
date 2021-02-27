#include <cstdio>
#include <cstring>

struct Phonebook
{
    char Name[50];
    char LastName[50];
    char Numbeer[20];

} Persons[100], new_phone;

static int global_index = 0;

void Add();
int Search ();
void View_phonebook();

int main()
{
    int input = 0; 
    printf("Welcome\n");  
    while (1)
    {
        printf("\n1 - Add Number\n");
        printf("2 - Search by lastname\n");
        printf("3 - View phonebook\n");

        printf("\ninput : ");
        scanf("%d", &input);

        switch (input)
        {
            case 1:
                Add();
                break;
            case 2:
                Search();
                break;
            case 3:
                View_phonebook();
                break;
            default:
                printf("\ninput is wrong !!   try again.\n");
                break;
        }
    }
    return 0;
}


void Add()
{
    
    printf("\ninput Name : ");
    scanf(" %s",new_phone.Name);
    
    printf("input LastName : ");
    scanf(" %s",new_phone.LastName);

    printf("input Number : ");
    scanf(" %s",new_phone.Numbeer);

    Persons[global_index] = new_phone;
    global_index ++;
    
    printf("\nAdd successful.\n");

}
int Search ()
{
    char input[50] ;

    printf("input Lastname to serch : ");
    scanf("%s",input);

    for (int i = 0; i < global_index; i++)
    {
        if (strcmp( Persons[i].LastName , input) == 0){

            printf("\nNumber : %s\n",Persons[i].Numbeer);
            return 1;
        }
    }

    printf("\nuser not find !!\n");
    return 0;
}
void View_phonebook()
{
    for (int i = 0; i < global_index; i++)
    {
        printf("\n------------------------------------\n");
        printf("Name = %s\t",Persons[i].Name);
        printf("Name = %s\t",Persons[i].LastName);
        printf("Name = %s\t",Persons[i].Numbeer);
        printf("\n------------------------------------\n");
    }
    

}




