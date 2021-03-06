#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <conio.h>
using namespace std;
struct point{
float x;
float y;
};
struct triangle{
point one;
point two;
point three;
};
void menu(void);
float distanceab(point a,point b);
float distancea0(point a);
float angle(point a);
void printpoint(point a);
void printdistancea0(void);
void printdistanceab(void);
void printangle(void);
point enterpoint(void);
triangle entertri(void);
void printmohit(void);
void printmasahat(void);
void printenteghal(void);
float mohit(triangle a);
float masahat(triangle a);
triangle enteghal(triangle a);
void printtri(triangle a);

int main()
{
    menu();
}
void menu(){
    int counter=1;
    while(counter){
    cout<<"Please enter a number"<<endl;
    cout<<"1-distance between a & b"<<endl;
    cout<<"2-distance from the origin"<<endl;
    cout<<"3-angle from the origin"<<endl;
    cout<<"4-mohit"<<endl;
    cout<<"5-masahat"<<endl;
    cout<<"6-enteghal"<<endl;
    int a;
    cin>>a;
    switch(a){
    case 1:
        printdistanceab();
        break;
    case 2:
        printdistancea0();
        break;
    case 3:
        printangle();
        break;
    case 4:
        printmohit();
        break;
    case 5:
        printmasahat();
        break;
    case 6:
        printenteghal();
        break;
    default:
        cout<<"Please enter number between 1-6"<<endl;
        cout<<"Press any key to continue"<<endl;
        getch();
    }
    }
}
struct point enterpoint(){
    point a;
    cout<<"Please enter x"<<endl;
    cin>>a.x;
    cout<<"Please enter y"<<endl;
    cin>>a.y;
    return a;
}

void printdistanceab(){
    cout<<"point a:"<<endl;
    point a=enterpoint();
    cout<<"point b:"<<endl;
    point b=enterpoint();
    cout<<"The distance is:"<<distanceab(a,b)<<endl;
}
float distanceab(point a,point b){
    return sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2));
}
void printdistancea0(){
    point a=enterpoint();
    cout << "The distance from (0,0) is:" << distancea0(a) << endl;
}
float distancea0(point a){
    return sqrt(pow(a.x,2)+pow(a.y,2));
}
void printangle(){
    point a=enterpoint();
    cout<<"The angle is:"<<angle(a)<<endl;
}
float angle(point a){
    return atan(a.y/a.x);
}
void printpoint(struct point a){
    cout<<"the x:"<<a.x<<endl;
    cout<<"the y:"<<a.y<<endl;
}
triangle entertri(){
    triangle n;
    int m=1;
    while(m){
      cout<<"enter the first point"<<endl;
      n.one=enterpoint();
      cout<<"enter the second point"<<endl;
      n.two=enterpoint();
      cout<<"enter the third point"<<endl;
      n.three=enterpoint();
      float a=distanceab(n.one,n.two);
      float b=distanceab(n.two,n.three);
      float c=distanceab(n.one,n.three);
      if(a+b>c && b+c>a && a+c>b){
         m=0;
      }
    }
    return n;
}
void printtri(triangle a){
    cout<<"The first point:"<<endl;
    printpoint(a.one);
    cout<<"The second point:"<<endl;
    printpoint(a.two);
    cout<<"The third point:"<<endl;
    printpoint(a.three);
}
float mohit(triangle a){
    float x=distanceab(a.one,a.two);
    float y=distanceab(a.two,a.three);
    float z=distanceab(a.three,a.one);
    return x+y+z;
}
void printmohit(){
    triangle a=entertri();
    cout<<"The mohit is"<<mohit(a)<<endl;
}
float masahat(triangle a){
    float p=0.5*mohit(a);
    return sqrt(p*(p-distanceab(a.one,a.two))*(p-distanceab(a.two,a.three))*(p-distanceab(a.one,a.three)));
}
void printmasahat(){
    triangle a=entertri();
    cout<<"The masahat is"<<masahat(a)<<endl;
}
triangle enteghal(triangle a,int dx,int dy){
    triangle b;
    b.one.x= a.one.x+dx;
    b.one.y= a.one.y+dy;
    b.two.x= a.two.x+dx;
    b.two.y= a.two.y+dy;
    b.three.x= a.three.x+dx;
    b.three.y= a.three.y+dy;
    return b;
}
void printenteghal(){
    triangle a=entertri();
    int dx;
    int dy;
    cout<<"please enter dx"<<endl;
    cin>>dx;
    cout<<"please enter dy"<<endl;
    cin>>dy;
    cout<<"The location of points of moved triangle is:"<<endl;
    printtri(enteghal(a,dx,dy));
}
