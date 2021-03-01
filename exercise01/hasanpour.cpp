#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
struct information
{
    char firstName[20];
    char lastName[20];
    char phoneNum[12];

}info;

void Search(void);
void add(void);

struct infoArr
{
     information arr[100];
     int t;

}infoArr;

int main()
{
    //printf("1-Adding new person number\n2-Search a telephone number\n");
    cout << "1-Adding new person number\n2-Search a telephone number\n";
    int num;
    cin >> num;
    switch(num){
    case 1:
        add();
        break;
    case 2:
        Searchs();
        break;
    default:
        cout << "Enter a valid number!";
        break;
    }
    return 0;
}

void add()
{
    int i;
    cout << "How many people do u want to add?\n";
    scanf("%d" ,&infoArr.t);
    int t=infoArr.t;
    for(i=1 ; i<=infoArr.t ; i++)
    {
        printf("Enter firstName,lastName and telephoneNumber :\n");
        scanf("%s %s %s",&infoArr.arr[100].firstName,&infoArr.arr[100].lastName,&infoArr.arr[100].phoneNum);
        --t;
        infoArr.t=t;
    }

    printf("\n--------------------------------\n");
    main();
}


void Searchs()
{
    char lname[20];
    int i;
    printf("\nEnter lastName:\n");
    scanf("%s" ,&lname);
    for(i=0 ; i<=100 ; i++)
    {
        int x= strcmp(infoArr.arr[i].lastName,lname);
        if(x == 1 || x == 0){
            printf("Name: %s\nLastname: %s\nPhoneNum: %s", infoArr.arr[100].firstName,infoArr.arr[100].lastName, infoArr.arr[100].phoneNum);

            }
    }
    printf("\n--------------------------------\n");
    main();
}
