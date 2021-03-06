#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void addition ();
void search ();
struct person
{
   char fname[20];
   char lname[20];
   char phonenum[20];

};
struct info
{
    struct person arr[100];
   int count;
}inf;
int main()
{
    int x;
    printf("please enter number of contant :");
    scanf("%d",&x);
    addition ();
    search ();

}
void addition ()
{
    int j,i;
    printf("\nHow many contant do want to add ???:");
    scanf("%d",&i);

    for( j=1; j<=i ;j++)
    {
      printf("\nPlease enter first name :");
      scanf("%s",inf.arr[100].fname);
      printf("\nplease enter last name:");
      scanf("%s",inf.arr[100].lname);
      printf("\nplease enter a phone number :");
      scanf("%s",inf.arr[100].phonenum);

      printf("\n\nNext contant:\n");

   }
   printf("\nNew contant added !!!!\n");


}
void search ()
{
    char lnam[20];
    printf("\n\nTo search number please enter a last name : ");
    scanf("%s",lnam);
    for (int i=1;i<=100;i++)
    {
        int x=strcmp(inf.arr[i].lname,lnam);
        if(x==1 ||x==0)
        {
            printf("information of person :\n");
            printf("last name is :%s\n",inf.arr[100].lname);
            printf("first name is :%s\n",inf.arr[100].fname);
            printf("phone number is :%s\n",inf.arr[100].phonenum);
        }



    }



}
