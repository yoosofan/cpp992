#include <cstdio>
#include <cstdlib>
#include <cstring>
struct info
{
    char phone[15];
    char name[20];
    char family[20];

};

int main()
{
    int x;
    Start:
    printf(" Please Enter your Request\n\n");
    printf("1- Enter Info of New contact\n");
    printf("2- Search contact\n");
    fflush(stdin);
    scanf("%d",&x);
    if(x==1)
        {
    int q;
    int t;
    int number;

   FILE* num= fopen ("Number.txt", "r");
        if(num!= NULL)
        {
            fscanf(num, "%d", &q);
            fclose(num);

        }
        else
        {
            q=0;
        }
    printf("how many contact you want to add\n");
    fflush(stdin);
    scanf("%d",&t);
    number= q+ t;
    num= fopen ("Number.txt", "w");
    fprintf(num, "%d", number);
    fclose(num);

    fflush(stdin);

    info contact[100];
    FILE *fp= fopen("phone notebook.txt","rb");
    if (fp!= NULL)
    {
        if(q!= 0)
        {
            fread(contact, sizeof(info), q, fp);
        }
        fclose(fp);
    }
    int i;
    int er=1;
    for(i=q; i<number; i++)
    {
        man:
        fflush(stdin);
        printf("\nEnter The phone number Of Your %d contact:\t\n",er);
        scanf("%s",contact[i].phone);
         int ew;
        for(ew= 0; ew< i; ew++)
        {
            int m=strcmp(contact[i].phone,contact[ew].phone);
            if(m==0)
            {
                    printf("\n********************\n");
                    printf("\nthis phone number has been used before \n");
                    printf("\nPlease enter anouther phone number\n");
                    printf("\n********************\n");
                    goto man;
            }
        }
        fflush(stdin);
        printf("\nEnter The first Name Of Your %d student:\t\n",er);
        scanf("%s",contact[i].name);
        fflush(stdin);
        printf("\nEnter The last Name Of Your %d student:\t\n",er);
        scanf("%s",contact[i].family);
        fflush(stdin);
        er++;
    }
    fp=fopen("phone notebook.txt","wb");
    fwrite(contact,sizeof(info),number,fp);
    fclose(fp);
    system("cls");
    printf("\nyour information has been successfuly gotten\n");
    goto Start;
        }
        else if(x=2)
        {
    int q;
    system("cls");
    info contact[100];
   FILE* num= fopen ("Number.txt", "r");
        if(num!= NULL)
        {
            fscanf(num, "%d", &q);
            fclose(num);

        }
        else
        {
            q= 0;
            printf("\n\aThere is no Contact yet\n");

        }
    char rname[20];
    FILE *fp;
    fp=fopen("phone notebook.txt","rb");
    printf("Enter Your  name To Search For\n");
    fflush(stdin);
    scanf("%s",rname);
    fread(contact,sizeof(info),q,fp);
    for(int i=0;i<q;i++)
        {

            int n=strcmp(contact[i].name,rname);
            if(n==0)
            {
                printf("\nWanted first NAME Is = %s",contact[i].name);
                printf("\nWanted last NAME Is = %s",contact[i].family);
                printf("\nWanted phone number Is = %s",contact[i].phone);
            }
        }
        fclose(fp);

    }
    return 0;
}
