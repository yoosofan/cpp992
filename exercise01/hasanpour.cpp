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
    int num = 1;
    while( num != 0){
      //printf("1-Adding new person number\n2-Search a telephone number\n");
      cout << "1-Adding new person number\n2-Search a telephone number\n";
      cout << "0 - exit\n";

      cin >> num;
      switch(num){
      case 1:
          add();
          break;
      case 2:
          Search();
          break;
      case 0:
        cout << "End\n";
        break;
      default:
          cout << "Enter a valid number!";
          break;
      }
    }
    return 0;
}

void add(void)
{
    int i;
    cout << "How many people do u want to add?\n";
    cin >> infoArr.t;
    int t = infoArr.t;
    for(i=1 ; i<=infoArr.t ; i++)
    {
        cout << "Enter firstName :\n";
        cin >> infoArr.arr[100].firstName;
        cout << "lastName ";
        cin >> infoArr.arr[100].lastName;
        cout << "telephoneNumber " ;
        cin >> infoArr.arr[100].phoneNum;
        --t;
        infoArr.t=t;
    }

    cout << "\n--------------------------------\n";
    // main();
}


void Search(void)
{
    char lname[20];
    int i;
    cout << "\nEnter lastName:\n";
    cin >> lname;
    for(i=0 ; i<=100 ; i++)
    {
        int x= strcmp(infoArr.arr[i].lastName,lname);
        if(x == 1 || x == 0){
            cout << "Name:";
            cout << infoArr.arr[100].firstName;
            cout << "\tlast name: ";
            cout << infoArr.arr[100].lastName;
            cout << "\tphone number: ";
            cout << infoArr.arr[100].phoneNum;

            }
    }
    cout << "\n--------------------------------\n";
    // main();
}
