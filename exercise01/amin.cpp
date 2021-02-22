#include<cstdio>
#include<cstring>
// #include<conio.h>

struct page{
    int flag;
    char name[50];
    char family_name[50];
    char phone_number[50];
};

void start(void);
void add(struct page phonebook[]);
void remove(struct page phonebook[]);
void search(struct page phonebook[]);
  
int main()
{
    struct page phonebook[100];
    int i=0,n=1;
    for (;i<100;i++) phonebook[i].flag=0;

    while (n!=0){
        start();
        scanf("%d",&n);
        if (n==1) add(phonebook);
        else if (n==2) remove(phonebook);
        else if (n==3) search(phonebook);
    }

    return 0;
}

void start(void){
    printf("What do you want to do ?\n");
    printf("    1.add\n");
    printf("    2.remove\n");
    printf("    3.search\n");
    printf("    0.exit\n");
}

void add(struct page phonebook[]){
    struct page tmp;

    tmp.flag=1;

    printf("name : ");
    scanf("%s", tmp.name);

    printf("family_name : ");
    scanf("%s", tmp.family_name);

    printf("phone_number : ");
    scanf("%s", tmp.phone_number);

    int i;
    for (i=0;i<100;i++)
        if (phonebook[i].flag==0){
            phonebook[i]=tmp;
            break;
        }
}
void remove(struct page phonebook[]){
    char tmp[50];

    printf("Enter phone number or name : ");
    scanf("%s",&tmp);

    int i;
    for (i=0;i<100;i++)
        if (phonebook[i].flag==1 && (0==strcmp(tmp,phonebook[i].name) || 0==strcmp(tmp,phonebook[i].family_name) || 0==strcmp(tmp,phonebook[i].phone_number))){
            phonebook[i].flag=0;
            break;
        }
}
void search(struct page phonebook[]){
    char tmp[50];

    printf("Enter phone number or name : ");
    scanf("%s",&tmp);

    int i;
    for (i=0;i<100;i++){
        if (phonebook[i].flag==1 && (0==strcmp(tmp,phonebook[i].name) || 0==strcmp(tmp,phonebook[i].family_name))){
                printf("%s\n",phonebook[i].phone_number);
                break;
        }else if (phonebook[i].flag==1 && 0==strcmp(tmp,phonebook[i].phone_number)){
            printf("%s %s\n",phonebook[i].name,phonebook[i].family_name);
            break;
        }
    }
    if (i==100) printf("NOT FOUND\n");
}
