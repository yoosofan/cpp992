#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct info
{
    char name[20];
    char famil[20];
    char phone[20];


};
struct note
{
    struct info book[100];
    int count ;


};
 struct note stru ;

int main()
{


    getphone();

    serch();


    return 0;
}
void getphone()
{
    printf("enter the number of phonenumber you want save : ");
    scanf("%d" , &stru.count);
    for(int i = 0 ; i<stru.count ; i++)
    {
        printf("name : ");
        scanf("%s" , stru.book[i].name);
         printf("famil : ");
        scanf("%s" , stru.book[i].famil);
         printf("phone : ");
        scanf("%s" , stru.book[i].phone);



    }



}
void serch()
{

    char find[20];
    int d ;
    printf("enter the famil you want to search  : ");
    scanf("%s" , &find);

    for(int i = 0 ; i<stru.count ; i++)
    {
      d = strcmp(find , stru.book[i].famil ) ;
      if(d==0)
      {
        printf("%s", stru.book[i].phone);
        break ;
        }
     if((d!= 0)&&(i==stru.count-1))
        printf("0");

    }




}
