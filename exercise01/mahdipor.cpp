// Developed By Ali Mehdipour
#include <cstdio>
#include <cstdlib>
#include <cstring>

#define PhoneBookSize 100
#define StringsSize 20
//------------------Initialize The Structures and methods

struct Student{
  char name[StringsSize];
  char family[StringsSize];
  char number[StringsSize];
};

// Array &Quantity Struct For Persons.
struct PhoneBook{
  Student ArInformations[PhoneBookSize];
  unsigned int quantity;
};

// This Method Add Students to Array.
void StudentAdder(void);

// This Method Displays Current Students Line By Line.
void ListingContacts(void);

// This Method Searches Names From All Of the List And Display Student
// Information If he Exists.
void SearchingContacts(void);

// This Statement Makes A NEW PhoneBook.We can Make infinite PhoneBook because its a data type that structure with 2 properties.
PhoneBook MyPhoneBook;
// END------------------Initialize The Structures and methods

// Start----------------The Program start from here
int main() {
  printf("-------STUDENTS PHONEBOOK v1.0 -------mehdipour\n");
  printf(" Please Enter Your Option From Menu : \n");
  printf(" 1- Contact List : \n");
  printf(" 2- Add Contacts : \n");
  printf(" 3- Search Contacts : \n");
  printf(" 4- EXIT : \n");
  //-----------------------------------------------
  char c1;
  scanf("%c", &c1);
  switch (c1) {
    case '1':
      ListingContacts();
      break;
    case '2':
      StudentAdder();
      break;
    case '3':
      SearchingContacts();
      break;
    case '4':
      printf("GoodBye");
      return 0;
      break;
    default:
      printf("invalid value\n");
      main();
  }

  //--------------------------END main()
}
// This Function ADD new people to the list by means of quantity and array
// properties
void StudentAdder() {
  printf("-----------ADD CONTACTS---------");
  printf("\nCurrent PhoneBook Quantity: %d", MyPhoneBook.quantity);
  char name[StringsSize];
  char lastname[StringsSize];
  char telephone[StringsSize];
  printf("\nEnter Student Name:\t\t");
  scanf("%19s", name);
  printf("\nEnter Student LastName:\t\t    ");
  scanf("%19s", lastname);
  printf("\nEnter Student PhoneNumber: ");
  scanf("%19s", telephone);

  for (int i = 0; i < StringsSize; i++) {
    MyPhoneBook.ArInformations[MyPhoneBook.quantity].name[i] = name[i];  // wrong
    MyPhoneBook.ArInformations[MyPhoneBook.quantity].family[i] = lastname[i];
    MyPhoneBook.ArInformations[MyPhoneBook.quantity].number[i] = telephone[i];
  }

  printf("Contact Added Successfully\n");
  MyPhoneBook.quantity += 1;
  printf("1-ADD new One?\t 2-Menu");
  char c1;
  scanf("%c", &c1);
  switch (c1) {
    case '1':
      StudentAdder();
      break;
    case '2':
      main();
      break;
    default:
      StudentAdder();
  }
}
// this function display contacts and their information.
void ListingContacts() {
  if (MyPhoneBook.quantity > 0) {
    printf("Current PhoneBook Quantity is: %d\n", MyPhoneBook.quantity);
    printf("NAME\t\t       LASTNAME\t         TELEPHONENUMBER      \n");
    printf("============================================================\n")
    printf("%d", MyPhoneBook.quantity);
    for (int i = 0; i < MyPhoneBook.quantity; i++) {
      printf("%d- %-20s", i + 1, MyPhoneBook.ArInformations[i].name);
      printf("%-20s", MyPhoneBook.ArInformations[i].family);
      printf("%s\n\n", MyPhoneBook.ArInformations[i].number);
    }

    printf("1-ADD New Member?\t\t 2-Menu\n");
    char c1;
    scanf("%c", &c1);
    switch (c1){
      case '1':
        StudentAdder();
        break;
      case '2':
        main();
        break;
      default:
        ListingContacts();
    }
  } else {
    printf(
        "There is not any Contacts in this PhoneBook yet ! Want ADD new "
        "One?\n\n");
    printf("1-ADD\t\t 2-Menu\n");
    char c1;
    scanf("%c", &c1);
    switch (c1) {
      case '1':
        StudentAdder();
        break;
      case '2':
        main();
        break;
      default:
        ListingContacts();
    }
  }
}
// this function search for contacts by their name and show the result with all
// of informations about that person
void SearchingContacts() {
  printf("-------SEARCHING------\n");
  printf("Current PhoneBook Quantity is: %d\n", MyPhoneBook.quantity);
  if (MyPhoneBook.quantity != 0) {
    printf("Please Enter Contact Name:\t");
    char SearchName[StringsSize];
    scanf("%s", SearchName);
    int notfound = 0;
    for (int i = 0; i < MyPhoneBook.quantity; i++) {
      if (strcmp(SearchName, MyPhoneBook.ArInformations[i].name) == 0) {
        printf("!!! FOUNDED !!! \n");
        printf("Name:%s\t LastName:%s\t Telephone Number:%s\n",
               MyPhoneBook.ArInformations[i].name,
               MyPhoneBook.ArInformations[i].family,
               MyPhoneBook.ArInformations[i].number);
        break;
      }
      //--------------
      else {
        notfound += 1;
      }
    }

    if (notfound == MyPhoneBook.quantity) {
      printf("!!!! NOT FOUND !!!!\n");
    }

    printf("1-Again\t 2-Menu\n");
    scanf("%c", &c1);
    switch (c1) {
      case '1':
        SearchingContacts();
        break;
      case '2':
        main();
        break;
      default:
        SearchingContacts();
    }
  } else {
    printf(
        "There is Not Any Data In this PhoneBook!!\n1-ADD someone?\t 2-Menu\n");
    scanf("%c", &c1);
    switch (c1) {
      case '1':
        StudentAdder();
        break;
      case '2':
        main();
        break;
      default:
        SearchingContacts();
    }
  }
}
